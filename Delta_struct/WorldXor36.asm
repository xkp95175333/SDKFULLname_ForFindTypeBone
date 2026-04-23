sub_141CC3910+BD   48 8B 0D E4 A5 D5 14 mov rcx, cs:qword_156A1DFB8
Aob "48 8B 0D ?? ?? ?? ?? EB 31 48 8B 0D ?? ?? ?? ?? 0F B6 05 ?? ?? ?? ?? 48 89 8C 24 90 00 00 00"

sub_141CC3910+127  E8 14 37 DC FE call    loc_140A87150   ; Call Procedure
Aob "E8 ?? ?? ?? ?? 8B CD 48 63 D8 E8 ?? ?? ?? ?? 48 63 C8 48 8B 05 ?? ?? ?? ?? 48 8D 14 49 48 8B 0C D8 48 8D 04 D1 EB 03 48 8B C7 8B 40 08 C1 E8 1D A8 01 0F 85 0B 01 00 00"

sub_141CC3910
sub_141CC3910                                                      ; =============== S U B R O U T I N E =======================================
sub_141CC3910
sub_141CC3910
sub_141CC3910                                                      sub_141CC3910   proc near               ; CODE XREF: sub_141CC1AD0:loc_141CC1C34↑p
sub_141CC3910                                                                                              ; sub_141CC3570+D↑p ...
sub_141CC3910
sub_141CC3910                                                      var_68          = qword ptr -68h
sub_141CC3910                                                      var_58          = qword ptr -58h
sub_141CC3910                                                      var_50          = dword ptr -50h
sub_141CC3910                                                      var_48          = byte ptr -48h
sub_141CC3910                                                      var_8           = qword ptr -8
sub_141CC3910                                                      arg_0           = qword ptr  8
sub_141CC3910                                                      arg_8           = qword ptr  10h
sub_141CC3910                                                      arg_10          = qword ptr  18h
sub_141CC3910                                                      arg_18          = qword ptr  20h
sub_141CC3910
sub_141CC3910      48 81 EC 88 00 00 00                                            sub     rsp, 88h        ; Integer Subtraction
sub_141CC3910+7    FF 15 93 96 D5 14                                               call    cs:qword_156A1CFB0 ; Indirect Call Near Procedure
sub_141CC3910+D    84 C0                                                           test    al, al          ; Logical Compare
sub_141CC3910+F    75 09                                                           jnz     short loc_141CC392A ; Jump if Not Zero (ZF=0)
sub_141CC3910+11   48 8B 05 90 A6 D5 14                                            mov     rax, cs:qword_156A1DFB8
sub_141CC3910+18   EB 31                                                           jmp     short loc_141CC395B ; Jump
sub_141CC3910+1A                                                   ; ---------------------------------------------------------------------------
sub_141CC3910+1A
sub_141CC3910+1A                                                   loc_141CC392A:                          ; CODE XREF: sub_141CC3910+F↑j
sub_141CC3910+1A   0F B6 05 8E C6 D5 14                                            movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
sub_141CC3910+21   48 8B 0D 80 C6 D5 14                                            mov     rcx, qword ptr cs:unk_156A1FFB8
sub_141CC3910+28   34 36                                                           xor     al, 36h ; '6'   ; Logical Exclusive OR
sub_141CC3910+2A   48 89 8C 24 90 00 00 00                                         mov     [rsp+90h], rcx
sub_141CC3910+32   80 F1 36                                                        xor     cl, 36h ; '6'   ; Logical Exclusive OR
sub_141CC3910+35   88 8C 24 97 00 00 00                                            mov     [rsp+97h], cl
sub_141CC3910+3C   88 84 24 90 00 00 00                                            mov     [rsp+90h], al
sub_141CC3910+43   48 8B 84 24 90 00 00 00                                         mov     rax, [rsp+90h]
sub_141CC3910+4B
sub_141CC3910+4B                                                   loc_141CC395B:                          ; CODE XREF: sub_141CC3910+18↑j
sub_141CC3910+4B   48 89 9C 24 98 00 00 00                                         mov     [rsp+98h], rbx
sub_141CC3910+53   48 89 B4 24 A8 00 00 00                                         mov     [rsp+0A8h], rsi
sub_141CC3910+5B   48 89 BC 24 80 00 00 00                                         mov     [rsp+80h], rdi
sub_141CC3910+63   48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_141CC3910+66   0F 84 1D 02 00 00                                               jz      loc_141CC3B99   ; Jump if Zero (ZF=1)
sub_141CC3910+6C   8B 70 24                                                        mov     esi, [rax+24h]
sub_141CC3910+6F   33 FF                                                           xor     edi, edi        ; Logical Exclusive OR
sub_141CC3910+71   3B 35 35 D1 73 15                                               cmp     esi, dword ptr cs:qword_157400ABC ; Compare Two Operands
sub_141CC3910+77   7D 29                                                           jge     short loc_141CC39B2 ; Jump if Greater or Equal (SF=OF)
sub_141CC3910+79   8B CE                                                           mov     ecx, esi
sub_141CC3910+7B   E8 C0 2F DC FE                                                  call    sub_140A86950   ; Call Procedure
sub_141CC3910+80   8B CE                                                           mov     ecx, esi
sub_141CC3910+82   48 63 D8                                                        movsxd  rbx, eax        ; Move with Sign-Extend Doubleword
sub_141CC3910+85   E8 B6 37 DC FE                                                  call    loc_140A87150   ; Call Procedure
sub_141CC3910+8A   48 63 C8                                                        movsxd  rcx, eax        ; Move with Sign-Extend Doubleword
sub_141CC3910+8D   48 8B 05 24 D1 73 15                                            mov     rax, cs:qword_157400AC8
sub_141CC3910+94   48 8D 14 49                                                     lea     rdx, [rcx+rcx*2] ; Load Effective Address
sub_141CC3910+98   48 8B 0C D8                                                     mov     rcx, [rax+rbx*8]
sub_141CC3910+9C   48 8D 04 D1                                                     lea     rax, [rcx+rdx*8] ; Load Effective Address
sub_141CC3910+A0   EB 03                                                           jmp     short loc_141CC39B5 ; Jump
sub_141CC3910+A2                                                   ; ---------------------------------------------------------------------------
sub_141CC3910+A2
sub_141CC3910+A2                                                   loc_141CC39B2:                          ; CODE XREF: sub_141CC3910+77↑j
sub_141CC3910+A2   48 8B C7                                                        mov     rax, rdi
sub_141CC3910+A5
sub_141CC3910+A5                                                   loc_141CC39B5:                          ; CODE XREF: sub_141CC3910+A0↑j
sub_141CC3910+A5   8B 40 08                                                        mov     eax, [rax+8]
sub_141CC3910+A8   C1 E8 1D                                                        shr     eax, 1Dh        ; Shift Logical Right
sub_141CC3910+AB   A8 01                                                           test    al, 1           ; Logical Compare
sub_141CC3910+AD   0F 85 D6 01 00 00                                               jnz     loc_141CC3B99   ; Jump if Not Zero (ZF=0)
sub_141CC3910+B3   FF 15 E7 95 D5 14                                               call    cs:qword_156A1CFB0 ; Indirect Call Near Procedure
sub_141CC3910+B9   84 C0                                                           test    al, al          ; Logical Compare
sub_141CC3910+BB   75 09                                                           jnz     short loc_141CC39D6 ; Jump if Not Zero (ZF=0)
sub_141CC3910+BD   48 8B 0D E4 A5 D5 14                                            mov     rcx, cs:qword_156A1DFB8
sub_141CC3910+C4   EB 31                                                           jmp     short loc_141CC3A07 ; Jump
sub_141CC3910+C6                                                   ; ---------------------------------------------------------------------------
sub_141CC3910+C6
sub_141CC3910+C6                                                   loc_141CC39D6:                          ; CODE XREF: sub_141CC3910+BB↑j
sub_141CC3910+C6   48 8B 0D DB C5 D5 14                                            mov     rcx, qword ptr cs:unk_156A1FFB8
sub_141CC3910+CD   0F B6 05 DB C5 D5 14                                            movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
sub_141CC3910+D4   48 89 8C 24 90 00 00 00                                         mov     [rsp+90h], rcx
sub_141CC3910+DC   34 36                                                           xor     al, 36h         ; Logical Exclusive OR
sub_141CC3910+DE   80 F1 36                                                        xor     cl, 36h         ; Logical Exclusive OR
sub_141CC3910+E1   88 84 24 90 00 00 00                                            mov     [rsp+90h], al
sub_141CC3910+E8   88 8C 24 97 00 00 00                                            mov     [rsp+97h], cl
sub_141CC3910+EF   48 8B 8C 24 90 00 00 00                                         mov     rcx, [rsp+90h]
sub_141CC3910+F7
sub_141CC3910+F7                                                   loc_141CC3A07:                          ; CODE XREF: sub_141CC3910+C4↑j
sub_141CC3910+F7   48 89 AC 24 A0 00 00 00                                         mov     [rsp+0A0h], rbp
sub_141CC3910+FF   E8 AC EB DB FE                                                  call    sub_140A825C0   ; Call Procedure
sub_141CC3910+104  48 8B F0                                                        mov     rsi, rax
sub_141CC3910+107  48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_141CC3910+10A  0F 84 50 01 00 00                                               jz      loc_141CC3B70   ; Jump if Zero (ZF=1)
sub_141CC3910+110  8B 68 24                                                        mov     ebp, [rax+24h]
sub_141CC3910+113  3B 2D 93 D0 73 15                                               cmp     ebp, dword ptr cs:qword_157400ABC ; Compare Two Operands
sub_141CC3910+119  7D 29                                                           jge     short loc_141CC3A54 ; Jump if Greater or Equal (SF=OF)
sub_141CC3910+11B  8B CD                                                           mov     ecx, ebp
sub_141CC3910+11D  E8 1E 2F DC FE                                                  call    sub_140A86950   ; Call Procedure
sub_141CC3910+122  8B CD                                                           mov     ecx, ebp
sub_141CC3910+124  48 63 D8                                                        movsxd  rbx, eax        ; Move with Sign-Extend Doubleword
sub_141CC3910+127  E8 14 37 DC FE                                                  call    loc_140A87150   ; Call Procedure
sub_141CC3910+12C  48 63 C8                                                        movsxd  rcx, eax        ; Move with Sign-Extend Doubleword
sub_141CC3910+12F  48 8B 05 82 D0 73 15                                            mov     rax, cs:qword_157400AC8
sub_141CC3910+136  48 8D 14 49                                                     lea     rdx, [rcx+rcx*2] ; Load Effective Address
sub_141CC3910+13A  48 8B 0C D8                                                     mov     rcx, [rax+rbx*8]
sub_141CC3910+13E  48 8D 04 D1                                                     lea     rax, [rcx+rdx*8] ; Load Effective Address
sub_141CC3910+142  EB 03                                                           jmp     short loc_141CC3A57 ; Jump
sub_141CC3910+144                                                  ; ---------------------------------------------------------------------------
sub_141CC3910+144
sub_141CC3910+144                                                  loc_141CC3A54:                          ; CODE XREF: sub_141CC3910+119↑j
sub_141CC3910+144  48 8B C7                                                        mov     rax, rdi
sub_141CC3910+147
sub_141CC3910+147                                                  loc_141CC3A57:                          ; CODE XREF: sub_141CC3910+142↑j
sub_141CC3910+147  8B 40 08                                                        mov     eax, [rax+8]
sub_141CC3910+14A  C1 E8 1D                                                        shr     eax, 1Dh        ; Shift Logical Right
sub_141CC3910+14D  A8 01                                                           test    al, 1           ; Logical Compare
sub_141CC3910+14F  0F 85 0B 01 00 00                                               jnz     loc_141CC3B70   ; Jump if Not Zero (ZF=0)
sub_141CC3910+155  0F B6 86 2A 01 00 00                                            movzx   eax, byte ptr [rsi+12Ah] ; Move with Zero-Extend
sub_141CC3910+15C  FE C8                                                           dec     al              ; Decrement by 1
sub_141CC3910+15E  A8 FD                                                           test    al, 0FDh        ; Logical Compare
sub_141CC3910+160  0F 85 D2 00 00 00                                               jnz     loc_141CC3B48   ; Jump if Not Zero (ZF=0)
sub_141CC3910+166  48 8D 0D 63 53 16 15                                            lea     rcx, qword_156E28DE0 ; Load Effective Address
sub_141CC3910+16D  E8 6E DA F9 0A                                                  call    sub_14CC614F0   ; Call Procedure
sub_141CC3910+172  48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_141CC3910+175  74 40                                                           jz      short loc_141CC3AC7 ; Jump if Zero (ZF=1)
sub_141CC3910+177  8B 68 24                                                        mov     ebp, [rax+24h]
sub_141CC3910+17A  3B 2D 2C D0 73 15                                               cmp     ebp, dword ptr cs:qword_157400ABC ; Compare Two Operands
sub_141CC3910+180  7D 27                                                           jge     short loc_141CC3AB9 ; Jump if Greater or Equal (SF=OF)
sub_141CC3910+182  8B CD                                                           mov     ecx, ebp
sub_141CC3910+184  E8 B7 2E DC FE                                                  call    sub_140A86950   ; Call Procedure
sub_141CC3910+189  8B CD                                                           mov     ecx, ebp
sub_141CC3910+18B  48 63 D8                                                        movsxd  rbx, eax        ; Move with Sign-Extend Doubleword
sub_141CC3910+18E  E8 AD 36 DC FE                                                  call    loc_140A87150   ; Call Procedure
sub_141CC3910+193  48 63 C8                                                        movsxd  rcx, eax        ; Move with Sign-Extend Doubleword
sub_141CC3910+196  48 8B 05 1B D0 73 15                                            mov     rax, cs:qword_157400AC8
sub_141CC3910+19D  48 8D 14 49                                                     lea     rdx, [rcx+rcx*2] ; Load Effective Address
sub_141CC3910+1A1  48 8B 0C D8                                                     mov     rcx, [rax+rbx*8]
sub_141CC3910+1A5  48 8D 3C D1                                                     lea     rdi, [rcx+rdx*8] ; Load Effective Address
sub_141CC3910+1A9
sub_141CC3910+1A9                                                  loc_141CC3AB9:                          ; CODE XREF: sub_141CC3910+180↑j
sub_141CC3910+1A9  8B 47 08                                                        mov     eax, [rdi+8]
sub_141CC3910+1AC  C1 E8 1D                                                        shr     eax, 1Dh        ; Shift Logical Right
sub_141CC3910+1AF  A8 01                                                           test    al, 1           ; Logical Compare
sub_141CC3910+1B1  0F 84 81 00 00 00                                               jz      loc_141CC3B48   ; Jump if Zero (ZF=1)
sub_141CC3910+1B7
sub_141CC3910+1B7                                                  loc_141CC3AC7:                          ; CODE XREF: sub_141CC3910+175↑j
sub_141CC3910+1B7  48 8D 4C 24 40                                                  lea     rcx, [rsp+40h]  ; Load Effective Address
sub_141CC3910+1BC  48 C7 44 24 30 00 00 00 00                                      mov     qword ptr [rsp+30h], 0
sub_141CC3910+1C5  C7 44 24 38 00 00 00 00                                         mov     dword ptr [rsp+38h], 0
sub_141CC3910+1CD  E8 CE 8E E5 0C                                                  call    sub_14EB1C9B0   ; Call Procedure
sub_141CC3910+1D2  48 8B D8                                                        mov     rbx, rax
sub_141CC3910+1D5  E8 A6 28 00 00                                                  call    sub_141CC6390   ; Call Procedure
sub_141CC3910+1DA  4C 8D 4C 24 30                                                  lea     r9, [rsp+30h]   ; Load Effective Address
sub_141CC3910+1DF  48 89 5C 24 20                                                  mov     [rsp+20h], rbx
sub_141CC3910+1E4  4C 8D 05 95 91 6E 15                                            lea     r8, xmmword_1573ACC88+8 ; Load Effective Address
sub_141CC3910+1EB  48 8B D0                                                        mov     rdx, rax
sub_141CC3910+1EE  48 8B CE                                                        mov     rcx, rsi
sub_141CC3910+1F1  E8 BA F0 8A 0C                                                  call    sub_14E572BC0   ; Call Procedure
sub_141CC3910+1F6  48 8B D0                                                        mov     rdx, rax
sub_141CC3910+1F9  48 8D 0D D0 52 16 15                                            lea     rcx, qword_156E28DE0 ; Load Effective Address
sub_141CC3910+200  E8 1B CF A3 0A                                                  call    sub_14C700A30   ; Call Procedure
sub_141CC3910+205  80 3D B4 52 16 15 06                                            cmp     cs:byte_156E28DD0, 6 ; Compare Two Operands
sub_141CC3910+20C  72 2A                                                           jb      short loc_141CC3B48 ; Jump if Below (CF=1)
sub_141CC3910+20E  48 8D 05 4B E7 36 0F                                            lea     rax, aJayjzchenAgptw_0 ; Load Effective Address
sub_141CC3910+215  41 B9 06 00 00 00                                               mov     r9d, 6
sub_141CC3910+21B  48 89 44 24 20                                                  mov     [rsp+20h], rax
sub_141CC3910+220  4C 8D 05 9D 52 16 15                                            lea     r8, unk_156E28DD4 ; Load Effective Address
sub_141CC3910+227  BA 63 00 00 00                                                  mov     edx, 63h ; 'c'
sub_141CC3910+22C
sub_141CC3910+22C                                                  loc_141CC3B3C:                          ; CODE XREF: sub_141CC3910+287↓j
sub_141CC3910+22C  48 8D 0D 1D 4C A0 0E                                            lea     rcx, aUnknown   ; Load Effective Address
sub_141CC3910+233  E8 E8 55 B6 0A                                                  call    sub_14C829130   ; Call Procedure
sub_141CC3910+238
sub_141CC3910+238                                                  loc_141CC3B48:                          ; CODE XREF: sub_141CC3910+160↑j
sub_141CC3910+238                                                                                          ; sub_141CC3910+1B1↑j ...
sub_141CC3910+238  48 8B AC 24 A0 00 00 00                                         mov     rbp, [rsp+0A0h]
sub_141CC3910+240
sub_141CC3910+240                                                  loc_141CC3B50:                          ; CODE XREF: sub_141CC3910+290↓j
sub_141CC3910+240                                                                                          ; sub_141CC3910+2BC↓j
sub_141CC3910+240  48 8B BC 24 80 00 00 00                                         mov     rdi, [rsp+80h]
sub_141CC3910+248  48 8B B4 24 A8 00 00 00                                         mov     rsi, [rsp+0A8h]
sub_141CC3910+250  48 8B 9C 24 98 00 00 00                                         mov     rbx, [rsp+98h]
sub_141CC3910+258  48 81 C4 88 00 00 00                                            add     rsp, 88h        ; Add
sub_141CC3910+25F  C3                                                              retn                    ; Return Near from Procedure
sub_141CC3910+260                                                  ; ---------------------------------------------------------------------------
sub_141CC3910+260
sub_141CC3910+260                                                  loc_141CC3B70:                          ; CODE XREF: sub_141CC3910+10A↑j
sub_141CC3910+260                                                                                          ; sub_141CC3910+14F↑j
sub_141CC3910+260  80 3D 59 52 16 15 06                                            cmp     cs:byte_156E28DD0, 6 ; Compare Two Operands
sub_141CC3910+267  72 CF                                                           jb      short loc_141CC3B48 ; Jump if Below (CF=1)
sub_141CC3910+269  48 8D 05 50 E6 36 0F                                            lea     rax, aJayjzchenAgptw_1 ; Load Effective Address
sub_141CC3910+270  41 B9 06 00 00 00                                               mov     r9d, 6
sub_141CC3910+276  48 89 44 24 20                                                  mov     [rsp+20h], rax
sub_141CC3910+27B  4C 8D 05 42 52 16 15                                            lea     r8, unk_156E28DD4 ; Load Effective Address
sub_141CC3910+282  BA 58 00 00 00                                                  mov     edx, 58h ; 'X'
sub_141CC3910+287  EB A3                                                           jmp     short loc_141CC3B3C ; Jump
sub_141CC3910+289                                                  ; ---------------------------------------------------------------------------
sub_141CC3910+289
sub_141CC3910+289                                                  loc_141CC3B99:                          ; CODE XREF: sub_141CC3910+66↑j
sub_141CC3910+289                                                                                          ; sub_141CC3910+AD↑j
sub_141CC3910+289  80 3D 30 52 16 15 06                                            cmp     cs:byte_156E28DD0, 6 ; Compare Two Operands
sub_141CC3910+290  72 AE                                                           jb      short loc_141CC3B50 ; Jump if Below (CF=1)
sub_141CC3910+292  48 8D 05 87 E5 36 0F                                            lea     rax, aJayjzchenAgptw_2 ; Load Effective Address
sub_141CC3910+299  41 B9 06 00 00 00                                               mov     r9d, 6
sub_141CC3910+29F  4C 8D 05 1E 52 16 15                                            lea     r8, unk_156E28DD4 ; Load Effective Address
sub_141CC3910+2A6  48 89 44 24 20                                                  mov     [rsp+20h], rax
sub_141CC3910+2AB  BA 52 00 00 00                                                  mov     edx, 52h ; 'R'
sub_141CC3910+2B0  48 8D 0D 99 4B A0 0E                                            lea     rcx, aUnknown   ; Load Effective Address
sub_141CC3910+2B7  E8 64 55 B6 0A                                                  call    sub_14C829130   ; Call Procedure
sub_141CC3910+2BC  EB 82                                                           jmp     short loc_141CC3B50 ; Jump
sub_141CC3910+2BC                                                  sub_141CC3910   endp
sub_141CC3910+2BC
sub_141CC3910+2BC                                                  ; ---------------------------------------------------------------------------
.text:0000000141CC3BCE CC CC                                                           align 10h






