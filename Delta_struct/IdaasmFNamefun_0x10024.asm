sub_14C8F1020
sub_14C8F1020                                                      ; =============== S U B R O U T I N E =======================================
sub_14C8F1020
sub_14C8F1020                                                      ; Attributes: bp-based frame
sub_14C8F1020
sub_14C8F1020                                                      ; int *__fastcall sub_14C8F1020(int *, __m128i *, int, int)
sub_14C8F1020                                                      sub_14C8F1020   proc near               ; CODE XREF: sub_14C8F12D0+124↓p
sub_14C8F1020                                                                                              ; sub_14C8F1410+174↓p
sub_14C8F1020
sub_14C8F1020                                                      var_60          = byte ptr -60h
sub_14C8F1020                                                      var_50          = xmmword ptr -50h
sub_14C8F1020                                                      var_40          = byte ptr -40h
sub_14C8F1020                                                      var_30          = xmmword ptr -30h
sub_14C8F1020                                                      var_20          = xmmword ptr -20h
sub_14C8F1020                                                      var_C           = byte ptr -0Ch
sub_14C8F1020                                                      var_8           = qword ptr -8
sub_14C8F1020                                                      arg_10          = qword ptr  40h
sub_14C8F1020
sub_14C8F1020      48 89 5C 24 18                                                  mov     [rsp+18h], rbx
sub_14C8F1020+5    55                                                              push    rbp
sub_14C8F1020+6    56                                                              push    rsi
sub_14C8F1020+7    57                                                              push    rdi
sub_14C8F1020+8    41 56                                                           push    r14
sub_14C8F1020+A    41 57                                                           push    r15
sub_14C8F1020+C    48 8B EC                                                        mov     rbp, rsp
sub_14C8F1020+F    48 81 EC 80 00 00 00                                            sub     rsp, 80h        ; Integer Subtraction
sub_14C8F1020+16   48 8B 05 03 43 4D 0A                                            mov     rax, cs:off_156DC5340
sub_14C8F1020+1D   48 33 C4                                                        xor     rax, rsp        ; Logical Exclusive OR
sub_14C8F1020+20   48 89 45 F8                                                     mov     [rbp-8], rax
sub_14C8F1020+24   80 3D A1 AE AE 0A 00                                            cmp     cs:byte_1573DBEEC, 0 ; Compare Two Operands
sub_14C8F1020+2B   45 8B F9                                                        mov     r15d, r9d
sub_14C8F1020+2E   41 8B D8                                                        mov     ebx, r8d
sub_14C8F1020+31   48 8B FA                                                        mov     rdi, rdx
sub_14C8F1020+34   4C 8B F1                                                        mov     r14, rcx
sub_14C8F1020+37   74 09                                                           jz      short loc_14C8F1062 ; Jump if Zero (ZF=1)
sub_14C8F1020+39   48 8D 35 60 B1 AE 0A                                            lea     rsi, unk_1573DC1C0 ; Load Effective Address
sub_14C8F1020+40   EB 16                                                           jmp     short loc_14C8F1078 ; Jump
sub_14C8F1020+42                                                   ; ---------------------------------------------------------------------------
sub_14C8F1020+42
sub_14C8F1020+42                                                   loc_14C8F1062:                          ; CODE XREF: sub_14C8F1020+37↑j
sub_14C8F1020+42   48 8D 0D 57 B1 AE 0A                                            lea     rcx, unk_1573DC1C0 ; Load Effective Address
sub_14C8F1020+49   E8 22 46 FE FF                                                  call    sub_14C8D5690   ; Call Procedure
sub_14C8F1020+4E   48 8B F0                                                        mov     rsi, rax
sub_14C8F1020+51   C6 05 74 AE AE 0A 01                                            mov     cs:byte_1573DBEEC, 1
sub_14C8F1020+58
sub_14C8F1020+58                                                   loc_14C8F1078:                          ; CODE XREF: sub_14C8F1020+40↑j
sub_14C8F1020+58   4C 8B 47 08                                                     mov     r8, [rdi+8]
sub_14C8F1020+5C   83 FB 01                                                        cmp     ebx, 1          ; Compare Two Operands
sub_14C8F1020+5F   0F 85 A2 00 00 00                                               jnz     loc_14C8F1127   ; Jump if Not Zero (ZF=0)
sub_14C8F1020+65   0F 10 0F                                                        movups  xmm1, xmmword ptr [rdi] ; Move Unaligned Four Packed Single-FP
sub_14C8F1020+68   B9 24 00 01 00                                                  mov     ecx, 10024h
sub_14C8F1020+6D   C6 45 A0 00                                                     mov     byte ptr [rbp-60h], 0
sub_14C8F1020+71   49 8B C0                                                        mov     rax, r8
sub_14C8F1020+74   44 89 45 D8                                                     mov     [rbp-28h], r8d
sub_14C8F1020+78   48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8F1020+7C   66 48 0F 7E CA                                                  movq    rdx, xmm1       ; Move 64 bits
sub_14C8F1020+81   84 C0                                                           test    al, al          ; Logical Compare
sub_14C8F1020+83   0F 29 4D B0                                                     movaps  xmmword ptr [rbp-50h], xmm1 ; Move Aligned Four Packed Single-FP
sub_14C8F1020+87   0F B7 45 BD                                                     movzx   eax, word ptr [rbp-43h] ; Move with Zero-Extend
sub_14C8F1020+8B   BB 20 00 01 00                                                  mov     ebx, 10020h
sub_14C8F1020+90   0F 45 D9                                                        cmovnz  ebx, ecx        ; Move if Not Zero (ZF=0)
sub_14C8F1020+93   66 0F 73 D9 0F                                                  psrldq  xmm1, 0Fh       ; Shift Double Quadword Right Logical
sub_14C8F1020+98   49 8B C8                                                        mov     rcx, r8
sub_14C8F1020+9B   66 89 45 DD                                                     mov     [rbp-23h], ax
sub_14C8F1020+9F   48 C1 E9 20                                                     shr     rcx, 20h        ; Shift Logical Right
sub_14C8F1020+A3   66 0F 7E C8                                                     movd    eax, xmm1       ; Move 32 bits
sub_14C8F1020+A7   48 89 55 D0                                                     mov     [rbp-30h], rdx
sub_14C8F1020+AB   88 4D DC                                                        mov     [rbp-24h], cl
sub_14C8F1020+AE   88 45 DF                                                        mov     [rbp-21h], al
sub_14C8F1020+B1   84 C9                                                           test    cl, cl          ; Logical Compare
sub_14C8F1020+B3   75 0B                                                           jnz     short loc_14C8F10E0 ; Jump if Not Zero (ZF=0)
sub_14C8F1020+B5   48 8D 4D B0                                                     lea     rcx, [rbp-50h]  ; Load Effective Address
sub_14C8F1020+B9   E8 A2 34 FE FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8F1020+BE   EB 09                                                           jmp     short loc_14C8F10E9 ; Jump
sub_14C8F1020+C0                                                   ; ---------------------------------------------------------------------------
sub_14C8F1020+C0
sub_14C8F1020+C0                                                   loc_14C8F10E0:                          ; CODE XREF: sub_14C8F1020+B3↑j
sub_14C8F1020+C0   48 8D 4D C0                                                     lea     rcx, [rbp-40h]  ; Load Effective Address
sub_14C8F1020+C4   E8 87 35 FE FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8F1020+C9
sub_14C8F1020+C9                                                   loc_14C8F10E9:                          ; CODE XREF: sub_14C8F1020+BE↑j
sub_14C8F1020+C9   0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8F1020+CC   4C 8D 4D A0                                                     lea     r9, [rbp-60h]   ; Load Effective Address
sub_14C8F1020+D0   C6 45 F4 00                                                     mov     byte ptr [rbp-0Ch], 0
sub_14C8F1020+D4   4C 8D 45 D0                                                     lea     r8, [rbp-30h]   ; Load Effective Address
sub_14C8F1020+D8   66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8F1020+DC   48 8D 55 B0                                                     lea     rdx, [rbp-50h]  ; Load Effective Address
sub_14C8F1020+E0   0F 11 45 E0                                                     movups  xmmword ptr [rbp-20h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8F1020+E4   48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8F1020+EB   48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8F1020+EF   48 03 CE                                                        add     rcx, rsi        ; Add
sub_14C8F1020+F2   E8 09 C1 FF FF                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8F1020+F7   0F B6 45 A0                                                     movzx   eax, byte ptr [rbp-60h] ; Move with Zero-Extend
sub_14C8F1020+FB   F0 01 04 33                                                     lock add [rbx+rsi], eax ; Add
sub_14C8F1020+FF   8B 5D B0                                                        mov     ebx, [rbp-50h]
sub_14C8F1020+102  E9 7C 01 00 00                                                  jmp     loc_14C8F12A3   ; Jump
sub_14C8F1020+107                                                  ; ---------------------------------------------------------------------------
sub_14C8F1020+107
sub_14C8F1020+107                                                  loc_14C8F1127:                          ; CODE XREF: sub_14C8F1020+5F↑j
sub_14C8F1020+107  85 DB                                                           test    ebx, ebx        ; Logical Compare
sub_14C8F1020+109  75 71                                                           jnz     short loc_14C8F119C ; Jump if Not Zero (ZF=0)
sub_14C8F1020+10B  0F 10 07                                                        movups  xmm0, xmmword ptr [rdi] ; Move Unaligned Four Packed Single-FP
sub_14C8F1020+10E  49 8B C0                                                        mov     rax, r8
sub_14C8F1020+111  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8F1020+115  66 48 0F 7E C2                                                  movq    rdx, xmm0       ; Move 64 bits
sub_14C8F1020+11A  0F 11 45 D0                                                     movups  xmmword ptr [rbp-30h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8F1020+11E  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8F1020+120  75 0B                                                           jnz     short loc_14C8F114D ; Jump if Not Zero (ZF=0)
sub_14C8F1020+122  48 8D 4D C0                                                     lea     rcx, [rbp-40h]  ; Load Effective Address
sub_14C8F1020+126  E8 35 34 FE FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8F1020+12B  EB 09                                                           jmp     short loc_14C8F1156 ; Jump
sub_14C8F1020+12D                                                  ; ---------------------------------------------------------------------------
sub_14C8F1020+12D
sub_14C8F1020+12D                                                  loc_14C8F114D:                          ; CODE XREF: sub_14C8F1020+120↑j
sub_14C8F1020+12D  48 8D 4D B0                                                     lea     rcx, [rbp-50h]  ; Load Effective Address
sub_14C8F1020+131  E8 1A 35 FE FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8F1020+136
sub_14C8F1020+136                                                  loc_14C8F1156:                          ; CODE XREF: sub_14C8F1020+12B↑j
sub_14C8F1020+136  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8F1020+139  C6 45 F4 00                                                     mov     byte ptr [rbp-0Ch], 0
sub_14C8F1020+13D  66 0F 7E C7                                                     movd    edi, xmm0       ; Move 32 bits
sub_14C8F1020+141  0F 11 45 E0                                                     movups  xmmword ptr [rbp-20h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8F1020+145  48 81 C7 01 04 00 00                                            add     rdi, 401h       ; Add
sub_14C8F1020+14C  48 C1 E7 06                                                     shl     rdi, 6          ; Shift Logical Left
sub_14C8F1020+150  48 03 FE                                                        add     rdi, rsi        ; Add
sub_14C8F1020+153  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1020+156  FF 15 2C A3 C8 03                                               call    cs:qword_15057B4A8 ; Indirect Call Near Procedure
sub_14C8F1020+15C  48 8D 55 D0                                                     lea     rdx, [rbp-30h]  ; Load Effective Address
sub_14C8F1020+160  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1020+163  E8 88 24 00 00                                                  call    sub_14C8F3610   ; Call Procedure
sub_14C8F1020+168  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1020+16B  8B 18                                                           mov     ebx, [rax]
sub_14C8F1020+16D  FF 15 0D A3 C8 03                                               call    cs:qword_15057B4A0 ; Indirect Call Near Procedure
sub_14C8F1020+173  0F BA F3 1F                                                     btr     ebx, 1Fh        ; Bit Test and Reset
sub_14C8F1020+177  E9 07 01 00 00                                                  jmp     loc_14C8F12A3   ; Jump
sub_14C8F1020+17C                                                  ; ---------------------------------------------------------------------------
sub_14C8F1020+17C
sub_14C8F1020+17C                                                  loc_14C8F119C:                          ; CODE XREF: sub_14C8F1020+109↑j
sub_14C8F1020+17C  0F 10 0F                                                        movups  xmm1, xmmword ptr [rdi] ; Move Unaligned Four Packed Single-FP
sub_14C8F1020+17F  48 8B 47 08                                                     mov     rax, [rdi+8]
sub_14C8F1020+183  B9 24 00 01 00                                                  mov     ecx, 10024h
sub_14C8F1020+188  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8F1020+18C  BB 20 00 01 00                                                  mov     ebx, 10020h
sub_14C8F1020+191  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8F1020+193  0F 29 4D B0                                                     movaps  xmmword ptr [rbp-50h], xmm1 ; Move Aligned Four Packed Single-FP
sub_14C8F1020+197  0F B7 45 BD                                                     movzx   eax, word ptr [rbp-43h] ; Move with Zero-Extend
sub_14C8F1020+19B  66 48 0F 7E CA                                                  movq    rdx, xmm1       ; Move 64 bits
sub_14C8F1020+1A0  0F 45 D9                                                        cmovnz  ebx, ecx        ; Move if Not Zero (ZF=0)
sub_14C8F1020+1A3  66 0F 73 D9 0F                                                  psrldq  xmm1, 0Fh       ; Shift Double Quadword Right Logical
sub_14C8F1020+1A8  49 8B C8                                                        mov     rcx, r8
sub_14C8F1020+1AB  66 89 45 DD                                                     mov     [rbp-23h], ax
sub_14C8F1020+1AF  48 C1 E9 20                                                     shr     rcx, 20h        ; Shift Logical Right
sub_14C8F1020+1B3  66 0F 7E C8                                                     movd    eax, xmm1       ; Move 32 bits
sub_14C8F1020+1B7  C6 45 A0 00                                                     mov     byte ptr [rbp-60h], 0
sub_14C8F1020+1BB  48 89 55 D0                                                     mov     [rbp-30h], rdx
sub_14C8F1020+1BF  44 89 45 D8                                                     mov     [rbp-28h], r8d
sub_14C8F1020+1C3  88 4D DC                                                        mov     [rbp-24h], cl
sub_14C8F1020+1C6  88 45 DF                                                        mov     [rbp-21h], al
sub_14C8F1020+1C9  84 C9                                                           test    cl, cl          ; Logical Compare
sub_14C8F1020+1CB  75 0B                                                           jnz     short loc_14C8F11F8 ; Jump if Not Zero (ZF=0)
sub_14C8F1020+1CD  48 8D 4D C0                                                     lea     rcx, [rbp-40h]  ; Load Effective Address
sub_14C8F1020+1D1  E8 8A 33 FE FF                                                  call    sub_14C8D4580   ; Call Procedure
sub_14C8F1020+1D6  EB 09                                                           jmp     short loc_14C8F1201 ; Jump
sub_14C8F1020+1D8                                                  ; ---------------------------------------------------------------------------
sub_14C8F1020+1D8
sub_14C8F1020+1D8                                                  loc_14C8F11F8:                          ; CODE XREF: sub_14C8F1020+1CB↑j
sub_14C8F1020+1D8  48 8D 4D B0                                                     lea     rcx, [rbp-50h]  ; Load Effective Address
sub_14C8F1020+1DC  E8 6F 34 FE FF                                                  call    sub_14C8D4670   ; Call Procedure
sub_14C8F1020+1E1
sub_14C8F1020+1E1                                                  loc_14C8F1201:                          ; CODE XREF: sub_14C8F1020+1D6↑j
sub_14C8F1020+1E1  0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
sub_14C8F1020+1E4  4C 8D 4D A0                                                     lea     r9, [rbp-60h]   ; Load Effective Address
sub_14C8F1020+1E8  C6 45 F4 00                                                     mov     byte ptr [rbp-0Ch], 0
sub_14C8F1020+1EC  4C 8D 45 D0                                                     lea     r8, [rbp-30h]   ; Load Effective Address
sub_14C8F1020+1F0  66 0F 7E C1                                                     movd    ecx, xmm0       ; Move 32 bits
sub_14C8F1020+1F4  48 8D 55 B0                                                     lea     rdx, [rbp-50h]  ; Load Effective Address
sub_14C8F1020+1F8  0F 11 45 E0                                                     movups  xmmword ptr [rbp-20h], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8F1020+1FC  48 81 C1 01 04 00 00                                            add     rcx, 401h       ; Add
sub_14C8F1020+203  48 C1 E1 06                                                     shl     rcx, 6          ; Shift Logical Left
sub_14C8F1020+207  48 03 CE                                                        add     rcx, rsi        ; Add
sub_14C8F1020+20A  E8 F1 BF FF FF                                                  call    sub_14C8ED220   ; Call Procedure
sub_14C8F1020+20F  0F B6 45 A0                                                     movzx   eax, byte ptr [rbp-60h] ; Move with Zero-Extend
sub_14C8F1020+213  F0 01 04 33                                                     lock add [rbx+rsi], eax ; Add
sub_14C8F1020+217  8B 5D B0                                                        mov     ebx, [rbp-50h]
sub_14C8F1020+21A  8B D3                                                           mov     edx, ebx
sub_14C8F1020+21C  0F 10 0F                                                        movups  xmm1, xmmword ptr [rdi] ; Move Unaligned Four Packed Single-FP
sub_14C8F1020+21F  48 8B 7F 08                                                     mov     rdi, [rdi+8]
sub_14C8F1020+223  8B C3                                                           mov     eax, ebx
sub_14C8F1020+225  25 FF FF 03 00                                                  and     eax, 3FFFFh     ; Logical AND
sub_14C8F1020+22A  C1 EA 12                                                        shr     edx, 12h        ; Shift Logical Right
sub_14C8F1020+22D  89 45 B4                                                        mov     [rbp-4Ch], eax
sub_14C8F1020+230  89 55 B0                                                        mov     [rbp-50h], edx
sub_14C8F1020+233  48 8B 45 B0                                                     mov     rax, [rbp-50h]
sub_14C8F1020+237  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8F1020+23B  44 8B C7                                                        mov     r8d, edi
sub_14C8F1020+23E  8D 0C 00                                                        lea     ecx, [rax+rax]  ; Load Effective Address
sub_14C8F1020+241  48 8B 44 D6 08                                                  mov     rax, [rsi+rdx*8+8]
sub_14C8F1020+246  48 8D 71 02                                                     lea     rsi, [rcx+2]    ; Load Effective Address
sub_14C8F1020+24A  66 48 0F 7E CA                                                  movq    rdx, xmm1       ; Move 64 bits
sub_14C8F1020+24F  48 03 F0                                                        add     rsi, rax        ; Add
sub_14C8F1020+252  48 8B C7                                                        mov     rax, rdi
sub_14C8F1020+255  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
sub_14C8F1020+259  48 8B CE                                                        mov     rcx, rsi
sub_14C8F1020+25C  84 C0                                                           test    al, al          ; Logical Compare
sub_14C8F1020+25E  74 14                                                           jz      short loc_14C8F1294 ; Jump if Zero (ZF=1)
sub_14C8F1020+260  4D 03 C0                                                        add     r8, r8          ; Add
sub_14C8F1020+263  E8 B5 55 97 03                                                  call    sub_15026683D   ; Call Procedure
sub_14C8F1020+268  8B D7                                                           mov     edx, edi
sub_14C8F1020+26A  48 8B CE                                                        mov     rcx, rsi
sub_14C8F1020+26D  E8 EE F1 FE FF                                                  call    sub_14C8E0480   ; Call Procedure
sub_14C8F1020+272  EB 0F                                                           jmp     short loc_14C8F12A3 ; Jump
sub_14C8F1020+274                                                  ; ---------------------------------------------------------------------------
sub_14C8F1020+274
sub_14C8F1020+274                                                  loc_14C8F1294:                          ; CODE XREF: sub_14C8F1020+25E↑j
sub_14C8F1020+274  E8 A4 55 97 03                                                  call    sub_15026683D   ; Call Procedure
sub_14C8F1020+279  8B D7                                                           mov     edx, edi
sub_14C8F1020+27B  48 8B CE                                                        mov     rcx, rsi
sub_14C8F1020+27E  E8 CD EF FE FF                                                  call    sub_14C8E0270   ; Call Procedure
sub_14C8F1020+283
sub_14C8F1020+283                                                  loc_14C8F12A3:                          ; CODE XREF: sub_14C8F1020+102↑j
sub_14C8F1020+283                                                                                          ; sub_14C8F1020+177↑j ...
sub_14C8F1020+283  41 89 1E                                                        mov     [r14], ebx
sub_14C8F1020+286  49 8B C6                                                        mov     rax, r14
sub_14C8F1020+289  45 89 7E 04                                                     mov     [r14+4], r15d
sub_14C8F1020+28D  48 8B 4D F8                                                     mov     rcx, [rbp-8]
sub_14C8F1020+291  48 33 CC                                                        xor     rcx, rsp        ; StackCookie
sub_14C8F1020+294  E8 A7 EB 96 03                                                  call    __security_check_cookie ; Call Procedure
sub_14C8F1020+299  48 8B 9C 24 C0 00 00 00                                         mov     rbx, [rsp+0C0h]
sub_14C8F1020+2A1  48 81 C4 80 00 00 00                                            add     rsp, 80h        ; Add
sub_14C8F1020+2A8  41 5F                                                           pop     r15
sub_14C8F1020+2AA  41 5E                                                           pop     r14
sub_14C8F1020+2AC  5F                                                              pop     rdi
sub_14C8F1020+2AD  5E                                                              pop     rsi
sub_14C8F1020+2AE  5D                                                              pop     rbp
sub_14C8F1020+2AF  C3                                                              retn                    ; Return Near from Procedure
sub_14C8F1020+2AF                                                  sub_14C8F1020   endp
sub_14C8F1020+2AF
