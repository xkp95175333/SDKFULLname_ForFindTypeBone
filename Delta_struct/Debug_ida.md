
---
GetGname
---

```c

__int64 __fastcall sub_1452CD550(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r13
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  const _QWORD *v13; // r12
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  int v26; // ebx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // [rsp+40h] [rbp-48h] BYREF
  char v48[64]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v50; // [rsp+98h] [rbp+10h] BYREF
  __int64 v51; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 0x20);
  if ( !v3 )
    return 0LL;
  v6 = a3[0x1E];
  if ( !v6 && (v6 = sub_14E20B010(a3)) == 0
    || (v10 = sub_14EE69560(),
        v7 = *(_QWORD *)(v6 + 8),
        v9 = v10 + 0x30,
        v11 = *(int *)(v10 + 0x38),
        (int)v11 > *(_DWORD *)(v7 + 0x38))
    || (v8 = v11, *(_QWORD *)(*(_QWORD *)(v7 + 0x30) + 8 * v11) != v9) )
  {
    if ( (unsigned __int8)qword_156A1DE80(v8, v7, v9) )
    {
      v50 = unk_156A20E88;
      LOBYTE(v50) = byte_156A20E8F ^ 0x36;
      HIBYTE(v50) = unk_156A20E88 ^ 0x36;
      v6 = v50;
    }
    else
    {
      v6 = qword_156A1EE88;
    }
  }
  v12 = a3[0x54];
  if ( !v12 )
    return 0LL;
  if ( *(_DWORD *)(a2 + 0x18) )
    v13 = (const _QWORD *)qword_15684B640(a2 + 0x10);
  else
    v13 = &word_1506C9058;
  v51 = *(_QWORD *)(v3 + 8);
  v14 = 0LL;
  v15 = *(_QWORD *)(v6 + 0xF8);
  if ( !v15 )
  {
    v16 = 0LL;
    goto LABEL_25;
  }
  v16 = v15 & 0xFFFFFFFFFFFFLL;
  v17 = HIWORD(v15) & 0x3FFF;
  v50 = v15 & 0xFFFFFFFFFFFFLL;
  if ( v15 < 0 )
  {
    switch ( dword_15684B664 )
    {
      case 1:
        sub_140A8D550(qword_1573D8CC0, &v50, 4LL, HIWORD(v15) & 0x3FFF);
        goto LABEL_23;
      case 2:
        v18 = qword_1573D8CC8;
        v19 = (unsigned int)v17;
        break;
      case 3:
        v18 = qword_1573D8CD0[v17];
        v19 = (unsigned int)v17;
        break;
      default:
        goto LABEL_23;
    }
    (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v18 + 0x40))(&v50, 4LL, v19, *(_QWORD *)(v18 + 8));
LABEL_23:
    v16 = v50 & 0xFFFFFFFFFFFFLL;
    if ( (v50 & 0x800000000000LL) != 0 )
      v16 = v50 & 0xFFFFFFFFFFFFLL | 0xFFFF000000000000uLL;
  }
LABEL_25:
  v20 = (_QWORD *)sub_14C8D5980(v48, v13, 1LL);
  sub_14CC43870(&v47, v16, v51, *v20);
  if ( !*(_BYTE *)(a1 + 8) )
  {
    v26 = v47;
    v27 = v12;
    if ( v12 == 0xFFFFFFFFFFFFFFFFuLL )
      v27 = sub_14CBE0B40();
    v28 = sub_14CC4EDC0(v3, v27, v26, 0xFFFFFFF, 0LL, 0, 0x7F800000);
    v24 = v28;
    if ( v28 )
    {
      sub_14E2118D0(v28, v6);
      goto LABEL_36;
    }
    return 0LL;
  }
  v21 = sub_1452D3330(v6);
  if ( !v21 )
  {
    if ( (unsigned __int8)byte_1570634F0 >= 2u )
      sub_14C828D30(
        (unsigned int)L"ordAsyncEndOfFrame is also enabled.",
        0x1CD,
        (unsigned int)&unk_1570634F4,
        2,
        (__int64)&unk_151F6F060);
    return 0LL;
  }
  v22 = sub_1452D3390(v21 + 0x88, a3[0x52], v6);
  v23 = sub_1452D4620(v22, a2);
  v24 = v23;
  if ( !v23 )
    return 0LL;
  sub_14E0613E0(v12, v23);
LABEL_36:
  v29 = sub_14EE33580();
  v31 = *(_QWORD *)(v24 + 8);
  v32 = v29 + 0x30;
  v33 = *(int *)(v29 + 0x38);
  if ( (int)v33 > *(_DWORD *)(v31 + 0x38) )
    goto LABEL_51;
  v30 = v33;
  if ( *(_QWORD *)(*(_QWORD *)(v31 + 0x30) + 8 * v33) != v32 || !v24 )
    goto LABEL_51;
  sub_14E2DEC30(v24, (unsigned int)&xmmword_1573A97F0, 0, 0, 0);
  v34 = *(_QWORD *)(v12 + 0x180);
  v51 = 0LL;
  if ( v34 )
  {
    v14 = v34 & 0xFFFFFFFFFFFFLL;
    v35 = HIWORD(v34) & 0x3FFF;
    v50 = v34 & 0xFFFFFFFFFFFFLL;
    if ( (v34 & 0x8000000000000000uLL) != 0LL )
    {
      switch ( dword_15684B664 )
      {
        case 1:
          sub_140A8D550(qword_1573D8CC0, &v50, 4LL, HIWORD(v34) & 0x3FFF);
          goto LABEL_48;
        case 2:
          v36 = qword_1573D8CC8;
          v37 = (unsigned int)v35;
          break;
        case 3:
          v37 = HIWORD(v34) & 0x3FFF;
          v36 = qword_1573D8CD0[v35];
          break;
        default:
          goto LABEL_48;
      }
      (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v36 + 0x40))(&v50, 4LL, v37, *(_QWORD *)(v36 + 8));
LABEL_48:
      v14 = v50 & 0xFFFFFFFFFFFFLL;
      if ( (v50 & 0x800000000000LL) != 0 )
        v14 = v50 & 0xFFFFFFFFFFFFLL | 0xFFFF000000000000uLL;
    }
  }
  sub_14E2BC270(v24, v14, &dword_157533678, v51);
LABEL_51:
  v38 = sub_14EE004F0(v30, v31, v32);
  v40 = *(_QWORD *)(v24 + 8);
  v41 = v38 + 0x30;
  v42 = *(int *)(v38 + 0x38);
  if ( (int)v42 <= *(_DWORD *)(v40 + 0x38) )
  {
    v39 = v42;
    if ( *(_QWORD *)(*(_QWORD *)(v40 + 0x30) + 8 * v42) == v41 )
    {
      if ( v24 )
        *(_BYTE *)(v24 + 0xCB) &= ~0x10u;
    }
  }
  v43 = sub_14EE3B3C0(v39, v40, v41);
  v44 = *(_QWORD *)(v24 + 8);
  v45 = v43 + 0x30;
  v46 = *(int *)(v43 + 0x38);
  if ( (int)v46 <= *(_DWORD *)(v44 + 0x38) && *(_QWORD *)(*(_QWORD *)(v44 + 0x30) + 8 * v46) == v45 )
  {
    if ( v24 )
    {
      sub_14E2DCC80(v24, 2LL);
      sub_14E2DCA50(v24, 0LL);
    }
  }
  return v24;
}

```
---

