---
Delta LogAobScan Uworld_36_BaseAndEncore || Uworld_37_BaseAndEncore
---
---
╭────────────────────────────────╮
│   📢 Uwolrd_36 [xor al, 0x36]  │
╰────────────────────────────────╯ 
---
mini  Asm 
```asm
   ⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐❖ 💻UworldZone[0xBD++]AsmMini:⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐ 
     sub_141CC3910+C6                                                   loc_141CC39D6:                          ; CODE XREF: sub_141CC3910+BB↑j
     sub_141CC3910+C6   48 8B 0D DB C5 D5 14                                            mov     rcx, qword ptr cs:unk_156A1FFB8
     sub_141CC3910+CD   0F B6 05 DB C5 D5 14                                            movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
     sub_141CC3910+D4   48 89 8C 24 90 00 00 00                                         mov     [rsp+90h], rcx
     sub_141CC3910+DC   34 36                                                           xor     al, 36h         ; Logical Exclusive OR
     sub_141CC3910+DE   80 F1 36                                                        xor     cl, 36h         ; Logical Exclusive OR
     sub_141CC3910+E1   88 84 24 90 00 00 00                                            mov     [rsp+90h], al
     sub_141CC3910+E8   88 8C 24 97 00 00 00                                            mov     [rsp+97h], cl
     sub_141CC3910+EF   48 8B 8C 24 90 00 00 00                                         mov     rcx, [rsp+90h]
     sub_141CC3910+F7                                                   loc_141CC3A07:                          ; CODE XREF: sub_141CC3910+C4↑j
     sub_141CC3910+F7   48 89 AC 24 A0 00 00 00                                         mov     [rsp+0A0h], rbp
  ⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐❖ 💻UworldZone[0x197++]AsmMini:⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐
      sub_14EAE1150+1A0                                                  loc_14EAE12F0:                          ; CODE XREF: sub_14EAE1150+195↑j
      sub_14EAE1150+1A0  48 8B 0D C1 EC F3 07                                            mov     rcx, qword ptr cs:unk_156A1FFB8
      sub_14EAE1150+1A7  0F B6 05 C1 EC F3 07                                            movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
      sub_14EAE1150+1AE  48 89 8C 24 D0 00 00 00                                         mov     [rsp+0D0h], rcx
      sub_14EAE1150+1B6  34 36                                                           xor     al, 36h         ; Logical Exclusive OR
      sub_14EAE1150+1B8  80 F1 36                                                        xor     cl, 36h         ; Logical Exclusive OR
      sub_14EAE1150+1BB  88 84 24 D0 00 00 00                                            mov     [rsp+0D0h], al
      sub_14EAE1150+1C2  88 8C 24 D7 00 00 00                                            mov     [rsp+0D7h], cl
      sub_14EAE1150+1C9  48 8B B4 24 D0 00 00 00                                         mov     rsi, [rsp+0D0h]
      sub_14EAE1150+1D1
      sub_14EAE1150+1D1                                                  loc_14EAE1321:                          ; CODE XREF: sub_14EAE1150+19E↑j
      sub_14EAE1150+1D1  48 8B 9C 24 C0 00 00 00                                         mov     rbx, [rsp+0C0h]
```

---
╭────────────────────────────────╮
│   📢 Uwolrd_37 [xor al, 0x37]  │
╰────────────────────────────────╯ 
---

```asm
   ⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐❖ 💻UworldZone[0x3FE++]AsmMini:⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐

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
 ⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐❖ 💻UworldZone[0x010++]AsmMini:⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐
  	sub_14DB9D100+D7                                                   loc_14DB9D1D7:                          ; CODE XREF: sub_14DB9D100+CC↑j
  	sub_14DB9D100+D7   48 8B 0D 9A EA E7 08                                            mov     rcx, cs:qword_156A1BC78
  	sub_14DB9D100+DE   0F B6 05 99 EA E7 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
  	sub_14DB9D100+E5   48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
  	sub_14DB9D100+ED   34 37                                                           xor     al, 37h         ; Logical Exclusive OR
  	sub_14DB9D100+EF   48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
  	sub_14DB9D100+F3   80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
  	sub_14DB9D100+F6   88 84 24 51 01 00 00                                            mov     [rsp+151h], al
  	sub_14DB9D100+FD   88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
  	sub_14DB9D100+104  48 8B 94 24 50 01 00 00                                         mov     rdx, [rsp+150h]
  	sub_14DB9D100+10C
  	sub_14DB9D100+10C                                                  loc_14DB9D20C:                          ; CODE XREF: sub_14DB9D100+D5↑j
  	sub_14DB9D100+10C  48 8B 86 F8 00 00 00                                            mov     rax, [rsi+0F8h]



```

