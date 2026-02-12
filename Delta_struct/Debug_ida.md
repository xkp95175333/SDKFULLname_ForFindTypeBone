
---
Address Uworld = qword_156A1E488;
---



```cpp
.std:000000014EAE0C70                                                 ; =============== S U B R O U T I N E =======================================
.std:000000014EAE0C70
.std:000000014EAE0C70
.std:000000014EAE0C70                                                 ; __int64 __fastcall sub_14EAE0C70(__int64)
.std:000000014EAE0C70                                                 sub_14EAE0C70   proc near               ; CODE XREF: sub_140A82A80:loc_140A842AB↑p
.std:000000014EAE0C70
.std:000000014EAE0C70                                                 var_98          = qword ptr -98h
.std:000000014EAE0C70                                                 var_90          = qword ptr -90h
.std:000000014EAE0C70                                                 var_88          = dword ptr -88h
.std:000000014EAE0C70                                                 var_78          = qword ptr -78h
.std:000000014EAE0C70                                                 var_70          = qword ptr -70h
.std:000000014EAE0C70                                                 var_68          = xmmword ptr -68h
.std:000000014EAE0C70                                                 var_58          = xmmword ptr -58h
.std:000000014EAE0C70                                                 var_40          = qword ptr -40h
.std:000000014EAE0C70                                                 var_38          = qword ptr -38h
.std:000000014EAE0C70                                                 var_30          = qword ptr -30h
.std:000000014EAE0C70                                                 arg_0           = qword ptr  8
.std:000000014EAE0C70                                                 arg_8           = qword ptr  10h
.std:000000014EAE0C70                                                 arg_10          = qword ptr  18h
.std:000000014EAE0C70                                                 arg_18          = qword ptr  20h
.std:000000014EAE0C70
.std:000000014EAE0C70 48 8B C4                                                        mov     rax, rsp
.std:000000014EAE0C73 48 89 48 08                                                     mov     [rax+8], rcx
.std:000000014EAE0C77 53                                                              push    rbx
.std:000000014EAE0C78 55                                                              push    rbp
.std:000000014EAE0C79 56                                                              push    rsi
.std:000000014EAE0C7A 57                                                              push    rdi
.std:000000014EAE0C7B 41 55                                                           push    r13
.std:000000014EAE0C7D 48 81 EC 90 00 00 00                                            sub     rsp, 90h
.std:000000014EAE0C84 48 8B F9                                                        mov     rdi, rcx
.std:000000014EAE0C87 0F 29 70 A8                                                     movaps  xmmword ptr [rax-58h], xmm6
.std:000000014EAE0C8B 48 8D 48 10                                                     lea     rcx, [rax+10h]
.std:000000014EAE0C8F 0F 29 78 98                                                     movaps  xmmword ptr [rax-68h], xmm7
.std:000000014EAE0C93 FF 15 37 A8 A9 01                                               call    cs:qword_15057B4D0
.std:000000014EAE0C99 48 63 B7 20 09 00 00                                            movsxd  rsi, dword ptr [rdi+920h]
.std:000000014EAE0CA0 0F 57 FF                                                        xorps   xmm7, xmm7
.std:000000014EAE0CA3 F2 48 0F 2A BC 24 C8 00 00 00                                   cvtsi2sd xmm7, qword ptr [rsp+0C8h]
.std:000000014EAE0CAD 45 33 ED                                                        xor     r13d, r13d
.std:000000014EAE0CB0 48 8B DE                                                        mov     rbx, rsi
.std:000000014EAE0CB3 48 89 5C 24 48                                                  mov     [rsp+48h], rbx
.std:000000014EAE0CB8 F2 0F 59 3D 50 3D 84 08                                         mulsd   xmm7, cs:qword_157324A10
.std:000000014EAE0CC0 85 F6                                                           test    esi, esi
.std:000000014EAE0CC2 0F 8E D6 01 00 00                                               jle     loc_14EAE0E9E
.std:000000014EAE0CC8 4C 89 A4 24 88 00 00 00                                         mov     [rsp+88h], r12
.std:000000014EAE0CD0 48 8D B7 18 09 00 00                                            lea     rsi, [rdi+918h]
.std:000000014EAE0CD7 4C 89 B4 24 80 00 00 00                                         mov     [rsp+80h], r14
.std:000000014EAE0CDF 48 8D AF F0 0D 00 00                                            lea     rbp, [rdi+0DF0h]
.std:000000014EAE0CE6 48 89 74 24 40                                                  mov     [rsp+40h], rsi
.std:000000014EAE0CEB 45 8B E5                                                        mov     r12d, r13d
.std:000000014EAE0CEE 4C 89 7C 24 78                                                  mov     [rsp+78h], r15
.std:000000014EAE0CF3 48 89 9C 24 D8 00 00 00                                         mov     [rsp+0D8h], rbx
.std:000000014EAE0CFB 0F 1F 44 00 00                                                  nop     dword ptr [rax+rax+00h]
.std:000000014EAE0D00
.std:000000014EAE0D00                                                 loc_14EAE0D00:                          ; CODE XREF: sub_14EAE0C70+204↓j
.std:000000014EAE0D00 41 8B DD                                                        mov     ebx, r13d
.std:000000014EAE0D03
.std:000000014EAE0D03                                                 loc_14EAE0D03:                          ; CODE XREF: sub_14EAE0C70+EF↓j
.std:000000014EAE0D03 85 DB                                                           test    ebx, ebx
.std:000000014EAE0D05 0F 88 CB 00 00 00                                               js      loc_14EAE0DD6
.std:000000014EAE0D0B 3B 5D 08                                                        cmp     ebx, [rbp+8]
.std:000000014EAE0D0E 0F 8D C2 00 00 00                                               jge     loc_14EAE0DD6
.std:000000014EAE0D14 48 8B CD                                                        mov     rcx, rbp
.std:000000014EAE0D17 FF 15 23 9F D6 07                                               call    cs:off_15684AC40 ; v8_qjs::External::Value(void) ...
.std:000000014EAE0D1D 48 63 FB                                                        movsxd  rdi, ebx
.std:000000014EAE0D20 48 8B 04 F8                                                     mov     rax, [rax+rdi*8]
.std:000000014EAE0D24 80 38 06                                                        cmp     byte ptr [rax], 6
.std:000000014EAE0D27 74 34                                                           jz      short loc_14EAE0D5D
.std:000000014EAE0D29 48 8B CD                                                        mov     rcx, rbp
.std:000000014EAE0D2C FF 15 0E 9F D6 07                                               call    cs:off_15684AC40 ; v8_qjs::External::Value(void) ...
.std:000000014EAE0D32 48 8B 0C F8                                                     mov     rcx, [rax+rdi*8]
.std:000000014EAE0D36 4C 39 A9 18 02 00 00                                            cmp     [rcx+218h], r13
.std:000000014EAE0D3D 74 1E                                                           jz      short loc_14EAE0D5D
.std:000000014EAE0D3F 48 8B CD                                                        mov     rcx, rbp
.std:000000014EAE0D42 FF 15 F8 9E D6 07                                               call    cs:off_15684AC40 ; v8_qjs::External::Value(void) ...
.std:000000014EAE0D48 48 8B 0C F8                                                     mov     rcx, [rax+rdi*8]
.std:000000014EAE0D4C 48 8B 89 18 02 00 00                                            mov     rcx, [rcx+218h]
.std:000000014EAE0D53 E8 28 38 91 FF                                                  call    sub_14E3F4580
.std:000000014EAE0D58 48 85 C0                                                        test    rax, rax
.std:000000014EAE0D5B 75 04                                                           jnz     short loc_14EAE0D61
.std:000000014EAE0D5D
.std:000000014EAE0D5D                                                 loc_14EAE0D5D:                          ; CODE XREF: sub_14EAE0C70+B7↑j
.std:000000014EAE0D5D                                                                                         ; sub_14EAE0C70+CD↑j
.std:000000014EAE0D5D FF C3                                                           inc     ebx
.std:000000014EAE0D5F EB A2                                                           jmp     short loc_14EAE0D03
.std:000000014EAE0D61                                                 ; ---------------------------------------------------------------------------
.std:000000014EAE0D61
.std:000000014EAE0D61                                                 loc_14EAE0D61:                          ; CODE XREF: sub_14EAE0C70+EB↑j
.std:000000014EAE0D61 48 8B CD                                                        mov     rcx, rbp
.std:000000014EAE0D64 FF 15 D6 9E D6 07                                               call    cs:off_15684AC40 ; v8_qjs::External::Value(void) ...
.std:000000014EAE0D6A 48 8B 0C F8                                                     mov     rcx, [rax+rdi*8]
.std:000000014EAE0D6E 48 8B 89 18 02 00 00                                            mov     rcx, [rcx+218h]
.std:000000014EAE0D75 E8 06 38 91 FF                                                  call    sub_14E3F4580
.std:000000014EAE0D7A 4C 8B F8                                                        mov     r15, rax
.std:000000014EAE0D7D 48 85 C0                                                        test    rax, rax
.std:000000014EAE0D80 74 54                                                           jz      short loc_14EAE0DD6
.std:000000014EAE0D82 48 8B CE                                                        mov     rcx, rsi
.std:000000014EAE0D85 FF 15 B5 9E D6 07                                               call    cs:off_15684AC40 ; v8_qjs::External::Value(void) ...
.std:000000014EAE0D8B 49 03 C4                                                        add     rax, r12
.std:000000014EAE0D8E 44 39 68 08                                                     cmp     [rax+8], r13d
.std:000000014EAE0D92 74 0E                                                           jz      short loc_14EAE0DA2
.std:000000014EAE0D94 48 8B C8                                                        mov     rcx, rax
.std:000000014EAE0D97 FF 15 A3 9E D6 07                                               call    cs:off_15684AC40 ; v8_qjs::External::Value(void) ...
.std:000000014EAE0D9D 4C 8B F0                                                        mov     r14, rax
.std:000000014EAE0DA0 EB 07                                                           jmp     short loc_14EAE0DA9
.std:000000014EAE0DA2                                                 ; ---------------------------------------------------------------------------
.std:000000014EAE0DA2
.std:000000014EAE0DA2                                                 loc_14EAE0DA2:                          ; CODE XREF: sub_14EAE0C70+122↑j
.std:000000014EAE0DA2 4C 8D 35 AF 78 BE 01                                            lea     r14, word_1506C8658
.std:000000014EAE0DA9
.std:000000014EAE0DA9                                                 loc_14EAE0DA9:                          ; CODE XREF: sub_14EAE0C70+130↑j
.std:000000014EAE0DA9 49 8B 77 28                                                     mov     rsi, [r15+28h]
.std:000000014EAE0DAD E8 3E 13 DC FD                                                  call    sub_14C8A20F0
.std:000000014EAE0DB2 49 8B 17                                                        mov     rdx, [r15]
.std:000000014EAE0DB5 49 8B CF                                                        mov     rcx, r15
.std:000000014EAE0DB8 48 8B D8                                                        mov     rbx, rax
.std:000000014EAE0DBB FF 92 58 01 00 00                                               call    qword ptr [rdx+158h]
.std:000000014EAE0DC1 4C 8B CB                                                        mov     r9, rbx
.std:000000014EAE0DC4 49 8D 4F 28                                                     lea     rcx, [r15+28h]
.std:000000014EAE0DC8 48 8B D0                                                        mov     rdx, rax
.std:000000014EAE0DCB 4D 8B C6                                                        mov     r8, r14
.std:000000014EAE0DCE FF 56 08                                                        call    qword ptr [rsi+8]
.std:000000014EAE0DD1 E9 8C 00 00 00                                                  jmp     loc_14EAE0E62
.std:000000014EAE0DD6                                                 ; ---------------------------------------------------------------------------
.std:000000014EAE0DD6
.std:000000014EAE0DD6                                                 loc_14EAE0DD6:                          ; CODE XREF: sub_14EAE0C70+95↑j
.std:000000014EAE0DD6                                                                                         ; sub_14EAE0C70+9E↑j ...
.std:000000014EAE0DD6 48 8B CE                                                        mov     rcx, rsi
.std:000000014EAE0DD9 FF 15 61 9E D6 07                                               call    cs:off_15684AC40 ; v8_qjs::External::Value(void) ...
.std:000000014EAE0DDF 49 03 C4                                                        add     rax, r12
.std:000000014EAE0DE2 44 39 68 08                                                     cmp     [rax+8], r13d
.std:000000014EAE0DE6 74 0E                                                           jz      short loc_14EAE0DF6
.std:000000014EAE0DE8 48 8B C8                                                        mov     rcx, rax
.std:000000014EAE0DEB FF 15 4F 9E D6 07                                               call    cs:off_15684AC40 ; v8_qjs::External::Value(void) ...
.std:000000014EAE0DF1 4C 8B F0                                                        mov     r14, rax
.std:000000014EAE0DF4 EB 07                                                           jmp     short loc_14EAE0DFD
.std:000000014EAE0DF6                                                 ; ---------------------------------------------------------------------------
.std:000000014EAE0DF6
.std:000000014EAE0DF6                                                 loc_14EAE0DF6:                          ; CODE XREF: sub_14EAE0C70+176↑j
.std:000000014EAE0DF6 4C 8D 35 5B 78 BE 01                                            lea     r14, word_1506C8658
.std:000000014EAE0DFD
.std:000000014EAE0DFD                                                 loc_14EAE0DFD:                          ; CODE XREF: sub_14EAE0C70+184↑j
.std:000000014EAE0DFD FF 15 7D C6 F3 07                                               call    cs:off_156A1D480 ; AK::WriteBytesCount::Reserve(long) ...
.std:000000014EAE0E03 84 C0                                                           test    al, al
.std:000000014EAE0E05 75 09                                                           jnz     short loc_14EAE0E10
.std:000000014EAE0E07 48 8B 35 7A D6 F3 07                                            mov     rsi, cs:qword_156A1E488
.std:000000014EAE0E0E EB 31                                                           jmp     short loc_14EAE0E41
.std:000000014EAE0E10                                                 ; ---------------------------------------------------------------------------
.std:000000014EAE0E10
.std:000000014EAE0E10                                                 loc_14EAE0E10:                          ; CODE XREF: sub_14EAE0C70+195↑j
.std:000000014EAE0E10 48 8B 0D 71 F6 F3 07                                            mov     rcx, cs:qword_156A20488
.std:000000014EAE0E17 0F B6 05 71 F6 F3 07                                            movzx   eax, byte ptr cs:qword_156A20488+7
.std:000000014EAE0E1E 48 89 8C 24 D0 00 00 00                                         mov     [rsp+0D0h], rcx
.std:000000014EAE0E26 34 36                                                           xor     al, 36h
.std:000000014EAE0E28 80 F1 36                                                        xor     cl, 36h
.std:000000014EAE0E2B 88 84 24 D0 00 00 00                                            mov     [rsp+0D0h], al
.std:000000014EAE0E32 88 8C 24 D7 00 00 00                                            mov     [rsp+0D7h], cl
.std:000000014EAE0E39 48 8B B4 24 D0 00 00 00                                         mov     rsi, [rsp+0D0h]
.std:000000014EAE0E41
.std:000000014EAE0E41                                                 loc_14EAE0E41:                          ; CODE XREF: sub_14EAE0C70+19E↑j
.std:000000014EAE0E41 48 8B 9C 24 C0 00 00 00                                         mov     rbx, [rsp+0C0h]
.std:000000014EAE0E49 48 8B 7B 28                                                     mov     rdi, [rbx+28h]
.std:000000014EAE0E4D E8 9E 12 DC FD                                                  call    sub_14C8A20F0
.std:000000014EAE0E52 4C 8B C8                                                        mov     r9, rax
.std:000000014EAE0E55 48 8D 4B 28                                                     lea     rcx, [rbx+28h]
.std:000000014EAE0E59 4D 8B C6                                                        mov     r8, r14
.std:000000014EAE0E5C 48 8B D6                                                        mov     rdx, rsi
.std:000000014EAE0E5F FF 57 08                                                        call    qword ptr [rdi+8]
.std:000000014EAE0E62
.std:000000014EAE0E62                                                 loc_14EAE0E62:                          ; CODE XREF: sub_14EAE0C70+161↑j
.std:000000014EAE0E62 48 8B 74 24 40                                                  mov     rsi, [rsp+40h]
.std:000000014EAE0E67 49 83 C4 10                                                     add     r12, 10h
.std:000000014EAE0E6B 48 83 AC 24 D8 00 00 00 01                                      sub     qword ptr [rsp+0D8h], 1
.std:000000014EAE0E74 0F 85 86 FE FF FF                                               jnz     loc_14EAE0D00
.std:000000014EAE0E7A 48 8B 5C 24 48                                                  mov     rbx, [rsp+48h]
.std:000000014EAE0E7F 4C 8B 7C 24 78                                                  mov     r15, [rsp+78h]
.std:000000014EAE0E84 8B F3                                                           mov     esi, ebx
.std:000000014EAE0E86 4C 8B B4 24 80 00 00 00                                         mov     r14, [rsp+80h]
.std:000000014EAE0E8E 4C 8B A4 24 88 00 00 00                                         mov     r12, [rsp+88h]
.std:000000014EAE0E96 48 8B BC 24 C0 00 00 00                                         mov     rdi, [rsp+0C0h]
.std:000000014EAE0E9E
.std:000000014EAE0E9E                                                 loc_14EAE0E9E:                          ; CODE XREF: sub_14EAE0C70+52↑j
.std:000000014EAE0E9E 48 8D 8C 24 C0 00 00 00                                         lea     rcx, [rsp+0C0h]
.std:000000014EAE0EA6 FF 15 24 A6 A9 01                                               call    cs:qword_15057B4D0
.std:000000014EAE0EAC 0F 57 F6                                                        xorps   xmm6, xmm6
.std:000000014EAE0EAF F2 48 0F 2A B4 24 C0 00 00 00                                   cvtsi2sd xmm6, qword ptr [rsp+0C0h]
.std:000000014EAE0EB9 F2 0F 59 35 4F 3B 84 08                                         mulsd   xmm6, cs:qword_157324A10
.std:000000014EAE0EC1 F2 0F 5C F7                                                     subsd   xmm6, xmm7
.std:000000014EAE0EC5 F2 0F 59 35 3B C6 BE 01                                         mulsd   xmm6, qword ptr cs:ymmword_1506CD4FC+0Ch
.std:000000014EAE0ECD E8 CE 89 C4 FF                                                  call    sub_14E7298A0
.std:000000014EAE0ED2 0F 28 7C 24 50                                                  movaps  xmm7, xmmword ptr [rsp+50h]
.std:000000014EAE0ED7 0F 57 C9                                                        xorps   xmm1, xmm1
.std:000000014EAE0EDA F3 0F 5A C8                                                     cvtss2sd xmm1, xmm0
.std:000000014EAE0EDE 66 0F 2F F1                                                     comisd  xmm6, xmm1
.std:000000014EAE0EE2 0F 82 AC 00 00 00                                               jb      loc_14EAE0F94
.std:000000014EAE0EE8 80 3D 79 4F A8 08 03                                            cmp     cs:byte_157565E68, 3
.std:000000014EAE0EEF 72 34                                                           jb      short loc_14EAE0F25
.std:000000014EAE0EF1 89 74 24 30                                                     mov     [rsp+30h], esi
.std:000000014EAE0EF5 48 8D 05 A4 F3 17 06                                            lea     rax, aUengineTickdef ; "UEngine::TickDeferredCommands took %.02"...
.std:000000014EAE0EFC F2 0F 11 74 24 28                                               movsd   qword ptr [rsp+28h], xmm6
.std:000000014EAE0F02 4C 8D 05 63 4F A8 08                                            lea     r8, unk_157565E6C
.std:000000014EAE0F09 41 B9 03 00 00 00                                               mov     r9d, 3
.std:000000014EAE0F0F 48 89 44 24 20                                                  mov     [rsp+20h], rax
.std:000000014EAE0F14 BA C7 09 00 00                                                  mov     edx, 9C7h
.std:000000014EAE0F19 48 8D 0D 40 7D BE 01                                            lea     rcx, aUnknown_0 ; "Unknown"
.std:000000014EAE0F20 E8 0B 74 D4 FD                                                  call    sub_14C828330
.std:000000014EAE0F25
.std:000000014EAE0F25                                                 loc_14EAE0F25:                          ; CODE XREF: sub_14EAE0C70+27F↑j
.std:000000014EAE0F25 48 85 DB                                                        test    rbx, rbx
.std:000000014EAE0F28 7E 6A                                                           jle     short loc_14EAE0F94
.std:000000014EAE0F2A 48 8D 2D 1F B0 34 02                                            lea     rbp, aS_17      ; "\t%s"
.std:000000014EAE0F31
.std:000000014EAE0F31                                                 loc_14EAE0F31:                          ; CODE XREF: sub_14EAE0C70+322↓j
.std:000000014EAE0F31 80 3D 30 4F A8 08 03                                            cmp     cs:byte_157565E68, 3
.std:000000014EAE0F38 72 50                                                           jb      short loc_14EAE0F8A
.std:000000014EAE0F3A 48 8D 8F 18 09 00 00                                            lea     rcx, [rdi+918h]
.std:000000014EAE0F41 FF 15 F9 9C D6 07                                               call    cs:off_15684AC40 ; v8_qjs::External::Value(void) ...
.std:000000014EAE0F47 49 03 C5                                                        add     rax, r13
.std:000000014EAE0F4A 83 78 08 00                                                     cmp     dword ptr [rax+8], 0
.std:000000014EAE0F4E 74 0B                                                           jz      short loc_14EAE0F5B
.std:000000014EAE0F50 48 8B C8                                                        mov     rcx, rax
.std:000000014EAE0F53 FF 15 E7 9C D6 07                                               call    cs:off_15684AC40 ; v8_qjs::External::Value(void) ...
.std:000000014EAE0F59 EB 07                                                           jmp     short loc_14EAE0F62
.std:000000014EAE0F5B                                                 ; ---------------------------------------------------------------------------
.std:000000014EAE0F5B
.std:000000014EAE0F5B                                                 loc_14EAE0F5B:                          ; CODE XREF: sub_14EAE0C70+2DE↑j
.std:000000014EAE0F5B 48 8D 05 F6 76 BE 01                                            lea     rax, word_1506C8658
.std:000000014EAE0F62
.std:000000014EAE0F62                                                 loc_14EAE0F62:                          ; CODE XREF: sub_14EAE0C70+2E9↑j
.std:000000014EAE0F62 48 89 44 24 28                                                  mov     [rsp+28h], rax
.std:000000014EAE0F67 4C 8D 05 FE 4E A8 08                                            lea     r8, unk_157565E6C
.std:000000014EAE0F6E 41 B9 03 00 00 00                                               mov     r9d, 3
.std:000000014EAE0F74 48 89 6C 24 20                                                  mov     [rsp+20h], rbp
.std:000000014EAE0F79 BA CB 09 00 00                                                  mov     edx, 9CBh
.std:000000014EAE0F7E 48 8D 0D DB 7C BE 01                                            lea     rcx, aUnknown_0 ; "Unknown"
.std:000000014EAE0F85 E8 A6 73 D4 FD                                                  call    sub_14C828330
.std:000000014EAE0F8A
.std:000000014EAE0F8A                                                 loc_14EAE0F8A:                          ; CODE XREF: sub_14EAE0C70+2C8↑j
.std:000000014EAE0F8A 49 83 C5 10                                                     add     r13, 10h
.std:000000014EAE0F8E 48 83 EB 01                                                     sub     rbx, 1
.std:000000014EAE0F92 75 9D                                                           jnz     short loc_14EAE0F31
.std:000000014EAE0F94
.std:000000014EAE0F94                                                 loc_14EAE0F94:                          ; CODE XREF: sub_14EAE0C70+272↑j
.std:000000014EAE0F94                                                                                         ; sub_14EAE0C70+2B8↑j
.std:000000014EAE0F94 48 8D 8F 18 09 00 00                                            lea     rcx, [rdi+918h]
.std:000000014EAE0F9B 41 B1 01                                                        mov     r9b, 1
.std:000000014EAE0F9E 44 8B C6                                                        mov     r8d, esi
.std:000000014EAE0FA1 33 D2                                                           xor     edx, edx
.std:000000014EAE0FA3 0F 28 74 24 60                                                  movaps  xmm6, xmmword ptr [rsp+60h]
.std:000000014EAE0FA8 48 81 C4 90 00 00 00                                            add     rsp, 90h
.std:000000014EAE0FAF 41 5D                                                           pop     r13
.std:000000014EAE0FB1 5F                                                              pop     rdi
.std:000000014EAE0FB2 5E                                                              pop     rsi
.std:000000014EAE0FB3 5D                                                              pop     rbp
.std:000000014EAE0FB4 5B                                                              pop     rbx
.std:000000014EAE0FB5 E9 A6 1C 80 F2                                                  jmp     sub_1412E2C60
.std:000000014EAE0FB5                                                 sub_14EAE0C70   endp


__int64 __fastcall sub_14EAE0C70(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // r13
  __int64 v4; // rbx
  double v5; // xmm7_8
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r12
  int i; // ebx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // rax
  __int16 *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int16 *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  double v27; // xmm6_8
  __int64 v28; // r9
  __int64 v29; // rax
  __int16 *v30; // rax
  __int64 v32; // [rsp+40h] [rbp-78h]
  __int64 v33; // [rsp+48h] [rbp-70h]
  __int64 v34; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v36; // [rsp+D0h] [rbp+18h]
  __int64 v37; // [rsp+D8h] [rbp+20h]

  v34 = a1;
  v1 = a1;
  MEMORY[0x13F3B384](&v35);
  v2 = *(int *)(v1 + 0x920);
  v3 = 0LL;
  v4 = v2;
  v33 = v2;
  v5 = (double)(int)v35 * *(double *)&qword_157324A10;
  if ( (int)v2 > 0 )
  {
    v6 = v1 + 0x918;
    v7 = v1 + 0xDF0;
    v32 = v1 + 0x918;
    v8 = 0LL;
    v37 = v4;
    do
    {
      for ( i = 0; i >= 0 && i < *(_DWORD *)(v7 + 8); ++i )
      {
        if ( **(_BYTE **)(off_15684AC40(v7) + 8LL * i) != 6 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(off_15684AC40(v7) + 8LL * i) + 0x218LL) )
          {
            v10 = off_15684AC40(v7);
            if ( sub_14E3F4580(*(_QWORD *)(*(_QWORD *)(v10 + 8LL * i) + 0x218LL)) )
            {
              v11 = off_15684AC40(v7);
              v12 = (_QWORD *)sub_14E3F4580(*(_QWORD *)(*(_QWORD *)(v11 + 8LL * i) + 0x218LL));
              if ( v12 )
              {
                v13 = v8 + off_15684AC40(v6);
                if ( *(_DWORD *)(v13 + 8) )
                  v14 = (__int16 *)off_15684AC40(v13);
                else
                  v14 = &word_1506C8658;
                v15 = v12[5];
                v16 = sub_14C8A20F0();
                v17 = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 0x158LL))(v12);
                (*(void (__fastcall **)(_QWORD *, __int64, __int16 *, __int64))(v15 + 8))(v12 + 5, v17, v14, v16);
                goto LABEL_22;
              }
              break;
            }
          }
        }
      }
      v18 = v8 + off_15684AC40(v6);
      if ( *(_DWORD *)(v18 + 8) )
        v22 = (__int16 *)off_15684AC40(v18);
      else
        v22 = &word_1506C8658;
      if ( (unsigned __int8)off_156A1D480(v20, v19, v21) )
      {
        v36 = qword_156A20488;
        LOBYTE(v36) = HIBYTE(qword_156A20488) ^ 0x36;
        HIBYTE(v36) = qword_156A20488 ^ 0x36;
        v23 = v36;
      }
      else
      {
        v23 = qword_156A1E488;
      }
      v24 = v34;
      v25 = *(_QWORD *)(v34 + 0x28);
      v26 = sub_14C8A20F0();
      (*(void (__fastcall **)(__int64, __int64, __int16 *, __int64))(v25 + 8))(v24 + 0x28, v23, v22, v26);
LABEL_22:
      v6 = v32;
      v8 += 0x10LL;
      --v37;
    }
    while ( v37 );
    v4 = v33;
    LODWORD(v2) = v33;
    v1 = v34;
  }
  MEMORY[0x13F3B384](&v34);
  v27 = ((double)(int)v34 * *(double *)&qword_157324A10 - v5) * 0.001;
  if ( v27 >= sub_14E7298A0() )
  {
    if ( (unsigned __int8)byte_157565E68 >= 3u )
      sub_14C828330(
        "Unknown",
        0x9C7LL,
        &unk_157565E6C,
        3LL,
        L"UEngine::TickDeferredCommands took %.02fms to execute %d commands!",
        v27,
        v2);
    if ( v4 > 0 )
    {
      do
      {
        if ( (unsigned __int8)byte_157565E68 >= 3u )
        {
          v29 = v3 + off_15684AC40(v1 + 0x918);
          if ( *(_DWORD *)(v29 + 8) )
            v30 = (__int16 *)off_15684AC40(v29);
          else
            v30 = &word_1506C8658;
          sub_14C828330("Unknown", 0x9CBLL, &unk_157565E6C, 3LL, L"\t%s", v30);
        }
        v3 += 0x10LL;
        --v4;
      }
      while ( v4 );
    }
  }
  LOBYTE(v28) = 1;
  return sub_1412E2C60(v1 + 0x918, 0LL, (unsigned int)v2, v28);
}


```
---
GetGname
---