Fun Bone 
---


```c

__int64 __fastcall sub_14E2CBA30(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v5; // xmm0_8
  __int64 v6; // rcx
  __m128 v7; // xmm5
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm5
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __int128 v14; // xmm6
  unsigned __int64 *v15; // rax
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __int64 result; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+2Ch] [rbp-3Ch] BYREF
  char v21[16]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 0x18C);
  v19 = *(_QWORD *)(a1 + 0x184);
  v5 = *(_QWORD *)(a1 + 0x178);
  v6 = a1 + 0x200;
  v20 = v5;
  if ( *(float *)&v5 != *(float *)v6
    || *((float *)&v20 + 1) != *(float *)(v6 + 4)
    || *(float *)(a1 + 0x180) != *(float *)(v6 + 8) )
  {
    v7 = _mm_movelh_ps(
           _mm_unpacklo_ps(
             (__m128)*(unsigned __int64 *)(a1 + 0x178),
             _mm_shuffle_ps((__m128)*(unsigned __int64 *)(a1 + 0x178), (__m128)*(unsigned __int64 *)(a1 + 0x178), 0x55)),
           (__m128)*(unsigned int *)(a1 + 0x180));
    v20 = *(_QWORD *)(a1 + 0x178);
    v8 = _mm_div_ps(v7, (__m128)xmmword_157530CE0);
    v9 = _mm_cvtepi32_ps(_mm_cvttps_epi32(v8));
    v10 = _mm_sub_ps(
            v7,
            _mm_mul_ps(
              _mm_xor_ps(
                _mm_and_ps(
                  _mm_cmple_ps((__m128)xmmword_157530CF0, _mm_and_ps(v8, (__m128)xmmword_157530A20)),
                  _mm_xor_ps(v9, v8)),
                v9),
              (__m128)xmmword_157530CE0));
    v11 = _mm_add_ps((__m128)xmmword_157530CE0, v10);
    v12 = _mm_xor_ps(_mm_and_ps(_mm_xor_ps(v11, v10), _mm_cmple_ps((__m128)0LL, v10)), v11);
    v13 = _mm_xor_ps(
            _mm_and_ps(
              _mm_xor_ps(_mm_sub_ps(v12, (__m128)xmmword_157530CE0), v12),
              _mm_cmplt_ps((__m128)xmmword_157530CD0, v12)),
            v12);
    *(_QWORD *)v6 = _mm_unpacklo_ps(v13, _mm_shuffle_ps(v13, v13, 0x55)).m128_u64[0];
    *(_DWORD *)(v6 + 8) = _mm_shuffle_ps(v13, v13, 0xAA).m128_u32[0];
    *(_OWORD *)(a1 + 0x1F0) = *(_OWORD *)sub_14C8333D0(v6, v21);
  }
  v14 = *(_OWORD *)(a1 + 0x1F0);
  v15 = (unsigned __int64 *)sub_140EC11E0(a1, &v20);
  v16 = (__m128)*((unsigned int *)v15 + 2);
  v17 = (__m128)*v15;
  result = a2;
  *(__m128 *)(a2 + 0x10) = _mm_movelh_ps(v17, v16);
  *(_OWORD *)a2 = v14;
  *(__m128 *)(a2 + 0x20) = _mm_movelh_ps((__m128)v19, (__m128)_mm_cvtsi32_si128(v3));
  return result;
}

```
---
fun Get Genam This is fun Encore amd Xmm pointer offset 
---

