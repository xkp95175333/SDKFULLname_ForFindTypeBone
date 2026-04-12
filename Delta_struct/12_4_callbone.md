---
asm imm
---
```asm
.std:000000014D902EE5 E8 26 7C 9C 00                          call    sub_14E2CAB10   ; Call Procedure

.std:000000014D902EC0
.std:000000014D902EC0                         ; =============== S U B R O U T I N E =======================================
.std:000000014D902EC0
.std:000000014D902EC0
.std:000000014D902EC0                         ; void sub_14D902EC0()
.std:000000014D902EC0                         sub_14D902EC0   proc near
.std:000000014D902EC0
.std:000000014D902EC0                         var_48          = byte ptr -48h
.std:000000014D902EC0                         var_18          = qword ptr -18h
.std:000000014D902EC0
.std:000000014D902EC0                         ; __unwind { // sub_15025F2EC
.std:000000014D902EC0 40 53                                   push    rbx
.std:000000014D902EC2 48 83 EC 60                             sub     rsp, 60h        ; Integer Subtraction
.std:000000014D902EC6 48 8B 05 73 1A 4C 09                    mov     rax, cs:__security_cookie
.std:000000014D902ECD 48 33 C4                                xor     rax, rsp        ; Logical Exclusive OR
.std:000000014D902ED0 48 89 44 24 50                          mov     [rsp+50h], rax
.std:000000014D902ED5 48 8B D9                                mov     rbx, rcx
.std:000000014D902ED8 E8 83 5E 98 00                          call    sub_14E288D60   ; Call Procedure
.std:000000014D902EDD 48 8D 54 24 20                          lea     rdx, [rsp+20h]  ; Load Effective Address
.std:000000014D902EE2 48 8B CB                                mov     rcx, rbx
.std:000000014D902EE5 E8 26 7C 9C 00                          call    sub_14E2CAB10   ; Call Procedure
.std:000000014D902EEA 48 8B CB                                mov     rcx, rbx
.std:000000014D902EED 0F 10 00                                movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.std:000000014D902EF0 0F 11 83 D0 05 00 00                    movups  xmmword ptr [rbx+5D0h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:000000014D902EF7 0F 10 48 10                             movups  xmm1, xmmword ptr [rax+10h] ; Move Unaligned Four Packed Single-FP
.std:000000014D902EFB 0F 11 8B E0 05 00 00                    movups  xmmword ptr [rbx+5E0h], xmm1 ; Move Unaligned Four Packed Single-FP
.std:000000014D902F02 0F 10 40 20                             movups  xmm0, xmmword ptr [rax+20h] ; Move Unaligned Four Packed Single-FP
.std:000000014D902F06 0F 11 83 F0 05 00 00                    movups  xmmword ptr [rbx+5F0h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:000000014D902F0D E8 4E 85 20 F3                          call    loc_140B0B460   ; Call Procedure
.std:000000014D902F12 0F 10 40 20                             movups  xmm0, xmmword ptr [rax+20h] ; Move Unaligned Four Packed Single-FP
.std:000000014D902F16 0F 28 C8                                movaps  xmm1, xmm0      ; Move Aligned Four Packed Single-FP
.std:000000014D902F19 0F 28 D0                                movaps  xmm2, xmm0      ; Move Aligned Four Packed Single-FP
.std:000000014D902F1C 0F C6 D0 AA                             shufps  xmm2, xmm0, 0AAh ; Shuffle Single-FP
.std:000000014D902F20 0F C6 C8 55                             shufps  xmm1, xmm0, 55h ; 'U' ; Shuffle Single-FP
.std:000000014D902F24 0F 14 C1                                unpcklps xmm0, xmm1     ; Unpack Low Packed Single-FP Data
.std:000000014D902F27 F2 0F 11 83 00 06 00 00                 movsd   qword ptr [rbx+600h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014D902F2F F3 0F 11 93 08 06 00 00                 movss   dword ptr [rbx+608h], xmm2 ; Move Scalar Single-FP
.std:000000014D902F37 48 8B 4C 24 50                          mov     rcx, [rsp+50h]
.std:000000014D902F3C 48 33 CC                                xor     rcx, rsp        ; Logical Exclusive OR
.std:000000014D902F3F E8 1C C5 95 02                          call    near ptr unk_15025F460 ; Call Procedure
.std:000000014D902F44 48 83 C4 60                             add     rsp, 60h        ; Add
.std:000000014D902F48 5B                                      pop     rbx
.std:000000014D902F49 C3                                      retn                    ; Return Near from Procedure
.std:000000014D902F49                         ; } // starts at 14D902EC0
.std:000000014D902F49                         sub_14D902EC0   endp
.std:000000014D902F49
.std:000000014D902F49                         ; ---------------------------------------------------------------------------
.std:000000014D902F4A CC CC CC CC CC CC                       align 10h
.std:000000014D902F50


.std:0000000156DC4940                         ; uintptr_t _security_cookie
.std:0000000156DC4940 47 68 14 62 C9 C7 00 00 __security_cookie dq 0C7C962146847h     ; DATA XREF: sub_1400CE7A0+15↑r
.std:0000000156DC4940                                                                 ; sub_1400CE8B0+12↑r ...

2026-04-12 21:44:40.901 SigMakerEx: Finding signature for 000001400CE7C9.
2026-04-12 21:44:44.607 Address SIG: 0x000001400CE7C9, 14 bytes 4, wildcards.
2026-04-12 21:44:44.607 IDA: "8B 15 ?? ?? ?? ?? 33 F6 81 E7 F7 E8 FF FF"
2026-04-12 21:44:44.607 "\x8B\x15\xCC\xCC\xCC\xCC\x33\xF6\x81\xE7\xF7\xE8\xFF\xFF", "xx????xxxxxxxx"

.std:00000001400CE7C9 8B 15 B1 D7 4B 17                       mov     edx, cs:dword_15758BF80
.std:00000001400CE7CF 33 F6                                   xor     esi, esi        ; Logical Exclusive OR
.std:00000001400CE7D1 81 E7 F7 E8 FF FF                       and     edi, 0FFFFE8F7h ; Logical AND
.std:00000001400CE7D7 48 8B E9                                mov     rbp, rcx
.std:00000001400CE7DA 41 BC F0 23 00 00                       mov     r12d, 23F0h
.std:00000001400CE7E0 85 D2                                   test    edx, edx        ; Logical Compare
.std:00000001400CE7E2 75 4A                                   jnz     short loc_1400CE82E ; Jump if Not Zero (ZF=0)
.std:00000001400CE7E4 8D 56 04                                lea     edx, [rsi+4]    ; Load Effective Address
.std:00000001400CE7E7 41 B0 03                                mov     r8b, 3
.std:00000001400CE7EA 33 C9                                   xor     ecx, ecx        ; Logical Exclusive OR
.std:00000001400CE7EC FF 15 DE C0 4A 10                       call    cs:qword_15057A8D0 ; Indirect Call Near Procedure
.std:00000001400CE7F2 48 8D 4C 24 20                          lea     rcx, [rsp+20h]  ; Load Effective Address
.std:00000001400CE7F7 33 D2                                   xor     edx, edx        ; Logical Exclusive OR
.std:00000001400CE7F9 41 B8 1C 01 00 00                       mov     r8d, 11Ch
.std:00000001400CE7FF 48 8B D8                                mov     rbx, rax
.std:00000001400CE802 E8 42 76 19 10                          call    near ptr unk_150265E49 ; Call Procedure
.std:00000001400CE807 8D 56 04                                lea     edx, [rsi+4]    ; Load Effective Address
.std:00000001400CE80A 48 8D 4C 24 20                          lea     rcx, [rsp+20h]  ; Load Effective Address
.std:00000001400CE80F 4C 8B C3                                mov     r8, rbx
.std:00000001400CE812 44 89 64 24 2C                          mov     [rsp+2Ch], r12d
.std:00000001400CE817 FF 15 F3 BE 4A 10                       call    cs:qword_15057A710 ; Indirect Call Near Procedure
.std:00000001400CE81D BA B0 1D 00 00                          mov     edx, 1DB0h
.std:00000001400CE822 85 C0                                   test    eax, eax        ; Logical Compare
.std:00000001400CE824 41 0F 45 D4                             cmovnz  edx, r12d       ; Move if Not Zero (ZF=0)
.std:00000001400CE828 89 15 52 D7 4B 17                       mov     cs:dword_15758BF80, edx

```

