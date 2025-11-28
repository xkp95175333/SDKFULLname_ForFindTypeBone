```cpp

/*
3 เวอร์ชันพิเศษแบบ SSE / AVX / __m128 / __m128i
เพื่อเร่งความเร็ว ทั้งหมด ของงาน Transform / Vector3 / Quaternion / Bone / W2S
โดยยังคง API แบบเดียวกับไฟล์ normal แต่เติมฟังก์ชันใหม่ลงในไฟล์:

SDK_ExternalMath128.h

ชื่อฟังก์ชันทั้งหมดจะลงท้ายด้วย 128
เพื่อไม่ให้ชนกับเวอร์ชันปกติ เช่น:

ToVector3_128(...)
FTransform_TransformPosition_128(...)
BoneWorld_128(...)
QuatForward_128(...)

และใน runtime คุณจะทำแบบนี้ได้:

if (supportsSSE) worldPos = BoneWorld_128(bone, c2w);
else             worldPos = BoneWorld(bone, c2w);


---

📌 ตรวจสอบว่ารองรับ SSE

คุณสามารถใช้ CPU flag นี้ภายในโปรแกรม:
*///*\
bool CPU_SupportsSSE()
{
    int info[4];
    __cpuid(info, 1);
    return (info[3] & (1 << 25)) != 0; // SSE
}
/*


---
  

🚀 SDK_ExternalMath128.h

> เวอร์ชัน SSE เร็วมาก ใช้ XMVector / __m128i ทุกจุดที่เป็นไปได้
Layout ตรง UE 100%
ชื่อฟังก์ชันมี _128 ต่อท้าย
*///*\

  
#pragma once
#include <xmmintrin.h>
#include <emmintrin.h>
#include <immintrin.h>
#include "SDK_ExternalFullMath.h"
#include "Vector3.h"
using namespace DirectX;
// ตรวจสอบว่าสามารถเรียกมาทำงานได้ไหม ด้วย 


/* ============================================================================
    == SSE / AVX128 HIGH SPEED HELPER ==
============================================================================ */

// ------------------------------------------------------------
// float[3] → __m128 (เติม 0 ที่ช่อง W)
// ------------------------------------------------------------
inline __m128 Load3_128(const float* f)
{
    return _mm_set_ps(0.f, f[2], f[1], f[0]);
}

// ------------------------------------------------------------
// __m128 → Vector3
// ------------------------------------------------------------
inline Vector3 Store3_128(__m128 v)
{
    alignas(16) float o[4];
    _mm_store_ps(o, v);
    return Vector3(o[0], o[1], o[2]);
}


/* ============================================================================
    == FVector / FEncVector SSE ==
============================================================================ */

inline __m128 FVector_Load128(const FVector& v)
{
    return _mm_set_ps(0.f, v.Z, v.Y, v.X);
}

inline Vector3 FVector_ToVector3_128(const FVector& v)
{
    return Vector3(v.X, v.Y, v.Z);
}

inline Vector3 FEncVector_ToVector3_128(const FEncVector& v)
{
    return Vector3(v.X, v.Y, v.Z);
}


/* ============================================================================
    == Quaternion → Matrix fast ==
============================================================================ */

inline XMMATRIX FQuat_ToMatrix_128(const FQuat& q)
{
    return XMMatrixRotationQuaternion(XMLoadFloat4((XMFLOAT4*)&q));
}


/* ============================================================================
    == FTransform Fast Decode ==
============================================================================ */

// ------------------------------------------------------------
// FTransform (0x30) → world pos (local transform)
// ------------------------------------------------------------
inline Vector3 FTransform_TransformPosition_128(const FTransform& t, const Vector3& local)
{
    __m128 L = _mm_set_ps(1.f, local.z, local.y, local.x);

    XMMATRIX rot  = FQuat_ToMatrix_128(t.Rotation);
    XMMATRIX scale = XMMatrixScaling(t.Scale3D.X, t.Scale3D.Y, t.Scale3D.Z);

    XMMATRIX world = scale * rot;

    XMVECTOR r = XMVector3Transform(L, world);

    alignas(16) float o[4];
    XMStoreFloat3((XMFLOAT3*)o, r);

    o[0] += t.Translation.X;
    o[1] += t.Translation.Y;
    o[2] += t.Translation.Z;

    return Vector3(o[0], o[1], o[2]);
}

// ------------------------------------------------------------
// FTransform world position 128
// ------------------------------------------------------------
inline Vector3 FTransform_GetLocation_128(const FTransform& t)
{
    return Vector3(t.Translation.X, t.Translation.Y, t.Translation.Z);
}


/* ============================================================================
    == FEncTransform Fast ==
============================================================================ */

inline Vector3 FEncTransform_TransformPosition_128(const FEncTransform& t, const Vector3& local)
{
    __m128 L = _mm_set_ps(1.f, local.z, local.y, local.x);

    XMMATRIX rot  = FQuat_ToMatrix_128(t.Rotation);
    XMMATRIX scale = XMMatrixScaling(t.Scale3D.X, t.Scale3D.Y, t.Scale3D.Z);

    XMMATRIX world = scale * rot;

    XMVECTOR r = XMVector3Transform(L, world);

    alignas(16) float o[4];
    XMStoreFloat3((XMFLOAT3*)o, r);

    o[0] += t.Translation.X;
    o[1] += t.Translation.Y;
    o[2] += t.Translation.Z;

    return Vector3(o[0], o[1], o[2]);
}

inline Vector3 FEncTransform_GetLocation_128(const FEncTransform& t)
{
    return Vector3(t.Translation.X, t.Translation.Y, t.Translation.Z);
}


/* ============================================================================
    == Bone world position SSE ==
============================================================================ */

inline Vector3 BoneWorld_128(const FTransform& bone, const FTransform& c2w)
{
    Vector3 local(bone.Translation.X, bone.Translation.Y, bone.Translation.Z);
    return FTransform_TransformPosition_128(c2w, local);
}

inline Vector3 BoneWorld_128(const FEncTransform& bone, const FTransform& c2w)
{
    Vector3 local(bone.Translation.X, bone.Translation.Y, bone.Translation.Z);
    return FTransform_TransformPosition_128(c2w, local);
}


/* ============================================================================
    == Camera Quaternion →
       Forward / Right / Up (SSE) ==
============================================================================ */

inline Vector3 QuatForward_128(const FQuat& q)
{
    XMMATRIX m = FQuat_ToMatrix_128(q);
    XMFLOAT3 f;
    XMStoreFloat3(&f, m.r[2]);
    return Vector3(f.x, f.y, f.z);
}

inline Vector3 QuatRight_128(const FQuat& q)
{
    XMMATRIX m = FQuat_ToMatrix_128(q);
    XMFLOAT3 r;
    XMStoreFloat3(&r, m.r[0]);
    return Vector3(r.x, r.y, r.z);
}

inline Vector3 QuatUp_128(const FQuat& q)
{
    XMMATRIX m = FQuat_ToMatrix_128(q);
    XMFLOAT3 u;
    XMStoreFloat3(&u, m.r[1]);
    return Vector3(u.x, u.y, u.z);
}


/* ============================================================================
    == Convert float xyz[3] using SSE ==
============================================================================ */
inline Vector3 ToVector3_128(float xyz[3])
{
    __m128 v = Load3_128(xyz);
    return Store3_128(v);
}



```
