---
sub_1452CCE70+E2   48 8D 0D F7 5A 40 0B lea rcx, aDoubleDecrypti  //Aob Scan  "48 8D 0D ?? ?? ?? ?? E8 ?? ?? ?? ?? 4C 8B C6 48 8D 4C 24 40 BA 0C 00 00 00 FF 15 ?? ?? ?? ?? 0F 28 74 24 40 F2 0F 10 47 14" 
---


sub_1452CCE70
sub_1452CCE70                                                      ; =============== S U B R O U T I N E =======================================
sub_1452CCE70
sub_1452CCE70
sub_1452CCE70                                                      sub_1452CCE70   proc near
sub_1452CCE70
sub_1452CCE70                                                      var_58          = qword ptr -58h
sub_1452CCE70                                                      var_50          = byte ptr -50h
sub_1452CCE70                                                      var_48          = qword ptr -48h
sub_1452CCE70                                                      var_40          = dword ptr -40h
sub_1452CCE70                                                      var_38          = xmmword ptr -38h
sub_1452CCE70                                                      var_28          = xmmword ptr -28h
sub_1452CCE70                                                      var_18          = xmmword ptr -18h
sub_1452CCE70                                                      var_8           = byte ptr -8
sub_1452CCE70                                                      arg_0           = qword ptr  8
sub_1452CCE70                                                      arg_8           = qword ptr  10h
sub_1452CCE70                                                      arg_10          = dword ptr  18h
sub_1452CCE70                                                      arg_18          = qword ptr  20h
sub_1452CCE70
sub_1452CCE70      48 89 5C 24 10                                                  mov     [rsp+10h], rbx
sub_1452CCE70+5    48 89 74 24 20                                                  mov     [rsp+20h], rsi
sub_1452CCE70+A    57                                                              push    rdi
sub_1452CCE70+B    48 83 EC 70                                                     sub     rsp, 70h        ; Integer Subtraction
sub_1452CCE70+F    49 8D B0 60 01 00 00                                            lea     rsi, [r8+160h]  ; Load Effective Address
sub_1452CCE70+16   48 8B F9                                                        mov     rdi, rcx
sub_1452CCE70+19   4C 8B C2                                                        mov     r8, rdx
sub_1452CCE70+1C   48 8B CE                                                        mov     rcx, rsi
sub_1452CCE70+1F   48 8D 94 24 90 00 00 00                                         lea     rdx, [rsp+90h]  ; Load Effective Address
sub_1452CCE70+27   E8 C4 14 AF FB                                                  call    sub_140DBE360   ; Call Procedure
sub_1452CCE70+2C   48 63 9C 24 90 00 00 00                                         movsxd  rbx, dword ptr [rsp+90h] ; Move with Sign-Extend Doubleword
sub_1452CCE70+34   83 FB FF                                                        cmp     ebx, 0FFFFFFFFh ; Compare Two Operands
sub_1452CCE70+37   0F 84 EE 01 00 00                                               jz      loc_1452CD09B   ; Jump if Zero (ZF=1)
sub_1452CCE70+3D   48 8B CE                                                        mov     rcx, rsi
sub_1452CCE70+40   FF 15 BA D8 57 11                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_1452CCE70+46   48 8B D3                                                        mov     rdx, rbx
sub_1452CCE70+49   48 C1 E2 05                                                     shl     rdx, 5          ; Shift Logical Left
sub_1452CCE70+4D   48 03 C2                                                        add     rax, rdx        ; Add
sub_1452CCE70+50   0F 84 D5 01 00 00                                               jz      loc_1452CD09B   ; Jump if Zero (ZF=1)
sub_1452CCE70+56   48 8D 58 10                                                     lea     rbx, [rax+10h]  ; Load Effective Address
sub_1452CCE70+5A   48 85 DB                                                        test    rbx, rbx        ; Logical Compare
sub_1452CCE70+5D   0F 84 C8 01 00 00                                               jz      loc_1452CD09B   ; Jump if Zero (ZF=1)
sub_1452CCE70+63   48 8B 1B                                                        mov     rbx, [rbx]
sub_1452CCE70+66   48 85 DB                                                        test    rbx, rbx        ; Logical Compare
sub_1452CCE70+69   0F 84 BC 01 00 00                                               jz      loc_1452CD09B   ; Jump if Zero (ZF=1)
sub_1452CCE70+6F   E8 7C 61 B6 09                                                  call    sub_14EE33060   ; Call Procedure
sub_1452CCE70+74   48 8B 53 08                                                     mov     rdx, [rbx+8]
sub_1452CCE70+78   4C 8D 40 30                                                     lea     r8, [rax+30h]   ; Load Effective Address
sub_1452CCE70+7C   48 63 40 38                                                     movsxd  rax, dword ptr [rax+38h] ; Move with Sign-Extend Doubleword
sub_1452CCE70+80   3B 42 38                                                        cmp     eax, [rdx+38h]  ; Compare Two Operands
sub_1452CCE70+83   0F 8F A2 01 00 00                                               jg      loc_1452CD09B   ; Jump if Greater (ZF=0 & SF=OF)
sub_1452CCE70+89   48 8B C8                                                        mov     rcx, rax
sub_1452CCE70+8C   48 8B 42 30                                                     mov     rax, [rdx+30h]
sub_1452CCE70+90   4C 39 04 C8                                                     cmp     [rax+rcx*8], r8 ; Compare Two Operands
sub_1452CCE70+94   0F 85 91 01 00 00                                               jnz     loc_1452CD09B   ; Jump if Not Zero (ZF=0)
sub_1452CCE70+9A   48 8B 03                                                        mov     rax, [rbx]
sub_1452CCE70+9D   BA 02 00 00 00                                                  mov     edx, 2
sub_1452CCE70+A2   48 89 AC 24 80 00 00 00                                         mov     [rsp+80h], rbp
sub_1452CCE70+AA   48 8B CB                                                        mov     rcx, rbx
sub_1452CCE70+AD   0F 29 74 24 60                                                  movaps  xmmword ptr [rsp+60h], xmm6 ; Move Aligned Four Packed Single-FP
sub_1452CCE70+B2   0F 29 7C 24 50                                                  movaps  xmmword ptr [rsp+50h], xmm7 ; Move Aligned Four Packed Single-FP
sub_1452CCE70+B7   FF 90 28 05 00 00                                               call    qword ptr [rax+528h] ; Indirect Call Near Procedure
sub_1452CCE70+BD   48 8B CB                                                        mov     rcx, rbx
sub_1452CCE70+C0   E8 2B EF 83 FB                                                  call    sub_140B0BE60   ; Call Procedure
sub_1452CCE70+C5   BD FF FF 00 00                                                  mov     ebp, 0FFFFh
sub_1452CCE70+CA   48 8D 70 30                                                     lea     rsi, [rax+30h]  ; Load Effective Address
sub_1452CCE70+CE   0F 10 70 10                                                     movups  xmm6, xmmword ptr [rax+10h] ; Move Unaligned Four Packed Single-FP
sub_1452CCE70+D2   0F 29 74 24 40                                                  movaps  xmmword ptr [rsp+40h], xmm6 ; Move Aligned Four Packed Single-FP
sub_1452CCE70+D7   66 39 2E                                                        cmp     [rsi], bp       ; Compare Two Operands
sub_1452CCE70+DA   74 2A                                                           jz      short loc_1452CCF76 ; Jump if Zero (ZF=1)
sub_1452CCE70+DC   80 7E 02 00                                                     cmp     byte ptr [rsi+2], 0 ; Compare Two Operands
sub_1452CCE70+E0   75 0C                                                           jnz     short loc_1452CCF5E ; Jump if Not Zero (ZF=0)
sub_1452CCE70+E2   48 8D 0D F7 5A 40 0B                                            lea     rcx, aDoubleDecrypti ; Load Effective Address
sub_1452CCE70+E9   E8 32 84 56 07                                                  call    sub_14C835390   ; Call Procedure
sub_1452CCE70+EE
sub_1452CCE70+EE                                                   loc_1452CCF5E:                          ; CODE XREF: sub_1452CCE70+E0↑j
sub_1452CCE70+EE   4C 8B C6                                                        mov     r8, rsi
sub_1452CCE70+F1   48 8D 4C 24 40                                                  lea     rcx, [rsp+40h]  ; Load Effective Address
sub_1452CCE70+F6   BA 0C 00 00 00                                                  mov     edx, 0Ch
sub_1452CCE70+FB   FF 15 E7 FC 0D 12                                               call    cs:qword_1573ACC58 ; Indirect Call Near Procedure
sub_1452CCE70+101  0F 28 74 24 40                                                  movaps  xmm6, xmmword ptr [rsp+40h] ; Move Aligned Four Packed Single-FP
sub_1452CCE70+106
sub_1452CCE70+106                                                  loc_1452CCF76:                          ; CODE XREF: sub_1452CCE70+DA↑j
sub_1452CCE70+106  F2 0F 10 47 14                                                  movsd   xmm0, qword ptr [rdi+14h] ; Move Scalar Double-Precision Floating-Point Values
sub_1452CCE70+10B  4C 8D 44 24 30                                                  lea     r8, [rsp+30h]   ; Load Effective Address
sub_1452CCE70+110  8B 47 1C                                                        mov     eax, [rdi+1Ch]
sub_1452CCE70+113  48 8D 54 24 40                                                  lea     rdx, [rsp+40h]  ; Load Effective Address
sub_1452CCE70+118  F2 0F 11 44 24 30                                               movsd   qword ptr [rsp+30h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
sub_1452CCE70+11E  45 33 C9                                                        xor     r9d, r9d        ; Logical Exclusive OR
sub_1452CCE70+121  F2 0F 10 47 08                                                  movsd   xmm0, qword ptr [rdi+8] ; Move Scalar Double-Precision Floating-Point Values
sub_1452CCE70+126  48 8B CB                                                        mov     rcx, rbx
sub_1452CCE70+129  89 44 24 38                                                     mov     [rsp+38h], eax
sub_1452CCE70+12D  8B 47 10                                                        mov     eax, [rdi+10h]
sub_1452CCE70+130  C6 44 24 28 00                                                  mov     byte ptr [rsp+28h], 0
sub_1452CCE70+135  F2 0F 11 44 24 40                                               movsd   qword ptr [rsp+40h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
sub_1452CCE70+13B  89 44 24 48                                                     mov     [rsp+48h], eax
sub_1452CCE70+13F  48 C7 44 24 20 00 00 00 00                                      mov     qword ptr [rsp+20h], 0
sub_1452CCE70+148  E8 23 0F 01 09                                                  call    sub_14E2DDEE0   ; Call Procedure
sub_1452CCE70+14D  F2 0F 10 47 20                                                  movsd   xmm0, qword ptr [rdi+20h] ; Move Scalar Double-Precision Floating-Point Values
sub_1452CCE70+152  48 8D 54 24 40                                                  lea     rdx, [rsp+40h]  ; Load Effective Address
sub_1452CCE70+157  8B 47 28                                                        mov     eax, [rdi+28h]
sub_1452CCE70+15A  48 8B CB                                                        mov     rcx, rbx
sub_1452CCE70+15D  F2 0F 11 44 24 40                                               movsd   qword ptr [rsp+40h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
sub_1452CCE70+163  89 44 24 48                                                     mov     [rsp+48h], eax
sub_1452CCE70+167  E8 64 14 01 09                                                  call    sub_14E2DE440   ; Call Procedure
sub_1452CCE70+16C  F2 0F 10 3D B4 D4 57 11                                         movsd   xmm7, cs:qword_15684A498 ; Move Scalar Double-Precision Floating-Point Values
sub_1452CCE70+174  0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
sub_1452CCE70+177  66 0F 2F F8                                                     comisd  xmm7, xmm0      ; Compare Scalar Ordered Double-Precision Floating-Point Values and Set EFLAGS
sub_1452CCE70+17B  0F 86 98 00 00 00                                               jbe     loc_1452CD089   ; Jump if Below or Equal (CF=1 | ZF=1)
sub_1452CCE70+181  48 8B CB                                                        mov     rcx, rbx
sub_1452CCE70+184  E8 67 EE 83 FB                                                  call    sub_140B0BE60   ; Call Procedure
sub_1452CCE70+189  48 8D 78 30                                                     lea     rdi, [rax+30h]  ; Load Effective Address
sub_1452CCE70+18D  0F 10 60 10                                                     movups  xmm4, xmmword ptr [rax+10h] ; Move Unaligned Four Packed Single-FP
sub_1452CCE70+191  0F 29 64 24 40                                                  movaps  xmmword ptr [rsp+40h], xmm4 ; Move Aligned Four Packed Single-FP
sub_1452CCE70+196  66 39 2F                                                        cmp     [rdi], bp       ; Compare Two Operands
sub_1452CCE70+199  74 2A                                                           jz      short loc_1452CD035 ; Jump if Zero (ZF=1)
sub_1452CCE70+19B  80 7F 02 00                                                     cmp     byte ptr [rdi+2], 0 ; Compare Two Operands
sub_1452CCE70+19F  75 0C                                                           jnz     short loc_1452CD01D ; Jump if Not Zero (ZF=0)
sub_1452CCE70+1A1  48 8D 0D 38 5A 40 0B                                            lea     rcx, aDoubleDecrypti ; Load Effective Address
sub_1452CCE70+1A8  E8 73 83 56 07                                                  call    sub_14C835390   ; Call Procedure
sub_1452CCE70+1AD
sub_1452CCE70+1AD                                                  loc_1452CD01D:                          ; CODE XREF: sub_1452CCE70+19F↑j
sub_1452CCE70+1AD  4C 8B C7                                                        mov     r8, rdi
sub_1452CCE70+1B0  48 8D 4C 24 40                                                  lea     rcx, [rsp+40h]  ; Load Effective Address
sub_1452CCE70+1B5  BA 0C 00 00 00                                                  mov     edx, 0Ch
sub_1452CCE70+1BA  FF 15 28 FC 0D 12                                               call    cs:qword_1573ACC58 ; Indirect Call Near Procedure
sub_1452CCE70+1C0  0F 28 64 24 40                                                  movaps  xmm4, xmmword ptr [rsp+40h] ; Move Aligned Four Packed Single-FP
sub_1452CCE70+1C5
sub_1452CCE70+1C5                                                  loc_1452CD035:                          ; CODE XREF: sub_1452CCE70+199↑j
sub_1452CCE70+1C5  F3 0F 10 1D D3 FF 3F 0B                                         movss   xmm3, dword ptr cs:xmmword_1506CD010 ; Move Scalar Single-FP
sub_1452CCE70+1CD  0F 28 D4                                                        movaps  xmm2, xmm4      ; Move Aligned Four Packed Single-FP
sub_1452CCE70+1D0  0F 28 CC                                                        movaps  xmm1, xmm4      ; Move Aligned Four Packed Single-FP
sub_1452CCE70+1D3  F3 0F 5C D6                                                     subss   xmm2, xmm6      ; Scalar Single-FP Subtract
sub_1452CCE70+1D7  0F C6 CC 55                                                     shufps  xmm1, xmm4, 55h ; 'U' ; Shuffle Single-FP
sub_1452CCE70+1DB  66 0F 5A C7                                                     cvtpd2ps xmm0, xmm7     ; Convert Packed Double-Precision Floating-Point Values to Packed Single-Precision Floating-Point Values
sub_1452CCE70+1DF  0F C6 E4 AA                                                     shufps  xmm4, xmm4, 0AAh ; Shuffle Single-FP
sub_1452CCE70+1E3  F3 0F 5E D8                                                     divss   xmm3, xmm0      ; Scalar Single-FP Divide
sub_1452CCE70+1E7  0F 28 C6                                                        movaps  xmm0, xmm6      ; Move Aligned Four Packed Single-FP
sub_1452CCE70+1EA  0F C6 C6 55                                                     shufps  xmm0, xmm6, 55h ; 'U' ; Shuffle Single-FP
sub_1452CCE70+1EE  F3 0F 59 D3                                                     mulss   xmm2, xmm3      ; Scalar Single-FP Multiply
sub_1452CCE70+1F2  F3 0F 5C C8                                                     subss   xmm1, xmm0      ; Scalar Single-FP Subtract
sub_1452CCE70+1F6  0F C6 F6 AA                                                     shufps  xmm6, xmm6, 0AAh ; Shuffle Single-FP
sub_1452CCE70+1FA  F3 0F 5C E6                                                     subss   xmm4, xmm6      ; Scalar Single-FP Subtract
sub_1452CCE70+1FE  F3 0F 59 CB                                                     mulss   xmm1, xmm3      ; Scalar Single-FP Multiply
sub_1452CCE70+202  F3 0F 59 E3                                                     mulss   xmm4, xmm3      ; Scalar Single-FP Multiply
sub_1452CCE70+206  0F 14 D1                                                        unpcklps xmm2, xmm1     ; Unpack Low Packed Single-FP Data
sub_1452CCE70+209  F2 0F 11 93 90 01 00 00                                         movsd   qword ptr [rbx+190h], xmm2 ; Move Scalar Double-Precision Floating-Point Values
sub_1452CCE70+211  F3 0F 11 A3 98 01 00 00                                         movss   dword ptr [rbx+198h], xmm4 ; Move Scalar Single-FP
sub_1452CCE70+219
sub_1452CCE70+219                                                  loc_1452CD089:                          ; CODE XREF: sub_1452CCE70+17B↑j
sub_1452CCE70+219  0F 28 74 24 60                                                  movaps  xmm6, xmmword ptr [rsp+60h] ; Move Aligned Four Packed Single-FP
sub_1452CCE70+21E  48 8B AC 24 80 00 00 00                                         mov     rbp, [rsp+80h]
sub_1452CCE70+226  0F 28 7C 24 50                                                  movaps  xmm7, xmmword ptr [rsp+50h] ; Move Aligned Four Packed Single-FP
sub_1452CCE70+22B
sub_1452CCE70+22B                                                  loc_1452CD09B:                          ; CODE XREF: sub_1452CCE70+37↑j
sub_1452CCE70+22B                                                                                          ; sub_1452CCE70+50↑j ...
sub_1452CCE70+22B  4C 8D 5C 24 70                                                  lea     r11, [rsp+70h]  ; Load Effective Address
sub_1452CCE70+230  49 8B 5B 18                                                     mov     rbx, [r11+18h]
sub_1452CCE70+234  49 8B 73 28                                                     mov     rsi, [r11+28h]
sub_1452CCE70+238  49 8B E3                                                        mov     rsp, r11
sub_1452CCE70+23B  5F                                                              pop     rdi
sub_1452CCE70+23C  C3                                                              retn                    ; Return Near from Procedure
sub_1452CCE70+23C                                                  sub_1452CCE70   endp
sub_1452CCE70+23C
sub_1452CCE70+23C                                                  ; ---------------------------------------------------------------------------
.text:00000001452CD0AD CC CC CC                                                        align 10h





```c

__int64 __fastcall sub_1452CCE70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  __m128 v14; // xmm6
  int v15; // eax
  __int64 v16; // xmm0_8
  __int32 v17; // eax
  double v18; // xmm7_8
  __int64 v19; // rdi
  __m128 v20; // xmm4
  __m128 v21; // xmm2
  __m128 v22; // xmm1
  float v23; // xmm0_4
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h]
  __m128 v26; // [rsp+40h] [rbp-38h] BYREF
  int v27; // [rsp+90h] [rbp+18h] BYREF

  v3 = a3 + 0x160;
  result = sub_140DBE360(a3 + 0x160, &v27, a2);
  v6 = v27;
  if ( v27 != 0xFFFFFFFF )
  {
    result = 0x20 * v6 + qword_15684A770(v3);
    if ( result )
    {
      if ( result != 0xFFFFFFFFFFFFFFF0uLL )
      {
        v7 = *(_QWORD *)(result + 0x10);
        if ( v7 )
        {
          v8 = sub_14EE33060();
          v9 = *(_QWORD *)(v7 + 8);
          v10 = v8 + 0x30;
          result = *(int *)(v8 + 0x38);
          if ( (int)result <= *(_DWORD *)(v9 + 0x38) )
          {
            v11 = result;
            result = *(_QWORD *)(v9 + 0x30);
            if ( *(_QWORD *)(result + 8 * v11) == v10 )
            {
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 0x528LL))(v7, 2LL);
              v12 = sub_140B0BE60(v7);
              v13 = v12 + 0x30;
              v14 = *(__m128 *)(v12 + 0x10);
              v26 = v14;
              if ( *(_WORD *)(v12 + 0x30) != 0xFFFF )
              {
                if ( !*(_BYTE *)(v12 + 0x32) )
                  sub_14C835390(L"double decryption in EEncHandlerPolicy::None");
                qword_1573ACC58(&v26, 0xCLL, v13);
                v14 = v26;
              }
              v15 = *(_DWORD *)(a1 + 0x1C);
              v24 = *(_QWORD *)(a1 + 0x14);
              v16 = *(_QWORD *)(a1 + 8);
              LODWORD(v25) = v15;
              v26.m128_i32[2] = *(_DWORD *)(a1 + 0x10);
              sub_14E2DDEE0(v7, (unsigned int)&v26, (unsigned int)&v24, 0, 0LL, 0, v24, v25, v16, v26.m128_u64[1]);
              v17 = *(_DWORD *)(a1 + 0x28);
              v26.m128_u64[0] = *(_QWORD *)(a1 + 0x20);
              v26.m128_i32[2] = v17;
              result = sub_14E2DE440(v7, &v26);
              v18 = *(double *)&qword_15684A498;
              if ( *(double *)&qword_15684A498 > 0.0 )
              {
                result = sub_140B0BE60(v7);
                v19 = result + 0x30;
                v20 = *(__m128 *)(result + 0x10);
                v26 = v20;
                if ( *(_WORD *)(result + 0x30) != 0xFFFF )
                {
                  if ( !*(_BYTE *)(result + 0x32) )
                    sub_14C835390(L"double decryption in EEncHandlerPolicy::None");
                  result = qword_1573ACC58(&v26, 0xCLL, v19);
                  v20 = v26;
                }
                v21 = v20;
                v22 = _mm_shuffle_ps(v20, v20, 0x55);
                v23 = v18;
                v21.m128_f32[0] = (float)(v20.m128_f32[0] - v14.m128_f32[0]) * (float)(1.0 / v23);
                v22.m128_f32[0] = (float)(v22.m128_f32[0] - _mm_shuffle_ps(v14, v14, 0x55).m128_f32[0])
                                * (float)(1.0 / v23);
                *(_QWORD *)(v7 + 0x190) = _mm_unpacklo_ps(v21, v22).m128_u64[0];
                *(float *)(v7 + 0x198) = (float)(_mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
                                               - _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0])
                                       * (float)(1.0 / v23);
              }
            }
          }
        }
      }
    }
  }
  return result;
}



```
