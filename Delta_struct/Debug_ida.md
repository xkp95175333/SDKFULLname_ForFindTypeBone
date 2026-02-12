
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
GetGname Def Fun
---

```c

__int64 __fastcall sub_14C8DD210(unsigned int a1, unsigned int a2)
{
  _QWORD *v4; // rsi
  _BYTE *v5; // rbx
  _BYTE *v6; // rdx
  unsigned __int64 v7; // r8
  int v8; // r14d
  __int8 v9; // bl
  __m128i v10; // xmm6
  _BYTE *v11; // rdi
  _BYTE *v12; // rdx
  unsigned __int64 v13; // r8
  int v14; // esi
  unsigned __int32 v15; // xmm1_4
  char *v16; // r8
  unsigned __int64 v17; // rcx
  char *v18; // rdx
  char *v19; // r8
  __int16 v20; // ax
  __int8 *v21; // rax
  __int32 v22; // eax
  __int32 v23; // ebx
  __int64 result; // rax
  __m128i v25; // [rsp+20h] [rbp-E0h] BYREF
  __m128i v26; // [rsp+30h] [rbp-D0h] BYREF
  char v27[2048]; // [rsp+40h] [rbp-C0h] BYREF
  char v28[2048]; // [rsp+840h] [rbp+740h] BYREF

  if ( byte_1573DC12C )
  {
    v4 = &unk_1573DC400;
  }
  else
  {
    v4 = (_QWORD *)sub_14C8D51E0(&unk_1573DC400);
    byte_1573DC12C = 1;
  }
  v25.m128i_i32[1] = a1 & 0x3FFFF;
  v25.m128i_i32[0] = a1 >> 0x12;
  v5 = (_BYTE *)(v4[(a1 >> 0x12) + 1] + 2 * (a1 & 0x3FFFF));
  v6 = v5 + 2;
  v7 = (unsigned __int64)*(unsigned __int16 *)v5 >> 6;
  v8 = *(unsigned __int16 *)v5 >> 6;
  if ( (*v5 & 1) != 0 )
  {
    sub_15026635D(v28, v6, 2 * v7);
    sub_14C8DFFD0(v28, *(unsigned __int16 *)v5 >> 6);
    v9 = 1;
  }
  else
  {
    sub_15026635D(v28, v6, v7);
    sub_14C8DFDC0(v28, *(unsigned __int16 *)v5 >> 6);
    v9 = 0;
  }
  v25.m128i_i8[0xC] = v9;
  v25.m128i_i64[0] = (__int64)v28;
  *(__int16 *)((char *)&v25.m128i_i16[6] + 1) = *(__int16 *)((char *)&v26.m128i_i16[6] + 1);
  v25.m128i_i8[0xF] = v26.m128i_i8[0xF];
  v25.m128i_i32[2] = v8;
  v10 = v25;
  v25.m128i_i32[1] = a2 & 0x3FFFF;
  v25.m128i_i32[0] = a2 >> 0x12;
  v26 = v10;
  v11 = (_BYTE *)(v4[(a2 >> 0x12) + 1] + 2 * (a2 & 0x3FFFF));
  v12 = v11 + 2;
  v13 = (unsigned __int64)*(unsigned __int16 *)v11 >> 6;
  v14 = *(unsigned __int16 *)v11 >> 6;
  if ( (*v11 & 1) != 0 )
  {
    sub_15026635D(v27, v12, 2 * v13);
    sub_14C8DFFD0(v27, *(unsigned __int16 *)v11 >> 6);
    v25.m128i_i8[0xC] = 1;
  }
  else
  {
    sub_15026635D(v27, v12, v13);
    sub_14C8DFDC0(v27, *(unsigned __int16 *)v11 >> 6);
    v25.m128i_i8[0xC] = 0;
  }
  v25.m128i_i32[2] = v14;
  v25.m128i_i64[0] = (__int64)v27;
  *(__int16 *)((char *)&v25.m128i_i16[6] + 1) = *(__int16 *)((char *)&v26.m128i_i16[6] + 1);
  v25.m128i_i8[0xF] = v26.m128i_i8[0xF];
  if ( v9 != (unsigned __int8)BYTE4(_mm_srli_si128(v25, 8).m128i_u64[0]) )
  {
    v15 = _mm_srli_si128(v25, 8).m128i_u32[0];
    v16 = v27;
    v17 = _mm_srli_si128(v10, 8).m128i_u64[0];
    if ( v9 )
      v17 = v15;
    else
      v16 = v28;
    if ( (_DWORD)v17 )
    {
      v18 = &v16[v17];
      v19 = &v16[2 * v17];
      do
      {
        v20 = *--v18;
        *((_WORD *)v19 + 0xFFFFFFFF) = v20;
        v19 += 0xFFFFFFFE;
        LODWORD(v17) = v17 - 1;
      }
      while ( (_DWORD)v17 );
    }
    v21 = &v25.m128i_i8[0xC];
    if ( !v9 )
      v21 = &v26.m128i_i8[0xC];
    *v21 = 1;
  }
  v22 = v25.m128i_i32[2];
  v23 = v26.m128i_i32[2];
  if ( v26.m128i_i32[2] <= (unsigned __int32)v25.m128i_i32[2] )
    v22 = v26.m128i_i32[2];
  if ( v26.m128i_i8[0xC] )
    result = sub_14C78E420(v26.m128i_i64[0], v25.m128i_i64[0], v22);
  else
    result = sub_14C78E320(v26.m128i_i64[0], v25.m128i_i64[0], v22);
  if ( !(_DWORD)result )
    return (unsigned int)(v23 - v25.m128i_i32[2]);
  return result;
}

.std:000000014C8DD20F CC                                                              db 0CCh
.std:000000014C8DD210
.std:000000014C8DD210                                                 ; =============== S U B R O U T I N E =======================================
.std:000000014C8DD210
.std:000000014C8DD210                                                 ; Attributes: bp-based frame fpd=0F60h
.std:000000014C8DD210
.std:000000014C8DD210                                                 ; __int64 __fastcall sub_14C8DD210(unsigned int, unsigned int)
.std:000000014C8DD210                                                 sub_14C8DD210   proc near               ; CODE XREF: sub_14C8DD1F0+11↑j
.std:000000014C8DD210
.std:000000014C8DD210                                                 var_1040        = xmmword ptr -1040h
.std:000000014C8DD210                                                 var_1030        = xmmword ptr -1030h
.std:000000014C8DD210                                                 var_1020        = byte ptr -1020h
.std:000000014C8DD210                                                 var_820         = byte ptr -820h
.std:000000014C8DD210                                                 var_20          = qword ptr -20h
.std:000000014C8DD210                                                 var_10          = xmmword ptr -10h
.std:000000014C8DD210                                                 var_s0          = byte ptr  0
.std:000000014C8DD210                                                 arg_0           = qword ptr  10h
.std:000000014C8DD210                                                 arg_8           = qword ptr  18h
.std:000000014C8DD210                                                 arg_10          = qword ptr  20h
.std:000000014C8DD210                                                 arg_18          = qword ptr  28h
.std:000000014C8DD210
.std:000000014C8DD210                                                 ; __unwind { // sub_15025F80C
.std:000000014C8DD210 48 89 5C 24 08                                                  mov     [rsp+8], rbx
.std:000000014C8DD215 48 89 74 24 10                                                  mov     [rsp+10h], rsi
.std:000000014C8DD21A 48 89 7C 24 18                                                  mov     [rsp+18h], rdi
.std:000000014C8DD21F 4C 89 74 24 20                                                  mov     [rsp+20h], r14
.std:000000014C8DD224 55                                                              push    rbp
.std:000000014C8DD225 48 8D AC 24 A0 F0 FF FF                                         lea     rbp, [rsp-0F60h]
.std:000000014C8DD22D B8 60 10 00 00                                                  mov     eax, 1060h
.std:000000014C8DD232 E8 E9 26 98 03                                                  call    __alloca_probe
.std:000000014C8DD237 48 2B E0                                                        sub     rsp, rax
.std:000000014C8DD23A 0F 29 B4 24 50 10 00 00                                         movaps  xmmword ptr [rsp+1050h], xmm6
.std:000000014C8DD242 48 8B 05 B7 85 4E 0A                                            mov     rax, cs:__security_cookie
.std:000000014C8DD249 48 33 C4                                                        xor     rax, rsp
.std:000000014C8DD24C 48 89 85 40 0F 00 00                                            mov     [rbp+0F40h], rax
.std:000000014C8DD253 80 3D D2 EE AF 0A 00                                            cmp     cs:byte_1573DC12C, 0
.std:000000014C8DD25A 8B FA                                                           mov     edi, edx
.std:000000014C8DD25C 8B D9                                                           mov     ebx, ecx
.std:000000014C8DD25E 74 09                                                           jz      short loc_14C8DD269
.std:000000014C8DD260 48 8D 35 99 F1 AF 0A                                            lea     rsi, unk_1573DC400
.std:000000014C8DD267 EB 16                                                           jmp     short loc_14C8DD27F
.std:000000014C8DD269                                                 ; ---------------------------------------------------------------------------
.std:000000014C8DD269
.std:000000014C8DD269                                                 loc_14C8DD269:                          ; CODE XREF: sub_14C8DD210+4E↑j
.std:000000014C8DD269 48 8D 0D 90 F1 AF 0A                                            lea     rcx, unk_1573DC400
.std:000000014C8DD270 E8 6B 7F FF FF                                                  call    sub_14C8D51E0
.std:000000014C8DD275 48 8B F0                                                        mov     rsi, rax
.std:000000014C8DD278 C6 05 AD EE AF 0A 01                                            mov     cs:byte_1573DC12C, 1
.std:000000014C8DD27F
.std:000000014C8DD27F                                                 loc_14C8DD27F:                          ; CODE XREF: sub_14C8DD210+57↑j
.std:000000014C8DD27F 8B CB                                                           mov     ecx, ebx
.std:000000014C8DD281 81 E3 FF FF 03 00                                               and     ebx, 3FFFFh
.std:000000014C8DD287 C1 E9 12                                                        shr     ecx, 12h
.std:000000014C8DD28A 89 5C 24 24                                                     mov     [rsp+24h], ebx
.std:000000014C8DD28E 89 4C 24 20                                                     mov     [rsp+20h], ecx
.std:000000014C8DD292 48 8B 44 24 20                                                  mov     rax, [rsp+20h]
.std:000000014C8DD297 48 C1 E8 20                                                     shr     rax, 20h
.std:000000014C8DD29B 8D 1C 00                                                        lea     ebx, [rax+rax]
.std:000000014C8DD29E 48 03 5C CE 08                                                  add     rbx, [rsi+rcx*8+8]
.std:000000014C8DD2A3 48 8D 8D 40 07 00 00                                            lea     rcx, [rbp+740h]
.std:000000014C8DD2AA 0F B7 03                                                        movzx   eax, word ptr [rbx]
.std:000000014C8DD2AD 48 8D 53 02                                                     lea     rdx, [rbx+2]
.std:000000014C8DD2B1 44 8B C0                                                        mov     r8d, eax
.std:000000014C8DD2B4 44 8B F0                                                        mov     r14d, eax
.std:000000014C8DD2B7 49 C1 E8 06                                                     shr     r8, 6
.std:000000014C8DD2BB 41 C1 EE 06                                                     shr     r14d, 6
.std:000000014C8DD2BF F6 03 01                                                        test    byte ptr [rbx], 1
.std:000000014C8DD2C2 74 1E                                                           jz      short loc_14C8DD2E2
.std:000000014C8DD2C4 4D 03 C0                                                        add     r8, r8
.std:000000014C8DD2C7 E8 91 90 98 03                                                  call    sub_15026635D
.std:000000014C8DD2CC 0F B7 13                                                        movzx   edx, word ptr [rbx]
.std:000000014C8DD2CF 48 8D 8D 40 07 00 00                                            lea     rcx, [rbp+740h]
.std:000000014C8DD2D6 C1 EA 06                                                        shr     edx, 6
.std:000000014C8DD2D9 E8 F2 2C 00 00                                                  call    sub_14C8DFFD0
.std:000000014C8DD2DE B3 01                                                           mov     bl, 1
.std:000000014C8DD2E0 EB 19                                                           jmp     short loc_14C8DD2FB
.std:000000014C8DD2E2                                                 ; ---------------------------------------------------------------------------
.std:000000014C8DD2E2
.std:000000014C8DD2E2                                                 loc_14C8DD2E2:                          ; CODE XREF: sub_14C8DD210+B2↑j
.std:000000014C8DD2E2 E8 76 90 98 03                                                  call    sub_15026635D
.std:000000014C8DD2E7 0F B7 13                                                        movzx   edx, word ptr [rbx]
.std:000000014C8DD2EA 48 8D 8D 40 07 00 00                                            lea     rcx, [rbp+740h]
.std:000000014C8DD2F1 C1 EA 06                                                        shr     edx, 6
.std:000000014C8DD2F4 E8 C7 2A 00 00                                                  call    sub_14C8DFDC0
.std:000000014C8DD2F9 32 DB                                                           xor     bl, bl
.std:000000014C8DD2FB
.std:000000014C8DD2FB                                                 loc_14C8DD2FB:                          ; CODE XREF: sub_14C8DD210+D0↑j
.std:000000014C8DD2FB 8B CF                                                           mov     ecx, edi
.std:000000014C8DD2FD 88 5C 24 2C                                                     mov     [rsp+2Ch], bl
.std:000000014C8DD301 C1 E9 12                                                        shr     ecx, 12h
.std:000000014C8DD304 48 8D 85 40 07 00 00                                            lea     rax, [rbp+740h]
.std:000000014C8DD30B 48 89 44 24 20                                                  mov     [rsp+20h], rax
.std:000000014C8DD310 81 E7 FF FF 03 00                                               and     edi, 3FFFFh
.std:000000014C8DD316 0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh]
.std:000000014C8DD31B 66 89 44 24 2D                                                  mov     [rsp+2Dh], ax
.std:000000014C8DD320 0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh]
.std:000000014C8DD325 88 44 24 2F                                                     mov     [rsp+2Fh], al
.std:000000014C8DD329 44 89 74 24 28                                                  mov     [rsp+28h], r14d
.std:000000014C8DD32E 0F 28 74 24 20                                                  movaps  xmm6, xmmword ptr [rsp+20h]
.std:000000014C8DD333 89 7C 24 24                                                     mov     [rsp+24h], edi
.std:000000014C8DD337 89 4C 24 20                                                     mov     [rsp+20h], ecx
.std:000000014C8DD33B 48 8B 44 24 20                                                  mov     rax, [rsp+20h]
.std:000000014C8DD340 48 C1 E8 20                                                     shr     rax, 20h ; ' '
.std:000000014C8DD344 0F 29 74 24 30                                                  movaps  xmmword ptr [rsp+30h], xmm6
.std:000000014C8DD349 8D 3C 00                                                        lea     edi, [rax+rax]
.std:000000014C8DD34C 48 03 7C CE 08                                                  add     rdi, [rsi+rcx*8+8]
.std:000000014C8DD351 48 8D 4C 24 40                                                  lea     rcx, [rsp+40h]
.std:000000014C8DD356 0F B7 07                                                        movzx   eax, word ptr [rdi]
.std:000000014C8DD359 48 8D 57 02                                                     lea     rdx, [rdi+2]
.std:000000014C8DD35D 44 8B C0                                                        mov     r8d, eax
.std:000000014C8DD360 8B F0                                                           mov     esi, eax
.std:000000014C8DD362 49 C1 E8 06                                                     shr     r8, 6
.std:000000014C8DD366 C1 EE 06                                                        shr     esi, 6
.std:000000014C8DD369 F6 07 01                                                        test    byte ptr [rdi], 1
.std:000000014C8DD36C 74 1F                                                           jz      short loc_14C8DD38D
.std:000000014C8DD36E 4D 03 C0                                                        add     r8, r8
.std:000000014C8DD371 E8 E7 8F 98 03                                                  call    sub_15026635D
.std:000000014C8DD376 0F B7 17                                                        movzx   edx, word ptr [rdi]
.std:000000014C8DD379 48 8D 4C 24 40                                                  lea     rcx, [rsp+40h]
.std:000000014C8DD37E C1 EA 06                                                        shr     edx, 6
.std:000000014C8DD381 E8 4A 2C 00 00                                                  call    sub_14C8DFFD0
.std:000000014C8DD386 C6 44 24 2C 01                                                  mov     byte ptr [rsp+2Ch], 1
.std:000000014C8DD38B EB 1A                                                           jmp     short loc_14C8DD3A7
.std:000000014C8DD38D                                                 ; ---------------------------------------------------------------------------
.std:000000014C8DD38D
.std:000000014C8DD38D                                                 loc_14C8DD38D:                          ; CODE XREF: sub_14C8DD210+15C↑j
.std:000000014C8DD38D E8 CB 8F 98 03                                                  call    sub_15026635D
.std:000000014C8DD392 0F B7 17                                                        movzx   edx, word ptr [rdi]
.std:000000014C8DD395 48 8D 4C 24 40                                                  lea     rcx, [rsp+40h]
.std:000000014C8DD39A C1 EA 06                                                        shr     edx, 6
.std:000000014C8DD39D E8 1E 2A 00 00                                                  call    sub_14C8DFDC0
.std:000000014C8DD3A2 C6 44 24 2C 00                                                  mov     byte ptr [rsp+2Ch], 0
.std:000000014C8DD3A7
.std:000000014C8DD3A7                                                 loc_14C8DD3A7:                          ; CODE XREF: sub_14C8DD210+17B↑j
.std:000000014C8DD3A7 48 8D 44 24 40                                                  lea     rax, [rsp+40h]
.std:000000014C8DD3AC 89 74 24 28                                                     mov     [rsp+28h], esi
.std:000000014C8DD3B0 48 89 44 24 20                                                  mov     [rsp+20h], rax
.std:000000014C8DD3B5 0F B7 44 24 3D                                                  movzx   eax, word ptr [rsp+3Dh]
.std:000000014C8DD3BA 66 89 44 24 2D                                                  mov     [rsp+2Dh], ax
.std:000000014C8DD3BF 0F B6 44 24 3F                                                  movzx   eax, byte ptr [rsp+3Fh]
.std:000000014C8DD3C4 88 44 24 2F                                                     mov     [rsp+2Fh], al
.std:000000014C8DD3C8 0F 28 4C 24 20                                                  movaps  xmm1, xmmword ptr [rsp+20h]
.std:000000014C8DD3CD 66 0F 6F C1                                                     movdqa  xmm0, xmm1
.std:000000014C8DD3D1 0F 29 4C 24 20                                                  movaps  xmmword ptr [rsp+20h], xmm1
.std:000000014C8DD3D6 66 0F 73 D8 08                                                  psrldq  xmm0, 8
.std:000000014C8DD3DB 66 48 0F 7E C0                                                  movq    rax, xmm0
.std:000000014C8DD3E0 48 C1 E8 20                                                     shr     rax, 20h
.std:000000014C8DD3E4 3A D8                                                           cmp     bl, al
.std:000000014C8DD3E6 74 61                                                           jz      short loc_14C8DD449
.std:000000014C8DD3E8 84 DB                                                           test    bl, bl
.std:000000014C8DD3EA 66 0F 73 DE 08                                                  psrldq  xmm6, 8
.std:000000014C8DD3EF 48 8D 85 40 07 00 00                                            lea     rax, [rbp+740h]
.std:000000014C8DD3F6 66 0F 73 D9 08                                                  psrldq  xmm1, 8
.std:000000014C8DD3FB 4C 8D 44 24 40                                                  lea     r8, [rsp+40h]
.std:000000014C8DD400 66 48 0F 7E F1                                                  movq    rcx, xmm6
.std:000000014C8DD405 4C 0F 44 C0                                                     cmovz   r8, rax
.std:000000014C8DD409 66 48 0F 7E C8                                                  movq    rax, xmm1
.std:000000014C8DD40E 0F 45 C8                                                        cmovnz  ecx, eax
.std:000000014C8DD411 85 C9                                                           test    ecx, ecx
.std:000000014C8DD413 74 21                                                           jz      short loc_14C8DD436
.std:000000014C8DD415 4A 8D 14 01                                                     lea     rdx, [rcx+r8]
.std:000000014C8DD419 4D 8D 04 48                                                     lea     r8, [r8+rcx*2]
.std:000000014C8DD41D 0F 1F 00                                                        nop     dword ptr [rax]
.std:000000014C8DD420
.std:000000014C8DD420                                                 loc_14C8DD420:                          ; CODE XREF: sub_14C8DD210+224↓j
.std:000000014C8DD420 0F BE 42 FF                                                     movsx   eax, byte ptr [rdx-1]
.std:000000014C8DD424 48 8D 52 FF                                                     lea     rdx, [rdx-1]
.std:000000014C8DD428 66 41 89 40 FE                                                  mov     [r8-2], ax
.std:000000014C8DD42D 4D 8D 40 FE                                                     lea     r8, [r8-2]
.std:000000014C8DD431 83 C1 FF                                                        add     ecx, 0FFFFFFFFh
.std:000000014C8DD434 75 EA                                                           jnz     short loc_14C8DD420
.std:000000014C8DD436
.std:000000014C8DD436                                                 loc_14C8DD436:                          ; CODE XREF: sub_14C8DD210+203↑j
.std:000000014C8DD436 84 DB                                                           test    bl, bl
.std:000000014C8DD438 48 8D 44 24 2C                                                  lea     rax, [rsp+2Ch]
.std:000000014C8DD43D 48 8D 4C 24 3C                                                  lea     rcx, [rsp+3Ch]
.std:000000014C8DD442 48 0F 44 C1                                                     cmovz   rax, rcx
.std:000000014C8DD446 C6 00 01                                                        mov     byte ptr [rax], 1
.std:000000014C8DD449
.std:000000014C8DD449                                                 loc_14C8DD449:                          ; CODE XREF: sub_14C8DD210+1D6↑j
.std:000000014C8DD449 48 8B 7C 24 28                                                  mov     rdi, [rsp+28h]
.std:000000014C8DD44E 48 8B 5C 24 38                                                  mov     rbx, [rsp+38h]
.std:000000014C8DD453 8B C7                                                           mov     eax, edi
.std:000000014C8DD455 48 8B 54 24 20                                                  mov     rdx, [rsp+20h]
.std:000000014C8DD45A 3B DF                                                           cmp     ebx, edi
.std:000000014C8DD45C 48 8B 4C 24 30                                                  mov     rcx, [rsp+30h]
.std:000000014C8DD461 0F 46 C3                                                        cmovbe  eax, ebx
.std:000000014C8DD464 80 7C 24 3C 00                                                  cmp     byte ptr [rsp+3Ch], 0
.std:000000014C8DD469 4C 63 C0                                                        movsxd  r8, eax
.std:000000014C8DD46C 74 07                                                           jz      short loc_14C8DD475
.std:000000014C8DD46E E8 AD 0F EB FF                                                  call    sub_14C78E420
.std:000000014C8DD473 EB 05                                                           jmp     short loc_14C8DD47A
.std:000000014C8DD475                                                 ; ---------------------------------------------------------------------------
.std:000000014C8DD475
.std:000000014C8DD475                                                 loc_14C8DD475:                          ; CODE XREF: sub_14C8DD210+25C↑j
.std:000000014C8DD475 E8 A6 0E EB FF                                                  call    sub_14C78E320
.std:000000014C8DD47A
.std:000000014C8DD47A                                                 loc_14C8DD47A:                          ; CODE XREF: sub_14C8DD210+263↑j
.std:000000014C8DD47A 85 C0                                                           test    eax, eax
.std:000000014C8DD47C 75 04                                                           jnz     short loc_14C8DD482
.std:000000014C8DD47E 2B DF                                                           sub     ebx, edi
.std:000000014C8DD480 8B C3                                                           mov     eax, ebx
.std:000000014C8DD482
.std:000000014C8DD482                                                 loc_14C8DD482:                          ; CODE XREF: sub_14C8DD210+26C↑j
.std:000000014C8DD482 48 8B 8D 40 0F 00 00                                            mov     rcx, [rbp+0F40h]
.std:000000014C8DD489 48 33 CC                                                        xor     rcx, rsp
.std:000000014C8DD48C E8 EF 24 98 03                                                  call    sub_15025F980
.std:000000014C8DD491 4C 8D 9C 24 60 10 00 00                                         lea     r11, [rsp+1060h]
.std:000000014C8DD499 49 8B 5B 10                                                     mov     rbx, [r11+10h]
.std:000000014C8DD49D 49 8B 73 18                                                     mov     rsi, [r11+18h]
.std:000000014C8DD4A1 49 8B 7B 20                                                     mov     rdi, [r11+20h]
.std:000000014C8DD4A5 4D 8B 73 28                                                     mov     r14, [r11+28h]
.std:000000014C8DD4A9 41 0F 28 73 F0                                                  movaps  xmm6, xmmword ptr [r11-10h]
.std:000000014C8DD4AE 49 8B E3                                                        mov     rsp, r11
.std:000000014C8DD4B1 5D                                                              pop     rbp
.std:000000014C8DD4B2 C3                                                              retn
.std:000000014C8DD4B2                                                 ; } // starts at 14C8DD210
.std:000000014C8DD4B2                                                 sub_14C8DD210   endp
.std:000000014C8DD4B2
.std:000000014C8DD4B2                                                 ; ---------------------------------------------------------------------------
.std:000000014C8DD4B3 CC CC CC CC CC CC CC CC CC CC CC CC CC                          align 20h

```




