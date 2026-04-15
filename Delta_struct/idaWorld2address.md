
---
aob scan found 2 Address Uworld cs:qword_156A1DFB8
---
```text
Address	                Function	            Instruction
.text:00000001452CD9BF	sub_1452CD950	mov     rsi, cs:qword_156A1DFB8
.text:000000014EAE12E7	sub_14EAE1150	mov     rsi, cs:qword_156A1DFB8
```

---
ChackMemoryImm
---
```asm
Address								Function							Instruction
.text:00000001452CD9BF	sub_1452CD950	mov     rsi, cs:qword_156A1DFB8 
 

	.text:00000001452CD9BF 48 8B 35 F2 05 75 11                    mov     rsi, cs:qword_156A1DFB8     (Offset = 0x00)
	.text:00000001452CD9C6 EB 31                                   jmp     short loc_1452CD9F9 ; Jump
	.text:00000001452CD9C8                         ; ---------------------------------------------------------------------------
	.text:00000001452CD9C8
	.text:00000001452CD9C8                         loc_1452CD9C8:                          ; CODE XREF: sub_1452CD950+6D↑j
	.text:00000001452CD9C8 48 8B 0D E9 25 75 11                    mov     rcx, qword ptr cs:unk_156A1FFB8     (Offset = 0x10)
	.text:00000001452CD9CF 0F B6 05 E9 25 75 11                    movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
	.text:00000001452CD9D6 48 89 8C 24 98 00 00 00                 mov     [rsp+98h], rcx 
	.text:00000001452CD9DE 34 36                                   xor     al, 36h         ; Logical Exclusive OR       (Offset = 0x1F)
	.text:00000001452CD9E0 80 F1 36                                xor     cl, 36h         ; Logical Exclusive OR        (Offset = 0x21)
	.text:00000001452CD9E3 88 84 24 98 00 00 00                    mov     [rsp+98h], al  
	.text:00000001452CD9EA 88 8C 24 9F 00 00 00                    mov     [rsp+9Fh], cl
	.text:00000001452CD9F1 48 8B B4 24 98 00 00 00                 mov     rsi, [rsp+98h]
	
	
	
.text:000000014EAE12E7	sub_14EAE1150	mov     rsi, cs:qword_156A1DFB8 
	.text:000000014EAE12E7 48 8B 35 CA CC F3 07                    mov     rsi, cs:qword_156A1DFB8    												 (Offset = 0x00)
	.text:000000014EAE12EE EB 31                                   				jmp     short loc_14EAE1321 				; Jump
	.text:000000014EAE12F0                         ; ---------------------------------------------------------------------------
	.text:000000014EAE12F0
	.text:000000014EAE12F0                         loc_14EAE12F0:                          ; CODE XREF: sub_14EAE1150+195↑j
	.text:000000014EAE12F0 48 8B 0D C1 EC F3 07                    	mov     rcx, qword ptr cs:unk_156A1FFB8   								(Offset = 0x10)
	.text:000000014EAE12F7 0F B6 05 C1 EC F3 07                    	movzx   eax, cs:byte_156A1FFBF		 ; Move with Zero-Extend
	.text:000000014EAE12FE 48 89 8C 24 D0 00 00 00          		mov     [rsp+0D0h], rcx 																(Offset = 0x17)
	.text:000000014EAE1306 34 36                                   			xor     al, 36h        								 ; Logical Exclusive OR		(Offset = 0x1F)
	.text:000000014EAE1308 80 F1 36                                			xor     cl, 36h         								; Logical Exclusive OR		(Offset = 0x21)
	.text:000000014EAE130B 88 84 24 D0 00 00 00                    mov     [rsp+0D0h], al																	(Offset = 0x24)
	.text:000000014EAE1312 88 8C 24 D7 00 00 00                    mov     [rsp+0D7h], cl																	(Offset = 0x2B)
	.text:000000014EAE1319 48 8B B4 24 D0 00 00 00        		mov     rsi, [rsp+0D0h]																	(Offset = 0x32)
	
```
 
---
ดีบัคเพิ่ม แบบfull ทั้ง2 ที่ จาก หัวฟังชั้นถึง enc
---
 
 
F5 ที่ส่วนหัวฟังชั้น ของชุดaob .text:00000001452CD9BF	sub_1452CD950	mov     rsi, cs:qword_156A1DFB8  
 
