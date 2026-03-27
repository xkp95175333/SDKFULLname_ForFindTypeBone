```asm
Address	Function	Instruction
.text:000000014C8D5192	sub_14C8D5120	lea     rsi, unk_1573DC1C0; Load Effective Address  ++   0xFFFF    0x10
.text:000000014C8DD710	sub_14C8DD6A0	lea     rsi, unk_1573DC1C0; Load Effective Address 0x3FFFF  0x12
.text:000000014C8F1059	sub_14C8F1020	lea     rsi, unk_1573DC1C0; Load Effective Address  -- 0x10020 and 0x10024   0x20  newBase 0x401  
.text:000000014D95FF9C		db  48h ; H
```

---
FunBase 0x3FFFF
---
```asm
.text:000000014C8DD6A0
.text:000000014C8DD6A0                         ; =============== S U B R O U T I N E =======================================
.text:000000014C8DD6A0
.text:000000014C8DD6A0
.text:000000014C8DD6A0                         sub_14C8DD6A0   proc near               ; CODE XREF: sub_140BACF20+BA↑p
.text:000000014C8DD6A0                                                                 ; sub_140BACF20+124↑p ...
.text:000000014C8DD6A0
.text:000000014C8DD6A0                         var_1048        = xmmword ptr -1048h
.text:000000014C8DD6A0                         var_1038        = xmmword ptr -1038h
.text:000000014C8DD6A0                         var_1028        = byte ptr -1028h
.text:000000014C8DD6A0                         var_F68         = byte ptr -0F68h
.text:000000014C8DD6A0                         var_18          = xmmword ptr -18h
.text:000000014C8DD6A0                         var_8           = byte ptr -8
.text:000000014C8DD6A0                         arg_0           = qword ptr  8
.text:000000014C8DD6A0                         arg_8           = qword ptr  10h
.text:000000014C8DD6A0                         arg_10          = qword ptr  18h
.text:000000014C8DD6A0                         arg_18          = qword ptr  20h
.text:000000014C8DD6A0
.text:000000014C8DD6A0 8B 02                                   mov     eax, [rdx]
.text:000000014C8DD6A2 39 01                                   cmp     [rcx], eax      ; Compare Two Operands
.text:000000014C8DD6A4 75 07                                   jnz     short loc_14C8DD6AD ; Jump if Not Zero (ZF=0)
.text:000000014C8DD6A6 8B 41 04                                mov     eax, [rcx+4]
.text:000000014C8DD6A9 2B 42 04                                sub     eax, [rdx+4]    ; Integer Subtraction
.text:000000014C8DD6AC C3                                      retn                    ; Return Near from Procedure
.text:000000014C8DD6AD                         ; ---------------------------------------------------------------------------
.text:000000014C8DD6AD
.text:000000014C8DD6AD                         loc_14C8DD6AD:                          ; CODE XREF: sub_14C8DD6A0+4↑j
.text:000000014C8DD6AD 8B 09                                   mov     ecx, [rcx]
.text:000000014C8DD6AF 8B D0                                   mov     edx, eax
.text:000000014C8DD6B1 E9 0A 00 00 00                          jmp     loc_14C8DD6C0   ; Jump
.text:000000014C8DD6B1                         ; ---------------------------------------------------------------------------
.text:000000014C8DD6B6 CC                                      db 0CCh
.text:000000014C8DD6B7 CC                                      db 0CCh
.text:000000014C8DD6B8 CC                                      db 0CCh
.text:000000014C8DD6B9 CC                                      db 0CCh
.text:000000014C8DD6BA CC                                      db 0CCh
.text:000000014C8DD6BB CC                                      db 0CCh
.text:000000014C8DD6BC CC                                      db 0CCh
.text:000000014C8DD6BD CC                                      db 0CCh
.text:000000014C8DD6BE CC                                      db 0CCh
.text:000000014C8DD6BF CC                                      db 0CCh
.text:000000014C8DD6C0                         ; ---------------------------------------------------------------------------
.text:000000014C8DD6C0
.text:000000014C8DD6C0                         loc_14C8DD6C0:                          ; CODE XREF: sub_14C8DD6A0+11↑j
.text:000000014C8DD6C0 48 89 5C 24 08                          mov     [rsp+8], rbx
.text:000000014C8DD6C5 48 89 74 24 10                          mov     [rsp+10h], rsi
.text:000000014C8DD6CA 48 89 7C 24 18                          mov     [rsp+18h], rdi
.text:000000014C8DD6CF 4C 89 74 24 20                          mov     [rsp+20h], r14
.text:000000014C8DD6D4 55                                      push    rbp
.text:000000014C8DD6D5 48 8D AC 24 A0 F0 FF FF                 lea     rbp, [rsp-0F60h] ; Load Effective Address
.text:000000014C8DD6DD B8 60 10 00 00                          mov     eax, 1060h
.text:000000014C8DD6E2 E8 19 27 98 03                          call    __alloca_probe  ; Call Procedure
.text:000000014C8DD6E7 48 2B E0                                sub     rsp, rax        ; Integer Subtraction
.text:000000014C8DD6EA 0F 29 B4 24 50 10 00 00                 movaps  xmmword ptr [rsp+1050h], xmm6 ; Move Aligned Four Packed Single-FP
.text:000000014C8DD6F2 48 8B 05 47 7C 4E 0A                    mov     rax, cs:off_156DC5340
.text:000000014C8DD6F9 48 33 C4                                xor     rax, rsp        ; Logical Exclusive OR
.text:000000014C8DD6FC 48 89 85 40 0F 00 00                    mov     [rbp+0F40h], rax
.text:000000014C8DD703 80 3D E2 E7 AF 0A 00                    cmp     cs:byte_1573DBEEC, 0 ; Compare Two Operands
.text:000000014C8DD70A 8B FA                                   mov     edi, edx
.text:000000014C8DD70C 8B D9                                   mov     ebx, ecx
.text:000000014C8DD70E 74 09                                   jz      short loc_14C8DD719 ; Jump if Zero (ZF=1)
.text:000000014C8DD710 48 8D 35 A9 EA AF 0A                    lea     rsi, unk_1573DC1C0 ; Load Effective Address
.text:000000014C8DD717 EB 16                                   jmp     short loc_14C8DD72F ; Jump
.text:000000014C8DD719                         ; ---------------------------------------------------------------------------
.text:000000014C8DD719
.text:000000014C8DD719                         loc_14C8DD719:                          ; CODE XREF: sub_14C8DD6A0+6E↑j
.text:000000014C8DD719 48 8D 0D A0 EA AF 0A                    lea     rcx, unk_1573DC1C0 ; Load Effective Address
.text:000000014C8DD720 E8 6B 7F FF FF                          call    sub_14C8D5690   ; Call Procedure
.text:000000014C8DD725 48 8B F0                                mov     rsi, rax
.text:000000014C8DD728 C6 05 BD E7 AF 0A 01                    mov     cs:byte_1573DBEEC, 1
.text:000000014C8DD72F
.text:000000014C8DD72F                         loc_14C8DD72F:                          ; CODE XREF: sub_14C8DD6A0+77↑j
.text:000000014C8DD72F 8B CB                                   mov     ecx, ebx
.text:000000014C8DD731 81 E3 FF FF 03 00                       and     ebx, 3FFFFh     ; Logical AND
.text:000000014C8DD737 C1 E9 12                                shr     ecx, 12h        ; Shift Logical Right
.text:000000014C8DD73A 89 5C 24 24                             mov     [rsp+24h], ebx
.text:000000014C8DD73E 89 4C 24 20                             mov     [rsp+20h], ecx
.text:000000014C8DD742 48 8B 44 24 20                          mov     rax, [rsp+20h]
.text:000000014C8DD747 48 C1 E8 20                             shr     rax, 20h        ; Shift Logical Right
.text:000000014C8DD74B 8D 1C 00                                lea     ebx, [rax+rax]  ; Load Effective Address
.text:000000014C8DD74E 48 03 5C CE 08                          add     rbx, [rsi+rcx*8+8] ; Add
.text:000000014C8DD753 48 8D 8D 40 07 00 00                    lea     rcx, [rbp+740h] ; Load Effective Address
.text:000000014C8DD75A 0F B7 03                                movzx   eax, word ptr [rbx] ; Move with Zero-Extend
.text:000000014C8DD75D 48 8D 53 02                             lea     rdx, [rbx+2]    ; Load Effective Address
.text:000000014C8DD761 44 8B C0                                mov     r8d, eax
.text:000000014C8DD764 44 8B F0                                mov     r14d, eax
.text:000000014C8DD767 49 C1 E8 06                             shr     r8, 6           ; Shift Logical Right
.text:000000014C8DD76B 41 C1 EE 06                             shr     r14d, 6         ; Shift Logical Right
.text:000000014C8DD76F F6 03 01                                test    byte ptr [rbx], 1 ; Logical Compare
.text:000000014C8DD772 74 1E                                   jz      short loc_14C8DD792 ; Jump if Zero (ZF=1)
.text:000000014C8DD774 4D 03 C0                                add     r8, r8          ; Add
.text:000000014C8DD777 E8 C1 90 98 03                          call    sub_15026683D   ; Call Procedure
.text:000000014C8DD77C 0F B7 13                                movzx   edx, word ptr [rbx] ; Move with Zero-Extend
.text:000000014C8DD77F 48 8D 8D 40 07 00 00                    lea     rcx, [rbp+740h] ; Load Effective Address
.text:000000014C8DD786 C1 EA 06                                shr     edx, 6          ; Shift Logical Right
.text:000000014C8DD789 E8 F2 2C 00 00                          call    sub_14C8E0480   ; Call Procedure
.text:000000014C8DD78E B3 01                                   mov     bl, 1
.text:000000014C8DD790 EB 19                                   jmp     short loc_14C8DD7AB ; Jump
.text:000000014C8DD792                         ; ---------------------------------------------------------------------------
.text:000000014C8DD792
.text:000000014C8DD792                         loc_14C8DD792:                          ; CODE XREF: sub_14C8DD6A0+D2↑j
.text:000000014C8DD792 E8 A6 90 98 03                          call    sub_15026683D   ; Call Procedure
.text:000000014C8DD797 0F B7 13                                movzx   edx, word ptr [rbx] ; Move with Zero-Extend
.text:000000014C8DD79A 48 8D 8D 40 07 00 00                    lea     rcx, [rbp+740h] ; Load Effective Address
.text:000000014C8DD7A1 C1 EA 06                                shr     edx, 6          ; Shift Logical Right
.text:000000014C8DD7A4 E8 C7 2A 00 00                          call    sub_14C8E0270   ; Call Procedure
.text:000000014C8DD7A9 32 DB                                   xor     bl, bl          ; Logical Exclusive OR
.text:000000014C8DD7AB
.text:000000014C8DD7AB                         loc_14C8DD7AB:                          ; CODE XREF: sub_14C8DD6A0+F0↑j
.text:000000014C8DD7AB 8B CF                                   mov     ecx, edi
.text:000000014C8DD7AD 88 5C 24 2C                             mov     [rsp+2Ch], bl
.text:000000014C8DD7B1 C1 E9 12                                shr     ecx, 12h        ; Shift Logical Right
.text:000000014C8DD7B4 48 8D 85 40 07 00 00                    lea     rax, [rbp+740h] ; Load Effective Address
.text:000000014C8DD7BB 48 89 44 24 20                          mov     [rsp+20h], rax
.text:000000014C8DD7C0 81 E7 FF FF 03 00                       and     edi, 3FFFFh     ; Logical AND
.text:000000014C8DD7C6 0F B7 44 24 3D                          movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
.text:000000014C8DD7CB 66 89 44 24 2D                          mov     [rsp+2Dh], ax
.text:000000014C8DD7D0 0F B6 44 24 3F                          movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
.text:000000014C8DD7D5 88 44 24 2F                             mov     [rsp+2Fh], al
.text:000000014C8DD7D9 44 89 74 24 28                          mov     [rsp+28h], r14d
.text:000000014C8DD7DE 0F 28 74 24 20                          movaps  xmm6, xmmword ptr [rsp+20h] ; Move Aligned Four Packed Single-FP
.text:000000014C8DD7E3 89 7C 24 24                             mov     [rsp+24h], edi
.text:000000014C8DD7E7 89 4C 24 20                             mov     [rsp+20h], ecx
.text:000000014C8DD7EB 48 8B 44 24 20                          mov     rax, [rsp+20h]
.text:000000014C8DD7F0 48 C1 E8 20                             shr     rax, 20h        ; Shift Logical Right
.text:000000014C8DD7F4 0F 29 74 24 30                          movaps  xmmword ptr [rsp+30h], xmm6 ; Move Aligned Four Packed Single-FP
.text:000000014C8DD7F9 8D 3C 00                                lea     edi, [rax+rax]  ; Load Effective Address
.text:000000014C8DD7FC 48 03 7C CE 08                          add     rdi, [rsi+rcx*8+8] ; Add
.text:000000014C8DD801 48 8D 4C 24 40                          lea     rcx, [rsp+40h]  ; Load Effective Address
.text:000000014C8DD806 0F B7 07                                movzx   eax, word ptr [rdi] ; Move with Zero-Extend
.text:000000014C8DD809 48 8D 57 02                             lea     rdx, [rdi+2]    ; Load Effective Address
.text:000000014C8DD80D 44 8B C0                                mov     r8d, eax
.text:000000014C8DD810 8B F0                                   mov     esi, eax
.text:000000014C8DD812 49 C1 E8 06                             shr     r8, 6           ; Shift Logical Right
.text:000000014C8DD816 C1 EE 06                                shr     esi, 6          ; Shift Logical Right
.text:000000014C8DD819 F6 07 01                                test    byte ptr [rdi], 1 ; Logical Compare
.text:000000014C8DD81C 74 1F                                   jz      short loc_14C8DD83D ; Jump if Zero (ZF=1)
.text:000000014C8DD81E 4D 03 C0                                add     r8, r8          ; Add
.text:000000014C8DD821 E8 17 90 98 03                          call    sub_15026683D   ; Call Procedure
.text:000000014C8DD826 0F B7 17                                movzx   edx, word ptr [rdi] ; Move with Zero-Extend
.text:000000014C8DD829 48 8D 4C 24 40                          lea     rcx, [rsp+40h]  ; Load Effective Address
.text:000000014C8DD82E C1 EA 06                                shr     edx, 6          ; Shift Logical Right
.text:000000014C8DD831 E8 4A 2C 00 00                          call    sub_14C8E0480   ; Call Procedure
.text:000000014C8DD836 C6 44 24 2C 01                          mov     byte ptr [rsp+2Ch], 1
.text:000000014C8DD83B EB 1A                                   jmp     short loc_14C8DD857 ; Jump
.text:000000014C8DD83D                         ; ---------------------------------------------------------------------------
.text:000000014C8DD83D
.text:000000014C8DD83D                         loc_14C8DD83D:                          ; CODE XREF: sub_14C8DD6A0+17C↑j
.text:000000014C8DD83D E8 FB 8F 98 03                          call    sub_15026683D   ; Call Procedure
.text:000000014C8DD842 0F B7 17                                movzx   edx, word ptr [rdi] ; Move with Zero-Extend
.text:000000014C8DD845 48 8D 4C 24 40                          lea     rcx, [rsp+40h]  ; Load Effective Address
.text:000000014C8DD84A C1 EA 06                                shr     edx, 6          ; Shift Logical Right
.text:000000014C8DD84D E8 1E 2A 00 00                          call    sub_14C8E0270   ; Call Procedure
.text:000000014C8DD852 C6 44 24 2C 00                          mov     byte ptr [rsp+2Ch], 0
.text:000000014C8DD857
.text:000000014C8DD857                         loc_14C8DD857:                          ; CODE XREF: sub_14C8DD6A0+19B↑j
.text:000000014C8DD857 48 8D 44 24 40                          lea     rax, [rsp+40h]  ; Load Effective Address
.text:000000014C8DD85C 89 74 24 28                             mov     [rsp+28h], esi
.text:000000014C8DD860 48 89 44 24 20                          mov     [rsp+20h], rax
.text:000000014C8DD865 0F B7 44 24 3D                          movzx   eax, word ptr [rsp+3Dh] ; Move with Zero-Extend
.text:000000014C8DD86A 66 89 44 24 2D                          mov     [rsp+2Dh], ax
.text:000000014C8DD86F 0F B6 44 24 3F                          movzx   eax, byte ptr [rsp+3Fh] ; Move with Zero-Extend
.text:000000014C8DD874 88 44 24 2F                             mov     [rsp+2Fh], al
.text:000000014C8DD878 0F 28 4C 24 20                          movaps  xmm1, xmmword ptr [rsp+20h] ; Move Aligned Four Packed Single-FP
.text:000000014C8DD87D 66 0F 6F C1                             movdqa  xmm0, xmm1      ; Move Aligned Double Quadword
.text:000000014C8DD881 0F 29 4C 24 20                          movaps  xmmword ptr [rsp+20h], xmm1 ; Move Aligned Four Packed Single-FP
.text:000000014C8DD886 66 0F 73 D8 08                          psrldq  xmm0, 8         ; Shift Double Quadword Right Logical
.text:000000014C8DD88B 66 48 0F 7E C0                          movq    rax, xmm0       ; Move 64 bits
.text:000000014C8DD890 48 C1 E8 20                             shr     rax, 20h        ; Shift Logical Right
.text:000000014C8DD894 3A D8                                   cmp     bl, al          ; Compare Two Operands
.text:000000014C8DD896 74 61                                   jz      short loc_14C8DD8F9 ; Jump if Zero (ZF=1)
.text:000000014C8DD898 84 DB                                   test    bl, bl          ; Logical Compare
.text:000000014C8DD89A 66 0F 73 DE 08                          psrldq  xmm6, 8         ; Shift Double Quadword Right Logical
.text:000000014C8DD89F 48 8D 85 40 07 00 00                    lea     rax, [rbp+740h] ; Load Effective Address
.text:000000014C8DD8A6 66 0F 73 D9 08                          psrldq  xmm1, 8         ; Shift Double Quadword Right Logical
.text:000000014C8DD8AB 4C 8D 44 24 40                          lea     r8, [rsp+40h]   ; Load Effective Address
.text:000000014C8DD8B0 66 48 0F 7E F1                          movq    rcx, xmm6       ; Move 64 bits
.text:000000014C8DD8B5 4C 0F 44 C0                             cmovz   r8, rax         ; Move if Zero (ZF=1)
.text:000000014C8DD8B9 66 48 0F 7E C8                          movq    rax, xmm1       ; Move 64 bits
.text:000000014C8DD8BE 0F 45 C8                                cmovnz  ecx, eax        ; Move if Not Zero (ZF=0)
.text:000000014C8DD8C1 85 C9                                   test    ecx, ecx        ; Logical Compare
.text:000000014C8DD8C3 74 21                                   jz      short loc_14C8DD8E6 ; Jump if Zero (ZF=1)
.text:000000014C8DD8C5 4A 8D 14 01                             lea     rdx, [rcx+r8]   ; Load Effective Address
.text:000000014C8DD8C9 4D 8D 04 48                             lea     r8, [r8+rcx*2]  ; Load Effective Address
.text:000000014C8DD8CD 0F 1F 00                                nop     dword ptr [rax] ; No Operation
.text:000000014C8DD8D0
.text:000000014C8DD8D0                         loc_14C8DD8D0:                          ; CODE XREF: sub_14C8DD6A0+244↓j
.text:000000014C8DD8D0 0F BE 42 FF                             movsx   eax, byte ptr [rdx-1] ; Move with Sign-Extend
.text:000000014C8DD8D4 48 8D 52 FF                             lea     rdx, [rdx-1]    ; Load Effective Address
.text:000000014C8DD8D8 66 41 89 40 FE                          mov     [r8-2], ax
.text:000000014C8DD8DD 4D 8D 40 FE                             lea     r8, [r8-2]      ; Load Effective Address
.text:000000014C8DD8E1 83 C1 FF                                add     ecx, 0FFFFFFFFh ; Add
.text:000000014C8DD8E4 75 EA                                   jnz     short loc_14C8DD8D0 ; Jump if Not Zero (ZF=0)
.text:000000014C8DD8E6
.text:000000014C8DD8E6                         loc_14C8DD8E6:                          ; CODE XREF: sub_14C8DD6A0+223↑j
.text:000000014C8DD8E6 84 DB                                   test    bl, bl          ; Logical Compare
.text:000000014C8DD8E8 48 8D 44 24 2C                          lea     rax, [rsp+2Ch]  ; Load Effective Address
.text:000000014C8DD8ED 48 8D 4C 24 3C                          lea     rcx, [rsp+3Ch]  ; Load Effective Address
.text:000000014C8DD8F2 48 0F 44 C1                             cmovz   rax, rcx        ; Move if Zero (ZF=1)
.text:000000014C8DD8F6 C6 00 01                                mov     byte ptr [rax], 1
.text:000000014C8DD8F9
.text:000000014C8DD8F9                         loc_14C8DD8F9:                          ; CODE XREF: sub_14C8DD6A0+1F6↑j
.text:000000014C8DD8F9 48 8B 7C 24 28                          mov     rdi, [rsp+28h]
.text:000000014C8DD8FE 48 8B 5C 24 38                          mov     rbx, [rsp+38h]
.text:000000014C8DD903 8B C7                                   mov     eax, edi
.text:000000014C8DD905 48 8B 54 24 20                          mov     rdx, [rsp+20h]
.text:000000014C8DD90A 3B DF                                   cmp     ebx, edi        ; Compare Two Operands
.text:000000014C8DD90C 48 8B 4C 24 30                          mov     rcx, [rsp+30h]
.text:000000014C8DD911 0F 46 C3                                cmovbe  eax, ebx        ; Move if Below or Equal (CF=1 | ZF=1)
.text:000000014C8DD914 80 7C 24 3C 00                          cmp     byte ptr [rsp+3Ch], 0 ; Compare Two Operands
.text:000000014C8DD919 4C 63 C0                                movsxd  r8, eax         ; Move with Sign-Extend Doubleword
.text:000000014C8DD91C 74 07                                   jz      short loc_14C8DD925 ; Jump if Zero (ZF=1)
.text:000000014C8DD91E E8 FD 18 EB FF                          call    sub_14C78F220   ; Call Procedure
.text:000000014C8DD923 EB 05                                   jmp     short loc_14C8DD92A ; Jump
.text:000000014C8DD925                         ; ---------------------------------------------------------------------------
.text:000000014C8DD925
.text:000000014C8DD925                         loc_14C8DD925:                          ; CODE XREF: sub_14C8DD6A0+27C↑j
.text:000000014C8DD925 E8 F6 17 EB FF                          call    sub_14C78F120   ; Call Procedure
.text:000000014C8DD92A
.text:000000014C8DD92A                         loc_14C8DD92A:                          ; CODE XREF: sub_14C8DD6A0+283↑j
.text:000000014C8DD92A 85 C0                                   test    eax, eax        ; Logical Compare
.text:000000014C8DD92C 75 04                                   jnz     short loc_14C8DD932 ; Jump if Not Zero (ZF=0)
.text:000000014C8DD92E 2B DF                                   sub     ebx, edi        ; Integer Subtraction
.text:000000014C8DD930 8B C3                                   mov     eax, ebx
.text:000000014C8DD932
.text:000000014C8DD932                         loc_14C8DD932:                          ; CODE XREF: sub_14C8DD6A0+28C↑j
.text:000000014C8DD932 48 8B 8D 40 0F 00 00                    mov     rcx, [rbp+0F40h]
.text:000000014C8DD939 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014C8DD93C E8 1F 25 98 03                          call    __security_check_cookie ; Call Procedure
.text:000000014C8DD941 4C 8D 9C 24 60 10 00 00                 lea     r11, [rsp+1060h] ; Load Effective Address
.text:000000014C8DD949 49 8B 5B 10                             mov     rbx, [r11+10h]
.text:000000014C8DD94D 49 8B 73 18                             mov     rsi, [r11+18h]
.text:000000014C8DD951 49 8B 7B 20                             mov     rdi, [r11+20h]
.text:000000014C8DD955 4D 8B 73 28                             mov     r14, [r11+28h]
.text:000000014C8DD959 41 0F 28 73 F0                          movaps  xmm6, xmmword ptr [r11-10h] ; Move Aligned Four Packed Single-FP
.text:000000014C8DD95E 49 8B E3                                mov     rsp, r11
.text:000000014C8DD961 5D                                      pop     rbp
.text:000000014C8DD962 C3                                      retn                    ; Return Near from Procedure
.text:000000014C8DD962                         sub_14C8DD6A0   endp
.text:000000014C8DD962
.text:000000014C8DD962                         ; ---------------------------------------------------------------------------

```
```c


__int64 __fastcall sub_14C8DD6A0(unsigned int* a1, unsigned int* a2)
{
	unsigned int v2; // eax
	__int64 result; // rax
	unsigned int v4; // ecx
	void* v5; // rsp
	unsigned int v6; // edi
	unsigned int v7; // ebx
	_QWORD* v8; // rsi
	_BYTE* v9; // rbx
	_BYTE* v10; // rdx
	unsigned __int64 v11; // r8
	int v12; // r14d
	__int8 v13; // bl
	__m128i v14; // xmm6
	_BYTE* v15; // rdi
	_BYTE* v16; // rdx
	unsigned __int64 v17; // r8
	int v18; // esi
	unsigned __int32 v19; // xmm1_4
	char* v20; // r8
	unsigned __int64 v21; // rcx
	char* v22; // rdx
	char* v23; // r8
	__int16 v24; // ax
	__int8* v25; // rax
	__int32 v26; // edi
	__int32 v27; // eax
	__int32 v28; // ebx
	__int64 v29; // [rsp-20h] [rbp-1068h] BYREF
	__m128i v30; // [rsp+0h] [rbp-1048h] BYREF
	__m128i v31; // [rsp+10h] [rbp-1038h] BYREF
	char v32[192]; // [rsp+20h] [rbp-1028h] BYREF
	_QWORD v33[258]; // [rsp+820h] [rbp-828h] BYREF

	v2 = *a2;
	if (*a1 == *a2)
		return a1[1] - a2[1];
	v4 = *a1;
	v5 = alloca(0x1060LL);
	v33[0x100] = (unsigned __int64)&v29 ^ (unsigned __int64)off_156DC5340;
	v6 = v2;
	v7 = v4;
	if (byte_1573DBEEC)
	{
		v8 = &unk_1573DC1C0;
	}
	else
	{
		v8 = (_QWORD*)sub_14C8D5690(&unk_1573DC1C0);
		byte_1573DBEEC = 1;
	}
	v30.m128i_i32[1] = v7 & 0x3FFFF;
	v30.m128i_i32[0] = v7 >> 0x12;
	v9 = (_BYTE*)(v8[(v7 >> 0x12) + 1] + 2 * (v7 & 0x3FFFF));
	v10 = v9 + 2;
	v11 = (unsigned __int64)*(unsigned __int16*)v9 >> 6;
	v12 = *(unsigned __int16*)v9 >> 6;
	if ((*v9 & 1) != 0)
	{
		sub_15026683D(v33, v10, 2 * v11);
		sub_14C8E0480(v33, *(unsigned __int16*)v9 >> 6);
		v13 = 1;
	}
	else
	{
		sub_15026683D(v33, v10, v11);
		sub_14C8E0270(v33, *(unsigned __int16*)v9 >> 6);
		v13 = 0;
	}
	v30.m128i_i8[0xC] = v13;
	v30.m128i_i64[0] = (__int64)v33;
	*(__int16*)((char*)&v30.m128i_i16[6] + 1) = *(__int16*)((char*)&v31.m128i_i16[6] + 1);
	v30.m128i_i8[0xF] = v31.m128i_i8[0xF];
	v30.m128i_i32[2] = v12;
	v14 = v30;
	v30.m128i_i32[1] = v6 & 0x3FFFF;
	v30.m128i_i32[0] = v6 >> 0x12;
	v31 = v14;
	v15 = (_BYTE*)(v8[(v6 >> 0x12) + 1] + 2 * (v6 & 0x3FFFF));
	v16 = v15 + 2;
	v17 = (unsigned __int64)*(unsigned __int16*)v15 >> 6;
	v18 = *(unsigned __int16*)v15 >> 6;
	if ((*v15 & 1) != 0)
	{
		sub_15026683D(v32, v16, 2 * v17);
		sub_14C8E0480(v32, *(unsigned __int16*)v15 >> 6);
		v30.m128i_i8[0xC] = 1;
	}
	else
	{
		sub_15026683D(v32, v16, v17);
		sub_14C8E0270(v32, *(unsigned __int16*)v15 >> 6);
		v30.m128i_i8[0xC] = 0;
	}
	v30.m128i_i32[2] = v18;
	v30.m128i_i64[0] = (__int64)v32;
	*(__int16*)((char*)&v30.m128i_i16[6] + 1) = *(__int16*)((char*)&v31.m128i_i16[6] + 1);
	v30.m128i_i8[0xF] = v31.m128i_i8[0xF];
	if (v13 != (unsigned __int8)BYTE4(_mm_srli_si128(v30, 8).m128i_u64[0]))
	{
		v19 = _mm_srli_si128(v30, 8).m128i_u32[0];
		v20 = v32;
		v21 = _mm_srli_si128(v14, 8).m128i_u64[0];
		if (v13)
			v21 = v19;
		else
			v20 = (char*)v33;
		if ((_DWORD)v21)
		{
			v22 = &v20[v21];
			v23 = &v20[2 * v21];
			do
			{
				v24 = *--v22;
				*((_WORD*)v23 + 0xFFFFFFFF) = v24;
				v23 += 0xFFFFFFFE;
				LODWORD(v21) = v21 - 1;
			} while ((_DWORD)v21);
		}
		v25 = &v30.m128i_i8[0xC];
		if (!v13)
			v25 = &v31.m128i_i8[0xC];
		*v25 = 1;
	}
	v26 = v30.m128i_i32[2];
	v27 = v30.m128i_i32[2];
	v28 = v31.m128i_i32[2];
	if (v31.m128i_i32[2] <= (unsigned __int32)v30.m128i_i32[2])
		v27 = v31.m128i_i32[2];
	if (v31.m128i_i8[0xC])
		result = sub_14C78F220(v31.m128i_i64[0], v30.m128i_i64[0], v27);
	else
		result = sub_14C78F120(v31.m128i_i64[0], v30.m128i_i64[0], v27);
	if (!(_DWORD)result)
		return (unsigned int)(v28 - v26);
	return result;
}

```


