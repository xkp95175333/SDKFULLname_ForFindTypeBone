---
C core Offset C2w = 0x210 && offset BoneArray = {0x6F8,0x708,0x718} size 0x30  
---
```c
void __fastcall sub_14D903410(__int64 a1)
{
  _OWORD *v2; // rax
  __m128 v3; // xmm0
  char v4[48]; // [rsp+20h] [rbp-48h] BYREF

  sub_14E289280();
  v2 = (_OWORD *)sub_14E2CB030(a1, v4);
  *(_OWORD *)(a1 + 0x5D0) = *v2;
  *(_OWORD *)(a1 + 0x5E0) = v2[1];
  *(_OWORD *)(a1 + 0x5F0) = v2[2];
  v3 = *(__m128 *)(((__int64 (__fastcall *)(__int64))sub_140B0B0A0)(a1) + 0x20);
  *(_QWORD *)(a1 + 0x600) = _mm_unpacklo_ps(v3, _mm_shuffle_ps(v3, v3, 0x55)).m128_u64[0];
  *(_DWORD *)(a1 + 0x608) = _mm_shuffle_ps(v3, v3, 0xAA).m128_u32[0];
}
void __fastcall sub_14E289280(__int64 a1)
{
  float v2; // xmm0_4
  __int64 v3; // rax
  char v4; // al

  _InterlockedIncrement(dword_15752FA38);
  if ( *(float *)(a1 + 0x260) == 0.0 )
  {
    v2 = *(float *)(a1 + 0x25C);
    if ( v2 > 0.0 )
    {
      if ( (*(_BYTE *)(a1 + 0x268) & 0x40) != 0 || *(_QWORD *)(a1 + 0x480) )
        v2 = 0.0;
      *(float *)(a1 + 0x260) = v2;
    }
  }
  ((void (*)(void))unk_14E2027F0)();
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 0x4D8LL))(a1);
  if ( (unsigned __int8)sub_14E2E07F0(a1)
    && ((unsigned __int8)sub_14E2E08C0(a1) || (*(_BYTE *)(a1 + 0x294) & 0x20) != 0) )
  {
    v3 = *(_QWORD *)(a1 + 0xF0);
    if ( !v3 )
      v3 = sub_14E20A610(a1);
    (***(void (__fastcall ****)(_QWORD, __int64))(v3 + 0x1B8))(*(_QWORD *)(v3 + 0x1B8), a1);
  }
  v4 = *(_BYTE *)(a1 + 0x269);
  if ( (v4 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 0x19F) || (v4 & 2) != 0 )
      JUMPOUT(0x14E28935CLL);
    if ( *(char *)(a1 + 0x268) >= 0 && *(_QWORD *)(a1 + 0xE8) )
    {
      sub_14E078330();
      JUMPOUT(0x14E28934ELL);
    }
  }
  JUMPOUT(0x14E289378LL);
}

__int64 __fastcall sub_14E2CB030(__int64 a1, __int64 a2)
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
    v8 = _mm_div_ps(v7, (__m128)xmmword_1575302E0);
    v9 = _mm_cvtepi32_ps(_mm_cvttps_epi32(v8));
    v10 = _mm_sub_ps(
            v7,
            _mm_mul_ps(
              _mm_xor_ps(
                _mm_and_ps(
                  _mm_cmple_ps((__m128)xmmword_1575302F0, _mm_and_ps(v8, (__m128)xmmword_157530020)),
                  _mm_xor_ps(v9, v8)),
                v9),
              (__m128)xmmword_1575302E0));
    v11 = _mm_add_ps((__m128)xmmword_1575302E0, v10);
    v12 = _mm_xor_ps(_mm_and_ps(_mm_xor_ps(v11, v10), _mm_cmple_ps((__m128)0LL, v10)), v11);
    v13 = _mm_xor_ps(
            _mm_and_ps(
              _mm_xor_ps(_mm_sub_ps(v12, (__m128)xmmword_1575302E0), v12),
              _mm_cmplt_ps((__m128)xmmword_1575302D0, v12)),
            v12);
    *(_QWORD *)v6 = _mm_unpacklo_ps(v13, _mm_shuffle_ps(v13, v13, 0x55)).m128_u64[0];
    *(_DWORD *)(v6 + 8) = _mm_shuffle_ps(v13, v13, 0xAA).m128_u32[0];
    *(_OWORD *)(a1 + 0x1F0) = *(_OWORD *)sub_14C8329D0(v6, v21);
  }
  v14 = *(_OWORD *)(a1 + 0x1F0);
  v15 = (unsigned __int64 *)sub_140EC07E0(a1, &v20);
  v16 = (__m128)*((unsigned int *)v15 + 2);
  v17 = (__m128)*v15;
  result = a2;
  *(__m128 *)(a2 + 0x10) = _mm_movelh_ps(v17, v16);
  *(_OWORD *)a2 = v14;
  *(__m128 *)(a2 + 0x20) = _mm_movelh_ps((__m128)v19, (__m128)_mm_cvtsi32_si128(v3));
  return result;
}
__int64 __fastcall sub_140B0B0A0(__int64 a1)
{
  return a1 + 0x210;
}
```
---
Token
---