```c   
__int64 __fastcall sub_1452CD950(__int64 a1, __int64 a2, _QWORD *a3)
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
  if ( !v6 && (v6 = sub_14E20AAF0(a3)) == 0
    || (v10 = sub_14EE69040(),
        v7 = *(_QWORD *)(v6 + 8),
        v9 = v10 + 0x30,
        v11 = *(int *)(v10 + 0x38),
        (int)v11 > *(_DWORD *)(v7 + 0x38))
    || (v8 = v11, *(_QWORD *)(*(_QWORD *)(v7 + 0x30) + 8 * v11) != v9) )
  {
    if ( (unsigned __int8)qword_156A1CFB0(v8, v7, v9) )
    {
      v50 = unk_156A1FFB8;
      LOBYTE(v50) = byte_156A1FFBF ^ 0x36;
      HIBYTE(v50) = unk_156A1FFB8 ^ 0x36;
      v6 = v50;
    }
    else
    {
      v6 = qword_156A1DFB8;
    }
  }
  v12 = a3[0x54];
  if ( !v12 )
    return 0LL;
  if ( *(_DWORD *)(a2 + 0x18) )
    v13 = (const _QWORD *)qword_15684A770(a2 + 0x10);
  else
    v13 = &word_1506C8158;
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
    switch ( dword_15684A794 )
    {
      case 1:
        sub_140A8D910(qword_1573D8080, &v50, 4LL, HIWORD(v15) & 0x3FFF);
        goto LABEL_23;
      case 2:
        v18 = qword_1573D8088;
        v19 = (unsigned int)v17;
        break;
      case 3:
        v18 = *(&qword_1573D8090 + v17);
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
  v20 = (_QWORD *)sub_14C8D5430(v48, v13, 1LL);
  sub_14CC43320(&v47, v16, v51, *v20);
  if ( !*(_BYTE *)(a1 + 8) )
  {
    v26 = v47;
    v27 = v12;
    if ( v12 == 0xFFFFFFFFFFFFFFFFuLL )
      v27 = sub_14CBE05F0();
    v28 = sub_14CC4E870(v3, v27, v26, 0xFFFFFFF, 0LL, 0, 0x7F800000);
    v24 = v28;
    if ( v28 )
    {
      sub_14E2113B0(v28, v6);
      goto LABEL_36;
    }
    return 0LL;
  }
  v21 = sub_1452D3730(v6);
  if ( !v21 )
  {
    if ( (unsigned __int8)byte_157062620 >= 2u )
      sub_14C829130(
        (unsigned int)"Unknown",
        0x1CD,
        (unsigned int)&unk_157062624,
        2,
        (__int64)L"failed to destroy component because player manager is null");
    return 0LL;
  }
  v22 = sub_1452D3790(v21 + 0x88, a3[0x52], v6);
  v23 = sub_1452D4A20(v22, a2);
  v24 = v23;
  if ( !v23 )
    return 0LL;
  sub_14E060EC0(v12, v23);
LABEL_36:
  v29 = sub_14EE33060();
  v31 = *(_QWORD *)(v24 + 8);
  v32 = v29 + 0x30;
  v33 = *(int *)(v29 + 0x38);
  if ( (int)v33 > *(_DWORD *)(v31 + 0x38) )
    goto LABEL_51;
  v30 = v33;
  if ( *(_QWORD *)(*(_QWORD *)(v31 + 0x30) + 8 * v33) != v32 || !v24 )
    goto LABEL_51;
  sub_14E2DE710(v24, (unsigned int)&xmmword_1573A8BB0, 0, 0, 0);
  v34 = *(_QWORD *)(v12 + 0x180);
  v51 = 0LL;
  if ( v34 )
  {
    v14 = v34 & 0xFFFFFFFFFFFFLL;
    v35 = HIWORD(v34) & 0x3FFF;
    v50 = v34 & 0xFFFFFFFFFFFFLL;
    if ( (v34 & 0x8000000000000000uLL) != 0LL )
    {
      switch ( dword_15684A794 )
      {
        case 1:
          sub_140A8D910(qword_1573D8080, &v50, 4LL, HIWORD(v34) & 0x3FFF);
          goto LABEL_48;
        case 2:
          v36 = qword_1573D8088;
          v37 = (unsigned int)v35;
          break;
        case 3:
          v37 = HIWORD(v34) & 0x3FFF;
          v36 = *(&qword_1573D8090 + v35);
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
  sub_14E2BBD50(v24, v14, &dword_157532A38, v51);
LABEL_51:
  v38 = sub_14EDFFFD0(v30, v31, v32);
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
  v43 = sub_14EE3AEA0(v39, v40, v41);
  v44 = *(_QWORD *)(v24 + 8);
  v45 = v43 + 0x30;
  v46 = *(int *)(v43 + 0x38);
  if ( (int)v46 <= *(_DWORD *)(v44 + 0x38) && *(_QWORD *)(*(_QWORD *)(v44 + 0x30) + 8 * v46) == v45 )
  {
    if ( v24 )
    {
      sub_14E2DC760(v24, 2LL);
      sub_14E2DC530(v24, 0LL);
    }
  }
  return v24;
}



```
```asm
.text:00000001452CD950                         ; __int64 __fastcall sub_1452CD950(__int64, __int64, _QWORD *)
.text:00000001452CD950                         sub_1452CD950   proc near               ; CODE XREF: sub_1452CD790+137↑p
.text:00000001452CD950
.text:00000001452CD950                         var_68          = qword ptr -68h
.text:00000001452CD950                         var_60          = dword ptr -60h
.text:00000001452CD950                         var_58          = dword ptr -58h
.text:00000001452CD950                         var_48          = qword ptr -48h
.text:00000001452CD950                         var_40          = byte ptr -40h
.text:00000001452CD950                         arg_0           = qword ptr  8
.text:00000001452CD950                         arg_8           = qword ptr  10h
.text:00000001452CD950                         arg_10          = qword ptr  18h
.text:00000001452CD950                         arg_18          = qword ptr  20h
.text:00000001452CD950
.text:00000001452CD950 48 89 4C 24 08                          mov     [rsp+8], rcx
.text:00000001452CD955 53                                      push    rbx
.text:00000001452CD956 55                                      push    rbp
.text:00000001452CD957 56                                      push    rsi
.text:00000001452CD958 57                                      push    rdi
.text:00000001452CD959 41 55                                   push    r13
.text:00000001452CD95B 41 56                                   push    r14
.text:00000001452CD95D 41 57                                   push    r15
.text:00000001452CD95F 48 83 EC 50                             sub     rsp, 50h        ; Integer Subtraction
.text:00000001452CD963 4C 8B 6A 20                             mov     r13, [rdx+20h]
.text:00000001452CD967 4D 8B F0                                mov     r14, r8
.text:00000001452CD96A 4C 8B FA                                mov     r15, rdx
.text:00000001452CD96D 4D 85 ED                                test    r13, r13        ; Logical Compare
.text:00000001452CD970 0F 84 67 02 00 00                       jz      loc_1452CDBDD   ; Jump if Zero (ZF=1)
.text:00000001452CD976 49 8B B0 F0 00 00 00                    mov     rsi, [r8+0F0h]
.text:00000001452CD97D 48 85 F6                                test    rsi, rsi        ; Logical Compare
.text:00000001452CD980 75 10                                   jnz     short loc_1452CD992 ; Jump if Not Zero (ZF=0)
.text:00000001452CD982 49 8B C8                                mov     rcx, r8
.text:00000001452CD985 E8 66 D1 F3 08                          call    sub_14E20AAF0   ; Call Procedure
.text:00000001452CD98A 48 8B F0                                mov     rsi, rax
.text:00000001452CD98D 48 85 C0                                test    rax, rax        ; Logical Compare
.text:00000001452CD990 74 23                                   jz      short loc_1452CD9B5 ; Jump if Zero (ZF=1)
.text:00000001452CD992
.text:00000001452CD992                         loc_1452CD992:                          ; CODE XREF: sub_1452CD950+30↑j
.text:00000001452CD992 E8 A9 B6 B9 09                          call    sub_14EE69040   ; Call Procedure
.text:00000001452CD997 48 8B 56 08                             mov     rdx, [rsi+8]
.text:00000001452CD99B 4C 8D 40 30                             lea     r8, [rax+30h]   ; Load Effective Address
.text:00000001452CD99F 48 63 40 38                             movsxd  rax, dword ptr [rax+38h] ; Move with Sign-Extend Doubleword
.text:00000001452CD9A3 3B 42 38                                cmp     eax, [rdx+38h]  ; Compare Two Operands
.text:00000001452CD9A6 7F 0D                                   jg      short loc_1452CD9B5 ; Jump if Greater (ZF=0 & SF=OF)
.text:00000001452CD9A8 48 8B C8                                mov     rcx, rax
.text:00000001452CD9AB 48 8B 42 30                             mov     rax, [rdx+30h]
.text:00000001452CD9AF 4C 39 04 C8                             cmp     [rax+rcx*8], r8 ; Compare Two Operands
.text:00000001452CD9B3 74 44                                   jz      short loc_1452CD9F9 ; Jump if Zero (ZF=1)
.text:00000001452CD9B5
.text:00000001452CD9B5                         loc_1452CD9B5:                          ; CODE XREF: sub_1452CD950+40↑j
.text:00000001452CD9B5                                                                 ; sub_1452CD950+56↑j
.text:00000001452CD9B5 FF 15 F5 F5 74 11                       call    cs:qword_156A1CFB0 ; Indirect Call Near Procedure
.text:00000001452CD9BB 84 C0                                   test    al, al          ; Logical Compare
.text:00000001452CD9BD 75 09                                   jnz     short loc_1452CD9C8 ; Jump if Not Zero (ZF=0)
.text:00000001452CD9BF 48 8B 35 F2 05 75 11                    mov     rsi, cs:qword_156A1DFB8
.text:00000001452CD9C6 EB 31                                   jmp     short loc_1452CD9F9 ; Jump
.text:00000001452CD9C8                         ; ---------------------------------------------------------------------------
.text:00000001452CD9C8
.text:00000001452CD9C8                         loc_1452CD9C8:                          ; CODE XREF: sub_1452CD950+6D↑j
.text:00000001452CD9C8 48 8B 0D E9 25 75 11                    mov     rcx, qword ptr cs:unk_156A1FFB8
.text:00000001452CD9CF 0F B6 05 E9 25 75 11                    movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
.text:00000001452CD9D6 48 89 8C 24 98 00 00 00                 mov     [rsp+98h], rcx
.text:00000001452CD9DE 34 36                                   xor     al, 36h         ; Logical Exclusive OR
.text:00000001452CD9E0 80 F1 36                                xor     cl, 36h         ; Logical Exclusive OR
.text:00000001452CD9E3 88 84 24 98 00 00 00                    mov     [rsp+98h], al
.text:00000001452CD9EA 88 8C 24 9F 00 00 00                    mov     [rsp+9Fh], cl
.text:00000001452CD9F1 48 8B B4 24 98 00 00 00                 mov     rsi, [rsp+98h]
.text:00000001452CD9F9
.text:00000001452CD9F9                         loc_1452CD9F9:                          ; CODE XREF: sub_1452CD950+63↑j
.text:00000001452CD9F9                                                                 ; sub_1452CD950+76↑j
.text:00000001452CD9F9 49 8B AE A0 02 00 00                    mov     rbp, [r14+2A0h]
.text:00000001452CDA00 48 85 ED                                test    rbp, rbp        ; Logical Compare
.text:00000001452CDA03 0F 84 D4 01 00 00                       jz      loc_1452CDBDD   ; Jump if Zero (ZF=1)
.text:00000001452CDA09 41 83 7F 18 00                          cmp     dword ptr [r15+18h], 0 ; Compare Two Operands
.text:00000001452CDA0E 49 8D 4F 10                             lea     rcx, [r15+10h]  ; Load Effective Address
.text:00000001452CDA12 4C 89 A4 24 A0 00 00 00                 mov     [rsp+0A0h], r12
.text:00000001452CDA1A 74 0B                                   jz      short loc_1452CDA27 ; Jump if Zero (ZF=1)
.text:00000001452CDA1C FF 15 4E CD 57 11                       call    cs:qword_15684A770 ; Indirect Call Near Procedure
.text:00000001452CDA22 4C 8B E0                                mov     r12, rax
.text:00000001452CDA25 EB 07                                   jmp     short loc_1452CDA2E ; Jump
.text:00000001452CDA27                         ; ---------------------------------------------------------------------------
.text:00000001452CDA27
.text:00000001452CDA27                         loc_1452CDA27:                          ; CODE XREF: sub_1452CD950+CA↑j
.text:00000001452CDA27 4C 8D 25 2A A7 3F 0B                    lea     r12, word_1506C8158 ; Load Effective Address
.text:00000001452CDA2E
.text:00000001452CDA2E                         loc_1452CDA2E:                          ; CODE XREF: sub_1452CD950+D5↑j
.text:00000001452CDA2E 49 8B 45 08                             mov     rax, [r13+8]
.text:00000001452CDA32 48 8D 15 57 A6 10 12                    lea     rdx, qword_1573D8090 ; Load Effective Address
.text:00000001452CDA39 48 89 84 24 A8 00 00 00                 mov     [rsp+0A8h], rax
.text:00000001452CDA41 33 FF                                   xor     edi, edi        ; Logical Exclusive OR
.text:00000001452CDA43 48 8B 86 F8 00 00 00                    mov     rax, [rsi+0F8h]
.text:00000001452CDA4A 48 B9 FF FF FF FF FF FF                 mov     rcx, 0FFFFFFFFFFFFh
.text:00000001452CDA4A 00 00
.text:00000001452CDA54 90                                      nop                     ; No Operation
.text:00000001452CDA55 48 85 C0                                test    rax, rax        ; Logical Compare
.text:00000001452CDA58 75 07                                   jnz     short loc_1452CDA61 ; Jump if Not Zero (ZF=0)
.text:00000001452CDA5A 8B DF                                   mov     ebx, edi
.text:00000001452CDA5C E9 BE 00 00 00                          jmp     loc_1452CDB1F   ; Jump
.text:00000001452CDA61                         ; ---------------------------------------------------------------------------
.text:00000001452CDA61
.text:00000001452CDA61                         loc_1452CDA61:                          ; CODE XREF: sub_1452CD950+108↑j
.text:00000001452CDA61 48 8B D8                                mov     rbx, rax
.text:00000001452CDA64 48 23 D9                                and     rbx, rcx        ; Logical AND
.text:00000001452CDA67 48 8B C8                                mov     rcx, rax
.text:00000001452CDA6A 48 C1 E9 30                             shr     rcx, 30h        ; Shift Logical Right
.text:00000001452CDA6E 81 E1 FF 3F 00 00                       and     ecx, 3FFFh      ; Logical AND
.text:00000001452CDA74 48 C1 E8 3F                             shr     rax, 3Fh        ; Shift Logical Right
.text:00000001452CDA78 48 89 9C 24 98 00 00 00                 mov     [rsp+98h], rbx
.text:00000001452CDA80 84 C0                                   test    al, al          ; Logical Compare
.text:00000001452CDA82 0F 84 97 00 00 00                       jz      loc_1452CDB1F   ; Jump if Zero (ZF=1)
.text:00000001452CDA88 8B 05 06 CD 57 11                       mov     eax, cs:dword_15684A794
.text:00000001452CDA8E 83 F8 01                                cmp     eax, 1          ; Compare Two Operands
.text:00000001452CDA91 75 1F                                   jnz     short loc_1452CDAB2 ; Jump if Not Zero (ZF=0)
.text:00000001452CDA93 44 8B C9                                mov     r9d, ecx
.text:00000001452CDA96 48 8D 94 24 98 00 00 00                 lea     rdx, [rsp+98h]  ; Load Effective Address
.text:00000001452CDA9E 48 8B 0D DB A5 10 12                    mov     rcx, cs:qword_1573D8080
.text:00000001452CDAA5 41 B8 04 00 00 00                       mov     r8d, 4
.text:00000001452CDAAB E8 60 FE 7B FB                          call    sub_140A8D910   ; Call Procedure
.text:00000001452CDAB0 EB 31                                   jmp     short loc_1452CDAE3 ; Jump
.text:00000001452CDAB2                         ; ---------------------------------------------------------------------------
.text:00000001452CDAB2
.text:00000001452CDAB2                         loc_1452CDAB2:                          ; CODE XREF: sub_1452CD950+141↑j
.text:00000001452CDAB2 83 F8 02                                cmp     eax, 2          ; Compare Two Operands
.text:00000001452CDAB5 75 0C                                   jnz     short loc_1452CDAC3 ; Jump if Not Zero (ZF=0)
.text:00000001452CDAB7 48 8B 05 CA A5 10 12                    mov     rax, cs:qword_1573D8088
.text:00000001452CDABE 44 8B C1                                mov     r8d, ecx
.text:00000001452CDAC1 EB 0C                                   jmp     short loc_1452CDACF ; Jump
.text:00000001452CDAC3                         ; ---------------------------------------------------------------------------
.text:00000001452CDAC3
.text:00000001452CDAC3                         loc_1452CDAC3:                          ; CODE XREF: sub_1452CD950+165↑j
.text:00000001452CDAC3 83 F8 03                                cmp     eax, 3          ; Compare Two Operands
.text:00000001452CDAC6 75 1B                                   jnz     short loc_1452CDAE3 ; Jump if Not Zero (ZF=0)
.text:00000001452CDAC8 48 8B 04 CA                             mov     rax, [rdx+rcx*8]
.text:00000001452CDACC 44 8B C1                                mov     r8d, ecx
.text:00000001452CDACF
.text:00000001452CDACF                         loc_1452CDACF:                          ; CODE XREF: sub_1452CD950+171↑j
.text:00000001452CDACF 4C 8B 48 08                             mov     r9, [rax+8]
.text:00000001452CDAD3 48 8D 8C 24 98 00 00 00                 lea     rcx, [rsp+98h]  ; Load Effective Address
.text:00000001452CDADB BA 04 00 00 00                          mov     edx, 4
.text:00000001452CDAE0 FF 50 40                                call    qword ptr [rax+40h] ; Indirect Call Near Procedure
.text:00000001452CDAE3
.text:00000001452CDAE3                         loc_1452CDAE3:                          ; CODE XREF: sub_1452CD950+160↑j
.text:00000001452CDAE3                                                                 ; sub_1452CD950+176↑j
.text:00000001452CDAE3 48 8B 9C 24 98 00 00 00                 mov     rbx, [rsp+98h]
.text:00000001452CDAEB 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:00000001452CDAEB 00 00
.text:00000001452CDAF5 48 23 D8                                and     rbx, rax        ; Logical AND
.text:00000001452CDAF8 48 BA 00 00 00 00 00 00                 mov     rdx, 0FFFF000000000000h
.text:00000001452CDAF8 FF FF
.text:00000001452CDB02 48 8B CB                                mov     rcx, rbx
.text:00000001452CDB05 48 B8 00 00 00 00 00 80                 mov     rax, 0FFFF800000000000h
.text:00000001452CDB05 FF FF
.text:00000001452CDB0F 48 23 C8                                and     rcx, rax        ; Logical AND
.text:00000001452CDB12 48 8B C3                                mov     rax, rbx
.text:00000001452CDB15 48 0B C2                                or      rax, rdx        ; Logical Inclusive OR
.text:00000001452CDB18 48 85 C9                                test    rcx, rcx        ; Logical Compare
.text:00000001452CDB1B 48 0F 45 D8                             cmovnz  rbx, rax        ; Move if Not Zero (ZF=0)
.text:00000001452CDB1F
.text:00000001452CDB1F                         loc_1452CDB1F:                          ; CODE XREF: sub_1452CD950+10C↑j
.text:00000001452CDB1F                                                                 ; sub_1452CD950+132↑j
.text:00000001452CDB1F 41 B8 01 00 00 00                       mov     r8d, 1
.text:00000001452CDB25 48 8D 4C 24 48                          lea     rcx, [rsp+48h]  ; Load Effective Address
.text:00000001452CDB2A 49 8B D4                                mov     rdx, r12
.text:00000001452CDB2D E8 FE 78 60 07                          call    sub_14C8D5430   ; Call Procedure
.text:00000001452CDB32 4C 8B 84 24 A8 00 00 00                 mov     r8, [rsp+0A8h]
.text:00000001452CDB3A 48 8D 4C 24 40                          lea     rcx, [rsp+40h]  ; Load Effective Address
.text:00000001452CDB3F 48 8B D3                                mov     rdx, rbx
.text:00000001452CDB42 4C 8B 08                                mov     r9, [rax]
.text:00000001452CDB45 E8 D6 57 97 07                          call    sub_14CC43320   ; Call Procedure
.text:00000001452CDB4A 48 8B 84 24 90 00 00 00                 mov     rax, [rsp+90h]
.text:00000001452CDB52 4C 8B A4 24 A0 00 00 00                 mov     r12, [rsp+0A0h]
.text:00000001452CDB5A 40 38 78 08                             cmp     [rax+8], dil    ; Compare Two Operands
.text:00000001452CDB5E 0F 84 8A 00 00 00                       jz      loc_1452CDBEE   ; Jump if Zero (ZF=1)
.text:00000001452CDB64 48 8B CE                                mov     rcx, rsi
.text:00000001452CDB67 E8 C4 5B 00 00                          call    sub_1452D3730   ; Call Procedure
.text:00000001452CDB6C 48 85 C0                                test    rax, rax        ; Logical Compare
.text:00000001452CDB6F 74 39                                   jz      short loc_1452CDBAA ; Jump if Zero (ZF=1)
.text:00000001452CDB71 49 8B 96 90 02 00 00                    mov     rdx, [r14+290h]
.text:00000001452CDB78 48 8D 88 88 00 00 00                    lea     rcx, [rax+88h]  ; Load Effective Address
.text:00000001452CDB7F 4C 8B C6                                mov     r8, rsi
.text:00000001452CDB82 E8 09 5C 00 00                          call    sub_1452D3790   ; Call Procedure
.text:00000001452CDB87 49 8B D7                                mov     rdx, r15
.text:00000001452CDB8A 48 8B C8                                mov     rcx, rax
.text:00000001452CDB8D E8 8E 6E 00 00                          call    sub_1452D4A20   ; Call Procedure
.text:00000001452CDB92 48 8B D8                                mov     rbx, rax
.text:00000001452CDB95 48 85 C0                                test    rax, rax        ; Logical Compare
.text:00000001452CDB98 74 43                                   jz      short loc_1452CDBDD ; Jump if Zero (ZF=1)
.text:00000001452CDB9A 48 8B D0                                mov     rdx, rax
.text:00000001452CDB9D 48 8B CD                                mov     rcx, rbp
.text:00000001452CDBA0 E8 1B 33 D9 08                          call    sub_14E060EC0   ; Call Procedure
.text:00000001452CDBA5 E9 8F 00 00 00                          jmp     loc_1452CDC39   ; Jump
.text:00000001452CDBAA                         ; ---------------------------------------------------------------------------
.text:00000001452CDBAA
.text:00000001452CDBAA                         loc_1452CDBAA:                          ; CODE XREF: sub_1452CD950+21F↑j
.text:00000001452CDBAA 80 3D 6F 4A D9 11 02                    cmp     cs:byte_157062620, 2 ; Compare Two Operands
.text:00000001452CDBB1 72 2A                                   jb      short loc_1452CDBDD ; Jump if Below (CF=1)
.text:00000001452CDBB3 48 8D 05 C6 05 CA 0C                    lea     rax, aFailedToDestro ; Load Effective Address
.text:00000001452CDBBA 41 B9 02 00 00 00                       mov     r9d, 2
.text:00000001452CDBC0 4C 8D 05 5D 4A D9 11                    lea     r8, unk_157062624 ; Load Effective Address
.text:00000001452CDBC7 48 89 44 24 20                          mov     [rsp+20h], rax
.text:00000001452CDBCC BA CD 01 00 00                          mov     edx, 1CDh
.text:00000001452CDBD1 48 8D 0D 88 AB 3F 0B                    lea     rcx, aUnknown   ; Load Effective Address
.text:00000001452CDBD8 E8 53 B5 55 07                          call    sub_14C829130   ; Call Procedure
.text:00000001452CDBDD
.text:00000001452CDBDD                         loc_1452CDBDD:                          ; CODE XREF: sub_1452CD950+20↑j
.text:00000001452CDBDD                                                                 ; sub_1452CD950+B3↑j ...
.text:00000001452CDBDD 33 C0                                   xor     eax, eax        ; Logical Exclusive OR
.text:00000001452CDBDF 48 83 C4 50                             add     rsp, 50h        ; Add
.text:00000001452CDBE3 41 5F                                   pop     r15
.text:00000001452CDBE5 41 5E                                   pop     r14
.text:00000001452CDBE7 41 5D                                   pop     r13
.text:00000001452CDBE9 5F                                      pop     rdi
.text:00000001452CDBEA 5E                                      pop     rsi
.text:00000001452CDBEB 5D                                      pop     rbp
.text:00000001452CDBEC 5B                                      pop     rbx
.text:00000001452CDBED C3                                      retn                    ; Return Near from Procedure
.text:00000001452CDBEE                         ; ---------------------------------------------------------------------------
.text:00000001452CDBEE
.text:00000001452CDBEE                         loc_1452CDBEE:                          ; CODE XREF: sub_1452CD950+20E↑j
.text:00000001452CDBEE 48 8B 5C 24 40                          mov     rbx, [rsp+40h]
.text:00000001452CDBF3 48 8B C5                                mov     rax, rbp
.text:00000001452CDBF6 48 83 FD FF                             cmp     rbp, 0FFFFFFFFFFFFFFFFh ; Compare Two Operands
.text:00000001452CDBFA 75 05                                   jnz     short loc_1452CDC01 ; Jump if Not Zero (ZF=0)
.text:00000001452CDBFC E8 EF 29 91 07                          call    sub_14CBE05F0   ; Call Procedure
.text:00000001452CDC01
.text:00000001452CDC01                         loc_1452CDC01:                          ; CODE XREF: sub_1452CD950+2AA↑j
.text:00000001452CDC01 C7 44 24 30 00 00 80 7F                 mov     dword ptr [rsp+30h], 7F800000h
.text:00000001452CDC09 41 B9 FF FF FF 0F                       mov     r9d, 0FFFFFFFh
.text:00000001452CDC0F 89 7C 24 28                             mov     [rsp+28h], edi
.text:00000001452CDC13 4C 8B C3                                mov     r8, rbx
.text:00000001452CDC16 48 8B D0                                mov     rdx, rax
.text:00000001452CDC19 48 89 7C 24 20                          mov     [rsp+20h], rdi
.text:00000001452CDC1E 49 8B CD                                mov     rcx, r13
.text:00000001452CDC21 E8 4A 0C 98 07                          call    sub_14CC4E870   ; Call Procedure
.text:00000001452CDC26 48 8B D8                                mov     rbx, rax
.text:00000001452CDC29 48 85 C0                                test    rax, rax        ; Logical Compare
.text:00000001452CDC2C 74 AF                                   jz      short loc_1452CDBDD ; Jump if Zero (ZF=1)
.text:00000001452CDC2E 48 8B D6                                mov     rdx, rsi
.text:00000001452CDC31 48 8B C8                                mov     rcx, rax
.text:00000001452CDC34 E8 77 37 F4 08                          call    sub_14E2113B0   ; Call Procedure
.text:00000001452CDC39
.text:00000001452CDC39                         loc_1452CDC39:                          ; CODE XREF: sub_1452CD950+255↑j
.text:00000001452CDC39 E8 22 54 B6 09                          call    sub_14EE33060   ; Call Procedure
.text:00000001452CDC3E 48 8B 53 08                             mov     rdx, [rbx+8]
.text:00000001452CDC42 4C 8D 40 30                             lea     r8, [rax+30h]   ; Load Effective Address
.text:00000001452CDC46 48 63 40 38                             movsxd  rax, dword ptr [rax+38h] ; Move with Sign-Extend Doubleword
.text:00000001452CDC4A 3B 42 38                                cmp     eax, [rdx+38h]  ; Compare Two Operands
.text:00000001452CDC4D 0F 8F 2C 01 00 00                       jg      loc_1452CDD7F   ; Jump if Greater (ZF=0 & SF=OF)
.text:00000001452CDC53 48 8B C8                                mov     rcx, rax
.text:00000001452CDC56 48 8B 42 30                             mov     rax, [rdx+30h]
.text:00000001452CDC5A 4C 39 04 C8                             cmp     [rax+rcx*8], r8 ; Compare Two Operands
.text:00000001452CDC5E 0F 85 1B 01 00 00                       jnz     loc_1452CDD7F   ; Jump if Not Zero (ZF=0)
.text:00000001452CDC64 48 85 DB                                test    rbx, rbx        ; Logical Compare
.text:00000001452CDC67 0F 84 12 01 00 00                       jz      loc_1452CDD7F   ; Jump if Zero (ZF=1)
.text:00000001452CDC6D 45 33 C9                                xor     r9d, r9d        ; Logical Exclusive OR
.text:00000001452CDC70 40 88 7C 24 20                          mov     [rsp+20h], dil
.text:00000001452CDC75 45 33 C0                                xor     r8d, r8d        ; Logical Exclusive OR
.text:00000001452CDC78 48 8D 15 31 AF 0D 12                    lea     rdx, xmmword_1573A8BB0 ; Load Effective Address
.text:00000001452CDC7F 48 8B CB                                mov     rcx, rbx
.text:00000001452CDC82 E8 89 0A 01 09                          call    sub_14E2DE710   ; Call Procedure
.text:00000001452CDC87 48 8B 85 80 01 00 00                    mov     rax, [rbp+180h]
.text:00000001452CDC8E 90                                      nop                     ; No Operation
.text:00000001452CDC8F 48 89 BC 24 A8 00 00 00                 mov     [rsp+0A8h], rdi
.text:00000001452CDC97 48 85 C0                                test    rax, rax        ; Logical Compare
.text:00000001452CDC9A 0F 84 C5 00 00 00                       jz      loc_1452CDD65   ; Jump if Zero (ZF=1)
.text:00000001452CDCA0 48 8B C8                                mov     rcx, rax
.text:00000001452CDCA3 48 8B F8                                mov     rdi, rax
.text:00000001452CDCA6 48 C1 E9 30                             shr     rcx, 30h        ; Shift Logical Right
.text:00000001452CDCAA 48 BE FF FF FF FF FF FF                 mov     rsi, 0FFFFFFFFFFFFh
.text:00000001452CDCAA 00 00
.text:00000001452CDCB4 48 23 FE                                and     rdi, rsi        ; Logical AND
.text:00000001452CDCB7 48 C1 E8 3F                             shr     rax, 3Fh        ; Shift Logical Right
.text:00000001452CDCBB 81 E1 FF 3F 00 00                       and     ecx, 3FFFh      ; Logical AND
.text:00000001452CDCC1 48 89 BC 24 98 00 00 00                 mov     [rsp+88h+arg_8], rdi
.text:00000001452CDCC9 84 C0                                   test    al, al          ; Logical Compare
.text:00000001452CDCCB 0F 84 94 00 00 00                       jz      loc_1452CDD65   ; Jump if Zero (ZF=1)
.text:00000001452CDCD1 8B 05 BD CA 57 11                       mov     eax, cs:dword_15684A794
.text:00000001452CDCD7 83 F8 01                                cmp     eax, 1          ; Compare Two Operands
.text:00000001452CDCDA 75 1F                                   jnz     short loc_1452CDCFB ; Jump if Not Zero (ZF=0)
.text:00000001452CDCDC 44 8B C9                                mov     r9d, ecx
.text:00000001452CDCDF 48 8D 94 24 98 00 00 00                 lea     rdx, [rsp+98h]  ; Load Effective Address
.text:00000001452CDCE7 48 8B 0D 92 A3 10 12                    mov     rcx, cs:qword_1573D8080
.text:00000001452CDCEE 41 B8 04 00 00 00                       mov     r8d, 4
.text:00000001452CDCF4 E8 17 FC 7B FB                          call    sub_140A8D910   ; Call Procedure
.text:00000001452CDCF9 EB 38                                   jmp     short loc_1452CDD33 ; Jump
.text:00000001452CDCFB                         ; ---------------------------------------------------------------------------
.text:00000001452CDCFB
.text:00000001452CDCFB                         loc_1452CDCFB:                          ; CODE XREF: sub_1452CD950+38A↑j
.text:00000001452CDCFB 83 F8 02                                cmp     eax, 2          ; Compare Two Operands
.text:00000001452CDCFE 75 0C                                   jnz     short loc_1452CDD0C ; Jump if Not Zero (ZF=0)
.text:00000001452CDD00 48 8B 05 81 A3 10 12                    mov     rax, cs:qword_1573D8088
.text:00000001452CDD07 44 8B C1                                mov     r8d, ecx
.text:00000001452CDD0A EB 13                                   jmp     short loc_1452CDD1F ; Jump
.text:00000001452CDD0C                         ; ---------------------------------------------------------------------------
.text:00000001452CDD0C
.text:00000001452CDD0C                         loc_1452CDD0C:                          ; CODE XREF: sub_1452CD950+3AE↑j
.text:00000001452CDD0C 83 F8 03                                cmp     eax, 3          ; Compare Two Operands
.text:00000001452CDD0F 75 22                                   jnz     short loc_1452CDD33 ; Jump if Not Zero (ZF=0)
.text:00000001452CDD11 48 8D 05 78 A3 10 12                    lea     rax, qword_1573D8090 ; Load Effective Address
.text:00000001452CDD18 44 8B C1                                mov     r8d, ecx
.text:00000001452CDD1B 48 8B 04 C8                             mov     rax, [rax+rcx*8]
.text:00000001452CDD1F
.text:00000001452CDD1F                         loc_1452CDD1F:                          ; CODE XREF: sub_1452CD950+3BA↑j
.text:00000001452CDD1F 4C 8B 48 08                             mov     r9, [rax+8]
.text:00000001452CDD23 48 8D 8C 24 98 00 00 00                 lea     rcx, [rsp+98h]  ; Load Effective Address
.text:00000001452CDD2B BA 04 00 00 00                          mov     edx, 4
.text:00000001452CDD30 FF 50 40                                call    qword ptr [rax+40h] ; Indirect Call Near Procedure
.text:00000001452CDD33
.text:00000001452CDD33                         loc_1452CDD33:                          ; CODE XREF: sub_1452CD950+3A9↑j
.text:00000001452CDD33                                                                 ; sub_1452CD950+3BF↑j
.text:00000001452CDD33 48 8B BC 24 98 00 00 00                 mov     rdi, [rsp+98h]
.text:00000001452CDD3B 48 B8 00 00 00 00 00 80                 mov     rax, 0FFFF800000000000h
.text:00000001452CDD3B FF FF
.text:00000001452CDD45 48 23 FE                                and     rdi, rsi        ; Logical AND
.text:00000001452CDD48 48 BA 00 00 00 00 00 00                 mov     rdx, 0FFFF000000000000h
.text:00000001452CDD48 FF FF
.text:00000001452CDD52 48 8B CF                                mov     rcx, rdi
.text:00000001452CDD55 48 23 C8                                and     rcx, rax        ; Logical AND
.text:00000001452CDD58 48 8B C7                                mov     rax, rdi
.text:00000001452CDD5B 48 0B C2                                or      rax, rdx        ; Logical Inclusive OR
.text:00000001452CDD5E 48 85 C9                                test    rcx, rcx        ; Logical Compare
.text:00000001452CDD61 48 0F 45 F8                             cmovnz  rdi, rax        ; Move if Not Zero (ZF=0)
.text:00000001452CDD65
.text:00000001452CDD65                         loc_1452CDD65:                          ; CODE XREF: sub_1452CD950+34A↑j
.text:00000001452CDD65                                                                 ; sub_1452CD950+37B↑j
.text:00000001452CDD65 4C 8B 8C 24 A8 00 00 00                 mov     r9, [rsp+0A8h]
.text:00000001452CDD6D 4C 8D 05 C4 4C 26 12                    lea     r8, dword_157532A38 ; Load Effective Address
.text:00000001452CDD74 48 8B D7                                mov     rdx, rdi
.text:00000001452CDD77 48 8B CB                                mov     rcx, rbx
.text:00000001452CDD7A E8 D1 DF FE 08                          call    sub_14E2BBD50   ; Call Procedure
.text:00000001452CDD7F
.text:00000001452CDD7F                         loc_1452CDD7F:                          ; CODE XREF: sub_1452CD950+2FD↑j
.text:00000001452CDD7F                                                                 ; sub_1452CD950+30E↑j ...
.text:00000001452CDD7F E8 4C 22 B3 09                          call    sub_14EDFFFD0   ; Call Procedure
.text:00000001452CDD84 48 8B 53 08                             mov     rdx, [rbx+8]
.text:00000001452CDD88 4C 8D 40 30                             lea     r8, [rax+30h]   ; Load Effective Address
.text:00000001452CDD8C 48 63 40 38                             movsxd  rax, dword ptr [rax+38h] ; Move with Sign-Extend Doubleword
.text:00000001452CDD90 3B 42 38                                cmp     eax, [rdx+38h]  ; Compare Two Operands
.text:00000001452CDD93 7F 19                                   jg      short loc_1452CDDAE ; Jump if Greater (ZF=0 & SF=OF)
.text:00000001452CDD95 48 8B C8                                mov     rcx, rax
.text:00000001452CDD98 48 8B 42 30                             mov     rax, [rdx+30h]
.text:00000001452CDD9C 4C 39 04 C8                             cmp     [rax+rcx*8], r8 ; Compare Two Operands
.text:00000001452CDDA0 75 0C                                   jnz     short loc_1452CDDAE ; Jump if Not Zero (ZF=0)
.text:00000001452CDDA2 48 85 DB                                test    rbx, rbx        ; Logical Compare
.text:00000001452CDDA5 74 07                                   jz      short loc_1452CDDAE ; Jump if Zero (ZF=1)
.text:00000001452CDDA7 80 A3 CB 00 00 00 EF                    and     byte ptr [rbx+0CBh], 0EFh ; Logical AND
.text:00000001452CDDAE
.text:00000001452CDDAE                         loc_1452CDDAE:                          ; CODE XREF: sub_1452CD950+443↑j
.text:00000001452CDDAE                                                                 ; sub_1452CD950+450↑j ...
.text:00000001452CDDAE E8 ED D0 B6 09                          call    sub_14EE3AEA0   ; Call Procedure
.text:00000001452CDDB3 48 8B 53 08                             mov     rdx, [rbx+8]
.text:00000001452CDDB7 4C 8D 40 30                             lea     r8, [rax+30h]   ; Load Effective Address
.text:00000001452CDDBB 48 63 40 38                             movsxd  rax, dword ptr [rax+38h] ; Move with Sign-Extend Doubleword
.text:00000001452CDDBF 3B 42 38                                cmp     eax, [rdx+38h]  ; Compare Two Operands
.text:00000001452CDDC2 7F 29                                   jg      short loc_1452CDDED ; Jump if Greater (ZF=0 & SF=OF)
.text:00000001452CDDC4 48 8B C8                                mov     rcx, rax
.text:00000001452CDDC7 48 8B 42 30                             mov     rax, [rdx+30h]
.text:00000001452CDDCB 4C 39 04 C8                             cmp     [rax+rcx*8], r8 ; Compare Two Operands
.text:00000001452CDDCF 75 1C                                   jnz     short loc_1452CDDED ; Jump if Not Zero (ZF=0)
.text:00000001452CDDD1 48 85 DB                                test    rbx, rbx        ; Logical Compare
.text:00000001452CDDD4 74 17                                   jz      short loc_1452CDDED ; Jump if Zero (ZF=1)
.text:00000001452CDDD6 BA 02 00 00 00                          mov     edx, 2
.text:00000001452CDDDB 48 8B CB                                mov     rcx, rbx
.text:00000001452CDDDE E8 7D E9 00 09                          call    sub_14E2DC760   ; Call Procedure
.text:00000001452CDDE3 33 D2                                   xor     edx, edx        ; Logical Exclusive OR
.text:00000001452CDDE5 48 8B CB                                mov     rcx, rbx
.text:00000001452CDDE8 E8 43 E7 00 09                          call    sub_14E2DC530   ; Call Procedure
.text:00000001452CDDED
.text:00000001452CDDED                         loc_1452CDDED:                          ; CODE XREF: sub_1452CD950+472↑j
.text:00000001452CDDED                                                                 ; sub_1452CD950+47F↑j ...
.text:00000001452CDDED 48 8B C3                                mov     rax, rbx
.text:00000001452CDDF0 48 83 C4 50                             add     rsp, 50h        ; Add
.text:00000001452CDDF4 41 5F                                   pop     r15
.text:00000001452CDDF6 41 5E                                   pop     r14
.text:00000001452CDDF8 41 5D                                   pop     r13
.text:00000001452CDDFA 5F                                      pop     rdi
.text:00000001452CDDFB 5E                                      pop     rsi
.text:00000001452CDDFC 5D                                      pop     rbp
.text:00000001452CDDFD 5B                                      pop     rbx
.text:00000001452CDDFE C3                                      retn                    ; Return Near from Procedure
.text:00000001452CDDFE                         sub_1452CD950   endp
.text:00000001452CDDFE
.text:00000001452CDDFE                         ; ---------------------------------------------------------------------------
.text:00000001452CDDFF CC                                      align 20h
.text:00000001452CDE00
```