---
EncoreFun
0x10020 ,0x10024 , 0x10040
---

```asm

.text:000000014C8D5120
.text:000000014C8D5120                         ; =============== S U B R O U T I N E =======================================
.text:000000014C8D5120
.text:000000014C8D5120                         ; Attributes: bp-based frame
.text:000000014C8D5120
.text:000000014C8D5120                         ; _QWORD *__fastcall sub_14C8D5120(_QWORD *, __int64)
.text:000000014C8D5120                         sub_14C8D5120   proc near               ; CODE XREF: sub_14CBCDEE0+10E↓p
.text:000000014C8D5120                                                                 ; sub_14DF3F770+1D2↓p ...
.text:000000014C8D5120
.text:000000014C8D5120                         var_60          = byte ptr -60h
.text:000000014C8D5120                         var_5C          = dword ptr -5Ch
.text:000000014C8D5120                         var_58          = byte ptr -58h
.text:000000014C8D5120                         var_4B          = word ptr -4Bh
.text:000000014C8D5120                         var_49          = byte ptr -49h
.text:000000014C8D5120                         var_48          = byte ptr -48h
.text:000000014C8D5120                         var_38          = qword ptr -38h
.text:000000014C8D5120                         var_30          = dword ptr -30h
.text:000000014C8D5120                         var_2C          = byte ptr -2Ch
.text:000000014C8D5120                         var_2B          = word ptr -2Bh
.text:000000014C8D5120                         var_29          = byte ptr -29h
.text:000000014C8D5120                         var_28          = xmmword ptr -28h
.text:000000014C8D5120                         var_14          = byte ptr -14h
.text:000000014C8D5120                         var_10          = qword ptr -10h
.text:000000014C8D5120                         var_s0          = byte ptr  0
.text:000000014C8D5120                         arg_8           = qword ptr  38h
.text:000000014C8D5120                         arg_10          = qword ptr  40h
.text:000000014C8D5120                         arg_18          = qword ptr  48h
.text:000000014C8D5120
.text:000000014C8D5120 48 89 5C 24 10                          mov     [rsp+10h], rbx
.text:000000014C8D5125 48 89 74 24 18                          mov     [rsp+18h], rsi
.text:000000014C8D512A 48 89 7C 24 20                          mov     [rsp+20h], rdi
.text:000000014C8D512F 55                                      push    rbp
.text:000000014C8D5130 41 54                                   push    r12
.text:000000014C8D5132 41 55                                   push    r13
.text:000000014C8D5134 41 56                                   push    r14
.text:000000014C8D5136 41 57                                   push    r15
.text:000000014C8D5138 48 8B EC                                mov     rbp, rsp
.text:000000014C8D513B 48 81 EC 80 00 00 00                    sub     rsp, 80h        ; Integer Subtraction
.text:000000014C8D5142 48 8B 05 F7 01 4F 0A                    mov     rax, cs:off_156DC5340
.text:000000014C8D5149 48 33 C4                                xor     rax, rsp        ; Logical Exclusive OR
.text:000000014C8D514C 48 89 45 F0                             mov     [rbp-10h], rax
.text:000000014C8D5150 80 7A 04 00                             cmp     byte ptr [rdx+4], 0 ; Compare Two Operands
.text:000000014C8D5154 48 8D 7A 06                             lea     rdi, [rdx+6]    ; Load Effective Address
.text:000000014C8D5158 44 0F B7 7D B5                          movzx   r15d, word ptr [rbp-4Bh] ; Move with Zero-Extend
.text:000000014C8D515D 4C 8B E9                                mov     r13, rcx
.text:000000014C8D5160 44 0F B6 65 B7                          movzx   r12d, byte ptr [rbp-49h] ; Move with Zero-Extend
.text:000000014C8D5165 48 C7 C3 FF FF FF FF                    mov     rbx, 0FFFFFFFFFFFFFFFFh
.text:000000014C8D516C 74 0F                                   jz      short loc_14C8D517D ; Jump if Zero (ZF=1)
.text:000000014C8D516E 41 B6 01                                mov     r14b, 1
.text:000000014C8D5171
.text:000000014C8D5171                         loc_14C8D5171:                          ; CODE XREF: sub_14C8D5120+59↓j
.text:000000014C8D5171 48 FF C3                                inc     rbx             ; Increment by 1
.text:000000014C8D5174 66 83 3C 5F 00                          cmp     word ptr [rdi+rbx*2], 0 ; Compare Two Operands
.text:000000014C8D5179 75 F6                                   jnz     short loc_14C8D5171 ; Jump if Not Zero (ZF=0)
.text:000000014C8D517B EB 0C                                   jmp     short loc_14C8D5189 ; Jump
.text:000000014C8D517D                         ; ---------------------------------------------------------------------------
.text:000000014C8D517D
.text:000000014C8D517D                         loc_14C8D517D:                          ; CODE XREF: sub_14C8D5120+4C↑j
.text:000000014C8D517D 45 32 F6                                xor     r14b, r14b      ; Logical Exclusive OR
.text:000000014C8D5180
.text:000000014C8D5180                         loc_14C8D5180:                          ; CODE XREF: sub_14C8D5120+67↓j
.text:000000014C8D5180 48 FF C3                                inc     rbx             ; Increment by 1
.text:000000014C8D5183 44 38 34 1F                             cmp     [rdi+rbx], r14b ; Compare Two Operands
.text:000000014C8D5187 75 F7                                   jnz     short loc_14C8D5180 ; Jump if Not Zero (ZF=0)
.text:000000014C8D5189
.text:000000014C8D5189                         loc_14C8D5189:                          ; CODE XREF: sub_14C8D5120+5B↑j
.text:000000014C8D5189 80 3D 5C 6D B0 0A 00                    cmp     cs:byte_1573DBEEC, 0 ; Compare Two Operands
.text:000000014C8D5190 74 09                                   jz      short loc_14C8D519B ; Jump if Zero (ZF=1)
.text:000000014C8D5192 48 8D 35 27 70 B0 0A                    lea     rsi, unk_1573DC1C0 ; Load Effective Address
.text:000000014C8D5199 EB 16                                   jmp     short loc_14C8D51B1 ; Jump
.text:000000014C8D519B                         ; ---------------------------------------------------------------------------
.text:000000014C8D519B
.text:000000014C8D519B                         loc_14C8D519B:                          ; CODE XREF: sub_14C8D5120+70↑j
.text:000000014C8D519B 48 8D 0D 1E 70 B0 0A                    lea     rcx, unk_1573DC1C0 ; Load Effective Address
.text:000000014C8D51A2 E8 E9 04 00 00                          call    sub_14C8D5690   ; Call Procedure
.text:000000014C8D51A7 48 8B F0                                mov     rsi, rax
.text:000000014C8D51AA C6 05 3B 6D B0 0A 01                    mov     cs:byte_1573DBEEC, 1
.text:000000014C8D51B1
.text:000000014C8D51B1                         loc_14C8D51B1:                          ; CODE XREF: sub_14C8D5120+79↑j
.text:000000014C8D51B1 C6 45 A0 00                             mov     byte ptr [rbp-60h], 0
.text:000000014C8D51B5 44 8B C3                                mov     r8d, ebx
.text:000000014C8D51B8 48 89 7D C8                             mov     [rbp-38h], rdi
.text:000000014C8D51BC 48 8B D7                                mov     rdx, rdi
.text:000000014C8D51BF 89 5D D0                                mov     [rbp-30h], ebx
.text:000000014C8D51C2 44 88 75 D4                             mov     [rbp-2Ch], r14b
.text:000000014C8D51C6 66 44 89 7D D5                          mov     [rbp-2Bh], r15w
.text:000000014C8D51CB 44 88 65 D7                             mov     [rbp-29h], r12b
.text:000000014C8D51CF 45 84 F6                                test    r14b, r14b      ; Logical Compare
.text:000000014C8D51D2 75 12                                   jnz     short loc_14C8D51E6 ; Jump if Not Zero (ZF=0)
.text:000000014C8D51D4 48 8D 4D A8                             lea     rcx, [rbp-58h]  ; Load Effective Address
.text:000000014C8D51D8 4C 8D B6 20 00 01 00                    lea     r14, [rsi+10020h] ; Load Effective Address
.text:000000014C8D51DF E8 9C F3 FF FF                          call    sub_14C8D4580   ; Call Procedure
.text:000000014C8D51E4 EB 10                                   jmp     short loc_14C8D51F6 ; Jump
.text:000000014C8D51E6                         ; ---------------------------------------------------------------------------
.text:000000014C8D51E6
.text:000000014C8D51E6                         loc_14C8D51E6:                          ; CODE XREF: sub_14C8D5120+B2↑j
.text:000000014C8D51E6 48 8D 4D B8                             lea     rcx, [rbp-48h]  ; Load Effective Address
.text:000000014C8D51EA 4C 8D B6 24 00 01 00                    lea     r14, [rsi+10024h] ; Load Effective Address
.text:000000014C8D51F1 E8 7A F4 FF FF                          call    sub_14C8D4670   ; Call Procedure
.text:000000014C8D51F6
.text:000000014C8D51F6                         loc_14C8D51F6:                          ; CODE XREF: sub_14C8D5120+C4↑j
.text:000000014C8D51F6 0F 10 00                                movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.text:000000014C8D51F9 4C 8D 4D A0                             lea     r9, [rbp-60h]   ; Load Effective Address
.text:000000014C8D51FD C6 45 EC 00                             mov     byte ptr [rbp-14h], 0
.text:000000014C8D5201 4C 8D 45 C8                             lea     r8, [rbp-38h]   ; Load Effective Address
.text:000000014C8D5205 66 0F 7E C1                             movd    ecx, xmm0       ; Move 32 bits
.text:000000014C8D5209 48 8D 55 A4                             lea     rdx, [rbp-5Ch]  ; Load Effective Address
.text:000000014C8D520D 0F 11 45 D8                             movups  xmmword ptr [rbp-28h], xmm0 ; Move Unaligned Four Packed Single-FP
.text:000000014C8D5211 48 81 C1 01 04 00 00                    add     rcx, 401h       ; Add
.text:000000014C8D5218 48 C1 E1 06                             shl     rcx, 6          ; Shift Logical Left
.text:000000014C8D521C 48 03 CE                                add     rcx, rsi        ; Add
.text:000000014C8D521F E8 FC 7F 01 00                          call    sub_14C8ED220   ; Call Procedure
.text:000000014C8D5224 0F B6 4D A0                             movzx   ecx, byte ptr [rbp-60h] ; Move with Zero-Extend
.text:000000014C8D5228 F0 41 01 0E                             lock add [r14], ecx     ; Add
.text:000000014C8D522C 8B 4D A4                                mov     ecx, [rbp-5Ch]
.text:000000014C8D522F 49 8B C5                                mov     rax, r13
.text:000000014C8D5232 41 89 4D 00                             mov     [r13+0], ecx
.text:000000014C8D5236 41 C7 45 04 00 00 00 00                 mov     dword ptr [r13+4], 0
.text:000000014C8D523E 48 8B 4D F0                             mov     rcx, [rbp-10h]
.text:000000014C8D5242 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014C8D5245 E8 16 AC 98 03                          call    __security_check_cookie ; Call Procedure
.text:000000014C8D524A 4C 8D 9C 24 80 00 00 00                 lea     r11, [rsp+80h]  ; Load Effective Address
.text:000000014C8D5252 49 8B 5B 38                             mov     rbx, [r11+38h]
.text:000000014C8D5256 49 8B 73 40                             mov     rsi, [r11+40h]
.text:000000014C8D525A 49 8B 7B 48                             mov     rdi, [r11+48h]
.text:000000014C8D525E 49 8B E3                                mov     rsp, r11
.text:000000014C8D5261 41 5F                                   pop     r15
.text:000000014C8D5263 41 5E                                   pop     r14
.text:000000014C8D5265 41 5D                                   pop     r13
.text:000000014C8D5267 41 5C                                   pop     r12
.text:000000014C8D5269 5D                                      pop     rbp
.text:000000014C8D526A C3                                      retn                    ; Return Near from Procedure
.text:000000014C8D526A                         sub_14C8D5120   endp
.text:000000014C8D526A
.text:000000014C8D526A                         ; ---------------------------------------------------------------------------
.text:000000014C8D526B CC                                      db 0CCh
.text:000000014C8D526C CC                                      db 0CCh
.text:000000014C8D526D CC                                      db 0CCh
.text:000000014C8D526E CC                                      db 0CCh
.text:000000014C8D526F CC                                      db 0CCh
.text:000000014C8D5270
.text:000000014C8D5270                         ; =============== S U B R O U T I N E =======================================
.text:000000014C8D5270
.text:000000014C8D5270
.text:000000014C8D5270                         ; __int64 __fastcall sub_14C8D5270(__int64, int, __int64, unsigned int)
.text:000000014C8D5270                         sub_14C8D5270   proc near               ; CODE XREF: sub_1411F5EC0+1E8↑p
.text:000000014C8D5270                                                                 ; sub_1411F5EC0+AE9↑p ...
.text:000000014C8D5270
.text:000000014C8D5270                         var_18          = xmmword ptr -18h
.text:000000014C8D5270
.text:000000014C8D5270 40 53                                   push    rbx
.text:000000014C8D5272 48 83 EC 30                             sub     rsp, 30h        ; Integer Subtraction
.text:000000014C8D5276 45 33 D2                                xor     r10d, r10d      ; Logical Exclusive OR
.text:000000014C8D5279 4C 89 44 24 20                          mov     [rsp+20h], r8
.text:000000014C8D527E 89 54 24 28                             mov     [rsp+28h], edx
.text:000000014C8D5282 48 8B D9                                mov     rbx, rcx
.text:000000014C8D5285 45 8B DA                                mov     r11d, r10d
.text:000000014C8D5288 85 D2                                   test    edx, edx        ; Logical Compare
.text:000000014C8D528A 7E 5F                                   jle     short loc_14C8D52EB ; Jump if Less or Equal (ZF=1 | SF!=OF)
.text:000000014C8D528C 83 FA 08                                cmp     edx, 8          ; Compare Two Operands
.text:000000014C8D528F 72 5A                                   jb      short loc_14C8D52EB ; Jump if Below (CF=1)
.text:000000014C8D5291 48 63 C2                                movsxd  rax, edx        ; Move with Sign-Extend Doubleword
.text:000000014C8D5294 0F 57 DB                                xorps   xmm3, xmm3      ; Bitwise Logical XOR for Single-FP Data
.text:000000014C8D5297 48 83 E0 F8                             and     rax, 0FFFFFFFFFFFFFFF8h ; Logical AND
.text:000000014C8D529B 0F 57 D2                                xorps   xmm2, xmm2      ; Bitwise Logical XOR for Single-FP Data
.text:000000014C8D529E 66 90                                   xchg    ax, ax          ; Exchange Register/Memory with Register
.text:000000014C8D52A0
.text:000000014C8D52A0                         loc_14C8D52A0:                          ; CODE XREF: sub_14C8D5270+59↓j
.text:000000014C8D52A0 F3 43 0F 7E 0C 50                       movq    xmm1, qword ptr [r8+r10*2] ; Move 64 bits
.text:000000014C8D52A6 0F 57 C0                                xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.text:000000014C8D52A9 66 0F 61 C8                             punpcklwd xmm1, xmm0    ; Unpack Low Packed Data (Word->Dword)
.text:000000014C8D52AD 41 83 C3 08                             add     r11d, 8         ; Add
.text:000000014C8D52B1 0F 56 D9                                orps    xmm3, xmm1      ; Bitwise Logical OR for Single-FP Data
.text:000000014C8D52B4 F3 43 0F 7E 4C 50 08                    movq    xmm1, qword ptr [r8+r10*2+8] ; Move 64 bits
.text:000000014C8D52BB 49 83 C2 08                             add     r10, 8          ; Add
.text:000000014C8D52BF 66 0F 61 C8                             punpcklwd xmm1, xmm0    ; Unpack Low Packed Data (Word->Dword)
.text:000000014C8D52C3 0F 56 D1                                orps    xmm2, xmm1      ; Bitwise Logical OR for Single-FP Data
.text:000000014C8D52C6 4C 3B D0                                cmp     r10, rax        ; Compare Two Operands
.text:000000014C8D52C9 7C D5                                   jl      short loc_14C8D52A0 ; Jump if Less (SF!=OF)
.text:000000014C8D52CB 0F 56 D3                                orps    xmm2, xmm3      ; Bitwise Logical OR for Single-FP Data
.text:000000014C8D52CE 66 0F 6F C2                             movdqa  xmm0, xmm2      ; Move Aligned Double Quadword
.text:000000014C8D52D2 66 0F 73 D8 08                          psrldq  xmm0, 8         ; Shift Double Quadword Right Logical
.text:000000014C8D52D7 0F 56 D0                                orps    xmm2, xmm0      ; Bitwise Logical OR for Single-FP Data
.text:000000014C8D52DA 66 0F 6F C2                             movdqa  xmm0, xmm2      ; Move Aligned Double Quadword
.text:000000014C8D52DE 66 0F 73 D8 04                          psrldq  xmm0, 4         ; Shift Double Quadword Right Logical
.text:000000014C8D52E3 0F 56 D0                                orps    xmm2, xmm0      ; Bitwise Logical OR for Single-FP Data
.text:000000014C8D52E6 66 41 0F 7E D2                          movd    r10d, xmm2      ; Move 32 bits
.text:000000014C8D52EB
.text:000000014C8D52EB                         loc_14C8D52EB:                          ; CODE XREF: sub_14C8D5270+1A↑j
.text:000000014C8D52EB                                                                 ; sub_14C8D5270+1F↑j
.text:000000014C8D52EB 49 63 C3                                movsxd  rax, r11d       ; Move with Sign-Extend Doubleword
.text:000000014C8D52EE 48 63 D2                                movsxd  rdx, edx        ; Move with Sign-Extend Doubleword
.text:000000014C8D52F1 48 3B C2                                cmp     rax, rdx        ; Compare Two Operands
.text:000000014C8D52F4 7D 1A                                   jge     short loc_14C8D5310 ; Jump if Greater or Equal (SF=OF)
.text:000000014C8D52F6                                         db      66h, 66h
.text:000000014C8D52F6 66 66 0F 1F 84 00 00 00                 nop     word ptr [rax+rax+00000000h] ; No Operation
.text:000000014C8D52F6 00 00
.text:000000014C8D5300
.text:000000014C8D5300                         loc_14C8D5300:                          ; CODE XREF: sub_14C8D5270+9E↓j
.text:000000014C8D5300 41 0F B7 0C 40                          movzx   ecx, word ptr [r8+rax*2] ; Move with Zero-Extend
.text:000000014C8D5305 48 FF C0                                inc     rax             ; Increment by 1
.text:000000014C8D5308 44 0B D1                                or      r10d, ecx       ; Logical Inclusive OR
.text:000000014C8D530B 48 3B C2                                cmp     rax, rdx        ; Compare Two Operands
.text:000000014C8D530E 7C F0                                   jl      short loc_14C8D5300 ; Jump if Less (SF!=OF)
.text:000000014C8D5310
.text:000000014C8D5310                         loc_14C8D5310:                          ; CODE XREF: sub_14C8D5270+84↑j
.text:000000014C8D5310 41 F7 C2 80 FF FF FF                    test    r10d, 0FFFFFF80h ; Logical Compare
.text:000000014C8D5317 48 8D 54 24 20                          lea     rdx, [rsp+20h]  ; Load Effective Address
.text:000000014C8D531C 45 8B C1                                mov     r8d, r9d
.text:000000014C8D531F 48 8B CB                                mov     rcx, rbx
.text:000000014C8D5322 0F 95 44 24 2C                          setnz   byte ptr [rsp+2Ch] ; Set Byte if Not Zero (ZF=0)
.text:000000014C8D5327 0F 28 44 24 20                          movaps  xmm0, xmmword ptr [rsp+20h] ; Move Aligned Four Packed Single-FP
.text:000000014C8D532C 66 0F 7F 44 24 20                       movdqa  xmmword ptr [rsp+20h], xmm0 ; Move Aligned Double Quadword
.text:000000014C8D5332 E8 39 F5 FF FF                          call    sub_14C8D4870   ; Call Procedure
.text:000000014C8D5337 48 8B C3                                mov     rax, rbx
.text:000000014C8D533A 48 83 C4 30                             add     rsp, 30h        ; Add
.text:000000014C8D533E 5B                                      pop     rbx
.text:000000014C8D533F C3                                      retn                    ; Return Near from Procedure
.text:000000014C8D533F                         sub_14C8D5270   endp
.text:000000014C8D533F
.text:000000014C8D5340
```
```c


_QWORD* __fastcall sub_14C8D5120(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rdi
	unsigned __int64 v4; // rbx
	char v5; // r14
	char* v6; // rsi
	volatile signed __int32* v7; // r14
	__m128i* v8; // rax
	__m128i v9; // xmm0
	_QWORD* result; // rax
	char v11[4]; // [rsp+20h] [rbp-60h] BYREF
	unsigned int v12; // [rsp+24h] [rbp-5Ch] BYREF
	char v13[13]; // [rsp+28h] [rbp-58h] BYREF
	__int16 v14; // [rsp+35h] [rbp-4Bh]
	char v15; // [rsp+37h] [rbp-49h]
	char v16[16]; // [rsp+38h] [rbp-48h] BYREF
	__int64 v17; // [rsp+48h] [rbp-38h] BYREF
	int v18; // [rsp+50h] [rbp-30h]
	char v19; // [rsp+54h] [rbp-2Ch]
	__int16 v20; // [rsp+55h] [rbp-2Bh]
	char v21; // [rsp+57h] [rbp-29h]
	__m128i v22; // [rsp+58h] [rbp-28h]
	char v23; // [rsp+6Ch] [rbp-14h]

	v2 = a2 + 6;
	v4 = 0xFFFFFFFFFFFFFFFFuLL;
	if (*(_BYTE*)(a2 + 4))
	{
		v5 = 1;
		do
			++v4;
		while (*(_WORD*)(v2 + 2 * v4));
	}
	else
	{
		v5 = 0;
		do
			++v4;
		while (*(_BYTE*)(v2 + v4));
	}
	if (byte_1573DBEEC)
	{
		v6 = (char*)&unk_1573DC1C0;
	}
	else
	{
		v6 = (char*)sub_14C8D5690(&unk_1573DC1C0);
		byte_1573DBEEC = 1;
	}
	v11[0] = 0;
	v17 = v2;
	v18 = v4;
	v19 = v5;
	v20 = v14;
	v21 = v15;
	if (v5)
	{
		v7 = (volatile signed __int32*)(v6 + 0x10024);
		v8 = (__m128i*)sub_14C8D4670(v16, v2, (unsigned int)v4);
	}
	else
	{
		v7 = (volatile signed __int32*)(v6 + 0x10020);
		v8 = (__m128i*)sub_14C8D4580(v13, v2, (unsigned int)v4);
	}
	v9 = *v8;
	v23 = 0;
	v22 = v9;
	sub_14C8ED220(&v6[0x40 * _mm_cvtsi128_si32(v9) + 0x10040], &v12, &v17, v11);
	_InterlockedAdd(v7, (unsigned __int8)v11[0]);
	result = a1;
	*a1 = v12;
	return result;
}
__int64 __fastcall sub_14C8D4670(__int64 a1, __int64 a2, unsigned int a3)
{
	unsigned int v3; // eax
	__int16 v4; // bx
	char* v6; // r9
	__int64 v7; // rax
	__int16 v8; // cx
	int v9; // edx
	__int64 result; // rax
	char v11[2048]; // [rsp+20h] [rbp-818h] BYREF

	v3 = 0;
	v4 = a3;
	if (a3)
	{
		v6 = v11;
		do
		{
			if (v3 >= 0x400)
				break;
			++v3;
			*(_WORD*)v6 = *(_WORD*)&v6[a2 - (_QWORD)v11]
				+ ((unsigned int)*(unsigned __int16*)&v6[a2 - (_QWORD)v11] - 0x41 < 0x1A ? 0x20 : 0);
			v6 += 2;
		} while (v3 < a3);
	}
	v7 = sub_14C7A33B0(v11, 2 * a3);
	*(_DWORD*)(a1 + 4) = v7;
	v8 = (v4 << 6) | *(_WORD*)(a1 + 0xC) & 0x3E | 1;
	*(_DWORD*)a1 = BYTE4(v7) & 0xF;
	v9 = HIDWORD(v7) >> 4;
	*(_DWORD*)(a1 + 8) = HIDWORD(v7) & 0x80000000;
	result = a1;
	*(_WORD*)(a1 + 0xC) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(2 * v9)) & 0x3E;
	return result;
}
__int64 __fastcall sub_14C8D4580(__int64 a1, __int64 a2, unsigned int a3)
{
	int v3; // edi
	unsigned int v6; // r9d
	__int64 v7; // rdx
	int* v8; // r10
	__int64 v9; // rax
	int v11[256]; // [rsp+20h] [rbp-418h] BYREF

	v3 = 0;
	v6 = 0;
	if (a3)
	{
		v7 = a2 - (_QWORD)v11;
		v8 = v11;
		do
		{
			if (v6 >= 0x400)
				break;
			++v6;
			*(_BYTE*)v8 = *((_BYTE*)v8 + v7) + ((unsigned int)(*((char*)v8 + v7) - 0x41) < 0x1A ? 0x20 : 0);
			v8 = (int*)((char*)v8 + 1);
		} while (v6 < a3);
	}
	v9 = sub_14C7A33B0(v11, a3);
	if (a3 == 4)
		LOBYTE(v3) = (v11[0] & 0xDFDFDFDF) == 0x454E4F4E;
	*(_DWORD*)(a1 + 4) = v9;
	*(_DWORD*)a1 = BYTE4(v9) & 0xF;
	*(_DWORD*)(a1 + 8) = HIDWORD(v9) & 0x80000000 | (v3 << 0x1F);
	*(_WORD*)(a1 + 0xC) = 2 * ((0x20 * a3) | (HIDWORD(v9) >> 4) & 0x1F);
	return a1;
}
unsigned __int64 __fastcall sub_14C7A33B0(__int64* a1, unsigned int a2)
{
	__int64 v2; // rbx
	__int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	unsigned __int64 v8; // rdx
	__int64 v10; // r8
	__int64 v11; // r9
	unsigned __int64 v12; // rcx
	unsigned __int64 v13; // rdx
	__int64 v14; // r9
	__int64 v15; // rcx
	__int64 v16; // r11
	__int64 v17; // rdx
	unsigned __int64 v18; // r8
	__int64 v19; // r10
	__int64 v20; // rdx
	__int64 v21; // r10
	__int64 v22; // rax
	__int64 v23; // r10
	__int64 v24; // rbp
	__int64 v25; // r11
	__int64 v26; // r14
	__int64 v27; // rdi
	__int64 v28; // rsi
	unsigned __int64 v29; // rbx
	unsigned __int64 v30; // r8
	__int64 v31; // rdx
	__int64 v32; // r9
	__int64 v33; // rcx
	unsigned __int64 v34; // rax
	__int64 v35; // rdx
	__int64 v36; // r8
	unsigned __int64 v37; // rbx
	__int64 v38; // r11
	__int64 v39; // r10
	__int64 v40; // r9
	unsigned __int64 v41; // r12
	unsigned __int64 v42; // rcx
	__int64 v43; // rsi
	__int64 v44; // rbp
	__int64 v45; // rsi
	unsigned __int64 v46; // r8
	unsigned __int64 v47; // r14
	__int64 v48; // rax
	_QWORD* v49; // rcx
	__int64 v50; // r11
	__int64 v51; // r15
	unsigned __int64 v52; // r10
	unsigned __int64 v53; // r14
	__int64 v54; // r9
	__int64 v55; // r8
	__int64 v56; // rdi
	__int64 v57; // r11
	__int64 v58; // rax
	__int64 v59; // r10
	__int64 v60; // rdx
	__int64 v61; // rsi
	unsigned __int64 v62; // rdi
	__int64 v63; // rdx
	unsigned __int64 v64; // r8
	unsigned __int64 v65; // r9
	__int64 v66; // rax
	__int64 v67; // r11
	unsigned __int64 v68; // r8
	unsigned __int64 v69; // r8
	unsigned __int64 v70; // rdx
	unsigned int v71; // [rsp+88h] [rbp+10h]
	_QWORD* v72; // [rsp+90h] [rbp+18h]
	unsigned __int64 v73; // [rsp+98h] [rbp+20h]
	unsigned __int64 v74; // [rsp+98h] [rbp+20h]

	v2 = a2;
	if (a2 > 0x20)
	{
		if (a2 > 0x40)
		{
			v38 = *(__int64*)((char*)a1 + a2 - 0x28);
			v39 = *(__int64*)((char*)a1 + a2 - 8);
			v40 = a2 + *(__int64*)((char*)a1 + a2 - 0x40);
			v41 = *(__int64*)((char*)a1 + a2 - 0x10) + *(__int64*)((char*)a1 + a2 - 0x38);
			v42 = 0x9DDFEA08EB382D69uLL * (*(__int64*)((char*)a1 + a2 - 0x18) ^ (a2 + *(__int64*)((char*)a1 + a2 - 0x30)));
			v43 = *(__int64*)((char*)a1 + a2 - 0x30) + *(__int64*)((char*)a1 + a2 - 0x38) + v40;
			v44 = v43 + v38;
			v73 = 0x9DDFEA08EB382D69uLL
				* ((0x9DDFEA08EB382D69uLL * (*(__int64*)((char*)a1 + a2 - 0x18) ^ v42 ^ (v42 >> 0x2F))) ^ ((0x9DDFEA08EB382D69uLL * (*(__int64*)((char*)a1 + a2 - 0x18) ^ v42 ^ (v42 >> 0x2F))) >> 0x2F));
			v45 = v40
				+ __ROR8__(
					v40
					+ v38
					- 0x622015F714C7D297LL
					* ((0x9DDFEA08EB382D69uLL * (*(__int64*)((char*)a1 + a2 - 0x18) ^ v42 ^ (v42 >> 0x2F))) ^ ((0x9DDFEA08EB382D69uLL * (*(__int64*)((char*)a1 + a2 - 0x18) ^ v42 ^ (v42 >> 0x2F))) >> 0x2F)),
					0x15)
				+ __ROR8__(v43, 0x2C);
			v46 = v41 + *(__int64*)((char*)a1 + a2 - 0x20) - 0x4B6D499041670D8DLL;
			v47 = *(__int64*)((char*)a1 + a2 - 0x10) + *(__int64*)((char*)a1 + a2 - 0x18) + v46;
			v48 = __ROR8__(v46 + v39 + v38, 0x15);
			v49 = a1 + 6;
			v50 = *a1 - 0x4B6D499041670D8DLL * v38;
			v51 = v47 + v39;
			v52 = v73;
			v53 = v46 + v48 + __ROR8__(v47, 0x2C);
			v72 = a1 + 6;
			v71 = (a2 - 1) & 0xFFFFFFC0;
			while (1)
			{
				v54 = v49[0xFFFFFFFB];
				v55 = v49[0xFFFFFFFD];
				v56 = v50 + v41 + v54 + v44;
				v57 = v49[0xFFFFFFFF];
				v58 = v51 + v52;
				v59 = v49[0xFFFFFFFC];
				v74 = 0xB492B66FBE98F273uLL * __ROR8__(v58, 0x21);
				v60 = v49[0xFFFFFFFA] - 0x4B6D499041670D8DLL * v45;
				v41 = v44 + v57 - 0x4B6D499041670D8DLL * __ROR8__(*v49 + v45 + v41, 0x2A);
				v61 = v54 + v59 + v60;
				v62 = v53 ^ (0xB492B66FBE98F273uLL * __ROR8__(v56, 0x25));
				v44 = v61 + v55;
				v45 = v60 + __ROR8__(v62 + v60 + v55 + v51, 0x15) + __ROR8__(v61, 0x2C);
				v63 = v72[1];
				v64 = v74 + v53 + v72[0xFFFFFFFE];
				v65 = v57 + *v49 + v64;
				v66 = v64 + v63 + v59;
				v52 = v62;
				v49 = v72 + 8;
				v72 += 8;
				v68 = __ROR8__(v65, 0x2C) + __ROR8__(v41 + v66, 0x15) + v64;
				v71 -= 0x40;
				if (!v71)
					break;
				v53 = v68;
				v51 = v65 + v63;
				v50 = v74;
			}
			v69 = v74
				- 0x622015F714C7D297LL
				* ((0x9DDFEA08EB382D69uLL
					* ((0x9DDFEA08EB382D69uLL * (v68 ^ v45)) ^ v68 ^ ((0x9DDFEA08EB382D69uLL * (v68 ^ v45)) >> 0x2F))) ^ ((0x9DDFEA08EB382D69uLL * ((0x9DDFEA08EB382D69uLL * (v68 ^ v45)) ^ v68 ^ ((0x9DDFEA08EB382D69uLL * (v68 ^ v45)) >> 0x2F))) >> 0x2F));
			v67 = v65 + v63;
			v70 = 0x9DDFEA08EB382D69uLL
				* (v69 ^ (v62
					- 0x622015F714C7D297LL
					* ((0x9DDFEA08EB382D69uLL
						* ((0x9DDFEA08EB382D69uLL * (v67 ^ v44)) ^ v67 ^ ((0x9DDFEA08EB382D69uLL * (v67 ^ v44)) >> 0x2F))) ^ ((0x9DDFEA08EB382D69uLL * ((0x9DDFEA08EB382D69uLL * (v67 ^ v44)) ^ v67 ^ ((0x9DDFEA08EB382D69uLL * (v67 ^ v44)) >> 0x2F))) >> 0x2F))
					- 0x4B6D499041670D8DLL * (v41 ^ (v41 >> 0x2F))));
			return 0x9DDFEA08EB382D69uLL
				* ((0x9DDFEA08EB382D69uLL * (v70 ^ v69 ^ (v70 >> 0x2F))) ^ ((0x9DDFEA08EB382D69uLL
					* (v70 ^ v69 ^ (v70 >> 0x2F))) >> 0x2F));
		}
		else
		{
			v23 = *(__int64*)((char*)a1 + a2 - 0x18);
			v24 = *(__int64*)((char*)a1 + a2 - 0x20);
			v25 = *(__int64*)((char*)a1 + a2 - 8);
			v26 = 2 * a2 - 0x651E95C4D06FBFB1LL;
			v27 = *(__int64*)((char*)a1 + a2 - 0x10);
			v28 = a1[1];
			v29 = 0x9AE16A3B2F90404FuLL * *a1;
			v30 = 0x9AE16A3B2F90404FuLL * a1[2];
			v31 = 9 * a1[3];
			v32 = (v24 ^ (v25 - 0x651E95C4D06FBFB1LL * *a1)) + v31 + 1;
			v33 = v23 + __ROR8__(v28, 0x1E);
			v34 = v30 + v31;
			v35 = v30 + v31 + v23;
			v36 = v23 + __ROR8__(v34, 0x2A);
			v37 = v24
				+ v26 * v27
				+ v26
				* (v28
					+ v35
					+ _byteswap_uint64(
						v26
						* (v25
							+ v36
							+ v35
							+ _byteswap_uint64(v26 * (v26 * v27
								+ v32
								+ _byteswap_uint64(v26 * (v32 + v33 + 8 * v33 + __ROR8__(v25 + v29, 0x2B))))))));
			return v36 + v26 * (v37 ^ (v37 >> 0x2F));
		}
	}
	else if (a2 > 0x10)
	{
		v14 = *a1;
		v15 = a1[1];
		v16 = 2 * a2 - 0x651E95C4D06FBFB1LL;
		v17 = v16 * *(__int64*)((char*)a1 + a2 - 8);
		v18 = 0x9AE16A3B2F90404FuLL * *(__int64*)((char*)a1 + v2 - 0x10);
		v14 *= 0xB492B66FBE98F273uLL;
		v19 = v17 + __ROR8__(v15 - 0x651E95C4D06FBFB1LL, 0x12);
		v20 = __ROR8__(v17, 0x1E);
		v21 = v14 + v19;
		v22 = __ROR8__(v15 + v14, 0x2B);
		return v16
			* ((v16 * (v21 ^ (v16 * (v21 ^ (v18 + v20 + v22))) ^ ((v16 * (v21 ^ (v18 + v20 + v22))) >> 0x2F))) ^ ((v16 * (v21 ^ (v16 * (v21 ^ (v18 + v20 + v22))) ^ ((v16 * (v21 ^ (v18 + v20 + v22))) >> 0x2F))) >> 0x2F));
	}
	else if (a2 < 8)
	{
		if (a2 < 4)
		{
			if (a2)
			{
				v13 = (0xC3A5C85C97CB3127uLL * (a2 + 4 * *((unsigned __int8*)a1 + a2 - 1))) ^ (0x9AE16A3B2F90404FuLL
					* *(unsigned __int8*)a1
					- 0x1E95C4D06FBFB100LL
					* *((unsigned __int8*)a1
						+ ((unsigned __int64)a2 >> 1)));
				return 0x9AE16A3B2F90404FuLL * (v13 ^ (v13 >> 0x2F));
			}
			else
			{
				return 0x9AE16A3B2F90404FuLL;
			}
		}
		else
		{
			v10 = *(unsigned int*)((char*)a1 + a2 - 4);
			v11 = 2 * a2 - 0x651E95C4D06FBFB1LL;
			v12 = v11
				* (v10 ^ (v11 * (v10 ^ (a2 + 8LL * *(unsigned int*)a1))) ^ ((v11
					* (v10 ^ (a2
						+ 8
						* (unsigned __int64)*(unsigned int*)a1))) >> 0x2F));
			return v11 * (v12 ^ (v12 >> 0x2F));
		}
	}
	else
	{
		v4 = *(__int64*)((char*)a1 + a2 - 8);
		v5 = (unsigned int)(2 * v2) - 0x651E95C4D06FBFB1LL;
		v6 = *a1 - 0x651E95C4D06FBFB1LL;
		v7 = v5 * (v4 + __ROR8__(v6, 0x19));
		v8 = v5 * (v7 ^ (v6 + v5 * __ROR8__(v4, 0x25)));
		return v5 * ((v5 * (v7 ^ v8 ^ (v8 >> 0x2F))) ^ ((v5 * (v7 ^ v8 ^ (v8 >> 0x2F))) >> 0x2F));
	}
}

```