---
ALL Aob Scan 
---
```lua


╭────────────────────────────────╮
│   📢 Uwolrd_36 [xor al, 0x36]  │
╰────────────────────────────────╯
  ⎜──────────── AobBase // "48 8B 35 ? ? ? ? EB ? 48 8B ? ? ? ? ? 0F B6 ? ? ? ? ? 48 89 8C ? ? ? ? ? 34 ? 80 F1 ? 88 84 ? ? ? ? ? 88 8C ? ? ? ? ? 48 8B"
  ⎜─────────Address	                Function	            Instruction
  ⎜─────────.text:0000000141CC39CD	sub_141CC3910	mov     rcx, cs:qword_156A1DFB8  +fun=0xBD
  ⎜─────────.text:00000001452CD9BF	sub_1452CD950	mov     rsi, cs:qword_156A1DFB8  +fun=0x6F
  ⎜─────────.text:000000014E04E250	sub_14E04E1D0	mov     rbx, cs:qword_156A1DFB8  +fun=0x80 
  ⎜─────────.text:000000014EAE12E7	sub_14EAE1150	mov     rsi, cs:qword_156A1DFB8  +fun=0x197
  ❖ 💻UworldZone[0xBD]:
  ⎜─Aob_Uworld [mov rcx, cs:qword_156A1DFB8] -> "48 8B 0D ?? ?? ?? ?? EB 31 48 8B 0D ?? ?? ?? ?? 0F B6 05 ?? ?? ?? ?? 48 89 8C 24 90 00 00 00"
  ⎜───Aob_UworldEncorePtr[mov rcx, qword ptr cs:unk_156A1FFB8]-> "48 8B 0D ?? ?? ?? ?? 0F B6 05 ?? ?? ?? ?? 48 89 8C 24 90 00 00 00 34 36"
  ⎜──────Aob_UworldEncorePtr[movzx eax, cs:byte_156A1FFBF]->  "0F B6 05 ?? ?? ?? ?? 48 89 8C 24 90 00 00 00 34 36"
  ❖ 💻UworldZone[0x197]:
  ⎜─Aob_Uworld [mov rsi, cs:qword_156A1DFB8] ->  "48 8B 35 ?? ?? ?? ?? EB 31 48 8B 0D ?? ?? ?? ?? 0F B6 05 ?? ?? ?? ?? 48 89 8C 24 D0 00 00 00"
  ⎜───Aob_UworldEncorePtr [mov rcx, qword ptr cs:unk_156A1FFB8] -> "48 8B 0D ?? ?? ?? ?? 0F B6 05 ?? ?? ?? ?? 48 89 8C 24 D0 00 00 00 34 36"
  ⎜──────Aob_UworldEncorePtr[movzx  eax, cs:byte_156A1FFBF] -> "0F B6 05 ?? ?? ?? ?? 48 89 8C 24 D0 00 00 00 34 36"


   ⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐❖ 💻UworldZone[0xBD++]AsmMini:⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐ 
   📌Get AddressFunArrayLavelBase_.text:0000000141CC39CD
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
        sub_141CC3910+F7                                                   loc_141CC3A07:                          ; CODE XREF: sub_141CC3910+C4↑j
        sub_141CC3910+F7   48 89 AC 24 A0 00 00 00                                         mov     [rsp+0A0h], rbp


    ⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐❖ 💻UworldZone[0x197++]AsmMini:⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐
        sub_14EAE1150+197  48 8B 35 CA CC F3 07                                            mov     rsi, cs:qword_156A1DFB8
        sub_14EAE1150+19E  EB 31                                                           jmp     short loc_14EAE1321 ; Jump
        sub_14EAE1150+1A0                                                  ; ---------------------------------------------------------------------------
        sub_14EAE1150+1A0
        sub_14EAE1150+1A0                                                  loc_14EAE12F0:                          ; CODE XREF: sub_14EAE1150+195↑j
        sub_14EAE1150+1A0  48 8B 0D C1 EC F3 07                                            mov     rcx, qword ptr cs:unk_156A1FFB8
        sub_14EAE1150+1A7  0F B6 05 C1 EC F3 07                                            movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
        sub_14EAE1150+1AE  48 89 8C 24 D0 00 00 00                                         mov     [rsp+0D0h], rcx
        sub_14EAE1150+1B6  34 36                                                           xor     al, 36h         ; Logical Exclusive OR
        sub_14EAE1150+1B8  80 F1 36                                                        xor     cl, 36h         ; Logical Exclusive OR
        sub_14EAE1150+1BB  88 84 24 D0 00 00 00                                            mov     [rsp+0D0h], al
        sub_14EAE1150+1C2  88 8C 24 D7 00 00 00                                            mov     [rsp+0D7h], cl
        sub_14EAE1150+1C9  48 8B B4 24 D0 00 00 00                                         mov     rsi, [rsp+0D0h]
        sub_14EAE1150+1D1
        sub_14EAE1150+1D1                                                  loc_14EAE1321:                          ; CODE XREF: sub_14EAE1150+19E↑j
        sub_14EAE1150+1D1  48 8B 9C 24 C0 00 00 00                                         mov     rbx, [rsp+0C0h]
        sub_14EAE1150+1D9  48 8B 7B 28                                                     mov     rdi, [rbx+28h]
        sub_14EAE1150+1DD  E8 8E 14 DC FD                                                  call    sub_14C8A27C0   ; Call Procedure
        sub_14EAE1150+1E2  4C 8B C8                                                        mov     r9, rax
        sub_14EAE1150+1E5  48 8D 4B 28                                                     lea     rcx, [rbx+28h]  ; Load Effective Address
        sub_14EAE1150+1E9  4D 8B C6                                                        mov     r8, r14
        sub_14EAE1150+1EC  48 8B D6                                                        mov     rdx, rsi
        sub_14EAE1150+1EF  FF 57 08                                                        call    qword ptr [rdi+8] ; Indirect Call Near Procedure
        sub_14EAE1150+1F2
        sub_14EAE1150+1F2                                                  loc_14EAE1342:                          ; CODE XREF: sub_14EAE1150+161↑j
        sub_14EAE1150+1F2  48 8B 74 24 40                                                  mov     rsi, [rsp+40h]
        sub_14EAE1150+1F7  49 83 C4 10                                                     add     r12, 10h        ; Add
        sub_14EAE1150+1FB  48 83 AC 24 D8 00 00 00 01                                      sub     qword ptr [rsp+0D8h], 1 ; Integer Subtraction
        sub_14EAE1150+204  0F 85 86 FE FF FF                                               jnz     loc_14EAE11E0   ; Jump if Not Zero (ZF=0)
        sub_14EAE1150+20A  48 8B 5C 24 48                                                  mov     rbx, [rsp+48h]
        sub_14EAE1150+20F  4C 8B 7C 24 78                                                  mov     r15, [rsp+78h]
        sub_14EAE1150+214  8B F3                                                           mov     esi, ebx
        sub_14EAE1150+216  4C 8B B4 24 80 00 00 00                                         mov     r14, [rsp+80h]
        sub_14EAE1150+21E  4C 8B A4 24 88 00 00 00                                         mov     r12, [rsp+88h]
        sub_14EAE1150+226  48 8B BC 24 C0 00 00 00                                         mov     rdi, [rsp+0C0h]
        sub_14EAE1150+22E
        sub_14EAE1150+22E                                                  loc_14EAE137E:                          ; CODE XREF: sub_14EAE1150+52↑j
        sub_14EAE1150+22E  48 8D 8C 24 C0 00 00 00                                         lea     rcx, [rsp+0C0h] ; Load Effective Address
        sub_14EAE1150+236  FF 15 44 9B A9 01                                               call    cs:qword_15057AED0 ; Indirect Call Near Procedure
        sub_14EAE1150+23C  0F 57 F6                                                        xorps   xmm6, xmm6      ; Bitwise Logical XOR for Single-FP Data
        sub_14EAE1150+23F  F2 48 0F 2A B4 24 C0 00 00 00                                   cvtsi2sd xmm6, qword ptr [rsp+0C0h] ; Convert Doubleword Integer to Scalar Double-Precision Floating-Point Value
        sub_14EAE1150+249  F2 0F 59 35 FF 33 84 08                                         mulsd   xmm6, cs:qword_1573247A0 ; Multiply Scalar Double-Precision Floating-Point Values
        sub_14EAE1150+251  F2 0F 5C F7                                                     subsd   xmm6, xmm7      ; Subtract Scalar Double-Precision Floating-Point Values
        sub_14EAE1150+255  F2 0F 59 35 5B BC BE 01                                         mulsd   xmm6, cs:qword_1506CD008 ; Multiply Scalar Double-Precision Floating-Point Values
        sub_14EAE1150+25D  E8 CE 89 C4 FF                                                  call    sub_14E729D80   ; Call Procedure
        sub_14EAE1150+262  0F 28 7C 24 50                                                  movaps  xmm7, xmmword ptr [rsp+50h] ; Move Aligned Four Packed Single-FP
        sub_14EAE1150+267  0F 57 C9                                                        xorps   xmm1, xmm1      ; Bitwise Logical XOR for Single-FP Data
        sub_14EAE1150+26A  F3 0F 5A C8                                                     cvtss2sd xmm1, xmm0     ; Covert Scalar Single-Precision Floating-Point Value to Scalar Double-Precision Floating-Point Value
        sub_14EAE1150+26E  66 0F 2F F1                                                     comisd  xmm6, xmm1      ; Compare Scalar Ordered Double-Precision Floating-Point Values and Set EFLAGS
        sub_14EAE1150+272  0F 82 AC 00 00 00                                               jb      loc_14EAE1474   ; Jump if Below (CF=1)
        sub_14EAE1150+278  80 3D 59 48 A8 08 03                                            cmp     cs:byte_157565C28, 3 ; Compare Two Operands
        sub_14EAE1150+27F  72 34                                                           jb      short loc_14EAE1405 ; Jump if Below (CF=1)
        sub_14EAE1150+281  89 74 24 30                                                     mov     [rsp+30h], esi
        sub_14EAE1150+285  48 8D 05 14 E9 17 06                                            lea     rax, aUengineTickdef ; Load Effective Address
        sub_14EAE1150+28C  F2 0F 11 74 24 28                                               movsd   qword ptr [rsp+28h], xmm6 ; Move Scalar Double-Precision Floating-Point Values
        sub_14EAE1150+292  4C 8D 05 43 48 A8 08                                            lea     r8, unk_157565C2C ; Load Effective Address
        sub_14EAE1150+299  41 B9 03 00 00 00                                               mov     r9d, 3
        sub_14EAE1150+29F  48 89 44 24 20                                                  mov     [rsp+20h], rax
        sub_14EAE1150+2A4  BA C7 09 00 00                                                  mov     edx, 9C7h
        sub_14EAE1150+2A9  48 8D 0D 60 73 BE 01                                            lea     rcx, aUnknown   ; Load Effective Address
        sub_14EAE1150+2B0  E8 2B 7D D4 FD                                                  call    sub_14C829130   ; Call Procedure
        sub_14EAE1150+2B5
        sub_14EAE1150+2B5                                                  loc_14EAE1405:                          ; CODE XREF: sub_14EAE1150+27F↑j
        sub_14EAE1150+2B5  48 85 DB                                                        test    rbx, rbx        ; Logical Compare
        sub_14EAE1150+2B8  7E 6A                                                           jle     short loc_14EAE1474 ; Jump if Less or Equal (ZF=1 | SF!=OF)
        sub_14EAE1150+2BA  48 8D 2D 6F A6 34 02                                            lea     rbp, aS_39      ; Load Effective Address
        sub_14EAE1150+2C1


╭────────────────────────────────╮
│   📢 Uwolrd_37 [xor al, 0x37]  │
╰────────────────────────────────╯ 
  ⎜──────────── AobBase // "48 8B 15 ? ? ? ? EB ? 48 8B ? ? ? ? ? 0F B6 ? ? ? ? ? 48 89 8C ? ? ? ? ? 34 ? 48 C1 ? ? 80 "
  ⎜─────────Address									Function						Instruction
  ⎜─────────.text:000000014DB9D1CE			sub_14DB9D100		mov     rdx, cs:qword_156A19C78   (FunBaseOffsetLavel)
  ⎜─────────.text:000000014E209414			sub_14E209110			mov     rdx, cs:qword_156A19C78 (FunBaseOffsetArray)
  ⎜
  ❖ 💻UworldZone[0x3FE]:
  ⎜─Aob_Uworld [mov rdx, cs:qword_156A19C78]-> "48 8B 15 ?? ?? ?? ?? EB 35 48 8B 0D ?? ?? ?? ?? 0F B6 05 ?? ?? ?? ?? 48 89 8C 24 50 01 00 00 34 37 48 C1 E9 08 80 F1 37 88 84 24 51 01 00 00 88 8C 24 56 01 00 00 48 8B 94 24 50 01 00 00 48 8D 77 36"
  ⎜───Aob_UworldEncorePtr[mov rcx, cs:qword_156A1BC78]->  "48 8B 0D ?? ?? ?? ?? 0F B6 05 ?? ?? ?? ?? 48 89 8C 24 50 01 00 00 34 37 48 C1 E9 08 80 F1 37 88 84 24 51 01 00 00 88 8C 24 56 01 00 00 48 8B 94 24 50 01 00 00 48 8D 77 36"
  ⎜──────Aob_UworldEncorePtr(Actor 6)[ movzx eax, byte ptr cs:qword_156A1BC78+6]-> "0F B6 05 ?? ?? ?? ?? 48 89 8C 24 50 01 00 00 34 37 48 C1 E9 08 80 F1 37 88 84 24 51 01 00 00 88 8C 24 56 01 00 00 48 8B 94 24 50 01 00 00 48 8D 77 36"
  ❖ 💻UworldZone[0x010++]:
  ⎜─Aob_Uworld [mov rdx, cs:qword_156A19C78]->"48 8B 15 ?? ?? ?? ?? EB 35 48 8B 0D ?? ?? ?? ?? 0F B6 05 ?? ?? ?? ?? 48 89 8C 24 50 01 00 00 34 37 48 C1 E9 08 80 F1 37 88 84 24 51 01 00 00 88 8C 24 56 01 00 00 48 8B 94 24 50 01 00 00 48 8B 86 F8 00 00 00"
  ⎜───Aob_UworldEncorePtr [mov rcx, cs:qword_156A1BC78]-> "48 8B 0D ?? ?? ?? ?? 0F B6 05 ?? ?? ?? ?? 48 89 8C 24 50 01 00 00 34 37 48 C1 E9 08 80 F1 37 88 84 24 51 01 00 00 88 8C 24 56 01 00 00 48 8B 94 24 50 01 00 00 48 8B 86 F8 00 00 00"
  ⎜──────Aob_UworldEncorePtr(Actor 6)[movzx eax, byte ptr cs:qword_156A1BC78+6]-> "0F B6 05 ?? ?? ?? ?? 48 89 8C 24 50 01 00 00 34 37 48 C1 E9 08 80 F1 37 88 84 24 51 01 00 00 88 8C 24 56 01 00 00 48 8B 94 24 50 01 00 00 48 8B 86 F8 00 00 00"
   
   
   
   ⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐❖ 💻UworldZone[0x3FE++]AsmMini:⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐
   
   
   
    
	        
   
 📌Get AddressFunArrayLavelBase_14E209110_+ 0x304    .text:000000014E209414	sub_14E209110	mov     rdx, cs:qword_156A19C78  sub_14E209110 + 304  48 8B 15 5D 08 81 08           
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
 
 ⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐❖ 💻UworldZone[0x010++]AsmMini:⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐⭐
     
📌Get Address .text:000000014DB9D1CE	sub_14DB9D100	mov     rdx, cs:qword_156A19C78
			sub_14DB9D100+CE   48 8B 15 A3 CA E7 08                                            mov     rdx, cs:qword_156A19C78
			sub_14DB9D100+D5   EB 35                                                           jmp     short loc_14DB9D20C ; Jump
			sub_14DB9D100+D7                                                   ; ---------------------------------------------------------------------------
			sub_14DB9D100+D7
			sub_14DB9D100+D7                                                   loc_14DB9D1D7:                          ; CODE XREF: sub_14DB9D100+CC↑j
			sub_14DB9D100+D7   48 8B 0D 9A EA E7 08                                            mov     rcx, cs:qword_156A1BC78
			sub_14DB9D100+DE   0F B6 05 99 EA E7 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
			sub_14DB9D100+E5   48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
			sub_14DB9D100+ED   34 37                                                           xor     al, 37h         ; Logical Exclusive OR
			sub_14DB9D100+EF   48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
			sub_14DB9D100+F3   80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
			sub_14DB9D100+F6   88 84 24 51 01 00 00                                            mov     [rsp+151h], al
			sub_14DB9D100+FD   88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
			sub_14DB9D100+104  48 8B 94 24 50 01 00 00                                         mov     rdx, [rsp+150h]
			sub_14DB9D100+10C
			sub_14DB9D100+10C                                                  loc_14DB9D20C:                          ; CODE XREF: sub_14DB9D100+D5↑j
			sub_14DB9D100+10C  48 8B 86 F8 00 00 00                                            mov     rax, [rsi+0F8h]
			sub_14DB9D100+113  0F 57 F6                                                        xorps   xmm6, xmm6      ; Bitwise Logical XOR for Single-FP Data
			sub_14DB9D100+116  48 8B 88 38 04 00 00                                            mov     rcx, [rax+438h]
			sub_14DB9D100+11D  48 89 8A 20 08 00 00                                            mov     [rdx+820h], rcx
			sub_14DB9D100+124  8B 86 FC 02 00 00                                               mov     eax, [rsi+2FCh]
			sub_14DB9D100+12A  F3 48 0F 2A F0                                                  cvtsi2ss xmm6, rax      ; Scalar signed INT32 to Single-FP conversion
			sub_14DB9D100+12F  F3 0F 59 B6 F0 02 00 00                                         mulss   xmm6, dword ptr [rsi+2F0h] ; Scalar Single-FP Multiply
			sub_14DB9D100+137  FF 15 33 BA E7 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
			sub_14DB9D100+13D  84 C0                                                           test    al, al          ; Logical Compare
			sub_14DB9D100+13F  75 09                                                           jnz     short loc_14DB9D24A ; Jump if Not Zero (ZF=0)
			sub_14DB9D100+141  48 8B 05 30 CA E7 08                                            mov     rax, cs:qword_156A19C78
			sub_14DB9D100+148  EB 35                                                           jmp     short loc_14DB9D27F ; Jump
			sub_14DB9D100+14A                                                  ; ---------------------------------------------------------------------------

 
 
```



---
Asm full Asm for GetOffset AddrImm
---



