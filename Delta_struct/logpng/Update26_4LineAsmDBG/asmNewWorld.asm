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
.std:0000000140E015E9 48 8B 3D D8 CE 9D 18                          mov     rdi, cs:qword_1597DE4C8   ;Uworld37
.std:0000000140E015F0 EB 29                                         jmp     short loc_140E0161B ; Jump
.std:0000000140E015F2                               ; ---------------------------------------------------------------------------
.std:0000000140E015F2
.std:0000000140E015F2                               loc_140E015F2:                          ; CODE XREF: sub_140E008E0+D07↑j
.std:0000000140E015F2 48 8B 0D CF EE 9D 18                          mov     rcx, cs:qword_1597E04C8    ;Uworld37Array
.std:0000000140E015F9 0F B6 05 CE EE 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend    Uworld37Enc
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
.std:0000000140E01699 48 8B 1D 88 11 9E 18                          mov     rbx, cs:qword_1597E2828    ;Uworld36 
.std:0000000140E016A0 EB 2F                                         jmp     short loc_140E016D1 ; Jump
.std:0000000140E016A2                               ; ---------------------------------------------------------------------------
.std:0000000140E016A2
.std:0000000140E016A2                               loc_140E016A2:                          ; CODE XREF: sub_140E008E0+D81↑j
.std:0000000140E016A2 45 32 E4                                      xor     r12b, r12b      ; Logical Exclusive OR
.std:0000000140E016A5 44 88 64 24 40                                mov     [rsp+40h], r12b  ;Uworld36* = [GEngine + 0x40]
.std:0000000140E016AA EB CD                                         jmp     short loc_140E01679 ; Jump
.std:0000000140E016AC                               ; ---------------------------------------------------------------------------
.std:0000000140E016AC
.std:0000000140E016AC                               loc_140E016AC:                          ; CODE XREF: sub_140E008E0+DB7↑j
.std:0000000140E016AC 48 8B 0D 75 31 9E 18                          mov     rcx, cs:qword_1597E4828  ;Uworld36Array 
.std:0000000140E016B3 0F B6 05 75 31 9E 18                          movzx   eax, byte ptr cs:qword_1597E4828+7 ; Move with Zero-Extend Uworld36Enc
.std:0000000140E016BA 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E016BF 34 36                                         xor     al, 36h         ; Logical Exclusive OR
.std:0000000140E016C1 80 F1 36                                      xor     cl, 36h         ; Logical Exclusive OR
.std:0000000140E016C4 88 44 24 30                                   mov     [rsp+30h], al
.std:0000000140E016C8 88 4C 24 37                                   mov     [rsp+37h], cl
.std:0000000140E016CC 48 8B 5C 24 30                                mov     rbx, [rsp+30h]




; Full Asm 