// GetBaseZone "8B 05 ?? ?? ?? ?? 8B D1 85 C0 0F 84 ?? ?? ?? ?? FF C8 83 F8 09 0F 87 ?? ?? ?? ?? 4C 8D 05 ?? ?? ?? ?? 48 98 41 8B 8C 80 94 6D A8 00"

.text:0000000140A87150
.text:0000000140A87150                                                 loc_140A87150:                          ; CODE XREF: sub_140AB09E0+6982↓p
.text:0000000140A87150                                                                                         ; sub_140ACAC50+1A9↓p ...
.text:0000000140A87150 8B 05 7A 0F 95 16                                               mov     eax, cs:dword_1573D80D0
.text:0000000140A87156 8B D1                                                           mov     edx, ecx
.text:0000000140A87158 85 C0                                                           test    eax, eax        ; Logical Compare
.text:0000000140A8715A 0F 84 22 06 00 00                                               jz      def_140A8717F   ; jumptable 0000000140A8717F default case
.text:0000000140A87160 FF C8                                                           dec     eax             ; switch 10 cases
.text:0000000140A87162 83 F8 09                                                        cmp     eax, 9          ; Compare Two Operands
.text:0000000140A87165 0F 87 17 06 00 00                                               ja      def_140A8717F   ; jumptable 0000000140A8717F default case
.text:0000000140A8716B 4C 8D 05 8E 98 57 FF                                            lea     r8, word_140000A00 ; Load Effective Address
.text:0000000140A87172 48 98                                                           cdqe                    ; EAX -> RAX (with sign)
.text:0000000140A87174 41 8B 8C 80 94 6D A8 00                                         mov     ecx, ds:(jpt_140A8717F - 140000A00h)[r8+rax*4]
.text:0000000140A8717C 49 03 C8                                                        add     rcx, r8         ; Add
.text:0000000140A8717F FF E1                                                           jmp     rcx             ; switch jump
.text:0000000140A87181                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87181
.text:0000000140A87181                                                 loc_140A87181:                          ; CODE XREF: .text:0000000140A8717F↑j
.text:0000000140A87181                                                                                         ; DATA XREF: .text:jpt_140A8717F↓o
.text:0000000140A87181 8B 05 51 0F 95 16                                               mov     eax, cs:dword_1573D80D8 ; jumptable 0000000140A8717F case 1
.text:0000000140A87187 85 C0                                                           test    eax, eax        ; Logical Compare
.text:0000000140A87189 75 1C                                                           jnz     short loc_140A871A7 ; Jump if Not Zero (ZF=0)
.text:0000000140A8718B
.text:0000000140A8718B                                                 loc_140A8718B:                          ; CODE XREF: .text:0000000140A87431↓j
.text:0000000140A8718B                                                                                         ; .text:0000000140A874A8↓j ...
.text:0000000140A8718B 44 8B 05 6E 0F 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A87192 8B C2                                                           mov     eax, edx
.text:0000000140A87194 41 83 C0 02                                                     add     r8d, 2          ; Add
.text:0000000140A87198 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A87199 41 83 E0 3F                                                     and     r8d, 3Fh        ; Logical AND
.text:0000000140A8719D 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A871A1 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A871A4 8B C2                                                           mov     eax, edx
.text:0000000140A871A6 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A871A7                                                 ; ---------------------------------------------------------------------------
.text:0000000140A871A7
.text:0000000140A871A7                                                 loc_140A871A7:                          ; CODE XREF: .text:0000000140A87189↑j
.text:0000000140A871A7 83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
.text:0000000140A871AA 75 1C                                                           jnz     short loc_140A871C8 ; Jump if Not Zero (ZF=0)
.text:0000000140A871AC
.text:0000000140A871AC                                                 loc_140A871AC:                          ; CODE XREF: .text:0000000140A8743A↓j
.text:0000000140A871AC                                                                                         ; .text:0000000140A874B1↓j ...
.text:0000000140A871AC 44 8B 05 4D 0F 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A871B3 8B C2                                                           mov     eax, edx
.text:0000000140A871B5 41 83 F0 FC                                                     xor     r8d, 0FFFFFFFCh ; Logical Exclusive OR
.text:0000000140A871B9 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A871BA 41 83 E0 3F                                                     and     r8d, 3Fh        ; Logical AND
.text:0000000140A871BE 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A871C2 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A871C5 8B C2                                                           mov     eax, edx
.text:0000000140A871C7 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A871C8                                                 ; ---------------------------------------------------------------------------
.text:0000000140A871C8
.text:0000000140A871C8                                                 loc_140A871C8:                          ; CODE XREF: .text:0000000140A871AA↑j
.text:0000000140A871C8 83 F8 02                                                        cmp     eax, 2          ; Compare Two Operands
.text:0000000140A871CB 75 1C                                                           jnz     short loc_140A871E9 ; Jump if Not Zero (ZF=0)
.text:0000000140A871CD
.text:0000000140A871CD                                                 loc_140A871CD:                          ; CODE XREF: .text:0000000140A87443↓j
.text:0000000140A871CD                                                                                         ; .text:0000000140A874BA↓j ...
.text:0000000140A871CD 44 8B 05 2C 0F 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A871D4 8B C2                                                           mov     eax, edx
.text:0000000140A871D6 41 83 E0 32                                                     and     r8d, 32h        ; Logical AND
.text:0000000140A871DA 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A871DB 41 83 C8 0D                                                     or      r8d, 0Dh        ; Logical Inclusive OR
.text:0000000140A871DF 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A871E3 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A871E6 8B C2                                                           mov     eax, edx
.text:0000000140A871E8 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A871E9                                                 ; ---------------------------------------------------------------------------
.text:0000000140A871E9
.text:0000000140A871E9                                                 loc_140A871E9:                          ; CODE XREF: .text:0000000140A871CB↑j
.text:0000000140A871E9 83 F8 03                                                        cmp     eax, 3          ; Compare Two Operands
.text:0000000140A871EC 75 1C                                                           jnz     short near ptr word_140A8720A ; Jump if Not Zero (ZF=0)
.text:0000000140A871EE
.text:0000000140A871EE                                                 loc_140A871EE:                          ; CODE XREF: .text:0000000140A8744C↓j
.text:0000000140A871EE                                                                                         ; .text:0000000140A874C3↓j ...
.text:0000000140A871EE 44 8B 05 0B 0F 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A871F5 8B C2                                                           mov     eax, edx
.text:0000000140A871F7 41 83 F0 F6                                                     xor     r8d, 0FFFFFFF6h ; Logical Exclusive OR
.text:0000000140A871FB 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A871FC 41 83 E0 3F                                                     and     r8d, 3Fh        ; Logical AND
.text:0000000140A87200 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A87204 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A87207 8B C2                                                           mov     eax, edx
.text:0000000140A87209 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A87209                                                 ; ---------------------------------------------------------------------------
.text:0000000140A8720A 83 F8                                           word_140A8720A  dw 0F883h               ; CODE XREF: .text:0000000140A871EC↑j
.text:0000000140A8720C                                                 ; ---------------------------------------------------------------------------
.text:0000000140A8720C 04 0F                                                           add     al, 0Fh         ; Add
.text:0000000140A8720E 84 0A                                                           test    [rdx], cl       ; Logical Compare
.text:0000000140A87210 02 00                                                           add     al, [rax]       ; Add
.text:0000000140A87212 00 83 F8 05 75 1C                                               add     [rbx+1C7505F8h], al ; Add
.text:0000000140A87218
.text:0000000140A87218                                                 loc_140A87218:                          ; CODE XREF: .text:0000000140A8745A↓j
.text:0000000140A87218                                                                                         ; .text:0000000140A874D5↓j ...
.text:0000000140A87218 44 8B 05 E1 0E 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A8721F 8B C2                                                           mov     eax, edx
.text:0000000140A87221 41 83 E0 0D                                                     and     r8d, 0Dh        ; Logical AND
.text:0000000140A87225 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A87226 41 83 C8 32                                                     or      r8d, 32h        ; Logical Inclusive OR
.text:0000000140A8722A 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A8722E 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A87231 8B C2                                                           mov     eax, edx
.text:0000000140A87233 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A87234                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87234 83 F8 06                                                        cmp     eax, 6          ; Compare Two Operands
.text:0000000140A87237 75 1C                                                           jnz     short loc_140A87255 ; Jump if Not Zero (ZF=0)
.text:0000000140A87239
.text:0000000140A87239                                                 loc_140A87239:                          ; CODE XREF: .text:0000000140A87463↓j
.text:0000000140A87239                                                                                         ; .text:0000000140A874DE↓j ...
.text:0000000140A87239 44 8B 05 C0 0E 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A87240 8B C2                                                           mov     eax, edx
.text:0000000140A87242 41 83 E0 3A                                                     and     r8d, 3Ah        ; Logical AND
.text:0000000140A87246 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A87247 41 83 C8 05                                                     or      r8d, 5          ; Logical Inclusive OR
.text:0000000140A8724B 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A8724F 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A87252 8B C2                                                           mov     eax, edx
.text:0000000140A87254 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A87255                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87255
.text:0000000140A87255                                                 loc_140A87255:                          ; CODE XREF: .text:0000000140A87237↑j
.text:0000000140A87255 83 F8 07                                                        cmp     eax, 7          ; Compare Two Operands
.text:0000000140A87258 75 20                                                           jnz     short loc_140A8727A ; Jump if Not Zero (ZF=0)
.text:0000000140A8725A
.text:0000000140A8725A                                                 loc_140A8725A:                          ; CODE XREF: .text:0000000140A8746C↓j
.text:0000000140A8725A                                                                                         ; .text:0000000140A874E7↓j ...
.text:0000000140A8725A 44 8B 05 9F 0E 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A87261 8B C2                                                           mov     eax, edx
.text:0000000140A87263 41 83 E0 07                                                     and     r8d, 7          ; Logical AND
.text:0000000140A87267 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A87268 41 C1 E0 03                                                     shl     r8d, 3          ; Shift Logical Left
.text:0000000140A8726C 41 83 C8 01                                                     or      r8d, 1          ; Logical Inclusive OR
.text:0000000140A87270 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A87274 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A87277 8B C2                                                           mov     eax, edx
.text:0000000140A87279 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A8727A                                                 ; ---------------------------------------------------------------------------
.text:0000000140A8727A
.text:0000000140A8727A                                                 loc_140A8727A:                          ; CODE XREF: .text:0000000140A87258↑j
.text:0000000140A8727A 83 F8 08                                                        cmp     eax, 8          ; Compare Two Operands
.text:0000000140A8727D 75 1C                                                           jnz     short loc_140A8729B ; Jump if Not Zero (ZF=0)
.text:0000000140A8727F
.text:0000000140A8727F                                                 loc_140A8727F:                          ; CODE XREF: .text:0000000140A87475↓j
.text:0000000140A8727F                                                                                         ; .text:0000000140A874F0↓j ...
.text:0000000140A8727F 44 8B 05 7A 0E 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A87286 8B C2                                                           mov     eax, edx
.text:0000000140A87288 41 83 E0 39                                                     and     r8d, 39h        ; Logical AND
.text:0000000140A8728C 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A8728D 41 83 C8 06                                                     or      r8d, 6          ; Logical Inclusive OR
.text:0000000140A87291 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A87295 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A87298 8B C2                                                           mov     eax, edx
.text:0000000140A8729A C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A8729B                                                 ; ---------------------------------------------------------------------------
.text:0000000140A8729B
.text:0000000140A8729B                                                 loc_140A8729B:                          ; CODE XREF: .text:0000000140A8727D↑j
.text:0000000140A8729B 83 F8 09                                                        cmp     eax, 9          ; Compare Two Operands
.text:0000000140A8729E 0F 84 E0 01 00 00                                               jz      loc_140A87484   ; Jump if Zero (ZF=1)
.text:0000000140A872A4
.text:0000000140A872A4                                                 loc_140A872A4:                          ; CODE XREF: .text:0000000140A8747E↓j
.text:0000000140A872A4 83 F8 0A                                                        cmp     eax, 0Ah        ; Compare Two Operands
.text:0000000140A872A7 0F 84 D7 01 00 00                                               jz      loc_140A87484   ; Jump if Zero (ZF=1)
.text:0000000140A872AD
.text:0000000140A872AD                                                 loc_140A872AD:                          ; CODE XREF: .text:0000000140A874FE↓j
.text:0000000140A872AD 83 F8 0B                                                        cmp     eax, 0Bh        ; Compare Two Operands
.text:0000000140A872B0 75 1F                                                           jnz     short loc_140A872D1 ; Jump if Not Zero (ZF=0)
.text:0000000140A872B2 44 8B 05 47 0E 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A872B9 44 33 C0                                                        xor     r8d, eax        ; Logical Exclusive OR
.text:0000000140A872BC 8B C2                                                           mov     eax, edx
.text:0000000140A872BE 41 83 E0 3F                                                     and     r8d, 3Fh        ; Logical AND
.text:0000000140A872C2 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A872C3 41 83 C0 40                                                     add     r8d, 40h ; '@'  ; Add
.text:0000000140A872C7 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A872CB 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A872CE 8B C2                                                           mov     eax, edx
.text:0000000140A872D0 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A872D1                                                 ; ---------------------------------------------------------------------------
.text:0000000140A872D1
.text:0000000140A872D1                                                 loc_140A872D1:                          ; CODE XREF: .text:0000000140A872B0↑j
.text:0000000140A872D1 83 F8 0C                                                        cmp     eax, 0Ch        ; Compare Two Operands
.text:0000000140A872D4 75 20                                                           jnz     short loc_140A872F6 ; Jump if Not Zero (ZF=0)
.text:0000000140A872D6 44 8B 05 23 0E 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A872DD 8B C2                                                           mov     eax, edx
.text:0000000140A872DF 41 83 F0 0E                                                     xor     r8d, 0Eh        ; Logical Exclusive OR
.text:0000000140A872E3 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A872E4 41 83 E0 3F                                                     and     r8d, 3Fh        ; Logical AND
.text:0000000140A872E8 41 83 C0 40                                                     add     r8d, 40h ; '@'  ; Add
.text:0000000140A872EC 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A872F0 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A872F3 8B C2                                                           mov     eax, edx
.text:0000000140A872F5 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A872F6                                                 ; ---------------------------------------------------------------------------
.text:0000000140A872F6
.text:0000000140A872F6                                                 loc_140A872F6:                          ; CODE XREF: .text:0000000140A872D4↑j
.text:0000000140A872F6 83 F8 0D                                                        cmp     eax, 0Dh        ; Compare Two Operands
.text:0000000140A872F9 75 20                                                           jnz     short loc_140A8731B ; Jump if Not Zero (ZF=0)
.text:0000000140A872FB 44 8B 05 FE 0D 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A87302 8B C2                                                           mov     eax, edx
.text:0000000140A87304 41 83 C0 0E                                                     add     r8d, 0Eh        ; Add
.text:0000000140A87308 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A87309 41 83 E0 3F                                                     and     r8d, 3Fh        ; Logical AND
.text:0000000140A8730D 41 83 C0 40                                                     add     r8d, 40h ; '@'  ; Add
.text:0000000140A87311 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A87315 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A87318 8B C2                                                           mov     eax, edx
.text:0000000140A8731A C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A8731B                                                 ; ---------------------------------------------------------------------------
.text:0000000140A8731B
.text:0000000140A8731B                                                 loc_140A8731B:                          ; CODE XREF: .text:0000000140A872F9↑j
.text:0000000140A8731B 83 F8 0E                                                        cmp     eax, 0Eh        ; Compare Two Operands
.text:0000000140A8731E 75 20                                                           jnz     short loc_140A87340 ; Jump if Not Zero (ZF=0)
.text:0000000140A87320 44 8B 05 D9 0D 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A87327 8B C2                                                           mov     eax, edx
.text:0000000140A87329 41 83 C0 0F                                                     add     r8d, 0Fh        ; Add
.text:0000000140A8732D 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A8732E 41 83 E0 3F                                                     and     r8d, 3Fh        ; Logical AND
.text:0000000140A87332 41 83 C0 40                                                     add     r8d, 40h ; '@'  ; Add
.text:0000000140A87336 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A8733A 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A8733D 8B C2                                                           mov     eax, edx
.text:0000000140A8733F C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A87340                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87340
.text:0000000140A87340                                                 loc_140A87340:                          ; CODE XREF: .text:0000000140A8731E↑j
.text:0000000140A87340 83 F8 0F                                                        cmp     eax, 0Fh        ; Compare Two Operands
.text:0000000140A87343 75 20                                                           jnz     short loc_140A87365 ; Jump if Not Zero (ZF=0)
.text:0000000140A87345 44 8B 05 B4 0D 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A8734C 8B C2                                                           mov     eax, edx
.text:0000000140A8734E 41 83 F0 0D                                                     xor     r8d, 0Dh        ; Logical Exclusive OR
.text:0000000140A87352 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A87353 41 83 E0 3F                                                     and     r8d, 3Fh        ; Logical AND
.text:0000000140A87357 41 83 C0 40                                                     add     r8d, 40h ; '@'  ; Add
.text:0000000140A8735B 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A8735F 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A87362 8B C2                                                           mov     eax, edx
.text:0000000140A87364 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A87365                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87365
.text:0000000140A87365                                                 loc_140A87365:                          ; CODE XREF: .text:0000000140A87343↑j
.text:0000000140A87365 83 F8 10                                                        cmp     eax, 10h        ; Compare Two Operands
.text:0000000140A87368 75 1F                                                           jnz     short loc_140A87389 ; Jump if Not Zero (ZF=0)
.text:0000000140A8736A 44 8B 05 8F 0D 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A87371 44 33 C0                                                        xor     r8d, eax        ; Logical Exclusive OR
.text:0000000140A87374 8B C2                                                           mov     eax, edx
.text:0000000140A87376 41 83 E0 3F                                                     and     r8d, 3Fh        ; Logical AND
.text:0000000140A8737A 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A8737B 41 83 C0 40                                                     add     r8d, 40h ; '@'  ; Add
.text:0000000140A8737F 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A87383 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A87386 8B C2                                                           mov     eax, edx
.text:0000000140A87388 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A87389                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87389
.text:0000000140A87389                                                 loc_140A87389:                          ; CODE XREF: .text:0000000140A87368↑j
.text:0000000140A87389 83 F8 11                                                        cmp     eax, 11h        ; Compare Two Operands
.text:0000000140A8738C 75 20                                                           jnz     short loc_140A873AE ; Jump if Not Zero (ZF=0)
.text:0000000140A8738E 44 8B 05 6B 0D 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A87395 8B C2                                                           mov     eax, edx
.text:0000000140A87397 41 83 E0 25                                                     and     r8d, 25h        ; Logical AND
.text:0000000140A8739B 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A8739C 41 83 C8 1A                                                     or      r8d, 1Ah        ; Logical Inclusive OR
.text:0000000140A873A0 41 83 C0 40                                                     add     r8d, 40h ; '@'  ; Add
.text:0000000140A873A4 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A873A8 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A873AB 8B C2                                                           mov     eax, edx
.text:0000000140A873AD C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A873AE                                                 ; ---------------------------------------------------------------------------
.text:0000000140A873AE
.text:0000000140A873AE                                                 loc_140A873AE:                          ; CODE XREF: .text:0000000140A8738C↑j
.text:0000000140A873AE 83 F8 12                                                        cmp     eax, 12h        ; Compare Two Operands
.text:0000000140A873B1 75 20                                                           jnz     short loc_140A873D3 ; Jump if Not Zero (ZF=0)
.text:0000000140A873B3 44 8B 05 46 0D 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A873BA 8B C2                                                           mov     eax, edx
.text:0000000140A873BC 41 83 E0 22                                                     and     r8d, 22h        ; Logical AND
.text:0000000140A873C0 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A873C1 41 83 C8 1D                                                     or      r8d, 1Dh        ; Logical Inclusive OR
.text:0000000140A873C5 41 83 C0 40                                                     add     r8d, 40h ; '@'  ; Add
.text:0000000140A873C9 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A873CD 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A873D0 8B C2                                                           mov     eax, edx
.text:0000000140A873D2 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A873D3                                                 ; ---------------------------------------------------------------------------
.text:0000000140A873D3
.text:0000000140A873D3                                                 loc_140A873D3:                          ; CODE XREF: .text:0000000140A873B1↑j
.text:0000000140A873D3 83 F8 13                                                        cmp     eax, 13h        ; Compare Two Operands
.text:0000000140A873D6 75 20                                                           jnz     short loc_140A873F8 ; Jump if Not Zero (ZF=0)
.text:0000000140A873D8 44 8B 05 21 0D 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A873DF 8B C2                                                           mov     eax, edx
.text:0000000140A873E1 41 83 F0 EB                                                     xor     r8d, 0FFFFFFEBh ; Logical Exclusive OR
.text:0000000140A873E5 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A873E6 41 83 E0 3F                                                     and     r8d, 3Fh        ; Logical AND
.text:0000000140A873EA 41 83 C0 40                                                     add     r8d, 40h ; '@'  ; Add
.text:0000000140A873EE 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A873F2 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A873F5 8B C2                                                           mov     eax, edx
.text:0000000140A873F7 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A873F8                                                 ; ---------------------------------------------------------------------------
.text:0000000140A873F8
.text:0000000140A873F8                                                 loc_140A873F8:                          ; CODE XREF: .text:0000000140A873D6↑j
.text:0000000140A873F8 83 F8 14                                                        cmp     eax, 14h        ; Compare Two Operands
.text:0000000140A873FB 75 20                                                           jnz     short loc_140A8741D ; Jump if Not Zero (ZF=0)
.text:0000000140A873FD 44 8B 05 FC 0C 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A87404 8B C2                                                           mov     eax, edx
.text:0000000140A87406 41 83 F0 11                                                     xor     r8d, 11h        ; Logical Exclusive OR
.text:0000000140A8740A 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A8740B 41 83 E0 3F                                                     and     r8d, 3Fh        ; Logical AND
.text:0000000140A8740F 41 83 C0 40                                                     add     r8d, 40h ; '@'  ; Add
.text:0000000140A87413 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A87417 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A8741A 8B C2                                                           mov     eax, edx
.text:0000000140A8741C C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A8741D                                                 ; ---------------------------------------------------------------------------
.text:0000000140A8741D
.text:0000000140A8741D                                                 loc_140A8741D:                          ; CODE XREF: .text:0000000140A873FB↑j
.text:0000000140A8741D                                                                                         ; .text:0000000140A87455↓j ...
.text:0000000140A8741D 8B C2                                                           mov     eax, edx
.text:0000000140A8741F 45 33 C0                                                        xor     r8d, r8d        ; Logical Exclusive OR
.text:0000000140A87422 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A87423 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A87426 8B C2                                                           mov     eax, edx
.text:0000000140A87428 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A87429                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87429
.text:0000000140A87429                                                 loc_140A87429:                          ; CODE XREF: .text:0000000140A8717F↑j
.text:0000000140A87429                                                                                         ; DATA XREF: .text:jpt_140A8717F↓o
.text:0000000140A87429 8B 05 AD 0C 95 16                                               mov     eax, cs:dword_1573D80DC ; jumptable 0000000140A8717F case 2
.text:0000000140A8742F 85 C0                                                           test    eax, eax        ; Logical Compare
.text:0000000140A87431 0F 84 54 FD FF FF                                               jz      loc_140A8718B   ; Jump if Zero (ZF=1)
.text:0000000140A87437 83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
.text:0000000140A8743A 0F 84 6C FD FF FF                                               jz      loc_140A871AC   ; Jump if Zero (ZF=1)
.text:0000000140A87440 83 F8 02                                                        cmp     eax, 2          ; Compare Two Operands
.text:0000000140A87443 0F 84 84 FD FF FF                                               jz      loc_140A871CD   ; Jump if Zero (ZF=1)
.text:0000000140A87449 83 F8 03                                                        cmp     eax, 3          ; Compare Two Operands
.text:0000000140A8744C 0F 84 9C FD FF FF                                               jz      loc_140A871EE   ; Jump if Zero (ZF=1)
.text:0000000140A87452 83 F8 04                                                        cmp     eax, 4          ; Compare Two Operands
.text:0000000140A87455 74 C6                                                           jz      short loc_140A8741D ; Jump if Zero (ZF=1)
.text:0000000140A87457 83 F8 05                                                        cmp     eax, 5          ; Compare Two Operands
.text:0000000140A8745A 0F 84 B8 FD FF FF                                               jz      loc_140A87218   ; Jump if Zero (ZF=1)
.text:0000000140A87460 83 F8 06                                                        cmp     eax, 6          ; Compare Two Operands
.text:0000000140A87463 0F 84 D0 FD FF FF                                               jz      loc_140A87239   ; Jump if Zero (ZF=1)
.text:0000000140A87469 83 F8 07                                                        cmp     eax, 7          ; Compare Two Operands
.text:0000000140A8746C 0F 84 E8 FD FF FF                                               jz      loc_140A8725A   ; Jump if Zero (ZF=1)
.text:0000000140A87472 83 F8 08                                                        cmp     eax, 8          ; Compare Two Operands
.text:0000000140A87475 0F 84 04 FE FF FF                                               jz      loc_140A8727F   ; Jump if Zero (ZF=1)
.text:0000000140A8747B 83 F8 09                                                        cmp     eax, 9          ; Compare Two Operands
.text:0000000140A8747E 0F 85 20 FE FF FF                                               jnz     loc_140A872A4   ; Jump if Not Zero (ZF=0)
.text:0000000140A87484
.text:0000000140A87484                                                 loc_140A87484:                          ; CODE XREF: .text:0000000140A8729E↑j
.text:0000000140A87484                                                                                         ; .text:0000000140A872A7↑j ...
.text:0000000140A87484 44 8B 05 75 0C 95 16                                            mov     r8d, cs:dword_1573D8100
.text:0000000140A8748B 8B C2                                                           mov     eax, edx
.text:0000000140A8748D 41 83 F0 10                                                     xor     r8d, 10h        ; Logical Exclusive OR
.text:0000000140A87491 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A87492 41 83 E0 3F                                                     and     r8d, 3Fh        ; Logical AND
.text:0000000140A87496 41 C1 E0 0A                                                     shl     r8d, 0Ah        ; Shift Logical Left
.text:0000000140A8749A 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A8749D 8B C2                                                           mov     eax, edx
.text:0000000140A8749F C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A874A0                                                 ; ---------------------------------------------------------------------------
.text:0000000140A874A0
.text:0000000140A874A0                                                 loc_140A874A0:                          ; CODE XREF: .text:0000000140A8717F↑j
.text:0000000140A874A0                                                                                         ; DATA XREF: .text:jpt_140A8717F↓o
.text:0000000140A874A0 8B 05 3A 0C 95 16                                               mov     eax, cs:dword_1573D80E0 ; jumptable 0000000140A8717F case 3
.text:0000000140A874A6 85 C0                                                           test    eax, eax        ; Logical Compare
.text:0000000140A874A8 0F 84 DD FC FF FF                                               jz      loc_140A8718B   ; Jump if Zero (ZF=1)
.text:0000000140A874AE 83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
.text:0000000140A874B1 0F 84 F5 FC FF FF                                               jz      loc_140A871AC   ; Jump if Zero (ZF=1)
.text:0000000140A874B7 83 F8 02                                                        cmp     eax, 2          ; Compare Two Operands
.text:0000000140A874BA 0F 84 0D FD FF FF                                               jz      loc_140A871CD   ; Jump if Zero (ZF=1)
.text:0000000140A874C0 83 F8 03                                                        cmp     eax, 3          ; Compare Two Operands
.text:0000000140A874C3 0F 84 25 FD FF FF                                               jz      loc_140A871EE   ; Jump if Zero (ZF=1)
.text:0000000140A874C9 83 F8 04                                                        cmp     eax, 4          ; Compare Two Operands
.text:0000000140A874CC 0F 84 4B FF FF FF                                               jz      loc_140A8741D   ; Jump if Zero (ZF=1)
.text:0000000140A874D2 83 F8 05                                                        cmp     eax, 5          ; Compare Two Operands
.text:0000000140A874D5 0F 84 3D FD FF FF                                               jz      loc_140A87218   ; Jump if Zero (ZF=1)
.text:0000000140A874DB 83 F8 06                                                        cmp     eax, 6          ; Compare Two Operands
.text:0000000140A874DE 0F 84 55 FD FF FF                                               jz      loc_140A87239   ; Jump if Zero (ZF=1)
.text:0000000140A874E4 83 F8 07                                                        cmp     eax, 7          ; Compare Two Operands
.text:0000000140A874E7 0F 84 6D FD FF FF                                               jz      loc_140A8725A   ; Jump if Zero (ZF=1)
.text:0000000140A874ED 83 F8 08                                                        cmp     eax, 8          ; Compare Two Operands
.text:0000000140A874F0 0F 84 89 FD FF FF                                               jz      loc_140A8727F   ; Jump if Zero (ZF=1)
.text:0000000140A874F6
.text:0000000140A874F6                                                 loc_140A874F6:                          ; CODE XREF: .text:0000000140A87559↓j
.text:0000000140A874F6                                                                                         ; .text:0000000140A875B0↓j ...
.text:0000000140A874F6 83 F8 09                                                        cmp     eax, 9          ; Compare Two Operands
.text:0000000140A874F9 74 89                                                           jz      short loc_140A87484 ; Jump if Zero (ZF=1)
.text:0000000140A874FB 83 F8 0A                                                        cmp     eax, 0Ah        ; Compare Two Operands
.text:0000000140A874FE 0F 85 A9 FD FF FF                                               jnz     loc_140A872AD   ; Jump if Not Zero (ZF=0)
.text:0000000140A87504 E9 7B FF FF FF                                                  jmp     loc_140A87484   ; Jump
.text:0000000140A87509                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87509
.text:0000000140A87509                                                 loc_140A87509:                          ; CODE XREF: .text:0000000140A8717F↑j
.text:0000000140A87509                                                                                         ; DATA XREF: .text:jpt_140A8717F↓o
.text:0000000140A87509 8B 05 D5 0B 95 16                                               mov     eax, cs:dword_1573D80E4 ; jumptable 0000000140A8717F case 4
.text:0000000140A8750F 85 C0                                                           test    eax, eax        ; Logical Compare
.text:0000000140A87511 0F 84 74 FC FF FF                                               jz      loc_140A8718B   ; Jump if Zero (ZF=1)
.text:0000000140A87517 83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
.text:0000000140A8751A 0F 84 8C FC FF FF                                               jz      loc_140A871AC   ; Jump if Zero (ZF=1)
.text:0000000140A87520 83 F8 02                                                        cmp     eax, 2          ; Compare Two Operands
.text:0000000140A87523 0F 84 A4 FC FF FF                                               jz      loc_140A871CD   ; Jump if Zero (ZF=1)
.text:0000000140A87529 83 F8 03                                                        cmp     eax, 3          ; Compare Two Operands
.text:0000000140A8752C 0F 84 BC FC FF FF                                               jz      loc_140A871EE   ; Jump if Zero (ZF=1)
.text:0000000140A87532 83 F8 04                                                        cmp     eax, 4          ; Compare Two Operands
.text:0000000140A87535 0F 84 E2 FE FF FF                                               jz      loc_140A8741D   ; Jump if Zero (ZF=1)
.text:0000000140A8753B 83 F8 05                                                        cmp     eax, 5          ; Compare Two Operands
.text:0000000140A8753E 0F 84 D4 FC FF FF                                               jz      loc_140A87218   ; Jump if Zero (ZF=1)
.text:0000000140A87544 83 F8 06                                                        cmp     eax, 6          ; Compare Two Operands
.text:0000000140A87547 0F 84 EC FC FF FF                                               jz      loc_140A87239   ; Jump if Zero (ZF=1)
.text:0000000140A8754D 83 F8 07                                                        cmp     eax, 7          ; Compare Two Operands
.text:0000000140A87550 0F 84 04 FD FF FF                                               jz      loc_140A8725A   ; Jump if Zero (ZF=1)
.text:0000000140A87556 83 F8 08                                                        cmp     eax, 8          ; Compare Two Operands
.text:0000000140A87559 75 9B                                                           jnz     short loc_140A874F6 ; Jump if Not Zero (ZF=0)
.text:0000000140A8755B E9 1F FD FF FF                                                  jmp     loc_140A8727F   ; Jump
.text:0000000140A87560                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87560
.text:0000000140A87560                                                 loc_140A87560:                          ; CODE XREF: .text:0000000140A8717F↑j
.text:0000000140A87560                                                                                         ; DATA XREF: .text:jpt_140A8717F↓o
.text:0000000140A87560 8B 05 82 0B 95 16                                               mov     eax, cs:dword_1573D80E8 ; jumptable 0000000140A8717F case 5
.text:0000000140A87566 85 C0                                                           test    eax, eax        ; Logical Compare
.text:0000000140A87568 0F 84 1D FC FF FF                                               jz      loc_140A8718B   ; Jump if Zero (ZF=1)
.text:0000000140A8756E 83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
.text:0000000140A87571 0F 84 35 FC FF FF                                               jz      loc_140A871AC   ; Jump if Zero (ZF=1)
.text:0000000140A87577 83 F8 02                                                        cmp     eax, 2          ; Compare Two Operands
.text:0000000140A8757A 0F 84 4D FC FF FF                                               jz      loc_140A871CD   ; Jump if Zero (ZF=1)
.text:0000000140A87580 83 F8 03                                                        cmp     eax, 3          ; Compare Two Operands
.text:0000000140A87583 0F 84 65 FC FF FF                                               jz      loc_140A871EE   ; Jump if Zero (ZF=1)
.text:0000000140A87589 83 F8 04                                                        cmp     eax, 4          ; Compare Two Operands
.text:0000000140A8758C 0F 84 8B FE FF FF                                               jz      loc_140A8741D   ; Jump if Zero (ZF=1)
.text:0000000140A87592 83 F8 05                                                        cmp     eax, 5          ; Compare Two Operands
.text:0000000140A87595 0F 84 7D FC FF FF                                               jz      loc_140A87218   ; Jump if Zero (ZF=1)
.text:0000000140A8759B 83 F8 06                                                        cmp     eax, 6          ; Compare Two Operands
.text:0000000140A8759E 0F 84 95 FC FF FF                                               jz      loc_140A87239   ; Jump if Zero (ZF=1)
.text:0000000140A875A4 83 F8 07                                                        cmp     eax, 7          ; Compare Two Operands
.text:0000000140A875A7 0F 84 AD FC FF FF                                               jz      loc_140A8725A   ; Jump if Zero (ZF=1)
.text:0000000140A875AD 83 F8 08                                                        cmp     eax, 8          ; Compare Two Operands
.text:0000000140A875B0 0F 85 40 FF FF FF                                               jnz     loc_140A874F6   ; Jump if Not Zero (ZF=0)
.text:0000000140A875B6 E9 C4 FC FF FF                                                  jmp     loc_140A8727F   ; Jump
.text:0000000140A875BB                                                 ; ---------------------------------------------------------------------------
.text:0000000140A875BB
.text:0000000140A875BB                                                 loc_140A875BB:                          ; CODE XREF: .text:0000000140A8717F↑j
.text:0000000140A875BB                                                                                         ; DATA XREF: .text:jpt_140A8717F↓o
.text:0000000140A875BB 8B 05 2B 0B 95 16                                               mov     eax, cs:dword_1573D80EC ; jumptable 0000000140A8717F case 6
.text:0000000140A875C1 85 C0                                                           test    eax, eax        ; Logical Compare
.text:0000000140A875C3 0F 84 C2 FB FF FF                                               jz      loc_140A8718B   ; Jump if Zero (ZF=1)
.text:0000000140A875C9 83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
.text:0000000140A875CC 0F 84 DA FB FF FF                                               jz      loc_140A871AC   ; Jump if Zero (ZF=1)
.text:0000000140A875D2 83 F8 02                                                        cmp     eax, 2          ; Compare Two Operands
.text:0000000140A875D5 0F 84 F2 FB FF FF                                               jz      loc_140A871CD   ; Jump if Zero (ZF=1)
.text:0000000140A875DB 83 F8 03                                                        cmp     eax, 3          ; Compare Two Operands
.text:0000000140A875DE 0F 84 0A FC FF FF                                               jz      loc_140A871EE   ; Jump if Zero (ZF=1)
.text:0000000140A875E4 83 F8 04                                                        cmp     eax, 4          ; Compare Two Operands
.text:0000000140A875E7 0F 84 30 FE FF FF                                               jz      loc_140A8741D   ; Jump if Zero (ZF=1)
.text:0000000140A875ED 83 F8 05                                                        cmp     eax, 5          ; Compare Two Operands
.text:0000000140A875F0 0F 84 22 FC FF FF                                               jz      loc_140A87218   ; Jump if Zero (ZF=1)
.text:0000000140A875F6 83 F8 06                                                        cmp     eax, 6          ; Compare Two Operands
.text:0000000140A875F9 0F 84 3A FC FF FF                                               jz      loc_140A87239   ; Jump if Zero (ZF=1)
.text:0000000140A875FF 83 F8 07                                                        cmp     eax, 7          ; Compare Two Operands
.text:0000000140A87602 0F 84 52 FC FF FF                                               jz      loc_140A8725A   ; Jump if Zero (ZF=1)
.text:0000000140A87608 83 F8 08                                                        cmp     eax, 8          ; Compare Two Operands
.text:0000000140A8760B 0F 85 E5 FE FF FF                                               jnz     loc_140A874F6   ; Jump if Not Zero (ZF=0)
.text:0000000140A87611 E9 69 FC FF FF                                                  jmp     loc_140A8727F   ; Jump
.text:0000000140A87616                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87616
.text:0000000140A87616                                                 loc_140A87616:                          ; CODE XREF: .text:0000000140A8717F↑j
.text:0000000140A87616                                                                                         ; DATA XREF: .text:jpt_140A8717F↓o
.text:0000000140A87616 8B 05 D4 0A 95 16                                               mov     eax, cs:dword_1573D80F0 ; jumptable 0000000140A8717F case 7
.text:0000000140A8761C 85 C0                                                           test    eax, eax        ; Logical Compare
.text:0000000140A8761E 0F 84 67 FB FF FF                                               jz      loc_140A8718B   ; Jump if Zero (ZF=1)
.text:0000000140A87624 83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
.text:0000000140A87627 0F 84 7F FB FF FF                                               jz      loc_140A871AC   ; Jump if Zero (ZF=1)
.text:0000000140A8762D 83 F8 02                                                        cmp     eax, 2          ; Compare Two Operands
.text:0000000140A87630 0F 84 97 FB FF FF                                               jz      loc_140A871CD   ; Jump if Zero (ZF=1)
.text:0000000140A87636 83 F8 03                                                        cmp     eax, 3          ; Compare Two Operands
.text:0000000140A87639 0F 84 AF FB FF FF                                               jz      loc_140A871EE   ; Jump if Zero (ZF=1)
.text:0000000140A8763F 83 F8 04                                                        cmp     eax, 4          ; Compare Two Operands
.text:0000000140A87642 0F 84 D5 FD FF FF                                               jz      loc_140A8741D   ; Jump if Zero (ZF=1)
.text:0000000140A87648 83 F8 05                                                        cmp     eax, 5          ; Compare Two Operands
.text:0000000140A8764B 0F 84 C7 FB FF FF                                               jz      loc_140A87218   ; Jump if Zero (ZF=1)
.text:0000000140A87651 83 F8 06                                                        cmp     eax, 6          ; Compare Two Operands
.text:0000000140A87654 0F 84 DF FB FF FF                                               jz      loc_140A87239   ; Jump if Zero (ZF=1)
.text:0000000140A8765A 83 F8 07                                                        cmp     eax, 7          ; Compare Two Operands
.text:0000000140A8765D 0F 84 F7 FB FF FF                                               jz      loc_140A8725A   ; Jump if Zero (ZF=1)
.text:0000000140A87663 83 F8 08                                                        cmp     eax, 8          ; Compare Two Operands
.text:0000000140A87666 0F 85 8A FE FF FF                                               jnz     loc_140A874F6   ; Jump if Not Zero (ZF=0)
.text:0000000140A8766C E9 0E FC FF FF                                                  jmp     loc_140A8727F   ; Jump
.text:0000000140A87671                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87671
.text:0000000140A87671                                                 loc_140A87671:                          ; CODE XREF: .text:0000000140A8717F↑j
.text:0000000140A87671                                                                                         ; DATA XREF: .text:jpt_140A8717F↓o
.text:0000000140A87671 8B 05 7D 0A 95 16                                               mov     eax, cs:dword_1573D80F4 ; jumptable 0000000140A8717F case 8
.text:0000000140A87677 85 C0                                                           test    eax, eax        ; Logical Compare
.text:0000000140A87679 0F 84 0C FB FF FF                                               jz      loc_140A8718B   ; Jump if Zero (ZF=1)
.text:0000000140A8767F 83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
.text:0000000140A87682 0F 84 24 FB FF FF                                               jz      loc_140A871AC   ; Jump if Zero (ZF=1)
.text:0000000140A87688 83 F8 02                                                        cmp     eax, 2          ; Compare Two Operands
.text:0000000140A8768B 0F 84 3C FB FF FF                                               jz      loc_140A871CD   ; Jump if Zero (ZF=1)
.text:0000000140A87691 83 F8 03                                                        cmp     eax, 3          ; Compare Two Operands
.text:0000000140A87694 0F 84 54 FB FF FF                                               jz      loc_140A871EE   ; Jump if Zero (ZF=1)
.text:0000000140A8769A 83 F8 04                                                        cmp     eax, 4          ; Compare Two Operands
.text:0000000140A8769D 0F 84 7A FD FF FF                                               jz      loc_140A8741D   ; Jump if Zero (ZF=1)
.text:0000000140A876A3 83 F8 05                                                        cmp     eax, 5          ; Compare Two Operands
.text:0000000140A876A6 0F 84 6C FB FF FF                                               jz      loc_140A87218   ; Jump if Zero (ZF=1)
.text:0000000140A876AC 83 F8 06                                                        cmp     eax, 6          ; Compare Two Operands
.text:0000000140A876AF 0F 84 84 FB FF FF                                               jz      loc_140A87239   ; Jump if Zero (ZF=1)
.text:0000000140A876B5 83 F8 07                                                        cmp     eax, 7          ; Compare Two Operands
.text:0000000140A876B8 0F 84 9C FB FF FF                                               jz      loc_140A8725A   ; Jump if Zero (ZF=1)
.text:0000000140A876BE 83 F8 08                                                        cmp     eax, 8          ; Compare Two Operands
.text:0000000140A876C1 0F 85 2F FE FF FF                                               jnz     loc_140A874F6   ; Jump if Not Zero (ZF=0)
.text:0000000140A876C7 E9 B3 FB FF FF                                                  jmp     loc_140A8727F   ; Jump
.text:0000000140A876CC                                                 ; ---------------------------------------------------------------------------
.text:0000000140A876CC
.text:0000000140A876CC                                                 loc_140A876CC:                          ; CODE XREF: .text:0000000140A8717F↑j
.text:0000000140A876CC                                                                                         ; DATA XREF: .text:jpt_140A8717F↓o
.text:0000000140A876CC 8B 05 26 0A 95 16                                               mov     eax, cs:dword_1573D80F8 ; jumptable 0000000140A8717F case 9
.text:0000000140A876D2 85 C0                                                           test    eax, eax        ; Logical Compare
.text:0000000140A876D4 0F 84 B1 FA FF FF                                               jz      loc_140A8718B   ; Jump if Zero (ZF=1)
.text:0000000140A876DA 83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
.text:0000000140A876DD 0F 84 C9 FA FF FF                                               jz      loc_140A871AC   ; Jump if Zero (ZF=1)
.text:0000000140A876E3 83 F8 02                                                        cmp     eax, 2          ; Compare Two Operands
.text:0000000140A876E6 0F 84 E1 FA FF FF                                               jz      loc_140A871CD   ; Jump if Zero (ZF=1)
.text:0000000140A876EC 83 F8 03                                                        cmp     eax, 3          ; Compare Two Operands
.text:0000000140A876EF 0F 84 F9 FA FF FF                                               jz      loc_140A871EE   ; Jump if Zero (ZF=1)
.text:0000000140A876F5 83 F8 04                                                        cmp     eax, 4          ; Compare Two Operands
.text:0000000140A876F8 0F 84 1F FD FF FF                                               jz      loc_140A8741D   ; Jump if Zero (ZF=1)
.text:0000000140A876FE 83 F8 05                                                        cmp     eax, 5          ; Compare Two Operands
.text:0000000140A87701 0F 84 11 FB FF FF                                               jz      loc_140A87218   ; Jump if Zero (ZF=1)
.text:0000000140A87707 83 F8 06                                                        cmp     eax, 6          ; Compare Two Operands
.text:0000000140A8770A 0F 84 29 FB FF FF                                               jz      loc_140A87239   ; Jump if Zero (ZF=1)
.text:0000000140A87710 83 F8 07                                                        cmp     eax, 7          ; Compare Two Operands
.text:0000000140A87713 0F 84 41 FB FF FF                                               jz      loc_140A8725A   ; Jump if Zero (ZF=1)
.text:0000000140A87719 83 F8 08                                                        cmp     eax, 8          ; Compare Two Operands
.text:0000000140A8771C 0F 85 D4 FD FF FF                                               jnz     loc_140A874F6   ; Jump if Not Zero (ZF=0)
.text:0000000140A87722 E9 58 FB FF FF                                                  jmp     loc_140A8727F   ; Jump
.text:0000000140A87727                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87727
.text:0000000140A87727                                                 loc_140A87727:                          ; CODE XREF: .text:0000000140A8717F↑j
.text:0000000140A87727                                                                                         ; DATA XREF: .text:jpt_140A8717F↓o
.text:0000000140A87727 8B 05 CF 09 95 16                                               mov     eax, cs:dword_1573D80FC ; jumptable 0000000140A8717F case 10
.text:0000000140A8772D 85 C0                                                           test    eax, eax        ; Logical Compare
.text:0000000140A8772F 0F 84 56 FA FF FF                                               jz      loc_140A8718B   ; Jump if Zero (ZF=1)
.text:0000000140A87735 83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
.text:0000000140A87738 0F 84 6E FA FF FF                                               jz      loc_140A871AC   ; Jump if Zero (ZF=1)
.text:0000000140A8773E 83 F8 02                                                        cmp     eax, 2          ; Compare Two Operands
.text:0000000140A87741 0F 84 86 FA FF FF                                               jz      loc_140A871CD   ; Jump if Zero (ZF=1)
.text:0000000140A87747 83 F8 03                                                        cmp     eax, 3          ; Compare Two Operands
.text:0000000140A8774A 0F 84 9E FA FF FF                                               jz      loc_140A871EE   ; Jump if Zero (ZF=1)
.text:0000000140A87750 83 F8 04                                                        cmp     eax, 4          ; Compare Two Operands
.text:0000000140A87753 0F 84 C4 FC FF FF                                               jz      loc_140A8741D   ; Jump if Zero (ZF=1)
.text:0000000140A87759 83 F8 05                                                        cmp     eax, 5          ; Compare Two Operands
.text:0000000140A8775C 0F 84 B6 FA FF FF                                               jz      loc_140A87218   ; Jump if Zero (ZF=1)
.text:0000000140A87762 83 F8 06                                                        cmp     eax, 6          ; Compare Two Operands
.text:0000000140A87765 0F 84 CE FA FF FF                                               jz      loc_140A87239   ; Jump if Zero (ZF=1)
.text:0000000140A8776B 83 F8 07                                                        cmp     eax, 7          ; Compare Two Operands
.text:0000000140A8776E 0F 84 E6 FA FF FF                                               jz      loc_140A8725A   ; Jump if Zero (ZF=1)
.text:0000000140A87774 83 F8 08                                                        cmp     eax, 8          ; Compare Two Operands
.text:0000000140A87777 0F 85 79 FD FF FF                                               jnz     loc_140A874F6   ; Jump if Not Zero (ZF=0)
.text:0000000140A8777D E9 FD FA FF FF                                                  jmp     loc_140A8727F   ; Jump
.text:0000000140A87782                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87782
.text:0000000140A87782                                                 def_140A8717F:                          ; CODE XREF: .text:0000000140A8715A↑j
.text:0000000140A87782                                                                                         ; .text:0000000140A87165↑j
.text:0000000140A87782 8B C2                                                           mov     eax, edx        ; jumptable 0000000140A8717F default case
.text:0000000140A87784 41 B8 00 00 01 00                                               mov     r8d, 10000h
.text:0000000140A8778A 99                                                              cdq                     ; EAX -> EDX:EAX (with sign)
.text:0000000140A8778B 41 F7 F8                                                        idiv    r8d             ; Signed Divide
.text:0000000140A8778E 8B C2                                                           mov     eax, edx
.text:0000000140A87790 C3                                                              retn                    ; Return Near from Procedure
.text:0000000140A87790                                                 ; ---------------------------------------------------------------------------
.text:0000000140A87791 0F 1F 00                                                        align 4
.text:0000000140A87794 81 67 A8 00                                     jpt_140A8717F   dd offset loc_140A87181 - 140000A00h
.text:0000000140A87794                                                                                         ; DATA XREF: .text:0000000140A87174↑r
.text:0000000140A87798 29 6A A8 00                                                     dd offset loc_140A87429 - 140000A00h ; jump table for switch statement
.text:0000000140A8779C A0 6A A8 00                                                     dd offset loc_140A874A0 - 140000A00h
.text:0000000140A877A0 09 6B A8 00                                                     dd offset loc_140A87509 - 140000A00h
.text:0000000140A877A4 60 6B A8 00                                                     dd offset loc_140A87560 - 140000A00h
.text:0000000140A877A8 BB 6B A8 00                                                     dd offset loc_140A875BB - 140000A00h
.text:0000000140A877AC 16 6C A8 00                                                     dd offset loc_140A87616 - 140000A00h
.text:0000000140A877B0 71 6C A8 00                                                     dd offset loc_140A87671 - 140000A00h
.text:0000000140A877B4 CC 6C A8 00                                                     dd offset loc_140A876CC - 140000A00h
.text:0000000140A877B8 27 6D A8 00                                                     dd offset loc_140A87727 - 140000A00h
.text:0000000140A877BC CC CC CC CC                                                     align 20h
sub_140A877C0