```c

__int64 __fastcall sub_1452CD550(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r13
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  const _QWORD *v13; // r12
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  int v26; // ebx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // [rsp+40h] [rbp-48h] BYREF
  char v48[64]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v50; // [rsp+98h] [rbp+10h] BYREF
  __int64 v51; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 0x20);
  if ( !v3 )
    return 0LL;
  v6 = a3[0x1E];
  if ( !v6 && (v6 = sub_14E20B010(a3)) == 0
    || (v10 = sub_14EE69560(),
        v7 = *(_QWORD *)(v6 + 8),
        v9 = v10 + 0x30,
        v11 = *(int *)(v10 + 0x38),
        (int)v11 > *(_DWORD *)(v7 + 0x38))
    || (v8 = v11, *(_QWORD *)(*(_QWORD *)(v7 + 0x30) + 8 * v11) != v9) )
  {
    if ( (unsigned __int8)qword_156A1DE80(v8, v7, v9) )
    {
      v50 = unk_156A20E88;
      LOBYTE(v50) = byte_156A20E8F ^ 0x36;
      HIBYTE(v50) = unk_156A20E88 ^ 0x36;
      v6 = v50;
    }
    else
    {
      v6 = qword_156A1EE88;
    }
  }
  v12 = a3[0x54];
  if ( !v12 )
    return 0LL;
  if ( *(_DWORD *)(a2 + 0x18) )
    v13 = (const _QWORD *)qword_15684B640(a2 + 0x10);
  else
    v13 = &word_1506C9058;
  v51 = *(_QWORD *)(v3 + 8);
  v14 = 0LL;
  v15 = *(_QWORD *)(v6 + 0xF8);
  if ( !v15 )
  {
    v16 = 0LL;
    goto LABEL_25;
  }
  v16 = v15 & 0xFFFFFFFFFFFFLL;
  v17 = HIWORD(v15) & 0x3FFF;
  v50 = v15 & 0xFFFFFFFFFFFFLL;
  if ( v15 < 0 )
  {
    switch ( dword_15684B664 )
    {
      case 1:
        sub_140A8D550(qword_1573D8CC0, &v50, 4LL, HIWORD(v15) & 0x3FFF);
        goto LABEL_23;
      case 2:
        v18 = qword_1573D8CC8;
        v19 = (unsigned int)v17;
        break;
      case 3:
        v18 = qword_1573D8CD0[v17];
        v19 = (unsigned int)v17;
        break;
      default:
        goto LABEL_23;
    }
    (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v18 + 0x40))(&v50, 4LL, v19, *(_QWORD *)(v18 + 8));
LABEL_23:
    v16 = v50 & 0xFFFFFFFFFFFFLL;
    if ( (v50 & 0x800000000000LL) != 0 )
      v16 = v50 & 0xFFFFFFFFFFFFLL | 0xFFFF000000000000uLL;
  }
LABEL_25:
  v20 = (_QWORD *)sub_14C8D5980(v48, v13, 1LL);
  sub_14CC43870(&v47, v16, v51, *v20);
  if ( !*(_BYTE *)(a1 + 8) )
  {
    v26 = v47;
    v27 = v12;
    if ( v12 == 0xFFFFFFFFFFFFFFFFuLL )
      v27 = sub_14CBE0B40();
    v28 = sub_14CC4EDC0(v3, v27, v26, 0xFFFFFFF, 0LL, 0, 0x7F800000);
    v24 = v28;
    if ( v28 )
    {
      sub_14E2118D0(v28, v6);
      goto LABEL_36;
    }
    return 0LL;
  }
  v21 = sub_1452D3330(v6);
  if ( !v21 )
  {
    if ( (unsigned __int8)byte_1570634F0 >= 2u )
      sub_14C828D30(
        (unsigned int)L"ordAsyncEndOfFrame is also enabled.",
        0x1CD,
        (unsigned int)&unk_1570634F4,
        2,
        (__int64)&unk_151F6F060);
    return 0LL;
  }
  v22 = sub_1452D3390(v21 + 0x88, a3[0x52], v6);
  v23 = sub_1452D4620(v22, a2);
  v24 = v23;
  if ( !v23 )
    return 0LL;
  sub_14E0613E0(v12, v23);
LABEL_36:
  v29 = sub_14EE33580();
  v31 = *(_QWORD *)(v24 + 8);
  v32 = v29 + 0x30;
  v33 = *(int *)(v29 + 0x38);
  if ( (int)v33 > *(_DWORD *)(v31 + 0x38) )
    goto LABEL_51;
  v30 = v33;
  if ( *(_QWORD *)(*(_QWORD *)(v31 + 0x30) + 8 * v33) != v32 || !v24 )
    goto LABEL_51;
  sub_14E2DEC30(v24, (unsigned int)&xmmword_1573A97F0, 0, 0, 0);
  v34 = *(_QWORD *)(v12 + 0x180);
  v51 = 0LL;
  if ( v34 )
  {
    v14 = v34 & 0xFFFFFFFFFFFFLL;
    v35 = HIWORD(v34) & 0x3FFF;
    v50 = v34 & 0xFFFFFFFFFFFFLL;
    if ( (v34 & 0x8000000000000000uLL) != 0LL )
    {
      switch ( dword_15684B664 )
      {
        case 1:
          sub_140A8D550(qword_1573D8CC0, &v50, 4LL, HIWORD(v34) & 0x3FFF);
          goto LABEL_48;
        case 2:
          v36 = qword_1573D8CC8;
          v37 = (unsigned int)v35;
          break;
        case 3:
          v37 = HIWORD(v34) & 0x3FFF;
          v36 = qword_1573D8CD0[v35];
          break;
        default:
          goto LABEL_48;
      }
      (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v36 + 0x40))(&v50, 4LL, v37, *(_QWORD *)(v36 + 8));
LABEL_48:
      v14 = v50 & 0xFFFFFFFFFFFFLL;
      if ( (v50 & 0x800000000000LL) != 0 )
        v14 = v50 & 0xFFFFFFFFFFFFLL | 0xFFFF000000000000uLL;
    }
  }
  sub_14E2BC270(v24, v14, &dword_157533678, v51);
LABEL_51:
  v38 = sub_14EE004F0(v30, v31, v32);
  v40 = *(_QWORD *)(v24 + 8);
  v41 = v38 + 0x30;
  v42 = *(int *)(v38 + 0x38);
  if ( (int)v42 <= *(_DWORD *)(v40 + 0x38) )
  {
    v39 = v42;
    if ( *(_QWORD *)(*(_QWORD *)(v40 + 0x30) + 8 * v42) == v41 )
    {
      if ( v24 )
        *(_BYTE *)(v24 + 0xCB) &= ~0x10u;
    }
  }
  v43 = sub_14EE3B3C0(v39, v40, v41);
  v44 = *(_QWORD *)(v24 + 8);
  v45 = v43 + 0x30;
  v46 = *(int *)(v43 + 0x38);
  if ( (int)v46 <= *(_DWORD *)(v44 + 0x38) && *(_QWORD *)(*(_QWORD *)(v44 + 0x30) + 8 * v46) == v45 )
  {
    if ( v24 )
    {
      sub_14E2DCC80(v24, 2LL);
      sub_14E2DCA50(v24, 0LL);
    }
  }
  return v24;
}

```
---