```asm
.std:00000001575302D0 00 00 34 43 00 00 34 43 00 00 34 43 00 00 34 43 xmmword_1575302D0 xmmword 43340000433400004334000043340000h
.std:00000001575302D0                                                                                         ; DATA XREF: sub_14E2CB030+E2↑r
.std:00000001575302E0 00 00 B4 43 00 00 B4 43 00 00 B4 43 00 00 B4 43 xmmword_1575302E0 xmmword 43B4000043B4000043B4000043B40000h
.std:00000001575302E0                                                                                         ; DATA XREF: sub_14E2CB030+73↑r
.std:00000001575302F0 00 00 00 4B 00 00 00 4B 00 00 00 4B 00 00 00 4B xmmword_1575302F0 xmmword 4B0000004B0000004B0000004B000000h
.std:00000001575302F0                                                                                         ; DATA XREF: sub_14E2CB030+88↑r
.std:0000000157530300 50 86 6C 50 01 00 00 00                         off_157530300   dq offset off_1506C8650 ; DATA XREF: sub_1409B4D00+49↑w
.std:0000000157530308 80 36 2D 12 00 00 00 00                         qword_157530308 dq 122D3680h            ; DATA XREF: sub_1409B4D00+42↑w
.std:0000000157530310 B8 36 2D 12 00 00 00 00                         qword_157530310 dq 122D36B8h            ; DATA XREF: sub_1409B4D00+60↑w
.std:0000000157530318 38 86 6C 50 01 00 00 00                         off_157530318   dq offset off_1506C8638 ; DATA XREF: sub_1409B55B0+54↑w
.std:0000000157530320 D0 CB 29 12 00 00 00 00                         qword_157530320 dq 1229CBD0h            ; DATA XREF: sub_1409B55B0+3F↑w
.std:0000000157530328 50 86 6C 50 01 00 00 00                         off_157530328   dq offset off_1506C8650 ; DATA XREF: sub_1409B57F0+10D↑w
.std:0000000157530328                                                                                         ; sub_1409B57F0+12F↑w
.std:0000000157530330 00 37 2D 12 00 00 00 00                         qword_157530330 dq 122D3700h            ; DATA XREF: sub_1409B57F0+FF↑w
.std:0000000157530330                                                                                         ; sub_1409B57F0+11D↑r
.std:0000000157530338 38 37 2D 12 00 00 00 00                         qword_157530338 dq 122D3738h            ; DATA XREF: sub_1409B57F0+128↑w
.std:0000000157530340 50 86 6C 50 01 00 00 00                         off_157530340   dq offset off_1506C8650 ; DATA XREF: sub_1409B5770+4C↑w
.std:0000000157530348 80 37 2D 12 00 00 00 00                         qword_157530348 dq 122D3780h            ; DATA XREF: sub_1409B5770+45↑w
.std:0000000157530350 B8 37 2D 12 00 00 00 00                         qword_157530350 dq 122D37B8h            ; DATA XREF: sub_1409B5770+63↑w
.std:0000000157530358 50 86 6C 50 01 00 00 00                         off_157530358   dq offset off_1506C8650 ; DATA XREF: sub_1409B4D70+49↑w
.std:0000000157530360 C0 37 2D 12 00 00 00 00                         qword_157530360 dq 122D37C0h            ; DATA XREF: sub_1409B4D70+42↑w
.std:0000000157530368 F8 37 2D 12 00 00 00 00                         qword_157530368 dq 122D37F8h            ; DATA XREF: sub_1409B4D70+60↑w
.std:0000000157530370 50 86 6C 50 01 00 00 00                         off_157530370   dq offset off_1506C8650 ; DATA XREF: sub_1409B5A20+4C↑w
.std:0000000157530378 40 38 2D 12 00 00 00 00                         qword_157530378 dq 122D3840h            ; DATA XREF: sub_1409B5A20+45↑w
.std:0000000157530380 78 38 2D 12 00 00 00 00                         qword_157530380 dq 122D3878h            ; DATA XREF: sub_1409B5A20+63↑w
.std:0000000157530388 50 86 6C 50 01 00 00 00                         off_157530388   dq offset off_1506C8650 ; DATA XREF: sub_1409B51A0+49↑w
.std:0000000157530390 C0 38 2D 12 00 00 00 00                         qword_157530390 dq 122D38C0h            ; DATA XREF: sub_1409B51A0+42↑w
.std:0000000157530398 F8 38 2D 12 00 00 00 00                         qword_157530398 dq 122D38F8h            ; DATA XREF: sub_1409B51A0+60↑w
.std:00000001575303A0 50 86 6C 50 01 00 00 00                         off_1575303A0   dq offset off_1506C8650 ; DATA XREF: sub_1409B5120+4C↑w
.std:00000001575303A8 00 39 2D 12 00 00 00 00                         qword_1575303A8 dq 122D3900h            ; DATA XREF: sub_1409B5120+45↑w
.std:00000001575303B0 38 39 2D 12 00 00 00 00                         qword_1575303B0 dq 122D3938h            ; DATA XREF: sub_1409B5120+63↑w
.std:00000001575303B8 50 86 6C 50 01 00 00 00                         off_1575303B8   dq offset off_1506C8650 ; DATA XREF: sub_1409B5280+49↑w
.std:00000001575303C0 80 39 2D 12 00 00 00 00                         qword_1575303C0 dq 122D3980h            ; DATA XREF: sub_1409B5280+42↑w
.std:00000001575303C8 B8 39 2D 12 00 00 00 00                         qword_1575303C8 dq 122D39B8h            ; DATA XREF: sub_1409B5280+60↑w
.std:00000001575303D0 50 86 6C 50 01 00 00 00                         off_1575303D0   dq offset off_1506C8650 ; DATA XREF: sub_1409B5210+49↑w
.std:00000001575303D8 00 3A 2D 12 00 00 00 00                         qword_1575303D8 dq 122D3A00h            ; DATA XREF: sub_1409B5210+42↑w
.std:00000001575303E0 38 3A 2D 12 00 00 00 00                         qword_1575303E0 dq 122D3A38h            ; DATA XREF: sub_1409B5210+60↑w
.std:00000001575303E8 50 86 6C 50 01 00 00 00                         off_1575303E8   dq offset off_1506C8650 ; DATA XREF: sub_1409B4ED0+4C↑w
.std:00000001575303F0 40 3A 2D 12 00 00 00 00                         qword_1575303F0 dq 122D3A40h            ; DATA XREF: sub_1409B4ED0+45↑w
.std:00000001575303F8 78 3A 2D 12 00 00 00 00                         qword_1575303F8 dq 122D3A78h            ; DATA XREF: sub_1409B4ED0+63↑w
.std:0000000157530400 50 86 6C 50 01 00 00 00                         off_157530400   dq offset off_1506C8650 ; DATA XREF: sub_1409B4E60+49↑w
.std:0000000157530408 80 3A 2D 12 00 00 00 00                         qword_157530408 dq 122D3A80h            ; DATA XREF: sub_1409B4E60+42↑w
.std:0000000157530410 B8 3A 2D 12 00 00 00 00                         qword_157530410 dq 122D3AB8h            ; DATA XREF: sub_1409B4E60+60↑w
.std:0000000157530418 50 86 6C 50 01 00 00 00                         off_157530418   dq offset off_1506C8650 ; DATA XREF: sub_1409B4B20+4C↑w
.std:0000000157530420 C0 3A 2D 12 00 00 00 00                         qword_157530420 dq 122D3AC0h            ; DATA XREF: sub_1409B4B20+45↑w
.std:0000000157530428 F8 3A 2D 12 00 00 00 00                         qword_157530428 dq 122D3AF8h            ; DATA XREF: sub_1409B4B20+63↑w
.std:0000000157530430 50 86 6C 50 01 00 00 00                         off_157530430   dq offset off_1506C8650 ; DATA XREF: sub_1409B5690+49↑w
.std:0000000157530438 40 3B 2D 12 00 00 00 00                         qword_157530438 dq 122D3B40h            ; DATA XREF: sub_1409B5690+42↑w
.std:0000000157530440 78 3B 2D 12 00 00 00 00                         qword_157530440 dq 122D3B78h            ; DATA XREF: sub_1409B5690+60↑w
.std:0000000157530448 38 86 6C 50 01 00 00 00                         off_157530448   dq offset off_1506C8638 ; DATA XREF: sub_1409B4AB0+54↑w
.std:0000000157530450 60 CD 29 12 00 00 00 00                         qword_157530450 dq 1229CD60h            ; DATA XREF: sub_1409B4AB0+3F↑w
.std:0000000157530458 38 86 6C 50 01 00 00 00                         off_157530458   dq offset off_1506C8638 ; DATA XREF: sub_1409B4620+2D↑o



```
```asm
.std:000000014D903410                                                 ; void sub_14D903410()
.std:000000014D903410                                                 sub_14D903410   proc near
.std:000000014D903410
.std:000000014D903410                                                 var_48          = byte ptr -48h
.std:000000014D903410                                                 var_18          = qword ptr -18h
.std:000000014D903410
.std:000000014D903410                                                 ; __unwind { // sub_15025F80C
.std:000000014D903410 40 53                                                           push    rbx
.std:000000014D903412 48 83 EC 60                                                     sub     rsp, 60h        ; Integer Subtraction
.std:000000014D903416 48 8B 05 E3 23 4C 09                                            mov     rax, cs:__security_cookie
.std:000000014D90341D 48 33 C4                                                        xor     rax, rsp        ; Logical Exclusive OR
.std:000000014D903420 48 89 44 24 50                                                  mov     [rsp+50h], rax
.std:000000014D903425 48 8B D9                                                        mov     rbx, rcx
.std:000000014D903428 E8 53 5E 98 00                                                  call    sub_14E289280   ; Call Procedure
.std:000000014D90342D 48 8D 54 24 20                                                  lea     rdx, [rsp+20h]  ; Load Effective Address
.std:000000014D903432 48 8B CB                                                        mov     rcx, rbx
.std:000000014D903435 E8 F6 7B 9C 00                                                  call    sub_14E2CB030   ; Call Procedure
.std:000000014D90343A 48 8B CB                                                        mov     rcx, rbx
.std:000000014D90343D 0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.std:000000014D903440 0F 11 83 D0 05 00 00                                            movups  xmmword ptr [rbx+5D0h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:000000014D903447 0F 10 48 10                                                     movups  xmm1, xmmword ptr [rax+10h] ; Move Unaligned Four Packed Single-FP
.std:000000014D90344B 0F 11 8B E0 05 00 00                                            movups  xmmword ptr [rbx+5E0h], xmm1 ; Move Unaligned Four Packed Single-FP
.std:000000014D903452 0F 10 40 20                                                     movups  xmm0, xmmword ptr [rax+20h] ; Move Unaligned Four Packed Single-FP
.std:000000014D903456 0F 11 83 F0 05 00 00                                            movups  xmmword ptr [rbx+5F0h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:000000014D90345D E8 3E 7C 20 F3                                                  call    loc_140B0B0A0   ; Call Procedure
.std:000000014D903462 0F 10 40 20                                                     movups  xmm0, xmmword ptr [rax+20h] ; Move Unaligned Four Packed Single-FP
.std:000000014D903466 0F 28 C8                                                        movaps  xmm1, xmm0      ; Move Aligned Four Packed Single-FP
.std:000000014D903469 0F 28 D0                                                        movaps  xmm2, xmm0      ; Move Aligned Four Packed Single-FP
.std:000000014D90346C 0F C6 D0 AA                                                     shufps  xmm2, xmm0, 0AAh ; Shuffle Single-FP
.std:000000014D903470 0F C6 C8 55                                                     shufps  xmm1, xmm0, 55h ; 'U' ; Shuffle Single-FP
.std:000000014D903474 0F 14 C1                                                        unpcklps xmm0, xmm1     ; Unpack Low Packed Single-FP Data
.std:000000014D903477 F2 0F 11 83 00 06 00 00                                         movsd   qword ptr [rbx+600h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014D90347F F3 0F 11 93 08 06 00 00                                         movss   dword ptr [rbx+608h], xmm2 ; Move Scalar Single-FP
.std:000000014D903487 48 8B 4C 24 50                                                  mov     rcx, [rsp+50h]
.std:000000014D90348C 48 33 CC                                                        xor     rcx, rsp        ; Logical Exclusive OR
.std:000000014D90348F E8 EC C4 95 02                                                  call    loc_15025F980   ; Call Procedure
.std:000000014D903494 48 83 C4 60                                                     add     rsp, 60h        ; Add
.std:000000014D903498 5B                                                              pop     rbx
.std:000000014D903499 C3                                                              retn                    ; Return Near from Procedure

.std:000000014E2CB030                                                 sub_14E2CB030   proc near               ; CODE XREF: sub_141CE8230+2231↑p
.std:000000014E2CB030                                                                                         ; sub_141D51480+2B28↑p ...
.std:000000014E2CB030 48 89 5C 24 08                                                  mov     [rsp+8], rbx
.std:000000014E2CB035 48 89 74 24 10                                                  mov     [rsp+10h], rsi
.std:000000014E2CB03A 57                                                              push    rdi
.std:000000014E2CB03B 48 83 EC 60                                                     sub     rsp, 60h        ; Integer Subtraction
.std:000000014E2CB03F F2 0F 10 81 84 01 00 00                                         movsd   xmm0, qword ptr [rcx+184h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB047 48 8B D9                                                        mov     rbx, rcx
.std:000000014E2CB04A 8B B1 8C 01 00 00                                               mov     esi, [rcx+18Ch]
.std:000000014E2CB050 48 8B FA                                                        mov     rdi, rdx
.std:000000014E2CB053 F2 0F 11 44 24 20                                               movsd   qword ptr [rsp+20h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB059 F2 0F 10 81 78 01 00 00                                         movsd   xmm0, qword ptr [rcx+178h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB061 48 81 C1 00 02 00 00                                            add     rcx, 200h       ; Add
.std:000000014E2CB068 0F 29 74 24 50                                                  movaps  xmmword ptr [rsp+50h], xmm6 ; Move Aligned Four Packed Single-FP
.std:000000014E2CB06D F2 0F 11 44 24 2C                                               movsd   qword ptr [rsp+2Ch], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB073 0F 2E 01                                                        ucomiss xmm0, dword ptr [rcx] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CB076 75 1E                                                           jnz     short loc_14E2CB096 ; Jump if Not Zero (ZF=0)
.std:000000014E2CB078 F3 0F 10 44 24 30                                               movss   xmm0, dword ptr [rsp+30h] ; Move Scalar Single-FP
.std:000000014E2CB07E 0F 2E 41 04                                                     ucomiss xmm0, dword ptr [rcx+4] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CB082 75 12                                                           jnz     short loc_14E2CB096 ; Jump if Not Zero (ZF=0)
.std:000000014E2CB084 F3 0F 10 83 80 01 00 00                                         movss   xmm0, dword ptr [rbx+180h] ; Move Scalar Single-FP
.std:000000014E2CB08C 0F 2E 41 08                                                     ucomiss xmm0, dword ptr [rcx+8] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CB090 0F 84 C5 00 00 00                                               jz      loc_14E2CB15B   ; Jump if Zero (ZF=1)
.std:000000014E2CB096
.std:000000014E2CB096                                                 loc_14E2CB096:                          ; CODE XREF: sub_14E2CB030+46↑j
.std:000000014E2CB096                                                                                         ; sub_14E2CB030+52↑j
.std:000000014E2CB096 F2 0F 10 9B 78 01 00 00                                         movsd   xmm3, qword ptr [rbx+178h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB09E 48 8D 54 24 40                                                  lea     rdx, [rsp+40h]  ; Load Effective Address
.std:000000014E2CB0A3 0F 28 35 36 52 26 09                                            movaps  xmm6, cs:xmmword_1575302E0 ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0AA 0F 28 CB                                                        movaps  xmm1, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0AD F3 0F 10 83 80 01 00 00                                         movss   xmm0, dword ptr [rbx+180h] ; Move Scalar Single-FP
.std:000000014E2CB0B5 0F 28 EB                                                        movaps  xmm5, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0B8 0F 28 25 31 52 26 09                                            movaps  xmm4, cs:xmmword_1575302F0 ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0BF 0F C6 C9 55                                                     shufps  xmm1, xmm1, 55h ; 'U' ; Shuffle Single-FP
.std:000000014E2CB0C3 0F 14 E9                                                        unpcklps xmm5, xmm1     ; Unpack Low Packed Single-FP Data
.std:000000014E2CB0C6 0F 16 E8                                                        movlhps xmm5, xmm0      ; Move Low to High Packed Single-FP
.std:000000014E2CB0C9 F2 0F 11 5C 24 2C                                               movsd   qword ptr [rsp+2Ch], xmm3 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB0CF 0F 28 D5                                                        movaps  xmm2, xmm5      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0D2 0F 5E D6                                                        divps   xmm2, xmm6      ; Packed Single-FP Divide
.std:000000014E2CB0D5 F3 0F 5B C2                                                     cvttps2dq xmm0, xmm2    ; Convert With Truncation Packed Single-Precision Floating-Point Values to Packed Doubleword Integers
.std:000000014E2CB0D9 0F 28 CA                                                        movaps  xmm1, xmm2      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0DC 0F 54 0D 3D 4F 26 09                                            andps   xmm1, cs:xmmword_157530020 ; Bitwise Logical And for Single-FP
.std:000000014E2CB0E3 0F 5B D8                                                        cvtdq2ps xmm3, xmm0     ; Convert Packed Doubleword Integers to Packed Double-Precision Floating-Point Values
.std:000000014E2CB0E6 0F C2 E1 02                                                     cmpleps xmm4, xmm1      ; Packed Single-FP Compare LE
.std:000000014E2CB0EA 0F 28 C3                                                        movaps  xmm0, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0ED 0F 28 CE                                                        movaps  xmm1, xmm6      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0F0 0F 57 C2                                                        xorps   xmm0, xmm2      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB0F3 0F 54 E0                                                        andps   xmm4, xmm0      ; Bitwise Logical And for Single-FP
.std:000000014E2CB0F6 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB0F9 0F 57 E3                                                        xorps   xmm4, xmm3      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB0FC 0F 59 E6                                                        mulps   xmm4, xmm6      ; Packed Single-FP Multiply
.std:000000014E2CB0FF 0F 5C EC                                                        subps   xmm5, xmm4      ; Packed Single-FP Subtract
.std:000000014E2CB102 0F C2 C5 02                                                     cmpleps xmm0, xmm5      ; Packed Single-FP Compare LE
.std:000000014E2CB106 0F 58 CD                                                        addps   xmm1, xmm5      ; Packed Single-FP Add
.std:000000014E2CB109 0F 28 D1                                                        movaps  xmm2, xmm1      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB10C 0F 57 D5                                                        xorps   xmm2, xmm5      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB10F 0F 54 D0                                                        andps   xmm2, xmm0      ; Bitwise Logical And for Single-FP
.std:000000014E2CB112 0F 28 05 B7 51 26 09                                            movaps  xmm0, cs:xmmword_1575302D0 ; Move Aligned Four Packed Single-FP
.std:000000014E2CB119 0F 57 D1                                                        xorps   xmm2, xmm1      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB11C 0F C2 C2 01                                                     cmpltps xmm0, xmm2      ; Packed Single-FP Compare LT
.std:000000014E2CB120 0F 28 DA                                                        movaps  xmm3, xmm2      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB123 0F 5C DE                                                        subps   xmm3, xmm6      ; Packed Single-FP Subtract
.std:000000014E2CB126 0F 57 DA                                                        xorps   xmm3, xmm2      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB129 0F 54 D8                                                        andps   xmm3, xmm0      ; Bitwise Logical And for Single-FP
.std:000000014E2CB12C 0F 57 DA                                                        xorps   xmm3, xmm2      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB12F 0F 28 CB                                                        movaps  xmm1, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB132 0F 28 C3                                                        movaps  xmm0, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB135 0F C6 CB 55                                                     shufps  xmm1, xmm3, 55h ; 'U' ; Shuffle Single-FP
.std:000000014E2CB139 0F 28 D3                                                        movaps  xmm2, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB13C 0F 14 C1                                                        unpcklps xmm0, xmm1     ; Unpack Low Packed Single-FP Data
.std:000000014E2CB13F 0F C6 D3 AA                                                     shufps  xmm2, xmm3, 0AAh ; Shuffle Single-FP
.std:000000014E2CB143 F2 0F 11 01                                                     movsd   qword ptr [rcx], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB147 F3 0F 11 51 08                                                  movss   dword ptr [rcx+8], xmm2 ; Move Scalar Single-FP
.std:000000014E2CB14C E8 7F 78 56 FE                                                  call    sub_14C8329D0   ; Call Procedure
.std:000000014E2CB151 0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.std:000000014E2CB154 0F 11 83 F0 01 00 00                                            movups  xmmword ptr [rbx+1F0h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:000000014E2CB15B
.std:000000014E2CB15B                                                 loc_14E2CB15B:                          ; CODE XREF: sub_14E2CB030+60↑j
.std:000000014E2CB15B 0F 10 B3 F0 01 00 00                                            movups  xmm6, xmmword ptr [rbx+1F0h] ; Move Unaligned Four Packed Single-FP
.std:000000014E2CB162 48 8D 54 24 2C                                                  lea     rdx, [rsp+2Ch]  ; Load Effective Address
.std:000000014E2CB167 48 8B CB                                                        mov     rcx, rbx
.std:000000014E2CB16A E8 71 56 BF F2                                                  call    sub_140EC07E0   ; Call Procedure
.std:000000014E2CB16F 48 8B 5C 24 70                                                  mov     rbx, [rsp+70h]
.std:000000014E2CB174 66 0F 6E C6                                                     movd    xmm0, esi       ; Move 32 bits
.std:000000014E2CB178 48 8B 74 24 78                                                  mov     rsi, [rsp+78h]
.std:000000014E2CB17D F3 0F 10 50 08                                                  movss   xmm2, dword ptr [rax+8] ; Move Scalar Single-FP
.std:000000014E2CB182 F2 0F 10 18                                                     movsd   xmm3, qword ptr [rax] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB186 48 8B C7                                                        mov     rax, rdi
.std:000000014E2CB189 0F 16 DA                                                        movlhps xmm3, xmm2      ; Move Low to High Packed Single-FP
.std:000000014E2CB18C 0F 11 5F 10                                                     movups  xmmword ptr [rdi+10h], xmm3 ; Move Unaligned Four Packed Single-FP
.std:000000014E2CB190 F2 0F 10 5C 24 20                                               movsd   xmm3, qword ptr [rsp+20h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB196 0F 16 D8                                                        movlhps xmm3, xmm0      ; Move Low to High Packed Single-FP
.std:000000014E2CB199 0F 11 37                                                        movups  xmmword ptr [rdi], xmm6 ; Move Unaligned Four Packed Single-FP
.std:000000014E2CB19C 0F 28 74 24 50                                                  movaps  xmm6, xmmword ptr [rsp+50h] ; Move Aligned Four Packed Single-FP
.std:000000014E2CB1A1 0F 11 5F 20                                                     movups  xmmword ptr [rdi+20h], xmm3 ; Move Unaligned Four Packed Single-FP
.std:000000014E2CB1A5 48 83 C4 60                                                     add     rsp, 60h        ; Add
.std:000000014E2CB1A9 5F                                                              pop     rdi
.std:000000014E2CB1AA C3                                                              retn                    ; Return Near from Procedure
.std:000000014E2CB1AA                                                 sub_14E2CB030   endp








.std:000000014E2CB030                                                 sub_14E2CB030   proc near               ; CODE XREF: sub_141CE8230+2231↑p
.std:000000014E2CB030                                                                                         ; sub_141D51480+2B28↑p ...
.std:000000014E2CB030 48 89 5C 24 08                                                  mov     [rsp+8], rbx
.std:000000014E2CB035 48 89 74 24 10                                                  mov     [rsp+10h], rsi
.std:000000014E2CB03A 57                                                              push    rdi
.std:000000014E2CB03B 48 83 EC 60                                                     sub     rsp, 60h        ; Integer Subtraction
.std:000000014E2CB03F F2 0F 10 81 84 01 00 00                                         movsd   xmm0, qword ptr [rcx+184h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB047 48 8B D9                                                        mov     rbx, rcx
.std:000000014E2CB04A 8B B1 8C 01 00 00                                               mov     esi, [rcx+18Ch]
.std:000000014E2CB050 48 8B FA                                                        mov     rdi, rdx
.std:000000014E2CB053 F2 0F 11 44 24 20                                               movsd   qword ptr [rsp+20h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB059 F2 0F 10 81 78 01 00 00                                         movsd   xmm0, qword ptr [rcx+178h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB061 48 81 C1 00 02 00 00                                            add     rcx, 200h       ; Add
.std:000000014E2CB068 0F 29 74 24 50                                                  movaps  xmmword ptr [rsp+50h], xmm6 ; Move Aligned Four Packed Single-FP
.std:000000014E2CB06D F2 0F 11 44 24 2C                                               movsd   qword ptr [rsp+2Ch], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB073 0F 2E 01                                                        ucomiss xmm0, dword ptr [rcx] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CB076 75 1E                                                           jnz     short loc_14E2CB096 ; Jump if Not Zero (ZF=0)
.std:000000014E2CB078 F3 0F 10 44 24 30                                               movss   xmm0, dword ptr [rsp+30h] ; Move Scalar Single-FP
.std:000000014E2CB07E 0F 2E 41 04                                                     ucomiss xmm0, dword ptr [rcx+4] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CB082 75 12                                                           jnz     short loc_14E2CB096 ; Jump if Not Zero (ZF=0)
.std:000000014E2CB084 F3 0F 10 83 80 01 00 00                                         movss   xmm0, dword ptr [rbx+180h] ; Move Scalar Single-FP
.std:000000014E2CB08C 0F 2E 41 08                                                     ucomiss xmm0, dword ptr [rcx+8] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CB090 0F 84 C5 00 00 00                                               jz      near ptr unk_14E2CB15B ; Jump if Zero (ZF=1)



.std:0000000140B0B0A0
.std:0000000140B0B0A0                                                 loc_140B0B0A0:                          ; CODE XREF: sub_140AE6880+20F↑p
.std:0000000140B0B0A0                                                                                         ; sub_140AE6880+6D0↑p ...
.std:0000000140B0B0A0 C7 44 24 08 00 00 00 00                                         mov     dword ptr [rsp+8], 0
.std:0000000140B0B0A8 8B 44 24 08                                                     mov     eax, [rsp+8]
.std:0000000140B0B0AC FF C0                                                           inc     eax             ; Increment by 1
.std:0000000140B0B0AE 89 44 24 08                                                     mov     [rsp+8], eax
.std:0000000140B0B0B2 8B 44 24 08                                                     mov     eax, [rsp+8]
.std:0000000140B0B0B6 FF C8                                                           dec     eax             ; Decrement by 1
.std:0000000140B0B0B8 89 44 24 08                                                     mov     [rsp+8], eax
.std:0000000140B0B0BC 48 8D 81 10 02 00 00                                            lea     rax, [rcx+210h] ; Load Effective Address
.std:0000000140B0B0C3 C3                                                              retn                    ; Return Near from Procedure


.std:000000014E289280
.std:000000014E289280                                                 sub_14E289280   proc near               ; CODE XREF: sub_142A14300+9↑p
.std:000000014E289280                                                                                         ; sub_145E8DE00+A3↑p ...
.std:000000014E289280 40 53                                                           push    rbx
.std:000000014E289282 48 83 EC 20                                                     sub     rsp, 20h        ; Integer Subtraction
.std:000000014E289286 48 8B D9                                                        mov     rbx, rcx
.std:000000014E289289 F0 FF 05 A8 67 2A 09                                            lock inc cs:dword_15752FA38 ; Increment by 1
.std:000000014E289290 0F 57 C9                                                        xorps   xmm1, xmm1      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E289293 0F 2E 89 60 02 00 00                                            ucomiss xmm1, dword ptr [rcx+260h] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E28929A 75 2B                                                           jnz     short loc_14E2892C7 ; Jump if Not Zero (ZF=0)
.std:000000014E28929C F3 0F 10 81 5C 02 00 00                                         movss   xmm0, dword ptr [rcx+25Ch] ; Move Scalar Single-FP
.std:000000014E2892A4 0F 2F C1                                                        comiss  xmm0, xmm1      ; Scalar Ordered Single-FP Compare and Set EFLAGS
.std:000000014E2892A7 76 1E                                                           jbe     short loc_14E2892C7 ; Jump if Below or Equal (CF=1 | ZF=1)
.std:000000014E2892A9 F6 81 68 02 00 00 40                                            test    byte ptr [rcx+268h], 40h ; Logical Compare
.std:000000014E2892B0 75 0A                                                           jnz     short loc_14E2892BC ; Jump if Not Zero (ZF=0)
.std:000000014E2892B2 48 83 B9 80 04 00 00 00                                         cmp     qword ptr [rcx+480h], 0 ; Compare Two Operands
.std:000000014E2892BA 74 03                                                           jz      short loc_14E2892BF ; Jump if Zero (ZF=1)
.std:000000014E2892BC
.std:000000014E2892BC                                                 loc_14E2892BC:                          ; CODE XREF: sub_14E289280+30↑j
.std:000000014E2892BC 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2892BF
.std:000000014E2892BF                                                 loc_14E2892BF:                          ; CODE XREF: sub_14E289280+3A↑j
.std:000000014E2892BF F3 0F 11 81 60 02 00 00                                         movss   dword ptr [rcx+260h], xmm0 ; Move Scalar Single-FP
.std:000000014E2892C7
.std:000000014E2892C7                                                 loc_14E2892C7:                          ; CODE XREF: sub_14E289280+1A↑j
.std:000000014E2892C7                                                                                         ; sub_14E289280+27↑j
.std:000000014E2892C7 E8 24 95 F7 FF                                                  call    near ptr unk_14E2027F0 ; Call Procedure
.std:000000014E2892CC 48 8B 03                                                        mov     rax, [rbx]
.std:000000014E2892CF 48 8B CB                                                        mov     rcx, rbx
.std:000000014E2892D2 FF 90 D8 04 00 00                                               call    qword ptr [rax+4D8h] ; Indirect Call Near Procedure
.std:000000014E2892D8 48 8B CB                                                        mov     rcx, rbx
.std:000000014E2892DB E8 10 75 05 00                                                  call    sub_14E2E07F0   ; Call Procedure
.std:000000014E2892E0 84 C0                                                           test    al, al          ; Logical Compare
.std:000000014E2892E2 74 38                                                           jz      short loc_14E28931C ; Jump if Zero (ZF=1)
.std:000000014E2892E4 48 8B CB                                                        mov     rcx, rbx
.std:000000014E2892E7 E8 D4 75 05 00                                                  call    sub_14E2E08C0   ; Call Procedure
.std:000000014E2892EC 84 C0                                                           test    al, al          ; Logical Compare
.std:000000014E2892EE 75 09                                                           jnz     short loc_14E2892F9 ; Jump if Not Zero (ZF=0)
.std:000000014E2892F0 F6 83 94 02 00 00 20                                            test    byte ptr [rbx+294h], 20h ; Logical Compare
.std:000000014E2892F7 74 23                                                           jz      short loc_14E28931C ; Jump if Zero (ZF=1)
.std:000000014E2892F9
.std:000000014E2892F9                                                 loc_14E2892F9:                          ; CODE XREF: sub_14E289280+6E↑j
.std:000000014E2892F9 48 8B 83 F0 00 00 00                                            mov     rax, [rbx+0F0h]
.std:000000014E289300 48 85 C0                                                        test    rax, rax        ; Logical Compare
.std:000000014E289303 75 08                                                           jnz     short loc_14E28930D ; Jump if Not Zero (ZF=0)
.std:000000014E289305 48 8B CB                                                        mov     rcx, rbx
.std:000000014E289308 E8 03 13 F8 FF                                                  call    sub_14E20A610   ; Call Procedure
.std:000000014E28930D
.std:000000014E28930D                                                 loc_14E28930D:                          ; CODE XREF: sub_14E289280+83↑j
.std:000000014E28930D 48 8B 88 B8 01 00 00                                            mov     rcx, [rax+1B8h]
.std:000000014E289314 48 8B D3                                                        mov     rdx, rbx
.std:000000014E289317 48 8B 01                                                        mov     rax, [rcx]
.std:000000014E28931A FF 10                                                           call    qword ptr [rax] ; Indirect Call Near Procedure
.std:000000014E28931C


```
