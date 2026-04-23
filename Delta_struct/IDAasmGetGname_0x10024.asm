sub_14C8F15C0
sub_14C8F15C0                                                      ; =============== S U B R O U T I N E =======================================
sub_14C8F15C0
sub_14C8F15C0
sub_14C8F15C0                                                      sub_14C8F15C0   proc near               ; CODE XREF: sub_14C8F41E0+4E↓p
sub_14C8F15C0                                                                                              ; sub_14C8F41E0+96↓p
sub_14C8F15C0
sub_14C8F15C0                                                      arg_0           = qword ptr  8
sub_14C8F15C0                                                      arg_8           = qword ptr  10h
sub_14C8F15C0                                                      arg_10          = qword ptr  18h
sub_14C8F15C0
sub_14C8F15C0      48 89 5C 24 08                                                  mov     [rsp+8], rbx
sub_14C8F15C0+5    48 89 74 24 10                                                  mov     [rsp+10h], rsi
sub_14C8F15C0+A    48 89 7C 24 18                                                  mov     [rsp+18h], rdi
sub_14C8F15C0+F    44 0F B7 5A 06                                                  movzx   r11d, word ptr [rdx+6] ; Move with Zero-Extend
sub_14C8F15C0+14   45 33 D2                                                        xor     r10d, r10d      ; Logical Exclusive OR
sub_14C8F15C0+17   48 8B FA                                                        mov     rdi, rdx
sub_14C8F15C0+1A   48 8B F1                                                        mov     rsi, rcx
sub_14C8F15C0+1D   66 45 3B D3                                                     cmp     r10w, r11w      ; Compare Two Operands
sub_14C8F15C0+21   73 32                                                           jnb     short loc_14C8F1615 ; Jump if Not Below (CF=0)
sub_14C8F15C0+23   48 8D 9A 14 01 00 00                                            lea     rbx, [rdx+114h] ; Load Effective Address
sub_14C8F15C0+2A   4C 8B CB                                                        mov     r9, rbx
sub_14C8F15C0+2D   0F 1F 00                                                        nop     dword ptr [rax] ; No Operation
sub_14C8F15C0+30
sub_14C8F15C0+30                                                   loc_14C8F15F0:                          ; CODE XREF: sub_14C8F15C0+53↓j
sub_14C8F15C0+30   41 8B 09                                                        mov     ecx, [r9]
sub_14C8F15C0+33   49 8B D1                                                        mov     rdx, r9
sub_14C8F15C0+36   48 2B D3                                                        sub     rdx, rbx        ; Integer Subtraction
sub_14C8F15C0+39   4C 3B C1                                                        cmp     r8, rcx         ; Compare Two Operands
sub_14C8F15C0+3C   72 0B                                                           jb      short loc_14C8F1609 ; Jump if Below (CF=1)
sub_14C8F15C0+3E   41 8B 41 04                                                     mov     eax, [r9+4]
sub_14C8F15C0+42   03 C1                                                           add     eax, ecx        ; Add
sub_14C8F15C0+44   4C 3B C0                                                        cmp     r8, rax         ; Compare Two Operands
sub_14C8F15C0+47   72 1E                                                           jb      short loc_14C8F1627 ; Jump if Below (CF=1)
sub_14C8F15C0+49
sub_14C8F15C0+49                                                   loc_14C8F1609:                          ; CODE XREF: sub_14C8F15C0+3C↑j
sub_14C8F15C0+49   49 FF C2                                                        inc     r10             ; Increment by 1
sub_14C8F15C0+4C   49 83 C1 28                                                     add     r9, 28h ; '('   ; Add
sub_14C8F15C0+50   4D 3B D3                                                        cmp     r10, r11        ; Compare Two Operands
sub_14C8F15C0+53   72 DB                                                           jb      short loc_14C8F15F0 ; Jump if Below (CF=1)
sub_14C8F15C0+55
sub_14C8F15C0+55                                                   loc_14C8F1615:                          ; CODE XREF: sub_14C8F15C0+21↑j
sub_14C8F15C0+55   33 C0                                                           xor     eax, eax        ; Logical Exclusive OR
sub_14C8F15C0+57   48 8B 5C 24 08                                                  mov     rbx, [rsp+8]
sub_14C8F15C0+5C   48 8B 74 24 10                                                  mov     rsi, [rsp+10h]
sub_14C8F15C0+61   48 8B 7C 24 18                                                  mov     rdi, [rsp+18h]
sub_14C8F15C0+66   C3                                                              retn                    ; Return Near from Procedure
sub_14C8F15C0+67                                                   ; ---------------------------------------------------------------------------
sub_14C8F15C0+67
sub_14C8F15C0+67                                                   loc_14C8F1627:                          ; CODE XREF: sub_14C8F15C0+47↑j
sub_14C8F15C0+67   8B 84 3A 1C 01 00 00                                            mov     eax, [rdx+rdi+11Ch]
sub_14C8F15C0+6E   48 8B 5C 24 08                                                  mov     rbx, [rsp+8]
sub_14C8F15C0+73   48 2B C1                                                        sub     rax, rcx        ; Integer Subtraction
sub_14C8F15C0+76   48 8B 7C 24 18                                                  mov     rdi, [rsp+18h]
sub_14C8F15C0+7B   48 03 C6                                                        add     rax, rsi        ; Add
sub_14C8F15C0+7E   48 8B 74 24 10                                                  mov     rsi, [rsp+10h]
sub_14C8F15C0+83   49 03 C0                                                        add     rax, r8         ; Add
sub_14C8F15C0+86   C3                                                              retn                    ; Return Near from Procedure
sub_14C8F15C0+86                                                   sub_14C8F15C0   endp
sub_14C8F15C0+86
sub_14C8F15C0+86                                                   ; ---------------------------------------------------------------------------
.text:000000014C8F1647 CC CC CC CC CC CC CC CC CC                                      align 10h
sub_14C8F1650
sub_14C8F1650                                                      ; =============== S U B R O U T I N E =======================================
sub_14C8F1650
sub_14C8F1650                                                      ; Attributes: bp-based frame fpd=57h
sub_14C8F1650
sub_14C8F1650                                                      sub_14C8F1650   proc near               ; DATA XREF: sub_14C8F2010+130↓o
sub_14C8F1650                                                                                              ; sub_14C8F2010+173↓o ...
sub_14C8F1650
sub_14C8F1650                                                      var_C0          = qword ptr -0C0h
sub_14C8F1650                                                      var_B8          = dword ptr -0B8h
sub_14C8F1650                                                      var_B0          = dword ptr -0B0h
sub_14C8F1650                                                      var_9C          = dword ptr -9Ch
sub_14C8F1650                                                      var_98          = dword ptr -98h
sub_14C8F1650                                                      var_90          = qword ptr -90h
sub_14C8F1650                                                      var_88          = qword ptr -88h
sub_14C8F1650                                                      var_80          = qword ptr -80h
sub_14C8F1650                                                      var_78          = qword ptr -78h
sub_14C8F1650                                                      var_70          = qword ptr -70h
sub_14C8F1650                                                      var_68          = qword ptr -68h
sub_14C8F1650                                                      var_60          = qword ptr -60h
sub_14C8F1650                                                      var_58          = qword ptr -58h
sub_14C8F1650                                                      var_50          = qword ptr -50h
sub_14C8F1650                                                      var_48          = qword ptr -48h
sub_14C8F1650                                                      var_40          = dword ptr -40h
sub_14C8F1650                                                      var_3C          = dword ptr -3Ch
sub_14C8F1650                                                      var_38          = byte ptr -38h
sub_14C8F1650                                                      var_30          = qword ptr -30h
sub_14C8F1650                                                      var_20          = byte ptr -20h
sub_14C8F1650                                                      var_18          = dword ptr -18h
sub_14C8F1650                                                      var_14          = dword ptr -14h
sub_14C8F1650                                                      var_10          = qword ptr -10h
sub_14C8F1650                                                      arg_8           = qword ptr  18h
sub_14C8F1650                                                      arg_10          = qword ptr  20h
sub_14C8F1650                                                      arg_18          = qword ptr  28h
sub_14C8F1650
sub_14C8F1650      48 89 5C 24 20                                                  mov     [rsp+20h], rbx
sub_14C8F1650+5    55                                                              push    rbp
sub_14C8F1650+6    48 8D 6C 24 A9                                                  lea     rbp, [rsp-57h]  ; Load Effective Address
sub_14C8F1650+B    48 81 EC E0 00 00 00                                            sub     rsp, 0E0h       ; Integer Subtraction
sub_14C8F1650+12   48 8B 05 D7 3C 4D 0A                                            mov     rax, cs:off_156DC5340
sub_14C8F1650+19   48 33 C4                                                        xor     rax, rsp        ; Logical Exclusive OR
sub_14C8F1650+1C   48 89 45 47                                                     mov     [rbp+47h], rax
sub_14C8F1650+20   48 8B D9                                                        mov     rbx, rcx
sub_14C8F1650+23   83 EA 02                                                        sub     edx, 2          ; Integer Subtraction
sub_14C8F1650+26   0F 84 3D 09 00 00                                               jz      loc_14C8F1FB9   ; Jump if Zero (ZF=1)
sub_14C8F1650+2C   81 EA 0E 01 00 00                                               sub     edx, 10Eh       ; Integer Subtraction
sub_14C8F1650+32   0F 84 F1 00 00 00                                               jz      loc_14C8F1779   ; Jump if Zero (ZF=1)
sub_14C8F1650+38   83 EA 01                                                        sub     edx, 1          ; Integer Subtraction
sub_14C8F1650+3B   74 5F                                                           jz      short loc_14C8F16EC ; Jump if Zero (ZF=1)
sub_14C8F1650+3D   81 FA 01 02 00 00                                               cmp     edx, 201h       ; Compare Two Operands
sub_14C8F1650+43   74 07                                                           jz      short loc_14C8F169C ; Jump if Zero (ZF=1)
sub_14C8F1650+45   33 C0                                                           xor     eax, eax        ; Logical Exclusive OR
sub_14C8F1650+47   E9 52 09 00 00                                                  jmp     loc_14C8F1FEE   ; Jump
sub_14C8F1650+4C                                                   ; ---------------------------------------------------------------------------
sub_14C8F1650+4C
sub_14C8F1650+4C                                                   loc_14C8F169C:                          ; CODE XREF: sub_14C8F1650+43↑j
sub_14C8F1650+4C   49 83 E8 64                                                     sub     r8, 64h ; 'd'   ; Integer Subtraction
sub_14C8F1650+50   74 3A                                                           jz      short loc_14C8F16DC ; Jump if Zero (ZF=1)
sub_14C8F1650+52   49 83 E8 01                                                     sub     r8, 1           ; Integer Subtraction
sub_14C8F1650+56   74 27                                                           jz      short loc_14C8F16CF ; Jump if Zero (ZF=1)
sub_14C8F1650+58   49 83 F8 01                                                     cmp     r8, 1           ; Compare Two Operands
sub_14C8F1650+5C   0F 85 37 09 00 00                                               jnz     loc_14C8F1FE9   ; Jump if Not Zero (ZF=0)
sub_14C8F1650+62   80 3D DF DE AF 0A 00                                            cmp     cs:byte_1573EF598, 0 ; Compare Two Operands
sub_14C8F1650+69   0F 84 2A 09 00 00                                               jz      loc_14C8F1FE9   ; Jump if Zero (ZF=1)
sub_14C8F1650+6F   BA 04 00 00 00                                                  mov     edx, 4
sub_14C8F1650+74   FF 15 B6 A8 C8 03                                               call    cs:qword_15057BF80 ; Indirect Call Near Procedure
sub_14C8F1650+7A   E9 1A 09 00 00                                                  jmp     loc_14C8F1FE9   ; Jump
sub_14C8F1650+7F                                                   ; ---------------------------------------------------------------------------
sub_14C8F1650+7F
sub_14C8F1650+7F                                                   loc_14C8F16CF:                          ; CODE XREF: sub_14C8F1650+56↑j
sub_14C8F1650+7F   33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_14C8F1650+81   FF 15 A9 A8 C8 03                                               call    cs:qword_15057BF80 ; Indirect Call Near Procedure
sub_14C8F1650+87   E9 0D 09 00 00                                                  jmp     loc_14C8F1FE9   ; Jump
sub_14C8F1650+8C                                                   ; ---------------------------------------------------------------------------
sub_14C8F1650+8C
sub_14C8F1650+8C                                                   loc_14C8F16DC:                          ; CODE XREF: sub_14C8F1650+50↑j
sub_14C8F1650+8C   BA 01 00 00 00                                                  mov     edx, 1
sub_14C8F1650+91   FF 15 99 A8 C8 03                                               call    cs:qword_15057BF80 ; Indirect Call Near Procedure
sub_14C8F1650+97   E9 FD 08 00 00                                                  jmp     loc_14C8F1FE9   ; Jump
sub_14C8F1650+9C                                                   ; ---------------------------------------------------------------------------
sub_14C8F1650+9C
sub_14C8F1650+9C                                                   loc_14C8F16EC:                          ; CODE XREF: sub_14C8F1650+3B↑j
sub_14C8F1650+9C   41 0F B7 C8                                                     movzx   ecx, r8w        ; Move with Zero-Extend
sub_14C8F1650+A0   81 E9 E8 03 00 00                                               sub     ecx, 3E8h       ; Integer Subtraction
sub_14C8F1650+A6   74 6E                                                           jz      short loc_14C8F1766 ; Jump if Zero (ZF=1)
sub_14C8F1650+A8   83 E9 01                                                        sub     ecx, 1          ; Integer Subtraction
sub_14C8F1650+AB   74 56                                                           jz      short loc_14C8F1753 ; Jump if Zero (ZF=1)
sub_14C8F1650+AD   83 E9 01                                                        sub     ecx, 1          ; Integer Subtraction
sub_14C8F1650+B0   74 3E                                                           jz      short loc_14C8F1740 ; Jump if Zero (ZF=1)
sub_14C8F1650+B2   83 E9 01                                                        sub     ecx, 1          ; Integer Subtraction
sub_14C8F1650+B5   74 29                                                           jz      short loc_14C8F1730 ; Jump if Zero (ZF=1)
sub_14C8F1650+B7   83 F9 06                                                        cmp     ecx, 6          ; Compare Two Operands
sub_14C8F1650+BA   0F 85 D9 08 00 00                                               jnz     loc_14C8F1FE9   ; Jump if Not Zero (ZF=0)
sub_14C8F1650+C0   80 3D 81 DE AF 0A 00                                            cmp     cs:byte_1573EF598, 0 ; Compare Two Operands
sub_14C8F1650+C7   0F 84 CC 08 00 00                                               jz      loc_14C8F1FE9   ; Jump if Zero (ZF=1)
sub_14C8F1650+CD   BA 04 00 00 00                                                  mov     edx, 4
sub_14C8F1650+D2   48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+D5   FF 15 55 A8 C8 03                                               call    cs:qword_15057BF80 ; Indirect Call Near Procedure
sub_14C8F1650+DB   E9 B9 08 00 00                                                  jmp     loc_14C8F1FE9   ; Jump
sub_14C8F1650+E0                                                   ; ---------------------------------------------------------------------------
sub_14C8F1650+E0
sub_14C8F1650+E0                                                   loc_14C8F1730:                          ; CODE XREF: sub_14C8F1650+B5↑j
sub_14C8F1650+E0   33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_14C8F1650+E2   48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+E5   FF 15 45 A8 C8 03                                               call    cs:qword_15057BF80 ; Indirect Call Near Procedure
sub_14C8F1650+EB   E9 A9 08 00 00                                                  jmp     loc_14C8F1FE9   ; Jump
sub_14C8F1650+F0                                                   ; ---------------------------------------------------------------------------
sub_14C8F1650+F0
sub_14C8F1650+F0                                                   loc_14C8F1740:                          ; CODE XREF: sub_14C8F1650+B0↑j
sub_14C8F1650+F0   BA 01 00 00 00                                                  mov     edx, 1
sub_14C8F1650+F5   48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+F8   FF 15 32 A8 C8 03                                               call    cs:qword_15057BF80 ; Indirect Call Near Procedure
sub_14C8F1650+FE   E9 96 08 00 00                                                  jmp     loc_14C8F1FE9   ; Jump
sub_14C8F1650+103                                                  ; ---------------------------------------------------------------------------
sub_14C8F1650+103
sub_14C8F1650+103                                                  loc_14C8F1753:                          ; CODE XREF: sub_14C8F1650+AB↑j
sub_14C8F1650+103  BA 03 00 00 00                                                  mov     edx, 3
sub_14C8F1650+108  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+10B  FF 15 1F A8 C8 03                                               call    cs:qword_15057BF80 ; Indirect Call Near Procedure
sub_14C8F1650+111  E9 83 08 00 00                                                  jmp     loc_14C8F1FE9   ; Jump
sub_14C8F1650+116                                                  ; ---------------------------------------------------------------------------
sub_14C8F1650+116
sub_14C8F1650+116                                                  loc_14C8F1766:                          ; CODE XREF: sub_14C8F1650+A6↑j
sub_14C8F1650+116  BA 02 00 00 00                                                  mov     edx, 2
sub_14C8F1650+11B  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+11E  FF 15 0C A8 C8 03                                               call    cs:qword_15057BF80 ; Indirect Call Near Procedure
sub_14C8F1650+124  E9 70 08 00 00                                                  jmp     loc_14C8F1FE9   ; Jump
sub_14C8F1650+129                                                  ; ---------------------------------------------------------------------------
sub_14C8F1650+129
sub_14C8F1650+129                                                  loc_14C8F1779:                          ; CODE XREF: sub_14C8F1650+32↑j
sub_14C8F1650+129  48 89 B4 24 F8 00 00 00                                         mov     [rsp+0F8h], rsi
sub_14C8F1650+131  48 8D 55 37                                                     lea     rdx, [rbp+37h]  ; Load Effective Address
sub_14C8F1650+135  48 89 BC 24 00 01 00 00                                         mov     [rsp+100h], rdi
sub_14C8F1650+13D  FF 15 DD A7 C8 03                                               call    cs:qword_15057BF70 ; Indirect Call Near Procedure
sub_14C8F1650+143  8B 45 3F                                                        mov     eax, [rbp+3Fh]
sub_14C8F1650+146  48 8D 55 17                                                     lea     rdx, [rbp+17h]  ; Load Effective Address
sub_14C8F1650+14A  89 45 17                                                        mov     [rbp+17h], eax
sub_14C8F1650+14D  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+150  8B 45 43                                                        mov     eax, [rbp+43h]
sub_14C8F1650+153  89 45 1B                                                        mov     [rbp+1Bh], eax
sub_14C8F1650+156  FF 15 84 AA C8 03                                               call    cs:qword_15057C230 ; Indirect Call Near Procedure
sub_14C8F1650+15C  8B 45 17                                                        mov     eax, [rbp+17h]
sub_14C8F1650+15F  33 F6                                                           xor     esi, esi        ; Logical Exclusive OR
sub_14C8F1650+161  83 C0 F8                                                        add     eax, 0FFFFFFF8h ; Add
sub_14C8F1650+164  48 89 75 07                                                     mov     [rbp+7], rsi
sub_14C8F1650+168  89 45 BF                                                        mov     [rbp-41h], eax
sub_14C8F1650+16B  8B 45 1B                                                        mov     eax, [rbp+1Bh]
sub_14C8F1650+16E  83 C0 F6                                                        add     eax, 0FFFFFFF6h ; Add
sub_14C8F1650+171  48 89 75 0F                                                     mov     [rbp+0Fh], rsi
sub_14C8F1650+175  48 39 35 14 C8 AD 0A                                            cmp     cs:qword_1573CDFE0, rsi ; Compare Two Operands
sub_14C8F1650+17C  89 45 BB                                                        mov     [rbp-45h], eax
sub_14C8F1650+17F  48 89 75 F7                                                     mov     [rbp-9], rsi
sub_14C8F1650+183  48 89 75 FF                                                     mov     [rbp-1], rsi
sub_14C8F1650+187  48 89 75 E7                                                     mov     [rbp-19h], rsi
sub_14C8F1650+18B  48 89 75 EF                                                     mov     [rbp-11h], rsi
sub_14C8F1650+18F  48 89 75 D7                                                     mov     [rbp-29h], rsi
sub_14C8F1650+193  48 89 75 DF                                                     mov     [rbp-21h], rsi
sub_14C8F1650+197  48 89 75 C7                                                     mov     [rbp-39h], rsi
sub_14C8F1650+19B  48 89 75 CF                                                     mov     [rbp-31h], rsi
sub_14C8F1650+19F  0F 85 5C 02 00 00                                               jnz     loc_14C8F1A51   ; Jump if Not Zero (ZF=0)
sub_14C8F1650+1A5  48 8D 4D 07                                                     lea     rcx, [rbp+7]    ; Load Effective Address
sub_14C8F1650+1A9  FF 15 71 8F F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+1AF  48 8D 15 9A DB CA 07                                            lea     rdx, aCancel    ; Load Effective Address
sub_14C8F1650+1B6  48 3B C2                                                        cmp     rax, rdx        ; Compare Two Operands
sub_14C8F1650+1B9  74 6B                                                           jz      short loc_14C8F1876 ; Jump if Zero (ZF=1)
sub_14C8F1650+1BB  48 8D 4D 07                                                     lea     rcx, [rbp+7]    ; Load Effective Address
sub_14C8F1650+1BF  FF 15 5B 8F F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+1C5  8B 4D 13                                                        mov     ecx, [rbp+13h]
sub_14C8F1650+1C8  8B D6                                                           mov     edx, esi
sub_14C8F1650+1CA  89 55 0F                                                        mov     [rbp+0Fh], edx
sub_14C8F1650+1CD  83 F9 07                                                        cmp     ecx, 7          ; Compare Two Operands
sub_14C8F1650+1D0  74 14                                                           jz      short loc_14C8F1836 ; Jump if Zero (ZF=1)
sub_14C8F1650+1D2  BA 07 00 00 00                                                  mov     edx, 7
sub_14C8F1650+1D7  48 8D 4D 07                                                     lea     rcx, [rbp+7]    ; Load Effective Address
sub_14C8F1650+1DB  E8 B0 0F 19 F4                                                  call    sub_140A827E0   ; Call Procedure
sub_14C8F1650+1E0  8B 4D 13                                                        mov     ecx, [rbp+13h]
sub_14C8F1650+1E3  8B 55 0F                                                        mov     edx, [rbp+0Fh]
sub_14C8F1650+1E6
sub_14C8F1650+1E6                                                  loc_14C8F1836:                          ; CODE XREF: sub_14C8F1650+1D0↑j
sub_14C8F1650+1E6  8D 42 07                                                        lea     eax, [rdx+7]    ; Load Effective Address
sub_14C8F1650+1E9  89 45 0F                                                        mov     [rbp+0Fh], eax
sub_14C8F1650+1EC  3B C1                                                           cmp     eax, ecx        ; Compare Two Operands
sub_14C8F1650+1EE  7E 09                                                           jle     short loc_14C8F1849 ; Jump if Less or Equal (ZF=1 | SF!=OF)
sub_14C8F1650+1F0  48 8D 4D 07                                                     lea     rcx, [rbp+7]    ; Load Effective Address
sub_14C8F1650+1F4  E8 B7 0E 19 F4                                                  call    sub_140A82700   ; Call Procedure
sub_14C8F1650+1F9
sub_14C8F1650+1F9                                                  loc_14C8F1849:                          ; CODE XREF: sub_14C8F1650+1EE↑j
sub_14C8F1650+1F9  48 8D 4D 07                                                     lea     rcx, [rbp+7]    ; Load Effective Address
sub_14C8F1650+1FD  FF 15 1D 8F F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+203  F2 0F 10 05 45 DB CA 07                                         movsd   xmm0, qword ptr cs:aCancel ; Move Scalar Double-Precision Floating-Point Values
sub_14C8F1650+20B  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+20E  F2 0F 11 00                                                     movsd   qword ptr [rax], xmm0 ; Move Scalar Double-Precision Floating-Point Values
sub_14C8F1650+212  8B 05 40 DB CA 07                                               mov     eax, dword ptr cs:aCancel+8 ; "el"
sub_14C8F1650+218  89 41 08                                                        mov     [rcx+8], eax
sub_14C8F1650+21B  0F B7 05 3A DB CA 07                                            movzx   eax, word ptr cs:aCancel+0Ch ; Move with Zero-Extend
sub_14C8F1650+222  66 89 41 0C                                                     mov     [rcx+0Ch], ax
sub_14C8F1650+226
sub_14C8F1650+226                                                  loc_14C8F1876:                          ; CODE XREF: sub_14C8F1650+1B9↑j
sub_14C8F1650+226  48 8D 4D F7                                                     lea     rcx, [rbp-9]    ; Load Effective Address
sub_14C8F1650+22A  FF 15 F0 8E F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+230  48 8D 15 29 DB CA 07                                            lea     rdx, aNoToAll   ; Load Effective Address
sub_14C8F1650+237  48 3B C2                                                        cmp     rax, rdx        ; Compare Two Operands
sub_14C8F1650+23A  74 5E                                                           jz      short loc_14C8F18EA ; Jump if Zero (ZF=1)
sub_14C8F1650+23C  48 8D 4D F7                                                     lea     rcx, [rbp-9]    ; Load Effective Address
sub_14C8F1650+240  FF 15 DA 8E F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+246  8B 4D 03                                                        mov     ecx, [rbp+3]
sub_14C8F1650+249  8B D6                                                           mov     edx, esi
sub_14C8F1650+24B  89 55 FF                                                        mov     [rbp-1], edx
sub_14C8F1650+24E  83 F9 0A                                                        cmp     ecx, 0Ah        ; Compare Two Operands
sub_14C8F1650+251  74 14                                                           jz      short loc_14C8F18B7 ; Jump if Zero (ZF=1)
sub_14C8F1650+253  BA 0A 00 00 00                                                  mov     edx, 0Ah
sub_14C8F1650+258  48 8D 4D F7                                                     lea     rcx, [rbp-9]    ; Load Effective Address
sub_14C8F1650+25C  E8 2F 0F 19 F4                                                  call    sub_140A827E0   ; Call Procedure
sub_14C8F1650+261  8B 4D 03                                                        mov     ecx, [rbp+3]
sub_14C8F1650+264  8B 55 FF                                                        mov     edx, [rbp-1]
sub_14C8F1650+267
sub_14C8F1650+267                                                  loc_14C8F18B7:                          ; CODE XREF: sub_14C8F1650+251↑j
sub_14C8F1650+267  8D 42 0A                                                        lea     eax, [rdx+0Ah]  ; Load Effective Address
sub_14C8F1650+26A  89 45 FF                                                        mov     [rbp-1], eax
sub_14C8F1650+26D  3B C1                                                           cmp     eax, ecx        ; Compare Two Operands
sub_14C8F1650+26F  7E 09                                                           jle     short loc_14C8F18CA ; Jump if Less or Equal (ZF=1 | SF!=OF)
sub_14C8F1650+271  48 8D 4D F7                                                     lea     rcx, [rbp-9]    ; Load Effective Address
sub_14C8F1650+275  E8 36 0E 19 F4                                                  call    sub_140A82700   ; Call Procedure
sub_14C8F1650+27A
sub_14C8F1650+27A                                                  loc_14C8F18CA:                          ; CODE XREF: sub_14C8F1650+26F↑j
sub_14C8F1650+27A  48 8D 4D F7                                                     lea     rcx, [rbp-9]    ; Load Effective Address
sub_14C8F1650+27E  FF 15 9C 8E F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+284  0F 10 05 D5 DA CA 07                                            movups  xmm0, xmmword ptr cs:aNoToAll ; Move Unaligned Four Packed Single-FP
sub_14C8F1650+28B  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+28E  0F 11 00                                                        movups  xmmword ptr [rax], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8F1650+291  8B 05 D9 DA CA 07                                               mov     eax, dword ptr cs:aNoToAll+10h ; "l"
sub_14C8F1650+297  89 41 10                                                        mov     [rcx+10h], eax
sub_14C8F1650+29A
sub_14C8F1650+29A                                                  loc_14C8F18EA:                          ; CODE XREF: sub_14C8F1650+23A↑j
sub_14C8F1650+29A  48 8D 4D E7                                                     lea     rcx, [rbp-19h]  ; Load Effective Address
sub_14C8F1650+29E  FF 15 7C 8E F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+2A4  48 8D 15 95 F1 C8 04                                            lea     rdx, aNo        ; Load Effective Address
sub_14C8F1650+2AB  48 3B C2                                                        cmp     rax, rdx        ; Compare Two Operands
sub_14C8F1650+2AE  74 5E                                                           jz      short loc_14C8F195E ; Jump if Zero (ZF=1)
sub_14C8F1650+2B0  48 8D 4D E7                                                     lea     rcx, [rbp-19h]  ; Load Effective Address
sub_14C8F1650+2B4  FF 15 66 8E F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+2BA  8B 4D F3                                                        mov     ecx, [rbp-0Dh]
sub_14C8F1650+2BD  8B D6                                                           mov     edx, esi
sub_14C8F1650+2BF  89 55 EF                                                        mov     [rbp-11h], edx
sub_14C8F1650+2C2  83 F9 03                                                        cmp     ecx, 3          ; Compare Two Operands
sub_14C8F1650+2C5  74 14                                                           jz      short loc_14C8F192B ; Jump if Zero (ZF=1)
sub_14C8F1650+2C7  BA 03 00 00 00                                                  mov     edx, 3
sub_14C8F1650+2CC  48 8D 4D E7                                                     lea     rcx, [rbp-19h]  ; Load Effective Address
sub_14C8F1650+2D0  E8 BB 0E 19 F4                                                  call    sub_140A827E0   ; Call Procedure
sub_14C8F1650+2D5  8B 4D F3                                                        mov     ecx, [rbp-0Dh]
sub_14C8F1650+2D8  8B 55 EF                                                        mov     edx, [rbp-11h]
sub_14C8F1650+2DB
sub_14C8F1650+2DB                                                  loc_14C8F192B:                          ; CODE XREF: sub_14C8F1650+2C5↑j
sub_14C8F1650+2DB  8D 42 03                                                        lea     eax, [rdx+3]    ; Load Effective Address
sub_14C8F1650+2DE  89 45 EF                                                        mov     [rbp-11h], eax
sub_14C8F1650+2E1  3B C1                                                           cmp     eax, ecx        ; Compare Two Operands
sub_14C8F1650+2E3  7E 09                                                           jle     short loc_14C8F193E ; Jump if Less or Equal (ZF=1 | SF!=OF)
sub_14C8F1650+2E5  48 8D 4D E7                                                     lea     rcx, [rbp-19h]  ; Load Effective Address
sub_14C8F1650+2E9  E8 C2 0D 19 F4                                                  call    sub_140A82700   ; Call Procedure
sub_14C8F1650+2EE
sub_14C8F1650+2EE                                                  loc_14C8F193E:                          ; CODE XREF: sub_14C8F1650+2E3↑j
sub_14C8F1650+2EE  48 8D 4D E7                                                     lea     rcx, [rbp-19h]  ; Load Effective Address
sub_14C8F1650+2F2  FF 15 28 8E F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+2F8  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+2FB  8B 05 3F F1 C8 04                                               mov     eax, dword ptr cs:aNo ; "No"
sub_14C8F1650+301  89 01                                                           mov     [rcx], eax
sub_14C8F1650+303  0F B7 05 3A F1 C8 04                                            movzx   eax, word ptr cs:aNo+4 ; Move with Zero-Extend
sub_14C8F1650+30A  66 89 41 04                                                     mov     [rcx+4], ax
sub_14C8F1650+30E
sub_14C8F1650+30E                                                  loc_14C8F195E:                          ; CODE XREF: sub_14C8F1650+2AE↑j
sub_14C8F1650+30E  48 8D 4D D7                                                     lea     rcx, [rbp-29h]  ; Load Effective Address
sub_14C8F1650+312  FF 15 08 8E F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+318  48 8D 15 59 DA CA 07                                            lea     rdx, aYesToAll  ; Load Effective Address
sub_14C8F1650+31F  48 3B C2                                                        cmp     rax, rdx        ; Compare Two Operands
sub_14C8F1650+322  74 69                                                           jz      short loc_14C8F19DD ; Jump if Zero (ZF=1)
sub_14C8F1650+324  48 8D 4D D7                                                     lea     rcx, [rbp-29h]  ; Load Effective Address
sub_14C8F1650+328  FF 15 F2 8D F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+32E  8B 4D E3                                                        mov     ecx, [rbp-1Dh]
sub_14C8F1650+331  8B D6                                                           mov     edx, esi
sub_14C8F1650+333  89 55 DF                                                        mov     [rbp-21h], edx
sub_14C8F1650+336  83 F9 0B                                                        cmp     ecx, 0Bh        ; Compare Two Operands
sub_14C8F1650+339  74 14                                                           jz      short loc_14C8F199F ; Jump if Zero (ZF=1)
sub_14C8F1650+33B  BA 0B 00 00 00                                                  mov     edx, 0Bh
sub_14C8F1650+340  48 8D 4D D7                                                     lea     rcx, [rbp-29h]  ; Load Effective Address
sub_14C8F1650+344  E8 47 0E 19 F4                                                  call    sub_140A827E0   ; Call Procedure
sub_14C8F1650+349  8B 4D E3                                                        mov     ecx, [rbp-1Dh]
sub_14C8F1650+34C  8B 55 DF                                                        mov     edx, [rbp-21h]
sub_14C8F1650+34F
sub_14C8F1650+34F                                                  loc_14C8F199F:                          ; CODE XREF: sub_14C8F1650+339↑j
sub_14C8F1650+34F  8D 42 0B                                                        lea     eax, [rdx+0Bh]  ; Load Effective Address
sub_14C8F1650+352  89 45 DF                                                        mov     [rbp-21h], eax
sub_14C8F1650+355  3B C1                                                           cmp     eax, ecx        ; Compare Two Operands
sub_14C8F1650+357  7E 09                                                           jle     short loc_14C8F19B2 ; Jump if Less or Equal (ZF=1 | SF!=OF)
sub_14C8F1650+359  48 8D 4D D7                                                     lea     rcx, [rbp-29h]  ; Load Effective Address
sub_14C8F1650+35D  E8 4E 0D 19 F4                                                  call    sub_140A82700   ; Call Procedure
sub_14C8F1650+362
sub_14C8F1650+362                                                  loc_14C8F19B2:                          ; CODE XREF: sub_14C8F1650+357↑j
sub_14C8F1650+362  48 8D 4D D7                                                     lea     rcx, [rbp-29h]  ; Load Effective Address
sub_14C8F1650+366  FF 15 B4 8D F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+36C  0F 10 05 05 DA CA 07                                            movups  xmm0, xmmword ptr cs:aYesToAll ; Move Unaligned Four Packed Single-FP
sub_14C8F1650+373  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+376  0F 11 00                                                        movups  xmmword ptr [rax], xmm0 ; Move Unaligned Four Packed Single-FP
sub_14C8F1650+379  8B 05 09 DA CA 07                                               mov     eax, dword ptr cs:aYesToAll+10h ; "ll"
sub_14C8F1650+37F  89 41 10                                                        mov     [rcx+10h], eax
sub_14C8F1650+382  0F B7 05 03 DA CA 07                                            movzx   eax, word ptr cs:aYesToAll+14h ; Move with Zero-Extend
sub_14C8F1650+389  66 89 41 14                                                     mov     [rcx+14h], ax
sub_14C8F1650+38D
sub_14C8F1650+38D                                                  loc_14C8F19DD:                          ; CODE XREF: sub_14C8F1650+322↑j
sub_14C8F1650+38D  48 8D 4D C7                                                     lea     rcx, [rbp-39h]  ; Load Effective Address
sub_14C8F1650+391  FF 15 89 8D F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+397  48 8D 15 9A F0 C8 04                                            lea     rdx, aYes       ; Load Effective Address
sub_14C8F1650+39E  48 3B C2                                                        cmp     rax, rdx        ; Compare Two Operands
sub_14C8F1650+3A1  0F 84 79 02 00 00                                               jz      loc_14C8F1C70   ; Jump if Zero (ZF=1)
sub_14C8F1650+3A7  48 8D 4D C7                                                     lea     rcx, [rbp-39h]  ; Load Effective Address
sub_14C8F1650+3AB  FF 15 6F 8D F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+3B1  8B 4D D3                                                        mov     ecx, [rbp-2Dh]
sub_14C8F1650+3B4  8B D6                                                           mov     edx, esi
sub_14C8F1650+3B6  89 55 CF                                                        mov     [rbp-31h], edx
sub_14C8F1650+3B9  83 F9 04                                                        cmp     ecx, 4          ; Compare Two Operands
sub_14C8F1650+3BC  74 14                                                           jz      short loc_14C8F1A22 ; Jump if Zero (ZF=1)
sub_14C8F1650+3BE  BA 04 00 00 00                                                  mov     edx, 4
sub_14C8F1650+3C3  48 8D 4D C7                                                     lea     rcx, [rbp-39h]  ; Load Effective Address
sub_14C8F1650+3C7  E8 C4 0D 19 F4                                                  call    sub_140A827E0   ; Call Procedure
sub_14C8F1650+3CC  8B 4D D3                                                        mov     ecx, [rbp-2Dh]
sub_14C8F1650+3CF  8B 55 CF                                                        mov     edx, [rbp-31h]
sub_14C8F1650+3D2
sub_14C8F1650+3D2                                                  loc_14C8F1A22:                          ; CODE XREF: sub_14C8F1650+3BC↑j
sub_14C8F1650+3D2  8D 42 04                                                        lea     eax, [rdx+4]    ; Load Effective Address
sub_14C8F1650+3D5  89 45 CF                                                        mov     [rbp-31h], eax
sub_14C8F1650+3D8  3B C1                                                           cmp     eax, ecx        ; Compare Two Operands
sub_14C8F1650+3DA  7E 09                                                           jle     short loc_14C8F1A35 ; Jump if Less or Equal (ZF=1 | SF!=OF)
sub_14C8F1650+3DC  48 8D 4D C7                                                     lea     rcx, [rbp-39h]  ; Load Effective Address
sub_14C8F1650+3E0  E8 CB 0C 19 F4                                                  call    sub_140A82700   ; Call Procedure
sub_14C8F1650+3E5
sub_14C8F1650+3E5                                                  loc_14C8F1A35:                          ; CODE XREF: sub_14C8F1650+3DA↑j
sub_14C8F1650+3E5  48 8D 4D C7                                                     lea     rcx, [rbp-39h]  ; Load Effective Address
sub_14C8F1650+3E9  FF 15 31 8D F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+3EF  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+3F2  48 8B 05 3F F0 C8 04                                            mov     rax, qword ptr cs:aYes ; "Yes"
sub_14C8F1650+3F9  48 89 01                                                        mov     [rcx], rax
sub_14C8F1650+3FC  E9 1F 02 00 00                                                  jmp     loc_14C8F1C70   ; Jump
sub_14C8F1650+401                                                  ; ---------------------------------------------------------------------------
sub_14C8F1650+401
sub_14C8F1650+401                                                  loc_14C8F1A51:                          ; CODE XREF: sub_14C8F1650+19F↑j
sub_14C8F1650+401  48 8D 15 48 D9 CA 07                                            lea     rdx, aCancel    ; Load Effective Address
sub_14C8F1650+408  4C 8B CA                                                        mov     r9, rdx
sub_14C8F1650+40B  4C 8D 05 36 B1 C9 07                                            lea     r8, aUnrealed   ; Load Effective Address
sub_14C8F1650+412  48 8D 4D 1F                                                     lea     rcx, [rbp+1Fh]  ; Load Effective Address
sub_14C8F1650+416  E8 05 88 EB FF                                                  call    sub_14C7AA270   ; Call Procedure
sub_14C8F1650+41B  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+41E  E8 FD 2F F1 FF                                                  call    sub_14C804A70   ; Call Procedure
sub_14C8F1650+423  48 8B D0                                                        mov     rdx, rax
sub_14C8F1650+426  48 8D 4D 07                                                     lea     rcx, [rbp+7]    ; Load Effective Address
sub_14C8F1650+42A  E8 D1 E6 1E F4                                                  call    sub_140AE0150   ; Call Procedure
sub_14C8F1650+42F  48 8B 7D 27                                                     mov     rdi, [rbp+27h]
sub_14C8F1650+433  48 85 FF                                                        test    rdi, rdi        ; Logical Compare
sub_14C8F1650+436  74 34                                                           jz      short loc_14C8F1ABC ; Jump if Zero (ZF=1)
sub_14C8F1650+438  B8 FF FF FF FF                                                  mov     eax, 0FFFFFFFFh
sub_14C8F1650+43D  F0 0F C1 47 08                                                  lock xadd [rdi+8], eax  ; t<-dest; dest<-src+dest; src<-t
sub_14C8F1650+442  83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_14C8F1650+445  75 25                                                           jnz     short loc_14C8F1ABC ; Jump if Not Zero (ZF=0)
sub_14C8F1650+447  48 8B 07                                                        mov     rax, [rdi]
sub_14C8F1650+44A  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1650+44D  FF 10                                                           call    qword ptr [rax] ; Indirect Call Near Procedure
sub_14C8F1650+44F  B8 FF FF FF FF                                                  mov     eax, 0FFFFFFFFh
sub_14C8F1650+454  F0 0F C1 47 0C                                                  lock xadd [rdi+0Ch], eax ; t<-dest; dest<-src+dest; src<-t
sub_14C8F1650+459  83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_14C8F1650+45C  75 0E                                                           jnz     short loc_14C8F1ABC ; Jump if Not Zero (ZF=0)
sub_14C8F1650+45E  48 8B 07                                                        mov     rax, [rdi]
sub_14C8F1650+461  BA 01 00 00 00                                                  mov     edx, 1
sub_14C8F1650+466  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1650+469  FF 50 08                                                        call    qword ptr [rax+8] ; Indirect Call Near Procedure
sub_14C8F1650+46C
sub_14C8F1650+46C                                                  loc_14C8F1ABC:                          ; CODE XREF: sub_14C8F1650+436↑j
sub_14C8F1650+46C                                                                                          ; sub_14C8F1650+445↑j ...
sub_14C8F1650+46C  4C 8D 0D 1D D9 CA 07                                            lea     r9, aNotoall    ; Load Effective Address
sub_14C8F1650+473  4C 8D 05 CE B0 C9 07                                            lea     r8, aUnrealed   ; Load Effective Address
sub_14C8F1650+47A  48 8D 15 DF D8 CA 07                                            lea     rdx, aNoToAll   ; Load Effective Address
sub_14C8F1650+481  48 8D 4D 1F                                                     lea     rcx, [rbp+1Fh]  ; Load Effective Address
sub_14C8F1650+485  E8 96 87 EB FF                                                  call    sub_14C7AA270   ; Call Procedure
sub_14C8F1650+48A  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+48D  E8 8E 2F F1 FF                                                  call    sub_14C804A70   ; Call Procedure
sub_14C8F1650+492  48 8B D0                                                        mov     rdx, rax
sub_14C8F1650+495  48 8D 4D F7                                                     lea     rcx, [rbp-9]    ; Load Effective Address
sub_14C8F1650+499  E8 62 E6 1E F4                                                  call    sub_140AE0150   ; Call Procedure
sub_14C8F1650+49E  48 8B 7D 27                                                     mov     rdi, [rbp+27h]
sub_14C8F1650+4A2  48 85 FF                                                        test    rdi, rdi        ; Logical Compare
sub_14C8F1650+4A5  74 34                                                           jz      short loc_14C8F1B2B ; Jump if Zero (ZF=1)
sub_14C8F1650+4A7  B8 FF FF FF FF                                                  mov     eax, 0FFFFFFFFh
sub_14C8F1650+4AC  F0 0F C1 47 08                                                  lock xadd [rdi+8], eax  ; t<-dest; dest<-src+dest; src<-t
sub_14C8F1650+4B1  83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_14C8F1650+4B4  75 25                                                           jnz     short loc_14C8F1B2B ; Jump if Not Zero (ZF=0)
sub_14C8F1650+4B6  48 8B 07                                                        mov     rax, [rdi]
sub_14C8F1650+4B9  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1650+4BC  FF 10                                                           call    qword ptr [rax] ; Indirect Call Near Procedure
sub_14C8F1650+4BE  B8 FF FF FF FF                                                  mov     eax, 0FFFFFFFFh
sub_14C8F1650+4C3  F0 0F C1 47 0C                                                  lock xadd [rdi+0Ch], eax ; t<-dest; dest<-src+dest; src<-t
sub_14C8F1650+4C8  83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_14C8F1650+4CB  75 0E                                                           jnz     short loc_14C8F1B2B ; Jump if Not Zero (ZF=0)
sub_14C8F1650+4CD  48 8B 07                                                        mov     rax, [rdi]
sub_14C8F1650+4D0  BA 01 00 00 00                                                  mov     edx, 1
sub_14C8F1650+4D5  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1650+4D8  FF 50 08                                                        call    qword ptr [rax+8] ; Indirect Call Near Procedure
sub_14C8F1650+4DB
sub_14C8F1650+4DB                                                  loc_14C8F1B2B:                          ; CODE XREF: sub_14C8F1650+4A5↑j
sub_14C8F1650+4DB                                                                                          ; sub_14C8F1650+4B4↑j ...
sub_14C8F1650+4DB  48 8D 15 5E EF C8 04                                            lea     rdx, aNo        ; Load Effective Address
sub_14C8F1650+4E2  4C 8B CA                                                        mov     r9, rdx
sub_14C8F1650+4E5  4C 8D 05 5C B0 C9 07                                            lea     r8, aUnrealed   ; Load Effective Address
sub_14C8F1650+4EC  48 8D 4D 1F                                                     lea     rcx, [rbp+1Fh]  ; Load Effective Address
sub_14C8F1650+4F0  E8 2B 87 EB FF                                                  call    sub_14C7AA270   ; Call Procedure
sub_14C8F1650+4F5  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+4F8  E8 23 2F F1 FF                                                  call    sub_14C804A70   ; Call Procedure
sub_14C8F1650+4FD  48 8B D0                                                        mov     rdx, rax
sub_14C8F1650+500  48 8D 4D E7                                                     lea     rcx, [rbp-19h]  ; Load Effective Address
sub_14C8F1650+504  E8 F7 E5 1E F4                                                  call    sub_140AE0150   ; Call Procedure
sub_14C8F1650+509  48 8B 7D 27                                                     mov     rdi, [rbp+27h]
sub_14C8F1650+50D  48 85 FF                                                        test    rdi, rdi        ; Logical Compare
sub_14C8F1650+510  74 34                                                           jz      short loc_14C8F1B96 ; Jump if Zero (ZF=1)
sub_14C8F1650+512  B8 FF FF FF FF                                                  mov     eax, 0FFFFFFFFh
sub_14C8F1650+517  F0 0F C1 47 08                                                  lock xadd [rdi+8], eax  ; t<-dest; dest<-src+dest; src<-t
sub_14C8F1650+51C  83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_14C8F1650+51F  75 25                                                           jnz     short loc_14C8F1B96 ; Jump if Not Zero (ZF=0)
sub_14C8F1650+521  48 8B 07                                                        mov     rax, [rdi]
sub_14C8F1650+524  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1650+527  FF 10                                                           call    qword ptr [rax] ; Indirect Call Near Procedure
sub_14C8F1650+529  B8 FF FF FF FF                                                  mov     eax, 0FFFFFFFFh
sub_14C8F1650+52E  F0 0F C1 47 0C                                                  lock xadd [rdi+0Ch], eax ; t<-dest; dest<-src+dest; src<-t
sub_14C8F1650+533  83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_14C8F1650+536  75 0E                                                           jnz     short loc_14C8F1B96 ; Jump if Not Zero (ZF=0)
sub_14C8F1650+538  48 8B 07                                                        mov     rax, [rdi]
sub_14C8F1650+53B  BA 01 00 00 00                                                  mov     edx, 1
sub_14C8F1650+540  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1650+543  FF 50 08                                                        call    qword ptr [rax+8] ; Indirect Call Near Procedure
sub_14C8F1650+546
sub_14C8F1650+546                                                  loc_14C8F1B96:                          ; CODE XREF: sub_14C8F1650+510↑j
sub_14C8F1650+546                                                                                          ; sub_14C8F1650+51F↑j ...
sub_14C8F1650+546  4C 8D 0D 53 D8 CA 07                                            lea     r9, aYestoall   ; Load Effective Address
sub_14C8F1650+54D  4C 8D 05 F4 AF C9 07                                            lea     r8, aUnrealed   ; Load Effective Address
sub_14C8F1650+554  48 8D 15 1D D8 CA 07                                            lea     rdx, aYesToAll  ; Load Effective Address
sub_14C8F1650+55B  48 8D 4D 1F                                                     lea     rcx, [rbp+1Fh]  ; Load Effective Address
sub_14C8F1650+55F  E8 BC 86 EB FF                                                  call    sub_14C7AA270   ; Call Procedure
sub_14C8F1650+564  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+567  E8 B4 2E F1 FF                                                  call    sub_14C804A70   ; Call Procedure
sub_14C8F1650+56C  48 8B D0                                                        mov     rdx, rax
sub_14C8F1650+56F  48 8D 4D D7                                                     lea     rcx, [rbp-29h]  ; Load Effective Address
sub_14C8F1650+573  E8 88 E5 1E F4                                                  call    sub_140AE0150   ; Call Procedure
sub_14C8F1650+578  48 8B 7D 27                                                     mov     rdi, [rbp+27h]
sub_14C8F1650+57C  48 85 FF                                                        test    rdi, rdi        ; Logical Compare
sub_14C8F1650+57F  74 34                                                           jz      short loc_14C8F1C05 ; Jump if Zero (ZF=1)
sub_14C8F1650+581  B8 FF FF FF FF                                                  mov     eax, 0FFFFFFFFh
sub_14C8F1650+586  F0 0F C1 47 08                                                  lock xadd [rdi+8], eax  ; t<-dest; dest<-src+dest; src<-t
sub_14C8F1650+58B  83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_14C8F1650+58E  75 25                                                           jnz     short loc_14C8F1C05 ; Jump if Not Zero (ZF=0)
sub_14C8F1650+590  48 8B 07                                                        mov     rax, [rdi]
sub_14C8F1650+593  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1650+596  FF 10                                                           call    qword ptr [rax] ; Indirect Call Near Procedure
sub_14C8F1650+598  B8 FF FF FF FF                                                  mov     eax, 0FFFFFFFFh
sub_14C8F1650+59D  F0 0F C1 47 0C                                                  lock xadd [rdi+0Ch], eax ; t<-dest; dest<-src+dest; src<-t
sub_14C8F1650+5A2  83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_14C8F1650+5A5  75 0E                                                           jnz     short loc_14C8F1C05 ; Jump if Not Zero (ZF=0)
sub_14C8F1650+5A7  48 8B 07                                                        mov     rax, [rdi]
sub_14C8F1650+5AA  BA 01 00 00 00                                                  mov     edx, 1
sub_14C8F1650+5AF  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1650+5B2  FF 50 08                                                        call    qword ptr [rax+8] ; Indirect Call Near Procedure
sub_14C8F1650+5B5
sub_14C8F1650+5B5                                                  loc_14C8F1C05:                          ; CODE XREF: sub_14C8F1650+57F↑j
sub_14C8F1650+5B5                                                                                          ; sub_14C8F1650+58E↑j ...
sub_14C8F1650+5B5  48 8D 15 7C EE C8 04                                            lea     rdx, aYes       ; Load Effective Address
sub_14C8F1650+5BC  4C 8B CA                                                        mov     r9, rdx
sub_14C8F1650+5BF  4C 8D 05 82 AF C9 07                                            lea     r8, aUnrealed   ; Load Effective Address
sub_14C8F1650+5C6  48 8D 4D 1F                                                     lea     rcx, [rbp+1Fh]  ; Load Effective Address
sub_14C8F1650+5CA  E8 51 86 EB FF                                                  call    sub_14C7AA270   ; Call Procedure
sub_14C8F1650+5CF  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+5D2  E8 49 2E F1 FF                                                  call    sub_14C804A70   ; Call Procedure
sub_14C8F1650+5D7  48 8B D0                                                        mov     rdx, rax
sub_14C8F1650+5DA  48 8D 4D C7                                                     lea     rcx, [rbp-39h]  ; Load Effective Address
sub_14C8F1650+5DE  E8 1D E5 1E F4                                                  call    sub_140AE0150   ; Call Procedure
sub_14C8F1650+5E3  48 8B 7D 27                                                     mov     rdi, [rbp+27h]
sub_14C8F1650+5E7  48 85 FF                                                        test    rdi, rdi        ; Logical Compare
sub_14C8F1650+5EA  74 34                                                           jz      short loc_14C8F1C70 ; Jump if Zero (ZF=1)
sub_14C8F1650+5EC  B8 FF FF FF FF                                                  mov     eax, 0FFFFFFFFh
sub_14C8F1650+5F1  F0 0F C1 47 08                                                  lock xadd [rdi+8], eax  ; t<-dest; dest<-src+dest; src<-t
sub_14C8F1650+5F6  83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_14C8F1650+5F9  75 25                                                           jnz     short loc_14C8F1C70 ; Jump if Not Zero (ZF=0)
sub_14C8F1650+5FB  48 8B 07                                                        mov     rax, [rdi]
sub_14C8F1650+5FE  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1650+601  FF 10                                                           call    qword ptr [rax] ; Indirect Call Near Procedure
sub_14C8F1650+603  B8 FF FF FF FF                                                  mov     eax, 0FFFFFFFFh
sub_14C8F1650+608  F0 0F C1 47 0C                                                  lock xadd [rdi+0Ch], eax ; t<-dest; dest<-src+dest; src<-t
sub_14C8F1650+60D  83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_14C8F1650+610  75 0E                                                           jnz     short loc_14C8F1C70 ; Jump if Not Zero (ZF=0)
sub_14C8F1650+612  48 8B 07                                                        mov     rax, [rdi]
sub_14C8F1650+615  BA 01 00 00 00                                                  mov     edx, 1
sub_14C8F1650+61A  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1650+61D  FF 50 08                                                        call    qword ptr [rax+8] ; Indirect Call Near Procedure
sub_14C8F1650+620
sub_14C8F1650+620                                                  loc_14C8F1C70:                          ; CODE XREF: sub_14C8F1650+3A1↑j
sub_14C8F1650+620                                                                                          ; sub_14C8F1650+3FC↑j ...
sub_14C8F1650+620  48 8D 3D E1 64 DD 03                                            lea     rdi, word_1506C8158 ; Load Effective Address
sub_14C8F1650+627  39 75 0F                                                        cmp     [rbp+0Fh], esi  ; Compare Two Operands
sub_14C8F1650+62A  74 0C                                                           jz      short loc_14C8F1C88 ; Jump if Zero (ZF=1)
sub_14C8F1650+62C  48 8D 4D 07                                                     lea     rcx, [rbp+7]    ; Load Effective Address
sub_14C8F1650+630  FF 15 EA 8A F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+636  EB 03                                                           jmp     short loc_14C8F1C8B ; Jump
sub_14C8F1650+638                                                  ; ---------------------------------------------------------------------------
sub_14C8F1650+638
sub_14C8F1650+638                                                  loc_14C8F1C88:                          ; CODE XREF: sub_14C8F1650+62A↑j
sub_14C8F1650+638  48 8B C7                                                        mov     rax, rdi
sub_14C8F1650+63B
sub_14C8F1650+63B                                                  loc_14C8F1C8B:                          ; CODE XREF: sub_14C8F1650+636↑j
sub_14C8F1650+63B  48 8D 4D BB                                                     lea     rcx, [rbp-45h]  ; Load Effective Address
sub_14C8F1650+63F  41 B8 F1 03 00 00                                               mov     r8d, 3F1h
sub_14C8F1650+645  48 89 4C 24 20                                                  mov     [rsp+20h], rcx
sub_14C8F1650+64A  4C 8D 4D BF                                                     lea     r9, [rbp-41h]   ; Load Effective Address
sub_14C8F1650+64E  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+651  48 8B D0                                                        mov     rdx, rax
sub_14C8F1650+654  E8 A7 69 00 00                                                  call    sub_14C8F8650   ; Call Procedure
sub_14C8F1650+659  39 75 FF                                                        cmp     [rbp-1], esi    ; Compare Two Operands
sub_14C8F1650+65C  74 0C                                                           jz      short loc_14C8F1CBA ; Jump if Zero (ZF=1)
sub_14C8F1650+65E  48 8D 4D F7                                                     lea     rcx, [rbp-9]    ; Load Effective Address
sub_14C8F1650+662  FF 15 B8 8A F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+668  EB 03                                                           jmp     short loc_14C8F1CBD ; Jump
sub_14C8F1650+66A                                                  ; ---------------------------------------------------------------------------
sub_14C8F1650+66A
sub_14C8F1650+66A                                                  loc_14C8F1CBA:                          ; CODE XREF: sub_14C8F1650+65C↑j
sub_14C8F1650+66A  48 8B C7                                                        mov     rax, rdi
sub_14C8F1650+66D
sub_14C8F1650+66D                                                  loc_14C8F1CBD:                          ; CODE XREF: sub_14C8F1650+668↑j
sub_14C8F1650+66D  48 8D 4D BB                                                     lea     rcx, [rbp-45h]  ; Load Effective Address
sub_14C8F1650+671  41 B8 E9 03 00 00                                               mov     r8d, 3E9h
sub_14C8F1650+677  48 89 4C 24 20                                                  mov     [rsp+20h], rcx
sub_14C8F1650+67C  4C 8D 4D BF                                                     lea     r9, [rbp-41h]   ; Load Effective Address
sub_14C8F1650+680  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+683  48 8B D0                                                        mov     rdx, rax
sub_14C8F1650+686  E8 75 69 00 00                                                  call    sub_14C8F8650   ; Call Procedure
sub_14C8F1650+68B  39 75 EF                                                        cmp     [rbp-11h], esi  ; Compare Two Operands
sub_14C8F1650+68E  74 0C                                                           jz      short loc_14C8F1CEC ; Jump if Zero (ZF=1)
sub_14C8F1650+690  48 8D 4D E7                                                     lea     rcx, [rbp-19h]  ; Load Effective Address
sub_14C8F1650+694  FF 15 86 8A F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+69A  EB 03                                                           jmp     short loc_14C8F1CEF ; Jump
sub_14C8F1650+69C                                                  ; ---------------------------------------------------------------------------
sub_14C8F1650+69C
sub_14C8F1650+69C                                                  loc_14C8F1CEC:                          ; CODE XREF: sub_14C8F1650+68E↑j
sub_14C8F1650+69C  48 8B C7                                                        mov     rax, rdi
sub_14C8F1650+69F
sub_14C8F1650+69F                                                  loc_14C8F1CEF:                          ; CODE XREF: sub_14C8F1650+69A↑j
sub_14C8F1650+69F  48 8D 4D BB                                                     lea     rcx, [rbp-45h]  ; Load Effective Address
sub_14C8F1650+6A3  41 B8 EB 03 00 00                                               mov     r8d, 3EBh
sub_14C8F1650+6A9  48 89 4C 24 20                                                  mov     [rsp+20h], rcx
sub_14C8F1650+6AE  4C 8D 4D BF                                                     lea     r9, [rbp-41h]   ; Load Effective Address
sub_14C8F1650+6B2  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+6B5  48 8B D0                                                        mov     rdx, rax
sub_14C8F1650+6B8  E8 43 69 00 00                                                  call    sub_14C8F8650   ; Call Procedure
sub_14C8F1650+6BD  39 75 DF                                                        cmp     [rbp-21h], esi  ; Compare Two Operands
sub_14C8F1650+6C0  74 0C                                                           jz      short loc_14C8F1D1E ; Jump if Zero (ZF=1)
sub_14C8F1650+6C2  48 8D 4D D7                                                     lea     rcx, [rbp-29h]  ; Load Effective Address
sub_14C8F1650+6C6  FF 15 54 8A F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+6CC  EB 03                                                           jmp     short loc_14C8F1D21 ; Jump
sub_14C8F1650+6CE                                                  ; ---------------------------------------------------------------------------
sub_14C8F1650+6CE
sub_14C8F1650+6CE                                                  loc_14C8F1D1E:                          ; CODE XREF: sub_14C8F1650+6C0↑j
sub_14C8F1650+6CE  48 8B C7                                                        mov     rax, rdi
sub_14C8F1650+6D1
sub_14C8F1650+6D1                                                  loc_14C8F1D21:                          ; CODE XREF: sub_14C8F1650+6CC↑j
sub_14C8F1650+6D1  48 8D 4D BB                                                     lea     rcx, [rbp-45h]  ; Load Effective Address
sub_14C8F1650+6D5  41 B8 E8 03 00 00                                               mov     r8d, 3E8h
sub_14C8F1650+6DB  48 89 4C 24 20                                                  mov     [rsp+20h], rcx
sub_14C8F1650+6E0  4C 8D 4D BF                                                     lea     r9, [rbp-41h]   ; Load Effective Address
sub_14C8F1650+6E4  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+6E7  48 8B D0                                                        mov     rdx, rax
sub_14C8F1650+6EA  E8 11 69 00 00                                                  call    sub_14C8F8650   ; Call Procedure
sub_14C8F1650+6EF  39 75 CF                                                        cmp     [rbp-31h], esi  ; Compare Two Operands
sub_14C8F1650+6F2  74 0D                                                           jz      short loc_14C8F1D51 ; Jump if Zero (ZF=1)
sub_14C8F1650+6F4  48 8D 4D C7                                                     lea     rcx, [rbp-39h]  ; Load Effective Address
sub_14C8F1650+6F8  FF 15 22 8A F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+6FE  48 8B F8                                                        mov     rdi, rax
sub_14C8F1650+701
sub_14C8F1650+701                                                  loc_14C8F1D51:                          ; CODE XREF: sub_14C8F1650+6F2↑j
sub_14C8F1650+701  48 8D 45 BB                                                     lea     rax, [rbp-45h]  ; Load Effective Address
sub_14C8F1650+705  41 B8 EA 03 00 00                                               mov     r8d, 3EAh
sub_14C8F1650+70B  4C 8D 4D BF                                                     lea     r9, [rbp-41h]   ; Load Effective Address
sub_14C8F1650+70F  48 89 44 24 20                                                  mov     [rsp+20h], rax
sub_14C8F1650+714  48 8B D7                                                        mov     rdx, rdi
sub_14C8F1650+717  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+71A  E8 E1 68 00 00                                                  call    sub_14C8F8650   ; Call Procedure
sub_14C8F1650+71F  4C 8B 05 12 D8 AF 0A                                            mov     r8, cs:qword_1573EF588
sub_14C8F1650+726  BA EC 03 00 00                                                  mov     edx, 3ECh
sub_14C8F1650+72B  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+72E  FF 15 CC A4 C8 03                                               call    cs:qword_15057C250 ; Indirect Call Near Procedure
sub_14C8F1650+734  48 8B 15 05 D8 AF 0A                                            mov     rdx, cs:qword_1573EF590
sub_14C8F1650+73B  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+73E  FF 15 A4 A4 C8 03                                               call    cs:qword_15057C238 ; Indirect Call Near Procedure
sub_14C8F1650+744  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+747  FF 15 83 A4 C8 03                                               call    cs:qword_15057C220 ; Indirect Call Near Procedure
sub_14C8F1650+74D  48 8B F8                                                        mov     rdi, rax
sub_14C8F1650+750  48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_14C8F1650+753  74 26                                                           jz      short loc_14C8F1DCB ; Jump if Zero (ZF=1)
sub_14C8F1650+755  C7 44 24 30 03 00 00 00                                         mov     dword ptr [rsp+30h], 3
sub_14C8F1650+75D  45 33 C9                                                        xor     r9d, r9d        ; Logical Exclusive OR
sub_14C8F1650+760  89 74 24 28                                                     mov     [rsp+28h], esi
sub_14C8F1650+764  45 33 C0                                                        xor     r8d, r8d        ; Logical Exclusive OR
sub_14C8F1650+767  48 C7 C2 FF FF FF FF                                            mov     rdx, 0FFFFFFFFFFFFFFFFh
sub_14C8F1650+76E  89 74 24 20                                                     mov     [rsp+20h], esi
sub_14C8F1650+772  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+775  FF 15 15 A1 C8 03                                               call    cs:qword_15057BEE0 ; Indirect Call Near Procedure
sub_14C8F1650+77B
sub_14C8F1650+77B                                                  loc_14C8F1DCB:                          ; CODE XREF: sub_14C8F1650+753↑j
sub_14C8F1650+77B  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+77E  FF 15 6C A4 C8 03                                               call    cs:qword_15057C240 ; Indirect Call Near Procedure
sub_14C8F1650+784  C7 44 24 30 03 00 00 00                                         mov     dword ptr [rsp+30h], 3
sub_14C8F1650+78C  45 33 C9                                                        xor     r9d, r9d        ; Logical Exclusive OR
sub_14C8F1650+78F  89 74 24 28                                                     mov     [rsp+28h], esi
sub_14C8F1650+793  45 33 C0                                                        xor     r8d, r8d        ; Logical Exclusive OR
sub_14C8F1650+796  48 C7 C2 FF FF FF FF                                            mov     rdx, 0FFFFFFFFFFFFFFFFh
sub_14C8F1650+79D  89 74 24 20                                                     mov     [rsp+20h], esi
sub_14C8F1650+7A1  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+7A4  FF 15 E6 A0 C8 03                                               call    cs:qword_15057BEE0 ; Indirect Call Near Procedure
sub_14C8F1650+7AA  41 B9 59 00 00 00                                               mov     r9d, 59h ; 'Y'
sub_14C8F1650+7B0  45 33 C0                                                        xor     r8d, r8d        ; Logical Exclusive OR
sub_14C8F1650+7B3  BA 64 00 00 00                                                  mov     edx, 64h ; 'd'
sub_14C8F1650+7B8  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+7BB  FF 15 8F A0 C8 03                                               call    cs:qword_15057BEA0 ; Indirect Call Near Procedure
sub_14C8F1650+7C1  41 B9 4E 00 00 00                                               mov     r9d, 4Eh ; 'N'
sub_14C8F1650+7C7  45 33 C0                                                        xor     r8d, r8d        ; Logical Exclusive OR
sub_14C8F1650+7CA  BA 65 00 00 00                                                  mov     edx, 65h ; 'e'
sub_14C8F1650+7CF  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+7D2  FF 15 78 A0 C8 03                                               call    cs:qword_15057BEA0 ; Indirect Call Near Procedure
sub_14C8F1650+7D8  40 38 35 69 D7 AF 0A                                            cmp     cs:byte_1573EF598, sil ; Compare Two Operands
sub_14C8F1650+7DF  74 17                                                           jz      short loc_14C8F1E48 ; Jump if Zero (ZF=1)
sub_14C8F1650+7E1  41 B9 1B 00 00 00                                               mov     r9d, 1Bh
sub_14C8F1650+7E7  45 33 C0                                                        xor     r8d, r8d        ; Logical Exclusive OR
sub_14C8F1650+7EA  BA 66 00 00 00                                                  mov     edx, 66h ; 'f'
sub_14C8F1650+7EF  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+7F2  FF 15 58 A0 C8 03                                               call    cs:qword_15057BEA0 ; Indirect Call Near Procedure
sub_14C8F1650+7F8
sub_14C8F1650+7F8                                                  loc_14C8F1E48:                          ; CODE XREF: sub_14C8F1650+7DF↑j
sub_14C8F1650+7F8  C7 44 24 30 03 00 00 00                                         mov     dword ptr [rsp+30h], 3
sub_14C8F1650+800  45 33 C9                                                        xor     r9d, r9d        ; Logical Exclusive OR
sub_14C8F1650+803  89 74 24 28                                                     mov     [rsp+28h], esi
sub_14C8F1650+807  45 33 C0                                                        xor     r8d, r8d        ; Logical Exclusive OR
sub_14C8F1650+80A  48 C7 C2 FE FF FF FF                                            mov     rdx, 0FFFFFFFFFFFFFFFEh
sub_14C8F1650+811  89 74 24 20                                                     mov     [rsp+20h], esi
sub_14C8F1650+815  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+818  FF 15 72 A0 C8 03                                               call    cs:qword_15057BEE0 ; Indirect Call Near Procedure
sub_14C8F1650+81E  48 85 FF                                                        test    rdi, rdi        ; Logical Compare
sub_14C8F1650+821  74 26                                                           jz      short loc_14C8F1E99 ; Jump if Zero (ZF=1)
sub_14C8F1650+823  C7 44 24 30 03 00 00 00                                         mov     dword ptr [rsp+30h], 3
sub_14C8F1650+82B  45 33 C9                                                        xor     r9d, r9d        ; Logical Exclusive OR
sub_14C8F1650+82E  89 74 24 28                                                     mov     [rsp+28h], esi
sub_14C8F1650+832  45 33 C0                                                        xor     r8d, r8d        ; Logical Exclusive OR
sub_14C8F1650+835  48 C7 C2 FE FF FF FF                                            mov     rdx, 0FFFFFFFFFFFFFFFEh
sub_14C8F1650+83C  89 74 24 20                                                     mov     [rsp+20h], esi
sub_14C8F1650+840  48 8B CF                                                        mov     rcx, rdi
sub_14C8F1650+843  FF 15 47 A0 C8 03                                               call    cs:qword_15057BEE0 ; Indirect Call Near Procedure
sub_14C8F1650+849
sub_14C8F1650+849                                                  loc_14C8F1E99:                          ; CODE XREF: sub_14C8F1650+821↑j
sub_14C8F1650+849  48 8D 4D C7                                                     lea     rcx, [rbp-39h]  ; Load Effective Address
sub_14C8F1650+84D  FF 15 CD 88 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+853  33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_14C8F1650+855  48 8D 4D C7                                                     lea     rcx, [rbp-39h]  ; Load Effective Address
sub_14C8F1650+859  E8 32 08 19 F4                                                  call    sub_140A826E0   ; Call Procedure
sub_14C8F1650+85E  48 8D 4D C7                                                     lea     rcx, [rbp-39h]  ; Load Effective Address
sub_14C8F1650+862  FF 15 B8 88 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+868  48 8B BC 24 00 01 00 00                                         mov     rdi, [rsp+100h]
sub_14C8F1650+870  48 8B B4 24 F8 00 00 00                                         mov     rsi, [rsp+0F8h]
sub_14C8F1650+878  48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_14C8F1650+87B  74 12                                                           jz      short loc_14C8F1EDF ; Jump if Zero (ZF=1)
sub_14C8F1650+87D  48 8D 4D C7                                                     lea     rcx, [rbp-39h]  ; Load Effective Address
sub_14C8F1650+881  FF 15 99 88 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+887  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+88A  E8 F1 90 EB FF                                                  call    sub_14C7AAFD0   ; Call Procedure
sub_14C8F1650+88F
sub_14C8F1650+88F                                                  loc_14C8F1EDF:                          ; CODE XREF: sub_14C8F1650+87B↑j
sub_14C8F1650+88F  48 8D 4D D7                                                     lea     rcx, [rbp-29h]  ; Load Effective Address
sub_14C8F1650+893  FF 15 87 88 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+899  33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_14C8F1650+89B  48 8D 4D D7                                                     lea     rcx, [rbp-29h]  ; Load Effective Address
sub_14C8F1650+89F  E8 EC 07 19 F4                                                  call    sub_140A826E0   ; Call Procedure
sub_14C8F1650+8A4  48 8D 4D D7                                                     lea     rcx, [rbp-29h]  ; Load Effective Address
sub_14C8F1650+8A8  FF 15 72 88 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+8AE  48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_14C8F1650+8B1  74 12                                                           jz      short loc_14C8F1F15 ; Jump if Zero (ZF=1)
sub_14C8F1650+8B3  48 8D 4D D7                                                     lea     rcx, [rbp-29h]  ; Load Effective Address
sub_14C8F1650+8B7  FF 15 63 88 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+8BD  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+8C0  E8 BB 90 EB FF                                                  call    sub_14C7AAFD0   ; Call Procedure
sub_14C8F1650+8C5
sub_14C8F1650+8C5                                                  loc_14C8F1F15:                          ; CODE XREF: sub_14C8F1650+8B1↑j
sub_14C8F1650+8C5  48 8D 4D E7                                                     lea     rcx, [rbp-19h]  ; Load Effective Address
sub_14C8F1650+8C9  FF 15 51 88 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+8CF  33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_14C8F1650+8D1  48 8D 4D E7                                                     lea     rcx, [rbp-19h]  ; Load Effective Address
sub_14C8F1650+8D5  E8 B6 07 19 F4                                                  call    sub_140A826E0   ; Call Procedure
sub_14C8F1650+8DA  48 8D 4D E7                                                     lea     rcx, [rbp-19h]  ; Load Effective Address
sub_14C8F1650+8DE  FF 15 3C 88 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+8E4  48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_14C8F1650+8E7  74 12                                                           jz      short loc_14C8F1F4B ; Jump if Zero (ZF=1)
sub_14C8F1650+8E9  48 8D 4D E7                                                     lea     rcx, [rbp-19h]  ; Load Effective Address
sub_14C8F1650+8ED  FF 15 2D 88 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+8F3  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+8F6  E8 85 90 EB FF                                                  call    sub_14C7AAFD0   ; Call Procedure
sub_14C8F1650+8FB
sub_14C8F1650+8FB                                                  loc_14C8F1F4B:                          ; CODE XREF: sub_14C8F1650+8E7↑j
sub_14C8F1650+8FB  48 8D 4D F7                                                     lea     rcx, [rbp-9]    ; Load Effective Address
sub_14C8F1650+8FF  FF 15 1B 88 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+905  33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_14C8F1650+907  48 8D 4D F7                                                     lea     rcx, [rbp-9]    ; Load Effective Address
sub_14C8F1650+90B  E8 80 07 19 F4                                                  call    sub_140A826E0   ; Call Procedure
sub_14C8F1650+910  48 8D 4D F7                                                     lea     rcx, [rbp-9]    ; Load Effective Address
sub_14C8F1650+914  FF 15 06 88 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+91A  48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_14C8F1650+91D  74 12                                                           jz      short loc_14C8F1F81 ; Jump if Zero (ZF=1)
sub_14C8F1650+91F  48 8D 4D F7                                                     lea     rcx, [rbp-9]    ; Load Effective Address
sub_14C8F1650+923  FF 15 F7 87 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+929  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+92C  E8 4F 90 EB FF                                                  call    sub_14C7AAFD0   ; Call Procedure
sub_14C8F1650+931
sub_14C8F1650+931                                                  loc_14C8F1F81:                          ; CODE XREF: sub_14C8F1650+91D↑j
sub_14C8F1650+931  48 8D 4D 07                                                     lea     rcx, [rbp+7]    ; Load Effective Address
sub_14C8F1650+935  FF 15 E5 87 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+93B  33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_14C8F1650+93D  48 8D 4D 07                                                     lea     rcx, [rbp+7]    ; Load Effective Address
sub_14C8F1650+941  E8 4A 07 19 F4                                                  call    sub_140A826E0   ; Call Procedure
sub_14C8F1650+946  48 8D 4D 07                                                     lea     rcx, [rbp+7]    ; Load Effective Address
sub_14C8F1650+94A  FF 15 D0 87 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+950  48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_14C8F1650+953  74 44                                                           jz      short loc_14C8F1FE9 ; Jump if Zero (ZF=1)
sub_14C8F1650+955  48 8D 4D 07                                                     lea     rcx, [rbp+7]    ; Load Effective Address
sub_14C8F1650+959  FF 15 C1 87 F5 09                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_14C8F1650+95F  48 8B C8                                                        mov     rcx, rax
sub_14C8F1650+962  E8 19 90 EB FF                                                  call    sub_14C7AAFD0   ; Call Procedure
sub_14C8F1650+967  EB 30                                                           jmp     short loc_14C8F1FE9 ; Jump
sub_14C8F1650+969                                                  ; ---------------------------------------------------------------------------
sub_14C8F1650+969
sub_14C8F1650+969                                                  loc_14C8F1FB9:                          ; CODE XREF: sub_14C8F1650+26↑j
sub_14C8F1650+969  BA 64 00 00 00                                                  mov     edx, 64h ; 'd'
sub_14C8F1650+96E  FF 15 4C 9F C8 03                                               call    cs:qword_15057BF10 ; Indirect Call Near Procedure
sub_14C8F1650+974  BA 65 00 00 00                                                  mov     edx, 65h
sub_14C8F1650+979  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+97C  FF 15 3E 9F C8 03                                               call    cs:qword_15057BF10 ; Indirect Call Near Procedure
sub_14C8F1650+982  80 3D BF D5 AF 0A 00                                            cmp     cs:byte_1573EF598, 0 ; Compare Two Operands
sub_14C8F1650+989  74 0E                                                           jz      short loc_14C8F1FE9 ; Jump if Zero (ZF=1)
sub_14C8F1650+98B  BA 66 00 00 00                                                  mov     edx, 66h ; 'f'
sub_14C8F1650+990  48 8B CB                                                        mov     rcx, rbx
sub_14C8F1650+993  FF 15 27 9F C8 03                                               call    cs:qword_15057BF10 ; Indirect Call Near Procedure
sub_14C8F1650+999
sub_14C8F1650+999                                                  loc_14C8F1FE9:                          ; CODE XREF: sub_14C8F1650+5C↑j
sub_14C8F1650+999                                                                                          ; sub_14C8F1650+69↑j ...
sub_14C8F1650+999  B8 01 00 00 00                                                  mov     eax, 1
sub_14C8F1650+99E
sub_14C8F1650+99E                                                  loc_14C8F1FEE:                          ; CODE XREF: sub_14C8F1650+47↑j
sub_14C8F1650+99E  48 8B 4D 47                                                     mov     rcx, [rbp+47h]
sub_14C8F1650+9A2  48 33 CC                                                        xor     rcx, rsp        ; StackCookie
sub_14C8F1650+9A5  E8 66 DE 96 03                                                  call    __security_check_cookie ; Call Procedure
sub_14C8F1650+9AA  48 8B 9C 24 08 01 00 00                                         mov     rbx, [rsp+108h]
sub_14C8F1650+9B2  48 81 C4 E0 00 00 00                                            add     rsp, 0E0h       ; Add
sub_14C8F1650+9B9  5D                                                              pop     rbp
sub_14C8F1650+9BA  C3                                                              retn                    ; Return Near from Procedure
sub_14C8F1650+9BA                                                  sub_14C8F1650   endp
sub_14C8F1650+9BA
sub_14C8F1650+9BA                                                  ; ---------------------------------------------------------------------------
.text:000000014C8F200B CC CC CC CC CC                                                  align 10h
sub_14C8F2010
