
```c
Aob  IDA: "48 8B 1D ?? ?? ?? ?? EB 35 48 8B 0D ?? ?? ?? ?? 0F B6 05 ?? ?? ?? ?? 48 89 8C 24 50 01 00 00 34 37 48 C1 E9 08 80 F1 37 88 84 24 51 01 00 00 88 8C 24 56 01 00 00 48 8B 9C 24 50 01 00 00 FF 15 ?? ?? ?? ?? 84 C0 75 0C"
sub_14E209110+224  48 8B 1D 3D 09 81 08    mov     rbx, cs:qword_156A19C78

Aob2  IDA: "48 8B 15 ?? ?? ?? ?? E9 CE 00 00 00"
sub_14E209110+26C  48 8B 15 F5 08 81 08   mov     rdx, cs:qword_156A19C78

Aob3  IDA: "48 8B 1D ?? ?? ?? ?? EB 35 48 8B 0D ?? ?? ?? ?? 0F B6 05 ?? ?? ?? ?? 48 89 8C 24 50 01 00 00 34 37 48 C1 E9 08 80 F1 37 88 84 24 51 01 00 00 88 8C 24 56 01 00 00 48 8B 9C 24 50 01 00 00 FF 15 ?? ?? ?? ?? 84 C0 75 09"
sub_14E209110+2BC  48 8B 1D A5 08 81 08   mov     rbx, cs:qword_156A19C78

Aob4 IDA: "48 8B 15 ?? ?? ?? ?? EB 35 48 8B 0D ?? ?? ?? ?? 0F B6 05 ?? ?? ?? ?? 48 89 8C 24 50 01 00 00 34 37 48 C1 E9 08 80 F1 37 88 84 24 51 01 00 00 88 8C 24 56 01 00 00 48 8B 94 24 50 01 00 00 48 8D 77 36"
sub_14E209110+304  48 8B 15 5D 08 81 08   mov     rdx, cs:qword_156A19C78
```

sub_14E209110+224  48 8B 1D 3D 09 81 08                                            mov     rbx, cs:qword_156A19C78
sub_14E209110+22B  EB 35                                                           jmp     short loc_14E209372 ; Jump
sub_14E209110+22D                                                  ; ---------------------------------------------------------------------------
sub_14E209110+22D
sub_14E209110+22D                                                  loc_14E20933D:                          ; CODE XREF: sub_14E209110+222↑j
sub_14E209110+22D  48 8B 0D 34 29 81 08                                            mov     rcx, cs:qword_156A1BC78
sub_14E209110+234  0F B6 05 33 29 81 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
sub_14E209110+23B  48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
sub_14E209110+243  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
sub_14E209110+245  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
sub_14E209110+249  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
sub_14E209110+24C  88 84 24 51 01 00 00                                            mov     [rsp+151h], al
sub_14E209110+253  88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
sub_14E209110+25A  48 8B 9C 24 50 01 00 00                                         mov     rbx, [rsp+150h]
sub_14E209110+262
sub_14E209110+262                                                  loc_14E209372:                          ; CODE XREF: sub_14E209110+22B↑j
sub_14E209110+262  FF 15 F8 F8 80 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
sub_14E209110+268  84 C0                                                           test    al, al          ; Logical Compare
sub_14E209110+26A  75 0C                                                           jnz     short loc_14E209388 ; Jump if Not Zero (ZF=0)
sub_14E209110+26C  48 8B 15 F5 08 81 08                                            mov     rdx, cs:qword_156A19C78
sub_14E209110+273  E9 CE 00 00 00                                                  jmp     loc_14E209456   ; Jump
sub_14E209110+278                                                  ; ---------------------------------------------------------------------------
sub_14E209110+278
sub_14E209110+278                                                  loc_14E209388:                          ; CODE XREF: sub_14E209110+26A↑j
sub_14E209110+278  48 8B 0D E9 28 81 08                                            mov     rcx, cs:qword_156A1BC78
sub_14E209110+27F  0F B6 05 E8 28 81 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
sub_14E209110+286  48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
sub_14E209110+28E  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
sub_14E209110+290  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
sub_14E209110+294  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
sub_14E209110+297  88 84 24 51 01 00 00                                            mov     [rsp+151h], al
sub_14E209110+29E  88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
sub_14E209110+2A5  48 8B 94 24 50 01 00 00                                         mov     rdx, [rsp+150h]
sub_14E209110+2AD  E9 94 00 00 00                                                  jmp     loc_14E209456   ; Jump
sub_14E209110+2B2                                                  ; ---------------------------------------------------------------------------
sub_14E209110+2B2
sub_14E209110+2B2                                                  loc_14E2093C2:                          ; CODE XREF: sub_14E209110+1FC↑j
sub_14E209110+2B2                                                                                          ; sub_14E209110+20C↑j
sub_14E209110+2B2  FF 15 A8 F8 80 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
sub_14E209110+2B8  84 C0                                                           test    al, al          ; Logical Compare
sub_14E209110+2BA  75 09                                                           jnz     short loc_14E2093D5 ; Jump if Not Zero (ZF=0)
sub_14E209110+2BC  48 8B 1D A5 08 81 08                                            mov     rbx, cs:qword_156A19C78
sub_14E209110+2C3  EB 35                                                           jmp     short loc_14E20940A ; Jump
sub_14E209110+2C5                                                  ; ---------------------------------------------------------------------------
sub_14E209110+2C5
sub_14E209110+2C5                                                  loc_14E2093D5:                          ; CODE XREF: sub_14E209110+2BA↑j
sub_14E209110+2C5  48 8B 0D 9C 28 81 08                                            mov     rcx, cs:qword_156A1BC78
sub_14E209110+2CC  0F B6 05 9B 28 81 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
sub_14E209110+2D3  48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
sub_14E209110+2DB  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
sub_14E209110+2DD  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
sub_14E209110+2E1  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
sub_14E209110+2E4  88 84 24 51 01 00 00                                            mov     [rsp+151h], al
sub_14E209110+2EB  88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
sub_14E209110+2F2  48 8B 9C 24 50 01 00 00                                         mov     rbx, [rsp+150h]
sub_14E209110+2FA
sub_14E209110+2FA                                                  loc_14E20940A:                          ; CODE XREF: sub_14E209110+2C3↑j
sub_14E209110+2FA  FF 15 60 F8 80 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
sub_14E209110+300  84 C0                                                           test    al, al          ; Logical Compare
sub_14E209110+302  75 09                                                           jnz     short loc_14E20941D ; Jump if Not Zero (ZF=0)
sub_14E209110+304  48 8B 15 5D 08 81 08                                            mov     rdx, cs:qword_156A19C78
sub_14E209110+30B  EB 35                                                           jmp     short loc_14E209452 ; Jump
sub_14E209110+30D                                                  ; ---------------------------------------------------------------------------
sub_14E209110+30D
sub_14E209110+30D                                                  loc_14E20941D:                          ; CODE XREF: sub_14E209110+302↑j
sub_14E209110+30D  48 8B 0D 54 28 81 08                                            mov     rcx, cs:qword_156A1BC78
sub_14E209110+314  0F B6 05 53 28 81 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
sub_14E209110+31B  48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
sub_14E209110+323  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
sub_14E209110+325  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
sub_14E209110+329  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
sub_14E209110+32C  88 84 24 51 01 00 00                                            mov     [rsp+151h], al
sub_14E209110+333  88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
sub_14E209110+33A  48 8B 94 24 50 01 00 00                                         mov     rdx, [rsp+150h]
sub_14E209110+342
sub_14E209110+342                                                  loc_14E209452:                          ; CODE XREF: sub_14E209110+30B↑j
sub_14E209110+342  48 8D 77 36                                                     lea     rsi, [rdi+36h]  ; Load Effective Address
sub_14E209110+346
sub_14E209110+346                                                  loc_14E209456:                          ; CODE XREF: sub_14E209110+273↑j
sub_14E209110+346                                                                                          ; sub_14E209110+2AD↑j
sub_14E209110+346  F3 0F 10 93 20 0B 00 00                                         movss   xmm2, dword ptr [rbx+0B20h] ; Move Scalar Single-FP
sub_14E209110+34E  41 B8 A0 0A 00 00                                               mov     r8d, 0AA0h
sub_14E209110+354  0F B6 8A DC 0A 00 00                                            movzx   ecx, byte ptr [rdx+0ADCh] ; Move with Zero-Extend
sub_14E209110+35B  0F 28 DA                                                        movaps  xmm3, xmm2      ; Move Aligned Four Packed Single-FP
sub_14E209110+35E  84 C9                                                           test    cl, cl          ; Logical Compare
sub_14E209110+360  0F 28 CA                                                        movaps  xmm1, xmm2      ; Move Aligned Four Packed Single-FP
sub_14E209110+363  0F 28 C2                                                        movaps  xmm0, xmm2      ; Move Aligned Four Packed Single-FP
sub_14E209110+366  B8 CC 0A 00 00                                                  mov     eax, 0ACCh
sub_14E209110+36B  49 0F 44 C6                                                     cmovz   rax, r14        ; Move if Zero (ZF=1)
sub_14E209110+36F  B9 A8 0A 00 00                                                  mov     ecx, 0AA8h
sub_14E209110+374  F3 0F 59 1C 10                                                  mulss   xmm3, dword ptr [rax+rdx] ; Scalar Single-FP Multiply
sub_14E209110+379  B8 D0 0A 00 00                                                  mov     eax, 0AD0h
sub_14E209110+37E  41 0F 44 C0                                                     cmovz   eax, r8d        ; Move if Zero (ZF=1)
sub_14E209110+382  41 B8 A4 0A 00 00                                               mov     r8d, 0AA4h
sub_14E209110+388  F3 41 0F 59 DA                                                  mulss   xmm3, xmm10     ; Scalar Single-FP Multiply
sub_14E209110+38D  F3 0F 59 0C 10                                                  mulss   xmm1, dword ptr [rax+rdx] ; Scalar Single-FP Multiply
sub_14E209110+392  B8 D4 0A 00 00                                                  mov     eax, 0AD4h
sub_14E209110+397  41 0F 44 C0                                                     cmovz   eax, r8d        ; Move if Zero (ZF=1)





