
```asm
.std:000000014C78FBF0
.std:000000014C78FBF0                                                 ; =============== S U B R O U T I N E =======================================
.std:000000014C78FBF0
.std:000000014C78FBF0
.std:000000014C78FBF0                                                 sub_14C78FBF0   proc near               ; CODE XREF: sub_14C8DB020+24↓j
.std:000000014C78FBF0                                                                                         ; DATA XREF: .std:0000000157E1979C↓o ...
.std:000000014C78FBF0
.std:000000014C78FBF0                                                 arg_0           = dword ptr  8
.std:000000014C78FBF0                                                 arg_8           = qword ptr  10h
.std:000000014C78FBF0                                                 arg_10          = qword ptr  18h
.std:000000014C78FBF0                                                 arg_18          = qword ptr  20h
.std:000000014C78FBF0
.std:000000014C78FBF0 48 89 5C 24 10                                                  mov     [rsp+10h], rbx
.std:000000014C78FBF5 48 89 6C 24 18                                                  mov     [rsp+18h], rbp
.std:000000014C78FBFA 48 89 74 24 20                                                  mov     [rsp+20h], rsi
.std:000000014C78FBFF 57                                                              push    rdi
.std:000000014C78FC00 41 54                                                           push    r12
.std:000000014C78FC02 41 55                                                           push    r13
.std:000000014C78FC04 41 56                                                           push    r14
.std:000000014C78FC06 41 57                                                           push    r15
.std:000000014C78FC08 48 83 EC 20                                                     sub     rsp, 20h        ; Integer Subtraction
.std:000000014C78FC0C 33 F6                                                           xor     esi, esi        ; Logical Exclusive OR
.std:000000014C78FC0E 48 8D 05 C3 46 DE 07                                            lea     rax, off_1545742D8 ; Load Effective Address
.std:000000014C78FC15 48 89 01                                                        mov     [rcx], rax
.std:000000014C78FC18 48 8B D9                                                        mov     rbx, rcx
.std:000000014C78FC1B 48 89 71 08                                                     mov     [rcx+8], rsi
.std:000000014C78FC1F 48 89 71 10                                                     mov     [rcx+10h], rsi
.std:000000014C78FC23 48 89 71 18                                                     mov     [rcx+18h], rsi
.std:000000014C78FC27 48 89 71 20                                                     mov     [rcx+20h], rsi
.std:000000014C78FC2B 48 89 71 28                                                     mov     [rcx+28h], rsi
.std:000000014C78FC2F 48 89 71 30                                                     mov     [rcx+30h], rsi
.std:000000014C78FC33 89 71 38                                                        mov     [rcx+38h], esi
.std:000000014C78FC36 48 89 71 40                                                     mov     [rcx+40h], rsi
.std:000000014C78FC3A 48 89 71 48                                                     mov     [rcx+48h], rsi
.std:000000014C78FC3E 89 71 50                                                        mov     [rcx+50h], esi
.std:000000014C78FC41 48 89 71 58                                                     mov     [rcx+58h], rsi
.std:000000014C78FC45 48 89 71 60                                                     mov     [rcx+60h], rsi
.std:000000014C78FC49 89 71 68                                                        mov     [rcx+68h], esi
.std:000000014C78FC4C 48 89 71 70                                                     mov     [rcx+70h], rsi
.std:000000014C78FC50 48 89 71 78                                                     mov     [rcx+78h], rsi
.std:000000014C78FC54 89 B1 80 00 00 00                                               mov     [rcx+80h], esi
.std:000000014C78FC5A 48 89 B1 88 00 00 00                                            mov     [rcx+88h], rsi
.std:000000014C78FC61 48 89 B1 90 00 00 00                                            mov     [rcx+90h], rsi
.std:000000014C78FC68 89 B1 98 00 00 00                                               mov     [rcx+98h], esi
.std:000000014C78FC6E 48 89 B1 A0 00 00 00                                            mov     [rcx+0A0h], rsi
.std:000000014C78FC75 48 89 B1 A8 00 00 00                                            mov     [rcx+0A8h], rsi
.std:000000014C78FC7C 89 B1 B0 00 00 00                                               mov     [rcx+0B0h], esi
.std:000000014C78FC82 48 89 B1 B8 00 00 00                                            mov     [rcx+0B8h], rsi
.std:000000014C78FC89 48 89 B1 C0 00 00 00                                            mov     [rcx+0C0h], rsi
.std:000000014C78FC90 89 B1 C8 00 00 00                                               mov     [rcx+0C8h], esi
.std:000000014C78FC96 48 89 B1 D0 00 00 00                                            mov     [rcx+0D0h], rsi
.std:000000014C78FC9D 48 89 B1 D8 00 00 00                                            mov     [rcx+0D8h], rsi
.std:000000014C78FCA4 89 B1 E0 00 00 00                                               mov     [rcx+0E0h], esi
.std:000000014C78FCAA 48 89 B1 E8 00 00 00                                            mov     [rcx+0E8h], rsi
.std:000000014C78FCB1 48 89 B1 F0 00 00 00                                            mov     [rcx+0F0h], rsi
.std:000000014C78FCB8 89 B1 F8 00 00 00                                               mov     [rcx+0F8h], esi
.std:000000014C78FCBE 48 89 B1 00 01 00 00                                            mov     [rcx+100h], rsi
.std:000000014C78FCC5 48 89 B1 08 01 00 00                                            mov     [rcx+108h], rsi
.std:000000014C78FCCC 89 B1 10 01 00 00                                               mov     [rcx+110h], esi
.std:000000014C78FCD2 48 89 B1 18 01 00 00                                            mov     [rcx+118h], rsi
.std:000000014C78FCD9 48 89 B1 20 01 00 00                                            mov     [rcx+120h], rsi
.std:000000014C78FCE0 89 B1 28 01 00 00                                               mov     [rcx+128h], esi
.std:000000014C78FCE6 48 89 B1 30 01 00 00                                            mov     [rcx+130h], rsi
.std:000000014C78FCED 48 89 B1 38 01 00 00                                            mov     [rcx+138h], rsi
.std:000000014C78FCF4 89 B1 40 01 00 00                                               mov     [rcx+140h], esi
.std:000000014C78FCFA 48 89 B1 48 01 00 00                                            mov     [rcx+148h], rsi
.std:000000014C78FD01 48 89 B1 50 01 00 00                                            mov     [rcx+150h], rsi
.std:000000014C78FD08 89 B1 58 01 00 00                                               mov     [rcx+158h], esi
.std:000000014C78FD0E 48 89 B1 60 01 00 00                                            mov     [rcx+160h], rsi
.std:000000014C78FD15 48 89 B1 68 01 00 00                                            mov     [rcx+168h], rsi
.std:000000014C78FD1C 89 B1 70 01 00 00                                               mov     [rcx+170h], esi
.std:000000014C78FD22 48 89 B1 78 01 00 00                                            mov     [rcx+178h], rsi
.std:000000014C78FD29 48 89 B1 80 01 00 00                                            mov     [rcx+180h], rsi
.std:000000014C78FD30 89 B1 88 01 00 00                                               mov     [rcx+188h], esi
.std:000000014C78FD36 48 89 B1 90 01 00 00                                            mov     [rcx+190h], rsi
.std:000000014C78FD3D 48 89 B1 98 01 00 00                                            mov     [rcx+198h], rsi
.std:000000014C78FD44 89 B1 A0 01 00 00                                               mov     [rcx+1A0h], esi
.std:000000014C78FD4A 48 89 B1 A8 01 00 00                                            mov     [rcx+1A8h], rsi
.std:000000014C78FD51 48 89 B1 B0 01 00 00                                            mov     [rcx+1B0h], rsi
.std:000000014C78FD58 89 B1 B8 01 00 00                                               mov     [rcx+1B8h], esi
.std:000000014C78FD5E 48 89 B1 C0 01 00 00                                            mov     [rcx+1C0h], rsi
.std:000000014C78FD65 48 89 B1 C8 01 00 00                                            mov     [rcx+1C8h], rsi
.std:000000014C78FD6C 89 B1 D0 01 00 00                                               mov     [rcx+1D0h], esi
.std:000000014C78FD72 48 89 B1 D8 01 00 00                                            mov     [rcx+1D8h], rsi
.std:000000014C78FD79 48 89 B1 E0 01 00 00                                            mov     [rcx+1E0h], rsi
.std:000000014C78FD80 89 B1 E8 01 00 00                                               mov     [rcx+1E8h], esi
.std:000000014C78FD86 48 89 B1 F0 01 00 00                                            mov     [rcx+1F0h], rsi
.std:000000014C78FD8D 48 89 B1 F8 01 00 00                                            mov     [rcx+1F8h], rsi
.std:000000014C78FD94 89 B1 00 02 00 00                                               mov     [rcx+200h], esi
.std:000000014C78FD9A 48 89 B1 08 02 00 00                                            mov     [rcx+208h], rsi
.std:000000014C78FDA1 48 89 B1 10 02 00 00                                            mov     [rcx+210h], rsi
.std:000000014C78FDA8 89 B1 18 02 00 00                                               mov     [rcx+218h], esi
.std:000000014C78FDAE 48 89 B1 20 02 00 00                                            mov     [rcx+220h], rsi
.std:000000014C78FDB5 48 89 B1 28 02 00 00                                            mov     [rcx+228h], rsi
.std:000000014C78FDBC 89 B1 30 02 00 00                                               mov     [rcx+230h], esi
.std:000000014C78FDC2 48 89 B1 38 02 00 00                                            mov     [rcx+238h], rsi
.std:000000014C78FDC9 48 89 B1 40 02 00 00                                            mov     [rcx+240h], rsi
.std:000000014C78FDD0 89 B1 48 02 00 00                                               mov     [rcx+248h], esi
.std:000000014C78FDD6 48 89 B1 50 02 00 00                                            mov     [rcx+250h], rsi
.std:000000014C78FDDD 48 89 B1 58 02 00 00                                            mov     [rcx+258h], rsi
.std:000000014C78FDE4 89 B1 60 02 00 00                                               mov     [rcx+260h], esi
.std:000000014C78FDEA 48 89 B1 68 02 00 00                                            mov     [rcx+268h], rsi
.std:000000014C78FDF1 48 89 B1 70 02 00 00                                            mov     [rcx+270h], rsi
.std:000000014C78FDF8 89 B1 78 02 00 00                                               mov     [rcx+278h], esi
.std:000000014C78FDFE 48 89 B1 80 02 00 00                                            mov     [rcx+280h], rsi
.std:000000014C78FE05 48 89 B1 88 02 00 00                                            mov     [rcx+288h], rsi
.std:000000014C78FE0C 89 B1 90 02 00 00                                               mov     [rcx+290h], esi
.std:000000014C78FE12 48 89 B1 98 02 00 00                                            mov     [rcx+298h], rsi
.std:000000014C78FE19 48 89 B1 A0 02 00 00                                            mov     [rcx+2A0h], rsi
.std:000000014C78FE20 89 B1 A8 02 00 00                                               mov     [rcx+2A8h], esi
.std:000000014C78FE26 48 89 B1 B0 02 00 00                                            mov     [rcx+2B0h], rsi
.std:000000014C78FE2D 48 89 B1 B8 02 00 00                                            mov     [rcx+2B8h], rsi
.std:000000014C78FE34 89 B1 C0 02 00 00                                               mov     [rcx+2C0h], esi
.std:000000014C78FE3A 48 89 B1 C8 02 00 00                                            mov     [rcx+2C8h], rsi
.std:000000014C78FE41 48 89 B1 D0 02 00 00                                            mov     [rcx+2D0h], rsi
.std:000000014C78FE48 89 B1 D8 02 00 00                                               mov     [rcx+2D8h], esi
.std:000000014C78FE4E 48 89 B1 E0 02 00 00                                            mov     [rcx+2E0h], rsi
.std:000000014C78FE55 48 89 B1 E8 02 00 00                                            mov     [rcx+2E8h], rsi
.std:000000014C78FE5C 89 B1 F0 02 00 00                                               mov     [rcx+2F0h], esi
.std:000000014C78FE62 48 89 B1 F8 02 00 00                                            mov     [rcx+2F8h], rsi
.std:000000014C78FE69 48 89 B1 00 03 00 00                                            mov     [rcx+300h], rsi
.std:000000014C78FE70 89 B1 08 03 00 00                                               mov     [rcx+308h], esi
.std:000000014C78FE76 48 89 B1 10 03 00 00                                            mov     [rcx+310h], rsi
.std:000000014C78FE7D 48 89 B1 18 03 00 00                                            mov     [rcx+318h], rsi
.std:000000014C78FE84 89 B1 20 03 00 00                                               mov     [rcx+320h], esi
.std:000000014C78FE8A 48 89 B1 28 03 00 00                                            mov     [rcx+328h], rsi
.std:000000014C78FE91 48 89 B1 30 03 00 00                                            mov     [rcx+330h], rsi
.std:000000014C78FE98 89 B1 38 03 00 00                                               mov     [rcx+338h], esi
.std:000000014C78FE9E 48 89 B1 40 03 00 00                                            mov     [rcx+340h], rsi
.std:000000014C78FEA5 48 89 B1 48 03 00 00                                            mov     [rcx+348h], rsi
.std:000000014C78FEAC 89 B1 50 03 00 00                                               mov     [rcx+350h], esi
.std:000000014C78FEB2 48 89 B1 58 03 00 00                                            mov     [rcx+358h], rsi
.std:000000014C78FEB9 48 89 B1 60 03 00 00                                            mov     [rcx+360h], rsi
.std:000000014C78FEC0 89 B1 68 03 00 00                                               mov     [rcx+368h], esi
.std:000000014C78FEC6 48 89 B1 70 03 00 00                                            mov     [rcx+370h], rsi
.std:000000014C78FECD 48 89 B1 78 03 00 00                                            mov     [rcx+378h], rsi
.std:000000014C78FED4 89 B1 80 03 00 00                                               mov     [rcx+380h], esi
.std:000000014C78FEDA 48 89 B1 88 03 00 00                                            mov     [rcx+388h], rsi
.std:000000014C78FEE1 48 89 B1 90 03 00 00                                            mov     [rcx+390h], rsi
.std:000000014C78FEE8 89 B1 98 03 00 00                                               mov     [rcx+398h], esi
.std:000000014C78FEEE 48 89 B1 A0 03 00 00                                            mov     [rcx+3A0h], rsi
.std:000000014C78FEF5 48 89 B1 A8 03 00 00                                            mov     [rcx+3A8h], rsi
.std:000000014C78FEFC 89 B1 B0 03 00 00                                               mov     [rcx+3B0h], esi
.std:000000014C78FF02 48 89 B1 B8 03 00 00                                            mov     [rcx+3B8h], rsi
.std:000000014C78FF09 48 89 B1 C0 03 00 00                                            mov     [rcx+3C0h], rsi
.std:000000014C78FF10 89 B1 C8 03 00 00                                               mov     [rcx+3C8h], esi
.std:000000014C78FF16 48 89 B1 D0 03 00 00                                            mov     [rcx+3D0h], rsi
.std:000000014C78FF1D 48 89 B1 D8 03 00 00                                            mov     [rcx+3D8h], rsi
.std:000000014C78FF24 89 B1 E0 03 00 00                                               mov     [rcx+3E0h], esi
.std:000000014C78FF2A 48 89 B1 E8 03 00 00                                            mov     [rcx+3E8h], rsi
.std:000000014C78FF31 48 89 B1 F0 03 00 00                                            mov     [rcx+3F0h], rsi
.std:000000014C78FF38 89 B1 F8 03 00 00                                               mov     [rcx+3F8h], esi
.std:000000014C78FF3E 48 89 B1 00 04 00 00                                            mov     [rcx+400h], rsi
.std:000000014C78FF45 48 89 B1 08 04 00 00                                            mov     [rcx+408h], rsi
.std:000000014C78FF4C 89 B1 10 04 00 00                                               mov     [rcx+410h], esi
.std:000000014C78FF52 48 89 B1 18 04 00 00                                            mov     [rcx+418h], rsi
.std:000000014C78FF59 48 89 B1 20 04 00 00                                            mov     [rcx+420h], rsi
.std:000000014C78FF60 89 B1 28 04 00 00                                               mov     [rcx+428h], esi
.std:000000014C78FF66 48 89 B1 30 04 00 00                                            mov     [rcx+430h], rsi
.std:000000014C78FF6D 48 89 B1 38 04 00 00                                            mov     [rcx+438h], rsi
.std:000000014C78FF74 89 B1 40 04 00 00                                               mov     [rcx+440h], esi
.std:000000014C78FF7A 48 89 B1 48 04 00 00                                            mov     [rcx+448h], rsi
.std:000000014C78FF81 48 89 B1 50 04 00 00                                            mov     [rcx+450h], rsi
.std:000000014C78FF88 89 B1 58 04 00 00                                               mov     [rcx+458h], esi
.std:000000014C78FF8E 48 89 B1 68 04 00 00                                            mov     [rcx+468h], rsi
.std:000000014C78FF95 48 81 C1 78 04 00 00                                            add     rcx, 478h       ; Add
.std:000000014C78FF9C E8 EF 78 FE FF                                                  call    sub_14C777890   ; Call Procedure
.std:000000014C78FFA1 48 8D 8B 80 08 00 00                                            lea     rcx, [rbx+880h] ; Load Effective Address
.std:000000014C78FFA8 FF 15 B2 B3 DE 03                                               call    cs:qword_15057B360 ; Indirect Call Near Procedure
.std:000000014C78FFAE BA A0 0F 00 00                                                  mov     edx, 0FA0h
.std:000000014C78FFB3 48 8D 8B 80 08 00 00                                            lea     rcx, [rbx+880h] ; Load Effective Address
.std:000000014C78FFBA FF 15 98 B3 DE 03                                               call    cs:qword_15057B358 ; Indirect Call Near Procedure
.std:000000014C78FFC0 0F B7 05 A1 9B 0B 0A                                            movzx   eax, word ptr cs:unk_156849B68 ; Move with Zero-Extend
.std:000000014C78FFC7 48 89 B3 C0 08 00 00                                            mov     [rbx+8C0h], rsi
.std:000000014C78FFCE 66 89 05 8B 0C BD 0A                                            mov     cs:word_157360C60, ax
.std:000000014C78FFD5 0F B7 05 8A 9B 0B 0A                                            movzx   eax, word ptr cs:unk_156849B66 ; Move with Zero-Extend
.std:000000014C78FFDC 66 89 05 7F 0C BD 0A                                            mov     cs:word_157360C62, ax
.std:000000014C78FFE3 0F B7 05 7A 9B 0B 0A                                            movzx   eax, word ptr cs:unk_156849B64 ; Move with Zero-Extend
.std:000000014C78FFEA 66 89 05 73 0C BD 0A                                            mov     cs:word_157360C64, ax
.std:000000014C78FFF1 0F B7 05 6A 9B 0B 0A                                            movzx   eax, word ptr cs:unk_156849B62 ; Move with Zero-Extend
.std:000000014C78FFF8 66 89 05 67 0C BD 0A                                            mov     cs:word_157360C66, ax
.std:000000014C78FFFF 0F B7 05 5A 9B 0B 0A                                            movzx   eax, word ptr cs:unk_156849B60 ; Move with Zero-Extend
.std:000000014C790006 C6 05 C7 3C BD 0A 01                                            mov     cs:byte_157363CD4, 1
.std:000000014C79000D 66 89 05 54 0C BD 0A                                            mov     cs:word_157360C68, ax
.std:000000014C790014 0F B7 05 43 9B 0B 0A                                            movzx   eax, word ptr cs:unk_156849B5E ; Move with Zero-Extend
.std:000000014C79001B 66 89 05 48 0C BD 0A                                            mov     cs:word_157360C6A, ax
.std:000000014C790022 0F B7 05 33 9B 0B 0A                                            movzx   eax, word ptr cs:unk_156849B5C ; Move with Zero-Extend
.std:000000014C790029 66 89 05 3C 0C BD 0A                                            mov     cs:word_157360C6C, ax
.std:000000014C790030 0F B7 05 23 9B 0B 0A                                            movzx   eax, word ptr cs:unk_156849B5A ; Move with Zero-Extend
.std:000000014C790037 66 89 05 30 0C BD 0A                                            mov     cs:word_157360C6E, ax
.std:000000014C79003E 0F B7 05 13 9B 0B 0A                                            movzx   eax, word ptr cs:unk_156849B58 ; Move with Zero-Extend
.std:000000014C790045 66 89 05 24 0C BD 0A                                            mov     cs:word_157360C70, ax
.std:000000014C79004C 0F B7 05 03 9B 0B 0A                                            movzx   eax, word ptr cs:unk_156849B56 ; Move with Zero-Extend
.std:000000014C790053 66 89 05 18 0C BD 0A                                            mov     cs:word_157360C72, ax
.std:000000014C79005A 0F B7 05 F3 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B54 ; Move with Zero-Extend
.std:000000014C790061 66 89 05 0C 0C BD 0A                                            mov     cs:word_157360C74, ax
.std:000000014C790068 0F B7 05 E3 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B52 ; Move with Zero-Extend
.std:000000014C79006F 66 89 05 00 0C BD 0A                                            mov     cs:word_157360C76, ax
.std:000000014C790076 0F B7 05 D3 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B50 ; Move with Zero-Extend
.std:000000014C79007D 66 89 05 F4 0B BD 0A                                            mov     cs:word_157360C78, ax
.std:000000014C790084 0F B7 05 C3 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B4E ; Move with Zero-Extend
.std:000000014C79008B 66 89 05 E8 0B BD 0A                                            mov     cs:word_157360C7A, ax
.std:000000014C790092 0F B7 05 B3 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B4C ; Move with Zero-Extend
.std:000000014C790099 66 89 05 DC 0B BD 0A                                            mov     cs:word_157360C7C, ax
.std:000000014C7900A0 0F B7 05 A3 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B4A ; Move with Zero-Extend
.std:000000014C7900A7 66 89 05 D0 0B BD 0A                                            mov     cs:word_157360C7E, ax
.std:000000014C7900AE 0F B7 05 93 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B48 ; Move with Zero-Extend
.std:000000014C7900B5 66 89 05 C4 0B BD 0A                                            mov     cs:word_157360C80, ax
.std:000000014C7900BC 0F B7 05 83 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B46 ; Move with Zero-Extend
.std:000000014C7900C3 66 89 05 B8 0B BD 0A                                            mov     cs:word_157360C82, ax
.std:000000014C7900CA 0F B7 05 73 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B44 ; Move with Zero-Extend
.std:000000014C7900D1 66 89 05 AC 0B BD 0A                                            mov     cs:word_157360C84, ax
.std:000000014C7900D8 0F B7 05 63 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B42 ; Move with Zero-Extend
.std:000000014C7900DF 66 89 05 A0 0B BD 0A                                            mov     cs:word_157360C86, ax
.std:000000014C7900E6 0F B7 05 53 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B40 ; Move with Zero-Extend
.std:000000014C7900ED 66 89 05 94 0B BD 0A                                            mov     cs:word_157360C88, ax
.std:000000014C7900F4 0F B7 05 43 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B3E ; Move with Zero-Extend
.std:000000014C7900FB 66 89 05 88 0B BD 0A                                            mov     cs:word_157360C8A, ax
.std:000000014C790102 0F B7 05 33 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B3C ; Move with Zero-Extend
.std:000000014C790109 66 89 05 7C 0B BD 0A                                            mov     cs:word_157360C8C, ax
.std:000000014C790110 0F B7 05 23 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B3A ; Move with Zero-Extend
.std:000000014C790117 66 89 05 70 0B BD 0A                                            mov     cs:word_157360C8E, ax
.std:000000014C79011E 0F B7 05 13 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B38 ; Move with Zero-Extend
.std:000000014C790125 66 89 05 64 0B BD 0A                                            mov     cs:word_157360C90, ax
.std:000000014C79012C 0F B7 05 03 9A 0B 0A                                            movzx   eax, word ptr cs:unk_156849B36 ; Move with Zero-Extend
.std:000000014C790133 66 89 05 58 0B BD 0A                                            mov     cs:word_157360C92, ax
.std:000000014C79013A 0F B7 05 F3 99 0B 0A                                            movzx   eax, word ptr cs:unk_156849B34 ; Move with Zero-Extend
.std:000000014C790141 66 89 05 4C 0B BD 0A                                            mov     cs:word_157360C94, ax
.std:000000014C790148 0F B7 05 E3 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B2C+6 ; Move with Zero-Extend
.std:000000014C79014F 66 89 05 40 0B BD 0A                                            mov     cs:word_157360C96, ax
.std:000000014C790156 0F B7 05 D3 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B2C+4 ; Move with Zero-Extend
.std:000000014C79015D 66 89 05 34 0B BD 0A                                            mov     cs:word_157360C98, ax
.std:000000014C790164 0F B7 05 C3 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B2C+2 ; Move with Zero-Extend
.std:000000014C79016B 66 89 05 28 0B BD 0A                                            mov     cs:word_157360C9A, ax
.std:000000014C790172 0F B7 05 B3 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B2C ; Move with Zero-Extend
.std:000000014C790179 66 89 05 1C 0B BD 0A                                            mov     cs:word_157360C9C, ax
.std:000000014C790180 0F B7 05 A3 99 0B 0A                                            movzx   eax, word ptr cs:unk_156849B2A ; Move with Zero-Extend
.std:000000014C790187 66 89 05 10 0B BD 0A                                            mov     cs:word_157360C9E, ax
.std:000000014C79018E 0F B7 05 93 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B22+6 ; Move with Zero-Extend
.std:000000014C790195 66 89 05 04 0B BD 0A                                            mov     cs:word_157360CA0, ax
.std:000000014C79019C 0F B7 05 83 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B22+4 ; Move with Zero-Extend
.std:000000014C7901A3 66 89 05 F8 0A BD 0A                                            mov     cs:word_157360CA2, ax
.std:000000014C7901AA 0F B7 05 73 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B22+2 ; Move with Zero-Extend
.std:000000014C7901B1 66 89 05 EC 0A BD 0A                                            mov     cs:word_157360CA4, ax
.std:000000014C7901B8 0F B7 05 63 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B22 ; Move with Zero-Extend
.std:000000014C7901BF 66 89 05 E0 0A BD 0A                                            mov     cs:word_157360CA6, ax
.std:000000014C7901C6 0F B7 05 53 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B1A+6 ; Move with Zero-Extend
.std:000000014C7901CD 66 89 05 D4 0A BD 0A                                            mov     cs:word_157360CA8, ax
.std:000000014C7901D4 0F B7 05 43 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B1A+4 ; Move with Zero-Extend
.std:000000014C7901DB 66 89 05 C8 0A BD 0A                                            mov     cs:word_157360CAA, ax
.std:000000014C7901E2 0F B7 05 33 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B1A+2 ; Move with Zero-Extend
.std:000000014C7901E9 66 89 05 BC 0A BD 0A                                            mov     cs:word_157360CAC, ax
.std:000000014C7901F0 0F B7 05 23 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B1A ; Move with Zero-Extend
.std:000000014C7901F7 66 89 05 B0 0A BD 0A                                            mov     cs:word_157360CAE, ax
.std:000000014C7901FE 0F B7 05 13 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B12+6 ; Move with Zero-Extend
.std:000000014C790205 66 89 05 A4 0A BD 0A                                            mov     cs:word_157360CB0, ax
.std:000000014C79020C 0F B7 05 03 99 0B 0A                                            movzx   eax, word ptr cs:qword_156849B12+4 ; Move with Zero-Extend
.std:000000014C790213 66 89 05 98 0A BD 0A                                            mov     cs:word_157360CB2, ax
.std:000000014C79021A 0F B7 05 F3 98 0B 0A                                            movzx   eax, word ptr cs:qword_156849B12+2 ; Move with Zero-Extend
.std:000000014C790221 66 89 05 8C 0A BD 0A                                            mov     cs:word_157360CB4, ax
.std:000000014C790228 0F B7 05 E3 98 0B 0A                                            movzx   eax, word ptr cs:qword_156849B12 ; Move with Zero-Extend
.std:000000014C79022F 66 89 05 80 0A BD 0A                                            mov     cs:word_157360CB6, ax
.std:000000014C790236 0F B7 05 D3 98 0B 0A                                            movzx   eax, cs:word_156849B10 ; Move with Zero-Extend
.std:000000014C79023D 66 89 05 74 0A BD 0A                                            mov     cs:word_157360CB8, ax
.std:000000014C790244 E8 17 31 15 00                                                  call    sub_14C8E3360   ; Call Procedure
.std:000000014C790249 48 8B 50 28                                                     mov     rdx, [rax+28h]
.std:000000014C79024D 48 8B 48 20                                                     mov     rcx, [rax+20h]
.std:000000014C790251 48 8B 78 30                                                     mov     rdi, [rax+30h]
.std:000000014C790255 89 0D 71 0A BD 0A                                               mov     cs:dword_157360CCC, ecx
.std:000000014C79025B 89 15 6F 0A BD 0A                                               mov     cs:dword_157360CD0, edx
.std:000000014C790261 48 85 D2                                                        test    rdx, rdx        ; Logical Compare
.std:000000014C790264 75 06                                                           jnz     short loc_14C79026C ; Jump if Not Zero (ZF=0)
.std:000000014C790266 89 0D 64 0A BD 0A                                               mov     cs:dword_157360CD0, ecx
.std:000000014C79026C
.std:000000014C79026C                                                 loc_14C79026C:                          ; CODE XREF: sub_14C78FBF0+674↑j
.std:000000014C79026C 8B C1                                                           mov     eax, ecx
.std:000000014C79026E BA 1F 00 00 00                                                  mov     edx, 1Fh
.std:000000014C790273 48 C1 E8 05                                                     shr     rax, 5          ; Shift Logical Right
.std:000000014C790277 41 B8 20 00 00 00                                               mov     r8d, 20h ; ' '
.std:000000014C79027D 44 0F BD C8                                                     bsr     r9d, eax        ; Bit Scan Reverse
.std:000000014C790281 48 89 83 70 04 00 00                                            mov     [rbx+470h], rax
.std:000000014C790288 44 8B 1D 3D 0A BD 0A                                            mov     r11d, cs:dword_157360CCC
.std:000000014C79028F 44 89 4C 24 50                                                  mov     [rsp+50h], r9d
.std:000000014C790294 74 07                                                           jz      short loc_14C79029D ; Jump if Zero (ZF=1)
.std:000000014C790296 8B CA                                                           mov     ecx, edx
.std:000000014C790298 41 2B C9                                                        sub     ecx, r9d        ; Integer Subtraction
.std:000000014C79029B EB 03                                                           jmp     short loc_14C7902A0 ; Jump
.std:000000014C79029D                                                 ; ---------------------------------------------------------------------------
.std:000000014C79029D
.std:000000014C79029D                                                 loc_14C79029D:                          ; CODE XREF: sub_14C78FBF0+6A4↑j
.std:000000014C79029D 41 8B C8                                                        mov     ecx, r8d
.std:000000014C7902A0
.std:000000014C7902A0                                                 loc_14C7902A0:                          ; CODE XREF: sub_14C78FBF0+6AB↑j
.std:000000014C7902A0 C1 E1 1A                                                        shl     ecx, 1Ah        ; Shift Logical Left
.std:000000014C7902A3 C1 F9 1F                                                        sar     ecx, 1Fh        ; Shift Arithmetic Right
.std:000000014C7902A6 FF C8                                                           dec     eax             ; Decrement by 1
.std:000000014C7902A8 44 0F BD D0                                                     bsr     r10d, eax       ; Bit Scan Reverse
.std:000000014C7902AC 44 89 54 24 50                                                  mov     [rsp+50h], r10d
.std:000000014C7902B1 74 08                                                           jz      short loc_14C7902BB ; Jump if Zero (ZF=1)
.std:000000014C7902B3 44 8B CA                                                        mov     r9d, edx
.std:000000014C7902B6 45 2B CA                                                        sub     r9d, r10d       ; Integer Subtraction
.std:000000014C7902B9 EB 03                                                           jmp     short loc_14C7902BE ; Jump
.std:000000014C7902BB                                                 ; ---------------------------------------------------------------------------
.std:000000014C7902BB
.std:000000014C7902BB                                                 loc_14C7902BB:                          ; CODE XREF: sub_14C78FBF0+6C1↑j
.std:000000014C7902BB 45 8B C8                                                        mov     r9d, r8d
.std:000000014C7902BE
.std:000000014C7902BE                                                 loc_14C7902BE:                          ; CODE XREF: sub_14C78FBF0+6C9↑j
.std:000000014C7902BE 45 8B D0                                                        mov     r10d, r8d
.std:000000014C7902C1 F7 D1                                                           not     ecx             ; One's Complement Negation
.std:000000014C7902C3 45 2B D1                                                        sub     r10d, r9d       ; Integer Subtraction
.std:000000014C7902C6 8B C1                                                           mov     eax, ecx
.std:000000014C7902C8 4C 23 D0                                                        and     r10, rax        ; Logical AND
.std:000000014C7902CB 41 0F BD C3                                                     bsr     eax, r11d       ; Bit Scan Reverse
.std:000000014C7902CF 89 44 24 50                                                     mov     [rsp+50h], eax
.std:000000014C7902D3 74 06                                                           jz      short loc_14C7902DB ; Jump if Zero (ZF=1)
.std:000000014C7902D5 8B CA                                                           mov     ecx, edx
.std:000000014C7902D7 2B C8                                                           sub     ecx, eax        ; Integer Subtraction
.std:000000014C7902D9 EB 03                                                           jmp     short loc_14C7902DE ; Jump
.std:000000014C7902DB                                                 ; ---------------------------------------------------------------------------
.std:000000014C7902DB
.std:000000014C7902DB                                                 loc_14C7902DB:                          ; CODE XREF: sub_14C78FBF0+6E3↑j
.std:000000014C7902DB 41 8B C8                                                        mov     ecx, r8d
.std:000000014C7902DE
.std:000000014C7902DE                                                 loc_14C7902DE:                          ; CODE XREF: sub_14C78FBF0+6E9↑j
.std:000000014C7902DE C1 E1 1A                                                        shl     ecx, 1Ah        ; Shift Logical Left
.std:000000014C7902E1 41 8D 43 FF                                                     lea     eax, [r11-1]    ; Load Effective Address
.std:000000014C7902E5 C1 F9 1F                                                        sar     ecx, 1Fh        ; Shift Arithmetic Right
.std:000000014C7902E8 44 0F BD C8                                                     bsr     r9d, eax        ; Bit Scan Reverse
.std:000000014C7902EC 44 89 4C 24 50                                                  mov     [rsp+50h], r9d
.std:000000014C7902F1 74 05                                                           jz      short loc_14C7902F8 ; Jump if Zero (ZF=1)
.std:000000014C7902F3 41 2B D1                                                        sub     edx, r9d        ; Integer Subtraction
.std:000000014C7902F6 EB 03                                                           jmp     short loc_14C7902FB ; Jump
.std:000000014C7902F8                                                 ; ---------------------------------------------------------------------------
.std:000000014C7902F8
.std:000000014C7902F8                                                 loc_14C7902F8:                          ; CODE XREF: sub_14C78FBF0+701↑j
.std:000000014C7902F8 41 8B D0                                                        mov     edx, r8d
.std:000000014C7902FB
.std:000000014C7902FB                                                 loc_14C7902FB:                          ; CODE XREF: sub_14C78FBF0+706↑j
.std:000000014C7902FB 48 8B 35 12 98 0B 0A                                            mov     rsi, cs:qword_156849B12+2
.std:000000014C790302 44 2B C2                                                        sub     r8d, edx        ; Integer Subtraction
.std:000000014C790305 48 8B 2D 0A 98 0B 0A                                            mov     rbp, cs:qword_156849B12+4
.std:000000014C79030C F7 D1                                                           not     ecx             ; One's Complement Negation
.std:000000014C79030E 4C 8B 35 03 98 0B 0A                                            mov     r14, cs:qword_156849B12+6
.std:000000014C790315 4C 8B 3D FE 97 0B 0A                                            mov     r15, cs:qword_156849B1A
.std:000000014C79031C 4C 8B 25 F9 97 0B 0A                                            mov     r12, cs:qword_156849B1A+2
.std:000000014C790323 4C 8B 2D F4 97 0B 0A                                            mov     r13, cs:qword_156849B1A+4
.std:000000014C79032A 8B C1                                                           mov     eax, ecx
.std:000000014C79032C 49 8B CA                                                        mov     rcx, r10
.std:000000014C79032F 41 8B D0                                                        mov     edx, r8d
.std:000000014C790332 48 23 D0                                                        and     rdx, rax        ; Logical AND
.std:000000014C790335 B8 01 00 00 00                                                  mov     eax, 1
.std:000000014C79033A 48 D3 E0                                                        shl     rax, cl         ; Shift Logical Left
.std:000000014C79033D 48 FF C8                                                        dec     rax             ; Decrement by 1
.std:000000014C790340 48 89 53 08                                                     mov     [rbx+8], rdx
.std:000000014C790344 48 89 43 18                                                     mov     [rbx+18h], rax
.std:000000014C790348 4E 8D 04 12                                                     lea     r8, [rdx+r10]   ; Load Effective Address
.std:000000014C79034C 0F B7 15 BD 97 0B 0A                                            movzx   edx, cs:word_156849B10 ; Move with Zero-Extend
.std:000000014C790353 4C 89 43 10                                                     mov     [rbx+10h], r8
.std:000000014C790357 49 8B C8                                                        mov     rcx, r8
.std:000000014C79035A 48 D3 EF                                                        shr     rdi, cl         ; Shift Logical Right
.std:000000014C79035D 48 89 7B 20                                                     mov     [rbx+20h], rdi
.std:000000014C790361 48 8B 3D AA 97 0B 0A                                            mov     rdi, cs:qword_156849B12
.std:000000014C790368 89 53 38                                                        mov     [rbx+38h], edx
.std:000000014C79036B 0F B7 C7                                                        movzx   eax, di         ; Move with Zero-Extend
.std:000000014C79036E 89 43 50                                                        mov     [rbx+50h], eax
.std:000000014C790371 0F B7 C6                                                        movzx   eax, si         ; Move with Zero-Extend
.std:000000014C790374 89 43 68                                                        mov     [rbx+68h], eax
.std:000000014C790377 0F B7 C5                                                        movzx   eax, bp         ; Move with Zero-Extend
.std:000000014C79037A 89 83 80 00 00 00                                               mov     [rbx+80h], eax
.std:000000014C790380 41 0F B7 C6                                                     movzx   eax, r14w       ; Move with Zero-Extend
.std:000000014C790384 89 83 98 00 00 00                                               mov     [rbx+98h], eax
.std:000000014C79038A 41 0F B7 C7                                                     movzx   eax, r15w       ; Move with Zero-Extend
.std:000000014C79038E 89 83 B0 00 00 00                                               mov     [rbx+0B0h], eax
.std:000000014C790394 41 0F B7 C4                                                     movzx   eax, r12w       ; Move with Zero-Extend
.std:000000014C790398 89 83 C8 00 00 00                                               mov     [rbx+0C8h], eax
.std:000000014C79039E 41 0F B7 C5                                                     movzx   eax, r13w       ; Move with Zero-Extend
.std:000000014C7903A2 89 83 E0 00 00 00                                               mov     [rbx+0E0h], eax
.std:000000014C7903A8 0F B7 05 71 97 0B 0A                                            movzx   eax, word ptr cs:qword_156849B1A+6 ; Move with Zero-Extend
.std:000000014C7903AF 89 83 F8 00 00 00                                               mov     [rbx+0F8h], eax
.std:000000014C7903B5 0F B7 05 66 97 0B 0A                                            movzx   eax, word ptr cs:qword_156849B22 ; Move with Zero-Extend
.std:000000014C7903BC 89 83 10 01 00 00                                               mov     [rbx+110h], eax
.std:000000014C7903C2 0F B7 05 5B 97 0B 0A                                            movzx   eax, word ptr cs:qword_156849B22+2 ; Move with Zero-Extend
.std:000000014C7903C9 89 83 28 01 00 00                                               mov     [rbx+128h], eax
.std:000000014C7903CF 0F B7 05 50 97 0B 0A                                            movzx   eax, word ptr cs:qword_156849B22+4 ; Move with Zero-Extend
.std:000000014C7903D6 89 83 40 01 00 00                                               mov     [rbx+140h], eax
.std:000000014C7903DC 0F B7 05 45 97 0B 0A                                            movzx   eax, word ptr cs:qword_156849B22+6 ; Move with Zero-Extend
.std:000000014C7903E3 89 83 58 01 00 00                                               mov     [rbx+158h], eax
.std:000000014C7903E9 0F B7 05 3A 97 0B 0A                                            movzx   eax, word ptr cs:unk_156849B2A ; Move with Zero-Extend
.std:000000014C7903F0 89 83 70 01 00 00                                               mov     [rbx+170h], eax
.std:000000014C7903F6 0F B7 05 2F 97 0B 0A                                            movzx   eax, word ptr cs:qword_156849B2C ; Move with Zero-Extend
.std:000000014C7903FD 89 83 88 01 00 00                                               mov     [rbx+188h], eax
.std:000000014C790403 0F B7 05 24 97 0B 0A                                            movzx   eax, word ptr cs:qword_156849B2C+2 ; Move with Zero-Extend
.std:000000014C79040A 89 83 A0 01 00 00                                               mov     [rbx+1A0h], eax
.std:000000014C790410 0F B7 05 19 97 0B 0A                                            movzx   eax, word ptr cs:qword_156849B2C+4 ; Move with Zero-Extend
.std:000000014C790417 89 83 B8 01 00 00                                               mov     [rbx+1B8h], eax
.std:000000014C79041D 0F B7 05 0E 97 0B 0A                                            movzx   eax, word ptr cs:qword_156849B2C+6 ; Move with Zero-Extend
.std:000000014C790424 89 83 D0 01 00 00                                               mov     [rbx+1D0h], eax
.std:000000014C79042A 0F B7 05 03 97 0B 0A                                            movzx   eax, word ptr cs:unk_156849B34 ; Move with Zero-Extend
.std:000000014C790431 89 83 E8 01 00 00                                               mov     [rbx+1E8h], eax
.std:000000014C790437 0F B7 05 F8 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B36 ; Move with Zero-Extend
.std:000000014C79043E 89 83 00 02 00 00                                               mov     [rbx+200h], eax
.std:000000014C790444 0F B7 05 ED 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B38 ; Move with Zero-Extend
.std:000000014C79044B 89 83 18 02 00 00                                               mov     [rbx+218h], eax
.std:000000014C790451 0F B7 05 E2 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B3A ; Move with Zero-Extend
.std:000000014C790458 89 83 30 02 00 00                                               mov     [rbx+230h], eax
.std:000000014C79045E 0F B7 05 D7 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B3C ; Move with Zero-Extend
.std:000000014C790465 89 83 48 02 00 00                                               mov     [rbx+248h], eax
.std:000000014C79046B 0F B7 05 CC 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B3E ; Move with Zero-Extend
.std:000000014C790472 89 83 60 02 00 00                                               mov     [rbx+260h], eax
.std:000000014C790478 0F B7 05 C1 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B40 ; Move with Zero-Extend
.std:000000014C79047F 89 83 78 02 00 00                                               mov     [rbx+278h], eax
.std:000000014C790485 0F B7 05 B6 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B42 ; Move with Zero-Extend
.std:000000014C79048C 89 83 90 02 00 00                                               mov     [rbx+290h], eax
.std:000000014C790492 0F B7 05 AB 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B44 ; Move with Zero-Extend
.std:000000014C790499 89 83 A8 02 00 00                                               mov     [rbx+2A8h], eax
.std:000000014C79049F 0F B7 05 A0 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B46 ; Move with Zero-Extend
.std:000000014C7904A6 89 83 C0 02 00 00                                               mov     [rbx+2C0h], eax
.std:000000014C7904AC 0F B7 05 95 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B48 ; Move with Zero-Extend
.std:000000014C7904B3 89 83 D8 02 00 00                                               mov     [rbx+2D8h], eax
.std:000000014C7904B9 0F B7 05 8A 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B4A ; Move with Zero-Extend
.std:000000014C7904C0 4C 8D 15 19 08 BD 0A                                            lea     r10, unk_157360CE0 ; Load Effective Address
.std:000000014C7904C7 89 83 F0 02 00 00                                               mov     [rbx+2F0h], eax
.std:000000014C7904CD 4C 8D 1D 3C 96 0B 0A                                            lea     r11, word_156849B10 ; Load Effective Address
.std:000000014C7904D4 0F B7 05 71 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B4C ; Move with Zero-Extend
.std:000000014C7904DB 33 C9                                                           xor     ecx, ecx        ; Logical Exclusive OR
.std:000000014C7904DD 89 83 08 03 00 00                                               mov     [rbx+308h], eax
.std:000000014C7904E3 45 33 C9                                                        xor     r9d, r9d        ; Logical Exclusive OR
.std:000000014C7904E6 0F B7 05 61 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B4E ; Move with Zero-Extend
.std:000000014C7904ED 89 83 20 03 00 00                                               mov     [rbx+320h], eax
.std:000000014C7904F3 0F B7 05 56 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B50 ; Move with Zero-Extend
.std:000000014C7904FA 89 83 38 03 00 00                                               mov     [rbx+338h], eax
.std:000000014C790500 0F B7 05 4B 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B52 ; Move with Zero-Extend
.std:000000014C790507 89 83 50 03 00 00                                               mov     [rbx+350h], eax
.std:000000014C79050D 0F B7 05 40 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B54 ; Move with Zero-Extend
.std:000000014C790514 89 83 68 03 00 00                                               mov     [rbx+368h], eax
.std:000000014C79051A 0F B7 05 35 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B56 ; Move with Zero-Extend
.std:000000014C790521 89 83 80 03 00 00                                               mov     [rbx+380h], eax
.std:000000014C790527 0F B7 05 2A 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B58 ; Move with Zero-Extend
.std:000000014C79052E 89 83 98 03 00 00                                               mov     [rbx+398h], eax
.std:000000014C790534 0F B7 05 1F 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B5A ; Move with Zero-Extend
.std:000000014C79053B 89 83 B0 03 00 00                                               mov     [rbx+3B0h], eax
.std:000000014C790541 0F B7 05 14 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B5C ; Move with Zero-Extend
.std:000000014C790548 89 83 C8 03 00 00                                               mov     [rbx+3C8h], eax
.std:000000014C79054E 0F B7 05 09 96 0B 0A                                            movzx   eax, word ptr cs:unk_156849B5E ; Move with Zero-Extend
.std:000000014C790555 89 83 E0 03 00 00                                               mov     [rbx+3E0h], eax
.std:000000014C79055B 0F B7 05 FE 95 0B 0A                                            movzx   eax, word ptr cs:unk_156849B60 ; Move with Zero-Extend
.std:000000014C790562 89 83 F8 03 00 00                                               mov     [rbx+3F8h], eax
.std:000000014C790568 0F B7 05 F3 95 0B 0A                                            movzx   eax, word ptr cs:unk_156849B62 ; Move with Zero-Extend
.std:000000014C79056F 89 83 10 04 00 00                                               mov     [rbx+410h], eax
.std:000000014C790575 0F B7 05 E8 95 0B 0A                                            movzx   eax, word ptr cs:unk_156849B64 ; Move with Zero-Extend
.std:000000014C79057C 89 83 28 04 00 00                                               mov     [rbx+428h], eax
.std:000000014C790582 0F B7 05 DD 95 0B 0A                                            movzx   eax, word ptr cs:unk_156849B66 ; Move with Zero-Extend
.std:000000014C790589 89 83 40 04 00 00                                               mov     [rbx+440h], eax
.std:000000014C79058F 0F B7 05 D2 95 0B 0A                                            movzx   eax, word ptr cs:unk_156849B68 ; Move with Zero-Extend
.std:000000014C790596 89 83 58 04 00 00                                               mov     [rbx+458h], eax
.std:000000014C79059C 0F 1F 40 00                                                     nop     dword ptr [rax+00h] ; No Operation
.std:000000014C7905A0
.std:000000014C7905A0                                                 loc_14C7905A0:                          ; CODE XREF: sub_14C78FBF0+9DC↓j
.std:000000014C7905A0 45 8B C1                                                        mov     r8d, r9d
.std:000000014C7905A3 41 C1 E0 04                                                     shl     r8d, 4          ; Shift Logical Left
.std:000000014C7905A7 41 3B D0                                                        cmp     edx, r8d        ; Compare Two Operands
.std:000000014C7905AA 73 10                                                           jnb     short loc_14C7905BC ; Jump if Not Below (CF=0)
.std:000000014C7905AC 0F 1F 40 00                                                     nop     dword ptr [rax+00h] ; No Operation
.std:000000014C7905B0
.std:000000014C7905B0                                                 loc_14C7905B0:                          ; CODE XREF: sub_14C78FBF0+9CA↓j
.std:000000014C7905B0 FF C1                                                           inc     ecx             ; Increment by 1
.std:000000014C7905B2 41 0F B7 14 4B                                                  movzx   edx, word ptr [r11+rcx*2] ; Move with Zero-Extend
.std:000000014C7905B7 41 3B D0                                                        cmp     edx, r8d        ; Compare Two Operands
.std:000000014C7905BA 72 F4                                                           jb      short loc_14C7905B0 ; Jump if Below (CF=1)
.std:000000014C7905BC
.std:000000014C7905BC                                                 loc_14C7905BC:                          ; CODE XREF: sub_14C78FBF0+9BA↑j
.std:000000014C7905BC 41 88 0A                                                        mov     [r10], cl
.std:000000014C7905BF 41 FF C1                                                        inc     r9d             ; Increment by 1
.std:000000014C7905C2 49 FF C2                                                        inc     r10             ; Increment by 1
.std:000000014C7905C5 41 81 F9 00 08 00 00                                            cmp     r9d, 800h       ; Compare Two Operands
.std:000000014C7905CC 75 D2                                                           jnz     short loc_14C7905A0 ; Jump if Not Zero (ZF=0)
.std:000000014C7905CE 0F B7 05 93 95 0B 0A                                            movzx   eax, word ptr cs:unk_156849B68 ; Move with Zero-Extend
.std:000000014C7905D5 66 89 05 84 06 BD 0A                                            mov     cs:word_157360C60, ax
.std:000000014C7905DC 0F B7 05 83 95 0B 0A                                            movzx   eax, word ptr cs:unk_156849B66 ; Move with Zero-Extend
.std:000000014C7905E3 66 89 05 78 06 BD 0A                                            mov     cs:word_157360C62, ax
.std:000000014C7905EA 0F B7 05 73 95 0B 0A                                            movzx   eax, word ptr cs:unk_156849B64 ; Move with Zero-Extend
.std:000000014C7905F1 66 89 05 6C 06 BD 0A                                            mov     cs:word_157360C64, ax
.std:000000014C7905F8 48 8B 05 63 95 0B 0A                                            mov     rax, qword ptr cs:unk_156849B62
.std:000000014C7905FF 66 89 05 60 06 BD 0A                                            mov     cs:word_157360C66, ax
.std:000000014C790606 48 8B 05 53 95 0B 0A                                            mov     rax, qword ptr cs:unk_156849B60
.std:000000014C79060D 66 89 05 54 06 BD 0A                                            mov     cs:word_157360C68, ax
.std:000000014C790614 48 8B 05 43 95 0B 0A                                            mov     rax, qword ptr cs:unk_156849B5E
.std:000000014C79061B 66 89 05 48 06 BD 0A                                            mov     cs:word_157360C6A, ax
.std:000000014C790622 48 8B 05 33 95 0B 0A                                            mov     rax, qword ptr cs:unk_156849B5C
.std:000000014C790629 66 89 05 3C 06 BD 0A                                            mov     cs:word_157360C6C, ax
.std:000000014C790630 48 8B 05 23 95 0B 0A                                            mov     rax, qword ptr cs:unk_156849B5A
.std:000000014C790637 66 89 05 30 06 BD 0A                                            mov     cs:word_157360C6E, ax
.std:000000014C79063E 48 8B 05 13 95 0B 0A                                            mov     rax, qword ptr cs:unk_156849B58
.std:000000014C790645 66 89 05 24 06 BD 0A                                            mov     cs:word_157360C70, ax
.std:000000014C79064C 48 8B 05 03 95 0B 0A                                            mov     rax, qword ptr cs:unk_156849B56
.std:000000014C790653 66 89 05 18 06 BD 0A                                            mov     cs:word_157360C72, ax
.std:000000014C79065A 48 8B 05 F3 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B54
.std:000000014C790661 66 89 05 0C 06 BD 0A                                            mov     cs:word_157360C74, ax
.std:000000014C790668 48 8B 05 E3 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B52
.std:000000014C79066F 66 89 05 00 06 BD 0A                                            mov     cs:word_157360C76, ax
.std:000000014C790676 48 8B 05 D3 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B50
.std:000000014C79067D 66 89 05 F4 05 BD 0A                                            mov     cs:word_157360C78, ax
.std:000000014C790684 48 8B 05 C3 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B4E
.std:000000014C79068B 66 89 05 E8 05 BD 0A                                            mov     cs:word_157360C7A, ax
.std:000000014C790692 48 8B 05 B3 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B4C
.std:000000014C790699 66 89 05 DC 05 BD 0A                                            mov     cs:word_157360C7C, ax
.std:000000014C7906A0 48 8B 05 A3 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B4A
.std:000000014C7906A7 66 89 05 D0 05 BD 0A                                            mov     cs:word_157360C7E, ax
.std:000000014C7906AE 48 8B 05 93 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B48
.std:000000014C7906B5 66 89 05 C4 05 BD 0A                                            mov     cs:word_157360C80, ax
.std:000000014C7906BC 48 8B 05 83 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B46
.std:000000014C7906C3 66 89 05 B8 05 BD 0A                                            mov     cs:word_157360C82, ax
.std:000000014C7906CA 48 8B 05 73 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B44
.std:000000014C7906D1 66 89 05 AC 05 BD 0A                                            mov     cs:word_157360C84, ax
.std:000000014C7906D8 48 8B 05 63 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B42
.std:000000014C7906DF 66 89 05 A0 05 BD 0A                                            mov     cs:word_157360C86, ax
.std:000000014C7906E6 48 8B 05 53 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B40
.std:000000014C7906ED 66 89 05 94 05 BD 0A                                            mov     cs:word_157360C88, ax
.std:000000014C7906F4 48 8B 05 43 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B3E
.std:000000014C7906FB 66 89 05 88 05 BD 0A                                            mov     cs:word_157360C8A, ax
.std:000000014C790702 48 8B 05 33 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B3C
.std:000000014C790709 66 89 05 7C 05 BD 0A                                            mov     cs:word_157360C8C, ax
.std:000000014C790710 48 8B 05 23 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B3A
.std:000000014C790717 66 89 05 70 05 BD 0A                                            mov     cs:word_157360C8E, ax
.std:000000014C79071E 48 8B 05 13 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B38
.std:000000014C790725 66 89 05 64 05 BD 0A                                            mov     cs:word_157360C90, ax
.std:000000014C79072C 48 8B 05 03 94 0B 0A                                            mov     rax, qword ptr cs:unk_156849B36
.std:000000014C790733 66 89 05 58 05 BD 0A                                            mov     cs:word_157360C92, ax
.std:000000014C79073A 48 8B 05 F3 93 0B 0A                                            mov     rax, qword ptr cs:unk_156849B34
.std:000000014C790741 66 89 05 4C 05 BD 0A                                            mov     cs:word_157360C94, ax
.std:000000014C790748 48 8B 05 E3 93 0B 0A                                            mov     rax, cs:qword_156849B2C+6
.std:000000014C79074F 66 89 05 40 05 BD 0A                                            mov     cs:word_157360C96, ax
.std:000000014C790756 48 8B 05 D3 93 0B 0A                                            mov     rax, cs:qword_156849B2C+4
.std:000000014C79075D 66 89 05 34 05 BD 0A                                            mov     cs:word_157360C98, ax
.std:000000014C790764 48 8B 05 C3 93 0B 0A                                            mov     rax, cs:qword_156849B2C+2
.std:000000014C79076B 66 89 05 28 05 BD 0A                                            mov     cs:word_157360C9A, ax
.std:000000014C790772 48 8B 05 B3 93 0B 0A                                            mov     rax, cs:qword_156849B2C
.std:000000014C790779 66 89 05 1C 05 BD 0A                                            mov     cs:word_157360C9C, ax
.std:000000014C790780 48 8B 05 A3 93 0B 0A                                            mov     rax, qword ptr cs:unk_156849B2A
.std:000000014C790787 66 89 05 10 05 BD 0A                                            mov     cs:word_157360C9E, ax
.std:000000014C79078E 48 8B 05 93 93 0B 0A                                            mov     rax, cs:qword_156849B22+6
.std:000000014C790795 66 89 05 04 05 BD 0A                                            mov     cs:word_157360CA0, ax
.std:000000014C79079C 48 8B 05 83 93 0B 0A                                            mov     rax, cs:qword_156849B22+4
.std:000000014C7907A3 66 89 05 F8 04 BD 0A                                            mov     cs:word_157360CA2, ax
.std:000000014C7907AA 48 8B 05 73 93 0B 0A                                            mov     rax, cs:qword_156849B22+2
.std:000000014C7907B1 66 89 05 EC 04 BD 0A                                            mov     cs:word_157360CA4, ax
.std:000000014C7907B8 48 8B 05 63 93 0B 0A                                            mov     rax, cs:qword_156849B22
.std:000000014C7907BF 66 89 05 E0 04 BD 0A                                            mov     cs:word_157360CA6, ax
.std:000000014C7907C6 48 8B 05 53 93 0B 0A                                            mov     rax, cs:qword_156849B1A+6
.std:000000014C7907CD 66 89 05 D4 04 BD 0A                                            mov     cs:word_157360CA8, ax
.std:000000014C7907D4 66 44 89 2D CE 04 BD 0A                                         mov     cs:word_157360CAA, r13w
.std:000000014C7907DC 66 44 89 25 C8 04 BD 0A                                         mov     cs:word_157360CAC, r12w
.std:000000014C7907E4 66 44 89 3D C2 04 BD 0A                                         mov     cs:word_157360CAE, r15w
.std:000000014C7907EC 66 44 89 35 BC 04 BD 0A                                         mov     cs:word_157360CB0, r14w
.std:000000014C7907F4 66 89 2D B7 04 BD 0A                                            mov     cs:word_157360CB2, bp
.std:000000014C7907FB 66 89 35 B2 04 BD 0A                                            mov     cs:word_157360CB4, si
.std:000000014C790802 66 89 3D AD 04 BD 0A                                            mov     cs:word_157360CB6, di
.std:000000014C790809 8B 15 C1 04 BD 0A                                               mov     edx, cs:dword_157360CD0
.std:000000014C79080F 44 0F B7 1D F9 92 0B 0A                                         movzx   r11d, cs:word_156849B10 ; Move with Zero-Extend
.std:000000014C790817 66 44 89 1D 99 04 BD 0A                                         mov     cs:word_157360CB8, r11w
.std:000000014C79081F 48 8B 7B 20                                                     mov     rdi, [rbx+20h]
.std:000000014C790823 48 8D 4A FF                                                     lea     rcx, [rdx-1]    ; Load Effective Address
.std:000000014C790827 48 8B C7                                                        mov     rax, rdi
.std:000000014C79082A 48 C1 E0 05                                                     shl     rax, 5          ; Shift Logical Left
.std:000000014C79082E 48 03 C8                                                        add     rcx, rax        ; Add
.std:000000014C790831 48 8D 42 FF                                                     lea     rax, [rdx-1]    ; Load Effective Address
.std:000000014C790835 48 F7 D0                                                        not     rax             ; One's Complement Negation
.std:000000014C790838 33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
.std:000000014C79083A 48 23 C8                                                        and     rcx, rax        ; Logical AND
.std:000000014C79083D E8 9E AF 14 00                                                  call    sub_14C8DB7E0   ; Call Procedure
.std:000000014C790842 33 C9                                                           xor     ecx, ecx        ; Logical Exclusive OR
.std:000000014C790844 48 89 83 60 04 00 00                                            mov     [rbx+460h], rax
.std:000000014C79084B 48 85 FF                                                        test    rdi, rdi        ; Logical Compare
.std:000000014C79084E 74 19                                                           jz      short loc_14C790869 ; Jump if Zero (ZF=1)
.std:000000014C790850
.std:000000014C790850                                                 loc_14C790850:                          ; CODE XREF: sub_14C78FBF0+C77↓j
.std:000000014C790850 48 89 08                                                        mov     [rax], rcx
.std:000000014C790853 48 89 48 08                                                     mov     [rax+8], rcx
.std:000000014C790857 48 89 40 10                                                     mov     [rax+10h], rax
.std:000000014C79085B 48 89 40 18                                                     mov     [rax+18h], rax
.std:000000014C79085F 48 83 C0 20                                                     add     rax, 20h ; ' '  ; Add
.std:000000014C790863 48 83 EF 01                                                     sub     rdi, 1          ; Integer Subtraction
.std:000000014C790867 75 E7                                                           jnz     short loc_14C790850 ; Jump if Not Zero (ZF=0)
.std:000000014C790869
.std:000000014C790869                                                 loc_14C790869:                          ; CODE XREF: sub_14C78FBF0+C5E↑j
.std:000000014C790869 48 8B 6C 24 60                                                  mov     rbp, [rsp+48h+arg_10]
.std:000000014C79086E 48 8D 05 4B 04 BD 0A                                            lea     rax, qword_157360CC0 ; Load Effective Address
.std:000000014C790875 48 8B 74 24 68                                                  mov     rsi, [rsp+48h+arg_18]
.std:000000014C79087A 48 89 05 9F 7B C4 0A                                            mov     cs:off_1573D8420, rax
.std:000000014C790881 48 8B C3                                                        mov     rax, rbx
.std:000000014C790884 48 89 1D 35 04 BD 0A                                            mov     cs:qword_157360CC0, rbx
.std:000000014C79088B 48 89 8B B8 08 00 00                                            mov     [rbx+8B8h], rcx
.std:000000014C790892 C6 83 B0 08 00 00 00                                            mov     byte ptr [rbx+8B0h], 0

.std:000000014C790899 48 8B 5C 24 58                                                  mov     rbx, [rsp+58h]
.std:000000014C79089E 48 83 C4 20                                                     add     rsp, 20h        ; Add
.std:000000014C7908A2 41 5F                                                           pop     r15
.std:000000014C7908A4 41 5E                                                           pop     r14
.std:000000014C7908A6 41 5D                                                           pop     r13
.std:000000014C7908A8 41 5C                                                           pop     r12
.std:000000014C7908AA 5F                                                              pop     rdi
.std:000000014C7908AB C3                                                              retn                    ; Return Near from Procedure
.std:000000014C7908AB                                                 sub_14C78FBF0   endp
.std:000000014C7908AB
.std:000000014C7908AB                                                 ; ---------------------------------------------------------------------------
.std:000000014C7908AC                                                 algn_14C7908AC:                         ; DATA XREF: .std:0000000157E197A8↓o
.std:000000014C7908AC CC CC CC CC                                                     align 10h
.std:000000014C7908B0


Black offset 157360C9C + 0x180    sub_14C78FBF0+589↑w .std:0000000157360C9C   ; sub_14C78FBF0+B89↑w

.std:0000000157360C60 F0 7F                                           word_157360C60  dw 7FF0h                ; DATA XREF: sub_14C78FBF0+3DE↑w
.std:0000000157360C60                                                                                         ; sub_14C78FBF0+9E5↑w ...
.std:0000000157360C62 50 55                                           word_157360C62  dw 5550h                ; DATA XREF: sub_14C78FBF0+3EC↑w
.std:0000000157360C62                                                                                         ; sub_14C78FBF0+9F3↑w
.std:0000000157360C64 F0 3F                                           word_157360C64  dw 3FF0h                ; DATA XREF: sub_14C78FBF0+3FA↑w
.std:0000000157360C64                                                                                         ; sub_14C78FBF0+A01↑w
.std:0000000157360C66 30 33                                           word_157360C66  dw 3330h                ; DATA XREF: sub_14C78FBF0+408↑w
.std:0000000157360C66                                                                                         ; sub_14C78FBF0+A0F↑w
.std:0000000157360C68 A0 2A                                           word_157360C68  dw 2AA0h                ; DATA XREF: sub_14C78FBF0+41D↑w
.std:0000000157360C68                                                                                         ; sub_14C78FBF0+A1D↑w
.std:0000000157360C6A 90 24                                           word_157360C6A  dw 2490h                ; DATA XREF: sub_14C78FBF0+42B↑w
.std:0000000157360C6A                                                                                         ; sub_14C78FBF0+A2B↑w
.std:0000000157360C6C F0 1F                                           word_157360C6C  dw 1FF0h                ; DATA XREF: sub_14C78FBF0+439↑w
.std:0000000157360C6C                                                                                         ; sub_14C78FBF0+A39↑w
.std:0000000157360C6E 70 1C                                           word_157360C6E  dw 1C70h                ; DATA XREF: sub_14C78FBF0+447↑w
.std:0000000157360C6E                                                                                         ; sub_14C78FBF0+A47↑w
.std:0000000157360C70 80 19                                           word_157360C70  dw 1980h                ; DATA XREF: sub_14C78FBF0+455↑w
.std:0000000157360C70                                                                                         ; sub_14C78FBF0+A55↑w
.std:0000000157360C72 40 17                                           word_157360C72  dw 1740h                ; DATA XREF: sub_14C78FBF0+463↑w
.std:0000000157360C72                                                                                         ; sub_14C78FBF0+A63↑w
.std:0000000157360C74 50 15                                           word_157360C74  dw 1550h                ; DATA XREF: sub_14C78FBF0+471↑w
.std:0000000157360C74                                                                                         ; sub_14C78FBF0+A71↑w
.std:0000000157360C76 B0 13                                           word_157360C76  dw 13B0h                ; DATA XREF: sub_14C78FBF0+47F↑w
.std:0000000157360C76                                                                                         ; sub_14C78FBF0+A7F↑w
.std:0000000157360C78 40 12                                           word_157360C78  dw 1240h                ; DATA XREF: sub_14C78FBF0+48D↑w
.std:0000000157360C78                                                                                         ; sub_14C78FBF0+A8D↑w
.std:0000000157360C7A 10 11                                           word_157360C7A  dw 1110h                ; DATA XREF: sub_14C78FBF0+49B↑w
.std:0000000157360C7A                                                                                         ; sub_14C78FBF0+A9B↑w
.std:0000000157360C7C F0 0F                                           word_157360C7C  dw 0FF0h                ; DATA XREF: sub_14C78FBF0+4A9↑w
.std:0000000157360C7C                                                                                         ; sub_14C78FBF0+AA9↑w
.std:0000000157360C7E C0 0C                                           word_157360C7E  dw 0CC0h                ; DATA XREF: sub_14C78FBF0+4B7↑w
.std:0000000157360C7E                                                                                         ; sub_14C78FBF0+AB7↑w
.std:0000000157360C80 A0 0A                                           word_157360C80  dw 0AA0h                ; DATA XREF: sub_14C78FBF0+4C5↑w
.std:0000000157360C80                                                                                         ; sub_14C78FBF0+AC5↑w
.std:0000000157360C82 20 09                                           word_157360C82  dw 920h                 ; DATA XREF: sub_14C78FBF0+4D3↑w
.std:0000000157360C82                                                                                         ; sub_14C78FBF0+AD3↑w
.std:0000000157360C84 F0 07                                           word_157360C84  dw 7F0h                 ; DATA XREF: sub_14C78FBF0+4E1↑w
.std:0000000157360C84                                                                                         ; sub_14C78FBF0+AE1↑w
.std:0000000157360C86 60 06                                           word_157360C86  dw 660h                 ; DATA XREF: sub_14C78FBF0+4EF↑w
.std:0000000157360C86                                                                                         ; sub_14C78FBF0+AEF↑w
.std:0000000157360C88 50 05                                           word_157360C88  dw 550h                 ; DATA XREF: sub_14C78FBF0+4FD↑w
.std:0000000157360C88                                                                                         ; sub_14C78FBF0+AFD↑w
.std:0000000157360C8A 90 04                                           word_157360C8A  dw 490h                 ; DATA XREF: sub_14C78FBF0+50B↑w
.std:0000000157360C8A                                                                                         ; sub_14C78FBF0+B0B↑w
.std:0000000157360C8C F0 03                                           word_157360C8C  dw 3F0h                 ; DATA XREF: sub_14C78FBF0+519↑w
.std:0000000157360C8C                                                                                         ; sub_14C78FBF0+B19↑w
.std:0000000157360C8E 80 03                                           word_157360C8E  dw 380h                 ; DATA XREF: sub_14C78FBF0+527↑w
.std:0000000157360C8E                                                                                         ; sub_14C78FBF0+B27↑w
.std:0000000157360C90 00 03                                           word_157360C90  dw 300h                 ; DATA XREF: sub_14C78FBF0+535↑w
.std:0000000157360C90                                                                                         ; sub_14C78FBF0+B35↑w
.std:0000000157360C92 C0 02                                           word_157360C92  dw 2C0h                 ; DATA XREF: sub_14C78FBF0+543↑w
.std:0000000157360C92                                                                                         ; sub_14C78FBF0+B43↑w
.std:0000000157360C94 80 02                                           word_157360C94  dw 280h                 ; DATA XREF: sub_14C78FBF0+551↑w
.std:0000000157360C94                                                                                         ; sub_14C78FBF0+B51↑w
.std:0000000157360C96 40 02                                           word_157360C96  dw 240h                 ; DATA XREF: sub_14C78FBF0+55F↑w
.std:0000000157360C96                                                                                         ; sub_14C78FBF0+B5F↑w
.std:0000000157360C98 00 02                                           word_157360C98  dw 200h                 ; DATA XREF: sub_14C78FBF0+56D↑w
.std:0000000157360C98                                                                                         ; sub_14C78FBF0+B6D↑w
.std:0000000157360C9A C0 01                                           word_157360C9A  dw 1C0h                 ; DATA XREF: sub_14C78FBF0+57B↑w
.std:0000000157360C9A                                                                                         ; sub_14C78FBF0+B7B↑w
.std:0000000157360C9C 80 01                                           word_157360C9C  dw 180h                 ; DATA XREF: sub_14C78FBF0+589↑w
.std:0000000157360C9C                                                                                         ; sub_14C78FBF0+B89↑w
.std:0000000157360C9E 40 01                                           word_157360C9E  dw 140h                 ; DATA XREF: sub_14C78FBF0+597↑w
.std:0000000157360C9E                                                                                         ; sub_14C78FBF0+B97↑w
.std:0000000157360CA0 20 01                                           word_157360CA0  dw 120h                 ; DATA XREF: sub_14C78FBF0+5A5↑w
.std:0000000157360CA0                                                                                         ; sub_14C78FBF0+BA5↑w
.std:0000000157360CA2 00 01                                           word_157360CA2  dw 100h                 ; DATA XREF: sub_14C78FBF0+5B3↑w
.std:0000000157360CA2                                                                                         ; sub_14C78FBF0+BB3↑w
.std:0000000157360CA4 E0 00                                           word_157360CA4  dw 0E0h                 ; DATA XREF: sub_14C78FBF0+5C1↑w
.std:0000000157360CA4                                                                                         ; sub_14C78FBF0+BC1↑w
.std:0000000157360CA6 C0 00                                           word_157360CA6  dw 0C0h                 ; DATA XREF: sub_14C78FBF0+5CF↑w
.std:0000000157360CA6                                                                                         ; sub_14C78FBF0+BCF↑w
.std:0000000157360CA8 A0 00                                           word_157360CA8  dw 0A0h                 ; DATA XREF: sub_14C78FBF0+5DD↑w
.std:0000000157360CA8                                                                                         ; sub_14C78FBF0+BDD↑w
.std:0000000157360CAA 80 00                                           word_157360CAA  dw 80h                  ; DATA XREF: sub_14C78FBF0+5EB↑w
.std:0000000157360CAA                                                                                         ; sub_14C78FBF0+BE4↑w
.std:0000000157360CAC 70 00                                           word_157360CAC  dw 70h                  ; DATA XREF: sub_14C78FBF0+5F9↑w
.std:0000000157360CAC                                                                                         ; sub_14C78FBF0+BEC↑w
.std:0000000157360CAE 60 00                                           word_157360CAE  dw 60h                  ; DATA XREF: sub_14C78FBF0+607↑w
.std:0000000157360CAE                                                                                         ; sub_14C78FBF0+BF4↑w
.std:0000000157360CB0 50 00                                           word_157360CB0  dw 50h                  ; DATA XREF: sub_14C78FBF0+615↑w
.std:0000000157360CB0                                                                                         ; sub_14C78FBF0+BFC↑w
.std:0000000157360CB2 40 00                                           word_157360CB2  dw 40h                  ; DATA XREF: sub_14C78FBF0+623↑w
.std:0000000157360CB2                                                                                         ; sub_14C78FBF0+C04↑w
.std:0000000157360CB4 30 00                                           word_157360CB4  dw 30h                  ; DATA XREF: sub_14C78FBF0+631↑w
.std:0000000157360CB4                                                                                         ; sub_14C78FBF0+C0B↑w
.std:0000000157360CB6 20 00                                           word_157360CB6  dw 20h                  ; DATA XREF: sub_14C78FBF0+63F↑w
.std:0000000157360CB6                                                                                         ; sub_14C78FBF0+C12↑w
.std:0000000157360CB8 10 00                                           word_157360CB8  dw 10h                  ; DATA XREF: sub_14C78FBF0+64D↑w
.std:0000000157360CB8                                                                                         ; sub_14C78FBF0+C27↑w
.std:0000000157360CBA 00 00 00 00 00 00                                               align 20h
.std:0000000157360CC0 80 79 4F 0B 00 00 00 00                         qword_157360CC0 dq 0B4F7980h            ; DATA XREF: sub_14C78FBF0+C7E↑o
.std:0000000157360CC0                                                                                         ; sub_14C78FBF0+C94↑w ...
.std:0000000157360CC8 49 00 00 00                                     dword_157360CC8 dd 49h                  ; DATA XREF: sub_14C791B00+B↑r
.std:0000000157360CC8                                                                                         ; sub_14C791B00:loc_14C791C6E↑r ...
.std:0000000157360CCC 00 00 01 00                                     dword_157360CCC dd 10000h               ; DATA XREF: sub_14C78FBF0+665↑w
.std:0000000157360CCC                                                                                         ; sub_14C78FBF0+698↑r ...
.std:0000000157360CD0 00 10 00 00                                     dword_157360CD0 dd 1000h                ; DATA XREF: sub_14C78FBF0+66B↑w
.std:0000000157360CD0                                                                                         ; sub_14C78FBF0+676↑w ...
.std:0000000157360CD4 00 00 00 00 00 00 00 00 00 00 00 00                             align 20h
.std:0000000157360CE0 00                                              unk_157360CE0   db    0                 ; DATA XREF: sub_14C78FBF0+8D0↑o
.std:0000000157360CE0                                                                                         ; sub_14C7971B0+51↑o
.std:0000000157360CE1 00                                                              db    0
.std:0000000157360CE2 01                                                              db    1
.std:0000000157360CE3 02                                                              db    2
.std:0000000157360CE4 03                                                              db    3
.std:0000000157360CE5 04                                                              db    4
.std:0000000157360CE6 05                                                              db    5
.std:0000000157360CE7 06                                                              db    6
.std:0000000157360CE8 07                                                              db    7
.std:0000000157360CE9 08                                                              db    8
.std:0000000157360CEA 08                                                              db    8
.std:0000000157360CEB 09                                                              db    9
.std:0000000157360CEC 09                                                              db    9
.std:0000000157360CED 0A                                                              db  0Ah
.std:0000000157360CEE 0A                                                              db  0Ah
.std:0000000157360CEF 0B                                                              db  0Bh
.std:0000000157360CF0 0B                                                              db  0Bh
.std:0000000157360CF1 0C                                                              db  0Ch
.std:0000000157360CF2 0C                                                              db  0Ch
.std:0000000157360CF3 0D                                                              db  0Dh
.std:0000000157360CF4 0D                                                              db  0Dh
.std:0000000157360CF5 0E                                                              db  0Eh
.std:0000000157360CF6 0E                                                              db  0Eh
.std:0000000157360CF7 0E                                                              db  0Eh
.std:0000000157360CF8 0E                                                              db  0Eh
.std:0000000157360CF9 0F                                                              db  0Fh
.std:0000000157360CFA 0F                                                              db  0Fh
.std:0000000157360CFB 0F                                                              db  0Fh
.std:0000000157360CFC 0F                                                              db  0Fh
.std:0000000157360CFD 10                                                              db  10h
.std:0000000157360CFE 10                                                              db  10h
.std:0000000157360CFF 10                                                              db  10h
.std:0000000157360D00 10                                                              db  10h
.std:0000000157360D01 11                                                              db  11h
.std:0000000157360D02 11                                                              db  11h
.std:0000000157360D03 11                                                              db  11h
.std:0000000157360D04 11                                                              db  11h
.std:0000000157360D05 12                                                              db  12h
.std:0000000157360D06 12                                                              db  12h
.std:0000000157360D07 12                                                              db  12h
.std:0000000157360D08 12                                                              db  12h
.std:0000000157360D09 13                                                              db  13h
.std:0000000157360D0A 13                                                              db  13h
.std:0000000157360D0B 13                                                              db  13h
.std:0000000157360D0C 13                                                              db  13h
.std:0000000157360D0D 14                                                              db  14h
.std:0000000157360D0E 14                                                              db  14h
.std:0000000157360D0F 14                                                              db  14h
.std:0000000157360D10 14                                                              db  14h
.std:0000000157360D11 15                                                              db  15h
.std:0000000157360D12 15                                                              db  15h
.std:0000000157360D13 15                                                              db  15h
.std:0000000157360D14 15                                                              db  15h
.std:0000000157360D15 15                                                              db  15h
.std:0000000157360D16 15                                                              db  15h
.std:0000000157360D17 15                                                              db  15h
.std:0000000157360D18 15                                                              db  15h
.std:0000000157360D19 16                                                              db  16h
.std:0000000157360D1A 16                                                              db  16h
.std:0000000157360D1B 16                                                              db  16h
.std:0000000157360D1C 16                                                              db  16h
.std:0000000157360D1D 16                                                              db  16h
.std:0000000157360D1E 16                                                              db  16h
.std:0000000157360D1F 16                                                              db  16h
.std:0000000157360D20 17                                                              db  17h
.std:0000000157360D21 17                                                              db  17h
.std:0000000157360D22 17                                                              db  17h
.std:0000000157360D23 17                                                              db  17h
.std:0000000157360D24 17                                                              db  17h
.std:0000000157360D25 17                                                              db  17h
.std:0000000157360D26 17                                                              db  17h
.std:0000000157360D27 17                                                              db  17h
.std:0000000157360D28 17                                                              db  17h
.std:0000000157360D29 17                                                              db  17h
.std:0000000157360D2A 18                                                              db  18h
.std:0000000157360D2B 18                                                              db  18h
.std:0000000157360D2C 18                                                              db  18h
.std:0000000157360D2D 18                                                              db  18h
.std:0000000157360D2E 18                                                              db  18h
.std:0000000157360D2F 18                                                              db  18h
.std:0000000157360D30 18                                                              db  18h
.std:0000000157360D31 18                                                              db  18h
.std:0000000157360D32 18                                                              db  18h
.std:0000000157360D33 18                                                              db  18h
.std:0000000157360D34 18                                                              db  18h
.std:0000000157360D35 18                                                              db  18h
.std:0000000157360D36 19                                                              db  19h
.std:0000000157360D37 19                                                              db  19h
.std:0000000157360D38 19                                                              db  19h
.std:0000000157360D39 19                                                              db  19h
.std:0000000157360D3A 19                                                              db  19h
.std:0000000157360D3B 19                                                              db  19h
.std:0000000157360D3C 19                                                              db  19h
.std:0000000157360D3D 19                                                              db  19h
.std:0000000157360D3E 19                                                              db  19h
.std:0000000157360D3F 19                                                              db  19h
.std:0000000157360D40 19                                                              db  19h
.std:0000000157360D41 19                                                              db  19h
.std:0000000157360D42 19                                                              db  19h
.std:0000000157360D43 19                                                              db  19h
.std:0000000157360D44 19                                                              db  19h
.std:0000000157360D45 19                                                              db  19h
.std:0000000157360D46 19                                                              db  19h
.std:0000000157360D47 1A                                                              db  1Ah
.std:0000000157360D48 1A                                                              db  1Ah
.std:0000000157360D49 1A                                                              db  1Ah
.std:0000000157360D4A 1A                                                              db  1Ah
.std:0000000157360D4B 1A                                                              db  1Ah
.std:0000000157360D4C 1A                                                              db  1Ah
.std:0000000157360D4D 1A                                                              db  1Ah
.std:0000000157360D4E 1A                                                              db  1Ah
.std:0000000157360D4F 1A                                                              db  1Ah
.std:0000000157360D50 1A                                                              db  1Ah
.std:0000000157360D51 1A                                                              db  1Ah
.std:0000000157360D52 1A                                                              db  1Ah
.std:0000000157360D53 1A                                                              db  1Ah
.std:0000000157360D54 1A                                                              db  1Ah
.std:0000000157360D55 1A                                                              db  1Ah
.std:0000000157360D56 1A                                                              db  1Ah
.std:0000000157360D57 1A                                                              db  1Ah
.std:0000000157360D58 1A                                                              db  1Ah
.std:0000000157360D59 1A                                                              db  1Ah
.std:0000000157360D5A 1A                                                              db  1Ah
.std:0000000157360D5B 1A                                                              db  1Ah
.std:0000000157360D5C 1A                                                              db  1Ah
.std:0000000157360D5D 1A                                                              db  1Ah
.std:0000000157360D5E 1A                                                              db  1Ah
.std:0000000157360D5F 1A                                                              db  1Ah
.std:0000000157360D60 1B                                                              db  1Bh
.std:0000000157360D61 1B                                                              db  1Bh
.std:0000000157360D62 1B                                                              db  1Bh
.std:0000000157360D63 1B                                                              db  1Bh
.std:0000000157360D64 1B                                                              db  1Bh
.std:0000000157360D65 1B                                                              db  1Bh
.std:0000000157360D66 1B                                                              db  1Bh
.std:0000000157360D67 1B                                                              db  1Bh
.std:0000000157360D68 1B                                                              db  1Bh
.std:0000000157360D69 1B                                                              db  1Bh
.std:0000000157360D6A 1B                                                              db  1Bh
.std:0000000157360D6B 1B                                                              db  1Bh
.std:0000000157360D6C 1B                                                              db  1Bh
.std:0000000157360D6D 1B                                                              db  1Bh
.std:0000000157360D6E 1B                                                              db  1Bh
.std:0000000157360D6F 1B                                                              db  1Bh
.std:0000000157360D70 1B                                                              db  1Bh
.std:0000000157360D71 1B                                                              db  1Bh
.std:0000000157360D72 1B                                                              db  1Bh
.std:0000000157360D73 1C                                                              db  1Ch
.std:0000000157360D74 1C                                                              db  1Ch
.std:0000000157360D75 1C                                                              db  1Ch
.std:0000000157360D76 1C                                                              db  1Ch
.std:0000000157360D77 1C                                                              db  1Ch
.std:0000000157360D78 1C                                                              db  1Ch
.std:0000000157360D79 1C                                                              db  1Ch
.std:0000000157360D7A 1C                                                              db  1Ch
.std:0000000157360D7B 1C                                                              db  1Ch
.std:0000000157360D7C 1C                                                              db  1Ch
.std:0000000157360D7D 1C                                                              db  1Ch
.std:0000000157360D7E 1C                                                              db  1Ch
.std:0000000157360D7F 1C                                                              db  1Ch
.std:0000000157360D80 1C                                                              db  1Ch
.std:0000000157360D81 1C                                                              db  1Ch
.std:0000000157360D82 1C                                                              db  1Ch
.std:0000000157360D83 1C                                                              db  1Ch
.std:0000000157360D84 1C                                                              db  1Ch
.std:0000000157360D85 1C                                                              db  1Ch
.std:0000000157360D86 1C                                                              db  1Ch
.std:0000000157360D87 1C                                                              db  1Ch
.std:0000000157360D88 1C                                                              db  1Ch
.std:0000000157360D89 1C                                                              db  1Ch
.std:0000000157360D8A 1C                                                              db  1Ch
.std:0000000157360D8B 1D                                                              db  1Dh
.std:0000000157360D8C 1D                                                              db  1Dh
.std:0000000157360D8D 1D                                                              db  1Dh
.std:0000000157360D8E 1D                                                              db  1Dh
.std:0000000157360D8F 1D                                                              db  1Dh
.std:0000000157360D90 1D                                                              db  1Dh
.std:0000000157360D91 1D                                                              db  1Dh
.std:0000000157360D92 1D                                                              db  1Dh
.std:0000000157360D93 1D                                                              db  1Dh
.std:0000000157360D94 1D                                                              db  1Dh
.std:0000000157360D95 1D                                                              db  1Dh
.std:0000000157360D96 1D                                                              db  1Dh
.std:0000000157360D97 1D                                                              db  1Dh
.std:0000000157360D98 1D                                                              db  1Dh
.std:0000000157360D99 1D                                                              db  1Dh
.std:0000000157360D9A 1D                                                              db  1Dh
.std:0000000157360D9B 1D                                                              db  1Dh
.std:0000000157360D9C 1D                                                              db  1Dh
.std:0000000157360D9D 1D                                                              db  1Dh
.std:0000000157360D9E 1D                                                              db  1Dh
.std:0000000157360D9F 1D                                                              db  1Dh
.std:0000000157360DA0 1D                                                              db  1Dh
.std:0000000157360DA1 1D                                                              db  1Dh
.std:0000000157360DA2 1D                                                              db  1Dh
.std:0000000157360DA3 1D                                                              db  1Dh
.std:0000000157360DA4 1D                                                              db  1Dh
.std:0000000157360DA5 1D                                                              db  1Dh
.std:0000000157360DA6 1D                                                              db  1Dh
.std:0000000157360DA7 1D                                                              db  1Dh
.std:0000000157360DA8 1D                                                              db  1Dh
.std:0000000157360DA9 1D                                                              db  1Dh
.std:0000000157360DAA 1D                                                              db  1Dh
.std:0000000157360DAB 1D                                                              db  1Dh
.std:0000000157360DAC 1D                                                              db  1Dh
.std:0000000157360DAD 1E                                                              db  1Eh
.std:0000000157360DAE 1E                                                              db  1Eh
.std:0000000157360DAF 1E                                                              db  1Eh
.std:0000000157360DB0 1E                                                              db  1Eh
.std:0000000157360DB1 1E                                                              db  1Eh
.std:0000000157360DB2 1E                                                              db  1Eh
.std:0000000157360DB3 1E                                                              db  1Eh
.std:0000000157360DB4 1E                                                              db  1Eh
.std:0000000157360DB5 1E                                                              db  1Eh
.std:0000000157360DB6 1E                                                              db  1Eh
.std:0000000157360DB7 1E                                                              db  1Eh
.std:0000000157360DB8 1E                                                              db  1Eh
.std:0000000157360DB9 1E                                                              db  1Eh
.std:0000000157360DBA 1E                                                              db  1Eh
.std:0000000157360DBB 1E                                                              db  1Eh
.std:0000000157360DBC 1E                                                              db  1Eh
.std:0000000157360DBD 1E                                                              db  1Eh
.std:0000000157360DBE 1E                                                              db  1Eh
.std:0000000157360DBF 1E                                                              db  1Eh
.std:0000000157360DC0 1E                                                              db  1Eh
.std:0000000157360DC1 1E                                                              db  1Eh
.std:0000000157360DC2 1E                                                              db  1Eh
.std:0000000157360DC3 1E                                                              db  1Eh
.std:0000000157360DC4 1E                                                              db  1Eh
.std:0000000157360DC5 1E                                                              db  1Eh
.std:0000000157360DC6 1E                                                              db  1Eh
.std:0000000157360DC7 1E                                                              db  1Eh
.std:0000000157360DC8 1E                                                              db  1Eh
.std:0000000157360DC9 1E                                                              db  1Eh
.std:0000000157360DCA 1E                                                              db  1Eh
.std:0000000157360DCB 1E                                                              db  1Eh
.std:0000000157360DCC 1E                                                              db  1Eh
.std:0000000157360DCD 1E                                                              db  1Eh
.std:0000000157360DCE 1E                                                              db  1Eh
.std:0000000157360DCF 1E                                                              db  1Eh
.std:0000000157360DD0 1E                                                              db  1Eh
.std:0000000157360DD1 1E                                                              db  1Eh
.std:0000000157360DD2 1E                                                              db  1Eh
.std:0000000157360DD3 1E                                                              db  1Eh
.std:0000000157360DD4 1E                                                              db  1Eh
.std:0000000157360DD5 1E                                                              db  1Eh
.std:0000000157360DD6 1E                                                              db  1Eh
.std:0000000157360DD7 1E                                                              db  1Eh
.std:0000000157360DD8 1E                                                              db  1Eh
.std:0000000157360DD9 1E                                                              db  1Eh
.std:0000000157360DDA 1E                                                              db  1Eh
.std:0000000157360DDB 1E                                                              db  1Eh
.std:0000000157360DDC 1E                                                              db  1Eh
.std:0000000157360DDD 1E                                                              db  1Eh
.std:0000000157360DDE 1E                                                              db  1Eh
.std:0000000157360DDF 1E                                                              db  1Eh
.std:0000000157360DE0 1F                                                              db  1Fh
.std:0000000157360DE1 1F                                                              db  1Fh
.std:0000000157360DE2 1F                                                              db  1Fh
.std:0000000157360DE3 1F                                                              db  1Fh
.std:0000000157360DE4 1F                                                              db  1Fh
.std:0000000157360DE5 1F                                                              db  1Fh
.std:0000000157360DE6 1F                                                              db  1Fh
.std:0000000157360DE7 1F                                                              db  1Fh
.std:0000000157360DE8 1F                                                              db  1Fh
.std:0000000157360DE9 1F                                                              db  1Fh
.std:0000000157360DEA 1F                                                              db  1Fh
.std:0000000157360DEB 1F                                                              db  1Fh
.std:0000000157360DEC 1F                                                              db  1Fh
.std:0000000157360DED 1F                                                              db  1Fh
.std:0000000157360DEE 1F                                                              db  1Fh
.std:0000000157360DEF 1F                                                              db  1Fh
.std:0000000157360DF0 1F                                                              db  1Fh
.std:0000000157360DF1 1F                                                              db  1Fh
.std:0000000157360DF2 20                                                              db  20h
.std:0000000157360DF3 20                                                              db  20h
.std:0000000157360DF4 20                                                              db  20h
.std:0000000157360DF5 20                                                              db  20h
.std:0000000157360DF6 20                                                              db  20h
.std:0000000157360DF7 20                                                              db  20h
.std:0000000157360DF8 20                                                              db  20h
.std:0000000157360DF9 20                                                              db  20h
.std:0000000157360DFA 20                                                              db  20h
.std:0000000157360DFB 20                                                              db  20h
.std:0000000157360DFC 20                                                              db  20h
.std:0000000157360DFD 20                                                              db  20h
.std:0000000157360DFE 20                                                              db  20h
.std:0000000157360DFF 20                                                              db  20h
.std:0000000157360E00 20                                                              db  20h
.std:0000000157360E01 20                                                              db  20h
.std:0000000157360E02 20                                                              db  20h
.std:0000000157360E03 20                                                              db  20h
.std:0000000157360E04 20                                                              db  20h
.std:0000000157360E05 21                                                              db  21h ; !
.std:0000000157360E06 21                                                              db  21h ; !
.std:0000000157360E07 21                                                              db  21h ; !
.std:0000000157360E08 21                                                              db  21h ; !
.std:0000000157360E09 21                                                              db  21h ; !
.std:0000000157360E0A 21                                                              db  21h ; !
.std:0000000157360E0B 21                                                              db  21h ; !
.std:0000000157360E0C 21                                                              db  21h ; !
.std:0000000157360E0D 21                                                              db  21h ; !
.std:0000000157360E0E 21                                                              db  21h ; !
.std:0000000157360E0F 21                                                              db  21h ; !
.std:0000000157360E10 21                                                              db  21h ; !
.std:0000000157360E11 21                                                              db  21h ; !
.std:0000000157360E12 21                                                              db  21h ; !
.std:0000000157360E13 21                                                              db  21h ; !
.std:0000000157360E14 21                                                              db  21h ; !
.std:0000000157360E15 21                                                              db  21h ; !
.std:0000000157360E16 21                                                              db  21h ; !
.std:0000000157360E17 21                                                              db  21h ; !
.std:0000000157360E18 21                                                              db  21h ; !
.std:0000000157360E19 21                                                              db  21h ; !
.std:0000000157360E1A 21                                                              db  21h ; !
.std:0000000157360E1B 21                                                              db  21h ; !
.std:0000000157360E1C 22                                                              db  22h ; "
.std:0000000157360E1D 22                                                              db  22h ; "
.std:0000000157360E1E 22                                                              db  22h ; "
.std:0000000157360E1F 22                                                              db  22h ; "
.std:0000000157360E20 22                                                              db  22h ; "
.std:0000000157360E21 22                                                              db  22h ; "
.std:0000000157360E22 22                                                              db  22h ; "
.std:0000000157360E23 22                                                              db  22h ; "
.std:0000000157360E24 22                                                              db  22h ; "
.std:0000000157360E25 22                                                              db  22h ; "
.std:0000000157360E26 22                                                              db  22h ; "
.std:0000000157360E27 22                                                              db  22h ; "
.std:0000000157360E28 22                                                              db  22h ; "
.std:0000000157360E29 22                                                              db  22h ; "
.std:0000000157360E2A 22                                                              db  22h ; "
.std:0000000157360E2B 22                                                              db  22h ; "
.std:0000000157360E2C 22                                                              db  22h ; "
.std:0000000157360E2D 22                                                              db  22h ; "
.std:0000000157360E2E 22                                                              db  22h ; "
.std:0000000157360E2F 22                                                              db  22h ; "
.std:0000000157360E30 22                                                              db  22h ; "
.std:0000000157360E31 22                                                              db  22h ; "
.std:0000000157360E32 22                                                              db  22h ; "
.std:0000000157360E33 22                                                              db  22h ; "
.std:0000000157360E34 22                                                              db  22h ; "
.std:0000000157360E35 22                                                              db  22h ; "
.std:0000000157360E36 23                                                              db  23h ; #
.std:0000000157360E37 23                                                              db  23h ; #
.std:0000000157360E38 23                                                              db  23h ; #
.std:0000000157360E39 23                                                              db  23h ; #
.std:0000000157360E3A 23                                                              db  23h ; #
.std:0000000157360E3B 23                                                              db  23h ; #
.std:0000000157360E3C 23                                                              db  23h ; #
.std:0000000157360E3D 23                                                              db  23h ; #
.std:0000000157360E3E 23                                                              db  23h ; #
.std:0000000157360E3F 23                                                              db  23h ; #
.std:0000000157360E40 23                                                              db  23h ; #
.std:0000000157360E41 23                                                              db  23h ; #
.std:0000000157360E42 23                                                              db  23h ; #
.std:0000000157360E43 23                                                              db  23h ; #
.std:0000000157360E44 23                                                              db  23h ; #
.std:0000000157360E45 23                                                              db  23h ; #
.std:0000000157360E46 23                                                              db  23h ; #
.std:0000000157360E47 23                                                              db  23h ; #
.std:0000000157360E48 23                                                              db  23h ; #
.std:0000000157360E49 23                                                              db  23h ; #
.std:0000000157360E4A 23                                                              db  23h ; #
.std:0000000157360E4B 23                                                              db  23h ; #
.std:0000000157360E4C 23                                                              db  23h ; #
.std:0000000157360E4D 23                                                              db  23h ; #
.std:0000000157360E4E 23                                                              db  23h ; #
.std:0000000157360E4F 23                                                              db  23h ; #
.std:0000000157360E50 23                                                              db  23h ; #
.std:0000000157360E51 23                                                              db  23h ; #
.std:0000000157360E52 23                                                              db  23h ; #
.std:0000000157360E53 23                                                              db  23h ; #
.std:0000000157360E54 23                                                              db  23h ; #
.std:0000000157360E55 24                                                              db  24h ; $
.std:0000000157360E56 24                                                              db  24h ; $
.std:0000000157360E57 24                                                              db  24h ; $
.std:0000000157360E58 24                                                              db  24h ; $
.std:0000000157360E59 24                                                              db  24h ; $
.std:0000000157360E5A 24                                                              db  24h ; $
.std:0000000157360E5B 24                                                              db  24h ; $
.std:0000000157360E5C 24                                                              db  24h ; $
.std:0000000157360E5D 24                                                              db  24h ; $
.std:0000000157360E5E 24                                                              db  24h ; $
.std:0000000157360E5F 24                                                              db  24h ; $
.std:0000000157360E60 24                                                              db  24h ; $
.std:0000000157360E61 24                                                              db  24h ; $
.std:0000000157360E62 24                                                              db  24h ; $
.std:0000000157360E63 24                                                              db  24h ; $
.std:0000000157360E64 24                                                              db  24h ; $
.std:0000000157360E65 24                                                              db  24h ; $
.std:0000000157360E66 24                                                              db  24h ; $
.std:0000000157360E67 24                                                              db  24h ; $
.std:0000000157360E68 24                                                              db  24h ; $
.std:0000000157360E69 24                                                              db  24h ; $
.std:0000000157360E6A 24                                                              db  24h ; $
.std:0000000157360E6B 24                                                              db  24h ; $
.std:0000000157360E6C 24                                                              db  24h ; $
.std:0000000157360E6D 24                                                              db  24h ; $
.std:0000000157360E6E 24                                                              db  24h ; $
.std:0000000157360E6F 24                                                              db  24h ; $
.std:0000000157360E70 24                                                              db  24h ; $
.std:0000000157360E71 24                                                              db  24h ; $
.std:0000000157360E72 24                                                              db  24h ; $
.std:0000000157360E73 24                                                              db  24h ; $
.std:0000000157360E74 24                                                              db  24h ; $
.std:0000000157360E75 24                                                              db  24h ; $
.std:0000000157360E76 24                                                              db  24h ; $
.std:0000000157360E77 24                                                              db  24h ; $
.std:0000000157360E78 24                                                              db  24h ; $
.std:0000000157360E79 25                                                              db  25h ; %
.std:0000000157360E7A 25                                                              db  25h ; %
.std:0000000157360E7B 25                                                              db  25h ; %
.std:0000000157360E7C 25                                                              db  25h ; %
.std:0000000157360E7D 25                                                              db  25h ; %
.std:0000000157360E7E 25                                                              db  25h ; %
.std:0000000157360E7F 25                                                              db  25h ; %
.std:0000000157360E80 25                                                              db  25h ; %
.std:0000000157360E81 25                                                              db  25h ; %
.std:0000000157360E82 25                                                              db  25h ; %
.std:0000000157360E83 25                                                              db  25h ; %
.std:0000000157360E84 25                                                              db  25h ; %
.std:0000000157360E85 25                                                              db  25h ; %
.std:0000000157360E86 25                                                              db  25h ; %
.std:0000000157360E87 25                                                              db  25h ; %
.std:0000000157360E88 25                                                              db  25h ; %
.std:0000000157360E89 25                                                              db  25h ; %
.std:0000000157360E8A 25                                                              db  25h ; %
.std:0000000157360E8B 25                                                              db  25h ; %
.std:0000000157360E8C 25                                                              db  25h ; %
.std:0000000157360E8D 25                                                              db  25h ; %
.std:0000000157360E8E 25                                                              db  25h ; %
.std:0000000157360E8F 25                                                              db  25h ; %
.std:0000000157360E90 25                                                              db  25h ; %
.std:0000000157360E91 25                                                              db  25h ; %
.std:0000000157360E92 25                                                              db  25h ; %
.std:0000000157360E93 25                                                              db  25h ; %
.std:0000000157360E94 25                                                              db  25h ; %
.std:0000000157360E95 25                                                              db  25h ; %
.std:0000000157360E96 25                                                              db  25h ; %
.std:0000000157360E97 25                                                              db  25h ; %
.std:0000000157360E98 25                                                              db  25h ; %
.std:0000000157360E99 25                                                              db  25h ; %
.std:0000000157360E9A 25                                                              db  25h ; %
.std:0000000157360E9B 25                                                              db  25h ; %
.std:0000000157360E9C 25                                                              db  25h ; %
.std:0000000157360E9D 25                                                              db  25h ; %
.std:0000000157360E9E 25                                                              db  25h ; %
.std:0000000157360E9F 25                                                              db  25h ; %
.std:0000000157360EA0 25                                                              db  25h ; %
.std:0000000157360EA1 25                                                              db  25h ; %
.std:0000000157360EA2 25                                                              db  25h ; %
.std:0000000157360EA3 25                                                              db  25h ; %
.std:0000000157360EA4 25                                                              db  25h ; %
.std:0000000157360EA5 25                                                              db  25h ; %
.std:0000000157360EA6 25                                                              db  25h ; %
.std:0000000157360EA7 25                                                              db  25h ; %
.std:0000000157360EA8 26                                                              db  26h ; &
.std:0000000157360EA9 26                                                              db  26h ; &
.std:0000000157360EAA 26                                                              db  26h ; &
.std:0000000157360EAB 26                                                              db  26h ; &
.std:0000000157360EAC 26                                                              db  26h ; &
.std:0000000157360EAD 26                                                              db  26h ; &
.std:0000000157360EAE 26                                                              db  26h ; &
.std:0000000157360EAF 26                                                              db  26h ; &
.std:0000000157360EB0 26                                                              db  26h ; &
.std:0000000157360EB1 26                                                              db  26h ; &
.std:0000000157360EB2 26                                                              db  26h ; &
.std:0000000157360EB3 26                                                              db  26h ; &
.std:0000000157360EB4 26                                                              db  26h ; &
.std:0000000157360EB5 26                                                              db  26h ; &
.std:0000000157360EB6 26                                                              db  26h ; &
.std:0000000157360EB7 26                                                              db  26h ; &
.std:0000000157360EB8 26                                                              db  26h ; &
.std:0000000157360EB9 26                                                              db  26h ; &
.std:0000000157360EBA 26                                                              db  26h ; &
.std:0000000157360EBB 26                                                              db  26h ; &
.std:0000000157360EBC 26                                                              db  26h ; &
.std:0000000157360EBD 26                                                              db  26h ; &
.std:0000000157360EBE 26                                                              db  26h ; &
.std:0000000157360EBF 26                                                              db  26h ; &
.std:0000000157360EC0 26                                                              db  26h ; &
.std:0000000157360EC1 26                                                              db  26h ; &
.std:0000000157360EC2 26                                                              db  26h ; &
.std:0000000157360EC3 26                                                              db  26h ; &
.std:0000000157360EC4 26                                                              db  26h ; &
.std:0000000157360EC5 26                                                              db  26h ; &
.std:0000000157360EC6 26                                                              db  26h ; &
.std:0000000157360EC7 26                                                              db  26h ; &
.std:0000000157360EC8 26                                                              db  26h ; &
.std:0000000157360EC9 26                                                              db  26h ; &
.std:0000000157360ECA 26                                                              db  26h ; &
.std:0000000157360ECB 26                                                              db  26h ; &
.std:0000000157360ECC 26                                                              db  26h ; &
.std:0000000157360ECD 26                                                              db  26h ; &
.std:0000000157360ECE 26                                                              db  26h ; &
.std:0000000157360ECF 26                                                              db  26h ; &
.std:0000000157360ED0 26                                                              db  26h ; &
.std:0000000157360ED1 26                                                              db  26h ; &
.std:0000000157360ED2 26                                                              db  26h ; &
.std:0000000157360ED3 26                                                              db  26h ; &
.std:0000000157360ED4 26                                                              db  26h ; &
.std:0000000157360ED5 26                                                              db  26h ; &
.std:0000000157360ED6 26                                                              db  26h ; &
.std:0000000157360ED7 26                                                              db  26h ; &
.std:0000000157360ED8 26                                                              db  26h ; &
.std:0000000157360ED9 26                                                              db  26h ; &
.std:0000000157360EDA 26                                                              db  26h ; &
.std:0000000157360EDB 26                                                              db  26h ; &
.std:0000000157360EDC 26                                                              db  26h ; &
.std:0000000157360EDD 26                                                              db  26h ; &
.std:0000000157360EDE 26                                                              db  26h ; &
.std:0000000157360EDF 26                                                              db  26h ; &
.std:0000000157360EE0 27                                                              db  27h ; '
.std:0000000157360EE1 27                                                              db  27h ; '
```
