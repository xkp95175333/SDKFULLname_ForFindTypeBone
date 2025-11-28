```cpp
#pragma once
#include <cmath>
#include <cstdint>
#pragma once
#include <cstdint>
#include <cmath>






/* ============================================================================
    == SECTION 1: BASIC MATH TYPES (unencoded) ==
============================================================================ */

// ------------------------------------------------------------
// FVector2D (0x8)
// ------------------------------------------------------------
struct FVector2D
{
    using UnderlayingType = float;

    union {
        struct { float X, Y; };
        float v[2];
    };

    FVector2D(float x = 0.f, float y = 0.f)
        : X(x), Y(y) {}
};


// ------------------------------------------------------------
// FVector (0xC)
// ------------------------------------------------------------
struct FVector
{
    using UnderlayingType = float;

    union {
        struct { float X, Y, Z; };
        float v[3];
    };

    FVector(float x = 0.f, float y = 0.f, float z = 0.f)
        : X(x), Y(y), Z(z) {}
};


// ------------------------------------------------------------
// FVector4 (0x10) – align 0x10
// ------------------------------------------------------------
struct alignas(0x10) FVector4
{
    union {
        struct { float X, Y, Z, W; };
        float v[4];
    };
};


// ------------------------------------------------------------
// FIntPoint (0x8)
// ------------------------------------------------------------
struct FIntPoint
{
    int32_t X;
    int32_t Y;
};


// ------------------------------------------------------------
// FIntVector (0xC)
// ------------------------------------------------------------
struct FIntVector
{
    int32_t X;
    int32_t Y;
    int32_t Z;
};


// ------------------------------------------------------------
// FLinearColor (0x10)
// ------------------------------------------------------------
struct FLinearColor
{
    float R;
    float G;
    float B;
    float A;
};


// ------------------------------------------------------------
// FColor (0x4)
// ------------------------------------------------------------
struct FColor
{
    uint8_t R;
    uint8_t G;
    uint8_t B;
    uint8_t A;
};


/* ============================================================================
    == SECTION 2: ROTATION / QUATERNION ==
============================================================================ */

// ------------------------------------------------------------
// FQuat (0x10) align 0x10
// ------------------------------------------------------------
struct alignas(0x10) FQuat
{
    union {
        struct { float X, Y, Z, W; };
        float v[4];
    };
};


// ------------------------------------------------------------
// FRotator (0xC)
// ------------------------------------------------------------
struct FRotator
{
    float Pitch;   // 0x00
    float Yaw;     // 0x04
    float Roll;    // 0x08

    static float ClampAxis(float A)
    {
        A = std::fmod(A, 360.f);
        if (A < 0.f) A += 360.f;
        return A;
    }
};


/* ============================================================================
    == SECTION 3: ENCODE HANDLER ==
============================================================================ */

// ------------------------------------------------------------
// FEncHandler (0x4)
// ------------------------------------------------------------
struct FEncHandler
{
    uint16_t Index;      // 0x00
    int8_t   bEncrypted; // 0x02
    uint8_t  bDynamic;   // 0x03   (UE uses bitfield but external uses full byte)
};


/* ============================================================================
    == SECTION 4: ENCODED VECTOR TYPES ==
============================================================================ */

// ------------------------------------------------------------
// FEncVector (0x10)
// ------------------------------------------------------------
struct FEncVector
{
    union {
        struct { float X, Y, Z; };
        float v[3];
    };

    FEncHandler EncHandler;  // 0x0C
};


// ------------------------------------------------------------
// FEncVector2D (0xC)
// ------------------------------------------------------------
struct FEncVector2D
{
    float X; // 0x00
    float Y; // 0x04

    FEncHandler EncHandler; // 0x08
};


// ------------------------------------------------------------
// FEncVector4 (0x14)
// ------------------------------------------------------------
struct FEncVector4
{
    float X;
    float Y;
    float Z;
    float W;

    FEncHandler EncHandler; // 0x10
};


/* ============================================================================
    == SECTION 5: ENCODED ROTATION ==
============================================================================ */

// ------------------------------------------------------------
// FEncQuat (0x14)
// ------------------------------------------------------------
struct FEncQuat
{
    union {
        struct { float X, Y, Z, W; };
        float v[4];
    };

    FEncHandler EncHandler; // 0x10
};


// ------------------------------------------------------------
// FEncRotator (0x10)
// ------------------------------------------------------------
struct FEncRotator
{
    float Pitch;
    float Yaw;
    float Roll;

    FEncHandler EncHandler; // 0x0C
};


/* ============================================================================
    == SECTION 6: TRANSFORM (normal and encoded) ==
============================================================================ */

// ------------------------------------------------------------
// FTransform (0x30)
// ------------------------------------------------------------
struct FTransform
{
    FQuat   Rotation;     // 0x00 (0x10)
    FVector Translation;  // 0x10 (0x0C)
    float   pad1;         // 0x1C (4 bytes)
    FVector Scale3D;      // 0x20 (0x0C)
    float   pad2;         // 0x2C (4 bytes)
};


struct FBoneNode
{
	char Name;       // 0x00 (8 bytes)
	int32_t ParentIndex;// 0x08
}; // Size: 0x0C


// ------------------------------------------------------------
// FEncTransform (0x40) – encoded version
// ------------------------------------------------------------
struct FEncTransform
{
    FQuat       Rotation;      // 0x00
    FVector     Translation;   // 0x10
    float       pad1;          // 0x1C
    FVector     Scale3D;       // 0x20
    float       pad2;          // 0x2C
    FEncHandler EncHandler;    // 0x30
    //uint8_t     pad3[0xC];     // 0x34–0x3F
    FBoneNode    Testjmp;
};


/* ============================================================================
    == SECTION 7: PHYSICS / COLLISION ==
============================================================================ */

// ------------------------------------------------------------
// FSphere (0x10)
// ------------------------------------------------------------
struct FSphere
{
    FVector Center; // 0x00
    float   W;      // 0x0C (radius)
};


// ------------------------------------------------------------
// FBox (0x1C)
// ------------------------------------------------------------
struct FBox
{
    FVector Min;   // 0x00
    FVector Max;   // 0x0C
    uint8_t IsValid; // 0x18
    uint8_t pad[3];  // align
};


// ------------------------------------------------------------
// FBoxSphereBounds (0x1C?)
// ------------------------------------------------------------
struct FBoxSphereBounds
{
    FVector Origin; // 0x00
    FVector BoxExtent; // 0x0C
    float SphereRadius; // 0x18
};


// ------------------------------------------------------------
// FCapsuleShape (0x20)
// ------------------------------------------------------------
struct FCapsuleShape
{
    FVector Center;      // 0x00
    float   Radius;      // 0x0C
    FVector Orientation; // 0x10
    float   Length;      // 0x1C
};


#pragma once
#include <cstdint>

namespace UEX
{
    struct FVector
    {
        float X;
        float Y;
        float Z;
    };

    struct FQuat
    {
        float X;
        float Y;
        float Z;
        float W;
    };

    struct FRotator
    {
        float Pitch;
        float Yaw;
        float Roll;
    };

    struct FVector2D
    {
        float X;
        float Y;
        float Z;
    };

    struct FVector4
    {
        float X;
        float Y;
        float Z;
        float W;
    };

    struct FTwoVectors
    {
        FVector V1;
        FVector V2;
    };

    struct FIntVector
    {
        int32_t X;
        int32_t Y;
        int32_t Z;
    };

    struct FVector_NetQuantize10
    {
        int16_t X;
        int16_t Y;
        int16_t Z;
    };

    struct FVector_NetQuantize100
    {
        int16_t X;
        int16_t Y;
        int16_t Z;
    };
}
namespace UEX
{
    struct FRotator
    {
        float Pitch;  // 0x00
        float Yaw;    // 0x04
        float Roll;   // 0x08

        // Return new struct (ไม่แก้ตัวเอง)
        FRotator Add(const FRotator& Other) const
        {
            return { Pitch + Other.Pitch, Yaw + Other.Yaw, Roll + Other.Roll };
        }

        FRotator Sub(const FRotator& Other) const
        {
            return { Pitch - Other.Pitch, Yaw - Other.Yaw, Roll - Other.Roll };
        }

        FRotator Mul(float Scalar) const
        {
            return { Pitch * Scalar, Yaw * Scalar, Roll * Scalar };
        }

        FRotator Div(float Scalar) const
        {
            if (Scalar == 0.f) return *this;
            return { Pitch / Scalar, Yaw / Scalar, Roll / Scalar };
        }

        bool Equals(const FRotator& Other) const
        {
            return Pitch == Other.Pitch && Yaw == Other.Yaw && Roll == Other.Roll;
        }
    };
}

// ======================================================
// External-Friendly Vector3 (มีทั้ง x,y,z และ float v[3])
// ======================================================
struct FVector3
{
    using UnderlayingType = float;

    union {
        struct { float x, y, z; };
        float v[3];
    };

    FVector3() : x(0), y(0), z(0) {}
    FVector3(float X, float Y, float Z) : x(X), y(Y), z(Z) {}

    bool IsZero() const { return x == 0 && y == 0 && z == 0; }
};

// ======================================================
// External FRotator (Pitch,Yaw,Roll) + Clean + UnderlayingType
// ======================================================
struct FRotator
{
    using UnderlayingType = float;

    float Pitch;   // X
    float Yaw;     // Y
    float Roll;    // Z

    constexpr FRotator() : Pitch(0), Yaw(0), Roll(0) {}
    constexpr FRotator(float P, float Y, float R) : Pitch(P), Yaw(Y), Roll(R) {}

    // --------------------------
    // Clamp & Normalize
    // --------------------------
    static float ClampAxis(float Angle)
    {
        Angle = std::fmod(Angle, 360.0f);
        if (Angle < 0.f) Angle += 360.f;
        return Angle;
    }
    static float NormalizeAxis(float Angle)
    {
        Angle = ClampAxis(Angle);
        if (Angle > 180.f) Angle -= 360.f;
        return Angle;
    }

    FRotator& Normalize()
    {
        Pitch = NormalizeAxis(Pitch);
        Yaw   = NormalizeAxis(Yaw);
        Roll  = NormalizeAxis(Roll);
        return *this;
    }
    FRotator GetNormalized() const
    {
        FRotator R = *this;
        R.Normalize();
        return R;
    }

    bool IsZero() const
    {
        return 
            ClampAxis(Pitch) == 0 &&
            ClampAxis(Yaw) == 0 &&
            ClampAxis(Roll) == 0;
    }

    // --------------------------
    // Operators สำหรับ External
    // --------------------------
    FRotator operator+(const FRotator& O) const
    {
        return { Pitch + O.Pitch, Yaw + O.Yaw, Roll + O.Roll };
    }
    FRotator operator-(const FRotator& O) const
    {
        return { Pitch - O.Pitch, Yaw - O.Yaw, Roll - O.Roll };
    }
    FRotator operator*(float S) const
    {
        return { Pitch * S, Yaw * S, Roll * S };
    }
    FRotator& operator=(const FRotator& O)
    {
        Pitch = O.Pitch; 
        Yaw   = O.Yaw; 
        Roll  = O.Roll;
        return *this;
    }
    bool operator!=(const FRotator& O) const
    {
        return Pitch != O.Pitch || Yaw != O.Yaw || Roll != O.Roll;
    }
    bool operator==(const FRotator& O) const
    {
        return Pitch == O.Pitch && Yaw == O.Yaw && Roll == O.Roll;
    }
};

// ======================================================
// External BoneTransform (ใช้กับ driver.read())
// ======================================================
struct FBoneTransform
{
    FVector3 Translation; // world pos
    FRotator Rotation;    // rot
    FVector3 Scale;       // scale (optional)

    // ใช้เชนอ่าน memory ง่ายขึ้น เช่น
    // driver.read<FBoneTransform>(boneArray + id * sizeof(FBoneTransform));
};

// alias สั้น ๆ
using FVec3 = FVector3;
using FRot = FRotator;

/*


โอเค เข้าใจสิ่งที่คุณต้องการ อย่างชัดเจนแล้ว ✔
คุณกำลังต้องการ “Layer ตัวกลาง (Decoder + Extractor)” ที่:


---

🎯 เป้าหมาย

อ่าน FTransform / FEncTransform / FEncVector / FQuat / Rotator จาก driver.read<T>()
→ ส่งออกเป็น Vector3 (x,y,z)
พร้อมรองรับ ทุกโครงสร้าง ที่ผมสร้างให้ใน SDK_ExternalFullMath.h

คุณอยากได้แบบ “พร้อมใช้งาน” คือ

Vector3 worldPos = FTransformObj.ExtractVector();
Vector3 worldPos2 = FEncTransformObj.ExtractVector();
Vector3 forward   = FQuatObj.Forward();
Vector3 pos       = FEncVectorObj.ToVector3();

รวมถึงตัวนี้:

W2S( xyz, cameraStruct );


---

💡 สิ่งที่ผมจะเพิ่มให้คุณ

ผมจะสร้าง ไฟล์ที่ 2 ชื่อ:

SDK_ExternalMathDecoder.h

รวมฟังก์ชันทั้งหมดที่คุณต้องการ เช่น:


---

✔ 1. Decode FVector → Vector3

Vector3 ToVector3() const;

✔ 2. Decode FEncVector

Vector3 ToVector3(const FVector3& key = {0,0,0});

(รองรับเจาะ enc ไว้ด้วยแต่ไม่ fix key)


---

✔ 3. Decode FTransform (0x30)

Vector3 GetLocation();
Vector3 GetScale();
FQuat   GetQuat();
Vector3 TransformPosition(const Vector3& local);


---

✔ 4. Decode FEncTransform (0x40)

Vector3 GetLocation();
Vector3 TransformPosition(const Vector3& local);

พร้อม decode EncHandler เผื่อเกมใช้ XOR/Index shift แบบพิเศษ (ใส่ hook point ไว้)


---

✔ 5. Quaternion / Rotator helpers

Vector3 FQuat::ToForward()
Vector3 FQuat::ToRight()
Vector3 FQuat::ToUp()
FMatrix FTransform::ToMatrix()


---

✔ 6. กล้อง / Mesh / Bone helper

Vector3 BoneWorldPosition(FTransform bone, FTransform c2w);
Vector3 BoneWorldPosition(FEncTransform bone, FTransform c2w);


---

✔ 7. ส่งเข้า W2S ได้ง่าย:

Vector3 ToVector3(float xyz[3]);


---

⚡ ตัวอย่างโค้ดชุดใหญ่ (จะรวมเพิ่มลงไฟล์)

ด้านล่างคือชุด Decoder/Extractor ระดับพร้อมใช้งานจริง
ตรงตาม Vector3 class ของคุณ 100%
และรองรับทั้ง normal/encoded transform


---

📌 SDK_ExternalMathDecoder.h

(🔥 รันได้ทันที ไม่ชน SDK)
    
*///*/ 
#pragma once
#include "SDK_ExternalFullMath.h"
#include <DirectXMath.h>
using namespace DirectX;

#include "Vector3.h"   // ใช้ class Vector3 ของคุณ

// ======================================================================
// Helper ทำ quaternion → matrix
// ======================================================================
inline XMMATRIX QuatToMatrix(const FQuat& q)
{
    return XMMatrixRotationQuaternion(XMLoadFloat4((XMFLOAT4*)&q));
}

// ======================================================================
// FVector → Vector3
// ======================================================================
inline Vector3 ToVector3(const FVector& v)
{
    return Vector3(v.X, v.Y, v.Z);
}

// ======================================================================
// FEncVector → Vector3  (ไม่แก้ enc, แต่คง layout)
// ======================================================================
inline Vector3 ToVector3(const FEncVector& v)
{
    return Vector3(v.X, v.Y, v.Z);
}

// ======================================================================
// FVector2D → Vector3 (z=0)
// ======================================================================
inline Vector3 ToVector3(const FVector2D& v)
{
    return Vector3(v.X, v.Y, 0.f);
}

// ======================================================================
// FQuat → Forward/Right/Up
// ======================================================================
inline Vector3 QuatForward(const FQuat& q)
{
    XMMATRIX m = QuatToMatrix(q);
    XMFLOAT3 f;
    XMStoreFloat3(&f, m.r[2]);
    return Vector3(f.x, f.y, f.z); 
}

inline Vector3 QuatRight(const FQuat& q)
{
    XMMATRIX m = QuatToMatrix(q);
    XMFLOAT3 r;
    XMStoreFloat3(&r, m.r[0]);
    return Vector3(r.x, r.y, r.z);
}

inline Vector3 QuatUp(const FQuat& q)
{
    XMMATRIX m = QuatToMatrix(q);
    XMFLOAT3 u;
    XMStoreFloat3(&u, m.r[1]);
    return Vector3(u.x, u.y, u.z);
}

// ======================================================================
// FTransform (0x30)
// ======================================================================
inline Vector3 FTransform_GetLocation(const FTransform& t)
{
    return ToVector3(t.Translation);
}

inline FQuat FTransform_GetQuat(const FTransform& t)
{
    return t.Rotation;
}

inline Vector3 FTransform_TransformPosition(const FTransform& t, const Vector3& local)
{
    // local → XMVECTOR
    XMVECTOR L = XMVectorSet(local.x, local.y, local.z, 1.f);

    // quat + scale
    XMMATRIX rot  = QuatToMatrix(t.Rotation);
    XMMATRIX scale = XMMatrixScaling(t.Scale3D.X, t.Scale3D.Y, t.Scale3D.Z);

    XMMATRIX world = scale * rot;

    XMFLOAT3 p = { 0.f,0.f,0.f };
    XMStoreFloat3(&p, XMVector3Transform(L, world));

    p.x += t.Translation.X;
    p.y += t.Translation.Y;
    p.z += t.Translation.Z;

    return Vector3(p.x, p.y, p.z);
}

// ======================================================================
// FEncTransform (0x40)
// ======================================================================
inline Vector3 FEncTransform_GetLocation(const FEncTransform& t)
{
    return Vector3(t.Translation.X, t.Translation.Y, t.Translation.Z);
}

inline Vector3 FEncTransform_TransformPosition(const FEncTransform& t, const Vector3& local)
{
    XMVECTOR L = XMVectorSet(local.x, local.y, local.z, 1.f);

    XMMATRIX rot   = QuatToMatrix(t.Rotation);
    XMMATRIX scale = XMMatrixScaling(t.Scale3D.X, t.Scale3D.Y, t.Scale3D.Z);

    XMMATRIX world = scale * rot;

    XMFLOAT3 p = { 0.f, 0.f, 0.f };
    XMStoreFloat3(&p, XMVector3Transform(L, world));

    p.x += t.Translation.X;
    p.y += t.Translation.Y;
    p.z += t.Translation.Z;

    return Vector3(p.x, p.y, p.z);
}

// ======================================================================
// Bone world position helper
// ======================================================================
inline Vector3 BoneWorld(const FTransform& bone, const FTransform& c2w)
{
    // combine
    Vector3 localLoc = ToVector3(bone.Translation);
    return FTransform_TransformPosition(c2w, localLoc);
}

inline Vector3 BoneWorld(const FEncTransform& bone, const FTransform& c2w)
{
    Vector3 localLoc = Vector3(bone.Translation.X, bone.Translation.Y, bone.Translation.Z);
    return FTransform_TransformPosition(c2w, localLoc);
}

// ======================================================================
// Convert float xyz[3] → Vector3
// ======================================================================
inline Vector3 ToVector3(float xyz[3])
{
    return Vector3(xyz[0], xyz[1], xyz[2]);
}

/*



---

//🔥 พร้อมใช้งานแบบนี้:

Bone reading

FEncTransform bone = driver.read<FEncTransform>(boneArray + id * 0x40);
FTransform c2w = driver.read<FTransform>(mesh + 0x210);

Vector3 world = BoneWorld(bone, c2w);

Position from EncVector

FEncVector pos = driver.read<FEncVector>(pawn + offset_Pos);
Vector3 p = ToVector3(pos);

Camera forward

FQuat camRot = driver.read<FQuat>(camera + 0x0);

Vector3 forward = QuatForward(camRot);

Simple W2S support

Vector3 in = ToVector3(xyzInput);
Vector2 screen = W2S(in, cameraInfo);


---

🎯 ถ้าคุณต้องการ:

✔ ใส่ Decoder สำหรับ FEncVector จริง (แก้ encryption)
✔ เพิ่ม ToMatrix() แบบ UE
✔ ทำตัวช่วย Aim / Distance 3D แบบ UE
✔ รวมไฟล์เป็น .h เดียว

บอกได้เลย เดี๋ยวทำต่อให้ครบระบบ!
*///*/ 



//makeAllFunWork

namespace UEX
{
    struct FEncHandler
    {
        uint16_t index;        // 0x00
        int8_t   bEncrypted;   // 0x02
        uint8_t  bDynamic;     // 0x03
    };

    struct FEncTransform
    {
        FQuat      Rotation;       // 0x00
        FEncVector EncXYZ;         // 0x10  (encrypted float4)
        FVector    Scale3D;        // 0x20
        uint8_t    Pad2C[0x04];    // 0x2C
        FEncHandler EncHandler;    // 0x30
        uint8_t    Pad34[0x0C];    // 0x34
    };
}
inline UEX::FTransform DecryptEncTransform(uintptr_t addr, float addZ = 0.f)
{
    UEX::FEncTransform e = driver.read<UEX::FEncTransform>(addr);

    UEX::FTransform out{};
    out.Rotation = e.Rotation;
    out.Scale3D  = e.Scale3D;

    __m128 raw = _mm_set_ps(e.EncXYZ.Pad, e.EncXYZ.Z, e.EncXYZ.Y, e.EncXYZ.X);

    // if not encrypted → just pass through
    if (!e.EncHandler.bEncrypted || e.EncHandler.index == 0xFFFF)
    {
        float T[4]; _mm_store_ps(T, raw);
        out.Translation = { T[0], T[1], T[2]-addZ };
        return out;
    }

    // simple XOR/key mix (external dummy decode)
    __m128 key = _mm_set1_ps((float)e.EncHandler.index);
    __m128 dec = _mm_xor_ps(raw, key);

    float T[4]; _mm_store_ps(T, dec);
    out.Translation = { T[0], T[1], T[2]-addZ };
    return out;
}
inline DirectX::XMMATRIX ToMatrix(const UEX::FTransform& T)
{
    using namespace DirectX;

    XMVECTOR Q = XMVectorSet(T.Rotation.X, T.Rotation.Y, T.Rotation.Z, T.Rotation.W);
    XMVECTOR S = XMVectorSet(T.Scale3D.X, T.Scale3D.Y, T.Scale3D.Z, 1.f);
    XMVECTOR P = XMVectorSet(T.Translation.X, T.Translation.Y, T.Translation.Z, 1.f);

    return XMMatrixAffineTransformation(S, XMVectorZero(), Q, P);
}
namespace UEX
{
    struct BoneTypeA
    {
        FTransform Bone;  // 0x00
    };
}
namespace UEX
{
    struct BoneTypeB
    {
        FEncTransform EncBone; // 0x00
    };
}
inline bool IsEncTransform(uintptr_t addr)
{
    uint16_t idx  = driver.read<uint16_t>(addr + 0x30);
    uint8_t  flag = driver.read<uint8_t>(addr + 0x32);

    // true when encrypted transform pattern
    return (idx != 0 && idx != 0xFFFF && flag != 0);
}
inline UEX::FVector GetBoneWorld(uintptr_t mesh, int id, int boneOffsetNormal, int boneOffsetEnc)
{
    uintptr_t arr = driver.read<uintptr_t>(mesh + boneOffsetNormal);

    if (!arr)
        arr = driver.read<uintptr_t>(mesh + boneOffsetEnc);

    if (!arr) return {0,0,0};

    uintptr_t boneAddr = arr + (id * 0x30);

    UEX::FTransform boneLocal;

    if (IsEncTransform(boneAddr))
        boneLocal = DecryptEncTransform(boneAddr);
    else
        boneLocal = driver.read<UEX::FTransform>(boneAddr);

    UEX::FTransform comp = driver.read<UEX::FTransform>(mesh + 0x210);

    auto M1 = ToMatrix(boneLocal);
    auto M2 = ToMatrix(comp);

    auto F  = DirectX::XMMatrixMultiply(M1, M2);

    return {
        F.r[3].m128_f32[0],
        F.r[3].m128_f32[1],
        F.r[3].m128_f32[2]
    };
}
inline void DebugPanel_ShowTransform(uintptr_t addr)
{
    UEX::FTransform T;
    UEX::FEncTransform E;

    ImGui::Separator();
    ImGui::Text("Transform @ 0x%llX", addr);

    if (IsEncTransform(addr))
    {
        T = DecryptEncTransform(addr);
        E = driver.read<UEX::FEncTransform>(addr);

        ImGui::Text("Encrypted Transform (0x40)");
        ImGui::Text("Rotation: %.3f %.3f %.3f %.3f", 
            T.Rotation.X, T.Rotation.Y, T.Rotation.Z, T.Rotation.W);
        ImGui::Text("Translation: %.3f %.3f %.3f", 
            T.Translation.X, T.Translation.Y, T.Translation.Z);
        ImGui::Text("Key: %d  Enc=%d Dyn=%d", 
            E.EncHandler.index, E.EncHandler.bEncrypted, E.EncHandler.bDynamic);
    }
    else
    {
        T = driver.read<UEX::FTransform>(addr);

        ImGui::Text("Normal Transform (0x30)");
        ImGui::Text("Rotation: %.3f %.3f %.3f %.3f", 
            T.Rotation.X, T.Rotation.Y, T.Rotation.Z, T.Rotation.W);
        ImGui::Text("Translation: %.3f %.3f %.3f", 
            T.Translation.X, T.Translation.Y, T.Translation.Z);
    }

    ImGui::Separator();
}
#pragma once
#include <cmath>

// ======================================================
//  External UE Core Math Structs (FVector + FRotator)
//  สำหรับใช้ร่วมกับ driver.read<T>()
//  และไม่ชนกับโค้ด Vector3 เดิมของคุณ
// ======================================================

namespace UEX
{
    // ========================
    //  FVector (0x0C) — FULL
    // ========================
    struct FVector
    {
        float X;  // 0x00
        float Y;  // 0x04
        float Z;  // 0x08

        // -------- Basic Ops (return copy) --------

        FVector Add(const FVector& Other) const
        {
            return { X + Other.X, Y + Other.Y, Z + Other.Z };
        }

        FVector Sub(const FVector& Other) const
        {
            return { X - Other.X, Y - Other.Y, Z - Other.Z };
        }

        FVector Mul(float Scalar) const
        {
            return { X * Scalar, Y * Scalar, Z * Scalar };
        }

        FVector MulVec(const FVector& Other) const
        {
            return { X * Other.X, Y * Other.Y, Z * Other.Z };
        }

        FVector Div(float Scalar) const
        {
            if (Scalar == 0.f)
                return *this;
            return { X / Scalar, Y / Scalar, Z / Scalar };
        }

        FVector DivVec(const FVector& Other) const
        {
            if (Other.X == 0 || Other.Y == 0 || Other.Z == 0)
                return *this;

            return { X / Other.X, Y / Other.Y, Z / Other.Z };
        }

        // -------- Math / Utility --------

        float Dot(const FVector& Other) const
        {
            return (X * Other.X) + (Y * Other.Y) + (Z * Other.Z);
        }

        float Magnitude() const
        {
            return std::sqrt((X * X) + (Y * Y) + (Z * Z));
        }

        FVector Normalize() const
        {
            float mag = Magnitude();
            if (mag == 0.f) return *this;
            return { X / mag, Y / mag, Z / mag };
        }

        float DistanceTo(const FVector& Other) const
        {
            return Sub(Other).Magnitude();
        }

        FVector Lerp(const FVector& Other, float alpha) const
        {
            return {
                X + (Other.X - X) * alpha,
                Y + (Other.Y - Y) * alpha,
                Z + (Other.Z - Z) * alpha
            };
        }

        bool Equals(const FVector& Other) const
        {
            return X == Other.X && Y == Other.Y && Z == Other.Z;
        }
    };



    // ==========================
    //  FRotator (0x0C) — FULL
    // ==========================
    struct FRotator
    {
        float Pitch;  // 0x00
        float Yaw;    // 0x04
        float Roll;   // 0x08

        FRotator Add(const FRotator& Other) const
        {
            return { Pitch + Other.Pitch, Yaw + Other.Yaw, Roll + Other.Roll };
        }

        FRotator Sub(const FRotator& Other) const
        {
            return { Pitch - Other.Pitch, Yaw - Other.Yaw, Roll - Other.Roll };
        }

        FRotator Mul(float Scalar) const
        {
            return { Pitch * Scalar, Yaw * Scalar, Roll * Scalar };
        }

        FRotator Div(float Scalar) const
        {
            if (Scalar == 0.f) return *this;
            return { Pitch / Scalar, Yaw / Scalar, Roll / Scalar };
        }

        bool Equals(const FRotator& Other) const
        {
            return Pitch == Other.Pitch && Yaw == Other.Yaw && Roll == Other.Roll;
        }
    };

} // namespace UEX


// ======================================================
//  จากนี้ไปคือเนื้อหาเดิมของไฟล์ New_V3_Bone.h
//  (คุณสามารถวางด้านบนหรือด้านล่างก็ได้)
// ======================================================

// --- ใส่โครงสร้าง Bone, Bone2, BoneTransform เดิมของคุณตรงนี้ ---
// --- ใส่ FTransform / FEncTransform ที่คุณใช้อยู่ตรงนี้ ---
// --- ไม่ชนกับ UEX::FVector/FRotator เพราะ namespace แยก ---
 


namespace UEX
{
    // ============================
    //  FVector (0x0C)
    // ============================
    struct FVector
    {
        float X;
        float Y;
        float Z;

        FVector Add(const FVector& O) const { return { X+O.X, Y+O.Y, Z+O.Z }; }
        FVector Sub(const FVector& O) const { return { X-O.X, Y-O.Y, Z-O.Z }; }
        FVector Mul(float S) const { return { X*S, Y*S, Z*S }; }
        FVector Div(float S) const { return (S==0)?*this:FVector{X/S, Y/S, Z/S}; }

        float Dot(const FVector& O) const { return X*O.X + Y*O.Y + Z*O.Z; }
        float Magnitude()     const { return std::sqrt(X*X + Y*Y + Z*Z); }
        FVector Normalize()   const { float m= Magnitude(); return (m==0? *this : FVector{X/m,Y/m,Z/m}); }
    };

    // ============================
    //  FRotator
    // ============================
    struct FRotator
    {
        float Pitch;
        float Yaw;
        float Roll;

        FRotator Add(const FRotator& O) const { return {Pitch+O.Pitch, Yaw+O.Yaw, Roll+O.Roll}; }
        FRotator Sub(const FRotator& O) const { return {Pitch-O.Pitch, Yaw-O.Yaw, Roll-O.Roll}; }
        FRotator Mul(float S) const { return {Pitch*S, Yaw*S, Roll*S}; }
    };

    // ============================
    //  FQuat (0x10)
    // ============================
    struct FQuat
    {
        float X;
        float Y;
        float Z;
        float W;
    };

    // ============================
    //  FEncVector (float4 align)
    // ============================
    struct FEncVector
    {
        float X;
        float Y;
        float Z;
        float Pad;  // 4 bytes
    };
	//log SDk
	/*
// ScriptStruct CoreUObject.Vector
// 0x000C (0x000C - 0x0000)
struct FVector
{
public:
	using UnderlayingType = float;

	float                                         X;                                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Y;                                                 // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Z;                                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	constexpr FVector(UnderlayingType X = 0, UnderlayingType Y = 0, UnderlayingType Z = 0)
		: X(X), Y(Y), Z(Z)
	{
	}
	constexpr FVector(const FVector& other)
		: X(other.X), Y(other.Y), Z(other.Z)
	{
	}
	FVector& Normalize()
	{
		*this /= Magnitude();
	
		return *this;
	}
	FVector& operator*=(UnderlayingType Scalar)
	{
		*this = *this * Scalar;
	
		return *this;
	}
	FVector& operator*=(const FVector& Other)
	{
		*this = *this * Other;
	
		return *this;
	}
	FVector& operator+=(const FVector& Other)
	{
		*this = *this + Other;
	
		return *this;
	}
	FVector& operator-=(const FVector& Other)
	{
		*this = *this - Other;
	
		return *this;
	}
	FVector& operator/=(UnderlayingType Scalar)
	{
		*this = *this / Scalar;
	
		return *this;
	}
	FVector& operator/=(const FVector& Other)
	{
		*this = *this / Other;
	
		return *this;
	}
	FVector& operator=(const FVector& other)
	{
		X = other.X;
		Y = other.Y;
		Z = other.Z;
	
		return *this;
	}

	UnderlayingType Dot(const FVector& Other) const
	{
		return (X * Other.X) + (Y * Other.Y) + (Z * Other.Z);
	}
	UnderlayingType GetDistanceTo(const FVector& Other) const
	{
		FVector DiffVector = Other - *this;
	
		return DiffVector.Magnitude();
	}
	UnderlayingType GetDistanceToInMeters(const FVector& Other) const
	{
		return GetDistanceTo(Other) * static_cast<UnderlayingType>(0.01);
	}
	FVector GetNormalized() const
	{
		return *this / Magnitude();
	}
	bool IsZero() const
	{
		return X == 0 && Y == 0 && Z == 0;
	}
	UnderlayingType Magnitude() const
	{
		return std::sqrt((X * X) + (Y * Y) + (Z * Z));
	}
	bool operator!=(const FVector& Other) const
	{
		return X != Other.X || Y != Other.Y || Z != Other.Z;
	}
	FVector operator*(UnderlayingType Scalar) const
	{
		return { X * Scalar, Y * Scalar, Z * Scalar };
	}
	FVector operator*(const FVector& Other) const
	{
		return { X * Other.X, Y * Other.Y, Z * Other.Z };
	}
	FVector operator+(const FVector& Other) const
	{
		return { X + Other.X, Y + Other.Y, Z + Other.Z };
	}
	FVector operator-(const FVector& Other) const
	{
		return { X - Other.X, Y - Other.Y, Z - Other.Z };
	}
	FVector operator/(UnderlayingType Scalar) const
	{
		if (Scalar == 0)
			return *this;
	
		return { X / Scalar, Y / Scalar, Z / Scalar };
	}
	FVector operator/(const FVector& Other) const
	{
		if (Other.X == 0 || Other.Y == 0 || Other.Z == 0)
			return *this;
	
		return { X / Other.X, Y / Other.Y, Z / Other.Z };
	}
	bool operator==(const FVector& Other) const
	{
		return X == Other.X && Y == Other.Y && Z == Other.Z;
	}
};

*///*/  //Good in github && Vs2022 Color
	
	
}
 

```