sub_142AD9A70
sub_142AD9A70                                                      ; =============== S U B R O U T I N E =======================================
sub_142AD9A70
sub_142AD9A70
sub_142AD9A70                                                      sub_142AD9A70   proc near               ; CODE XREF: sub_142ADCCF0+5F9↓p
sub_142AD9A70
sub_142AD9A70                                                      var_28          = qword ptr -28h
sub_142AD9A70                                                      var_18          = qword ptr -18h
sub_142AD9A70                                                      var_10          = qword ptr -10h
sub_142AD9A70                                                      var_8           = qword ptr -8
sub_142AD9A70                                                      arg_0           = qword ptr  8
sub_142AD9A70                                                      arg_8           = qword ptr  10h
sub_142AD9A70                                                      arg_10          = qword ptr  18h
sub_142AD9A70
sub_142AD9A70      48 83 EC 48                                                     sub     rsp, 48h        ; Integer Subtraction
sub_142AD9A70+4    FF 81 CC 00 00 00                                               inc     dword ptr [rcx+0CCh] ; Increment by 1
sub_142AD9A70+A    48 89 6C 24 40                                                  mov     [rsp+40h], rbp
sub_142AD9A70+F    48 8B E9                                                        mov     rbp, rcx
sub_142AD9A70+12   FF 15 28 35 F4 13                                               call    cs:qword_156A1CFB0 ; Indirect Call Near Procedure
sub_142AD9A70+18   84 C0                                                           test    al, al          ; Logical Compare
sub_142AD9A70+1A   75 09                                                           jnz     short loc_142AD9A95 ; Jump if Not Zero (ZF=0)
sub_142AD9A70+1C   48 8B 05 25 45 F4 13                                            mov     rax, cs:qword_156A1DFB8
sub_142AD9A70+23   EB 25                                                           jmp     short loc_142AD9ABA ; Jump
sub_142AD9A70+25                                                   ; ---------------------------------------------------------------------------
sub_142AD9A70+25
sub_142AD9A70+25                                                   loc_142AD9A95:                          ; CODE XREF: sub_142AD9A70+1A↑j
sub_142AD9A70+25   0F B6 05 23 65 F4 13                                            movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
sub_142AD9A70+2C   48 8B 0D 15 65 F4 13                                            mov     rcx, qword ptr cs:unk_156A1FFB8
sub_142AD9A70+33   34 36                                                           xor     al, 36h ; '6'   ; Logical Exclusive OR
sub_142AD9A70+35   48 89 4C 24 50                                                  mov     [rsp+50h], rcx
sub_142AD9A70+3A   80 F1 36                                                        xor     cl, 36h ; '6'   ; Logical Exclusive OR
sub_142AD9A70+3D   88 4C 24 57                                                     mov     [rsp+57h], cl
sub_142AD9A70+41   88 44 24 50                                                     mov     [rsp+50h], al
sub_142AD9A70+45   48 8B 44 24 50                                                  mov     rax, [rsp+50h]
sub_142AD9A70+4A
sub_142AD9A70+4A                                                   loc_142AD9ABA:                          ; CODE XREF: sub_142AD9A70+23↑j
sub_142AD9A70+4A   48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_142AD9A70+4D   0F 84 2E 02 00 00                                               jz      loc_142AD9CF1   ; Jump if Zero (ZF=1)
sub_142AD9A70+53   FF 15 E7 34 F4 13                                               call    cs:qword_156A1CFB0 ; Indirect Call Near Procedure
sub_142AD9A70+59   84 C0                                                           test    al, al          ; Logical Compare
sub_142AD9A70+5B   75 09                                                           jnz     short loc_142AD9AD6 ; Jump if Not Zero (ZF=0)
sub_142AD9A70+5D   48 8B 05 E4 44 F4 13                                            mov     rax, cs:qword_156A1DFB8
sub_142AD9A70+64   EB 25                                                           jmp     short loc_142AD9AFB ; Jump
sub_142AD9A70+66                                                   ; ---------------------------------------------------------------------------
sub_142AD9A70+66
sub_142AD9A70+66                                                   loc_142AD9AD6:                          ; CODE XREF: sub_142AD9A70+5B↑j
sub_142AD9A70+66   0F B6 05 E2 64 F4 13                                            movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
sub_142AD9A70+6D   48 8B 0D D4 64 F4 13                                            mov     rcx, qword ptr cs:unk_156A1FFB8
sub_142AD9A70+74   34 36                                                           xor     al, 36h         ; Logical Exclusive OR
sub_142AD9A70+76   48 89 4C 24 50                                                  mov     [rsp+50h], rcx
sub_142AD9A70+7B   80 F1 36                                                        xor     cl, 36h         ; Logical Exclusive OR
sub_142AD9A70+7E   88 4C 24 57                                                     mov     [rsp+57h], cl
sub_142AD9A70+82   88 44 24 50                                                     mov     [rsp+50h], al
sub_142AD9A70+86   48 8B 44 24 50                                                  mov     rax, [rsp+50h]
sub_142AD9A70+8B
sub_142AD9A70+8B                                                   loc_142AD9AFB:                          ; CODE XREF: sub_142AD9A70+64↑j
sub_142AD9A70+8B   48 8B 40 30                                                     mov     rax, [rax+30h]
sub_142AD9A70+8F   90                                                              nop                     ; No Operation
sub_142AD9A70+90   48 89 5C 24 60                                                  mov     [rsp+60h], rbx
sub_142AD9A70+95   48 89 7C 24 30                                                  mov     [rsp+30h], rdi
sub_142AD9A70+9A   48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_142AD9A70+9D   0F 84 B8 00 00 00                                               jz      loc_142AD9BCB   ; Jump if Zero (ZF=1)
sub_142AD9A70+A3   48 8B C8                                                        mov     rcx, rax
sub_142AD9A70+A6   48 8B D8                                                        mov     rbx, rax
sub_142AD9A70+A9   48 C1 E9 30                                                     shr     rcx, 30h        ; Shift Logical Right
sub_142AD9A70+AD   48 BF FF FF FF FF FF FF 00 00                                   mov     rdi, 0FFFFFFFFFFFFh
sub_142AD9A70+B7   48 23 DF                                                        and     rbx, rdi        ; Logical AND
sub_142AD9A70+BA   48 C1 E8 3F                                                     shr     rax, 3Fh        ; Shift Logical Right
sub_142AD9A70+BE   81 E1 FF 3F 00 00                                               and     ecx, 3FFFh      ; Logical AND
sub_142AD9A70+C4   48 89 5C 24 50                                                  mov     [rsp+50h], rbx
sub_142AD9A70+C9   84 C0                                                           test    al, al          ; Logical Compare
sub_142AD9A70+CB   0F 84 85 00 00 00                                               jz      loc_142AD9BC6   ; Jump if Zero (ZF=1)
sub_142AD9A70+D1   8B 05 4D 0C D7 13                                               mov     eax, cs:dword_15684A794
sub_142AD9A70+D7   83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_142AD9A70+DA   75 1C                                                           jnz     short loc_142AD9B68 ; Jump if Not Zero (ZF=0)
sub_142AD9A70+DC   44 8B C9                                                        mov     r9d, ecx
sub_142AD9A70+DF   48 8D 54 24 50                                                  lea     rdx, [rsp+50h]  ; Load Effective Address
sub_142AD9A70+E4   48 8B 0D 25 E5 8F 14                                            mov     rcx, cs:qword_1573D8080
sub_142AD9A70+EB   41 B8 04 00 00 00                                               mov     r8d, 4
sub_142AD9A70+F1   E8 AA 3D FB FD                                                  call    sub_140A8D910   ; Call Procedure
sub_142AD9A70+F6   EB 35                                                           jmp     short loc_142AD9B9D ; Jump
sub_142AD9A70+F8                                                   ; ---------------------------------------------------------------------------
sub_142AD9A70+F8
sub_142AD9A70+F8                                                   loc_142AD9B68:                          ; CODE XREF: sub_142AD9A70+DA↑j
sub_142AD9A70+F8   83 F8 02                                                        cmp     eax, 2          ; Compare Two Operands
sub_142AD9A70+FB   75 0C                                                           jnz     short loc_142AD9B79 ; Jump if Not Zero (ZF=0)
sub_142AD9A70+FD   48 8B 05 14 E5 8F 14                                            mov     rax, cs:qword_1573D8088
sub_142AD9A70+104  44 8B C1                                                        mov     r8d, ecx
sub_142AD9A70+107  EB 13                                                           jmp     short loc_142AD9B8C ; Jump
sub_142AD9A70+109                                                  ; ---------------------------------------------------------------------------
sub_142AD9A70+109
sub_142AD9A70+109                                                  loc_142AD9B79:                          ; CODE XREF: sub_142AD9A70+FB↑j
sub_142AD9A70+109  83 F8 03                                                        cmp     eax, 3          ; Compare Two Operands
sub_142AD9A70+10C  75 1F                                                           jnz     short loc_142AD9B9D ; Jump if Not Zero (ZF=0)
sub_142AD9A70+10E  48 8D 05 0B E5 8F 14                                            lea     rax, qword_1573D8090 ; Load Effective Address
sub_142AD9A70+115  44 8B C1                                                        mov     r8d, ecx
sub_142AD9A70+118  48 8B 04 C8                                                     mov     rax, [rax+rcx*8]
sub_142AD9A70+11C
sub_142AD9A70+11C                                                  loc_142AD9B8C:                          ; CODE XREF: sub_142AD9A70+107↑j
sub_142AD9A70+11C  4C 8B 48 08                                                     mov     r9, [rax+8]
sub_142AD9A70+120  48 8D 4C 24 50                                                  lea     rcx, [rsp+50h]  ; Load Effective Address
sub_142AD9A70+125  BA 04 00 00 00                                                  mov     edx, 4
sub_142AD9A70+12A  FF 50 40                                                        call    qword ptr [rax+40h] ; Indirect Call Near Procedure
sub_142AD9A70+12D
sub_142AD9A70+12D                                                  loc_142AD9B9D:                          ; CODE XREF: sub_142AD9A70+F6↑j
sub_142AD9A70+12D                                                                                          ; sub_142AD9A70+10C↑j
sub_142AD9A70+12D  48 8B 5C 24 50                                                  mov     rbx, [rsp+50h]
sub_142AD9A70+132  48 B9 00 00 00 00 00 00 FF FF                                   mov     rcx, 0FFFF000000000000h
sub_142AD9A70+13C  48 23 DF                                                        and     rbx, rdi        ; Logical AND
sub_142AD9A70+13F  48 8B C3                                                        mov     rax, rbx
sub_142AD9A70+142  48 0B C1                                                        or      rax, rcx        ; Logical Inclusive OR
sub_142AD9A70+145  48 B9 00 00 00 00 00 80 00 00                                   mov     rcx, 800000000000h
sub_142AD9A70+14F  48 3B D9                                                        cmp     rbx, rcx        ; Compare Two Operands
sub_142AD9A70+152  48 0F 43 D8                                                     cmovnb  rbx, rax        ; Move if Not Below (CF=0)
sub_142AD9A70+156
sub_142AD9A70+156                                                  loc_142AD9BC6:                          ; CODE XREF: sub_142AD9A70+CB↑j
sub_142AD9A70+156  48 85 DB                                                        test    rbx, rbx        ; Logical Compare
sub_142AD9A70+159  75 48                                                           jnz     short loc_142AD9C13 ; Jump if Not Zero (ZF=0)
sub_142AD9A70+15B
sub_142AD9A70+15B                                                  loc_142AD9BCB:                          ; CODE XREF: sub_142AD9A70+9D↑j
sub_142AD9A70+15B  FF 15 DF 33 F4 13                                               call    cs:qword_156A1CFB0 ; Indirect Call Near Procedure
sub_142AD9A70+161  84 C0                                                           test    al, al          ; Logical Compare
sub_142AD9A70+163  75 09                                                           jnz     short loc_142AD9BDE ; Jump if Not Zero (ZF=0)
sub_142AD9A70+165  48 8B 1D DC 43 F4 13                                            mov     rbx, cs:qword_156A1DFB8
sub_142AD9A70+16C  EB 25                                                           jmp     short loc_142AD9C03 ; Jump
sub_142AD9A70+16E                                                  ; ---------------------------------------------------------------------------
sub_142AD9A70+16E
sub_142AD9A70+16E                                                  loc_142AD9BDE:                          ; CODE XREF: sub_142AD9A70+163↑j
sub_142AD9A70+16E  48 8B 0D D3 63 F4 13                                            mov     rcx, qword ptr cs:unk_156A1FFB8
sub_142AD9A70+175  0F B6 05 D3 63 F4 13                                            movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
sub_142AD9A70+17C  48 89 4C 24 58                                                  mov     [rsp+58h], rcx
sub_142AD9A70+181  34 36                                                           xor     al, 36h         ; Logical Exclusive OR
sub_142AD9A70+183  80 F1 36                                                        xor     cl, 36h         ; Logical Exclusive OR
sub_142AD9A70+186  88 44 24 58                                                     mov     [rsp+58h], al
sub_142AD9A70+18A  88 4C 24 5F                                                     mov     [rsp+5Fh], cl
sub_142AD9A70+18E  48 8B 5C 24 58                                                  mov     rbx, [rsp+58h]
sub_142AD9A70+193
sub_142AD9A70+193                                                  loc_142AD9C03:                          ; CODE XREF: sub_142AD9A70+16C↑j
sub_142AD9A70+193  48 8B 9B E8 00 00 00                                            mov     rbx, [rbx+0E8h]
sub_142AD9A70+19A  48 85 DB                                                        test    rbx, rbx        ; Logical Compare
sub_142AD9A70+19D  0F 84 D4 00 00 00                                               jz      loc_142AD9CE7   ; Jump if Zero (ZF=1)
sub_142AD9A70+1A3
sub_142AD9A70+1A3                                                  loc_142AD9C13:                          ; CODE XREF: sub_142AD9A70+159↑j
sub_142AD9A70+1A3  48 89 74 24 38                                                  mov     [rsp+38h], rsi
sub_142AD9A70+1A8  48 8D 8B 90 00 00 00                                            lea     rcx, [rbx+90h]  ; Load Effective Address
sub_142AD9A70+1AF  33 F6                                                           xor     esi, esi        ; Logical Exclusive OR
sub_142AD9A70+1B1  FF 15 49 0B D7 13                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_142AD9A70+1B7  48 8D 8B 90 00 00 00                                            lea     rcx, [rbx+90h]  ; Load Effective Address
sub_142AD9A70+1BE  48 8B F8                                                        mov     rdi, rax
sub_142AD9A70+1C1  FF 15 39 0B D7 13                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_142AD9A70+1C7  48 63 8B 98 00 00 00                                            movsxd  rcx, dword ptr [rbx+98h] ; Move with Sign-Extend Doubleword
sub_142AD9A70+1CE  48 8D 14 C8                                                     lea     rdx, [rax+rcx*8] ; Load Effective Address
sub_142AD9A70+1D2  48 3B FA                                                        cmp     rdi, rdx        ; Compare Two Operands
sub_142AD9A70+1D5  74 3B                                                           jz      short loc_142AD9C82 ; Jump if Zero (ZF=1)
sub_142AD9A70+1D7  F2 0F 10 0D 41 99 83 0E                                         movsd   xmm1, cs:qword_151313590 ; Move Scalar Double-Precision Floating-Point Values
sub_142AD9A70+1DF  90                                                              nop                     ; No Operation
sub_142AD9A70+1E0
sub_142AD9A70+1E0                                                  loc_142AD9C50:                          ; CODE XREF: sub_142AD9A70+210↓j
sub_142AD9A70+1E0  48 8B 0F                                                        mov     rcx, [rdi]
sub_142AD9A70+1E3  8B 81 5C 01 00 00                                               mov     eax, [rcx+15Ch]
sub_142AD9A70+1E9  83 E8 02                                                        sub     eax, 2          ; Integer Subtraction
sub_142AD9A70+1EC  83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_142AD9A70+1EF  77 18                                                           ja      short loc_142AD9C79 ; Jump if Above (CF=0 & ZF=0)
sub_142AD9A70+1F1  F2 0F 10 81 F8 01 00 00                                         movsd   xmm0, qword ptr [rcx+1F8h] ; Move Scalar Double-Precision Floating-Point Values
sub_142AD9A70+1F9  F2 0F 58 C1                                                     addsd   xmm0, xmm1      ; Add Scalar Double-Precision Floating-Point Values
sub_142AD9A70+1FD  66 0F 2F 81 10 02 00 00                                         comisd  xmm0, qword ptr [rcx+210h] ; Compare Scalar Ordered Double-Precision Floating-Point Values and Set EFLAGS
sub_142AD9A70+205  76 02                                                           jbe     short loc_142AD9C79 ; Jump if Below or Equal (CF=1 | ZF=1)
sub_142AD9A70+207  FF C6                                                           inc     esi             ; Increment by 1
sub_142AD9A70+209
sub_142AD9A70+209                                                  loc_142AD9C79:                          ; CODE XREF: sub_142AD9A70+1EF↑j
sub_142AD9A70+209                                                                                          ; sub_142AD9A70+205↑j
sub_142AD9A70+209  48 83 C7 08                                                     add     rdi, 8          ; Add
sub_142AD9A70+20D  48 3B FA                                                        cmp     rdi, rdx        ; Compare Two Operands
sub_142AD9A70+210  75 CE                                                           jnz     short loc_142AD9C50 ; Jump if Not Zero (ZF=0)
sub_142AD9A70+212
sub_142AD9A70+212                                                  loc_142AD9C82:                          ; CODE XREF: sub_142AD9A70+1D5↑j
sub_142AD9A70+212  85 F6                                                           test    esi, esi        ; Logical Compare
sub_142AD9A70+214  48 8B 74 24 38                                                  mov     rsi, [rsp+38h]
sub_142AD9A70+219  7E 0C                                                           jle     short loc_142AD9C97 ; Jump if Less or Equal (ZF=1 | SF!=OF)
sub_142AD9A70+21B  C7 85 C8 00 00 00 00 00 00 00                                   mov     dword ptr [rbp+0C8h], 0
sub_142AD9A70+225  EB 50                                                           jmp     short loc_142AD9CE7 ; Jump
sub_142AD9A70+227                                                  ; ---------------------------------------------------------------------------
sub_142AD9A70+227
sub_142AD9A70+227                                                  loc_142AD9C97:                          ; CODE XREF: sub_142AD9A70+219↑j
sub_142AD9A70+227  8B 85 C8 00 00 00                                               mov     eax, [rbp+0C8h]
sub_142AD9A70+22D  FF C0                                                           inc     eax             ; Increment by 1
sub_142AD9A70+22F  89 85 C8 00 00 00                                               mov     [rbp+0C8h], eax
sub_142AD9A70+235  3B 85 D0 00 00 00                                               cmp     eax, [rbp+0D0h] ; Compare Two Operands
sub_142AD9A70+23B  7E 3A                                                           jle     short loc_142AD9CE7 ; Jump if Less or Equal (ZF=1 | SF!=OF)
sub_142AD9A70+23D  80 3D 64 7E A5 14 06                                            cmp     cs:byte_157531B18, 6 ; Compare Two Operands
sub_142AD9A70+244  72 2A                                                           jb      short loc_142AD9CE0 ; Jump if Below (CF=1)
sub_142AD9A70+246  48 8D 05 E3 95 83 0E                                            lea     rax, aDsExitingBecau ; Load Effective Address
sub_142AD9A70+24D  41 B9 06 00 00 00                                               mov     r9d, 6
sub_142AD9A70+253  4C 8D 05 52 7E A5 14                                            lea     r8, unk_157531B1C ; Load Effective Address
sub_142AD9A70+25A  48 89 44 24 20                                                  mov     [rsp+20h], rax
sub_142AD9A70+25F  BA B0 03 00 00                                                  mov     edx, 3B0h
sub_142AD9A70+264  48 8D 0D 85 EA BE 0D                                            lea     rcx, aUnknown   ; Load Effective Address
sub_142AD9A70+26B  E8 50 F4 D4 09                                                  call    sub_14C829130   ; Call Procedure
sub_142AD9A70+270
sub_142AD9A70+270                                                  loc_142AD9CE0:                          ; CODE XREF: sub_142AD9A70+244↑j
sub_142AD9A70+270  33 C9                                                           xor     ecx, ecx        ; Logical Exclusive OR
sub_142AD9A70+272  E8 E9 D8 E1 09                                                  call    sub_14C8F75D0   ; Call Procedure
sub_142AD9A70+277
sub_142AD9A70+277                                                  loc_142AD9CE7:                          ; CODE XREF: sub_142AD9A70+19D↑j
sub_142AD9A70+277                                                                                          ; sub_142AD9A70+225↑j ...
sub_142AD9A70+277  48 8B 5C 24 60                                                  mov     rbx, [rsp+60h]
sub_142AD9A70+27C  48 8B 7C 24 30                                                  mov     rdi, [rsp+30h]
sub_142AD9A70+281
sub_142AD9A70+281                                                  loc_142AD9CF1:                          ; CODE XREF: sub_142AD9A70+4D↑j
sub_142AD9A70+281  81 BD CC 00 00 00 28 23 00 00                                   cmp     dword ptr [rbp+0CCh], 2328h ; Compare Two Operands
sub_142AD9A70+28B  48 8B 6C 24 40                                                  mov     rbp, [rsp+40h]
sub_142AD9A70+290  7E 3E                                                           jle     short loc_142AD9D40 ; Jump if Less or Equal (ZF=1 | SF!=OF)
sub_142AD9A70+292  80 3D 0F 7E A5 14 06                                            cmp     cs:byte_157531B18, 6 ; Compare Two Operands
sub_142AD9A70+299  72 2A                                                           jb      short loc_142AD9D35 ; Jump if Below (CF=1)
sub_142AD9A70+29B  48 8D 05 EE 95 83 0E                                            lea     rax, aDsExitingBecau_0 ; Load Effective Address
sub_142AD9A70+2A2  41 B9 06 00 00 00                                               mov     r9d, 6
sub_142AD9A70+2A8  4C 8D 05 FD 7D A5 14                                            lea     r8, unk_157531B1C ; Load Effective Address
sub_142AD9A70+2AF  48 89 44 24 20                                                  mov     [rsp+20h], rax
sub_142AD9A70+2B4  BA B8 03 00 00                                                  mov     edx, 3B8h
sub_142AD9A70+2B9  48 8D 0D 30 EA BE 0D                                            lea     rcx, aUnknown   ; Load Effective Address
sub_142AD9A70+2C0  E8 FB F3 D4 09                                                  call    sub_14C829130   ; Call Procedure
sub_142AD9A70+2C5
sub_142AD9A70+2C5                                                  loc_142AD9D35:                          ; CODE XREF: sub_142AD9A70+299↑j
sub_142AD9A70+2C5  33 C9                                                           xor     ecx, ecx        ; Logical Exclusive OR
sub_142AD9A70+2C7  48 83 C4 48                                                     add     rsp, 48h        ; Add
sub_142AD9A70+2CB  E9 90 D8 E1 09                                                  jmp     sub_14C8F75D0   ; Jump
sub_142AD9A70+2D0                                                  ; ---------------------------------------------------------------------------
sub_142AD9A70+2D0
sub_142AD9A70+2D0                                                  loc_142AD9D40:                          ; CODE XREF: sub_142AD9A70+290↑j
sub_142AD9A70+2D0  48 83 C4 48                                                     add     rsp, 48h        ; Add
sub_142AD9A70+2D4  C3                                                              retn                    ; Return Near from Procedure
sub_142AD9A70+2D4                                                  sub_142AD9A70   endp
sub_142AD9A70+2D4
sub_142AD9A70+2D4                                                  ; ---------------------------------------------------------------------------
.text:0000000142AD9D45 CC CC CC CC CC CC CC CC CC CC CC                                align 10h
sub_142AD9D50
sub_142AD9D50                                                      ; =============== S U B R O U T I N E =======================================
sub_142AD9D50
sub_142AD9D50                                                      ; Attributes: bp-based frame fpd=57h
sub_142AD9D50
sub_142AD9D50                                                      sub_142AD9D50   proc near               ; CODE XREF: sub_142AD9100+E↑p
sub_142AD9D50
sub_142AD9D50                                                      var_70          = qword ptr -70h
sub_142AD9D50                                                      var_68          = qword ptr -68h
sub_142AD9D50                                                      var_60          = dword ptr -60h
sub_142AD9D50                                                      var_50          = byte ptr -50h
sub_142AD9D50                                                      var_48          = dword ptr -48h
sub_142AD9D50                                                      var_40          = qword ptr -40h
sub_142AD9D50                                                      var_38          = qword ptr -38h
sub_142AD9D50                                                      var_30          = dword ptr -30h
sub_142AD9D50                                                      var_20          = qword ptr -20h
sub_142AD9D50                                                      var_18          = qword ptr -18h
sub_142AD9D50                                                      var_10          = qword ptr -10h
sub_142AD9D50                                                      var_8           = qword ptr -8
sub_142AD9D50                                                      arg_0           = qword ptr  10h
sub_142AD9D50                                                      arg_8           = qword ptr  18h
sub_142AD9D50                                                      arg_10          = qword ptr  20h
sub_142AD9D50
sub_142AD9D50      40 55                                                           push    rbp
sub_142AD9D50+2    48 8D 6C 24 A9                                                  lea     rbp, [rsp-57h]  ; Load Effective Address
sub_142AD9D50+7    48 81 EC 90 00 00 00                                            sub     rsp, 90h        ; Integer Subtraction
sub_142AD9D50+E    C6 41 10 00                                                     mov     byte ptr [rcx+10h], 0
sub_142AD9D50+12   FF 15 48 32 F4 13                                               call    cs:qword_156A1CFB0 ; Indirect Call Near Procedure
sub_142AD9D50+18   84 C0                                                           test    al, al          ; Logical Compare
sub_142AD9D50+1A   75 09                                                           jnz     short loc_142AD9D75 ; Jump if Not Zero (ZF=0)
sub_142AD9D50+1C   48 8B 05 45 42 F4 13                                            mov     rax, cs:qword_156A1DFB8
sub_142AD9D50+23   EB 21                                                           jmp     short loc_142AD9D96 ; Jump
sub_142AD9D50+25                                                   ; ---------------------------------------------------------------------------
sub_142AD9D50+25
sub_142AD9D50+25                                                   loc_142AD9D75:                          ; CODE XREF: sub_142AD9D50+1A↑j
sub_142AD9D50+25   0F B6 05 43 62 F4 13                                            movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
sub_142AD9D50+2C   48 8B 0D 35 62 F4 13                                            mov     rcx, qword ptr cs:unk_156A1FFB8
sub_142AD9D50+33   34 36                                                           xor     al, 36h         ; Logical Exclusive OR
sub_142AD9D50+35   48 89 4D 67                                                     mov     [rbp+67h], rcx
sub_142AD9D50+39   80 F1 36                                                        xor     cl, 36h         ; Logical Exclusive OR
sub_142AD9D50+3C   88 4D 6E                                                        mov     [rbp+6Eh], cl
sub_142AD9D50+3F   88 45 67                                                        mov     [rbp+67h], al
sub_142AD9D50+42   48 8B 45 67                                                     mov     rax, [rbp+67h]
sub_142AD9D50+46
sub_142AD9D50+46                                                   loc_142AD9D96:                          ; CODE XREF: sub_142AD9D50+23↑j
sub_142AD9D50+46   48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_142AD9D50+49   0F 84 78 03 00 00                                               jz      loc_142ADA117   ; Jump if Zero (ZF=1)
sub_142AD9D50+4F   FF 15 0B 32 F4 13                                               call    cs:qword_156A1CFB0 ; Indirect Call Near Procedure
sub_142AD9D50+55   84 C0                                                           test    al, al          ; Logical Compare
sub_142AD9D50+57   75 09                                                           jnz     short loc_142AD9DB2 ; Jump if Not Zero (ZF=0)
sub_142AD9D50+59   48 8B 05 08 42 F4 13                                            mov     rax, cs:qword_156A1DFB8
sub_142AD9D50+60   EB 21                                                           jmp     short loc_142AD9DD3 ; Jump
sub_142AD9D50+62                                                   ; ---------------------------------------------------------------------------
sub_142AD9D50+62
sub_142AD9D50+62                                                   loc_142AD9DB2:                          ; CODE XREF: sub_142AD9D50+57↑j
sub_142AD9D50+62   0F B6 05 06 62 F4 13                                            movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
sub_142AD9D50+69   48 8B 0D F8 61 F4 13                                            mov     rcx, qword ptr cs:unk_156A1FFB8
sub_142AD9D50+70   34 36                                                           xor     al, 36h         ; Logical Exclusive OR
sub_142AD9D50+72   48 89 4D 67                                                     mov     [rbp+67h], rcx
sub_142AD9D50+76   80 F1 36                                                        xor     cl, 36h         ; Logical Exclusive OR
sub_142AD9D50+79   88 4D 6E                                                        mov     [rbp+6Eh], cl
sub_142AD9D50+7C   88 45 67                                                        mov     [rbp+67h], al
sub_142AD9D50+7F   48 8B 45 67                                                     mov     rax, [rbp+67h]
sub_142AD9D50+83
sub_142AD9D50+83                                                   loc_142AD9DD3:                          ; CODE XREF: sub_142AD9D50+60↑j
sub_142AD9D50+83   48 8B 40 30                                                     mov     rax, [rax+30h]
sub_142AD9D50+87   90                                                              nop                     ; No Operation
sub_142AD9D50+88   48 89 9C 24 B0 00 00 00                                         mov     [rsp+0B0h], rbx
sub_142AD9D50+90   48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_142AD9D50+93   0F 84 B4 00 00 00                                               jz      loc_142AD9E9D   ; Jump if Zero (ZF=1)
sub_142AD9D50+99   48 8B D0                                                        mov     rdx, rax
sub_142AD9D50+9C   48 8B C8                                                        mov     rcx, rax
sub_142AD9D50+9F   48 C1 EA 30                                                     shr     rdx, 30h        ; Shift Logical Right
sub_142AD9D50+A3   48 BB FF FF FF FF FF FF 00 00                                   mov     rbx, 0FFFFFFFFFFFFh
sub_142AD9D50+AD   48 23 CB                                                        and     rcx, rbx        ; Logical AND
sub_142AD9D50+B0   48 C1 E8 3F                                                     shr     rax, 3Fh        ; Shift Logical Right
sub_142AD9D50+B4   81 E2 FF 3F 00 00                                               and     edx, 3FFFh      ; Logical AND
sub_142AD9D50+BA   48 89 4D 67                                                     mov     [rbp+67h], rcx
sub_142AD9D50+BE   84 C0                                                           test    al, al          ; Logical Compare
sub_142AD9D50+C0   0F 84 82 00 00 00                                               jz      loc_142AD9E98   ; Jump if Zero (ZF=1)
sub_142AD9D50+C6   8B 05 78 09 D7 13                                               mov     eax, cs:dword_15684A794
sub_142AD9D50+CC   83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
sub_142AD9D50+CF   75 1B                                                           jnz     short loc_142AD9E3C ; Jump if Not Zero (ZF=0)
sub_142AD9D50+D1   48 8B 0D 58 E2 8F 14                                            mov     rcx, cs:qword_1573D8080
sub_142AD9D50+D8   44 8B CA                                                        mov     r9d, edx
sub_142AD9D50+DB   48 8D 55 67                                                     lea     rdx, [rbp+67h]  ; Load Effective Address
sub_142AD9D50+DF   41 B8 04 00 00 00                                               mov     r8d, 4
sub_142AD9D50+E5   E8 D6 3A FB FD                                                  call    sub_140A8D910   ; Call Procedure
sub_142AD9D50+EA   EB 34                                                           jmp     short loc_142AD9E70 ; Jump
sub_142AD9D50+EC                                                   ; ---------------------------------------------------------------------------
sub_142AD9D50+EC
sub_142AD9D50+EC                                                   loc_142AD9E3C:                          ; CODE XREF: sub_142AD9D50+CF↑j
sub_142AD9D50+EC   83 F8 02                                                        cmp     eax, 2          ; Compare Two Operands
sub_142AD9D50+EF   75 0C                                                           jnz     short loc_142AD9E4D ; Jump if Not Zero (ZF=0)
sub_142AD9D50+F1   48 8B 05 40 E2 8F 14                                            mov     rax, cs:qword_1573D8088
sub_142AD9D50+F8   44 8B C2                                                        mov     r8d, edx
sub_142AD9D50+FB   EB 13                                                           jmp     short loc_142AD9E60 ; Jump
sub_142AD9D50+FD                                                   ; ---------------------------------------------------------------------------
sub_142AD9D50+FD
sub_142AD9D50+FD                                                   loc_142AD9E4D:                          ; CODE XREF: sub_142AD9D50+EF↑j
sub_142AD9D50+FD   83 F8 03                                                        cmp     eax, 3          ; Compare Two Operands
sub_142AD9D50+100  75 1E                                                           jnz     short loc_142AD9E70 ; Jump if Not Zero (ZF=0)
sub_142AD9D50+102  48 8D 05 37 E2 8F 14                                            lea     rax, qword_1573D8090 ; Load Effective Address
sub_142AD9D50+109  44 8B C2                                                        mov     r8d, edx
sub_142AD9D50+10C  48 8B 04 D0                                                     mov     rax, [rax+rdx*8]
sub_142AD9D50+110
sub_142AD9D50+110                                                  loc_142AD9E60:                          ; CODE XREF: sub_142AD9D50+FB↑j
sub_142AD9D50+110  4C 8B 48 08                                                     mov     r9, [rax+8]
sub_142AD9D50+114  48 8D 4D 67                                                     lea     rcx, [rbp+57h+arg_0] ; Load Effective Address
sub_142AD9D50+118  BA 04 00 00 00                                                  mov     edx, 4
sub_142AD9D50+11D  FF 50 40                                                        call    qword ptr [rax+40h] ; Indirect Call Near Procedure
sub_142AD9D50+120
sub_142AD9D50+120                                                  loc_142AD9E70:                          ; CODE XREF: sub_142AD9D50+EA↑j
sub_142AD9D50+120                                                                                          ; sub_142AD9D50+100↑j
sub_142AD9D50+120  48 8B 4D 67                                                     mov     rcx, [rbp+57h+arg_0]
sub_142AD9D50+124  48 BA 00 00 00 00 00 00 FF FF                                   mov     rdx, 0FFFF000000000000h
sub_142AD9D50+12E  48 23 CB                                                        and     rcx, rbx        ; Logical AND
sub_142AD9D50+131  48 8B C1                                                        mov     rax, rcx
sub_142AD9D50+134  48 0B C2                                                        or      rax, rdx        ; Logical Inclusive OR
sub_142AD9D50+137  48 BA 00 00 00 00 00 80 00 00                                   mov     rdx, 800000000000h
sub_142AD9D50+141  48 3B CA                                                        cmp     rcx, rdx        ; Compare Two Operands
sub_142AD9D50+144  48 0F 43 C8                                                     cmovnb  rcx, rax        ; Move if Not Below (CF=0)
sub_142AD9D50+148
sub_142AD9D50+148                                                  loc_142AD9E98:                          ; CODE XREF: sub_142AD9D50+C0↑j
sub_142AD9D50+148  48 85 C9                                                        test    rcx, rcx        ; Logical Compare
sub_142AD9D50+14B  75 44                                                           jnz     short loc_142AD9EE1 ; Jump if Not Zero (ZF=0)
sub_142AD9D50+14D
sub_142AD9D50+14D                                                  loc_142AD9E9D:                          ; CODE XREF: sub_142AD9D50+93↑j
sub_142AD9D50+14D  FF 15 0D 31 F4 13                                               call    cs:qword_156A1CFB0 ; Indirect Call Near Procedure
sub_142AD9D50+153  84 C0                                                           test    al, al          ; Logical Compare
sub_142AD9D50+155  75 09                                                           jnz     short loc_142AD9EB0 ; Jump if Not Zero (ZF=0)
sub_142AD9D50+157  48 8B 0D 0A 41 F4 13                                            mov     rcx, cs:qword_156A1DFB8
sub_142AD9D50+15E  EB 21                                                           jmp     short loc_142AD9ED1 ; Jump
sub_142AD9D50+160                                                  ; ---------------------------------------------------------------------------
sub_142AD9D50+160
sub_142AD9D50+160                                                  loc_142AD9EB0:                          ; CODE XREF: sub_142AD9D50+155↑j
sub_142AD9D50+160  48 8B 0D 01 61 F4 13                                            mov     rcx, qword ptr cs:unk_156A1FFB8
sub_142AD9D50+167  0F B6 05 01 61 F4 13                                            movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
sub_142AD9D50+16E  48 89 4D 6F                                                     mov     [rbp+57h+arg_8], rcx
sub_142AD9D50+172  34 36                                                           xor     al, 36h         ; Logical Exclusive OR
sub_142AD9D50+174  80 F1 36                                                        xor     cl, 36h         ; Logical Exclusive OR
sub_142AD9D50+177  88 45 6F                                                        mov     byte ptr [rbp+57h+arg_8], al
sub_142AD9D50+17A  88 4D 76                                                        mov     byte ptr [rbp+57h+arg_8+7], cl
sub_142AD9D50+17D  48 8B 4D 6F                                                     mov     rcx, [rbp+57h+arg_8]
sub_142AD9D50+181
sub_142AD9D50+181                                                  loc_142AD9ED1:                          ; CODE XREF: sub_142AD9D50+15E↑j
sub_142AD9D50+181  48 8B 89 E8 00 00 00                                            mov     rcx, [rcx+0E8h]
sub_142AD9D50+188  48 85 C9                                                        test    rcx, rcx        ; Logical Compare
sub_142AD9D50+18B  0F 84 2E 02 00 00                                               jz      loc_142ADA10F   ; Jump if Zero (ZF=1)
sub_142AD9D50+191
sub_142AD9D50+191                                                  loc_142AD9EE1:                          ; CODE XREF: sub_142AD9D50+14B↑j
sub_142AD9D50+191  48 89 BC 24 80 00 00 00                                         mov     [rsp+90h+var_10], rdi
sub_142AD9D50+199  48 8B B9 68 01 00 00                                            mov     rdi, [rcx+168h]
sub_142AD9D50+1A0  4C 89 74 24 78                                                  mov     [rsp+90h+var_18], r14
sub_142AD9D50+1A5  4C 8B B1 60 01 00 00                                            mov     r14, [rcx+160h]
sub_142AD9D50+1AC  48 85 FF                                                        test    rdi, rdi        ; Logical Compare
sub_142AD9D50+1AF  74 03                                                           jz      short loc_142AD9F04 ; Jump if Zero (ZF=1)
sub_142AD9D50+1B1  FF 47 08                                                        inc     dword ptr [rdi+8] ; Increment by 1
sub_142AD9D50+1B4
sub_142AD9D50+1B4                                                  loc_142AD9F04:                          ; CODE XREF: sub_142AD9D50+1AF↑j
sub_142AD9D50+1B4  4D 85 F6                                                        test    r14, r14        ; Logical Compare
sub_142AD9D50+1B7  0F 84 CE 01 00 00                                               jz      loc_142ADA0DB   ; Jump if Zero (ZF=1)
sub_142AD9D50+1BD  33 DB                                                           xor     ebx, ebx        ; Logical Exclusive OR
sub_142AD9D50+1BF  4C 89 7C 24 70                                                  mov     [rsp+90h+var_20], r15
sub_142AD9D50+1C4  48 89 5D 17                                                     mov     [rbp+57h+var_40], rbx
sub_142AD9D50+1C8  48 89 5D 1F                                                     mov     [rbp+57h+var_38], rbx
sub_142AD9D50+1CC  C7 45 27 FF FF FF FF                                            mov     [rbp+57h+var_30], 0FFFFFFFFh
sub_142AD9D50+1D3  E8 E8 E9 FB 09                                                  call    sub_14CA98910   ; Call Procedure
sub_142AD9D50+1D8  41 B9 10 00 00 00                                               mov     r9d, 10h
sub_142AD9D50+1DE  89 5C 24 20                                                     mov     dword ptr [rsp+90h+var_70], ebx
sub_142AD9D50+1E2  41 B0 01                                                        mov     r8b, 1
sub_142AD9D50+1E5  48 8D 55 17                                                     lea     rdx, [rbp+57h+var_40] ; Load Effective Address
sub_142AD9D50+1E9  48 8B C8                                                        mov     rcx, rax
sub_142AD9D50+1EC  E8 FF 7A 18 0A                                                  call    sub_14CC61A40   ; Call Procedure
sub_142AD9D50+1F1  8B 5D 27                                                        mov     ebx, [rbp+57h+var_30]
sub_142AD9D50+1F4  FF C3                                                           inc     ebx             ; Increment by 1
sub_142AD9D50+1F6  89 5D 27                                                        mov     [rbp+57h+var_30], ebx
sub_142AD9D50+1F9  3B 5D 1F                                                        cmp     ebx, dword ptr [rbp+57h+var_38] ; Compare Two Operands
sub_142AD9D50+1FC  7D 23                                                           jge     short loc_142AD9F71 ; Jump if Greater or Equal (SF=OF)
sub_142AD9D50+1FE  66 90                                                           xchg    ax, ax          ; Exchange Register/Memory with Register
sub_142AD9D50+200
sub_142AD9D50+200                                                  loc_142AD9F50:                          ; CODE XREF: sub_142AD9D50+21F↓j
sub_142AD9D50+200  48 8D 4D 17                                                     lea     rcx, [rbp+57h+var_40] ; Load Effective Address
sub_142AD9D50+204  FF 15 16 08 D7 13                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_142AD9D50+20A  48 63 CB                                                        movsxd  rcx, ebx        ; Move with Sign-Extend Doubleword
sub_142AD9D50+20D  8B 5D 27                                                        mov     ebx, [rbp+57h+var_30]
sub_142AD9D50+210  48 83 3C C8 00                                                  cmp     qword ptr [rax+rcx*8], 0 ; Compare Two Operands
sub_142AD9D50+215  75 0A                                                           jnz     short loc_142AD9F71 ; Jump if Not Zero (ZF=0)
sub_142AD9D50+217  FF C3                                                           inc     ebx             ; Increment by 1
sub_142AD9D50+219  89 5D 27                                                        mov     [rbp+57h+var_30], ebx
sub_142AD9D50+21C  3B 5D 1F                                                        cmp     ebx, dword ptr [rbp+57h+var_38] ; Compare Two Operands
sub_142AD9D50+21F  7C DF                                                           jl      short loc_142AD9F50 ; Jump if Less (SF!=OF)
sub_142AD9D50+221
sub_142AD9D50+221                                                  loc_142AD9F71:                          ; CODE XREF: sub_142AD9D50+1FC↑j
sub_142AD9D50+221                                                                                          ; sub_142AD9D50+215↑j
sub_142AD9D50+221  4C 8D 3D D8 93 83 0E                                            lea     r15, aExportuclassne ; Load Effective Address
sub_142AD9D50+228  48 89 B4 24 88 00 00 00                                         mov     [rsp+90h+var_8], rsi
sub_142AD9D50+230
sub_142AD9D50+230                                                  loc_142AD9F80:                          ; CODE XREF: sub_142AD9D50+31F↓j
sub_142AD9D50+230                                                                                          ; sub_142AD9D50+33C↓j
sub_142AD9D50+230  85 DB                                                           test    ebx, ebx        ; Logical Compare
sub_142AD9D50+232  0F 88 09 01 00 00                                               js      loc_142ADA091   ; Jump if Sign (SF=1)
sub_142AD9D50+238  3B 5D 1F                                                        cmp     ebx, dword ptr [rbp+57h+var_38] ; Compare Two Operands
sub_142AD9D50+23B  0F 8D 00 01 00 00                                               jge     loc_142ADA091   ; Jump if Greater or Equal (SF=OF)
sub_142AD9D50+241  48 8D 4D 17                                                     lea     rcx, [rbp+57h+var_40] ; Load Effective Address
sub_142AD9D50+245  FF 15 D5 07 D7 13                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_142AD9D50+24B  48 63 CB                                                        movsxd  rcx, ebx        ; Move with Sign-Extend Doubleword
sub_142AD9D50+24E  48 8B 14 C8                                                     mov     rdx, [rax+rcx*8]
sub_142AD9D50+252  49 8B CE                                                        mov     rcx, r14
sub_142AD9D50+255  E8 56 B7 FB 09                                                  call    sub_14CA95700   ; Call Procedure
sub_142AD9D50+25A  8B 70 18                                                        mov     esi, [rax+18h]
sub_142AD9D50+25D  85 F6                                                           test    esi, esi        ; Logical Compare
sub_142AD9D50+25F  0F 84 AF 00 00 00                                               jz      loc_142ADA064   ; Jump if Zero (ZF=1)
sub_142AD9D50+265  80 3D 5C 7B A5 14 06                                            cmp     cs:byte_157531B18, 6 ; Compare Two Operands
sub_142AD9D50+26C  0F 82 A2 00 00 00                                               jb      loc_142ADA064   ; Jump if Below (CF=1)
sub_142AD9D50+272  48 63 5D 27                                                     movsxd  rbx, [rbp+57h+var_30] ; Move with Sign-Extend Doubleword
sub_142AD9D50+276  48 8D 4D 17                                                     lea     rcx, [rbp+57h+var_40] ; Load Effective Address
sub_142AD9D50+27A  FF 15 A0 07 D7 13                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_142AD9D50+280  48 8D 55 07                                                     lea     rdx, [rbp+57h+var_50] ; Load Effective Address
sub_142AD9D50+284  48 8B 04 D8                                                     mov     rax, [rax+rbx*8]
sub_142AD9D50+288  48 8B 48 1C                                                     mov     rcx, [rax+1Ch]
sub_142AD9D50+28C  48 89 4D 67                                                     mov     [rbp+57h+arg_0], rcx
sub_142AD9D50+290  48 8D 4D 67                                                     lea     rcx, [rbp+57h+arg_0] ; Load Effective Address
sub_142AD9D50+294  E8 37 F6 E1 09                                                  call    sub_14C8F9620   ; Call Procedure
sub_142AD9D50+299  83 7D 0F 00                                                     cmp     [rbp+57h+var_48], 0 ; Compare Two Operands
sub_142AD9D50+29D  74 0C                                                           jz      short loc_142AD9FFB ; Jump if Zero (ZF=1)
sub_142AD9D50+29F  48 8D 4D 07                                                     lea     rcx, [rbp+57h+var_50] ; Load Effective Address
sub_142AD9D50+2A3  FF 15 77 07 D7 13                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_142AD9D50+2A9  EB 07                                                           jmp     short loc_142ADA002 ; Jump
sub_142AD9D50+2AB                                                  ; ---------------------------------------------------------------------------
sub_142AD9D50+2AB
sub_142AD9D50+2AB                                                  loc_142AD9FFB:                          ; CODE XREF: sub_142AD9D50+29D↑j
sub_142AD9D50+2AB  48 8D 05 56 E1 BE 0D                                            lea     rax, word_1506C8158 ; Load Effective Address
sub_142AD9D50+2B2
sub_142AD9D50+2B2                                                  loc_142ADA002:                          ; CODE XREF: sub_142AD9D50+2A9↑j
sub_142AD9D50+2B2  89 74 24 30                                                     mov     [rsp+90h+var_60], esi
sub_142AD9D50+2B6  4C 8D 05 0F 7B A5 14                                            lea     r8, unk_157531B1C ; Load Effective Address
sub_142AD9D50+2BD  48 89 44 24 28                                                  mov     [rsp+90h+var_68], rax
sub_142AD9D50+2C2  48 8D 0D 47 E7 BE 0D                                            lea     rcx, aUnknown   ; Load Effective Address
sub_142AD9D50+2C9  41 B9 06 00 00 00                                               mov     r9d, 6
sub_142AD9D50+2CF  4C 89 7C 24 20                                                  mov     [rsp+90h+var_70], r15
sub_142AD9D50+2D4  BA D3 03 00 00                                                  mov     edx, 3D3h
sub_142AD9D50+2D9  E8 02 F1 D4 09                                                  call    sub_14C829130   ; Call Procedure
sub_142AD9D50+2DE  48 8D 4D 07                                                     lea     rcx, [rbp+57h+var_50] ; Load Effective Address
sub_142AD9D50+2E2  FF 15 38 07 D7 13                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_142AD9D50+2E8  33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_142AD9D50+2EA  48 8D 4D 07                                                     lea     rcx, [rbp+57h+var_50] ; Load Effective Address
sub_142AD9D50+2EE  E8 9D 86 FA FD                                                  call    sub_140A826E0   ; Call Procedure
sub_142AD9D50+2F3  48 8D 4D 07                                                     lea     rcx, [rbp+57h+var_50] ; Load Effective Address
sub_142AD9D50+2F7  FF 15 23 07 D7 13                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_142AD9D50+2FD  48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_142AD9D50+300  74 12                                                           jz      short loc_142ADA064 ; Jump if Zero (ZF=1)
sub_142AD9D50+302  48 8D 4D 07                                                     lea     rcx, [rbp+57h+var_50] ; Load Effective Address
sub_142AD9D50+306  FF 15 14 07 D7 13                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_142AD9D50+30C  48 8B C8                                                        mov     rcx, rax
sub_142AD9D50+30F  E8 6C 0F CD 09                                                  call    sub_14C7AAFD0   ; Call Procedure
sub_142AD9D50+314
sub_142AD9D50+314                                                  loc_142ADA064:                          ; CODE XREF: sub_142AD9D50+25F↑j
sub_142AD9D50+314                                                                                          ; sub_142AD9D50+26C↑j ...
sub_142AD9D50+314  8B 5D 27                                                        mov     ebx, [rbp+57h+var_30]
sub_142AD9D50+317  FF C3                                                           inc     ebx             ; Increment by 1
sub_142AD9D50+319  89 5D 27                                                        mov     [rbp+57h+var_30], ebx
sub_142AD9D50+31C  3B 5D 1F                                                        cmp     ebx, dword ptr [rbp+57h+var_38] ; Compare Two Operands
sub_142AD9D50+31F  0F 8D 0B FF FF FF                                               jge     loc_142AD9F80   ; Jump if Greater or Equal (SF=OF)
sub_142AD9D50+325  48 8D 4D 17                                                     lea     rcx, [rbp+57h+var_40] ; Load Effective Address
sub_142AD9D50+329  FF 15 F1 06 D7 13                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_142AD9D50+32F  48 63 CB                                                        movsxd  rcx, ebx        ; Move with Sign-Extend Doubleword
sub_142AD9D50+332  48 83 3C C8 00                                                  cmp     qword ptr [rax+rcx*8], 0 ; Compare Two Operands
sub_142AD9D50+337  74 DB                                                           jz      short loc_142ADA064 ; Jump if Zero (ZF=1)
sub_142AD9D50+339  8B 5D 27                                                        mov     ebx, [rbp+57h+var_30]
sub_142AD9D50+33C  E9 EF FE FF FF                                                  jmp     loc_142AD9F80   ; Jump
sub_142AD9D50+341                                                  ; ---------------------------------------------------------------------------
sub_142AD9D50+341
sub_142AD9D50+341                                                  loc_142ADA091:                          ; CODE XREF: sub_142AD9D50+232↑j
sub_142AD9D50+341                                                                                          ; sub_142AD9D50+23B↑j
sub_142AD9D50+341  48 8D 4D 17                                                     lea     rcx, [rbp+57h+var_40] ; Load Effective Address
sub_142AD9D50+345  FF 15 D5 06 D7 13                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_142AD9D50+34B  33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
sub_142AD9D50+34D  48 8D 4D 17                                                     lea     rcx, [rbp+57h+var_40] ; Load Effective Address
sub_142AD9D50+351  E8 CA 36 FB FD                                                  call    sub_140A8D770   ; Call Procedure
sub_142AD9D50+356  48 8D 4D 17                                                     lea     rcx, [rbp+57h+var_40] ; Load Effective Address
sub_142AD9D50+35A  FF 15 C0 06 D7 13                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_142AD9D50+360  4C 8B 7C 24 70                                                  mov     r15, [rsp+90h+var_20]
sub_142AD9D50+365  48 8B B4 24 88 00 00 00                                         mov     rsi, [rsp+90h+var_8]
sub_142AD9D50+36D  48 85 C0                                                        test    rax, rax        ; Logical Compare
sub_142AD9D50+370  74 12                                                           jz      short loc_142ADA0D4 ; Jump if Zero (ZF=1)
sub_142AD9D50+372  48 8D 4D 17                                                     lea     rcx, [rbp+57h+var_40] ; Load Effective Address
sub_142AD9D50+376  FF 15 A4 06 D7 13                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
sub_142AD9D50+37C  48 8B C8                                                        mov     rcx, rax
sub_142AD9D50+37F  E8 FC 0E CD 09                                                  call    sub_14C7AAFD0   ; Call Procedure
sub_142AD9D50+384
sub_142AD9D50+384                                                  loc_142ADA0D4:                          ; CODE XREF: sub_142AD9D50+370↑j
sub_142AD9D50+384  33 C9                                                           xor     ecx, ecx        ; Logical Exclusive OR
sub_142AD9D50+386  E8 F5 D4 E1 09                                                  call    sub_14C8F75D0   ; Call Procedure
sub_142AD9D50+38B
sub_142AD9D50+38B                                                  loc_142ADA0DB:                          ; CODE XREF: sub_142AD9D50+1B7↑j
sub_142AD9D50+38B  4C 8B 74 24 78                                                  mov     r14, [rsp+90h+var_18]
sub_142AD9D50+390  48 85 FF                                                        test    rdi, rdi        ; Logical Compare
sub_142AD9D50+393  74 22                                                           jz      short loc_142ADA107 ; Jump if Zero (ZF=1)
sub_142AD9D50+395  83 6F 08 01                                                     sub     dword ptr [rdi+8], 1 ; Integer Subtraction
sub_142AD9D50+399  75 1C                                                           jnz     short loc_142ADA107 ; Jump if Not Zero (ZF=0)
sub_142AD9D50+39B  48 8B 07                                                        mov     rax, [rdi]
sub_142AD9D50+39E  48 8B CF                                                        mov     rcx, rdi
sub_142AD9D50+3A1  FF 10                                                           call    qword ptr [rax] ; Indirect Call Near Procedure
sub_142AD9D50+3A3  83 6F 0C 01                                                     sub     dword ptr [rdi+0Ch], 1 ; Integer Subtraction
sub_142AD9D50+3A7  75 0E                                                           jnz     short loc_142ADA107 ; Jump if Not Zero (ZF=0)
sub_142AD9D50+3A9  48 8B 07                                                        mov     rax, [rdi]
sub_142AD9D50+3AC  BA 01 00 00 00                                                  mov     edx, 1
sub_142AD9D50+3B1  48 8B CF                                                        mov     rcx, rdi
sub_142AD9D50+3B4  FF 50 08                                                        call    qword ptr [rax+8] ; Indirect Call Near Procedure
sub_142AD9D50+3B7
sub_142AD9D50+3B7                                                  loc_142ADA107:                          ; CODE XREF: sub_142AD9D50+393↑j
sub_142AD9D50+3B7                                                                                          ; sub_142AD9D50+399↑j ...
sub_142AD9D50+3B7  48 8B BC 24 80 00 00 00                                         mov     rdi, [rsp+90h+var_10]
sub_142AD9D50+3BF
sub_142AD9D50+3BF                                                  loc_142ADA10F:                          ; CODE XREF: sub_142AD9D50+18B↑j
sub_142AD9D50+3BF  48 8B 9C 24 B0 00 00 00                                         mov     rbx, [rsp+90h+arg_10]
sub_142AD9D50+3C7
sub_142AD9D50+3C7                                                  loc_142ADA117:                          ; CODE XREF: sub_142AD9D50+49↑j
sub_142AD9D50+3C7  48 81 C4 90 00 00 00                                            add     rsp, 90h        ; Add
sub_142AD9D50+3CE  5D                                                              pop     rbp
sub_142AD9D50+3CF  C3                                                              retn                    ; Return Near from Procedure
sub_142AD9D50+3CF                                                  sub_142AD9D50   endp
sub_142AD9D50+3CF