.std:0000000140E008E0                               ; =============== S U B R O U T I N E =======================================
.std:0000000140E008E0
.std:0000000140E008E0                               ; Attributes: bp-based frame fpd=0A0h
.std:0000000140E008E0
.std:0000000140E008E0                               sub_140E008E0   proc near               ; CODE XREF: sub_140E0D9C0+398↓p
.std:0000000140E008E0                               ; __unwind { // sub_152B5621C
.std:0000000140E008E0 48 8B C4                                      mov     rax, rsp
.std:0000000140E008E3 48 89 58 10                                   mov     [rax+10h], rbx
.std:0000000140E008E7 48 89 70 18                                   mov     [rax+18h], rsi
.std:0000000140E008EB 48 89 78 20                                   mov     [rax+20h], rdi
.std:0000000140E008EF 55                                            push    rbp
.std:0000000140E008F0 41 54                                         push    r12
.std:0000000140E008F2 41 55                                         push    r13
.std:0000000140E008F4 41 56                                         push    r14
.std:0000000140E008F6 41 57                                         push    r15
.std:0000000140E008F8 48 8D 6C 24 80                                lea     rbp, [rsp-80h]  ; Load Effective Address
.std:0000000140E008FD 48 81 EC 80 01 00 00                          sub     rsp, 180h       ; Integer Subtraction
.std:0000000140E00904 0F 29 70 C8                                   movaps  xmmword ptr [rax-38h], xmm6 ; Move Aligned Four Packed Single-FP
.std:0000000140E00908 48 8B 05 31 A7 D8 18                          mov     rax, cs:__security_cookie
.std:0000000140E0090F 48 33 C4                                      xor     rax, rsp        ; Logical Exclusive OR
.std:0000000140E00912 48 89 45 60                                   mov     [rbp+60h], rax
.std:0000000140E00916 48 8D 44 24 41                                lea     rax, [rsp+41h]  ; Load Effective Address
.std:0000000140E0091B 48 89 4C 24 58                                mov     [rsp+58h], rcx
.std:0000000140E00920 48 89 44 24 50                                mov     [rsp+50h], rax
.std:0000000140E00925 48 8D 15 14 98 DE 17                          lea     rdx, unk_158BEA140 ; Load Effective Address
.std:0000000140E0092C 48 8D 05 0D 87 00 00                          lea     rax, unk_140E09040 ; Load Effective Address
.std:0000000140E00933 48 8B D9                                      mov     rbx, rcx
.std:0000000140E00936 33 FF                                         xor     edi, edi        ; Logical Exclusive OR
.std:0000000140E00938 48 89 44 24 48                                mov     [rsp+48h], rax
.std:0000000140E0093D 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E00942 40 88 7C 24 41                                mov     [rsp+41h], dil
.std:0000000140E00947 E8 44 DF 15 0E                                call    sub_14EF5E890   ; Call Procedure
.std:0000000140E0094C 48 83 C0 10                                   add     rax, 10h        ; Add
.std:0000000140E00950 48 89 44 24 70                                mov     [rsp+70h], rax
.std:0000000140E00955 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00958 48 89 4C 24 78                                mov     [rsp+78h], rcx
.std:0000000140E0095D 48 8B 48 10                                   mov     rcx, [rax+10h]
.std:0000000140E00961 48 89 4D 80                                   mov     [rbp-80h], rcx
.std:0000000140E00965 40 88 7D 88                                   mov     [rbp-78h], dil
.std:0000000140E00969 48 8B 48 18                                   mov     rcx, [rax+18h]
.std:0000000140E0096D 48 89 4D 90                                   mov     [rbp-70h], rcx
.std:0000000140E00971 48 8D 4C 24 70                                lea     rcx, [rsp+70h]  ; Load Effective Address
.std:0000000140E00976 48 89 48 18                                   mov     [rax+18h], rcx
.std:0000000140E0097A 48 8B 44 24 70                                mov     rax, [rsp+70h]
.std:0000000140E0097F FF 40 20                                      inc     dword ptr [rax+20h] ; Increment by 1
.std:0000000140E00982 E8 A9 B6 25 0E                                call    sub_14F05C030   ; Call Procedure
.std:0000000140E00987 48 8B C8                                      mov     rcx, rax
.std:0000000140E0098A E8 51 80 26 0E                                call    sub_14F0689E0   ; Call Procedure
.std:0000000140E0098F E8 8C DD 15 0E                                call    sub_14EF5E720   ; Call Procedure
.std:0000000140E00994 48 8B C8                                      mov     rcx, rax
.std:0000000140E00997 B2 01                                         mov     dl, 1
.std:0000000140E00999 E8 22 69 16 0E                                call    sub_14EF672C0   ; Call Procedure
.std:0000000140E0099E E8 4D DC 15 0E                                call    sub_14EF5E5F0   ; Call Procedure
.std:0000000140E009A3 48 8B C8                                      mov     rcx, rax
.std:0000000140E009A6 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E009A8 E8 53 1E 00 00                                call    lua_setprotopageout ; Call Procedure
.std:0000000140E009AD E8 4E 1E 00 00                                call    lua_setprotopageout ; Call Procedure
.std:0000000140E009B2 40 38 3D 91 B5 7F 19                          cmp     cs:byte_15A5FBF4A, dil ; Compare Two Operands
.std:0000000140E009B9 75 0F                                         jnz     short loc_140E009CA ; Jump if Not Zero (ZF=0)
.std:0000000140E009BB 8B 05 3F C1 67 19                             mov     eax, cs:dword_15A47CB00
.std:0000000140E009C1 85 C0                                         test    eax, eax        ; Logical Compare
.std:0000000140E009C3 75 05                                         jnz     short loc_140E009CA ; Jump if Not Zero (ZF=0)
.std:0000000140E009C5 E8 16 76 49 0F                                call    sub_150297FE0   ; Call Procedure
.std:0000000140E009CA
.std:0000000140E009CA                               loc_140E009CA:                          ; CODE XREF: sub_140E008E0+D9↑j
.std:0000000140E009CA                                                                       ; sub_140E008E0+E3↑j
.std:0000000140E009CA E8 81 BF 95 0F                                call    sub_15075C950   ; Call Procedure
.std:0000000140E009CF 48 8B C8                                      mov     rcx, rax
.std:0000000140E009D2 48 8B 10                                      mov     rdx, [rax]
.std:0000000140E009D5 FF 52 58                                      call    qword ptr [rdx+58h] ; Indirect Call Near Procedure
.std:0000000140E009D8 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E009DA 74 0E                                         jz      short loc_140E009EA ; Jump if Zero (ZF=1)
.std:0000000140E009DC E8 6F BF 95 0F                                call    sub_15075C950   ; Call Procedure
.std:0000000140E009E1 48 8B C8                                      mov     rcx, rax
.std:0000000140E009E4 48 8B 10                                      mov     rdx, [rax]
.std:0000000140E009E7 FF 52 60                                      call    qword ptr [rdx+60h] ; Indirect Call Near Procedure
.std:0000000140E009EA
.std:0000000140E009EA                               loc_140E009EA:                          ; CODE XREF: sub_140E008E0+FA↑j
.std:0000000140E009EA E8 E1 B7 25 0E                                call    sub_14F05C1D0   ; Call Procedure
.std:0000000140E009EF 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E009F2 74 09                                         jz      short loc_140E009FD ; Jump if Zero (ZF=1)
.std:0000000140E009F4 48 8B 10                                      mov     rdx, [rax]
.std:0000000140E009F7 48 8B C8                                      mov     rcx, rax
.std:0000000140E009FA FF 52 08                                      call    qword ptr [rdx+8] ; Indirect Call Near Procedure
.std:0000000140E009FD
.std:0000000140E009FD                               loc_140E009FD:                          ; CODE XREF: sub_140E008E0+112↑j
.std:0000000140E009FD 4C 8B 3D C4 E7 6A 19                          mov     r15, cs:qword_15A4AF1C8
.std:0000000140E00A04 4C 8D 05 A5 4D 2E 12                          lea     r8, aFrameD     ; Load Effective Address
.std:0000000140E00A0B 0F 57 C0                                      xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140E00A0E 4C 89 7D 98                                   mov     [rbp-68h], r15
.std:0000000140E00A12 4D 8B CF                                      mov     r9, r15
.std:0000000140E00A15 48 8D 4D 20                                   lea     rcx, [rbp+20h]  ; Load Effective Address
.std:0000000140E00A19 BA 20 00 00 00                                mov     edx, 20h ; ' '
.std:0000000140E00A1E 0F 11 45 20                                   movups  xmmword ptr [rbp+20h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140E00A22 0F 11 45 30                                   movups  xmmword ptr [rbp+30h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140E00A26 0F 11 45 40                                   movups  xmmword ptr [rbp+40h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140E00A2A 0F 11 45 50                                   movups  xmmword ptr [rbp+50h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140E00A2E E8 5D 90 02 00                                call    sub_140E29A90   ; Call Procedure
.std:0000000140E00A33 48 8B 0D B6 BF 5F 19                          mov     rcx, cs:qword_15A3FC9F0
.std:0000000140E00A3A 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.std:0000000140E00A3D 75 0C                                         jnz     short loc_140E00A4B ; Jump if Not Zero (ZF=0)
.std:0000000140E00A3F E8 3C 29 14 0E                                call    sub_14EF43380   ; Call Procedure
.std:0000000140E00A44 48 8B 0D A5 BF 5F 19                          mov     rcx, cs:qword_15A3FC9F0
.std:0000000140E00A4B
.std:0000000140E00A4B                               loc_140E00A4B:                          ; CODE XREF: sub_140E008E0+15D↑j
.std:0000000140E00A4B 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E00A4E FF 90 90 00 00 00                             call    qword ptr [rax+90h] ; Indirect Call Near Procedure
.std:0000000140E00A54 65 48 8B 04 25 58 00 00 00                    mov     rax, gs:58h
.std:0000000140E00A5D 44 8B 2D 84 C4 94 19                          mov     r13d, cs:TlsIndex
.std:0000000140E00A64 B9 04 02 00 00                                mov     ecx, 204h
.std:0000000140E00A69 4A 8B 04 E8                                   mov     rax, [rax+r13*8]
.std:0000000140E00A6D 8B 0C 01                                      mov     ecx, [rcx+rax]
.std:0000000140E00A70 39 0D FA D3 D9 18                             cmp     cs:dword_159B9DE70, ecx ; Compare Two Operands
.std:0000000140E00A76 0F 8F D1 1A 00 00                             jg      loc_140E0254D   ; Jump if Greater (ZF=0 & SF=OF)
.std:0000000140E00A7C
.std:0000000140E00A7C                               loc_140E00A7C:                          ; CODE XREF: sub_140E008E0+1C80↓j
.std:0000000140E00A7C                                                                       ; sub_140E008E0+1CD7↓j
.std:0000000140E00A7C 48 8B 05 E5 D3 D9 18                          mov     rax, cs:qword_159B9DE68
.std:0000000140E00A83 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E00A86 74 09                                         jz      short loc_140E00A91 ; Jump if Zero (ZF=1)
.std:0000000140E00A88 39 38                                         cmp     [rax], edi      ; Compare Two Operands
.std:0000000140E00A8A 7E 05                                         jle     short loc_140E00A91 ; Jump if Less or Equal (ZF=1 | SF!=OF)
.std:0000000140E00A8C 41 B4 01                                      mov     r12b, 1
.std:0000000140E00A8F EB 03                                         jmp     short loc_140E00A94 ; Jump
.std:0000000140E00A91                               ; ---------------------------------------------------------------------------
.std:0000000140E00A91
.std:0000000140E00A91                               loc_140E00A91:                          ; CODE XREF: sub_140E008E0+1A6↑j
.std:0000000140E00A91                                                                       ; sub_140E008E0+1AA↑j
.std:0000000140E00A91 45 32 E4                                      xor     r12b, r12b      ; Logical Exclusive OR
.std:0000000140E00A94
.std:0000000140E00A94                               loc_140E00A94:                          ; CODE XREF: sub_140E008E0+1AF↑j
.std:0000000140E00A94 48 8D 0D 5D D4 80 18                          lea     rcx, unk_15960DEF8 ; Load Effective Address
.std:0000000140E00A9B 44 88 64 24 41                                mov     [rsp+41h], r12b
.std:0000000140E00AA0 E8 1B 84 00 00                                call    sub_140E08EC0   ; Call Procedure
.std:0000000140E00AA5 E8 16 72 23 0E                                call    sub_14F037CC0   ; Call Procedure
.std:0000000140E00AAA 48 8B C8                                      mov     rcx, rax
.std:0000000140E00AAD 48 8B 10                                      mov     rdx, [rax]
.std:0000000140E00AB0 FF 52 48                                      call    qword ptr [rdx+48h] ; Indirect Call Near Procedure
.std:0000000140E00AB3 40 38 3D D3 44 68 19                          cmp     cs:byte_15A484F8D, dil ; Compare Two Operands
.std:0000000140E00ABA 74 12                                         jz      short loc_140E00ACE ; Jump if Zero (ZF=1)
.std:0000000140E00ABC 48 8B 43 28                                   mov     rax, [rbx+28h]
.std:0000000140E00AC0 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E00AC3 74 09                                         jz      short loc_140E00ACE ; Jump if Zero (ZF=1)
.std:0000000140E00AC5 48 39 05 FC E6 6A 19                          cmp     cs:qword_15A4AF1C8, rax ; Compare Two Operands
.std:0000000140E00ACC 77 15                                         ja      short loc_140E00AE3 ; Jump if Above (CF=0 & ZF=0)
.std:0000000140E00ACE
.std:0000000140E00ACE                               loc_140E00ACE:                          ; CODE XREF: sub_140E008E0+1DA↑j
.std:0000000140E00ACE                                                                       ; sub_140E008E0+1E3↑j
.std:0000000140E00ACE F2 0F 10 4B 20                                movsd   xmm1, qword ptr [rbx+20h] ; Move Scalar Double-Precision Floating-Point Values
.std:0000000140E00AD3 0F 57 C0                                      xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140E00AD6 66 0F 2E C8                                   ucomisd xmm1, xmm0      ; Unordered Compare Scalar Ordered Double-Precision Floating-Point Values and Set EFLAGS
.std:0000000140E00ADA 74 0E                                         jz      short loc_140E00AEA ; Jump if Zero (ZF=1)
.std:0000000140E00ADC 66 0F 2F 4B 18                                comisd  xmm1, qword ptr [rbx+18h] ; Compare Scalar Ordered Double-Precision Floating-Point Values and Set EFLAGS
.std:0000000140E00AE1 73 07                                         jnb     short loc_140E00AEA ; Jump if Not Below (CF=0)
.std:0000000140E00AE3
.std:0000000140E00AE3                               loc_140E00AE3:                          ; CODE XREF: sub_140E008E0+1EC↑j
.std:0000000140E00AE3 33 C9                                         xor     ecx, ecx        ; Logical Exclusive OR
.std:0000000140E00AE5 E8 96 FA 29 0E                                call    sub_14F0A0580   ; Call Procedure
.std:0000000140E00AEA
.std:0000000140E00AEA                               loc_140E00AEA:                          ; CODE XREF: sub_140E008E0+1FA↑j
.std:0000000140E00AEA                                                                       ; sub_140E008E0+201↑j
.std:0000000140E00AEA 83 3D 2F 66 9A 18 03                          cmp     cs:dword_1597A7120, 3 ; Compare Two Operands
.std:0000000140E00AF1 41 BE FF FF FF FF                             mov     r14d, 0FFFFFFFFh
.std:0000000140E00AF7 75 62                                         jnz     short loc_140E00B5B ; Jump if Not Zero (ZF=0)
.std:0000000140E00AF9 8B 1D 69 BB 80 18                             mov     ebx, cs:dword_15960C668
.std:0000000140E00AFF 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E00B03 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E00B05 41 B8 03 00 00 00                             mov     r8d, 3
.std:0000000140E00B0B E8 70 9A 00 00                                call    sub_140E0A580   ; Call Procedure
.std:0000000140E00B10 41 B1 01                                      mov     r9b, 1
.std:0000000140E00B13 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00B16 89 59 10                                      mov     [rcx+10h], ebx
.std:0000000140E00B19 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00B1C 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E00B20 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E00B24 48 8B 59 18                                   mov     rbx, [rcx+18h]
.std:0000000140E00B28 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E00B2B 74 20                                         jz      short loc_140E00B4D ; Jump if Zero (ZF=1)
.std:0000000140E00B2D F0 FF 43 48                                   lock inc dword ptr [rbx+48h] ; Increment by 1
.std:0000000140E00B31 E8 FA 8C 02 00                                call    sub_140E29830   ; Call Procedure
.std:0000000140E00B36 41 8B C6                                      mov     eax, r14d
.std:0000000140E00B39 F0 0F C1 43 48                                lock xadd [rbx+48h], eax ; t<-dest; dest<-src+dest; src<-t
.std:0000000140E00B3E 83 F8 01                                      cmp     eax, 1          ; Compare Two Operands
.std:0000000140E00B41 75 0F                                         jnz     short loc_140E00B52 ; Jump if Not Zero (ZF=0)
.std:0000000140E00B43 48 8B CB                                      mov     rcx, rbx
.std:0000000140E00B46 E8 A5 65 12 0E                                call    sub_14EF270F0   ; Call Procedure
.std:0000000140E00B4B EB 05                                         jmp     short loc_140E00B52 ; Jump
.std:0000000140E00B4D                               ; ---------------------------------------------------------------------------
.std:0000000140E00B4D
.std:0000000140E00B4D                               loc_140E00B4D:                          ; CODE XREF: sub_140E008E0+24B↑j
.std:0000000140E00B4D E8 DE 8C 02 00                                call    sub_140E29830   ; Call Procedure
.std:0000000140E00B52
.std:0000000140E00B52                               loc_140E00B52:                          ; CODE XREF: sub_140E008E0+261↑j
.std:0000000140E00B52                                                                       ; sub_140E008E0+26B↑j
.std:0000000140E00B52 41 8D 4F FF                                   lea     ecx, [r15-1]    ; Load Effective Address
.std:0000000140E00B56 E8 05 69 48 0F                                call    sub_150287460   ; Call Procedure
.std:0000000140E00B5B
.std:0000000140E00B5B                               loc_140E00B5B:                          ; CODE XREF: sub_140E008E0+217↑j
.std:0000000140E00B5B FF 15 5F C9 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E00B61 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E00B63 75 09                                         jnz     short loc_140E00B6E ; Jump if Not Zero (ZF=0)
.std:0000000140E00B65 48 8B 0D 5C D9 9D 18                          mov     rcx, cs:qword_1597DE4C8
.std:0000000140E00B6C EB 29                                         jmp     short loc_140E00B97 ; Jump
.std:0000000140E00B6E                               ; ---------------------------------------------------------------------------
.std:0000000140E00B6E
.std:0000000140E00B6E                               loc_140E00B6E:                          ; CODE XREF: sub_140E008E0+283↑j
.std:0000000140E00B6E 48 8B 0D 53 F9 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E00B75 0F B6 05 52 F9 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E00B7C 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E00B81 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E00B83 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E00B87 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E00B8A 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E00B8E 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E00B92 48 8B 4C 24 30                                mov     rcx, [rsp+30h]
.std:0000000140E00B97
.std:0000000140E00B97                               loc_140E00B97:                          ; CODE XREF: sub_140E008E0+28C↑j
.std:0000000140E00B97 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E00B9A FF 90 A8 02 00 00                             call    qword ptr [rax+2A8h] ; Indirect Call Near Procedure
.std:0000000140E00BA0 45 84 E4                                      test    r12b, r12b      ; Logical Compare
.std:0000000140E00BA3 74 17                                         jz      short loc_140E00BBC ; Jump if Zero (ZF=1)
.std:0000000140E00BA5 48 8D 0D 14 C9 9D 18                          lea     rcx, off_1597DD4C0 ; Load Effective Address
.std:0000000140E00BAC E8 7F 5E 00 00                                call    sub_140E06A30   ; Call Procedure
.std:0000000140E00BB1 48 8B C8                                      mov     rcx, rax
.std:0000000140E00BB4 49 8B D7                                      mov     rdx, r15
.std:0000000140E00BB7 E8 34 05 44 10                                call    sub_1512410F0   ; Call Procedure
.std:0000000140E00BBC
.std:0000000140E00BBC                               loc_140E00BBC:                          ; CODE XREF: sub_140E008E0+2C3↑j
.std:0000000140E00BBC 83 3D 5D 65 9A 18 04                          cmp     cs:dword_1597A7120, 4 ; Compare Two Operands
.std:0000000140E00BC3 75 62                                         jnz     short loc_140E00C27 ; Jump if Not Zero (ZF=0)
.std:0000000140E00BC5 41 8D 4F FF                                   lea     ecx, [r15-1]    ; Load Effective Address
.std:0000000140E00BC9 E8 92 68 48 0F                                call    sub_150287460   ; Call Procedure
.std:0000000140E00BCE 8B 1D 94 BA 80 18                             mov     ebx, cs:dword_15960C668
.std:0000000140E00BD4 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E00BD8 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E00BDA 41 B8 03 00 00 00                             mov     r8d, 3
.std:0000000140E00BE0 E8 9B 99 00 00                                call    sub_140E0A580   ; Call Procedure
.std:0000000140E00BE5 41 B1 01                                      mov     r9b, 1
.std:0000000140E00BE8 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00BEB 89 59 10                                      mov     [rcx+10h], ebx
.std:0000000140E00BEE 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00BF1 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E00BF5 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E00BF9 48 8B 59 18                                   mov     rbx, [rcx+18h]
.std:0000000140E00BFD 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E00C00 74 20                                         jz      short loc_140E00C22 ; Jump if Zero (ZF=1)
.std:0000000140E00C02 F0 FF 43 48                                   lock inc dword ptr [rbx+48h] ; Increment by 1
.std:0000000140E00C06 E8 25 8C 02 00                                call    sub_140E29830   ; Call Procedure
.std:0000000140E00C0B 41 8B C6                                      mov     eax, r14d
.std:0000000140E00C0E F0 0F C1 43 48                                lock xadd [rbx+48h], eax ; t<-dest; dest<-src+dest; src<-t
.std:0000000140E00C13 83 F8 01                                      cmp     eax, 1          ; Compare Two Operands
.std:0000000140E00C16 75 0F                                         jnz     short loc_140E00C27 ; Jump if Not Zero (ZF=0)
.std:0000000140E00C18 48 8B CB                                      mov     rcx, rbx
.std:0000000140E00C1B E8 D0 64 12 0E                                call    sub_14EF270F0   ; Call Procedure
.std:0000000140E00C20 EB 05                                         jmp     short loc_140E00C27 ; Jump
.std:0000000140E00C22                               ; ---------------------------------------------------------------------------
.std:0000000140E00C22
.std:0000000140E00C22                               loc_140E00C22:                          ; CODE XREF: sub_140E008E0+320↑j
.std:0000000140E00C22 E8 09 8C 02 00                                call    sub_140E29830   ; Call Procedure
.std:0000000140E00C27
.std:0000000140E00C27                               loc_140E00C27:                          ; CODE XREF: sub_140E008E0+2E3↑j
.std:0000000140E00C27                                                                       ; sub_140E008E0+336↑j ...
.std:0000000140E00C27 40 38 3D 46 D2 D9 18                          cmp     cs:byte_159B9DE74, dil ; Compare Two Operands
.std:0000000140E00C2E 74 0C                                         jz      short loc_140E00C3C ; Jump if Zero (ZF=1)
.std:0000000140E00C30 48 8D 0D 21 D3 80 18                          lea     rcx, unk_15960DF58 ; Load Effective Address
.std:0000000140E00C37 E8 84 82 00 00                                call    sub_140E08EC0   ; Call Procedure
.std:0000000140E00C3C
.std:0000000140E00C3C                               loc_140E00C3C:                          ; CODE XREF: sub_140E008E0+34E↑j
.std:0000000140E00C3C 48 8D 0D FD D2 80 18                          lea     rcx, unk_15960DF40 ; Load Effective Address
.std:0000000140E00C43 C6 05 2A D2 D9 18 01                          mov     cs:byte_159B9DE74, 1
.std:0000000140E00C4A E8 71 82 00 00                                call    sub_140E08EC0   ; Call Procedure
.std:0000000140E00C4F E8 EC 9A 16 0E                                call    sub_14EF6A740   ; Call Procedure
.std:0000000140E00C54 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E00C56 75 25                                         jnz     short loc_140E00C7D ; Jump if Not Zero (ZF=0)
.std:0000000140E00C58 40 38 3D EA B2 7F 19                          cmp     cs:byte_15A5FBF49, dil ; Compare Two Operands
.std:0000000140E00C5F 75 31                                         jnz     short loc_140E00C92 ; Jump if Not Zero (ZF=0)
.std:0000000140E00C61 40 38 3D C0 E5 6A 19                          cmp     cs:byte_15A4AF228, dil ; Compare Two Operands
.std:0000000140E00C68 74 13                                         jz      short loc_140E00C7D ; Jump if Zero (ZF=1)
.std:0000000140E00C6A FF 15 D8 58 07 12                             call    cs:qword_152E76548 ; Indirect Call Near Procedure
.std:0000000140E00C70 3B 05 A2 E5 6A 19                             cmp     eax, cs:dword_15A4AF218 ; Compare Two Operands
.std:0000000140E00C76 0F 94 C0                                      setz    al              ; Set Byte if Zero (ZF=1)
.std:0000000140E00C79 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E00C7B 74 15                                         jz      short loc_140E00C92 ; Jump if Zero (ZF=1)
.std:0000000140E00C7D
.std:0000000140E00C7D                               loc_140E00C7D:                          ; CODE XREF: sub_140E008E0+376↑j
.std:0000000140E00C7D                                                                       ; sub_140E008E0+388↑j
.std:0000000140E00C7D E8 3E 7F 48 0F                                call    loc_150288BC0   ; Call Procedure
.std:0000000140E00C82 49 8B D7                                      mov     rdx, r15
.std:0000000140E00C85 48 8B C8                                      mov     rcx, rax
.std:0000000140E00C88 E8 53 80 00 00                                call    sub_140E08CE0   ; Call Procedure
.std:0000000140E00C8D E9 96 00 00 00                                jmp     loc_140E00D28   ; Jump
.std:0000000140E00C92                               ; ---------------------------------------------------------------------------
.std:0000000140E00C92
.std:0000000140E00C92                               loc_140E00C92:                          ; CODE XREF: sub_140E008E0+37F↑j
.std:0000000140E00C92                                                                       ; sub_140E008E0+39B↑j
.std:0000000140E00C92 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E00C94 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E00C98 39 3D 82 64 9A 18                             cmp     cs:dword_1597A7120, edi ; Compare Two Operands
.std:0000000140E00C9E 41 B8 FF 00 00 00                             mov     r8d, 0FFh
.std:0000000140E00CA4 75 4A                                         jnz     short loc_140E00CF0 ; Jump if Not Zero (ZF=0)
.std:0000000140E00CA6 E8 25 8C 00 00                                call    sub_140E098D0   ; Call Procedure
.std:0000000140E00CAB 41 B1 01                                      mov     r9b, 1
.std:0000000140E00CAE 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00CB1 4C 89 79 10                                   mov     [rcx+10h], r15
.std:0000000140E00CB5 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00CB8 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E00CBC 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E00CC0 48 8B 59 20                                   mov     rbx, [rcx+20h]
.std:0000000140E00CC4 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E00CC7 74 20                                         jz      short loc_140E00CE9 ; Jump if Zero (ZF=1)
.std:0000000140E00CC9 F0 FF 43 48                                   lock inc dword ptr [rbx+48h] ; Increment by 1
.std:0000000140E00CCD E8 7E 81 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E00CD2 41 8B C6                                      mov     eax, r14d
.std:0000000140E00CD5 F0 0F C1 43 48                                lock xadd [rbx+48h], eax ; t<-dest; dest<-src+dest; src<-t
.std:0000000140E00CDA 83 F8 01                                      cmp     eax, 1          ; Compare Two Operands
.std:0000000140E00CDD 75 49                                         jnz     short loc_140E00D28 ; Jump if Not Zero (ZF=0)
.std:0000000140E00CDF 48 8B CB                                      mov     rcx, rbx
.std:0000000140E00CE2 E8 09 64 12 0E                                call    sub_14EF270F0   ; Call Procedure
.std:0000000140E00CE7 EB 3F                                         jmp     short loc_140E00D28 ; Jump
.std:0000000140E00CE9                               ; ---------------------------------------------------------------------------
.std:0000000140E00CE9
.std:0000000140E00CE9                               loc_140E00CE9:                          ; CODE XREF: sub_140E008E0+3E7↑j
.std:0000000140E00CE9 E8 62 81 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E00CEE EB 38                                         jmp     short loc_140E00D28 ; Jump
.std:0000000140E00CF0                               ; ---------------------------------------------------------------------------
.std:0000000140E00CF0
.std:0000000140E00CF0                               loc_140E00CF0:                          ; CODE XREF: sub_140E008E0+3C4↑j
.std:0000000140E00CF0 E8 DB 8B 00 00                                call    sub_140E098D0   ; Call Procedure
.std:0000000140E00CF5 45 33 C9                                      xor     r9d, r9d        ; Logical Exclusive OR
.std:0000000140E00CF8 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00CFB 4C 89 79 10                                   mov     [rcx+10h], r15
.std:0000000140E00CFF 48 8B 18                                      mov     rbx, [rax]
.std:0000000140E00D02 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E00D06 48 8B CB                                      mov     rcx, rbx
.std:0000000140E00D09 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E00D0D E8 3E 81 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E00D12 E8 29 24 12 0E                                call    loc_14EF23140   ; Call Procedure
.std:0000000140E00D17 44 8B 43 08                                   mov     r8d, [rbx+8]
.std:0000000140E00D1B 48 8B D3                                      mov     rdx, rbx
.std:0000000140E00D1E 48 8B C8                                      mov     rcx, rax
.std:0000000140E00D21 4C 8B 08                                      mov     r9, [rax]
.std:0000000140E00D24 41 FF 51 08                                   call    qword ptr [r9+8] ; Indirect Call Near Procedure
.std:0000000140E00D28
.std:0000000140E00D28                               loc_140E00D28:                          ; CODE XREF: sub_140E008E0+3AD↑j
.std:0000000140E00D28                                                                       ; sub_140E008E0+3FD↑j ...
.std:0000000140E00D28 FF 15 92 C7 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E00D2E 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E00D30 75 09                                         jnz     short loc_140E00D3B ; Jump if Not Zero (ZF=0)
.std:0000000140E00D32 48 8B 1D 8F D7 9D 18                          mov     rbx, cs:qword_1597DE4C8
.std:0000000140E00D39 EB 29                                         jmp     short loc_140E00D64 ; Jump
.std:0000000140E00D3B                               ; ---------------------------------------------------------------------------
.std:0000000140E00D3B
.std:0000000140E00D3B                               loc_140E00D3B:                          ; CODE XREF: sub_140E008E0+450↑j
.std:0000000140E00D3B 48 8B 0D 86 F7 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E00D42 0F B6 05 85 F7 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E00D49 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E00D4E 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E00D50 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E00D54 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E00D57 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E00D5B 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E00D5F 48 8B 5C 24 30                                mov     rbx, [rsp+30h]
.std:0000000140E00D64
.std:0000000140E00D64                               loc_140E00D64:                          ; CODE XREF: sub_140E008E0+459↑j
.std:0000000140E00D64 48 8D 8B F0 0D 00 00                          lea     rcx, [rbx+0DF0h] ; Load Effective Address
.std:0000000140E00D6B FF 15 0F CD 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E00D71 48 8D 8B F0 0D 00 00                          lea     rcx, [rbx+0DF0h] ; Load Effective Address
.std:0000000140E00D78 48 8B F8                                      mov     rdi, rax
.std:0000000140E00D7B FF 15 FF CC 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E00D81 48 63 8B F8 0D 00 00                          movsxd  rcx, dword ptr [rbx+0DF8h] ; Move with Sign-Extend Doubleword
.std:0000000140E00D88 48 8D 34 C8                                   lea     rsi, [rax+rcx*8] ; Load Effective Address
.std:0000000140E00D8C 48 3B FE                                      cmp     rdi, rsi        ; Compare Two Operands
.std:0000000140E00D8F 0F 84 21 01 00 00                             jz      loc_140E00EB6   ; Jump if Zero (ZF=1)
.std:0000000140E00D95                                               db      66h, 66h
.std:0000000140E00D95 66 66 66 0F 1F 84 00 00 00 00                 nop     word ptr [rax+rax+00000000h] ; No Operation
.std:0000000140E00D95 00
.std:0000000140E00DA0
.std:0000000140E00DA0                               loc_140E00DA0:                          ; CODE XREF: sub_140E008E0+5D0↓j
.std:0000000140E00DA0 48 8B 07                                      mov     rax, [rdi]
.std:0000000140E00DA3 48 8B 98 78 02 00 00                          mov     rbx, [rax+278h]
.std:0000000140E00DAA 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E00DAD 0F 84 F6 00 00 00                             jz      loc_140E00EA9   ; Jump if Zero (ZF=1)
.std:0000000140E00DB3 48 8B 9B B8 01 00 00                          mov     rbx, [rbx+1B8h]
.std:0000000140E00DBA E8 81 99 16 0E                                call    sub_14EF6A740   ; Call Procedure
.std:0000000140E00DBF 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E00DC1 75 23                                         jnz     short loc_140E00DE6 ; Jump if Not Zero (ZF=0)
.std:0000000140E00DC3 38 05 80 B1 7F 19                             cmp     cs:byte_15A5FBF49, al ; Compare Two Operands
.std:0000000140E00DC9 75 48                                         jnz     short loc_140E00E13 ; Jump if Not Zero (ZF=0)
.std:0000000140E00DCB 38 05 57 E4 6A 19                             cmp     cs:byte_15A4AF228, al ; Compare Two Operands
.std:0000000140E00DD1 74 13                                         jz      short loc_140E00DE6 ; Jump if Zero (ZF=1)
.std:0000000140E00DD3 FF 15 6F 57 07 12                             call    cs:qword_152E76548 ; Indirect Call Near Procedure
.std:0000000140E00DD9 3B 05 39 E4 6A 19                             cmp     eax, cs:dword_15A4AF218 ; Compare Two Operands
.std:0000000140E00DDF 0F 94 C0                                      setz    al              ; Set Byte if Zero (ZF=1)
.std:0000000140E00DE2 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E00DE4 74 2D                                         jz      short loc_140E00E13 ; Jump if Zero (ZF=1)
.std:0000000140E00DE6
.std:0000000140E00DE6                               loc_140E00DE6:                          ; CODE XREF: sub_140E008E0+4E1↑j
.std:0000000140E00DE6                                                                       ; sub_140E008E0+4F1↑j
.std:0000000140E00DE6 E8 D5 7D 48 0F                                call    loc_150288BC0   ; Call Procedure
.std:0000000140E00DEB 4C 8B 03                                      mov     r8, [rbx]
.std:0000000140E00DEE 48 8B D0                                      mov     rdx, rax
.std:0000000140E00DF1 48 8B CB                                      mov     rcx, rbx
.std:0000000140E00DF4 4C 8B F0                                      mov     r14, rax
.std:0000000140E00DF7 41 FF 50 18                                   call    qword ptr [r8+18h] ; Indirect Call Near Procedure
.std:0000000140E00DFB 4C 8B 03                                      mov     r8, [rbx]
.std:0000000140E00DFE 49 8B D6                                      mov     rdx, r14
.std:0000000140E00E01 48 8B CB                                      mov     rcx, rbx
.std:0000000140E00E04 41 FF 50 20                                   call    qword ptr [r8+20h] ; Indirect Call Near Procedure
.std:0000000140E00E08 41 BE FF FF FF FF                             mov     r14d, 0FFFFFFFFh
.std:0000000140E00E0E E9 96 00 00 00                                jmp     loc_140E00EA9   ; Jump
.std:0000000140E00E13                               ; ---------------------------------------------------------------------------
.std:0000000140E00E13
.std:0000000140E00E13                               loc_140E00E13:                          ; CODE XREF: sub_140E008E0+4E9↑j
.std:0000000140E00E13                                                                       ; sub_140E008E0+504↑j
.std:0000000140E00E13 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E00E15 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E00E19 39 15 01 63 9A 18                             cmp     cs:dword_1597A7120, edx ; Compare Two Operands
.std:0000000140E00E1F 41 B8 FF 00 00 00                             mov     r8d, 0FFh
.std:0000000140E00E25 75 4A                                         jnz     short loc_140E00E71 ; Jump if Not Zero (ZF=0)
.std:0000000140E00E27 E8 64 93 00 00                                call    sub_140E0A190   ; Call Procedure
.std:0000000140E00E2C 41 B1 01                                      mov     r9b, 1
.std:0000000140E00E2F 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00E32 48 89 59 10                                   mov     [rcx+10h], rbx
.std:0000000140E00E36 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00E39 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E00E3D 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E00E41 48 8B 59 20                                   mov     rbx, [rcx+20h]
.std:0000000140E00E45 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E00E48 74 20                                         jz      short loc_140E00E6A ; Jump if Zero (ZF=1)
.std:0000000140E00E4A F0 FF 43 48                                   lock inc dword ptr [rbx+48h] ; Increment by 1
.std:0000000140E00E4E E8 FD 7F 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E00E53 41 8B C6                                      mov     eax, r14d
.std:0000000140E00E56 F0 0F C1 43 48                                lock xadd [rbx+48h], eax ; t<-dest; dest<-src+dest; src<-t
.std:0000000140E00E5B 83 F8 01                                      cmp     eax, 1          ; Compare Two Operands
.std:0000000140E00E5E 75 49                                         jnz     short loc_140E00EA9 ; Jump if Not Zero (ZF=0)
.std:0000000140E00E60 48 8B CB                                      mov     rcx, rbx
.std:0000000140E00E63 E8 88 62 12 0E                                call    sub_14EF270F0   ; Call Procedure
.std:0000000140E00E68 EB 3F                                         jmp     short loc_140E00EA9 ; Jump
.std:0000000140E00E6A                               ; ---------------------------------------------------------------------------
.std:0000000140E00E6A
.std:0000000140E00E6A                               loc_140E00E6A:                          ; CODE XREF: sub_140E008E0+568↑j
.std:0000000140E00E6A E8 E1 7F 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E00E6F EB 38                                         jmp     short loc_140E00EA9 ; Jump
.std:0000000140E00E71                               ; ---------------------------------------------------------------------------
.std:0000000140E00E71
.std:0000000140E00E71                               loc_140E00E71:                          ; CODE XREF: sub_140E008E0+545↑j
.std:0000000140E00E71 E8 1A 93 00 00                                call    sub_140E0A190   ; Call Procedure
.std:0000000140E00E76 45 33 C9                                      xor     r9d, r9d        ; Logical Exclusive OR
.std:0000000140E00E79 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00E7C 48 89 59 10                                   mov     [rcx+10h], rbx
.std:0000000140E00E80 48 8B 18                                      mov     rbx, [rax]
.std:0000000140E00E83 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E00E87 48 8B CB                                      mov     rcx, rbx
.std:0000000140E00E8A 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E00E8E E8 BD 7F 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E00E93 E8 A8 22 12 0E                                call    loc_14EF23140   ; Call Procedure
.std:0000000140E00E98 44 8B 43 08                                   mov     r8d, [rbx+8]
.std:0000000140E00E9C 48 8B D3                                      mov     rdx, rbx
.std:0000000140E00E9F 48 8B C8                                      mov     rcx, rax
.std:0000000140E00EA2 4C 8B 08                                      mov     r9, [rax]
.std:0000000140E00EA5 41 FF 51 08                                   call    qword ptr [r9+8] ; Indirect Call Near Procedure
.std:0000000140E00EA9
.std:0000000140E00EA9                               loc_140E00EA9:                          ; CODE XREF: sub_140E008E0+4CD↑j
.std:0000000140E00EA9                                                                       ; sub_140E008E0+52E↑j ...
.std:0000000140E00EA9 48 83 C7 08                                   add     rdi, 8          ; Add
.std:0000000140E00EAD 48 3B FE                                      cmp     rdi, rsi        ; Compare Two Operands
.std:0000000140E00EB0 0F 85 EA FE FF FF                             jnz     loc_140E00DA0   ; Jump if Not Zero (ZF=0)
.std:0000000140E00EB6
.std:0000000140E00EB6                               loc_140E00EB6:                          ; CODE XREF: sub_140E008E0+4AF↑j
.std:0000000140E00EB6 FF 15 04 C6 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E00EBC 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E00EBE 75 09                                         jnz     short loc_140E00EC9 ; Jump if Not Zero (ZF=0)
.std:0000000140E00EC0 48 8B 1D 01 D6 9D 18                          mov     rbx, cs:qword_1597DE4C8
.std:0000000140E00EC7 EB 29                                         jmp     short loc_140E00EF2 ; Jump
.std:0000000140E00EC9                               ; ---------------------------------------------------------------------------
.std:0000000140E00EC9
.std:0000000140E00EC9                               loc_140E00EC9:                          ; CODE XREF: sub_140E008E0+5DE↑j
.std:0000000140E00EC9 48 8B 0D F8 F5 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E00ED0 0F B6 05 F7 F5 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E00ED7 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E00EDC 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E00EDE 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E00EE2 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E00EE5 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E00EE9 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E00EED 48 8B 5C 24 30                                mov     rbx, [rsp+30h]
.std:0000000140E00EF2
.std:0000000140E00EF2                               loc_140E00EF2:                          ; CODE XREF: sub_140E008E0+5E7↑j
.std:0000000140E00EF2 48 8D 8B F0 0D 00 00                          lea     rcx, [rbx+0DF0h] ; Load Effective Address
.std:0000000140E00EF9 FF 15 81 CB 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E00EFF 48 8D 8B F0 0D 00 00                          lea     rcx, [rbx+0DF0h] ; Load Effective Address
.std:0000000140E00F06 48 8B F8                                      mov     rdi, rax
.std:0000000140E00F09 FF 15 71 CB 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E00F0F 48 63 8B F8 0D 00 00                          movsxd  rcx, dword ptr [rbx+0DF8h] ; Move with Sign-Extend Doubleword
.std:0000000140E00F16 48 8D 34 C8                                   lea     rsi, [rax+rcx*8] ; Load Effective Address
.std:0000000140E00F1A 48 3B FE                                      cmp     rdi, rsi        ; Compare Two Operands
.std:0000000140E00F1D 0F 84 FF 00 00 00                             jz      loc_140E01022   ; Jump if Zero (ZF=1)
.std:0000000140E00F23
.std:0000000140E00F23                               loc_140E00F23:                          ; CODE XREF: sub_140E008E0+73C↓j
.std:0000000140E00F23 48 8B 07                                      mov     rax, [rdi]
.std:0000000140E00F26 48 8B 98 78 02 00 00                          mov     rbx, [rax+278h]
.std:0000000140E00F2D 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E00F30 0F 84 DF 00 00 00                             jz      loc_140E01015   ; Jump if Zero (ZF=1)
.std:0000000140E00F36 48 8B 9B B8 01 00 00                          mov     rbx, [rbx+1B8h]
.std:0000000140E00F3D E8 FE 97 16 0E                                call    sub_14EF6A740   ; Call Procedure
.std:0000000140E00F42 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E00F44 75 23                                         jnz     short loc_140E00F69 ; Jump if Not Zero (ZF=0)
.std:0000000140E00F46 38 05 FD AF 7F 19                             cmp     cs:byte_15A5FBF49, al ; Compare Two Operands
.std:0000000140E00F4C 75 31                                         jnz     short loc_140E00F7F ; Jump if Not Zero (ZF=0)
.std:0000000140E00F4E 38 05 D4 E2 6A 19                             cmp     cs:byte_15A4AF228, al ; Compare Two Operands
.std:0000000140E00F54 74 13                                         jz      short loc_140E00F69 ; Jump if Zero (ZF=1)
.std:0000000140E00F56 FF 15 EC 55 07 12                             call    cs:qword_152E76548 ; Indirect Call Near Procedure
.std:0000000140E00F5C 3B 05 B6 E2 6A 19                             cmp     eax, cs:dword_15A4AF218 ; Compare Two Operands
.std:0000000140E00F62 0F 94 C0                                      setz    al              ; Set Byte if Zero (ZF=1)
.std:0000000140E00F65 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E00F67 74 16                                         jz      short loc_140E00F7F ; Jump if Zero (ZF=1)
.std:0000000140E00F69
.std:0000000140E00F69                               loc_140E00F69:                          ; CODE XREF: sub_140E008E0+664↑j
.std:0000000140E00F69                                                                       ; sub_140E008E0+674↑j
.std:0000000140E00F69 E8 52 7C 48 0F                                call    loc_150288BC0   ; Call Procedure
.std:0000000140E00F6E 48 8B 03                                      mov     rax, [rbx]
.std:0000000140E00F71 48 8B CB                                      mov     rcx, rbx
.std:0000000140E00F74 FF 90 78 04 00 00                             call    qword ptr [rax+478h] ; Indirect Call Near Procedure
.std:0000000140E00F7A E9 96 00 00 00                                jmp     loc_140E01015   ; Jump
.std:0000000140E00F7F                               ; ---------------------------------------------------------------------------
.std:0000000140E00F7F
.std:0000000140E00F7F                               loc_140E00F7F:                          ; CODE XREF: sub_140E008E0+66C↑j
.std:0000000140E00F7F                                                                       ; sub_140E008E0+687↑j
.std:0000000140E00F7F 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E00F81 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E00F85 39 15 95 61 9A 18                             cmp     cs:dword_1597A7120, edx ; Compare Two Operands
.std:0000000140E00F8B 41 B8 FF 00 00 00                             mov     r8d, 0FFh
.std:0000000140E00F91 75 4A                                         jnz     short loc_140E00FDD ; Jump if Not Zero (ZF=0)
.std:0000000140E00F93 E8 B8 90 00 00                                call    sub_140E0A050   ; Call Procedure
.std:0000000140E00F98 41 B1 01                                      mov     r9b, 1
.std:0000000140E00F9B 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00F9E 48 89 59 10                                   mov     [rcx+10h], rbx
.std:0000000140E00FA2 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00FA5 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E00FA9 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E00FAD 48 8B 59 20                                   mov     rbx, [rcx+20h]
.std:0000000140E00FB1 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E00FB4 74 20                                         jz      short loc_140E00FD6 ; Jump if Zero (ZF=1)
.std:0000000140E00FB6 F0 FF 43 48                                   lock inc dword ptr [rbx+48h] ; Increment by 1
.std:0000000140E00FBA E8 91 7E 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E00FBF 41 8B C6                                      mov     eax, r14d
.std:0000000140E00FC2 F0 0F C1 43 48                                lock xadd [rbx+48h], eax ; t<-dest; dest<-src+dest; src<-t
.std:0000000140E00FC7 83 F8 01                                      cmp     eax, 1          ; Compare Two Operands
.std:0000000140E00FCA 75 49                                         jnz     short loc_140E01015 ; Jump if Not Zero (ZF=0)
.std:0000000140E00FCC 48 8B CB                                      mov     rcx, rbx
.std:0000000140E00FCF E8 1C 61 12 0E                                call    sub_14EF270F0   ; Call Procedure
.std:0000000140E00FD4 EB 3F                                         jmp     short loc_140E01015 ; Jump
.std:0000000140E00FD6                               ; ---------------------------------------------------------------------------
.std:0000000140E00FD6
.std:0000000140E00FD6                               loc_140E00FD6:                          ; CODE XREF: sub_140E008E0+6D4↑j
.std:0000000140E00FD6 E8 75 7E 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E00FDB EB 38                                         jmp     short loc_140E01015 ; Jump
.std:0000000140E00FDD                               ; ---------------------------------------------------------------------------
.std:0000000140E00FDD
.std:0000000140E00FDD                               loc_140E00FDD:                          ; CODE XREF: sub_140E008E0+6B1↑j
.std:0000000140E00FDD E8 6E 90 00 00                                call    sub_140E0A050   ; Call Procedure
.std:0000000140E00FE2 45 33 C9                                      xor     r9d, r9d        ; Logical Exclusive OR
.std:0000000140E00FE5 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E00FE8 48 89 59 10                                   mov     [rcx+10h], rbx
.std:0000000140E00FEC 48 8B 18                                      mov     rbx, [rax]
.std:0000000140E00FEF 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E00FF3 48 8B CB                                      mov     rcx, rbx
.std:0000000140E00FF6 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E00FFA E8 51 7E 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E00FFF E8 3C 21 12 0E                                call    loc_14EF23140   ; Call Procedure
.std:0000000140E01004 44 8B 43 08                                   mov     r8d, [rbx+8]
.std:0000000140E01008 48 8B D3                                      mov     rdx, rbx
.std:0000000140E0100B 48 8B C8                                      mov     rcx, rax
.std:0000000140E0100E 4C 8B 08                                      mov     r9, [rax]
.std:0000000140E01011 41 FF 51 08                                   call    qword ptr [r9+8] ; Indirect Call Near Procedure
.std:0000000140E01015
.std:0000000140E01015                               loc_140E01015:                          ; CODE XREF: sub_140E008E0+650↑j
.std:0000000140E01015                                                                       ; sub_140E008E0+69A↑j ...
.std:0000000140E01015 48 83 C7 08                                   add     rdi, 8          ; Add
.std:0000000140E01019 48 3B FE                                      cmp     rdi, rsi        ; Compare Two Operands
.std:0000000140E0101C 0F 85 01 FF FF FF                             jnz     loc_140E00F23   ; Jump if Not Zero (ZF=0)
.std:0000000140E01022
.std:0000000140E01022                               loc_140E01022:                          ; CODE XREF: sub_140E008E0+63D↑j
.std:0000000140E01022 FF 15 98 C4 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E01028 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E0102A 75 09                                         jnz     short loc_140E01035 ; Jump if Not Zero (ZF=0)
.std:0000000140E0102C 48 8B 05 95 D4 9D 18                          mov     rax, cs:qword_1597DE4C8
.std:0000000140E01033 EB 29                                         jmp     short loc_140E0105E ; Jump
.std:0000000140E01035                               ; ---------------------------------------------------------------------------
.std:0000000140E01035
.std:0000000140E01035                               loc_140E01035:                          ; CODE XREF: sub_140E008E0+74A↑j
.std:0000000140E01035 48 8B 0D 8C F4 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E0103C 0F B6 05 8B F4 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E01043 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E01048 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E0104A 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E0104E 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E01051 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E01055 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E01059 48 8B 44 24 30                                mov     rax, [rsp+30h]
.std:0000000140E0105E
.std:0000000140E0105E                               loc_140E0105E:                          ; CODE XREF: sub_140E008E0+753↑j
.std:0000000140E0105E 48 83 B8 10 09 00 00 00                       cmp     qword ptr [rax+910h], 0 ; Compare Two Operands
.std:0000000140E01066 0F 84 F0 00 00 00                             jz      loc_140E0115C   ; Jump if Zero (ZF=1)
.std:0000000140E0106C FF 15 4E C4 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E01072 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01074 75 09                                         jnz     short loc_140E0107F ; Jump if Not Zero (ZF=0)
.std:0000000140E01076 48 8B 0D 4B D4 9D 18                          mov     rcx, cs:qword_1597DE4C8
.std:0000000140E0107D EB 29                                         jmp     short loc_140E010A8 ; Jump
.std:0000000140E0107F                               ; ---------------------------------------------------------------------------
.std:0000000140E0107F
.std:0000000140E0107F                               loc_140E0107F:                          ; CODE XREF: sub_140E008E0+794↑j
.std:0000000140E0107F 48 8B 0D 42 F4 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E01086 0F B6 05 41 F4 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E0108D 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E01092 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E01094 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E01098 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E0109B 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E0109F 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E010A3 48 8B 4C 24 30                                mov     rcx, [rsp+30h]
.std:0000000140E010A8
.std:0000000140E010A8                               loc_140E010A8:                          ; CODE XREF: sub_140E008E0+79D↑j
.std:0000000140E010A8 48 8B 89 10 09 00 00                          mov     rcx, [rcx+910h]
.std:0000000140E010AF 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E010B2 FF 90 58 01 00 00                             call    qword ptr [rax+158h] ; Indirect Call Near Procedure
.std:0000000140E010B8 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E010BB 0F 84 9B 00 00 00                             jz      loc_140E0115C   ; Jump if Zero (ZF=1)
.std:0000000140E010C1 FF 15 F9 C3 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E010C7 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E010C9 75 09                                         jnz     short loc_140E010D4 ; Jump if Not Zero (ZF=0)
.std:0000000140E010CB 48 8B 0D F6 D3 9D 18                          mov     rcx, cs:qword_1597DE4C8
.std:0000000140E010D2 EB 29                                         jmp     short loc_140E010FD ; Jump
.std:0000000140E010D4                               ; ---------------------------------------------------------------------------
.std:0000000140E010D4
.std:0000000140E010D4                               loc_140E010D4:                          ; CODE XREF: sub_140E008E0+7E9↑j
.std:0000000140E010D4 48 8B 0D ED F3 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E010DB 0F B6 05 EC F3 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E010E2 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E010E7 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E010E9 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E010ED 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E010F0 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E010F4 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E010F8 48 8B 4C 24 30                                mov     rcx, [rsp+30h]
.std:0000000140E010FD
.std:0000000140E010FD                               loc_140E010FD:                          ; CODE XREF: sub_140E008E0+7F2↑j
.std:0000000140E010FD 48 8B 89 10 09 00 00                          mov     rcx, [rcx+910h]
.std:0000000140E01104 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E01107 FF 90 58 01 00 00                             call    qword ptr [rax+158h] ; Indirect Call Near Procedure
.std:0000000140E0110D 48 8B C8                                      mov     rcx, rax
.std:0000000140E01110 E8 7B D3 EC 0F                                call    sub_150CCE490   ; Call Procedure
.std:0000000140E01115 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01117 74 43                                         jz      short loc_140E0115C ; Jump if Zero (ZF=1)
.std:0000000140E01119 FF 15 A1 C3 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E0111F 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01121 75 09                                         jnz     short loc_140E0112C ; Jump if Not Zero (ZF=0)
.std:0000000140E01123 48 8B 0D 9E D3 9D 18                          mov     rcx, cs:qword_1597DE4C8
.std:0000000140E0112A EB 29                                         jmp     short loc_140E01155 ; Jump
.std:0000000140E0112C                               ; ---------------------------------------------------------------------------
.std:0000000140E0112C
.std:0000000140E0112C                               loc_140E0112C:                          ; CODE XREF: sub_140E008E0+841↑j
.std:0000000140E0112C 48 8B 0D 95 F3 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E01133 0F B6 05 94 F3 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E0113A 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E0113F 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E01141 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E01145 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E01148 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E0114C 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E01150 48 8B 4C 24 30                                mov     rcx, [rsp+30h]
.std:0000000140E01155
.std:0000000140E01155                               loc_140E01155:                          ; CODE XREF: sub_140E008E0+84A↑j
.std:0000000140E01155 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E01157 E8 44 EB 41 10                                call    sub_15121FCA0   ; Call Procedure
.std:0000000140E0115C
.std:0000000140E0115C                               loc_140E0115C:                          ; CODE XREF: sub_140E008E0+786↑j
.std:0000000140E0115C                                                                       ; sub_140E008E0+7DB↑j ...
.std:0000000140E0115C FF 15 5E C3 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E01162 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01164 75 09                                         jnz     short loc_140E0116F ; Jump if Not Zero (ZF=0)
.std:0000000140E01166 48 8B 0D 5B D3 9D 18                          mov     rcx, cs:qword_1597DE4C8
.std:0000000140E0116D EB 29                                         jmp     short loc_140E01198 ; Jump
.std:0000000140E0116F                               ; ---------------------------------------------------------------------------
.std:0000000140E0116F
.std:0000000140E0116F                               loc_140E0116F:                          ; CODE XREF: sub_140E008E0+884↑j
.std:0000000140E0116F 48 8B 0D 52 F3 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E01176 0F B6 05 51 F3 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E0117D 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E01182 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E01184 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E01188 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E0118B 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E0118F 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E01193 48 8B 4C 24 30                                mov     rcx, [rsp+30h]
.std:0000000140E01198
.std:0000000140E01198                               loc_140E01198:                          ; CODE XREF: sub_140E008E0+88D↑j
.std:0000000140E01198 F2 0F 10 0D C8 C5 80 18                       movsd   xmm1, cs:qword_15960D768 ; Move Scalar Double-Precision Floating-Point Values
.std:0000000140E011A0 66 0F 5A C9                                   cvtpd2ps xmm1, xmm1     ; Convert Packed Double-Precision Floating-Point Values to Packed Single-Precision Floating-Point Values
.std:0000000140E011A4 E8 77 EE B3 0F                                call    sub_150940020   ; Call Procedure
.std:0000000140E011A9 E8 42 B2 41 0E                                call    loc_14F21C3F0   ; Call Procedure
.std:0000000140E011AE 48 8B 0D 9B DF 6A 19                          mov     rcx, cs:qword_15A4AF150
.std:0000000140E011B5 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E011B8 FF 50 58                                      call    qword ptr [rax+58h] ; Indirect Call Near Procedure
.std:0000000140E011BB 33 FF                                         xor     edi, edi        ; Logical Exclusive OR
.std:0000000140E011BD 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E011C2 48 89 7C 24 48                                mov     [rsp+48h], rdi
.std:0000000140E011C7 89 7C 24 50                                   mov     [rsp+50h], edi
.std:0000000140E011CB FF 15 AF C8 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E011D1 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E011D6 FF 15 AC C8 80 18                             call    cs:off_15960DA88 ; Indirect Call Near Procedure
.std:0000000140E011DC 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E011E1 48 8B D8                                      mov     rbx, rax
.std:0000000140E011E4 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E011E7 74 2B                                         jz      short loc_140E01214 ; Jump if Zero (ZF=1)
.std:0000000140E011E9 FF 15 91 C8 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E011EF 45 33 C0                                      xor     r8d, r8d        ; Logical Exclusive OR
.std:0000000140E011F2 BA 20 00 00 00                                mov     edx, 20h ; ' '
.std:0000000140E011F7 48 8B C8                                      mov     rcx, rax
.std:0000000140E011FA E8 B1 D5 16 0E                                call    sub_14EF6E7B0   ; Call Procedure
.std:0000000140E011FF 48 8B D3                                      mov     rdx, rbx
.std:0000000140E01202 48 89 44 24 30                                mov     [rsp+30h], rax
.std:0000000140E01207 48 8D 4C 24 30                                lea     rcx, [rsp+30h]  ; Load Effective Address
.std:0000000140E0120C FF 15 7E C8 80 18                             call    cs:off_15960DA90 ; Indirect Call Near Procedure
.std:0000000140E01212 EB 16                                         jmp     short loc_140E0122A ; Jump
.std:0000000140E01214                               ; ---------------------------------------------------------------------------
.std:0000000140E01214
.std:0000000140E01214                               loc_140E01214:                          ; CODE XREF: sub_140E008E0+907↑j
.std:0000000140E01214 FF 15 66 C8 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E0121A 45 33 C0                                      xor     r8d, r8d        ; Logical Exclusive OR
.std:0000000140E0121D BA 20 00 00 00                                mov     edx, 20h ; ' '
.std:0000000140E01222 48 8B C8                                      mov     rcx, rax
.std:0000000140E01225 E8 86 D5 16 0E                                call    sub_14EF6E7B0   ; Call Procedure
.std:0000000140E0122A
.std:0000000140E0122A                               loc_140E0122A:                          ; CODE XREF: sub_140E008E0+932↑j
.std:0000000140E0122A 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E0122F 48 89 44 24 48                                mov     [rsp+48h], rax
.std:0000000140E01234 FF 15 46 C8 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E0123A 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E0123F C7 44 24 50 02 00 00 00                       mov     dword ptr [rsp+50h], 2
.std:0000000140E01247 FF 15 33 C8 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E0124D 48 8B D8                                      mov     rbx, rax
.std:0000000140E01250 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E01253 74 28                                         jz      short loc_140E0127D ; Jump if Zero (ZF=1)
.std:0000000140E01255 48 8D 05 8C 53 2E 12                          lea     rax, off_1530E65E8 ; Load Effective Address
.std:0000000140E0125C 48 89 03                                      mov     [rbx], rax
.std:0000000140E0125F 48 8D 05 7A 68 47 0F                          lea     rax, sub_150277AE0 ; Load Effective Address
.std:0000000140E01266 48 89 43 08                                   mov     [rbx+8], rax
.std:0000000140E0126A E8 A1 1E 12 0E                                call    loc_14EF23110   ; Call Procedure
.std:0000000140E0126F 48 89 43 18                                   mov     [rbx+18h], rax
.std:0000000140E01273 48 8D 05 C6 53 2E 12                          lea     rax, off_1530E6640 ; Load Effective Address
.std:0000000140E0127A 48 89 03                                      mov     [rbx], rax
.std:0000000140E0127D
.std:0000000140E0127D                               loc_140E0127D:                          ; CODE XREF: sub_140E008E0+973↑j
.std:0000000140E0127D 48 8D 54 24 48                                lea     rdx, [rsp+48h]  ; Load Effective Address
.std:0000000140E01282 33 C9                                         xor     ecx, ecx        ; Logical Exclusive OR
.std:0000000140E01284 E8 77 15 00 00                                call    lua_setprotopageout ; Call Procedure
.std:0000000140E01289 8B 44 24 50                                   mov     eax, [rsp+50h]
.std:0000000140E0128D 85 C0                                         test    eax, eax        ; Logical Compare
.std:0000000140E0128F 0F 84 B1 00 00 00                             jz      loc_140E01346   ; Jump if Zero (ZF=1)
.std:0000000140E01295 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E0129A FF 15 E0 C7 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E012A0 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E012A3 74 60                                         jz      short loc_140E01305 ; Jump if Zero (ZF=1)
.std:0000000140E012A5
.std:0000000140E012A5                               loc_140E012A5:                          ; CODE XREF: sub_140E008E0+A3D↓j
.std:0000000140E012A5 4C 8B 00                                      mov     r8, [rax]
.std:0000000140E012A8 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E012AA 48 8B C8                                      mov     rcx, rax
.std:0000000140E012AD 41 FF 50 38                                   call    qword ptr [r8+38h] ; Indirect Call Near Procedure
.std:0000000140E012B1 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E012B6 FF 15 C4 C7 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E012BC 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E012BF 0F 84 7D 00 00 00                             jz      loc_140E01342   ; Jump if Zero (ZF=1)
.std:0000000140E012C5 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E012CA FF 15 B8 C7 80 18                             call    cs:off_15960DA88 ; Indirect Call Near Procedure
.std:0000000140E012D0 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E012D5 48 8B D8                                      mov     rbx, rax
.std:0000000140E012D8 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E012DB 74 42                                         jz      short loc_140E0131F ; Jump if Zero (ZF=1)
.std:0000000140E012DD FF 15 9D C7 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E012E3 45 33 C0                                      xor     r8d, r8d        ; Logical Exclusive OR
.std:0000000140E012E6 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E012E8 48 8B C8                                      mov     rcx, rax
.std:0000000140E012EB E8 C0 D4 16 0E                                call    sub_14EF6E7B0   ; Call Procedure
.std:0000000140E012F0 48 8B D3                                      mov     rdx, rbx
.std:0000000140E012F3 48 89 44 24 30                                mov     [rsp+30h], rax
.std:0000000140E012F8 48 8D 4C 24 30                                lea     rcx, [rsp+30h]  ; Load Effective Address
.std:0000000140E012FD FF 15 8D C7 80 18                             call    cs:off_15960DA90 ; Indirect Call Near Procedure
.std:0000000140E01303 EB 2D                                         jmp     short loc_140E01332 ; Jump
.std:0000000140E01305                               ; ---------------------------------------------------------------------------
.std:0000000140E01305
.std:0000000140E01305                               loc_140E01305:                          ; CODE XREF: sub_140E008E0+9C3↑j
.std:0000000140E01305 8B 44 24 50                                   mov     eax, [rsp+50h]
.std:0000000140E01309 85 C0                                         test    eax, eax        ; Logical Compare
.std:0000000140E0130B 74 39                                         jz      short loc_140E01346 ; Jump if Zero (ZF=1)
.std:0000000140E0130D 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E01312 FF 15 68 C7 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E01318 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E0131B 74 29                                         jz      short loc_140E01346 ; Jump if Zero (ZF=1)
.std:0000000140E0131D EB 86                                         jmp     short loc_140E012A5 ; Jump
.std:0000000140E0131F                               ; ---------------------------------------------------------------------------
.std:0000000140E0131F
.std:0000000140E0131F                               loc_140E0131F:                          ; CODE XREF: sub_140E008E0+9FB↑j
.std:0000000140E0131F FF 15 5B C7 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E01325 45 33 C0                                      xor     r8d, r8d        ; Logical Exclusive OR
.std:0000000140E01328 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E0132A 48 8B C8                                      mov     rcx, rax
.std:0000000140E0132D E8 7E D4 16 0E                                call    sub_14EF6E7B0   ; Call Procedure
.std:0000000140E01332
.std:0000000140E01332                               loc_140E01332:                          ; CODE XREF: sub_140E008E0+A23↑j
.std:0000000140E01332 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E01337 48 89 44 24 48                                mov     [rsp+48h], rax
.std:0000000140E0133C FF 15 3E C7 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E01342
.std:0000000140E01342                               loc_140E01342:                          ; CODE XREF: sub_140E008E0+9DF↑j
.std:0000000140E01342 89 7C 24 50                                   mov     [rsp+50h], edi
.std:0000000140E01346
.std:0000000140E01346                               loc_140E01346:                          ; CODE XREF: sub_140E008E0+9AF↑j
.std:0000000140E01346                                                                       ; sub_140E008E0+A2B↑j ...
.std:0000000140E01346 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E0134B FF 15 2F C7 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E01351 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E01354 74 13                                         jz      short loc_140E01369 ; Jump if Zero (ZF=1)
.std:0000000140E01356 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E0135B FF 15 1F C7 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E01361 48 8B C8                                      mov     rcx, rax
.std:0000000140E01364 E8 97 D0 15 0E                                call    sub_14EF5E400   ; Call Procedure
.std:0000000140E01369
.std:0000000140E01369                               loc_140E01369:                          ; CODE XREF: sub_140E008E0+A74↑j
.std:0000000140E01369 48 8D 4C 24 30                                lea     rcx, [rsp+30h]  ; Load Effective Address
.std:0000000140E0136E FF 15 CC 51 07 12                             call    cs:qword_152E76540 ; Indirect Call Near Procedure
.std:0000000140E01374 0F 57 D2                                      xorps   xmm2, xmm2      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140E01377 F2 48 0F 2A 54 24 30                          cvtsi2sd xmm2, qword ptr [rsp+30h] ; Convert Doubleword Integer to Scalar Double-Precision Floating-Point Value
.std:0000000140E0137E F2 0F 59 15 8A 68 63 19                       mulsd   xmm2, cs:qword_15A437C10 ; Multiply Scalar Double-Precision Floating-Point Values
.std:0000000140E01386 F2 0F 58 15 C2 56 2E 12                       addsd   xmm2, cs:qword_1530E6A50 ; Add Scalar Double-Precision Floating-Point Values
.std:0000000140E0138E 0F 28 C2                                      movaps  xmm0, xmm2      ; Move Aligned Four Packed Single-FP
.std:0000000140E01391 F2 0F 5C 05 FF C9 D9 18                       subsd   xmm0, cs:qword_159B9DD98 ; Subtract Scalar Double-Precision Floating-Point Values
.std:0000000140E01399 F2 0F 11 15 F7 C9 D9 18                       movsd   cs:qword_159B9DD98, xmm2 ; Move Scalar Double-Precision Floating-Point Values
.std:0000000140E013A1 F2 0F 59 05 8F 56 2E 12                       mulsd   xmm0, qword ptr cs:ymmword_1530E6A28+10h ; Multiply Scalar Double-Precision Floating-Point Values
.std:0000000140E013A9 66 0F 5A C8                                   cvtpd2ps xmm1, xmm0     ; Convert Packed Double-Precision Floating-Point Values to Packed Single-Precision Floating-Point Values
.std:0000000140E013AD F3 0F 10 05 F7 93 87 19                       movss   xmm0, cs:dword_15A67A7AC ; Move Scalar Single-FP
.std:0000000140E013B5 F3 0F 59 05 4B 56 2E 12                       mulss   xmm0, dword ptr cs:ymmword_1530E6A04+4 ; Scalar Single-FP Multiply
.std:0000000140E013BD F3 0F 59 0D 3B 56 2E 12                       mulss   xmm1, cs:dword_1530E6A00 ; Scalar Single-FP Multiply
.std:0000000140E013C5 F3 0F 58 C8                                   addss   xmm1, xmm0      ; Scalar Single-FP Add
.std:0000000140E013C9 F3 0F 10 05 9B 56 2E 12                       movss   xmm0, cs:dword_1530E6A6C ; Move Scalar Single-FP
.std:0000000140E013D1 F3 0F 5E C1                                   divss   xmm0, xmm1      ; Scalar Single-FP Divide
.std:0000000140E013D5 F3 0F 11 0D CF 93 87 19                       movss   cs:dword_15A67A7AC, xmm1 ; Move Scalar Single-FP
.std:0000000140E013DD F3 0F 11 05 C3 93 87 19                       movss   cs:dword_15A67A7A8, xmm0 ; Move Scalar Single-FP
.std:0000000140E013E5 E8 56 93 16 0E                                call    sub_14EF6A740   ; Call Procedure
.std:0000000140E013EA 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E013EC 0F 85 B7 00 00 00                             jnz     loc_140E014A9   ; Jump if Not Zero (ZF=0)
.std:0000000140E013F2 40 38 3D 50 AB 7F 19                          cmp     cs:byte_15A5FBF49, dil ; Compare Two Operands
.std:0000000140E013F9 75 24                                         jnz     short loc_140E0141F ; Jump if Not Zero (ZF=0)
.std:0000000140E013FB 40 38 3D 26 DE 6A 19                          cmp     cs:byte_15A4AF228, dil ; Compare Two Operands
.std:0000000140E01402 0F 84 A1 00 00 00                             jz      loc_140E014A9   ; Jump if Zero (ZF=1)
.std:0000000140E01408 FF 15 3A 51 07 12                             call    cs:qword_152E76548 ; Indirect Call Near Procedure
.std:0000000140E0140E 3B 05 04 DE 6A 19                             cmp     eax, cs:dword_15A4AF218 ; Compare Two Operands
.std:0000000140E01414 0F 94 C0                                      setz    al              ; Set Byte if Zero (ZF=1)
.std:0000000140E01417 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01419 0F 85 8A 00 00 00                             jnz     loc_140E014A9   ; Jump if Not Zero (ZF=0)
.std:0000000140E0141F
.std:0000000140E0141F                               loc_140E0141F:                          ; CODE XREF: sub_140E008E0+B19↑j
.std:0000000140E0141F 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E01421 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E01425 39 3D F5 5C 9A 18                             cmp     cs:dword_1597A7120, edi ; Compare Two Operands
.std:0000000140E0142B 41 B8 FF 00 00 00                             mov     r8d, 0FFh
.std:0000000140E01431 75 43                                         jnz     short loc_140E01476 ; Jump if Not Zero (ZF=0)
.std:0000000140E01433 E8 D8 8A 00 00                                call    sub_140E09F10   ; Call Procedure
.std:0000000140E01438 41 B1 01                                      mov     r9b, 1
.std:0000000140E0143B 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E0143E 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E01442 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E01446 48 8B 59 18                                   mov     rbx, [rcx+18h]
.std:0000000140E0144A 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E0144D 74 20                                         jz      short loc_140E0146F ; Jump if Zero (ZF=1)
.std:0000000140E0144F F0 FF 43 48                                   lock inc dword ptr [rbx+48h] ; Increment by 1
.std:0000000140E01453 E8 58 7C 02 00                                call    sub_140E290B0   ; Call Procedure
.std:0000000140E01458 41 8B C6                                      mov     eax, r14d
.std:0000000140E0145B F0 0F C1 43 48                                lock xadd [rbx+48h], eax ; t<-dest; dest<-src+dest; src<-t
.std:0000000140E01460 83 F8 01                                      cmp     eax, 1          ; Compare Two Operands
.std:0000000140E01463 75 55                                         jnz     short loc_140E014BA ; Jump if Not Zero (ZF=0)
.std:0000000140E01465 48 8B CB                                      mov     rcx, rbx
.std:0000000140E01468 E8 83 5C 12 0E                                call    sub_14EF270F0   ; Call Procedure
.std:0000000140E0146D EB 4B                                         jmp     short loc_140E014BA ; Jump
.std:0000000140E0146F                               ; ---------------------------------------------------------------------------
.std:0000000140E0146F
.std:0000000140E0146F                               loc_140E0146F:                          ; CODE XREF: sub_140E008E0+B6D↑j
.std:0000000140E0146F E8 3C 7C 02 00                                call    sub_140E290B0   ; Call Procedure
.std:0000000140E01474 EB 44                                         jmp     short loc_140E014BA ; Jump
.std:0000000140E01476                               ; ---------------------------------------------------------------------------
.std:0000000140E01476
.std:0000000140E01476                               loc_140E01476:                          ; CODE XREF: sub_140E008E0+B51↑j
.std:0000000140E01476 E8 95 8A 00 00                                call    sub_140E09F10   ; Call Procedure
.std:0000000140E0147B 45 33 C9                                      xor     r9d, r9d        ; Logical Exclusive OR
.std:0000000140E0147E 48 8B 18                                      mov     rbx, [rax]
.std:0000000140E01481 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E01485 48 8B CB                                      mov     rcx, rbx
.std:0000000140E01488 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E0148C E8 1F 7C 02 00                                call    sub_140E290B0   ; Call Procedure
.std:0000000140E01491 E8 AA 1C 12 0E                                call    loc_14EF23140   ; Call Procedure
.std:0000000140E01496 44 8B 43 08                                   mov     r8d, [rbx+8]
.std:0000000140E0149A 48 8B D3                                      mov     rdx, rbx
.std:0000000140E0149D 48 8B C8                                      mov     rcx, rax
.std:0000000140E014A0 4C 8B 08                                      mov     r9, [rax]
.std:0000000140E014A3 41 FF 51 08                                   call    qword ptr [r9+8] ; Indirect Call Near Procedure
.std:0000000140E014A7 EB 11                                         jmp     short loc_140E014BA ; Jump
.std:0000000140E014A9                               ; ---------------------------------------------------------------------------
.std:0000000140E014A9
.std:0000000140E014A9                               loc_140E014A9:                          ; CODE XREF: sub_140E008E0+B0C↑j
.std:0000000140E014A9                                                                       ; sub_140E008E0+B22↑j ...
.std:0000000140E014A9 E8 12 77 48 0F                                call    loc_150288BC0   ; Call Procedure
.std:0000000140E014AE C6 05 D7 BE 9D 18 01                          mov     cs:byte_1597DD38C, 1
.std:0000000140E014B5 E8 E6 64 48 0F                                call    near ptr unk_1502879A0 ; Call Procedure
.std:0000000140E014BA
.std:0000000140E014BA                               loc_140E014BA:                          ; CODE XREF: sub_140E008E0+B83↑j
.std:0000000140E014BA                                                                       ; sub_140E008E0+B8D↑j ...
.std:0000000140E014BA 45 84 E4                                      test    r12b, r12b      ; Logical Compare
.std:0000000140E014BD 74 44                                         jz      short loc_140E01503 ; Jump if Zero (ZF=1)
.std:0000000140E014BF FF 15 FB BF 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E014C5 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E014C7 75 09                                         jnz     short loc_140E014D2 ; Jump if Not Zero (ZF=0)
.std:0000000140E014C9 48 8B 0D F8 CF 9D 18                          mov     rcx, cs:qword_1597DE4C8
.std:0000000140E014D0 EB 29                                         jmp     short loc_140E014FB ; Jump
.std:0000000140E014D2                               ; ---------------------------------------------------------------------------
.std:0000000140E014D2
.std:0000000140E014D2                               loc_140E014D2:                          ; CODE XREF: sub_140E008E0+BE7↑j
.std:0000000140E014D2 48 8B 0D EF EF 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E014D9 0F B6 05 EE EF 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E014E0 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E014E5 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E014E7 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E014EB 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E014EE 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E014F2 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E014F6 48 8B 4C 24 30                                mov     rcx, [rsp+30h]
.std:0000000140E014FB
.std:0000000140E014FB                               loc_140E014FB:                          ; CODE XREF: sub_140E008E0+BF0↑j
.std:0000000140E014FB 49 8B D7                                      mov     rdx, r15
.std:0000000140E014FE E8 2D E4 43 10                                call    sub_15123F930   ; Call Procedure
.std:0000000140E01503
.std:0000000140E01503                               loc_140E01503:                          ; CODE XREF: sub_140E008E0+BDD↑j
.std:0000000140E01503 48 39 3D C6 F7 6D 19                          cmp     cs:qword_15A4E0CD0, rdi ; Compare Two Operands
.std:0000000140E0150A 74 1D                                         jz      short loc_140E01529 ; Jump if Zero (ZF=1)
.std:0000000140E0150C 48 8B 1D 35 FA 6D 19                          mov     rbx, cs:qword_15A4E0F48
.std:0000000140E01513 48 8B 05 26 FA 6D 19                          mov     rax, cs:qword_15A4E0F40
.std:0000000140E0151A 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E0151D 74 03                                         jz      short loc_140E01522 ; Jump if Zero (ZF=1)
.std:0000000140E0151F FF 43 08                                      inc     dword ptr [rbx+8] ; Increment by 1
.std:0000000140E01522
.std:0000000140E01522                               loc_140E01522:                          ; CODE XREF: sub_140E008E0+C3D↑j
.std:0000000140E01522 48 89 44 24 30                                mov     [rsp+30h], rax
.std:0000000140E01527 EB 08                                         jmp     short loc_140E01531 ; Jump
.std:0000000140E01529                               ; ---------------------------------------------------------------------------
.std:0000000140E01529
.std:0000000140E01529                               loc_140E01529:                          ; CODE XREF: sub_140E008E0+C2A↑j
.std:0000000140E01529 48 8B DF                                      mov     rbx, rdi
.std:0000000140E0152C 48 89 7C 24 30                                mov     [rsp+30h], rdi
.std:0000000140E01531
.std:0000000140E01531                               loc_140E01531:                          ; CODE XREF: sub_140E008E0+C47↑j
.std:0000000140E01531 48 89 5C 24 38                                mov     [rsp+38h], rbx
.std:0000000140E01536 0F 28 44 24 30                                movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
.std:0000000140E0153B 66 0F 7F 44 24 30                             movdqa  xmmword ptr [rsp+30h], xmm0 ; Move Aligned Double Quadword
.std:0000000140E01541 48 89 7D F8                                   mov     [rbp-8], rdi
.std:0000000140E01545 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E01548 74 03                                         jz      short loc_140E0154D ; Jump if Zero (ZF=1)
.std:0000000140E0154A FF 43 08                                      inc     dword ptr [rbx+8] ; Increment by 1
.std:0000000140E0154D
.std:0000000140E0154D                               loc_140E0154D:                          ; CODE XREF: sub_140E008E0+C68↑j
.std:0000000140E0154D 48 8D 54 24 30                                lea     rdx, [rsp+30h]  ; Load Effective Address
.std:0000000140E01552 48 8D 4D A0                                   lea     rcx, [rbp-60h]  ; Load Effective Address
.std:0000000140E01556 E8 35 0F 63 0E                                call    sub_14F432490   ; Call Procedure
.std:0000000140E0155B B1 01                                         mov     cl, 1
.std:0000000140E0155D E8 7E 9D 64 0E                                call    sub_14F44B2E0   ; Call Procedure
.std:0000000140E01562 48 8D 4D A0                                   lea     rcx, [rbp-60h]  ; Load Effective Address
.std:0000000140E01566 E8 E5 36 63 0E                                call    sub_14F434C50   ; Call Procedure
.std:0000000140E0156B 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E0156E 74 22                                         jz      short loc_140E01592 ; Jump if Zero (ZF=1)
.std:0000000140E01570 83 6B 08 01                                   sub     dword ptr [rbx+8], 1 ; Integer Subtraction
.std:0000000140E01574 75 1C                                         jnz     short loc_140E01592 ; Jump if Not Zero (ZF=0)
.std:0000000140E01576 48 8B 03                                      mov     rax, [rbx]
.std:0000000140E01579 48 8B CB                                      mov     rcx, rbx
.std:0000000140E0157C FF 10                                         call    qword ptr [rax] ; Indirect Call Near Procedure
.std:0000000140E0157E 83 6B 0C 01                                   sub     dword ptr [rbx+0Ch], 1 ; Integer Subtraction
.std:0000000140E01582 75 0E                                         jnz     short loc_140E01592 ; Jump if Not Zero (ZF=0)
.std:0000000140E01584 48 8B 03                                      mov     rax, [rbx]
.std:0000000140E01587 BA 01 00 00 00                                mov     edx, 1
.std:0000000140E0158C 48 8B CB                                      mov     rcx, rbx
.std:0000000140E0158F FF 50 08                                      call    qword ptr [rax+8] ; Indirect Call Near Procedure
.std:0000000140E01592
.std:0000000140E01592                               loc_140E01592:                          ; CODE XREF: sub_140E008E0+C8E↑j
.std:0000000140E01592                                                                       ; sub_140E008E0+C94↑j ...
.std:0000000140E01592 65 48 8B 04 25 58 00 00 00                    mov     rax, gs:58h
.std:0000000140E0159B BE 04 02 00 00                                mov     esi, 204h
.std:0000000140E015A0 4A 8B 04 E8                                   mov     rax, [rax+r13*8]
.std:0000000140E015A4 8B 0C 06                                      mov     ecx, [rsi+rax]
.std:0000000140E015A7 39 0D 23 C8 D9 18                             cmp     cs:dword_159B9DDD0, ecx ; Compare Two Operands
.std:0000000140E015AD 0F 8F 09 10 00 00                             jg      loc_140E025BC   ; Jump if Greater (ZF=0 & SF=OF)
.std:0000000140E015B3
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
.std:0000000140E016D1
.std:0000000140E016D1                               loc_140E016D1:                          ; CODE XREF: sub_140E008E0+DC0↑j
.std:0000000140E016D1 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E016D4 74 3B                                         jz      short loc_140E01711 ; Jump if Zero (ZF=1)
.std:0000000140E016D6 41 B0 01                                      mov     r8b, 1
.std:0000000140E016D9 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E016DB 48 8B CB                                      mov     rcx, rbx
.std:0000000140E016DE E8 2D 77 49 10                                call    sub_151298E10   ; Call Procedure
.std:0000000140E016E3 F3 0F 10 05 F1 D0 87 19                       movss   xmm0, cs:dword_15A67E7DC ; Move Scalar Single-FP
.std:0000000140E016EB 0F 2E 80 C0 03 00 00                          ucomiss xmm0, dword ptr [rax+3C0h] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:0000000140E016F2 74 1D                                         jz      short loc_140E01711 ; Jump if Zero (ZF=1)
.std:0000000140E016F4 41 B0 01                                      mov     r8b, 1
.std:0000000140E016F7 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E016F9 48 8B CB                                      mov     rcx, rbx
.std:0000000140E016FC E8 0F 77 49 10                                call    sub_151298E10   ; Call Procedure
.std:0000000140E01701 F3 0F 10 05 D3 D0 87 19                       movss   xmm0, cs:dword_15A67E7DC ; Move Scalar Single-FP
.std:0000000140E01709 F3 0F 11 80 C0 03 00 00                       movss   dword ptr [rax+3C0h], xmm0 ; Move Scalar Single-FP
.std:0000000140E01711
.std:0000000140E01711                               loc_140E01711:                          ; CODE XREF: sub_140E008E0+DF4↑j
.std:0000000140E01711                                                                       ; sub_140E008E0+E12↑j
.std:0000000140E01711 C7 05 C1 D0 87 19 00 00 00 00                 mov     cs:dword_15A67E7DC, 0
.std:0000000140E0171B
.std:0000000140E0171B                               loc_140E0171B:                          ; CODE XREF: sub_140E008E0+DA9↑j
.std:0000000140E0171B E8 F0 CF 15 0E                                call    loc_14EF5E710   ; Call Procedure
.std:0000000140E01720 48 8B C8                                      mov     rcx, rax
.std:0000000140E01723 E8 28 34 17 0E                                call    sub_14EF74B50   ; Call Procedure
.std:0000000140E01728 48 8D 4C 24 30                                lea     rcx, [rsp+30h]  ; Load Effective Address
.std:0000000140E0172D FF 15 0D 4E 07 12                             call    cs:qword_152E76540 ; Indirect Call Near Procedure
.std:0000000140E01733 48 8B 44 24 30                                mov     rax, [rsp+30h]
.std:0000000140E01738 48 89 05 B1 DA 6A 19                          mov     cs:qword_15A4AF1F0, rax
.std:0000000140E0173F 65 48 8B 04 25 58 00 00 00                    mov     rax, gs:58h
.std:0000000140E01748 4A 8B 04 E8                                   mov     rax, [rax+r13*8]
.std:0000000140E0174C 8B 0C 06                                      mov     ecx, [rsi+rax]
.std:0000000140E0174F 39 0D 2B C7 D9 18                             cmp     cs:dword_159B9DE80, ecx ; Compare Two Operands
.std:0000000140E01755 0F 8F D0 0E 00 00                             jg      loc_140E0262B   ; Jump if Greater (ZF=0 & SF=OF)
.std:0000000140E0175B
.std:0000000140E0175B                               loc_140E0175B:                          ; CODE XREF: sub_140E008E0+1D5E↓j
.std:0000000140E0175B                                                                       ; sub_140E008E0+1DB5↓j
.std:0000000140E0175B 48 8B 05 16 C7 D9 18                          mov     rax, cs:qword_159B9DE78
.std:0000000140E01762 83 38 00                                      cmp     dword ptr [rax], 0 ; Compare Two Operands
.std:0000000140E01765 0F 8E 16 01 00 00                             jle     loc_140E01881   ; Jump if Less or Equal (ZF=1 | SF!=OF)
.std:0000000140E0176B 48 8B 05 7E DA 6A 19                          mov     rax, cs:qword_15A4AF1F0
.std:0000000140E01772 48 89 44 24 38                                mov     [rsp+38h], rax
.std:0000000140E01777 4C 89 7C 24 30                                mov     [rsp+30h], r15
.std:0000000140E0177C E8 BF 8F 16 0E                                call    sub_14EF6A740   ; Call Procedure
.std:0000000140E01781 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01783 74 17                                         jz      short loc_140E0179C ; Jump if Zero (ZF=1)
.std:0000000140E01785 E8 36 74 48 0F                                call    loc_150288BC0   ; Call Procedure
.std:0000000140E0178A 48 8B D0                                      mov     rdx, rax
.std:0000000140E0178D 48 8D 4C 24 30                                lea     rcx, [rsp+30h]  ; Load Effective Address
.std:0000000140E01792 E8 39 53 00 00                                call    sub_140E06AD0   ; Call Procedure
.std:0000000140E01797 E9 E5 00 00 00                                jmp     loc_140E01881   ; Jump
.std:0000000140E0179C                               ; ---------------------------------------------------------------------------
.std:0000000140E0179C
.std:0000000140E0179C                               loc_140E0179C:                          ; CODE XREF: sub_140E008E0+EA3↑j
.std:0000000140E0179C 80 3D A6 A7 7F 19 00                          cmp     cs:byte_15A5FBF49, 0 ; Compare Two Operands
.std:0000000140E017A3 75 3C                                         jnz     short loc_140E017E1 ; Jump if Not Zero (ZF=0)
.std:0000000140E017A5 80 3D 7C DA 6A 19 00                          cmp     cs:byte_15A4AF228, 0 ; Compare Two Operands
.std:0000000140E017AC 74 13                                         jz      short loc_140E017C1 ; Jump if Zero (ZF=1)
.std:0000000140E017AE FF 15 94 4D 07 12                             call    cs:qword_152E76548 ; Indirect Call Near Procedure
.std:0000000140E017B4 3B 05 5E DA 6A 19                             cmp     eax, cs:dword_15A4AF218 ; Compare Two Operands
.std:0000000140E017BA 0F 94 C0                                      setz    al              ; Set Byte if Zero (ZF=1)
.std:0000000140E017BD 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E017BF 74 20                                         jz      short loc_140E017E1 ; Jump if Zero (ZF=1)
.std:0000000140E017C1
.std:0000000140E017C1                               loc_140E017C1:                          ; CODE XREF: sub_140E008E0+ECC↑j
.std:0000000140E017C1 0F 28 44 24 30                                movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
.std:0000000140E017C6 66 0F 7F 45 A0                                movdqa  xmmword ptr [rbp-60h], xmm0 ; Move Aligned Double Quadword
.std:0000000140E017CB E8 F0 73 48 0F                                call    loc_150288BC0   ; Call Procedure
.std:0000000140E017D0 48 8B D0                                      mov     rdx, rax
.std:0000000140E017D3 48 8D 4D A0                                   lea     rcx, [rbp-60h]  ; Load Effective Address
.std:0000000140E017D7 E8 F4 52 00 00                                call    sub_140E06AD0   ; Call Procedure
.std:0000000140E017DC E9 A0 00 00 00                                jmp     loc_140E01881   ; Jump
.std:0000000140E017E1                               ; ---------------------------------------------------------------------------
.std:0000000140E017E1
.std:0000000140E017E1                               loc_140E017E1:                          ; CODE XREF: sub_140E008E0+EC3↑j
.std:0000000140E017E1                                                                       ; sub_140E008E0+EDF↑j
.std:0000000140E017E1 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E017E3 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E017E7 39 15 33 59 9A 18                             cmp     cs:dword_1597A7120, edx ; Compare Two Operands
.std:0000000140E017ED 41 B8 FF 00 00 00                             mov     r8d, 0FFh
.std:0000000140E017F3 75 4F                                         jnz     short loc_140E01844 ; Jump if Not Zero (ZF=0)
.std:0000000140E017F5 E8 D6 85 00 00                                call    sub_140E09DD0   ; Call Procedure
.std:0000000140E017FA 0F 28 44 24 30                                movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
.std:0000000140E017FF 41 B1 01                                      mov     r9b, 1
.std:0000000140E01802 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E01805 0F 11 41 10                                   movups  xmmword ptr [rcx+10h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140E01809 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E0180C 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E01810 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E01814 48 8B 59 28                                   mov     rbx, [rcx+28h]
.std:0000000140E01818 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E0181B 74 20                                         jz      short loc_140E0183D ; Jump if Zero (ZF=1)
.std:0000000140E0181D F0 FF 43 48                                   lock inc dword ptr [rbx+48h] ; Increment by 1
.std:0000000140E01821 E8 EA 7A 02 00                                call    sub_140E29310   ; Call Procedure
.std:0000000140E01826 41 8B C6                                      mov     eax, r14d
.std:0000000140E01829 F0 0F C1 43 48                                lock xadd [rbx+48h], eax ; t<-dest; dest<-src+dest; src<-t
.std:0000000140E0182E 83 F8 01                                      cmp     eax, 1          ; Compare Two Operands
.std:0000000140E01831 75 4E                                         jnz     short loc_140E01881 ; Jump if Not Zero (ZF=0)
.std:0000000140E01833 48 8B CB                                      mov     rcx, rbx
.std:0000000140E01836 E8 B5 58 12 0E                                call    sub_14EF270F0   ; Call Procedure
.std:0000000140E0183B EB 44                                         jmp     short loc_140E01881 ; Jump
.std:0000000140E0183D                               ; ---------------------------------------------------------------------------
.std:0000000140E0183D
.std:0000000140E0183D                               loc_140E0183D:                          ; CODE XREF: sub_140E008E0+F3B↑j
.std:0000000140E0183D E8 CE 7A 02 00                                call    sub_140E29310   ; Call Procedure
.std:0000000140E01842 EB 3D                                         jmp     short loc_140E01881 ; Jump
.std:0000000140E01844                               ; ---------------------------------------------------------------------------
.std:0000000140E01844
.std:0000000140E01844                               loc_140E01844:                          ; CODE XREF: sub_140E008E0+F13↑j
.std:0000000140E01844 E8 87 85 00 00                                call    sub_140E09DD0   ; Call Procedure
.std:0000000140E01849 0F 28 44 24 30                                movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
.std:0000000140E0184E 45 33 C9                                      xor     r9d, r9d        ; Logical Exclusive OR
.std:0000000140E01851 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E01854 0F 11 41 10                                   movups  xmmword ptr [rcx+10h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140E01858 48 8B 18                                      mov     rbx, [rax]
.std:0000000140E0185B 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E0185F 48 8B CB                                      mov     rcx, rbx
.std:0000000140E01862 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E01866 E8 A5 7A 02 00                                call    sub_140E29310   ; Call Procedure
.std:0000000140E0186B E8 D0 18 12 0E                                call    loc_14EF23140   ; Call Procedure
.std:0000000140E01870 44 8B 43 08                                   mov     r8d, [rbx+8]
.std:0000000140E01874 48 8B D3                                      mov     rdx, rbx
.std:0000000140E01877 48 8B C8                                      mov     rcx, rax
.std:0000000140E0187A 4C 8B 08                                      mov     r9, [rax]
.std:0000000140E0187D 41 FF 51 08                                   call    qword ptr [r9+8] ; Indirect Call Near Procedure
.std:0000000140E01881
.std:0000000140E01881                               loc_140E01881:                          ; CODE XREF: sub_140E008E0+E85↑j
.std:0000000140E01881                                                                       ; sub_140E008E0+EB7↑j ...
.std:0000000140E01881 E8 0A 1E AA 0F                                call    sub_1508A3690   ; Call Procedure
.std:0000000140E01886 48 8B C8                                      mov     rcx, rax
.std:0000000140E01889 E8 C2 65 AB 0F                                call    sub_1508B7E50   ; Call Procedure
.std:0000000140E0188E 48 8B 1D 0B A7 6E 19                          mov     rbx, cs:qword_15A4EBFA0
.std:0000000140E01895 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E01898 74 15                                         jz      short loc_140E018AF ; Jump if Zero (ZF=1)
.std:0000000140E0189A 45 84 E4                                      test    r12b, r12b      ; Logical Compare
.std:0000000140E0189D 75 10                                         jnz     short loc_140E018AF ; Jump if Not Zero (ZF=0)
.std:0000000140E0189F 48 8B CB                                      mov     rcx, rbx
.std:0000000140E018A2 E8 39 EE 76 0E                                call    sub_14F5706E0   ; Call Procedure
.std:0000000140E018A7 48 8B CB                                      mov     rcx, rbx
.std:0000000140E018AA E8 91 92 75 0E                                call    sub_14F55AB40   ; Call Procedure
.std:0000000140E018AF
.std:0000000140E018AF                               loc_140E018AF:                          ; CODE XREF: sub_140E008E0+FB8↑j
.std:0000000140E018AF                                                                       ; sub_140E008E0+FBD↑j
.std:0000000140E018AF 65 48 8B 04 25 58 00 00 00                    mov     rax, gs:58h
.std:0000000140E018B8 4A 8B 04 E8                                   mov     rax, [rax+r13*8]
.std:0000000140E018BC 8B 0C 06                                      mov     ecx, [rsi+rax]
.std:0000000140E018BF 39 0D CB C5 D9 18                             cmp     cs:dword_159B9DE90, ecx ; Compare Two Operands
.std:0000000140E018C5 0F 8F CF 0D 00 00                             jg      loc_140E0269A   ; Jump if Greater (ZF=0 & SF=OF)
.std:0000000140E018CB
.std:0000000140E018CB                               loc_140E018CB:                          ; CODE XREF: sub_140E008E0+1DCD↓j
.std:0000000140E018CB                                                                       ; sub_140E008E0+1DF8↓j
.std:0000000140E018CB 48 8B 1D B6 C5 D9 18                          mov     rbx, cs:qword_159B9DE88
.std:0000000140E018D2 E8 D9 A8 25 0E                                call    loc_14F05C1B0   ; Call Procedure
.std:0000000140E018D7 48 8B C8                                      mov     rcx, rax
.std:0000000140E018DA 48 8B D3                                      mov     rdx, rbx
.std:0000000140E018DD E8 AE EE 25 0E                                call    sub_14F060790   ; Call Procedure
.std:0000000140E018E2 4C 8B E8                                      mov     r13, rax
.std:0000000140E018E5 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E018E8 74 0C                                         jz      short loc_140E018F6 ; Jump if Zero (ZF=1)
.std:0000000140E018EA 48 8B 10                                      mov     rdx, [rax]
.std:0000000140E018ED 48 8B C8                                      mov     rcx, rax
.std:0000000140E018F0 FF 92 B0 00 00 00                             call    qword ptr [rdx+0B0h] ; Indirect Call Near Procedure
.std:0000000140E018F6
.std:0000000140E018F6                               loc_140E018F6:                          ; CODE XREF: sub_140E008E0+1008↑j
.std:0000000140E018F6 E8 05 48 44 10                                call    sub_151246100   ; Call Procedure
.std:0000000140E018FB FF 15 BF BB 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E01901 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01903 75 09                                         jnz     short loc_140E0190E ; Jump if Not Zero (ZF=0)
.std:0000000140E01905 48 8B 0D BC CB 9D 18                          mov     rcx, cs:qword_1597DE4C8
.std:0000000140E0190C EB 29                                         jmp     short loc_140E01937 ; Jump
.std:0000000140E0190E                               ; ---------------------------------------------------------------------------
.std:0000000140E0190E
.std:0000000140E0190E                               loc_140E0190E:                          ; CODE XREF: sub_140E008E0+1023↑j
.std:0000000140E0190E 48 8B 0D B3 EB 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E01915 0F B6 05 B2 EB 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E0191C 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E01921 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E01923 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E01927 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E0192A 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E0192E 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E01932 48 8B 4C 24 30                                mov     rcx, [rsp+30h]
.std:0000000140E01937
.std:0000000140E01937                               loc_140E01937:                          ; CODE XREF: sub_140E008E0+102C↑j
.std:0000000140E01937 F2 0F 10 0D 29 BE 80 18                       movsd   xmm1, cs:qword_15960D768 ; Move Scalar Double-Precision Floating-Point Values
.std:0000000140E0193F 45 0F B6 C4                                   movzx   r8d, r12b       ; Move with Zero-Extend
.std:0000000140E01943 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E01946 66 0F 5A C9                                   cvtpd2ps xmm1, xmm1     ; Convert Packed Double-Precision Floating-Point Values to Packed Single-Precision Floating-Point Values
.std:0000000140E0194A FF 90 98 02 00 00                             call    qword ptr [rax+298h] ; Indirect Call Near Procedure
.std:0000000140E01950 48 8B 0D 29 94 7D 19                          mov     rcx, cs:qword_15A5DAD80
.std:0000000140E01957 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.std:0000000140E0195A 0F 84 A5 00 00 00                             jz      loc_140E01A05   ; Jump if Zero (ZF=1)
.std:0000000140E01960 B2 02                                         mov     dl, 2
.std:0000000140E01962 E8 99 78 35 0F                                call    sub_150159200   ; Call Procedure
.std:0000000140E01967 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01969 0F 84 8F 00 00 00                             jz      loc_140E019FE   ; Jump if Zero (ZF=1)
.std:0000000140E0196F 48 8B 0D 0A 94 7D 19                          mov     rcx, cs:qword_15A5DAD80
.std:0000000140E01976 B2 02                                         mov     dl, 2
.std:0000000140E01978 E8 D3 77 35 0F                                call    sub_150159150   ; Call Procedure
.std:0000000140E0197D 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E0197F 74 0C                                         jz      short loc_140E0198D ; Jump if Zero (ZF=1)
.std:0000000140E01981 48 8B 0D F8 93 7D 19                          mov     rcx, cs:qword_15A5DAD80
.std:0000000140E01988 E8 C3 A8 35 0F                                call    sub_15015C250   ; Call Procedure
.std:0000000140E0198D
.std:0000000140E0198D                               loc_140E0198D:                          ; CODE XREF: sub_140E008E0+109F↑j
.std:0000000140E0198D FF 15 2D BB 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E01993 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01995 75 09                                         jnz     short loc_140E019A0 ; Jump if Not Zero (ZF=0)
.std:0000000140E01997 48 8B 1D 2A CB 9D 18                          mov     rbx, cs:qword_1597DE4C8
.std:0000000140E0199E EB 29                                         jmp     short loc_140E019C9 ; Jump
.std:0000000140E019A0                               ; ---------------------------------------------------------------------------
.std:0000000140E019A0
.std:0000000140E019A0                               loc_140E019A0:                          ; CODE XREF: sub_140E008E0+10B5↑j
.std:0000000140E019A0 48 8B 0D 21 EB 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E019A7 0F B6 05 20 EB 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E019AE 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E019B3 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E019B5 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E019B9 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E019BC 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E019C0 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E019C4 48 8B 5C 24 30                                mov     rbx, [rsp+30h]
.std:0000000140E019C9
.std:0000000140E019C9                               loc_140E019C9:                          ; CODE XREF: sub_140E008E0+10BE↑j
.std:0000000140E019C9 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E019CC 74 30                                         jz      short loc_140E019FE ; Jump if Zero (ZF=1)
.std:0000000140E019CE E8 9D D3 6A 10                                call    sub_1514AED70   ; Call Procedure
.std:0000000140E019D3 48 8B 4B 08                                   mov     rcx, [rbx+8]
.std:0000000140E019D7 4C 8D 40 30                                   lea     r8, [rax+30h]   ; Load Effective Address
.std:0000000140E019DB 48 63 40 38                                   movsxd  rax, dword ptr [rax+38h] ; Move with Sign-Extend Doubleword
.std:0000000140E019DF 3B 41 38                                      cmp     eax, [rcx+38h]  ; Compare Two Operands
.std:0000000140E019E2 7F 1A                                         jg      short loc_140E019FE ; Jump if Greater (ZF=0 & SF=OF)
.std:0000000140E019E4 48 8B D0                                      mov     rdx, rax
.std:0000000140E019E7 48 8B 41 30                                   mov     rax, [rcx+30h]
.std:0000000140E019EB 4C 39 04 D0                                   cmp     [rax+rdx*8], r8 ; Compare Two Operands
.std:0000000140E019EF 75 0D                                         jnz     short loc_140E019FE ; Jump if Not Zero (ZF=0)
.std:0000000140E019F1 48 8B CB                                      mov     rcx, rbx
.std:0000000140E019F4 E8 27 47 D7 0F                                call    sub_150B76120   ; Call Procedure
.std:0000000140E019F9 44 88 64 24 40                                mov     [rsp+40h], r12b
.std:0000000140E019FE
.std:0000000140E019FE                               loc_140E019FE:                          ; CODE XREF: sub_140E008E0+1089↑j
.std:0000000140E019FE                                                                       ; sub_140E008E0+10EC↑j ...
.std:0000000140E019FE E8 6D 90 00 00                                call    sub_140E0AA70   ; Call Procedure
.std:0000000140E01A03 EB 11                                         jmp     short loc_140E01A16 ; Jump
.std:0000000140E01A05                               ; ---------------------------------------------------------------------------
.std:0000000140E01A05
.std:0000000140E01A05                               loc_140E01A05:                          ; CODE XREF: sub_140E008E0+107A↑j
.std:0000000140E01A05 E8 46 AF 95 0F                                call    sub_15075C950   ; Call Procedure
.std:0000000140E01A0A B2 01                                         mov     dl, 1
.std:0000000140E01A0C 48 8B C8                                      mov     rcx, rax
.std:0000000140E01A0F 4C 8B 00                                      mov     r8, [rax]
.std:0000000140E01A12 41 FF 50 50                                   call    qword ptr [r8+50h] ; Indirect Call Near Procedure
.std:0000000140E01A16
.std:0000000140E01A16                               loc_140E01A16:                          ; CODE XREF: sub_140E008E0+1123↑j
.std:0000000140E01A16 48 8B 0D 83 54 86 19                          mov     rcx, cs:qword_15A666EA0
.std:0000000140E01A1D 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.std:0000000140E01A20 74 0A                                         jz      short loc_140E01A2C ; Jump if Zero (ZF=1)
.std:0000000140E01A22 45 33 C0                                      xor     r8d, r8d        ; Logical Exclusive OR
.std:0000000140E01A25 B2 01                                         mov     dl, 1
.std:0000000140E01A27 E8 E4 31 26 10                                call    sub_151064C10   ; Call Procedure
.std:0000000140E01A2C
.std:0000000140E01A2C                               loc_140E01A2C:                          ; CODE XREF: sub_140E008E0+1140↑j
.std:0000000140E01A2C 48 8B 0D 8D F0 83 19                          mov     rcx, cs:qword_15A640AC0
.std:0000000140E01A33 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.std:0000000140E01A36 74 05                                         jz      short loc_140E01A3D ; Jump if Zero (ZF=1)
.std:0000000140E01A38 E8 C3 0D 00 00                                call    lua_setprotopageout ; Call Procedure
.std:0000000140E01A3D
.std:0000000140E01A3D                               loc_140E01A3D:                          ; CODE XREF: sub_140E008E0+1156↑j
.std:0000000140E01A3D 4D 85 ED                                      test    r13, r13        ; Logical Compare
.std:0000000140E01A40 74 0D                                         jz      short loc_140E01A4F ; Jump if Zero (ZF=1)
.std:0000000140E01A42 49 8B 45 00                                   mov     rax, [r13+0]
.std:0000000140E01A46 49 8B CD                                      mov     rcx, r13
.std:0000000140E01A49 FF 90 B8 00 00 00                             call    qword ptr [rax+0B8h] ; Indirect Call Near Procedure
.std:0000000140E01A4F
.std:0000000140E01A4F                               loc_140E01A4F:                          ; CODE XREF: sub_140E008E0+1160↑j
.std:0000000140E01A4F FF 15 6B BA 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E01A55 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01A57 75 09                                         jnz     short loc_140E01A62 ; Jump if Not Zero (ZF=0)
.std:0000000140E01A59 48 8B 0D 68 CA 9D 18                          mov     rcx, cs:qword_1597DE4C8
.std:0000000140E01A60 EB 29                                         jmp     short loc_140E01A8B ; Jump
.std:0000000140E01A62                               ; ---------------------------------------------------------------------------
.std:0000000140E01A62
.std:0000000140E01A62                               loc_140E01A62:                          ; CODE XREF: sub_140E008E0+1177↑j
.std:0000000140E01A62 48 8B 0D 5F EA 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E01A69 0F B6 05 5E EA 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E01A70 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E01A75 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E01A77 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E01A7B 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E01A7E 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E01A82 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E01A86 48 8B 4C 24 30                                mov     rcx, [rsp+30h]
.std:0000000140E01A8B
.std:0000000140E01A8B                               loc_140E01A8B:                          ; CODE XREF: sub_140E008E0+1180↑j
.std:0000000140E01A8B 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E01A8E FF 90 B8 04 00 00                             call    qword ptr [rax+4B8h] ; Indirect Call Near Procedure
.std:0000000140E01A94 0F B6 F0                                      movzx   esi, al         ; Move with Zero-Extend
.std:0000000140E01A97 88 44 24 42                                   mov     [rsp+42h], al
.std:0000000140E01A9B FF 15 1F BA 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E01AA1 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01AA3 75 09                                         jnz     short loc_140E01AAE ; Jump if Not Zero (ZF=0)
.std:0000000140E01AA5 48 8B 0D 1C CA 9D 18                          mov     rcx, cs:qword_1597DE4C8
.std:0000000140E01AAC EB 29                                         jmp     short loc_140E01AD7 ; Jump
.std:0000000140E01AAE                               ; ---------------------------------------------------------------------------
.std:0000000140E01AAE
.std:0000000140E01AAE                               loc_140E01AAE:                          ; CODE XREF: sub_140E008E0+11C3↑j
.std:0000000140E01AAE 48 8B 0D 13 EA 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E01AB5 0F B6 05 12 EA 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E01ABC 48 89 4C 24 30                                mov     [rsp+30h], rcx
.std:0000000140E01AC1 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E01AC3 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E01AC7 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E01ACA 88 44 24 31                                   mov     [rsp+31h], al
.std:0000000140E01ACE 88 4C 24 36                                   mov     [rsp+36h], cl
.std:0000000140E01AD2 48 8B 4C 24 30                                mov     rcx, [rsp+30h]
.std:0000000140E01AD7
.std:0000000140E01AD7                               loc_140E01AD7:                          ; CODE XREF: sub_140E008E0+11CC↑j
.std:0000000140E01AD7 48 8B 89 10 09 00 00                          mov     rcx, [rcx+910h]
.std:0000000140E01ADE 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.std:0000000140E01AE1 0F 84 00 01 00 00                             jz      loc_140E01BE7   ; Jump if Zero (ZF=1)
.std:0000000140E01AE7 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E01AEA FF 90 58 01 00 00                             call    qword ptr [rax+158h] ; Indirect Call Near Procedure
.std:0000000140E01AF0 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E01AF3 0F 84 EE 00 00 00                             jz      loc_140E01BE7   ; Jump if Zero (ZF=1)
.std:0000000140E01AF9 4C 8B B0 E8 00 00 00                          mov     r14, [rax+0E8h]
.std:0000000140E01B00 33 C0                                         xor     eax, eax        ; Logical Exclusive OR
.std:0000000140E01B02 48 89 44 24 60                                mov     [rsp+60h], rax
.std:0000000140E01B07 4D 8B FE                                      mov     r15, r14
.std:0000000140E01B0A 48 89 44 24 68                                mov     [rsp+68h], rax
.std:0000000140E01B0F 4D 85 F6                                      test    r14, r14        ; Logical Compare
.std:0000000140E01B12 0F 84 DE 00 00 00                             jz      loc_140E01BF6   ; Jump if Zero (ZF=1)
.std:0000000140E01B18 48 8B 05 D1 BF D9 18                          mov     rax, cs:qword_159B9DAF0
.std:0000000140E01B1F 83 38 00                                      cmp     dword ptr [rax], 0 ; Compare Two Operands
.std:0000000140E01B22 0F 84 CE 00 00 00                             jz      loc_140E01BF6   ; Jump if Zero (ZF=1)
.std:0000000140E01B28 B3 01                                         mov     bl, 1
.std:0000000140E01B2A 48 8D 55 A0                                   lea     rdx, [rbp-60h]  ; Load Effective Address
.std:0000000140E01B2E 49 8B CE                                      mov     rcx, r14
.std:0000000140E01B31 88 5C 24 43                                   mov     [rsp+43h], bl
.std:0000000140E01B35 E8 D6 33 D1 0F                                call    sub_150B14F10   ; Call Procedure
.std:0000000140E01B3A 4C 8B E0                                      mov     r12, rax
.std:0000000140E01B3D 48 8D 44 24 60                                lea     rax, [rsp+60h]  ; Load Effective Address
.std:0000000140E01B42 49 3B C4                                      cmp     rax, r12        ; Compare Two Operands
.std:0000000140E01B45 0F 84 8B 00 00 00                             jz      loc_140E01BD6   ; Jump if Zero (ZF=1)
.std:0000000140E01B4B 48 8D 4C 24 60                                lea     rcx, [rsp+60h]  ; Load Effective Address
.std:0000000140E01B50 FF 15 2A BF 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E01B56 8B 74 24 68                                   mov     esi, [rsp+68h]
.std:0000000140E01B5A 48 8B D8                                      mov     rbx, rax
.std:0000000140E01B5D 85 F6                                         test    esi, esi        ; Logical Compare
.std:0000000140E01B5F 74 11                                         jz      short loc_140E01B72 ; Jump if Zero (ZF=1)
.std:0000000140E01B61
.std:0000000140E01B61                               loc_140E01B61:                          ; CODE XREF: sub_140E008E0+1290↓j
.std:0000000140E01B61 48 8B CB                                      mov     rcx, rbx
.std:0000000140E01B64 E8 17 D5 CE 0F                                call    sub_150AEF080   ; Call Procedure
.std:0000000140E01B69 48 83 C3 38                                   add     rbx, 38h ; '8'  ; Add
.std:0000000140E01B6D 83 EE 01                                      sub     esi, 1          ; Integer Subtraction
.std:0000000140E01B70 75 EF                                         jnz     short loc_140E01B61 ; Jump if Not Zero (ZF=0)
.std:0000000140E01B72
.std:0000000140E01B72                               loc_140E01B72:                          ; CODE XREF: sub_140E008E0+127F↑j
.std:0000000140E01B72 48 8D 4C 24 60                                lea     rcx, [rsp+60h]  ; Load Effective Address
.std:0000000140E01B77 FF 15 03 BF 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E01B7D 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E01B80 74 13                                         jz      short loc_140E01B95 ; Jump if Zero (ZF=1)
.std:0000000140E01B82 48 8D 4C 24 60                                lea     rcx, [rsp+60h]  ; Load Effective Address
.std:0000000140E01B87 FF 15 F3 BE 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E01B8D 48 8B C8                                      mov     rcx, rax
.std:0000000140E01B90 E8 6B C8 15 0E                                call    sub_14EF5E400   ; Call Procedure
.std:0000000140E01B95
.std:0000000140E01B95                               loc_140E01B95:                          ; CODE XREF: sub_140E008E0+12A0↑j
.std:0000000140E01B95 49 8B 04 24                                   mov     rax, [r12]
.std:0000000140E01B99 48 8D 4C 24 60                                lea     rcx, [rsp+60h]  ; Load Effective Address
.std:0000000140E01B9E 48 89 44 24 60                                mov     [rsp+60h], rax
.std:0000000140E01BA3 FF 15 D7 BE 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E01BA9 33 DB                                         xor     ebx, ebx        ; Logical Exclusive OR
.std:0000000140E01BAB 49 8B CC                                      mov     rcx, r12
.std:0000000140E01BAE 49 89 1C 24                                   mov     [r12], rbx
.std:0000000140E01BB2 FF 15 C8 BE 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E01BB8 41 8B 44 24 08                                mov     eax, [r12+8]
.std:0000000140E01BBD 0F B6 74 24 42                                movzx   esi, byte ptr [rsp+42h] ; Move with Zero-Extend
.std:0000000140E01BC2 89 44 24 68                                   mov     [rsp+68h], eax
.std:0000000140E01BC6 41 8B 44 24 0C                                mov     eax, [r12+0Ch]
.std:0000000140E01BCB 89 44 24 6C                                   mov     [rsp+6Ch], eax
.std:0000000140E01BCF 49 89 5C 24 08                                mov     [r12+8], rbx
.std:0000000140E01BD4 B3 01                                         mov     bl, 1
.std:0000000140E01BD6
.std:0000000140E01BD6                               loc_140E01BD6:                          ; CODE XREF: sub_140E008E0+1265↑j
.std:0000000140E01BD6 48 8D 4D A0                                   lea     rcx, [rbp-60h]  ; Load Effective Address
.std:0000000140E01BDA E8 31 3C 00 00                                call    sub_140E05810   ; Call Procedure
.std:0000000140E01BDF 44 0F B6 64 24 40                             movzx   r12d, byte ptr [rsp+40h] ; Move with Zero-Extend
.std:0000000140E01BE5 EB 15                                         jmp     short loc_140E01BFC ; Jump
.std:0000000140E01BE7                               ; ---------------------------------------------------------------------------
.std:0000000140E01BE7
.std:0000000140E01BE7                               loc_140E01BE7:                          ; CODE XREF: sub_140E008E0+1201↑j
.std:0000000140E01BE7                                                                       ; sub_140E008E0+1213↑j
.std:0000000140E01BE7 33 C0                                         xor     eax, eax        ; Logical Exclusive OR
.std:0000000140E01BE9 44 8B F8                                      mov     r15d, eax
.std:0000000140E01BEC 48 89 44 24 60                                mov     [rsp+60h], rax
.std:0000000140E01BF1 48 89 44 24 68                                mov     [rsp+68h], rax
.std:0000000140E01BF6
.std:0000000140E01BF6                               loc_140E01BF6:                          ; CODE XREF: sub_140E008E0+1232↑j
.std:0000000140E01BF6                                                                       ; sub_140E008E0+1242↑j
.std:0000000140E01BF6 32 DB                                         xor     bl, bl          ; Logical Exclusive OR
.std:0000000140E01BF8 88 5C 24 43                                   mov     [rsp+43h], bl
.std:0000000140E01BFC
.std:0000000140E01BFC                               loc_140E01BFC:                          ; CODE XREF: sub_140E008E0+1305↑j
.std:0000000140E01BFC 40 84 F6                                      test    sil, sil        ; Logical Compare
.std:0000000140E01BFF 0F 84 D9 00 00 00                             jz      loc_140E01CDE   ; Jump if Zero (ZF=1)
.std:0000000140E01C05 F2 0F 10 35 5B BB 80 18                       movsd   xmm6, cs:qword_15960D768 ; Move Scalar Double-Precision Floating-Point Values
.std:0000000140E01C0D 66 0F 5A F6                                   cvtpd2ps xmm6, xmm6     ; Convert Packed Double-Precision Floating-Point Values to Packed Single-Precision Floating-Point Values
.std:0000000140E01C11 4D 85 FF                                      test    r15, r15        ; Logical Compare
.std:0000000140E01C14 0F 84 C4 00 00 00                             jz      loc_140E01CDE   ; Jump if Zero (ZF=1)
.std:0000000140E01C1A 49 8B CF                                      mov     rcx, r15
.std:0000000140E01C1D E8 9E 6F D1 0F                                call    sub_150B18BC0   ; Call Procedure
.std:0000000140E01C22 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01C24 0F 84 B4 00 00 00                             jz      loc_140E01CDE   ; Jump if Zero (ZF=1)
.std:0000000140E01C2A 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E01C2C 4C 89 7C 24 30                                mov     [rsp+30h], r15
.std:0000000140E01C31 41 B8 03 00 00 00                             mov     r8d, 3
.std:0000000140E01C37 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E01C3B E8 D0 87 00 00                                call    sub_140E0A410   ; Call Procedure
.std:0000000140E01C40 0F 10 44 24 30                                movups  xmm0, xmmword ptr [rsp+30h] ; Move Unaligned Four Packed Single-FP
.std:0000000140E01C45 48 8B D8                                      mov     rbx, rax
.std:0000000140E01C48 48 8D 4D D0                                   lea     rcx, [rbp-30h]  ; Load Effective Address
.std:0000000140E01C4C 45 33 F6                                      xor     r14d, r14d      ; Logical Exclusive OR
.std:0000000140E01C4F 48 8B 10                                      mov     rdx, [rax]
.std:0000000140E01C52 48 8D 05 7F 4D 2E 12                          lea     rax, off_1530E69D8 ; Load Effective Address
.std:0000000140E01C59 48 89 45 D0                                   mov     [rbp-30h], rax
.std:0000000140E01C5D 48 8D 05 EC 73 00 00                          lea     rax, sub_140E09050 ; Load Effective Address
.std:0000000140E01C64 4C 89 75 C0                                   mov     [rbp-40h], r14
.std:0000000140E01C68 48 89 45 B0                                   mov     [rbp-50h], rax
.std:0000000140E01C6C 0F C6 C0 D2                                   shufps  xmm0, xmm0, 0D2h ; Shuffle Single-FP
.std:0000000140E01C70 F3 0F 10 C6                                   movss   xmm0, xmm6      ; Move Scalar Single-FP
.std:0000000140E01C74 0F C6 C0 C9                                   shufps  xmm0, xmm0, 0C9h ; Shuffle Single-FP
.std:0000000140E01C78 0F 11 45 D8                                   movups  xmmword ptr [rbp-28h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140E01C7C 48 89 42 10                                   mov     [rdx+10h], rax
.std:0000000140E01C80 48 83 C2 20                                   add     rdx, 20h ; ' '  ; Add
.std:0000000140E01C84 0F 11 44 24 30                                movups  xmmword ptr [rsp+30h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140E01C89 4C 89 32                                      mov     [rdx], r14
.std:0000000140E01C8C 48 8B 45 C0                                   mov     rax, [rbp-40h]
.std:0000000140E01C90 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E01C93 48 0F 45 C8                                   cmovnz  rcx, rax        ; Move if Not Zero (ZF=0)
.std:0000000140E01C97 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E01C9A FF 10                                         call    qword ptr [rax] ; Indirect Call Near Procedure
.std:0000000140E01C9C 4C 39 75 B0                                   cmp     [rbp-50h], r14  ; Compare Two Operands
.std:0000000140E01CA0 74 15                                         jz      short loc_140E01CB7 ; Jump if Zero (ZF=1)
.std:0000000140E01CA2 48 8B 45 C0                                   mov     rax, [rbp-40h]
.std:0000000140E01CA6 48 8D 4D D0                                   lea     rcx, [rbp-30h]  ; Load Effective Address
.std:0000000140E01CAA 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E01CAD 48 0F 45 C8                                   cmovnz  rcx, rax        ; Move if Not Zero (ZF=0)
.std:0000000140E01CB1 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E01CB4 FF 50 10                                      call    qword ptr [rax+10h] ; Indirect Call Near Procedure
.std:0000000140E01CB7
.std:0000000140E01CB7                               loc_140E01CB7:                          ; CODE XREF: sub_140E008E0+13C0↑j
.std:0000000140E01CB7 48 8B 0B                                      mov     rcx, [rbx]
.std:0000000140E01CBA 44 8B 43 10                                   mov     r8d, [rbx+10h]
.std:0000000140E01CBE 48 8B 53 08                                   mov     rdx, [rbx+8]
.std:0000000140E01CC2 48 8B 79 58                                   mov     rdi, [rcx+58h]
.std:0000000140E01CC6 48 85 FF                                      test    rdi, rdi        ; Logical Compare
.std:0000000140E01CC9 74 04                                         jz      short loc_140E01CCF ; Jump if Zero (ZF=1)
.std:0000000140E01CCB F0 FF 47 48                                   lock inc dword ptr [rdi+48h] ; Increment by 1
.std:0000000140E01CCF
.std:0000000140E01CCF                               loc_140E01CCF:                          ; CODE XREF: sub_140E008E0+13E9↑j
.std:0000000140E01CCF 41 B1 01                                      mov     r9b, 1
.std:0000000140E01CD2 E8 99 78 02 00                                call    sub_140E29570   ; Call Procedure
.std:0000000140E01CD7 0F B6 5C 24 43                                movzx   ebx, byte ptr [rsp+43h] ; Move with Zero-Extend
.std:0000000140E01CDC EB 03                                         jmp     short loc_140E01CE1 ; Jump
.std:0000000140E01CDE                               ; ---------------------------------------------------------------------------
.std:0000000140E01CDE
.std:0000000140E01CDE                               loc_140E01CDE:                          ; CODE XREF: sub_140E008E0+131F↑j
.std:0000000140E01CDE                                                                       ; sub_140E008E0+1334↑j ...
.std:0000000140E01CDE 45 33 F6                                      xor     r14d, r14d      ; Logical Exclusive OR
.std:0000000140E01CE1
.std:0000000140E01CE1                               loc_140E01CE1:                          ; CODE XREF: sub_140E008E0+13FC↑j
.std:0000000140E01CE1 48 83 3D B7 A2 6E 19 00                       cmp     cs:qword_15A4EBFA0, 0 ; Compare Two Operands
.std:0000000140E01CE9 74 22                                         jz      short loc_140E01D0D ; Jump if Zero (ZF=1)
.std:0000000140E01CEB 45 84 E4                                      test    r12b, r12b      ; Logical Compare
.std:0000000140E01CEE 4C 8B 64 24 58                                mov     r12, [rsp+58h]
.std:0000000140E01CF3 75 1D                                         jnz     short loc_140E01D12 ; Jump if Not Zero (ZF=0)
.std:0000000140E01CF5 49 8B CC                                      mov     rcx, r12
.std:0000000140E01CF8 E8 D3 41 02 00                                call    sub_140E25ED0   ; Call Procedure
.std:0000000140E01CFD 48 8B 0D 9C A2 6E 19                          mov     rcx, cs:qword_15A4EBFA0
.std:0000000140E01D04 B2 01                                         mov     dl, 1
.std:0000000140E01D06 E8 45 36 78 0E                                call    sub_14F585350   ; Call Procedure
.std:0000000140E01D0B EB 05                                         jmp     short loc_140E01D12 ; Jump
.std:0000000140E01D0D                               ; ---------------------------------------------------------------------------
.std:0000000140E01D0D
.std:0000000140E01D0D                               loc_140E01D0D:                          ; CODE XREF: sub_140E008E0+1409↑j
.std:0000000140E01D0D 4C 8B 64 24 58                                mov     r12, [rsp+58h]
.std:0000000140E01D12
.std:0000000140E01D12                               loc_140E01D12:                          ; CODE XREF: sub_140E008E0+1413↑j
.std:0000000140E01D12                                                                       ; sub_140E008E0+142B↑j
.std:0000000140E01D12 84 DB                                         test    bl, bl          ; Logical Compare
.std:0000000140E01D14 74 44                                         jz      short loc_140E01D5A ; Jump if Zero (ZF=1)
.std:0000000140E01D16 48 8D 54 24 60                                lea     rdx, [rsp+60h]  ; Load Effective Address
.std:0000000140E01D1B 49 8B CF                                      mov     rcx, r15
.std:0000000140E01D1E E8 2D 40 CF 0F                                call    sub_150AF5D50   ; Call Procedure
.std:0000000140E01D23 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01D25 74 33                                         jz      short loc_140E01D5A ; Jump if Zero (ZF=1)
.std:0000000140E01D27 80 3D C2 DD 6A 19 06                          cmp     cs:byte_15A4AFAF0, 6 ; Compare Two Operands
.std:0000000140E01D2E 72 2A                                         jb      short loc_140E01D5A ; Jump if Below (CF=1)
.std:0000000140E01D30 48 8D 05 D9 3A 2E 12                          lea     rax, aReplicatedProp ; Load Effective Address
.std:0000000140E01D37 41 B9 06 00 00 00                             mov     r9d, 6
.std:0000000140E01D3D 4C 8D 05 B0 DD 6A 19                          lea     r8, unk_15A4AFAF4 ; Load Effective Address
.std:0000000140E01D44 48 89 44 24 20                                mov     [rsp+20h], rax
.std:0000000140E01D49 BA 17 15 00 00                                mov     edx, 1517h
.std:0000000140E01D4E 48 8D 0D 4B 01 2E 12                          lea     rcx, aUnknown_0 ; Load Effective Address
.std:0000000140E01D55 E8 56 86 1C 0E                                call    sub_14EFCA3B0   ; Call Procedure
.std:0000000140E01D5A
.std:0000000140E01D5A                               loc_140E01D5A:                          ; CODE XREF: sub_140E008E0+1434↑j
.std:0000000140E01D5A                                                                       ; sub_140E008E0+1445↑j ...
.std:0000000140E01D5A 48 85 FF                                      test    rdi, rdi        ; Logical Compare
.std:0000000140E01D5D 0F 84 79 00 00 00                             jz      loc_140E01DDC   ; Jump if Zero (ZF=1)
.std:0000000140E01D63 E8 D8 13 12 0E                                call    loc_14EF23140   ; Call Procedure
.std:0000000140E01D68 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E01D6A 4C 89 75 10                                   mov     [rbp+10h], r14
.std:0000000140E01D6E 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E01D72 48 C7 45 18 01 00 00 00                       mov     qword ptr [rbp+18h], 1
.std:0000000140E01D7A 48 8B F0                                      mov     rsi, rax
.std:0000000140E01D7D E8 8E 67 02 00                                call    sub_140E28510   ; Call Procedure
.std:0000000140E01D82 48 8D 4D 10                                   lea     rcx, [rbp+10h]  ; Load Effective Address
.std:0000000140E01D86 FF 15 F4 BC 80 18                             call    cs:off_15960DA80 ; Indirect Call Near Procedure
.std:0000000140E01D8C 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E01D8F 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E01D93 48 8D 5F 48                                   lea     rbx, [rdi+48h]  ; Load Effective Address
.std:0000000140E01D97 48 0F 45 C8                                   cmovnz  rcx, rax        ; Move if Not Zero (ZF=0)
.std:0000000140E01D9B 48 89 39                                      mov     [rcx], rdi
.std:0000000140E01D9E F0 FF 03                                      lock inc dword ptr [rbx] ; Increment by 1
.std:0000000140E01DA1 48 8B 06                                      mov     rax, [rsi]
.std:0000000140E01DA4 48 8D 55 F0                                   lea     rdx, [rbp-10h]  ; Load Effective Address
.std:0000000140E01DA8 41 B8 FF 00 00 00                             mov     r8d, 0FFh
.std:0000000140E01DAE 48 8B CE                                      mov     rcx, rsi
.std:0000000140E01DB1 FF 50 50                                      call    qword ptr [rax+50h] ; Indirect Call Near Procedure
.std:0000000140E01DB4 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E01DB8 E8 13 3B 00 00                                call    sub_140E058D0   ; Call Procedure
.std:0000000140E01DBD 48 8B CF                                      mov     rcx, rdi
.std:0000000140E01DC0 49 8B FE                                      mov     rdi, r14
.std:0000000140E01DC3 41 BE FF FF FF FF                             mov     r14d, 0FFFFFFFFh
.std:0000000140E01DC9 41 8B C6                                      mov     eax, r14d
.std:0000000140E01DCC F0 0F C1 03                                   lock xadd [rbx], eax    ; t<-dest; dest<-src+dest; src<-t
.std:0000000140E01DD0 83 F8 01                                      cmp     eax, 1          ; Compare Two Operands
.std:0000000140E01DD3 75 0D                                         jnz     short loc_140E01DE2 ; Jump if Not Zero (ZF=0)
.std:0000000140E01DD5 E8 16 53 12 0E                                call    sub_14EF270F0   ; Call Procedure
.std:0000000140E01DDA EB 06                                         jmp     short loc_140E01DE2 ; Jump
.std:0000000140E01DDC                               ; ---------------------------------------------------------------------------
.std:0000000140E01DDC
.std:0000000140E01DDC                               loc_140E01DDC:                          ; CODE XREF: sub_140E008E0+147D↑j
.std:0000000140E01DDC 41 BE FF FF FF FF                             mov     r14d, 0FFFFFFFFh
.std:0000000140E01DE2
.std:0000000140E01DE2                               loc_140E01DE2:                          ; CODE XREF: sub_140E008E0+14F3↑j
.std:0000000140E01DE2                                                                       ; sub_140E008E0+14FA↑j
.std:0000000140E01DE2 E8 59 89 16 0E                                call    sub_14EF6A740   ; Call Procedure
.std:0000000140E01DE7 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01DE9 75 23                                         jnz     short loc_140E01E0E ; Jump if Not Zero (ZF=0)
.std:0000000140E01DEB 38 05 58 A1 7F 19                             cmp     cs:byte_15A5FBF49, al ; Compare Two Operands
.std:0000000140E01DF1 75 32                                         jnz     short loc_140E01E25 ; Jump if Not Zero (ZF=0)
.std:0000000140E01DF3 38 05 2F D4 6A 19                             cmp     cs:byte_15A4AF228, al ; Compare Two Operands
.std:0000000140E01DF9 74 13                                         jz      short loc_140E01E0E ; Jump if Zero (ZF=1)
.std:0000000140E01DFB FF 15 47 47 07 12                             call    cs:qword_152E76548 ; Indirect Call Near Procedure
.std:0000000140E01E01 3B 05 11 D4 6A 19                             cmp     eax, cs:dword_15A4AF218 ; Compare Two Operands
.std:0000000140E01E07 0F 94 C0                                      setz    al              ; Set Byte if Zero (ZF=1)
.std:0000000140E01E0A 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01E0C 74 17                                         jz      short loc_140E01E25 ; Jump if Zero (ZF=1)
.std:0000000140E01E0E
.std:0000000140E01E0E                               loc_140E01E0E:                          ; CODE XREF: sub_140E008E0+1509↑j
.std:0000000140E01E0E                                                                       ; sub_140E008E0+1519↑j
.std:0000000140E01E0E E8 AD 6D 48 0F                                call    loc_150288BC0   ; Call Procedure
.std:0000000140E01E13 48 8B D0                                      mov     rdx, rax
.std:0000000140E01E16 48 8D 4C 24 42                                lea     rcx, [rsp+42h]  ; Load Effective Address
.std:0000000140E01E1B E8 80 4D 00 00                                call    sub_140E06BA0   ; Call Procedure
.std:0000000140E01E20 E9 88 00 00 00                                jmp     loc_140E01EAD   ; Jump
.std:0000000140E01E25                               ; ---------------------------------------------------------------------------
.std:0000000140E01E25
.std:0000000140E01E25                               loc_140E01E25:                          ; CODE XREF: sub_140E008E0+1511↑j
.std:0000000140E01E25                                                                       ; sub_140E008E0+152C↑j
.std:0000000140E01E25 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E01E27 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E01E2B 39 15 EF 52 9A 18                             cmp     cs:dword_1597A7120, edx ; Compare Two Operands
.std:0000000140E01E31 41 B8 FF 00 00 00                             mov     r8d, 0FFh
.std:0000000140E01E37 75 43                                         jnz     short loc_140E01E7C ; Jump if Not Zero (ZF=0)
.std:0000000140E01E39 E8 92 84 00 00                                call    sub_140E0A2D0   ; Call Procedure
.std:0000000140E01E3E 41 B1 01                                      mov     r9b, 1
.std:0000000140E01E41 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E01E44 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E01E48 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E01E4C 48 8B 59 18                                   mov     rbx, [rcx+18h]
.std:0000000140E01E50 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E01E53 74 20                                         jz      short loc_140E01E75 ; Jump if Zero (ZF=1)
.std:0000000140E01E55 F0 FF 43 48                                   lock inc dword ptr [rbx+48h] ; Increment by 1
.std:0000000140E01E59 E8 52 72 02 00                                call    sub_140E290B0   ; Call Procedure
.std:0000000140E01E5E 41 8B C6                                      mov     eax, r14d
.std:0000000140E01E61 F0 0F C1 43 48                                lock xadd [rbx+48h], eax ; t<-dest; dest<-src+dest; src<-t
.std:0000000140E01E66 83 F8 01                                      cmp     eax, 1          ; Compare Two Operands
.std:0000000140E01E69 75 42                                         jnz     short loc_140E01EAD ; Jump if Not Zero (ZF=0)
.std:0000000140E01E6B 48 8B CB                                      mov     rcx, rbx
.std:0000000140E01E6E E8 7D 52 12 0E                                call    sub_14EF270F0   ; Call Procedure
.std:0000000140E01E73 EB 38                                         jmp     short loc_140E01EAD ; Jump
.std:0000000140E01E75                               ; ---------------------------------------------------------------------------
.std:0000000140E01E75
.std:0000000140E01E75                               loc_140E01E75:                          ; CODE XREF: sub_140E008E0+1573↑j
.std:0000000140E01E75 E8 36 72 02 00                                call    sub_140E290B0   ; Call Procedure
.std:0000000140E01E7A EB 31                                         jmp     short loc_140E01EAD ; Jump
.std:0000000140E01E7C                               ; ---------------------------------------------------------------------------
.std:0000000140E01E7C
.std:0000000140E01E7C                               loc_140E01E7C:                          ; CODE XREF: sub_140E008E0+1557↑j
.std:0000000140E01E7C E8 4F 84 00 00                                call    sub_140E0A2D0   ; Call Procedure
.std:0000000140E01E81 45 33 C9                                      xor     r9d, r9d        ; Logical Exclusive OR
.std:0000000140E01E84 48 8B 18                                      mov     rbx, [rax]
.std:0000000140E01E87 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E01E8B 48 8B CB                                      mov     rcx, rbx
.std:0000000140E01E8E 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E01E92 E8 19 72 02 00                                call    sub_140E290B0   ; Call Procedure
.std:0000000140E01E97 E8 A4 12 12 0E                                call    loc_14EF23140   ; Call Procedure
.std:0000000140E01E9C 44 8B 43 08                                   mov     r8d, [rbx+8]
.std:0000000140E01EA0 48 8B D3                                      mov     rdx, rbx
.std:0000000140E01EA3 48 8B C8                                      mov     rcx, rax
.std:0000000140E01EA6 4C 8B 08                                      mov     r9, [rax]
.std:0000000140E01EA9 41 FF 51 08                                   call    qword ptr [r9+8] ; Indirect Call Near Procedure
.std:0000000140E01EAD
.std:0000000140E01EAD                               loc_140E01EAD:                          ; CODE XREF: sub_140E008E0+1540↑j
.std:0000000140E01EAD                                                                       ; sub_140E008E0+1589↑j ...
.std:0000000140E01EAD F2 0F 10 0D B3 B8 80 18                       movsd   xmm1, cs:qword_15960D768 ; Move Scalar Double-Precision Floating-Point Values
.std:0000000140E01EB5 48 8B 0D 3C 50 7F 19                          mov     rcx, cs:qword_15A5F6EF8
.std:0000000140E01EBC 66 0F 5A C9                                   cvtpd2ps xmm1, xmm1     ; Convert Packed Double-Precision Floating-Point Values to Packed Single-Precision Floating-Point Values
.std:0000000140E01EC0 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E01EC3 FF 90 60 04 00 00                             call    qword ptr [rax+460h] ; Indirect Call Near Procedure
.std:0000000140E01EC9 80 7C 24 41 00                                cmp     byte ptr [rsp+41h], 0 ; Compare Two Operands
.std:0000000140E01ECE 74 56                                         jz      short loc_140E01F26 ; Jump if Zero (ZF=1)
.std:0000000140E01ED0 FF 15 EA B5 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E01ED6 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01ED8 75 15                                         jnz     short loc_140E01EEF ; Jump if Not Zero (ZF=0)
.std:0000000140E01EDA 4C 8B 7D 98                                   mov     r15, [rbp-68h]
.std:0000000140E01EDE 48 8B 0D E3 C5 9D 18                          mov     rcx, cs:qword_1597DE4C8
.std:0000000140E01EE5 49 8B D7                                      mov     rdx, r15
.std:0000000140E01EE8 E8 03 F1 43 10                                call    sub_151240FF0   ; Call Procedure
.std:0000000140E01EED EB 3B                                         jmp     short loc_140E01F2A ; Jump
.std:0000000140E01EEF                               ; ---------------------------------------------------------------------------
.std:0000000140E01EEF
.std:0000000140E01EEF                               loc_140E01EEF:                          ; CODE XREF: sub_140E008E0+15F8↑j
.std:0000000140E01EEF 48 8B 0D D2 E5 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E01EF6 0F B6 05 D1 E5 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E01EFD 4C 8B 7D 98                                   mov     r15, [rbp-68h]
.std:0000000140E01F01 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E01F03 48 89 4C 24 58                                mov     [rsp+58h], rcx
.std:0000000140E01F08 49 8B D7                                      mov     rdx, r15
.std:0000000140E01F0B 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E01F0F 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E01F12 88 44 24 59                                   mov     [rsp+59h], al
.std:0000000140E01F16 88 4C 24 5E                                   mov     [rsp+5Eh], cl
.std:0000000140E01F1A 48 8B 4C 24 58                                mov     rcx, [rsp+58h]
.std:0000000140E01F1F E8 CC F0 43 10                                call    sub_151240FF0   ; Call Procedure
.std:0000000140E01F24 EB 04                                         jmp     short loc_140E01F2A ; Jump
.std:0000000140E01F26                               ; ---------------------------------------------------------------------------
.std:0000000140E01F26
.std:0000000140E01F26                               loc_140E01F26:                          ; CODE XREF: sub_140E008E0+15EE↑j
.std:0000000140E01F26 4C 8B 7D 98                                   mov     r15, [rbp-68h]
.std:0000000140E01F2A
.std:0000000140E01F2A                               loc_140E01F2A:                          ; CODE XREF: sub_140E008E0+160D↑j
.std:0000000140E01F2A                                                                       ; sub_140E008E0+1644↑j
.std:0000000140E01F2A E8 61 17 AA 0F                                call    sub_1508A3690   ; Call Procedure
.std:0000000140E01F2F 48 8B C8                                      mov     rcx, rax
.std:0000000140E01F32 E8 79 F9 AA 0F                                call    near ptr unk_1508B18B0 ; Call Procedure
.std:0000000140E01F37 48 8B 1D 8A D2 6A 19                          mov     rbx, cs:qword_15A4AF1C8
.std:0000000140E01F3E 48 FF C3                                      inc     rbx             ; Increment by 1
.std:0000000140E01F41 48 89 1D 80 D2 6A 19                          mov     cs:qword_15A4AF1C8, rbx
.std:0000000140E01F48 E8 F3 87 16 0E                                call    sub_14EF6A740   ; Call Procedure
.std:0000000140E01F4D 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01F4F 0F 85 C3 00 00 00                             jnz     loc_140E02018   ; Jump if Not Zero (ZF=0)
.std:0000000140E01F55 38 05 EE 9F 7F 19                             cmp     cs:byte_15A5FBF49, al ; Compare Two Operands
.std:0000000140E01F5B 75 23                                         jnz     short loc_140E01F80 ; Jump if Not Zero (ZF=0)
.std:0000000140E01F5D 38 05 C5 D2 6A 19                             cmp     cs:byte_15A4AF228, al ; Compare Two Operands
.std:0000000140E01F63 0F 84 AF 00 00 00                             jz      loc_140E02018   ; Jump if Zero (ZF=1)
.std:0000000140E01F69 FF 15 D9 45 07 12                             call    cs:qword_152E76548 ; Indirect Call Near Procedure
.std:0000000140E01F6F 3B 05 A3 D2 6A 19                             cmp     eax, cs:dword_15A4AF218 ; Compare Two Operands
.std:0000000140E01F75 0F 94 C0                                      setz    al              ; Set Byte if Zero (ZF=1)
.std:0000000140E01F78 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E01F7A 0F 85 98 00 00 00                             jnz     loc_140E02018   ; Jump if Not Zero (ZF=0)
.std:0000000140E01F80
.std:0000000140E01F80                               loc_140E01F80:                          ; CODE XREF: sub_140E008E0+167B↑j
.std:0000000140E01F80 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E01F82 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E01F86 39 15 94 51 9A 18                             cmp     cs:dword_1597A7120, edx ; Compare Two Operands
.std:0000000140E01F8C 41 B8 FF 00 00 00                             mov     r8d, 0FFh
.std:0000000140E01F92 75 4A                                         jnz     short loc_140E01FDE ; Jump if Not Zero (ZF=0)
.std:0000000140E01F94 E8 F7 7C 00 00                                call    sub_140E09C90   ; Call Procedure
.std:0000000140E01F99 41 B1 01                                      mov     r9b, 1
.std:0000000140E01F9C 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E01F9F 48 89 59 10                                   mov     [rcx+10h], rbx
.std:0000000140E01FA3 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E01FA6 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E01FAA 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E01FAE 48 8B 59 20                                   mov     rbx, [rcx+20h]
.std:0000000140E01FB2 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E01FB5 74 20                                         jz      short loc_140E01FD7 ; Jump if Zero (ZF=1)
.std:0000000140E01FB7 F0 FF 43 48                                   lock inc dword ptr [rbx+48h] ; Increment by 1
.std:0000000140E01FBB E8 90 6E 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E01FC0 41 8B C6                                      mov     eax, r14d
.std:0000000140E01FC3 F0 0F C1 43 48                                lock xadd [rbx+48h], eax ; t<-dest; dest<-src+dest; src<-t
.std:0000000140E01FC8 83 F8 01                                      cmp     eax, 1          ; Compare Two Operands
.std:0000000140E01FCB 75 57                                         jnz     short loc_140E02024 ; Jump if Not Zero (ZF=0)
.std:0000000140E01FCD 48 8B CB                                      mov     rcx, rbx
.std:0000000140E01FD0 E8 1B 51 12 0E                                call    sub_14EF270F0   ; Call Procedure
.std:0000000140E01FD5 EB 4D                                         jmp     short loc_140E02024 ; Jump
.std:0000000140E01FD7                               ; ---------------------------------------------------------------------------
.std:0000000140E01FD7
.std:0000000140E01FD7                               loc_140E01FD7:                          ; CODE XREF: sub_140E008E0+16D5↑j
.std:0000000140E01FD7 E8 74 6E 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E01FDC EB 46                                         jmp     short loc_140E02024 ; Jump
.std:0000000140E01FDE                               ; ---------------------------------------------------------------------------
.std:0000000140E01FDE
.std:0000000140E01FDE                               loc_140E01FDE:                          ; CODE XREF: sub_140E008E0+16B2↑j
.std:0000000140E01FDE E8 AD 7C 00 00                                call    sub_140E09C90   ; Call Procedure
.std:0000000140E01FE3 45 33 C9                                      xor     r9d, r9d        ; Logical Exclusive OR
.std:0000000140E01FE6 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E01FE9 48 89 59 10                                   mov     [rcx+10h], rbx
.std:0000000140E01FED 48 8B 18                                      mov     rbx, [rax]
.std:0000000140E01FF0 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E01FF4 48 8B CB                                      mov     rcx, rbx
.std:0000000140E01FF7 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E01FFB E8 50 6E 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E02000 E8 3B 11 12 0E                                call    loc_14EF23140   ; Call Procedure
.std:0000000140E02005 44 8B 43 08                                   mov     r8d, [rbx+8]
.std:0000000140E02009 48 8B D3                                      mov     rdx, rbx
.std:0000000140E0200C 48 8B C8                                      mov     rcx, rax
.std:0000000140E0200F 4C 8B 08                                      mov     r9, [rax]
.std:0000000140E02012 41 FF 51 08                                   call    qword ptr [r9+8] ; Indirect Call Near Procedure
.std:0000000140E02016 EB 0C                                         jmp     short loc_140E02024 ; Jump
.std:0000000140E02018                               ; ---------------------------------------------------------------------------
.std:0000000140E02018
.std:0000000140E02018                               loc_140E02018:                          ; CODE XREF: sub_140E008E0+166F↑j
.std:0000000140E02018                                                                       ; sub_140E008E0+1683↑j ...
.std:0000000140E02018 E8 A3 6B 48 0F                                call    loc_150288BC0   ; Call Procedure
.std:0000000140E0201D 48 89 1D B4 D1 6A 19                          mov     cs:qword_15A4AF1D8, rbx
.std:0000000140E02024
.std:0000000140E02024                               loc_140E02024:                          ; CODE XREF: sub_140E008E0+16EB↑j
.std:0000000140E02024                                                                       ; sub_140E008E0+16F5↑j ...
.std:0000000140E02024 48 83 3D 9C D1 6A 19 06                       cmp     cs:qword_15A4AF1C8, 6 ; Compare Two Operands
.std:0000000140E0202C 48 C7 05 D1 D0 6A 19 00 00 00                 mov     cs:qword_15A4AF108, 0
.std:0000000140E0202C 00
.std:0000000140E02037 76 16                                         jbe     short loc_140E0204F ; Jump if Below or Equal (CF=1 | ZF=1)
.std:0000000140E02039 F2 0F 10 05 27 B7 80 18                       movsd   xmm0, cs:qword_15960D768 ; Move Scalar Double-Precision Floating-Point Values
.std:0000000140E02041 F2 41 0F 58 44 24 18                          addsd   xmm0, qword ptr [r12+18h] ; Add Scalar Double-Precision Floating-Point Values
.std:0000000140E02048 F2 41 0F 11 44 24 18                          movsd   qword ptr [r12+18h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:0000000140E0204F
.std:0000000140E0204F                               loc_140E0204F:                          ; CODE XREF: sub_140E008E0+1757↑j
.std:0000000140E0204F 49 8B 5C 24 38                                mov     rbx, [r12+38h]
.std:0000000140E02054 E8 77 6B 48 0F                                call    sub_150288BD0   ; Call Procedure
.std:0000000140E02059 8B 0D 89 AE 94 19                             mov     ecx, cs:TlsIndex
.std:0000000140E0205F 49 89 44 24 38                                mov     [r12+38h], rax
.std:0000000140E02064 65 48 8B 04 25 58 00 00 00                    mov     rax, gs:58h
.std:0000000140E0206D 41 BC 04 02 00 00                             mov     r12d, 204h
.std:0000000140E02073 48 8B 34 C8                                   mov     rsi, [rax+rcx*8]
.std:0000000140E02077 41 8B 0C 34                                   mov     ecx, [r12+rsi]
.std:0000000140E0207B 39 0D 4F BE D9 18                             cmp     cs:dword_159B9DED0, ecx ; Compare Two Operands
.std:0000000140E02081 0F 8F 56 06 00 00                             jg      loc_140E026DD   ; Jump if Greater (ZF=0 & SF=OF)
.std:0000000140E02087
.std:0000000140E02087                               loc_140E02087:                          ; CODE XREF: sub_140E008E0+1E10↓j
.std:0000000140E02087                                                                       ; sub_140E008E0+1E2E↓j
.std:0000000140E02087 41 8B 0C 34                                   mov     ecx, [r12+rsi]
.std:0000000140E0208B 39 0D 4F BE D9 18                             cmp     cs:dword_159B9DEE0, ecx ; Compare Two Operands
.std:0000000140E02091 0F 8F 7C 06 00 00                             jg      loc_140E02713   ; Jump if Greater (ZF=0 & SF=OF)
.std:0000000140E02097
.std:0000000140E02097                               loc_140E02097:                          ; CODE XREF: sub_140E008E0+1C68↓j
.std:0000000140E02097                                                                       ; sub_140E008E0+1E46↓j
.std:0000000140E02097 48 8B 05 3A BE D9 18                          mov     rax, cs:qword_159B9DED8
.std:0000000140E0209E 48 8D 0D 03 BE D9 18                          lea     rcx, unk_159B9DEA8 ; Load Effective Address
.std:0000000140E020A5 83 38 00                                      cmp     dword ptr [rax], 0 ; Compare Two Operands
.std:0000000140E020A8 0F 95 C2                                      setnz   dl              ; Set Byte if Not Zero (ZF=0)
.std:0000000140E020AB E8 80 17 44 10                                call    sub_151243830   ; Call Procedure
.std:0000000140E020B0 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E020B3 74 15                                         jz      short loc_140E020CA ; Jump if Zero (ZF=1)
.std:0000000140E020B5 48 8B CB                                      mov     rcx, rbx
.std:0000000140E020B8 E8 43 03 47 0F                                call    sub_150272400   ; Call Procedure
.std:0000000140E020BD BA 10 00 00 00                                mov     edx, 10h
.std:0000000140E020C2 48 8B CB                                      mov     rcx, rbx
.std:0000000140E020C5 E8 46 1C 60 00                                call    loc_141403D10   ; Call Procedure
.std:0000000140E020CA
.std:0000000140E020CA                               loc_140E020CA:                          ; CODE XREF: sub_140E008E0+17D3↑j
.std:0000000140E020CA E8 C1 4D 54 0E                                call    sub_14F346E90   ; Call Procedure
.std:0000000140E020CF F2 0F 10 35 91 B6 80 18                       movsd   xmm6, cs:qword_15960D768 ; Move Scalar Double-Precision Floating-Point Values
.std:0000000140E020D7 66 0F 5A F6                                   cvtpd2ps xmm6, xmm6     ; Convert Packed Double-Precision Floating-Point Values to Packed Single-Precision Floating-Point Values
.std:0000000140E020DB E8 E0 AC 20 0E                                call    sub_14F00CDC0   ; Call Procedure
.std:0000000140E020E0 48 8B C8                                      mov     rcx, rax
.std:0000000140E020E3 0F 28 CE                                      movaps  xmm1, xmm6      ; Move Aligned Four Packed Single-FP
.std:0000000140E020E6 E8 C5 AF 12 0E                                call    sub_14EF2D0B0   ; Call Procedure
.std:0000000140E020EB E8 C0 C6 15 0E                                call    sub_14EF5E7B0   ; Call Procedure
.std:0000000140E020F0 48 8B C8                                      mov     rcx, rax
.std:0000000140E020F3 E8 D8 27 17 0E                                call    sub_14EF748D0   ; Call Procedure
.std:0000000140E020F8 FF 15 C2 B3 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E020FE 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E02100 75 09                                         jnz     short loc_140E0210B ; Jump if Not Zero (ZF=0)
.std:0000000140E02102 48 8B 0D BF C3 9D 18                          mov     rcx, cs:qword_1597DE4C8
.std:0000000140E02109 EB 29                                         jmp     short loc_140E02134 ; Jump
.std:0000000140E0210B                               ; ---------------------------------------------------------------------------
.std:0000000140E0210B
.std:0000000140E0210B                               loc_140E0210B:                          ; CODE XREF: sub_140E008E0+1820↑j
.std:0000000140E0210B 48 8B 0D B6 E3 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E02112 0F B6 05 B5 E3 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E02119 48 89 4C 24 58                                mov     [rsp+58h], rcx
.std:0000000140E0211E 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E02120 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E02124 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E02127 88 44 24 59                                   mov     [rsp+59h], al
.std:0000000140E0212B 88 4C 24 5E                                   mov     [rsp+5Eh], cl
.std:0000000140E0212F 48 8B 4C 24 58                                mov     rcx, [rsp+58h]
.std:0000000140E02134
.std:0000000140E02134                               loc_140E02134:                          ; CODE XREF: sub_140E008E0+1829↑j
.std:0000000140E02134 E8 07 2B 44 10                                call    sub_151244C40   ; Call Procedure
.std:0000000140E02139 4D 85 ED                                      test    r13, r13        ; Logical Compare
.std:0000000140E0213C 74 0D                                         jz      short loc_140E0214B ; Jump if Zero (ZF=1)
.std:0000000140E0213E 49 8B 45 00                                   mov     rax, [r13+0]
.std:0000000140E02142 49 8B CD                                      mov     rcx, r13
.std:0000000140E02145 FF 90 A8 00 00 00                             call    qword ptr [rax+0A8h] ; Indirect Call Near Procedure
.std:0000000140E0214B
.std:0000000140E0214B                               loc_140E0214B:                          ; CODE XREF: sub_140E008E0+185C↑j
.std:0000000140E0214B E8 E0 9E 25 0E                                call    sub_14F05C030   ; Call Procedure
.std:0000000140E02150 80 78 2C 00                                   cmp     byte ptr [rax+2Ch], 0 ; Compare Two Operands
.std:0000000140E02154 75 0F                                         jnz     short loc_140E02165 ; Jump if Not Zero (ZF=0)
.std:0000000140E02156 E8 D5 9E 25 0E                                call    sub_14F05C030   ; Call Procedure
.std:0000000140E0215B 80 78 2D 00                                   cmp     byte ptr [rax+2Dh], 0 ; Compare Two Operands
.std:0000000140E0215F 0F 84 EF 00 00 00                             jz      loc_140E02254   ; Jump if Zero (ZF=1)
.std:0000000140E02165
.std:0000000140E02165                               loc_140E02165:                          ; CODE XREF: sub_140E008E0+1874↑j
.std:0000000140E02165 E8 C6 9E 25 0E                                call    sub_14F05C030   ; Call Procedure
.std:0000000140E0216A 0F B6 58 2C                                   movzx   ebx, byte ptr [rax+2Ch] ; Move with Zero-Extend
.std:0000000140E0216E E8 CD 85 16 0E                                call    sub_14EF6A740   ; Call Procedure
.std:0000000140E02173 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E02175 74 12                                         jz      short loc_140E02189 ; Jump if Zero (ZF=1)
.std:0000000140E02177 E8 44 6A 48 0F                                call    loc_150288BC0   ; Call Procedure
.std:0000000140E0217C E8 AF 9E 25 0E                                call    sub_14F05C030   ; Call Procedure
.std:0000000140E02181 88 58 2D                                      mov     [rax+2Dh], bl
.std:0000000140E02184 E9 CB 00 00 00                                jmp     loc_140E02254   ; Jump
.std:0000000140E02189                               ; ---------------------------------------------------------------------------
.std:0000000140E02189
.std:0000000140E02189                               loc_140E02189:                          ; CODE XREF: sub_140E008E0+1895↑j
.std:0000000140E02189 80 3D B9 9D 7F 19 00                          cmp     cs:byte_15A5FBF49, 0 ; Compare Two Operands
.std:0000000140E02190 75 2E                                         jnz     short loc_140E021C0 ; Jump if Not Zero (ZF=0)
.std:0000000140E02192 80 3D 8F D0 6A 19 00                          cmp     cs:byte_15A4AF228, 0 ; Compare Two Operands
.std:0000000140E02199 74 13                                         jz      short loc_140E021AE ; Jump if Zero (ZF=1)
.std:0000000140E0219B FF 15 A7 43 07 12                             call    cs:qword_152E76548 ; Indirect Call Near Procedure
.std:0000000140E021A1 3B 05 71 D0 6A 19                             cmp     eax, cs:dword_15A4AF218 ; Compare Two Operands
.std:0000000140E021A7 0F 94 C0                                      setz    al              ; Set Byte if Zero (ZF=1)
.std:0000000140E021AA 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E021AC 74 12                                         jz      short loc_140E021C0 ; Jump if Zero (ZF=1)
.std:0000000140E021AE
.std:0000000140E021AE                               loc_140E021AE:                          ; CODE XREF: sub_140E008E0+18B9↑j
.std:0000000140E021AE E8 0D 6A 48 0F                                call    loc_150288BC0   ; Call Procedure
.std:0000000140E021B3 E8 78 9E 25 0E                                call    sub_14F05C030   ; Call Procedure
.std:0000000140E021B8 88 58 2D                                      mov     [rax+2Dh], bl
.std:0000000140E021BB E9 94 00 00 00                                jmp     loc_140E02254   ; Jump
.std:0000000140E021C0                               ; ---------------------------------------------------------------------------
.std:0000000140E021C0
.std:0000000140E021C0                               loc_140E021C0:                          ; CODE XREF: sub_140E008E0+18B0↑j
.std:0000000140E021C0                                                                       ; sub_140E008E0+18CC↑j
.std:0000000140E021C0 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E021C2 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E021C6 39 15 54 4F 9A 18                             cmp     cs:dword_1597A7120, edx ; Compare Two Operands
.std:0000000140E021CC 41 B8 FF 00 00 00                             mov     r8d, 0FFh
.std:0000000140E021D2 75 49                                         jnz     short loc_140E0221D ; Jump if Not Zero (ZF=0)
.std:0000000140E021D4 E8 37 78 00 00                                call    sub_140E09A10   ; Call Procedure
.std:0000000140E021D9 41 B1 01                                      mov     r9b, 1
.std:0000000140E021DC 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E021DF 88 59 10                                      mov     [rcx+10h], bl
.std:0000000140E021E2 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E021E5 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E021E9 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E021ED 48 8B 59 18                                   mov     rbx, [rcx+18h]
.std:0000000140E021F1 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E021F4 74 20                                         jz      short loc_140E02216 ; Jump if Zero (ZF=1)
.std:0000000140E021F6 F0 FF 43 48                                   lock inc dword ptr [rbx+48h] ; Increment by 1
.std:0000000140E021FA E8 B1 6E 02 00                                call    sub_140E290B0   ; Call Procedure
.std:0000000140E021FF 41 8B C6                                      mov     eax, r14d
.std:0000000140E02202 F0 0F C1 43 48                                lock xadd [rbx+48h], eax ; t<-dest; dest<-src+dest; src<-t
.std:0000000140E02207 83 F8 01                                      cmp     eax, 1          ; Compare Two Operands
.std:0000000140E0220A 75 48                                         jnz     short loc_140E02254 ; Jump if Not Zero (ZF=0)
.std:0000000140E0220C 48 8B CB                                      mov     rcx, rbx
.std:0000000140E0220F E8 DC 4E 12 0E                                call    sub_14EF270F0   ; Call Procedure
.std:0000000140E02214 EB 3E                                         jmp     short loc_140E02254 ; Jump
.std:0000000140E02216                               ; ---------------------------------------------------------------------------
.std:0000000140E02216
.std:0000000140E02216                               loc_140E02216:                          ; CODE XREF: sub_140E008E0+1914↑j
.std:0000000140E02216 E8 95 6E 02 00                                call    sub_140E290B0   ; Call Procedure
.std:0000000140E0221B EB 37                                         jmp     short loc_140E02254 ; Jump
.std:0000000140E0221D                               ; ---------------------------------------------------------------------------
.std:0000000140E0221D
.std:0000000140E0221D                               loc_140E0221D:                          ; CODE XREF: sub_140E008E0+18F2↑j
.std:0000000140E0221D E8 EE 77 00 00                                call    sub_140E09A10   ; Call Procedure
.std:0000000140E02222 45 33 C9                                      xor     r9d, r9d        ; Logical Exclusive OR
.std:0000000140E02225 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E02228 88 59 10                                      mov     [rcx+10h], bl
.std:0000000140E0222B 48 8B 18                                      mov     rbx, [rax]
.std:0000000140E0222E 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E02232 48 8B CB                                      mov     rcx, rbx
.std:0000000140E02235 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E02239 E8 72 6E 02 00                                call    sub_140E290B0   ; Call Procedure
.std:0000000140E0223E E8 FD 0E 12 0E                                call    loc_14EF23140   ; Call Procedure
.std:0000000140E02243 44 8B 43 08                                   mov     r8d, [rbx+8]
.std:0000000140E02247 48 8B D3                                      mov     rdx, rbx
.std:0000000140E0224A 48 8B C8                                      mov     rcx, rax
.std:0000000140E0224D 4C 8B 08                                      mov     r9, [rax]
.std:0000000140E02250 41 FF 51 08                                   call    qword ptr [r9+8] ; Indirect Call Near Procedure
.std:0000000140E02254
.std:0000000140E02254                               loc_140E02254:                          ; CODE XREF: sub_140E008E0+187F↑j
.std:0000000140E02254                                                                       ; sub_140E008E0+18A4↑j ...
.std:0000000140E02254 48 8D 0D CD BC 80 18                          lea     rcx, unk_15960DF28 ; Load Effective Address
.std:0000000140E0225B E8 60 6C 00 00                                call    sub_140E08EC0   ; Call Procedure
.std:0000000140E02260 FF 15 5A B2 9D 18                             call    cs:off_1597DD4C0 ; Indirect Call Near Procedure
.std:0000000140E02266 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E02268 75 09                                         jnz     short loc_140E02273 ; Jump if Not Zero (ZF=0)
.std:0000000140E0226A 48 8B 0D 57 C2 9D 18                          mov     rcx, cs:qword_1597DE4C8
.std:0000000140E02271 EB 29                                         jmp     short loc_140E0229C ; Jump
.std:0000000140E02273                               ; ---------------------------------------------------------------------------
.std:0000000140E02273
.std:0000000140E02273                               loc_140E02273:                          ; CODE XREF: sub_140E008E0+1988↑j
.std:0000000140E02273 48 8B 0D 4E E2 9D 18                          mov     rcx, cs:qword_1597E04C8
.std:0000000140E0227A 0F B6 05 4D E2 9D 18                          movzx   eax, byte ptr cs:qword_1597E04C8+6 ; Move with Zero-Extend
.std:0000000140E02281 48 89 4C 24 58                                mov     [rsp+58h], rcx
.std:0000000140E02286 34 37                                         xor     al, 37h         ; Logical Exclusive OR
.std:0000000140E02288 48 C1 E9 08                                   shr     rcx, 8          ; Shift Logical Right
.std:0000000140E0228C 80 F1 37                                      xor     cl, 37h         ; Logical Exclusive OR
.std:0000000140E0228F 88 44 24 59                                   mov     [rsp+59h], al
.std:0000000140E02293 88 4C 24 5E                                   mov     [rsp+5Eh], cl
.std:0000000140E02297 48 8B 4C 24 58                                mov     rcx, [rsp+58h]
.std:0000000140E0229C
.std:0000000140E0229C                               loc_140E0229C:                          ; CODE XREF: sub_140E008E0+1991↑j
.std:0000000140E0229C B2 03                                         mov     dl, 3
.std:0000000140E0229E E8 FD D9 41 10                                call    sub_15121FCA0   ; Call Procedure
.std:0000000140E022A3 E8 98 84 16 0E                                call    sub_14EF6A740   ; Call Procedure
.std:0000000140E022A8 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E022AA 74 1E                                         jz      short loc_140E022CA ; Jump if Zero (ZF=1)
.std:0000000140E022AC E8 0F 69 48 0F                                call    loc_150288BC0   ; Call Procedure
.std:0000000140E022B1 49 8B D7                                      mov     rdx, r15
.std:0000000140E022B4 48 8B C8                                      mov     rcx, rax
.std:0000000140E022B7 E8 74 95 00 00                                call    sub_140E0B830   ; Call Procedure
.std:0000000140E022BC 41 8D 4F 01                                   lea     ecx, [r15+1]    ; Load Effective Address
.std:0000000140E022C0 E8 9B C0 48 0F                                call    sub_15028E360   ; Call Procedure
.std:0000000140E022C5 E9 D9 00 00 00                                jmp     loc_140E023A3   ; Jump
.std:0000000140E022CA                               ; ---------------------------------------------------------------------------
.std:0000000140E022CA
.std:0000000140E022CA                               loc_140E022CA:                          ; CODE XREF: sub_140E008E0+19CA↑j
.std:0000000140E022CA 80 3D 78 9C 7F 19 00                          cmp     cs:byte_15A5FBF49, 0 ; Compare Two Operands
.std:0000000140E022D1 75 3A                                         jnz     short loc_140E0230D ; Jump if Not Zero (ZF=0)
.std:0000000140E022D3 80 3D 4E CF 6A 19 00                          cmp     cs:byte_15A4AF228, 0 ; Compare Two Operands
.std:0000000140E022DA 74 13                                         jz      short loc_140E022EF ; Jump if Zero (ZF=1)
.std:0000000140E022DC FF 15 66 42 07 12                             call    cs:qword_152E76548 ; Indirect Call Near Procedure
.std:0000000140E022E2 3B 05 30 CF 6A 19                             cmp     eax, cs:dword_15A4AF218 ; Compare Two Operands
.std:0000000140E022E8 0F 94 C0                                      setz    al              ; Set Byte if Zero (ZF=1)
.std:0000000140E022EB 84 C0                                         test    al, al          ; Logical Compare
.std:0000000140E022ED 74 1E                                         jz      short loc_140E0230D ; Jump if Zero (ZF=1)
.std:0000000140E022EF
.std:0000000140E022EF                               loc_140E022EF:                          ; CODE XREF: sub_140E008E0+19FA↑j
.std:0000000140E022EF E8 CC 68 48 0F                                call    loc_150288BC0   ; Call Procedure
.std:0000000140E022F4 49 8B D7                                      mov     rdx, r15
.std:0000000140E022F7 48 8B C8                                      mov     rcx, rax
.std:0000000140E022FA E8 31 95 00 00                                call    sub_140E0B830   ; Call Procedure
.std:0000000140E022FF 41 8D 4F 01                                   lea     ecx, [r15+1]    ; Load Effective Address
.std:0000000140E02303 E8 58 C0 48 0F                                call    sub_15028E360   ; Call Procedure
.std:0000000140E02308 E9 96 00 00 00                                jmp     loc_140E023A3   ; Jump
.std:0000000140E0230D                               ; ---------------------------------------------------------------------------
.std:0000000140E0230D
.std:0000000140E0230D                               loc_140E0230D:                          ; CODE XREF: sub_140E008E0+19F1↑j
.std:0000000140E0230D                                                                       ; sub_140E008E0+1A0D↑j
.std:0000000140E0230D 33 D2                                         xor     edx, edx        ; Logical Exclusive OR
.std:0000000140E0230F 48 8D 4D F0                                   lea     rcx, [rbp-10h]  ; Load Effective Address
.std:0000000140E02313 39 15 07 4E 9A 18                             cmp     cs:dword_1597A7120, edx ; Compare Two Operands
.std:0000000140E02319 41 B8 FF 00 00 00                             mov     r8d, 0FFh
.std:0000000140E0231F 75 4A                                         jnz     short loc_140E0236B ; Jump if Not Zero (ZF=0)
.std:0000000140E02321 E8 2A 78 00 00                                call    sub_140E09B50   ; Call Procedure
.std:0000000140E02326 41 B1 01                                      mov     r9b, 1
.std:0000000140E02329 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E0232C 4C 89 79 10                                   mov     [rcx+10h], r15
.std:0000000140E02330 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E02333 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E02337 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E0233B 48 8B 59 20                                   mov     rbx, [rcx+20h]
.std:0000000140E0233F 48 85 DB                                      test    rbx, rbx        ; Logical Compare
.std:0000000140E02342 74 20                                         jz      short loc_140E02364 ; Jump if Zero (ZF=1)
.std:0000000140E02344 F0 FF 43 48                                   lock inc dword ptr [rbx+48h] ; Increment by 1
.std:0000000140E02348 E8 03 6B 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E0234D 41 8B C6                                      mov     eax, r14d
.std:0000000140E02350 F0 0F C1 43 48                                lock xadd [rbx+48h], eax ; t<-dest; dest<-src+dest; src<-t
.std:0000000140E02355 83 F8 01                                      cmp     eax, 1          ; Compare Two Operands
.std:0000000140E02358 75 49                                         jnz     short loc_140E023A3 ; Jump if Not Zero (ZF=0)
.std:0000000140E0235A 48 8B CB                                      mov     rcx, rbx
.std:0000000140E0235D E8 8E 4D 12 0E                                call    sub_14EF270F0   ; Call Procedure
.std:0000000140E02362 EB 3F                                         jmp     short loc_140E023A3 ; Jump
.std:0000000140E02364                               ; ---------------------------------------------------------------------------
.std:0000000140E02364
.std:0000000140E02364                               loc_140E02364:                          ; CODE XREF: sub_140E008E0+1A62↑j
.std:0000000140E02364 E8 E7 6A 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E02369 EB 38                                         jmp     short loc_140E023A3 ; Jump
.std:0000000140E0236B                               ; ---------------------------------------------------------------------------
.std:0000000140E0236B
.std:0000000140E0236B                               loc_140E0236B:                          ; CODE XREF: sub_140E008E0+1A3F↑j
.std:0000000140E0236B E8 E0 77 00 00                                call    sub_140E09B50   ; Call Procedure
.std:0000000140E02370 45 33 C9                                      xor     r9d, r9d        ; Logical Exclusive OR
.std:0000000140E02373 48 8B 08                                      mov     rcx, [rax]
.std:0000000140E02376 4C 89 79 10                                   mov     [rcx+10h], r15
.std:0000000140E0237A 48 8B 18                                      mov     rbx, [rax]
.std:0000000140E0237D 44 8B 40 10                                   mov     r8d, [rax+10h]
.std:0000000140E02381 48 8B CB                                      mov     rcx, rbx
.std:0000000140E02384 48 8B 50 08                                   mov     rdx, [rax+8]
.std:0000000140E02388 E8 C3 6A 02 00                                call    sub_140E28E50   ; Call Procedure
.std:0000000140E0238D E8 AE 0D 12 0E                                call    loc_14EF23140   ; Call Procedure
.std:0000000140E02392 44 8B 43 08                                   mov     r8d, [rbx+8]
.std:0000000140E02396 48 8B D3                                      mov     rdx, rbx
.std:0000000140E02399 48 8B C8                                      mov     rcx, rax
.std:0000000140E0239C 4C 8B 08                                      mov     r9, [rax]
.std:0000000140E0239F 41 FF 51 08                                   call    qword ptr [r9+8] ; Indirect Call Near Procedure
.std:0000000140E023A3
.std:0000000140E023A3                               loc_140E023A3:                          ; CODE XREF: sub_140E008E0+19E5↑j
.std:0000000140E023A3                                                                       ; sub_140E008E0+1A28↑j ...
.std:0000000140E023A3 48 8D 4C 24 48                                lea     rcx, [rsp+48h]  ; Load Effective Address
.std:0000000140E023A8 E8 73 E0 28 0E                                call    sub_14F090420   ; Call Procedure
.std:0000000140E023AD 48 8D 4C 24 60                                lea     rcx, [rsp+60h]  ; Load Effective Address
.std:0000000140E023B2 E8 59 34 00 00                                call    sub_140E05810   ; Call Procedure
.std:0000000140E023B7 48 85 FF                                      test    rdi, rdi        ; Logical Compare
.std:0000000140E023BA 74 14                                         jz      short loc_140E023D0 ; Jump if Zero (ZF=1)
.std:0000000140E023BC F0 44 0F C1 77 48                             lock xadd [rdi+48h], r14d ; t<-dest; dest<-src+dest; src<-t
.std:0000000140E023C2 41 83 FE 01                                   cmp     r14d, 1         ; Compare Two Operands
.std:0000000140E023C6 75 08                                         jnz     short loc_140E023D0 ; Jump if Not Zero (ZF=0)
.std:0000000140E023C8 48 8B CF                                      mov     rcx, rdi
.std:0000000140E023CB E8 20 4D 12 0E                                call    sub_14EF270F0   ; Call Procedure
.std:0000000140E023D0
.std:0000000140E023D0                               loc_140E023D0:                          ; CODE XREF: sub_140E008E0+1ADA↑j
.std:0000000140E023D0                                                                       ; sub_140E008E0+1AE6↑j
.std:0000000140E023D0 48 8B 05 51 7C DE 17                          mov     rax, cs:off_158BEA028
.std:0000000140E023D7 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E023DA 74 02                                         jz      short loc_140E023DE ; Jump if Zero (ZF=1)
.std:0000000140E023DC FF D0                                         call    rax ; lua_setprotopageout ; Indirect Call Near Procedure
.std:0000000140E023DE
.std:0000000140E023DE                               loc_140E023DE:                          ; CODE XREF: sub_140E008E0+1AFA↑j
.std:0000000140E023DE 48 8B 0D 13 4B 7F 19                          mov     rcx, cs:qword_15A5F6EF8
.std:0000000140E023E5 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E023E8 FF 90 28 04 00 00                             call    qword ptr [rax+428h] ; Indirect Call Near Procedure
.std:0000000140E023EE F2 0F 10 0D 1A 58 63 19                       movsd   xmm1, cs:qword_15A437C10 ; Move Scalar Double-Precision Floating-Point Values
.std:0000000140E023F6 0F 57 C0                                      xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140E023F9 F2 0F 59 0D 37 46 2E 12                       mulsd   xmm1, qword ptr cs:ymmword_1530E6A28+10h ; Multiply Scalar Double-Precision Floating-Point Values
.std:0000000140E02401 FF 05 E1 BA D9 18                             inc     cs:dword_159B9DEE8 ; Increment by 1
.std:0000000140E02407 8B C0                                         mov     eax, eax
.std:0000000140E02409 F2 48 0F 2A C0                                cvtsi2sd xmm0, rax      ; Convert Doubleword Integer to Scalar Double-Precision Floating-Point Value
.std:0000000140E0240E F2 0F 59 C8                                   mulsd   xmm1, xmm0      ; Multiply Scalar Double-Precision Floating-Point Values
.std:0000000140E02412 66 0F 5A F1                                   cvtpd2ps xmm6, xmm1     ; Convert Packed Double-Precision Floating-Point Values to Packed Single-Precision Floating-Point Values
.std:0000000140E02416 F3 0F 10 0D C6 BA D9 18                       movss   xmm1, cs:dword_159B9DEE4 ; Move Scalar Single-FP
.std:0000000140E0241E F3 0F 58 CE                                   addss   xmm1, xmm6      ; Scalar Single-FP Add
.std:0000000140E02422 F3 0F 11 0D BA BA D9 18                       movss   cs:dword_159B9DEE4, xmm1 ; Move Scalar Single-FP
.std:0000000140E0242A E8 01 9C 25 0E                                call    sub_14F05C030   ; Call Procedure
.std:0000000140E0242F 33 DB                                         xor     ebx, ebx        ; Logical Exclusive OR
.std:0000000140E02431 38 58 2C                                      cmp     [rax+2Ch], bl   ; Compare Two Operands
.std:0000000140E02434 74 45                                         jz      short loc_140E0247B ; Jump if Zero (ZF=1)
.std:0000000140E02436 66 0F 6E 05 AA BA D9 18                       movd    xmm0, cs:dword_159B9DEE8 ; Move 32 bits
.std:0000000140E0243E 48 8D 0D 5B 34 2E 12                          lea     rcx, aAvggputime ; Load Effective Address
.std:0000000140E02445 F3 0F 10 15 97 BA D9 18                       movss   xmm2, cs:dword_159B9DEE4 ; Move Scalar Single-FP
.std:0000000140E0244D 41 B1 04                                      mov     r9b, 4
.std:0000000140E02450 8B 15 7A F9 6A 19                             mov     edx, cs:dword_15A4B1DD0
.std:0000000140E02456 0F 5B C0                                      cvtdq2ps xmm0, xmm0     ; Convert Packed Doubleword Integers to Packed Double-Precision Floating-Point Values
.std:0000000140E02459 89 1D 89 BA D9 18                             mov     cs:dword_159B9DEE8, ebx
.std:0000000140E0245F 48 89 5C 24 20                                mov     [rsp+20h], rbx
.std:0000000140E02464 F3 0F 5E D0                                   divss   xmm2, xmm0      ; Scalar Single-FP Divide
.std:0000000140E02468 F3 0F 11 15 74 BA D9 18                       movss   cs:dword_159B9DEE4, xmm2 ; Move Scalar Single-FP
.std:0000000140E02470 E8 AB 1D 26 0E                                call    sub_14F064220   ; Call Procedure
.std:0000000140E02475 89 1D 69 BA D9 18                             mov     cs:dword_159B9DEE4, ebx
.std:0000000140E0247B
.std:0000000140E0247B                               loc_140E0247B:                          ; CODE XREF: sub_140E008E0+1B54↑j
.std:0000000140E0247B 0F 2F 35 6A BA D9 18                          comiss  xmm6, cs:dword_159B9DEEC ; Scalar Ordered Single-FP Compare and Set EFLAGS
.std:0000000140E02482 76 08                                         jbe     short loc_140E0248C ; Jump if Below or Equal (CF=1 | ZF=1)
.std:0000000140E02484 F3 0F 11 35 60 BA D9 18                       movss   cs:dword_159B9DEEC, xmm6 ; Move Scalar Single-FP
.std:0000000140E0248C
.std:0000000140E0248C                               loc_140E0248C:                          ; CODE XREF: sub_140E008E0+1BA2↑j
.std:0000000140E0248C E8 9F 9B 25 0E                                call    sub_14F05C030   ; Call Procedure
.std:0000000140E02491 80 78 2C 00                                   cmp     byte ptr [rax+2Ch], 0 ; Compare Two Operands
.std:0000000140E02495 74 2C                                         jz      short loc_140E024C3 ; Jump if Zero (ZF=1)
.std:0000000140E02497 F3 0F 10 15 4D BA D9 18                       movss   xmm2, cs:dword_159B9DEEC ; Move Scalar Single-FP
.std:0000000140E0249F 48 8D 0D 0A 34 2E 12                          lea     rcx, aMaxgputime ; Load Effective Address
.std:0000000140E024A6 8B 15 24 F9 6A 19                             mov     edx, cs:dword_15A4B1DD0
.std:0000000140E024AC 41 B1 04                                      mov     r9b, 4
.std:0000000140E024AF 48 89 5C 24 20                                mov     [rsp+20h], rbx
.std:0000000140E024B4 E8 67 1D 26 0E                                call    sub_14F064220   ; Call Procedure
.std:0000000140E024B9 C7 05 29 BA D9 18 00 00 00 00                 mov     cs:dword_159B9DEEC, 0
.std:0000000140E024C3
.std:0000000140E024C3                               loc_140E024C3:                          ; CODE XREF: sub_140E008E0+1BB5↑j
.std:0000000140E024C3 80 7D 88 00                                   cmp     byte ptr [rbp-78h], 0 ; Compare Two Operands
.std:0000000140E024C7 75 3A                                         jnz     short loc_140E02503 ; Jump if Not Zero (ZF=0)
.std:0000000140E024C9 48 8B 44 24 70                                mov     rax, [rsp+70h]
.std:0000000140E024CE C6 45 88 01                                   mov     byte ptr [rbp-78h], 1
.std:0000000140E024D2 FF 48 20                                      dec     dword ptr [rax+20h] ; Decrement by 1
.std:0000000140E024D5 48 8B 4C 24 70                                mov     rcx, [rsp+70h]
.std:0000000140E024DA 48 8B 55 80                                   mov     rdx, [rbp-80h]
.std:0000000140E024DE 48 3B 51 10                                   cmp     rdx, [rcx+10h]  ; Compare Two Operands
.std:0000000140E024E2 74 0A                                         jz      short loc_140E024EE ; Jump if Zero (ZF=1)
.std:0000000140E024E4 E8 17 21 23 0E                                call    sub_14F034600   ; Call Procedure
.std:0000000140E024E9 48 8B 4C 24 70                                mov     rcx, [rsp+70h]
.std:0000000140E024EE
.std:0000000140E024EE                               loc_140E024EE:                          ; CODE XREF: sub_140E008E0+1C02↑j
.std:0000000140E024EE 48 8B 44 24 78                                mov     rax, [rsp+78h]
.std:0000000140E024F3 48 89 01                                      mov     [rcx], rax
.std:0000000140E024F6 48 8B 4C 24 70                                mov     rcx, [rsp+70h]
.std:0000000140E024FB 48 8B 45 90                                   mov     rax, [rbp-70h]
.std:0000000140E024FF 48 89 41 18                                   mov     [rcx+18h], rax
.std:0000000140E02503
.std:0000000140E02503                               loc_140E02503:                          ; CODE XREF: sub_140E008E0+1BE7↑j
.std:0000000140E02503 48 8B 4D 60                                   mov     rcx, [rbp+60h]
.std:0000000140E02507 48 33 CC                                      xor     rcx, rsp        ; Logical Exclusive OR
.std:0000000140E0250A E8 81 3E D5 11                                call    near ptr unk_152B56390 ; Call Procedure
.std:0000000140E0250F 4C 8D 9C 24 80 01 00 00                       lea     r11, [rsp+180h] ; Load Effective Address
.std:0000000140E02517 49 8B 5B 38                                   mov     rbx, [r11+38h]
.std:0000000140E0251B 49 8B 73 40                                   mov     rsi, [r11+40h]
.std:0000000140E0251F 49 8B 7B 48                                   mov     rdi, [r11+48h]
.std:0000000140E02523 41 0F 28 73 F0                                movaps  xmm6, xmmword ptr [r11-10h] ; Move Aligned Four Packed Single-FP
.std:0000000140E02528 49 8B E3                                      mov     rsp, r11
.std:0000000140E0252B 41 5F                                         pop     r15
.std:0000000140E0252D 41 5E                                         pop     r14
.std:0000000140E0252F 41 5D                                         pop     r13
.std:0000000140E02531 41 5C                                         pop     r12
.std:0000000140E02533 5D                                            pop     rbp
.std:0000000140E02534 C3                                            retn                    ; Return Near from Procedure
.std:0000000140E02535                               ; ---------------------------------------------------------------------------
.std:0000000140E02535
.std:0000000140E02535                               loc_140E02535:                          ; CODE XREF: sub_140E008E0+1E7A↓j
.std:0000000140E02535                                                                       ; sub_140E008E0+1E89↓j
.std:0000000140E02535 48 8D 0D A4 B9 D9 18                          lea     rcx, dword_159B9DEE0 ; Load Effective Address
.std:0000000140E0253C 48 89 05 95 B9 D9 18                          mov     cs:qword_159B9DED8, rax
.std:0000000140E02543 E8 F0 3B D5 11                                call    sub_152B56138   ; Call Procedure
.std:0000000140E02548 E9 4A FB FF FF                                jmp     loc_140E02097   ; Jump
.std:0000000140E0254D                               ; ---------------------------------------------------------------------------
.std:0000000140E0254D
.std:0000000140E0254D                               loc_140E0254D:                          ; CODE XREF: sub_140E008E0+196↑j
.std:0000000140E0254D 48 8D 0D 1C B9 D9 18                          lea     rcx, dword_159B9DE70 ; Load Effective Address
.std:0000000140E02554 E8 4B 3C D5 11                                call    sub_152B561A4   ; Call Procedure
.std:0000000140E02559 83 3D 10 B9 D9 18 FF                          cmp     cs:dword_159B9DE70, 0FFFFFFFFh ; Compare Two Operands
.std:0000000140E02560 0F 85 16 E5 FF FF                             jnz     loc_140E00A7C   ; Jump if Not Zero (ZF=0)
.std:0000000140E02566 48 8B 0D 83 A4 5F 19                          mov     rcx, cs:qword_15A3FC9F0
.std:0000000140E0256D 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.std:0000000140E02570 75 0C                                         jnz     short loc_140E0257E ; Jump if Not Zero (ZF=0)
.std:0000000140E02572 E8 09 0E 14 0E                                call    sub_14EF43380   ; Call Procedure
.std:0000000140E02577 48 8B 0D 72 A4 5F 19                          mov     rcx, cs:qword_15A3FC9F0
.std:0000000140E0257E
.std:0000000140E0257E                               loc_140E0257E:                          ; CODE XREF: sub_140E008E0+1C90↑j
.std:0000000140E0257E 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E02581 48 8D 15 40 31 2E 12                          lea     rdx, aREnablelatency ; Load Effective Address
.std:0000000140E02588 41 B0 01                                      mov     r8b, 1
.std:0000000140E0258B FF 90 F8 00 00 00                             call    qword ptr [rax+0F8h] ; Indirect Call Near Procedure
.std:0000000140E02591 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E02594 74 0B                                         jz      short loc_140E025A1 ; Jump if Zero (ZF=1)
.std:0000000140E02596 48 8B 10                                      mov     rdx, [rax]
.std:0000000140E02599 48 8B C8                                      mov     rcx, rax
.std:0000000140E0259C FF 52 58                                      call    qword ptr [rdx+58h] ; Indirect Call Near Procedure
.std:0000000140E0259F EB 03                                         jmp     short loc_140E025A4 ; Jump
.std:0000000140E025A1                               ; ---------------------------------------------------------------------------
.std:0000000140E025A1
.std:0000000140E025A1                               loc_140E025A1:                          ; CODE XREF: sub_140E008E0+1CB4↑j
.std:0000000140E025A1 48 8B C7                                      mov     rax, rdi
.std:0000000140E025A4
.std:0000000140E025A4                               loc_140E025A4:                          ; CODE XREF: sub_140E008E0+1CBF↑j
.std:0000000140E025A4 48 8D 0D C5 B8 D9 18                          lea     rcx, dword_159B9DE70 ; Load Effective Address
.std:0000000140E025AB 48 89 05 B6 B8 D9 18                          mov     cs:qword_159B9DE68, rax
.std:0000000140E025B2 E8 81 3B D5 11                                call    sub_152B56138   ; Call Procedure
.std:0000000140E025B7 E9 C0 E4 FF FF                                jmp     loc_140E00A7C   ; Jump
.std:0000000140E025BC                               ; ---------------------------------------------------------------------------
.std:0000000140E025BC
.std:0000000140E025BC                               loc_140E025BC:                          ; CODE XREF: sub_140E008E0+CCD↑j
.std:0000000140E025BC 48 8D 0D 0D B8 D9 18                          lea     rcx, dword_159B9DDD0 ; Load Effective Address
.std:0000000140E025C3 E8 DC 3B D5 11                                call    sub_152B561A4   ; Call Procedure
.std:0000000140E025C8 83 3D 01 B8 D9 18 FF                          cmp     cs:dword_159B9DDD0, 0FFFFFFFFh ; Compare Two Operands
.std:0000000140E025CF 0F 85 DE EF FF FF                             jnz     loc_140E015B3   ; Jump if Not Zero (ZF=0)
.std:0000000140E025D5 48 8B 0D 14 A4 5F 19                          mov     rcx, cs:qword_15A3FC9F0
.std:0000000140E025DC 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.std:0000000140E025DF 75 0C                                         jnz     short loc_140E025ED ; Jump if Not Zero (ZF=0)
.std:0000000140E025E1 E8 9A 0D 14 0E                                call    sub_14EF43380   ; Call Procedure
.std:0000000140E025E6 48 8B 0D 03 A4 5F 19                          mov     rcx, cs:qword_15A3FC9F0
.std:0000000140E025ED
.std:0000000140E025ED                               loc_140E025ED:                          ; CODE XREF: sub_140E008E0+1CFF↑j
.std:0000000140E025ED 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E025F0 48 8D 15 A1 30 2E 12                          lea     rdx, aTIdlewhennotfo ; Load Effective Address
.std:0000000140E025F7 41 B0 01                                      mov     r8b, 1
.std:0000000140E025FA FF 90 F8 00 00 00                             call    qword ptr [rax+0F8h] ; Indirect Call Near Procedure
.std:0000000140E02600 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E02603 74 0B                                         jz      short loc_140E02610 ; Jump if Zero (ZF=1)
.std:0000000140E02605 48 8B 10                                      mov     rdx, [rax]
.std:0000000140E02608 48 8B C8                                      mov     rcx, rax
.std:0000000140E0260B FF 52 58                                      call    qword ptr [rdx+58h] ; Indirect Call Near Procedure
.std:0000000140E0260E EB 03                                         jmp     short loc_140E02613 ; Jump
.std:0000000140E02610                               ; ---------------------------------------------------------------------------
.std:0000000140E02610
.std:0000000140E02610                               loc_140E02610:                          ; CODE XREF: sub_140E008E0+1D23↑j
.std:0000000140E02610 48 8B C7                                      mov     rax, rdi
.std:0000000140E02613
.std:0000000140E02613                               loc_140E02613:                          ; CODE XREF: sub_140E008E0+1D2E↑j
.std:0000000140E02613 48 8D 0D B6 B7 D9 18                          lea     rcx, dword_159B9DDD0 ; Load Effective Address
.std:0000000140E0261A 48 89 05 A7 B7 D9 18                          mov     cs:qword_159B9DDC8, rax
.std:0000000140E02621 E8 12 3B D5 11                                call    sub_152B56138   ; Call Procedure
.std:0000000140E02626 E9 88 EF FF FF                                jmp     loc_140E015B3   ; Jump
.std:0000000140E0262B                               ; ---------------------------------------------------------------------------
.std:0000000140E0262B
.std:0000000140E0262B                               loc_140E0262B:                          ; CODE XREF: sub_140E008E0+E75↑j
.std:0000000140E0262B 48 8D 0D 4E B8 D9 18                          lea     rcx, dword_159B9DE80 ; Load Effective Address
.std:0000000140E02632 E8 6D 3B D5 11                                call    sub_152B561A4   ; Call Procedure
.std:0000000140E02637 83 3D 42 B8 D9 18 FF                          cmp     cs:dword_159B9DE80, 0FFFFFFFFh ; Compare Two Operands
.std:0000000140E0263E 0F 85 17 F1 FF FF                             jnz     loc_140E0175B   ; Jump if Not Zero (ZF=0)
.std:0000000140E02644 48 8B 0D A5 A3 5F 19                          mov     rcx, cs:qword_15A3FC9F0
.std:0000000140E0264B 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.std:0000000140E0264E 75 0C                                         jnz     short loc_140E0265C ; Jump if Not Zero (ZF=0)
.std:0000000140E02650 E8 2B 0D 14 0E                                call    sub_14EF43380   ; Call Procedure
.std:0000000140E02655 48 8B 0D 94 A3 5F 19                          mov     rcx, cs:qword_15A3FC9F0
.std:0000000140E0265C
.std:0000000140E0265C                               loc_140E0265C:                          ; CODE XREF: sub_140E008E0+1D6E↑j
.std:0000000140E0265C 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E0265F 48 8D 15 62 31 2E 12                          lea     rdx, aROpeninputlate ; Load Effective Address
.std:0000000140E02666 41 B0 01                                      mov     r8b, 1
.std:0000000140E02669 FF 90 F8 00 00 00                             call    qword ptr [rax+0F8h] ; Indirect Call Near Procedure
.std:0000000140E0266F 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E02672 74 0B                                         jz      short loc_140E0267F ; Jump if Zero (ZF=1)
.std:0000000140E02674 48 8B 10                                      mov     rdx, [rax]
.std:0000000140E02677 48 8B C8                                      mov     rcx, rax
.std:0000000140E0267A FF 52 58                                      call    qword ptr [rdx+58h] ; Indirect Call Near Procedure
.std:0000000140E0267D EB 03                                         jmp     short loc_140E02682 ; Jump
.std:0000000140E0267F                               ; ---------------------------------------------------------------------------
.std:0000000140E0267F
.std:0000000140E0267F                               loc_140E0267F:                          ; CODE XREF: sub_140E008E0+1D92↑j
.std:0000000140E0267F 48 8B C7                                      mov     rax, rdi
.std:0000000140E02682
.std:0000000140E02682                               loc_140E02682:                          ; CODE XREF: sub_140E008E0+1D9D↑j
.std:0000000140E02682 48 8D 0D F7 B7 D9 18                          lea     rcx, dword_159B9DE80 ; Load Effective Address
.std:0000000140E02689 48 89 05 E8 B7 D9 18                          mov     cs:qword_159B9DE78, rax
.std:0000000140E02690 E8 A3 3A D5 11                                call    sub_152B56138   ; Call Procedure
.std:0000000140E02695 E9 C1 F0 FF FF                                jmp     loc_140E0175B   ; Jump
.std:0000000140E0269A                               ; ---------------------------------------------------------------------------
.std:0000000140E0269A
.std:0000000140E0269A                               loc_140E0269A:                          ; CODE XREF: sub_140E008E0+FE5↑j
.std:0000000140E0269A 48 8D 0D EF B7 D9 18                          lea     rcx, dword_159B9DE90 ; Load Effective Address
.std:0000000140E026A1 E8 FE 3A D5 11                                call    sub_152B561A4   ; Call Procedure
.std:0000000140E026A6 83 3D E3 B7 D9 18 FF                          cmp     cs:dword_159B9DE90, 0FFFFFFFFh ; Compare Two Operands
.std:0000000140E026AD 0F 85 18 F2 FF FF                             jnz     loc_140E018CB   ; Jump if Not Zero (ZF=0)
.std:0000000140E026B3 41 B8 01 00 00 00                             mov     r8d, 1
.std:0000000140E026B9 48 8D 15 38 31 2E 12                          lea     rdx, aMedia     ; Load Effective Address
.std:0000000140E026C0 48 8D 0D C1 B7 D9 18                          lea     rcx, qword_159B9DE88 ; Load Effective Address
.std:0000000140E026C7 E8 54 93 27 0E                                call    sub_14F07BA20   ; Call Procedure
.std:0000000140E026CC 48 8D 0D BD B7 D9 18                          lea     rcx, dword_159B9DE90 ; Load Effective Address
.std:0000000140E026D3 E8 60 3A D5 11                                call    sub_152B56138   ; Call Procedure
.std:0000000140E026D8 E9 EE F1 FF FF                                jmp     loc_140E018CB   ; Jump
.std:0000000140E026DD                               ; ---------------------------------------------------------------------------
.std:0000000140E026DD
.std:0000000140E026DD                               loc_140E026DD:                          ; CODE XREF: sub_140E008E0+17A1↑j
.std:0000000140E026DD 48 8D 0D EC B7 D9 18                          lea     rcx, dword_159B9DED0 ; Load Effective Address
.std:0000000140E026E4 E8 BB 3A D5 11                                call    sub_152B561A4   ; Call Procedure
.std:0000000140E026E9 83 3D E0 B7 D9 18 FF                          cmp     cs:dword_159B9DED0, 0FFFFFFFFh ; Compare Two Operands
.std:0000000140E026F0 0F 85 91 F9 FF FF                             jnz     loc_140E02087   ; Jump if Not Zero (ZF=0)
.std:0000000140E026F6 48 8D 0D 13 3F ED 11                          lea     rcx, sub_152CD6610 ; Load Effective Address
.std:0000000140E026FD E8 6A 39 D5 11                                call    sub_152B5606C   ; Call Procedure
.std:0000000140E02702 48 8D 0D C7 B7 D9 18                          lea     rcx, dword_159B9DED0 ; Load Effective Address
.std:0000000140E02709 E8 2A 3A D5 11                                call    sub_152B56138   ; Call Procedure
.std:0000000140E0270E E9 74 F9 FF FF                                jmp     loc_140E02087   ; Jump
.std:0000000140E02713                               ; ---------------------------------------------------------------------------
.std:0000000140E02713
.std:0000000140E02713                               loc_140E02713:                          ; CODE XREF: sub_140E008E0+17B1↑j
.std:0000000140E02713 48 8D 0D C6 B7 D9 18                          lea     rcx, dword_159B9DEE0 ; Load Effective Address
.std:0000000140E0271A E8 85 3A D5 11                                call    sub_152B561A4   ; Call Procedure
.std:0000000140E0271F 83 3D BA B7 D9 18 FF                          cmp     cs:dword_159B9DEE0, 0FFFFFFFFh ; Compare Two Operands
.std:0000000140E02726 0F 85 6B F9 FF FF                             jnz     loc_140E02097   ; Jump if Not Zero (ZF=0)
.std:0000000140E0272C 48 8B 0D BD A2 5F 19                          mov     rcx, cs:qword_15A3FC9F0
.std:0000000140E02733 48 85 C9                                      test    rcx, rcx        ; Logical Compare
.std:0000000140E02736 75 0C                                         jnz     short loc_140E02744 ; Jump if Not Zero (ZF=0)
.std:0000000140E02738 E8 43 0C 14 0E                                call    sub_14EF43380   ; Call Procedure
.std:0000000140E0273D 48 8B 0D AC A2 5F 19                          mov     rcx, cs:qword_15A3FC9F0
.std:0000000140E02744
.std:0000000140E02744                               loc_140E02744:                          ; CODE XREF: sub_140E008E0+1E56↑j
.std:0000000140E02744 48 8B 01                                      mov     rax, [rcx]
.std:0000000140E02747 48 8D 15 2A 31 2E 12                          lea     rdx, aROneframethrea ; Load Effective Address
.std:0000000140E0274E 41 B0 01                                      mov     r8b, 1
.std:0000000140E02751 FF 90 F8 00 00 00                             call    qword ptr [rax+0F8h] ; Indirect Call Near Procedure
.std:0000000140E02757 48 85 C0                                      test    rax, rax        ; Logical Compare
.std:0000000140E0275A 0F 84 D5 FD FF FF                             jz      loc_140E02535   ; Jump if Zero (ZF=1)
.std:0000000140E02760 48 8B 10                                      mov     rdx, [rax]
.std:0000000140E02763 48 8B C8                                      mov     rcx, rax
.std:0000000140E02766 FF 52 58                                      call    qword ptr [rdx+58h] ; Indirect Call Near Procedure
.std:0000000140E02769 E9 C7 FD FF FF                                jmp     loc_140E02535   ; Jump
.std:0000000140E02769                               ; } // starts at 140E008E0
.std:0000000140E02769                               sub_140E008E0   endp
.std:0000000140E02769
.std:0000000140E02769                               ; ---------------------------------------------------------------------------
.std:0000000140E0276E CC CC                                         align 10h
.std:0000000140E02770