```asm


//Uworld_36_0x197 000000014EAE12E7
/*

    .text:000000014EAE114B CC CC CC CC CC                                                  align 10h
    sub_14EAE1150
    sub_14EAE1150                                                      ; =============== S U B R O U T I N E =======================================
    sub_14EAE1150
    sub_14EAE1150
    sub_14EAE1150                                                      ; __int64 __fastcall sub_14EAE1150(__int64)
    sub_14EAE1150                                                      sub_14EAE1150   proc near               ; CODE XREF: sub_140A83840:loc_140A8506B↑p
    sub_14EAE1150
    sub_14EAE1150                                                      var_98          = qword ptr -98h
    sub_14EAE1150                                                      var_90          = qword ptr -90h
    sub_14EAE1150                                                      var_88          = dword ptr -88h
    sub_14EAE1150                                                      var_78          = qword ptr -78h
    sub_14EAE1150                                                      var_70          = qword ptr -70h
    sub_14EAE1150                                                      var_68          = xmmword ptr -68h
    sub_14EAE1150                                                      var_58          = xmmword ptr -58h
    sub_14EAE1150                                                      var_40          = qword ptr -40h
    sub_14EAE1150                                                      var_38          = qword ptr -38h
    sub_14EAE1150                                                      var_30          = qword ptr -30h
    sub_14EAE1150                                                      arg_0           = qword ptr  8
    sub_14EAE1150                                                      arg_8           = qword ptr  10h
    sub_14EAE1150                                                      arg_10          = qword ptr  18h
    sub_14EAE1150                                                      arg_18          = qword ptr  20h
    sub_14EAE1150
    sub_14EAE1150      48 8B C4                                                        mov     rax, rsp
    sub_14EAE1150+3    48 89 48 08                                                     mov     [rax+8], rcx
    sub_14EAE1150+7    53                                                              push    rbx
    sub_14EAE1150+8    55                                                              push    rbp
    sub_14EAE1150+9    56                                                              push    rsi
    sub_14EAE1150+A    57                                                              push    rdi
    sub_14EAE1150+B    41 55                                                           push    r13
    sub_14EAE1150+D    48 81 EC 90 00 00 00                                            sub     rsp, 90h        ; Integer Subtraction
    sub_14EAE1150+14   48 8B F9                                                        mov     rdi, rcx
    sub_14EAE1150+17   0F 29 70 A8                                                     movaps  xmmword ptr [rax-58h], xmm6 ; Move Aligned Four Packed Single-FP
    sub_14EAE1150+1B   48 8D 48 10                                                     lea     rcx, [rax+10h]  ; Load Effective Address
    sub_14EAE1150+1F   0F 29 78 98                                                     movaps  xmmword ptr [rax-68h], xmm7 ; Move Aligned Four Packed Single-FP
    sub_14EAE1150+23   FF 15 57 9D A9 01                                               call    cs:qword_15057AED0 ; Indirect Call Near Procedure
    sub_14EAE1150+29   48 63 B7 20 09 00 00                                            movsxd  rsi, dword ptr [rdi+920h] ; Move with Sign-Extend Doubleword
    sub_14EAE1150+30   0F 57 FF                                                        xorps   xmm7, xmm7      ; Bitwise Logical XOR for Single-FP Data
    sub_14EAE1150+33   F2 48 0F 2A BC 24 C8 00 00 00                                   cvtsi2sd xmm7, qword ptr [rsp+0C8h] ; Convert Doubleword Integer to Scalar Double-Precision Floating-Point Value
    sub_14EAE1150+3D   45 33 ED                                                        xor     r13d, r13d      ; Logical Exclusive OR
    sub_14EAE1150+40   48 8B DE                                                        mov     rbx, rsi
    sub_14EAE1150+43   48 89 5C 24 48                                                  mov     [rsp+48h], rbx
    sub_14EAE1150+48   F2 0F 59 3D 00 36 84 08                                         mulsd   xmm7, cs:qword_1573247A0 ; Multiply Scalar Double-Precision Floating-Point Values
    sub_14EAE1150+50   85 F6                                                           test    esi, esi        ; Logical Compare
    sub_14EAE1150+52   0F 8E D6 01 00 00                                               jle     loc_14EAE137E   ; Jump if Less or Equal (ZF=1 | SF!=OF)
    sub_14EAE1150+58   4C 89 A4 24 88 00 00 00                                         mov     [rsp+88h], r12
    sub_14EAE1150+60   48 8D B7 18 09 00 00                                            lea     rsi, [rdi+918h] ; Load Effective Address
    sub_14EAE1150+67   4C 89 B4 24 80 00 00 00                                         mov     [rsp+80h], r14
    sub_14EAE1150+6F   48 8D AF F0 0D 00 00                                            lea     rbp, [rdi+0DF0h] ; Load Effective Address
    sub_14EAE1150+76   48 89 74 24 40                                                  mov     [rsp+40h], rsi
    sub_14EAE1150+7B   45 8B E5                                                        mov     r12d, r13d
    sub_14EAE1150+7E   4C 89 7C 24 78                                                  mov     [rsp+78h], r15
    sub_14EAE1150+83   48 89 9C 24 D8 00 00 00                                         mov     [rsp+0D8h], rbx
    sub_14EAE1150+8B   0F 1F 44 00 00                                                  nop     dword ptr [rax+rax+00h] ; No Operation
    sub_14EAE1150+90
    sub_14EAE1150+90                                                   loc_14EAE11E0:                          ; CODE XREF: sub_14EAE1150+204↓j
    sub_14EAE1150+90   41 8B DD                                                        mov     ebx, r13d
    sub_14EAE1150+93
    sub_14EAE1150+93                                                   loc_14EAE11E3:                          ; CODE XREF: sub_14EAE1150+EF↓j
    sub_14EAE1150+93   85 DB                                                           test    ebx, ebx        ; Logical Compare
    sub_14EAE1150+95   0F 88 CB 00 00 00                                               js      loc_14EAE12B6   ; Jump if Sign (SF=1)
    sub_14EAE1150+9B   3B 5D 08                                                        cmp     ebx, [rbp+8]    ; Compare Two Operands
    sub_14EAE1150+9E   0F 8D C2 00 00 00                                               jge     loc_14EAE12B6   ; Jump if Greater or Equal (SF=OF)
    sub_14EAE1150+A4   48 8B CD                                                        mov     rcx, rbp
    sub_14EAE1150+A7   FF 15 73 95 D6 07                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14EAE1150+AD   48 63 FB                                                        movsxd  rdi, ebx        ; Move with Sign-Extend Doubleword
    sub_14EAE1150+B0   48 8B 04 F8                                                     mov     rax, [rax+rdi*8]
    sub_14EAE1150+B4   80 38 06                                                        cmp     byte ptr [rax], 6 ; Compare Two Operands
    sub_14EAE1150+B7   74 34                                                           jz      short loc_14EAE123D ; Jump if Zero (ZF=1)
    sub_14EAE1150+B9   48 8B CD                                                        mov     rcx, rbp
    sub_14EAE1150+BC   FF 15 5E 95 D6 07                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14EAE1150+C2   48 8B 0C F8                                                     mov     rcx, [rax+rdi*8]
    sub_14EAE1150+C6   4C 39 A9 18 02 00 00                                            cmp     [rcx+218h], r13 ; Compare Two Operands
    sub_14EAE1150+CD   74 1E                                                           jz      short loc_14EAE123D ; Jump if Zero (ZF=1)
    sub_14EAE1150+CF   48 8B CD                                                        mov     rcx, rbp
    sub_14EAE1150+D2   FF 15 48 95 D6 07                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14EAE1150+D8   48 8B 0C F8                                                     mov     rcx, [rax+rdi*8]
    sub_14EAE1150+DC   48 8B 89 18 02 00 00                                            mov     rcx, [rcx+218h]
    sub_14EAE1150+E3   E8 28 38 91 FF                                                  call    sub_14E3F4A60   ; Call Procedure
    sub_14EAE1150+E8   48 85 C0                                                        test    rax, rax        ; Logical Compare
    sub_14EAE1150+EB   75 04                                                           jnz     short loc_14EAE1241 ; Jump if Not Zero (ZF=0)
    sub_14EAE1150+ED
    sub_14EAE1150+ED                                                   loc_14EAE123D:                          ; CODE XREF: sub_14EAE1150+B7↑j
    sub_14EAE1150+ED                                                                                           ; sub_14EAE1150+CD↑j
    sub_14EAE1150+ED   FF C3                                                           inc     ebx             ; Increment by 1
    sub_14EAE1150+EF   EB A2                                                           jmp     short loc_14EAE11E3 ; Jump
    sub_14EAE1150+F1                                                   ; ---------------------------------------------------------------------------
    sub_14EAE1150+F1
    sub_14EAE1150+F1                                                   loc_14EAE1241:                          ; CODE XREF: sub_14EAE1150+EB↑j
    sub_14EAE1150+F1   48 8B CD                                                        mov     rcx, rbp
    sub_14EAE1150+F4   FF 15 26 95 D6 07                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14EAE1150+FA   48 8B 0C F8                                                     mov     rcx, [rax+rdi*8]
    sub_14EAE1150+FE   48 8B 89 18 02 00 00                                            mov     rcx, [rcx+218h]
    sub_14EAE1150+105  E8 06 38 91 FF                                                  call    sub_14E3F4A60   ; Call Procedure
    sub_14EAE1150+10A  4C 8B F8                                                        mov     r15, rax
    sub_14EAE1150+10D  48 85 C0                                                        test    rax, rax        ; Logical Compare
    sub_14EAE1150+110  74 54                                                           jz      short loc_14EAE12B6 ; Jump if Zero (ZF=1)
    sub_14EAE1150+112  48 8B CE                                                        mov     rcx, rsi
    sub_14EAE1150+115  FF 15 05 95 D6 07                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14EAE1150+11B  49 03 C4                                                        add     rax, r12        ; Add
    sub_14EAE1150+11E  44 39 68 08                                                     cmp     [rax+8], r13d   ; Compare Two Operands
    sub_14EAE1150+122  74 0E                                                           jz      short loc_14EAE1282 ; Jump if Zero (ZF=1)
    sub_14EAE1150+124  48 8B C8                                                        mov     rcx, rax
    sub_14EAE1150+127  FF 15 F3 94 D6 07                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14EAE1150+12D  4C 8B F0                                                        mov     r14, rax
    sub_14EAE1150+130  EB 07                                                           jmp     short loc_14EAE1289 ; Jump
    sub_14EAE1150+132                                                  ; ---------------------------------------------------------------------------
    sub_14EAE1150+132
    sub_14EAE1150+132                                                  loc_14EAE1282:                          ; CODE XREF: sub_14EAE1150+122↑j
    sub_14EAE1150+132  4C 8D 35 CF 6E BE 01                                            lea     r14, word_1506C8158 ; Load Effective Address
    sub_14EAE1150+139
    sub_14EAE1150+139                                                  loc_14EAE1289:                          ; CODE XREF: sub_14EAE1150+130↑j
    sub_14EAE1150+139  49 8B 77 28                                                     mov     rsi, [r15+28h]
    sub_14EAE1150+13D  E8 2E 15 DC FD                                                  call    sub_14C8A27C0   ; Call Procedure
    sub_14EAE1150+142  49 8B 17                                                        mov     rdx, [r15]
    sub_14EAE1150+145  49 8B CF                                                        mov     rcx, r15
    sub_14EAE1150+148  48 8B D8                                                        mov     rbx, rax
    sub_14EAE1150+14B  FF 92 58 01 00 00                                               call    qword ptr [rdx+158h] ; Indirect Call Near Procedure
    sub_14EAE1150+151  4C 8B CB                                                        mov     r9, rbx
    sub_14EAE1150+154  49 8D 4F 28                                                     lea     rcx, [r15+28h]  ; Load Effective Address
    sub_14EAE1150+158  48 8B D0                                                        mov     rdx, rax
    sub_14EAE1150+15B  4D 8B C6                                                        mov     r8, r14
    sub_14EAE1150+15E  FF 56 08                                                        call    qword ptr [rsi+8] ; Indirect Call Near Procedure
    sub_14EAE1150+161  E9 8C 00 00 00                                                  jmp     loc_14EAE1342   ; Jump
    sub_14EAE1150+166                                                  ; ---------------------------------------------------------------------------
    sub_14EAE1150+166
    sub_14EAE1150+166                                                  loc_14EAE12B6:                          ; CODE XREF: sub_14EAE1150+95↑j
    sub_14EAE1150+166                                                                                          ; sub_14EAE1150+9E↑j ...
    sub_14EAE1150+166  48 8B CE                                                        mov     rcx, rsi
    sub_14EAE1150+169  FF 15 B1 94 D6 07                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14EAE1150+16F  49 03 C4                                                        add     rax, r12        ; Add
    sub_14EAE1150+172  44 39 68 08                                                     cmp     [rax+8], r13d   ; Compare Two Operands
    sub_14EAE1150+176  74 0E                                                           jz      short loc_14EAE12D6 ; Jump if Zero (ZF=1)
    sub_14EAE1150+178  48 8B C8                                                        mov     rcx, rax
    sub_14EAE1150+17B  FF 15 9F 94 D6 07                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14EAE1150+181  4C 8B F0                                                        mov     r14, rax
    sub_14EAE1150+184  EB 07                                                           jmp     short loc_14EAE12DD ; Jump
    sub_14EAE1150+186                                                  ; ---------------------------------------------------------------------------
    sub_14EAE1150+186
    sub_14EAE1150+186                                                  loc_14EAE12D6:                          ; CODE XREF: sub_14EAE1150+176↑j
    sub_14EAE1150+186  4C 8D 35 7B 6E BE 01                                            lea     r14, word_1506C8158 ; Load Effective Address
    sub_14EAE1150+18D
    sub_14EAE1150+18D                                                  loc_14EAE12DD:                          ; CODE XREF: sub_14EAE1150+184↑j
    sub_14EAE1150+18D  FF 15 CD BC F3 07                                               call    cs:qword_156A1CFB0 ; Indirect Call Near Procedure
    sub_14EAE1150+193  84 C0                                                           test    al, al          ; Logical Compare
    sub_14EAE1150+195  75 09                                                           jnz     short loc_14EAE12F0 ; Jump if Not Zero (ZF=0)
    sub_14EAE1150+197  48 8B 35 CA CC F3 07                                            mov     rsi, cs:qword_156A1DFB8
    sub_14EAE1150+19E  EB 31                                                           jmp     short loc_14EAE1321 ; Jump
    sub_14EAE1150+1A0                                                  ; ---------------------------------------------------------------------------
    sub_14EAE1150+1A0
    sub_14EAE1150+1A0                                                  loc_14EAE12F0:                          ; CODE XREF: sub_14EAE1150+195↑j
    sub_14EAE1150+1A0  48 8B 0D C1 EC F3 07                                            mov     rcx, qword ptr cs:unk_156A1FFB8
    sub_14EAE1150+1A7  0F B6 05 C1 EC F3 07                                            movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
    sub_14EAE1150+1AE  48 89 8C 24 D0 00 00 00                                         mov     [rsp+0D0h], rcx
    sub_14EAE1150+1B6  34 36                                                           xor     al, 36h         ; Logical Exclusive OR
    sub_14EAE1150+1B8  80 F1 36                                                        xor     cl, 36h         ; Logical Exclusive OR
    sub_14EAE1150+1BB  88 84 24 D0 00 00 00                                            mov     [rsp+0D0h], al
    sub_14EAE1150+1C2  88 8C 24 D7 00 00 00                                            mov     [rsp+0D7h], cl
    sub_14EAE1150+1C9  48 8B B4 24 D0 00 00 00                                         mov     rsi, [rsp+0D0h]
    sub_14EAE1150+1D1
    sub_14EAE1150+1D1                                                  loc_14EAE1321:                          ; CODE XREF: sub_14EAE1150+19E↑j
    sub_14EAE1150+1D1  48 8B 9C 24 C0 00 00 00                                         mov     rbx, [rsp+0C0h]
    sub_14EAE1150+1D9  48 8B 7B 28                                                     mov     rdi, [rbx+28h]
    sub_14EAE1150+1DD  E8 8E 14 DC FD                                                  call    sub_14C8A27C0   ; Call Procedure
    sub_14EAE1150+1E2  4C 8B C8                                                        mov     r9, rax
    sub_14EAE1150+1E5  48 8D 4B 28                                                     lea     rcx, [rbx+28h]  ; Load Effective Address
    sub_14EAE1150+1E9  4D 8B C6                                                        mov     r8, r14
    sub_14EAE1150+1EC  48 8B D6                                                        mov     rdx, rsi
    sub_14EAE1150+1EF  FF 57 08                                                        call    qword ptr [rdi+8] ; Indirect Call Near Procedure
    sub_14EAE1150+1F2
    sub_14EAE1150+1F2                                                  loc_14EAE1342:                          ; CODE XREF: sub_14EAE1150+161↑j
    sub_14EAE1150+1F2  48 8B 74 24 40                                                  mov     rsi, [rsp+40h]
    sub_14EAE1150+1F7  49 83 C4 10                                                     add     r12, 10h        ; Add
    sub_14EAE1150+1FB  48 83 AC 24 D8 00 00 00 01                                      sub     qword ptr [rsp+0D8h], 1 ; Integer Subtraction
    sub_14EAE1150+204  0F 85 86 FE FF FF                                               jnz     loc_14EAE11E0   ; Jump if Not Zero (ZF=0)
    sub_14EAE1150+20A  48 8B 5C 24 48                                                  mov     rbx, [rsp+48h]
    sub_14EAE1150+20F  4C 8B 7C 24 78                                                  mov     r15, [rsp+78h]
    sub_14EAE1150+214  8B F3                                                           mov     esi, ebx
    sub_14EAE1150+216  4C 8B B4 24 80 00 00 00                                         mov     r14, [rsp+80h]
    sub_14EAE1150+21E  4C 8B A4 24 88 00 00 00                                         mov     r12, [rsp+88h]
    sub_14EAE1150+226  48 8B BC 24 C0 00 00 00                                         mov     rdi, [rsp+0C0h]
    sub_14EAE1150+22E
    sub_14EAE1150+22E                                                  loc_14EAE137E:                          ; CODE XREF: sub_14EAE1150+52↑j
    sub_14EAE1150+22E  48 8D 8C 24 C0 00 00 00                                         lea     rcx, [rsp+0C0h] ; Load Effective Address
    sub_14EAE1150+236  FF 15 44 9B A9 01                                               call    cs:qword_15057AED0 ; Indirect Call Near Procedure
    sub_14EAE1150+23C  0F 57 F6                                                        xorps   xmm6, xmm6      ; Bitwise Logical XOR for Single-FP Data
    sub_14EAE1150+23F  F2 48 0F 2A B4 24 C0 00 00 00                                   cvtsi2sd xmm6, qword ptr [rsp+0C0h] ; Convert Doubleword Integer to Scalar Double-Precision Floating-Point Value
    sub_14EAE1150+249  F2 0F 59 35 FF 33 84 08                                         mulsd   xmm6, cs:qword_1573247A0 ; Multiply Scalar Double-Precision Floating-Point Values
    sub_14EAE1150+251  F2 0F 5C F7                                                     subsd   xmm6, xmm7      ; Subtract Scalar Double-Precision Floating-Point Values
    sub_14EAE1150+255  F2 0F 59 35 5B BC BE 01                                         mulsd   xmm6, cs:qword_1506CD008 ; Multiply Scalar Double-Precision Floating-Point Values
    sub_14EAE1150+25D  E8 CE 89 C4 FF                                                  call    sub_14E729D80   ; Call Procedure
    sub_14EAE1150+262  0F 28 7C 24 50                                                  movaps  xmm7, xmmword ptr [rsp+50h] ; Move Aligned Four Packed Single-FP
    sub_14EAE1150+267  0F 57 C9                                                        xorps   xmm1, xmm1      ; Bitwise Logical XOR for Single-FP Data
    sub_14EAE1150+26A  F3 0F 5A C8                                                     cvtss2sd xmm1, xmm0     ; Covert Scalar Single-Precision Floating-Point Value to Scalar Double-Precision Floating-Point Value
    sub_14EAE1150+26E  66 0F 2F F1                                                     comisd  xmm6, xmm1      ; Compare Scalar Ordered Double-Precision Floating-Point Values and Set EFLAGS
    sub_14EAE1150+272  0F 82 AC 00 00 00                                               jb      loc_14EAE1474   ; Jump if Below (CF=1)
    sub_14EAE1150+278  80 3D 59 48 A8 08 03                                            cmp     cs:byte_157565C28, 3 ; Compare Two Operands
    sub_14EAE1150+27F  72 34                                                           jb      short loc_14EAE1405 ; Jump if Below (CF=1)
    sub_14EAE1150+281  89 74 24 30                                                     mov     [rsp+30h], esi
    sub_14EAE1150+285  48 8D 05 14 E9 17 06                                            lea     rax, aUengineTickdef ; Load Effective Address
    sub_14EAE1150+28C  F2 0F 11 74 24 28                                               movsd   qword ptr [rsp+28h], xmm6 ; Move Scalar Double-Precision Floating-Point Values
    sub_14EAE1150+292  4C 8D 05 43 48 A8 08                                            lea     r8, unk_157565C2C ; Load Effective Address
    sub_14EAE1150+299  41 B9 03 00 00 00                                               mov     r9d, 3
    sub_14EAE1150+29F  48 89 44 24 20                                                  mov     [rsp+20h], rax
    sub_14EAE1150+2A4  BA C7 09 00 00                                                  mov     edx, 9C7h
    sub_14EAE1150+2A9  48 8D 0D 60 73 BE 01                                            lea     rcx, aUnknown   ; Load Effective Address
    sub_14EAE1150+2B0  E8 2B 7D D4 FD                                                  call    sub_14C829130   ; Call Procedure
    sub_14EAE1150+2B5
    sub_14EAE1150+2B5                                                  loc_14EAE1405:                          ; CODE XREF: sub_14EAE1150+27F↑j
    sub_14EAE1150+2B5  48 85 DB                                                        test    rbx, rbx        ; Logical Compare
    sub_14EAE1150+2B8  7E 6A                                                           jle     short loc_14EAE1474 ; Jump if Less or Equal (ZF=1 | SF!=OF)
    sub_14EAE1150+2BA  48 8D 2D 6F A6 34 02                                            lea     rbp, aS_39      ; Load Effective Address
    sub_14EAE1150+2C1
    sub_14EAE1150+2C1                                                  loc_14EAE1411:                          ; CODE XREF: sub_14EAE1150+322↓j
    sub_14EAE1150+2C1  80 3D 10 48 A8 08 03                                            cmp     cs:byte_157565C28, 3 ; Compare Two Operands
    sub_14EAE1150+2C8  72 50                                                           jb      short loc_14EAE146A ; Jump if Below (CF=1)
    sub_14EAE1150+2CA  48 8D 8F 18 09 00 00                                            lea     rcx, [rdi+918h] ; Load Effective Address
    sub_14EAE1150+2D1  FF 15 49 93 D6 07                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14EAE1150+2D7  49 03 C5                                                        add     rax, r13        ; Add
    sub_14EAE1150+2DA  83 78 08 00                                                     cmp     dword ptr [rax+8], 0 ; Compare Two Operands
    sub_14EAE1150+2DE  74 0B                                                           jz      short loc_14EAE143B ; Jump if Zero (ZF=1)
    sub_14EAE1150+2E0  48 8B C8                                                        mov     rcx, rax
    sub_14EAE1150+2E3  FF 15 37 93 D6 07                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14EAE1150+2E9  EB 07                                                           jmp     short loc_14EAE1442 ; Jump
    sub_14EAE1150+2EB                                                  ; ---------------------------------------------------------------------------
    sub_14EAE1150+2EB
    sub_14EAE1150+2EB                                                  loc_14EAE143B:                          ; CODE XREF: sub_14EAE1150+2DE↑j
    sub_14EAE1150+2EB  48 8D 05 16 6D BE 01                                            lea     rax, word_1506C8158 ; Load Effective Address
    sub_14EAE1150+2F2
    sub_14EAE1150+2F2                                                  loc_14EAE1442:                          ; CODE XREF: sub_14EAE1150+2E9↑j
    sub_14EAE1150+2F2  48 89 44 24 28                                                  mov     [rsp+28h], rax
    sub_14EAE1150+2F7  4C 8D 05 DE 47 A8 08                                            lea     r8, unk_157565C2C ; Load Effective Address
    sub_14EAE1150+2FE  41 B9 03 00 00 00                                               mov     r9d, 3
    sub_14EAE1150+304  48 89 6C 24 20                                                  mov     [rsp+20h], rbp
    sub_14EAE1150+309  BA CB 09 00 00                                                  mov     edx, 9CBh
    sub_14EAE1150+30E  48 8D 0D FB 72 BE 01                                            lea     rcx, aUnknown   ; Load Effective Address
    sub_14EAE1150+315  E8 C6 7C D4 FD                                                  call    sub_14C829130   ; Call Procedure
    sub_14EAE1150+31A
    sub_14EAE1150+31A                                                  loc_14EAE146A:                          ; CODE XREF: sub_14EAE1150+2C8↑j
    sub_14EAE1150+31A  49 83 C5 10                                                     add     r13, 10h        ; Add
    sub_14EAE1150+31E  48 83 EB 01                                                     sub     rbx, 1          ; Integer Subtraction
    sub_14EAE1150+322  75 9D                                                           jnz     short loc_14EAE1411 ; Jump if Not Zero (ZF=0)
    sub_14EAE1150+324
    sub_14EAE1150+324                                                  loc_14EAE1474:                          ; CODE XREF: sub_14EAE1150+272↑j
    sub_14EAE1150+324                                                                                          ; sub_14EAE1150+2B8↑j
    sub_14EAE1150+324  48 8D 8F 18 09 00 00                                            lea     rcx, [rdi+918h] ; Load Effective Address
    sub_14EAE1150+32B  41 B1 01                                                        mov     r9b, 1
    sub_14EAE1150+32E  44 8B C6                                                        mov     r8d, esi
    sub_14EAE1150+331  33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
    sub_14EAE1150+333  0F 28 74 24 60                                                  movaps  xmm6, xmmword ptr [rsp+60h] ; Move Aligned Four Packed Single-FP
    sub_14EAE1150+338  48 81 C4 90 00 00 00                                            add     rsp, 90h        ; Add
    sub_14EAE1150+33F  41 5D                                                           pop     r13
    sub_14EAE1150+341  5F                                                              pop     rdi
    sub_14EAE1150+342  5E                                                              pop     rsi
    sub_14EAE1150+343  5D                                                              pop     rbp
    sub_14EAE1150+344  5B                                                              pop     rbx
    sub_14EAE1150+345  E9 86 25 80 F2                                                  jmp     sub_1412E3A20   ; Jump
    sub_14EAE1150+345                                                  sub_14EAE1150   endp
    sub_14EAE1150+345
    sub_14EAE1150+345                                                  ; ---------------------------------------------------------------------------
    .text:000000014EAE149A CC CC CC CC CC CC                                               align 20h
    sub_14EAE14A0
*/


//Uworld_36_0xBD 0000000141CC39CD

/*
.text:0000000141CC3909 CC CC CC CC CC CC CC                                            align 10h
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
sub_141CC3BD0

*/


//Uworld_37_0x304 000000014E209414
/*
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
    sub_14E209700

*/





//Uworld_37_0x010 000000014DB9D1CE 

/*
    sub_14DB9D100
    sub_14DB9D100                                                      ; =============== S U B R O U T I N E =======================================
    sub_14DB9D100
    sub_14DB9D100
    sub_14DB9D100                                                      sub_14DB9D100   proc near               ; CODE XREF: sub_14DB919A0+5D3↑p
    sub_14DB9D100
    sub_14DB9D100                                                      var_118         = dword ptr -118h
    sub_14DB9D100                                                      var_114         = dword ptr -114h
    sub_14DB9D100                                                      var_108         = xmmword ptr -108h
    sub_14DB9D100                                                      var_F8          = xmmword ptr -0F8h
    sub_14DB9D100                                                      var_E0          = dword ptr -0E0h
    sub_14DB9D100                                                      var_D8          = xmmword ptr -0D8h
    sub_14DB9D100                                                      var_C8          = xmmword ptr -0C8h
    sub_14DB9D100                                                      var_B8          = xmmword ptr -0B8h
    sub_14DB9D100                                                      var_A8          = xmmword ptr -0A8h
    sub_14DB9D100                                                      var_98          = xmmword ptr -98h
    sub_14DB9D100                                                      var_88          = xmmword ptr -88h
    sub_14DB9D100                                                      var_78          = xmmword ptr -78h
    sub_14DB9D100                                                      var_68          = xmmword ptr -68h
    sub_14DB9D100                                                      var_58          = xmmword ptr -58h
    sub_14DB9D100                                                      var_48          = xmmword ptr -48h
    sub_14DB9D100                                                      var_38          = qword ptr -38h
    sub_14DB9D100                                                      var_30          = qword ptr -30h
    sub_14DB9D100                                                      var_28          = qword ptr -28h
    sub_14DB9D100                                                      var_20          = qword ptr -20h
    sub_14DB9D100                                                      arg_0           = qword ptr  8
    sub_14DB9D100                                                      arg_8           = qword ptr  10h
    sub_14DB9D100                                                      arg_10          = qword ptr  18h
    sub_14DB9D100                                                      arg_18          = qword ptr  20h
    sub_14DB9D100
    sub_14DB9D100      48 89 54 24 10                                                  mov     [rsp+10h], rdx
    sub_14DB9D100+5    53                                                              push    rbx
    sub_14DB9D100+6    56                                                              push    rsi
    sub_14DB9D100+7    41 54                                                           push    r12
    sub_14DB9D100+9    48 81 EC 20 01 00 00                                            sub     rsp, 120h       ; Integer Subtraction
    sub_14DB9D100+10   80 3D 81 B0 83 09 00                                            cmp     cs:byte_1573D8198, 0 ; Compare Two Operands
    sub_14DB9D100+17   48 8B F1                                                        mov     rsi, rcx
    sub_14DB9D100+1A   48 8B 1D 07 40 97 09                                            mov     rbx, cs:qword_157511128
    sub_14DB9D100+21   74 17                                                           jz      short loc_14DB9D13A ; Jump if Zero (ZF=1)
    sub_14DB9D100+23   FF 15 AF DD 9D 02                                               call    cs:qword_15057AED8 ; Indirect Call Near Procedure
    sub_14DB9D100+29   45 33 E4                                                        xor     r12d, r12d      ; Logical Exclusive OR
    sub_14DB9D100+2C   3B 05 56 B0 83 09                                               cmp     eax, cs:dword_1573D8188 ; Compare Two Operands
    sub_14DB9D100+32   41 8B CC                                                        mov     ecx, r12d
    sub_14DB9D100+35   0F 95 C1                                                        setnz   cl              ; Set Byte if Not Zero (ZF=0)
    sub_14DB9D100+38   EB 06                                                           jmp     short loc_14DB9D140 ; Jump
    sub_14DB9D100+3A                                                   ; ---------------------------------------------------------------------------
    sub_14DB9D100+3A
    sub_14DB9D100+3A                                                   loc_14DB9D13A:                          ; CODE XREF: sub_14DB9D100+21↑j
    sub_14DB9D100+3A   45 33 E4                                                        xor     r12d, r12d      ; Logical Exclusive OR
    sub_14DB9D100+3D   41 8B CC                                                        mov     ecx, r12d
    sub_14DB9D100+40
    sub_14DB9D100+40                                                   loc_14DB9D140:                          ; CODE XREF: sub_14DB9D100+38↑j
    sub_14DB9D100+40   83 3C 8B 00                                                     cmp     dword ptr [rbx+rcx*4], 0 ; Compare Two Operands
    sub_14DB9D100+44   0F 84 C2 07 00 00                                               jz      loc_14DB9D90C   ; Jump if Zero (ZF=1)
    sub_14DB9D100+4A   48 89 AC 24 40 01 00 00                                         mov     [rsp+140h], rbp
    sub_14DB9D100+52   48 89 BC 24 18 01 00 00                                         mov     [rsp+118h], rdi
    sub_14DB9D100+5A   4C 89 AC 24 10 01 00 00                                         mov     [rsp+110h], r13
    sub_14DB9D100+62   4C 89 B4 24 08 01 00 00                                         mov     [rsp+108h], r14
    sub_14DB9D100+6A   4C 89 BC 24 00 01 00 00                                         mov     [rsp+100h], r15
    sub_14DB9D100+72   0F 29 B4 24 F0 00 00 00                                         movaps  xmmword ptr [rsp+0F0h], xmm6 ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+7A   0F 29 BC 24 E0 00 00 00                                         movaps  xmmword ptr [rsp+0E0h], xmm7 ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+82   44 0F 29 84 24 D0 00 00 00                                      movaps  xmmword ptr [rsp+0D0h], xmm8 ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+8B   44 0F 29 8C 24 C0 00 00 00                                      movaps  xmmword ptr [rsp+0C0h], xmm9 ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+94   44 0F 29 94 24 B0 00 00 00                                      movaps  xmmword ptr [rsp+0B0h], xmm10 ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+9D   44 0F 29 9C 24 A0 00 00 00                                      movaps  xmmword ptr [rsp+0A0h], xmm11 ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+A6   44 0F 29 A4 24 90 00 00 00                                      movaps  xmmword ptr [rsp+90h], xmm12 ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+AF   44 0F 29 AC 24 80 00 00 00                                      movaps  xmmword ptr [rsp+80h], xmm13 ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+B8   44 0F 29 74 24 70                                               movaps  xmmword ptr [rsp+70h], xmm14 ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+BE   44 0F 29 7C 24 60                                               movaps  xmmword ptr [rsp+60h], xmm15 ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+C4   FF 15 A6 BA E7 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
    sub_14DB9D100+CA   84 C0                                                           test    al, al          ; Logical Compare
    sub_14DB9D100+CC   75 09                                                           jnz     short loc_14DB9D1D7 ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+CE   48 8B 15 A3 CA E7 08                                            mov     rdx, cs:qword_156A19C78
    sub_14DB9D100+D5   EB 35                                                           jmp     short loc_14DB9D20C ; Jump
    sub_14DB9D100+D7                                                   ; ---------------------------------------------------------------------------
    sub_14DB9D100+D7
    sub_14DB9D100+D7                                                   loc_14DB9D1D7:                          ; CODE XREF: sub_14DB9D100+CC↑j
    sub_14DB9D100+D7   48 8B 0D 9A EA E7 08                                            mov     rcx, cs:qword_156A1BC78
    sub_14DB9D100+DE   0F B6 05 99 EA E7 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
    sub_14DB9D100+E5   48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
    sub_14DB9D100+ED   34 37                                                           xor     al, 37h         ; Logical Exclusive OR
    sub_14DB9D100+EF   48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
    sub_14DB9D100+F3   80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
    sub_14DB9D100+F6   88 84 24 51 01 00 00                                            mov     [rsp+151h], al
    sub_14DB9D100+FD   88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
    sub_14DB9D100+104  48 8B 94 24 50 01 00 00                                         mov     rdx, [rsp+150h]
    sub_14DB9D100+10C
    sub_14DB9D100+10C                                                  loc_14DB9D20C:                          ; CODE XREF: sub_14DB9D100+D5↑j
    sub_14DB9D100+10C  48 8B 86 F8 00 00 00                                            mov     rax, [rsi+0F8h]
    sub_14DB9D100+113  0F 57 F6                                                        xorps   xmm6, xmm6      ; Bitwise Logical XOR for Single-FP Data
    sub_14DB9D100+116  48 8B 88 38 04 00 00                                            mov     rcx, [rax+438h]
    sub_14DB9D100+11D  48 89 8A 20 08 00 00                                            mov     [rdx+820h], rcx
    sub_14DB9D100+124  8B 86 FC 02 00 00                                               mov     eax, [rsi+2FCh]
    sub_14DB9D100+12A  F3 48 0F 2A F0                                                  cvtsi2ss xmm6, rax      ; Scalar signed INT32 to Single-FP conversion
    sub_14DB9D100+12F  F3 0F 59 B6 F0 02 00 00                                         mulss   xmm6, dword ptr [rsi+2F0h] ; Scalar Single-FP Multiply
    sub_14DB9D100+137  FF 15 33 BA E7 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
    sub_14DB9D100+13D  84 C0                                                           test    al, al          ; Logical Compare
    sub_14DB9D100+13F  75 09                                                           jnz     short loc_14DB9D24A ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+141  48 8B 05 30 CA E7 08                                            mov     rax, cs:qword_156A19C78
    sub_14DB9D100+148  EB 35                                                           jmp     short loc_14DB9D27F ; Jump
    sub_14DB9D100+14A                                                  ; ---------------------------------------------------------------------------
    sub_14DB9D100+14A
    sub_14DB9D100+14A                                                  loc_14DB9D24A:                          ; CODE XREF: sub_14DB9D100+13F↑j
    sub_14DB9D100+14A  48 8B 0D 27 EA E7 08                                            mov     rcx, cs:qword_156A1BC78
    sub_14DB9D100+151  0F B6 05 26 EA E7 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
    sub_14DB9D100+158  48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
    sub_14DB9D100+160  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
    sub_14DB9D100+162  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
    sub_14DB9D100+166  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
    sub_14DB9D100+169  88 84 24 51 01 00 00                                            mov     [rsp+151h], al
    sub_14DB9D100+170  88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
    sub_14DB9D100+177  48 8B 84 24 50 01 00 00                                         mov     rax, [rsp+150h]
    sub_14DB9D100+17F
    sub_14DB9D100+17F                                                  loc_14DB9D27F:                          ; CODE XREF: sub_14DB9D100+148↑j
    sub_14DB9D100+17F  F3 0F 10 1D 89 FD B2 02                                         movss   xmm3, dword ptr cs:xmmword_1506CD010 ; Move Scalar Single-FP
    sub_14DB9D100+187  45 0F 57 E4                                                     xorps   xmm12, xmm12    ; Bitwise Logical XOR for Single-FP Data
    sub_14DB9D100+18B  F3 44 0F 10 3D 68 FD B2 02                                      movss   xmm15, dword ptr cs:xmmword_1506CCFF4+8 ; Move Scalar Single-FP
    sub_14DB9D100+194  F3 0F 5E DE                                                     divss   xmm3, xmm6      ; Scalar Single-FP Divide
    sub_14DB9D100+198  0F 57 F6                                                        xorps   xmm6, xmm6      ; Bitwise Logical XOR for Single-FP Data
    sub_14DB9D100+19B  F3 0F 11 98 30 08 00 00                                         movss   dword ptr [rax+830h], xmm3 ; Move Scalar Single-FP
    sub_14DB9D100+1A3  F3 0F 10 86 E0 02 00 00                                         movss   xmm0, dword ptr [rsi+2E0h] ; Move Scalar Single-FP
    sub_14DB9D100+1AB  F3 0F 59 86 00 01 00 00                                         mulss   xmm0, dword ptr [rsi+100h] ; Scalar Single-FP Multiply
    sub_14DB9D100+1B3  F3 0F 10 8E 80 01 00 00                                         movss   xmm1, dword ptr [rsi+180h] ; Move Scalar Single-FP
    sub_14DB9D100+1BB  F3 0F 10 96 84 01 00 00                                         movss   xmm2, dword ptr [rsi+184h] ; Move Scalar Single-FP
    sub_14DB9D100+1C3  F3 0F 58 86 30 01 00 00                                         addss   xmm0, dword ptr [rsi+130h] ; Scalar Single-FP Add
    sub_14DB9D100+1CB  F3 0F 5C C8                                                     subss   xmm1, xmm0      ; Scalar Single-FP Subtract
    sub_14DB9D100+1CF  F3 0F 10 86 14 01 00 00                                         movss   xmm0, dword ptr [rsi+114h] ; Move Scalar Single-FP
    sub_14DB9D100+1D7  F3 0F 59 86 E4 02 00 00                                         mulss   xmm0, dword ptr [rsi+2E4h] ; Scalar Single-FP Multiply
    sub_14DB9D100+1DF  F3 0F 58 86 34 01 00 00                                         addss   xmm0, dword ptr [rsi+134h] ; Scalar Single-FP Add
    sub_14DB9D100+1E7  F3 0F 59 CB                                                     mulss   xmm1, xmm3      ; Scalar Single-FP Multiply
    sub_14DB9D100+1EB  F3 0F 5C D0                                                     subss   xmm2, xmm0      ; Scalar Single-FP Subtract
    sub_14DB9D100+1EF  F3 0F 58 C9                                                     addss   xmm1, xmm1      ; Scalar Single-FP Add
    sub_14DB9D100+1F3  F3 0F 59 D3                                                     mulss   xmm2, xmm3      ; Scalar Single-FP Multiply
    sub_14DB9D100+1F7  F3 41 0F 5C CF                                                  subss   xmm1, xmm15     ; Scalar Single-FP Subtract
    sub_14DB9D100+1FC  F3 0F 58 D2                                                     addss   xmm2, xmm2      ; Scalar Single-FP Add
    sub_14DB9D100+200  F3 0F 2D C1                                                     cvtss2si eax, xmm1      ; Scalar Single-FP to signed INT32 conversion
    sub_14DB9D100+204  F3 41 0F 5C D7                                                  subss   xmm2, xmm15     ; Scalar Single-FP Subtract
    sub_14DB9D100+209  D1 F8                                                           sar     eax, 1          ; Shift Arithmetic Right
    sub_14DB9D100+20B  F3 0F 2A F0                                                     cvtsi2ss xmm6, eax      ; Scalar signed INT32 to Single-FP conversion
    sub_14DB9D100+20F  F3 0F 2D C2                                                     cvtss2si eax, xmm2      ; Scalar Single-FP to signed INT32 conversion
    sub_14DB9D100+213  F3 0F 11 B4 24 50 01 00 00                                      movss   dword ptr [rsp+150h], xmm6 ; Move Scalar Single-FP
    sub_14DB9D100+21C  D1 F8                                                           sar     eax, 1          ; Shift Arithmetic Right
    sub_14DB9D100+21E  F3 44 0F 2A E0                                                  cvtsi2ss xmm12, eax     ; Scalar signed INT32 to Single-FP conversion
    sub_14DB9D100+223  FF 15 47 B9 E7 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
    sub_14DB9D100+229  84 C0                                                           test    al, al          ; Logical Compare
    sub_14DB9D100+22B  75 09                                                           jnz     short loc_14DB9D336 ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+22D  48 8B 1D 44 C9 E7 08                                            mov     rbx, cs:qword_156A19C78
    sub_14DB9D100+234  EB 35                                                           jmp     short loc_14DB9D36B ; Jump
    sub_14DB9D100+236                                                  ; ---------------------------------------------------------------------------
    sub_14DB9D100+236
    sub_14DB9D100+236                                                  loc_14DB9D336:                          ; CODE XREF: sub_14DB9D100+22B↑j
    sub_14DB9D100+236  48 8B 0D 3B E9 E7 08                                            mov     rcx, cs:qword_156A1BC78
    sub_14DB9D100+23D  0F B6 05 3A E9 E7 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
    sub_14DB9D100+244  48 89 8C 24 58 01 00 00                                         mov     [rsp+158h], rcx
    sub_14DB9D100+24C  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
    sub_14DB9D100+24E  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
    sub_14DB9D100+252  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
    sub_14DB9D100+255  88 84 24 59 01 00 00                                            mov     [rsp+159h], al
    sub_14DB9D100+25C  88 8C 24 5E 01 00 00                                            mov     [rsp+15Eh], cl
    sub_14DB9D100+263  48 8B 9C 24 58 01 00 00                                         mov     rbx, [rsp+158h]
    sub_14DB9D100+26B
    sub_14DB9D100+26B                                                  loc_14DB9D36B:                          ; CODE XREF: sub_14DB9D100+234↑j
    sub_14DB9D100+26B  48 8D 8B 38 08 00 00                                            lea     rcx, [rbx+838h] ; Load Effective Address
    sub_14DB9D100+272  FF 15 F8 D3 CA 08                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14DB9D100+278  83 BB 44 08 00 00 00                                            cmp     dword ptr [rbx+844h], 0 ; Compare Two Operands
    sub_14DB9D100+27F  44 89 A3 40 08 00 00                                            mov     [rbx+840h], r12d
    sub_14DB9D100+286  74 0E                                                           jz      short loc_14DB9D396 ; Jump if Zero (ZF=1)
    sub_14DB9D100+288  33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
    sub_14DB9D100+28A  48 8D 8B 38 08 00 00                                            lea     rcx, [rbx+838h] ; Load Effective Address
    sub_14DB9D100+291  E8 6A B4 F2 F2                                                  call    sub_140AC8800   ; Call Procedure
    sub_14DB9D100+296
    sub_14DB9D100+296                                                  loc_14DB9D396:                          ; CODE XREF: sub_14DB9D100+286↑j
    sub_14DB9D100+296  FF 15 D4 B8 E7 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
    sub_14DB9D100+29C  84 C0                                                           test    al, al          ; Logical Compare
    sub_14DB9D100+29E  75 09                                                           jnz     short loc_14DB9D3A9 ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+2A0  48 8B 1D D1 C8 E7 08                                            mov     rbx, cs:qword_156A19C78
    sub_14DB9D100+2A7  EB 35                                                           jmp     short loc_14DB9D3DE ; Jump
    sub_14DB9D100+2A9                                                  ; ---------------------------------------------------------------------------
    sub_14DB9D100+2A9
    sub_14DB9D100+2A9                                                  loc_14DB9D3A9:                          ; CODE XREF: sub_14DB9D100+29E↑j
    sub_14DB9D100+2A9  48 8B 0D C8 E8 E7 08                                            mov     rcx, cs:qword_156A1BC78
    sub_14DB9D100+2B0  0F B6 05 C7 E8 E7 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
    sub_14DB9D100+2B7  48 89 8C 24 58 01 00 00                                         mov     [rsp+158h], rcx
    sub_14DB9D100+2BF  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
    sub_14DB9D100+2C1  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
    sub_14DB9D100+2C5  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
    sub_14DB9D100+2C8  88 84 24 59 01 00 00                                            mov     [rsp+159h], al
    sub_14DB9D100+2CF  88 8C 24 5E 01 00 00                                            mov     [rsp+15Eh], cl
    sub_14DB9D100+2D6  48 8B 9C 24 58 01 00 00                                         mov     rbx, [rsp+158h]
    sub_14DB9D100+2DE
    sub_14DB9D100+2DE                                                  loc_14DB9D3DE:                          ; CODE XREF: sub_14DB9D100+2A7↑j
    sub_14DB9D100+2DE  48 63 BB 40 08 00 00                                            movsxd  rdi, dword ptr [rbx+840h] ; Move with Sign-Extend Doubleword
    sub_14DB9D100+2E5  8D 47 19                                                        lea     eax, [rdi+19h]  ; Load Effective Address
    sub_14DB9D100+2E8  89 83 40 08 00 00                                               mov     [rbx+840h], eax
    sub_14DB9D100+2EE  3B 83 44 08 00 00                                               cmp     eax, [rbx+844h] ; Compare Two Operands
    sub_14DB9D100+2F4  7E 0E                                                           jle     short loc_14DB9D404 ; Jump if Less or Equal (ZF=1 | SF!=OF)
    sub_14DB9D100+2F6  8B D7                                                           mov     edx, edi
    sub_14DB9D100+2F8  48 8D 8B 38 08 00 00                                            lea     rcx, [rbx+838h] ; Load Effective Address
    sub_14DB9D100+2FF  E8 CC AE F2 F2                                                  call    sub_140AC82D0   ; Call Procedure
    sub_14DB9D100+304
    sub_14DB9D100+304                                                  loc_14DB9D404:                          ; CODE XREF: sub_14DB9D100+2F4↑j
    sub_14DB9D100+304  48 8D 8B 38 08 00 00                                            lea     rcx, [rbx+838h] ; Load Effective Address
    sub_14DB9D100+30B  FF 15 5F D3 CA 08                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14DB9D100+311  48 8B CF                                                        mov     rcx, rdi
    sub_14DB9D100+314  33 D2                                                           xor     edx, edx        ; Logical Exclusive OR
    sub_14DB9D100+316  48 C1 E1 04                                                     shl     rcx, 4          ; Shift Logical Left
    sub_14DB9D100+31A  41 B8 90 01 00 00                                               mov     r8d, 190h
    sub_14DB9D100+320  48 03 C8                                                        add     rcx, rax        ; Add
    sub_14DB9D100+323  E8 21 94 6C 02                                                  call    sub_150266849   ; Call Procedure
    sub_14DB9D100+328  66 44 0F 6F 0D CF A2 B2 02                                      movdqa  xmm9, cs:xmmword_1506C7700 ; Move Aligned Double Quadword
    sub_14DB9D100+331  45 8B FC                                                        mov     r15d, r12d
    sub_14DB9D100+334  F3 44 0F 10 1D E3 F9 BF 02                                      movss   xmm11, cs:dword_15079CE20 ; Move Scalar Single-FP
    sub_14DB9D100+33D  4D 8B EC                                                        mov     r13, r12
    sub_14DB9D100+340  F3 44 0F 10 2D D7 FB B2 02                                      movss   xmm13, dword ptr cs:ymmword_1506CD020 ; Move Scalar Single-FP
    sub_14DB9D100+349  F3 44 0F 10 35 BE EA 13 03                                      movss   xmm14, cs:dword_150CDBF10 ; Move Scalar Single-FP
    sub_14DB9D100+352  0F 1F 40 00                                                     nop     dword ptr [rax+00h] ; No Operation
    sub_14DB9D100+356                                                                  db      66h, 66h
    sub_14DB9D100+356  66 66 0F 1F 84 00 00 00 00 00                                   nop     word ptr [rax+rax+00000000h] ; No Operation
    sub_14DB9D100+360
    sub_14DB9D100+360                                                  loc_14DB9D460:                          ; CODE XREF: sub_14DB9D100+688↓j
    sub_14DB9D100+360  66 41 0F 6E C7                                                  movd    xmm0, r15d      ; Move 32 bits
    sub_14DB9D100+365  44 0F 28 D6                                                     movaps  xmm10, xmm6     ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+369  0F 5B C0                                                        cvtdq2ps xmm0, xmm0     ; Convert Packed Doubleword Integers to Packed Double-Precision Floating-Point Values
    sub_14DB9D100+36C  41 8B EC                                                        mov     ebp, r12d
    sub_14DB9D100+36F  4D 8B F5                                                        mov     r14, r13
    sub_14DB9D100+372  F3 45 0F 5C D3                                                  subss   xmm10, xmm11    ; Scalar Single-FP Subtract
    sub_14DB9D100+377  F3 44 0F 58 D0                                                  addss   xmm10, xmm0     ; Scalar Single-FP Add
    sub_14DB9D100+37C  0F 1F 40 00                                                     nop     dword ptr [rax+00h] ; No Operation
    sub_14DB9D100+380
    sub_14DB9D100+380                                                  loc_14DB9D480:                          ; CODE XREF: sub_14DB9D100+66E↓j
    sub_14DB9D100+380  8B 86 FC 02 00 00                                               mov     eax, [rsi+2FCh]
    sub_14DB9D100+386  0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
    sub_14DB9D100+389  48 8B 9E 18 03 00 00                                            mov     rbx, [rsi+318h]
    sub_14DB9D100+390  66 0F 6E D5                                                     movd    xmm2, ebp       ; Move 32 bits
    sub_14DB9D100+394  0F 5B D2                                                        cvtdq2ps xmm2, xmm2     ; Convert Packed Doubleword Integers to Packed Double-Precision Floating-Point Values
    sub_14DB9D100+397  F3 48 0F 2A C0                                                  cvtsi2ss xmm0, rax      ; Scalar signed INT32 to Single-FP conversion
    sub_14DB9D100+39C  F3 41 0F 58 D4                                                  addss   xmm2, xmm12     ; Scalar Single-FP Add
    sub_14DB9D100+3A1  0F 28 D8                                                        movaps  xmm3, xmm0      ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+3A4  F3 41 0F 59 DA                                                  mulss   xmm3, xmm10     ; Scalar Single-FP Multiply
    sub_14DB9D100+3A9  F3 41 0F 5C D3                                                  subss   xmm2, xmm11     ; Scalar Single-FP Subtract
    sub_14DB9D100+3AE  F3 0F 58 9E E0 02 00 00                                         addss   xmm3, dword ptr [rsi+2E0h] ; Scalar Single-FP Add
    sub_14DB9D100+3B6  F3 0F 59 D0                                                     mulss   xmm2, xmm0      ; Scalar Single-FP Multiply
    sub_14DB9D100+3BA  F3 0F 11 5C 24 20                                               movss   dword ptr [rsp+20h], xmm3 ; Move Scalar Single-FP
    sub_14DB9D100+3C0  F3 0F 58 96 E4 02 00 00                                         addss   xmm2, dword ptr [rsi+2E4h] ; Scalar Single-FP Add
    sub_14DB9D100+3C8  F3 0F 11 54 24 24                                               movss   dword ptr [rsp+24h], xmm2 ; Move Scalar Single-FP
    sub_14DB9D100+3CE  83 7B 64 00                                                     cmp     dword ptr [rbx+64h], 0 ; Compare Two Operands
    sub_14DB9D100+3D2  74 68                                                           jz      short loc_14DB9D53C ; Jump if Zero (ZF=1)
    sub_14DB9D100+3D4  48 8B 0B                                                        mov     rcx, [rbx]
    sub_14DB9D100+3D7  48 85 C9                                                        test    rcx, rcx        ; Logical Compare
    sub_14DB9D100+3DA  75 12                                                           jnz     short loc_14DB9D4EE ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+3DC  48 39 4B 08                                                     cmp     [rbx+8], rcx    ; Compare Two Operands
    sub_14DB9D100+3E0  75 0C                                                           jnz     short loc_14DB9D4EE ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+3E2  48 39 4B 10                                                     cmp     [rbx+10h], rcx  ; Compare Two Operands
    sub_14DB9D100+3E6  75 06                                                           jnz     short loc_14DB9D4EE ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+3E8  48 39 4B 18                                                     cmp     [rbx+18h], rcx  ; Compare Two Operands
    sub_14DB9D100+3EC  74 4E                                                           jz      short loc_14DB9D53C ; Jump if Zero (ZF=1)
    sub_14DB9D100+3EE
    sub_14DB9D100+3EE                                                  loc_14DB9D4EE:                          ; CODE XREF: sub_14DB9D100+3DA↑j
    sub_14DB9D100+3EE                                                                                          ; sub_14DB9D100+3E0↑j ...
    sub_14DB9D100+3EE  41 8B D4                                                        mov     edx, r12d
    sub_14DB9D100+3F1  48 8B C3                                                        mov     rax, rbx
    sub_14DB9D100+3F4
    sub_14DB9D100+3F4                                                  loc_14DB9D4F4:                          ; CODE XREF: sub_14DB9D100+42D↓j
    sub_14DB9D100+3F4  48 85 C9                                                        test    rcx, rcx        ; Logical Compare
    sub_14DB9D100+3F7  74 26                                                           jz      short loc_14DB9D51F ; Jump if Zero (ZF=1)
    sub_14DB9D100+3F9  F3 0F 10 41 28                                                  movss   xmm0, dword ptr [rcx+28h] ; Move Scalar Single-FP
    sub_14DB9D100+3FE  F3 0F 10 49 2C                                                  movss   xmm1, dword ptr [rcx+2Ch] ; Move Scalar Single-FP
    sub_14DB9D100+403  F3 0F 5C C3                                                     subss   xmm0, xmm3      ; Scalar Single-FP Subtract
    sub_14DB9D100+407  F3 0F 5C CA                                                     subss   xmm1, xmm2      ; Scalar Single-FP Subtract
    sub_14DB9D100+40B  41 0F 54 C1                                                     andps   xmm0, xmm9      ; Bitwise Logical And for Single-FP
    sub_14DB9D100+40F  0F 2F 41 34                                                     comiss  xmm0, dword ptr [rcx+34h] ; Scalar Ordered Single-FP Compare and Set EFLAGS
    sub_14DB9D100+413  41 0F 54 C9                                                     andps   xmm1, xmm9      ; Bitwise Logical And for Single-FP
    sub_14DB9D100+417  77 06                                                           ja      short loc_14DB9D51F ; Jump if Above (CF=0 & ZF=0)
    sub_14DB9D100+419  0F 2F 49 38                                                     comiss  xmm1, dword ptr [rcx+38h] ; Scalar Ordered Single-FP Compare and Set EFLAGS
    sub_14DB9D100+41D  76 10                                                           jbe     short loc_14DB9D52F ; Jump if Below or Equal (CF=1 | ZF=1)
    sub_14DB9D100+41F
    sub_14DB9D100+41F                                                  loc_14DB9D51F:                          ; CODE XREF: sub_14DB9D100+3F7↑j
    sub_14DB9D100+41F                                                                                          ; sub_14DB9D100+417↑j
    sub_14DB9D100+41F  FF C2                                                           inc     edx             ; Increment by 1
    sub_14DB9D100+421  48 83 C0 08                                                     add     rax, 8          ; Add
    sub_14DB9D100+425  83 FA 04                                                        cmp     edx, 4          ; Compare Two Operands
    sub_14DB9D100+428  7D 12                                                           jge     short loc_14DB9D53C ; Jump if Greater or Equal (SF=OF)
    sub_14DB9D100+42A  48 8B 08                                                        mov     rcx, [rax]
    sub_14DB9D100+42D  EB C5                                                           jmp     short loc_14DB9D4F4 ; Jump
    sub_14DB9D100+42F                                                  ; ---------------------------------------------------------------------------
    sub_14DB9D100+42F
    sub_14DB9D100+42F                                                  loc_14DB9D52F:                          ; CODE XREF: sub_14DB9D100+41D↑j
    sub_14DB9D100+42F  48 8D 54 24 20                                                  lea     rdx, [rsp+20h]  ; Load Effective Address
    sub_14DB9D100+434  E8 B7 6A FE FF                                                  call    sub_14DB83FF0   ; Call Procedure
    sub_14DB9D100+439  48 8B D8                                                        mov     rbx, rax
    sub_14DB9D100+43C
    sub_14DB9D100+43C                                                  loc_14DB9D53C:                          ; CODE XREF: sub_14DB9D100+3D2↑j
    sub_14DB9D100+43C                                                                                          ; sub_14DB9D100+3EC↑j ...
    sub_14DB9D100+43C  45 85 FF                                                        test    r15d, r15d      ; Logical Compare
    sub_14DB9D100+43F  0F 85 94 00 00 00                                               jnz     loc_14DB9D5D9   ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+445  85 ED                                                           test    ebp, ebp        ; Logical Compare
    sub_14DB9D100+447  0F 85 8C 00 00 00                                               jnz     loc_14DB9D5D9   ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+44D  F3 0F 10 73 28                                                  movss   xmm6, dword ptr [rbx+28h] ; Move Scalar Single-FP
    sub_14DB9D100+452  F3 0F 5C 73 34                                                  subss   xmm6, dword ptr [rbx+34h] ; Scalar Single-FP Subtract
    sub_14DB9D100+457  F3 0F 10 7B 2C                                                  movss   xmm7, dword ptr [rbx+2Ch] ; Move Scalar Single-FP
    sub_14DB9D100+45C  F3 0F 5C 7B 38                                                  subss   xmm7, dword ptr [rbx+38h] ; Scalar Single-FP Subtract
    sub_14DB9D100+461  F3 0F 59 B6 00 01 00 00                                         mulss   xmm6, dword ptr [rsi+100h] ; Scalar Single-FP Multiply
    sub_14DB9D100+469  F3 0F 59 BE 14 01 00 00                                         mulss   xmm7, dword ptr [rsi+114h] ; Scalar Single-FP Multiply
    sub_14DB9D100+471  F3 0F 58 B6 30 01 00 00                                         addss   xmm6, dword ptr [rsi+130h] ; Scalar Single-FP Add
    sub_14DB9D100+479  F3 0F 58 BE 34 01 00 00                                         addss   xmm7, dword ptr [rsi+134h] ; Scalar Single-FP Add
    sub_14DB9D100+481  FF 15 E9 B6 E7 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
    sub_14DB9D100+487  84 C0                                                           test    al, al          ; Logical Compare
    sub_14DB9D100+489  75 09                                                           jnz     short loc_14DB9D594 ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+48B  48 8B 05 E6 C6 E7 08                                            mov     rax, cs:qword_156A19C78
    sub_14DB9D100+492  EB 35                                                           jmp     short loc_14DB9D5C9 ; Jump
    sub_14DB9D100+494                                                  ; ---------------------------------------------------------------------------
    sub_14DB9D100+494
    sub_14DB9D100+494                                                  loc_14DB9D594:                          ; CODE XREF: sub_14DB9D100+489↑j
    sub_14DB9D100+494  48 8B 0D DD E6 E7 08                                            mov     rcx, cs:qword_156A1BC78
    sub_14DB9D100+49B  0F B6 05 DC E6 E7 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
    sub_14DB9D100+4A2  48 89 8C 24 58 01 00 00                                         mov     [rsp+158h], rcx
    sub_14DB9D100+4AA  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
    sub_14DB9D100+4AC  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
    sub_14DB9D100+4B0  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
    sub_14DB9D100+4B3  88 84 24 59 01 00 00                                            mov     [rsp+159h], al
    sub_14DB9D100+4BA  88 8C 24 5E 01 00 00                                            mov     [rsp+15Eh], cl
    sub_14DB9D100+4C1  48 8B 84 24 58 01 00 00                                         mov     rax, [rsp+158h]
    sub_14DB9D100+4C9
    sub_14DB9D100+4C9                                                  loc_14DB9D5C9:                          ; CODE XREF: sub_14DB9D100+492↑j
    sub_14DB9D100+4C9  F3 0F 11 B0 28 08 00 00                                         movss   dword ptr [rax+828h], xmm6 ; Move Scalar Single-FP
    sub_14DB9D100+4D1  F3 0F 11 B8 2C 08 00 00                                         movss   dword ptr [rax+82Ch], xmm7 ; Move Scalar Single-FP
    sub_14DB9D100+4D9
    sub_14DB9D100+4D9                                                  loc_14DB9D5D9:                          ; CODE XREF: sub_14DB9D100+43F↑j
    sub_14DB9D100+4D9                                                                                          ; sub_14DB9D100+447↑j
    sub_14DB9D100+4D9  48 8B BB 80 00 00 00                                            mov     rdi, [rbx+80h]
    sub_14DB9D100+4E0  48 85 FF                                                        test    rdi, rdi        ; Logical Compare
    sub_14DB9D100+4E3  0F 84 E1 00 00 00                                               jz      loc_14DB9D6CA   ; Jump if Zero (ZF=1)
    sub_14DB9D100+4E9  8B 43 64                                                        mov     eax, [rbx+64h]
    sub_14DB9D100+4EC  41 0F 28 C5                                                     movaps  xmm0, xmm13     ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+4F0  F7 D8                                                           neg     eax             ; Two's Complement Negation
    sub_14DB9D100+4F2  66 0F 6E C8                                                     movd    xmm1, eax       ; Move 32 bits
    sub_14DB9D100+4F6  0F 5B C9                                                        cvtdq2ps xmm1, xmm1     ; Convert Packed Doubleword Integers to Packed Double-Precision Floating-Point Values
    sub_14DB9D100+4F9  E8 ED 92 6C 02                                                  call    sub_1502668EB   ; Call Procedure
    sub_14DB9D100+4FE  48 8B 86 E0 00 00 00                                            mov     rax, [rsi+0E0h]
    sub_14DB9D100+505  0F 28 F0                                                        movaps  xmm6, xmm0      ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+508  F3 41 0F 59 F6                                                  mulss   xmm6, xmm14     ; Scalar Single-FP Multiply
    sub_14DB9D100+50D  66 0F 6E F8                                                     movd    xmm7, eax       ; Move 32 bits
    sub_14DB9D100+511  48 C1 E8 20                                                     shr     rax, 20h        ; Shift Logical Right
    sub_14DB9D100+515  0F 5B FF                                                        cvtdq2ps xmm7, xmm7     ; Convert Packed Doubleword Integers to Packed Double-Precision Floating-Point Values
    sub_14DB9D100+518  66 44 0F 6E C0                                                  movd    xmm8, eax       ; Move 32 bits
    sub_14DB9D100+51D  45 0F 5B C0                                                     cvtdq2ps xmm8, xmm8     ; Convert Packed Doubleword Integers to Packed Double-Precision Floating-Point Values
    sub_14DB9D100+521  FF 15 49 B6 E7 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
    sub_14DB9D100+527  84 C0                                                           test    al, al          ; Logical Compare
    sub_14DB9D100+529  75 09                                                           jnz     short loc_14DB9D634 ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+52B  48 8B 0D 46 C6 E7 08                                            mov     rcx, cs:qword_156A19C78
    sub_14DB9D100+532  EB 35                                                           jmp     short loc_14DB9D669 ; Jump
    sub_14DB9D100+534                                                  ; ---------------------------------------------------------------------------
    sub_14DB9D100+534
    sub_14DB9D100+534                                                  loc_14DB9D634:                          ; CODE XREF: sub_14DB9D100+529↑j
    sub_14DB9D100+534  48 8B 0D 3D E6 E7 08                                            mov     rcx, cs:qword_156A1BC78
    sub_14DB9D100+53B  0F B6 05 3C E6 E7 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
    sub_14DB9D100+542  48 89 8C 24 58 01 00 00                                         mov     [rsp+158h], rcx
    sub_14DB9D100+54A  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
    sub_14DB9D100+54C  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
    sub_14DB9D100+550  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
    sub_14DB9D100+553  88 84 24 59 01 00 00                                            mov     [rsp+159h], al
    sub_14DB9D100+55A  88 8C 24 5E 01 00 00                                            mov     [rsp+15Eh], cl
    sub_14DB9D100+561  48 8B 8C 24 58 01 00 00                                         mov     rcx, [rsp+158h]
    sub_14DB9D100+569
    sub_14DB9D100+569                                                  loc_14DB9D669:                          ; CODE XREF: sub_14DB9D100+532↑j
    sub_14DB9D100+569  48 81 C1 38 08 00 00                                            add     rcx, 838h       ; Add
    sub_14DB9D100+570  FF 15 FA D0 CA 08                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14DB9D100+576  F3 0F 10 57 08                                                  movss   xmm2, dword ptr [rdi+8] ; Move Scalar Single-FP
    sub_14DB9D100+57B  0F 28 CE                                                        movaps  xmm1, xmm6      ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+57E  F3 0F 10 47 0C                                                  movss   xmm0, dword ptr [rdi+0Ch] ; Move Scalar Single-FP
    sub_14DB9D100+583  F3 41 0F 58 D7                                                  addss   xmm2, xmm15     ; Scalar Single-FP Add
    sub_14DB9D100+588  F3 41 0F 58 C7                                                  addss   xmm0, xmm15     ; Scalar Single-FP Add
    sub_14DB9D100+58D  F3 0F 5E CF                                                     divss   xmm1, xmm7      ; Scalar Single-FP Divide
    sub_14DB9D100+591  F3 0F 5E D7                                                     divss   xmm2, xmm7      ; Scalar Single-FP Divide
    sub_14DB9D100+595  F3 41 0F 5E C0                                                  divss   xmm0, xmm8      ; Scalar Single-FP Divide
    sub_14DB9D100+59A  0F C6 D2 E1                                                     shufps  xmm2, xmm2, 0E1h ; Shuffle Single-FP
    sub_14DB9D100+59E  F3 0F 10 D0                                                     movss   xmm2, xmm0      ; Move Scalar Single-FP
    sub_14DB9D100+5A2  0F C6 D2 C6                                                     shufps  xmm2, xmm2, 0C6h ; Shuffle Single-FP
    sub_14DB9D100+5A6  F3 0F 10 D1                                                     movss   xmm2, xmm1      ; Move Scalar Single-FP
    sub_14DB9D100+5AA  F3 41 0F 5E F0                                                  divss   xmm6, xmm8      ; Scalar Single-FP Divide
    sub_14DB9D100+5AF  0F C6 D2 27                                                     shufps  xmm2, xmm2, 27h ; ''' ; Shuffle Single-FP
    sub_14DB9D100+5B3  F3 0F 10 D6                                                     movss   xmm2, xmm6      ; Move Scalar Single-FP
    sub_14DB9D100+5B7  0F C6 D2 39                                                     shufps  xmm2, xmm2, 39h ; '9' ; Shuffle Single-FP
    sub_14DB9D100+5BB  0F 29 54 24 40                                                  movaps  xmmword ptr [rsp+40h], xmm2 ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+5C0  41 0F 11 14 06                                                  movups  xmmword ptr [r14+rax], xmm2 ; Move Unaligned Four Packed Single-FP
    sub_14DB9D100+5C5  E9 9B 00 00 00                                                  jmp     loc_14DB9D765   ; Jump
    sub_14DB9D100+5CA                                                  ; ---------------------------------------------------------------------------
    sub_14DB9D100+5CA
    sub_14DB9D100+5CA                                                  loc_14DB9D6CA:                          ; CODE XREF: sub_14DB9D100+4E3↑j
    sub_14DB9D100+5CA  4C 8B C3                                                        mov     r8, rbx
    sub_14DB9D100+5CD  48 8D 54 24 40                                                  lea     rdx, [rsp+40h]  ; Load Effective Address
    sub_14DB9D100+5D2  48 8B CE                                                        mov     rcx, rsi
    sub_14DB9D100+5D5  E8 C6 53 FF FF                                                  call    sub_14DB92AA0   ; Call Procedure
    sub_14DB9D100+5DA  F3 0F 10 44 24 48                                               movss   xmm0, dword ptr [rsp+48h] ; Move Scalar Single-FP
    sub_14DB9D100+5E0  F3 0F 10 4C 24 4C                                               movss   xmm1, dword ptr [rsp+4Ch] ; Move Scalar Single-FP
    sub_14DB9D100+5E6  F3 0F 11 44 24 30                                               movss   dword ptr [rsp+30h], xmm0 ; Move Scalar Single-FP
    sub_14DB9D100+5EC  F3 0F 10 44 24 58                                               movss   xmm0, dword ptr [rsp+58h] ; Move Scalar Single-FP
    sub_14DB9D100+5F2  F3 0F 11 44 24 38                                               movss   dword ptr [rsp+38h], xmm0 ; Move Scalar Single-FP
    sub_14DB9D100+5F8  F3 0F 11 4C 24 34                                               movss   dword ptr [rsp+34h], xmm1 ; Move Scalar Single-FP
    sub_14DB9D100+5FE  C7 44 24 3C 00 00 80 3F                                         mov     dword ptr [rsp+3Ch], 3F800000h
    sub_14DB9D100+606  FF 15 64 B5 E7 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
    sub_14DB9D100+60C  84 C0                                                           test    al, al          ; Logical Compare
    sub_14DB9D100+60E  75 09                                                           jnz     short loc_14DB9D719 ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+610  48 8B 0D 61 C5 E7 08                                            mov     rcx, cs:qword_156A19C78
    sub_14DB9D100+617  EB 35                                                           jmp     short loc_14DB9D74E ; Jump
    sub_14DB9D100+619                                                  ; ---------------------------------------------------------------------------
    sub_14DB9D100+619
    sub_14DB9D100+619                                                  loc_14DB9D719:                          ; CODE XREF: sub_14DB9D100+60E↑j
    sub_14DB9D100+619  48 8B 0D 58 E5 E7 08                                            mov     rcx, cs:qword_156A1BC78
    sub_14DB9D100+620  0F B6 05 57 E5 E7 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
    sub_14DB9D100+627  48 89 8C 24 58 01 00 00                                         mov     [rsp+158h], rcx
    sub_14DB9D100+62F  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
    sub_14DB9D100+631  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
    sub_14DB9D100+635  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
    sub_14DB9D100+638  88 84 24 59 01 00 00                                            mov     [rsp+159h], al
    sub_14DB9D100+63F  88 8C 24 5E 01 00 00                                            mov     [rsp+15Eh], cl
    sub_14DB9D100+646  48 8B 8C 24 58 01 00 00                                         mov     rcx, [rsp+158h]
    sub_14DB9D100+64E
    sub_14DB9D100+64E                                                  loc_14DB9D74E:                          ; CODE XREF: sub_14DB9D100+617↑j
    sub_14DB9D100+64E  48 81 C1 38 08 00 00                                            add     rcx, 838h       ; Add
    sub_14DB9D100+655  FF 15 15 D0 CA 08                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14DB9D100+65B  0F 28 44 24 30                                                  movaps  xmm0, xmmword ptr [rsp+30h] ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+660  42 0F 11 04 30                                                  movups  xmmword ptr [rax+r14], xmm0 ; Move Unaligned Four Packed Single-FP
    sub_14DB9D100+665
    sub_14DB9D100+665                                                  loc_14DB9D765:                          ; CODE XREF: sub_14DB9D100+5C5↑j
    sub_14DB9D100+665  FF C5                                                           inc     ebp             ; Increment by 1
    sub_14DB9D100+667  49 83 C6 50                                                     add     r14, 50h ; 'P'  ; Add
    sub_14DB9D100+66B  83 FD 05                                                        cmp     ebp, 5          ; Compare Two Operands
    sub_14DB9D100+66E  0F 8C 0C FD FF FF                                               jl      loc_14DB9D480   ; Jump if Less (SF!=OF)
    sub_14DB9D100+674  F3 0F 10 B4 24 50 01 00 00                                      movss   xmm6, dword ptr [rsp+150h] ; Move Scalar Single-FP
    sub_14DB9D100+67D  41 FF C7                                                        inc     r15d            ; Increment by 1
    sub_14DB9D100+680  49 83 C5 10                                                     add     r13, 10h        ; Add
    sub_14DB9D100+684  41 83 FF 05                                                     cmp     r15d, 5         ; Compare Two Operands
    sub_14DB9D100+688  0F 8C D2 FC FF FF                                               jl      loc_14DB9D460   ; Jump if Less (SF!=OF)
    sub_14DB9D100+68E  44 0F 28 7C 24 60                                               movaps  xmm15, xmmword ptr [rsp+60h] ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+694  44 0F 28 74 24 70                                               movaps  xmm14, xmmword ptr [rsp+70h] ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+69A  44 0F 28 AC 24 80 00 00 00                                      movaps  xmm13, xmmword ptr [rsp+80h] ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+6A3  44 0F 28 A4 24 90 00 00 00                                      movaps  xmm12, xmmword ptr [rsp+90h] ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+6AC  44 0F 28 9C 24 A0 00 00 00                                      movaps  xmm11, xmmword ptr [rsp+0A0h] ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+6B5  44 0F 28 94 24 B0 00 00 00                                      movaps  xmm10, xmmword ptr [rsp+0B0h] ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+6BE  44 0F 28 8C 24 C0 00 00 00                                      movaps  xmm9, xmmword ptr [rsp+0C0h] ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+6C7  44 0F 28 84 24 D0 00 00 00                                      movaps  xmm8, xmmword ptr [rsp+0D0h] ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+6D0  0F 28 BC 24 E0 00 00 00                                         movaps  xmm7, xmmword ptr [rsp+0E0h] ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+6D8  4C 8B BC 24 00 01 00 00                                         mov     r15, [rsp+100h]
    sub_14DB9D100+6E0  4C 8B B4 24 08 01 00 00                                         mov     r14, [rsp+108h]
    sub_14DB9D100+6E8  4C 8B AC 24 10 01 00 00                                         mov     r13, [rsp+110h]
    sub_14DB9D100+6F0  48 8B BC 24 18 01 00 00                                         mov     rdi, [rsp+118h]
    sub_14DB9D100+6F8  48 8B AC 24 40 01 00 00                                         mov     rbp, [rsp+140h]
    sub_14DB9D100+700  FF 15 6A B4 E7 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
    sub_14DB9D100+706  84 C0                                                           test    al, al          ; Logical Compare
    sub_14DB9D100+708  75 09                                                           jnz     short loc_14DB9D813 ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+70A  48 8B 0D 67 C4 E7 08                                            mov     rcx, cs:qword_156A19C78
    sub_14DB9D100+711  EB 35                                                           jmp     short loc_14DB9D848 ; Jump
    sub_14DB9D100+713                                                  ; ---------------------------------------------------------------------------
    sub_14DB9D100+713
    sub_14DB9D100+713                                                  loc_14DB9D813:                          ; CODE XREF: sub_14DB9D100+708↑j
    sub_14DB9D100+713  48 8B 0D 5E E4 E7 08                                            mov     rcx, cs:qword_156A1BC78
    sub_14DB9D100+71A  0F B6 05 5D E4 E7 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
    sub_14DB9D100+721  48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
    sub_14DB9D100+729  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
    sub_14DB9D100+72B  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
    sub_14DB9D100+72F  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
    sub_14DB9D100+732  88 84 24 51 01 00 00                                            mov     [rsp+151h], al
    sub_14DB9D100+739  88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
    sub_14DB9D100+740  48 8B 8C 24 50 01 00 00                                         mov     rcx, [rsp+150h]
    sub_14DB9D100+748
    sub_14DB9D100+748                                                  loc_14DB9D848:                          ; CODE XREF: sub_14DB9D100+711↑j
    sub_14DB9D100+748  48 81 C1 38 08 00 00                                            add     rcx, 838h       ; Add
    sub_14DB9D100+74F  FF 15 1B CF CA 08                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14DB9D100+755  48 8B 9C 24 48 01 00 00                                         mov     rbx, [rsp+148h]
    sub_14DB9D100+75D  F3 0F 10 86 28 01 00 00                                         movss   xmm0, dword ptr [rsi+128h] ; Move Scalar Single-FP
    sub_14DB9D100+765  F3 0F 11 40 1C                                                  movss   dword ptr [rax+1Ch], xmm0 ; Move Scalar Single-FP
    sub_14DB9D100+76A  48 8B 4B 10                                                     mov     rcx, [rbx+10h]
    sub_14DB9D100+76E  48 85 C9                                                        test    rcx, rcx        ; Logical Compare
    sub_14DB9D100+771  74 2F                                                           jz      short loc_14DB9D8A2 ; Jump if Zero (ZF=1)
    sub_14DB9D100+773  48 8B 49 20                                                     mov     rcx, [rcx+20h]
    sub_14DB9D100+777  48 85 C9                                                        test    rcx, rcx        ; Logical Compare
    sub_14DB9D100+77A  74 26                                                           jz      short loc_14DB9D8A2 ; Jump if Zero (ZF=1)
    sub_14DB9D100+77C  48 8B 01                                                        mov     rax, [rcx]
    sub_14DB9D100+77F  FF 90 00 04 00 00                                               call    qword ptr [rax+400h] ; Indirect Call Near Procedure
    sub_14DB9D100+785  48 85 C0                                                        test    rax, rax        ; Logical Compare
    sub_14DB9D100+788  74 18                                                           jz      short loc_14DB9D8A2 ; Jump if Zero (ZF=1)
    sub_14DB9D100+78A  48 8B 43 10                                                     mov     rax, [rbx+10h]
    sub_14DB9D100+78E  48 8B 48 20                                                     mov     rcx, [rax+20h]
    sub_14DB9D100+792  48 8B 01                                                        mov     rax, [rcx]
    sub_14DB9D100+795  FF 90 00 04 00 00                                               call    qword ptr [rax+400h] ; Indirect Call Near Procedure
    sub_14DB9D100+79B  44 8B A0 48 06 00 00                                            mov     r12d, [rax+648h]
    sub_14DB9D100+7A2
    sub_14DB9D100+7A2                                                  loc_14DB9D8A2:                          ; CODE XREF: sub_14DB9D100+771↑j
    sub_14DB9D100+7A2                                                                                          ; sub_14DB9D100+77A↑j ...
    sub_14DB9D100+7A2  FF 15 C8 B3 E7 08                                               call    cs:qword_156A18C70 ; Indirect Call Near Procedure
    sub_14DB9D100+7A8  84 C0                                                           test    al, al          ; Logical Compare
    sub_14DB9D100+7AA  75 09                                                           jnz     short loc_14DB9D8B5 ; Jump if Not Zero (ZF=0)
    sub_14DB9D100+7AC  48 8B 0D C5 C3 E7 08                                            mov     rcx, cs:qword_156A19C78
    sub_14DB9D100+7B3  EB 35                                                           jmp     short loc_14DB9D8EA ; Jump
    sub_14DB9D100+7B5                                                  ; ---------------------------------------------------------------------------
    sub_14DB9D100+7B5
    sub_14DB9D100+7B5                                                  loc_14DB9D8B5:                          ; CODE XREF: sub_14DB9D100+7AA↑j
    sub_14DB9D100+7B5  48 8B 0D BC E3 E7 08                                            mov     rcx, cs:qword_156A1BC78
    sub_14DB9D100+7BC  0F B6 05 BB E3 E7 08                                            movzx   eax, byte ptr cs:qword_156A1BC78+6 ; Move with Zero-Extend
    sub_14DB9D100+7C3  48 89 8C 24 50 01 00 00                                         mov     [rsp+150h], rcx
    sub_14DB9D100+7CB  34 37                                                           xor     al, 37h         ; Logical Exclusive OR
    sub_14DB9D100+7CD  48 C1 E9 08                                                     shr     rcx, 8          ; Shift Logical Right
    sub_14DB9D100+7D1  80 F1 37                                                        xor     cl, 37h         ; Logical Exclusive OR
    sub_14DB9D100+7D4  88 84 24 51 01 00 00                                            mov     [rsp+151h], al
    sub_14DB9D100+7DB  88 8C 24 56 01 00 00                                            mov     [rsp+156h], cl
    sub_14DB9D100+7E2  48 8B 8C 24 50 01 00 00                                         mov     rcx, [rsp+150h]
    sub_14DB9D100+7EA
    sub_14DB9D100+7EA                                                  loc_14DB9D8EA:                          ; CODE XREF: sub_14DB9D100+7B3↑j
    sub_14DB9D100+7EA  66 41 0F 6E F4                                                  movd    xmm6, r12d      ; Move 32 bits
    sub_14DB9D100+7EF  48 81 C1 38 08 00 00                                            add     rcx, 838h       ; Add
    sub_14DB9D100+7F6  0F 5B F6                                                        cvtdq2ps xmm6, xmm6     ; Convert Packed Doubleword Integers to Packed Double-Precision Floating-Point Values
    sub_14DB9D100+7F9  FF 15 71 CE CA 08                                               call    cs:qword_15684A770 ; Indirect Call Near Procedure
    sub_14DB9D100+7FF  F3 0F 11 70 2C                                                  movss   dword ptr [rax+2Ch], xmm6 ; Move Scalar Single-FP
    sub_14DB9D100+804  0F 28 B4 24 F0 00 00 00                                         movaps  xmm6, xmmword ptr [rsp+0F0h] ; Move Aligned Four Packed Single-FP
    sub_14DB9D100+80C
    sub_14DB9D100+80C                                                  loc_14DB9D90C:                          ; CODE XREF: sub_14DB9D100+44↑j
    sub_14DB9D100+80C  48 81 C4 20 01 00 00                                            add     rsp, 120h       ; Add
    sub_14DB9D100+813  41 5C                                                           pop     r12
    sub_14DB9D100+815  5E                                                              pop     rsi
    sub_14DB9D100+816  5B                                                              pop     rbx
    sub_14DB9D100+817  C3                                                              retn                    ; Return Near from Procedure
    sub_14DB9D100+817                                                  sub_14DB9D100   endp
    sub_14DB9D100+817
    sub_14DB9D100+817                                                  ; ---------------------------------------------------------------------------
    .text:000000014DB9D918 CC CC CC CC CC CC CC CC                                         align 20h
*/






``` 
