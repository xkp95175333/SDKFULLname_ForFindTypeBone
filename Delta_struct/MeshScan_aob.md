---
ida debug F5 
---
```c
__int64 __fastcall sub_1437F7150(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm7_4
  char v8; // cl
  const char *v9; // rbx
  char v10; // cl
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // r8
  bool v14; // zf
  __int64 v15; // rdi
  __int64 v16; // rax
  float v17; // xmm0_4
  int v18; // xmm2_4
  __int64 v19; // rax
  float v20; // xmm1_4
  float v21; // xmm0_4
  __m128 v22; // xmm7
  __m128i v23; // xmm8
  __m128 v24; // xmm6
  __m128 v25; // xmm2
  __m128i v26; // xmm5
  __m128 v27; // xmm2
  __m128 v28; // xmm1
  unsigned __int64 v29; // xmm2_8
  int v30; // eax
  __int32 v31; // xmm1_4
  float *v32; // rbx
  float *v33; // rax
  float v34; // xmm1_4
  float v35; // xmm0_4
  __int64 v36; // rdi
  unsigned int v37; // edi
  __int64 v38; // rbx
  __int64 v39; // rax
  char v40; // al
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rbx
  __int64 v47; // [rsp+28h] [rbp-61h]
  __int64 v48[2]; // [rsp+50h] [rbp-39h] BYREF
  int v49; // [rsp+60h] [rbp-29h] BYREF
  __int64 v50[2]; // [rsp+68h] [rbp-21h] BYREF
  const char *v51; // [rsp+78h] [rbp-11h] BYREF
  float v52; // [rsp+80h] [rbp-9h]
  char v53; // [rsp+100h] [rbp+77h] BYREF
  char v54; // [rsp+108h] [rbp+7Fh] BYREF

  if ( !byte_1570058C0
    || !byte_15700AC2F
    || (v50[0] = a1,
        v48[0] = (__int64)"AIntCharacter",
        v54 = 0x16,
        result = sub_144D0D680(0x536FLL, v50, a2, v48, &v54),
        byte_15700AC2F != 2) )
  {
    v5 = *(double *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 0x158LL))(a1) + 0x620);
    v6 = v5 - *(float *)(a1 + 0x7D4);
    if ( v6 <= 0.0 )
      v6 = *(float *)(a1 + 0x7D8);
    v7 = *(float *)(a1 + 0x470);
    *(float *)(a1 + 0x7D8) = v6;
    *(float *)(a1 + 0x7D4) = v5;
    if ( (a2[0x2A] & 0x40) != 0 )
      *(_DWORD *)(a1 + 0x470) = a2[0x27];
    v53 = 0;
    v49 = 0xC2680000;
    if ( *((char *)a2 + 0xA8) < 0 )
    {
      v8 = 0;
      v9 = *(const char **)(a1 + 0x3D8);
      if ( *(_BYTE *)(a1 + 0x478) != *((_BYTE *)a2 + 0xA0) )
        v8 = 0x80;
      v10 = v9[0x3DB] | v8;
      if ( v10 < 0 || (v10 & 0x20) != 0 )
        v11 = 0x40;
      else
        v11 = 0;
      *((_BYTE *)v9 + 0x3DB) = v10 & 0xBF ^ (v11 | v10) & 0x40;
      v12 = *(unsigned __int8 *)(a1 + 0x478);
      v13 = *((unsigned __int8 *)a2 + 0xA0);
      if ( (_BYTE)v12 != (_BYTE)v13 )
        (*(void (__fastcall **)(__int64, __int64, __int64, char *, int *))(*(_QWORD *)a1 + 0x930LL))(
          a1,
          v12,
          v13,
          &v53,
          &v49);
      v14 = v53 == 0;
      *(_BYTE *)(a1 + 0x478) = *((_BYTE *)a2 + 0xA0);
      if ( !v14 )
      {
        LODWORD(v48[0]) = v49;
        if ( !byte_1570058C0
          || !byte_15700ABD3
          || (v51 = v9,
              v50[0] = (__int64)&unk_1514969E0,
              v54 = 0x16,
              sub_144D809E0(0x5313LL, &v51, v48, v50, &v54),
              byte_15700ABD3 != 2) )
        {
          if ( *((_QWORD *)v9 + 0xF2) && (*((_QWORD *)v9 + 0x1E) || sub_14E20A0F0(v9)) )
          {
            v15 = *((_QWORD *)v9 + 0xF2);
            *(_DWORD *)(v15 + 8) = *(_DWORD *)(v15 + 0xB8);
            v16 = *((_QWORD *)v9 + 0x1E);
            if ( !v16 )
              v16 = sub_14E20A0F0(v9);
            v17 = *(double *)(v16 + 0x610);
            *(float *)(v15 + 0x94) = v17 + 0.80000001;
            v18 = v48[0];
            *(_QWORD *)(v15 + 0x88) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
            *(_DWORD *)(v15 + 0x90) = v18;
            *(_BYTE *)(v15 + 0x98) = 1;
          }
          if ( byte_1570058C0 && byte_15700ABD4 )
          {
            v50[0] = (__int64)v9;
            v51 = (const char *)&unk_1514969E0;
            v54 = 0x16;
            sub_144D809E0(0x5314LL, v50, v48, &v51, &v54);
          }
        }
      }
    }
    v19 = *((_QWORD *)a2 + 0x15);
    if ( (v19 & 1) != 0 )
    {
      if ( (v19 & 0x40) != 0 )
      {
        v20 = 0.001;
        v21 = *((float *)a2 + 0x27) - v7;
        if ( v21 >= 0.001 )
          v20 = fminf(v21, 5.0);
        v24 = (__m128)*a2;
        v22 = (__m128)a2[1];
        v23 = (__m128i)a2[2];
        v22.m128_f32[0] = (float)(v22.m128_f32[0] - *(float *)(a1 + 0xA0)) * (float)(1.0 / v20);
        *(float *)v23.m128i_i32 = (float)(*(float *)v23.m128i_i32 - *(float *)(a1 + 0xA4)) * (float)(1.0 / v20);
        v24.m128_f32[0] = (float)(v24.m128_f32[0] - *(float *)(a1 + 0x9C)) * (float)(1.0 / v20);
        v25 = v22;
        v25.m128_f32[0] = (float)((float)(v22.m128_f32[0] * v22.m128_f32[0]) + (float)(v24.m128_f32[0] * v24.m128_f32[0]))
                        + (float)(*(float *)v23.m128i_i32 * *(float *)v23.m128i_i32);
        if ( v25.m128_f32[0] <= 25000000.0 )
        {
          v30 = _mm_cvtsi128_si32(v23);
          v29 = _mm_unpacklo_ps(v24, v22).m128_u64[0];
        }
        else
        {
          v26 = (__m128i)v25;
          *(float *)v26.m128i_i32 = fsqrt(v25.m128_f32[0]);
          *(float *)v26.m128i_i32 = (float)(1.0 / *(float *)v26.m128i_i32)
                                  + (float)((float)(1.0 / *(float *)v26.m128i_i32)
                                          * (float)(0.5
                                                  - (float)((float)(v25.m128_f32[0] * 0.5)
                                                          * (float)((float)(1.0 / *(float *)v26.m128i_i32)
                                                                  * (float)(1.0 / *(float *)v26.m128i_i32)))));
          *(float *)v26.m128i_i32 = (float)(*(float *)v26.m128i_i32
                                          + (float)(*(float *)v26.m128i_i32
                                                  * (float)(0.5
                                                          - (float)((float)(v25.m128_f32[0] * 0.5)
                                                                  * (float)(*(float *)v26.m128i_i32
                                                                          * *(float *)v26.m128i_i32)))))
                                  * 5000.0;
          v27 = (__m128)v26;
          v28 = (__m128)v26;
          v27.m128_f32[0] = *(float *)v26.m128i_i32 * v24.m128_f32[0];
          v28.m128_f32[0] = *(float *)v26.m128i_i32 * v22.m128_f32[0];
          *(float *)v26.m128i_i32 = *(float *)v26.m128i_i32 * *(float *)v23.m128i_i32;
          v29 = _mm_unpacklo_ps(v27, v28).m128_u64[0];
          v30 = _mm_cvtsi128_si32(v26);
        }
        COERCE_FLOAT(v31 = _mm_load_si128((const __m128i *)&xmmword_1506C6D00).m128i_i32[0]);
        *(_QWORD *)(a1 + 0x920) = v29;
        *(_DWORD *)(a1 + 0x928) = v30;
        if ( COERCE_FLOAT(*a2 & v31) <= 0.000099999997
          && COERCE_FLOAT(a2[1] & v31) <= 0.000099999997
          && COERCE_FLOAT(a2[2] & v31) <= 0.000099999997 )
        {
          *(_QWORD *)(a1 + 0x920) = qword_1573AC290;
          *(_DWORD *)(a1 + 0x928) = dword_1573AC298;
        }
      }
      if ( !byte_1570058C0
        || !byte_15700ACA0
        || (v50[0] = a1,
            v51 = "AIntCharacter",
            v54 = 0x16,
            sub_144CDB570(0x53E0LL, v50, a2, &v51, &v54),
            byte_15700ACA0 != 2) )
      {
        sub_1437FEB00(a1, a2);
        if ( !byte_1570058C0
          || !byte_15700ACA1
          || (v50[0] = a1,
              v51 = "AIntCharacter",
              v54 = 0x16,
              sub_144CDB570(0x53E1LL, v50, a2, &v51, &v54),
              byte_15700ACA1 != 2) )
        {
          if ( (*(_BYTE *)(a1 + 0x798) & 1) != 0 )
          {
            v32 = (float *)sub_14E1D7E80(v50, *(_QWORD *)(a1 + 0x3D8));
            v33 = (float *)sub_143397650(a1 + 0x9C, v48);
            v34 = v32[1] + v33[1];
            *(float *)&v51 = *v32 + *v33;
            v35 = v32[2] + v33[2];
            *((float *)&v51 + 1) = v34;
            v52 = v35;
            sub_143428BE0(a1 + 0x9C, &v51);
          }
          if ( byte_1570058C0 && byte_15700ACA2 )
          {
            v50[0] = a1;
            v51 = "AIntCharacter";
            v54 = 0x16;
            sub_144CDB570(0x53E2LL, v50, a2, &v51, &v54);
          }
        }
      }
    }
    if ( (a2[0x2A] & 2) != 0 )
    {
      *(_OWORD *)(a1 + 0x418) = *(_OWORD *)(a2 + 0xE);
      *(_OWORD *)(a1 + 0x428) = *(_OWORD *)(a2 + 0x12);
      *(_OWORD *)(a1 + 0x438) = *(_OWORD *)(a2 + 0x16);
      v36 = *(_QWORD *)(a1 + 0x418);
      if ( v36 )
      {
        v37 = *(_DWORD *)(v36 + 0x24);
        if ( (int)v37 >= (int)qword_1574000BC )
        {
          v39 = 0LL;
        }
        else
        {
          v38 = (int)((__int64 (__fastcall *)(_QWORD))sub_140A85F50)(v37);
          v39 = *(_QWORD *)(qword_1574000C8 + 8 * v38)
              + 0x18LL * (int)((__int64 (__fastcall *)(_QWORD))sub_140A86750)(v37);
        }
        if ( (*(_DWORD *)(v39 + 8) & 0x30000000) != 0 )
          *(_QWORD *)(a1 + 0x418) = 0LL;
      }
    }
    if ( (a2[0x2A] & 4) != 0 )
    {
      v40 = *((_BYTE *)a2 + 0x82);
      if ( *(_BYTE *)(a1 + 0x7C6) != v40 || v40 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 0x920LL))(a1);
      *(_OWORD *)(a1 + 0x7AC) = *(_OWORD *)(a2 + 0x1A);
      *(_OWORD *)(a1 + 0x7BC) = *(_OWORD *)(a2 + 0x1E);
    }
    if ( (a2[0x2A] & 8) != 0 )
      *(_QWORD *)(a1 + 0x7A4) = *((_QWORD *)a2 + 0x11);
    if ( (a2[0x2A] & 0x20) != 0 )
    {
      v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 0xDD0LL))(a1);
      *(_DWORD *)(v41 + 0x1D8) = *(_DWORD *)(v41 + 0x1A4);
      *(_DWORD *)(v41 + 0x1A4) = a2[0x26];
      if ( *(_BYTE *)(a1 + 0x978) )
      {
        if ( !byte_1570058C0
          || !byte_15700AC66
          || (v50[0] = a1,
              v51 = "AIntCharacter",
              v54 = 0x16,
              sub_144CEB360(0x53A6LL, v50, &v51, &v54),
              byte_15700AC66 != 2) )
        {
          if ( *(_BYTE *)(a1 + 0x130) == 1 )
          {
            v42 = *(_QWORD *)(a1 + 0x3D8);
            if ( v42 )
              *(_BYTE *)(v42 + 0x241) &= ~0x80u;
          }
          if ( byte_1570058C0 && byte_15700AC67 )
          {
            v50[0] = a1;
            v51 = "AIntCharacter";
            v54 = 0x16;
            sub_144CEB360(0x53A7LL, v50, &v51, &v54);
          }
        }
      }
    }
    if ( (a2[0x2A] & 0x100LL) != 0 )
    {
      *(_DWORD *)(a1 + 0x480) ^= ((unsigned __int8)*(_DWORD *)(a1 + 0x480) ^ *((_BYTE *)a2 + 0xA1)) & 1;
      if ( (unsigned __int8)byte_156FC87B0 >= 6u )
        sub_14C828730(
          "Unknown",
          0x534LL,
          &unk_156FC87B4,
          6LL,
          L"ReplicateFrom|ReplicatedbIsCrouched=%d",
          *((unsigned __int8 *)a2 + 0xA1));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 0x808LL))(a1);
    }
    if ( (a2[0x2A] & 0x200LL) != 0 )
    {
      *(_DWORD *)(a1 + 0x79C) = *((unsigned __int8 *)a2 + 0xA2);
      if ( (unsigned __int8)byte_156FC87B0 >= 6u )
      {
        LODWORD(v47) = *((unsigned __int8 *)a2 + 0xA2);
        sub_14C828730("Unknown", 0x53BLL, &unk_156FC87B4, 6LL, L"ReplicateFrom|ReplicatedbIsProned=%d", v47);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 0x908LL))(a1);
    }
    if ( (a2[0x2A] & 0x800LL) != 0 )
    {
      *(_DWORD *)(a1 + 0x7A0) ^= ((unsigned __int8)*(_DWORD *)(a1 + 0x7A0) ^ *((_BYTE *)a2 + 0xA4)) & 1;
      if ( (unsigned __int8)byte_156FC87B0 >= 6u )
      {
        LODWORD(v47) = *((unsigned __int8 *)a2 + 0xA4);
        sub_14C828730("Unknown", 0x542LL, &unk_156FC87B4, 6LL, L"ReplicateFrom|ReplicatedbIsSupined=%d", v47);
      }
    }
    result = a2[0x2A];
    if ( (result & 0x400) != 0 )
    {
      result = *(unsigned int *)(a1 + 0x7A0);
      *(_DWORD *)(a1 + 0x7A0) = result ^ ((unsigned __int8)result ^ (unsigned __int8)(2 * *((_BYTE *)a2 + 0xA3))) & 2;
    }
    if ( (a2[0x2A] & 1) != 0 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 0x420LL))(a1);
    if ( (a2[0x2A] & 2) != 0 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 0x7F0LL))(a1);
    if ( (a2[0x2A] & 0x40) != 0 )
      result = sub_1437ED330(*(_QWORD *)(a1 + 0x3D8));
    if ( (a2[0x2A] & 4) != 0 )
    {
      if ( !byte_1570058C0
        || !byte_15700AC3B
        || (v50[0] = a1,
            v51 = "AIntCharacter",
            v54 = 0x16,
            result = sub_144CEB360(0x537BLL, v50, &v51, &v54),
            byte_15700AC3B != 2) )
      {
        v43 = sub_14E3D1D00(&v51, a1 + 0x7AC, a1);
        v44 = *(_DWORD *)(v43 + 8);
        *(_QWORD *)(a1 + 0x7AC) = *(_QWORD *)v43;
        *(_DWORD *)(a1 + 0x7B4) = v44;
        result = sub_14E3D1D00(&v51, a1 + 0x7B8, a1);
        v45 = *(_DWORD *)(result + 8);
        *(_QWORD *)(a1 + 0x7B8) = *(_QWORD *)result;
        *(_DWORD *)(a1 + 0x7C0) = v45;
        if ( byte_1570058C0 )
        {
          if ( byte_15700AC3C )
          {
            v50[0] = a1;
            v51 = "AIntCharacter";
            v54 = 0x16;
            result = sub_144CEB360(0x537CLL, v50, &v51, &v54);
          }
        }
      }
    }
    if ( (a2[0x2A] & 0x20) != 0 )
    {
      v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 0xDD0LL))(a1);
      result = sub_14325E630(v46);
      if ( (unsigned __int8)byte_156E2A100 >= 8u )
        result = sub_14C828730(
                   "Unknown",
                   0x566LL,
                   &unk_156E2A104,
                   8LL,
                   L"[ReplicateFrom]STS: %f, ItemValue: %u, ViewInfo{Pitch: %f, Yaw: %f)",
                   *((float *)a2 + 0x27),
                   a2[0x26],
                   *(float *)(v46 + 0x1DC),
                   *(float *)(v46 + 0x1E0));
    }
    if ( (a2[0x2A] & 0x10) != 0 )
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a2 + 0x12) + 8LL))(*((_QWORD *)a2 + 0x12), a1);
    if ( v53 )
    {
      result = *(_QWORD *)(a1 + 0x3D8);
      if ( result )
      {
        *(_DWORD *)(*(_QWORD *)(result + 0x790) + 8LL) = *(_DWORD *)(*(_QWORD *)(result + 0x790) + 0xB8LL);
        result = sub_1437EB3A0(a1);
      }
    }
    if ( byte_1570058C0 )
    {
      if ( byte_15700AC33 )
      {
        v50[0] = a1;
        v51 = "AIntCharacter";
        v54 = 0x16;
        return sub_144D0D680(0x5373LL, v50, a2, &v51, &v54);
      }
    }
  }
  return result;
}

```