Fun Bone 
---


```c

__int64 __fastcall sub_14E2CBA30(__int64 a1, __int64 a2)
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
    v8 = _mm_div_ps(v7, (__m128)xmmword_157530CE0);
    v9 = _mm_cvtepi32_ps(_mm_cvttps_epi32(v8));
    v10 = _mm_sub_ps(
            v7,
            _mm_mul_ps(
              _mm_xor_ps(
                _mm_and_ps(
                  _mm_cmple_ps((__m128)xmmword_157530CF0, _mm_and_ps(v8, (__m128)xmmword_157530A20)),
                  _mm_xor_ps(v9, v8)),
                v9),
              (__m128)xmmword_157530CE0));
    v11 = _mm_add_ps((__m128)xmmword_157530CE0, v10);
    v12 = _mm_xor_ps(_mm_and_ps(_mm_xor_ps(v11, v10), _mm_cmple_ps((__m128)0LL, v10)), v11);
    v13 = _mm_xor_ps(
            _mm_and_ps(
              _mm_xor_ps(_mm_sub_ps(v12, (__m128)xmmword_157530CE0), v12),
              _mm_cmplt_ps((__m128)xmmword_157530CD0, v12)),
            v12);
    *(_QWORD *)v6 = _mm_unpacklo_ps(v13, _mm_shuffle_ps(v13, v13, 0x55)).m128_u64[0];
    *(_DWORD *)(v6 + 8) = _mm_shuffle_ps(v13, v13, 0xAA).m128_u32[0];
    *(_OWORD *)(a1 + 0x1F0) = *(_OWORD *)sub_14C8333D0(v6, v21);
  }
  v14 = *(_OWORD *)(a1 + 0x1F0);
  v15 = (unsigned __int64 *)sub_140EC11E0(a1, &v20);
  v16 = (__m128)*((unsigned int *)v15 + 2);
  v17 = (__m128)*v15;
  result = a2;
  *(__m128 *)(a2 + 0x10) = _mm_movelh_ps(v17, v16);
  *(_OWORD *)a2 = v14;
  *(__m128 *)(a2 + 0x20) = _mm_movelh_ps((__m128)v19, (__m128)_mm_cvtsi32_si128(v3));
  return result;
}

```
---
fun Get Genam This is fun Encore amd Xmm pointer offset 
---