```c
// ZoneEncore
else
  {
    sub_150266D5D(a2, v4, v3);
    sub_14C8E07C0(a2, *(unsigned __int16 *)a1 >> 6);
    result = *(unsigned __int16 *)a1 >> 6;
    if ( (_DWORD)result )
    {
      v7 = &a2[result];
      v8 = &a2[2 * result];
      do
      {
        v9 = (char)*--v7;
        *((_WORD *)v8 + 0xFFFFFFFF) = v9;
        v8 += 0xFFFFFFFE;
        v10 = (_DWORD)result == 1;
        result = (unsigned int)(result - 1);
      }
      while ( !v10 );
    }
  }
//encore Type 1 byte char*


__int64 __fastcall sub_14C8E07C0(_BYTE *a1, unsigned int a2)
{
  __int64 result; // rax

  result = 9 * (a2 / 9);
  switch ( a2 % 9 )
  {
    case 0u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 & 0x1F) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 1u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 ^ 0xDF) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 2u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 | 0xCF) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 3u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(0x21 * a2 + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 4u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 >> 2) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 5u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(3 * (a2 - 0x29)) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 6u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + ((4 * a2) | 5) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 7u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + ((a2 >> 4) | 7) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 8u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 ^ 0xC) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    default:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 ^ 0x40) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
  }
  return result;
}


//encode name  _WORD
if ( (*a1 & 1) != 0 )
  {
    sub_150266D5D(a2, v4, 2 * v3);
    return sub_14C8E09D0(a2, *(unsigned __int16 *)a1 >> 6);
  }
  
__int64 __fastcall sub_14C8E09D0(_WORD *a1, unsigned int a2)
{
  __int64 result; // rax

  result = 9 * (a2 / 9);
  switch ( a2 % 9 )
  {
    case 0u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 & 0x1F) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 1u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 ^ 0xDF) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 2u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 | 0xCF) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 3u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(0x21 * a2 + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 4u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 >> 2) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 5u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(3 * a2 + 0x85) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 6u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + ((4 * a2) | 5) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 7u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + ((a2 >> 4) | 7) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 8u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 ^ 0xC) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    default:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 ^ 0x40) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
  }
  return result;
}


```
---
fun Get Genam ASm_log All
---