---

Fun Bone 
---


```c


.std:000000014D903410
.std:000000014D903410                                                 ; =============== S U B R O U T I N E =======================================
.std:000000014D903410
.std:000000014D903410
.std:000000014D903410                                                 sub_14D903410   proc near
.std:000000014D903410                                                 ; __unwind { // sub_15025F80C
.std:000000014D903410 40 53                                                           push    rbx
.std:000000014D903412 48 83 EC 60                                                     sub     rsp, 60h
.std:000000014D903416 48 8B 05 E3 23 4C 09                                            mov     rax, cs:__security_cookie
.std:000000014D90341D 48 33 C4                                                        xor     rax, rsp
.std:000000014D903420 48 89 44 24 50                                                  mov     [rsp+50h], rax
.std:000000014D903425 48 8B D9                                                        mov     rbx, rcx
.std:000000014D903428 E8 53 5E 98 00                                                  call    sub_14E289280
.std:000000014D90342D 48 8D 54 24 20                                                  lea     rdx, [rsp+20h]
.std:000000014D903432 48 8B CB                                                        mov     rcx, rbx
.std:000000014D903435 E8 F6 7B 9C 00                                                  call    sub_14E2CB030
.std:000000014D90343A 48 8B CB                                                        mov     rcx, rbx
.std:000000014D90343D 0F 10 00                                                        movups  xmm0, xmmword ptr [rax]
.std:000000014D903440 0F 11 83 D0 05 00 00                                            movups  xmmword ptr [rbx+5D0h], xmm0
.std:000000014D903447 0F 10 48 10                                                     movups  xmm1, xmmword ptr [rax+10h]
.std:000000014D90344B 0F 11 8B E0 05 00 00                                            movups  xmmword ptr [rbx+5E0h], xmm1
.std:000000014D903452 0F 10 40 20                                                     movups  xmm0, xmmword ptr [rax+20h]
.std:000000014D903456 0F 11 83 F0 05 00 00                                            movups  xmmword ptr [rbx+5F0h], xmm0
.std:000000014D90345D E8 3E 7C 20 F3                                                  call    sub_140B0B0A0
.std:000000014D903462 0F 10 40 20                                                     movups  xmm0, xmmword ptr [rax+20h]
.std:000000014D903466 0F 28 C8                                                        movaps  xmm1, xmm0
.std:000000014D903469 0F 28 D0                                                        movaps  xmm2, xmm0
.std:000000014D90346C 0F C6 D0 AA                                                     shufps  xmm2, xmm0, 0AAh
.std:000000014D903470 0F C6 C8 55                                                     shufps  xmm1, xmm0, 55h ; 'U'
.std:000000014D903474 0F 14 C1                                                        unpcklps xmm0, xmm1
.std:000000014D903477 F2 0F 11 83 00 06 00 00                                         movsd   qword ptr [rbx+600h], xmm0
.std:000000014D90347F F3 0F 11 93 08 06 00 00                                         movss   dword ptr [rbx+608h], xmm2
.std:000000014D903487 48 8B 4C 24 50                                                  mov     rcx, [rsp+50h]
.std:000000014D90348C 48 33 CC                                                        xor     rcx, rsp
.std:000000014D90348F E8 EC C4 95 02                                                  call    sub_15025F980
.std:000000014D903494 48 83 C4 60                                                     add     rsp, 60h
.std:000000014D903498 5B                                                              pop     rbx
.std:000000014D903499 C3                                                              retn
.std:000000014D903499                                                 ; } // starts at 14D903410
.std:000000014D903499                                                 sub_14D903410   endp
.std:000000014D903499
.std:000000014D903499                                                 ; ---------------------------------------------------------------------------
.std:000000014D90349A CC CC CC CC CC CC                                               align 20h


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