FULL Fun








sub_14E209110
sub_14E209110                                                      ; =============== S U B R O U T I N E =======================================
sub_14E209110
sub_14E209110
sub_14E209110                                                      sub_14E209110   proc near
sub_14E209110
sub_14E209110                                                      var_128         = qword ptr -128h
sub_14E209110                                                      var_120         = qword ptr -120h
sub_14E209110                                                      var_118         = byte ptr -118h
sub_14E209110                                                      var_110         = dword ptr -110h
sub_14E209110                                                      var_108         = dword ptr -108h
sub_14E209110                                                      var_100         = dword ptr -100h
sub_14E209110                                                      var_F8          = dword ptr -0F8h
sub_14E209110                                                      var_F0          = byte ptr -0F0h
sub_14E209110                                                      var_E8          = qword ptr -0E8h
sub_14E209110                                                      var_E0          = qword ptr -0E0h
sub_14E209110                                                      var_D8          = qword ptr -0D8h
sub_14E209110                                                      var_D0          = qword ptr -0D0h
sub_14E209110                                                      var_C8          = xmmword ptr -0C8h
sub_14E209110                                                      var_B8          = xmmword ptr -0B8h
sub_14E209110                                                      var_A8          = byte ptr -0A8h
sub_14E209110                                                      var_98          = xmmword ptr -98h
sub_14E209110                                                      var_88          = xmmword ptr -88h
sub_14E209110                                                      var_78          = xmmword ptr -78h
sub_14E209110                                                      var_68          = xmmword ptr -68h
sub_14E209110                                                      var_58          = xmmword ptr -58h
sub_14E209110                                                      var_48          = xmmword ptr -48h
sub_14E209110                                                      var_38          = qword ptr -38h
sub_14E209110                                                      var_30          = qword ptr -30h
sub_14E209110                                                      var_28          = qword ptr -28h
sub_14E209110                                                      var_20          = qword ptr -20h
sub_14E209110                                                      var_18          = qword ptr -18h
sub_14E209110                                                      var_10          = qword ptr -10h
sub_14E209110                                                      arg_0           = qword ptr  8
sub_14E209110                                                      arg_8           = qword ptr  10h
sub_14E209110                                                      arg_10          = qword ptr  18h
sub_14E209110                                                      arg_18          = dword ptr  20h
sub_14E209110                                                      arg_20          = qword ptr  28h
sub_14E209110
sub_14E209110      4C 8B DC                                                        mov     r11, rsp
sub_14E209110+3    45 89 4B 20                                                     mov     [r11+20h], r9d
sub_14E209110+7    49 89 53 10                                                     mov     [r11+10h], rdx
sub_14E209110+B    57                                                              push    rdi
sub_14E209110+C    48 81 EC 40 01 00 00                                            sub     rsp, 140h       ; Integer Subtraction
sub_14E209110+13   48 8B 81 30 04 00 00                                            mov     rax, [rcx+430h]
sub_14E209110+1A   48 8B F9                                                        mov     rdi, rcx
sub_14E209110+1D   48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_14E209110+20   0F 84 7A 05 00 00                                               jz      loc_14E2096B0   ; Jump if Zero (ZF=1)
sub_14E209110+26   48 8B 80 F0 00 00 00                                            mov     rax, [rax+0F0h]
sub_14E209110+2D   48 89 44 24 78                                                  mov     [rsp+78h], rax
sub_14E209110+32   48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_14E209110+35   0F 84 65 05 00 00                                               jz      loc_14E2096B0   ; Jump if Zero (ZF=1)
sub_14E209110+3B   4D 89 6B D8                                                     mov     [r11-28h], r13
sub_14E209110+3F   45 33 ED                                                        xor     r13d, r13d      ; Logical Exclusive OR
sub_14E209110+42   44 39 6A 08                                                     cmp     [rdx+8], r13d   ; Compare Two Operands
sub_14E209110+46   0F 8E 4C 05 00 00                                               jle     loc_14E2096A8   ; Jump if Less or Equal (ZF=1 | SF!=OF)
sub_14E209110+4C   49 89 73 E8                                                     mov     [r11-18h], rsi
sub_14E209110+50   4D 89 63 E0                                                     mov     [r11-20h], r12
sub_14E209110+54   45 8B E5                                                        mov     r12d, r13d
sub_14E209110+57   4D 89 73 D0                                                     mov     [r11-30h], r14
sub_14E209110+5B   41 BE 9C 0A 00 00                                               mov     r14d, 0A9Ch
sub_14E209110+61   4D 89 7B C8                                                     mov     [r11-38h], r15
sub_14E209110+65   41 BF 01 00 00 00                                               mov     r15d, 1
sub_14E209110+6B   45 0F 29 4B 88                                                  movaps  xmmword ptr [r11-78h], xmm9 ; Move Aligned Four Packed Single-FP
sub_14E209110+70   F3 44 0F 10 0D 87 3E 4C 02                                      movss   xmm9, dword ptr cs:xmmword_1506CD010 ; Move Scalar Single-FP
sub_14E209110+79   45 0F 29 93 78 FF FF FF                                         movaps  xmmword ptr [r11-88h], xmm10 ; Move Aligned Four Packed Single-FP
sub_14E209110+81   F3 44 0F 10 15 A2 3E 4C 02                                      movss   xmm10, dword ptr cs:ymmword_1506CD020+1Ch ; Move Scalar Single-FP
sub_14E209110+8A   45 0F 29 9B 68 FF FF FF                                         movaps  xmmword ptr [r11-98h], xmm11 ; Move Aligned Four Packed Single-FP
sub_14E209110+92   45 0F 57 DB                                                     xorps   xmm11, xmm11    ; Bitwise Logical XOR for Single-FP Data
sub_14E209110+96   49 89 5B 18                                                     mov     [r11+18h], rbx
sub_14E209110+9A   49 89 6B F0                                                     mov     [r11-10h], rbp
sub_14E209110+9E   41 0F 29 73 B8                                                  movaps  xmmword ptr [r11-48h], xmm6 ; Move Aligned Four Packed Single-FP
sub_14E209110+A3   41 0F 29 7B A8                                                  movaps  xmmword ptr [r11-58h], xmm7 ; Move Aligned Four Packed Single-FP
sub_14E209110+A8   45 0F 29 43 98                                                  movaps  xmmword ptr [r11-68h], xmm8 ; Move Aligned Four Packed Single-FP
sub_14E209110+AD   0F 1F 00                                                        nop     dword ptr [rax] ; No Operation
sub_14E209110+B0
sub_14E209110+B0                                                   loc_14E2091C0:                          ; CODE XREF: sub_14E209110+52E↓j
sub_14E209110+B0   45 85 F9                                                        test    r9d, r15d       ; Logical Compare
sub_14E209110+B3   0F 84 67 04 00 00                                               jz      loc_14E209630   ; Jump if Zero (ZF=1)
sub_14E209110+B9   48 8B CA                                                        mov     rcx, rdx
sub_14E209110+BC   FF 15 9E 15 64 08                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14E209110+C2   F6 87 58 04 00 00 01                                            test    byte ptr [rdi+458h], 1 ; Logical Compare
sub_14E209110+C9   F3 0F 10 BF 24 04 00 00                                         movss   xmm7, dword ptr [rdi+424h] ; Move Scalar Single-FP
sub_14E209110+D1   F3 44 0F 10 87 28 04 00 00                                      movss   xmm8, dword ptr [rdi+428h] ; Move Scalar Single-FP
sub_14E209110+DA   49 8B 2C 04                                                     mov     rbp, [r12+rax]
sub_14E209110+DE   0F 84 05 01 00 00                                               jz      loc_14E2092F9   ; Jump if Zero (ZF=1)
sub_14E209110+E4   0F B6 05 75 5B 32 09                                            movzx   eax, cs:byte_15752ED70 ; Move with Zero-Extend
sub_14E209110+EB   84 C0                                                           test    al, al          ; Logical Compare
sub_14E209110+ED   74 26                                                           jz      short loc_14E209225 ; Jump if Zero (ZF=1)
sub_14E209110+EF   4C 8D 44 24 60                                                  lea     r8, [rsp+60h]   ; Load Effective Address
sub_14E209110+F4   48 8B D5                                                        mov     rdx, rbp
sub_14E209110+F7   48 8D 0D CA 06 CC 07                                            lea     rcx, unk_155EC98D8 ; Load Effective Address
sub_14E209110+FE   E8 CD A4 E3 F2                                                  call    sub_1410436E0   ; Call Procedure
sub_14E209110+103  84 C0                                                           test    al, al          ; Logical Compare
sub_14E209110+105  74 0E                                                           jz      short loc_14E209225 ; Jump if Zero (ZF=1)
sub_14E209110+107  48 8B 4C 24 60                                                  mov     rcx, [rsp+60h]
sub_14E209110+10C  48 8D 9D 10 03 00 00                                            lea     rbx, [rbp+310h] ; Load Effective Address
sub_14E209110+113  EB 0A                                                           jmp     short loc_14E20922F ; Jump
sub_14E209110+115                                                  ; ---------------------------------------------------------------------------
sub_14E209110+115
sub_14E209110+115                                                  loc_14E209225:                          ; CODE XREF: sub_14E209110+ED↑j
sub_14E209110+115                                                                                          ; sub_14E209110+105↑j
sub_14E209110+115  48 8D 9D 10 03 00 00                                            lea     rbx, [rbp+310h] ; Load Effective Address
sub_14E209110+11C  48 8B CB                                                        mov     rcx, rbx
sub_14E209110+11F
sub_14E209110+11F                                                  loc_14E20922F:                          ; CODE XREF: sub_14E209110+113↑j
sub_14E209110+11F  48 63 81 00 09 00 00                                            movsxd  rax, dword ptr [rcx+900h] ; Move with Sign-Extend Doubleword
sub_14E209110+126  48 C1 E0 06                                                     shl     rax, 6          ; Shift Logical Left
sub_14E209110+12A  44 0F 2E 4C 08 3C                                               ucomiss xmm9, dword ptr [rax+rcx+3Ch] ; Scalar Unordered Single-FP Compare and Set EFLAGS
sub_14E209110+130  0F 84 B3 00 00 00                                               jz      loc_14E2092F9   ; Jump if Zero (ZF=1)
sub_14E209110+136  0F B6 05 23 5B 32 09                                            movzx   eax, cs:byte_15752ED70 ; Move with Zero-Extend
sub_14E209110+13D  84 C0                                                           test    al, al          ; Logical Compare
sub_14E209110+13F  74 1D                                                           jz      short loc_14E20926E ; Jump if Zero (ZF=1)
sub_14E209110+141  4C 8D 44 24 68                                                  lea     r8, [rsp+68h]   ; Load Effective Address
sub_14E209110+146  48 8B D5                                                        mov     rdx, rbp
sub_14E209110+149  48 8D 0D 78 06 CC 07                                            lea     rcx, unk_155EC98D8 ; Load Effective Address
sub_14E209110+150  E8 7B A4 E3 F2                                                  call    sub_1410436E0   ; Call Procedure
sub_14E209110+155  84 C0                                                           test    al, al          ; Logical Compare
sub_14E209110+157  48 8B 44 24 68                                                  mov     rax, [rsp+68h]
sub_14E209110+15C  75 03                                                           jnz     short loc_14E209271 ; Jump if Not Zero (ZF=0)
sub_14E209110+15E
sub_14E209110+15E                                                  loc_14E20926E:                          ; CODE XREF: sub_14E209110+13F↑j
sub_14E209110+15E  48 8B C3                                                        mov     rax, rbx
sub_14E209110+161
sub_14E209110+161                                                  loc_14E209271:                          ; CODE XREF: sub_14E209110+15C↑j
sub_14E209110+161  48 63 B0 00 09 00 00                                            movsxd  rsi, dword ptr [rax+900h] ; Move with Sign-Extend Doubleword
sub_14E209110+168  48 C1 E6 06                                                     shl     rsi, 6          ; Shift Logical Left
sub_14E209110+16C  48 03 F0                                                        add     rsi, rax        ; Add
sub_14E209110+16F  0F B6 05 EA 5A 32 09                                            movzx   eax, cs:byte_15752ED70 ; Move with Zero-Extend
sub_14E209110+176  84 C0                                                           test    al, al          ; Logical Compare
sub_14E209110+178  74 1D                                                           jz      short loc_14E2092A7 ; Jump if Zero (ZF=1)
sub_14E209110+17A  4C 8D 44 24 70                                                  lea     r8, [rsp+70h]   ; Load Effective Address
sub_14E209110+17F  48 8B D5                                                        mov     rdx, rbp
sub_14E209110+182  48 8D 0D 3F 06 CC 07                                            lea     rcx, unk_155EC98D8 ; Load Effective Address
sub_14E209110+189  E8 42 A4 E3 F2                                                  call    sub_1410436E0   ; Call Procedure
sub_14E209110+18E  84 C0                                                           test    al, al          ; Logical Compare
sub_14E209110+190  74 05                                                           jz      short loc_14E2092A7 ; Jump if Zero (ZF=1)
sub_14E209110+192  48 8B 5C 24 70                                                  mov     rbx, [rsp+70h]
sub_14E209110+197
sub_14E209110+197                                                  loc_14E2092A7:                          ; CODE XREF: sub_14E209110+178↑j
sub_14E209110+197                                                                                          ; sub_14E209110+190↑j
sub_14E209110+197  48 63 83 00 09 00 00                                            movsxd  rax, dword ptr [rbx+900h] ; Move with Sign-Extend Doubleword
sub_14E209110+19E  48 C1 E0 06                                                     shl     rax, 6          ; Shift Logical Left
sub_14E209110+1A2  F3 0F 10 34 18                                                  movss   xmm6, dword ptr [rax+rbx] ; Move Scalar Single-FP
sub_14E209110+1A7  F3 0F 5D 76 14                                                  minss   xmm6, dword ptr [rsi+14h] ; Scalar Single-FP Minimum
sub_14E209110+1AC  41 0F 2E F3                                                     ucomiss xmm6, xmm11     ; Scalar Unordered Single-FP Compare and Set EFLAGS
sub_14E209110+1B0  74 37                                                           jz      short loc_14E2092F9 ; Jump if Zero (ZF=1)
sub_14E209110+1B2  4C 8D 87 18 04 00 00                                            lea     r8, [rdi+418h]  ; Load Effective Address
sub_14E209110+1B9  48 8B CD                                                        mov     rcx, rbp
sub_14E209110+1BC  48 8D 94 24 A0 00 00 00                                         lea     rdx, [rsp+0A0h] ; Load Effective Address
sub_14E209110+1C4  E8 F7 FD 68 00                                                  call    sub_14E8990D0   ; Call Procedure
sub_14E209110+1C9  F3 0F 10 87 2C 04 00 00                                         movss   xmm0, dword ptr [rdi+42Ch] ; Move Scalar Single-FP
sub_14E209110+1D1  F3 0F 5E C6                                                     divss   xmm0, xmm6      ; Scalar Single-FP Divide
sub_14E209110+1D5  F3 0F 59 40 0C                                                  mulss   xmm0, dword ptr [rax+0Ch] ; Scalar Single-FP Multiply
sub_14E209110+1DA  41 0F 2F C1                                                     comiss  xmm0, xmm9      ; Scalar Ordered Single-FP Compare and Set EFLAGS
sub_14E209110+1DE  73 09                                                           jnb     short loc_14E2092F9 ; Jump if Not Below (CF=0)
sub_14E209110+1E0  F3 0F 59 F8                                                     mulss   xmm7, xmm0      ; Scalar Single-FP Multiply
sub_14E209110+1E4  F3 44 0F 59 C0                                                  mulss   xmm8, xmm0      ; Scalar Single-FP Multiply
sub_14E209110+1E9
sub_14E209110+1E9                                                  loc_14E2092F9:                          ; CODE XREF: sub_14E209110+DE↑j
sub_14E209110+1E9                                                                                          ; sub_14E209110+130↑j ...
sub_14E209110+1E9  80 7F 35 00                                                     cmp     byte ptr [rdi+35h], 0 ; Compare Two Operands
sub_14E209110+1ED  0F 10 87 48 04 00 00                                            movups  xmm0, xmmword ptr [rdi+448h] ; Move Unaligned Four Packed Single-FP
sub_14E209110+1F4  0F 11 84 24 80 00 00 00                                         movups  xmmword ptr [rsp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14E209110+1FC  0F 8C B0 00 00 00                                               jl      loc_14E2093C2   ; Jump if Less (SF!=OF)
sub_14E209110+202  0F B6 47 36                                                     movzx   eax, byte ptr [rdi+36h] ; Move with Zero-Extend
sub_14E209110+206  48 8D 77 36                                                     lea     rsi, [rdi+36h]  ; Load Effective Address
sub_14E209110+20A  A8 01                                                           test    al, 1           ; Logical Compare
sub_14E209110+20C  0F 85 A0 00 00 00                                               jnz     loc_14E2093C2   ; Jump if Not Zero (ZF=0)
sub_14E209110+212  A8 04                                                           test    al, 4           ; Logical Compare
sub_14E209110+214  0F 84 EE 01 00 00                                               jz      loc_14E209518   ; Jump if Zero (ZF=1)
sub_14E209110+21A  FF 15 40 F9 80 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
sub_14E209110+220  84 C0                                                           test    al, al          ; Logical Compare
sub_14E209110+222  75 09                                                           jnz     short loc_14E20933D ; Jump if Not Zero (ZF=0)
sub_14E209110+224  48 8B 1D 3D 09 81 08                                            mov     rbx, cs:qword_156A19C78
sub_14E209110+22B  EB 35                                                           jmp     short loc_14E209372 ; Jump
sub_14E209110+22D                                                  ; ---------------------------------------------------------------------------
sub_14E209110+22D
sub_14E209110+22D                                                  loc_14E20933D:                          ; CODE XREF: sub_14E209110+222↑j
sub_14E209110+22D  48 8B 0D 34 29 81 08                                            mov     rcx, cs:qword_156A1BC78
sub_14E209110+234  0F B6 05 33 29 81 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
sub_14E209110+23B  48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
sub_14E209110+243  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
sub_14E209110+245  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
sub_14E209110+249  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
sub_14E209110+24C  88 84 24 51 01 00 00                                            mov     [rsp+151h], al
sub_14E209110+253  88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
sub_14E209110+25A  48 8B 9C 24 50 01 00 00                                         mov     rbx, [rsp+150h]
sub_14E209110+262
sub_14E209110+262                                                  loc_14E209372:                          ; CODE XREF: sub_14E209110+22B↑j
sub_14E209110+262  FF 15 F8 F8 80 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
sub_14E209110+268  84 C0                                                           test    al, al          ; Logical Compare
sub_14E209110+26A  75 0C                                                           jnz     short loc_14E209388 ; Jump if Not Zero (ZF=0)
sub_14E209110+26C  48 8B 15 F5 08 81 08                                            mov     rdx, cs:qword_156A19C78
sub_14E209110+273  E9 CE 00 00 00                                                  jmp     loc_14E209456   ; Jump
sub_14E209110+278                                                  ; ---------------------------------------------------------------------------
sub_14E209110+278
sub_14E209110+278                                                  loc_14E209388:                          ; CODE XREF: sub_14E209110+26A↑j
sub_14E209110+278  48 8B 0D E9 28 81 08                                            mov     rcx, cs:qword_156A1BC78
sub_14E209110+27F  0F B6 05 E8 28 81 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
sub_14E209110+286  48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
sub_14E209110+28E  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
sub_14E209110+290  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
sub_14E209110+294  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
sub_14E209110+297  88 84 24 51 01 00 00                                            mov     [rsp+151h], al
sub_14E209110+29E  88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
sub_14E209110+2A5  48 8B 94 24 50 01 00 00                                         mov     rdx, [rsp+150h]
sub_14E209110+2AD  E9 94 00 00 00                                                  jmp     loc_14E209456   ; Jump
sub_14E209110+2B2                                                  ; ---------------------------------------------------------------------------
sub_14E209110+2B2
sub_14E209110+2B2                                                  loc_14E2093C2:                          ; CODE XREF: sub_14E209110+1FC↑j
sub_14E209110+2B2                                                                                          ; sub_14E209110+20C↑j
sub_14E209110+2B2  FF 15 A8 F8 80 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
sub_14E209110+2B8  84 C0                                                           test    al, al          ; Logical Compare
sub_14E209110+2BA  75 09                                                           jnz     short loc_14E2093D5 ; Jump if Not Zero (ZF=0)
sub_14E209110+2BC  48 8B 1D A5 08 81 08                                            mov     rbx, cs:qword_156A19C78
sub_14E209110+2C3  EB 35                                                           jmp     short loc_14E20940A ; Jump
sub_14E209110+2C5                                                  ; ---------------------------------------------------------------------------
sub_14E209110+2C5
sub_14E209110+2C5                                                  loc_14E2093D5:                          ; CODE XREF: sub_14E209110+2BA↑j
sub_14E209110+2C5  48 8B 0D 9C 28 81 08                                            mov     rcx, cs:qword_156A1BC78
sub_14E209110+2CC  0F B6 05 9B 28 81 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
sub_14E209110+2D3  48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
sub_14E209110+2DB  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
sub_14E209110+2DD  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
sub_14E209110+2E1  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
sub_14E209110+2E4  88 84 24 51 01 00 00                                            mov     [rsp+151h], al
sub_14E209110+2EB  88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
sub_14E209110+2F2  48 8B 9C 24 50 01 00 00                                         mov     rbx, [rsp+150h]
sub_14E209110+2FA
sub_14E209110+2FA                                                  loc_14E20940A:                          ; CODE XREF: sub_14E209110+2C3↑j
sub_14E209110+2FA  FF 15 60 F8 80 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
sub_14E209110+300  84 C0                                                           test    al, al          ; Logical Compare
sub_14E209110+302  75 09                                                           jnz     short loc_14E20941D ; Jump if Not Zero (ZF=0)
sub_14E209110+304  48 8B 15 5D 08 81 08                                            mov     rdx, cs:qword_156A19C78
sub_14E209110+30B  EB 35                                                           jmp     short loc_14E209452 ; Jump
sub_14E209110+30D                                                  ; ---------------------------------------------------------------------------
sub_14E209110+30D
sub_14E209110+30D                                                  loc_14E20941D:                          ; CODE XREF: sub_14E209110+302↑j
sub_14E209110+30D  48 8B 0D 54 28 81 08                                            mov     rcx, cs:qword_156A1BC78
sub_14E209110+314  0F B6 05 53 28 81 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
sub_14E209110+31B  48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
sub_14E209110+323  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
sub_14E209110+325  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
sub_14E209110+329  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
sub_14E209110+32C  88 84 24 51 01 00 00                                            mov     [rsp+151h], al
sub_14E209110+333  88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
sub_14E209110+33A  48 8B 94 24 50 01 00 00                                         mov     rdx, [rsp+150h]
sub_14E209110+342
sub_14E209110+342                                                  loc_14E209452:                          ; CODE XREF: sub_14E209110+30B↑j
sub_14E209110+342  48 8D 77 36                                                     lea     rsi, [rdi+36h]  ; Load Effective Address
sub_14E209110+346
sub_14E209110+346                                                  loc_14E209456:                          ; CODE XREF: sub_14E209110+273↑j
sub_14E209110+346                                                                                          ; sub_14E209110+2AD↑j
sub_14E209110+346  F3 0F 10 93 20 0B 00 00                                         movss   xmm2, dword ptr [rbx+0B20h] ; Move Scalar Single-FP
sub_14E209110+34E  41 B8 A0 0A 00 00                                               mov     r8d, 0AA0h
sub_14E209110+354  0F B6 8A DC 0A 00 00                                            movzx   ecx, byte ptr [rdx+0ADCh] ; Move with Zero-Extend
sub_14E209110+35B  0F 28 DA                                                        movaps  xmm3, xmm2      ; Move Aligned Four Packed Single-FP
sub_14E209110+35E  84 C9                                                           test    cl, cl          ; Logical Compare
sub_14E209110+360  0F 28 CA                                                        movaps  xmm1, xmm2      ; Move Aligned Four Packed Single-FP
sub_14E209110+363  0F 28 C2                                                        movaps  xmm0, xmm2      ; Move Aligned Four Packed Single-FP
sub_14E209110+366  B8 CC 0A 00 00                                                  mov     eax, 0ACCh
sub_14E209110+36B  49 0F 44 C6                                                     cmovz   rax, r14        ; Move if Zero (ZF=1)
sub_14E209110+36F  B9 A8 0A 00 00                                                  mov     ecx, 0AA8h
sub_14E209110+374  F3 0F 59 1C 10                                                  mulss   xmm3, dword ptr [rax+rdx] ; Scalar Single-FP Multiply
sub_14E209110+379  B8 D0 0A 00 00                                                  mov     eax, 0AD0h
sub_14E209110+37E  41 0F 44 C0                                                     cmovz   eax, r8d        ; Move if Zero (ZF=1)
sub_14E209110+382  41 B8 A4 0A 00 00                                               mov     r8d, 0AA4h
sub_14E209110+388  F3 41 0F 59 DA                                                  mulss   xmm3, xmm10     ; Scalar Single-FP Multiply
sub_14E209110+38D  F3 0F 59 0C 10                                                  mulss   xmm1, dword ptr [rax+rdx] ; Scalar Single-FP Multiply
sub_14E209110+392  B8 D4 0A 00 00                                                  mov     eax, 0AD4h
sub_14E209110+397  41 0F 44 C0                                                     cmovz   eax, r8d        ; Move if Zero (ZF=1)
sub_14E209110+39B  F3 0F 58 1D CD B9 37 06                                         addss   xmm3, dword ptr cs:xmmword_154584E80 ; Scalar Single-FP Add
sub_14E209110+3A3  F3 41 0F 59 CA                                                  mulss   xmm1, xmm10     ; Scalar Single-FP Multiply
sub_14E209110+3A8  F3 0F 59 04 10                                                  mulss   xmm0, dword ptr [rax+rdx] ; Scalar Single-FP Multiply
sub_14E209110+3AD  B8 D8 0A 00 00                                                  mov     eax, 0AD8h
sub_14E209110+3B2  0F 44 C1                                                        cmovz   eax, ecx        ; Move if Zero (ZF=1)
sub_14E209110+3B5  0F C6 DB E1                                                     shufps  xmm3, xmm3, 0E1h ; Shuffle Single-FP
sub_14E209110+3B9  F3 0F 58 0D B3 B9 37 06                                         addss   xmm1, dword ptr cs:xmmword_154584E80+4 ; Scalar Single-FP Add
sub_14E209110+3C1  F3 41 0F 59 C2                                                  mulss   xmm0, xmm10     ; Scalar Single-FP Multiply
sub_14E209110+3C6  F3 0F 59 14 10                                                  mulss   xmm2, dword ptr [rax+rdx] ; Scalar Single-FP Multiply
sub_14E209110+3CB  F3 0F 58 05 A5 B9 37 06                                         addss   xmm0, dword ptr cs:xmmword_154584E80+8 ; Scalar Single-FP Add
sub_14E209110+3D3  F3 0F 10 D9                                                     movss   xmm3, xmm1      ; Move Scalar Single-FP
sub_14E209110+3D7  0F C6 DB C6                                                     shufps  xmm3, xmm3, 0C6h ; Shuffle Single-FP
sub_14E209110+3DB  F3 41 0F 59 D2                                                  mulss   xmm2, xmm10     ; Scalar Single-FP Multiply
sub_14E209110+3E0  F3 0F 10 D8                                                     movss   xmm3, xmm0      ; Move Scalar Single-FP
sub_14E209110+3E4  0F C6 DB 27                                                     shufps  xmm3, xmm3, 27h ; ''' ; Shuffle Single-FP
sub_14E209110+3E8  F3 0F 58 15 8C B9 37 06                                         addss   xmm2, dword ptr cs:xmmword_154584E80+0Ch ; Scalar Single-FP Add
sub_14E209110+3F0  F3 0F 10 DA                                                     movss   xmm3, xmm2      ; Move Scalar Single-FP
sub_14E209110+3F4  0F C6 DB 39                                                     shufps  xmm3, xmm3, 39h ; '9' ; Shuffle Single-FP
sub_14E209110+3F8  0F 11 9C 24 80 00 00 00                                         movups  xmmword ptr [rsp+80h], xmm3 ; Move Unaligned Four Packed Single-FP
sub_14E209110+400  0F 11 9C 24 80 00 00 00                                         movups  xmmword ptr [rsp+80h], xmm3 ; Move Unaligned Four Packed Single-FP
sub_14E209110+408
sub_14E209110+408                                                  loc_14E209518:                          ; CODE XREF: sub_14E209110+214↑j
sub_14E209110+408  F6 87 58 04 00 00 02                                            test    byte ptr [rdi+458h], 2 ; Logical Compare
sub_14E209110+40F  74 24                                                           jz      short loc_14E209545 ; Jump if Zero (ZF=1)
sub_14E209110+411  48 8D 15 F8 B9 37 06                                            lea     rdx, dword_154584F20 ; Load Effective Address
sub_14E209110+418  48 8D 8C 24 90 00 00 00                                         lea     rcx, [rsp+90h]  ; Load Effective Address
sub_14E209110+420  E8 EB 50 60 FE                                                  call    sub_14C80E620   ; Call Procedure
sub_14E209110+425  0F 10 84 24 90 00 00 00                                         movups  xmm0, xmmword ptr [rsp+90h] ; Move Unaligned Four Packed Single-FP
sub_14E209110+42D  0F 11 84 24 80 00 00 00                                         movups  xmmword ptr [rsp+80h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14E209110+435
sub_14E209110+435                                                  loc_14E209545:                          ; CODE XREF: sub_14E209110+40F↑j
sub_14E209110+435  48 8B 9C 24 70 01 00 00                                         mov     rbx, [rsp+170h]
sub_14E209110+43D  48 83 C3 50                                                     add     rbx, 50h ; 'P'  ; Add
sub_14E209110+441  48 8D 4B 10                                                     lea     rcx, [rbx+10h]  ; Load Effective Address
sub_14E209110+445  FF 15 15 12 64 08                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14E209110+44B  48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_14E209110+44E  48 0F 45 D8                                                     cmovnz  rbx, rax        ; Move if Not Zero (ZF=0)
sub_14E209110+452  F6 06 08                                                        test    byte ptr [rsi], 8 ; Logical Compare
sub_14E209110+455  4E 8B 34 23                                                     mov     r14, [rbx+r12]
sub_14E209110+459  74 39                                                           jz      short loc_14E2095A4 ; Jump if Zero (ZF=1)
sub_14E209110+45B  48 8B B5 C8 02 00 00                                            mov     rsi, [rbp+2C8h]
sub_14E209110+462  48 8D 8F 30 01 00 00                                            lea     rcx, [rdi+130h] ; Load Effective Address
sub_14E209110+469  FF 15 F1 11 64 08                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14E209110+46F  48 63 8F 38 01 00 00                                            movsxd  rcx, dword ptr [rdi+138h] ; Move with Sign-Extend Doubleword
sub_14E209110+476  48 8B D0                                                        mov     rdx, rax
sub_14E209110+479  4C 8D 04 C8                                                     lea     r8, [rax+rcx*8] ; Load Effective Address
sub_14E209110+47D  49 3B C0                                                        cmp     rax, r8         ; Compare Two Operands
sub_14E209110+480  74 12                                                           jz      short loc_14E2095A4 ; Jump if Zero (ZF=1)
sub_14E209110+482
sub_14E209110+482                                                  loc_14E209592:                          ; CODE XREF: sub_14E209110+492↓j
sub_14E209110+482  48 39 32                                                        cmp     [rdx], rsi      ; Compare Two Operands
sub_14E209110+485  0F 84 1E 01 00 00                                               jz      loc_14E2096B9   ; Jump if Zero (ZF=1)
sub_14E209110+48B  48 83 C2 08                                                     add     rdx, 8          ; Add
sub_14E209110+48F  49 3B D0                                                        cmp     rdx, r8         ; Compare Two Operands
sub_14E209110+492  75 EE                                                           jnz     short loc_14E209592 ; Jump if Not Zero (ZF=0)
sub_14E209110+494
sub_14E209110+494                                                  loc_14E2095A4:                          ; CODE XREF: sub_14E209110+459↑j
sub_14E209110+494                                                                                          ; sub_14E209110+480↑j ...
sub_14E209110+494  0F B6 4F 36                                                     movzx   ecx, byte ptr [rdi+36h] ; Move with Zero-Extend
sub_14E209110+498  C0 E9 05                                                        shr     cl, 5           ; Shift Logical Right
sub_14E209110+49B
sub_14E209110+49B                                                  loc_14E2095AB:                          ; CODE XREF: sub_14E209110+5C0↓j
sub_14E209110+49B  F3 0F 10 87 44 04 00 00                                         movss   xmm0, dword ptr [rdi+444h] ; Move Scalar Single-FP
sub_14E209110+4A3  48 8D 97 18 04 00 00                                            lea     rdx, [rdi+418h] ; Load Effective Address
sub_14E209110+4AA  F3 0F 10 8F 40 04 00 00                                         movss   xmm1, dword ptr [rdi+440h] ; Move Scalar Single-FP
sub_14E209110+4B2  41 0F 28 D8                                                     movaps  xmm3, xmm8      ; Move Aligned Four Packed Single-FP
sub_14E209110+4B6  49 8B 06                                                        mov     rax, [r14]
sub_14E209110+4B9  0F 28 D7                                                        movaps  xmm2, xmm7      ; Move Aligned Four Packed Single-FP
sub_14E209110+4BC  C6 44 24 58 01                                                  mov     byte ptr [rsp+58h], 1
sub_14E209110+4C1  F3 0F 11 44 24 50                                               movss   dword ptr [rsp+50h], xmm0 ; Move Scalar Single-FP
sub_14E209110+4C7  F3 0F 10 87 3C 04 00 00                                         movss   xmm0, dword ptr [rdi+43Ch] ; Move Scalar Single-FP
sub_14E209110+4CF  F3 0F 11 4C 24 48                                               movss   dword ptr [rsp+48h], xmm1 ; Move Scalar Single-FP
sub_14E209110+4D5  F3 0F 10 8F 38 04 00 00                                         movss   xmm1, dword ptr [rdi+438h] ; Move Scalar Single-FP
sub_14E209110+4DD  F3 0F 11 44 24 40                                               movss   dword ptr [rsp+40h], xmm0 ; Move Scalar Single-FP
sub_14E209110+4E3  F3 0F 11 4C 24 38                                               movss   dword ptr [rsp+38h], xmm1 ; Move Scalar Single-FP
sub_14E209110+4E9  88 4C 24 30                                                     mov     [rsp+30h], cl
sub_14E209110+4ED  48 8D 8C 24 80 00 00 00                                         lea     rcx, [rsp+80h]  ; Load Effective Address
sub_14E209110+4F5  48 89 4C 24 28                                                  mov     [rsp+28h], rcx
sub_14E209110+4FA  48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
sub_14E209110+4FF  48 89 4C 24 20                                                  mov     [rsp+20h], rcx
sub_14E209110+504  49 8B CE                                                        mov     rcx, r14
sub_14E209110+507  FF 50 28                                                        call    qword ptr [rax+28h] ; Indirect Call Near Procedure
sub_14E209110+50A  48 8B 94 24 58 01 00 00                                         mov     rdx, [rsp+158h]
sub_14E209110+512  41 BE 9C 0A 00 00                                               mov     r14d, 0A9Ch
sub_14E209110+518  44 8B 8C 24 68 01 00 00                                         mov     r9d, [rsp+168h]
sub_14E209110+520
sub_14E209110+520                                                  loc_14E209630:                          ; CODE XREF: sub_14E209110+B3↑j
sub_14E209110+520  41 FF C5                                                        inc     r13d            ; Increment by 1
sub_14E209110+523  41 D1 C7                                                        rol     r15d, 1         ; Rotate Left
sub_14E209110+526  49 83 C4 08                                                     add     r12, 8          ; Add
sub_14E209110+52A  44 3B 6A 08                                                     cmp     r13d, [rdx+8]   ; Compare Two Operands
sub_14E209110+52E  0F 8C 7C FB FF FF                                               jl      loc_14E2091C0   ; Jump if Less (SF!=OF)
sub_14E209110+534  44 0F 28 9C 24 B0 00 00 00                                      movaps  xmm11, xmmword ptr [rsp+0B0h] ; Move Aligned Four Packed Single-FP
sub_14E209110+53D  44 0F 28 94 24 C0 00 00 00                                      movaps  xmm10, xmmword ptr [rsp+0C0h] ; Move Aligned Four Packed Single-FP
sub_14E209110+546  44 0F 28 8C 24 D0 00 00 00                                      movaps  xmm9, xmmword ptr [rsp+0D0h] ; Move Aligned Four Packed Single-FP
sub_14E209110+54F  44 0F 28 84 24 E0 00 00 00                                      movaps  xmm8, xmmword ptr [rsp+0E0h] ; Move Aligned Four Packed Single-FP
sub_14E209110+558  0F 28 BC 24 F0 00 00 00                                         movaps  xmm7, xmmword ptr [rsp+0F0h] ; Move Aligned Four Packed Single-FP
sub_14E209110+560  0F 28 B4 24 00 01 00 00                                         movaps  xmm6, xmmword ptr [rsp+100h] ; Move Aligned Four Packed Single-FP
sub_14E209110+568  4C 8B BC 24 10 01 00 00                                         mov     r15, [rsp+110h]
sub_14E209110+570  4C 8B B4 24 18 01 00 00                                         mov     r14, [rsp+118h]
sub_14E209110+578  4C 8B A4 24 28 01 00 00                                         mov     r12, [rsp+128h]
sub_14E209110+580  48 8B B4 24 30 01 00 00                                         mov     rsi, [rsp+130h]
sub_14E209110+588  48 8B AC 24 38 01 00 00                                         mov     rbp, [rsp+138h]
sub_14E209110+590  48 8B 9C 24 60 01 00 00                                         mov     rbx, [rsp+160h]
sub_14E209110+598
sub_14E209110+598                                                  loc_14E2096A8:                          ; CODE XREF: sub_14E209110+46↑j
sub_14E209110+598  4C 8B AC 24 20 01 00 00                                         mov     r13, [rsp+120h]
sub_14E209110+5A0
sub_14E209110+5A0                                                  loc_14E2096B0:                          ; CODE XREF: sub_14E209110+20↑j
sub_14E209110+5A0                                                                                          ; sub_14E209110+35↑j
sub_14E209110+5A0  48 81 C4 40 01 00 00                                            add     rsp, 140h       ; Add
sub_14E209110+5A7  5F                                                              pop     rdi
sub_14E209110+5A8  C3                                                              retn                    ; Return Near from Procedure
sub_14E209110+5A9                                                  ; ---------------------------------------------------------------------------
sub_14E209110+5A9
sub_14E209110+5A9                                                  loc_14E2096B9:                          ; CODE XREF: sub_14E209110+485↑j
sub_14E209110+5A9  48 2B D0                                                        sub     rdx, rax        ; Integer Subtraction
sub_14E209110+5AC  48 C1 FA 03                                                     sar     rdx, 3          ; Shift Arithmetic Right
sub_14E209110+5B0  83 FA FF                                                        cmp     edx, 0FFFFFFFFh ; Compare Two Operands
sub_14E209110+5B3  0F 84 DB FE FF FF                                               jz      loc_14E2095A4   ; Jump if Zero (ZF=1)
sub_14E209110+5B9  0F B6 4F 37                                                     movzx   ecx, byte ptr [rdi+37h] ; Move with Zero-Extend
sub_14E209110+5BD  80 E1 07                                                        and     cl, 7           ; Logical AND
sub_14E209110+5C0  E9 D6 FE FF FF                                                  jmp     loc_14E2095AB   ; Jump
sub_14E209110+5C0                                                  sub_14E209110   endp
sub_14E209110+5C0
sub_14E209110+5C0                                                  ; ---------------------------------------------------------------------------
.text:000000014E2096D5 CC CC CC CC CC CC CC CC CC CC CC                                align 20h
.text:000000014E2096E0 48 8B 89 E8 00 00 00                                            mov     rcx, [rcx+0E8h]
.text:000000014E2096E7 48 85 C9                                                        test    rcx, rcx        ; Logical Compare
.text:000000014E2096EA 74 0A                                                           jz      short loc_14E2096F6 ; Jump if Zero (ZF=1)
.text:000000014E2096EC 48 8B 01                                                        mov     rax, [rcx]
.text:000000014E2096EF 48 FF A0 28 02 00 00                                            jmp     qword ptr [rax+228h] ; Indirect Near Jump
.text:000000014E2096F6                                                 ; ---------------------------------------------------------------------------
.text:000000014E2096F6
.text:000000014E2096F6                                                 loc_14E2096F6:                          ; CODE XREF: .text:000000014E2096EA↑j
.text:000000014E2096F6 B8 02 00 00 00                                                  mov     eax, 2
.text:000000014E2096FB C3                                                              retn                    ; Return Near from Procedure
.text:000000014E2096FB                                                 ; ---------------------------------------------------------------------------
.text:000000014E2096FC CC CC CC CC                                                     align 20h