```c
// ZoneEncore
else
  {
    sub_150266D5D(a2, v4, v3);
    sub_14C8E07C0(a2, *(unsigned __int16 *)a1 >> 6);
    result = *(unsigned __int16 *)a1 >> 6;
    if ( (_DWORD)result )
    {
      v7 = &a2[result];
      v8 = &a2[2 * result];
      do
      {
        v9 = (char)*--v7;
        *((_WORD *)v8 + 0xFFFFFFFF) = v9;
        v8 += 0xFFFFFFFE;
        v10 = (_DWORD)result == 1;
        result = (unsigned int)(result - 1);
      }
      while ( !v10 );
    }
  }
//encore Type 1 byte char*


__int64 __fastcall sub_14C8E07C0(_BYTE *a1, unsigned int a2)
{
  __int64 result; // rax

  result = 9 * (a2 / 9);
  switch ( a2 % 9 )
  {
    case 0u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 & 0x1F) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 1u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 ^ 0xDF) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 2u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 | 0xCF) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 3u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(0x21 * a2 + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 4u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 >> 2) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 5u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(3 * (a2 - 0x29)) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 6u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + ((4 * a2) | 5) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 7u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + ((a2 >> 4) | 7) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 8u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 ^ 0xC) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    default:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int8)(a2 + (a2 ^ 0x40) + 0x80) | 0x7F;
          result = (unsigned int)(result + 1);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
  }
  return result;
}


//encode name  _WORD
if ( (*a1 & 1) != 0 )
  {
    sub_150266D5D(a2, v4, 2 * v3);
    return sub_14C8E09D0(a2, *(unsigned __int16 *)a1 >> 6);
  }
  
__int64 __fastcall sub_14C8E09D0(_WORD *a1, unsigned int a2)
{
  __int64 result; // rax

  result = 9 * (a2 / 9);
  switch ( a2 % 9 )
  {
    case 0u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 & 0x1F) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 1u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 ^ 0xDF) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 2u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 | 0xCF) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 3u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(0x21 * a2 + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 4u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 >> 2) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 5u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(3 * a2 + 0x85) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 6u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + ((4 * a2) | 5) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 7u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + ((a2 >> 4) | 7) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    case 8u:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 ^ 0xC) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
    default:
      if ( *a1 )
      {
        result = 0LL;
        do
        {
          a1[result] ^= (unsigned __int16)(a2 + (a2 ^ 0x40) + 0x80) | 0x7F;
          result = (unsigned int)(result + 2);
        }
        while ( (unsigned int)result < a2 );
      }
      break;
  }
  return result;
}


```
---
fun Get Genam ASm_log All
---