```asm


	__int64 __fastcall sub_14C8E9560(_DWORD *a1, __int64 a2)
	{
	  unsigned int v3; // ebx
	  _QWORD *v4; // rdx
	  unsigned __int16 *v5; // rbx
	  int v7; // [rsp+34h] [rbp+Ch]

	  v3 = *a1 >> 0x12;
	  v7 = *a1 & 0x3FFFF;
	  if ( byte_1573DCB2C )
	  {
		v4 = &unk_1573DCE00;
	  }
	  else
	  {
		v4 = (_QWORD *)sub_14C8D5BE0(&unk_1573DCE00);
		byte_1573DCB2C = 1;
	  }
	  v5 = (unsigned __int16 *)(v4[v3 + 1] + (unsigned int)(2 * v7));
	  sub_14C8DE5A0(v5, a2);
	  *(_WORD *)(a2 + 2 * ((unsigned __int64)*v5 >> 6)) = 0;
	  return *v5 >> 6;
	}
	//asm
	.text:000000014C8E9560                         ; __int64 __fastcall sub_14C8E9560(_DWORD *, __int64)
	.text:000000014C8E9560                         sub_14C8E9560   proc near               ; CODE XREF: sub_14CC64FA0+34C↓p
	.text:000000014C8E9560
	.text:000000014C8E9560                         arg_0           = qword ptr  8
	.text:000000014C8E9560                         arg_8           = qword ptr  10h
	.text:000000014C8E9560
	.text:000000014C8E9560 48 89 5C 24 10                          mov     [rsp+10h], rbx
	.text:000000014C8E9565 57                                      push    rdi
	.text:000000014C8E9566 48 83 EC 20                             sub     rsp, 20h
	.text:000000014C8E956A 8B 01                                   mov     eax, [rcx]
	.text:000000014C8E956C 48 8B FA                                mov     rdi, rdx
	.text:000000014C8E956F 8B D8                                   mov     ebx, eax
	.text:000000014C8E9571 25 FF FF 03 00                          and     eax, 3FFFFh
	.text:000000014C8E9576 C1 EB 12                                shr     ebx, 12h
	.text:000000014C8E9579 80 3D AC 35 AF 0A 00                    cmp     cs:byte_1573DCB2C, 0
	.text:000000014C8E9580 89 5C 24 30                             mov     [rsp+30h], ebx
	.text:000000014C8E9584 89 44 24 34                             mov     [rsp+34h], eax
	.text:000000014C8E9588 74 09                                   jz      short loc_14C8E9593
	.text:000000014C8E958A 48 8D 15 6F 38 AF 0A                    lea     rdx, unk_1573DCE00
	.text:000000014C8E9591 EB 16                                   jmp     short loc_14C8E95A9
	.text:000000014C8E9593                         ; ---------------------------------------------------------------------------
	.text:000000014C8E9593
	.text:000000014C8E9593                         loc_14C8E9593:                          ; CODE XREF: sub_14C8E9560+28↑j
	.text:000000014C8E9593 48 8D 0D 66 38 AF 0A                    lea     rcx, unk_1573DCE00
	.text:000000014C8E959A E8 41 C6 FE FF                          call    sub_14C8D5BE0
	.text:000000014C8E959F 48 8B D0                                mov     rdx, rax
	.text:000000014C8E95A2 C6 05 83 35 AF 0A 01                    mov     cs:byte_1573DCB2C, 1
	.text:000000014C8E95A9
	.text:000000014C8E95A9                         loc_14C8E95A9:                          ; CODE XREF: sub_14C8E9560+31↑j
	.text:000000014C8E95A9 48 8B 44 24 30                          mov     rax, [rsp+30h]
	.text:000000014C8E95AE 8B CB                                   mov     ecx, ebx
	.text:000000014C8E95B0 48 C1 E8 20                             shr     rax, 20h
	.text:000000014C8E95B4 8D 1C 00                                lea     ebx, [rax+rax]
	.text:000000014C8E95B7 48 03 5C CA 08                          add     rbx, [rdx+rcx*8+8]
	.text:000000014C8E95BC 48 8B D7                                mov     rdx, rdi
	.text:000000014C8E95BF 48 8B CB                                mov     rcx, rbx
	.text:000000014C8E95C2 E8 D9 4F FF FF                          call    sub_14C8DE5A0
	.text:000000014C8E95C7 0F B7 03                                movzx   eax, word ptr [rbx]
	.text:000000014C8E95CA 33 C9                                   xor     ecx, ecx
	.text:000000014C8E95CC 48 C1 E8 06                             shr     rax, 6
	.text:000000014C8E95D0 66 89 0C 47                             mov     [rdi+rax*2], cx
	.text:000000014C8E95D4 0F B7 03                                movzx   eax, word ptr [rbx]
	.text:000000014C8E95D7 48 8B 5C 24 38                          mov     rbx, [rsp+38h]
	.text:000000014C8E95DC C1 E8 06                                shr     eax, 6
	.text:000000014C8E95DF 48 83 C4 20                             add     rsp, 20h
	.text:000000014C8E95E3 5F                                      pop     rdi
	.text:000000014C8E95E4 C3                                      retn
	.text:000000014C8E95E4                         sub_14C8E9560   endp
	.text:000000014C8E95E4
	.text:000000014C8E95E4                         ; ---------------------------------------------------------------------------
	.text:000000014C8E95E5 CC CC CC CC CC CC CC CC…                align 10h


__int64 __fastcall sub_14C8E95F0(_WORD *a1, __int64 a2)
{
  _WORD *v3; // rdx
  unsigned __int64 v4; // r8
  unsigned int v5; // edi
  signed int v6; // eax
  __int64 v7; // rax
  signed int v8; // eax
  int v9; // eax
  _WORD v11[1024]; // [rsp+30h] [rbp-818h] BYREF

  v3 = a1 + 1;
  v4 = (unsigned __int64)(unsigned __int16)*a1 >> 6;
  v5 = (unsigned __int16)*a1 >> 6;
  if ( (*a1 & 1) != 0 )
  {
    sub_150266D5D(v11, v3, 2 * v4);
    sub_14C8E09D0(v11, v5);
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    if ( v11[0] && v5 )
    {
      sub_140A82420(a2, v5 + 1);
      v6 = v5 + *(_DWORD *)(a2 + 8) + 1;
      *(_DWORD *)(a2 + 8) = v6;
      if ( v6 > *(_DWORD *)(a2 + 0xC) )
        sub_140A82340(a2);
      v7 = qword_15684B640(a2);
      sub_14C785530(v7, v11, 2LL * v5);
LABEL_12:
      *(_WORD *)(qword_15684B640(a2) + 2LL * *(int *)(a2 + 8) - 2) = 0;
    }
  }
  else
  {
    sub_150266D5D(v11, v3, v4);
    sub_14C8E07C0(v11, v5);
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    if ( LOBYTE(v11[0]) && v5 )
    {
      sub_140A82420(a2, v5 + 1);
      v8 = v5 + *(_DWORD *)(a2 + 8) + 1;
      *(_DWORD *)(a2 + 8) = v8;
      if ( v8 > *(_DWORD *)(a2 + 0xC) )
        sub_140A82340(a2);
      v9 = qword_15684B640(a2);
      sub_140A863F0(v9, v5, (unsigned int)v11, v5, 0x3F);
      goto LABEL_12;
    }
  }
  return a2;
}

.text:000000014C8E95F0                         ; __int64 __fastcall sub_14C8E95F0(_WORD *, __int64)
.text:000000014C8E95F0                         sub_14C8E95F0   proc near               ; CODE XREF: sub_14A997060+CD8↑p
.text:000000014C8E95F0                                                                 ; sub_14C8C6550+26B↑p ...
.text:000000014C8E95F0
.text:000000014C8E95F0                         var_828         = word ptr -828h
.text:000000014C8E95F0                         var_818         = word ptr -818h
.text:000000014C8E95F0                         var_18          = qword ptr -18h
.text:000000014C8E95F0                         var_8           = byte ptr -8
.text:000000014C8E95F0                         arg_10          = qword ptr  18h
.text:000000014C8E95F0                         arg_18          = qword ptr  20h
.text:000000014C8E95F0
.text:000000014C8E95F0 48 89 5C 24 18                          mov     [rsp+18h], rbx
.text:000000014C8E95F5 48 89 74 24 20                          mov     [rsp+20h], rsi
.text:000000014C8E95FA 57                                      push    rdi
.text:000000014C8E95FB 48 81 EC 40 08 00 00                    sub     rsp, 840h
.text:000000014C8E9602 48 8B 05 F7 CB 4D 0A                    mov     rax, cs:qword_156DC6200
.text:000000014C8E9609 48 33 C4                                xor     rax, rsp
.text:000000014C8E960C 48 89 84 24 30 08 00 00                 mov     [rsp+830h], rax
.text:000000014C8E9614 0F B7 01                                movzx   eax, word ptr [rcx]
.text:000000014C8E9617 48 8B DA                                mov     rbx, rdx
.text:000000014C8E961A 44 8B C0                                mov     r8d, eax
.text:000000014C8E961D 48 8D 51 02                             lea     rdx, [rcx+2]
.text:000000014C8E9621 8B F8                                   mov     edi, eax
.text:000000014C8E9623 49 C1 E8 06                             shr     r8, 6
.text:000000014C8E9627 C1 EF 06                                shr     edi, 6
.text:000000014C8E962A 48 8D 4C 24 30                          lea     rcx, [rsp+30h]
.text:000000014C8E962F A8 01                                   test    al, 1
.text:000000014C8E9631 74 71                                   jz      short loc_14C8E96A4
.text:000000014C8E9633 4D 03 C0                                add     r8, r8
.text:000000014C8E9636 E8 22 D7 97 03                          call    sub_150266D5D
.text:000000014C8E963B 8B D7                                   mov     edx, edi
.text:000000014C8E963D 48 8D 4C 24 30                          lea     rcx, [rsp+30h]
.text:000000014C8E9642 E8 89 73 FF FF                          call    sub_14C8E09D0
.text:000000014C8E9647 33 F6                                   xor     esi, esi
.text:000000014C8E9649 48 89 33                                mov     [rbx], rsi
.text:000000014C8E964C 48 89 73 08                             mov     [rbx+8], rsi
.text:000000014C8E9650 66 39 74 24 30                          cmp     [rsp+30h], si
.text:000000014C8E9655 0F 84 C5 00 00 00                       jz      loc_14C8E9720
.text:000000014C8E965B 85 FF                                   test    edi, edi
.text:000000014C8E965D 0F 84 BD 00 00 00                       jz      loc_14C8E9720
.text:000000014C8E9663 8D 57 01                                lea     edx, [rdi+1]
.text:000000014C8E9666 48 8B CB                                mov     rcx, rbx
.text:000000014C8E9669 E8 B2 8D 19 F4                          call    sub_140A82420
.text:000000014C8E966E 8B 53 08                                mov     edx, [rbx+8]
.text:000000014C8E9671 8D 42 01                                lea     eax, [rdx+1]
.text:000000014C8E9674 03 C7                                   add     eax, edi
.text:000000014C8E9676 89 43 08                                mov     [rbx+8], eax
.text:000000014C8E9679 3B 43 0C                                cmp     eax, [rbx+0Ch]
.text:000000014C8E967C 7E 08                                   jle     short loc_14C8E9686
.text:000000014C8E967E 48 8B CB                                mov     rcx, rbx
.text:000000014C8E9681 E8 BA 8C 19 F4                          call    sub_140A82340
.text:000000014C8E9686
.text:000000014C8E9686                         loc_14C8E9686:                          ; CODE XREF: sub_14C8E95F0+8C↑j
.text:000000014C8E9686 48 8B CB                                mov     rcx, rbx
.text:000000014C8E9689 FF 15 B1 1F F6 09                       call    cs:qword_15684B640
.text:000000014C8E968F 44 8B C7                                mov     r8d, edi
.text:000000014C8E9692 48 8D 54 24 30                          lea     rdx, [rsp+30h]  ; _QWORD
.text:000000014C8E9697 4D 03 C0                                add     r8, r8          ; _QWORD
.text:000000014C8E969A 48 8B C8                                mov     rcx, rax        ; _QWORD
.text:000000014C8E969D E8 8E BE E9 FF                          call    sub_14C785530
.text:000000014C8E96A2 EB 6A                                   jmp     short loc_14C8E970E
.text:000000014C8E96A4                         ; ---------------------------------------------------------------------------
.text:000000014C8E96A4
.text:000000014C8E96A4                         loc_14C8E96A4:                          ; CODE XREF: sub_14C8E95F0+41↑j
.text:000000014C8E96A4 E8 B4 D6 97 03                          call    sub_150266D5D
.text:000000014C8E96A9 8B D7                                   mov     edx, edi
.text:000000014C8E96AB 48 8D 4C 24 30                          lea     rcx, [rsp+30h]
.text:000000014C8E96B0 E8 0B 71 FF FF                          call    sub_14C8E07C0
.text:000000014C8E96B5 33 F6                                   xor     esi, esi
.text:000000014C8E96B7 48 89 33                                mov     [rbx], rsi
.text:000000014C8E96BA 48 89 73 08                             mov     [rbx+8], rsi
.text:000000014C8E96BE 40 38 74 24 30                          cmp     [rsp+30h], sil
.text:000000014C8E96C3 74 5B                                   jz      short loc_14C8E9720
.text:000000014C8E96C5 85 FF                                   test    edi, edi
.text:000000014C8E96C7 74 57                                   jz      short loc_14C8E9720
.text:000000014C8E96C9 8D 57 01                                lea     edx, [rdi+1]
.text:000000014C8E96CC 48 8B CB                                mov     rcx, rbx
.text:000000014C8E96CF E8 4C 8D 19 F4                          call    sub_140A82420
.text:000000014C8E96D4 8B 53 08                                mov     edx, [rbx+8]
.text:000000014C8E96D7 8D 42 01                                lea     eax, [rdx+1]
.text:000000014C8E96DA 03 C7                                   add     eax, edi
.text:000000014C8E96DC 89 43 08                                mov     [rbx+8], eax
.text:000000014C8E96DF 3B 43 0C                                cmp     eax, [rbx+0Ch]
.text:000000014C8E96E2 7E 08                                   jle     short loc_14C8E96EC
.text:000000014C8E96E4 48 8B CB                                mov     rcx, rbx
.text:000000014C8E96E7 E8 54 8C 19 F4                          call    sub_140A82340
.text:000000014C8E96EC
.text:000000014C8E96EC                         loc_14C8E96EC:                          ; CODE XREF: sub_14C8E95F0+F2↑j
.text:000000014C8E96EC 48 8B CB                                mov     rcx, rbx
.text:000000014C8E96EF FF 15 4B 1F F6 09                       call    cs:qword_15684B640
.text:000000014C8E96F5 44 8B CF                                mov     r9d, edi
.text:000000014C8E96F8 66 C7 44 24 20 3F 00                    mov     word ptr [rsp+20h], 3Fh ; '?'
.text:000000014C8E96FF 48 8B C8                                mov     rcx, rax
.text:000000014C8E9702 4C 8D 44 24 30                          lea     r8, [rsp+30h]
.text:000000014C8E9707 8B D7                                   mov     edx, edi
.text:000000014C8E9709 E8 E2 CC 19 F4                          call    sub_140A863F0
.text:000000014C8E970E
.text:000000014C8E970E                         loc_14C8E970E:                          ; CODE XREF: sub_14C8E95F0+B2↑j
.text:000000014C8E970E 48 8B CB                                mov     rcx, rbx
.text:000000014C8E9711 FF 15 29 1F F6 09                       call    cs:qword_15684B640
.text:000000014C8E9717 48 63 4B 08                             movsxd  rcx, dword ptr [rbx+8]
.text:000000014C8E971B 66 89 74 48 FE                          mov     [rax+rcx*2-2], si
.text:000000014C8E9720
.text:000000014C8E9720                         loc_14C8E9720:                          ; CODE XREF: sub_14C8E95F0+65↑j
.text:000000014C8E9720                                                                 ; sub_14C8E95F0+6D↑j ...
.text:000000014C8E9720 48 8B C3                                mov     rax, rbx
.text:000000014C8E9723 48 8B 8C 24 30 08 00 00                 mov     rcx, [rsp+830h]
.text:000000014C8E972B 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014C8E972E E8 4D 6C 97 03                          call    __security_check_cookie
.text:000000014C8E9733 4C 8D 9C 24 40 08 00 00                 lea     r11, [rsp+840h]
.text:000000014C8E973B 49 8B 5B 20                             mov     rbx, [r11+20h]
.text:000000014C8E973F 49 8B 73 28                             mov     rsi, [r11+28h]
.text:000000014C8E9743 49 8B E3                                mov     rsp, r11
.text:000000014C8E9746 5F                                      pop     rdi
.text:000000014C8E9747 C3                                      retn
.text:000000014C8E9747                         sub_14C8E95F0   endp
.text:000000014C8E9747
.text:000000014C8E9747                         ; ---------------------------------------------------------------------------
.text:000000014C8E9748 CC CC CC CC CC CC CC CC                 align 10h

```
