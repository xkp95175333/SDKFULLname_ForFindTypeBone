.std:0000000140E015B3                               loc_140E015B3:                          ; CODE XREF: sub_140E008E0+1CEF↓j
.std:0000000140E015B3                                                                       ; sub_140E008E0+1D46↓j
.std:0000000140E015B3 48 8B 05 0E C8 D9 18                          mov     rax, cs:qword_159B9DDC8
.std:0000000140E015BA 45 32 E4                                      xor     r12b, r12b      ; Logical Exclusive OR
.std:0000000140E015BD 44 88 64 24 40                                mov     [rsp+40h], r12b
.std:0000000140E015C2 39 38                                         cmp     [rax], edi      ; Compare Two Operands
.std:0000000140E015C4 0F 84 B1 00 00 00                             jz      loc_140E0167B   ; Jump if Zero (ZF=1)
.std:0000000140E015CA E8 01 2C 64 0E                                call    sub_14F4441D0   ; Call Procedure
.std:0000000140E015CF 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E015D1 0F 85 A4 00 00 00                             jnz     loc_140E0167B   ; Jump if Not Zero (ZF=0)
.std:0000000140E015D7 41 B4 01                                      mov     r12b, 1
.std:0000000140E015DA 44 88 64 24 40                                mov     [rsp+40h], r12b
.std:0000000140E015DF FF 15 DB BE 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E015E5 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E015E7 75 09                                         jnz     short loc_140E015F2 ; Jump if Not Zero (ZF=0)
.std:0000000140E015E9 48 8B 3D D8 CE 9D 18                          mov     rdi, cs:qword_1597DE4C8
.std:0000000140E015F0 EB 29                                         jmp     short loc_140E0161B ; Jump
.std:0000000140E015F2                               ; ---------------------------------------------------------------------------
.std:0000000140E015F2
.std:0000000140E015F2                               loc_140E015F2:                          ; CODE XREF: sub_140E008E0+D07↑j
.std:0000000140E015F2 48 8B 0D CF EE 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E015F9 0F B6 05 CE EE 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E01600 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E01605 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E01607 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E0160B 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E0160E 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E01612 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E01616 48 8B 7C 24 30                                mov     rdi, [rsp+30h]
.std:0000000140E0161B
.std:0000000140E0161B                               loc_140E0161B:                          ; CODE XREF: sub_140E008E0+D10↑j
.std:0000000140E0161B 48 8D 8F F0 0D 00 00                          lea     rcx, [rdi+0DF0h] ; Load Effective Address
.std:0000000140E01622 FF 15 58 C4 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E01628 48 8D 8F F0 0D 00 00                          lea     rcx, [rdi+0DF0h] ; Load Effective Address
.std:0000000140E0162F 48 8B D8                                      mov     rbx, rax
.std:0000000140E01632 FF 15 48 C4 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E01638 48 63 8F F8 0D 00 00                          movsxd  rcx, dword ptr [rdi+0DF8h] ; Move with Sign-Extend Doubleword
.std:0000000140E0163F 48 8D 3C C8                                   lea     rdi, [rax+rcx*8] ; Load Effective Address
.std:0000000140E01643 48 3B DF                                      cmp     rbx, rdi        ; Compare Two Operands
.std:0000000140E01646 74 24                                         jz      short loc_140E0166C ; Jump if Zero (ZF=1)
.std:0000000140E01648 0F 1F 84 00 00 00 00 00                       nop     dword ptr [rax+rax+00000000h] ; No Operation
.std:0000000140E01650
.std:0000000140E01650                               loc_140E01650:                          ; CODE XREF: sub_140E008E0+D8A↓j
.std:0000000140E01650 48 8B 0B                                      mov     rcx, [rbx]
.std:0000000140E01653 48 8B 89 78 02 00 00                          mov     rcx, [rcx+278h]
.std:0000000140E0165A E8 01 55 48 10                                call    sub_151286B60   ; Call Procedure
.std:0000000140E0165F 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01661 74 3F                                         jz      short loc_140E016A2 ; Jump if Zero (ZF=1)
.std:0000000140E01663 48 83 C3 08                                   add     rbx, 8          ; Add
.std:0000000140E01667 48 3B DF                                      cmp     rbx, rdi        ; Compare Two Operands
.std:0000000140E0166A 75 E4                                         jnz     short loc_140E01650 ; Jump if Not Zero (ZF=0)
.std:0000000140E0166C
.std:0000000140E0166C                               loc_140E0166C:                          ; CODE XREF: sub_140E008E0+D66↑j
.std:0000000140E0166C F3 0F 10 05 88 53 2E 12                       movss   xmm0, cs:dword_1530E69FC ; Move Scalar Single-FP
.std:0000000140E01674 E8 27 01 2A 0E                                call    sub_14F0A17A0   ; Call Procedure
.std:0000000140E01679
.std:0000000140E01679                               loc_140E01679:                          ; CODE XREF: sub_140E008E0+DCA↓j
.std:0000000140E01679 33 FF                                         xor     edi, edi        ; Logical Exclusive OR
.std:0000000140E0167B
.std:0000000140E0167B                               loc_140E0167B:                          ; CODE XREF: sub_140E008E0+CE4↑j
.std:0000000140E0167B                                                                       ; sub_140E008E0+CF1↑j
.std:0000000140E0167B F3 0F 10 05 59 D1 87 19                       movss   xmm0, cs:dword_15A67E7DC ; Move Scalar Single-FP
.std:0000000140E01683 0F 57 C9                                      xorps   xmm1, xmm1      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140E01686 0F 2E C1                                      ucomiss xmm0, xmm1      ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:0000000140E01689 0F 84 8C 00 00 00                             jz      loc_140E0171B   ; Jump if Zero (ZF=1)
.std:0000000140E0168F FF 15 8B 01 9E 18                             call    cs:off_1597E1820 ; Indirect Call Near Procedure
.std:0000000140E01695 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01697 75 13                                         jnz     short loc_140E016AC ; Jump if Not Zero (ZF=0)
.std:0000000140E01699 48 8B 1D 88 11 9E 18                          mov     rbx, cs:qword_1597E2828
.std:0000000140E016A0 EB 2F                                         jmp     short loc_140E016D1 ; Jump
.std:0000000140E016A2                               ; ---------------------------------------------------------------------------
.std:0000000140E016A2
.std:0000000140E016A2                               loc_140E016A2:                          ; CODE XREF: sub_140E008E0+D81↑j
.std:0000000140E016A2 45 32 E4                                      xor     r12b, r12b      ; Logical Exclusive OR
.std:0000000140E016A5 44 88 64 24 40                                mov     [rsp+40h], r12b
.std:0000000140E016AA EB CD                                         jmp     short loc_140E01679 ; Jump
.std:0000000140E016AC                               ; ---------------------------------------------------------------------------
.std:0000000140E016AC
.std:0000000140E016AC                               loc_140E016AC:                          ; CODE XREF: sub_140E008E0+DB7↑j
.std:0000000140E016AC 48 8B 0D 75 31 9E 18                          mov     rcx, cs:qword_1597E4828
.std:0000000140E016B3 0F B6 05 75 31 9E 18                          movzx   eax, byte ptr cs:qword_1597E4828+7 ; Move with Zero-Extend
.std:0000000140E016BA 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E016BF 34 36                                         xor     al, 36h         ; Logical Exclusive OR
.std:0000000140E016C1 80 F1 36                                      xor     cl, 36h         ; Logical Exclusive OR
.std:0000000140E016C4 88 44 24 30                                   mov     [rsp+30h], al
.std:0000000140E016C8 88 4C 24 37                                   mov     [rsp+37h], cl
.std:0000000140E016CC 48 8B 5C 24 30                                mov     rbx, [rsp+30h]
