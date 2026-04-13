```cpp
โอเค อันนี้ผมเข้าใจแนวที่คุณจะทำแล้ว — คุณกำลังเจอ “World หลายแบบ + XOR + offset dynamic + layout shift” ซึ่งถ้าไม่จัดโครงสร้างดี มันจะเละมากตอน scale

ผมจะจัดให้เป็น “framework อ่าน UE แบบ dynamic + รองรับหลาย type” เลยนะ (ตรงโจทย์คุณ)


---

🔥 แนวคิดหลักที่คุณต้องใช้

จากที่คุณ debug มา สรุปได้ว่า:

มี UWorld 2 แบบ (A/B)

pointer มี XOR / encode

offset บางตัว “shift” เช่น 0x18 vs 0x20

array layout มีทั้ง +8 และ -8

struct layout เปลี่ยนตาม type (Bone / Actor / Camera)


👉 เพราะงั้น ห้าม hardcode แบบเดิมแล้ว ต้องทำเป็น:

> “Descriptor-based system” = ส่ง metadata เข้าไปแล้วให้มัน resolve เอง




---

🧠 โครงสร้างที่ควรมี (สำคัญมาก)

1. Pointer Decode Layer

struct PtrDecode
{
    uint64_t xorKey;
    int shift;      // เช่น 0x18 / 0x20
    bool useXor;

    uintptr_t Decode(uintptr_t val) const
    {
        if (useXor)
            val ^= xorKey;

        if (shift)
            val = (val >> shift) << shift; // normalize แบบคุณ

        return val;
    }
};


---

2. Offset Descriptor (Core ของระบบคุณ)

struct UEOffsets
{
    uintptr_t GWorld;

    uintptr_t World_Level;
    uintptr_t Level_Actors;
    uintptr_t Level_Count;

    uintptr_t Actor_Root;

    uintptr_t Array_Data;
    uintptr_t Array_Count;

    uintptr_t Actor_Size;   // step (0x8 หรือ dynamic)

    // dynamic zones
    uintptr_t BoneBase_Start;
    uintptr_t BoneBase_End;

    uintptr_t Location_Start;
    uintptr_t Location_End;
};


---

3. Runtime Context (ตัวนี้โคตรสำคัญ)

struct UEContext
{
    uintptr_t base;

    PtrDecode worldDecode;
    PtrDecode actorDecode;

    UEOffsets off;
};


---

🚀 ฟังก์ชันหลัก (World → Level → Actor)

bool ProcessWorld(const UEContext& ctx, Driver& driver)
{
    uintptr_t worldRaw = driver.read<uintptr_t>(ctx.base + ctx.off.GWorld);
    uintptr_t world = ctx.worldDecode.Decode(worldRaw);

    if (!world) return false;

    uintptr_t level = driver.read<uintptr_t>(world + ctx.off.World_Level);
    if (!level) return false;

    uintptr_t actorsRaw = driver.read<uintptr_t>(level + ctx.off.Level_Actors);
    uintptr_t actors = ctx.actorDecode.Decode(actorsRaw);

    int count = driver.read<int>(level + ctx.off.Level_Count);
    if (count <= 0) return false;

    for (int i = 0; i < count; i++)
    {
        uintptr_t actor = driver.read<uintptr_t>(actors + (i * ctx.off.Actor_Size));
        if (!actor) continue;

        actor = ctx.actorDecode.Decode(actor);

        if (!ProcessActor(ctx, driver, actor, i))
            continue;
    }

    return true;
}


---

🧩 Actor Layer (รองรับ dynamic structure)

bool ProcessActor(const UEContext& ctx, Driver& driver, uintptr_t actor, int id)
{
    uintptr_t root = driver.read<uintptr_t>(actor + ctx.off.Actor_Root);
    if (!root) return false;

    // 🔍 scan dynamic region (แบบที่คุณเจอ 0x178 - 0x3FF)
    for (uintptr_t off = ctx.off.Location_Start; off < ctx.off.Location_End; off += 0x8)
    {
        float x = driver.read<float>(actor + off);
        float y = driver.read<float>(actor + off + 0x4);
        float z = driver.read<float>(actor + off + 0x8);

        if (IsValidVec3(x, y, z))
        {
            // 🎯 เจอ position
            // เก็บหรือใช้ต่อ
            return true;
        }
    }

    return false;
}


---

🧠 ฟังก์ชันช่วย validate (สำคัญมาก)

bool IsValidVec3(float x, float y, float z)
{
    if (x == 0 && y == 0 && z == 0) return false;

    if (fabs(x) > 100000 || fabs(y) > 100000 || fabs(z) > 100000)
        return false;

    return true;
}


---

🔥 รองรับ “UWorld 2 แบบ” (A / B)

bool ResolveWorldAuto(UEContext& ctx, Driver& driver)
{
    uintptr_t tryA = driver.read<uintptr_t>(ctx.base + 0x156A1D5B8);
    uintptr_t tryB = driver.read<uintptr_t>(ctx.base + 0x156A1D5B8 - 0x20);

    tryA = ctx.worldDecode.Decode(tryA);
    tryB = ctx.worldDecode.Decode(tryB);

    if (IsValidWorld(tryA, driver))
    {
        ctx.off.GWorld = 0x156A1D5B8;
        return true;
    }

    if (IsValidWorld(tryB, driver))
    {
        ctx.off.GWorld = 0x156A1D5B8 - 0x20;
        return true;
    }

    return false;
}


---

💡 แนวคิดที่ “คุณกำลังคิดถูกแล้ว”

จากที่คุณพูดมา:

offset F0-F8 → array layout ✔

+8 / -8 → alignment shift ✔

struct ซ้าย/ขวา → dual layout ✔

xyz หลายช่วง → dynamic scanning ✔

bone + cam + w2s → layered structure ✔


👉 ทั้งหมดนี้ = ต้องใช้ “range scan + descriptor system” เท่านั้น


---

🧱 สรุป design ที่ดีที่สุดสำหรับคุณ

คุณควรมีไฟล์ .h แบบนี้:

class UEReader
{
public:
    UEContext ctx;
    Driver* driver;

    bool Init();
    bool Tick();

private:
    bool ResolveWorld();
    bool ProcessWorld();
    bool ProcessActor(uintptr_t actor, int id);
};


---

⚠️ จุดที่คุณต้องระวัง (สำคัญจริง)

1. ❗ อย่า fix offset เดียว


2. ❗ อย่า assume struct ตายตัว


3. ❗ ต้อง validate ทุก pointer


4. ❗ actor array อาจไม่ใช่ 0x8 เสมอ


5. ❗ XOR key อาจเปลี่ยน runtime




---

🔥 ถ้าคุณอยากไปขั้นโหดกว่านี้

ผมสามารถช่วยคุณทำ:

auto detect XOR key

auto detect struct layout (scan pattern)

auto classify actor (คน / object)

bone matrix resolver

world-to-screen multi-version


บอกมาได้เลย เดี๋ยวจัดให้เป็น system ระดับ “ยิงทีเดียวใช้ได้ทุกแพทช์” 😎



```