```asm


	__int64 __fastcall sub_14C8E9560(_DWORD *a1, __int64 a2)
	{
	  unsigned int v3; // ebx
	  _QWORD *v4; // rdx
	  unsigned __int16 *v5; // rbx
	  int v7; // [rsp+34h] [rbp+Ch]

	  v3 = *a1 >> 0x12;
	  v7 = *a1 & 0x3FFFF;
	  if ( byte_1573DCB2C )
	  {
		v4 = &unk_1573DCE00;
	  }
	  else
	  {
		v4 = (_QWORD *)sub_14C8D5BE0(&unk_1573DCE00);
		byte_1573DCB2C = 1;
	  }
	  v5 = (unsigned __int16 *)(v4[v3 + 1] + (unsigned int)(2 * v7));
	  sub_14C8DE5A0(v5, a2);
	  *(_WORD *)(a2 + 2 * ((unsigned __int64)*v5 >> 6)) = 0;
	  return *v5 >> 6;
	}
	//asm
	.text:000000014C8E9560                         ; __int64 __fastcall sub_14C8E9560(_DWORD *, __int64)
	.text:000000014C8E9560                         sub_14C8E9560   proc near               ; CODE XREF: sub_14CC64FA0+34C↓p
	.text:000000014C8E9560
	.text:000000014C8E9560                         arg_0           = qword ptr  8
	.text:000000014C8E9560                         arg_8           = qword ptr  10h
	.text:000000014C8E9560
	.text:000000014C8E9560 48 89 5C 24 10                          mov     [rsp+10h], rbx
	.text:000000014C8E9565 57                                      push    rdi
	.text:000000014C8E9566 48 83 EC 20                             sub     rsp, 20h
	.text:000000014C8E956A 8B 01                                   mov     eax, [rcx]
	.text:000000014C8E956C 48 8B FA                                mov     rdi, rdx
	.text:000000014C8E956F 8B D8                                   mov     ebx, eax
	.text:000000014C8E9571 25 FF FF 03 00                          and     eax, 3FFFFh
	.text:000000014C8E9576 C1 EB 12                                shr     ebx, 12h
	.text:000000014C8E9579 80 3D AC 35 AF 0A 00                    cmp     cs:byte_1573DCB2C, 0
	.text:000000014C8E9580 89 5C 24 30                             mov     [rsp+30h], ebx
	.text:000000014C8E9584 89 44 24 34                             mov     [rsp+34h], eax
	.text:000000014C8E9588 74 09                                   jz      short loc_14C8E9593
	.text:000000014C8E958A 48 8D 15 6F 38 AF 0A                    lea     rdx, unk_1573DCE00
	.text:000000014C8E9591 EB 16                                   jmp     short loc_14C8E95A9
	.text:000000014C8E9593                         ; ---------------------------------------------------------------------------
	.text:000000014C8E9593
	.text:000000014C8E9593                         loc_14C8E9593:                          ; CODE XREF: sub_14C8E9560+28↑j
	.text:000000014C8E9593 48 8D 0D 66 38 AF 0A                    lea     rcx, unk_1573DCE00
	.text:000000014C8E959A E8 41 C6 FE FF                          call    sub_14C8D5BE0
	.text:000000014C8E959F 48 8B D0                                mov     rdx, rax
	.text:000000014C8E95A2 C6 05 83 35 AF 0A 01                    mov     cs:byte_1573DCB2C, 1
	.text:000000014C8E95A9
	.text:000000014C8E95A9                         loc_14C8E95A9:                          ; CODE XREF: sub_14C8E9560+31↑j
	.text:000000014C8E95A9 48 8B 44 24 30                          mov     rax, [rsp+30h]
	.text:000000014C8E95AE 8B CB                                   mov     ecx, ebx
	.text:000000014C8E95B0 48 C1 E8 20                             shr     rax, 20h
	.text:000000014C8E95B4 8D 1C 00                                lea     ebx, [rax+rax]
	.text:000000014C8E95B7 48 03 5C CA 08                          add     rbx, [rdx+rcx*8+8]
	.text:000000014C8E95BC 48 8B D7                                mov     rdx, rdi
	.text:000000014C8E95BF 48 8B CB                                mov     rcx, rbx
	.text:000000014C8E95C2 E8 D9 4F FF FF                          call    sub_14C8DE5A0
	.text:000000014C8E95C7 0F B7 03                                movzx   eax, word ptr [rbx]
	.text:000000014C8E95CA 33 C9                                   xor     ecx, ecx
	.text:000000014C8E95CC 48 C1 E8 06                             shr     rax, 6
	.text:000000014C8E95D0 66 89 0C 47                             mov     [rdi+rax*2], cx
	.text:000000014C8E95D4 0F B7 03                                movzx   eax, word ptr [rbx]
	.text:000000014C8E95D7 48 8B 5C 24 38                          mov     rbx, [rsp+38h]
	.text:000000014C8E95DC C1 E8 06                                shr     eax, 6
	.text:000000014C8E95DF 48 83 C4 20                             add     rsp, 20h
	.text:000000014C8E95E3 5F                                      pop     rdi
	.text:000000014C8E95E4 C3                                      retn
	.text:000000014C8E95E4                         sub_14C8E9560   endp
	.text:000000014C8E95E4
	.text:000000014C8E95E4                         ; ---------------------------------------------------------------------------
	.text:000000014C8E95E5 CC CC CC CC CC CC CC CC…                align 10h


__int64 __fastcall sub_14C8E95F0(_WORD *a1, __int64 a2)
{
  _WORD *v3; // rdx
  unsigned __int64 v4; // r8
  unsigned int v5; // edi
  signed int v6; // eax
  __int64 v7; // rax
  signed int v8; // eax
  int v9; // eax
  _WORD v11[1024]; // [rsp+30h] [rbp-818h] BYREF

  v3 = a1 + 1;
  v4 = (unsigned __int64)(unsigned __int16)*a1 >> 6;
  v5 = (unsigned __int16)*a1 >> 6;
  if ( (*a1 & 1) != 0 )
  {
    sub_150266D5D(v11, v3, 2 * v4);
    sub_14C8E09D0(v11, v5);
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    if ( v11[0] && v5 )
    {
      sub_140A82420(a2, v5 + 1);
      v6 = v5 + *(_DWORD *)(a2 + 8) + 1;
      *(_DWORD *)(a2 + 8) = v6;
      if ( v6 > *(_DWORD *)(a2 + 0xC) )
        sub_140A82340(a2);
      v7 = qword_15684B640(a2);
      sub_14C785530(v7, v11, 2LL * v5);
LABEL_12:
      *(_WORD *)(qword_15684B640(a2) + 2LL * *(int *)(a2 + 8) - 2) = 0;
    }
  }
  else
  {
    sub_150266D5D(v11, v3, v4);
    sub_14C8E07C0(v11, v5);
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    if ( LOBYTE(v11[0]) && v5 )
    {
      sub_140A82420(a2, v5 + 1);
      v8 = v5 + *(_DWORD *)(a2 + 8) + 1;
      *(_DWORD *)(a2 + 8) = v8;
      if ( v8 > *(_DWORD *)(a2 + 0xC) )
        sub_140A82340(a2);
      v9 = qword_15684B640(a2);
      sub_140A863F0(v9, v5, (unsigned int)v11, v5, 0x3F);
      goto LABEL_12;
    }
  }
  return a2;
}

.text:000000014C8E95F0                         ; __int64 __fastcall sub_14C8E95F0(_WORD *, __int64)
.text:000000014C8E95F0                         sub_14C8E95F0   proc near               ; CODE XREF: sub_14A997060+CD8↑p
.text:000000014C8E95F0                                                                 ; sub_14C8C6550+26B↑p ...
.text:000000014C8E95F0
.text:000000014C8E95F0                         var_828         = word ptr -828h
.text:000000014C8E95F0                         var_818         = word ptr -818h
.text:000000014C8E95F0                         var_18          = qword ptr -18h
.text:000000014C8E95F0                         var_8           = byte ptr -8
.text:000000014C8E95F0                         arg_10          = qword ptr  18h
.text:000000014C8E95F0                         arg_18          = qword ptr  20h
.text:000000014C8E95F0
.text:000000014C8E95F0 48 89 5C 24 18                          mov     [rsp+18h], rbx
.text:000000014C8E95F5 48 89 74 24 20                          mov     [rsp+20h], rsi
.text:000000014C8E95FA 57                                      push    rdi
.text:000000014C8E95FB 48 81 EC 40 08 00 00                    sub     rsp, 840h
.text:000000014C8E9602 48 8B 05 F7 CB 4D 0A                    mov     rax, cs:qword_156DC6200
.text:000000014C8E9609 48 33 C4                                xor     rax, rsp
.text:000000014C8E960C 48 89 84 24 30 08 00 00                 mov     [rsp+830h], rax
.text:000000014C8E9614 0F B7 01                                movzx   eax, word ptr [rcx]
.text:000000014C8E9617 48 8B DA                                mov     rbx, rdx
.text:000000014C8E961A 44 8B C0                                mov     r8d, eax
.text:000000014C8E961D 48 8D 51 02                             lea     rdx, [rcx+2]
.text:000000014C8E9621 8B F8                                   mov     edi, eax
.text:000000014C8E9623 49 C1 E8 06                             shr     r8, 6
.text:000000014C8E9627 C1 EF 06                                shr     edi, 6
.text:000000014C8E962A 48 8D 4C 24 30                          lea     rcx, [rsp+30h]
.text:000000014C8E962F A8 01                                   test    al, 1
.text:000000014C8E9631 74 71                                   jz      short loc_14C8E96A4
.text:000000014C8E9633 4D 03 C0                                add     r8, r8
.text:000000014C8E9636 E8 22 D7 97 03                          call    sub_150266D5D
.text:000000014C8E963B 8B D7                                   mov     edx, edi
.text:000000014C8E963D 48 8D 4C 24 30                          lea     rcx, [rsp+30h]
.text:000000014C8E9642 E8 89 73 FF FF                          call    sub_14C8E09D0
.text:000000014C8E9647 33 F6                                   xor     esi, esi
.text:000000014C8E9649 48 89 33                                mov     [rbx], rsi
.text:000000014C8E964C 48 89 73 08                             mov     [rbx+8], rsi
.text:000000014C8E9650 66 39 74 24 30                          cmp     [rsp+30h], si
.text:000000014C8E9655 0F 84 C5 00 00 00                       jz      loc_14C8E9720
.text:000000014C8E965B 85 FF                                   test    edi, edi
.text:000000014C8E965D 0F 84 BD 00 00 00                       jz      loc_14C8E9720
.text:000000014C8E9663 8D 57 01                                lea     edx, [rdi+1]
.text:000000014C8E9666 48 8B CB                                mov     rcx, rbx
.text:000000014C8E9669 E8 B2 8D 19 F4                          call    sub_140A82420
.text:000000014C8E966E 8B 53 08                                mov     edx, [rbx+8]
.text:000000014C8E9671 8D 42 01                                lea     eax, [rdx+1]
.text:000000014C8E9674 03 C7                                   add     eax, edi
.text:000000014C8E9676 89 43 08                                mov     [rbx+8], eax
.text:000000014C8E9679 3B 43 0C                                cmp     eax, [rbx+0Ch]
.text:000000014C8E967C 7E 08                                   jle     short loc_14C8E9686
.text:000000014C8E967E 48 8B CB                                mov     rcx, rbx
.text:000000014C8E9681 E8 BA 8C 19 F4                          call    sub_140A82340
.text:000000014C8E9686
.text:000000014C8E9686                         loc_14C8E9686:                          ; CODE XREF: sub_14C8E95F0+8C↑j
.text:000000014C8E9686 48 8B CB                                mov     rcx, rbx
.text:000000014C8E9689 FF 15 B1 1F F6 09                       call    cs:qword_15684B640
.text:000000014C8E968F 44 8B C7                                mov     r8d, edi
.text:000000014C8E9692 48 8D 54 24 30                          lea     rdx, [rsp+30h]  ; _QWORD
.text:000000014C8E9697 4D 03 C0                                add     r8, r8          ; _QWORD
.text:000000014C8E969A 48 8B C8                                mov     rcx, rax        ; _QWORD
.text:000000014C8E969D E8 8E BE E9 FF                          call    sub_14C785530
.text:000000014C8E96A2 EB 6A                                   jmp     short loc_14C8E970E
.text:000000014C8E96A4                         ; ---------------------------------------------------------------------------
.text:000000014C8E96A4
.text:000000014C8E96A4                         loc_14C8E96A4:                          ; CODE XREF: sub_14C8E95F0+41↑j
.text:000000014C8E96A4 E8 B4 D6 97 03                          call    sub_150266D5D
.text:000000014C8E96A9 8B D7                                   mov     edx, edi
.text:000000014C8E96AB 48 8D 4C 24 30                          lea     rcx, [rsp+30h]
.text:000000014C8E96B0 E8 0B 71 FF FF                          call    sub_14C8E07C0
.text:000000014C8E96B5 33 F6                                   xor     esi, esi
.text:000000014C8E96B7 48 89 33                                mov     [rbx], rsi
.text:000000014C8E96BA 48 89 73 08                             mov     [rbx+8], rsi
.text:000000014C8E96BE 40 38 74 24 30                          cmp     [rsp+30h], sil
.text:000000014C8E96C3 74 5B                                   jz      short loc_14C8E9720
.text:000000014C8E96C5 85 FF                                   test    edi, edi
.text:000000014C8E96C7 74 57                                   jz      short loc_14C8E9720
.text:000000014C8E96C9 8D 57 01                                lea     edx, [rdi+1]
.text:000000014C8E96CC 48 8B CB                                mov     rcx, rbx
.text:000000014C8E96CF E8 4C 8D 19 F4                          call    sub_140A82420
.text:000000014C8E96D4 8B 53 08                                mov     edx, [rbx+8]
.text:000000014C8E96D7 8D 42 01                                lea     eax, [rdx+1]
.text:000000014C8E96DA 03 C7                                   add     eax, edi
.text:000000014C8E96DC 89 43 08                                mov     [rbx+8], eax
.text:000000014C8E96DF 3B 43 0C                                cmp     eax, [rbx+0Ch]
.text:000000014C8E96E2 7E 08                                   jle     short loc_14C8E96EC
.text:000000014C8E96E4 48 8B CB                                mov     rcx, rbx
.text:000000014C8E96E7 E8 54 8C 19 F4                          call    sub_140A82340
.text:000000014C8E96EC
.text:000000014C8E96EC                         loc_14C8E96EC:                          ; CODE XREF: sub_14C8E95F0+F2↑j
.text:000000014C8E96EC 48 8B CB                                mov     rcx, rbx
.text:000000014C8E96EF FF 15 4B 1F F6 09                       call    cs:qword_15684B640
.text:000000014C8E96F5 44 8B CF                                mov     r9d, edi
.text:000000014C8E96F8 66 C7 44 24 20 3F 00                    mov     word ptr [rsp+20h], 3Fh ; '?'
.text:000000014C8E96FF 48 8B C8                                mov     rcx, rax
.text:000000014C8E9702 4C 8D 44 24 30                          lea     r8, [rsp+30h]
.text:000000014C8E9707 8B D7                                   mov     edx, edi
.text:000000014C8E9709 E8 E2 CC 19 F4                          call    sub_140A863F0
.text:000000014C8E970E
.text:000000014C8E970E                         loc_14C8E970E:                          ; CODE XREF: sub_14C8E95F0+B2↑j
.text:000000014C8E970E 48 8B CB                                mov     rcx, rbx
.text:000000014C8E9711 FF 15 29 1F F6 09                       call    cs:qword_15684B640
.text:000000014C8E9717 48 63 4B 08                             movsxd  rcx, dword ptr [rbx+8]
.text:000000014C8E971B 66 89 74 48 FE                          mov     [rax+rcx*2-2], si
.text:000000014C8E9720
.text:000000014C8E9720                         loc_14C8E9720:                          ; CODE XREF: sub_14C8E95F0+65↑j
.text:000000014C8E9720                                                                 ; sub_14C8E95F0+6D↑j ...
.text:000000014C8E9720 48 8B C3                                mov     rax, rbx
.text:000000014C8E9723 48 8B 8C 24 30 08 00 00                 mov     rcx, [rsp+830h]
.text:000000014C8E972B 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014C8E972E E8 4D 6C 97 03                          call    __security_check_cookie
.text:000000014C8E9733 4C 8D 9C 24 40 08 00 00                 lea     r11, [rsp+840h]
.text:000000014C8E973B 49 8B 5B 20                             mov     rbx, [r11+20h]
.text:000000014C8E973F 49 8B 73 28                             mov     rsi, [r11+28h]
.text:000000014C8E9743 49 8B E3                                mov     rsp, r11
.text:000000014C8E9746 5F                                      pop     rdi
.text:000000014C8E9747 C3                                      retn
.text:000000014C8E9747                         sub_14C8E95F0   endp
.text:000000014C8E9747
.text:000000014C8E9747                         ; ---------------------------------------------------------------------------
.text:000000014C8E9748 CC CC CC CC CC CC CC CC                 align 10h

```
