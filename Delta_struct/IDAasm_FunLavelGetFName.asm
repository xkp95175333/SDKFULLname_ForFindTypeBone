sub_150260E60
sub_150260E60                                                      ; =============== S U B R O U T I N E =======================================
sub_150260E60
sub_150260E60
sub_150260E60                                                      sub_150260E60   proc near               ; CODE XREF: sub_15025FE80+D↑j
sub_150260E60
sub_150260E60                                                      var_1D8         = xmmword ptr -1D8h
sub_150260E60                                                      var_1C8         = xmmword ptr -1C8h
sub_150260E60                                                      var_1B8         = xmmword ptr -1B8h
sub_150260E60                                                      var_1A8         = xmmword ptr -1A8h
sub_150260E60                                                      var_198         = xmmword ptr -198h
sub_150260E60                                                      var_188         = xmmword ptr -188h
sub_150260E60                                                      var_178         = xmmword ptr -178h
sub_150260E60                                                      var_168         = xmmword ptr -168h
sub_150260E60                                                      var_158         = xmmword ptr -158h
sub_150260E60                                                      var_109         = byte ptr -109h
sub_150260E60                                                      var_B8          = xmmword ptr -0B8h
sub_150260E60                                                      var_A8          = xmmword ptr -0A8h
sub_150260E60                                                      var_98          = xmmword ptr -98h
sub_150260E60                                                      var_88          = xmmword ptr -88h
sub_150260E60                                                      var_78          = xmmword ptr -78h
sub_150260E60                                                      var_68          = xmmword ptr -68h
sub_150260E60                                                      var_58          = xmmword ptr -58h
sub_150260E60                                                      var_48          = xmmword ptr -48h
sub_150260E60                                                      var_38          = xmmword ptr -38h
sub_150260E60                                                      var_28          = xmmword ptr -28h
sub_150260E60                                                      var_18          = qword ptr -18h
sub_150260E60                                                      var_10          = qword ptr -10h
sub_150260E60
sub_150260E60      48 81 EC F8 01 00 00                                            sub     rsp, 1F8h       ; Integer Subtraction
sub_150260E60+7    4C 8D 0D 92 CE EB 07                                            lea     r9, unk_15811DD00 ; Load Effective Address
sub_150260E60+E    44 0F 29 BC 24 70 01 00 00                                      movaps  xmmword ptr [rsp+170h], xmm15 ; Move Aligned Four Packed Single-FP
sub_150260E60+17   45 33 D2                                                        xor     r10d, r10d      ; Logical Exclusive OR
sub_150260E60+1A   44 0F 29 B4 24 C0 01 00 00                                      movaps  xmmword ptr [rsp+1C0h], xmm14 ; Move Aligned Four Packed Single-FP
sub_150260E60+23   44 0F 29 AC 24 40 01 00 00                                      movaps  xmmword ptr [rsp+140h], xmm13 ; Move Aligned Four Packed Single-FP
sub_150260E60+2C   44 0F 29 A4 24 B0 01 00 00                                      movaps  xmmword ptr [rsp+1B0h], xmm12 ; Move Aligned Four Packed Single-FP
sub_150260E60+35   44 0F 29 9C 24 D0 01 00 00                                      movaps  xmmword ptr [rsp+1D0h], xmm11 ; Move Aligned Four Packed Single-FP
sub_150260E60+3E   44 0F 29 94 24 90 01 00 00                                      movaps  xmmword ptr [rsp+190h], xmm10 ; Move Aligned Four Packed Single-FP
sub_150260E60+47   44 0F 29 8C 24 50 01 00 00                                      movaps  xmmword ptr [rsp+150h], xmm9 ; Move Aligned Four Packed Single-FP
sub_150260E60+50   44 0F 29 84 24 80 01 00 00                                      movaps  xmmword ptr [rsp+180h], xmm8 ; Move Aligned Four Packed Single-FP
sub_150260E60+59   44 0F 28 C0                                                     movaps  xmm8, xmm0      ; Move Aligned Four Packed Single-FP
sub_150260E60+5D   0F 29 BC 24 60 01 00 00                                         movaps  xmmword ptr [rsp+160h], xmm7 ; Move Aligned Four Packed Single-FP
sub_150260E60+65   0F 29 B4 24 A0 01 00 00                                         movaps  xmmword ptr [rsp+1A0h], xmm6 ; Move Aligned Four Packed Single-FP
sub_150260E60+6D   4C 89 AC 24 E0 01 00 00                                         mov     [rsp+1E0h], r13
sub_150260E60+75   4C 8D AC 24 EF 00 00 00                                         lea     r13, [rsp+0EFh] ; Load Effective Address
sub_150260E60+7D   0F 10 3D 1C EA EB 07                                            movups  xmm7, cs:xmmword_15811F900 ; Move Unaligned Four Packed Single-FP
sub_150260E60+84   49 83 E5 C0                                                     and     r13, 0FFFFFFFFFFFFFFC0h ; Logical AND
sub_150260E60+88   0F 10 2D 91 EE EB 07                                            movups  xmm5, cs:xmmword_15811FD80 ; Move Unaligned Four Packed Single-FP
sub_150260E60+8F   44 0F 54 C7                                                     andps   xmm8, xmm7      ; Bitwise Logical And for Single-FP
sub_150260E60+93   41 0F 59 E8                                                     mulps   xmm5, xmm8      ; Packed Single-FP Multiply
sub_150260E60+97   45 0F 28 D0                                                     movaps  xmm10, xmm8     ; Move Aligned Four Packed Single-FP
sub_150260E60+9B   0F 10 0D BE EE EB 07                                            movups  xmm1, cs:xmmword_15811FDC0 ; Move Unaligned Four Packed Single-FP
sub_150260E60+A2   0F 55 F8                                                        andnps  xmm7, xmm0      ; Bitwise Logical And Not for Single-FP
sub_150260E60+A5   0F 10 15 B4 EB EB 07                                            movups  xmm2, cs:xmmword_15811FAC0 ; Move Unaligned Four Packed Single-FP
sub_150260E60+AC   0F 58 E9                                                        addps   xmm5, xmm1      ; Packed Single-FP Add
sub_150260E60+AF   0F 28 F5                                                        movaps  xmm6, xmm5      ; Move Aligned Four Packed Single-FP
sub_150260E60+B2   0F 5C E9                                                        subps   xmm5, xmm1      ; Packed Single-FP Subtract
sub_150260E60+B5   0F 59 D5                                                        mulps   xmm2, xmm5      ; Packed Single-FP Multiply
sub_150260E60+B8   66 0F 72 F6 1F                                                  pslld   xmm6, 1Fh       ; Packed Shift Left Logical (Dword)
sub_150260E60+BD   0F 10 1D DC EB EB 07                                            movups  xmm3, cs:xmmword_15811FB00 ; Move Unaligned Four Packed Single-FP
sub_150260E60+C4   44 0F 5C D2                                                     subps   xmm10, xmm2     ; Packed Single-FP Subtract
sub_150260E60+C8   0F 59 DD                                                        mulps   xmm3, xmm5      ; Packed Single-FP Multiply
sub_150260E60+CB   0F 10 25 0E EC EB 07                                            movups  xmm4, cs:xmmword_15811FB40 ; Move Unaligned Four Packed Single-FP
sub_150260E60+D2   44 0F 5C D3                                                     subps   xmm10, xmm3     ; Packed Single-FP Subtract
sub_150260E60+D6   0F 59 E5                                                        mulps   xmm4, xmm5      ; Packed Single-FP Multiply
sub_150260E60+D9   0F 10 0D 40 EC EB 07                                            movups  xmm1, cs:xmmword_15811FB80 ; Move Unaligned Four Packed Single-FP
sub_150260E60+E0   44 0F 5C D4                                                     subps   xmm10, xmm4     ; Packed Single-FP Subtract
sub_150260E60+E4   0F 59 CD                                                        mulps   xmm1, xmm5      ; Packed Single-FP Multiply
sub_150260E60+E7   0F 10 15 F2 ED EB 07                                            movups  xmm2, cs:xmmword_15811FD40 ; Move Unaligned Four Packed Single-FP
sub_150260E60+EE   44 0F 5C D1                                                     subps   xmm10, xmm1     ; Packed Single-FP Subtract
sub_150260E60+F2   41 0F 28 DA                                                     movaps  xmm3, xmm10     ; Move Aligned Four Packed Single-FP
sub_150260E60+F6   41 0F 28 C8                                                     movaps  xmm1, xmm8      ; Move Aligned Four Packed Single-FP
sub_150260E60+FA   41 0F 59 DA                                                     mulps   xmm3, xmm10     ; Packed Single-FP Multiply
sub_150260E60+FE   66 44 0F EF D6                                                  pxor    xmm10, xmm6     ; Bitwise Logical Exclusive Or
sub_150260E60+103  0F C2 0D D5 E9 EB 07 06                                         cmpnleps xmm1, cs:xmmword_15811F940 ; Packed Single-FP Compare NOT LE
sub_150260E60+10B  0F 59 D3                                                        mulps   xmm2, xmm3      ; Packed Single-FP Multiply
sub_150260E60+10E  0F 50 C1                                                        movmskps eax, xmm1      ; Move Mask to Register
sub_150260E60+111  0F 58 15 88 ED EB 07                                            addps   xmm2, cs:xmmword_15811FD00 ; Packed Single-FP Add
sub_150260E60+118  0F 59 D3                                                        mulps   xmm2, xmm3      ; Packed Single-FP Multiply
sub_150260E60+11B  4C 89 AC 24 E8 01 00 00                                         mov     [rsp+1E8h], r13
sub_150260E60+123  0F 58 15 36 ED EB 07                                            addps   xmm2, cs:xmmword_15811FCC0 ; Packed Single-FP Add
sub_150260E60+12A  0F 59 D3                                                        mulps   xmm2, xmm3      ; Packed Single-FP Multiply
sub_150260E60+12D  0F 58 15 EC EC EB 07                                            addps   xmm2, cs:xmmword_15811FC80 ; Packed Single-FP Add
sub_150260E60+134  0F 59 DA                                                        mulps   xmm3, xmm2      ; Packed Single-FP Multiply
sub_150260E60+137  41 0F 59 DA                                                     mulps   xmm3, xmm10     ; Packed Single-FP Multiply
sub_150260E60+13B  44 0F 58 D3                                                     addps   xmm10, xmm3     ; Packed Single-FP Add
sub_150260E60+13F  66 44 0F EF D7                                                  pxor    xmm10, xmm7     ; Bitwise Logical Exclusive Or
sub_150260E60+144  85 C0                                                           test    eax, eax        ; Logical Compare
sub_150260E60+146  0F 85 BF 00 00 00                                               jnz     loc_15026106B   ; Jump if Not Zero (ZF=0)
sub_150260E60+14C
sub_150260E60+14C                                                  loc_150260FAC:                          ; CODE XREF: sub_150260E60+933↓j
sub_150260E60+14C  45 85 D2                                                        test    r10d, r10d      ; Logical Compare
sub_150260E60+14F  75 6C                                                           jnz     short loc_15026101D ; Jump if Not Zero (ZF=0)
sub_150260E60+151
sub_150260E60+151                                                  loc_150260FB1:                          ; CODE XREF: sub_150260E60+1C7↓j
sub_150260E60+151                                                                                          ; sub_150260E60+1F5↓j
sub_150260E60+151  0F 10 B4 24 A0 01 00 00                                         movups  xmm6, xmmword ptr [rsp+1A0h] ; Move Unaligned Four Packed Single-FP
sub_150260E60+159  41 0F 28 C2                                                     movaps  xmm0, xmm10     ; Move Aligned Four Packed Single-FP
sub_150260E60+15D  0F 10 BC 24 60 01 00 00                                         movups  xmm7, xmmword ptr [rsp+160h] ; Move Unaligned Four Packed Single-FP
sub_150260E60+165  44 0F 10 84 24 80 01 00 00                                      movups  xmm8, xmmword ptr [rsp+180h] ; Move Unaligned Four Packed Single-FP
sub_150260E60+16E  44 0F 10 8C 24 50 01 00 00                                      movups  xmm9, xmmword ptr [rsp+150h] ; Move Unaligned Four Packed Single-FP
sub_150260E60+177  44 0F 10 94 24 90 01 00 00                                      movups  xmm10, xmmword ptr [rsp+190h] ; Move Unaligned Four Packed Single-FP
sub_150260E60+180  44 0F 10 9C 24 D0 01 00 00                                      movups  xmm11, xmmword ptr [rsp+1D0h] ; Move Unaligned Four Packed Single-FP
sub_150260E60+189  44 0F 10 A4 24 B0 01 00 00                                      movups  xmm12, xmmword ptr [rsp+1B0h] ; Move Unaligned Four Packed Single-FP
sub_150260E60+192  44 0F 10 AC 24 40 01 00 00                                      movups  xmm13, xmmword ptr [rsp+140h] ; Move Unaligned Four Packed Single-FP
sub_150260E60+19B  44 0F 10 B4 24 C0 01 00 00                                      movups  xmm14, xmmword ptr [rsp+1C0h] ; Move Unaligned Four Packed Single-FP
sub_150260E60+1A4  44 0F 10 BC 24 70 01 00 00                                      movups  xmm15, xmmword ptr [rsp+170h] ; Move Unaligned Four Packed Single-FP
sub_150260E60+1AD  4C 8B AC 24 E0 01 00 00                                         mov     r13, [rsp+1E0h]
sub_150260E60+1B5  48 81 C4 F8 01 00 00                                            add     rsp, 1F8h       ; Add
sub_150260E60+1BC  C3                                                              retn                    ; Return Near from Procedure
sub_150260E60+1BD                                                  ; ---------------------------------------------------------------------------
sub_150260E60+1BD
sub_150260E60+1BD                                                  loc_15026101D:                          ; CODE XREF: sub_150260E60+14F↑j
sub_150260E60+1BD  41 0F 11 45 00                                                  movups  xmmword ptr [r13+0], xmm0 ; Move Unaligned Four Packed Single-FP
sub_150260E60+1C2  45 0F 11 55 40                                                  movups  xmmword ptr [r13+40h], xmm10 ; Move Unaligned Four Packed Single-FP
sub_150260E60+1C7  74 88                                                           jz      short loc_150260FB1 ; Jump if Zero (ZF=1)
sub_150260E60+1C9  33 C0                                                           xor     eax, eax        ; Logical Exclusive OR
sub_150260E60+1CB  48 89 5C 24 28                                                  mov     [rsp+28h], rbx
sub_150260E60+1D0  8B D8                                                           mov     ebx, eax
sub_150260E60+1D2  48 89 74 24 20                                                  mov     [rsp+20h], rsi
sub_150260E60+1D7  41 8B F2                                                        mov     esi, r10d
sub_150260E60+1DA
sub_150260E60+1DA                                                  loc_15026103A:                          ; CODE XREF: sub_150260E60+1E4↓j
sub_150260E60+1DA  0F A3 DE                                                        bt      esi, ebx        ; Bit Test
sub_150260E60+1DD  72 1B                                                           jb      short loc_15026105A ; Jump if Below (CF=1)
sub_150260E60+1DF
sub_150260E60+1DF                                                  loc_15026103F:                          ; CODE XREF: sub_150260E60+209↓j
sub_150260E60+1DF  FF C3                                                           inc     ebx             ; Increment by 1
sub_150260E60+1E1  83 FB 04                                                        cmp     ebx, 4          ; Compare Two Operands
sub_150260E60+1E4  7C F4                                                           jl      short loc_15026103A ; Jump if Less (SF!=OF)
sub_150260E60+1E6  48 8B 5C 24 28                                                  mov     rbx, [rsp+28h]
sub_150260E60+1EB  48 8B 74 24 20                                                  mov     rsi, [rsp+20h]
sub_150260E60+1F0  45 0F 10 55 40                                                  movups  xmm10, xmmword ptr [r13+40h] ; Move Unaligned Four Packed Single-FP
sub_150260E60+1F5  E9 57 FF FF FF                                                  jmp     loc_150260FB1   ; Jump
sub_150260E60+1FA                                                  ; ---------------------------------------------------------------------------
sub_150260E60+1FA
sub_150260E60+1FA                                                  loc_15026105A:                          ; CODE XREF: sub_150260E60+1DD↑j
sub_150260E60+1FA  49 8D 4C 9D 00                                                  lea     rcx, [r13+rbx*4+0] ; Load Effective Address
sub_150260E60+1FF  49 8D 54 9D 40                                                  lea     rdx, [r13+rbx*4+40h] ; Load Effective Address
sub_150260E60+204  E8 C7 47 00 00                                                  call    sub_150265830   ; Call Procedure
sub_150260E60+209  EB D4                                                           jmp     short loc_15026103F ; Jump
sub_150260E60+20B                                                  ; ---------------------------------------------------------------------------
sub_150260E60+20B
sub_150260E60+20B                                                  loc_15026106B:                          ; CODE XREF: sub_150260E60+146↑j
sub_150260E60+20B  41 BB 00 00 80 7F                                               mov     r11d, 7F800000h
sub_150260E60+211  0F 10 25 08 E9 EB 07                                            movups  xmm4, cs:xmmword_15811F980 ; Move Unaligned Four Packed Single-FP
sub_150260E60+218  44 0F 11 54 24 40                                               movups  xmmword ptr [rsp+40h], xmm10 ; Move Unaligned Four Packed Single-FP
sub_150260E60+21E  44 0F 54 C4                                                     andps   xmm8, xmm4      ; Bitwise Logical And for Single-FP
sub_150260E60+222  44 0F C2 C4 00                                                  cmpeqps xmm8, xmm4      ; Packed Single-FP Compare EQ
sub_150260E60+227  66 45 0F 6E EB                                                  movd    xmm13, r11d     ; Move 32 bits
sub_150260E60+22C  41 BB FF FF 7F 00                                               mov     r11d, 7FFFFFh
sub_150260E60+232  66 45 0F 70 E5 00                                               pshufd  xmm12, xmm13, 0 ; Shuffle Packed Doublewords
sub_150260E60+238  66 44 0F DB E0                                                  pand    xmm12, xmm0     ; Bitwise Logical And
sub_150260E60+23D  66 41 0F 72 D4 17                                               psrld   xmm12, 17h      ; Packed Shift Right Logical (Dword)
sub_150260E60+243  66 41 0F 6F FC                                                  movdqa  xmm7, xmm12     ; Move Aligned Double Quadword
sub_150260E60+248  66 0F 72 F7 01                                                  pslld   xmm7, 1         ; Packed Shift Left Logical (Dword)
sub_150260E60+24D  66 41 0F FE FC                                                  paddd   xmm7, xmm12     ; Packed Add Dword
sub_150260E60+252  66 0F 72 F7 02                                                  pslld   xmm7, 2         ; Packed Shift Left Logical (Dword)
sub_150260E60+257  66 44 0F 70 D7 02                                               pshufd  xmm10, xmm7, 2  ; Shuffle Packed Doublewords
sub_150260E60+25D  66 44 0F 7E D2                                                  movd    edx, xmm10      ; Move 32 bits
sub_150260E60+262  66 45 0F 6E D3                                                  movd    xmm10, r11d     ; Move 32 bits
sub_150260E60+267  66 44 0F 70 F7 03                                               pshufd  xmm14, xmm7, 3  ; Shuffle Packed Doublewords
sub_150260E60+26D  66 44 0F 70 DF 01                                               pshufd  xmm11, xmm7, 1  ; Shuffle Packed Doublewords
sub_150260E60+273  66 44 0F 7E F0                                                  movd    eax, xmm14      ; Move 32 bits
sub_150260E60+278  41 BB 00 00 40 47                                               mov     r11d, 47400000h
sub_150260E60+27E  66 41 0F 7E F8                                                  movd    r8d, xmm7       ; Move 32 bits
sub_150260E60+283  66 44 0F 7E D9                                                  movd    ecx, xmm11      ; Move 32 bits
sub_150260E60+288  0F 11 4C 24 30                                                  movups  xmmword ptr [rsp+30h], xmm1 ; Move Unaligned Four Packed Single-FP
sub_150260E60+28D  66 41 0F 6E 34 11                                               movd    xmm6, dword ptr [r9+rdx] ; Move 32 bits
sub_150260E60+293  66 41 0F 6E 4C 11 04                                            movd    xmm1, dword ptr [r9+rdx+4] ; Move 32 bits
sub_150260E60+29A  66 45 0F 6E 5C 11 08                                            movd    xmm11, dword ptr [r9+rdx+8] ; Move 32 bits
sub_150260E60+2A1  BA 00 00 80 00                                                  mov     edx, 800000h
sub_150260E60+2A6  66 41 0F 6E 14 01                                               movd    xmm2, dword ptr [r9+rax] ; Move 32 bits
sub_150260E60+2AC  66 41 0F 6E 5C 01 04                                            movd    xmm3, dword ptr [r9+rax+4] ; Move 32 bits
sub_150260E60+2B3  66 45 0F 6E 64 01 08                                            movd    xmm12, dword ptr [r9+rax+8] ; Move 32 bits
sub_150260E60+2BA  B8 FF FF 00 00                                                  mov     eax, 0FFFFh
sub_150260E60+2BF  45 0F 50 D0                                                     movmskps r10d, xmm8     ; Move Mask to Register
sub_150260E60+2C3  66 47 0F 6E 04 01                                               movd    xmm8, dword ptr [r9+r8] ; Move 32 bits
sub_150260E60+2C9  66 45 0F 6E 3C 09                                               movd    xmm15, dword ptr [r9+rcx] ; Move 32 bits
sub_150260E60+2CF  66 45 0F 70 F2 00                                               pshufd  xmm14, xmm10, 0 ; Shuffle Packed Doublewords
sub_150260E60+2D5  66 45 0F 62 C7                                                  punpckldq xmm8, xmm15   ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+2DA  66 44 0F DB F0                                                  pand    xmm14, xmm0     ; Bitwise Logical And
sub_150260E60+2DF  66 0F 62 F2                                                     punpckldq xmm6, xmm2    ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+2E3  66 45 0F 6E 6C 09 08                                            movd    xmm13, dword ptr [r9+rcx+8] ; Move 32 bits
sub_150260E60+2EA  0F 11 44 24 20                                                  movups  xmmword ptr [rsp+20h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_150260E60+2EF  66 0F 6E C2                                                     movd    xmm0, edx       ; Move 32 bits
sub_150260E60+2F3  66 43 0F 6E 64 01 08                                            movd    xmm4, dword ptr [r9+r8+8] ; Move 32 bits
sub_150260E60+2FA  BA 00 00 80 28                                                  mov     edx, 28800000h
sub_150260E60+2FF  66 44 0F 6C C6                                                  punpcklqdq xmm8, xmm6   ; Unpack Low Data
sub_150260E60+304  66 41 0F 62 E5                                                  punpckldq xmm4, xmm13   ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+309  66 44 0F 6E E8                                                  movd    xmm13, eax      ; Move 32 bits
sub_150260E60+30E  66 0F 70 C0 00                                                  pshufd  xmm0, xmm0, 0   ; Shuffle Packed Doublewords
sub_150260E60+313  B8 FF FF 03 00                                                  mov     eax, 3FFFFh
sub_150260E60+318  66 45 0F 62 DC                                                  punpckldq xmm11, xmm12  ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+31D  66 45 0F 6F E0                                                  movdqa  xmm12, xmm8     ; Move Aligned Double Quadword
sub_150260E60+322  66 41 0F 70 FD 00                                               pshufd  xmm7, xmm13, 0  ; Shuffle Packed Doublewords
sub_150260E60+328  66 44 0F FE F0                                                  paddd   xmm14, xmm0     ; Packed Add Dword
sub_150260E60+32D  66 41 0F 72 D4 10                                               psrld   xmm12, 10h      ; Packed Shift Right Logical (Dword)
sub_150260E60+333  66 44 0F DB C7                                                  pand    xmm8, xmm7      ; Bitwise Logical And
sub_150260E60+338  F3 44 0F 7F 64 24 50                                            movdqu  xmmword ptr [rsp+50h], xmm12 ; Move Unaligned Double Quadword
sub_150260E60+33F  66 45 0F 6F E6                                                  movdqa  xmm12, xmm14    ; Move Aligned Double Quadword
sub_150260E60+344  66 44 0F DB F7                                                  pand    xmm14, xmm7     ; Bitwise Logical And
sub_150260E60+349  66 45 0F 6F E8                                                  movdqa  xmm13, xmm8     ; Move Aligned Double Quadword
sub_150260E60+34E  66 45 0F 6F D6                                                  movdqa  xmm10, xmm14    ; Move Aligned Double Quadword
sub_150260E60+353  66 41 0F 73 D5 20                                               psrlq   xmm13, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150260E60+359  66 41 0F 73 D2 20                                               psrlq   xmm10, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150260E60+35F  66 45 0F 6F FE                                                  movdqa  xmm15, xmm14    ; Move Aligned Double Quadword
sub_150260E60+364  66 41 0F 6F F2                                                  movdqa  xmm6, xmm10     ; Move Aligned Double Quadword
sub_150260E60+369  66 41 0F 72 D4 10                                               psrld   xmm12, 10h      ; Packed Shift Right Logical (Dword)
sub_150260E60+36F  66 47 0F 6E 4C 01 04                                            movd    xmm9, dword ptr [r9+r8+4] ; Move 32 bits
sub_150260E60+376  41 B8 00 00 80 3F                                               mov     r8d, 3F800000h
sub_150260E60+37C  66 41 0F 6E 6C 09 04                                            movd    xmm5, dword ptr [r9+rcx+4] ; Move 32 bits
sub_150260E60+383  4C 8D 0D 16 D7 EB 07                                            lea     r9, unk_15811E900 ; Load Effective Address
sub_150260E60+38A  B9 00 00 00 80                                                  mov     ecx, 80000000h
sub_150260E60+38F  66 45 0F F4 F8                                                  pmuludq xmm15, xmm8     ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+394  66 41 0F F4 F5                                                  pmuludq xmm6, xmm13     ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+399  66 44 0F 62 CD                                                  punpckldq xmm9, xmm5    ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+39E  66 0F 73 F6 20                                                  psllq   xmm6, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150260E60+3A3  66 0F 62 CB                                                     punpckldq xmm1, xmm3    ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+3A7  66 44 0F 6C C9                                                  punpcklqdq xmm9, xmm1   ; Unpack Low Data
sub_150260E60+3AC  66 41 0F 6F C1                                                  movdqa  xmm0, xmm9      ; Move Aligned Double Quadword
sub_150260E60+3B1  66 44 0F DB CF                                                  pand    xmm9, xmm7      ; Bitwise Logical And
sub_150260E60+3B6  F3 44 0F 7F 44 24 60                                            movdqu  xmmword ptr [rsp+60h], xmm8 ; Move Unaligned Double Quadword
sub_150260E60+3BD  66 0F 72 D0 10                                                  psrld   xmm0, 10h       ; Packed Shift Right Logical (Dword)
sub_150260E60+3C2  F3 44 0F 6F 05 D5 B7 EB 07                                      movdqu  xmm8, cs:xmmword_15811CA00 ; Move Unaligned Double Quadword
sub_150260E60+3CB  66 0F 6F C8                                                     movdqa  xmm1, xmm0      ; Move Aligned Double Quadword
sub_150260E60+3CF  66 45 0F DB F8                                                  pand    xmm15, xmm8     ; Bitwise Logical And
sub_150260E60+3D4  66 0F 73 D1 20                                                  psrlq   xmm1, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150260E60+3D9  66 44 0F EB FE                                                  por     xmm15, xmm6     ; Bitwise Logical Or
sub_150260E60+3DE  66 41 0F 6F E9                                                  movdqa  xmm5, xmm9      ; Move Aligned Double Quadword
sub_150260E60+3E3  F3 44 0F 7F BC 24 A0 00 00 00                                   movdqu  xmmword ptr [rsp+0A0h], xmm15 ; Move Unaligned Double Quadword
sub_150260E60+3ED  66 41 0F 6F F6                                                  movdqa  xmm6, xmm14     ; Move Aligned Double Quadword
sub_150260E60+3F2  66 45 0F 6F FA                                                  movdqa  xmm15, xmm10    ; Move Aligned Double Quadword
sub_150260E60+3F7  66 0F 73 D5 20                                                  psrlq   xmm5, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150260E60+3FC  F3 0F 7F 44 24 70                                               movdqu  xmmword ptr [rsp+70h], xmm0 ; Move Unaligned Double Quadword
sub_150260E60+402  F3 0F 7F 8C 24 90 00 00 00                                      movdqu  xmmword ptr [rsp+90h], xmm1 ; Move Unaligned Double Quadword
sub_150260E60+40B  66 0F F4 F0                                                     pmuludq xmm6, xmm0      ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+40F  66 41 0F 6F C2                                                  movdqa  xmm0, xmm10     ; Move Aligned Double Quadword
sub_150260E60+414  66 44 0F F4 F9                                                  pmuludq xmm15, xmm1     ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+419  66 0F F4 C5                                                     pmuludq xmm0, xmm5      ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+41D  66 41 0F 6F CE                                                  movdqa  xmm1, xmm14     ; Move Aligned Double Quadword
sub_150260E60+422  66 0F 73 F0 20                                                  psllq   xmm0, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150260E60+427  66 41 0F F4 C9                                                  pmuludq xmm1, xmm9      ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+42C  66 41 0F DB F0                                                  pand    xmm6, xmm8      ; Bitwise Logical And
sub_150260E60+431  66 45 0F F4 CC                                                  pmuludq xmm9, xmm12     ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+436  66 41 0F 6C E3                                                  punpcklqdq xmm4, xmm11  ; Unpack Low Data
sub_150260E60+43B  66 41 0F DB C8                                                  pand    xmm1, xmm8      ; Bitwise Logical And
sub_150260E60+440  66 0F 6F D4                                                     movdqa  xmm2, xmm4      ; Move Aligned Double Quadword
sub_150260E60+444  66 0F DB E7                                                     pand    xmm4, xmm7      ; Bitwise Logical And
sub_150260E60+448  66 45 0F 6F DC                                                  movdqa  xmm11, xmm12    ; Move Aligned Double Quadword
sub_150260E60+44D  66 0F EB C8                                                     por     xmm1, xmm0      ; Bitwise Logical Or
sub_150260E60+451  66 41 0F 6F C4                                                  movdqa  xmm0, xmm12     ; Move Aligned Double Quadword
sub_150260E60+456  66 41 0F 73 D3 20                                               psrlq   xmm11, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150260E60+45C  66 0F F4 C4                                                     pmuludq xmm0, xmm4      ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+460  66 0F 73 D4 20                                                  psrlq   xmm4, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150260E60+465  66 41 0F F4 E3                                                  pmuludq xmm4, xmm11     ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+46A  66 41 0F F4 EB                                                  pmuludq xmm5, xmm11     ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+46F  66 0F 72 D2 10                                                  psrld   xmm2, 10h       ; Packed Shift Right Logical (Dword)
sub_150260E60+474  66 41 0F DB C0                                                  pand    xmm0, xmm8      ; Bitwise Logical And
sub_150260E60+479  66 0F 6F DA                                                     movdqa  xmm3, xmm2      ; Move Aligned Double Quadword
sub_150260E60+47D  66 0F 73 F4 20                                                  psllq   xmm4, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150260E60+482  F3 44 0F 7F AC 24 80 00 00 00                                   movdqu  xmmword ptr [rsp+80h], xmm13 ; Move Unaligned Double Quadword
sub_150260E60+48C  66 0F 73 D3 20                                                  psrlq   xmm3, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150260E60+491  66 0F EB C4                                                     por     xmm0, xmm4      ; Bitwise Logical Or
sub_150260E60+495  66 45 0F 6F EC                                                  movdqa  xmm13, xmm12    ; Move Aligned Double Quadword
sub_150260E60+49A  66 41 0F 6F E3                                                  movdqa  xmm4, xmm11     ; Move Aligned Double Quadword
sub_150260E60+49F  66 41 0F 73 F7 20                                               psllq   xmm15, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150260E60+4A5  66 44 0F F4 EA                                                  pmuludq xmm13, xmm2     ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+4AA  66 41 0F EB F7                                                  por     xmm6, xmm15     ; Bitwise Logical Or
sub_150260E60+4AF  66 0F F4 E3                                                     pmuludq xmm4, xmm3      ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+4B3  66 41 0F F4 D6                                                  pmuludq xmm2, xmm14     ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+4B8  66 41 0F F4 DA                                                  pmuludq xmm3, xmm10     ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+4BD  66 41 0F DB D0                                                  pand    xmm2, xmm8      ; Bitwise Logical And
sub_150260E60+4C2  66 0F 73 F3 20                                                  psllq   xmm3, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150260E60+4C7  66 45 0F DB E8                                                  pand    xmm13, xmm8     ; Bitwise Logical And
sub_150260E60+4CC  66 0F 73 F4 20                                                  psllq   xmm4, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150260E60+4D1  66 0F EB D3                                                     por     xmm2, xmm3      ; Bitwise Logical Or
sub_150260E60+4D5  66 44 0F 6F F9                                                  movdqa  xmm15, xmm1     ; Move Aligned Double Quadword
sub_150260E60+4DA  66 44 0F EB EC                                                  por     xmm13, xmm4     ; Bitwise Logical Or
sub_150260E60+4DF  66 0F 72 D2 10                                                  psrld   xmm2, 10h       ; Packed Shift Right Logical (Dword)
sub_150260E60+4E4  66 45 0F DB C8                                                  pand    xmm9, xmm8      ; Bitwise Logical And
sub_150260E60+4E9  66 0F 73 F5 20                                                  psllq   xmm5, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150260E60+4EE  66 44 0F DB FF                                                  pand    xmm15, xmm7     ; Bitwise Logical And
sub_150260E60+4F3  66 44 0F FE EA                                                  paddd   xmm13, xmm2     ; Packed Add Dword
sub_150260E60+4F8  66 0F 6F D6                                                     movdqa  xmm2, xmm6      ; Move Aligned Double Quadword
sub_150260E60+4FC  66 44 0F EB CD                                                  por     xmm9, xmm5      ; Bitwise Logical Or
sub_150260E60+501  66 0F 72 D1 10                                                  psrld   xmm1, 10h       ; Packed Shift Right Logical (Dword)
sub_150260E60+506  66 0F 72 D0 10                                                  psrld   xmm0, 10h       ; Packed Shift Right Logical (Dword)
sub_150260E60+50B  66 45 0F FE FD                                                  paddd   xmm15, xmm13    ; Packed Add Dword
sub_150260E60+510  66 0F DB D7                                                     pand    xmm2, xmm7      ; Bitwise Logical And
sub_150260E60+514  66 44 0F FE C9                                                  paddd   xmm9, xmm1      ; Packed Add Dword
sub_150260E60+519  66 41 0F FE C7                                                  paddd   xmm0, xmm15     ; Packed Add Dword
sub_150260E60+51E  F3 44 0F 6F 7C 24 70                                            movdqu  xmm15, xmmword ptr [rsp+70h] ; Move Unaligned Double Quadword
sub_150260E60+525  66 41 0F FE D1                                                  paddd   xmm2, xmm9      ; Packed Add Dword
sub_150260E60+52A  F3 44 0F 6F 8C 24 90 00 00 00                                   movdqu  xmm9, xmmword ptr [rsp+90h] ; Move Unaligned Double Quadword
sub_150260E60+534  66 0F 72 D6 10                                                  psrld   xmm6, 10h       ; Packed Shift Right Logical (Dword)
sub_150260E60+539  66 45 0F F4 FC                                                  pmuludq xmm15, xmm12    ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+53E  66 44 0F 6F E8                                                  movdqa  xmm13, xmm0     ; Move Aligned Double Quadword
sub_150260E60+543  66 45 0F F4 CB                                                  pmuludq xmm9, xmm11     ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+548  66 44 0F F4 64 24 60                                            pmuludq xmm12, xmmword ptr [rsp+60h] ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+54F  66 44 0F F4 9C 24 80 00 00 00                                   pmuludq xmm11, xmmword ptr [rsp+80h] ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+559  66 45 0F DB F8                                                  pand    xmm15, xmm8     ; Bitwise Logical And
sub_150260E60+55E  66 41 0F 73 F1 20                                               psllq   xmm9, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150260E60+564  66 45 0F EB F9                                                  por     xmm15, xmm9     ; Bitwise Logical Or
sub_150260E60+569  66 41 0F 72 D5 10                                               psrld   xmm13, 10h      ; Packed Shift Right Logical (Dword)
sub_150260E60+56F  66 44 0F FE FE                                                  paddd   xmm15, xmm6     ; Packed Add Dword
sub_150260E60+574  66 44 0F FE EA                                                  paddd   xmm13, xmm2     ; Packed Add Dword
sub_150260E60+579  F3 0F 6F 74 24 50                                               movdqu  xmm6, xmmword ptr [rsp+50h] ; Move Unaligned Double Quadword
sub_150260E60+57F  66 41 0F 6F CD                                                  movdqa  xmm1, xmm13     ; Move Aligned Double Quadword
sub_150260E60+584  66 44 0F F4 F6                                                  pmuludq xmm14, xmm6     ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+589  66 0F 73 D6 20                                                  psrlq   xmm6, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150260E60+58E  66 44 0F F4 D6                                                  pmuludq xmm10, xmm6     ; Multiply Packed Unsigned Doubleword Integers
sub_150260E60+593  F3 0F 6F AC 24 A0 00 00 00                                      movdqu  xmm5, xmmword ptr [rsp+0A0h] ; Move Unaligned Double Quadword
sub_150260E60+59C  66 0F 72 D1 10                                                  psrld   xmm1, 10h       ; Packed Shift Right Logical (Dword)
sub_150260E60+5A1  66 0F 6F D5                                                     movdqa  xmm2, xmm5      ; Move Aligned Double Quadword
sub_150260E60+5A5  66 45 0F DB F0                                                  pand    xmm14, xmm8     ; Bitwise Logical And
sub_150260E60+5AA  66 0F DB D7                                                     pand    xmm2, xmm7      ; Bitwise Logical And
sub_150260E60+5AE  66 41 0F 73 F2 20                                               psllq   xmm10, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150260E60+5B4  66 41 0F FE D7                                                  paddd   xmm2, xmm15     ; Packed Add Dword
sub_150260E60+5B9  66 45 0F DB E0                                                  pand    xmm12, xmm8     ; Bitwise Logical And
sub_150260E60+5BE  66 41 0F 73 F3 20                                               psllq   xmm11, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150260E60+5C4  66 0F FE CA                                                     paddd   xmm1, xmm2      ; Packed Add Dword
sub_150260E60+5C8  66 45 0F EB F2                                                  por     xmm14, xmm10    ; Bitwise Logical Or
sub_150260E60+5CD  66 45 0F EB E3                                                  por     xmm12, xmm11    ; Bitwise Logical Or
sub_150260E60+5D2  66 0F 72 D5 10                                                  psrld   xmm5, 10h       ; Packed Shift Right Logical (Dword)
sub_150260E60+5D7  66 0F 6F D9                                                     movdqa  xmm3, xmm1      ; Move Aligned Double Quadword
sub_150260E60+5DB  66 44 0F DB F7                                                  pand    xmm14, xmm7     ; Bitwise Logical And
sub_150260E60+5E0  66 44 0F FE E5                                                  paddd   xmm12, xmm5     ; Packed Add Dword
sub_150260E60+5E5  66 0F 72 D3 10                                                  psrld   xmm3, 10h       ; Packed Shift Right Logical (Dword)
sub_150260E60+5EA  66 45 0F FE F4                                                  paddd   xmm14, xmm12    ; Packed Add Dword
sub_150260E60+5EF  66 41 0F FE DE                                                  paddd   xmm3, xmm14     ; Packed Add Dword
sub_150260E60+5F4  66 0F DB CF                                                     pand    xmm1, xmm7      ; Bitwise Logical And
sub_150260E60+5F8  66 0F 72 F3 10                                                  pslld   xmm3, 10h       ; Packed Shift Left Logical (Dword)
sub_150260E60+5FD  66 41 0F 72 F5 10                                               pslld   xmm13, 10h      ; Packed Shift Left Logical (Dword)
sub_150260E60+603  66 0F DB C7                                                     pand    xmm0, xmm7      ; Bitwise Logical And
sub_150260E60+607  66 44 0F 6E C1                                                  movd    xmm8, ecx       ; Move 32 bits
sub_150260E60+60C  66 45 0F 70 C8 00                                               pshufd  xmm9, xmm8, 0   ; Shuffle Packed Doublewords
sub_150260E60+612  66 0F FE D9                                                     paddd   xmm3, xmm1      ; Packed Add Dword
sub_150260E60+616  66 44 0F FE E8                                                  paddd   xmm13, xmm0     ; Packed Add Dword
sub_150260E60+61B  66 45 0F 6E E0                                                  movd    xmm12, r8d      ; Move 32 bits
sub_150260E60+620  0F 10 44 24 20                                                  movups  xmm0, xmmword ptr [rsp+20h] ; Move Unaligned Four Packed Single-FP
sub_150260E60+625  66 0F 6F EB                                                     movdqa  xmm5, xmm3      ; Move Aligned Double Quadword
sub_150260E60+629  66 45 0F 70 DC 00                                               pshufd  xmm11, xmm12, 0 ; Shuffle Packed Doublewords
sub_150260E60+62F  66 44 0F DB C8                                                  pand    xmm9, xmm0      ; Bitwise Logical And
sub_150260E60+634  66 0F 72 D5 09                                                  psrld   xmm5, 9         ; Packed Shift Right Logical (Dword)
sub_150260E60+639  66 45 0F EF D9                                                  pxor    xmm11, xmm9     ; Bitwise Logical Exclusive Or
sub_150260E60+63E  66 41 0F EB EB                                                  por     xmm5, xmm11     ; Bitwise Logical Or
sub_150260E60+643  66 45 0F 6E D3                                                  movd    xmm10, r11d     ; Move 32 bits
sub_150260E60+648  66 41 0F 70 FA 00                                               pshufd  xmm7, xmm10, 0  ; Shuffle Packed Doublewords
sub_150260E60+64E  66 0F 6F D5                                                     movdqa  xmm2, xmm5      ; Move Aligned Double Quadword
sub_150260E60+652  41 B8 FF 01 00 00                                               mov     r8d, 1FFh
sub_150260E60+658  B9 00 00 00 34                                                  mov     ecx, 34000000h
sub_150260E60+65D  66 44 0F 6E C0                                                  movd    xmm8, eax       ; Move 32 bits
sub_150260E60+662  66 44 0F 6E FA                                                  movd    xmm15, edx      ; Move 32 bits
sub_150260E60+667  66 41 0F 70 F0 00                                               pshufd  xmm6, xmm8, 0   ; Shuffle Packed Doublewords
sub_150260E60+66D  41 BB DB 0F C9 40                                               mov     r11d, 40C90FDBh
sub_150260E60+673  66 41 0F 70 CF 00                                               pshufd  xmm1, xmm15, 0  ; Shuffle Packed Doublewords
sub_150260E60+679  66 41 0F DB F5                                                  pand    xmm6, xmm13     ; Bitwise Logical And
sub_150260E60+67E  66 45 0F 6E D8                                                  movd    xmm11, r8d      ; Move 32 bits
sub_150260E60+683  66 0F 6E E1                                                     movd    xmm4, ecx       ; Move 32 bits
sub_150260E60+687  66 45 0F 70 D3 00                                               pshufd  xmm10, xmm11, 0 ; Shuffle Packed Doublewords
sub_150260E60+68D  66 41 0F 72 D5 12                                               psrld   xmm13, 12h      ; Packed Shift Right Logical (Dword)
sub_150260E60+693  66 44 0F DB D3                                                  pand    xmm10, xmm3     ; Bitwise Logical And
sub_150260E60+698  66 41 0F EF C9                                                  pxor    xmm1, xmm9      ; Bitwise Logical Exclusive Or
sub_150260E60+69D  66 44 0F 70 E4 00                                               pshufd  xmm12, xmm4, 0  ; Shuffle Packed Doublewords
sub_150260E60+6A3  66 41 0F 72 F2 0E                                               pslld   xmm10, 0Eh      ; Packed Shift Left Logical (Dword)
sub_150260E60+6A9  66 45 0F EF CC                                                  pxor    xmm9, xmm12     ; Bitwise Logical Exclusive Or
sub_150260E60+6AE  66 45 0F EB D5                                                  por     xmm10, xmm13    ; Bitwise Logical Or
sub_150260E60+6B3  66 45 0F EB D1                                                  por     xmm10, xmm9     ; Bitwise Logical Or
sub_150260E60+6B8  66 0F 72 F6 05                                                  pslld   xmm6, 5         ; Packed Shift Left Logical (Dword)
sub_150260E60+6BD  66 0F EB F1                                                     por     xmm6, xmm1      ; Bitwise Logical Or
sub_150260E60+6C1  B9 00 F0 FF FF                                                  mov     ecx, 0FFFFF000h
sub_150260E60+6C6  66 45 0F 6E EB                                                  movd    xmm13, r11d     ; Move 32 bits
sub_150260E60+6CB  BA 00 10 C9 40                                                  mov     edx, 40C91000h
sub_150260E60+6D0  B8 7A 77 95 B7                                                  mov     eax, 0B795777Ah
sub_150260E60+6D5  41 B8 FF FF FF 7F                                               mov     r8d, 7FFFFFFFh
sub_150260E60+6DB  41 BB 00 00 80 35                                               mov     r11d, 35800000h
sub_150260E60+6E1  0F 58 D7                                                        addps   xmm2, xmm7      ; Packed Single-FP Add
sub_150260E60+6E4  45 0F 5C D1                                                     subps   xmm10, xmm9     ; Packed Single-FP Subtract
sub_150260E60+6E8  0F 5C F1                                                        subps   xmm6, xmm1      ; Packed Single-FP Subtract
sub_150260E60+6EB  44 0F 28 F2                                                     movaps  xmm14, xmm2     ; Move Aligned Four Packed Single-FP
sub_150260E60+6EF  66 44 0F 6E C9                                                  movd    xmm9, ecx       ; Move 32 bits
sub_150260E60+6F4  66 0F 6E D8                                                     movd    xmm3, eax       ; Move 32 bits
sub_150260E60+6F8  66 45 0F 6E FB                                                  movd    xmm15, r11d     ; Move 32 bits
sub_150260E60+6FD  66 44 0F 70 DB 00                                               pshufd  xmm11, xmm3, 0  ; Shuffle Packed Doublewords
sub_150260E60+703  44 0F 5C F7                                                     subps   xmm14, xmm7     ; Packed Single-FP Subtract
sub_150260E60+707  66 41 0F 70 CF 00                                               pshufd  xmm1, xmm15, 0  ; Shuffle Packed Doublewords
sub_150260E60+70D  41 0F 5C EE                                                     subps   xmm5, xmm14     ; Packed Single-FP Subtract
sub_150260E60+711  44 0F 28 E5                                                     movaps  xmm12, xmm5     ; Move Aligned Four Packed Single-FP
sub_150260E60+715  66 45 0F 6E F0                                                  movd    xmm14, r8d      ; Move 32 bits
sub_150260E60+71A  45 0F 58 E2                                                     addps   xmm12, xmm10    ; Packed Single-FP Add
sub_150260E60+71E  41 0F 5C EC                                                     subps   xmm5, xmm12     ; Packed Single-FP Subtract
sub_150260E60+722  44 0F 58 D5                                                     addps   xmm10, xmm5     ; Packed Single-FP Add
sub_150260E60+726  66 0F 6E EA                                                     movd    xmm5, edx       ; Move 32 bits
sub_150260E60+72A  66 44 0F 70 C5 00                                               pshufd  xmm8, xmm5, 0   ; Shuffle Packed Doublewords
sub_150260E60+730  BA FF 00 00 00                                                  mov     edx, 0FFh
sub_150260E60+735  66 41 0F 6F F8                                                  movdqa  xmm7, xmm8      ; Move Aligned Double Quadword
sub_150260E60+73A  41 0F 58 F2                                                     addps   xmm6, xmm10     ; Packed Single-FP Add
sub_150260E60+73E  66 45 0F 70 D5 00                                               pshufd  xmm10, xmm13, 0 ; Shuffle Packed Doublewords
sub_150260E60+744  66 45 0F 70 E9 00                                               pshufd  xmm13, xmm9, 0  ; Shuffle Packed Doublewords
sub_150260E60+74A  45 0F 54 EC                                                     andps   xmm13, xmm12    ; Bitwise Logical And for Single-FP
sub_150260E60+74E  41 0F 59 FD                                                     mulps   xmm7, xmm13     ; Packed Single-FP Multiply
sub_150260E60+752  45 0F 5C E5                                                     subps   xmm12, xmm13    ; Packed Single-FP Subtract
sub_150260E60+756  45 0F 59 EB                                                     mulps   xmm13, xmm11    ; Packed Single-FP Multiply
sub_150260E60+75A  44 0F 59 D6                                                     mulps   xmm10, xmm6     ; Packed Single-FP Multiply
sub_150260E60+75E  45 0F 59 C4                                                     mulps   xmm8, xmm12     ; Packed Single-FP Multiply
sub_150260E60+762  45 0F 59 DC                                                     mulps   xmm11, xmm12    ; Packed Single-FP Multiply
sub_150260E60+766  45 0F 58 C5                                                     addps   xmm8, xmm13     ; Packed Single-FP Add
sub_150260E60+76A  45 0F 58 D3                                                     addps   xmm10, xmm11    ; Packed Single-FP Add
sub_150260E60+76E  66 0F 6E F2                                                     movd    xmm6, edx       ; Move 32 bits
sub_150260E60+772  66 44 0F 6F D9                                                  movdqa  xmm11, xmm1     ; Move Aligned Double Quadword
sub_150260E60+777  66 44 0F 70 EE 00                                               pshufd  xmm13, xmm6, 0  ; Shuffle Packed Doublewords
sub_150260E60+77D  45 0F 58 C2                                                     addps   xmm8, xmm10     ; Packed Single-FP Add
sub_150260E60+781  41 0F 28 E0                                                     movaps  xmm4, xmm8      ; Move Aligned Four Packed Single-FP
sub_150260E60+785  66 41 0F DB D5                                                  pand    xmm2, xmm13     ; Bitwise Logical And
sub_150260E60+78A  66 45 0F 70 E6 00                                               pshufd  xmm12, xmm14, 0 ; Shuffle Packed Doublewords
sub_150260E60+790  66 0F 72 F2 04                                                  pslld   xmm2, 4         ; Packed Shift Left Logical (Dword)
sub_150260E60+795  44 0F 54 E0                                                     andps   xmm12, xmm0     ; Bitwise Logical And for Single-FP
sub_150260E60+799  0F 58 E7                                                        addps   xmm4, xmm7      ; Packed Single-FP Add
sub_150260E60+79C  45 0F C2 DC 01                                                  cmpltps xmm11, xmm12    ; Packed Single-FP Compare LT
sub_150260E60+7A1  44 0F C2 E1 02                                                  cmpleps xmm12, xmm1     ; Packed Single-FP Compare LE
sub_150260E60+7A6  0F 5C FC                                                        subps   xmm7, xmm4      ; Packed Single-FP Subtract
sub_150260E60+7A9  66 0F 7E D2                                                     movd    edx, xmm2       ; Move 32 bits
sub_150260E60+7AD  66 44 0F 70 F2 02                                               pshufd  xmm14, xmm2, 2  ; Shuffle Packed Doublewords
sub_150260E60+7B3  44 0F 54 E0                                                     andps   xmm12, xmm0     ; Bitwise Logical And for Single-FP
sub_150260E60+7B7  66 44 0F 7E F1                                                  movd    ecx, xmm14      ; Move 32 bits
sub_150260E60+7BC  41 0F 54 E3                                                     andps   xmm4, xmm11     ; Bitwise Logical And for Single-FP
sub_150260E60+7C0  44 0F 56 E4                                                     orps    xmm12, xmm4     ; Bitwise Logical OR for Single-FP Data
sub_150260E60+7C4  44 0F 58 C7                                                     addps   xmm8, xmm7      ; Packed Single-FP Add
sub_150260E60+7C8  66 0F 70 FA 01                                                  pshufd  xmm7, xmm2, 1   ; Shuffle Packed Doublewords
sub_150260E60+7CD  45 0F 54 D8                                                     andps   xmm11, xmm8     ; Bitwise Logical And for Single-FP
sub_150260E60+7D1  66 0F 70 D2 03                                                  pshufd  xmm2, xmm2, 3   ; Shuffle Packed Doublewords
sub_150260E60+7D6  45 0F 28 D4                                                     movaps  xmm10, xmm12    ; Move Aligned Four Packed Single-FP
sub_150260E60+7DA  66 41 0F 7E D0                                                  movd    r8d, xmm2       ; Move 32 bits
sub_150260E60+7DF  66 0F 7E F8                                                     movd    eax, xmm7       ; Move 32 bits
sub_150260E60+7E3  66 45 0F 6E 3C 09                                               movd    xmm15, dword ptr [r9+rcx] ; Move 32 bits
sub_150260E60+7E9  66 47 0F 6E 34 01                                               movd    xmm14, dword ptr [r9+r8] ; Move 32 bits
sub_150260E60+7EF  66 45 0F 62 FE                                                  punpckldq xmm15, xmm14  ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+7F4  66 45 0F 6E 74 11 04                                            movd    xmm14, dword ptr [r9+rdx+4] ; Move 32 bits
sub_150260E60+7FB  66 41 0F 6E 4C 01 04                                            movd    xmm1, dword ptr [r9+rax+4] ; Move 32 bits
sub_150260E60+802  66 45 0F 6E 2C 01                                               movd    xmm13, dword ptr [r9+rax] ; Move 32 bits
sub_150260E60+808  66 41 0F 6E 64 01 0C                                            movd    xmm4, dword ptr [r9+rax+0Ch] ; Move 32 bits
sub_150260E60+80F  66 41 0F 6E 3C 11                                               movd    xmm7, dword ptr [r9+rdx] ; Move 32 bits
sub_150260E60+815  66 44 0F 62 F1                                                  punpckldq xmm14, xmm1   ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+81A  66 41 0F 6E 4C 11 0C                                            movd    xmm1, dword ptr [r9+rdx+0Ch] ; Move 32 bits
sub_150260E60+821  66 41 0F 6E 74 09 0C                                            movd    xmm6, dword ptr [r9+rcx+0Ch] ; Move 32 bits
sub_150260E60+828  66 43 0F 6E 6C 01 0C                                            movd    xmm5, dword ptr [r9+r8+0Ch] ; Move 32 bits
sub_150260E60+82F  66 41 0F 62 FD                                                  punpckldq xmm7, xmm13   ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+834  66 0F 62 CC                                                     punpckldq xmm1, xmm4    ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+838  41 0F 28 E4                                                     movaps  xmm4, xmm12     ; Move Aligned Four Packed Single-FP
sub_150260E60+83C  66 0F 62 F5                                                     punpckldq xmm6, xmm5    ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+840  66 41 0F 6C FF                                                  punpcklqdq xmm7, xmm15  ; Unpack Low Data
sub_150260E60+845  45 0F 28 FC                                                     movaps  xmm15, xmm12    ; Move Aligned Four Packed Single-FP
sub_150260E60+849  66 0F 6C CE                                                     punpcklqdq xmm1, xmm6   ; Unpack Low Data
sub_150260E60+84D  44 0F 59 F9                                                     mulps   xmm15, xmm1     ; Packed Single-FP Multiply
sub_150260E60+851  45 0F 59 D4                                                     mulps   xmm10, xmm12    ; Packed Single-FP Multiply
sub_150260E60+855  0F 59 E7                                                        mulps   xmm4, xmm7      ; Packed Single-FP Multiply
sub_150260E60+858  0F 58 F9                                                        addps   xmm7, xmm1      ; Packed Single-FP Add
sub_150260E60+85B  66 43 0F 6E 54 01 04                                            movd    xmm2, dword ptr [r9+r8+4] ; Move 32 bits
sub_150260E60+862  66 41 0F 6E 5C 09 04                                            movd    xmm3, dword ptr [r9+rcx+4] ; Move 32 bits
sub_150260E60+869  66 0F 62 DA                                                     punpckldq xmm3, xmm2    ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+86D  66 44 0F 14 F3                                                  unpcklpd xmm14, xmm3    ; Unpack and Interleave Low Packed Double-Precision Floating-Point Values
sub_150260E60+872  45 0F 28 CE                                                     movaps  xmm9, xmm14     ; Move Aligned Four Packed Single-FP
sub_150260E60+876  45 0F 28 C6                                                     movaps  xmm8, xmm14     ; Move Aligned Four Packed Single-FP
sub_150260E60+87A  0F 10 15 9F E3 EB 07                                            movups  xmm2, cs:xmmword_15811FA80 ; Move Unaligned Four Packed Single-FP
sub_150260E60+881  45 0F 58 CF                                                     addps   xmm9, xmm15     ; Packed Single-FP Add
sub_150260E60+885  41 0F 59 D2                                                     mulps   xmm2, xmm10     ; Packed Single-FP Multiply
sub_150260E60+889  45 0F 5C C1                                                     subps   xmm8, xmm9      ; Packed Single-FP Subtract
sub_150260E60+88D  0F 58 15 4C E3 EB 07                                            addps   xmm2, cs:xmmword_15811FA40 ; Packed Single-FP Add
sub_150260E60+894  45 0F 58 F8                                                     addps   xmm15, xmm8     ; Packed Single-FP Add
sub_150260E60+898  44 0F 10 05 00 E3 EB 07                                         movups  xmm8, cs:xmmword_15811FA00 ; Move Unaligned Four Packed Single-FP
sub_150260E60+8A0  45 0F 28 E9                                                     movaps  xmm13, xmm9     ; Move Aligned Four Packed Single-FP
sub_150260E60+8A4  45 0F 59 C2                                                     mulps   xmm8, xmm10     ; Packed Single-FP Multiply
sub_150260E60+8A8  44 0F 58 EC                                                     addps   xmm13, xmm4     ; Packed Single-FP Add
sub_150260E60+8AC  66 41 0F 6E 4C 11 08                                            movd    xmm1, dword ptr [r9+rdx+8] ; Move 32 bits
sub_150260E60+8B3  45 0F 5C CD                                                     subps   xmm9, xmm13     ; Packed Single-FP Subtract
sub_150260E60+8B7  44 0F 58 05 A1 E2 EB 07                                         addps   xmm8, cs:xmmword_15811F9C0 ; Packed Single-FP Add
sub_150260E60+8BF  41 0F 58 E1                                                     addps   xmm4, xmm9      ; Packed Single-FP Add
sub_150260E60+8C3  45 0F 59 C2                                                     mulps   xmm8, xmm10     ; Packed Single-FP Multiply
sub_150260E60+8C7  44 0F 59 D2                                                     mulps   xmm10, xmm2     ; Packed Single-FP Multiply
sub_150260E60+8CB  44 0F 58 FC                                                     addps   xmm15, xmm4     ; Packed Single-FP Add
sub_150260E60+8CF  45 0F 59 C4                                                     mulps   xmm8, xmm12     ; Packed Single-FP Multiply
sub_150260E60+8D3  45 0F 59 E6                                                     mulps   xmm12, xmm14    ; Packed Single-FP Multiply
sub_150260E60+8D7  45 0F 59 F2                                                     mulps   xmm14, xmm10    ; Packed Single-FP Multiply
sub_150260E60+8DB  41 0F 5C FC                                                     subps   xmm7, xmm12     ; Packed Single-FP Subtract
sub_150260E60+8DF  44 0F 59 DF                                                     mulps   xmm11, xmm7     ; Packed Single-FP Multiply
sub_150260E60+8E3  44 0F 59 C7                                                     mulps   xmm8, xmm7      ; Packed Single-FP Multiply
sub_150260E60+8E7  66 41 0F 6E 5C 01 08                                            movd    xmm3, dword ptr [r9+rax+8] ; Move 32 bits
sub_150260E60+8EE  45 0F 58 F8                                                     addps   xmm15, xmm8     ; Packed Single-FP Add
sub_150260E60+8F2  66 41 0F 6E 74 09 08                                            movd    xmm6, dword ptr [r9+rcx+8] ; Move 32 bits
sub_150260E60+8F9  66 43 0F 6E 6C 01 08                                            movd    xmm5, dword ptr [r9+r8+8] ; Move 32 bits
sub_150260E60+900  66 0F 62 CB                                                     punpckldq xmm1, xmm3    ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+904  66 0F 62 F5                                                     punpckldq xmm6, xmm5    ; Unpack Low Packed Data (Dword->Qword)
sub_150260E60+908  66 0F 6C CE                                                     punpcklqdq xmm1, xmm6   ; Unpack Low Data
sub_150260E60+90C  0F 10 7C 24 30                                                  movups  xmm7, xmmword ptr [rsp+30h] ; Move Unaligned Four Packed Single-FP
sub_150260E60+911  41 0F 58 CB                                                     addps   xmm1, xmm11     ; Packed Single-FP Add
sub_150260E60+915  44 0F 28 D7                                                     movaps  xmm10, xmm7     ; Move Aligned Four Packed Single-FP
sub_150260E60+919  41 0F 58 CE                                                     addps   xmm1, xmm14     ; Packed Single-FP Add
sub_150260E60+91D  44 0F 55 54 24 40                                               andnps  xmm10, xmmword ptr [rsp+40h] ; Bitwise Logical And Not for Single-FP
sub_150260E60+923  41 0F 58 CF                                                     addps   xmm1, xmm15     ; Packed Single-FP Add
sub_150260E60+927  44 0F 58 E9                                                     addps   xmm13, xmm1     ; Packed Single-FP Add
sub_150260E60+92B  44 0F 54 EF                                                     andps   xmm13, xmm7     ; Bitwise Logical And for Single-FP
sub_150260E60+92F  45 0F 56 D5                                                     orps    xmm10, xmm13    ; Bitwise Logical OR for Single-FP Data
sub_150260E60+933  E9 14 F8 FF FF                                                  jmp     loc_150260FAC   ; Jump
sub_150260E60+933                                                  sub_150260E60   endp
sub_150260E60+933
sub_150260E60+933                                                  ; ---------------------------------------------------------------------------
.text:0000000150261798 CC CC CC CC CC CC CC CC                                         align 20h
sub_1502617A0
sub_1502617A0                                                      ; =============== S U B R O U T I N E =======================================
sub_1502617A0
sub_1502617A0
sub_1502617A0                                                      sub_1502617A0   proc near               ; CODE XREF: sub_15025FE80+7↑j
sub_1502617A0
sub_1502617A0                                                      var_158         = xmmword ptr -158h
sub_1502617A0                                                      var_109         = byte ptr -109h
sub_1502617A0                                                      var_B8          = xmmword ptr -0B8h
sub_1502617A0                                                      var_A8          = xmmword ptr -0A8h
sub_1502617A0                                                      var_98          = xmmword ptr -98h
sub_1502617A0                                                      var_88          = xmmword ptr -88h
sub_1502617A0                                                      var_78          = xmmword ptr -78h
sub_1502617A0                                                      var_68          = xmmword ptr -68h
sub_1502617A0                                                      var_58          = xmmword ptr -58h
sub_1502617A0                                                      var_48          = xmmword ptr -48h
sub_1502617A0                                                      var_38          = xmmword ptr -38h
sub_1502617A0                                                      var_28          = xmmword ptr -28h
sub_1502617A0                                                      var_18          = qword ptr -18h
sub_1502617A0                                                      var_10          = qword ptr -10h
sub_1502617A0
sub_1502617A0      48 81 EC 78 01 00 00                                            sub     rsp, 178h       ; Integer Subtraction
sub_1502617A0+7    0F 28 D0                                                        movaps  xmm2, xmm0      ; Move Aligned Four Packed Single-FP
sub_1502617A0+A    44 0F 29 BC 24 50 01 00 00                                      movaps  xmmword ptr [rsp+150h], xmm15 ; Move Aligned Four Packed Single-FP
sub_1502617A0+13   4C 8D 0D 46 C5 EB 07                                            lea     r9, unk_15811DD00 ; Load Effective Address
sub_1502617A0+1A   44 0F 29 B4 24 10 01 00 00                                      movaps  xmmword ptr [rsp+110h], xmm14 ; Move Aligned Four Packed Single-FP
sub_1502617A0+23   45 33 D2                                                        xor     r10d, r10d      ; Logical Exclusive OR
sub_1502617A0+26   44 0F 29 AC 24 C0 00 00 00                                      movaps  xmmword ptr [rsp+0C0h], xmm13 ; Move Aligned Four Packed Single-FP
sub_1502617A0+2F   44 0F 29 A4 24 20 01 00 00                                      movaps  xmmword ptr [rsp+120h], xmm12 ; Move Aligned Four Packed Single-FP
sub_1502617A0+38   44 0F 29 9C 24 30 01 00 00                                      movaps  xmmword ptr [rsp+130h], xmm11 ; Move Aligned Four Packed Single-FP
sub_1502617A0+41   44 0F 29 94 24 D0 00 00 00                                      movaps  xmmword ptr [rsp+0D0h], xmm10 ; Move Aligned Four Packed Single-FP
sub_1502617A0+4A   44 0F 29 8C 24 00 01 00 00                                      movaps  xmmword ptr [rsp+100h], xmm9 ; Move Aligned Four Packed Single-FP
sub_1502617A0+53   44 0F 28 CA                                                     movaps  xmm9, xmm2      ; Move Aligned Four Packed Single-FP
sub_1502617A0+57   44 0F 29 84 24 E0 00 00 00                                      movaps  xmmword ptr [rsp+0E0h], xmm8 ; Move Aligned Four Packed Single-FP
sub_1502617A0+60   0F 29 BC 24 40 01 00 00                                         movaps  xmmword ptr [rsp+140h], xmm7 ; Move Aligned Four Packed Single-FP
sub_1502617A0+68   0F 29 B4 24 F0 00 00 00                                         movaps  xmmword ptr [rsp+0F0h], xmm6 ; Move Aligned Four Packed Single-FP
sub_1502617A0+70   4C 89 AC 24 60 01 00 00                                         mov     [rsp+160h], r13
sub_1502617A0+78   4C 8D 6C 24 6F                                                  lea     r13, [rsp+6Fh]  ; Load Effective Address
sub_1502617A0+7D   44 0F 28 05 DB E0 EB 07                                         movaps  xmm8, cs:xmmword_15811F900 ; Move Aligned Four Packed Single-FP
sub_1502617A0+85   49 83 E5 C0                                                     and     r13, 0FFFFFFFFFFFFFFC0h ; Logical AND
sub_1502617A0+89   0F 28 35 50 E5 EB 07                                            movaps  xmm6, cs:xmmword_15811FD80 ; Move Aligned Four Packed Single-FP
sub_1502617A0+90   45 0F 54 C8                                                     andps   xmm9, xmm8      ; Bitwise Logical And for Single-FP
sub_1502617A0+94   41 0F 59 F1                                                     mulps   xmm6, xmm9      ; Packed Single-FP Multiply
sub_1502617A0+98   45 0F 28 D1                                                     movaps  xmm10, xmm9     ; Move Aligned Four Packed Single-FP
sub_1502617A0+9C   0F 28 0D 7D E5 EB 07                                            movaps  xmm1, cs:xmmword_15811FDC0 ; Move Aligned Four Packed Single-FP
sub_1502617A0+A3   41 0F 28 C1                                                     movaps  xmm0, xmm9      ; Move Aligned Four Packed Single-FP
sub_1502617A0+A7   0F 28 1D 72 E2 EB 07                                            movaps  xmm3, cs:xmmword_15811FAC0 ; Move Aligned Four Packed Single-FP
sub_1502617A0+AE   44 0F 55 C2                                                     andnps  xmm8, xmm2      ; Bitwise Logical And Not for Single-FP
sub_1502617A0+B2   0F 28 25 A7 E2 EB 07                                            movaps  xmm4, cs:xmmword_15811FB00 ; Move Aligned Four Packed Single-FP
sub_1502617A0+B9   0F 58 F1                                                        addps   xmm6, xmm1      ; Packed Single-FP Add
sub_1502617A0+BC   0F C2 05 DC E0 EB 07 06                                         cmpnleps xmm0, cs:xmmword_15811F940 ; Packed Single-FP Compare NOT LE
sub_1502617A0+C4   0F 28 FE                                                        movaps  xmm7, xmm6      ; Move Aligned Four Packed Single-FP
sub_1502617A0+C7   0F 5C F1                                                        subps   xmm6, xmm1      ; Packed Single-FP Subtract
sub_1502617A0+CA   0F 50 C0                                                        movmskps eax, xmm0      ; Move Mask to Register
sub_1502617A0+CD   0F 28 2D CC E2 EB 07                                            movaps  xmm5, cs:xmmword_15811FB40 ; Move Aligned Four Packed Single-FP
sub_1502617A0+D4   66 0F 72 F7 1F                                                  pslld   xmm7, 1Fh       ; Packed Shift Left Logical (Dword)
sub_1502617A0+D9   0F 59 DE                                                        mulps   xmm3, xmm6      ; Packed Single-FP Multiply
sub_1502617A0+DC   85 C0                                                           test    eax, eax        ; Logical Compare
sub_1502617A0+DE   0F 59 E6                                                        mulps   xmm4, xmm6      ; Packed Single-FP Multiply
sub_1502617A0+E1   0F 59 EE                                                        mulps   xmm5, xmm6      ; Packed Single-FP Multiply
sub_1502617A0+E4   44 0F 5C D3                                                     subps   xmm10, xmm3     ; Packed Single-FP Subtract
sub_1502617A0+E8   0F 28 0D F1 E2 EB 07                                            movaps  xmm1, cs:xmmword_15811FB80 ; Move Aligned Four Packed Single-FP
sub_1502617A0+EF   44 0F 5C D4                                                     subps   xmm10, xmm4     ; Packed Single-FP Subtract
sub_1502617A0+F3   0F 59 CE                                                        mulps   xmm1, xmm6      ; Packed Single-FP Multiply
sub_1502617A0+F6   44 0F 5C D5                                                     subps   xmm10, xmm5     ; Packed Single-FP Subtract
sub_1502617A0+FA   0F 28 1D 9F E4 EB 07                                            movaps  xmm3, cs:xmmword_15811FD40 ; Move Aligned Four Packed Single-FP
sub_1502617A0+101  44 0F 5C D1                                                     subps   xmm10, xmm1     ; Packed Single-FP Subtract
sub_1502617A0+105  41 0F 28 E2                                                     movaps  xmm4, xmm10     ; Move Aligned Four Packed Single-FP
sub_1502617A0+109  41 0F 59 E2                                                     mulps   xmm4, xmm10     ; Packed Single-FP Multiply
sub_1502617A0+10D  44 0F 57 D7                                                     xorps   xmm10, xmm7     ; Bitwise Logical XOR for Single-FP Data
sub_1502617A0+111  0F 59 DC                                                        mulps   xmm3, xmm4      ; Packed Single-FP Multiply
sub_1502617A0+114  4C 89 AC 24 68 01 00 00                                         mov     [rsp+168h], r13
sub_1502617A0+11C  0F 58 1D 3D E4 EB 07                                            addps   xmm3, cs:xmmword_15811FD00 ; Packed Single-FP Add
sub_1502617A0+123  0F 59 DC                                                        mulps   xmm3, xmm4      ; Packed Single-FP Multiply
sub_1502617A0+126  0F 58 1D F3 E3 EB 07                                            addps   xmm3, cs:xmmword_15811FCC0 ; Packed Single-FP Add
sub_1502617A0+12D  0F 59 DC                                                        mulps   xmm3, xmm4      ; Packed Single-FP Multiply
sub_1502617A0+130  0F 58 1D A9 E3 EB 07                                            addps   xmm3, cs:xmmword_15811FC80 ; Packed Single-FP Add
sub_1502617A0+137  0F 59 E3                                                        mulps   xmm4, xmm3      ; Packed Single-FP Multiply
sub_1502617A0+13A  41 0F 59 E2                                                     mulps   xmm4, xmm10     ; Packed Single-FP Multiply
sub_1502617A0+13E  44 0F 58 D4                                                     addps   xmm10, xmm4     ; Packed Single-FP Add
sub_1502617A0+142  45 0F 57 D0                                                     xorps   xmm10, xmm8     ; Bitwise Logical XOR for Single-FP Data
sub_1502617A0+146  0F 85 BF 00 00 00                                               jnz     loc_1502619AB   ; Jump if Not Zero (ZF=0)
sub_1502617A0+14C
sub_1502617A0+14C                                                  loc_1502618EC:                          ; CODE XREF: sub_1502617A0+76C↓j
sub_1502617A0+14C  45 85 D2                                                        test    r10d, r10d      ; Logical Compare
sub_1502617A0+14F  75 6C                                                           jnz     short loc_15026195D ; Jump if Not Zero (ZF=0)
sub_1502617A0+151
sub_1502617A0+151                                                  loc_1502618F1:                          ; CODE XREF: sub_1502617A0+1C7↓j
sub_1502617A0+151                                                                                          ; sub_1502617A0+1F5↓j
sub_1502617A0+151  0F 28 B4 24 F0 00 00 00                                         movaps  xmm6, xmmword ptr [rsp+0F0h] ; Move Aligned Four Packed Single-FP
sub_1502617A0+159  41 0F 28 C2                                                     movaps  xmm0, xmm10     ; Move Aligned Four Packed Single-FP
sub_1502617A0+15D  0F 28 BC 24 40 01 00 00                                         movaps  xmm7, xmmword ptr [rsp+140h] ; Move Aligned Four Packed Single-FP
sub_1502617A0+165  44 0F 28 84 24 E0 00 00 00                                      movaps  xmm8, xmmword ptr [rsp+0E0h] ; Move Aligned Four Packed Single-FP
sub_1502617A0+16E  44 0F 28 8C 24 00 01 00 00                                      movaps  xmm9, xmmword ptr [rsp+100h] ; Move Aligned Four Packed Single-FP
sub_1502617A0+177  44 0F 28 94 24 D0 00 00 00                                      movaps  xmm10, xmmword ptr [rsp+0D0h] ; Move Aligned Four Packed Single-FP
sub_1502617A0+180  44 0F 28 9C 24 30 01 00 00                                      movaps  xmm11, xmmword ptr [rsp+130h] ; Move Aligned Four Packed Single-FP
sub_1502617A0+189  44 0F 28 A4 24 20 01 00 00                                      movaps  xmm12, xmmword ptr [rsp+120h] ; Move Aligned Four Packed Single-FP
sub_1502617A0+192  44 0F 28 AC 24 C0 00 00 00                                      movaps  xmm13, xmmword ptr [rsp+0C0h] ; Move Aligned Four Packed Single-FP
sub_1502617A0+19B  44 0F 28 B4 24 10 01 00 00                                      movaps  xmm14, xmmword ptr [rsp+110h] ; Move Aligned Four Packed Single-FP
sub_1502617A0+1A4  44 0F 28 BC 24 50 01 00 00                                      movaps  xmm15, xmmword ptr [rsp+150h] ; Move Aligned Four Packed Single-FP
sub_1502617A0+1AD  4C 8B AC 24 60 01 00 00                                         mov     r13, [rsp+160h]
sub_1502617A0+1B5  48 81 C4 78 01 00 00                                            add     rsp, 178h       ; Add
sub_1502617A0+1BC  C3                                                              retn                    ; Return Near from Procedure
sub_1502617A0+1BD                                                  ; ---------------------------------------------------------------------------
sub_1502617A0+1BD
sub_1502617A0+1BD                                                  loc_15026195D:                          ; CODE XREF: sub_1502617A0+14F↑j
sub_1502617A0+1BD  41 0F 29 55 00                                                  movaps  xmmword ptr [r13+0], xmm2 ; Move Aligned Four Packed Single-FP
sub_1502617A0+1C2  45 0F 29 55 40                                                  movaps  xmmword ptr [r13+40h], xmm10 ; Move Aligned Four Packed Single-FP
sub_1502617A0+1C7  74 88                                                           jz      short loc_1502618F1 ; Jump if Zero (ZF=1)
sub_1502617A0+1C9  33 C0                                                           xor     eax, eax        ; Logical Exclusive OR
sub_1502617A0+1CB  48 89 5C 24 28                                                  mov     [rsp+28h], rbx
sub_1502617A0+1D0  8B D8                                                           mov     ebx, eax
sub_1502617A0+1D2  48 89 74 24 20                                                  mov     [rsp+20h], rsi
sub_1502617A0+1D7  41 8B F2                                                        mov     esi, r10d
sub_1502617A0+1DA
sub_1502617A0+1DA                                                  loc_15026197A:                          ; CODE XREF: sub_1502617A0+1E4↓j
sub_1502617A0+1DA  0F A3 DE                                                        bt      esi, ebx        ; Bit Test
sub_1502617A0+1DD  72 1B                                                           jb      short loc_15026199A ; Jump if Below (CF=1)
sub_1502617A0+1DF
sub_1502617A0+1DF                                                  loc_15026197F:                          ; CODE XREF: sub_1502617A0+209↓j
sub_1502617A0+1DF  FF C3                                                           inc     ebx             ; Increment by 1
sub_1502617A0+1E1  83 FB 04                                                        cmp     ebx, 4          ; Compare Two Operands
sub_1502617A0+1E4  7C F4                                                           jl      short loc_15026197A ; Jump if Less (SF!=OF)
sub_1502617A0+1E6  48 8B 5C 24 28                                                  mov     rbx, [rsp+28h]
sub_1502617A0+1EB  48 8B 74 24 20                                                  mov     rsi, [rsp+20h]
sub_1502617A0+1F0  45 0F 28 55 40                                                  movaps  xmm10, xmmword ptr [r13+40h] ; Move Aligned Four Packed Single-FP
sub_1502617A0+1F5  E9 57 FF FF FF                                                  jmp     loc_1502618F1   ; Jump
sub_1502617A0+1FA                                                  ; ---------------------------------------------------------------------------
sub_1502617A0+1FA
sub_1502617A0+1FA                                                  loc_15026199A:                          ; CODE XREF: sub_1502617A0+1DD↑j
sub_1502617A0+1FA  49 8D 4C 9D 00                                                  lea     rcx, [r13+rbx*4+0] ; Load Effective Address
sub_1502617A0+1FF  49 8D 54 9D 40                                                  lea     rdx, [r13+rbx*4+40h] ; Load Effective Address
sub_1502617A0+204  E8 87 3E 00 00                                                  call    sub_150265830   ; Call Procedure
sub_1502617A0+209  EB D4                                                           jmp     short loc_15026197F ; Jump
sub_1502617A0+20B                                                  ; ---------------------------------------------------------------------------
sub_1502617A0+20B
sub_1502617A0+20B                                                  loc_1502619AB:                          ; CODE XREF: sub_1502617A0+146↑j
sub_1502617A0+20B  41 BB 00 00 80 7F                                               mov     r11d, 7F800000h
sub_1502617A0+211  0F 28 0D C8 DF EB 07                                            movaps  xmm1, cs:xmmword_15811F980 ; Move Aligned Four Packed Single-FP
sub_1502617A0+218  44 0F 54 C9                                                     andps   xmm9, xmm1      ; Bitwise Logical And for Single-FP
sub_1502617A0+21C  44 0F C2 C9 00                                                  cmpeqps xmm9, xmm1      ; Packed Single-FP Compare EQ
sub_1502617A0+221  66 45 0F 6E FB                                                  movd    xmm15, r11d     ; Move 32 bits
sub_1502617A0+226  41 BB FF FF 7F 00                                               mov     r11d, 7FFFFFh
sub_1502617A0+22C  66 45 0F 70 E7 00                                               pshufd  xmm12, xmm15, 0 ; Shuffle Packed Doublewords
sub_1502617A0+232  66 44 0F DB E2                                                  pand    xmm12, xmm2     ; Bitwise Logical And
sub_1502617A0+237  66 41 0F 72 D4 17                                               psrld   xmm12, 17h      ; Packed Shift Right Logical (Dword)
sub_1502617A0+23D  45 0F 50 D1                                                     movmskps r10d, xmm9     ; Move Mask to Register
sub_1502617A0+241  66 45 0F 6F CC                                                  movdqa  xmm9, xmm12     ; Move Aligned Double Quadword
sub_1502617A0+246  66 41 0F 72 F1 01                                               pslld   xmm9, 1         ; Packed Shift Left Logical (Dword)
sub_1502617A0+24C  66 41 0F 6E EB                                                  movd    xmm5, r11d      ; Move 32 bits
sub_1502617A0+251  66 45 0F FE CC                                                  paddd   xmm9, xmm12     ; Packed Add Dword
sub_1502617A0+256  66 41 0F 72 F1 02                                               pslld   xmm9, 2         ; Packed Shift Left Logical (Dword)
sub_1502617A0+25C  41 BB 00 00 40 47                                               mov     r11d, 47400000h
sub_1502617A0+262  66 45 0F 7E C8                                                  movd    r8d, xmm9       ; Move 32 bits
sub_1502617A0+267  44 0F 29 54 24 20                                               movaps  xmmword ptr [rsp+20h], xmm10 ; Move Aligned Four Packed Single-FP
sub_1502617A0+26D  66 44 0F 70 F5 00                                               pshufd  xmm14, xmm5, 0  ; Shuffle Packed Doublewords
sub_1502617A0+273  66 44 0F 3A 16 CA 02                                            pextrd  edx, xmm9, 2    ; Extract Dword
sub_1502617A0+27A  66 44 0F DB F2                                                  pand    xmm14, xmm2     ; Bitwise Logical And
sub_1502617A0+27F  66 44 0F 3A 16 C9 01                                            pextrd  ecx, xmm9, 1    ; Extract Dword
sub_1502617A0+286  66 44 0F 3A 16 C8 03                                            pextrd  eax, xmm9, 3    ; Extract Dword
sub_1502617A0+28D  66 47 0F 6E 54 01 08                                            movd    xmm10, dword ptr [r9+r8+8] ; Move 32 bits
sub_1502617A0+294  66 41 0F 6E 74 11 08                                            movd    xmm6, dword ptr [r9+rdx+8] ; Move 32 bits
sub_1502617A0+29B  66 41 0F 6E 7C 11 04                                            movd    xmm7, dword ptr [r9+rdx+4] ; Move 32 bits
sub_1502617A0+2A2  66 47 0F 6E 5C 01 04                                            movd    xmm11, dword ptr [r9+r8+4] ; Move 32 bits
sub_1502617A0+2A9  66 45 0F 3A 22 54 09 08 01                                      pinsrd  xmm10, dword ptr [r9+rcx+8], 1 ; Insert Dword
sub_1502617A0+2B2  66 41 0F 3A 22 74 01 08 01                                      pinsrd  xmm6, dword ptr [r9+rax+8], 1 ; Insert Dword
sub_1502617A0+2BB  66 41 0F 3A 22 7C 01 04 01                                      pinsrd  xmm7, dword ptr [r9+rax+4], 1 ; Insert Dword
sub_1502617A0+2C4  66 45 0F 3A 22 5C 09 04 01                                      pinsrd  xmm11, dword ptr [r9+rcx+4], 1 ; Insert Dword
sub_1502617A0+2CD  66 45 0F 6E 04 11                                               movd    xmm8, dword ptr [r9+rdx] ; Move 32 bits
sub_1502617A0+2D3  66 47 0F 6E 2C 01                                               movd    xmm13, dword ptr [r9+r8] ; Move 32 bits
sub_1502617A0+2D9  66 45 0F 3A 22 2C 09 01                                         pinsrd  xmm13, dword ptr [r9+rcx], 1 ; Insert Dword
sub_1502617A0+2E1  66 45 0F 3A 22 04 01 01                                         pinsrd  xmm8, dword ptr [r9+rax], 1 ; Insert Dword
sub_1502617A0+2E9  4C 8D 0D 70 CE EB 07                                            lea     r9, unk_15811E900 ; Load Effective Address
sub_1502617A0+2F0  66 44 0F 6C D6                                                  punpcklqdq xmm10, xmm6  ; Unpack Low Data
sub_1502617A0+2F5  66 45 0F 6F FA                                                  movdqa  xmm15, xmm10    ; Move Aligned Double Quadword
sub_1502617A0+2FA  66 44 0F 6C DF                                                  punpcklqdq xmm11, xmm7  ; Unpack Low Data
sub_1502617A0+2FF  66 41 0F 72 D7 10                                               psrld   xmm15, 10h      ; Packed Shift Right Logical (Dword)
sub_1502617A0+305  66 41 0F 6F FB                                                  movdqa  xmm7, xmm11     ; Move Aligned Double Quadword
sub_1502617A0+30A  66 0F 72 D7 10                                                  psrld   xmm7, 10h       ; Packed Shift Right Logical (Dword)
sub_1502617A0+30F  BA 00 00 80 00                                                  mov     edx, 800000h
sub_1502617A0+314  B8 FF FF 00 00                                                  mov     eax, 0FFFFh
sub_1502617A0+319  66 45 0F 6C E8                                                  punpcklqdq xmm13, xmm8  ; Unpack Low Data
sub_1502617A0+31E  B9 00 00 00 80                                                  mov     ecx, 80000000h
sub_1502617A0+323  66 41 0F 6F ED                                                  movdqa  xmm5, xmm13     ; Move Aligned Double Quadword
sub_1502617A0+328  66 41 0F 72 D5 10                                               psrld   xmm13, 10h      ; Packed Shift Right Logical (Dword)
sub_1502617A0+32E  41 B8 00 00 80 3F                                               mov     r8d, 3F800000h
sub_1502617A0+334  66 0F 6E DA                                                     movd    xmm3, edx       ; Move 32 bits
sub_1502617A0+338  66 0F 6E C8                                                     movd    xmm1, eax       ; Move 32 bits
sub_1502617A0+33C  66 0F 70 E3 00                                                  pshufd  xmm4, xmm3, 0   ; Shuffle Packed Doublewords
sub_1502617A0+341  B8 FF FF 03 00                                                  mov     eax, 3FFFFh
sub_1502617A0+346  66 44 0F FE F4                                                  paddd   xmm14, xmm4     ; Packed Add Dword
sub_1502617A0+34B  BA 00 00 80 28                                                  mov     edx, 28800000h
sub_1502617A0+350  66 0F 70 E1 00                                                  pshufd  xmm4, xmm1, 0   ; Shuffle Packed Doublewords
sub_1502617A0+355  66 41 0F 6F DE                                                  movdqa  xmm3, xmm14     ; Move Aligned Double Quadword
sub_1502617A0+35A  66 0F 72 D3 10                                                  psrld   xmm3, 10h       ; Packed Shift Right Logical (Dword)
sub_1502617A0+35F  66 44 0F DB F4                                                  pand    xmm14, xmm4     ; Bitwise Logical And
sub_1502617A0+364  66 44 0F DB DC                                                  pand    xmm11, xmm4     ; Bitwise Logical And
sub_1502617A0+369  66 45 0F 6F C6                                                  movdqa  xmm8, xmm14     ; Move Aligned Double Quadword
sub_1502617A0+36E  66 0F 6F CB                                                     movdqa  xmm1, xmm3      ; Move Aligned Double Quadword
sub_1502617A0+372  66 44 0F DB D4                                                  pand    xmm10, xmm4     ; Bitwise Logical And
sub_1502617A0+377  66 45 0F 38 40 C3                                               pmulld  xmm8, xmm11     ; Multiply Packed Signed Dword Integers and Store Low Result
sub_1502617A0+37D  66 45 0F 6F CE                                                  movdqa  xmm9, xmm14     ; Move Aligned Double Quadword
sub_1502617A0+382  66 41 0F 38 40 CF                                               pmulld  xmm1, xmm15     ; Multiply Packed Signed Dword Integers and Store Low Result
sub_1502617A0+388  66 45 0F 6F E0                                                  movdqa  xmm12, xmm8     ; Move Aligned Double Quadword
sub_1502617A0+38D  66 45 0F 38 40 FE                                               pmulld  xmm15, xmm14    ; Multiply Packed Signed Dword Integers and Store Low Result
sub_1502617A0+393  66 44 0F DB E4                                                  pand    xmm12, xmm4     ; Bitwise Logical And
sub_1502617A0+398  66 41 0F 72 D7 10                                               psrld   xmm15, 10h      ; Packed Shift Right Logical (Dword)
sub_1502617A0+39E  66 41 0F 72 D0 10                                               psrld   xmm8, 10h       ; Packed Shift Right Logical (Dword)
sub_1502617A0+3A4  66 44 0F 38 40 D3                                               pmulld  xmm10, xmm3     ; Multiply Packed Signed Dword Integers and Store Low Result
sub_1502617A0+3AA  66 41 0F FE CF                                                  paddd   xmm1, xmm15     ; Packed Add Dword
sub_1502617A0+3AF  66 44 0F 38 40 CF                                               pmulld  xmm9, xmm7      ; Multiply Packed Signed Dword Integers and Store Low Result
sub_1502617A0+3B5  66 41 0F 72 D2 10                                               psrld   xmm10, 10h      ; Packed Shift Right Logical (Dword)
sub_1502617A0+3BB  66 44 0F FE E1                                                  paddd   xmm12, xmm1     ; Packed Add Dword
sub_1502617A0+3C0  66 45 0F 6F F9                                                  movdqa  xmm15, xmm9     ; Move Aligned Double Quadword
sub_1502617A0+3C5  66 44 0F 38 40 DB                                               pmulld  xmm11, xmm3     ; Multiply Packed Signed Dword Integers and Store Low Result
sub_1502617A0+3CB  66 45 0F FE D4                                                  paddd   xmm10, xmm12    ; Packed Add Dword
sub_1502617A0+3D0  66 0F DB EC                                                     pand    xmm5, xmm4      ; Bitwise Logical And
sub_1502617A0+3D4  66 41 0F 6F F6                                                  movdqa  xmm6, xmm14     ; Move Aligned Double Quadword
sub_1502617A0+3D9  66 41 0F 6F CA                                                  movdqa  xmm1, xmm10     ; Move Aligned Double Quadword
sub_1502617A0+3DE  66 44 0F DB FC                                                  pand    xmm15, xmm4     ; Bitwise Logical And
sub_1502617A0+3E3  66 45 0F FE D8                                                  paddd   xmm11, xmm8     ; Packed Add Dword
sub_1502617A0+3E8  66 0F 72 D1 10                                                  psrld   xmm1, 10h       ; Packed Shift Right Logical (Dword)
sub_1502617A0+3ED  66 0F 38 40 F5                                                  pmulld  xmm6, xmm5      ; Multiply Packed Signed Dword Integers and Store Low Result
sub_1502617A0+3F2  66 45 0F FE FB                                                  paddd   xmm15, xmm11    ; Packed Add Dword
sub_1502617A0+3F7  66 0F 38 40 FB                                                  pmulld  xmm7, xmm3      ; Multiply Packed Signed Dword Integers and Store Low Result
sub_1502617A0+3FC  66 41 0F FE CF                                                  paddd   xmm1, xmm15     ; Packed Add Dword
sub_1502617A0+401  66 44 0F 6F DE                                                  movdqa  xmm11, xmm6     ; Move Aligned Double Quadword
sub_1502617A0+406  66 41 0F 72 D1 10                                               psrld   xmm9, 10h       ; Packed Shift Right Logical (Dword)
sub_1502617A0+40C  66 44 0F 6F C1                                                  movdqa  xmm8, xmm1      ; Move Aligned Double Quadword
sub_1502617A0+411  66 44 0F DB DC                                                  pand    xmm11, xmm4     ; Bitwise Logical And
sub_1502617A0+416  66 41 0F FE F9                                                  paddd   xmm7, xmm9      ; Packed Add Dword
sub_1502617A0+41B  66 41 0F 72 D0 10                                               psrld   xmm8, 10h       ; Packed Shift Right Logical (Dword)
sub_1502617A0+421  66 44 0F FE DF                                                  paddd   xmm11, xmm7     ; Packed Add Dword
sub_1502617A0+426  66 0F 72 D6 10                                                  psrld   xmm6, 10h       ; Packed Shift Right Logical (Dword)
sub_1502617A0+42B  66 45 0F 38 40 F5                                               pmulld  xmm14, xmm13    ; Multiply Packed Signed Dword Integers and Store Low Result
sub_1502617A0+431  66 45 0F FE C3                                                  paddd   xmm8, xmm11     ; Packed Add Dword
sub_1502617A0+436  66 0F 38 40 DD                                                  pmulld  xmm3, xmm5      ; Multiply Packed Signed Dword Integers and Store Low Result
sub_1502617A0+43B  66 45 0F 6F F8                                                  movdqa  xmm15, xmm8     ; Move Aligned Double Quadword
sub_1502617A0+440  66 44 0F DB F4                                                  pand    xmm14, xmm4     ; Bitwise Logical And
sub_1502617A0+445  66 0F FE DE                                                     paddd   xmm3, xmm6      ; Packed Add Dword
sub_1502617A0+449  66 41 0F 72 D7 10                                               psrld   xmm15, 10h      ; Packed Shift Right Logical (Dword)
sub_1502617A0+44F  66 44 0F FE F3                                                  paddd   xmm14, xmm3     ; Packed Add Dword
sub_1502617A0+454  66 45 0F FE FE                                                  paddd   xmm15, xmm14    ; Packed Add Dword
sub_1502617A0+459  66 44 0F DB C4                                                  pand    xmm8, xmm4      ; Bitwise Logical And
sub_1502617A0+45E  66 41 0F 72 F7 10                                               pslld   xmm15, 10h      ; Packed Shift Left Logical (Dword)
sub_1502617A0+464  66 0F 72 F1 10                                                  pslld   xmm1, 10h       ; Packed Shift Left Logical (Dword)
sub_1502617A0+469  66 44 0F DB D4                                                  pand    xmm10, xmm4     ; Bitwise Logical And
sub_1502617A0+46E  66 44 0F 6E F1                                                  movd    xmm14, ecx      ; Move 32 bits
sub_1502617A0+473  66 45 0F 70 E6 00                                               pshufd  xmm12, xmm14, 0 ; Shuffle Packed Doublewords
sub_1502617A0+479  66 45 0F FE F8                                                  paddd   xmm15, xmm8     ; Packed Add Dword
sub_1502617A0+47E  66 41 0F FE CA                                                  paddd   xmm1, xmm10     ; Packed Add Dword
sub_1502617A0+483  66 45 0F 6E D0                                                  movd    xmm10, r8d      ; Move 32 bits
sub_1502617A0+488  66 45 0F 70 CA 00                                               pshufd  xmm9, xmm10, 0  ; Shuffle Packed Doublewords
sub_1502617A0+48E  66 44 0F DB E2                                                  pand    xmm12, xmm2     ; Bitwise Logical And
sub_1502617A0+493  66 45 0F 6F EF                                                  movdqa  xmm13, xmm15    ; Move Aligned Double Quadword
sub_1502617A0+498  66 45 0F EF CC                                                  pxor    xmm9, xmm12     ; Bitwise Logical Exclusive Or
sub_1502617A0+49D  66 41 0F 72 D5 09                                               psrld   xmm13, 9        ; Packed Shift Right Logical (Dword)
sub_1502617A0+4A3  66 45 0F 6E C3                                                  movd    xmm8, r11d      ; Move 32 bits
sub_1502617A0+4A8  66 45 0F EB E9                                                  por     xmm13, xmm9     ; Bitwise Logical Or
sub_1502617A0+4AD  66 0F 6E D8                                                     movd    xmm3, eax       ; Move 32 bits
sub_1502617A0+4B1  66 41 0F 70 F8 00                                               pshufd  xmm7, xmm8, 0   ; Shuffle Packed Doublewords
sub_1502617A0+4B7  66 45 0F 6F F5                                                  movdqa  xmm14, xmm13    ; Move Aligned Double Quadword
sub_1502617A0+4BC  66 44 0F 70 DB 00                                               pshufd  xmm11, xmm3, 0  ; Shuffle Packed Doublewords
sub_1502617A0+4C2  66 0F 6E EA                                                     movd    xmm5, edx       ; Move 32 bits
sub_1502617A0+4C6  41 B8 FF 01 00 00                                               mov     r8d, 1FFh
sub_1502617A0+4CC  66 44 0F DB D9                                                  pand    xmm11, xmm1     ; Bitwise Logical And
sub_1502617A0+4D1  66 44 0F 70 CD 00                                               pshufd  xmm9, xmm5, 0   ; Shuffle Packed Doublewords
sub_1502617A0+4D7  66 41 0F 72 F3 05                                               pslld   xmm11, 5        ; Packed Shift Left Logical (Dword)
sub_1502617A0+4DD  66 45 0F EF CC                                                  pxor    xmm9, xmm12     ; Bitwise Logical Exclusive Or
sub_1502617A0+4E2  B9 00 00 00 34                                                  mov     ecx, 34000000h
sub_1502617A0+4E7  66 45 0F EB D9                                                  por     xmm11, xmm9     ; Bitwise Logical Or
sub_1502617A0+4EC  66 0F 72 D1 12                                                  psrld   xmm1, 12h       ; Packed Shift Right Logical (Dword)
sub_1502617A0+4F1  41 BB DB 0F C9 40                                               mov     r11d, 40C90FDBh
sub_1502617A0+4F7  BA 00 10 C9 40                                                  mov     edx, 40C91000h
sub_1502617A0+4FC  B8 7A 77 95 B7                                                  mov     eax, 0B795777Ah
sub_1502617A0+501  44 0F 58 F7                                                     addps   xmm14, xmm7     ; Packed Single-FP Add
sub_1502617A0+505  45 0F 5C D9                                                     subps   xmm11, xmm9     ; Packed Single-FP Subtract
sub_1502617A0+509  41 0F 28 F6                                                     movaps  xmm6, xmm14     ; Move Aligned Four Packed Single-FP
sub_1502617A0+50D  66 45 0F 6E C8                                                  movd    xmm9, r8d       ; Move 32 bits
sub_1502617A0+512  66 45 0F 70 C1 00                                               pshufd  xmm8, xmm9, 0   ; Shuffle Packed Doublewords
sub_1502617A0+518  66 0F 6E E1                                                     movd    xmm4, ecx       ; Move 32 bits
sub_1502617A0+51C  66 45 0F DB C7                                                  pand    xmm8, xmm15     ; Bitwise Logical And
sub_1502617A0+521  B9 00 F0 FF FF                                                  mov     ecx, 0FFFFF000h
sub_1502617A0+526  66 44 0F 70 D4 00                                               pshufd  xmm10, xmm4, 0  ; Shuffle Packed Doublewords
sub_1502617A0+52C  66 41 0F 72 F0 0E                                               pslld   xmm8, 0Eh       ; Packed Shift Left Logical (Dword)
sub_1502617A0+532  66 45 0F EF E2                                                  pxor    xmm12, xmm10    ; Bitwise Logical Exclusive Or
sub_1502617A0+537  66 44 0F EB C1                                                  por     xmm8, xmm1      ; Bitwise Logical Or
sub_1502617A0+53C  66 45 0F EB C4                                                  por     xmm8, xmm12     ; Bitwise Logical Or
sub_1502617A0+541  66 44 0F 6E CA                                                  movd    xmm9, edx       ; Move 32 bits
sub_1502617A0+546  66 45 0F 70 D1 00                                               pshufd  xmm10, xmm9, 0  ; Shuffle Packed Doublewords
sub_1502617A0+54C  41 B8 FF FF FF 7F                                               mov     r8d, 7FFFFFFFh
sub_1502617A0+552  BA FF 00 00 00                                                  mov     edx, 0FFh
sub_1502617A0+557  0F 5C F7                                                        subps   xmm6, xmm7      ; Packed Single-FP Subtract
sub_1502617A0+55A  45 0F 5C C4                                                     subps   xmm8, xmm12     ; Packed Single-FP Subtract
sub_1502617A0+55E  44 0F 5C EE                                                     subps   xmm13, xmm6     ; Packed Single-FP Subtract
sub_1502617A0+562  41 0F 28 F5                                                     movaps  xmm6, xmm13     ; Move Aligned Four Packed Single-FP
sub_1502617A0+566  66 0F 6E F9                                                     movd    xmm7, ecx       ; Move 32 bits
sub_1502617A0+56A  66 0F 70 EF 00                                                  pshufd  xmm5, xmm7, 0   ; Shuffle Packed Doublewords
sub_1502617A0+56F  41 0F 58 F0                                                     addps   xmm6, xmm8      ; Packed Single-FP Add
sub_1502617A0+573  0F 54 EE                                                        andps   xmm5, xmm6      ; Bitwise Logical And for Single-FP
sub_1502617A0+576  44 0F 5C EE                                                     subps   xmm13, xmm6     ; Packed Single-FP Subtract
sub_1502617A0+57A  0F 5C F5                                                        subps   xmm6, xmm5      ; Packed Single-FP Subtract
sub_1502617A0+57D  45 0F 58 C5                                                     addps   xmm8, xmm13     ; Packed Single-FP Add
sub_1502617A0+581  66 45 0F 6E EB                                                  movd    xmm13, r11d     ; Move 32 bits
sub_1502617A0+586  0F 28 CD                                                        movaps  xmm1, xmm5      ; Move Aligned Four Packed Single-FP
sub_1502617A0+589  66 41 0F 70 E5 00                                               pshufd  xmm4, xmm13, 0  ; Shuffle Packed Doublewords
sub_1502617A0+58F  45 0F 58 D8                                                     addps   xmm11, xmm8     ; Packed Single-FP Add
sub_1502617A0+593  41 0F 59 CA                                                     mulps   xmm1, xmm10     ; Packed Single-FP Multiply
sub_1502617A0+597  44 0F 59 D6                                                     mulps   xmm10, xmm6     ; Packed Single-FP Multiply
sub_1502617A0+59B  41 0F 59 E3                                                     mulps   xmm4, xmm11     ; Packed Single-FP Multiply
sub_1502617A0+59F  66 44 0F 6E C0                                                  movd    xmm8, eax       ; Move 32 bits
sub_1502617A0+5A4  66 45 0F 6E D8                                                  movd    xmm11, r8d      ; Move 32 bits
sub_1502617A0+5A9  66 41 0F 70 D8 00                                               pshufd  xmm3, xmm8, 0   ; Shuffle Packed Doublewords
sub_1502617A0+5AF  41 BB 00 00 80 35                                               mov     r11d, 35800000h
sub_1502617A0+5B5  66 45 0F 70 CB 00                                               pshufd  xmm9, xmm11, 0  ; Shuffle Packed Doublewords
sub_1502617A0+5BB  44 0F 54 CA                                                     andps   xmm9, xmm2      ; Bitwise Logical And for Single-FP
sub_1502617A0+5BF  0F 59 EB                                                        mulps   xmm5, xmm3      ; Packed Single-FP Multiply
sub_1502617A0+5C2  0F 59 DE                                                        mulps   xmm3, xmm6      ; Packed Single-FP Multiply
sub_1502617A0+5C5  44 0F 58 D5                                                     addps   xmm10, xmm5     ; Packed Single-FP Add
sub_1502617A0+5C9  0F 58 E3                                                        addps   xmm4, xmm3      ; Packed Single-FP Add
sub_1502617A0+5CC  66 45 0F 6E E3                                                  movd    xmm12, r11d     ; Move 32 bits
sub_1502617A0+5D1  44 0F 58 D4                                                     addps   xmm10, xmm4     ; Packed Single-FP Add
sub_1502617A0+5D5  45 0F 28 FA                                                     movaps  xmm15, xmm10    ; Move Aligned Four Packed Single-FP
sub_1502617A0+5D9  66 45 0F 70 EC 00                                               pshufd  xmm13, xmm12, 0 ; Shuffle Packed Doublewords
sub_1502617A0+5DF  44 0F 58 F9                                                     addps   xmm15, xmm1     ; Packed Single-FP Add
sub_1502617A0+5E3  66 45 0F 6F C5                                                  movdqa  xmm8, xmm13     ; Move Aligned Double Quadword
sub_1502617A0+5E8  41 0F 5C CF                                                     subps   xmm1, xmm15     ; Packed Single-FP Subtract
sub_1502617A0+5EC  45 0F C2 C1 01                                                  cmpltps xmm8, xmm9      ; Packed Single-FP Compare LT
sub_1502617A0+5F1  45 0F C2 CD 02                                                  cmpleps xmm9, xmm13     ; Packed Single-FP Compare LE
sub_1502617A0+5F6  44 0F 58 D1                                                     addps   xmm10, xmm1     ; Packed Single-FP Add
sub_1502617A0+5FA  45 0F 54 F8                                                     andps   xmm15, xmm8     ; Bitwise Logical And for Single-FP
sub_1502617A0+5FE  45 0F 54 C2                                                     andps   xmm8, xmm10     ; Bitwise Logical And for Single-FP
sub_1502617A0+602  66 44 0F 6E D2                                                  movd    xmm10, edx      ; Move 32 bits
sub_1502617A0+607  44 0F 54 CA                                                     andps   xmm9, xmm2      ; Bitwise Logical And for Single-FP
sub_1502617A0+60B  66 41 0F 70 F2 00                                               pshufd  xmm6, xmm10, 0  ; Shuffle Packed Doublewords
sub_1502617A0+611  45 0F 56 CF                                                     orps    xmm9, xmm15     ; Bitwise Logical OR for Single-FP Data
sub_1502617A0+615  66 44 0F DB F6                                                  pand    xmm14, xmm6     ; Bitwise Logical And
sub_1502617A0+61A  41 0F 28 F9                                                     movaps  xmm7, xmm9      ; Move Aligned Four Packed Single-FP
sub_1502617A0+61E  66 41 0F 72 F6 04                                               pslld   xmm14, 4        ; Packed Shift Left Logical (Dword)
sub_1502617A0+624  45 0F 28 D9                                                     movaps  xmm11, xmm9     ; Move Aligned Four Packed Single-FP
sub_1502617A0+628  66 44 0F 7E F2                                                  movd    edx, xmm14      ; Move 32 bits
sub_1502617A0+62D  44 0F 28 2D AB DC EB 07                                         movaps  xmm13, cs:xmmword_15811FA80 ; Move Aligned Four Packed Single-FP
sub_1502617A0+635  41 0F 59 F9                                                     mulps   xmm7, xmm9      ; Packed Single-FP Multiply
sub_1502617A0+639  66 44 0F 3A 16 F1 02                                            pextrd  ecx, xmm14, 2   ; Extract Dword
sub_1502617A0+640  66 44 0F 3A 16 F0 01                                            pextrd  eax, xmm14, 1   ; Extract Dword
sub_1502617A0+647  66 45 0F 3A 16 F0 03                                            pextrd  r8d, xmm14, 3   ; Extract Dword
sub_1502617A0+64E  66 41 0F 6E 6C 11 04                                            movd    xmm5, dword ptr [r9+rdx+4] ; Move 32 bits
sub_1502617A0+655  66 45 0F 6E 64 11 0C                                            movd    xmm12, dword ptr [r9+rdx+0Ch] ; Move 32 bits
sub_1502617A0+65C  66 41 0F 6E 5C 09 04                                            movd    xmm3, dword ptr [r9+rcx+4] ; Move 32 bits
sub_1502617A0+663  66 41 0F 6E 64 09 0C                                            movd    xmm4, dword ptr [r9+rcx+0Ch] ; Move 32 bits
sub_1502617A0+66A  66 41 0F 3A 22 6C 01 04 01                                      pinsrd  xmm5, dword ptr [r9+rax+4], 1 ; Insert Dword
sub_1502617A0+673  66 45 0F 3A 22 64 01 0C 01                                      pinsrd  xmm12, dword ptr [r9+rax+0Ch], 1 ; Insert Dword
sub_1502617A0+67C  66 43 0F 3A 22 5C 01 04 01                                      pinsrd  xmm3, dword ptr [r9+r8+4], 1 ; Insert Dword
sub_1502617A0+685  66 43 0F 3A 22 64 01 0C 01                                      pinsrd  xmm4, dword ptr [r9+r8+0Ch], 1 ; Insert Dword
sub_1502617A0+68E  44 0F 59 EF                                                     mulps   xmm13, xmm7     ; Packed Single-FP Multiply
sub_1502617A0+692  66 41 0F 6E 34 11                                               movd    xmm6, dword ptr [r9+rdx] ; Move 32 bits
sub_1502617A0+698  66 0F 14 EB                                                     unpcklpd xmm5, xmm3     ; Unpack and Interleave Low Packed Double-Precision Floating-Point Values
sub_1502617A0+69C  41 0F 28 D9                                                     movaps  xmm3, xmm9      ; Move Aligned Four Packed Single-FP
sub_1502617A0+6A0  66 44 0F 6C E4                                                  punpcklqdq xmm12, xmm4  ; Unpack Low Data
sub_1502617A0+6A5  44 0F 28 D5                                                     movaps  xmm10, xmm5     ; Move Aligned Four Packed Single-FP
sub_1502617A0+6A9  41 0F 59 DC                                                     mulps   xmm3, xmm12     ; Packed Single-FP Multiply
sub_1502617A0+6AD  0F 28 CD                                                        movaps  xmm1, xmm5      ; Move Aligned Four Packed Single-FP
sub_1502617A0+6B0  66 41 0F 3A 22 34 01 01                                         pinsrd  xmm6, dword ptr [r9+rax], 1 ; Insert Dword
sub_1502617A0+6B8  44 0F 58 2D E0 DB EB 07                                         addps   xmm13, cs:xmmword_15811FA40 ; Packed Single-FP Add
sub_1502617A0+6C0  44 0F 58 D3                                                     addps   xmm10, xmm3     ; Packed Single-FP Add
sub_1502617A0+6C4  66 45 0F 6E 34 09                                               movd    xmm14, dword ptr [r9+rcx] ; Move 32 bits
sub_1502617A0+6CA  41 0F 28 E2                                                     movaps  xmm4, xmm10     ; Move Aligned Four Packed Single-FP
sub_1502617A0+6CE  66 47 0F 3A 22 34 01 01                                         pinsrd  xmm14, dword ptr [r9+r8], 1 ; Insert Dword
sub_1502617A0+6D6  41 0F 5C CA                                                     subps   xmm1, xmm10     ; Packed Single-FP Subtract
sub_1502617A0+6DA  66 45 0F 6E 7C 09 08                                            movd    xmm15, dword ptr [r9+rcx+8] ; Move 32 bits
sub_1502617A0+6E1  0F 58 D9                                                        addps   xmm3, xmm1      ; Packed Single-FP Add
sub_1502617A0+6E4  66 47 0F 3A 22 7C 01 08 01                                      pinsrd  xmm15, dword ptr [r9+r8+8], 1 ; Insert Dword
sub_1502617A0+6ED  0F 28 0D 6C DB EB 07                                            movaps  xmm1, cs:xmmword_15811FA00 ; Move Aligned Four Packed Single-FP
sub_1502617A0+6F4  66 41 0F 6C F6                                                  punpcklqdq xmm6, xmm14  ; Unpack Low Data
sub_1502617A0+6F9  0F 59 CF                                                        mulps   xmm1, xmm7      ; Packed Single-FP Multiply
sub_1502617A0+6FC  44 0F 59 DE                                                     mulps   xmm11, xmm6     ; Packed Single-FP Multiply
sub_1502617A0+700  41 0F 58 F4                                                     addps   xmm6, xmm12     ; Packed Single-FP Add
sub_1502617A0+704  0F 58 0D 15 DB EB 07                                            addps   xmm1, cs:xmmword_15811F9C0 ; Packed Single-FP Add
sub_1502617A0+70B  41 0F 58 E3                                                     addps   xmm4, xmm11     ; Packed Single-FP Add
sub_1502617A0+70F  0F 59 CF                                                        mulps   xmm1, xmm7      ; Packed Single-FP Multiply
sub_1502617A0+712  41 0F 59 FD                                                     mulps   xmm7, xmm13     ; Packed Single-FP Multiply
sub_1502617A0+716  44 0F 5C D4                                                     subps   xmm10, xmm4     ; Packed Single-FP Subtract
sub_1502617A0+71A  41 0F 59 C9                                                     mulps   xmm1, xmm9      ; Packed Single-FP Multiply
sub_1502617A0+71E  44 0F 59 CD                                                     mulps   xmm9, xmm5      ; Packed Single-FP Multiply
sub_1502617A0+722  45 0F 58 DA                                                     addps   xmm11, xmm10    ; Packed Single-FP Add
sub_1502617A0+726  0F 59 EF                                                        mulps   xmm5, xmm7      ; Packed Single-FP Multiply
sub_1502617A0+729  41 0F 5C F1                                                     subps   xmm6, xmm9      ; Packed Single-FP Subtract
sub_1502617A0+72D  41 0F 58 DB                                                     addps   xmm3, xmm11     ; Packed Single-FP Add
sub_1502617A0+731  44 0F 59 C6                                                     mulps   xmm8, xmm6      ; Packed Single-FP Multiply
sub_1502617A0+735  0F 59 CE                                                        mulps   xmm1, xmm6      ; Packed Single-FP Multiply
sub_1502617A0+738  66 45 0F 6E 54 11 08                                            movd    xmm10, dword ptr [r9+rdx+8] ; Move 32 bits
sub_1502617A0+73F  0F 58 D9                                                        addps   xmm3, xmm1      ; Packed Single-FP Add
sub_1502617A0+742  66 45 0F 3A 22 54 01 08 01                                      pinsrd  xmm10, dword ptr [r9+rax+8], 1 ; Insert Dword
sub_1502617A0+74B  66 45 0F 6C D7                                                  punpcklqdq xmm10, xmm15 ; Unpack Low Data
sub_1502617A0+750  45 0F 58 D0                                                     addps   xmm10, xmm8     ; Packed Single-FP Add
sub_1502617A0+754  44 0F 58 D5                                                     addps   xmm10, xmm5     ; Packed Single-FP Add
sub_1502617A0+758  44 0F 58 D3                                                     addps   xmm10, xmm3     ; Packed Single-FP Add
sub_1502617A0+75C  41 0F 58 E2                                                     addps   xmm4, xmm10     ; Packed Single-FP Add
sub_1502617A0+760  44 0F 28 54 24 20                                               movaps  xmm10, [rsp+178h+var_158] ; Move Aligned Four Packed Single-FP
sub_1502617A0+766  66 44 0F 38 14 D4                                               blendvps xmm10, xmm4    ; Variable Blend Packed Single Precision Floating-Point Values
sub_1502617A0+76C  E9 DB F9 FF FF                                                  jmp     loc_1502618EC   ; Jump
sub_1502617A0+76C                                                  sub_1502617A0   endp
sub_1502617A0+76C
sub_1502617A0+76C                                                  ; ---------------------------------------------------------------------------
.text:0000000150261F11 CC CC CC CC CC CC CC CC CC CC CC CC CC CC CC                    align 20h
sub_150261F20
sub_150261F20                                                      ; =============== S U B R O U T I N E =======================================
sub_150261F20
sub_150261F20
sub_150261F20                                                      sub_150261F20   proc near               ; CODE XREF: sub_150260310+D↑j
sub_150261F20
sub_150261F20                                                      var_178         = xmmword ptr -178h
sub_150261F20                                                      var_168         = xmmword ptr -168h
sub_150261F20                                                      var_158         = xmmword ptr -158h
sub_150261F20                                                      var_109         = byte ptr -109h
sub_150261F20                                                      var_B8          = xmmword ptr -0B8h
sub_150261F20                                                      var_A8          = xmmword ptr -0A8h
sub_150261F20                                                      var_98          = xmmword ptr -98h
sub_150261F20                                                      var_88          = xmmword ptr -88h
sub_150261F20                                                      var_78          = xmmword ptr -78h
sub_150261F20                                                      var_68          = xmmword ptr -68h
sub_150261F20                                                      var_58          = xmmword ptr -58h
sub_150261F20                                                      var_48          = xmmword ptr -48h
sub_150261F20                                                      var_38          = xmmword ptr -38h
sub_150261F20                                                      var_28          = xmmword ptr -28h
sub_150261F20                                                      var_18          = qword ptr -18h
sub_150261F20                                                      var_10          = qword ptr -10h
sub_150261F20
sub_150261F20      48 81 EC 98 01 00 00                                            sub     rsp, 198h       ; Integer Subtraction
sub_150261F20+7    45 33 C9                                                        xor     r9d, r9d        ; Logical Exclusive OR
sub_150261F20+A    44 0F 29 BC 24 E0 00 00 00                                      movaps  xmmword ptr [rsp+0E0h], xmm15 ; Move Aligned Four Packed Single-FP
sub_150261F20+13   44 0F 29 B4 24 60 01 00 00                                      movaps  xmmword ptr [rsp+160h], xmm14 ; Move Aligned Four Packed Single-FP
sub_150261F20+1C   44 0F 29 AC 24 70 01 00 00                                      movaps  xmmword ptr [rsp+170h], xmm13 ; Move Aligned Four Packed Single-FP
sub_150261F20+25   44 0F 29 A4 24 F0 00 00 00                                      movaps  xmmword ptr [rsp+0F0h], xmm12 ; Move Aligned Four Packed Single-FP
sub_150261F20+2E   44 0F 29 9C 24 00 01 00 00                                      movaps  xmmword ptr [rsp+100h], xmm11 ; Move Aligned Four Packed Single-FP
sub_150261F20+37   44 0F 29 94 24 10 01 00 00                                      movaps  xmmword ptr [rsp+110h], xmm10 ; Move Aligned Four Packed Single-FP
sub_150261F20+40   44 0F 28 D0                                                     movaps  xmm10, xmm0     ; Move Aligned Four Packed Single-FP
sub_150261F20+44   44 0F 29 8C 24 20 01 00 00                                      movaps  xmmword ptr [rsp+120h], xmm9 ; Move Aligned Four Packed Single-FP
sub_150261F20+4D   44 0F 29 84 24 30 01 00 00                                      movaps  xmmword ptr [rsp+130h], xmm8 ; Move Aligned Four Packed Single-FP
sub_150261F20+56   0F 29 BC 24 40 01 00 00                                         movaps  xmmword ptr [rsp+140h], xmm7 ; Move Aligned Four Packed Single-FP
sub_150261F20+5E   0F 29 B4 24 50 01 00 00                                         movaps  xmmword ptr [rsp+150h], xmm6 ; Move Aligned Four Packed Single-FP
sub_150261F20+66   4C 89 AC 24 80 01 00 00                                         mov     [rsp+180h], r13
sub_150261F20+6E   4C 8D AC 24 8F 00 00 00                                         lea     r13, [rsp+8Fh]  ; Load Effective Address
sub_150261F20+76   0F 10 15 E3 E4 EC 07                                            movups  xmm2, cs:xmmword_158130480 ; Move Unaligned Four Packed Single-FP
sub_150261F20+7D   49 83 E5 C0                                                     and     r13, 0FFFFFFFFFFFFFFC0h ; Logical AND
sub_150261F20+81   0F 28 CA                                                        movaps  xmm1, xmm2      ; Move Aligned Four Packed Single-FP
sub_150261F20+84   41 0F 55 D2                                                     andnps  xmm2, xmm10     ; Bitwise Logical And Not for Single-FP
sub_150261F20+88   0F 10 3D 51 E5 EC 07                                            movups  xmm7, cs:xmmword_158130500 ; Move Unaligned Four Packed Single-FP
sub_150261F20+8F   41 0F 54 CA                                                     andps   xmm1, xmm10     ; Bitwise Logical And for Single-FP
sub_150261F20+93   66 0F 59 F9                                                     mulpd   xmm7, xmm1      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+97   0F 10 1D 82 E5 EC 07                                            movups  xmm3, cs:xmmword_158130540 ; Move Unaligned Four Packed Single-FP
sub_150261F20+9E   0F 28 C1                                                        movaps  xmm0, xmm1      ; Move Aligned Four Packed Single-FP
sub_150261F20+A1   66 0F 58 FB                                                     addpd   xmm7, xmm3      ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+A5   0F 28 F7                                                        movaps  xmm6, xmm7      ; Move Aligned Four Packed Single-FP
sub_150261F20+A8   66 0F 73 F7 3F                                                  psllq   xmm7, 3Fh ; '?' ; Packed Shift Left Logical (Qword)
sub_150261F20+AD   66 0F 5C F3                                                     subpd   xmm6, xmm3      ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+B1   0F 10 25 28 E6 EC 07                                            movups  xmm4, cs:xmmword_158130600 ; Move Unaligned Four Packed Single-FP
sub_150261F20+B8   66 0F 59 E6                                                     mulpd   xmm4, xmm6      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+BC   0F 10 2D 5D E6 EC 07                                            movups  xmm5, cs:xmmword_158130640 ; Move Unaligned Four Packed Single-FP
sub_150261F20+C3   66 0F 59 EE                                                     mulpd   xmm5, xmm6      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+C7   66 0F 5C C4                                                     subpd   xmm0, xmm4      ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+CB   0F 10 1D 8E E6 EC 07                                            movups  xmm3, cs:xmmword_158130680 ; Move Unaligned Four Packed Single-FP
sub_150261F20+D2   66 0F 59 DE                                                     mulpd   xmm3, xmm6      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+D6   66 0F 5C C5                                                     subpd   xmm0, xmm5      ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+DA   0F 10 25 BF E6 EC 07                                            movups  xmm4, cs:xmmword_1581306C0 ; Move Unaligned Four Packed Single-FP
sub_150261F20+E1   66 0F 59 E6                                                     mulpd   xmm4, xmm6      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+E5   66 0F 5C C3                                                     subpd   xmm0, xmm3      ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+E9   66 0F 5C C4                                                     subpd   xmm0, xmm4      ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+ED   44 0F 28 C8                                                     movaps  xmm9, xmm0      ; Move Aligned Four Packed Single-FP
sub_150261F20+F1   0F 28 D9                                                        movaps  xmm3, xmm1      ; Move Aligned Four Packed Single-FP
sub_150261F20+F4   66 44 0F 59 C8                                                  mulpd   xmm9, xmm0      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+F9   66 0F C2 1D 9E E4 EC 07 06                                      cmpnlepd xmm3, cs:xmmword_1581304C0 ; Packed Double-FP Compare NOT LE
sub_150261F20+102  44 0F 10 05 16 E9 EC 07                                         movups  xmm8, cs:xmmword_158130940 ; Move Unaligned Four Packed Single-FP
sub_150261F20+10A  66 0F EF C7                                                     pxor    xmm0, xmm7      ; Bitwise Logical Exclusive Or
sub_150261F20+10E  66 45 0F 59 C1                                                  mulpd   xmm8, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+113  66 0F 50 C3                                                     movmskpd eax, xmm3      ; Extract Packed Double-Precision Floating-Point Sign Mask
sub_150261F20+117  66 44 0F 58 05 C0 E8 EC 07                                      addpd   xmm8, cs:xmmword_158130900 ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+120  66 45 0F 59 C1                                                  mulpd   xmm8, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+125  66 44 0F 58 05 72 E8 EC 07                                      addpd   xmm8, cs:xmmword_1581308C0 ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+12E  66 45 0F 59 C1                                                  mulpd   xmm8, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+133  66 44 0F 58 05 24 E8 EC 07                                      addpd   xmm8, cs:xmmword_158130880 ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+13C  66 45 0F 59 C1                                                  mulpd   xmm8, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+141  66 44 0F 58 05 D6 E7 EC 07                                      addpd   xmm8, cs:xmmword_158130840 ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+14A  66 45 0F 59 C1                                                  mulpd   xmm8, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+14F  66 44 0F 58 05 88 E7 EC 07                                      addpd   xmm8, cs:xmmword_158130800 ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+158  66 45 0F 59 C1                                                  mulpd   xmm8, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+15D  66 44 0F 58 05 3A E7 EC 07                                      addpd   xmm8, cs:xmmword_1581307C0 ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+166  66 45 0F 59 C8                                                  mulpd   xmm9, xmm8      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+16B  66 44 0F 59 C8                                                  mulpd   xmm9, xmm0      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+170  66 41 0F 58 C1                                                  addpd   xmm0, xmm9      ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+175  4C 89 AC 24 88 01 00 00                                         mov     [rsp+188h], r13
sub_150261F20+17D  66 0F EF C2                                                     pxor    xmm0, xmm2      ; Bitwise Logical Exclusive Or
sub_150261F20+181  85 C0                                                           test    eax, eax        ; Logical Compare
sub_150261F20+183  0F 85 BB 00 00 00                                               jnz     loc_150262164   ; Jump if Not Zero (ZF=0)
sub_150261F20+189
sub_150261F20+189                                                  loc_1502620A9:                          ; CODE XREF: sub_150261F20+676↓j
sub_150261F20+189  45 85 C9                                                        test    r9d, r9d        ; Logical Compare
sub_150261F20+18C  75 68                                                           jnz     short loc_150262116 ; Jump if Not Zero (ZF=0)
sub_150261F20+18E
sub_150261F20+18E                                                  loc_1502620AE:                          ; CODE XREF: sub_150261F20+200↓j
sub_150261F20+18E                                                                                          ; sub_150261F20+22E↓j
sub_150261F20+18E  0F 10 B4 24 50 01 00 00                                         movups  xmm6, xmmword ptr [rsp+150h] ; Move Unaligned Four Packed Single-FP
sub_150261F20+196  0F 10 BC 24 40 01 00 00                                         movups  xmm7, xmmword ptr [rsp+140h] ; Move Unaligned Four Packed Single-FP
sub_150261F20+19E  44 0F 10 84 24 30 01 00 00                                      movups  xmm8, xmmword ptr [rsp+130h] ; Move Unaligned Four Packed Single-FP
sub_150261F20+1A7  44 0F 10 8C 24 20 01 00 00                                      movups  xmm9, xmmword ptr [rsp+120h] ; Move Unaligned Four Packed Single-FP
sub_150261F20+1B0  44 0F 10 94 24 10 01 00 00                                      movups  xmm10, xmmword ptr [rsp+110h] ; Move Unaligned Four Packed Single-FP
sub_150261F20+1B9  44 0F 10 9C 24 00 01 00 00                                      movups  xmm11, xmmword ptr [rsp+100h] ; Move Unaligned Four Packed Single-FP
sub_150261F20+1C2  44 0F 10 A4 24 F0 00 00 00                                      movups  xmm12, xmmword ptr [rsp+0F0h] ; Move Unaligned Four Packed Single-FP
sub_150261F20+1CB  44 0F 10 AC 24 70 01 00 00                                      movups  xmm13, xmmword ptr [rsp+170h] ; Move Unaligned Four Packed Single-FP
sub_150261F20+1D4  44 0F 10 B4 24 60 01 00 00                                      movups  xmm14, xmmword ptr [rsp+160h] ; Move Unaligned Four Packed Single-FP
sub_150261F20+1DD  44 0F 10 BC 24 E0 00 00 00                                      movups  xmm15, xmmword ptr [rsp+0E0h] ; Move Unaligned Four Packed Single-FP
sub_150261F20+1E6  4C 8B AC 24 80 01 00 00                                         mov     r13, [rsp+180h]
sub_150261F20+1EE  48 81 C4 98 01 00 00                                            add     rsp, 198h       ; Add
sub_150261F20+1F5  C3                                                              retn                    ; Return Near from Procedure
sub_150261F20+1F6                                                  ; ---------------------------------------------------------------------------
sub_150261F20+1F6
sub_150261F20+1F6                                                  loc_150262116:                          ; CODE XREF: sub_150261F20+18C↑j
sub_150261F20+1F6  45 0F 11 55 00                                                  movups  xmmword ptr [r13+0], xmm10 ; Move Unaligned Four Packed Single-FP
sub_150261F20+1FB  41 0F 11 45 40                                                  movups  xmmword ptr [r13+40h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_150261F20+200  74 8C                                                           jz      short loc_1502620AE ; Jump if Zero (ZF=1)
sub_150261F20+202  33 C0                                                           xor     eax, eax        ; Logical Exclusive OR
sub_150261F20+204  48 89 5C 24 28                                                  mov     [rsp+28h], rbx
sub_150261F20+209  8B D8                                                           mov     ebx, eax
sub_150261F20+20B  48 89 74 24 20                                                  mov     [rsp+20h], rsi
sub_150261F20+210  41 8B F1                                                        mov     esi, r9d
sub_150261F20+213
sub_150261F20+213                                                  loc_150262133:                          ; CODE XREF: sub_150261F20+21D↓j
sub_150261F20+213  0F A3 DE                                                        bt      esi, ebx        ; Bit Test
sub_150261F20+216  72 1B                                                           jb      short loc_150262153 ; Jump if Below (CF=1)
sub_150261F20+218
sub_150261F20+218                                                  loc_150262138:                          ; CODE XREF: sub_150261F20+242↓j
sub_150261F20+218  FF C3                                                           inc     ebx             ; Increment by 1
sub_150261F20+21A  83 FB 02                                                        cmp     ebx, 2          ; Compare Two Operands
sub_150261F20+21D  7C F4                                                           jl      short loc_150262133 ; Jump if Less (SF!=OF)
sub_150261F20+21F  48 8B 5C 24 28                                                  mov     rbx, [rsp+28h]
sub_150261F20+224  48 8B 74 24 20                                                  mov     rsi, [rsp+20h]
sub_150261F20+229  41 0F 10 45 40                                                  movups  xmm0, xmmword ptr [r13+40h] ; Move Unaligned Four Packed Single-FP
sub_150261F20+22E  E9 5B FF FF FF                                                  jmp     loc_1502620AE   ; Jump
sub_150261F20+233                                                  ; ---------------------------------------------------------------------------
sub_150261F20+233
sub_150261F20+233                                                  loc_150262153:                          ; CODE XREF: sub_150261F20+216↑j
sub_150261F20+233  49 8D 4C DD 00                                                  lea     rcx, [r13+rbx*8+0] ; Load Effective Address
sub_150261F20+238  49 8D 54 DD 40                                                  lea     rdx, [r13+rbx*8+40h] ; Load Effective Address
sub_150261F20+23D  E8 3E 37 00 00                                                  call    sub_1502658A0   ; Call Procedure
sub_150261F20+242  EB D4                                                           jmp     short loc_150262138 ; Jump
sub_150261F20+244                                                  ; ---------------------------------------------------------------------------
sub_150261F20+244
sub_150261F20+244                                                  loc_150262164:                          ; CODE XREF: sub_150261F20+183↑j
sub_150261F20+244  F3 0F 6F 3D 94 A9 EB 07                                         movdqu  xmm7, cs:xmmword_15811CB00 ; Move Unaligned Double Quadword
sub_150261F20+24C  4C 8D 1D 8D DD EB 07                                            lea     r11, unk_15811FF00 ; Load Effective Address
sub_150261F20+253  66 0F DB F9                                                     pand    xmm7, xmm1      ; Bitwise Logical And
sub_150261F20+257  66 0F 73 D7 34                                                  psrlq   xmm7, 34h ; '4' ; Packed Shift Right Logical (Qword)
sub_150261F20+25C  66 41 0F 7E FA                                                  movd    r10d, xmm7      ; Move 32 bits
sub_150261F20+261  0F 10 2D F8 DF EC 07                                            movups  xmm5, cs:xmmword_158130180 ; Move Unaligned Four Packed Single-FP
sub_150261F20+268  0F 11 44 24 30                                                  movups  xmmword ptr [rsp+30h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_150261F20+26D  0F 28 C5                                                        movaps  xmm0, xmm5      ; Move Aligned Four Packed Single-FP
sub_150261F20+270  66 0F C5 C7 04                                                  pextrw  eax, xmm7, 4    ; Extract Word
sub_150261F20+275  0F 11 5C 24 20                                                  movups  xmmword ptr [rsp+20h], xmm3 ; Move Unaligned Four Packed Single-FP
sub_150261F20+27A  47 8D 04 52                                                     lea     r8d, [r10+r10*2] ; Load Effective Address
sub_150261F20+27E  8D 0C 40                                                        lea     ecx, [rax+rax*2] ; Load Effective Address
sub_150261F20+281  0F 54 C1                                                        andps   xmm0, xmm1      ; Bitwise Logical And for Single-FP
sub_150261F20+284  41 C1 E0 03                                                     shl     r8d, 3          ; Shift Logical Left
sub_150261F20+288  F3 0F 6F 1D 60 A9 EB 07                                         movdqu  xmm3, cs:xmmword_15811CB10 ; Move Unaligned Double Quadword
sub_150261F20+290  44 0F 11 54 24 40                                               movups  xmmword ptr [rsp+40h], xmm10 ; Move Unaligned Four Packed Single-FP
sub_150261F20+296  66 0F DB D9                                                     pand    xmm3, xmm1      ; Bitwise Logical And
sub_150261F20+29A  F3 43 0F 7E 34 03                                               movq    xmm6, qword ptr [r11+r8] ; Move 64 bits
sub_150261F20+2A0  F3 47 0F 7E 54 03 08                                            movq    xmm10, qword ptr [r11+r8+8] ; Move 64 bits
sub_150261F20+2A7  F3 47 0F 7E 64 03 10                                            movq    xmm12, qword ptr [r11+r8+10h] ; Move 64 bits
sub_150261F20+2AE  66 0F D4 1D 4A A9 EB 07                                         paddq   xmm3, cs:xmmword_15811CB20 ; Add Packed Quadword Integers
sub_150261F20+2B6  66 0F C2 C5 00                                                  cmpeqpd xmm0, xmm5      ; Packed Double-FP Compare EQ
sub_150261F20+2BB  C1 E1 03                                                        shl     ecx, 3          ; Shift Logical Left
sub_150261F20+2BE  66 0F 6F E3                                                     movdqa  xmm4, xmm3      ; Move Aligned Double Quadword
sub_150261F20+2C2  66 45 0F 16 64 0B 10                                            movhpd  xmm12, qword ptr [r11+rcx+10h] ; Move High Packed Double-Precision Floating-Point Values
sub_150261F20+2C9  66 0F 73 D4 20                                                  psrlq   xmm4, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150261F20+2CE  F3 44 0F 6F 2D 39 A9 EB 07                                      movdqu  xmm13, cs:xmmword_15811CB30 ; Move Unaligned Double Quadword
sub_150261F20+2D7  41 0F 28 EC                                                     movaps  xmm5, xmm12     ; Move Aligned Four Packed Single-FP
sub_150261F20+2DB  66 44 0F 50 C8                                                  movmskpd r9d, xmm0      ; Extract Packed Double-Precision Floating-Point Sign Mask
sub_150261F20+2E0  66 0F 73 D5 20                                                  psrlq   xmm5, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150261F20+2E5  66 41 0F DB DD                                                  pand    xmm3, xmm13     ; Bitwise Logical And
sub_150261F20+2EA  66 0F 6F C4                                                     movdqa  xmm0, xmm4      ; Move Aligned Double Quadword
sub_150261F20+2EE  66 45 0F 16 54 0B 08                                            movhpd  xmm10, qword ptr [r11+rcx+8] ; Move High Packed Double-Precision Floating-Point Values
sub_150261F20+2F5  66 44 0F 6F C3                                                  movdqa  xmm8, xmm3      ; Move Aligned Double Quadword
sub_150261F20+2FA  66 0F F4 C5                                                     pmuludq xmm0, xmm5      ; Multiply Packed Unsigned Doubleword Integers
sub_150261F20+2FE  45 0F 28 DA                                                     movaps  xmm11, xmm10    ; Move Aligned Four Packed Single-FP
sub_150261F20+302  66 0F F4 EB                                                     pmuludq xmm5, xmm3      ; Multiply Packed Unsigned Doubleword Integers
sub_150261F20+306  66 45 0F DB D5                                                  pand    xmm10, xmm13    ; Bitwise Logical And
sub_150261F20+30B  66 45 0F DB E5                                                  pand    xmm12, xmm13    ; Bitwise Logical And
sub_150261F20+310  66 45 0F F4 C2                                                  pmuludq xmm8, xmm10     ; Multiply Packed Unsigned Doubleword Integers
sub_150261F20+315  66 0F 73 D5 20                                                  psrlq   xmm5, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150261F20+31A  66 44 0F F4 E4                                                  pmuludq xmm12, xmm4     ; Multiply Packed Unsigned Doubleword Integers
sub_150261F20+31F  66 44 0F F4 D4                                                  pmuludq xmm10, xmm4     ; Multiply Packed Unsigned Doubleword Integers
sub_150261F20+324  66 0F D4 C5                                                     paddq   xmm0, xmm5      ; Add Packed Quadword Integers
sub_150261F20+328  66 41 0F 73 D3 20                                               psrlq   xmm11, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150261F20+32E  66 44 0F 6F CB                                                  movdqa  xmm9, xmm3      ; Move Aligned Double Quadword
sub_150261F20+333  66 41 0F 6F FD                                                  movdqa  xmm7, xmm13     ; Move Aligned Double Quadword
sub_150261F20+338  66 45 0F 6F F5                                                  movdqa  xmm14, xmm13    ; Move Aligned Double Quadword
sub_150261F20+33D  66 45 0F F4 CB                                                  pmuludq xmm9, xmm11     ; Multiply Packed Unsigned Doubleword Integers
sub_150261F20+342  66 41 0F DB F8                                                  pand    xmm7, xmm8      ; Bitwise Logical And
sub_150261F20+347  66 44 0F F4 DC                                                  pmuludq xmm11, xmm4     ; Multiply Packed Unsigned Doubleword Integers
sub_150261F20+34C  66 0F D4 F8                                                     paddq   xmm7, xmm0      ; Add Packed Quadword Integers
sub_150261F20+350  66 41 0F 16 34 0B                                               movhpd  xmm6, qword ptr [r11+rcx] ; Move High Packed Double-Precision Floating-Point Values
sub_150261F20+356  4C 8D 1D 83 9E EC 07                                            lea     r11, unk_15812C100 ; Load Effective Address
sub_150261F20+35D  66 41 0F 73 D4 20                                               psrlq   xmm12, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150261F20+363  66 41 0F 73 D0 20                                               psrlq   xmm8, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150261F20+369  66 44 0F DB F6                                                  pand    xmm14, xmm6     ; Bitwise Logical And
sub_150261F20+36E  66 44 0F 6F FB                                                  movdqa  xmm15, xmm3     ; Move Aligned Double Quadword
sub_150261F20+373  66 41 0F 6F ED                                                  movdqa  xmm5, xmm13     ; Move Aligned Double Quadword
sub_150261F20+378  66 44 0F D4 E7                                                  paddq   xmm12, xmm7     ; Add Packed Quadword Integers
sub_150261F20+37D  66 45 0F D4 D0                                                  paddq   xmm10, xmm8     ; Add Packed Quadword Integers
sub_150261F20+382  66 45 0F F4 FE                                                  pmuludq xmm15, xmm14    ; Multiply Packed Unsigned Doubleword Integers
sub_150261F20+387  66 41 0F F4 E6                                                  pmuludq xmm4, xmm14     ; Multiply Packed Unsigned Doubleword Integers
sub_150261F20+38C  66 41 0F DB E9                                                  pand    xmm5, xmm9      ; Bitwise Logical And
sub_150261F20+391  41 0F 28 C4                                                     movaps  xmm0, xmm12     ; Move Aligned Four Packed Single-FP
sub_150261F20+395  66 41 0F D4 EA                                                  paddq   xmm5, xmm10     ; Add Packed Quadword Integers
sub_150261F20+39A  66 0F 73 D0 20                                                  psrlq   xmm0, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150261F20+39F  66 41 0F 73 D1 20                                               psrlq   xmm9, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150261F20+3A5  66 0F 73 D6 20                                                  psrlq   xmm6, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150261F20+3AA  66 45 0F 6F C5                                                  movdqa  xmm8, xmm13     ; Move Aligned Double Quadword
sub_150261F20+3AF  66 0F D4 C5                                                     paddq   xmm0, xmm5      ; Add Packed Quadword Integers
sub_150261F20+3B3  66 45 0F D4 D9                                                  paddq   xmm11, xmm9     ; Add Packed Quadword Integers
sub_150261F20+3B8  66 0F F4 DE                                                     pmuludq xmm3, xmm6      ; Multiply Packed Unsigned Doubleword Integers
sub_150261F20+3BC  66 45 0F DB C7                                                  pand    xmm8, xmm15     ; Bitwise Logical And
sub_150261F20+3C1  66 44 0F 6F D0                                                  movdqa  xmm10, xmm0     ; Move Aligned Double Quadword
sub_150261F20+3C6  66 45 0F D4 C3                                                  paddq   xmm8, xmm11     ; Add Packed Quadword Integers
sub_150261F20+3CB  66 41 0F 73 D2 20                                               psrlq   xmm10, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150261F20+3D1  66 41 0F 73 D7 20                                               psrlq   xmm15, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150261F20+3D7  66 45 0F D4 D0                                                  paddq   xmm10, xmm8     ; Add Packed Quadword Integers
sub_150261F20+3DC  66 41 0F D4 E7                                                  paddq   xmm4, xmm15     ; Add Packed Quadword Integers
sub_150261F20+3E1  66 41 0F DB DD                                                  pand    xmm3, xmm13     ; Bitwise Logical And
sub_150261F20+3E6  66 41 0F 6F FA                                                  movdqa  xmm7, xmm10     ; Move Aligned Double Quadword
sub_150261F20+3EB  66 0F D4 DC                                                     paddq   xmm3, xmm4      ; Add Packed Quadword Integers
sub_150261F20+3EF  66 0F 73 D7 20                                                  psrlq   xmm7, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150261F20+3F4  66 45 0F DB D5                                                  pand    xmm10, xmm13    ; Bitwise Logical And
sub_150261F20+3F9  66 0F D4 FB                                                     paddq   xmm7, xmm3      ; Add Packed Quadword Integers
sub_150261F20+3FD  66 0F 73 F7 20                                                  psllq   xmm7, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150261F20+402  66 0F 73 F0 20                                                  psllq   xmm0, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150261F20+407  66 41 0F D4 FA                                                  paddq   xmm7, xmm10     ; Add Packed Quadword Integers
sub_150261F20+40C  F3 44 0F 6F 35 0B A8 EB 07                                      movdqu  xmm14, cs:xmmword_15811CB40 ; Move Unaligned Double Quadword
sub_150261F20+415  66 0F 6F E7                                                     movdqa  xmm4, xmm7      ; Move Aligned Double Quadword
sub_150261F20+419  F3 44 0F 6F 0D 0E A8 EB 07                                      movdqu  xmm9, cs:xmmword_15811CB50 ; Move Unaligned Double Quadword
sub_150261F20+422  66 44 0F DB F1                                                  pand    xmm14, xmm1     ; Bitwise Logical And
sub_150261F20+427  44 0F 10 1D 11 A8 EB 07                                         movups  xmm11, cs:xmmword_15811CB60 ; Move Unaligned Four Packed Single-FP
sub_150261F20+42F  66 0F 73 D4 0C                                                  psrlq   xmm4, 0Ch       ; Packed Shift Right Logical (Qword)
sub_150261F20+434  66 45 0F EF CE                                                  pxor    xmm9, xmm14     ; Bitwise Logical Exclusive Or
sub_150261F20+439  41 0F 28 F3                                                     movaps  xmm6, xmm11     ; Move Aligned Four Packed Single-FP
sub_150261F20+43D  66 41 0F EB E1                                                  por     xmm4, xmm9      ; Bitwise Logical Or
sub_150261F20+442  66 45 0F DB E5                                                  pand    xmm12, xmm13    ; Bitwise Logical And
sub_150261F20+447  66 0F 58 F4                                                     addpd   xmm6, xmm4      ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+44B  66 41 0F D4 C4                                                  paddq   xmm0, xmm12     ; Add Packed Quadword Integers
sub_150261F20+450  44 0F 28 E6                                                     movaps  xmm12, xmm6     ; Move Aligned Four Packed Single-FP
sub_150261F20+454  F3 0F 6F 1D 34 A8 EB 07                                         movdqu  xmm3, cs:xmmword_15811CBB0 ; Move Unaligned Double Quadword
sub_150261F20+45C  F3 0F 6F 2D 0C A8 EB 07                                         movdqu  xmm5, cs:xmmword_15811CB90 ; Move Unaligned Double Quadword
sub_150261F20+464  66 0F DB DF                                                     pand    xmm3, xmm7      ; Bitwise Logical And
sub_150261F20+468  F3 44 0F 6F 2D EF A7 EB 07                                      movdqu  xmm13, cs:xmmword_15811CB80 ; Move Unaligned Double Quadword
sub_150261F20+471  66 0F DB E8                                                     pand    xmm5, xmm0      ; Bitwise Logical And
sub_150261F20+475  66 45 0F 5C E3                                                  subpd   xmm12, xmm11    ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+47A  66 0F 73 F3 28                                                  psllq   xmm3, 28h ; '(' ; Packed Shift Left Logical (Qword)
sub_150261F20+47F  66 0F 73 D0 18                                                  psrlq   xmm0, 18h       ; Packed Shift Right Logical (Qword)
sub_150261F20+484  66 45 0F EF EE                                                  pxor    xmm13, xmm14    ; Bitwise Logical Exclusive Or
sub_150261F20+489  66 0F EB D8                                                     por     xmm3, xmm0      ; Bitwise Logical Or
sub_150261F20+48D  66 44 0F EF 35 EA A7 EB 07                                      pxor    xmm14, cs:xmmword_15811CBA0 ; Bitwise Logical Exclusive Or
sub_150261F20+496  66 0F 73 F5 1C                                                  psllq   xmm5, 1Ch       ; Packed Shift Left Logical (Qword)
sub_150261F20+49B  66 41 0F 5C E4                                                  subpd   xmm4, xmm12     ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+4A0  66 41 0F EB DE                                                  por     xmm3, xmm14     ; Bitwise Logical Or
sub_150261F20+4A5  0F 28 C4                                                        movaps  xmm0, xmm4      ; Move Aligned Four Packed Single-FP
sub_150261F20+4A8  66 41 0F 5C DE                                                  subpd   xmm3, xmm14     ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+4AD  66 0F 58 C3                                                     addpd   xmm0, xmm3      ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+4B1  66 0F 5C E0                                                     subpd   xmm4, xmm0      ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+4B5  66 41 0F EB ED                                                  por     xmm5, xmm13     ; Bitwise Logical Or
sub_150261F20+4BA  66 41 0F 5C ED                                                  subpd   xmm5, xmm13     ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+4BF  66 0F 58 DC                                                     addpd   xmm3, xmm4      ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+4C3  0F 10 3D 06 A8 EB 07                                            movups  xmm7, cs:xmmword_15811CBF0 ; Move Unaligned Four Packed Single-FP
sub_150261F20+4CA  0F 54 F8                                                        andps   xmm7, xmm0      ; Bitwise Logical And for Single-FP
sub_150261F20+4CD  66 0F 58 EB                                                     addpd   xmm5, xmm3      ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+4D1  66 0F 5C C7                                                     subpd   xmm0, xmm7      ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+4D5  66 0F 59 2D C3 A7 EB 07                                         mulpd   xmm5, cs:xmmword_15811CBC0 ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+4DD  44 0F 10 3D CB A7 EB 07                                         movups  xmm15, cs:xmmword_15811CBD0 ; Move Unaligned Four Packed Single-FP
sub_150261F20+4E5  0F 10 25 D4 A7 EB 07                                            movups  xmm4, cs:xmmword_15811CBE0 ; Move Unaligned Four Packed Single-FP
sub_150261F20+4EC  45 0F 28 C7                                                     movaps  xmm8, xmm15     ; Move Aligned Four Packed Single-FP
sub_150261F20+4F0  66 44 0F 59 C7                                                  mulpd   xmm8, xmm7      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+4F5  66 44 0F 59 F8                                                  mulpd   xmm15, xmm0     ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+4FA  66 0F 59 FC                                                     mulpd   xmm7, xmm4      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+4FE  66 0F 59 E0                                                     mulpd   xmm4, xmm0      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+502  66 44 0F 58 FF                                                  addpd   xmm15, xmm7     ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+507  66 0F 58 EC                                                     addpd   xmm5, xmm4      ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+50B  66 44 0F 58 FD                                                  addpd   xmm15, xmm5     ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+510  0F 54 35 39 A7 EB 07                                            andps   xmm6, cs:xmmword_15811CB70 ; Bitwise Logical And for Single-FP
sub_150261F20+517  45 0F 28 CF                                                     movaps  xmm9, xmm15     ; Move Aligned Four Packed Single-FP
sub_150261F20+51B  0F 10 2D CE A7 EB 07                                            movups  xmm5, cs:xmmword_15811CC10 ; Move Unaligned Four Packed Single-FP
sub_150261F20+522  0F 10 1D B7 A7 EB 07                                            movups  xmm3, cs:xmmword_15811CC00 ; Move Unaligned Four Packed Single-FP
sub_150261F20+529  0F 28 E5                                                        movaps  xmm4, xmm5      ; Move Aligned Four Packed Single-FP
sub_150261F20+52C  66 0F 7E F2                                                     movd    edx, xmm6       ; Move 32 bits
sub_150261F20+530  0F 54 D9                                                        andps   xmm3, xmm1      ; Bitwise Logical And for Single-FP
sub_150261F20+533  44 0F 10 2D 25 DF EC 07                                         movups  xmm13, cs:xmmword_158130380 ; Move Unaligned Four Packed Single-FP
sub_150261F20+53B  66 45 0F 58 C8                                                  addpd   xmm9, xmm8      ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+540  66 0F C2 E3 01                                                  cmpltpd xmm4, xmm3      ; Packed Double-FP Compare LT
sub_150261F20+545  66 0F C2 DD 02                                                  cmplepd xmm3, xmm5      ; Packed Double-FP Compare LE
sub_150261F20+54A  66 45 0F 5C C1                                                  subpd   xmm8, xmm9      ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+54F  C1 E2 05                                                        shl     edx, 5          ; Shift Logical Left
sub_150261F20+552  0F 54 D9                                                        andps   xmm3, xmm1      ; Bitwise Logical And for Single-FP
sub_150261F20+555  F3 41 0F 7E 2C 13                                               movq    xmm5, qword ptr [r11+rdx] ; Move 64 bits
sub_150261F20+55B  44 0F 54 CC                                                     andps   xmm9, xmm4      ; Bitwise Logical And for Single-FP
sub_150261F20+55F  66 0F C5 C6 04                                                  pextrw  eax, xmm6, 4    ; Extract Word
sub_150261F20+564  66 45 0F 58 F8                                                  addpd   xmm15, xmm8     ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+569  C1 E0 05                                                        shl     eax, 5          ; Shift Logical Left
sub_150261F20+56C  41 0F 56 D9                                                     orps    xmm3, xmm9      ; Bitwise Logical OR for Single-FP Data
sub_150261F20+570  F3 45 0F 7E 64 13 08                                            movq    xmm12, qword ptr [r11+rdx+8] ; Move 64 bits
sub_150261F20+577  0F 28 FB                                                        movaps  xmm7, xmm3      ; Move Aligned Four Packed Single-FP
sub_150261F20+57A  66 45 0F 16 64 03 08                                            movhpd  xmm12, qword ptr [r11+rax+8] ; Move High Packed Double-Precision Floating-Point Values
sub_150261F20+581  44 0F 28 DB                                                     movaps  xmm11, xmm3     ; Move Aligned Four Packed Single-FP
sub_150261F20+585  66 41 0F 59 FC                                                  mulpd   xmm7, xmm12     ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+58A  F3 41 0F 7E 44 13 10                                            movq    xmm0, qword ptr [r11+rdx+10h] ; Move 64 bits
sub_150261F20+591  41 0F 54 E7                                                     andps   xmm4, xmm15     ; Bitwise Logical And for Single-FP
sub_150261F20+595  66 41 0F 16 44 03 10                                            movhpd  xmm0, qword ptr [r11+rax+10h] ; Move High Packed Double-Precision Floating-Point Values
sub_150261F20+59C  44 0F 28 D0                                                     movaps  xmm10, xmm0     ; Move Aligned Four Packed Single-FP
sub_150261F20+5A0  0F 28 F0                                                        movaps  xmm6, xmm0      ; Move Aligned Four Packed Single-FP
sub_150261F20+5A3  66 44 0F 58 D7                                                  addpd   xmm10, xmm7     ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+5A8  66 41 0F 5C F2                                                  subpd   xmm6, xmm10     ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+5AD  66 0F 58 FE                                                     addpd   xmm7, xmm6      ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+5B1  0F 28 F3                                                        movaps  xmm6, xmm3      ; Move Aligned Four Packed Single-FP
sub_150261F20+5B4  41 0F 28 CA                                                     movaps  xmm1, xmm10     ; Move Aligned Four Packed Single-FP
sub_150261F20+5B8  66 0F 59 F3                                                     mulpd   xmm6, xmm3      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+5BC  66 41 0F 16 2C 03                                               movhpd  xmm5, qword ptr [r11+rax] ; Move High Packed Double-Precision Floating-Point Values
sub_150261F20+5C2  66 44 0F 59 DD                                                  mulpd   xmm11, xmm5     ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+5C7  66 41 0F 58 EC                                                  addpd   xmm5, xmm12     ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+5CC  66 41 0F 58 CB                                                  addpd   xmm1, xmm11     ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+5D1  66 44 0F 59 EE                                                  mulpd   xmm13, xmm6     ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+5D6  66 44 0F 5C D1                                                  subpd   xmm10, xmm1     ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+5DB  66 44 0F 58 2D 3C DE EC 07                                      addpd   xmm13, cs:xmmword_158130340 ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+5E4  66 45 0F 58 DA                                                  addpd   xmm11, xmm10    ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+5E9  66 44 0F 59 EE                                                  mulpd   xmm13, xmm6     ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+5EE  66 41 0F 58 FB                                                  addpd   xmm7, xmm11     ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+5F3  66 44 0F 59 EB                                                  mulpd   xmm13, xmm3     ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+5F8  66 0F 59 D8                                                     mulpd   xmm3, xmm0      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+5FC  66 44 0F 59 ED                                                  mulpd   xmm13, xmm5     ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+601  66 0F 5C EB                                                     subpd   xmm5, xmm3      ; Subtract Packed Double-Precision Floating-Point Values
sub_150261F20+605  66 41 0F 58 FD                                                  addpd   xmm7, xmm13     ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+60A  66 0F 59 E5                                                     mulpd   xmm4, xmm5      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+60E  44 0F 10 25 0A DF EC 07                                         movups  xmm12, cs:xmmword_158130440 ; Move Unaligned Four Packed Single-FP
sub_150261F20+616  66 44 0F 59 E6                                                  mulpd   xmm12, xmm6     ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+61B  66 44 0F 58 25 BC DE EC 07                                      addpd   xmm12, cs:xmmword_158130400 ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+624  66 44 0F 59 E6                                                  mulpd   xmm12, xmm6     ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+629  66 44 0F 58 25 6E DE EC 07                                      addpd   xmm12, cs:xmmword_1581303C0 ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+632  66 41 0F 59 F4                                                  mulpd   xmm6, xmm12     ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+637  66 0F 59 F0                                                     mulpd   xmm6, xmm0      ; Multiply Packed Double-Precision Floating-Point Values
sub_150261F20+63B  F3 41 0F 7E 5C 13 18                                            movq    xmm3, qword ptr [r11+rdx+18h] ; Move 64 bits
sub_150261F20+642  44 0F 10 54 24 40                                               movups  xmm10, xmmword ptr [rsp+40h] ; Move Unaligned Four Packed Single-FP
sub_150261F20+648  66 0F 58 FE                                                     addpd   xmm7, xmm6      ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+64C  66 41 0F 16 5C 03 18                                            movhpd  xmm3, qword ptr [r11+rax+18h] ; Move High Packed Double-Precision Floating-Point Values
sub_150261F20+653  66 0F 58 DC                                                     addpd   xmm3, xmm4      ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+657  66 0F 58 FB                                                     addpd   xmm7, xmm3      ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+65B  66 0F 58 CF                                                     addpd   xmm1, xmm7      ; Add Packed Double-Precision Floating-Point Values
sub_150261F20+65F  66 0F EF CA                                                     pxor    xmm1, xmm2      ; Bitwise Logical Exclusive Or
sub_150261F20+663  0F 10 54 24 20                                                  movups  xmm2, xmmword ptr [rsp+20h] ; Move Unaligned Four Packed Single-FP
sub_150261F20+668  0F 28 C2                                                        movaps  xmm0, xmm2      ; Move Aligned Four Packed Single-FP
sub_150261F20+66B  0F 54 CA                                                        andps   xmm1, xmm2      ; Bitwise Logical And for Single-FP
sub_150261F20+66E  0F 55 44 24 30                                                  andnps  xmm0, xmmword ptr [rsp+30h] ; Bitwise Logical And Not for Single-FP
sub_150261F20+673  0F 56 C1                                                        orps    xmm0, xmm1      ; Bitwise Logical OR for Single-FP Data
sub_150261F20+676  E9 0E FB FF FF                                                  jmp     loc_1502620A9   ; Jump
sub_150261F20+676                                                  sub_150261F20   endp
sub_150261F20+676
sub_150261F20+676                                                  ; ---------------------------------------------------------------------------
.text:000000015026259B CC CC CC CC CC                                                  align 20h
sub_1502625A0
sub_1502625A0                                                      ; =============== S U B R O U T I N E =======================================
sub_1502625A0
sub_1502625A0
sub_1502625A0                                                      sub_1502625A0   proc near               ; CODE XREF: sub_150260310+7↑j
sub_1502625A0
sub_1502625A0                                                      var_178         = xmmword ptr -178h
sub_1502625A0                                                      var_168         = xmmword ptr -168h
sub_1502625A0                                                      var_158         = xmmword ptr -158h
sub_1502625A0                                                      var_109         = byte ptr -109h
sub_1502625A0                                                      var_B8          = xmmword ptr -0B8h
sub_1502625A0                                                      var_A8          = xmmword ptr -0A8h
sub_1502625A0                                                      var_98          = xmmword ptr -98h
sub_1502625A0                                                      var_88          = xmmword ptr -88h
sub_1502625A0                                                      var_78          = xmmword ptr -78h
sub_1502625A0                                                      var_68          = xmmword ptr -68h
sub_1502625A0                                                      var_58          = xmmword ptr -58h
sub_1502625A0                                                      var_48          = xmmword ptr -48h
sub_1502625A0                                                      var_38          = xmmword ptr -38h
sub_1502625A0                                                      var_28          = xmmword ptr -28h
sub_1502625A0                                                      var_18          = qword ptr -18h
sub_1502625A0                                                      var_10          = qword ptr -10h
sub_1502625A0
sub_1502625A0      48 81 EC 98 01 00 00                                            sub     rsp, 198h       ; Integer Subtraction
sub_1502625A0+7    0F 28 C8                                                        movaps  xmm1, xmm0      ; Move Aligned Four Packed Single-FP
sub_1502625A0+A    44 0F 29 BC 24 E0 00 00 00                                      movaps  xmmword ptr [rsp+0E0h], xmm15 ; Move Aligned Four Packed Single-FP
sub_1502625A0+13   45 33 C9                                                        xor     r9d, r9d        ; Logical Exclusive OR
sub_1502625A0+16   44 0F 29 B4 24 70 01 00 00                                      movaps  xmmword ptr [rsp+170h], xmm14 ; Move Aligned Four Packed Single-FP
sub_1502625A0+1F   44 0F 29 AC 24 F0 00 00 00                                      movaps  xmmword ptr [rsp+0F0h], xmm13 ; Move Aligned Four Packed Single-FP
sub_1502625A0+28   44 0F 29 A4 24 00 01 00 00                                      movaps  xmmword ptr [rsp+100h], xmm12 ; Move Aligned Four Packed Single-FP
sub_1502625A0+31   44 0F 29 9C 24 10 01 00 00                                      movaps  xmmword ptr [rsp+110h], xmm11 ; Move Aligned Four Packed Single-FP
sub_1502625A0+3A   44 0F 29 94 24 20 01 00 00                                      movaps  xmmword ptr [rsp+120h], xmm10 ; Move Aligned Four Packed Single-FP
sub_1502625A0+43   44 0F 28 D0                                                     movaps  xmm10, xmm0     ; Move Aligned Four Packed Single-FP
sub_1502625A0+47   44 0F 29 8C 24 30 01 00 00                                      movaps  xmmword ptr [rsp+130h], xmm9 ; Move Aligned Four Packed Single-FP
sub_1502625A0+50   44 0F 29 84 24 40 01 00 00                                      movaps  xmmword ptr [rsp+140h], xmm8 ; Move Aligned Four Packed Single-FP
sub_1502625A0+59   0F 29 BC 24 50 01 00 00                                         movaps  xmmword ptr [rsp+150h], xmm7 ; Move Aligned Four Packed Single-FP
sub_1502625A0+61   0F 29 B4 24 60 01 00 00                                         movaps  xmmword ptr [rsp+160h], xmm6 ; Move Aligned Four Packed Single-FP
sub_1502625A0+69   4C 89 AC 24 80 01 00 00                                         mov     [rsp+180h], r13
sub_1502625A0+71   4C 8D AC 24 8F 00 00 00                                         lea     r13, [rsp+8Fh]  ; Load Effective Address
sub_1502625A0+79   0F 28 15 60 DE EC 07                                            movaps  xmm2, cs:xmmword_158130480 ; Move Aligned Four Packed Single-FP
sub_1502625A0+80   49 83 E5 C0                                                     and     r13, 0FFFFFFFFFFFFFFC0h ; Logical AND
sub_1502625A0+84   0F 28 3D D5 DE EC 07                                            movaps  xmm7, cs:xmmword_158130500 ; Move Aligned Four Packed Single-FP
sub_1502625A0+8B   0F 54 CA                                                        andps   xmm1, xmm2      ; Bitwise Logical And for Single-FP
sub_1502625A0+8E   66 0F 59 F9                                                     mulpd   xmm7, xmm1      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+92   0F 28 1D 07 DF EC 07                                            movaps  xmm3, cs:xmmword_158130540 ; Move Aligned Four Packed Single-FP
sub_1502625A0+99   44 0F 28 D1                                                     movaps  xmm10, xmm1     ; Move Aligned Four Packed Single-FP
sub_1502625A0+9D   66 0F 58 FB                                                     addpd   xmm7, xmm3      ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+A1   0F 28 F7                                                        movaps  xmm6, xmm7      ; Move Aligned Four Packed Single-FP
sub_1502625A0+A4   66 0F 73 F7 3F                                                  psllq   xmm7, 3Fh ; '?' ; Packed Shift Left Logical (Qword)
sub_1502625A0+A9   66 0F 5C F3                                                     subpd   xmm6, xmm3      ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+AD   0F 28 25 AC DF EC 07                                            movaps  xmm4, cs:xmmword_158130600 ; Move Aligned Four Packed Single-FP
sub_1502625A0+B4   0F 55 D0                                                        andnps  xmm2, xmm0      ; Bitwise Logical And Not for Single-FP
sub_1502625A0+B7   66 0F 59 E6                                                     mulpd   xmm4, xmm6      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+BB   0F 28 2D DE DF EC 07                                            movaps  xmm5, cs:xmmword_158130640 ; Move Aligned Four Packed Single-FP
sub_1502625A0+C2   66 0F 59 EE                                                     mulpd   xmm5, xmm6      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+C6   66 44 0F 5C D4                                                  subpd   xmm10, xmm4     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+CB   0F 28 1D 0E E0 EC 07                                            movaps  xmm3, cs:xmmword_158130680 ; Move Aligned Four Packed Single-FP
sub_1502625A0+D2   66 0F 59 DE                                                     mulpd   xmm3, xmm6      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+D6   66 44 0F 5C D5                                                  subpd   xmm10, xmm5     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+DB   0F 28 25 3E E0 EC 07                                            movaps  xmm4, cs:xmmword_1581306C0 ; Move Aligned Four Packed Single-FP
sub_1502625A0+E2   66 0F 59 E6                                                     mulpd   xmm4, xmm6      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+E6   66 44 0F 5C D3                                                  subpd   xmm10, xmm3     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+EB   66 44 0F 5C D4                                                  subpd   xmm10, xmm4     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+F0   45 0F 28 CA                                                     movaps  xmm9, xmm10     ; Move Aligned Four Packed Single-FP
sub_1502625A0+F4   0F 28 D9                                                        movaps  xmm3, xmm1      ; Move Aligned Four Packed Single-FP
sub_1502625A0+F7   66 45 0F 59 CA                                                  mulpd   xmm9, xmm10     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+FC   66 0F C2 1D 1B DE EC 07 06                                      cmpnlepd xmm3, cs:xmmword_1581304C0 ; Packed Double-FP Compare NOT LE
sub_1502625A0+105  44 0F 28 05 93 E2 EC 07                                         movaps  xmm8, cs:xmmword_158130940 ; Move Aligned Four Packed Single-FP
sub_1502625A0+10D  44 0F 57 D7                                                     xorps   xmm10, xmm7     ; Bitwise Logical XOR for Single-FP Data
sub_1502625A0+111  66 45 0F 59 C1                                                  mulpd   xmm8, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+116  66 0F 50 C3                                                     movmskpd eax, xmm3      ; Extract Packed Double-Precision Floating-Point Sign Mask
sub_1502625A0+11A  66 44 0F 58 05 3D E2 EC 07                                      addpd   xmm8, cs:xmmword_158130900 ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+123  66 45 0F 59 C1                                                  mulpd   xmm8, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+128  66 44 0F 58 05 EF E1 EC 07                                      addpd   xmm8, cs:xmmword_1581308C0 ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+131  66 45 0F 59 C1                                                  mulpd   xmm8, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+136  66 44 0F 58 05 A1 E1 EC 07                                      addpd   xmm8, cs:xmmword_158130880 ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+13F  66 45 0F 59 C1                                                  mulpd   xmm8, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+144  66 44 0F 58 05 53 E1 EC 07                                      addpd   xmm8, cs:xmmword_158130840 ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+14D  66 45 0F 59 C1                                                  mulpd   xmm8, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+152  66 44 0F 58 05 05 E1 EC 07                                      addpd   xmm8, cs:xmmword_158130800 ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+15B  66 45 0F 59 C1                                                  mulpd   xmm8, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+160  66 44 0F 58 05 B7 E0 EC 07                                      addpd   xmm8, cs:xmmword_1581307C0 ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+169  66 45 0F 59 C8                                                  mulpd   xmm9, xmm8      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+16E  66 45 0F 59 CA                                                  mulpd   xmm9, xmm10     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+173  66 45 0F 58 D1                                                  addpd   xmm10, xmm9     ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+178  4C 89 AC 24 88 01 00 00                                         mov     [rsp+188h], r13
sub_1502625A0+180  44 0F 57 D2                                                     xorps   xmm10, xmm2     ; Bitwise Logical XOR for Single-FP Data
sub_1502625A0+184  85 C0                                                           test    eax, eax        ; Logical Compare
sub_1502625A0+186  0F 85 BF 00 00 00                                               jnz     loc_1502627EB   ; Jump if Not Zero (ZF=0)
sub_1502625A0+18C
sub_1502625A0+18C                                                  loc_15026272C:                          ; CODE XREF: sub_1502625A0+679↓j
sub_1502625A0+18C  45 85 C9                                                        test    r9d, r9d        ; Logical Compare
sub_1502625A0+18F  75 6C                                                           jnz     short loc_15026279D ; Jump if Not Zero (ZF=0)
sub_1502625A0+191
sub_1502625A0+191                                                  loc_150262731:                          ; CODE XREF: sub_1502625A0+207↓j
sub_1502625A0+191                                                                                          ; sub_1502625A0+235↓j
sub_1502625A0+191  0F 28 B4 24 60 01 00 00                                         movaps  xmm6, xmmword ptr [rsp+160h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+199  41 0F 28 C2                                                     movaps  xmm0, xmm10     ; Move Aligned Four Packed Single-FP
sub_1502625A0+19D  0F 28 BC 24 50 01 00 00                                         movaps  xmm7, xmmword ptr [rsp+150h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+1A5  44 0F 28 84 24 40 01 00 00                                      movaps  xmm8, xmmword ptr [rsp+140h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+1AE  44 0F 28 8C 24 30 01 00 00                                      movaps  xmm9, xmmword ptr [rsp+130h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+1B7  44 0F 28 94 24 20 01 00 00                                      movaps  xmm10, xmmword ptr [rsp+120h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+1C0  44 0F 28 9C 24 10 01 00 00                                      movaps  xmm11, xmmword ptr [rsp+110h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+1C9  44 0F 28 A4 24 00 01 00 00                                      movaps  xmm12, xmmword ptr [rsp+100h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+1D2  44 0F 28 AC 24 F0 00 00 00                                      movaps  xmm13, xmmword ptr [rsp+0F0h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+1DB  44 0F 28 B4 24 70 01 00 00                                      movaps  xmm14, xmmword ptr [rsp+170h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+1E4  44 0F 28 BC 24 E0 00 00 00                                      movaps  xmm15, xmmword ptr [rsp+0E0h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+1ED  4C 8B AC 24 80 01 00 00                                         mov     r13, [rsp+180h]
sub_1502625A0+1F5  48 81 C4 98 01 00 00                                            add     rsp, 198h       ; Add
sub_1502625A0+1FC  C3                                                              retn                    ; Return Near from Procedure
sub_1502625A0+1FD                                                  ; ---------------------------------------------------------------------------
sub_1502625A0+1FD
sub_1502625A0+1FD                                                  loc_15026279D:                          ; CODE XREF: sub_1502625A0+18F↑j
sub_1502625A0+1FD  41 0F 29 45 00                                                  movaps  xmmword ptr [r13+0], xmm0 ; Move Aligned Four Packed Single-FP
sub_1502625A0+202  45 0F 29 55 40                                                  movaps  xmmword ptr [r13+40h], xmm10 ; Move Aligned Four Packed Single-FP
sub_1502625A0+207  74 88                                                           jz      short loc_150262731 ; Jump if Zero (ZF=1)
sub_1502625A0+209  33 C0                                                           xor     eax, eax        ; Logical Exclusive OR
sub_1502625A0+20B  48 89 5C 24 28                                                  mov     [rsp+28h], rbx
sub_1502625A0+210  8B D8                                                           mov     ebx, eax
sub_1502625A0+212  48 89 74 24 20                                                  mov     [rsp+20h], rsi
sub_1502625A0+217  41 8B F1                                                        mov     esi, r9d
sub_1502625A0+21A
sub_1502625A0+21A                                                  loc_1502627BA:                          ; CODE XREF: sub_1502625A0+224↓j
sub_1502625A0+21A  0F A3 DE                                                        bt      esi, ebx        ; Bit Test
sub_1502625A0+21D  72 1B                                                           jb      short loc_1502627DA ; Jump if Below (CF=1)
sub_1502625A0+21F
sub_1502625A0+21F                                                  loc_1502627BF:                          ; CODE XREF: sub_1502625A0+249↓j
sub_1502625A0+21F  FF C3                                                           inc     ebx             ; Increment by 1
sub_1502625A0+221  83 FB 02                                                        cmp     ebx, 2          ; Compare Two Operands
sub_1502625A0+224  7C F4                                                           jl      short loc_1502627BA ; Jump if Less (SF!=OF)
sub_1502625A0+226  48 8B 5C 24 28                                                  mov     rbx, [rsp+28h]
sub_1502625A0+22B  48 8B 74 24 20                                                  mov     rsi, [rsp+20h]
sub_1502625A0+230  45 0F 28 55 40                                                  movaps  xmm10, xmmword ptr [r13+40h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+235  E9 57 FF FF FF                                                  jmp     loc_150262731   ; Jump
sub_1502625A0+23A                                                  ; ---------------------------------------------------------------------------
sub_1502625A0+23A
sub_1502625A0+23A                                                  loc_1502627DA:                          ; CODE XREF: sub_1502625A0+21D↑j
sub_1502625A0+23A  49 8D 4C DD 00                                                  lea     rcx, [r13+rbx*8+0] ; Load Effective Address
sub_1502625A0+23F  49 8D 54 DD 40                                                  lea     rdx, [r13+rbx*8+40h] ; Load Effective Address
sub_1502625A0+244  E8 B7 30 00 00                                                  call    sub_1502658A0   ; Call Procedure
sub_1502625A0+249  EB D4                                                           jmp     short loc_1502627BF ; Jump
sub_1502625A0+24B                                                  ; ---------------------------------------------------------------------------
sub_1502625A0+24B
sub_1502625A0+24B                                                  loc_1502627EB:                          ; CODE XREF: sub_1502625A0+186↑j
sub_1502625A0+24B  66 0F 6F 3D 0D A5 EB 07                                         movdqa  xmm7, cs:xmmword_15811CD00 ; Move Aligned Double Quadword
sub_1502625A0+253  4C 8D 1D 06 D7 EB 07                                            lea     r11, unk_15811FF00 ; Load Effective Address
sub_1502625A0+25A  66 0F DB F9                                                     pand    xmm7, xmm1      ; Bitwise Logical And
sub_1502625A0+25E  66 0F 73 D7 34                                                  psrlq   xmm7, 34h ; '4' ; Packed Shift Right Logical (Qword)
sub_1502625A0+263  66 41 0F 7E FA                                                  movd    r10d, xmm7      ; Move 32 bits
sub_1502625A0+268  0F 29 44 24 40                                                  movaps  xmmword ptr [rsp+40h], xmm0 ; Move Aligned Four Packed Single-FP
sub_1502625A0+26D  0F 28 C1                                                        movaps  xmm0, xmm1      ; Move Aligned Four Packed Single-FP
sub_1502625A0+270  0F 28 2D 69 D9 EC 07                                            movaps  xmm5, cs:xmmword_158130180 ; Move Aligned Four Packed Single-FP
sub_1502625A0+277  66 0F C5 C7 04                                                  pextrw  eax, xmm7, 4    ; Extract Word
sub_1502625A0+27C  0F 29 5C 24 20                                                  movaps  xmmword ptr [rsp+20h], xmm3 ; Move Aligned Four Packed Single-FP
sub_1502625A0+281  47 8D 04 52                                                     lea     r8d, [r10+r10*2] ; Load Effective Address
sub_1502625A0+285  8D 0C 40                                                        lea     ecx, [rax+rax*2] ; Load Effective Address
sub_1502625A0+288  0F 54 C5                                                        andps   xmm0, xmm5      ; Bitwise Logical And for Single-FP
sub_1502625A0+28B  41 C1 E0 03                                                     shl     r8d, 3          ; Shift Logical Left
sub_1502625A0+28F  66 0F 6F 1D D9 A4 EB 07                                         movdqa  xmm3, cs:xmmword_15811CD10 ; Move Aligned Double Quadword
sub_1502625A0+297  44 0F 29 54 24 30                                               movaps  xmmword ptr [rsp+30h], xmm10 ; Move Aligned Four Packed Single-FP
sub_1502625A0+29D  66 0F DB D9                                                     pand    xmm3, xmm1      ; Bitwise Logical And
sub_1502625A0+2A1  F3 43 0F 7E 34 03                                               movq    xmm6, qword ptr [r11+r8] ; Move 64 bits
sub_1502625A0+2A7  F3 47 0F 7E 54 03 08                                            movq    xmm10, qword ptr [r11+r8+8] ; Move 64 bits
sub_1502625A0+2AE  F3 47 0F 7E 64 03 10                                            movq    xmm12, qword ptr [r11+r8+10h] ; Move 64 bits
sub_1502625A0+2B5  66 0F D4 1D C3 A4 EB 07                                         paddq   xmm3, cs:xmmword_15811CD20 ; Add Packed Quadword Integers
sub_1502625A0+2BD  66 0F C2 C5 00                                                  cmpeqpd xmm0, xmm5      ; Packed Double-FP Compare EQ
sub_1502625A0+2C2  C1 E1 03                                                        shl     ecx, 3          ; Shift Logical Left
sub_1502625A0+2C5  66 0F 6F E3                                                     movdqa  xmm4, xmm3      ; Move Aligned Double Quadword
sub_1502625A0+2C9  66 45 0F 16 64 0B 10                                            movhpd  xmm12, qword ptr [r11+rcx+10h] ; Move High Packed Double-Precision Floating-Point Values
sub_1502625A0+2D0  66 0F 73 D4 20                                                  psrlq   xmm4, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502625A0+2D5  66 44 0F 6F 2D B2 A4 EB 07                                      movdqa  xmm13, cs:xmmword_15811CD30 ; Move Aligned Double Quadword
sub_1502625A0+2DE  41 0F 28 EC                                                     movaps  xmm5, xmm12     ; Move Aligned Four Packed Single-FP
sub_1502625A0+2E2  66 44 0F 50 C8                                                  movmskpd r9d, xmm0      ; Extract Packed Double-Precision Floating-Point Sign Mask
sub_1502625A0+2E7  66 0F 73 D5 20                                                  psrlq   xmm5, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502625A0+2EC  66 41 0F DB DD                                                  pand    xmm3, xmm13     ; Bitwise Logical And
sub_1502625A0+2F1  66 0F 6F C4                                                     movdqa  xmm0, xmm4      ; Move Aligned Double Quadword
sub_1502625A0+2F5  66 45 0F 16 54 0B 08                                            movhpd  xmm10, qword ptr [r11+rcx+8] ; Move High Packed Double-Precision Floating-Point Values
sub_1502625A0+2FC  66 44 0F 6F C3                                                  movdqa  xmm8, xmm3      ; Move Aligned Double Quadword
sub_1502625A0+301  66 0F F4 C5                                                     pmuludq xmm0, xmm5      ; Multiply Packed Unsigned Doubleword Integers
sub_1502625A0+305  45 0F 28 DA                                                     movaps  xmm11, xmm10    ; Move Aligned Four Packed Single-FP
sub_1502625A0+309  66 0F F4 EB                                                     pmuludq xmm5, xmm3      ; Multiply Packed Unsigned Doubleword Integers
sub_1502625A0+30D  66 45 0F DB D5                                                  pand    xmm10, xmm13    ; Bitwise Logical And
sub_1502625A0+312  66 45 0F DB E5                                                  pand    xmm12, xmm13    ; Bitwise Logical And
sub_1502625A0+317  66 45 0F F4 C2                                                  pmuludq xmm8, xmm10     ; Multiply Packed Unsigned Doubleword Integers
sub_1502625A0+31C  66 0F 73 D5 20                                                  psrlq   xmm5, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502625A0+321  66 44 0F F4 E4                                                  pmuludq xmm12, xmm4     ; Multiply Packed Unsigned Doubleword Integers
sub_1502625A0+326  66 44 0F F4 D4                                                  pmuludq xmm10, xmm4     ; Multiply Packed Unsigned Doubleword Integers
sub_1502625A0+32B  66 0F D4 C5                                                     paddq   xmm0, xmm5      ; Add Packed Quadword Integers
sub_1502625A0+32F  66 41 0F 73 D3 20                                               psrlq   xmm11, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502625A0+335  66 44 0F 6F CB                                                  movdqa  xmm9, xmm3      ; Move Aligned Double Quadword
sub_1502625A0+33A  66 41 0F 6F FD                                                  movdqa  xmm7, xmm13     ; Move Aligned Double Quadword
sub_1502625A0+33F  66 45 0F 6F F5                                                  movdqa  xmm14, xmm13    ; Move Aligned Double Quadword
sub_1502625A0+344  66 45 0F F4 CB                                                  pmuludq xmm9, xmm11     ; Multiply Packed Unsigned Doubleword Integers
sub_1502625A0+349  66 41 0F DB F8                                                  pand    xmm7, xmm8      ; Bitwise Logical And
sub_1502625A0+34E  66 44 0F F4 DC                                                  pmuludq xmm11, xmm4     ; Multiply Packed Unsigned Doubleword Integers
sub_1502625A0+353  66 0F D4 F8                                                     paddq   xmm7, xmm0      ; Add Packed Quadword Integers
sub_1502625A0+357  66 41 0F 16 34 0B                                               movhpd  xmm6, qword ptr [r11+rcx] ; Move High Packed Double-Precision Floating-Point Values
sub_1502625A0+35D  4C 8D 1D FC 97 EC 07                                            lea     r11, unk_15812C100 ; Load Effective Address
sub_1502625A0+364  66 41 0F 73 D4 20                                               psrlq   xmm12, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502625A0+36A  66 41 0F 73 D0 20                                               psrlq   xmm8, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502625A0+370  66 44 0F DB F6                                                  pand    xmm14, xmm6     ; Bitwise Logical And
sub_1502625A0+375  66 44 0F 6F FB                                                  movdqa  xmm15, xmm3     ; Move Aligned Double Quadword
sub_1502625A0+37A  66 41 0F 6F ED                                                  movdqa  xmm5, xmm13     ; Move Aligned Double Quadword
sub_1502625A0+37F  66 44 0F D4 E7                                                  paddq   xmm12, xmm7     ; Add Packed Quadword Integers
sub_1502625A0+384  66 45 0F D4 D0                                                  paddq   xmm10, xmm8     ; Add Packed Quadword Integers
sub_1502625A0+389  66 45 0F F4 FE                                                  pmuludq xmm15, xmm14    ; Multiply Packed Unsigned Doubleword Integers
sub_1502625A0+38E  66 41 0F F4 E6                                                  pmuludq xmm4, xmm14     ; Multiply Packed Unsigned Doubleword Integers
sub_1502625A0+393  66 41 0F DB E9                                                  pand    xmm5, xmm9      ; Bitwise Logical And
sub_1502625A0+398  41 0F 28 C4                                                     movaps  xmm0, xmm12     ; Move Aligned Four Packed Single-FP
sub_1502625A0+39C  66 41 0F D4 EA                                                  paddq   xmm5, xmm10     ; Add Packed Quadword Integers
sub_1502625A0+3A1  66 0F 73 D0 20                                                  psrlq   xmm0, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502625A0+3A6  66 41 0F 73 D1 20                                               psrlq   xmm9, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502625A0+3AC  66 0F 73 D6 20                                                  psrlq   xmm6, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502625A0+3B1  66 45 0F 6F C5                                                  movdqa  xmm8, xmm13     ; Move Aligned Double Quadword
sub_1502625A0+3B6  66 0F D4 C5                                                     paddq   xmm0, xmm5      ; Add Packed Quadword Integers
sub_1502625A0+3BA  66 45 0F D4 D9                                                  paddq   xmm11, xmm9     ; Add Packed Quadword Integers
sub_1502625A0+3BF  66 0F F4 DE                                                     pmuludq xmm3, xmm6      ; Multiply Packed Unsigned Doubleword Integers
sub_1502625A0+3C3  66 45 0F DB C7                                                  pand    xmm8, xmm15     ; Bitwise Logical And
sub_1502625A0+3C8  66 44 0F 6F D0                                                  movdqa  xmm10, xmm0     ; Move Aligned Double Quadword
sub_1502625A0+3CD  66 45 0F D4 C3                                                  paddq   xmm8, xmm11     ; Add Packed Quadword Integers
sub_1502625A0+3D2  66 41 0F 73 D2 20                                               psrlq   xmm10, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502625A0+3D8  66 41 0F 73 D7 20                                               psrlq   xmm15, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502625A0+3DE  66 45 0F D4 D0                                                  paddq   xmm10, xmm8     ; Add Packed Quadword Integers
sub_1502625A0+3E3  66 41 0F D4 E7                                                  paddq   xmm4, xmm15     ; Add Packed Quadword Integers
sub_1502625A0+3E8  66 41 0F DB DD                                                  pand    xmm3, xmm13     ; Bitwise Logical And
sub_1502625A0+3ED  66 41 0F 6F FA                                                  movdqa  xmm7, xmm10     ; Move Aligned Double Quadword
sub_1502625A0+3F2  66 0F D4 DC                                                     paddq   xmm3, xmm4      ; Add Packed Quadword Integers
sub_1502625A0+3F6  66 0F 73 D7 20                                                  psrlq   xmm7, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502625A0+3FB  66 45 0F DB D5                                                  pand    xmm10, xmm13    ; Bitwise Logical And
sub_1502625A0+400  66 0F D4 FB                                                     paddq   xmm7, xmm3      ; Add Packed Quadword Integers
sub_1502625A0+404  66 0F 73 F7 20                                                  psllq   xmm7, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_1502625A0+409  66 0F 73 F0 20                                                  psllq   xmm0, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_1502625A0+40E  66 41 0F D4 FA                                                  paddq   xmm7, xmm10     ; Add Packed Quadword Integers
sub_1502625A0+413  66 44 0F 6F 35 84 A3 EB 07                                      movdqa  xmm14, cs:xmmword_15811CD40 ; Move Aligned Double Quadword
sub_1502625A0+41C  66 0F 6F E7                                                     movdqa  xmm4, xmm7      ; Move Aligned Double Quadword
sub_1502625A0+420  66 44 0F 6F 0D 87 A3 EB 07                                      movdqa  xmm9, cs:xmmword_15811CD50 ; Move Aligned Double Quadword
sub_1502625A0+429  66 44 0F DB F1                                                  pand    xmm14, xmm1     ; Bitwise Logical And
sub_1502625A0+42E  44 0F 28 1D 8A A3 EB 07                                         movaps  xmm11, cs:xmmword_15811CD60 ; Move Aligned Four Packed Single-FP
sub_1502625A0+436  66 0F 73 D4 0C                                                  psrlq   xmm4, 0Ch       ; Packed Shift Right Logical (Qword)
sub_1502625A0+43B  66 45 0F EF CE                                                  pxor    xmm9, xmm14     ; Bitwise Logical Exclusive Or
sub_1502625A0+440  41 0F 28 F3                                                     movaps  xmm6, xmm11     ; Move Aligned Four Packed Single-FP
sub_1502625A0+444  66 41 0F EB E1                                                  por     xmm4, xmm9      ; Bitwise Logical Or
sub_1502625A0+449  66 45 0F DB E5                                                  pand    xmm12, xmm13    ; Bitwise Logical And
sub_1502625A0+44E  66 0F 58 F4                                                     addpd   xmm6, xmm4      ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+452  66 41 0F D4 C4                                                  paddq   xmm0, xmm12     ; Add Packed Quadword Integers
sub_1502625A0+457  44 0F 28 E6                                                     movaps  xmm12, xmm6     ; Move Aligned Four Packed Single-FP
sub_1502625A0+45B  66 0F 6F 1D AD A3 EB 07                                         movdqa  xmm3, cs:xmmword_15811CDB0 ; Move Aligned Double Quadword
sub_1502625A0+463  66 0F 6F 2D 85 A3 EB 07                                         movdqa  xmm5, cs:xmmword_15811CD90 ; Move Aligned Double Quadword
sub_1502625A0+46B  66 0F DB DF                                                     pand    xmm3, xmm7      ; Bitwise Logical And
sub_1502625A0+46F  66 44 0F 6F 2D 68 A3 EB 07                                      movdqa  xmm13, cs:xmmword_15811CD80 ; Move Aligned Double Quadword
sub_1502625A0+478  66 0F DB E8                                                     pand    xmm5, xmm0      ; Bitwise Logical And
sub_1502625A0+47C  66 45 0F 5C E3                                                  subpd   xmm12, xmm11    ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+481  66 0F 73 F3 28                                                  psllq   xmm3, 28h ; '(' ; Packed Shift Left Logical (Qword)
sub_1502625A0+486  66 0F 73 D0 18                                                  psrlq   xmm0, 18h       ; Packed Shift Right Logical (Qword)
sub_1502625A0+48B  66 45 0F EF EE                                                  pxor    xmm13, xmm14    ; Bitwise Logical Exclusive Or
sub_1502625A0+490  66 0F EB D8                                                     por     xmm3, xmm0      ; Bitwise Logical Or
sub_1502625A0+494  66 44 0F EF 35 63 A3 EB 07                                      pxor    xmm14, cs:xmmword_15811CDA0 ; Bitwise Logical Exclusive Or
sub_1502625A0+49D  66 0F 73 F5 1C                                                  psllq   xmm5, 1Ch       ; Packed Shift Left Logical (Qword)
sub_1502625A0+4A2  66 41 0F 5C E4                                                  subpd   xmm4, xmm12     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+4A7  66 41 0F EB DE                                                  por     xmm3, xmm14     ; Bitwise Logical Or
sub_1502625A0+4AC  0F 28 C4                                                        movaps  xmm0, xmm4      ; Move Aligned Four Packed Single-FP
sub_1502625A0+4AF  66 41 0F 5C DE                                                  subpd   xmm3, xmm14     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+4B4  66 0F 58 C3                                                     addpd   xmm0, xmm3      ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+4B8  66 0F 5C E0                                                     subpd   xmm4, xmm0      ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+4BC  66 41 0F EB ED                                                  por     xmm5, xmm13     ; Bitwise Logical Or
sub_1502625A0+4C1  66 41 0F 5C ED                                                  subpd   xmm5, xmm13     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+4C6  66 0F 58 DC                                                     addpd   xmm3, xmm4      ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+4CA  0F 28 3D 7F A3 EB 07                                            movaps  xmm7, cs:xmmword_15811CDF0 ; Move Aligned Four Packed Single-FP
sub_1502625A0+4D1  0F 54 F8                                                        andps   xmm7, xmm0      ; Bitwise Logical And for Single-FP
sub_1502625A0+4D4  66 0F 58 EB                                                     addpd   xmm5, xmm3      ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+4D8  66 0F 5C C7                                                     subpd   xmm0, xmm7      ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+4DC  66 0F 59 2D 3C A3 EB 07                                         mulpd   xmm5, cs:xmmword_15811CDC0 ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+4E4  44 0F 28 3D 44 A3 EB 07                                         movaps  xmm15, cs:xmmword_15811CDD0 ; Move Aligned Four Packed Single-FP
sub_1502625A0+4EC  0F 28 25 4D A3 EB 07                                            movaps  xmm4, cs:xmmword_15811CDE0 ; Move Aligned Four Packed Single-FP
sub_1502625A0+4F3  45 0F 28 C7                                                     movaps  xmm8, xmm15     ; Move Aligned Four Packed Single-FP
sub_1502625A0+4F7  66 44 0F 59 C7                                                  mulpd   xmm8, xmm7      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+4FC  66 44 0F 59 F8                                                  mulpd   xmm15, xmm0     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+501  66 0F 59 FC                                                     mulpd   xmm7, xmm4      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+505  66 0F 59 E0                                                     mulpd   xmm4, xmm0      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+509  66 44 0F 58 FF                                                  addpd   xmm15, xmm7     ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+50E  66 0F 58 EC                                                     addpd   xmm5, xmm4      ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+512  66 44 0F 58 FD                                                  addpd   xmm15, xmm5     ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+517  0F 54 35 B2 A2 EB 07                                            andps   xmm6, cs:xmmword_15811CD70 ; Bitwise Logical And for Single-FP
sub_1502625A0+51E  45 0F 28 CF                                                     movaps  xmm9, xmm15     ; Move Aligned Four Packed Single-FP
sub_1502625A0+522  0F 28 2D 47 A3 EB 07                                            movaps  xmm5, cs:xmmword_15811CE10 ; Move Aligned Four Packed Single-FP
sub_1502625A0+529  0F 28 1D 30 A3 EB 07                                            movaps  xmm3, cs:xmmword_15811CE00 ; Move Aligned Four Packed Single-FP
sub_1502625A0+530  0F 28 E5                                                        movaps  xmm4, xmm5      ; Move Aligned Four Packed Single-FP
sub_1502625A0+533  66 0F 7E F2                                                     movd    edx, xmm6       ; Move 32 bits
sub_1502625A0+537  0F 54 D9                                                        andps   xmm3, xmm1      ; Bitwise Logical And for Single-FP
sub_1502625A0+53A  44 0F 28 2D 9E D8 EC 07                                         movaps  xmm13, cs:xmmword_158130380 ; Move Aligned Four Packed Single-FP
sub_1502625A0+542  66 45 0F 58 C8                                                  addpd   xmm9, xmm8      ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+547  66 0F C2 E3 01                                                  cmpltpd xmm4, xmm3      ; Packed Double-FP Compare LT
sub_1502625A0+54C  66 0F C2 DD 02                                                  cmplepd xmm3, xmm5      ; Packed Double-FP Compare LE
sub_1502625A0+551  66 45 0F 5C C1                                                  subpd   xmm8, xmm9      ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+556  C1 E2 05                                                        shl     edx, 5          ; Shift Logical Left
sub_1502625A0+559  0F 54 D9                                                        andps   xmm3, xmm1      ; Bitwise Logical And for Single-FP
sub_1502625A0+55C  F3 41 0F 7E 2C 13                                               movq    xmm5, qword ptr [r11+rdx] ; Move 64 bits
sub_1502625A0+562  44 0F 54 CC                                                     andps   xmm9, xmm4      ; Bitwise Logical And for Single-FP
sub_1502625A0+566  66 0F C5 C6 04                                                  pextrw  eax, xmm6, 4    ; Extract Word
sub_1502625A0+56B  66 45 0F 58 F8                                                  addpd   xmm15, xmm8     ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+570  C1 E0 05                                                        shl     eax, 5          ; Shift Logical Left
sub_1502625A0+573  41 0F 56 D9                                                     orps    xmm3, xmm9      ; Bitwise Logical OR for Single-FP Data
sub_1502625A0+577  F3 45 0F 7E 64 13 08                                            movq    xmm12, qword ptr [r11+rdx+8] ; Move 64 bits
sub_1502625A0+57E  0F 28 FB                                                        movaps  xmm7, xmm3      ; Move Aligned Four Packed Single-FP
sub_1502625A0+581  66 45 0F 16 64 03 08                                            movhpd  xmm12, qword ptr [r11+rax+8] ; Move High Packed Double-Precision Floating-Point Values
sub_1502625A0+588  44 0F 28 DB                                                     movaps  xmm11, xmm3     ; Move Aligned Four Packed Single-FP
sub_1502625A0+58C  66 41 0F 59 FC                                                  mulpd   xmm7, xmm12     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+591  F3 41 0F 7E 44 13 10                                            movq    xmm0, qword ptr [r11+rdx+10h] ; Move 64 bits
sub_1502625A0+598  41 0F 54 E7                                                     andps   xmm4, xmm15     ; Bitwise Logical And for Single-FP
sub_1502625A0+59C  66 41 0F 16 44 03 10                                            movhpd  xmm0, qword ptr [r11+rax+10h] ; Move High Packed Double-Precision Floating-Point Values
sub_1502625A0+5A3  44 0F 28 D0                                                     movaps  xmm10, xmm0     ; Move Aligned Four Packed Single-FP
sub_1502625A0+5A7  0F 28 F0                                                        movaps  xmm6, xmm0      ; Move Aligned Four Packed Single-FP
sub_1502625A0+5AA  66 44 0F 58 D7                                                  addpd   xmm10, xmm7     ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+5AF  66 41 0F 5C F2                                                  subpd   xmm6, xmm10     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+5B4  66 0F 58 FE                                                     addpd   xmm7, xmm6      ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+5B8  0F 28 F3                                                        movaps  xmm6, xmm3      ; Move Aligned Four Packed Single-FP
sub_1502625A0+5BB  41 0F 28 CA                                                     movaps  xmm1, xmm10     ; Move Aligned Four Packed Single-FP
sub_1502625A0+5BF  66 0F 59 F3                                                     mulpd   xmm6, xmm3      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+5C3  66 41 0F 16 2C 03                                               movhpd  xmm5, qword ptr [r11+rax] ; Move High Packed Double-Precision Floating-Point Values
sub_1502625A0+5C9  66 44 0F 59 DD                                                  mulpd   xmm11, xmm5     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+5CE  66 41 0F 58 EC                                                  addpd   xmm5, xmm12     ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+5D3  66 41 0F 58 CB                                                  addpd   xmm1, xmm11     ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+5D8  66 44 0F 59 EE                                                  mulpd   xmm13, xmm6     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+5DD  66 44 0F 5C D1                                                  subpd   xmm10, xmm1     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+5E2  66 44 0F 58 2D B5 D7 EC 07                                      addpd   xmm13, cs:xmmword_158130340 ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+5EB  66 45 0F 58 DA                                                  addpd   xmm11, xmm10    ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+5F0  66 44 0F 59 EE                                                  mulpd   xmm13, xmm6     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+5F5  66 41 0F 58 FB                                                  addpd   xmm7, xmm11     ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+5FA  66 44 0F 59 EB                                                  mulpd   xmm13, xmm3     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+5FF  66 0F 59 D8                                                     mulpd   xmm3, xmm0      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+603  66 44 0F 59 ED                                                  mulpd   xmm13, xmm5     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+608  66 0F 5C EB                                                     subpd   xmm5, xmm3      ; Subtract Packed Double-Precision Floating-Point Values
sub_1502625A0+60C  66 41 0F 58 FD                                                  addpd   xmm7, xmm13     ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+611  66 0F 59 E5                                                     mulpd   xmm4, xmm5      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+615  44 0F 28 25 83 D8 EC 07                                         movaps  xmm12, cs:xmmword_158130440 ; Move Aligned Four Packed Single-FP
sub_1502625A0+61D  66 44 0F 59 E6                                                  mulpd   xmm12, xmm6     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+622  66 44 0F 58 25 35 D8 EC 07                                      addpd   xmm12, cs:xmmword_158130400 ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+62B  66 44 0F 59 E6                                                  mulpd   xmm12, xmm6     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+630  66 44 0F 58 25 E7 D7 EC 07                                      addpd   xmm12, cs:xmmword_1581303C0 ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+639  66 41 0F 59 F4                                                  mulpd   xmm6, xmm12     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+63E  66 0F 59 F0                                                     mulpd   xmm6, xmm0      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502625A0+642  F3 41 0F 7E 5C 13 18                                            movq    xmm3, qword ptr [r11+rdx+18h] ; Move 64 bits
sub_1502625A0+649  0F 28 44 24 20                                                  movaps  xmm0, xmmword ptr [rsp+20h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+64E  44 0F 28 54 24 30                                               movaps  xmm10, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+654  66 0F 58 FE                                                     addpd   xmm7, xmm6      ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+658  66 41 0F 16 5C 03 18                                            movhpd  xmm3, qword ptr [r11+rax+18h] ; Move High Packed Double-Precision Floating-Point Values
sub_1502625A0+65F  66 0F 58 DC                                                     addpd   xmm3, xmm4      ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+663  66 0F 58 FB                                                     addpd   xmm7, xmm3      ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+667  66 0F 58 CF                                                     addpd   xmm1, xmm7      ; Add Packed Double-Precision Floating-Point Values
sub_1502625A0+66B  0F 57 CA                                                        xorps   xmm1, xmm2      ; Bitwise Logical XOR for Single-FP Data
sub_1502625A0+66E  66 44 0F 38 15 D1                                               blendvpd xmm10, xmm1    ; Variable Blend Packed Double Precision Floating-Point Values
sub_1502625A0+674  0F 28 44 24 40                                                  movaps  xmm0, xmmword ptr [rsp+40h] ; Move Aligned Four Packed Single-FP
sub_1502625A0+679  E9 0E FB FF FF                                                  jmp     loc_15026272C   ; Jump
sub_1502625A0+679                                                  sub_1502625A0   endp
sub_1502625A0+679
sub_1502625A0+679                                                  ; ---------------------------------------------------------------------------
.text:0000000150262C1E CC CC                                                           align 20h
sub_150262C20
sub_150262C20                                                      ; =============== S U B R O U T I N E =======================================
sub_150262C20
sub_150262C20
sub_150262C20                                                      sub_150262C20   proc near               ; CODE XREF: sub_150260870+D↑j
sub_150262C20
sub_150262C20                                                      var_158         = xmmword ptr -158h
sub_150262C20                                                      var_109         = byte ptr -109h
sub_150262C20                                                      var_B8          = xmmword ptr -0B8h
sub_150262C20                                                      var_A8          = xmmword ptr -0A8h
sub_150262C20                                                      var_98          = xmmword ptr -98h
sub_150262C20                                                      var_88          = xmmword ptr -88h
sub_150262C20                                                      var_78          = xmmword ptr -78h
sub_150262C20                                                      var_68          = xmmword ptr -68h
sub_150262C20                                                      var_58          = xmmword ptr -58h
sub_150262C20                                                      var_48          = xmmword ptr -48h
sub_150262C20                                                      var_38          = xmmword ptr -38h
sub_150262C20                                                      var_28          = xmmword ptr -28h
sub_150262C20                                                      var_18          = qword ptr -18h
sub_150262C20                                                      var_10          = qword ptr -10h
sub_150262C20
sub_150262C20      48 81 EC 78 01 00 00                                            sub     rsp, 178h       ; Integer Subtraction
sub_150262C20+7    0F 28 D0                                                        movaps  xmm2, xmm0      ; Move Aligned Four Packed Single-FP
sub_150262C20+A    44 0F 29 BC 24 C0 00 00 00                                      movaps  xmmword ptr [rsp+0C0h], xmm15 ; Move Aligned Four Packed Single-FP
sub_150262C20+13   45 33 C9                                                        xor     r9d, r9d        ; Logical Exclusive OR
sub_150262C20+16   44 0F 29 B4 24 D0 00 00 00                                      movaps  xmmword ptr [rsp+0D0h], xmm14 ; Move Aligned Four Packed Single-FP
sub_150262C20+1F   44 0F 29 AC 24 40 01 00 00                                      movaps  xmmword ptr [rsp+140h], xmm13 ; Move Aligned Four Packed Single-FP
sub_150262C20+28   44 0F 29 A4 24 E0 00 00 00                                      movaps  xmmword ptr [rsp+0E0h], xmm12 ; Move Aligned Four Packed Single-FP
sub_150262C20+31   44 0F 29 9C 24 F0 00 00 00                                      movaps  xmmword ptr [rsp+0F0h], xmm11 ; Move Aligned Four Packed Single-FP
sub_150262C20+3A   44 0F 29 94 24 00 01 00 00                                      movaps  xmmword ptr [rsp+100h], xmm10 ; Move Aligned Four Packed Single-FP
sub_150262C20+43   44 0F 29 8C 24 10 01 00 00                                      movaps  xmmword ptr [rsp+110h], xmm9 ; Move Aligned Four Packed Single-FP
sub_150262C20+4C   44 0F 29 84 24 20 01 00 00                                      movaps  xmmword ptr [rsp+120h], xmm8 ; Move Aligned Four Packed Single-FP
sub_150262C20+55   0F 29 BC 24 30 01 00 00                                         movaps  xmmword ptr [rsp+130h], xmm7 ; Move Aligned Four Packed Single-FP
sub_150262C20+5D   0F 29 B4 24 50 01 00 00                                         movaps  xmmword ptr [rsp+150h], xmm6 ; Move Aligned Four Packed Single-FP
sub_150262C20+65   4C 89 AC 24 60 01 00 00                                         mov     [rsp+160h], r13
sub_150262C20+6D   4C 8D 6C 24 6F                                                  lea     r13, [rsp+6Fh]  ; Load Effective Address
sub_150262C20+72   0F 10 25 E7 E3 ED 07                                            movups  xmm4, cs:xmmword_158141080 ; Move Unaligned Four Packed Single-FP
sub_150262C20+79   49 83 E5 C0                                                     and     r13, 0FFFFFFFFFFFFFFC0h ; Logical AND
sub_150262C20+7D   0F 10 1D 5C E4 ED 07                                            movups  xmm3, cs:xmmword_158141100 ; Move Unaligned Four Packed Single-FP
sub_150262C20+84   0F 28 FC                                                        movaps  xmm7, xmm4      ; Move Aligned Four Packed Single-FP
sub_150262C20+87   0F 54 FA                                                        andps   xmm7, xmm2      ; Bitwise Logical And for Single-FP
sub_150262C20+8A   0F 28 EB                                                        movaps  xmm5, xmm3      ; Move Aligned Four Packed Single-FP
sub_150262C20+8D   66 0F 5C EF                                                     subpd   xmm5, xmm7      ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+91   44 0F 10 25 87 E4 ED 07                                         movups  xmm12, cs:xmmword_158141140 ; Move Unaligned Four Packed Single-FP
sub_150262C20+99   0F 54 E5                                                        andps   xmm4, xmm5      ; Bitwise Logical And for Single-FP
sub_150262C20+9C   66 44 0F 59 E5                                                  mulpd   xmm12, xmm5     ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+A1   66 0F C2 DD 00                                                  cmpeqpd xmm3, xmm5      ; Packed Double-FP Compare EQ
sub_150262C20+A6   0F 10 05 B3 E4 ED 07                                            movups  xmm0, cs:xmmword_158141180 ; Move Unaligned Four Packed Single-FP
sub_150262C20+AD   0F 28 CC                                                        movaps  xmm1, xmm4      ; Move Aligned Four Packed Single-FP
sub_150262C20+B0   66 44 0F 58 E0                                                  addpd   xmm12, xmm0     ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+B5   66 0F C2 0D E2 E3 ED 07 06                                      cmpnlepd xmm1, cs:xmmword_1581410C0 ; Packed Double-FP Compare NOT LE
sub_150262C20+BE   41 0F 28 F4                                                     movaps  xmm6, xmm12     ; Move Aligned Four Packed Single-FP
sub_150262C20+C2   66 41 0F 73 F4 3F                                               psllq   xmm12, 3Fh ; '?' ; Packed Shift Left Logical (Qword)
sub_150262C20+C8   66 0F 5C F0                                                     subpd   xmm6, xmm0      ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+CC   66 0F 50 C1                                                     movmskpd eax, xmm1      ; Extract Packed Double-Precision Floating-Point Sign Mask
sub_150262C20+D0   44 0F 10 15 C8 E4 ED 07                                         movups  xmm10, cs:xmmword_1581411C0 ; Move Unaligned Four Packed Single-FP
sub_150262C20+D8   0F 28 C3                                                        movaps  xmm0, xmm3      ; Move Aligned Four Packed Single-FP
sub_150262C20+DB   66 44 0F 5C D6                                                  subpd   xmm10, xmm6     ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+E0   44 0F 10 3D F8 E4 ED 07                                         movups  xmm15, cs:xmmword_158141200 ; Move Unaligned Four Packed Single-FP
sub_150262C20+E8   66 45 0F 59 FA                                                  mulpd   xmm15, xmm10    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+ED   44 0F 10 05 2B E5 ED 07                                         movups  xmm8, cs:xmmword_158141240 ; Move Unaligned Four Packed Single-FP
sub_150262C20+F5   66 45 0F 59 C2                                                  mulpd   xmm8, xmm10     ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+FA   66 44 0F 5C FF                                                  subpd   xmm15, xmm7     ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+FF   44 0F 10 0D 59 E5 ED 07                                         movups  xmm9, cs:xmmword_158141280 ; Move Unaligned Four Packed Single-FP
sub_150262C20+107  66 45 0F 59 CA                                                  mulpd   xmm9, xmm10     ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+10C  66 45 0F 58 F8                                                  addpd   xmm15, xmm8     ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+111  44 0F 10 1D 87 E5 ED 07                                         movups  xmm11, cs:xmmword_1581412C0 ; Move Unaligned Four Packed Single-FP
sub_150262C20+119  66 45 0F 59 DA                                                  mulpd   xmm11, xmm10    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+11E  66 45 0F 58 F9                                                  addpd   xmm15, xmm9     ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+123  66 45 0F 58 FB                                                  addpd   xmm15, xmm11    ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+128  45 0F 28 EF                                                     movaps  xmm13, xmm15    ; Move Aligned Four Packed Single-FP
sub_150262C20+12C  66 45 0F 59 EF                                                  mulpd   xmm13, xmm15    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+131  44 0F 10 35 27 E8 ED 07                                         movups  xmm14, cs:xmmword_158141580 ; Move Unaligned Four Packed Single-FP
sub_150262C20+139  66 45 0F EF FC                                                  pxor    xmm15, xmm12    ; Bitwise Logical Exclusive Or
sub_150262C20+13E  66 45 0F 59 F5                                                  mulpd   xmm14, xmm13    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+143  66 44 0F 58 35 D4 E7 ED 07                                      addpd   xmm14, cs:xmmword_158141540 ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+14C  66 45 0F 59 F5                                                  mulpd   xmm14, xmm13    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+151  66 44 0F 58 35 86 E7 ED 07                                      addpd   xmm14, cs:xmmword_158141500 ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+15A  66 45 0F 59 F5                                                  mulpd   xmm14, xmm13    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+15F  66 44 0F 58 35 38 E7 ED 07                                      addpd   xmm14, cs:xmmword_1581414C0 ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+168  66 45 0F 59 F5                                                  mulpd   xmm14, xmm13    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+16D  66 44 0F 58 35 EA E6 ED 07                                      addpd   xmm14, cs:xmmword_158141480 ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+176  66 45 0F 59 F5                                                  mulpd   xmm14, xmm13    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+17B  66 44 0F 58 35 9C E6 ED 07                                      addpd   xmm14, cs:xmmword_158141440 ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+184  66 45 0F 59 F5                                                  mulpd   xmm14, xmm13    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+189  66 45 0F 59 EF                                                  mulpd   xmm13, xmm15    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+18E  66 44 0F 58 35 09 E6 ED 07                                      addpd   xmm14, cs:xmmword_1581413C0 ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+197  66 45 0F 59 F5                                                  mulpd   xmm14, xmm13    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+19C  66 45 0F 58 FE                                                  addpd   xmm15, xmm14    ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+1A1  0F 10 2D F8 E7 ED 07                                            movups  xmm5, cs:xmmword_1581415C0 ; Move Unaligned Four Packed Single-FP
sub_150262C20+1A8  41 0F 55 C7                                                     andnps  xmm0, xmm15     ; Bitwise Logical And Not for Single-FP
sub_150262C20+1AC  0F 54 EB                                                        andps   xmm5, xmm3      ; Bitwise Logical And for Single-FP
sub_150262C20+1AF  4C 89 AC 24 68 01 00 00                                         mov     [rsp+168h], r13
sub_150262C20+1B7  0F 56 C5                                                        orps    xmm0, xmm5      ; Bitwise Logical OR for Single-FP Data
sub_150262C20+1BA  85 C0                                                           test    eax, eax        ; Logical Compare
sub_150262C20+1BC  0F 85 BB 00 00 00                                               jnz     loc_150262E9D   ; Jump if Not Zero (ZF=0)
sub_150262C20+1C2
sub_150262C20+1C2                                                  loc_150262DE2:                          ; CODE XREF: sub_150262C20+6A0↓j
sub_150262C20+1C2  45 85 C9                                                        test    r9d, r9d        ; Logical Compare
sub_150262C20+1C5  75 68                                                           jnz     short loc_150262E4F ; Jump if Not Zero (ZF=0)
sub_150262C20+1C7
sub_150262C20+1C7                                                  loc_150262DE7:                          ; CODE XREF: sub_150262C20+239↓j
sub_150262C20+1C7                                                                                          ; sub_150262C20+267↓j
sub_150262C20+1C7  0F 10 B4 24 50 01 00 00                                         movups  xmm6, xmmword ptr [rsp+150h] ; Move Unaligned Four Packed Single-FP
sub_150262C20+1CF  0F 10 BC 24 30 01 00 00                                         movups  xmm7, xmmword ptr [rsp+130h] ; Move Unaligned Four Packed Single-FP
sub_150262C20+1D7  44 0F 10 84 24 20 01 00 00                                      movups  xmm8, xmmword ptr [rsp+120h] ; Move Unaligned Four Packed Single-FP
sub_150262C20+1E0  44 0F 10 8C 24 10 01 00 00                                      movups  xmm9, xmmword ptr [rsp+110h] ; Move Unaligned Four Packed Single-FP
sub_150262C20+1E9  44 0F 10 94 24 00 01 00 00                                      movups  xmm10, xmmword ptr [rsp+100h] ; Move Unaligned Four Packed Single-FP
sub_150262C20+1F2  44 0F 10 9C 24 F0 00 00 00                                      movups  xmm11, xmmword ptr [rsp+0F0h] ; Move Unaligned Four Packed Single-FP
sub_150262C20+1FB  44 0F 10 A4 24 E0 00 00 00                                      movups  xmm12, xmmword ptr [rsp+0E0h] ; Move Unaligned Four Packed Single-FP
sub_150262C20+204  44 0F 10 AC 24 40 01 00 00                                      movups  xmm13, xmmword ptr [rsp+140h] ; Move Unaligned Four Packed Single-FP
sub_150262C20+20D  44 0F 10 B4 24 D0 00 00 00                                      movups  xmm14, xmmword ptr [rsp+0D0h] ; Move Unaligned Four Packed Single-FP
sub_150262C20+216  44 0F 10 BC 24 C0 00 00 00                                      movups  xmm15, xmmword ptr [rsp+0C0h] ; Move Unaligned Four Packed Single-FP
sub_150262C20+21F  4C 8B AC 24 60 01 00 00                                         mov     r13, [rsp+160h]
sub_150262C20+227  48 81 C4 78 01 00 00                                            add     rsp, 178h       ; Add
sub_150262C20+22E  C3                                                              retn                    ; Return Near from Procedure
sub_150262C20+22F                                                  ; ---------------------------------------------------------------------------
sub_150262C20+22F
sub_150262C20+22F                                                  loc_150262E4F:                          ; CODE XREF: sub_150262C20+1C5↑j
sub_150262C20+22F  41 0F 11 55 00                                                  movups  xmmword ptr [r13+0], xmm2 ; Move Unaligned Four Packed Single-FP
sub_150262C20+234  41 0F 11 45 40                                                  movups  xmmword ptr [r13+40h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_150262C20+239  74 8C                                                           jz      short loc_150262DE7 ; Jump if Zero (ZF=1)
sub_150262C20+23B  33 C0                                                           xor     eax, eax        ; Logical Exclusive OR
sub_150262C20+23D  48 89 5C 24 28                                                  mov     [rsp+28h], rbx
sub_150262C20+242  8B D8                                                           mov     ebx, eax
sub_150262C20+244  48 89 74 24 20                                                  mov     [rsp+20h], rsi
sub_150262C20+249  41 8B F1                                                        mov     esi, r9d
sub_150262C20+24C
sub_150262C20+24C                                                  loc_150262E6C:                          ; CODE XREF: sub_150262C20+256↓j
sub_150262C20+24C  0F A3 DE                                                        bt      esi, ebx        ; Bit Test
sub_150262C20+24F  72 1B                                                           jb      short loc_150262E8C ; Jump if Below (CF=1)
sub_150262C20+251
sub_150262C20+251                                                  loc_150262E71:                          ; CODE XREF: sub_150262C20+27B↓j
sub_150262C20+251  FF C3                                                           inc     ebx             ; Increment by 1
sub_150262C20+253  83 FB 02                                                        cmp     ebx, 2          ; Compare Two Operands
sub_150262C20+256  7C F4                                                           jl      short loc_150262E6C ; Jump if Less (SF!=OF)
sub_150262C20+258  48 8B 5C 24 28                                                  mov     rbx, [rsp+28h]
sub_150262C20+25D  48 8B 74 24 20                                                  mov     rsi, [rsp+20h]
sub_150262C20+262  41 0F 10 45 40                                                  movups  xmm0, xmmword ptr [r13+40h] ; Move Unaligned Four Packed Single-FP
sub_150262C20+267  E9 5B FF FF FF                                                  jmp     loc_150262DE7   ; Jump
sub_150262C20+26C                                                  ; ---------------------------------------------------------------------------
sub_150262C20+26C
sub_150262C20+26C                                                  loc_150262E8C:                          ; CODE XREF: sub_150262C20+24F↑j
sub_150262C20+26C  49 8D 4C DD 00                                                  lea     rcx, [r13+rbx*8+0] ; Load Effective Address
sub_150262C20+271  49 8D 54 DD 40                                                  lea     rdx, [r13+rbx*8+40h] ; Load Effective Address
sub_150262C20+276  E8 75 2A 00 00                                                  call    sub_150265910   ; Call Procedure
sub_150262C20+27B  EB D4                                                           jmp     short loc_150262E71 ; Jump
sub_150262C20+27D                                                  ; ---------------------------------------------------------------------------
sub_150262C20+27D
sub_150262C20+27D                                                  loc_150262E9D:                          ; CODE XREF: sub_150262C20+1BC↑j
sub_150262C20+27D  0F 11 44 24 20                                                  movups  xmmword ptr [rsp+20h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_150262C20+282  4C 8D 1D 57 DC EC 07                                            lea     r11, unk_158130B00 ; Load Effective Address
sub_150262C20+289  F3 0F 6F 05 4F A0 EB 07                                         movdqu  xmm0, cs:xmmword_15811CF00 ; Move Unaligned Double Quadword
sub_150262C20+291  66 0F DB C2                                                     pand    xmm0, xmm2      ; Bitwise Logical And
sub_150262C20+295  66 0F 73 D0 34                                                  psrlq   xmm0, 34h ; '4' ; Packed Shift Right Logical (Qword)
sub_150262C20+29A  66 41 0F 7E C2                                                  movd    r10d, xmm0      ; Move 32 bits
sub_150262C20+29F  0F 10 3D BA DE ED 07                                            movups  xmm7, cs:xmmword_158140D80 ; Move Unaligned Four Packed Single-FP
sub_150262C20+2A6  0F 54 E7                                                        andps   xmm4, xmm7      ; Bitwise Logical And for Single-FP
sub_150262C20+2A9  66 0F C5 C0 04                                                  pextrw  eax, xmm0, 4    ; Extract Word
sub_150262C20+2AE  66 0F C2 E7 00                                                  cmpeqpd xmm4, xmm7      ; Packed Double-FP Compare EQ
sub_150262C20+2B3  F3 0F 6F 35 35 A0 EB 07                                         movdqu  xmm6, cs:xmmword_15811CF10 ; Move Unaligned Double Quadword
sub_150262C20+2BB  47 8D 04 52                                                     lea     r8d, [r10+r10*2] ; Load Effective Address
sub_150262C20+2BF  8D 0C 40                                                        lea     ecx, [rax+rax*2] ; Load Effective Address
sub_150262C20+2C2  66 0F DB F2                                                     pand    xmm6, xmm2      ; Bitwise Logical And
sub_150262C20+2C6  41 C1 E0 03                                                     shl     r8d, 3          ; Shift Logical Left
sub_150262C20+2CA  F3 47 0F 7E 04 03                                               movq    xmm8, qword ptr [r11+r8] ; Move 64 bits
sub_150262C20+2D0  F3 47 0F 7E 64 03 08                                            movq    xmm12, qword ptr [r11+r8+8] ; Move 64 bits
sub_150262C20+2D7  F3 47 0F 7E 74 03 10                                            movq    xmm14, qword ptr [r11+r8+10h] ; Move 64 bits
sub_150262C20+2DE  66 0F D4 35 1A A0 EB 07                                         paddq   xmm6, cs:xmmword_15811CF20 ; Add Packed Quadword Integers
sub_150262C20+2E6  66 44 0F 50 CC                                                  movmskpd r9d, xmm4      ; Extract Packed Double-Precision Floating-Point Sign Mask
sub_150262C20+2EB  66 0F 6F E6                                                     movdqa  xmm4, xmm6      ; Move Aligned Double Quadword
sub_150262C20+2EF  F3 44 0F 6F 3D 18 A0 EB 07                                      movdqu  xmm15, cs:xmmword_15811CF30 ; Move Unaligned Double Quadword
sub_150262C20+2F8  66 0F 73 D4 20                                                  psrlq   xmm4, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150262C20+2FD  C1 E1 03                                                        shl     ecx, 3          ; Shift Logical Left
sub_150262C20+300  66 41 0F DB F7                                                  pand    xmm6, xmm15     ; Bitwise Logical And
sub_150262C20+305  66 45 0F 16 74 0B 10                                            movhpd  xmm14, qword ptr [r11+rcx+10h] ; Move High Packed Double-Precision Floating-Point Values
sub_150262C20+30C  66 0F 6F FC                                                     movdqa  xmm7, xmm4      ; Move Aligned Double Quadword
sub_150262C20+310  45 0F 28 CE                                                     movaps  xmm9, xmm14     ; Move Aligned Four Packed Single-FP
sub_150262C20+314  66 44 0F 6F D6                                                  movdqa  xmm10, xmm6     ; Move Aligned Double Quadword
sub_150262C20+319  66 41 0F 73 D1 20                                               psrlq   xmm9, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150262C20+31F  66 45 0F DB F7                                                  pand    xmm14, xmm15    ; Bitwise Logical And
sub_150262C20+324  66 45 0F 16 64 0B 08                                            movhpd  xmm12, qword ptr [r11+rcx+8] ; Move High Packed Double-Precision Floating-Point Values
sub_150262C20+32B  66 44 0F 6F DE                                                  movdqa  xmm11, xmm6     ; Move Aligned Double Quadword
sub_150262C20+330  66 41 0F F4 F9                                                  pmuludq xmm7, xmm9      ; Multiply Packed Unsigned Doubleword Integers
sub_150262C20+335  45 0F 28 EC                                                     movaps  xmm13, xmm12    ; Move Aligned Four Packed Single-FP
sub_150262C20+339  66 44 0F F4 CE                                                  pmuludq xmm9, xmm6      ; Multiply Packed Unsigned Doubleword Integers
sub_150262C20+33E  66 44 0F F4 F4                                                  pmuludq xmm14, xmm4     ; Multiply Packed Unsigned Doubleword Integers
sub_150262C20+343  66 45 0F DB E7                                                  pand    xmm12, xmm15    ; Bitwise Logical And
sub_150262C20+348  66 41 0F 73 D1 20                                               psrlq   xmm9, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150262C20+34E  66 45 0F F4 D4                                                  pmuludq xmm10, xmm12    ; Multiply Packed Unsigned Doubleword Integers
sub_150262C20+353  66 41 0F 73 D5 20                                               psrlq   xmm13, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150262C20+359  66 44 0F F4 E4                                                  pmuludq xmm12, xmm4     ; Multiply Packed Unsigned Doubleword Integers
sub_150262C20+35E  66 45 0F F4 DD                                                  pmuludq xmm11, xmm13    ; Multiply Packed Unsigned Doubleword Integers
sub_150262C20+363  66 44 0F F4 EC                                                  pmuludq xmm13, xmm4     ; Multiply Packed Unsigned Doubleword Integers
sub_150262C20+368  66 41 0F D4 F9                                                  paddq   xmm7, xmm9      ; Add Packed Quadword Integers
sub_150262C20+36D  66 41 0F 6F C7                                                  movdqa  xmm0, xmm15     ; Move Aligned Double Quadword
sub_150262C20+372  66 41 0F 6F DF                                                  movdqa  xmm3, xmm15     ; Move Aligned Double Quadword
sub_150262C20+377  66 41 0F DB C2                                                  pand    xmm0, xmm10     ; Bitwise Logical And
sub_150262C20+37C  66 41 0F 73 D6 20                                               psrlq   xmm14, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150262C20+382  66 0F D4 C7                                                     paddq   xmm0, xmm7      ; Add Packed Quadword Integers
sub_150262C20+386  66 45 0F 16 04 0B                                               movhpd  xmm8, qword ptr [r11+rcx] ; Move High Packed Double-Precision Floating-Point Values
sub_150262C20+38C  66 41 0F 73 D2 20                                               psrlq   xmm10, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150262C20+392  66 41 0F DB D8                                                  pand    xmm3, xmm8      ; Bitwise Logical And
sub_150262C20+397  66 0F 6F EE                                                     movdqa  xmm5, xmm6      ; Move Aligned Double Quadword
sub_150262C20+39B  66 44 0F D4 F0                                                  paddq   xmm14, xmm0     ; Add Packed Quadword Integers
sub_150262C20+3A0  66 45 0F D4 E2                                                  paddq   xmm12, xmm10    ; Add Packed Quadword Integers
sub_150262C20+3A5  66 0F F4 EB                                                     pmuludq xmm5, xmm3      ; Multiply Packed Unsigned Doubleword Integers
sub_150262C20+3A9  66 0F F4 E3                                                     pmuludq xmm4, xmm3      ; Multiply Packed Unsigned Doubleword Integers
sub_150262C20+3AD  66 45 0F 6F CF                                                  movdqa  xmm9, xmm15     ; Move Aligned Double Quadword
sub_150262C20+3B2  41 0F 28 C6                                                     movaps  xmm0, xmm14     ; Move Aligned Four Packed Single-FP
sub_150262C20+3B6  66 45 0F DB CB                                                  pand    xmm9, xmm11     ; Bitwise Logical And
sub_150262C20+3BB  66 0F 73 D0 20                                                  psrlq   xmm0, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150262C20+3C0  66 45 0F D4 CC                                                  paddq   xmm9, xmm12     ; Add Packed Quadword Integers
sub_150262C20+3C5  66 41 0F 73 D3 20                                               psrlq   xmm11, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150262C20+3CB  66 41 0F 73 D0 20                                               psrlq   xmm8, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150262C20+3D1  66 41 0F D4 C1                                                  paddq   xmm0, xmm9      ; Add Packed Quadword Integers
sub_150262C20+3D6  66 45 0F D4 EB                                                  paddq   xmm13, xmm11    ; Add Packed Quadword Integers
sub_150262C20+3DB  66 41 0F F4 F0                                                  pmuludq xmm6, xmm8      ; Multiply Packed Unsigned Doubleword Integers
sub_150262C20+3E0  66 45 0F 6F D7                                                  movdqa  xmm10, xmm15    ; Move Aligned Double Quadword
sub_150262C20+3E5  66 44 0F 6F E0                                                  movdqa  xmm12, xmm0     ; Move Aligned Double Quadword
sub_150262C20+3EA  66 44 0F DB D5                                                  pand    xmm10, xmm5     ; Bitwise Logical And
sub_150262C20+3EF  66 41 0F 73 D4 20                                               psrlq   xmm12, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150262C20+3F5  66 45 0F D4 D5                                                  paddq   xmm10, xmm13    ; Add Packed Quadword Integers
sub_150262C20+3FA  66 0F 73 D5 20                                                  psrlq   xmm5, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150262C20+3FF  66 41 0F DB F7                                                  pand    xmm6, xmm15     ; Bitwise Logical And
sub_150262C20+404  66 45 0F D4 E2                                                  paddq   xmm12, xmm10    ; Add Packed Quadword Integers
sub_150262C20+409  66 0F D4 E5                                                     paddq   xmm4, xmm5      ; Add Packed Quadword Integers
sub_150262C20+40D  66 45 0F 6F CC                                                  movdqa  xmm9, xmm12     ; Move Aligned Double Quadword
sub_150262C20+412  66 45 0F DB E7                                                  pand    xmm12, xmm15    ; Bitwise Logical And
sub_150262C20+417  66 0F D4 F4                                                     paddq   xmm6, xmm4      ; Add Packed Quadword Integers
sub_150262C20+41B  66 41 0F 73 D1 20                                               psrlq   xmm9, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_150262C20+421  66 0F 73 F0 20                                                  psllq   xmm0, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150262C20+426  66 44 0F D4 CE                                                  paddq   xmm9, xmm6      ; Add Packed Quadword Integers
sub_150262C20+42B  66 41 0F 73 F1 20                                               psllq   xmm9, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_150262C20+431  66 45 0F DB F7                                                  pand    xmm14, xmm15    ; Bitwise Logical And
sub_150262C20+436  66 45 0F D4 CC                                                  paddq   xmm9, xmm12     ; Add Packed Quadword Integers
sub_150262C20+43B  66 41 0F D4 C6                                                  paddq   xmm0, xmm14     ; Add Packed Quadword Integers
sub_150262C20+440  F3 0F 6F 2D D8 9E EB 07                                         movdqu  xmm5, cs:xmmword_15811CF40 ; Move Unaligned Double Quadword
sub_150262C20+448  66 41 0F 6F E1                                                  movdqa  xmm4, xmm9      ; Move Aligned Double Quadword
sub_150262C20+44D  F3 44 0F 6F 1D DA 9E EB 07                                      movdqu  xmm11, cs:xmmword_15811CF50 ; Move Unaligned Double Quadword
sub_150262C20+456  66 0F DB EA                                                     pand    xmm5, xmm2      ; Bitwise Logical And
sub_150262C20+45A  44 0F 10 2D DE 9E EB 07                                         movups  xmm13, cs:xmmword_15811CF60 ; Move Unaligned Four Packed Single-FP
sub_150262C20+462  66 0F 73 D4 0C                                                  psrlq   xmm4, 0Ch       ; Packed Shift Right Logical (Qword)
sub_150262C20+467  66 44 0F EF DD                                                  pxor    xmm11, xmm5     ; Bitwise Logical Exclusive Or
sub_150262C20+46C  45 0F 28 C5                                                     movaps  xmm8, xmm13     ; Move Aligned Four Packed Single-FP
sub_150262C20+470  66 41 0F EB E3                                                  por     xmm4, xmm11     ; Bitwise Logical Or
sub_150262C20+475  4C 8D 1D 64 9C ED 07                                            lea     r11, unk_15813CD00 ; Load Effective Address
sub_150262C20+47C  F3 0F 6F 35 0C 9F EB 07                                         movdqu  xmm6, cs:xmmword_15811CFB0 ; Move Unaligned Double Quadword
sub_150262C20+484  F3 0F 6F 3D E4 9E EB 07                                         movdqu  xmm7, cs:xmmword_15811CF90 ; Move Unaligned Double Quadword
sub_150262C20+48C  66 41 0F DB F1                                                  pand    xmm6, xmm9      ; Bitwise Logical And
sub_150262C20+491  F3 0F 6F 1D C7 9E EB 07                                         movdqu  xmm3, cs:xmmword_15811CF80 ; Move Unaligned Double Quadword
sub_150262C20+499  66 0F DB F8                                                     pand    xmm7, xmm0      ; Bitwise Logical And
sub_150262C20+49D  66 44 0F 58 C4                                                  addpd   xmm8, xmm4      ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+4A2  45 0F 28 F0                                                     movaps  xmm14, xmm8     ; Move Aligned Four Packed Single-FP
sub_150262C20+4A6  66 0F 73 F6 28                                                  psllq   xmm6, 28h ; '(' ; Packed Shift Left Logical (Qword)
sub_150262C20+4AB  66 45 0F 5C F5                                                  subpd   xmm14, xmm13    ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+4B0  66 0F 73 D0 18                                                  psrlq   xmm0, 18h       ; Packed Shift Right Logical (Qword)
sub_150262C20+4B5  66 0F EF DD                                                     pxor    xmm3, xmm5      ; Bitwise Logical Exclusive Or
sub_150262C20+4B9  66 0F EF 2D BF 9E EB 07                                         pxor    xmm5, cs:xmmword_15811CFA0 ; Bitwise Logical Exclusive Or
sub_150262C20+4C1  66 0F EB F0                                                     por     xmm6, xmm0      ; Bitwise Logical Or
sub_150262C20+4C5  66 41 0F 5C E6                                                  subpd   xmm4, xmm14     ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+4CA  66 0F EB F5                                                     por     xmm6, xmm5      ; Bitwise Logical Or
sub_150262C20+4CE  0F 28 C4                                                        movaps  xmm0, xmm4      ; Move Aligned Four Packed Single-FP
sub_150262C20+4D1  66 0F 5C F5                                                     subpd   xmm6, xmm5      ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+4D5  66 0F 58 C6                                                     addpd   xmm0, xmm6      ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+4D9  66 0F 5C E0                                                     subpd   xmm4, xmm0      ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+4DD  66 0F 73 F7 1C                                                  psllq   xmm7, 1Ch       ; Packed Shift Left Logical (Qword)
sub_150262C20+4E2  66 0F EB FB                                                     por     xmm7, xmm3      ; Bitwise Logical Or
sub_150262C20+4E6  66 0F 5C FB                                                     subpd   xmm7, xmm3      ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+4EA  66 0F 58 F4                                                     addpd   xmm6, xmm4      ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+4EE  44 0F 10 0D DA 9E EB 07                                         movups  xmm9, cs:xmmword_15811CFF0 ; Move Unaligned Four Packed Single-FP
sub_150262C20+4F6  44 0F 54 C8                                                     andps   xmm9, xmm0      ; Bitwise Logical And for Single-FP
sub_150262C20+4FA  66 0F 58 FE                                                     addpd   xmm7, xmm6      ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+4FE  66 41 0F 5C C1                                                  subpd   xmm0, xmm9      ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+503  66 0F 59 3D 95 9E EB 07                                         mulpd   xmm7, cs:xmmword_15811CFC0 ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+50B  44 0F 10 3D 9D 9E EB 07                                         movups  xmm15, cs:xmmword_15811CFD0 ; Move Unaligned Four Packed Single-FP
sub_150262C20+513  0F 10 1D A6 9E EB 07                                            movups  xmm3, cs:xmmword_15811CFE0 ; Move Unaligned Four Packed Single-FP
sub_150262C20+51A  45 0F 28 D7                                                     movaps  xmm10, xmm15    ; Move Aligned Four Packed Single-FP
sub_150262C20+51E  66 45 0F 59 D1                                                  mulpd   xmm10, xmm9     ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+523  66 44 0F 59 F8                                                  mulpd   xmm15, xmm0     ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+528  66 44 0F 59 CB                                                  mulpd   xmm9, xmm3      ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+52D  66 0F 59 D8                                                     mulpd   xmm3, xmm0      ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+531  66 45 0F 58 F9                                                  addpd   xmm15, xmm9     ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+536  66 0F 58 FB                                                     addpd   xmm7, xmm3      ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+53A  66 44 0F 58 FF                                                  addpd   xmm15, xmm7     ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+53F  44 0F 54 05 09 9E EB 07                                         andps   xmm8, cs:xmmword_15811CF70 ; Bitwise Logical And for Single-FP
sub_150262C20+547  41 0F 28 FF                                                     movaps  xmm7, xmm15     ; Move Aligned Four Packed Single-FP
sub_150262C20+54B  0F 10 25 9E 9E EB 07                                            movups  xmm4, cs:xmmword_15811D010 ; Move Unaligned Four Packed Single-FP
sub_150262C20+552  0F 10 35 87 9E EB 07                                            movups  xmm6, cs:xmmword_15811D000 ; Move Unaligned Four Packed Single-FP
sub_150262C20+559  0F 28 EC                                                        movaps  xmm5, xmm4      ; Move Aligned Four Packed Single-FP
sub_150262C20+55C  66 44 0F 7E C2                                                  movd    edx, xmm8       ; Move 32 bits
sub_150262C20+561  0F 54 F2                                                        andps   xmm6, xmm2      ; Bitwise Logical And for Single-FP
sub_150262C20+564  66 41 0F 58 FA                                                  addpd   xmm7, xmm10     ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+569  66 0F C2 EE 01                                                  cmpltpd xmm5, xmm6      ; Packed Double-FP Compare LT
sub_150262C20+56E  66 0F C2 F4 02                                                  cmplepd xmm6, xmm4      ; Packed Double-FP Compare LE
sub_150262C20+573  66 44 0F 5C D7                                                  subpd   xmm10, xmm7     ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+578  C1 E2 05                                                        shl     edx, 5          ; Shift Logical Left
sub_150262C20+57B  0F 54 F2                                                        andps   xmm6, xmm2      ; Bitwise Logical And for Single-FP
sub_150262C20+57E  F3 41 0F 7E 24 13                                               movq    xmm4, qword ptr [r11+rdx] ; Move 64 bits
sub_150262C20+584  0F 54 FD                                                        andps   xmm7, xmm5      ; Bitwise Logical And for Single-FP
sub_150262C20+587  66 41 0F C5 C0 04                                               pextrw  eax, xmm8, 4    ; Extract Word
sub_150262C20+58D  66 45 0F 58 FA                                                  addpd   xmm15, xmm10    ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+592  C1 E0 05                                                        shl     eax, 5          ; Shift Logical Left
sub_150262C20+595  0F 56 F7                                                        orps    xmm6, xmm7      ; Bitwise Logical OR for Single-FP Data
sub_150262C20+598  F3 45 0F 7E 6C 13 08                                            movq    xmm13, qword ptr [r11+rdx+8] ; Move 64 bits
sub_150262C20+59F  0F 28 FE                                                        movaps  xmm7, xmm6      ; Move Aligned Four Packed Single-FP
sub_150262C20+5A2  66 45 0F 16 6C 03 08                                            movhpd  xmm13, qword ptr [r11+rax+8] ; Move High Packed Double-Precision Floating-Point Values
sub_150262C20+5A9  44 0F 28 E6                                                     movaps  xmm12, xmm6     ; Move Aligned Four Packed Single-FP
sub_150262C20+5AD  66 41 0F 59 FD                                                  mulpd   xmm7, xmm13     ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+5B2  F3 41 0F 7E 44 13 10                                            movq    xmm0, qword ptr [r11+rdx+10h] ; Move 64 bits
sub_150262C20+5B9  41 0F 54 EF                                                     andps   xmm5, xmm15     ; Bitwise Logical And for Single-FP
sub_150262C20+5BD  66 41 0F 16 24 03                                               movhpd  xmm4, qword ptr [r11+rax] ; Move High Packed Double-Precision Floating-Point Values
sub_150262C20+5C3  66 41 0F 16 44 03 10                                            movhpd  xmm0, qword ptr [r11+rax+10h] ; Move High Packed Double-Precision Floating-Point Values
sub_150262C20+5CA  66 44 0F 59 E4                                                  mulpd   xmm12, xmm4     ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+5CF  66 41 0F 58 E5                                                  addpd   xmm4, xmm13     ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+5D4  44 0F 28 D8                                                     movaps  xmm11, xmm0     ; Move Aligned Four Packed Single-FP
sub_150262C20+5D8  44 0F 28 C0                                                     movaps  xmm8, xmm0      ; Move Aligned Four Packed Single-FP
sub_150262C20+5DC  66 44 0F 58 DF                                                  addpd   xmm11, xmm7     ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+5E1  41 0F 28 DB                                                     movaps  xmm3, xmm11     ; Move Aligned Four Packed Single-FP
sub_150262C20+5E5  66 41 0F 58 DC                                                  addpd   xmm3, xmm12     ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+5EA  66 45 0F 5C C3                                                  subpd   xmm8, xmm11     ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+5EF  66 44 0F 5C DB                                                  subpd   xmm11, xmm3     ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+5F4  66 41 0F 58 F8                                                  addpd   xmm7, xmm8      ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+5F9  66 45 0F 58 E3                                                  addpd   xmm12, xmm11    ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+5FE  66 41 0F 58 FC                                                  addpd   xmm7, xmm12     ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+603  44 0F 28 E6                                                     movaps  xmm12, xmm6     ; Move Aligned Four Packed Single-FP
sub_150262C20+607  66 44 0F 59 E6                                                  mulpd   xmm12, xmm6     ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+60C  44 0F 10 05 4C DD ED 07                                         movups  xmm8, cs:xmmword_158140F80 ; Move Unaligned Four Packed Single-FP
sub_150262C20+614  44 0F 10 1D 04 DE ED 07                                         movups  xmm11, cs:xmmword_158141040 ; Move Unaligned Four Packed Single-FP
sub_150262C20+61C  66 45 0F 59 C4                                                  mulpd   xmm8, xmm12     ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+621  66 45 0F 59 DC                                                  mulpd   xmm11, xmm12    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+626  66 44 0F 58 05 F1 DC ED 07                                      addpd   xmm8, cs:xmmword_158140F40 ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+62F  66 44 0F 58 1D A8 DD ED 07                                      addpd   xmm11, cs:xmmword_158141000 ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+638  66 45 0F 59 C4                                                  mulpd   xmm8, xmm12     ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+63D  66 45 0F 59 DC                                                  mulpd   xmm11, xmm12    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+642  66 44 0F 59 C6                                                  mulpd   xmm8, xmm6      ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+647  66 44 0F 58 1D 50 DD ED 07                                      addpd   xmm11, cs:xmmword_158140FC0 ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+650  66 0F 59 F0                                                     mulpd   xmm6, xmm0      ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+654  66 45 0F 59 E3                                                  mulpd   xmm12, xmm11    ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+659  66 44 0F 59 C4                                                  mulpd   xmm8, xmm4      ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+65E  66 0F 5C E6                                                     subpd   xmm4, xmm6      ; Subtract Packed Double-Precision Floating-Point Values
sub_150262C20+662  66 41 0F 58 F8                                                  addpd   xmm7, xmm8      ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+667  66 44 0F 59 E0                                                  mulpd   xmm12, xmm0     ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+66C  66 0F 59 EC                                                     mulpd   xmm5, xmm4      ; Multiply Packed Double-Precision Floating-Point Values
sub_150262C20+670  66 41 0F 58 FC                                                  addpd   xmm7, xmm12     ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+675  F3 41 0F 7E 74 13 18                                            movq    xmm6, qword ptr [r11+rdx+18h] ; Move 64 bits
sub_150262C20+67C  0F 28 C1                                                        movaps  xmm0, xmm1      ; Move Aligned Four Packed Single-FP
sub_150262C20+67F  49 8B D3                                                        mov     rdx, r11
sub_150262C20+682  0F 55 44 24 20                                                  andnps  xmm0, xmmword ptr [rsp+20h] ; Bitwise Logical And Not for Single-FP
sub_150262C20+687  66 41 0F 16 74 03 18                                            movhpd  xmm6, qword ptr [r11+rax+18h] ; Move High Packed Double-Precision Floating-Point Values
sub_150262C20+68E  66 0F 58 F5                                                     addpd   xmm6, xmm5      ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+692  66 0F 58 FE                                                     addpd   xmm7, xmm6      ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+696  66 0F 58 DF                                                     addpd   xmm3, xmm7      ; Add Packed Double-Precision Floating-Point Values
sub_150262C20+69A  0F 54 D9                                                        andps   xmm3, xmm1      ; Bitwise Logical And for Single-FP
sub_150262C20+69D  0F 56 C3                                                        orps    xmm0, xmm3      ; Bitwise Logical OR for Single-FP Data
sub_150262C20+6A0  E9 1D FB FF FF                                                  jmp     loc_150262DE2   ; Jump
sub_150262C20+6A0                                                  sub_150262C20   endp
sub_150262C20+6A0
sub_150262C20+6A0                                                  ; ---------------------------------------------------------------------------
.text:00000001502632C5 CC CC CC CC CC CC CC CC CC CC CC                                align 10h
sub_1502632D0
sub_1502632D0                                                      ; =============== S U B R O U T I N E =======================================
sub_1502632D0
sub_1502632D0
sub_1502632D0                                                      sub_1502632D0   proc near               ; CODE XREF: sub_150260870+7↑j
sub_1502632D0
sub_1502632D0                                                      var_158         = xmmword ptr -158h
sub_1502632D0                                                      var_109         = byte ptr -109h
sub_1502632D0                                                      var_B8          = xmmword ptr -0B8h
sub_1502632D0                                                      var_A8          = xmmword ptr -0A8h
sub_1502632D0                                                      var_98          = xmmword ptr -98h
sub_1502632D0                                                      var_88          = xmmword ptr -88h
sub_1502632D0                                                      var_78          = xmmword ptr -78h
sub_1502632D0                                                      var_68          = xmmword ptr -68h
sub_1502632D0                                                      var_58          = xmmword ptr -58h
sub_1502632D0                                                      var_48          = xmmword ptr -48h
sub_1502632D0                                                      var_38          = xmmword ptr -38h
sub_1502632D0                                                      var_28          = xmmword ptr -28h
sub_1502632D0                                                      var_18          = qword ptr -18h
sub_1502632D0                                                      var_10          = qword ptr -10h
sub_1502632D0
sub_1502632D0      48 81 EC 78 01 00 00                                            sub     rsp, 178h       ; Integer Subtraction
sub_1502632D0+7    0F 28 D8                                                        movaps  xmm3, xmm0      ; Move Aligned Four Packed Single-FP
sub_1502632D0+A    44 0F 29 BC 24 C0 00 00 00                                      movaps  xmmword ptr [rsp+0C0h], xmm15 ; Move Aligned Four Packed Single-FP
sub_1502632D0+13   45 33 C9                                                        xor     r9d, r9d        ; Logical Exclusive OR
sub_1502632D0+16   44 0F 29 B4 24 D0 00 00 00                                      movaps  xmmword ptr [rsp+0D0h], xmm14 ; Move Aligned Four Packed Single-FP
sub_1502632D0+1F   44 0F 29 AC 24 E0 00 00 00                                      movaps  xmmword ptr [rsp+0E0h], xmm13 ; Move Aligned Four Packed Single-FP
sub_1502632D0+28   44 0F 29 A4 24 F0 00 00 00                                      movaps  xmmword ptr [rsp+0F0h], xmm12 ; Move Aligned Four Packed Single-FP
sub_1502632D0+31   44 0F 29 9C 24 00 01 00 00                                      movaps  xmmword ptr [rsp+100h], xmm11 ; Move Aligned Four Packed Single-FP
sub_1502632D0+3A   44 0F 29 94 24 10 01 00 00                                      movaps  xmmword ptr [rsp+110h], xmm10 ; Move Aligned Four Packed Single-FP
sub_1502632D0+43   44 0F 29 8C 24 20 01 00 00                                      movaps  xmmword ptr [rsp+120h], xmm9 ; Move Aligned Four Packed Single-FP
sub_1502632D0+4C   44 0F 29 84 24 30 01 00 00                                      movaps  xmmword ptr [rsp+130h], xmm8 ; Move Aligned Four Packed Single-FP
sub_1502632D0+55   0F 29 BC 24 40 01 00 00                                         movaps  xmmword ptr [rsp+140h], xmm7 ; Move Aligned Four Packed Single-FP
sub_1502632D0+5D   0F 29 B4 24 50 01 00 00                                         movaps  xmmword ptr [rsp+150h], xmm6 ; Move Aligned Four Packed Single-FP
sub_1502632D0+65   0F 28 F3                                                        movaps  xmm6, xmm3      ; Move Aligned Four Packed Single-FP
sub_1502632D0+68   4C 89 AC 24 60 01 00 00                                         mov     [rsp+160h], r13
sub_1502632D0+70   4C 8D 6C 24 6F                                                  lea     r13, [rsp+6Fh]  ; Load Effective Address
sub_1502632D0+75   0F 28 0D 34 DD ED 07                                            movaps  xmm1, cs:xmmword_158141080 ; Move Aligned Four Packed Single-FP
sub_1502632D0+7C   49 83 E5 C0                                                     and     r13, 0FFFFFFFFFFFFFFC0h ; Logical AND
sub_1502632D0+80   0F 28 05 A9 DD ED 07                                            movaps  xmm0, cs:xmmword_158141100 ; Move Aligned Four Packed Single-FP
sub_1502632D0+87   0F 54 F1                                                        andps   xmm6, xmm1      ; Bitwise Logical And for Single-FP
sub_1502632D0+8A   0F 28 E0                                                        movaps  xmm4, xmm0      ; Move Aligned Four Packed Single-FP
sub_1502632D0+8D   66 0F 5C E6                                                     subpd   xmm4, xmm6      ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+91   44 0F 28 1D D7 DD ED 07                                         movaps  xmm11, cs:xmmword_158141140 ; Move Aligned Four Packed Single-FP
sub_1502632D0+99   0F 54 CC                                                        andps   xmm1, xmm4      ; Bitwise Logical And for Single-FP
sub_1502632D0+9C   66 44 0F 59 DC                                                  mulpd   xmm11, xmm4     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+A1   66 0F C2 C4 00                                                  cmpeqpd xmm0, xmm4      ; Packed Double-FP Compare EQ
sub_1502632D0+A6   0F 28 2D 03 DE ED 07                                            movaps  xmm5, cs:xmmword_158141180 ; Move Aligned Four Packed Single-FP
sub_1502632D0+AD   0F 28 D1                                                        movaps  xmm2, xmm1      ; Move Aligned Four Packed Single-FP
sub_1502632D0+B0   66 44 0F 58 DD                                                  addpd   xmm11, xmm5     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+B5   66 0F C2 15 32 DD ED 07 06                                      cmpnlepd xmm2, cs:xmmword_1581410C0 ; Packed Double-FP Compare NOT LE
sub_1502632D0+BE   41 0F 28 E3                                                     movaps  xmm4, xmm11     ; Move Aligned Four Packed Single-FP
sub_1502632D0+C2   66 41 0F 73 F3 3F                                               psllq   xmm11, 3Fh ; '?' ; Packed Shift Left Logical (Qword)
sub_1502632D0+C8   66 0F 5C E5                                                     subpd   xmm4, xmm5      ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+CC   66 0F 50 C2                                                     movmskpd eax, xmm2      ; Extract Packed Double-Precision Floating-Point Sign Mask
sub_1502632D0+D0   44 0F 28 0D 18 DE ED 07                                         movaps  xmm9, cs:xmmword_1581411C0 ; Move Aligned Four Packed Single-FP
sub_1502632D0+D8   66 44 0F 5C CC                                                  subpd   xmm9, xmm4      ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+DD   0F 28 25 4C DE ED 07                                            movaps  xmm4, cs:xmmword_158141200 ; Move Aligned Four Packed Single-FP
sub_1502632D0+E4   85 C0                                                           test    eax, eax        ; Logical Compare
sub_1502632D0+E6   66 41 0F 59 E1                                                  mulpd   xmm4, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+EB   0F 28 3D 7E DE ED 07                                            movaps  xmm7, cs:xmmword_158141240 ; Move Aligned Four Packed Single-FP
sub_1502632D0+F2   66 41 0F 59 F9                                                  mulpd   xmm7, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+F7   66 0F 5C E6                                                     subpd   xmm4, xmm6      ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+FB   44 0F 28 05 AD DE ED 07                                         movaps  xmm8, cs:xmmword_158141280 ; Move Aligned Four Packed Single-FP
sub_1502632D0+103  66 45 0F 59 C1                                                  mulpd   xmm8, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+108  66 0F 58 E7                                                     addpd   xmm4, xmm7      ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+10C  44 0F 28 15 DC DE ED 07                                         movaps  xmm10, cs:xmmword_1581412C0 ; Move Aligned Four Packed Single-FP
sub_1502632D0+114  66 45 0F 59 D1                                                  mulpd   xmm10, xmm9     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+119  66 41 0F 58 E0                                                  addpd   xmm4, xmm8      ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+11E  66 41 0F 58 E2                                                  addpd   xmm4, xmm10     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+123  44 0F 28 E4                                                     movaps  xmm12, xmm4     ; Move Aligned Four Packed Single-FP
sub_1502632D0+127  66 44 0F 59 E4                                                  mulpd   xmm12, xmm4     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+12C  44 0F 28 2D 7C E1 ED 07                                         movaps  xmm13, cs:xmmword_158141580 ; Move Aligned Four Packed Single-FP
sub_1502632D0+134  41 0F 57 E3                                                     xorps   xmm4, xmm11     ; Bitwise Logical XOR for Single-FP Data
sub_1502632D0+138  66 45 0F 59 EC                                                  mulpd   xmm13, xmm12    ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+13D  66 44 0F 58 2D 2A E1 ED 07                                      addpd   xmm13, cs:xmmword_158141540 ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+146  66 45 0F 59 EC                                                  mulpd   xmm13, xmm12    ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+14B  66 44 0F 58 2D DC E0 ED 07                                      addpd   xmm13, cs:xmmword_158141500 ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+154  66 45 0F 59 EC                                                  mulpd   xmm13, xmm12    ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+159  66 44 0F 58 2D 8E E0 ED 07                                      addpd   xmm13, cs:xmmword_1581414C0 ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+162  66 45 0F 59 EC                                                  mulpd   xmm13, xmm12    ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+167  66 44 0F 58 2D 40 E0 ED 07                                      addpd   xmm13, cs:xmmword_158141480 ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+170  66 45 0F 59 EC                                                  mulpd   xmm13, xmm12    ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+175  66 44 0F 58 2D F2 DF ED 07                                      addpd   xmm13, cs:xmmword_158141440 ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+17E  66 45 0F 59 EC                                                  mulpd   xmm13, xmm12    ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+183  66 44 0F 59 E4                                                  mulpd   xmm12, xmm4     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+188  66 44 0F 58 2D 5F DF ED 07                                      addpd   xmm13, cs:xmmword_1581413C0 ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+191  66 45 0F 59 EC                                                  mulpd   xmm13, xmm12    ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+196  66 41 0F 58 E5                                                  addpd   xmm4, xmm13     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+19B  4C 89 AC 24 68 01 00 00                                         mov     [rsp+168h], r13
sub_1502632D0+1A3  66 0F 38 15 25 44 E1 ED 07                                      blendvpd xmm4, cs:xmmword_1581415C0 ; Variable Blend Packed Double Precision Floating-Point Values
sub_1502632D0+1AC  0F 85 BE 00 00 00                                               jnz     loc_150263540   ; Jump if Not Zero (ZF=0)
sub_1502632D0+1B2
sub_1502632D0+1B2                                                  loc_150263482:                          ; CODE XREF: sub_1502632D0+69F↓j
sub_1502632D0+1B2  45 85 C9                                                        test    r9d, r9d        ; Logical Compare
sub_1502632D0+1B5  75 6B                                                           jnz     short loc_1502634F2 ; Jump if Not Zero (ZF=0)
sub_1502632D0+1B7
sub_1502632D0+1B7                                                  loc_150263487:                          ; CODE XREF: sub_1502632D0+22C↓j
sub_1502632D0+1B7                                                                                          ; sub_1502632D0+25A↓j
sub_1502632D0+1B7  0F 28 B4 24 50 01 00 00                                         movaps  xmm6, xmmword ptr [rsp+150h] ; Move Aligned Four Packed Single-FP
sub_1502632D0+1BF  0F 28 C4                                                        movaps  xmm0, xmm4      ; Move Aligned Four Packed Single-FP
sub_1502632D0+1C2  0F 28 BC 24 40 01 00 00                                         movaps  xmm7, xmmword ptr [rsp+140h] ; Move Aligned Four Packed Single-FP
sub_1502632D0+1CA  44 0F 28 84 24 30 01 00 00                                      movaps  xmm8, xmmword ptr [rsp+130h] ; Move Aligned Four Packed Single-FP
sub_1502632D0+1D3  44 0F 28 8C 24 20 01 00 00                                      movaps  xmm9, xmmword ptr [rsp+120h] ; Move Aligned Four Packed Single-FP
sub_1502632D0+1DC  44 0F 28 94 24 10 01 00 00                                      movaps  xmm10, xmmword ptr [rsp+110h] ; Move Aligned Four Packed Single-FP
sub_1502632D0+1E5  44 0F 28 9C 24 00 01 00 00                                      movaps  xmm11, xmmword ptr [rsp+100h] ; Move Aligned Four Packed Single-FP
sub_1502632D0+1EE  44 0F 28 A4 24 F0 00 00 00                                      movaps  xmm12, xmmword ptr [rsp+0F0h] ; Move Aligned Four Packed Single-FP
sub_1502632D0+1F7  44 0F 28 AC 24 E0 00 00 00                                      movaps  xmm13, xmmword ptr [rsp+0E0h] ; Move Aligned Four Packed Single-FP
sub_1502632D0+200  44 0F 28 B4 24 D0 00 00 00                                      movaps  xmm14, xmmword ptr [rsp+0D0h] ; Move Aligned Four Packed Single-FP
sub_1502632D0+209  44 0F 28 BC 24 C0 00 00 00                                      movaps  xmm15, xmmword ptr [rsp+0C0h] ; Move Aligned Four Packed Single-FP
sub_1502632D0+212  4C 8B AC 24 60 01 00 00                                         mov     r13, [rsp+160h]
sub_1502632D0+21A  48 81 C4 78 01 00 00                                            add     rsp, 178h       ; Add
sub_1502632D0+221  C3                                                              retn                    ; Return Near from Procedure
sub_1502632D0+222                                                  ; ---------------------------------------------------------------------------
sub_1502632D0+222
sub_1502632D0+222                                                  loc_1502634F2:                          ; CODE XREF: sub_1502632D0+1B5↑j
sub_1502632D0+222  41 0F 29 5D 00                                                  movaps  xmmword ptr [r13+0], xmm3 ; Move Aligned Four Packed Single-FP
sub_1502632D0+227  41 0F 29 65 40                                                  movaps  xmmword ptr [r13+40h], xmm4 ; Move Aligned Four Packed Single-FP
sub_1502632D0+22C  74 89                                                           jz      short loc_150263487 ; Jump if Zero (ZF=1)
sub_1502632D0+22E  33 C0                                                           xor     eax, eax        ; Logical Exclusive OR
sub_1502632D0+230  48 89 5C 24 28                                                  mov     [rsp+28h], rbx
sub_1502632D0+235  8B D8                                                           mov     ebx, eax
sub_1502632D0+237  48 89 74 24 20                                                  mov     [rsp+20h], rsi
sub_1502632D0+23C  41 8B F1                                                        mov     esi, r9d
sub_1502632D0+23F
sub_1502632D0+23F                                                  loc_15026350F:                          ; CODE XREF: sub_1502632D0+249↓j
sub_1502632D0+23F  0F A3 DE                                                        bt      esi, ebx        ; Bit Test
sub_1502632D0+242  72 1B                                                           jb      short loc_15026352F ; Jump if Below (CF=1)
sub_1502632D0+244
sub_1502632D0+244                                                  loc_150263514:                          ; CODE XREF: sub_1502632D0+26E↓j
sub_1502632D0+244  FF C3                                                           inc     ebx             ; Increment by 1
sub_1502632D0+246  83 FB 02                                                        cmp     ebx, 2          ; Compare Two Operands
sub_1502632D0+249  7C F4                                                           jl      short loc_15026350F ; Jump if Less (SF!=OF)
sub_1502632D0+24B  48 8B 5C 24 28                                                  mov     rbx, [rsp+28h]
sub_1502632D0+250  48 8B 74 24 20                                                  mov     rsi, [rsp+20h]
sub_1502632D0+255  41 0F 28 65 40                                                  movaps  xmm4, xmmword ptr [r13+40h] ; Move Aligned Four Packed Single-FP
sub_1502632D0+25A  E9 58 FF FF FF                                                  jmp     loc_150263487   ; Jump
sub_1502632D0+25F                                                  ; ---------------------------------------------------------------------------
sub_1502632D0+25F
sub_1502632D0+25F                                                  loc_15026352F:                          ; CODE XREF: sub_1502632D0+242↑j
sub_1502632D0+25F  49 8D 4C DD 00                                                  lea     rcx, [r13+rbx*8+0] ; Load Effective Address
sub_1502632D0+264  49 8D 54 DD 40                                                  lea     rdx, [r13+rbx*8+40h] ; Load Effective Address
sub_1502632D0+269  E8 D2 23 00 00                                                  call    sub_150265910   ; Call Procedure
sub_1502632D0+26E  EB D4                                                           jmp     short loc_150263514 ; Jump
sub_1502632D0+270                                                  ; ---------------------------------------------------------------------------
sub_1502632D0+270
sub_1502632D0+270                                                  loc_150263540:                          ; CODE XREF: sub_1502632D0+1AC↑j
sub_1502632D0+270  44 0F 28 15 38 D8 ED 07                                         movaps  xmm10, cs:xmmword_158140D80 ; Move Aligned Four Packed Single-FP
sub_1502632D0+278  4C 8D 1D B1 D5 EC 07                                            lea     r11, unk_158130B00 ; Load Effective Address
sub_1502632D0+27F  41 0F 54 CA                                                     andps   xmm1, xmm10     ; Bitwise Logical And for Single-FP
sub_1502632D0+283  66 41 0F C2 CA 00                                               cmpeqpd xmm1, xmm10     ; Packed Double-FP Compare EQ
sub_1502632D0+289  66 44 0F 50 C9                                                  movmskpd r9d, xmm1      ; Extract Packed Double-Precision Floating-Point Sign Mask
sub_1502632D0+28E  66 0F 6F 0D 9A 9B EB 07                                         movdqa  xmm1, cs:xmmword_15811D100 ; Move Aligned Double Quadword
sub_1502632D0+296  66 0F DB CB                                                     pand    xmm1, xmm3      ; Bitwise Logical And
sub_1502632D0+29A  66 0F 73 D1 34                                                  psrlq   xmm1, 34h ; '4' ; Packed Shift Right Logical (Qword)
sub_1502632D0+29F  66 41 0F 7E CA                                                  movd    r10d, xmm1      ; Move 32 bits
sub_1502632D0+2A4  66 44 0F 6F 0D 93 9B EB 07                                      movdqa  xmm9, cs:xmmword_15811D110 ; Move Aligned Double Quadword
sub_1502632D0+2AD  66 44 0F DB CB                                                  pand    xmm9, xmm3      ; Bitwise Logical And
sub_1502632D0+2B2  66 0F C5 C1 04                                                  pextrw  eax, xmm1, 4    ; Extract Word
sub_1502632D0+2B7  66 44 0F D4 0D 90 9B EB 07                                      paddq   xmm9, cs:xmmword_15811D120 ; Add Packed Quadword Integers
sub_1502632D0+2C0  66 41 0F 6F F9                                                  movdqa  xmm7, xmm9      ; Move Aligned Double Quadword
sub_1502632D0+2C5  47 8D 04 52                                                     lea     r8d, [r10+r10*2] ; Load Effective Address
sub_1502632D0+2C9  8D 0C 40                                                        lea     ecx, [rax+rax*2] ; Load Effective Address
sub_1502632D0+2CC  66 0F 73 D7 20                                                  psrlq   xmm7, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502632D0+2D1  41 C1 E0 03                                                     shl     r8d, 3          ; Shift Logical Left
sub_1502632D0+2D5  66 44 0F 6F D7                                                  movdqa  xmm10, xmm7     ; Move Aligned Double Quadword
sub_1502632D0+2DA  F3 47 0F 7E 04 03                                               movq    xmm8, qword ptr [r11+r8] ; Move 64 bits
sub_1502632D0+2E0  F3 47 0F 7E 6C 03 08                                            movq    xmm13, qword ptr [r11+r8+8] ; Move 64 bits
sub_1502632D0+2E7  F3 47 0F 7E 7C 03 10                                            movq    xmm15, qword ptr [r11+r8+10h] ; Move 64 bits
sub_1502632D0+2EE  C1 E1 03                                                        shl     ecx, 3          ; Shift Logical Left
sub_1502632D0+2F1  66 0F 6F 35 67 9B EB 07                                         movdqa  xmm6, cs:xmmword_15811D130 ; Move Aligned Double Quadword
sub_1502632D0+2F9  66 44 0F DB CE                                                  pand    xmm9, xmm6      ; Bitwise Logical And
sub_1502632D0+2FE  66 0F 6F C6                                                     movdqa  xmm0, xmm6      ; Move Aligned Double Quadword
sub_1502632D0+302  66 45 0F 16 7C 0B 10                                            movhpd  xmm15, qword ptr [r11+rcx+10h] ; Move High Packed Double-Precision Floating-Point Values
sub_1502632D0+309  66 45 0F 6F D9                                                  movdqa  xmm11, xmm9     ; Move Aligned Double Quadword
sub_1502632D0+30E  41 0F 28 CF                                                     movaps  xmm1, xmm15     ; Move Aligned Four Packed Single-FP
sub_1502632D0+312  66 44 0F DB FE                                                  pand    xmm15, xmm6     ; Bitwise Logical And
sub_1502632D0+317  66 0F 73 D1 20                                                  psrlq   xmm1, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502632D0+31C  66 45 0F 6F E1                                                  movdqa  xmm12, xmm9     ; Move Aligned Double Quadword
sub_1502632D0+321  66 45 0F 16 6C 0B 08                                            movhpd  xmm13, qword ptr [r11+rcx+8] ; Move High Packed Double-Precision Floating-Point Values
sub_1502632D0+328  66 41 0F 6F E9                                                  movdqa  xmm5, xmm9      ; Move Aligned Double Quadword
sub_1502632D0+32D  66 44 0F F4 D1                                                  pmuludq xmm10, xmm1     ; Multiply Packed Unsigned Doubleword Integers
sub_1502632D0+332  45 0F 28 F5                                                     movaps  xmm14, xmm13    ; Move Aligned Four Packed Single-FP
sub_1502632D0+336  66 41 0F F4 C9                                                  pmuludq xmm1, xmm9      ; Multiply Packed Unsigned Doubleword Integers
sub_1502632D0+33B  66 44 0F F4 FF                                                  pmuludq xmm15, xmm7     ; Multiply Packed Unsigned Doubleword Integers
sub_1502632D0+340  66 44 0F DB EE                                                  pand    xmm13, xmm6     ; Bitwise Logical And
sub_1502632D0+345  66 0F 73 D1 20                                                  psrlq   xmm1, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502632D0+34A  66 45 0F F4 DD                                                  pmuludq xmm11, xmm13    ; Multiply Packed Unsigned Doubleword Integers
sub_1502632D0+34F  66 41 0F 73 D6 20                                               psrlq   xmm14, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502632D0+355  66 44 0F F4 EF                                                  pmuludq xmm13, xmm7     ; Multiply Packed Unsigned Doubleword Integers
sub_1502632D0+35A  66 45 0F F4 E6                                                  pmuludq xmm12, xmm14    ; Multiply Packed Unsigned Doubleword Integers
sub_1502632D0+35F  66 44 0F F4 F7                                                  pmuludq xmm14, xmm7     ; Multiply Packed Unsigned Doubleword Integers
sub_1502632D0+364  66 44 0F D4 D1                                                  paddq   xmm10, xmm1     ; Add Packed Quadword Integers
sub_1502632D0+369  66 41 0F DB C3                                                  pand    xmm0, xmm11     ; Bitwise Logical And
sub_1502632D0+36E  66 41 0F 73 D7 20                                               psrlq   xmm15, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502632D0+374  66 41 0F D4 C2                                                  paddq   xmm0, xmm10     ; Add Packed Quadword Integers
sub_1502632D0+379  0F 29 64 24 20                                                  movaps  xmmword ptr [rsp+20h], xmm4 ; Move Aligned Four Packed Single-FP
sub_1502632D0+37E  66 0F 6F E6                                                     movdqa  xmm4, xmm6      ; Move Aligned Double Quadword
sub_1502632D0+382  66 45 0F 16 04 0B                                               movhpd  xmm8, qword ptr [r11+rcx] ; Move High Packed Double-Precision Floating-Point Values
sub_1502632D0+388  4C 8D 1D A1 96 ED 07                                            lea     r11, unk_15813CD00 ; Load Effective Address
sub_1502632D0+38F  66 41 0F 73 D3 20                                               psrlq   xmm11, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502632D0+395  66 41 0F DB E0                                                  pand    xmm4, xmm8      ; Bitwise Logical And
sub_1502632D0+39A  66 44 0F 6F D6                                                  movdqa  xmm10, xmm6     ; Move Aligned Double Quadword
sub_1502632D0+39F  66 44 0F D4 F8                                                  paddq   xmm15, xmm0     ; Add Packed Quadword Integers
sub_1502632D0+3A4  66 45 0F D4 EB                                                  paddq   xmm13, xmm11    ; Add Packed Quadword Integers
sub_1502632D0+3A9  66 0F F4 EC                                                     pmuludq xmm5, xmm4      ; Multiply Packed Unsigned Doubleword Integers
sub_1502632D0+3AD  66 0F F4 FC                                                     pmuludq xmm7, xmm4      ; Multiply Packed Unsigned Doubleword Integers
sub_1502632D0+3B1  66 45 0F DB D4                                                  pand    xmm10, xmm12    ; Bitwise Logical And
sub_1502632D0+3B6  41 0F 28 CF                                                     movaps  xmm1, xmm15     ; Move Aligned Four Packed Single-FP
sub_1502632D0+3BA  66 45 0F D4 D5                                                  paddq   xmm10, xmm13    ; Add Packed Quadword Integers
sub_1502632D0+3BF  66 0F 73 D1 20                                                  psrlq   xmm1, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502632D0+3C4  66 41 0F 73 D4 20                                               psrlq   xmm12, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502632D0+3CA  66 41 0F 73 D0 20                                               psrlq   xmm8, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502632D0+3D0  66 44 0F 6F DE                                                  movdqa  xmm11, xmm6     ; Move Aligned Double Quadword
sub_1502632D0+3D5  66 41 0F D4 CA                                                  paddq   xmm1, xmm10     ; Add Packed Quadword Integers
sub_1502632D0+3DA  66 45 0F D4 F4                                                  paddq   xmm14, xmm12    ; Add Packed Quadword Integers
sub_1502632D0+3DF  66 45 0F F4 C8                                                  pmuludq xmm9, xmm8      ; Multiply Packed Unsigned Doubleword Integers
sub_1502632D0+3E4  66 44 0F DB DD                                                  pand    xmm11, xmm5     ; Bitwise Logical And
sub_1502632D0+3E9  66 44 0F 6F E9                                                  movdqa  xmm13, xmm1     ; Move Aligned Double Quadword
sub_1502632D0+3EE  66 45 0F D4 DE                                                  paddq   xmm11, xmm14    ; Add Packed Quadword Integers
sub_1502632D0+3F3  66 41 0F 73 D5 20                                               psrlq   xmm13, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502632D0+3F9  66 0F 73 D5 20                                                  psrlq   xmm5, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502632D0+3FE  66 45 0F D4 EB                                                  paddq   xmm13, xmm11    ; Add Packed Quadword Integers
sub_1502632D0+403  66 0F D4 FD                                                     paddq   xmm7, xmm5      ; Add Packed Quadword Integers
sub_1502632D0+407  66 44 0F DB CE                                                  pand    xmm9, xmm6      ; Bitwise Logical And
sub_1502632D0+40C  66 45 0F 6F D5                                                  movdqa  xmm10, xmm13    ; Move Aligned Double Quadword
sub_1502632D0+411  66 44 0F D4 CF                                                  paddq   xmm9, xmm7      ; Add Packed Quadword Integers
sub_1502632D0+416  66 41 0F 73 D2 20                                               psrlq   xmm10, 20h ; ' ' ; Packed Shift Right Logical (Qword)
sub_1502632D0+41C  66 44 0F DB EE                                                  pand    xmm13, xmm6     ; Bitwise Logical And
sub_1502632D0+421  66 45 0F D4 D1                                                  paddq   xmm10, xmm9     ; Add Packed Quadword Integers
sub_1502632D0+426  66 41 0F 73 F2 20                                               psllq   xmm10, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_1502632D0+42C  66 44 0F DB FE                                                  pand    xmm15, xmm6     ; Bitwise Logical And
sub_1502632D0+431  66 45 0F D4 D5                                                  paddq   xmm10, xmm13    ; Add Packed Quadword Integers
sub_1502632D0+436  66 0F 6F 2D 32 9A EB 07                                         movdqa  xmm5, cs:xmmword_15811D140 ; Move Aligned Double Quadword
sub_1502632D0+43E  66 41 0F 6F FA                                                  movdqa  xmm7, xmm10     ; Move Aligned Double Quadword
sub_1502632D0+443  66 44 0F 6F 25 34 9A EB 07                                      movdqa  xmm12, cs:xmmword_15811D150 ; Move Aligned Double Quadword
sub_1502632D0+44C  66 0F DB EB                                                     pand    xmm5, xmm3      ; Bitwise Logical And
sub_1502632D0+450  44 0F 28 35 38 9A EB 07                                         movaps  xmm14, cs:xmmword_15811D160 ; Move Aligned Four Packed Single-FP
sub_1502632D0+458  66 0F 73 D7 0C                                                  psrlq   xmm7, 0Ch       ; Packed Shift Right Logical (Qword)
sub_1502632D0+45D  66 44 0F EF E5                                                  pxor    xmm12, xmm5     ; Bitwise Logical Exclusive Or
sub_1502632D0+462  45 0F 28 CE                                                     movaps  xmm9, xmm14     ; Move Aligned Four Packed Single-FP
sub_1502632D0+466  66 41 0F EB FC                                                  por     xmm7, xmm12     ; Bitwise Logical Or
sub_1502632D0+46B  66 0F 73 F1 20                                                  psllq   xmm1, 20h ; ' ' ; Packed Shift Left Logical (Qword)
sub_1502632D0+470  66 44 0F 58 CF                                                  addpd   xmm9, xmm7      ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+475  66 41 0F D4 CF                                                  paddq   xmm1, xmm15     ; Add Packed Quadword Integers
sub_1502632D0+47A  41 0F 28 F1                                                     movaps  xmm6, xmm9      ; Move Aligned Four Packed Single-FP
sub_1502632D0+47E  0F 28 C2                                                        movaps  xmm0, xmm2      ; Move Aligned Four Packed Single-FP
sub_1502632D0+481  66 41 0F 5C F6                                                  subpd   xmm6, xmm14     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+486  66 44 0F 6F 1D 51 9A EB 07                                      movdqa  xmm11, cs:xmmword_15811D1B0 ; Move Aligned Double Quadword
sub_1502632D0+48F  66 44 0F 6F 05 28 9A EB 07                                      movdqa  xmm8, cs:xmmword_15811D190 ; Move Aligned Double Quadword
sub_1502632D0+498  66 45 0F DB DA                                                  pand    xmm11, xmm10    ; Bitwise Logical And
sub_1502632D0+49D  66 0F 6F 25 0B 9A EB 07                                         movdqa  xmm4, cs:xmmword_15811D180 ; Move Aligned Double Quadword
sub_1502632D0+4A5  66 44 0F DB C1                                                  pand    xmm8, xmm1      ; Bitwise Logical And
sub_1502632D0+4AA  66 41 0F 73 F3 28                                               psllq   xmm11, 28h ; '(' ; Packed Shift Left Logical (Qword)
sub_1502632D0+4B0  66 0F 73 D1 18                                                  psrlq   xmm1, 18h       ; Packed Shift Right Logical (Qword)
sub_1502632D0+4B5  66 0F EF E5                                                     pxor    xmm4, xmm5      ; Bitwise Logical Exclusive Or
sub_1502632D0+4B9  66 44 0F EB D9                                                  por     xmm11, xmm1     ; Bitwise Logical Or
sub_1502632D0+4BE  66 0F EF 2D 0A 9A EB 07                                         pxor    xmm5, cs:xmmword_15811D1A0 ; Bitwise Logical Exclusive Or
sub_1502632D0+4C6  66 41 0F 73 F0 1C                                               psllq   xmm8, 1Ch       ; Packed Shift Left Logical (Qword)
sub_1502632D0+4CC  66 0F 5C FE                                                     subpd   xmm7, xmm6      ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+4D0  66 44 0F EB DD                                                  por     xmm11, xmm5     ; Bitwise Logical Or
sub_1502632D0+4D5  0F 28 CF                                                        movaps  xmm1, xmm7      ; Move Aligned Four Packed Single-FP
sub_1502632D0+4D8  66 44 0F 5C DD                                                  subpd   xmm11, xmm5     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+4DD  66 41 0F 58 CB                                                  addpd   xmm1, xmm11     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+4E2  66 0F 5C F9                                                     subpd   xmm7, xmm1      ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+4E6  66 44 0F EB C4                                                  por     xmm8, xmm4      ; Bitwise Logical Or
sub_1502632D0+4EB  66 44 0F 5C C4                                                  subpd   xmm8, xmm4      ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+4F0  66 44 0F 58 DF                                                  addpd   xmm11, xmm7     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+4F5  44 0F 28 15 23 9A EB 07                                         movaps  xmm10, cs:xmmword_15811D1F0 ; Move Aligned Four Packed Single-FP
sub_1502632D0+4FD  44 0F 54 D1                                                     andps   xmm10, xmm1     ; Bitwise Logical And for Single-FP
sub_1502632D0+501  66 45 0F 58 C3                                                  addpd   xmm8, xmm11     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+506  66 41 0F 5C CA                                                  subpd   xmm1, xmm10     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+50B  66 44 0F 59 05 DC 99 EB 07                                      mulpd   xmm8, cs:xmmword_15811D1C0 ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+514  44 0F 28 3D E4 99 EB 07                                         movaps  xmm15, cs:xmmword_15811D1D0 ; Move Aligned Four Packed Single-FP
sub_1502632D0+51C  0F 28 35 ED 99 EB 07                                            movaps  xmm6, cs:xmmword_15811D1E0 ; Move Aligned Four Packed Single-FP
sub_1502632D0+523  45 0F 28 E7                                                     movaps  xmm12, xmm15    ; Move Aligned Four Packed Single-FP
sub_1502632D0+527  66 45 0F 59 E2                                                  mulpd   xmm12, xmm10    ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+52C  66 44 0F 59 F9                                                  mulpd   xmm15, xmm1     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+531  66 44 0F 59 D6                                                  mulpd   xmm10, xmm6     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+536  66 0F 59 F1                                                     mulpd   xmm6, xmm1      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+53A  66 45 0F 58 FA                                                  addpd   xmm15, xmm10    ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+53F  66 44 0F 58 C6                                                  addpd   xmm8, xmm6      ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+544  66 45 0F 58 F8                                                  addpd   xmm15, xmm8     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+549  44 0F 54 0D 4F 99 EB 07                                         andps   xmm9, cs:xmmword_15811D170 ; Bitwise Logical And for Single-FP
sub_1502632D0+551  45 0F 28 C7                                                     movaps  xmm8, xmm15     ; Move Aligned Four Packed Single-FP
sub_1502632D0+555  0F 28 25 E4 99 EB 07                                            movaps  xmm4, cs:xmmword_15811D210 ; Move Aligned Four Packed Single-FP
sub_1502632D0+55C  0F 28 3D CD 99 EB 07                                            movaps  xmm7, cs:xmmword_15811D200 ; Move Aligned Four Packed Single-FP
sub_1502632D0+563  0F 28 F4                                                        movaps  xmm6, xmm4      ; Move Aligned Four Packed Single-FP
sub_1502632D0+566  66 44 0F 7E CA                                                  movd    edx, xmm9       ; Move 32 bits
sub_1502632D0+56B  0F 54 FB                                                        andps   xmm7, xmm3      ; Bitwise Logical And for Single-FP
sub_1502632D0+56E  66 45 0F 58 C4                                                  addpd   xmm8, xmm12     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+573  66 0F C2 F7 01                                                  cmpltpd xmm6, xmm7      ; Packed Double-FP Compare LT
sub_1502632D0+578  66 0F C2 FC 02                                                  cmplepd xmm7, xmm4      ; Packed Double-FP Compare LE
sub_1502632D0+57D  66 45 0F 5C E0                                                  subpd   xmm12, xmm8     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+582  C1 E2 05                                                        shl     edx, 5          ; Shift Logical Left
sub_1502632D0+585  0F 54 FB                                                        andps   xmm7, xmm3      ; Bitwise Logical And for Single-FP
sub_1502632D0+588  F3 41 0F 7E 24 13                                               movq    xmm4, qword ptr [r11+rdx] ; Move 64 bits
sub_1502632D0+58E  44 0F 54 C6                                                     andps   xmm8, xmm6      ; Bitwise Logical And for Single-FP
sub_1502632D0+592  66 41 0F C5 C1 04                                               pextrw  eax, xmm9, 4    ; Extract Word
sub_1502632D0+598  66 45 0F 58 FC                                                  addpd   xmm15, xmm12    ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+59D  C1 E0 05                                                        shl     eax, 5          ; Shift Logical Left
sub_1502632D0+5A0  41 0F 56 F8                                                     orps    xmm7, xmm8      ; Bitwise Logical OR for Single-FP Data
sub_1502632D0+5A4  F3 45 0F 7E 44 13 08                                            movq    xmm8, qword ptr [r11+rdx+8] ; Move 64 bits
sub_1502632D0+5AB  44 0F 28 DF                                                     movaps  xmm11, xmm7     ; Move Aligned Four Packed Single-FP
sub_1502632D0+5AF  66 45 0F 16 44 03 08                                            movhpd  xmm8, qword ptr [r11+rax+8] ; Move High Packed Double-Precision Floating-Point Values
sub_1502632D0+5B6  0F 28 CF                                                        movaps  xmm1, xmm7      ; Move Aligned Four Packed Single-FP
sub_1502632D0+5B9  66 45 0F 59 D8                                                  mulpd   xmm11, xmm8     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+5BE  F3 45 0F 7E 54 13 10                                            movq    xmm10, qword ptr [r11+rdx+10h] ; Move 64 bits
sub_1502632D0+5C5  41 0F 54 F7                                                     andps   xmm6, xmm15     ; Bitwise Logical And for Single-FP
sub_1502632D0+5C9  66 41 0F 16 24 03                                               movhpd  xmm4, qword ptr [r11+rax] ; Move High Packed Double-Precision Floating-Point Values
sub_1502632D0+5CF  66 45 0F 16 54 03 10                                            movhpd  xmm10, qword ptr [r11+rax+10h] ; Move High Packed Double-Precision Floating-Point Values
sub_1502632D0+5D6  66 0F 59 CC                                                     mulpd   xmm1, xmm4      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+5DA  66 41 0F 58 E0                                                  addpd   xmm4, xmm8      ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+5DF  45 0F 28 EA                                                     movaps  xmm13, xmm10    ; Move Aligned Four Packed Single-FP
sub_1502632D0+5E3  45 0F 28 CA                                                     movaps  xmm9, xmm10     ; Move Aligned Four Packed Single-FP
sub_1502632D0+5E7  66 45 0F 58 EB                                                  addpd   xmm13, xmm11    ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+5EC  41 0F 28 ED                                                     movaps  xmm5, xmm13     ; Move Aligned Four Packed Single-FP
sub_1502632D0+5F0  66 0F 58 E9                                                     addpd   xmm5, xmm1      ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+5F4  66 45 0F 5C CD                                                  subpd   xmm9, xmm13     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+5F9  66 44 0F 5C ED                                                  subpd   xmm13, xmm5     ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+5FE  66 45 0F 58 D9                                                  addpd   xmm11, xmm9     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+603  66 41 0F 58 CD                                                  addpd   xmm1, xmm13     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+608  44 0F 28 CF                                                     movaps  xmm9, xmm7      ; Move Aligned Four Packed Single-FP
sub_1502632D0+60C  66 44 0F 59 CF                                                  mulpd   xmm9, xmm7      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+611  66 44 0F 58 D9                                                  addpd   xmm11, xmm1     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+616  0F 28 0D 93 D6 ED 07                                            movaps  xmm1, cs:xmmword_158140F80 ; Move Aligned Four Packed Single-FP
sub_1502632D0+61D  66 41 0F 59 C9                                                  mulpd   xmm1, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+622  66 0F 58 0D 46 D6 ED 07                                         addpd   xmm1, cs:xmmword_158140F40 ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+62A  66 41 0F 59 C9                                                  mulpd   xmm1, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+62F  66 0F 59 CF                                                     mulpd   xmm1, xmm7      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+633  66 41 0F 59 FA                                                  mulpd   xmm7, xmm10     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+638  66 0F 59 CC                                                     mulpd   xmm1, xmm4      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+63C  66 0F 5C E7                                                     subpd   xmm4, xmm7      ; Subtract Packed Double-Precision Floating-Point Values
sub_1502632D0+640  66 44 0F 58 D9                                                  addpd   xmm11, xmm1     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+645  66 0F 59 F4                                                     mulpd   xmm6, xmm4      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+649  0F 28 0D 20 D7 ED 07                                            movaps  xmm1, cs:xmmword_158141040 ; Move Aligned Four Packed Single-FP
sub_1502632D0+650  66 41 0F 59 C9                                                  mulpd   xmm1, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+655  66 0F 58 0D D3 D6 ED 07                                         addpd   xmm1, cs:xmmword_158141000 ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+65D  66 41 0F 59 C9                                                  mulpd   xmm1, xmm9      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+662  66 0F 58 0D 86 D6 ED 07                                         addpd   xmm1, cs:xmmword_158140FC0 ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+66A  66 44 0F 59 C9                                                  mulpd   xmm9, xmm1      ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+66F  66 45 0F 59 CA                                                  mulpd   xmm9, xmm10     ; Multiply Packed Double-Precision Floating-Point Values
sub_1502632D0+674  F3 41 0F 7E 4C 13 18                                            movq    xmm1, qword ptr [r11+rdx+18h] ; Move 64 bits
sub_1502632D0+67B  0F 28 64 24 20                                                  movaps  xmm4, xmmword ptr [rsp+20h] ; Move Aligned Four Packed Single-FP
sub_1502632D0+680  66 45 0F 58 D9                                                  addpd   xmm11, xmm9     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+685  66 41 0F 16 4C 03 18                                            movhpd  xmm1, qword ptr [r11+rax+18h] ; Move High Packed Double-Precision Floating-Point Values
sub_1502632D0+68C  66 0F 58 CE                                                     addpd   xmm1, xmm6      ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+690  66 44 0F 58 D9                                                  addpd   xmm11, xmm1     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+695  66 41 0F 58 EB                                                  addpd   xmm5, xmm11     ; Add Packed Double-Precision Floating-Point Values
sub_1502632D0+69A  66 0F 38 15 E5                                                  blendvpd xmm4, xmm5     ; Variable Blend Packed Double Precision Floating-Point Values
sub_1502632D0+69F  E9 0E FB FF FF                                                  jmp     loc_150263482   ; Jump
sub_1502632D0+69F                                                  sub_1502632D0   endp
sub_1502632D0+69F
sub_1502632D0+69F                                                  ; ---------------------------------------------------------------------------
.text:0000000150263974 CC CC CC CC CC CC CC CC CC CC CC CC                             align 20h
.text:0000000150263980
.text:0000000150263980                                                 loc_150263980:                          ; CODE XREF: .text:000000015026089D↑j
.text:0000000150263980 48 83 EC 78                                                     sub     rsp, 78h        ; Integer Subtraction
.text:0000000150263984 0F 29 7C 24 60                                                  movaps  xmmword ptr [rsp+60h], xmm7 ; Move Aligned Four Packed Single-FP
.text:0000000150263989 0F 29 74 24 50                                                  movaps  xmmword ptr [rsp+50h], xmm6 ; Move Aligned Four Packed Single-FP
.text:000000015026398E 0F 28 3D 6B 9B EB 07                                            movaps  xmm7, cs:xmmword_15811D500 ; Move Aligned Four Packed Single-FP
.text:0000000150263995 0F 28 0D 74 9B EB 07                                            movaps  xmm1, cs:xmmword_15811D510 ; Move Aligned Four Packed Single-FP
.text:000000015026399C 4C 8D 05 5D 99 EB 07                                            lea     r8, unk_15811D300 ; Load Effective Address
.text:00000001502639A3 66 0F DB F8                                                     pand    xmm7, xmm0      ; Bitwise Logical And
.text:00000001502639A7 0F 28 15 72 9B EB 07                                            movaps  xmm2, cs:xmmword_15811D520 ; Move Aligned Four Packed Single-FP
.text:00000001502639AE 0F 59 C8                                                        mulps   xmm1, xmm0      ; Packed Single-FP Multiply
.text:00000001502639B1 0F 28 1D 78 9B EB 07                                            movaps  xmm3, cs:xmmword_15811D530 ; Move Aligned Four Packed Single-FP
.text:00000001502639B8 0F 58 CA                                                        addps   xmm1, xmm2      ; Packed Single-FP Add
.text:00000001502639BB 0F 5C D1                                                        subps   xmm2, xmm1      ; Packed Single-FP Subtract
.text:00000001502639BE 66 0F 6F E9                                                     movdqa  xmm5, xmm1      ; Move Aligned Double Quadword
.text:00000001502639C2 66 0F DB 0D 76 9B EB 07                                         pand    xmm1, cs:xmmword_15811D540 ; Bitwise Logical And
.text:00000001502639CA 66 0F 66 3D 7E 9B EB 07                                         pcmpgtd xmm7, cs:xmmword_15811D550 ; Packed Compare for Greater Than (Dword)
.text:00000001502639D2 0F 59 DA                                                        mulps   xmm3, xmm2      ; Packed Single-FP Multiply
.text:00000001502639D5 66 0F 7E C8                                                     movd    eax, xmm1       ; Move 32 bits
.text:00000001502639D9 66 0F 70 C9 39                                                  pshufd  xmm1, xmm1, 39h ; '9' ; Shuffle Packed Doublewords
.text:00000001502639DE 0F 59 15 7B 9B EB 07                                            mulps   xmm2, cs:xmmword_15811D560 ; Packed Single-FP Multiply
.text:00000001502639E5 0F 29 44 24 40                                                  movaps  xmmword ptr [rsp+40h], xmm0 ; Move Aligned Four Packed Single-FP
.text:00000001502639EA 0F 58 C3                                                        addps   xmm0, xmm3      ; Packed Single-FP Add
.text:00000001502639ED 66 0F FE 2D 7B 9B EB 07                                         paddd   xmm5, cs:xmmword_15811D570 ; Packed Add Dword
.text:00000001502639F5 66 0F 7E CA                                                     movd    edx, xmm1       ; Move 32 bits
.text:00000001502639F9 66 0F 70 C9 39                                                  pshufd  xmm1, xmm1, 39h ; '9' ; Shuffle Packed Doublewords
.text:00000001502639FE 0F 58 C2                                                        addps   xmm0, xmm2      ; Packed Single-FP Add
.text:0000000150263A01 0F 28 35 78 9B EB 07                                            movaps  xmm6, cs:xmmword_15811D580 ; Move Aligned Four Packed Single-FP
.text:0000000150263A08 0F 59 F0                                                        mulps   xmm6, xmm0      ; Packed Single-FP Multiply
.text:0000000150263A0B 66 0F 7E C9                                                     movd    ecx, xmm1       ; Move 32 bits
.text:0000000150263A0F 66 0F 70 C9 39                                                  pshufd  xmm1, xmm1, 39h ; '9' ; Shuffle Packed Doublewords
.text:0000000150263A14 F3 41 0F 7E 1C C0                                               movq    xmm3, qword ptr [r8+rax*8] ; Move 64 bits
.text:0000000150263A1A 66 0F 7E C8                                                     movd    eax, xmm1       ; Move 32 bits
.text:0000000150263A1E F3 41 0F 7E 24 D0                                               movq    xmm4, qword ptr [r8+rdx*8] ; Move 64 bits
.text:0000000150263A24 90                                                              nop                     ; No Operation
.text:0000000150263A25 0F 58 35 64 9B EB 07                                            addps   xmm6, cs:xmmword_15811D590 ; Packed Single-FP Add
.text:0000000150263A2C F3 41 0F 7E 14 C8                                               movq    xmm2, qword ptr [r8+rcx*8] ; Move 64 bits
.text:0000000150263A32 0F 14 DC                                                        unpcklps xmm3, xmm4     ; Unpack Low Packed Single-FP Data
.text:0000000150263A35 F3 41 0F 7E 0C C0                                               movq    xmm1, qword ptr [r8+rax*8] ; Move 64 bits
.text:0000000150263A3B 66 0F 72 F5 11                                                  pslld   xmm5, 11h       ; Packed Shift Left Logical (Dword)
.text:0000000150263A40 0F 59 F0                                                        mulps   xmm6, xmm0      ; Packed Single-FP Multiply
.text:0000000150263A43 0F 28 E3                                                        movaps  xmm4, xmm3      ; Move Aligned Four Packed Single-FP
.text:0000000150263A46 66 0F DB 2D 52 9B EB 07                                         pand    xmm5, cs:xmmword_15811D5A0 ; Bitwise Logical And
.text:0000000150263A4E 0F 14 D1                                                        unpcklps xmm2, xmm1     ; Unpack Low Packed Single-FP Data
.text:0000000150263A51 0F 59 F0                                                        mulps   xmm6, xmm0      ; Packed Single-FP Multiply
.text:0000000150263A54 0F 58 F0                                                        addps   xmm6, xmm0      ; Packed Single-FP Add
.text:0000000150263A57 0F C6 DA 44                                                     shufps  xmm3, xmm2, 44h ; 'D' ; Shuffle Single-FP
.text:0000000150263A5B 0F C6 E2 EE                                                     shufps  xmm4, xmm2, 0EEh ; Shuffle Single-FP
.text:0000000150263A5F 0F 28 C3                                                        movaps  xmm0, xmm3      ; Move Aligned Four Packed Single-FP
.text:0000000150263A62 0F 58 DC                                                        addps   xmm3, xmm4      ; Packed Single-FP Add
.text:0000000150263A65 0F 59 F3                                                        mulps   xmm6, xmm3      ; Packed Single-FP Multiply
.text:0000000150263A68 0F 50 C7                                                        movmskps eax, xmm7      ; Move Mask to Register
.text:0000000150263A6B 0F 58 F4                                                        addps   xmm6, xmm4      ; Packed Single-FP Add
.text:0000000150263A6E A9 0F 00 00 00                                                  test    eax, 0Fh        ; Logical Compare
.text:0000000150263A73 0F 58 C6                                                        addps   xmm0, xmm6      ; Packed Single-FP Add
.text:0000000150263A76 75 12                                                           jnz     short loc_150263A8A ; Jump if Not Zero (ZF=0)
.text:0000000150263A78 0F 59 C5                                                        mulps   xmm0, xmm5      ; Packed Single-FP Multiply
.text:0000000150263A7B 0F 10 74 24 50                                                  movups  xmm6, xmmword ptr [rsp+50h] ; Move Unaligned Four Packed Single-FP
.text:0000000150263A80 0F 10 7C 24 60                                                  movups  xmm7, xmmword ptr [rsp+60h] ; Move Unaligned Four Packed Single-FP
.text:0000000150263A85 48 83 C4 78                                                     add     rsp, 78h        ; Add
.text:0000000150263A89 C3                                                              retn                    ; Return Near from Procedure
.text:0000000150263A8A                                                 ; ---------------------------------------------------------------------------
.text:0000000150263A8A
.text:0000000150263A8A                                                 loc_150263A8A:                          ; CODE XREF: .text:0000000150263A76↑j
.text:0000000150263A8A 0F 29 44 24 30                                                  movaps  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000150263A8F 0F 28 4C 24 40                                                  movaps  xmm1, xmmword ptr [rsp+40h] ; Move Aligned Four Packed Single-FP
.text:0000000150263A94 66 0F EF D2                                                     pxor    xmm2, xmm2      ; Bitwise Logical Exclusive Or
.text:0000000150263A98 0F 59 C5                                                        mulps   xmm0, xmm5      ; Packed Single-FP Multiply
.text:0000000150263A9B 0F C2 D1 03                                                     cmpunordps xmm2, xmm1   ; Packed Single-FP Compare UNORD
.text:0000000150263A9F 48 8D 4C 24 20                                                  lea     rcx, [rsp+20h]  ; Load Effective Address
.text:0000000150263AA4 0F 50 D2                                                        movmskps edx, xmm2      ; Move Mask to Register
.text:0000000150263AA7 33 C2                                                           xor     eax, edx        ; Logical Exclusive OR
.text:0000000150263AA9 0F 84 D2 00 00 00                                               jz      loc_150263B81   ; Jump if Zero (ZF=1)
.text:0000000150263AAF 0F 28 15 FA 9A EB 07                                            movaps  xmm2, cs:xmmword_15811D5B0 ; Move Aligned Four Packed Single-FP
.text:0000000150263AB6 0F 28 D8                                                        movaps  xmm3, xmm0      ; Move Aligned Four Packed Single-FP
.text:0000000150263AB9 0F C2 D1 02                                                     cmpleps xmm2, xmm1      ; Packed Single-FP Compare LE
.text:0000000150263ABD 0F 28 05 DC 9A EB 07                                            movaps  xmm0, cs:xmmword_15811D5A0 ; Move Aligned Four Packed Single-FP
.text:0000000150263AC4 66 0F DB C2                                                     pand    xmm0, xmm2      ; Bitwise Logical And
.text:0000000150263AC8 0F 50 D2                                                        movmskps edx, xmm2      ; Move Mask to Register
.text:0000000150263ACB 66 0F DF D3                                                     pandn   xmm2, xmm3      ; Bitwise Logical And Not
.text:0000000150263ACF 33 C2                                                           xor     eax, edx        ; Logical Exclusive OR
.text:0000000150263AD1 66 0F EB C2                                                     por     xmm0, xmm2      ; Bitwise Logical Or
.text:0000000150263AD5 0F 84 A6 00 00 00                                               jz      loc_150263B81   ; Jump if Zero (ZF=1)
.text:0000000150263ADB 0F 28 D8                                                        movaps  xmm3, xmm0      ; Move Aligned Four Packed Single-FP
.text:0000000150263ADE 0F 28 C1                                                        movaps  xmm0, xmm1      ; Move Aligned Four Packed Single-FP
.text:0000000150263AE1 0F 28 2D D8 9A EB 07                                            movaps  xmm5, cs:xmmword_15811D5C0 ; Move Aligned Four Packed Single-FP
.text:0000000150263AE8 0F C2 C5 02                                                     cmpleps xmm0, xmm5      ; Packed Single-FP Compare LE
.text:0000000150263AEC 0F 50 D0                                                        movmskps edx, xmm0      ; Move Mask to Register
.text:0000000150263AEF 66 0F DF C3                                                     pandn   xmm0, xmm3      ; Bitwise Logical And Not
.text:0000000150263AF3 33 C2                                                           xor     eax, edx        ; Logical Exclusive OR
.text:0000000150263AF5 0F 84 86 00 00 00                                               jz      loc_150263B81   ; Jump if Zero (ZF=1)
.text:0000000150263AFB 0F 50 D1                                                        movmskps edx, xmm1      ; Move Mask to Register
.text:0000000150263AFE 0F 29 44 24 20                                                  movaps  xmmword ptr [rsp+20h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000150263B03
.text:0000000150263B03                                                 loc_150263B03:                          ; CODE XREF: .text:0000000150263B7A↓j
.text:0000000150263B03 A9 01 00 00 00                                                  test    eax, 1          ; Logical Compare
.text:0000000150263B08 74 68                                                           jz      short loc_150263B72 ; Jump if Zero (ZF=1)
.text:0000000150263B0A F7 C2 01 00 00 00                                               test    edx, 1          ; Logical Compare
.text:0000000150263B10 F3 0F 10 41 20                                                  movss   xmm0, dword ptr [rcx+20h] ; Move Scalar Single-FP
.text:0000000150263B15 0F 59 05 F4 99 EB 07                                            mulps   xmm0, cs:xmmword_15811D510 ; Packed Single-FP Multiply
.text:0000000150263B1C 0F 58 05 FD 99 EB 07                                            addps   xmm0, cs:xmmword_15811D520 ; Packed Single-FP Add
.text:0000000150263B23 75 15                                                           jnz     short loc_150263B3A ; Jump if Not Zero (ZF=0)
.text:0000000150263B25 66 0F FE 05 A3 9A EB 07                                         paddd   xmm0, cs:xmmword_15811D5D0 ; Packed Add Dword
.text:0000000150263B2D 0F 28 2D AC 9A EB 07                                            movaps  xmm5, cs:xmmword_15811D5E0 ; Move Aligned Four Packed Single-FP
.text:0000000150263B34 66 0F EF F6                                                     pxor    xmm6, xmm6      ; Bitwise Logical Exclusive Or
.text:0000000150263B38 EB 1A                                                           jmp     short loc_150263B54 ; Jump
.text:0000000150263B3A                                                 ; ---------------------------------------------------------------------------
.text:0000000150263B3A
.text:0000000150263B3A                                                 loc_150263B3A:                          ; CODE XREF: .text:0000000150263B23↑j
.text:0000000150263B3A 66 0F FE 05 2E 9A EB 07                                         paddd   xmm0, cs:xmmword_15811D570 ; Packed Add Dword
.text:0000000150263B42 0F 28 2D A7 9A EB 07                                            movaps  xmm5, cs:xmmword_15811D5F0 ; Move Aligned Four Packed Single-FP
.text:0000000150263B49 66 0F FE 05 1F 9A EB 07                                         paddd   xmm0, cs:xmmword_15811D570 ; Packed Add Dword
.text:0000000150263B51 0F 28 F5                                                        movaps  xmm6, xmm5      ; Move Aligned Four Packed Single-FP
.text:0000000150263B54
.text:0000000150263B54                                                 loc_150263B54:                          ; CODE XREF: .text:0000000150263B38↑j
.text:0000000150263B54 66 0F 72 F0 11                                                  pslld   xmm0, 11h       ; Packed Shift Left Logical (Dword)
.text:0000000150263B59 66 0F DB 05 3F 9A EB 07                                         pand    xmm0, cs:xmmword_15811D5A0 ; Bitwise Logical And
.text:0000000150263B61 66 0F FA C6                                                     psubd   xmm0, xmm6      ; Packed Subtract Dword
.text:0000000150263B65 F3 0F 59 41 10                                                  mulss   xmm0, dword ptr [rcx+10h] ; Scalar Single-FP Multiply
.text:0000000150263B6A F3 0F 59 C5                                                     mulss   xmm0, xmm5      ; Scalar Single-FP Multiply
.text:0000000150263B6E F3 0F 11 01                                                     movss   dword ptr [rcx], xmm0 ; Move Scalar Single-FP
.text:0000000150263B72
.text:0000000150263B72                                                 loc_150263B72:                          ; CODE XREF: .text:0000000150263B08↑j
.text:0000000150263B72 D1 EA                                                           shr     edx, 1          ; Shift Logical Right
.text:0000000150263B74 48 83 C1 04                                                     add     rcx, 4          ; Add
.text:0000000150263B78 D1 E8                                                           shr     eax, 1          ; Shift Logical Right
.text:0000000150263B7A 75 87                                                           jnz     short loc_150263B03 ; Jump if Not Zero (ZF=0)
.text:0000000150263B7C 0F 28 44 24 20                                                  movaps  xmm0, xmmword ptr [rsp+20h] ; Move Aligned Four Packed Single-FP
.text:0000000150263B81
.text:0000000150263B81                                                 loc_150263B81:                          ; CODE XREF: .text:0000000150263AA9↑j
.text:0000000150263B81                                                                                         ; .text:0000000150263AD5↑j ...
.text:0000000150263B81 0F 10 74 24 50                                                  movups  xmm6, xmmword ptr [rsp+50h] ; Move Unaligned Four Packed Single-FP
.text:0000000150263B86 0F 10 7C 24 60                                                  movups  xmm7, xmmword ptr [rsp+60h] ; Move Unaligned Four Packed Single-FP
.text:0000000150263B8B 48 83 C4 78                                                     add     rsp, 78h        ; Add
.text:0000000150263B8F C3                                                              retn                    ; Return Near from Procedure
.text:0000000150263B90                                                 ; ---------------------------------------------------------------------------
.text:0000000150263B90
.text:0000000150263B90                                                 loc_150263B90:                          ; CODE XREF: .text:0000000150260897↑j
.text:0000000150263B90 4C 8D 05 69 9A EB 07                                            lea     r8, unk_15811D600 ; Load Effective Address
.text:0000000150263B97 0F 28 1D 62 9D EB 07                                            movaps  xmm3, cs:xmmword_15811D900 ; Move Aligned Four Packed Single-FP
.text:0000000150263B9E 0F 59 D8                                                        mulps   xmm3, xmm0      ; Packed Single-FP Multiply
.text:0000000150263BA1 0F 28 25 68 9D EB 07                                            movaps  xmm4, cs:xmmword_15811D910 ; Move Aligned Four Packed Single-FP
.text:0000000150263BA8 0F 28 0D 71 9D EB 07                                            movaps  xmm1, cs:xmmword_15811D920 ; Move Aligned Four Packed Single-FP
.text:0000000150263BAF 66 0F 5B D3                                                     cvtps2dq xmm2, xmm3     ; Convert Packed Single-Precision Floating-Point Values to Packed Doubleword Integers
.text:0000000150263BB3 0F 28 2D 76 9D EB 07                                            movaps  xmm5, cs:xmmword_15811D930 ; Move Aligned Four Packed Single-FP
.text:0000000150263BBA 66 0F DB E8                                                     pand    xmm5, xmm0      ; Bitwise Logical And
.text:0000000150263BBE 66 0F 66 2D 7A 9D EB 07                                         pcmpgtd xmm5, cs:xmmword_15811D940 ; Packed Compare for Greater Than (Dword)
.text:0000000150263BC6 0F 50 CD                                                        movmskps ecx, xmm5      ; Move Mask to Register
.text:0000000150263BC9 23 C9                                                           and     ecx, ecx        ; Logical AND
.text:0000000150263BCB 0F 85 7F 00 00 00                                               jnz     loc_150263C50   ; Jump if Not Zero (ZF=0)
.text:0000000150263BD1 0F 28 E8                                                        movaps  xmm5, xmm0      ; Move Aligned Four Packed Single-FP
.text:0000000150263BD4 66 0F 3A 08 DB 00                                               roundps xmm3, xmm3, 0   ; Round Packed Single Precision Floating-Point Values
.text:0000000150263BDA 66 0F 7E D0                                                     movd    eax, xmm2       ; Move 32 bits
.text:0000000150263BDE 0F 59 E3                                                        mulps   xmm4, xmm3      ; Packed Single-FP Multiply
.text:0000000150263BE1 66 0F C5 D2 02                                                  pextrw  edx, xmm2, 2    ; Extract Word
.text:0000000150263BE6 0F 59 1D 63 9D EB 07                                            mulps   xmm3, cs:xmmword_15811D950 ; Packed Single-FP Multiply
.text:0000000150263BED 83 E0 3F                                                        and     eax, 3Fh        ; Logical AND
.text:0000000150263BF0 83 E2 3F                                                        and     edx, 3Fh        ; Logical AND
.text:0000000150263BF3 66 0F FE CA                                                     paddd   xmm1, xmm2      ; Packed Add Dword
.text:0000000150263BF7 0F 5C C4                                                        subps   xmm0, xmm4      ; Packed Single-FP Subtract
.text:0000000150263BFA F3 41 0F 7E 24 C0                                               movq    xmm4, qword ptr [r8+rax*8] ; Move 64 bits
.text:0000000150263C00 66 0F C5 C2 04                                                  pextrw  eax, xmm2, 4    ; Extract Word
.text:0000000150263C05 41 0F 16 24 D0                                                  movhps  xmm4, qword ptr [r8+rdx*8] ; Move High Packed Single-FP
.text:0000000150263C0A 66 0F C5 D2 06                                                  pextrw  edx, xmm2, 6    ; Extract Word
.text:0000000150263C0F 0F 5C C3                                                        subps   xmm0, xmm3      ; Packed Single-FP Subtract
.text:0000000150263C12 83 E0 3F                                                        and     eax, 3Fh        ; Logical AND
.text:0000000150263C15 83 E2 3F                                                        and     edx, 3Fh        ; Logical AND
.text:0000000150263C18 66 0F 72 D1 06                                                  psrld   xmm1, 6         ; Packed Shift Right Logical (Dword)
.text:0000000150263C1D F3 41 0F 7E 14 C0                                               movq    xmm2, qword ptr [r8+rax*8] ; Move 64 bits
.text:0000000150263C23 41 0F 16 14 D0                                                  movhps  xmm2, qword ptr [r8+rdx*8] ; Move High Packed Single-FP
.text:0000000150263C28 0F 28 D8                                                        movaps  xmm3, xmm0      ; Move Aligned Four Packed Single-FP
.text:0000000150263C2B 0F 58 C0                                                        addps   xmm0, xmm0      ; Packed Single-FP Add
.text:0000000150263C2E 0F 59 DB                                                        mulps   xmm3, xmm3      ; Packed Single-FP Multiply
.text:0000000150263C31 0F 58 05 28 9D EB 07                                            addps   xmm0, cs:xmmword_15811D960 ; Packed Single-FP Add
.text:0000000150263C38 0F C6 E2 88                                                     shufps  xmm4, xmm2, 88h ; Shuffle Single-FP
.text:0000000150263C3C 66 0F 72 F1 17                                                  pslld   xmm1, 17h       ; Packed Shift Left Logical (Dword)
.text:0000000150263C41 0F 58 C3                                                        addps   xmm0, xmm3      ; Packed Single-FP Add
.text:0000000150263C44 66 0F EB CC                                                     por     xmm1, xmm4      ; Bitwise Logical Or
.text:0000000150263C48 0F 59 C1                                                        mulps   xmm0, xmm1      ; Packed Single-FP Multiply
.text:0000000150263C4B C3                                                              retn                    ; Return Near from Procedure
.text:0000000150263C4B                                                 ; ---------------------------------------------------------------------------
.text:0000000150263C4C 0F 1F 40 00                                                     align 10h
.text:0000000150263C50
.text:0000000150263C50                                                 loc_150263C50:                          ; CODE XREF: .text:0000000150263BCB↑j
.text:0000000150263C50 0F 28 E8                                                        movaps  xmm5, xmm0      ; Move Aligned Four Packed Single-FP
.text:0000000150263C53 66 0F 3A 08 DB 00                                               roundps xmm3, xmm3, 0   ; Round Packed Single Precision Floating-Point Values
.text:0000000150263C59 66 0F 7E D1                                                     movd    ecx, xmm2       ; Move 32 bits
.text:0000000150263C5D 0F 59 E3                                                        mulps   xmm4, xmm3      ; Packed Single-FP Multiply
.text:0000000150263C60 66 44 0F C5 CA 02                                               pextrw  r9d, xmm2, 2    ; Extract Word
.text:0000000150263C66 0F 59 1D E3 9C EB 07                                            mulps   xmm3, cs:xmmword_15811D950 ; Packed Single-FP Multiply
.text:0000000150263C6D 83 E1 3F                                                        and     ecx, 3Fh        ; Logical AND
.text:0000000150263C70 41 83 E1 3F                                                     and     r9d, 3Fh        ; Logical AND
.text:0000000150263C74 66 0F FE CA                                                     paddd   xmm1, xmm2      ; Packed Add Dword
.text:0000000150263C78 0F 5C C4                                                        subps   xmm0, xmm4      ; Packed Single-FP Subtract
.text:0000000150263C7B F3 41 0F 7E 24 C8                                               movq    xmm4, qword ptr [r8+rcx*8] ; Move 64 bits
.text:0000000150263C81 66 44 0F C5 D2 04                                               pextrw  r10d, xmm2, 4   ; Extract Word
.text:0000000150263C87 43 0F 16 24 C8                                                  movhps  xmm4, qword ptr [r8+r9*8] ; Move High Packed Single-FP
.text:0000000150263C8C 66 44 0F C5 DA 06                                               pextrw  r11d, xmm2, 6   ; Extract Word
.text:0000000150263C92 0F 5C C3                                                        subps   xmm0, xmm3      ; Packed Single-FP Subtract
.text:0000000150263C95 41 83 E2 3F                                                     and     r10d, 3Fh       ; Logical AND
.text:0000000150263C99 41 83 E3 3F                                                     and     r11d, 3Fh       ; Logical AND
.text:0000000150263C9D 66 0F 72 D1 06                                                  psrld   xmm1, 6         ; Packed Shift Right Logical (Dword)
.text:0000000150263CA2 F3 43 0F 7E 1C D0                                               movq    xmm3, qword ptr [r8+r10*8] ; Move 64 bits
.text:0000000150263CA8 43 0F 16 1C D8                                                  movhps  xmm3, qword ptr [r8+r11*8] ; Move High Packed Single-FP
.text:0000000150263CAD 0F C6 E3 88                                                     shufps  xmm4, xmm3, 88h ; Shuffle Single-FP
.text:0000000150263CB1 0F 28 D8                                                        movaps  xmm3, xmm0      ; Move Aligned Four Packed Single-FP
.text:0000000150263CB4 0F 58 C0                                                        addps   xmm0, xmm0      ; Packed Single-FP Add
.text:0000000150263CB7 0F 59 DB                                                        mulps   xmm3, xmm3      ; Packed Single-FP Multiply
.text:0000000150263CBA 0F 58 05 9F 9C EB 07                                            addps   xmm0, cs:xmmword_15811D960 ; Packed Single-FP Add
.text:0000000150263CC1 66 0F 72 F1 17                                                  pslld   xmm1, 17h       ; Packed Shift Left Logical (Dword)
.text:0000000150263CC6 0F 58 C3                                                        addps   xmm0, xmm3      ; Packed Single-FP Add
.text:0000000150263CC9 66 0F EB CC                                                     por     xmm1, xmm4      ; Bitwise Logical Or
.text:0000000150263CCD 0F 59 C8                                                        mulps   xmm1, xmm0      ; Packed Single-FP Multiply
.text:0000000150263CD0 0F 28 1D 59 9C EB 07                                            movaps  xmm3, cs:xmmword_15811D930 ; Move Aligned Four Packed Single-FP
.text:0000000150263CD7 66 0F DB DD                                                     pand    xmm3, xmm5      ; Bitwise Logical And
.text:0000000150263CDB 0F C2 1D 5D 9C EB 07 01                                         cmpltps xmm3, cs:xmmword_15811D940 ; Packed Single-FP Compare LT
.text:0000000150263CE3 66 0F DB CB                                                     pand    xmm1, xmm3      ; Bitwise Logical And
.text:0000000150263CE7 0F 28 15 42 9C EB 07                                            movaps  xmm2, cs:xmmword_15811D930 ; Move Aligned Four Packed Single-FP
.text:0000000150263CEE 66 0F DB D5                                                     pand    xmm2, xmm5      ; Bitwise Logical And
.text:0000000150263CF2 0F C2 15 76 9C EB 07 01                                         cmpltps xmm2, cs:xmmword_15811D970 ; Packed Single-FP Compare LT
.text:0000000150263CFA 66 0F DF DA                                                     pandn   xmm3, xmm2      ; Bitwise Logical And Not
.text:0000000150263CFE 66 0F DB C3                                                     pand    xmm0, xmm3      ; Bitwise Logical And
.text:0000000150263D02 0F 50 D5                                                        movmskps edx, xmm5      ; Move Mask to Register
.text:0000000150263D05 B8 03 00 00 00                                                  mov     eax, 3
.text:0000000150263D0A 23 C2                                                           and     eax, edx        ; Logical AND
.text:0000000150263D0C 83 E2 0C                                                        and     edx, 0Ch        ; Logical AND
.text:0000000150263D0F 03 C0                                                           add     eax, eax        ; Add
.text:0000000150263D11 0F 28 15 E8 9B EB 07                                            movaps  xmm2, cs:xmmword_15811D900 ; Move Aligned Four Packed Single-FP
.text:0000000150263D18 0F 59 D5                                                        mulps   xmm2, xmm5      ; Packed Single-FP Multiply
.text:0000000150263D1B 0F 5C 15 5E 9C EB 07                                            subps   xmm2, cs:xmmword_15811D980 ; Packed Single-FP Subtract
.text:0000000150263D22 66 0F DB D3                                                     pand    xmm2, xmm3      ; Bitwise Logical And
.text:0000000150263D26 66 0F DB E3                                                     pand    xmm4, xmm3      ; Bitwise Logical And
.text:0000000150263D2A 66 0F FE 15 EE 9B EB 07                                         paddd   xmm2, cs:xmmword_15811D920 ; Packed Add Dword
.text:0000000150263D32 66 0F 72 D2 06                                                  psrld   xmm2, 6         ; Packed Shift Right Logical (Dword)
.text:0000000150263D37 41 0F 28 9C C0 40 02 00 00                                      movaps  xmm3, xmmword ptr [r8+rax*8+240h] ; Move Aligned Four Packed Single-FP
.text:0000000150263D40 41 0F C6 9C 90 40 02 00 00 88                                   shufps  xmm3, xmmword ptr [r8+rdx*4+240h], 88h ; Shuffle Single-FP
.text:0000000150263D4A 66 0F FE D3                                                     paddd   xmm2, xmm3      ; Packed Add Dword
.text:0000000150263D4E 66 0F 72 F2 17                                                  pslld   xmm2, 17h       ; Packed Shift Left Logical (Dword)
.text:0000000150263D53 66 0F EB D4                                                     por     xmm2, xmm4      ; Bitwise Logical Or
.text:0000000150263D57 0F 59 C2                                                        mulps   xmm0, xmm2      ; Packed Single-FP Multiply
.text:0000000150263D5A 41 0F 28 9C C0 00 02 00 00                                      movaps  xmm3, xmmword ptr [r8+rax*8+200h] ; Move Aligned Four Packed Single-FP
.text:0000000150263D63 41 0F C6 9C 90 00 02 00 00 88                                   shufps  xmm3, xmmword ptr [r8+rdx*4+200h], 88h ; Shuffle Single-FP
.text:0000000150263D6D 0F 59 C3                                                        mulps   xmm0, xmm3      ; Packed Single-FP Multiply
.text:0000000150263D70 66 0F EB C1                                                     por     xmm0, xmm1      ; Bitwise Logical Or
.text:0000000150263D74 0F 28 1D B5 9B EB 07                                            movaps  xmm3, cs:xmmword_15811D930 ; Move Aligned Four Packed Single-FP
.text:0000000150263D7B 66 0F DB DD                                                     pand    xmm3, xmm5      ; Bitwise Logical And
.text:0000000150263D7F 0F C2 1D 09 9C EB 07 01                                         cmpltps xmm3, cs:xmmword_15811D990 ; Packed Single-FP Compare LT
.text:0000000150263D87 0F 28 15 A2 9B EB 07                                            movaps  xmm2, cs:xmmword_15811D930 ; Move Aligned Four Packed Single-FP
.text:0000000150263D8E 66 0F DB D5                                                     pand    xmm2, xmm5      ; Bitwise Logical And
.text:0000000150263D92 0F C2 15 D6 9B EB 07 01                                         cmpltps xmm2, cs:xmmword_15811D970 ; Packed Single-FP Compare LT
.text:0000000150263D9A 66 0F DF D3                                                     pandn   xmm2, xmm3      ; Bitwise Logical And Not
.text:0000000150263D9E 41 0F 28 8C C0 80 02 00 00                                      movaps  xmm1, xmmword ptr [r8+rax*8+280h] ; Move Aligned Four Packed Single-FP
.text:0000000150263DA7 41 0F C6 8C 90 80 02 00 00 88                                   shufps  xmm1, xmmword ptr [r8+rdx*4+280h], 88h ; Shuffle Single-FP
.text:0000000150263DB1 66 0F DB CA                                                     pand    xmm1, xmm2      ; Bitwise Logical And
.text:0000000150263DB5 0F 28 15 74 9B EB 07                                            movaps  xmm2, cs:xmmword_15811D930 ; Move Aligned Four Packed Single-FP
.text:0000000150263DBC 66 0F DB D5                                                     pand    xmm2, xmm5      ; Bitwise Logical And
.text:0000000150263DC0 0F C2 15 C8 9B EB 07 00                                         cmpeqps xmm2, cs:xmmword_15811D990 ; Packed Single-FP Compare EQ
.text:0000000150263DC8 41 0F 28 9C C0 C0 02 00 00                                      movaps  xmm3, xmmword ptr [r8+rax*8+2C0h] ; Move Aligned Four Packed Single-FP
.text:0000000150263DD1 41 0F C6 9C 90 C0 02 00 00 88                                   shufps  xmm3, xmmword ptr [r8+rdx*4+2C0h], 88h ; Shuffle Single-FP
.text:0000000150263DDB 66 0F DB D3                                                     pand    xmm2, xmm3      ; Bitwise Logical And
.text:0000000150263DDF 66 0F EB CA                                                     por     xmm1, xmm2      ; Bitwise Logical Or
.text:0000000150263DE3 0F 28 15 B6 9B EB 07                                            movaps  xmm2, cs:xmmword_15811D9A0 ; Move Aligned Four Packed Single-FP
.text:0000000150263DEA 0F C2 D5 03                                                     cmpunordps xmm2, xmm5   ; Packed Single-FP Compare UNORD
.text:0000000150263DEE 66 0F DB EA                                                     pand    xmm5, xmm2      ; Bitwise Logical And
.text:0000000150263DF2 66 0F EB CD                                                     por     xmm1, xmm5      ; Bitwise Logical Or
.text:0000000150263DF6 0F 59 C9                                                        mulps   xmm1, xmm1      ; Packed Single-FP Multiply
.text:0000000150263DF9 66 0F EB C1                                                     por     xmm0, xmm1      ; Bitwise Logical Or
.text:0000000150263DFD C3                                                              retn                    ; Return Near from Procedure
.text:0000000150263DFD                                                 ; ---------------------------------------------------------------------------
.text:0000000150263DFE CC CC                                                           align 20h
sub_150263E00
