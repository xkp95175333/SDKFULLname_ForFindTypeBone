---
// AddressGname= unk_15A4B4840
Address	              Function	            Instruction
.std:000000014F07B782	sub_14F07B710	lea     rsi, unk_15A4B4840
.std:000000014F080F70	sub_14F080F20	lea     rsi, unk_15A4B4840
.std:000000014F085C49	sub_14F085C10	lea     rsi, unk_15A4B4840

---

Type::Uworld36Def = {0x3FFFF,18}
Type::Uworld36Array = {offWorldExorsizeId+0x3FFFF,18*IDsizelavelOffset}

  
Type::Uworld37Def = {0xFFFF,16}
Type::Uworld37Array = {offWorldxorsizeId+0xFFFF,16*IDsizelavelOffset}
  
 
C Core
```cpp
//EP1
__int64 __fastcall sub_14F080F20(unsigned int a1, unsigned int a2)
{
  _QWORD *v4; // rsi
  _BYTE *v5; // rbx
  _BYTE *v6; // rdx
  unsigned __int64 v7; // r8
  int v8; // r14d
  __int8 v9; // bl
  __m128i v10; // xmm6
  _BYTE *v11; // rdi
  _BYTE *v12; // rdx
  unsigned __int64 v13; // r8
  int v14; // esi
  unsigned __int32 v15; // xmm1_4
  char *v16; // r8
  unsigned __int64 v17; // rcx
  char *v18; // rdx
  char *v19; // r8
  __int16 v20; // ax
  __int8 *v21; // rax
  __int32 v22; // eax
  __int32 v23; // ebx
  __int64 result; // rax
  __m128i v25; // [rsp+20h] [rbp-E0h] BYREF
  __m128i v26; // [rsp+30h] [rbp-D0h] BYREF
  char v27[2048]; // [rsp+40h] [rbp-C0h] BYREF
  char v28[2048]; // [rsp+840h] [rbp+740h] BYREF

  if ( byte_15A4B467C )
  {
    v4 = &unk_15A4B4840;
  }
  else
  {
    v4 = (_QWORD *)sub_14F07BC80(&unk_15A4B4840);
    byte_15A4B467C = 1;
  }
  v25.m128i_i32[1] = a1 & 0x3FFFF;
  v25.m128i_i32[0] = a1 >> 0x12;
  v5 = (_BYTE *)(v4[(a1 >> 0x12) + 1] + 2 * (a1 & 0x3FFFF));
  v6 = v5 + 2;
  v7 = (unsigned __int64)*(unsigned __int16 *)v5 >> 6;
  v8 = *(unsigned __int16 *)v5 >> 6;
  if ( (*v5 & 1) != 0 )
  {
    sub_152B5CD6D(v28, v6, 2 * v7);
    sub_14F0815D0(v28, *(unsigned __int16 *)v5 >> 6);
    v9 = 1;
  }
  else
  {
    sub_152B5CD6D(v28, v6, v7);
    sub_14F0813C0(v28, *(unsigned __int16 *)v5 >> 6);
    v9 = 0;
  }
  v25.m128i_i8[0xC] = v9;
  v25.m128i_i64[0] = (__int64)v28;
  *(__int16 *)((char *)&v25.m128i_i16[6] + 1) = *(__int16 *)((char *)&v26.m128i_i16[6] + 1);
  v25.m128i_i8[0xF] = v26.m128i_i8[0xF];
  v25.m128i_i32[2] = v8;
  v10 = v25;
  v25.m128i_i32[1] = a2 & 0x3FFFF;
  v25.m128i_i32[0] = a2 >> 0x12;
  v26 = v10;
  v11 = (_BYTE *)(v4[(a2 >> 0x12) + 1] + 2 * (a2 & 0x3FFFF));
  v12 = v11 + 2;
  v13 = (unsigned __int64)*(unsigned __int16 *)v11 >> 6;
  v14 = *(unsigned __int16 *)v11 >> 6;
  if ( (*v11 & 1) != 0 )
  {
    sub_152B5CD6D(v27, v12, 2 * v13);
    sub_14F0815D0(v27, *(unsigned __int16 *)v11 >> 6);
    v25.m128i_i8[0xC] = 1;
  }
  else
  {
    sub_152B5CD6D(v27, v12, v13);
    sub_14F0813C0(v27, *(unsigned __int16 *)v11 >> 6);
    v25.m128i_i8[0xC] = 0;
  }
  v25.m128i_i32[2] = v14;
  v25.m128i_i64[0] = (__int64)v27;
  *(__int16 *)((char *)&v25.m128i_i16[6] + 1) = *(__int16 *)((char *)&v26.m128i_i16[6] + 1);
  v25.m128i_i8[0xF] = v26.m128i_i8[0xF];
  if ( v9 != (unsigned __int8)BYTE4(_mm_srli_si128(v25, 8).m128i_u64[0]) )
  {
    v15 = _mm_srli_si128(v25, 8).m128i_u32[0];
    v16 = v27;
    v17 = _mm_srli_si128(v10, 8).m128i_u64[0];
    if ( v9 )
      v17 = v15;
    else
      v16 = v28;
    if ( (_DWORD)v17 )
    {
      v18 = &v16[v17];
      v19 = &v16[2 * v17];
      do
      {
        v20 = *--v18;
        *((_WORD *)v19 + 0xFFFFFFFF) = v20;
        v19 += 0xFFFFFFFE;
        LODWORD(v17) = v17 - 1;
      }
      while ( (_DWORD)v17 );
    }
    v21 = &v25.m128i_i8[0xC];
    if ( !v9 )
      v21 = &v26.m128i_i8[0xC];
    *v21 = 1;
  }
  v22 = v25.m128i_i32[2];
  v23 = v26.m128i_i32[2];
  if ( v26.m128i_i32[2] <= (unsigned __int32)v25.m128i_i32[2] )
    v22 = v26.m128i_i32[2];
  if ( v26.m128i_i8[0xC] )
    result = sub_14EF43F80(v26.m128i_i64[0], v25.m128i_i64[0], v22);
  else
    result = sub_14EF43E80(v26.m128i_i64[0], v25.m128i_i64[0], v22);
  if ( !(_DWORD)result )
    return (unsigned int)(v23 - v25.m128i_i32[2]);
  return result;
}

//EP2

 
int *__fastcall sub_14F085C10(int *a1, __m128i *a2, int a3, int a4)
{
  _QWORD *v8; // rsi
  __int64 v9; // r8
  __m128i v10; // xmm1
  __int64 v11; // rbx
  __m128i *v12; // rax
  __m128i v13; // xmm0
  int v14; // ebx
  __m128i *v15; // rax
  __m128i v16; // xmm0
  char *v17; // rdi
  int v18; // ebx
  __m128i v19; // xmm1
  __int64 v20; // rbx
  __m128i *v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __int64 v24; // rdi
  __int64 v25; // rsi
  int *result; // rax
  char v27[16]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v28; // [rsp+30h] [rbp-50h] BYREF
  char v29[16]; // [rsp+40h] [rbp-40h] BYREF
  __m128i v30; // [rsp+50h] [rbp-30h] BYREF
  __m128i v31; // [rsp+60h] [rbp-20h]
  char v32; // [rsp+74h] [rbp-Ch]

  if ( byte_15A4B467C )
  {
    v8 = &unk_15A4B4840;
  }
  else
  {
    v8 = (_QWORD *)sub_14F07BC80(&unk_15A4B4840);
    byte_15A4B467C = 1;
  }
  v9 = a2->m128i_i64[1];
  if ( a3 == 1 )
  {
    v10 = *a2;
    v27[0] = 0;
    v30.m128i_i32[2] = v9;
    v28 = v10;
    v11 = 0x10020LL;
    if ( BYTE4(v9) )
      v11 = 0x10024LL;
    *(__int16 *)((char *)&v30.m128i_i16[6] + 1) = (unsigned __int32)v10.m128i_i32[3] >> 8;
    v30.m128i_i64[0] = v10.m128i_i64[0];
    v30.m128i_i8[0xC] = BYTE4(v9);
    v30.m128i_i8[0xF] = _mm_cvtsi128_si32(_mm_srli_si128(v10, 0xF));
    if ( BYTE4(v9) )
      v12 = (__m128i *)sub_14F07AC60(v29);
    else
      v12 = (__m128i *)sub_14F07AB70(&v28);
    v13 = *v12;
    v32 = 0;
    v31 = v13;
    sub_14F084650(&v8[8 * (unsigned int)_mm_cvtsi128_si32(v13) + 0x2008], &v28, &v30, v27);
    _InterlockedAdd((volatile signed __int32 *)((char *)v8 + v11), (unsigned __int8)v27[0]);
    v14 = v28.m128i_i32[0];
  }
  else if ( a3 )
  {
    v19 = *a2;
    v20 = 0x10020LL;
    v28 = *a2;
    if ( v28.m128i_i8[0xC] )
      v20 = 0x10024LL;
    *(__int16 *)((char *)&v30.m128i_i16[6] + 1) = (unsigned __int32)v19.m128i_i32[3] >> 8;
    v27[0] = 0;
    v30.m128i_i64[0] = v19.m128i_i64[0];
    v30.m128i_i32[2] = v9;
    v30.m128i_i8[0xC] = BYTE4(v9);
    v30.m128i_i8[0xF] = _mm_cvtsi128_si32(_mm_srli_si128(v19, 0xF));
    if ( BYTE4(v9) )
      v21 = (__m128i *)sub_14F07AC60(&v28);
    else
      v21 = (__m128i *)sub_14F07AB70(v29);
    v22 = *v21;
    v32 = 0;
    v31 = v22;
    sub_14F084650(&v8[8 * (unsigned int)_mm_cvtsi128_si32(v22) + 0x2008], &v28, &v30, v27);
    _InterlockedAdd((volatile signed __int32 *)((char *)v8 + v20), (unsigned __int8)v27[0]);
    v14 = v28.m128i_i32[0];
    v23 = *a2;
    v24 = a2->m128i_i64[1];
    v28.m128i_i32[1] = v28.m128i_i32[0] & 0x3FFFF;
    v28.m128i_i32[0] = (unsigned __int32)v28.m128i_i32[0] >> 0x12;
    v25 = v8[v28.m128i_u32[0] + 1] + (unsigned int)(2 * v28.m128i_i32[1]) + 2LL;
    if ( BYTE4(v24) )
    {
      sub_152B5CD6D(v25, v23.m128i_i64[0], 2LL * (unsigned int)v24);
      sub_14F0815D0(v25, (unsigned int)v24);
    }
    else
    {
      sub_152B5CD6D(v25, v23.m128i_i64[0], (unsigned int)v24);
      sub_14F0813C0(v25, (unsigned int)v24);
    }
  }
  else
  {
    v30 = *a2;
    if ( BYTE4(v9) )
      v15 = (__m128i *)sub_14F07AC60(&v28);
    else
      v15 = (__m128i *)sub_14F07AB70(v29);
    v16 = *v15;
    v32 = 0;
    v31 = v16;
    v17 = (char *)&v8[8 * (unsigned int)_mm_cvtsi128_si32(v16) + 0x2008];
    MEMORY[0x7FFCA4A16D20](v17);
    v18 = *(_DWORD *)sub_14F0865F0(v17, &v30);
    MEMORY[0x7FFCA4A16C60](v17);
    v14 = v18 & 0x7FFFFFFF;
  }
  *a1 = v14;
  result = a1;
  a1[1] = a4;
  return result;
}
// EP3  ArrayFull

_QWORD *__fastcall sub_14F07B710(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rbx
  char v5; // r14
  char *v6; // rsi
  volatile signed __int32 *v7; // r14
  __m128i *v8; // rax
  __m128i v9; // xmm0
  _QWORD *result; // rax
  char v11[4]; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v12; // [rsp+24h] [rbp-5Ch] BYREF
  char v13[13]; // [rsp+28h] [rbp-58h] BYREF
  __int16 v14; // [rsp+35h] [rbp-4Bh]
  char v15; // [rsp+37h] [rbp-49h]
  char v16[16]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h] BYREF
  int v18; // [rsp+50h] [rbp-30h]
  char v19; // [rsp+54h] [rbp-2Ch]
  __int16 v20; // [rsp+55h] [rbp-2Bh]
  char v21; // [rsp+57h] [rbp-29h]
  __m128i v22; // [rsp+58h] [rbp-28h]
  char v23; // [rsp+6Ch] [rbp-14h]

  v2 = a2 + 6;
  v4 = 0xFFFFFFFFFFFFFFFFuLL;
  if ( *(_BYTE *)(a2 + 4) )
  {
    v5 = 1;
    do
      ++v4;
    while ( *(_WORD *)(v2 + 2 * v4) );
  }
  else
  {
    v5 = 0;
    do
      ++v4;
    while ( *(_BYTE *)(v2 + v4) );
  }
  if ( byte_15A4B467C )
  {
    v6 = (char *)&unk_15A4B4840;
  }
  else
  {
    v6 = (char *)sub_14F07BC80(&unk_15A4B4840);
    byte_15A4B467C = 1;
  }
  v11[0] = 0;
  v17 = v2;
  v18 = v4;
  v19 = v5;
  v20 = v14;
  v21 = v15;
  if ( v5 )
  {
    v7 = (volatile signed __int32 *)(v6 + 0x10024);
    v8 = (__m128i *)sub_14F07AC60(v16);
  }
  else
  {
    v7 = (volatile signed __int32 *)(v6 + 0x10020);
    v8 = (__m128i *)sub_14F07AB70(v13);
  }
  v9 = *v8;
  v23 = 0;
  v22 = v9;
  sub_14F084650(&v6[0x40 * _mm_cvtsi128_si32(v9) + 0x10040], &v12, &v17, v11);
  _InterlockedAdd(v7, (unsigned __int8)v11[0]);
  result = a1;
  *a1 = v12;
  return result;
}

```