---
กลุ่ม 3ffff และ อื่นๆ  แต่ ติดลบ offset กลับหลัง 
---

```asm
.text:000000014C8F1020
.text:000000014C8F1020                         ; =============== S U B R O U T I N E =======================================
.text:000000014C8F1020
.text:000000014C8F1020                         ; Attributes: bp-based frame
.text:000000014C8F1020
.text:000000014C8F1020                         sub_14C8F1020   proc near               ; CODE XREF: sub_14C8F12D0+124↓p
.text:000000014C8F1020                                                                 ; sub_14C8F1410+174↓p
.text:000000014C8F1020
.text:000000014C8F1020                         var_60          = byte ptr -60h
.text:000000014C8F1020                         var_50          = xmmword ptr -50h
.text:000000014C8F1020                         var_40          = byte ptr -40h
.text:000000014C8F1020                         var_30          = xmmword ptr -30h
.text:000000014C8F1020                         var_20          = xmmword ptr -20h
.text:000000014C8F1020                         var_C           = byte ptr -0Ch
.text:000000014C8F1020                         var_8           = qword ptr -8
.text:000000014C8F1020                         arg_10          = qword ptr  40h
.text:000000014C8F1020
.text:000000014C8F1020 48 89 5C 24 18                          mov     [rsp+18h], rbx
.text:000000014C8F1025 55                                      push    rbp
.text:000000014C8F1026 56                                      push    rsi
.text:000000014C8F1027 57                                      push    rdi
.text:000000014C8F1028 41 56                                   push    r14
.text:000000014C8F102A 41 57                                   push    r15
.text:000000014C8F102C 48 8B EC                                mov     rbp, rsp
.text:000000014C8F102F 48 81 EC 80 00 00 00                    sub     rsp, 80h        ; Integer Subtraction
.text:000000014C8F1036 48 8B 05 03 43 4D 0A                    mov     rax, cs:off_156DC5340
.text:000000014C8F103D 48 33 C4                                xor     rax, rsp        ; Logical Exclusive OR
.text:000000014C8F1040 48 89 45 F8                             mov     [rbp-8], rax
.text:000000014C8F1044 80 3D A1 AE AE 0A 00                    cmp     cs:byte_1573DBEEC, 0 ; Compare Two Operands
.text:000000014C8F104B 45 8B F9                                mov     r15d, r9d
.text:000000014C8F104E 41 8B D8                                mov     ebx, r8d
.text:000000014C8F1051 48 8B FA                                mov     rdi, rdx
.text:000000014C8F1054 4C 8B F1                                mov     r14, rcx
.text:000000014C8F1057 74 09                                   jz      short loc_14C8F1062 ; Jump if Zero (ZF=1)
.text:000000014C8F1059 48 8D 35 60 B1 AE 0A                    lea     rsi, unk_1573DC1C0 ; Load Effective Address
.text:000000014C8F1060 EB 16                                   jmp     short loc_14C8F1078 ; Jump
.text:000000014C8F1062                         ; ---------------------------------------------------------------------------
.text:000000014C8F1062
.text:000000014C8F1062                         loc_14C8F1062:                          ; CODE XREF: sub_14C8F1020+37↑j
.text:000000014C8F1062 48 8D 0D 57 B1 AE 0A                    lea     rcx, unk_1573DC1C0 ; Load Effective Address
.text:000000014C8F1069 E8 22 46 FE FF                          call    sub_14C8D5690   ; Call Procedure
.text:000000014C8F106E 48 8B F0                                mov     rsi, rax
.text:000000014C8F1071 C6 05 74 AE AE 0A 01                    mov     cs:byte_1573DBEEC, 1
.text:000000014C8F1078
.text:000000014C8F1078                         loc_14C8F1078:                          ; CODE XREF: sub_14C8F1020+40↑j
.text:000000014C8F1078 4C 8B 47 08                             mov     r8, [rdi+8]
.text:000000014C8F107C 83 FB 01                                cmp     ebx, 1          ; Compare Two Operands
.text:000000014C8F107F 0F 85 A2 00 00 00                       jnz     loc_14C8F1127   ; Jump if Not Zero (ZF=0)
.text:000000014C8F1085 0F 10 0F                                movups  xmm1, xmmword ptr [rdi] ; Move Unaligned Four Packed Single-FP
.text:000000014C8F1088 B9 24 00 01 00                          mov     ecx, 10024h
.text:000000014C8F108D C6 45 A0 00                             mov     byte ptr [rbp-60h], 0
.text:000000014C8F1091 49 8B C0                                mov     rax, r8
.text:000000014C8F1094 44 89 45 D8                             mov     [rbp-28h], r8d
.text:000000014C8F1098 48 C1 E8 20                             shr     rax, 20h        ; Shift Logical Right
.text:000000014C8F109C 66 48 0F 7E CA                          movq    rdx, xmm1       ; Move 64 bits
.text:000000014C8F10A1 84 C0                                   test    al, al          ; Logical Compare
.text:000000014C8F10A3 0F 29 4D B0                             movaps  [rbp+var_50], xmm1 ; Move Aligned Four Packed Single-FP
.text:000000014C8F10A7 0F B7 45 BD                             movzx   eax, word ptr [rbp-43h] ; Move with Zero-Extend
.text:000000014C8F10AB BB 20 00 01 00                          mov     ebx, 10020h
.text:000000014C8F10B0 0F 45 D9                                cmovnz  ebx, ecx        ; Move if Not Zero (ZF=0)
.text:000000014C8F10B3 66 0F 73 D9 0F                          psrldq  xmm1, 0Fh       ; Shift Double Quadword Right Logical
.text:000000014C8F10B8 49 8B C8                                mov     rcx, r8
.text:000000014C8F10BB 66 89 45 DD                             mov     [rbp-23h], ax
.text:000000014C8F10BF 48 C1 E9 20                             shr     rcx, 20h        ; Shift Logical Right
.text:000000014C8F10C3 66 0F 7E C8                             movd    eax, xmm1       ; Move 32 bits
.text:000000014C8F10C7 48 89 55 D0                             mov     [rbp-30h], rdx
.text:000000014C8F10CB 88 4D DC                                mov     [rbp-24h], cl
.text:000000014C8F10CE 88 45 DF                                mov     [rbp-21h], al
.text:000000014C8F10D1 84 C9                                   test    cl, cl          ; Logical Compare
.text:000000014C8F10D3 75 0B                                   jnz     short loc_14C8F10E0 ; Jump if Not Zero (ZF=0)
.text:000000014C8F10D5 48 8D 4D B0                             lea     rcx, [rbp-50h]  ; Load Effective Address
.text:000000014C8F10D9 E8 A2 34 FE FF                          call    sub_14C8D4580   ; Call Procedure
.text:000000014C8F10DE EB 09                                   jmp     short loc_14C8F10E9 ; Jump
.text:000000014C8F10E0                         ; ---------------------------------------------------------------------------
.text:000000014C8F10E0
.text:000000014C8F10E0                         loc_14C8F10E0:                          ; CODE XREF: sub_14C8F1020+B3↑j
.text:000000014C8F10E0 48 8D 4D C0                             lea     rcx, [rbp-40h]  ; Load Effective Address
.text:000000014C8F10E4 E8 87 35 FE FF                          call    sub_14C8D4670   ; Call Procedure
.text:000000014C8F10E9
.text:000000014C8F10E9                         loc_14C8F10E9:                          ; CODE XREF: sub_14C8F1020+BE↑j
.text:000000014C8F10E9 0F 10 00                                movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.text:000000014C8F10EC 4C 8D 4D A0                             lea     r9, [rbp-60h]   ; Load Effective Address
.text:000000014C8F10F0 C6 45 F4 00                             mov     byte ptr [rbp-0Ch], 0
.text:000000014C8F10F4 4C 8D 45 D0                             lea     r8, [rbp-30h]   ; Load Effective Address
.text:000000014C8F10F8 66 0F 7E C1                             movd    ecx, xmm0       ; Move 32 bits
.text:000000014C8F10FC 48 8D 55 B0                             lea     rdx, [rbp-50h]  ; Load Effective Address
.text:000000014C8F1100 0F 11 45 E0                             movups  xmmword ptr [rbp-20h], xmm0 ; Move Unaligned Four Packed Single-FP
.text:000000014C8F1104 48 81 C1 01 04 00 00                    add     rcx, 401h       ; Add
.text:000000014C8F110B 48 C1 E1 06                             shl     rcx, 6          ; Shift Logical Left
.text:000000014C8F110F 48 03 CE                                add     rcx, rsi        ; Add
.text:000000014C8F1112 E8 09 C1 FF FF                          call    sub_14C8ED220   ; Call Procedure
.text:000000014C8F1117 0F B6 45 A0                             movzx   eax, byte ptr [rbp-60h] ; Move with Zero-Extend
.text:000000014C8F111B F0 01 04 33                             lock add [rbx+rsi], eax ; Add
.text:000000014C8F111F 8B 5D B0                                mov     ebx, [rbp-50h]
.text:000000014C8F1122 E9 7C 01 00 00                          jmp     loc_14C8F12A3   ; Jump
.text:000000014C8F1127                         ; ---------------------------------------------------------------------------
.text:000000014C8F1127
.text:000000014C8F1127                         loc_14C8F1127:                          ; CODE XREF: sub_14C8F1020+5F↑j
.text:000000014C8F1127 85 DB                                   test    ebx, ebx        ; Logical Compare
.text:000000014C8F1129 75 71                                   jnz     short loc_14C8F119C ; Jump if Not Zero (ZF=0)
.text:000000014C8F112B 0F 10 07                                movups  xmm0, xmmword ptr [rdi] ; Move Unaligned Four Packed Single-FP
.text:000000014C8F112E 49 8B C0                                mov     rax, r8
.text:000000014C8F1131 48 C1 E8 20                             shr     rax, 20h        ; Shift Logical Right
.text:000000014C8F1135 66 48 0F 7E C2                          movq    rdx, xmm0       ; Move 64 bits
.text:000000014C8F113A 0F 11 45 D0                             movups  xmmword ptr [rbp-30h], xmm0 ; Move Unaligned Four Packed Single-FP
.text:000000014C8F113E 84 C0                                   test    al, al          ; Logical Compare
.text:000000014C8F1140 75 0B                                   jnz     short loc_14C8F114D ; Jump if Not Zero (ZF=0)
.text:000000014C8F1142 48 8D 4D C0                             lea     rcx, [rbp-40h]  ; Load Effective Address
.text:000000014C8F1146 E8 35 34 FE FF                          call    sub_14C8D4580   ; Call Procedure
.text:000000014C8F114B EB 09                                   jmp     short loc_14C8F1156 ; Jump
.text:000000014C8F114D                         ; ---------------------------------------------------------------------------
.text:000000014C8F114D
.text:000000014C8F114D                         loc_14C8F114D:                          ; CODE XREF: sub_14C8F1020+120↑j
.text:000000014C8F114D 48 8D 4D B0                             lea     rcx, [rbp-50h]  ; Load Effective Address
.text:000000014C8F1151 E8 1A 35 FE FF                          call    sub_14C8D4670   ; Call Procedure
.text:000000014C8F1156
.text:000000014C8F1156                         loc_14C8F1156:                          ; CODE XREF: sub_14C8F1020+12B↑j
.text:000000014C8F1156 0F 10 00                                movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.text:000000014C8F1159 C6 45 F4 00                             mov     byte ptr [rbp-0Ch], 0
.text:000000014C8F115D 66 0F 7E C7                             movd    edi, xmm0       ; Move 32 bits
.text:000000014C8F1161 0F 11 45 E0                             movups  [rbp+var_20], xmm0 ; Move Unaligned Four Packed Single-FP
.text:000000014C8F1165 48 81 C7 01 04 00 00                    add     rdi, 401h       ; Add
.text:000000014C8F116C 48 C1 E7 06                             shl     rdi, 6          ; Shift Logical Left
.text:000000014C8F1170 48 03 FE                                add     rdi, rsi        ; Add
.text:000000014C8F1173 48 8B CF                                mov     rcx, rdi
.text:000000014C8F1176 FF 15 2C A3 C8 03                       call    cs:qword_15057B4A8 ; Indirect Call Near Procedure
.text:000000014C8F117C 48 8D 55 D0                             lea     rdx, [rbp-30h]  ; Load Effective Address
.text:000000014C8F1180 48 8B CF                                mov     rcx, rdi
.text:000000014C8F1183 E8 88 24 00 00                          call    sub_14C8F3610   ; Call Procedure
.text:000000014C8F1188 48 8B CF                                mov     rcx, rdi
.text:000000014C8F118B 8B 18                                   mov     ebx, [rax]
.text:000000014C8F118D FF 15 0D A3 C8 03                       call    cs:qword_15057B4A0 ; Indirect Call Near Procedure
.text:000000014C8F1193 0F BA F3 1F                             btr     ebx, 1Fh        ; Bit Test and Reset
.text:000000014C8F1197 E9 07 01 00 00                          jmp     loc_14C8F12A3   ; Jump
.text:000000014C8F119C                         ; ---------------------------------------------------------------------------
.text:000000014C8F119C
.text:000000014C8F119C                         loc_14C8F119C:                          ; CODE XREF: sub_14C8F1020+109↑j
.text:000000014C8F119C 0F 10 0F                                movups  xmm1, xmmword ptr [rdi] ; Move Unaligned Four Packed Single-FP
.text:000000014C8F119F 48 8B 47 08                             mov     rax, [rdi+8]
.text:000000014C8F11A3 B9 24 00 01 00                          mov     ecx, 10024h
.text:000000014C8F11A8 48 C1 E8 20                             shr     rax, 20h        ; Shift Logical Right
.text:000000014C8F11AC BB 20 00 01 00                          mov     ebx, 10020h
.text:000000014C8F11B1 84 C0                                   test    al, al          ; Logical Compare
.text:000000014C8F11B3 0F 29 4D B0                             movaps  xmmword ptr [rbp-50h], xmm1 ; Move Aligned Four Packed Single-FP
.text:000000014C8F11B7 0F B7 45 BD                             movzx   eax, word ptr [rbp-43h] ; Move with Zero-Extend
.text:000000014C8F11BB 66 48 0F 7E CA                          movq    rdx, xmm1       ; Move 64 bits
.text:000000014C8F11C0 0F 45 D9                                cmovnz  ebx, ecx        ; Move if Not Zero (ZF=0)
.text:000000014C8F11C3 66 0F 73 D9 0F                          psrldq  xmm1, 0Fh       ; Shift Double Quadword Right Logical
.text:000000014C8F11C8 49 8B C8                                mov     rcx, r8
.text:000000014C8F11CB 66 89 45 DD                             mov     [rbp-23h], ax
.text:000000014C8F11CF 48 C1 E9 20                             shr     rcx, 20h        ; Shift Logical Right
.text:000000014C8F11D3 66 0F 7E C8                             movd    eax, xmm1       ; Move 32 bits
.text:000000014C8F11D7 C6 45 A0 00                             mov     byte ptr [rbp-60h], 0
.text:000000014C8F11DB 48 89 55 D0                             mov     [rbp-30h], rdx
.text:000000014C8F11DF 44 89 45 D8                             mov     [rbp-28h], r8d
.text:000000014C8F11E3 88 4D DC                                mov     [rbp-24h], cl
.text:000000014C8F11E6 88 45 DF                                mov     [rbp-21h], al
.text:000000014C8F11E9 84 C9                                   test    cl, cl          ; Logical Compare
.text:000000014C8F11EB 75 0B                                   jnz     short loc_14C8F11F8 ; Jump if Not Zero (ZF=0)
.text:000000014C8F11ED 48 8D 4D C0                             lea     rcx, [rbp-40h]  ; Load Effective Address
.text:000000014C8F11F1 E8 8A 33 FE FF                          call    sub_14C8D4580   ; Call Procedure
.text:000000014C8F11F6 EB 09                                   jmp     short loc_14C8F1201 ; Jump
.text:000000014C8F11F8                         ; ---------------------------------------------------------------------------
.text:000000014C8F11F8
.text:000000014C8F11F8                         loc_14C8F11F8:                          ; CODE XREF: sub_14C8F1020+1CB↑j
.text:000000014C8F11F8 48 8D 4D B0                             lea     rcx, [rbp-50h]  ; Load Effective Address
.text:000000014C8F11FC E8 6F 34 FE FF                          call    sub_14C8D4670   ; Call Procedure
.text:000000014C8F1201
.text:000000014C8F1201                         loc_14C8F1201:                          ; CODE XREF: sub_14C8F1020+1D6↑j
.text:000000014C8F1201 0F 10 00                                movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.text:000000014C8F1204 4C 8D 4D A0                             lea     r9, [rbp-60h]   ; Load Effective Address
.text:000000014C8F1208 C6 45 F4 00                             mov     byte ptr [rbp-0Ch], 0
.text:000000014C8F120C 4C 8D 45 D0                             lea     r8, [rbp-30h]   ; Load Effective Address
.text:000000014C8F1210 66 0F 7E C1                             movd    ecx, xmm0       ; Move 32 bits
.text:000000014C8F1214 48 8D 55 B0                             lea     rdx, [rbp-50h]  ; Load Effective Address
.text:000000014C8F1218 0F 11 45 E0                             movups  xmmword ptr [rbp-20h], xmm0 ; Move Unaligned Four Packed Single-FP
.text:000000014C8F121C 48 81 C1 01 04 00 00                    add     rcx, 401h       ; Add
.text:000000014C8F1223 48 C1 E1 06                             shl     rcx, 6          ; Shift Logical Left
.text:000000014C8F1227 48 03 CE                                add     rcx, rsi        ; Add
.text:000000014C8F122A E8 F1 BF FF FF                          call    sub_14C8ED220   ; Call Procedure
.text:000000014C8F122F 0F B6 45 A0                             movzx   eax, byte ptr [rbp-60h] ; Move with Zero-Extend
.text:000000014C8F1233 F0 01 04 33                             lock add [rbx+rsi], eax ; Add
.text:000000014C8F1237 8B 5D B0                                mov     ebx, [rbp-50h]
.text:000000014C8F123A 8B D3                                   mov     edx, ebx
.text:000000014C8F123C 0F 10 0F                                movups  xmm1, xmmword ptr [rdi] ; Move Unaligned Four Packed Single-FP
.text:000000014C8F123F 48 8B 7F 08                             mov     rdi, [rdi+8]
.text:000000014C8F1243 8B C3                                   mov     eax, ebx
.text:000000014C8F1245 25 FF FF 03 00                          and     eax, 3FFFFh     ; Logical AND
.text:000000014C8F124A C1 EA 12                                shr     edx, 12h        ; Shift Logical Right
.text:000000014C8F124D 89 45 B4                                mov     [rbp-4Ch], eax
.text:000000014C8F1250 89 55 B0                                mov     [rbp-50h], edx
.text:000000014C8F1253 48 8B 45 B0                             mov     rax, [rbp-50h]
.text:000000014C8F1257 48 C1 E8 20                             shr     rax, 20h        ; Shift Logical Right
.text:000000014C8F125B 44 8B C7                                mov     r8d, edi
.text:000000014C8F125E 8D 0C 00                                lea     ecx, [rax+rax]  ; Load Effective Address
.text:000000014C8F1261 48 8B 44 D6 08                          mov     rax, [rsi+rdx*8+8]
.text:000000014C8F1266 48 8D 71 02                             lea     rsi, [rcx+2]    ; Load Effective Address
.text:000000014C8F126A 66 48 0F 7E CA                          movq    rdx, xmm1       ; Move 64 bits
.text:000000014C8F126F 48 03 F0                                add     rsi, rax        ; Add
.text:000000014C8F1272 48 8B C7                                mov     rax, rdi
.text:000000014C8F1275 48 C1 E8 20                             shr     rax, 20h        ; Shift Logical Right
.text:000000014C8F1279 48 8B CE                                mov     rcx, rsi
.text:000000014C8F127C 84 C0                                   test    al, al          ; Logical Compare
.text:000000014C8F127E 74 14                                   jz      short loc_14C8F1294 ; Jump if Zero (ZF=1)
.text:000000014C8F1280 4D 03 C0                                add     r8, r8          ; Add
.text:000000014C8F1283 E8 B5 55 97 03                          call    sub_15026683D   ; Call Procedure
.text:000000014C8F1288 8B D7                                   mov     edx, edi
.text:000000014C8F128A 48 8B CE                                mov     rcx, rsi
.text:000000014C8F128D E8 EE F1 FE FF                          call    sub_14C8E0480   ; Call Procedure
.text:000000014C8F1292 EB 0F                                   jmp     short loc_14C8F12A3 ; Jump
.text:000000014C8F1294                         ; ---------------------------------------------------------------------------
.text:000000014C8F1294
.text:000000014C8F1294                         loc_14C8F1294:                          ; CODE XREF: sub_14C8F1020+25E↑j
.text:000000014C8F1294 E8 A4 55 97 03                          call    sub_15026683D   ; Call Procedure
.text:000000014C8F1299 8B D7                                   mov     edx, edi
.text:000000014C8F129B 48 8B CE                                mov     rcx, rsi
.text:000000014C8F129E E8 CD EF FE FF                          call    sub_14C8E0270   ; Call Procedure
.text:000000014C8F12A3
.text:000000014C8F12A3                         loc_14C8F12A3:                          ; CODE XREF: sub_14C8F1020+102↑j
.text:000000014C8F12A3                                                                 ; sub_14C8F1020+177↑j ...
.text:000000014C8F12A3 41 89 1E                                mov     [r14], ebx
.text:000000014C8F12A6 49 8B C6                                mov     rax, r14
.text:000000014C8F12A9 45 89 7E 04                             mov     [r14+4], r15d
.text:000000014C8F12AD 48 8B 4D F8                             mov     rcx, [rbp-8]
.text:000000014C8F12B1 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014C8F12B4 E8 A7 EB 96 03                          call    __security_check_cookie ; Call Procedure
.text:000000014C8F12B9 48 8B 9C 24 C0 00 00 00                 mov     rbx, [rsp+0C0h]
.text:000000014C8F12C1 48 81 C4 80 00 00 00                    add     rsp, 80h        ; Add
.text:000000014C8F12C8 41 5F                                   pop     r15
.text:000000014C8F12CA 41 5E                                   pop     r14
.text:000000014C8F12CC 5F                                      pop     rdi
.text:000000014C8F12CD 5E                                      pop     rsi
.text:000000014C8F12CE 5D                                      pop     rbp
.text:000000014C8F12CF C3                                      retn                    ; Return Near from Procedure
.text:000000014C8F12CF                         sub_14C8F1020   endp
.text:000000014C8F12CF

```