F5 จุดที่ 2 ตรง .text:00000001452CD9BF	sub_1452CD950	mov     rsi, cs:qword_156A1DFB8

```c
__int64 __fastcall sub_14EAE1150(__int64 a1)
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
  const _QWORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  const _QWORD *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  double v27; // xmm6_8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v31; // [rsp+40h] [rbp-78h]
  __int64 v32; // [rsp+48h] [rbp-70h]
  __int64 v33; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v35; // [rsp+D0h] [rbp+18h]
  __int64 v36; // [rsp+D8h] [rbp+20h]

  v33 = a1;
  v1 = a1;
  MEMORY[0x206DC7A5](&v34);
  v2 = *(int *)(v1 + 0x920);
  v3 = 0LL;
  v4 = v2;
  v32 = v2;
  v5 = (double)(int)v34 * *(double *)&qword_1573247A0;
  if ( (int)v2 > 0 )
  {
    v6 = v1 + 0x918;
    v7 = v1 + 0xDF0;
    v31 = v1 + 0x918;
    v8 = 0LL;
    v36 = v4;
    do
    {
      for ( i = 0; i >= 0 && i < *(_DWORD *)(v7 + 8); ++i )
      {
        if ( **(_BYTE **)(qword_15684A770(v7) + 8LL * i) != 6 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(qword_15684A770(v7) + 8LL * i) + 0x218LL) )
          {
            v10 = qword_15684A770(v7);
            if ( sub_14E3F4A60(*(_QWORD *)(*(_QWORD *)(v10 + 8LL * i) + 0x218LL)) )
            {
              v11 = qword_15684A770(v7);
              v12 = (_QWORD *)sub_14E3F4A60(*(_QWORD *)(*(_QWORD *)(v11 + 8LL * i) + 0x218LL));
              if ( v12 )
              {
                v13 = v8 + qword_15684A770(v6);
                if ( *(_DWORD *)(v13 + 8) )
                  v14 = (const _QWORD *)qword_15684A770(v13);
                else
                  v14 = &word_1506C8158;
                v15 = v12[5];
                v16 = sub_14C8A27C0();
                v17 = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 0x158LL))(v12);
                (*(void (__fastcall **)(_QWORD *, __int64, const _QWORD *, __int64))(v15 + 8))(v12 + 5, v17, v14, v16);
                goto LABEL_22;
              }
              break;
            }
          }
        }
      }
      v18 = v8 + qword_15684A770(v6);
      if ( *(_DWORD *)(v18 + 8) )
        v22 = (const _QWORD *)qword_15684A770(v18);
      else
        v22 = &word_1506C8158;
      if ( (unsigned __int8)qword_156A1CFB0(v20, v19, v21) )
      {
        v35 = unk_156A1FFB8;
        LOBYTE(v35) = byte_156A1FFBF ^ 0x36;
        HIBYTE(v35) = unk_156A1FFB8 ^ 0x36;
        v23 = v35;
      }
      else
      {
        v23 = qword_156A1DFB8;
      }
      v24 = v33;
      v25 = *(_QWORD *)(v33 + 0x28);
      v26 = sub_14C8A27C0();
      (*(void (__fastcall **)(__int64, __int64, const _QWORD *, __int64))(v25 + 8))(v24 + 0x28, v23, v22, v26);
LABEL_22:
      v6 = v31;
      v8 += 0x10LL;
      --v36;
    }
    while ( v36 );
    v4 = v32;
    LODWORD(v2) = v32;
    v1 = v33;
  }
  MEMORY[0x206DC7A5](&v33);
  v27 = ((double)(int)v33 * *(double *)&qword_1573247A0 - v5) * 0.001;
  if ( v27 >= sub_14E729D80() )
  {
    if ( (unsigned __int8)byte_157565C28 >= 3u )
      sub_14C829130((unsigned int)"Unknown", 0x9C7, (unsigned int)&unk_157565C2C, 3, 0x154C5FCF0LL);
    if ( v4 > 0 )
    {
      do
      {
        if ( (unsigned __int8)byte_157565C28 >= 3u )
        {
          v29 = v3 + qword_15684A770(v1 + 0x918);
          if ( *(_DWORD *)(v29 + 8) )
            qword_15684A770(v29);
          sub_14C829130((unsigned int)"Unknown", 0x9CB, (unsigned int)&unk_157565C2C, 3, (__int64)L"\t%s");
        }
        v3 += 0x10LL;
        --v4;
      }
      while ( v4 );
    }
  }
  LOBYTE(v28) = 1;
  return sub_1412E3A20(v1 + 0x918, 0LL, (unsigned int)v2, v28);
}

```
```asm

.text:000000014EAE1150                         ; __int64 __fastcall sub_14EAE1150(__int64)
.text:000000014EAE1150                         sub_14EAE1150   proc near               ; CODE XREF: sub_140A83840:loc_140A8506B↑p
.text:000000014EAE1150
.text:000000014EAE1150                         var_98          = qword ptr -98h
.text:000000014EAE1150                         var_90          = qword ptr -90h
.text:000000014EAE1150                         var_88          = dword ptr -88h
.text:000000014EAE1150                         var_78          = qword ptr -78h
.text:000000014EAE1150                         var_70          = qword ptr -70h
.text:000000014EAE1150                         var_68          = xmmword ptr -68h
.text:000000014EAE1150                         var_58          = xmmword ptr -58h
.text:000000014EAE1150                         var_40          = qword ptr -40h
.text:000000014EAE1150                         var_38          = qword ptr -38h
.text:000000014EAE1150                         var_30          = qword ptr -30h
.text:000000014EAE1150                         arg_0           = qword ptr  8
.text:000000014EAE1150                         arg_8           = qword ptr  10h
.text:000000014EAE1150                         arg_10          = qword ptr  18h
.text:000000014EAE1150                         arg_18          = qword ptr  20h
.text:000000014EAE1150
.text:000000014EAE1150 48 8B C4                                mov     rax, rsp
.text:000000014EAE1153 48 89 48 08                             mov     [rax+8], rcx
.text:000000014EAE1157 53                                      push    rbx
.text:000000014EAE1158 55                                      push    rbp
.text:000000014EAE1159 56                                      push    rsi
.text:000000014EAE115A 57                                      push    rdi
.text:000000014EAE115B 41 55                                   push    r13
.text:000000014EAE115D 48 81 EC 90 00 00 00                    sub     rsp, 90h        ; Integer Subtraction
.text:000000014EAE1164 48 8B F9                                mov     rdi, rcx
.text:000000014EAE1167 0F 29 70 A8                             movaps  xmmword ptr [rax-58h], xmm6 ; Move Aligned Four Packed Single-FP
.text:000000014EAE116B 48 8D 48 10                             lea     rcx, [rax+10h]  ; Load Effective Address
.text:000000014EAE116F 0F 29 78 98                             movaps  xmmword ptr [rax-68h], xmm7 ; Move Aligned Four Packed Single-FP
.text:000000014EAE1173 FF 15 57 9D A9 01                       call    cs:qword_15057AED0 ; Indirect Call Near Procedure
.text:000000014EAE1179 48 63 B7 20 09 00 00                    movsxd  rsi, dword ptr [rdi+920h] ; Move with Sign-Extend Doubleword
.text:000000014EAE1180 0F 57 FF                                xorps   xmm7, xmm7      ; Bitwise Logical XOR for Single-FP Data
.text:000000014EAE1183 F2 48 0F 2A BC 24 C8 00                 cvtsi2sd xmm7, qword ptr [rsp+0C8h] ; Convert Doubleword Integer to Scalar Double-Precision Floating-Point Value
.text:000000014EAE1183 00 00
.text:000000014EAE118D 45 33 ED                                xor     r13d, r13d      ; Logical Exclusive OR
.text:000000014EAE1190 48 8B DE                                mov     rbx, rsi
.text:000000014EAE1193 48 89 5C 24 48                          mov     [rsp+48h], rbx
.text:000000014EAE1198 F2 0F 59 3D 00 36 84 08                 mulsd   xmm7, cs:qword_1573247A0 ; Multiply Scalar Double-Precision Floating-Point Values
.text:000000014EAE11A0 85 F6                                   test    esi, esi        ; Logical Compare
.text:000000014EAE11A2 0F 8E D6 01 00 00                       jle     loc_14EAE137E   ; Jump if Less or Equal (ZF=1 | SF!=OF)
.text:000000014EAE11A8 4C 89 A4 24 88 00 00 00                 mov     [rsp+88h], r12
.text:000000014EAE11B0 48 8D B7 18 09 00 00                    lea     rsi, [rdi+918h] ; Load Effective Address
.text:000000014EAE11B7 4C 89 B4 24 80 00 00 00                 mov     [rsp+80h], r14
.text:000000014EAE11BF 48 8D AF F0 0D 00 00                    lea     rbp, [rdi+0DF0h] ; Load Effective Address
.text:000000014EAE11C6 48 89 74 24 40                          mov     [rsp+40h], rsi
.text:000000014EAE11CB 45 8B E5                                mov     r12d, r13d
.text:000000014EAE11CE 4C 89 7C 24 78                          mov     [rsp+78h], r15
.text:000000014EAE11D3 48 89 9C 24 D8 00 00 00                 mov     [rsp+0D8h], rbx
.text:000000014EAE11DB 0F 1F 44 00 00                          nop     dword ptr [rax+rax+00h] ; No Operation
.text:000000014EAE11E0
.text:000000014EAE11E0                         loc_14EAE11E0:                          ; CODE XREF: sub_14EAE1150+204↓j
.text:000000014EAE11E0 41 8B DD                                mov     ebx, r13d
.text:000000014EAE11E3
.text:000000014EAE11E3                         loc_14EAE11E3:                          ; CODE XREF: sub_14EAE1150+EF↓j
.text:000000014EAE11E3 85 DB                                   test    ebx, ebx        ; Logical Compare
.text:000000014EAE11E5 0F 88 CB 00 00 00                       js      loc_14EAE12B6   ; Jump if Sign (SF=1)
.text:000000014EAE11EB 3B 5D 08                                cmp     ebx, [rbp+8]    ; Compare Two Operands
.text:000000014EAE11EE 0F 8D C2 00 00 00                       jge     loc_14EAE12B6   ; Jump if Greater or Equal (SF=OF)
.text:000000014EAE11F4 48 8B CD                                mov     rcx, rbp
.text:000000014EAE11F7 FF 15 73 95 D6 07                       call    cs:qword_15684A770 ; Indirect Call Near Procedure
.text:000000014EAE11FD 48 63 FB                                movsxd  rdi, ebx        ; Move with Sign-Extend Doubleword
.text:000000014EAE1200 48 8B 04 F8                             mov     rax, [rax+rdi*8]
.text:000000014EAE1204 80 38 06                                cmp     byte ptr [rax], 6 ; Compare Two Operands
.text:000000014EAE1207 74 34                                   jz      short loc_14EAE123D ; Jump if Zero (ZF=1)
.text:000000014EAE1209 48 8B CD                                mov     rcx, rbp
.text:000000014EAE120C FF 15 5E 95 D6 07                       call    cs:qword_15684A770 ; Indirect Call Near Procedure
.text:000000014EAE1212 48 8B 0C F8                             mov     rcx, [rax+rdi*8]
.text:000000014EAE1216 4C 39 A9 18 02 00 00                    cmp     [rcx+218h], r13 ; Compare Two Operands
.text:000000014EAE121D 74 1E                                   jz      short loc_14EAE123D ; Jump if Zero (ZF=1)
.text:000000014EAE121F 48 8B CD                                mov     rcx, rbp
.text:000000014EAE1222 FF 15 48 95 D6 07                       call    cs:qword_15684A770 ; Indirect Call Near Procedure
.text:000000014EAE1228 48 8B 0C F8                             mov     rcx, [rax+rdi*8]
.text:000000014EAE122C 48 8B 89 18 02 00 00                    mov     rcx, [rcx+218h]
.text:000000014EAE1233 E8 28 38 91 FF                          call    sub_14E3F4A60   ; Call Procedure
.text:000000014EAE1238 48 85 C0                                test    rax, rax        ; Logical Compare
.text:000000014EAE123B 75 04                                   jnz     short loc_14EAE1241 ; Jump if Not Zero (ZF=0)
.text:000000014EAE123D
.text:000000014EAE123D                         loc_14EAE123D:                          ; CODE XREF: sub_14EAE1150+B7↑j
.text:000000014EAE123D                                                                 ; sub_14EAE1150+CD↑j
.text:000000014EAE123D FF C3                                   inc     ebx             ; Increment by 1
.text:000000014EAE123F EB A2                                   jmp     short loc_14EAE11E3 ; Jump
.text:000000014EAE1241                         ; ---------------------------------------------------------------------------
.text:000000014EAE1241
.text:000000014EAE1241                         loc_14EAE1241:                          ; CODE XREF: sub_14EAE1150+EB↑j
.text:000000014EAE1241 48 8B CD                                mov     rcx, rbp
.text:000000014EAE1244 FF 15 26 95 D6 07                       call    cs:qword_15684A770 ; Indirect Call Near Procedure
.text:000000014EAE124A 48 8B 0C F8                             mov     rcx, [rax+rdi*8]
.text:000000014EAE124E 48 8B 89 18 02 00 00                    mov     rcx, [rcx+218h]
.text:000000014EAE1255 E8 06 38 91 FF                          call    sub_14E3F4A60   ; Call Procedure
.text:000000014EAE125A 4C 8B F8                                mov     r15, rax
.text:000000014EAE125D 48 85 C0                                test    rax, rax        ; Logical Compare
.text:000000014EAE1260 74 54                                   jz      short loc_14EAE12B6 ; Jump if Zero (ZF=1)
.text:000000014EAE1262 48 8B CE                                mov     rcx, rsi
.text:000000014EAE1265 FF 15 05 95 D6 07                       call    cs:qword_15684A770 ; Indirect Call Near Procedure
.text:000000014EAE126B 49 03 C4                                add     rax, r12        ; Add
.text:000000014EAE126E 44 39 68 08                             cmp     [rax+8], r13d   ; Compare Two Operands
.text:000000014EAE1272 74 0E                                   jz      short loc_14EAE1282 ; Jump if Zero (ZF=1)
.text:000000014EAE1274 48 8B C8                                mov     rcx, rax
.text:000000014EAE1277 FF 15 F3 94 D6 07                       call    cs:qword_15684A770 ; Indirect Call Near Procedure
.text:000000014EAE127D 4C 8B F0                                mov     r14, rax
.text:000000014EAE1280 EB 07                                   jmp     short loc_14EAE1289 ; Jump
.text:000000014EAE1282                         ; ---------------------------------------------------------------------------
.text:000000014EAE1282
.text:000000014EAE1282                         loc_14EAE1282:                          ; CODE XREF: sub_14EAE1150+122↑j
.text:000000014EAE1282 4C 8D 35 CF 6E BE 01                    lea     r14, word_1506C8158 ; Load Effective Address
.text:000000014EAE1289
.text:000000014EAE1289                         loc_14EAE1289:                          ; CODE XREF: sub_14EAE1150+130↑j
.text:000000014EAE1289 49 8B 77 28                             mov     rsi, [r15+28h]
.text:000000014EAE128D E8 2E 15 DC FD                          call    sub_14C8A27C0   ; Call Procedure
.text:000000014EAE1292 49 8B 17                                mov     rdx, [r15]
.text:000000014EAE1295 49 8B CF                                mov     rcx, r15
.text:000000014EAE1298 48 8B D8                                mov     rbx, rax
.text:000000014EAE129B FF 92 58 01 00 00                       call    qword ptr [rdx+158h] ; Indirect Call Near Procedure
.text:000000014EAE12A1 4C 8B CB                                mov     r9, rbx
.text:000000014EAE12A4 49 8D 4F 28                             lea     rcx, [r15+28h]  ; Load Effective Address
.text:000000014EAE12A8 48 8B D0                                mov     rdx, rax
.text:000000014EAE12AB 4D 8B C6                                mov     r8, r14
.text:000000014EAE12AE FF 56 08                                call    qword ptr [rsi+8] ; Indirect Call Near Procedure
.text:000000014EAE12B1 E9 8C 00 00 00                          jmp     loc_14EAE1342   ; Jump
.text:000000014EAE12B6                         ; ---------------------------------------------------------------------------
.text:000000014EAE12B6
.text:000000014EAE12B6                         loc_14EAE12B6:                          ; CODE XREF: sub_14EAE1150+95↑j
.text:000000014EAE12B6                                                                 ; sub_14EAE1150+9E↑j ...
.text:000000014EAE12B6 48 8B CE                                mov     rcx, rsi
.text:000000014EAE12B9 FF 15 B1 94 D6 07                       call    cs:qword_15684A770 ; Indirect Call Near Procedure
.text:000000014EAE12BF 49 03 C4                                add     rax, r12        ; Add
.text:000000014EAE12C2 44 39 68 08                             cmp     [rax+8], r13d   ; Compare Two Operands
.text:000000014EAE12C6 74 0E                                   jz      short loc_14EAE12D6 ; Jump if Zero (ZF=1)
.text:000000014EAE12C8 48 8B C8                                mov     rcx, rax
.text:000000014EAE12CB FF 15 9F 94 D6 07                       call    cs:qword_15684A770 ; Indirect Call Near Procedure
.text:000000014EAE12D1 4C 8B F0                                mov     r14, rax
.text:000000014EAE12D4 EB 07                                   jmp     short loc_14EAE12DD ; Jump
.text:000000014EAE12D6                         ; ---------------------------------------------------------------------------
.text:000000014EAE12D6
.text:000000014EAE12D6                         loc_14EAE12D6:                          ; CODE XREF: sub_14EAE1150+176↑j
.text:000000014EAE12D6 4C 8D 35 7B 6E BE 01                    lea     r14, word_1506C8158 ; Load Effective Address
.text:000000014EAE12DD
.text:000000014EAE12DD                         loc_14EAE12DD:                          ; CODE XREF: sub_14EAE1150+184↑j
.text:000000014EAE12DD FF 15 CD BC F3 07                       call    cs:qword_156A1CFB0 ; Indirect Call Near Procedure
.text:000000014EAE12E3 84 C0                                   test    al, al          ; Logical Compare
.text:000000014EAE12E5 75 09                                   jnz     short loc_14EAE12F0 ; Jump if Not Zero (ZF=0)
.text:000000014EAE12E7 48 8B 35 CA CC F3 07                    mov     rsi, cs:qword_156A1DFB8
.text:000000014EAE12EE EB 31                                   jmp     short loc_14EAE1321 ; Jump
.text:000000014EAE12F0                         ; ---------------------------------------------------------------------------
.text:000000014EAE12F0
.text:000000014EAE12F0                         loc_14EAE12F0:                          ; CODE XREF: sub_14EAE1150+195↑j
.text:000000014EAE12F0 48 8B 0D C1 EC F3 07                    mov     rcx, qword ptr cs:unk_156A1FFB8
.text:000000014EAE12F7 0F B6 05 C1 EC F3 07                    movzx   eax, cs:byte_156A1FFBF ; Move with Zero-Extend
.text:000000014EAE12FE 48 89 8C 24 D0 00 00 00                 mov     [rsp+0D0h], rcx
.text:000000014EAE1306 34 36                                   xor     al, 36h         ; Logical Exclusive OR
.text:000000014EAE1308 80 F1 36                                xor     cl, 36h         ; Logical Exclusive OR
.text:000000014EAE130B 88 84 24 D0 00 00 00                    mov     [rsp+0D0h], al
.text:000000014EAE1312 88 8C 24 D7 00 00 00                    mov     [rsp+0D7h], cl
.text:000000014EAE1319 48 8B B4 24 D0 00 00 00                 mov     rsi, [rsp+0D0h]
.text:000000014EAE1321
.text:000000014EAE1321                         loc_14EAE1321:                          ; CODE XREF: sub_14EAE1150+19E↑j
.text:000000014EAE1321 48 8B 9C 24 C0 00 00 00                 mov     rbx, [rsp+0C0h]
.text:000000014EAE1329 48 8B 7B 28                             mov     rdi, [rbx+28h]
.text:000000014EAE132D E8 8E 14 DC FD                          call    sub_14C8A27C0   ; Call Procedure
.text:000000014EAE1332 4C 8B C8                                mov     r9, rax
.text:000000014EAE1335 48 8D 4B 28                             lea     rcx, [rbx+28h]  ; Load Effective Address
.text:000000014EAE1339 4D 8B C6                                mov     r8, r14
.text:000000014EAE133C 48 8B D6                                mov     rdx, rsi
.text:000000014EAE133F FF 57 08                                call    qword ptr [rdi+8] ; Indirect Call Near Procedure
.text:000000014EAE1342
.text:000000014EAE1342                         loc_14EAE1342:                          ; CODE XREF: sub_14EAE1150+161↑j
.text:000000014EAE1342 48 8B 74 24 40                          mov     rsi, [rsp+40h]
.text:000000014EAE1347 49 83 C4 10                             add     r12, 10h        ; Add
.text:000000014EAE134B 48 83 AC 24 D8 00 00 00                 sub     qword ptr [rsp+0D8h], 1 ; Integer Subtraction
.text:000000014EAE134B 01
.text:000000014EAE1354 0F 85 86 FE FF FF                       jnz     loc_14EAE11E0   ; Jump if Not Zero (ZF=0)
.text:000000014EAE135A 48 8B 5C 24 48                          mov     rbx, [rsp+48h]
.text:000000014EAE135F 4C 8B 7C 24 78                          mov     r15, [rsp+78h]
.text:000000014EAE1364 8B F3                                   mov     esi, ebx
.text:000000014EAE1366 4C 8B B4 24 80 00 00 00                 mov     r14, [rsp+80h]
.text:000000014EAE136E 4C 8B A4 24 88 00 00 00                 mov     r12, [rsp+88h]
.text:000000014EAE1376 48 8B BC 24 C0 00 00 00                 mov     rdi, [rsp+0C0h]
.text:000000014EAE137E
.text:000000014EAE137E                         loc_14EAE137E:                          ; CODE XREF: sub_14EAE1150+52↑j
.text:000000014EAE137E 48 8D 8C 24 C0 00 00 00                 lea     rcx, [rsp+0C0h] ; Load Effective Address
.text:000000014EAE1386 FF 15 44 9B A9 01                       call    cs:qword_15057AED0 ; Indirect Call Near Procedure
.text:000000014EAE138C 0F 57 F6                                xorps   xmm6, xmm6      ; Bitwise Logical XOR for Single-FP Data
.text:000000014EAE138F F2 48 0F 2A B4 24 C0 00                 cvtsi2sd xmm6, qword ptr [rsp+0C0h] ; Convert Doubleword Integer to Scalar Double-Precision Floating-Point Value
.text:000000014EAE138F 00 00
.text:000000014EAE1399 F2 0F 59 35 FF 33 84 08                 mulsd   xmm6, cs:qword_1573247A0 ; Multiply Scalar Double-Precision Floating-Point Values
.text:000000014EAE13A1 F2 0F 5C F7                             subsd   xmm6, xmm7      ; Subtract Scalar Double-Precision Floating-Point Values
.text:000000014EAE13A5 F2 0F 59 35 5B BC BE 01                 mulsd   xmm6, cs:qword_1506CD008 ; Multiply Scalar Double-Precision Floating-Point Values
.text:000000014EAE13AD E8 CE 89 C4 FF                          call    sub_14E729D80   ; Call Procedure
.text:000000014EAE13B2 0F 28 7C 24 50                          movaps  xmm7, xmmword ptr [rsp+50h] ; Move Aligned Four Packed Single-FP
.text:000000014EAE13B7 0F 57 C9                                xorps   xmm1, xmm1      ; Bitwise Logical XOR for Single-FP Data
.text:000000014EAE13BA F3 0F 5A C8                             cvtss2sd xmm1, xmm0     ; Covert Scalar Single-Precision Floating-Point Value to Scalar Double-Precision Floating-Point Value
.text:000000014EAE13BE 66 0F 2F F1                             comisd  xmm6, xmm1      ; Compare Scalar Ordered Double-Precision Floating-Point Values and Set EFLAGS
.text:000000014EAE13C2 0F 82 AC 00 00 00                       jb      loc_14EAE1474   ; Jump if Below (CF=1)
.text:000000014EAE13C8 80 3D 59 48 A8 08 03                    cmp     cs:byte_157565C28, 3 ; Compare Two Operands
.text:000000014EAE13CF 72 34                                   jb      short loc_14EAE1405 ; Jump if Below (CF=1)
.text:000000014EAE13D1 89 74 24 30                             mov     [rsp+30h], esi
.text:000000014EAE13D5 48 8D 05 14 E9 17 06                    lea     rax, aUengineTickdef ; Load Effective Address
.text:000000014EAE13DC F2 0F 11 74 24 28                       movsd   qword ptr [rsp+28h], xmm6 ; Move Scalar Double-Precision Floating-Point Values
.text:000000014EAE13E2 4C 8D 05 43 48 A8 08                    lea     r8, unk_157565C2C ; Load Effective Address
.text:000000014EAE13E9 41 B9 03 00 00 00                       mov     r9d, 3
.text:000000014EAE13EF 48 89 44 24 20                          mov     [rsp+20h], rax
.text:000000014EAE13F4 BA C7 09 00 00                          mov     edx, 9C7h
.text:000000014EAE13F9 48 8D 0D 60 73 BE 01                    lea     rcx, aUnknown   ; Load Effective Address
.text:000000014EAE1400 E8 2B 7D D4 FD                          call    sub_14C829130   ; Call Procedure
.text:000000014EAE1405
.text:000000014EAE1405                         loc_14EAE1405:                          ; CODE XREF: sub_14EAE1150+27F↑j
.text:000000014EAE1405 48 85 DB                                test    rbx, rbx        ; Logical Compare
.text:000000014EAE1408 7E 6A                                   jle     short loc_14EAE1474 ; Jump if Less or Equal (ZF=1 | SF!=OF)
.text:000000014EAE140A 48 8D 2D 6F A6 34 02                    lea     rbp, aS_39      ; Load Effective Address
.text:000000014EAE1411
.text:000000014EAE1411                         loc_14EAE1411:                          ; CODE XREF: sub_14EAE1150+322↓j
.text:000000014EAE1411 80 3D 10 48 A8 08 03                    cmp     cs:byte_157565C28, 3 ; Compare Two Operands
.text:000000014EAE1418 72 50                                   jb      short loc_14EAE146A ; Jump if Below (CF=1)
.text:000000014EAE141A 48 8D 8F 18 09 00 00                    lea     rcx, [rdi+918h] ; Load Effective Address
.text:000000014EAE1421 FF 15 49 93 D6 07                       call    cs:qword_15684A770 ; Indirect Call Near Procedure
.text:000000014EAE1427 49 03 C5                                add     rax, r13        ; Add
.text:000000014EAE142A 83 78 08 00                             cmp     dword ptr [rax+8], 0 ; Compare Two Operands
.text:000000014EAE142E 74 0B                                   jz      short loc_14EAE143B ; Jump if Zero (ZF=1)
.text:000000014EAE1430 48 8B C8                                mov     rcx, rax
.text:000000014EAE1433 FF 15 37 93 D6 07                       call    cs:qword_15684A770 ; Indirect Call Near Procedure
.text:000000014EAE1439 EB 07                                   jmp     short loc_14EAE1442 ; Jump
.text:000000014EAE143B                         ; ---------------------------------------------------------------------------
.text:000000014EAE143B
.text:000000014EAE143B                         loc_14EAE143B:                          ; CODE XREF: sub_14EAE1150+2DE↑j
.text:000000014EAE143B 48 8D 05 16 6D BE 01                    lea     rax, word_1506C8158 ; Load Effective Address
.text:000000014EAE1442
.text:000000014EAE1442                         loc_14EAE1442:                          ; CODE XREF: sub_14EAE1150+2E9↑j
.text:000000014EAE1442 48 89 44 24 28                          mov     [rsp+28h], rax
.text:000000014EAE1447 4C 8D 05 DE 47 A8 08                    lea     r8, unk_157565C2C ; Load Effective Address
.text:000000014EAE144E 41 B9 03 00 00 00                       mov     r9d, 3
.text:000000014EAE1454 48 89 6C 24 20                          mov     [rsp+20h], rbp
.text:000000014EAE1459 BA CB 09 00 00                          mov     edx, 9CBh
.text:000000014EAE145E 48 8D 0D FB 72 BE 01                    lea     rcx, aUnknown   ; Load Effective Address
.text:000000014EAE1465 E8 C6 7C D4 FD                          call    sub_14C829130   ; Call Procedure
.text:000000014EAE146A
.text:000000014EAE146A                         loc_14EAE146A:                          ; CODE XREF: sub_14EAE1150+2C8↑j
.text:000000014EAE146A 49 83 C5 10                             add     r13, 10h        ; Add
.text:000000014EAE146E 48 83 EB 01                             sub     rbx, 1          ; Integer Subtraction
.text:000000014EAE1472 75 9D                                   jnz     short loc_14EAE1411 ; Jump if Not Zero (ZF=0)
.text:000000014EAE1474
.text:000000014EAE1474                         loc_14EAE1474:                          ; CODE XREF: sub_14EAE1150+272↑j
.text:000000014EAE1474                                                                 ; sub_14EAE1150+2B8↑j
.text:000000014EAE1474 48 8D 8F 18 09 00 00                    lea     rcx, [rdi+918h] ; Load Effective Address
.text:000000014EAE147B 41 B1 01                                mov     r9b, 1
.text:000000014EAE147E 44 8B C6                                mov     r8d, esi
.text:000000014EAE1481 33 D2                                   xor     edx, edx        ; Logical Exclusive OR
.text:000000014EAE1483 0F 28 74 24 60                          movaps  xmm6, xmmword ptr [rsp+60h] ; Move Aligned Four Packed Single-FP
.text:000000014EAE1488 48 81 C4 90 00 00 00                    add     rsp, 90h        ; Add
.text:000000014EAE148F 41 5D                                   pop     r13
.text:000000014EAE1491 5F                                      pop     rdi
.text:000000014EAE1492 5E                                      pop     rsi
.text:000000014EAE1493 5D                                      pop     rbp
.text:000000014EAE1494 5B                                      pop     rbx
.text:000000014EAE1495 E9 86 25 80 F2                          jmp     sub_1412E3A20   ; Jump
.text:000000014EAE1495                         sub_14EAE1150   endp
.text:000000014EAE1495
.text:000000014EAE1495                         ; ---------------------------------------------------------------------------
.text:000000014EAE149A CC CC CC CC CC CC                       align 20h
.text:000000014EAE14A0


```
