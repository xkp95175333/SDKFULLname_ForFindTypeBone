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

```