```c


int* __fastcall sub_14C8F1020(int* a1, __m128i* a2, int a3, int a4)
{
	_QWORD* v8; // rsi
	__int64 v9; // r8
	__m128i v10; // xmm1
	__int64 v11; // rbx
	__m128i* v12; // rax
	__m128i v13; // xmm0
	int v14; // ebx
	__int64 v15; // rdx
	__m128i* v16; // rax
	__m128i v17; // xmm0
	char* v18; // rdi
	int v19; // ebx
	__m128i v20; // xmm1
	__int64 v21; // rbx
	__m128i* v22; // rax
	__m128i v23; // xmm0
	__m128i v24; // xmm1
	__int64 v25; // rdi
	__int64 v26; // rsi
	int* result; // rax
	char v28[16]; // [rsp+20h] [rbp-60h] BYREF
	__m128i v29; // [rsp+30h] [rbp-50h] BYREF
	char v30[16]; // [rsp+40h] [rbp-40h] BYREF
	__m128i v31; // [rsp+50h] [rbp-30h] BYREF
	__m128i v32; // [rsp+60h] [rbp-20h]
	char v33; // [rsp+74h] [rbp-Ch]

	if (byte_1573DBEEC)
	{
		v8 = &unk_1573DC1C0;
	}
	else
	{
		v8 = (_QWORD*)sub_14C8D5690(&unk_1573DC1C0);
		byte_1573DBEEC = 1;
	}
	v9 = a2->m128i_i64[1];
	if (a3 == 1)
	{
		v10 = *a2;
		v28[0] = 0;
		v31.m128i_i32[2] = v9;
		v29 = v10;
		v11 = 0x10020LL;
		if (BYTE4(v9))
			v11 = 0x10024LL;
		*(__int16*)((char*)&v31.m128i_i16[6] + 1) = (unsigned __int32)v10.m128i_i32[3] >> 8;
		v31.m128i_i64[0] = v10.m128i_i64[0];
		v31.m128i_i8[0xC] = BYTE4(v9);
		v31.m128i_i8[0xF] = _mm_cvtsi128_si32(_mm_srli_si128(v10, 0xF));
		if (BYTE4(v9))
			v12 = (__m128i*)sub_14C8D4670((__int64)v30, v10.m128i_i64[0], v9);
		else
			v12 = (__m128i*)sub_14C8D4580((__int64)&v29, v10.m128i_i64[0], v9);
		v13 = *v12;
		v33 = 0;
		v32 = v13;
		sub_14C8ED220((__int64)&v8[8 * (unsigned int)_mm_cvtsi128_si32(v13) + 0x2008], v29.m128i_i32, (__int64)&v31, v28);
		_InterlockedAdd((volatile signed __int32*)((char*)v8 + v11), (unsigned __int8)v28[0]);
		v14 = v29.m128i_i32[0];
	}
	else if (a3)
	{
		v20 = *a2;
		v21 = 0x10020LL;
		v29 = *a2;
		if (v29.m128i_i8[0xC])
			v21 = 0x10024LL;
		*(__int16*)((char*)&v31.m128i_i16[6] + 1) = (unsigned __int32)v20.m128i_i32[3] >> 8;
		v28[0] = 0;
		v31.m128i_i64[0] = v20.m128i_i64[0];
		v31.m128i_i32[2] = v9;
		v31.m128i_i8[0xC] = BYTE4(v9);
		v31.m128i_i8[0xF] = _mm_cvtsi128_si32(_mm_srli_si128(v20, 0xF));
		if (BYTE4(v9))
			v22 = (__m128i*)sub_14C8D4670((__int64)&v29, v20.m128i_i64[0], v9);
		else
			v22 = (__m128i*)sub_14C8D4580((__int64)v30, v20.m128i_i64[0], v9);
		v23 = *v22;
		v33 = 0;
		v32 = v23;
		sub_14C8ED220((__int64)&v8[8 * (unsigned int)_mm_cvtsi128_si32(v23) + 0x2008], v29.m128i_i32, (__int64)&v31, v28);
		_InterlockedAdd((volatile signed __int32*)((char*)v8 + v21), (unsigned __int8)v28[0]);
		v14 = v29.m128i_i32[0];
		v24 = *a2;
		v25 = a2->m128i_i64[1];
		v29.m128i_i32[1] = v29.m128i_i32[0] & 0x3FFFF;
		v29.m128i_i32[0] = (unsigned __int32)v29.m128i_i32[0] >> 0x12;
		v26 = v8[v29.m128i_u32[0] + 1] + (unsigned int)(2 * v29.m128i_i32[1]) + 2LL;
		if (BYTE4(v25))
		{
			sub_15026683D(v26, v24.m128i_i64[0], 2LL * (unsigned int)v25);
			sub_14C8E0480(v26, (unsigned int)v25);
		}
		else
		{
			sub_15026683D(v26, v24.m128i_i64[0], (unsigned int)v25);
			sub_14C8E0270(v26, (unsigned int)v25);
		}
	}
	else
	{
		v15 = a2->m128i_i64[0];
		v31 = *a2;
		if (BYTE4(v9))
			v16 = (__m128i*)sub_14C8D4670((__int64)&v29, v15, v9);
		else
			v16 = (__m128i*)sub_14C8D4580((__int64)v30, v15, v9);
		v17 = *v16;
		v33 = 0;
		v32 = v17;
		v18 = (char*)&v8[8 * (unsigned int)_mm_cvtsi128_si32(v17) + 0x2008];
		MEMORY[0x7FFBE2E16D20](v18);
		v19 = *(_DWORD*)sub_14C8F3610(v18, &v31);
		MEMORY[0x7FFBE2E16C60](v18);
		v14 = v19 & 0x7FFFFFFF;
	}
	*a1 = v14;
	result = a1;
	a1[1] = a4;
	return result;
}
__int64 __fastcall sub_14C8E0480(_WORD* a1, unsigned int a2)
{
	__int64 result; // rax

	result = 9 * (a2 / 9);
	switch (a2 % 9)
	{
	case 0u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int16)(a2 + (a2 & 0x1F) + 0x80) | 0x7F;
				result = (unsigned int)(result + 2);
			} while ((unsigned int)result < a2);
		}
		break;
	case 1u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int16)(a2 + (a2 ^ 0xDF) + 0x80) | 0x7F;
				result = (unsigned int)(result + 2);
			} while ((unsigned int)result < a2);
		}
		break;
	case 2u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int16)(a2 + (a2 | 0xCF) + 0x80) | 0x7F;
				result = (unsigned int)(result + 2);
			} while ((unsigned int)result < a2);
		}
		break;
	case 3u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int16)(0x21 * a2 + 0x80) | 0x7F;
				result = (unsigned int)(result + 2);
			} while ((unsigned int)result < a2);
		}
		break;
	case 4u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int16)(a2 + (a2 >> 2) + 0x80) | 0x7F;
				result = (unsigned int)(result + 2);
			} while ((unsigned int)result < a2);
		}
		break;
	case 5u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int16)(3 * a2 + 0x85) | 0x7F;
				result = (unsigned int)(result + 2);
			} while ((unsigned int)result < a2);
		}
		break;
	case 6u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int16)(a2 + ((4 * a2) | 5) + 0x80) | 0x7F;
				result = (unsigned int)(result + 2);
			} while ((unsigned int)result < a2);
		}
		break;
	case 7u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int16)(a2 + ((a2 >> 4) | 7) + 0x80) | 0x7F;
				result = (unsigned int)(result + 2);
			} while ((unsigned int)result < a2);
		}
		break;
	case 8u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int16)(a2 + (a2 ^ 0xC) + 0x80) | 0x7F;
				result = (unsigned int)(result + 2);
			} while ((unsigned int)result < a2);
		}
		break;
	default:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int16)(a2 + (a2 ^ 0x40) + 0x80) | 0x7F;
				result = (unsigned int)(result + 2);
			} while ((unsigned int)result < a2);
		}
		break;
	}
	return result;
}
__int64 __fastcall sub_14C8E0270(_BYTE* a1, unsigned int a2)
{
	__int64 result; // rax

	result = 9 * (a2 / 9);
	switch (a2 % 9)
	{
	case 0u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int8)(a2 + (a2 & 0x1F) + 0x80) | 0x7F;
				result = (unsigned int)(result + 1);
			} while ((unsigned int)result < a2);
		}
		break;
	case 1u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int8)(a2 + (a2 ^ 0xDF) + 0x80) | 0x7F;
				result = (unsigned int)(result + 1);
			} while ((unsigned int)result < a2);
		}
		break;
	case 2u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int8)(a2 + (a2 | 0xCF) + 0x80) | 0x7F;
				result = (unsigned int)(result + 1);
			} while ((unsigned int)result < a2);
		}
		break;
	case 3u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int8)(0x21 * a2 + 0x80) | 0x7F;
				result = (unsigned int)(result + 1);
			} while ((unsigned int)result < a2);
		}
		break;
	case 4u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int8)(a2 + (a2 >> 2) + 0x80) | 0x7F;
				result = (unsigned int)(result + 1);
			} while ((unsigned int)result < a2);
		}
		break;
	case 5u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int8)(3 * (a2 - 0x29)) | 0x7F;
				result = (unsigned int)(result + 1);
			} while ((unsigned int)result < a2);
		}
		break;
	case 6u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int8)(a2 + ((4 * a2) | 5) + 0x80) | 0x7F;
				result = (unsigned int)(result + 1);
			} while ((unsigned int)result < a2);
		}
		break;
	case 7u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int8)(a2 + ((a2 >> 4) | 7) + 0x80) | 0x7F;
				result = (unsigned int)(result + 1);
			} while ((unsigned int)result < a2);
		}
		break;
	case 8u:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int8)(a2 + (a2 ^ 0xC) + 0x80) | 0x7F;
				result = (unsigned int)(result + 1);
			} while ((unsigned int)result < a2);
		}
		break;
	default:
		if (*a1)
		{
			result = 0LL;
			do
			{
				a1[result] ^= (unsigned __int8)(a2 + (a2 ^ 0x40) + 0x80) | 0x7F;
				result = (unsigned int)(result + 1);
			} while ((unsigned int)result < a2);
		}
		break;
	}
	return result;
}
__int64 __fastcall sub_14C8F3610(__int64 a1, __int64 a2)
{
	unsigned int v3; // r14d
	__int64 v5; // rax
	__int64 v6; // rbx
	int v7; // r8d
	__int64 i; // rdi
	_WORD* v9; // rcx
	__int64 v10; // rax
	__int128 v12; // [rsp+20h] [rbp-18h] BYREF

	v3 = *(_DWORD*)(a1 + 0xC);
	v5 = *(_QWORD*)(a1 + 0x10);
	v6 = v3 & *(_DWORD*)(a2 + 0x14);
	v7 = *(_DWORD*)(v5 + 4 * v6);
	for (i = v5 + 4 * v6; v7; i = v10 + 4 * v6)
	{
		if ((v7 & 0x80000000) == *(_DWORD*)(a2 + 0x18))
		{
			v9 = (_WORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 0x18) + 8 * ((unsigned __int64)(v7 & 0x7FFFFFFF) >> 0x12) + 8)
				+ 2 * (v7 & 0x3FFFFu));
			if (*v9 == *(_WORD*)(a2 + 0x1C))
			{
				v12 = *(_OWORD*)a2;
				if ((unsigned __int8)sub_14C8D4170(v9, &v12))
					break;
			}
		}
		v10 = *(_QWORD*)(a1 + 0x10);
		v6 = v3 & ((_DWORD)v6 + 1);
		v7 = *(_DWORD*)(v10 + 4 * v6);
	}
	return i;
}

```

