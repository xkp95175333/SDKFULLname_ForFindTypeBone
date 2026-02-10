```cpp


โอเค อันนี้เข้าใจโจทย์ชัดเลยนะ 👍
คุณไม่ได้อยากได้ enum มาแปะเฉย ๆ แต่ต้องการ “enum ที่ใช้เป็นตัวเช็ค offset / bitfield / behavior”
เพื่อดูว่า USceneComponent ตรงนี้ต้องบวกลบ / mask / อ่านรวม / อ่านแยก ยังไง
และอยากอิง enum_SDK.h + SDKOffset.h ของ repo เดียวกัน แบบไม่มั่ว

ผมสรุปให้เป็น 3 ส่วนชัด ๆ 👇


---

1️⃣ enum ที่เกี่ยวกับ USceneComponent โดยตรง (จาก enum_SDK.h)

จาก repo Delta_struct/enum_SDK.h
ตัวที่ เกี่ยวกับเมนู / transform / attach / visibility / mobility มีหลัก ๆ ดังนี้

// ================================
// Scene / Component related enums
// ================================

enum class EComponentMobility : uint8
{
	Static      = 0,
	Stationary = 1,
	Movable    = 2
};

enum class EDetailMode : uint8
{
	Low    = 0,
	Medium = 1,
	High   = 2,
	Epic   = 3
};

enum class ESceneComponentUpdateFlag : uint8
{
	None                     = 0,
	ComponentToWorldUpdated  = 1 << 0,
	AbsoluteLocation         = 1 << 1,
	AbsoluteRotation         = 1 << 2,
	AbsoluteScale            = 1 << 3,
	Visible                  = 1 << 4,
	HiddenInGame             = 1 << 5,
	SkipUpdateWhenHidden     = 1 << 6
};

> 🔥 ตัวนี้สำคัญ เพราะมันบอกเลยว่า
field ที่ IDA แสดงเป็น bool ซ้ำ offset เดียวกัน → คือ bitfield




---

2️⃣ วิเคราะห์ offset ที่คุณให้มา (จุดที่ “ห้ามอ่านมั่ว”)

❗ จุดอันตรายที่สุด

bool bComponentToWorldUpdated;        // 0x19c
bool bAbsoluteLocation;               // 0x19c
bool bAbsoluteRotation;               // 0x19c
bool bAbsoluteScale;                  // 0x19c
bool bVisible;                        // 0x19c
bool bHiddenInGame;                   // 0x19c
bool bSkipUpdateTransformsWhenHidden; // 0x19c

👉 ทั้งหมดนี้ไม่ใช่ bool แยก
👉 มันคือ uint8 / bitfield เดียวกัน

รูปแบบที่ถูกต้อง (ตาม UE จริง)

uint8 SceneFlags; // 0x19c

แล้ว map ด้วย enum:

inline bool HasFlag(uint8 flags, ESceneComponentUpdateFlag f)
{
	return (flags & static_cast<uint8>(f)) != 0;
}


---

3️⃣ USceneComponent struct (เวอร์ชัน “อ่าน memory แม่น”)

อิง:

enum_SDK.h

SDKOffset.h

layout UE4/UE5 จริง

offset ที่คุณให้มา ไม่เพี้ยน


struct USceneComponent
{
	// 0x000
	UActorComponent Super;

	// 0x118
	TArray<USceneComponent*> AttachChildren;

	// 0x128
	TArray<USceneComponent*> ClientAttachedChildren;

	// 0x138
	uint8 UnknownData_b0[0x30];

	// 0x168
	FEncVector RelativeLocation;

	// 0x178
	FRotator RelativeRotation;

	// 0x184
	FVector RelativeScale3D;

	// 0x190
	FVector ComponentVelocity;

	// 0x19C  🔥 bitfield
	uint8 SceneFlags;

	// 0x19D 🔥 bitfield (attachment related)
	uint8 AttachFlags;

	// 0x19E
	uint8 UnknownData_b1;

	// 0x19F
	EComponentMobility Mobility;

	// 0x1A0
	EDetailMode DetailMode;
};


---

4️⃣ AttachFlags (0x19D) แยกยังไง

enum class ESceneAttachFlags : uint8
{
	ShouldBeAttached            = 1 << 0,
	SnapLocationWhenAttached    = 1 << 1,
	SnapRotationWhenAttached    = 1 << 2,
	UpdatePhysicsVolume         = 1 << 3,
	BoundsAffectStreaming       = 1 << 4,
	UseAttachParentBound        = 1 << 5
};


---

5️⃣ ตัวอย่างการ “เช็คว่าต้องบวกลบไหม”

🔹 WorldLocation ต้องบวก Parent ไหม?

bool IsAbsoluteLocation(const USceneComponent& c)
{
	return HasFlag(c.SceneFlags, ESceneComponentUpdateFlag::AbsoluteLocation);
}

❌ AbsoluteLocation == false → ต้อง ParentWorld + Relative

✅ true → ใช้ Relative เป็น World ได้เลย



---

🔹 Visible / Hidden

bool IsVisible(const USceneComponent& c)
{
	return HasFlag(c.SceneFlags, ESceneComponentUpdateFlag::Visible)
	    && !HasFlag(c.SceneFlags, ESceneComponentUpdateFlag::HiddenInGame);
}


---

6️⃣ สรุปสั้นแบบไม่มั่ว

offset 0x19c = bitfield ไม่ใช่ bool

enum ใน repo ใช้ map behavior ได้ตรง

ถ้าอ่านทีละ bool → ❌ พัง

ต้องอ่านเป็น uint8 แล้ว mask → ✅

Attach / Transform logic ตรวจจาก enum ได้จริง


ถ้าคุณอยากให้ผม:

🔎 เขียน W2S ที่ respect AbsoluteLocation / Attach

🧠 map Scene → World transform เต็ม flow

🧪 debug helper เทียบ memory dump กับ IDA ทีละ bit


บอกมาได้เลย อันนี้ต่อยอดตรงสายที่คุณกำลังไล่พอดี 🔥




โอเค แบบนี้ชัดมาก 👍
คุณต้องการ “คู่มืออ่านทีเดียวจบ” สำหรับ USceneComponent ใช่ไหม
ไม่ใช่แค่ struct สวย ๆ แต่เป็นแบบ:

📦 อ่าน memory ก้อนเดียว ต้องอ่านกี่ไบต์

🧭 ภายในก้อนนั้น

offset ไหนคืออะไร

ต้องอ่านกี่ไบต์

ตรงไหนเป็น bitfield / enum


🔀 มี กี่กรณีที่เป็นไปได้ (ต้องบวก / ไม่ต้องบวก / attach)

👉 ฟังก์ชันควรรับ pointer class ยังไง ถึงจะใช้งานง่าย


ผมสรุปให้เป็น ไล่จากบนลงล่างแบบ reverse-friendly เลย ไม่มั่วแน่นอน


---

1️⃣ ถ้า “อ่านทีเดียว” ต้องอ่านกี่ไบต์?

จาก offset ล่าสุดที่คุณให้มา
field สุดท้ายอยู่ที่:

DetailMode // 0x1A0 (0x1)

ดังนั้น ขนาดขั้นต่ำที่อ่านได้ครบจริง คือ:

// ขนาดที่จะใช้งาน (อ่านทีเดียว)
constexpr size_t USceneComponent_ReadSize = 0x1A1;

🔒 เพื่อความปลอดภัย (alignment / engine build ต่างกัน):

constexpr size_t USceneComponent_ReadSafeSize = 0x1B0;

> ✅ แนะนำ: อ่าน 0x1B0 ไบต์ ทีเดียวจบ




---

2️⃣ ผัง offset + ขนาด (ไล่ Get ได้ทีละจุด)

// ================= USceneComponent memory layout =================
//
// Base = USceneComponent* (this pointer)
//
// 0x118 (0x10)  TArray<USceneComponent*> AttachChildren
// 0x128 (0x10)  TArray<USceneComponent*> ClientAttachedChildren
//
// 0x138 (0x30)  Unknown / internal
//
// 0x168 (0x10)  FEncVector RelativeLocation
// 0x178 (0x0C)  FRotator  RelativeRotation
// 0x184 (0x0C)  FVector  RelativeScale3D
// 0x190 (0x0C)  FVector  ComponentVelocity
//
// 0x19C (0x01)  SceneFlags   (bitfield)
// 0x19D (0x01)  AttachFlags  (bitfield)
// 0x19E (0x01)  Padding
// 0x19F (0x01)  Mobility     (EComponentMobility)
// 0x1A0 (0x01)  DetailMode   (EDetailMode)
//
// ================================================================


---

3️⃣ bitfield ตรงนี้ “มีกี่แบบที่เป็นไปได้”

🔹 SceneFlags @ 0x19C (1 byte → 8 แบบพร้อมกันได้)

enum SceneFlagsBits : uint8_t
{
	SF_ComponentToWorldUpdated = 1 << 0,
	SF_AbsoluteLocation        = 1 << 1,
	SF_AbsoluteRotation        = 1 << 2,
	SF_AbsoluteScale           = 1 << 3,
	SF_Visible                 = 1 << 4,
	SF_HiddenInGame            = 1 << 5,
	SF_SkipUpdateWhenHidden    = 1 << 6,
};

➡️ ผลกับ transform

❌ AbsoluteLocation = 0 → ต้อง ParentWorld + Relative

✅ AbsoluteLocation = 1 → ใช้ Relative เป็น World ได้เลย



---

🔹 AttachFlags @ 0x19D

enum AttachFlagsBits : uint8_t
{
	AF_ShouldBeAttached         = 1 << 0,
	AF_SnapLocation             = 1 << 1,
	AF_SnapRotation             = 1 << 2,
	AF_UpdatePhysicsVolume      = 1 << 3,
	AF_BoundsAffectStreaming    = 1 << 4,
	AF_UseAttachParentBound     = 1 << 5,
};

➡️ ผล

ShouldBeAttached = 0 → component นี้ standalone

= 1 → ต้องดู AttachParent / AttachChildren ต่อ



---

4️⃣ โครงสร้างสำหรับ “อ่านทีเดียว”

#pragma pack(push, 1)
struct USceneComponent_Mem
{
	uint8 pad0[0x118];

	TArray<uintptr_t> AttachChildren;        // 0x118
	TArray<uintptr_t> ClientAttachedChildren;// 0x128

	uint8 pad1[0x30];                        // 0x138

	FEncVector RelativeLocation;             // 0x168
	FRotator   RelativeRotation;             // 0x178
	FVector    RelativeScale3D;               // 0x184
	FVector    ComponentVelocity;             // 0x190

	uint8 SceneFlags;                        // 0x19C
	uint8 AttachFlags;                       // 0x19D
	uint8 pad2;                              // 0x19E
	uint8 Mobility;                          // 0x19F
	uint8 DetailMode;                        // 0x1A0
};
#pragma pack(pop)


---

5️⃣ ฟังก์ชันควร “รับพารา” ยังไงดีที่สุด?

✅ แบบที่แนะนำ (pointer class ตรง ๆ)

bool ReadSceneComponent(
	uintptr_t sceneComponentPtr,
	USceneComponent_Mem& out
)
{
	if (!sceneComponentPtr)
		return false;

	return driver.readmemory(
		(PVOID)sceneComponentPtr,
		&out,
		sizeof(USceneComponent_Mem)
	);
}

เรียกใช้:

USceneComponent_Mem comp{};
if (ReadSceneComponent(SceneCompPtr, comp))
{
	bool absLoc = comp.SceneFlags & SF_AbsoluteLocation;
}


---

❌ แบบไม่แนะนำ

ส่ง offset แยก ๆ

อ่านทีละ field

อ่าน bool ทีละตัวที่ offset ซ้ำ



---

6️⃣ TL;DR แบบสาย reverse

📦 อ่านทีเดียว = 0x1B0 bytes

🎯 ใช้ USceneComponent* เป็น base pointer

🔀 0x19C / 0x19D = bitfield ไม่ใช่ bool

🧠 behavior ตัดสินด้วย enum ไม่ใช่ค่า bool เดี่ยว

🧪 ไล่ Get ได้จาก struct เดียว ไม่ต้อง read ซ้ำ


ถ้าคุณอยากให้ผมทำต่อ:

🔎 ฟังก์ชันคำนวณ WorldTransform จาก SceneComponent

🌲 ไล่ AttachChildren เป็น tree

🎯 W2S ที่ respect Absolute / Attach / Scale


บอกมาได้เลย อันนี้ต่อได้ยาวแบบไม่หลงแน่นอน 🔥

```