---
go to address call 
---
```c

void __fastcall sub_14E2CAB10(__int64 a1)
{
  __int64 v2; // xmm0_8
  float *v3; // rcx

  v2 = *(_QWORD *)(a1 + 0x178);
  v3 = (float *)(a1 + 0x200);
  if ( *(float *)&v2 == *v3 && *((float *)&v2 + 1) == v3[1] && *(float *)(a1 + 0x180) == v3[2] )
    JUMPOUT(0x14E2CAC3BLL);
  JUMPOUT(0x14E2CABC6LL);
}
void __fastcall sub_14D902EC0(__int64 a1)
{
  _OWORD *v2; // rax
  __m128 v3; // xmm0

  sub_14E288D60();
  sub_14E2CAB10(a1);
  *(_OWORD *)(a1 + 0x5D0) = *v2;
  *(_OWORD *)(a1 + 0x5E0) = v2[1];
  *(_OWORD *)(a1 + 0x5F0) = v2[2];
  v3 = *(__m128 *)(((__int64 (__fastcall *)(__int64))sub_140B0B460)(a1) + 0x20);
  *(_QWORD *)(a1 + 0x600) = _mm_unpacklo_ps(v3, _mm_shuffle_ps(v3, v3, 0x55)).m128_u64[0];
  *(_DWORD *)(a1 + 0x608) = _mm_shuffle_ps(v3, v3, 0xAA).m128_u32[0];
}
__int64 __fastcall sub_14E288D60(__int64 a1)
{
  float v2; // xmm0_4
  __int64 v3; // rax
  __int64 result; // rax

  _InterlockedIncrement(&dword_15752EDF8);
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
  sub_14E2022D0();
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 0x4D8LL))(a1);
  if ( (unsigned __int8)sub_14E2E02D0(a1)
    && ((unsigned __int8)sub_14E2E03A0(a1) || (*(_BYTE *)(a1 + 0x294) & 0x20) != 0) )
  {
    v3 = *(_QWORD *)(a1 + 0xF0);
    if ( !v3 )
      v3 = sub_14E20A0F0(a1);
    (***(void (__fastcall ****)(_QWORD, __int64))(v3 + 0x1B8))(*(_QWORD *)(v3 + 0x1B8), a1);
  }
  result = *(unsigned __int8 *)(a1 + 0x269);
  if ( (result & 4) == 0
    && (*(_BYTE *)(a1 + 0x19F)
     || (result & 2) != 0
     || *(char *)(a1 + 0x268) >= 0
     && *(_QWORD *)(a1 + 0xE8)
     && (result = sub_14E077E10()) != 0
     && (*(_BYTE *)(result + 0x1E4) & 0x10) != 0) )
  {
    result = sub_14E33DA60();
    if ( result )
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)result + 0x78LL))(result, a1);
  }
  return result;
}
void __fastcall sub_14E2CAB10(__int64 a1, __int64 a2)
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
  unsigned __int64 v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+2Ch] [rbp-3Ch] BYREF
  char v18[16]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 0x18C);
  v16 = *(_QWORD *)(a1 + 0x184);
  v5 = *(_QWORD *)(a1 + 0x178);
  v6 = a1 + 0x200;
  v17 = v5;
  if ( *(float *)&v5 != *(float *)v6
    || *((float *)&v17 + 1) != *(float *)(v6 + 4)
    || *(float *)(a1 + 0x180) != *(float *)(v6 + 8) )
  {
    v7 = _mm_movelh_ps(
           _mm_unpacklo_ps(
             (__m128)*(unsigned __int64 *)(a1 + 0x178),
             _mm_shuffle_ps((__m128)*(unsigned __int64 *)(a1 + 0x178), (__m128)*(unsigned __int64 *)(a1 + 0x178), 0x55)),
           (__m128)*(unsigned int *)(a1 + 0x180));
    v17 = *(_QWORD *)(a1 + 0x178);
    v8 = _mm_div_ps(v7, (__m128)xmmword_15752F6A0);
    v9 = _mm_cvtepi32_ps(_mm_cvttps_epi32(v8));
    v10 = _mm_sub_ps(
            v7,
            _mm_mul_ps(
              _mm_xor_ps(
                _mm_and_ps(
                  _mm_cmple_ps((__m128)xmmword_15752F6B0, _mm_and_ps(v8, (__m128)xmmword_15752F3E0)),
                  _mm_xor_ps(v9, v8)),
                v9),
              (__m128)xmmword_15752F6A0));
    v11 = _mm_add_ps((__m128)xmmword_15752F6A0, v10);
    v12 = _mm_xor_ps(_mm_and_ps(_mm_xor_ps(v11, v10), _mm_cmple_ps((__m128)0LL, v10)), v11);
    v13 = _mm_xor_ps(
            _mm_and_ps(
              _mm_xor_ps(_mm_sub_ps(v12, (__m128)xmmword_15752F6A0), v12),
              _mm_cmplt_ps((__m128)xmmword_15752F690, v12)),
            v12);
    *(_QWORD *)v6 = _mm_unpacklo_ps(v13, _mm_shuffle_ps(v13, v13, 0x55)).m128_u64[0];
    *(_DWORD *)(v6 + 8) = _mm_shuffle_ps(v13, v13, 0xAA).m128_u32[0];
    *(_OWORD *)(a1 + 0x1F0) = *(_OWORD *)sub_14C832DD0(v6, v18);
  }
  v14 = *(_OWORD *)(a1 + 0x1F0);
  v15 = (unsigned __int64 *)sub_140EC0BA0(a1, &v17);
  *(__m128 *)(a2 + 0x10) = _mm_movelh_ps((__m128)*v15, (__m128)*((unsigned int *)v15 + 2));
  *(_OWORD *)a2 = v14;
  *(__m128 *)(a2 + 0x20) = _mm_movelh_ps((__m128)v16, (__m128)_mm_cvtsi32_si128(v3));
}
//c2wdef offset
__int64 __fastcall sub_140B0B460(__int64 a1)
{
  return a1 + 0x210;
}

```
```asm

.std:000000014E2CAB10                         ; void __fastcall sub_14E2CAB10(__int64)
.std:000000014E2CAB10                         sub_14E2CAB10   proc near               ; CODE XREF: sub_141CE8620+2231↑p
.std:000000014E2CAB10                                                                 ; sub_141D51870+2B28↑p ...
.std:000000014E2CAB10
.std:000000014E2CAB10                         var_48          = qword ptr -48h
.std:000000014E2CAB10                         var_3C          = qword ptr -3Ch
.std:000000014E2CAB10                         var_28          = byte ptr -28h
.std:000000014E2CAB10                         var_18          = xmmword ptr -18h
.std:000000014E2CAB10                         arg_0           = qword ptr  8
.std:000000014E2CAB10                         arg_8           = qword ptr  10h
.std:000000014E2CAB10
.std:000000014E2CAB10 48 89 5C 24 08                          mov     [rsp+8], rbx
.std:000000014E2CAB15 48 89 74 24 10                          mov     [rsp+10h], rsi
.std:000000014E2CAB1A 57                                      push    rdi
.std:000000014E2CAB1B 48 83 EC 60                             sub     rsp, 60h        ; Integer Subtraction
.std:000000014E2CAB1F F2 0F 10 81 84 01 00 00                 movsd   xmm0, qword ptr [rcx+184h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CAB27 48 8B D9                                mov     rbx, rcx
.std:000000014E2CAB2A 8B B1 8C 01 00 00                       mov     esi, [rcx+18Ch]
.std:000000014E2CAB30 48 8B FA                                mov     rdi, rdx
.std:000000014E2CAB33 F2 0F 11 44 24 20                       movsd   qword ptr [rsp+20h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CAB39 F2 0F 10 81 78 01 00 00                 movsd   xmm0, qword ptr [rcx+178h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CAB41 48 81 C1 00 02 00 00                    add     rcx, 200h       ; Add
.std:000000014E2CAB48 0F 29 74 24 50                          movaps  xmmword ptr [rsp+50h], xmm6 ; Move Aligned Four Packed Single-FP
.std:000000014E2CAB4D F2 0F 11 44 24 2C                       movsd   qword ptr [rsp+2Ch], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CAB53 0F 2E 01                                ucomiss xmm0, dword ptr [rcx] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CAB56 75 1E                                   jnz     short loc_14E2CAB76 ; Jump if Not Zero (ZF=0)
.std:000000014E2CAB58 F3 0F 10 44 24 30                       movss   xmm0, dword ptr [rsp+30h] ; Move Scalar Single-FP
.std:000000014E2CAB5E 0F 2E 41 04                             ucomiss xmm0, dword ptr [rcx+4] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CAB62 75 12                                   jnz     short loc_14E2CAB76 ; Jump if Not Zero (ZF=0)
.std:000000014E2CAB64 F3 0F 10 83 80 01 00 00                 movss   xmm0, dword ptr [rbx+180h] ; Move Scalar Single-FP
.std:000000014E2CAB6C 0F 2E 41 08                             ucomiss xmm0, dword ptr [rcx+8] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CAB70 0F 84 C5 00 00 00                       jz      loc_14E2CAC3B   ; Jump if Zero (ZF=1)
.std:000000014E2CAB76
.std:000000014E2CAB76                         loc_14E2CAB76:                          ; CODE XREF: sub_14E2CAB10+46↑j
.std:000000014E2CAB76                                                                 ; sub_14E2CAB10+52↑j
.std:000000014E2CAB76 F2 0F 10 9B 78 01 00 00                 movsd   xmm3, qword ptr [rbx+178h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CAB7E 48 8D 54 24 40                          lea     rdx, [rsp+40h]  ; Load Effective Address
.std:000000014E2CAB83 0F 28 35 16 4B 26 09                    movaps  xmm6, cs:xmmword_15752F6A0 ; Move Aligned Four Packed Single-FP
.std:000000014E2CAB8A 0F 28 CB                                movaps  xmm1, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CAB8D F3 0F 10 83 80 01 00 00                 movss   xmm0, dword ptr [rbx+180h] ; Move Scalar Single-FP
.std:000000014E2CAB95 0F 28 EB                                movaps  xmm5, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CAB98 0F 28 25 11 4B 26 09                    movaps  xmm4, cs:xmmword_15752F6B0 ; Move Aligned Four Packed Single-FP
.std:000000014E2CAB9F 0F C6 C9 55                             shufps  xmm1, xmm1, 55h ; 'U' ; Shuffle Single-FP
.std:000000014E2CABA3 0F 14 E9                                unpcklps xmm5, xmm1     ; Unpack Low Packed Single-FP Data
.std:000000014E2CABA6 0F 16 E8                                movlhps xmm5, xmm0      ; Move Low to High Packed Single-FP
.std:000000014E2CABA9 F2 0F 11 5C 24 2C                       movsd   qword ptr [rsp+2Ch], xmm3 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CABAF 0F 28 D5                                movaps  xmm2, xmm5      ; Move Aligned Four Packed Single-FP
.std:000000014E2CABB2 0F 5E D6                                divps   xmm2, xmm6      ; Packed Single-FP Divide
.std:000000014E2CABB5 F3 0F 5B C2                             cvttps2dq xmm0, xmm2    ; Convert With Truncation Packed Single-Precision Floating-Point Values to Packed Doubleword Integers
.std:000000014E2CABB9 0F 28 CA                                movaps  xmm1, xmm2      ; Move Aligned Four Packed Single-FP
.std:000000014E2CABBC 0F 54 0D 1D 48 26 09                    andps   xmm1, cs:xmmword_15752F3E0 ; Bitwise Logical And for Single-FP
.std:000000014E2CABC3 0F 5B D8                                cvtdq2ps xmm3, xmm0     ; Convert Packed Doubleword Integers to Packed Double-Precision Floating-Point Values
.std:000000014E2CABC6 0F C2 E1 02                             cmpleps xmm4, xmm1      ; Packed Single-FP Compare LE
.std:000000014E2CABCA 0F 28 C3                                movaps  xmm0, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CABCD 0F 28 CE                                movaps  xmm1, xmm6      ; Move Aligned Four Packed Single-FP
.std:000000014E2CABD0 0F 57 C2                                xorps   xmm0, xmm2      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CABD3 0F 54 E0                                andps   xmm4, xmm0      ; Bitwise Logical And for Single-FP
.std:000000014E2CABD6 0F 57 C0                                xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CABD9 0F 57 E3                                xorps   xmm4, xmm3      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CABDC 0F 59 E6                                mulps   xmm4, xmm6      ; Packed Single-FP Multiply
.std:000000014E2CABDF 0F 5C EC                                subps   xmm5, xmm4      ; Packed Single-FP Subtract
.std:000000014E2CABE2 0F C2 C5 02                             cmpleps xmm0, xmm5      ; Packed Single-FP Compare LE
.std:000000014E2CABE6 0F 58 CD                                addps   xmm1, xmm5      ; Packed Single-FP Add
.std:000000014E2CABE9 0F 28 D1                                movaps  xmm2, xmm1      ; Move Aligned Four Packed Single-FP
.std:000000014E2CABEC 0F 57 D5                                xorps   xmm2, xmm5      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CABEF 0F 54 D0                                andps   xmm2, xmm0      ; Bitwise Logical And for Single-FP
.std:000000014E2CABF2 0F 28 05 97 4A 26 09                    movaps  xmm0, cs:xmmword_15752F690 ; Move Aligned Four Packed Single-FP
.std:000000014E2CABF9 0F 57 D1                                xorps   xmm2, xmm1      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CABFC 0F C2 C2 01                             cmpltps xmm0, xmm2      ; Packed Single-FP Compare LT
.std:000000014E2CAC00 0F 28 DA                                movaps  xmm3, xmm2      ; Move Aligned Four Packed Single-FP
.std:000000014E2CAC03 0F 5C DE                                subps   xmm3, xmm6      ; Packed Single-FP Subtract
.std:000000014E2CAC06 0F 57 DA                                xorps   xmm3, xmm2      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CAC09 0F 54 D8                                andps   xmm3, xmm0      ; Bitwise Logical And for Single-FP
.std:000000014E2CAC0C 0F 57 DA                                xorps   xmm3, xmm2      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CAC0F 0F 28 CB                                movaps  xmm1, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CAC12 0F 28 C3                                movaps  xmm0, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CAC15 0F C6 CB 55                             shufps  xmm1, xmm3, 55h ; 'U' ; Shuffle Single-FP
.std:000000014E2CAC19 0F 28 D3                                movaps  xmm2, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CAC1C 0F 14 C1                                unpcklps xmm0, xmm1     ; Unpack Low Packed Single-FP Data
.std:000000014E2CAC1F 0F C6 D3 AA                             shufps  xmm2, xmm3, 0AAh ; Shuffle Single-FP
.std:000000014E2CAC23 F2 0F 11 01                             movsd   qword ptr [rcx], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CAC27 F3 0F 11 51 08                          movss   dword ptr [rcx+8], xmm2 ; Move Scalar Single-FP
.std:000000014E2CAC2C E8 9F 81 56 FE                          call    sub_14C832DD0   ; Call Procedure
.std:000000014E2CAC31 0F 10 00                                movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.std:000000014E2CAC34 0F 11 83 F0 01 00 00                    movups  xmmword ptr [rbx+1F0h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:000000014E2CAC3B
.std:000000014E2CAC3B                         loc_14E2CAC3B:                          ; CODE XREF: sub_14E2CAB10+60↑j
.std:000000014E2CAC3B 0F 10 B3 F0 01 00 00                    movups  xmm6, xmmword ptr [rbx+1F0h] ; Move Unaligned Four Packed Single-FP
.std:000000014E2CAC42 48 8D 54 24 2C                          lea     rdx, [rsp+2Ch]  ; Load Effective Address
.std:000000014E2CAC47 48 8B CB                                mov     rcx, rbx
.std:000000014E2CAC4A E8 51 5F BF F2                          call    sub_140EC0BA0   ; Call Procedure
.std:000000014E2CAC4F 48 8B 5C 24 70                          mov     rbx, [rsp+70h]
.std:000000014E2CAC54 66 0F 6E C6                             movd    xmm0, esi       ; Move 32 bits
.std:000000014E2CAC58 48 8B 74 24 78                          mov     rsi, [rsp+78h]
.std:000000014E2CAC5D F3 0F 10 50 08                          movss   xmm2, dword ptr [rax+8] ; Move Scalar Single-FP
.std:000000014E2CAC62 F2 0F 10 18                             movsd   xmm3, qword ptr [rax] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CAC66 48 8B C7                                mov     rax, rdi
.std:000000014E2CAC69 0F 16 DA                                movlhps xmm3, xmm2      ; Move Low to High Packed Single-FP
.std:000000014E2CAC6C 0F 11 5F 10                             movups  xmmword ptr [rdi+10h], xmm3 ; Move Unaligned Four Packed Single-FP
.std:000000014E2CAC70 F2 0F 10 5C 24 20                       movsd   xmm3, qword ptr [rsp+20h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CAC76 0F 16 D8                                movlhps xmm3, xmm0      ; Move Low to High Packed Single-FP
.std:000000014E2CAC79 0F 11 37                                movups  xmmword ptr [rdi], xmm6 ; Move Unaligned Four Packed Single-FP
.std:000000014E2CAC7C 0F 28 74 24 50                          movaps  xmm6, xmmword ptr [rsp+50h] ; Move Aligned Four Packed Single-FP
.std:000000014E2CAC81 0F 11 5F 20                             movups  xmmword ptr [rdi+20h], xmm3 ; Move Unaligned Four Packed Single-FP
.std:000000014E2CAC85 48 83 C4 60                             add     rsp, 60h        ; Add
.std:000000014E2CAC89 5F                                      pop     rdi
.std:000000014E2CAC8A C3                                      retn                    ; Return Near from Procedure
.std:000000014E2CAC8A                         sub_14E2CAB10   endp
.std:000000014E2CAC8A
.std:000000014E2CAC8A                         ; ---------------------------------------------------------------------------
.std:000000014E2CAC8B CC CC CC CC CC                          align 10h

```
