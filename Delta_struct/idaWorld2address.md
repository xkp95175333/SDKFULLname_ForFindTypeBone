
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
.text:0000000143BA47A0
.text:0000000143BA47A0                         ; =============== S U B R O U T I N E =======================================
.text:0000000143BA47A0
.text:0000000143BA47A0
.text:0000000143BA47A0                         ; int *__fastcall sub_143BA47A0(__int64, int *, __int64 *, __int64, char)
.text:0000000143BA47A0                         sub_143BA47A0   proc near
.text:0000000143BA47A0
.text:0000000143BA47A0                         var_808         = qword ptr -808h
.text:0000000143BA47A0                         var_800         = qword ptr -800h
.text:0000000143BA47A0                         var_7F8         = qword ptr -7F8h
.text:0000000143BA47A0                         var_7E8         = qword ptr -7E8h
.text:0000000143BA47A0                         var_7E0         = byte ptr -7E0h
.text:0000000143BA47A0                         var_7D8         = dword ptr -7D8h
.text:0000000143BA47A0                         var_7D4         = dword ptr -7D4h
.text:0000000143BA47A0                         var_7D0         = dword ptr -7D0h
.text:0000000143BA47A0                         var_7C8         = byte ptr -7C8h
.text:0000000143BA47A0                         var_7C7         = byte ptr -7C7h
.text:0000000143BA47A0                         var_7C6         = byte ptr -7C6h
.text:0000000143BA47A0                         var_7C5         = byte ptr -7C5h
.text:0000000143BA47A0                         var_7C4         = byte ptr -7C4h
.text:0000000143BA47A0                         var_7C0         = dword ptr -7C0h
.text:0000000143BA47A0                         var_7BC         = dword ptr -7BCh
.text:0000000143BA47A0                         var_7B8         = dword ptr -7B8h
.text:0000000143BA47A0                         var_7B0         = byte ptr -7B0h
.text:0000000143BA47A0                         var_7AF         = byte ptr -7AFh
.text:0000000143BA47A0                         var_7AE         = byte ptr -7AEh
.text:0000000143BA47A0                         var_7AD         = byte ptr -7ADh
.text:0000000143BA47A0                         var_7AC         = byte ptr -7ACh
.text:0000000143BA47A0                         var_7AB         = byte ptr -7ABh
.text:0000000143BA47A0                         var_7AA         = byte ptr -7AAh
.text:0000000143BA47A0                         var_7A9         = byte ptr -7A9h
.text:0000000143BA47A0                         var_7A8         = byte ptr -7A8h
.text:0000000143BA47A0                         var_7A4         = byte ptr -7A4h
.text:0000000143BA47A0                         var_7A0         = dword ptr -7A0h
.text:0000000143BA47A0                         var_798         = dword ptr -798h
.text:0000000143BA47A0                         var_790         = dword ptr -790h
.text:0000000143BA47A0                         var_788         = dword ptr -788h
.text:0000000143BA47A0                         var_780         = qword ptr -780h
.text:0000000143BA47A0                         var_778         = qword ptr -778h
.text:0000000143BA47A0                         var_770         = qword ptr -770h
.text:0000000143BA47A0                         var_768         = qword ptr -768h
.text:0000000143BA47A0                         var_760         = qword ptr -760h
.text:0000000143BA47A0                         var_758         = qword ptr -758h
.text:0000000143BA47A0                         var_750         = qword ptr -750h
.text:0000000143BA47A0                         var_748         = qword ptr -748h
.text:0000000143BA47A0                         var_740         = qword ptr -740h
.text:0000000143BA47A0                         var_738         = qword ptr -738h
.text:0000000143BA47A0                         var_730         = qword ptr -730h
.text:0000000143BA47A0                         var_728         = qword ptr -728h
.text:0000000143BA47A0                         var_720         = qword ptr -720h
.text:0000000143BA47A0                         var_718         = qword ptr -718h
.text:0000000143BA47A0                         var_710         = qword ptr -710h
.text:0000000143BA47A0                         var_708         = dword ptr -708h
.text:0000000143BA47A0                         var_700         = dword ptr -700h
.text:0000000143BA47A0                         var_6F8         = dword ptr -6F8h
.text:0000000143BA47A0                         var_6F0         = dword ptr -6F0h
.text:0000000143BA47A0                         var_6E8         = dword ptr -6E8h
.text:0000000143BA47A0                         var_6E0         = dword ptr -6E0h
.text:0000000143BA47A0                         var_6D8         = dword ptr -6D8h
.text:0000000143BA47A0                         var_6D0         = dword ptr -6D0h
.text:0000000143BA47A0                         var_6C8         = dword ptr -6C8h
.text:0000000143BA47A0                         var_6C0         = dword ptr -6C0h
.text:0000000143BA47A0                         var_6B8         = dword ptr -6B8h
.text:0000000143BA47A0                         var_6B0         = dword ptr -6B0h
.text:0000000143BA47A0                         var_6A8         = dword ptr -6A8h
.text:0000000143BA47A0                         var_6A0         = dword ptr -6A0h
.text:0000000143BA47A0                         var_698         = dword ptr -698h
.text:0000000143BA47A0                         var_690         = dword ptr -690h
.text:0000000143BA47A0                         var_688         = dword ptr -688h
.text:0000000143BA47A0                         var_680         = dword ptr -680h
.text:0000000143BA47A0                         var_678         = dword ptr -678h
.text:0000000143BA47A0                         var_670         = dword ptr -670h
.text:0000000143BA47A0                         var_668         = dword ptr -668h
.text:0000000143BA47A0                         var_660         = dword ptr -660h
.text:0000000143BA47A0                         var_658         = dword ptr -658h
.text:0000000143BA47A0                         var_650         = dword ptr -650h
.text:0000000143BA47A0                         var_64C         = dword ptr -64Ch
.text:0000000143BA47A0                         var_648         = dword ptr -648h
.text:0000000143BA47A0                         var_644         = dword ptr -644h
.text:0000000143BA47A0                         var_640         = dword ptr -640h
.text:0000000143BA47A0                         var_63C         = dword ptr -63Ch
.text:0000000143BA47A0                         var_638         = dword ptr -638h
.text:0000000143BA47A0                         var_630         = dword ptr -630h
.text:0000000143BA47A0                         var_62C         = dword ptr -62Ch
.text:0000000143BA47A0                         var_628         = qword ptr -628h
.text:0000000143BA47A0                         var_620         = qword ptr -620h
.text:0000000143BA47A0                         var_618         = qword ptr -618h
.text:0000000143BA47A0                         var_610         = qword ptr -610h
.text:0000000143BA47A0                         var_608         = qword ptr -608h
.text:0000000143BA47A0                         var_600         = qword ptr -600h
.text:0000000143BA47A0                         var_5F8         = qword ptr -5F8h
.text:0000000143BA47A0                         var_5F0         = qword ptr -5F0h
.text:0000000143BA47A0                         var_5E8         = dword ptr -5E8h
.text:0000000143BA47A0                         var_5E0         = qword ptr -5E0h
.text:0000000143BA47A0                         var_5D8         = qword ptr -5D8h
.text:0000000143BA47A0                         var_5D0         = qword ptr -5D0h
.text:0000000143BA47A0                         var_5C8         = qword ptr -5C8h
.text:0000000143BA47A0                         var_5C0         = qword ptr -5C0h
.text:0000000143BA47A0                         var_5B8         = qword ptr -5B8h
.text:0000000143BA47A0                         var_5B0         = qword ptr -5B0h
.text:0000000143BA47A0                         var_5A8         = qword ptr -5A8h
.text:0000000143BA47A0                         var_5A0         = qword ptr -5A0h
.text:0000000143BA47A0                         var_598         = dword ptr -598h
.text:0000000143BA47A0                         var_590         = qword ptr -590h
.text:0000000143BA47A0                         var_588         = qword ptr -588h
.text:0000000143BA47A0                         var_580         = qword ptr -580h
.text:0000000143BA47A0                         var_578         = qword ptr -578h
.text:0000000143BA47A0                         var_570         = qword ptr -570h
.text:0000000143BA47A0                         var_568         = qword ptr -568h
.text:0000000143BA47A0                         var_560         = qword ptr -560h
.text:0000000143BA47A0                         var_558         = qword ptr -558h
.text:0000000143BA47A0                         var_550         = qword ptr -550h
.text:0000000143BA47A0                         var_548         = qword ptr -548h
.text:0000000143BA47A0                         var_540         = qword ptr -540h
.text:0000000143BA47A0                         var_538         = qword ptr -538h
.text:0000000143BA47A0                         var_530         = qword ptr -530h
.text:0000000143BA47A0                         var_528         = qword ptr -528h
.text:0000000143BA47A0                         var_520         = qword ptr -520h
.text:0000000143BA47A0                         var_518         = qword ptr -518h
.text:0000000143BA47A0                         var_510         = qword ptr -510h
.text:0000000143BA47A0                         var_508         = qword ptr -508h
.text:0000000143BA47A0                         var_500         = qword ptr -500h
.text:0000000143BA47A0                         var_4F8         = qword ptr -4F8h
.text:0000000143BA47A0                         var_4F0         = qword ptr -4F0h
.text:0000000143BA47A0                         var_4E8         = qword ptr -4E8h
.text:0000000143BA47A0                         var_4E0         = qword ptr -4E0h
.text:0000000143BA47A0                         var_4D8         = qword ptr -4D8h
.text:0000000143BA47A0                         var_4D0         = qword ptr -4D0h
.text:0000000143BA47A0                         var_4C8         = qword ptr -4C8h
.text:0000000143BA47A0                         var_4C0         = qword ptr -4C0h
.text:0000000143BA47A0                         var_4B8         = qword ptr -4B8h
.text:0000000143BA47A0                         var_4B0         = qword ptr -4B0h
.text:0000000143BA47A0                         var_4A8         = qword ptr -4A8h
.text:0000000143BA47A0                         var_4A0         = qword ptr -4A0h
.text:0000000143BA47A0                         var_498         = qword ptr -498h
.text:0000000143BA47A0                         var_490         = qword ptr -490h
.text:0000000143BA47A0                         var_488         = qword ptr -488h
.text:0000000143BA47A0                         var_480         = qword ptr -480h
.text:0000000143BA47A0                         var_478         = dword ptr -478h
.text:0000000143BA47A0                         var_474         = dword ptr -474h
.text:0000000143BA47A0                         var_470         = dword ptr -470h
.text:0000000143BA47A0                         var_46C         = dword ptr -46Ch
.text:0000000143BA47A0                         var_468         = dword ptr -468h
.text:0000000143BA47A0                         var_464         = dword ptr -464h
.text:0000000143BA47A0                         var_460         = dword ptr -460h
.text:0000000143BA47A0                         var_45C         = dword ptr -45Ch
.text:0000000143BA47A0                         var_458         = dword ptr -458h
.text:0000000143BA47A0                         var_454         = dword ptr -454h
.text:0000000143BA47A0                         var_450         = dword ptr -450h
.text:0000000143BA47A0                         var_44C         = dword ptr -44Ch
.text:0000000143BA47A0                         var_448         = dword ptr -448h
.text:0000000143BA47A0                         var_444         = dword ptr -444h
.text:0000000143BA47A0                         var_440         = dword ptr -440h
.text:0000000143BA47A0                         var_43C         = dword ptr -43Ch
.text:0000000143BA47A0                         var_438         = dword ptr -438h
.text:0000000143BA47A0                         var_434         = dword ptr -434h
.text:0000000143BA47A0                         var_430         = dword ptr -430h
.text:0000000143BA47A0                         var_42C         = dword ptr -42Ch
.text:0000000143BA47A0                         var_428         = dword ptr -428h
.text:0000000143BA47A0                         var_424         = dword ptr -424h
.text:0000000143BA47A0                         var_420         = dword ptr -420h
.text:0000000143BA47A0                         var_41C         = dword ptr -41Ch
.text:0000000143BA47A0                         var_418         = qword ptr -418h
.text:0000000143BA47A0                         var_410         = dword ptr -410h
.text:0000000143BA47A0                         var_408         = qword ptr -408h
.text:0000000143BA47A0                         var_400         = dword ptr -400h
.text:0000000143BA47A0                         var_3F8         = qword ptr -3F8h
.text:0000000143BA47A0                         var_3F0         = dword ptr -3F0h
.text:0000000143BA47A0                         var_3E8         = qword ptr -3E8h
.text:0000000143BA47A0                         var_3E0         = dword ptr -3E0h
.text:0000000143BA47A0                         var_3D8         = qword ptr -3D8h
.text:0000000143BA47A0                         var_3D0         = qword ptr -3D0h
.text:0000000143BA47A0                         var_3C8         = qword ptr -3C8h
.text:0000000143BA47A0                         var_3C0         = qword ptr -3C0h
.text:0000000143BA47A0                         var_3B8         = qword ptr -3B8h
.text:0000000143BA47A0                         var_3B0         = qword ptr -3B0h
.text:0000000143BA47A0                         var_3A8         = qword ptr -3A8h
.text:0000000143BA47A0                         var_3A0         = qword ptr -3A0h
.text:0000000143BA47A0                         var_398         = qword ptr -398h
.text:0000000143BA47A0                         var_390         = qword ptr -390h
.text:0000000143BA47A0                         var_388         = qword ptr -388h
.text:0000000143BA47A0                         var_380         = qword ptr -380h
.text:0000000143BA47A0                         var_378         = qword ptr -378h
.text:0000000143BA47A0                         var_370         = qword ptr -370h
.text:0000000143BA47A0                         var_368         = qword ptr -368h
.text:0000000143BA47A0                         var_360         = qword ptr -360h
.text:0000000143BA47A0                         var_358         = qword ptr -358h
.text:0000000143BA47A0                         var_350         = qword ptr -350h
.text:0000000143BA47A0                         var_348         = qword ptr -348h
.text:0000000143BA47A0                         var_340         = qword ptr -340h
.text:0000000143BA47A0                         var_338         = qword ptr -338h
.text:0000000143BA47A0                         var_330         = qword ptr -330h
.text:0000000143BA47A0                         var_328         = qword ptr -328h
.text:0000000143BA47A0                         var_320         = qword ptr -320h
.text:0000000143BA47A0                         var_318         = qword ptr -318h
.text:0000000143BA47A0                         var_310         = qword ptr -310h
.text:0000000143BA47A0                         var_308         = qword ptr -308h
.text:0000000143BA47A0                         var_300         = qword ptr -300h
.text:0000000143BA47A0                         var_2F8         = qword ptr -2F8h
.text:0000000143BA47A0                         var_2F0         = qword ptr -2F0h
.text:0000000143BA47A0                         var_2E8         = qword ptr -2E8h
.text:0000000143BA47A0                         var_2E0         = qword ptr -2E0h
.text:0000000143BA47A0                         var_2D8         = qword ptr -2D8h
.text:0000000143BA47A0                         var_2D0         = qword ptr -2D0h
.text:0000000143BA47A0                         var_2C8         = qword ptr -2C8h
.text:0000000143BA47A0                         var_2C0         = qword ptr -2C0h
.text:0000000143BA47A0                         var_2B8         = qword ptr -2B8h
.text:0000000143BA47A0                         var_2B0         = qword ptr -2B0h
.text:0000000143BA47A0                         var_2A8         = qword ptr -2A8h
.text:0000000143BA47A0                         var_2A0         = qword ptr -2A0h
.text:0000000143BA47A0                         var_298         = qword ptr -298h
.text:0000000143BA47A0                         var_290         = qword ptr -290h
.text:0000000143BA47A0                         var_288         = qword ptr -288h
.text:0000000143BA47A0                         var_280         = qword ptr -280h
.text:0000000143BA47A0                         var_278         = qword ptr -278h
.text:0000000143BA47A0                         var_270         = qword ptr -270h
.text:0000000143BA47A0                         var_268         = qword ptr -268h
.text:0000000143BA47A0                         var_260         = qword ptr -260h
.text:0000000143BA47A0                         var_258         = qword ptr -258h
.text:0000000143BA47A0                         var_250         = qword ptr -250h
.text:0000000143BA47A0                         var_248         = qword ptr -248h
.text:0000000143BA47A0                         var_240         = qword ptr -240h
.text:0000000143BA47A0                         var_238         = qword ptr -238h
.text:0000000143BA47A0                         var_230         = qword ptr -230h
.text:0000000143BA47A0                         var_228         = qword ptr -228h
.text:0000000143BA47A0                         var_220         = qword ptr -220h
.text:0000000143BA47A0                         var_218         = qword ptr -218h
.text:0000000143BA47A0                         var_210         = qword ptr -210h
.text:0000000143BA47A0                         var_208         = qword ptr -208h
.text:0000000143BA47A0                         var_200         = qword ptr -200h
.text:0000000143BA47A0                         var_1F8         = qword ptr -1F8h
.text:0000000143BA47A0                         var_1F0         = qword ptr -1F0h
.text:0000000143BA47A0                         var_1E8         = qword ptr -1E8h
.text:0000000143BA47A0                         var_1E0         = qword ptr -1E0h
.text:0000000143BA47A0                         var_1D8         = qword ptr -1D8h
.text:0000000143BA47A0                         var_1D0         = qword ptr -1D0h
.text:0000000143BA47A0                         var_1C8         = qword ptr -1C8h
.text:0000000143BA47A0                         var_1C0         = qword ptr -1C0h
.text:0000000143BA47A0                         var_1B8         = qword ptr -1B8h
.text:0000000143BA47A0                         var_1B0         = qword ptr -1B0h
.text:0000000143BA47A0                         var_1A8         = qword ptr -1A8h
.text:0000000143BA47A0                         var_1A0         = qword ptr -1A0h
.text:0000000143BA47A0                         var_198         = xmmword ptr -198h
.text:0000000143BA47A0                         var_188         = byte ptr -188h
.text:0000000143BA47A0                         anonymous_0     = dword ptr -180h
.text:0000000143BA47A0                         var_178         = byte ptr -178h
.text:0000000143BA47A0                         anonymous_1     = dword ptr -170h
.text:0000000143BA47A0                         var_168         = byte ptr -168h
.text:0000000143BA47A0                         anonymous_2     = dword ptr -160h
.text:0000000143BA47A0                         var_158         = byte ptr -158h
.text:0000000143BA47A0                         anonymous_3     = dword ptr -150h
.text:0000000143BA47A0                         var_148         = byte ptr -148h
.text:0000000143BA47A0                         anonymous_4     = dword ptr -140h
.text:0000000143BA47A0                         var_138         = byte ptr -138h
.text:0000000143BA47A0                         anonymous_5     = dword ptr -130h
.text:0000000143BA47A0                         var_128         = qword ptr -128h
.text:0000000143BA47A0                         var_118         = byte ptr -118h
.text:0000000143BA47A0                         var_10C         = byte ptr -10Ch
.text:0000000143BA47A0                         var_100         = byte ptr -100h
.text:0000000143BA47A0                         var_E8          = xmmword ptr -0E8h
.text:0000000143BA47A0                         var_D8          = qword ptr -0D8h
.text:0000000143BA47A0                         var_D0          = qword ptr -0D0h
.text:0000000143BA47A0                         var_C8          = qword ptr -0C8h
.text:0000000143BA47A0                         var_C0          = qword ptr -0C0h
.text:0000000143BA47A0                         var_B8          = byte ptr -0B8h
.text:0000000143BA47A0                         var_AC          = byte ptr -0ACh
.text:0000000143BA47A0                         var_A0          = byte ptr -0A0h
.text:0000000143BA47A0                         var_94          = byte ptr -94h
.text:0000000143BA47A0                         var_88          = byte ptr -88h
.text:0000000143BA47A0                         var_7C          = byte ptr -7Ch
.text:0000000143BA47A0                         var_70          = byte ptr -70h
.text:0000000143BA47A0                         var_64          = byte ptr -64h
.text:0000000143BA47A0                         var_58          = byte ptr -58h
.text:0000000143BA47A0                         var_4C          = byte ptr -4Ch
.text:0000000143BA47A0                         var_38          = xmmword ptr -38h
.text:0000000143BA47A0                         var_28          = qword ptr -28h
.text:0000000143BA47A0                         arg_0           = qword ptr  8
.text:0000000143BA47A0                         arg_8           = qword ptr  10h
.text:0000000143BA47A0                         arg_10          = qword ptr  18h
.text:0000000143BA47A0                         arg_18          = dword ptr  20h
.text:0000000143BA47A0                         arg_20          = byte ptr  28h
.text:0000000143BA47A0
.text:0000000143BA47A0 F3 0F 11 5C 24 20                       movss   dword ptr [rsp+20h], xmm3 ; Move Scalar Single-FP
.text:0000000143BA47A6 4C 89 44 24 18                          mov     [rsp+18h], r8
.text:0000000143BA47AB 48 89 54 24 10                          mov     [rsp+10h], rdx
.text:0000000143BA47B0 48 89 4C 24 08                          mov     [rsp+8], rcx
.text:0000000143BA47B5 56                                      push    rsi
.text:0000000143BA47B6 57                                      push    rdi
.text:0000000143BA47B7 48 81 EC 18 08 00 00                    sub     rsp, 818h       ; Integer Subtraction
.text:0000000143BA47BE 48 8B 05 7B 0B 22 13                    mov     rax, cs:off_156DC5340
.text:0000000143BA47C5 48 33 C4                                xor     rax, rsp        ; Logical Exclusive OR
.text:0000000143BA47C8 48 89 84 24 00 08 00 00                 mov     [rsp+800h], rax
.text:0000000143BA47D0 48 8D 44 24 50                          lea     rax, [rsp+50h]  ; Load Effective Address
.text:0000000143BA47D5 48 8D 0D B4 84 80 13                    lea     rcx, xmmword_1573ACC88+8 ; Load Effective Address
.text:0000000143BA47DC 48 8B F8                                mov     rdi, rax
.text:0000000143BA47DF 48 8B F1                                mov     rsi, rcx
.text:0000000143BA47E2 B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA47E7 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA47E9 48 8B 84 24 40 08 00 00                 mov     rax, [rsp+840h]
.text:0000000143BA47F1 48 8B 00                                mov     rax, [rax]
.text:0000000143BA47F4 48 89 84 24 00 02 00 00                 mov     [rsp+200h], rax
.text:0000000143BA47FC 48 83 BC 24 00 02 00 00                 cmp     qword ptr [rsp+200h], 0 ; Compare Two Operands
.text:0000000143BA47FC 00
.text:0000000143BA4805 74 26                                   jz      short loc_143BA482D ; Jump if Zero (ZF=1)
.text:0000000143BA4807 48 8B 8C 24 00 02 00 00                 mov     rcx, [rsp+200h]
.text:0000000143BA480F E8 FC 40 1A FF                          call    sub_142D48910   ; Call Procedure
.text:0000000143BA4814 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA4817 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4819 74 12                                   jz      short loc_143BA482D ; Jump if Zero (ZF=1)
.text:0000000143BA481B 48 8B 84 24 00 02 00 00                 mov     rax, [rsp+200h]
.text:0000000143BA4823 48 89 84 24 A0 03 00 00                 mov     [rsp+3A0h], rax
.text:0000000143BA482B EB 0C                                   jmp     short loc_143BA4839 ; Jump
.text:0000000143BA482D                         ; ---------------------------------------------------------------------------
.text:0000000143BA482D
.text:0000000143BA482D                         loc_143BA482D:                          ; CODE XREF: sub_143BA47A0+65↑j
.text:0000000143BA482D                                                                 ; sub_143BA47A0+79↑j
.text:0000000143BA482D 48 C7 84 24 A0 03 00 00                 mov     qword ptr [rsp+3A0h], 0
.text:0000000143BA482D 00 00 00 00
.text:0000000143BA4839
.text:0000000143BA4839                         loc_143BA4839:                          ; CODE XREF: sub_143BA47A0+8B↑j
.text:0000000143BA4839 48 8B 84 24 A0 03 00 00                 mov     rax, [rsp+3A0h]
.text:0000000143BA4841 48 89 84 24 20 06 00 00                 mov     [rsp+620h], rax
.text:0000000143BA4849 48 8B 84 24 20 06 00 00                 mov     rax, [rsp+620h]
.text:0000000143BA4851 48 89 84 24 28 06 00 00                 mov     [rsp+628h], rax
.text:0000000143BA4859 48 8B 84 24 28 06 00 00                 mov     rax, [rsp+628h]
.text:0000000143BA4861 48 89 44 24 40                          mov     [rsp+40h], rax
.text:0000000143BA4866 48 83 7C 24 40 00                       cmp     qword ptr [rsp+40h], 0 ; Compare Two Operands
.text:0000000143BA486C 75 3E                                   jnz     short loc_143BA48AC ; Jump if Not Zero (ZF=0)
.text:0000000143BA486E 48 8B 84 24 30 08 00 00                 mov     rax, [rsp+830h]
.text:0000000143BA4876 48 83 B8 00 DA 05 00 00                 cmp     qword ptr [rax+5DA00h], 0 ; Compare Two Operands
.text:0000000143BA487E 74 2C                                   jz      short loc_143BA48AC ; Jump if Zero (ZF=1)
.text:0000000143BA4880 48 8B 84 24 30 08 00 00                 mov     rax, [rsp+830h]
.text:0000000143BA4888 48 8B 80 00 DA 05 00                    mov     rax, [rax+5DA00h]
.text:0000000143BA488F 48 8B 8C 24 30 08 00 00                 mov     rcx, [rsp+830h]
.text:0000000143BA4897 48 8B 89 00 DA 05 00                    mov     rcx, [rcx+5DA00h]
.text:0000000143BA489E 48 8B 00                                mov     rax, [rax]
.text:0000000143BA48A1 FF 90 20 12 00 00                       call    qword ptr [rax+1220h] ; Indirect Call Near Procedure
.text:0000000143BA48A7 48 89 44 24 40                          mov     [rsp+40h], rax
.text:0000000143BA48AC
.text:0000000143BA48AC                         loc_143BA48AC:                          ; CODE XREF: sub_143BA47A0+CC↑j
.text:0000000143BA48AC                                                                 ; sub_143BA47A0+DE↑j
.text:0000000143BA48AC 48 83 7C 24 40 00                       cmp     qword ptr [rsp+40h], 0 ; Compare Two Operands
.text:0000000143BA48B2 0F 84 3B 21 00 00                       jz      loc_143BA69F3   ; Jump if Zero (ZF=1)
.text:0000000143BA48B8 48 8B 44 24 40                          mov     rax, [rsp+40h]
.text:0000000143BA48BD 48 83 B8 F0 0F 00 00 00                 cmp     qword ptr [rax+0FF0h], 0 ; Compare Two Operands
.text:0000000143BA48C5 0F 84 28 21 00 00                       jz      loc_143BA69F3   ; Jump if Zero (ZF=1)
.text:0000000143BA48CB 48 8B 44 24 40                          mov     rax, [rsp+40h]
.text:0000000143BA48D0 48 05 80 01 00 00                       add     rax, 180h       ; Add
.text:0000000143BA48D6 BA 02 00 00 00                          mov     edx, 2
.text:0000000143BA48DB 48 8B C8                                mov     rcx, rax
.text:0000000143BA48DE E8 BD EF 6B FD                          call    sub_1412638A0   ; Call Procedure
.text:0000000143BA48E3 48 89 84 24 18 01 00 00                 mov     [rsp+118h], rax
.text:0000000143BA48EB 48 83 BC 24 18 01 00 00                 cmp     qword ptr [rsp+118h], 0 ; Compare Two Operands
.text:0000000143BA48EB 00
.text:0000000143BA48F4 75 11                                   jnz     short loc_143BA4907 ; Jump if Not Zero (ZF=0)
.text:0000000143BA48F6 48 C7 84 24 A8 02 00 00                 mov     qword ptr [rsp+2A8h], 0
.text:0000000143BA48F6 00 00 00 00
.text:0000000143BA4902 E9 AF 01 00 00                          jmp     loc_143BA4AB6   ; Jump
.text:0000000143BA4907                         ; ---------------------------------------------------------------------------
.text:0000000143BA4907
.text:0000000143BA4907                         loc_143BA4907:                          ; CODE XREF: sub_143BA47A0+154↑j
.text:0000000143BA4907 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA4907 00 00
.text:0000000143BA4911 48 8B 8C 24 18 01 00 00                 mov     rcx, [rsp+118h]
.text:0000000143BA4919 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA491C 48 8B C1                                mov     rax, rcx
.text:0000000143BA491F 48 89 84 24 30 06 00 00                 mov     [rsp+630h], rax
.text:0000000143BA4927 48 8B 84 24 18 01 00 00                 mov     rax, [rsp+118h]
.text:0000000143BA492F 48 C1 E8 30                             shr     rax, 30h ; '0'  ; Shift Logical Right
.text:0000000143BA4933 48 25 FF 3F 00 00                       and     rax, 3FFFh      ; Logical AND
.text:0000000143BA4939 48 89 84 24 D8 00 00 00                 mov     [rsp+0D8h], rax
.text:0000000143BA4941 48 8B 84 24 18 01 00 00                 mov     rax, [rsp+118h]
.text:0000000143BA4949 48 C1 E8 3F                             shr     rax, 3Fh        ; Shift Logical Right
.text:0000000143BA494D 48 83 E0 01                             and     rax, 1          ; Logical AND
.text:0000000143BA4951 88 44 24 78                             mov     [rsp+78h], al
.text:0000000143BA4955 48 8B 84 24 30 06 00 00                 mov     rax, [rsp+630h]
.text:0000000143BA495D 48 89 84 24 D0 00 00 00                 mov     [rsp+0D0h], rax
.text:0000000143BA4965 0F B6 44 24 78                          movzx   eax, byte ptr [rsp+78h] ; Move with Zero-Extend
.text:0000000143BA496A 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA496C 0F 84 24 01 00 00                       jz      loc_143BA4A96   ; Jump if Zero (ZF=1)
.text:0000000143BA4972 48 C7 84 24 60 07 00 00                 mov     qword ptr [rsp+760h], 4
.text:0000000143BA4972 04 00 00 00
.text:0000000143BA497E 83 3D 0F 5E CA 12 01                    cmp     cs:dword_15684A794, 1 ; Compare Two Operands
.text:0000000143BA4985 75 25                                   jnz     short loc_143BA49AC ; Jump if Not Zero (ZF=0)
.text:0000000143BA4987 44 8B 8C 24 D8 00 00 00                 mov     r9d, [rsp+0D8h]
.text:0000000143BA498F 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA4995 48 8D 94 24 D0 00 00 00                 lea     rdx, [rsp+0D0h] ; Load Effective Address
.text:0000000143BA499D 48 8B 0D DC 36 83 13                    mov     rcx, cs:qword_1573D8080
.text:0000000143BA49A4 E8 67 8F EE FC                          call    sub_140A8D910   ; Call Procedure
.text:0000000143BA49A9 90                                      nop                     ; No Operation
.text:0000000143BA49AA EB 65                                   jmp     short loc_143BA4A11 ; Jump
.text:0000000143BA49AC                         ; ---------------------------------------------------------------------------
.text:0000000143BA49AC
.text:0000000143BA49AC                         loc_143BA49AC:                          ; CODE XREF: sub_143BA47A0+1E5↑j
.text:0000000143BA49AC 83 3D E1 5D CA 12 02                    cmp     cs:dword_15684A794, 2 ; Compare Two Operands
.text:0000000143BA49B3 75 25                                   jnz     short loc_143BA49DA ; Jump if Not Zero (ZF=0)
.text:0000000143BA49B5 44 8B 8C 24 D8 00 00 00                 mov     r9d, [rsp+0D8h]
.text:0000000143BA49BD 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA49C3 48 8D 94 24 D0 00 00 00                 lea     rdx, [rsp+0D0h] ; Load Effective Address
.text:0000000143BA49CB 48 8B 0D B6 36 83 13                    mov     rcx, cs:qword_1573D8088
.text:0000000143BA49D2 E8 09 8F EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA49D7 90                                      nop                     ; No Operation
.text:0000000143BA49D8 EB 37                                   jmp     short loc_143BA4A11 ; Jump
.text:0000000143BA49DA                         ; ---------------------------------------------------------------------------
.text:0000000143BA49DA
.text:0000000143BA49DA                         loc_143BA49DA:                          ; CODE XREF: sub_143BA47A0+213↑j
.text:0000000143BA49DA 83 3D B3 5D CA 12 03                    cmp     cs:dword_15684A794, 3 ; Compare Two Operands
.text:0000000143BA49E1 75 2E                                   jnz     short loc_143BA4A11 ; Jump if Not Zero (ZF=0)
.text:0000000143BA49E3 8B 84 24 D8 00 00 00                    mov     eax, [rsp+0D8h]
.text:0000000143BA49EA 48 8D 0D 9F 36 83 13                    lea     rcx, qword_1573D8090 ; Load Effective Address
.text:0000000143BA49F1 44 8B 8C 24 D8 00 00 00                 mov     r9d, [rsp+0D8h]
.text:0000000143BA49F9 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA49FF 48 8D 94 24 D0 00 00 00                 lea     rdx, [rsp+0D0h] ; Load Effective Address
.text:0000000143BA4A07 48 8B 0C C1                             mov     rcx, [rcx+rax*8]
.text:0000000143BA4A0B E8 D0 8E EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA4A10 90                                      nop                     ; No Operation
.text:0000000143BA4A11
.text:0000000143BA4A11                         loc_143BA4A11:                          ; CODE XREF: sub_143BA47A0+20A↑j
.text:0000000143BA4A11                                                                 ; sub_143BA47A0+238↑j ...
.text:0000000143BA4A11 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA4A11 00 00
.text:0000000143BA4A1B 48 8B 8C 24 D0 00 00 00                 mov     rcx, [rsp+0D0h]
.text:0000000143BA4A23 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA4A26 48 8B C1                                mov     rax, rcx
.text:0000000143BA4A29 48 89 84 24 08 02 00 00                 mov     [rsp+208h], rax
.text:0000000143BA4A31 48 8B 84 24 08 02 00 00                 mov     rax, [rsp+208h]
.text:0000000143BA4A39 48 C1 F8 2F                             sar     rax, 2Fh ; '/'  ; Shift Arithmetic Right
.text:0000000143BA4A3D 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA4A40 75 12                                   jnz     short loc_143BA4A54 ; Jump if Not Zero (ZF=0)
.text:0000000143BA4A42 48 8B 84 24 08 02 00 00                 mov     rax, [rsp+208h]
.text:0000000143BA4A4A 48 89 84 24 A8 03 00 00                 mov     [rsp+3A8h], rax
.text:0000000143BA4A52 EB 20                                   jmp     short loc_143BA4A74 ; Jump
.text:0000000143BA4A54                         ; ---------------------------------------------------------------------------
.text:0000000143BA4A54
.text:0000000143BA4A54                         loc_143BA4A54:                          ; CODE XREF: sub_143BA47A0+2A0↑j
.text:0000000143BA4A54 48 B8 00 00 00 00 00 00                 mov     rax, 0FFFF000000000000h
.text:0000000143BA4A54 FF FF
.text:0000000143BA4A5E 48 8B 8C 24 08 02 00 00                 mov     rcx, [rsp+208h]
.text:0000000143BA4A66 48 0B C8                                or      rcx, rax        ; Logical Inclusive OR
.text:0000000143BA4A69 48 8B C1                                mov     rax, rcx
.text:0000000143BA4A6C 48 89 84 24 A8 03 00 00                 mov     [rsp+3A8h], rax
.text:0000000143BA4A74
.text:0000000143BA4A74                         loc_143BA4A74:                          ; CODE XREF: sub_143BA47A0+2B2↑j
.text:0000000143BA4A74 48 8B 84 24 A8 03 00 00                 mov     rax, [rsp+3A8h]
.text:0000000143BA4A7C 48 89 84 24 38 06 00 00                 mov     [rsp+638h], rax
.text:0000000143BA4A84 48 8B 84 24 38 06 00 00                 mov     rax, [rsp+638h]
.text:0000000143BA4A8C 48 89 84 24 A0 02 00 00                 mov     [rsp+2A0h], rax
.text:0000000143BA4A94 EB 10                                   jmp     short loc_143BA4AA6 ; Jump
.text:0000000143BA4A96                         ; ---------------------------------------------------------------------------
.text:0000000143BA4A96
.text:0000000143BA4A96                         loc_143BA4A96:                          ; CODE XREF: sub_143BA47A0+1CC↑j
.text:0000000143BA4A96 48 8B 84 24 D0 00 00 00                 mov     rax, [rsp+0D0h]
.text:0000000143BA4A9E 48 89 84 24 A0 02 00 00                 mov     [rsp+2A0h], rax
.text:0000000143BA4AA6
.text:0000000143BA4AA6                         loc_143BA4AA6:                          ; CODE XREF: sub_143BA47A0+2F4↑j
.text:0000000143BA4AA6 48 8B 84 24 A0 02 00 00                 mov     rax, [rsp+2A0h]
.text:0000000143BA4AAE 48 89 84 24 A8 02 00 00                 mov     [rsp+2A8h], rax
.text:0000000143BA4AB6
.text:0000000143BA4AB6                         loc_143BA4AB6:                          ; CODE XREF: sub_143BA47A0+162↑j
.text:0000000143BA4AB6 48 8B 84 24 A8 02 00 00                 mov     rax, [rsp+2A8h]
.text:0000000143BA4ABE 48 89 84 24 40 06 00 00                 mov     [rsp+640h], rax
.text:0000000143BA4AC6 48 8B 84 24 40 06 00 00                 mov     rax, [rsp+640h]
.text:0000000143BA4ACE 48 89 84 24 B0 02 00 00                 mov     [rsp+2B0h], rax
.text:0000000143BA4AD6 48 83 BC 24 B0 02 00 00                 cmp     qword ptr [rsp+2B0h], 0 ; Compare Two Operands
.text:0000000143BA4AD6 00
.text:0000000143BA4ADF 0F 84 7E 02 00 00                       jz      loc_143BA4D63   ; Jump if Zero (ZF=1)
.text:0000000143BA4AE5 48 8B 8C 24 B0 02 00 00                 mov     rcx, [rsp+2B0h]
.text:0000000143BA4AED E8 6E 73 F6 FC                          call    sub_140B0BE60   ; Call Procedure
.text:0000000143BA4AF2 48 89 84 24 B8 02 00 00                 mov     [rsp+2B8h], rax
.text:0000000143BA4AFA 48 8B 84 24 B8 02 00 00                 mov     rax, [rsp+2B8h]
.text:0000000143BA4B02 0F 10 40 10                             movups  xmm0, xmmword ptr [rax+10h] ; Move Unaligned Four Packed Single-FP
.text:0000000143BA4B06 0F 11 84 24 90 06 00 00                 movups  xmmword ptr [rsp+690h], xmm0 ; Move Unaligned Four Packed Single-FP
.text:0000000143BA4B0E 48 8B 84 24 B8 02 00 00                 mov     rax, [rsp+2B8h]
.text:0000000143BA4B16 48 83 C0 30                             add     rax, 30h ; '0'  ; Add
.text:0000000143BA4B1A 48 89 84 24 C0 00 00 00                 mov     [rsp+0C0h], rax
.text:0000000143BA4B22 C6 44 24 79 00                          mov     byte ptr [rsp+79h], 0
.text:0000000143BA4B27 0F B6 44 24 79                          movzx   eax, byte ptr [rsp+79h] ; Move with Zero-Extend
.text:0000000143BA4B2C 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA4B2F 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4B31 74 07                                   jz      short loc_143BA4B3A ; Jump if Zero (ZF=1)
.text:0000000143BA4B33 C6 44 24 48 01                          mov     byte ptr [rsp+48h], 1
.text:0000000143BA4B38 EB 1D                                   jmp     short loc_143BA4B57 ; Jump
.text:0000000143BA4B3A                         ; ---------------------------------------------------------------------------
.text:0000000143BA4B3A
.text:0000000143BA4B3A                         loc_143BA4B3A:                          ; CODE XREF: sub_143BA47A0+391↑j
.text:0000000143BA4B3A C6 44 24 7A 01                          mov     byte ptr [rsp+7Ah], 1
.text:0000000143BA4B3F 0F B6 44 24 7A                          movzx   eax, byte ptr [rsp+7Ah] ; Move with Zero-Extend
.text:0000000143BA4B44 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA4B47 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4B49 74 07                                   jz      short loc_143BA4B52 ; Jump if Zero (ZF=1)
.text:0000000143BA4B4B C6 44 24 48 00                          mov     byte ptr [rsp+48h], 0
.text:0000000143BA4B50 EB 05                                   jmp     short loc_143BA4B57 ; Jump
.text:0000000143BA4B52                         ; ---------------------------------------------------------------------------
.text:0000000143BA4B52
.text:0000000143BA4B52                         loc_143BA4B52:                          ; CODE XREF: sub_143BA47A0+3A9↑j
.text:0000000143BA4B52 C6 44 24 48 00                          mov     byte ptr [rsp+48h], 0
.text:0000000143BA4B57
.text:0000000143BA4B57                         loc_143BA4B57:                          ; CODE XREF: sub_143BA47A0+398↑j
.text:0000000143BA4B57                                                                 ; sub_143BA47A0+3B0↑j
.text:0000000143BA4B57 0F B6 44 24 48                          movzx   eax, [rsp+828h+var_7E0] ; Move with Zero-Extend
.text:0000000143BA4B5C 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA4B5F 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4B61 74 07                                   jz      short loc_143BA4B6A ; Jump if Zero (ZF=1)
.text:0000000143BA4B63 C6 44 24 60 00                          mov     [rsp+828h+var_7C8], 0
.text:0000000143BA4B68 EB 05                                   jmp     short loc_143BA4B6F ; Jump
.text:0000000143BA4B6A                         ; ---------------------------------------------------------------------------
.text:0000000143BA4B6A
.text:0000000143BA4B6A                         loc_143BA4B6A:                          ; CODE XREF: sub_143BA47A0+3C1↑j
.text:0000000143BA4B6A C6 44 24 60 01                          mov     [rsp+828h+var_7C8], 1
.text:0000000143BA4B6F
.text:0000000143BA4B6F                         loc_143BA4B6F:                          ; CODE XREF: sub_143BA47A0+3C8↑j
.text:0000000143BA4B6F 0F B6 44 24 60                          movzx   eax, [rsp+828h+var_7C8] ; Move with Zero-Extend
.text:0000000143BA4B74 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA4B77 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4B79 0F 84 EA 00 00 00                       jz      loc_143BA4C69   ; Jump if Zero (ZF=1)
.text:0000000143BA4B7F 48 8B 84 24 C0 00 00 00                 mov     rax, [rsp+828h+var_768]
.text:0000000143BA4B87 0F B7 00                                movzx   eax, word ptr [rax] ; Move with Zero-Extend
.text:0000000143BA4B8A 3D FF FF 00 00                          cmp     eax, 0FFFFh     ; Compare Two Operands
.text:0000000143BA4B8F 74 0D                                   jz      short loc_143BA4B9E ; Jump if Zero (ZF=1)
.text:0000000143BA4B91 C7 84 24 A0 00 00 00 01                 mov     [rsp+828h+var_788], 1
.text:0000000143BA4B91 00 00 00
.text:0000000143BA4B9C EB 0B                                   jmp     short loc_143BA4BA9 ; Jump
.text:0000000143BA4B9E                         ; ---------------------------------------------------------------------------
.text:0000000143BA4B9E
.text:0000000143BA4B9E                         loc_143BA4B9E:                          ; CODE XREF: sub_143BA47A0+3EF↑j
.text:0000000143BA4B9E C7 84 24 A0 00 00 00 00                 mov     [rsp+828h+var_788], 0
.text:0000000143BA4B9E 00 00 00
.text:0000000143BA4BA9
.text:0000000143BA4BA9                         loc_143BA4BA9:                          ; CODE XREF: sub_143BA47A0+3FC↑j
.text:0000000143BA4BA9 0F B6 84 24 A0 00 00 00                 movzx   eax, byte ptr [rsp+828h+var_788] ; Move with Zero-Extend
.text:0000000143BA4BB1 88 44 24 7B                             mov     [rsp+828h+var_7AD], al
.text:0000000143BA4BB5 0F B6 44 24 7B                          movzx   eax, [rsp+828h+var_7AD] ; Move with Zero-Extend
.text:0000000143BA4BBA 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA4BBD 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4BBF 0F 84 A4 00 00 00                       jz      loc_143BA4C69   ; Jump if Zero (ZF=1)
.text:0000000143BA4BC5 33 C0                                   xor     eax, eax        ; Logical Exclusive OR
.text:0000000143BA4BC7 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4BC9 74 51                                   jz      short loc_143BA4C1C ; Jump if Zero (ZF=1)
.text:0000000143BA4BCB 48 8B 84 24 C0 00 00 00                 mov     rax, [rsp+828h+var_768]
.text:0000000143BA4BD3 48 83 C0 02                             add     rax, 2          ; Add
.text:0000000143BA4BD7 33 C9                                   xor     ecx, ecx        ; Logical Exclusive OR
.text:0000000143BA4BD9 48 89 84 24 C0 02 00 00                 mov     [rsp+828h+var_568], rax
.text:0000000143BA4BE1 B0 01                                   mov     al, 1
.text:0000000143BA4BE3 48 8B 94 24 C0 02 00 00                 mov     rdx, [rsp+828h+var_568]
.text:0000000143BA4BEB 48 8B 94 24 C0 02 00 00                 mov     rdx, [rsp+828h+var_568]
.text:0000000143BA4BF3 F0 0F B0 0A                             lock cmpxchg [rdx], cl  ; Compare and Exchange
.text:0000000143BA4BF7 88 44 24 7C                             mov     [rsp+828h+var_7AC], al
.text:0000000143BA4BFB 0F B6 44 24 7C                          movzx   eax, [rsp+828h+var_7AC] ; Move with Zero-Extend
.text:0000000143BA4C00 88 44 24 7D                             mov     [rsp+828h+var_7AB], al
.text:0000000143BA4C04 0F BE 44 24 7D                          movsx   eax, [rsp+828h+var_7AB] ; Move with Sign-Extend
.text:0000000143BA4C09 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4C0B 75 0D                                   jnz     short loc_143BA4C1A ; Jump if Not Zero (ZF=0)
.text:0000000143BA4C0D 48 8D 0D DC DD B2 0C                    lea     rcx, aDoubleDecrypti_0 ; Load Effective Address
.text:0000000143BA4C14 E8 77 07 C9 08                          call    sub_14C835390   ; Call Procedure
.text:0000000143BA4C19 90                                      nop                     ; No Operation
.text:0000000143BA4C1A
.text:0000000143BA4C1A                         loc_143BA4C1A:                          ; CODE XREF: sub_143BA47A0+46B↑j
.text:0000000143BA4C1A EB 31                                   jmp     short loc_143BA4C4D ; Jump
.text:0000000143BA4C1C                         ; ---------------------------------------------------------------------------
.text:0000000143BA4C1C
.text:0000000143BA4C1C                         loc_143BA4C1C:                          ; CODE XREF: sub_143BA47A0+429↑j
.text:0000000143BA4C1C 33 C0                                   xor     eax, eax        ; Logical Exclusive OR
.text:0000000143BA4C1E 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4C20 74 0E                                   jz      short loc_143BA4C30 ; Jump if Zero (ZF=1)
.text:0000000143BA4C22 48 8B 84 24 C0 00 00 00                 mov     rax, [rsp+828h+var_768]
.text:0000000143BA4C2A C6 40 02 00                             mov     byte ptr [rax+2], 0
.text:0000000143BA4C2E EB 1D                                   jmp     short loc_143BA4C4D ; Jump
.text:0000000143BA4C30                         ; ---------------------------------------------------------------------------
.text:0000000143BA4C30
.text:0000000143BA4C30                         loc_143BA4C30:                          ; CODE XREF: sub_143BA47A0+480↑j
.text:0000000143BA4C30 48 8B 84 24 C0 00 00 00                 mov     rax, [rsp+828h+var_768]
.text:0000000143BA4C38 0F BE 40 02                             movsx   eax, byte ptr [rax+2] ; Move with Sign-Extend
.text:0000000143BA4C3C 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4C3E 75 0D                                   jnz     short loc_143BA4C4D ; Jump if Not Zero (ZF=0)
.text:0000000143BA4C40 48 8D 0D 09 DE B2 0C                    lea     rcx, aDoubleDecrypti ; Load Effective Address
.text:0000000143BA4C47 E8 44 07 C9 08                          call    sub_14C835390   ; Call Procedure
.text:0000000143BA4C4C 90                                      nop                     ; No Operation
.text:0000000143BA4C4D
.text:0000000143BA4C4D                         loc_143BA4C4D:                          ; CODE XREF: sub_143BA47A0:loc_143BA4C1A↑j
.text:0000000143BA4C4D                                                                 ; sub_143BA47A0+48E↑j ...
.text:0000000143BA4C4D 4C 8B 84 24 C0 00 00 00                 mov     r8, [rsp+828h+var_768]
.text:0000000143BA4C55 BA 0C 00 00 00                          mov     edx, 0Ch
.text:0000000143BA4C5A 48 8D 8C 24 90 06 00 00                 lea     rcx, [rsp+828h+var_198] ; Load Effective Address
.text:0000000143BA4C62 FF 15 F0 7F 80 13                       call    cs:qword_1573ACC58 ; Indirect Call Near Procedure
.text:0000000143BA4C68 90                                      nop                     ; No Operation
.text:0000000143BA4C69
.text:0000000143BA4C69                         loc_143BA4C69:                          ; CODE XREF: sub_143BA47A0+3D9↑j
.text:0000000143BA4C69                                                                 ; sub_143BA47A0+41F↑j
.text:0000000143BA4C69 0F 28 84 24 90 06 00 00                 movaps  xmm0, [rsp+828h+var_198] ; Move Aligned Four Packed Single-FP
.text:0000000143BA4C71 0F 29 84 24 40 07 00 00                 movaps  [rsp+828h+var_E8], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BA4C79 48 8D 84 24 40 07 00 00                 lea     rax, [rsp+828h+var_E8] ; Load Effective Address
.text:0000000143BA4C81 48 89 84 24 48 06 00 00                 mov     [rsp+828h+var_1E0], rax
.text:0000000143BA4C89 48 8B 84 24 48 06 00 00                 mov     rax, [rsp+828h+var_1E0]
.text:0000000143BA4C91 0F 10 00                                movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.text:0000000143BA4C94 0F 11 84 24 F0 07 00 00                 movups  [rsp+828h+var_38], xmm0 ; Move Unaligned Four Packed Single-FP
.text:0000000143BA4C9C 48 8D 84 24 00 07 00 00                 lea     rax, [rsp+828h+var_128] ; Load Effective Address
.text:0000000143BA4CA4 48 89 84 24 10 02 00 00                 mov     [rsp+828h+var_618], rax
.text:0000000143BA4CAC B8 04 00 00 00                          mov     eax, 4
.text:0000000143BA4CB1 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BA4CB5 B9 04 00 00 00                          mov     ecx, 4
.text:0000000143BA4CBA 48 6B C9 00                             imul    rcx, 0          ; Signed Multiply
.text:0000000143BA4CBE 48 8B 94 24 10 02 00 00                 mov     rdx, [rsp+828h+var_618]
.text:0000000143BA4CC6 F3 0F 10 84 04 F0 07 00                 movss   xmm0, dword ptr [rsp+rax+828h+var_38] ; Move Scalar Single-FP
.text:0000000143BA4CC6 00
.text:0000000143BA4CCF F3 0F 11 04 0A                          movss   dword ptr [rdx+rcx], xmm0 ; Move Scalar Single-FP
.text:0000000143BA4CD4 B8 04 00 00 00                          mov     eax, 4
.text:0000000143BA4CD9 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BA4CDD B9 04 00 00 00                          mov     ecx, 4
.text:0000000143BA4CE2 48 6B C9 01                             imul    rcx, 1          ; Signed Multiply
.text:0000000143BA4CE6 48 8B 94 24 10 02 00 00                 mov     rdx, [rsp+828h+var_618]
.text:0000000143BA4CEE F3 0F 10 84 04 F0 07 00                 movss   xmm0, dword ptr [rsp+rax+828h+var_38] ; Move Scalar Single-FP
.text:0000000143BA4CEE 00
.text:0000000143BA4CF7 F3 0F 11 04 0A                          movss   dword ptr [rdx+rcx], xmm0 ; Move Scalar Single-FP
.text:0000000143BA4CFC B8 04 00 00 00                          mov     eax, 4
.text:0000000143BA4D01 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BA4D05 B9 04 00 00 00                          mov     ecx, 4
.text:0000000143BA4D0A 48 6B C9 02                             imul    rcx, 2          ; Signed Multiply
.text:0000000143BA4D0E 48 8B 94 24 10 02 00 00                 mov     rdx, [rsp+828h+var_618]
.text:0000000143BA4D16 F3 0F 10 84 04 F0 07 00                 movss   xmm0, dword ptr [rsp+rax+828h+var_38] ; Move Scalar Single-FP
.text:0000000143BA4D16 00
.text:0000000143BA4D1F F3 0F 11 04 0A                          movss   dword ptr [rdx+rcx], xmm0 ; Move Scalar Single-FP
.text:0000000143BA4D24 48 8D 84 24 10 07 00 00                 lea     rax, [rsp+828h+var_118] ; Load Effective Address
.text:0000000143BA4D2C 48 8D 8C 24 00 07 00 00                 lea     rcx, [rsp+828h+var_128] ; Load Effective Address
.text:0000000143BA4D34 48 8B F8                                mov     rdi, rax
.text:0000000143BA4D37 48 8B F1                                mov     rsi, rcx
.text:0000000143BA4D3A B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA4D3F F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA4D41 48 8D 84 24 10 07 00 00                 lea     rax, [rsp+828h+var_118] ; Load Effective Address
.text:0000000143BA4D49 48 89 84 24 50 06 00 00                 mov     [rsp+828h+var_1D8], rax
.text:0000000143BA4D51 48 8B 84 24 50 06 00 00                 mov     rax, [rsp+828h+var_1D8]
.text:0000000143BA4D59 48 89 84 24 C8 02 00 00                 mov     [rsp+828h+var_560], rax
.text:0000000143BA4D61 EB 2C                                   jmp     short loc_143BA4D8F ; Jump
.text:0000000143BA4D63                         ; ---------------------------------------------------------------------------
.text:0000000143BA4D63
.text:0000000143BA4D63                         loc_143BA4D63:                          ; CODE XREF: sub_143BA47A0+33F↑j
.text:0000000143BA4D63 48 8D 84 24 1C 07 00 00                 lea     rax, [rsp+828h+var_10C] ; Load Effective Address
.text:0000000143BA4D6B 48 8D 0D 1E 7F 80 13                    lea     rcx, xmmword_1573ACC88+8 ; Load Effective Address
.text:0000000143BA4D72 48 8B F8                                mov     rdi, rax
.text:0000000143BA4D75 48 8B F1                                mov     rsi, rcx
.text:0000000143BA4D78 B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA4D7D F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA4D7F 48 8D 84 24 1C 07 00 00                 lea     rax, [rsp+828h+var_10C] ; Load Effective Address
.text:0000000143BA4D87 48 89 84 24 C8 02 00 00                 mov     [rsp+828h+var_560], rax
.text:0000000143BA4D8F
.text:0000000143BA4D8F                         loc_143BA4D8F:                          ; CODE XREF: sub_143BA47A0+5C1↑j
.text:0000000143BA4D8F 48 8B 84 24 C8 02 00 00                 mov     rax, [rsp+828h+var_560]
.text:0000000143BA4D97 48 89 84 24 60 06 00 00                 mov     [rsp+828h+var_1C8], rax
.text:0000000143BA4D9F 48 8D 84 24 28 07 00 00                 lea     rax, [rsp+828h+var_100] ; Load Effective Address
.text:0000000143BA4DA7 48 8B F8                                mov     rdi, rax
.text:0000000143BA4DAA 48 8B B4 24 60 06 00 00                 mov     rsi, [rsp+828h+var_1C8]
.text:0000000143BA4DB2 B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA4DB7 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA4DB9 48 8D 84 24 28 07 00 00                 lea     rax, [rsp+828h+var_100] ; Load Effective Address
.text:0000000143BA4DC1 48 89 84 24 68 06 00 00                 mov     [rsp+828h+var_1C0], rax
.text:0000000143BA4DC9 48 8D 44 24 50                          lea     rax, [rsp+828h+var_7D8] ; Load Effective Address
.text:0000000143BA4DCE 48 8B F8                                mov     rdi, rax
.text:0000000143BA4DD1 48 8B B4 24 68 06 00 00                 mov     rsi, [rsp+828h+var_1C0]
.text:0000000143BA4DD9 B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA4DDE F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA4DE0 48 8B 44 24 40                          mov     rax, [rsp+828h+var_7E8]
.text:0000000143BA4DE5 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA4DEC 0F B6 80 02 01 00 00                    movzx   eax, byte ptr [rax+102h] ; Move with Zero-Extend
.text:0000000143BA4DF3 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4DF5 0F 84 61 09 00 00                       jz      loc_143BA575C   ; Jump if Zero (ZF=1)
.text:0000000143BA4DFB 48 8B 44 24 40                          mov     rax, [rsp+828h+var_7E8]
.text:0000000143BA4E00 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA4E07 0F B6 80 01 01 00 00                    movzx   eax, byte ptr [rax+101h] ; Move with Zero-Extend
.text:0000000143BA4E0E 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4E10 0F 85 46 09 00 00                       jnz     loc_143BA575C   ; Jump if Not Zero (ZF=0)
.text:0000000143BA4E16 48 8B 44 24 40                          mov     rax, [rsp+828h+var_7E8]
.text:0000000143BA4E1B 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA4E22 48 05 70 01 00 00                       add     rax, 170h       ; Add
.text:0000000143BA4E28 48 89 84 24 70 06 00 00                 mov     [rsp+828h+var_1B8], rax
.text:0000000143BA4E30 48 8B 84 24 70 06 00 00                 mov     rax, [rsp+828h+var_1B8]
.text:0000000143BA4E38 BA 02 00 00 00                          mov     edx, 2
.text:0000000143BA4E3D 48 8B C8                                mov     rcx, rax
.text:0000000143BA4E40 E8 5B EA 6B FD                          call    sub_1412638A0   ; Call Procedure
.text:0000000143BA4E45 48 89 84 24 E0 00 00 00                 mov     [rsp+828h+var_748], rax
.text:0000000143BA4E4D 48 83 BC 24 E0 00 00 00                 cmp     [rsp+828h+var_748], 0 ; Compare Two Operands
.text:0000000143BA4E4D 00
.text:0000000143BA4E56 75 11                                   jnz     short loc_143BA4E69 ; Jump if Not Zero (ZF=0)
.text:0000000143BA4E58 48 C7 84 24 E0 02 00 00                 mov     [rsp+828h+var_548], 0
.text:0000000143BA4E58 00 00 00 00
.text:0000000143BA4E64 E9 AF 01 00 00                          jmp     loc_143BA5018   ; Jump
.text:0000000143BA4E69                         ; ---------------------------------------------------------------------------
.text:0000000143BA4E69
.text:0000000143BA4E69                         loc_143BA4E69:                          ; CODE XREF: sub_143BA47A0+6B6↑j
.text:0000000143BA4E69 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA4E69 00 00
.text:0000000143BA4E73 48 8B 8C 24 E0 00 00 00                 mov     rcx, [rsp+828h+var_748]
.text:0000000143BA4E7B 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA4E7E 48 8B C1                                mov     rax, rcx
.text:0000000143BA4E81 48 89 84 24 78 06 00 00                 mov     [rsp+828h+var_1B0], rax
.text:0000000143BA4E89 48 8B 84 24 E0 00 00 00                 mov     rax, [rsp+828h+var_748]
.text:0000000143BA4E91 48 C1 E8 30                             shr     rax, 30h        ; Shift Logical Right
.text:0000000143BA4E95 48 25 FF 3F 00 00                       and     rax, 3FFFh      ; Logical AND
.text:0000000143BA4E9B 48 89 84 24 E8 00 00 00                 mov     [rsp+828h+var_740], rax
.text:0000000143BA4EA3 48 8B 84 24 E0 00 00 00                 mov     rax, [rsp+828h+var_748]
.text:0000000143BA4EAB 48 C1 E8 3F                             shr     rax, 3Fh        ; Shift Logical Right
.text:0000000143BA4EAF 48 83 E0 01                             and     rax, 1          ; Logical AND
.text:0000000143BA4EB3 88 44 24 7E                             mov     [rsp+828h+var_7AA], al
.text:0000000143BA4EB7 48 8B 84 24 78 06 00 00                 mov     rax, [rsp+828h+var_1B0]
.text:0000000143BA4EBF 48 89 84 24 C8 00 00 00                 mov     [rsp+828h+var_760], rax
.text:0000000143BA4EC7 0F B6 44 24 7E                          movzx   eax, [rsp+828h+var_7AA] ; Move with Zero-Extend
.text:0000000143BA4ECC 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4ECE 0F 84 24 01 00 00                       jz      loc_143BA4FF8   ; Jump if Zero (ZF=1)
.text:0000000143BA4ED4 48 C7 84 24 68 07 00 00                 mov     [rsp+828h+var_C0], 4
.text:0000000143BA4ED4 04 00 00 00
.text:0000000143BA4EE0 83 3D AD 58 CA 12 01                    cmp     cs:dword_15684A794, 1 ; Compare Two Operands
.text:0000000143BA4EE7 75 25                                   jnz     short loc_143BA4F0E ; Jump if Not Zero (ZF=0)
.text:0000000143BA4EE9 44 8B 8C 24 E8 00 00 00                 mov     r9d, dword ptr [rsp+828h+var_740]
.text:0000000143BA4EF1 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA4EF7 48 8D 94 24 C8 00 00 00                 lea     rdx, [rsp+828h+var_760] ; Load Effective Address
.text:0000000143BA4EFF 48 8B 0D 7A 31 83 13                    mov     rcx, cs:qword_1573D8080
.text:0000000143BA4F06 E8 05 8A EE FC                          call    sub_140A8D910   ; Call Procedure
.text:0000000143BA4F0B 90                                      nop                     ; No Operation
.text:0000000143BA4F0C EB 65                                   jmp     short loc_143BA4F73 ; Jump
.text:0000000143BA4F0E                         ; ---------------------------------------------------------------------------
.text:0000000143BA4F0E
.text:0000000143BA4F0E                         loc_143BA4F0E:                          ; CODE XREF: sub_143BA47A0+747↑j
.text:0000000143BA4F0E 83 3D 7F 58 CA 12 02                    cmp     cs:dword_15684A794, 2 ; Compare Two Operands
.text:0000000143BA4F15 75 25                                   jnz     short loc_143BA4F3C ; Jump if Not Zero (ZF=0)
.text:0000000143BA4F17 44 8B 8C 24 E8 00 00 00                 mov     r9d, dword ptr [rsp+828h+var_740]
.text:0000000143BA4F1F 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA4F25 48 8D 94 24 C8 00 00 00                 lea     rdx, [rsp+828h+var_760] ; Load Effective Address
.text:0000000143BA4F2D 48 8B 0D 54 31 83 13                    mov     rcx, cs:qword_1573D8088
.text:0000000143BA4F34 E8 A7 89 EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA4F39 90                                      nop                     ; No Operation
.text:0000000143BA4F3A EB 37                                   jmp     short loc_143BA4F73 ; Jump
.text:0000000143BA4F3C                         ; ---------------------------------------------------------------------------
.text:0000000143BA4F3C
.text:0000000143BA4F3C                         loc_143BA4F3C:                          ; CODE XREF: sub_143BA47A0+775↑j
.text:0000000143BA4F3C 83 3D 51 58 CA 12 03                    cmp     cs:dword_15684A794, 3 ; Compare Two Operands
.text:0000000143BA4F43 75 2E                                   jnz     short loc_143BA4F73 ; Jump if Not Zero (ZF=0)
.text:0000000143BA4F45 8B 84 24 E8 00 00 00                    mov     eax, dword ptr [rsp+828h+var_740]
.text:0000000143BA4F4C 48 8D 0D 3D 31 83 13                    lea     rcx, qword_1573D8090 ; Load Effective Address
.text:0000000143BA4F53 44 8B 8C 24 E8 00 00 00                 mov     r9d, dword ptr [rsp+828h+var_740]
.text:0000000143BA4F5B 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA4F61 48 8D 94 24 C8 00 00 00                 lea     rdx, [rsp+828h+var_760] ; Load Effective Address
.text:0000000143BA4F69 48 8B 0C C1                             mov     rcx, [rcx+rax*8]
.text:0000000143BA4F6D E8 6E 89 EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA4F72 90                                      nop                     ; No Operation
.text:0000000143BA4F73
.text:0000000143BA4F73                         loc_143BA4F73:                          ; CODE XREF: sub_143BA47A0+76C↑j
.text:0000000143BA4F73                                                                 ; sub_143BA47A0+79A↑j ...
.text:0000000143BA4F73 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA4F73 00 00
.text:0000000143BA4F7D 48 8B 8C 24 C8 00 00 00                 mov     rcx, [rsp+828h+var_760]
.text:0000000143BA4F85 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA4F88 48 8B C1                                mov     rax, rcx
.text:0000000143BA4F8B 48 89 84 24 18 02 00 00                 mov     [rsp+828h+var_610], rax
.text:0000000143BA4F93 48 8B 84 24 18 02 00 00                 mov     rax, [rsp+828h+var_610]
.text:0000000143BA4F9B 48 C1 F8 2F                             sar     rax, 2Fh        ; Shift Arithmetic Right
.text:0000000143BA4F9F 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA4FA2 75 12                                   jnz     short loc_143BA4FB6 ; Jump if Not Zero (ZF=0)
.text:0000000143BA4FA4 48 8B 84 24 18 02 00 00                 mov     rax, [rsp+828h+var_610]
.text:0000000143BA4FAC 48 89 84 24 D0 02 00 00                 mov     [rsp+828h+var_558], rax
.text:0000000143BA4FB4 EB 20                                   jmp     short loc_143BA4FD6 ; Jump
.text:0000000143BA4FB6                         ; ---------------------------------------------------------------------------
.text:0000000143BA4FB6
.text:0000000143BA4FB6                         loc_143BA4FB6:                          ; CODE XREF: sub_143BA47A0+802↑j
.text:0000000143BA4FB6 48 B8 00 00 00 00 00 00                 mov     rax, 0FFFF000000000000h
.text:0000000143BA4FB6 FF FF
.text:0000000143BA4FC0 48 8B 8C 24 18 02 00 00                 mov     rcx, [rsp+828h+var_610]
.text:0000000143BA4FC8 48 0B C8                                or      rcx, rax        ; Logical Inclusive OR
.text:0000000143BA4FCB 48 8B C1                                mov     rax, rcx
.text:0000000143BA4FCE 48 89 84 24 D0 02 00 00                 mov     [rsp+828h+var_558], rax
.text:0000000143BA4FD6
.text:0000000143BA4FD6                         loc_143BA4FD6:                          ; CODE XREF: sub_143BA47A0+814↑j
.text:0000000143BA4FD6 48 8B 84 24 D0 02 00 00                 mov     rax, [rsp+828h+var_558]
.text:0000000143BA4FDE 48 89 84 24 80 06 00 00                 mov     [rsp+828h+var_1A8], rax
.text:0000000143BA4FE6 48 8B 84 24 80 06 00 00                 mov     rax, [rsp+828h+var_1A8]
.text:0000000143BA4FEE 48 89 84 24 D8 02 00 00                 mov     [rsp+828h+var_550], rax
.text:0000000143BA4FF6 EB 10                                   jmp     short loc_143BA5008 ; Jump
.text:0000000143BA4FF8                         ; ---------------------------------------------------------------------------
.text:0000000143BA4FF8
.text:0000000143BA4FF8                         loc_143BA4FF8:                          ; CODE XREF: sub_143BA47A0+72E↑j
.text:0000000143BA4FF8 48 8B 84 24 C8 00 00 00                 mov     rax, [rsp+828h+var_760]
.text:0000000143BA5000 48 89 84 24 D8 02 00 00                 mov     [rsp+828h+var_550], rax
.text:0000000143BA5008
.text:0000000143BA5008                         loc_143BA5008:                          ; CODE XREF: sub_143BA47A0+856↑j
.text:0000000143BA5008 48 8B 84 24 D8 02 00 00                 mov     rax, [rsp+828h+var_550]
.text:0000000143BA5010 48 89 84 24 E0 02 00 00                 mov     [rsp+828h+var_548], rax
.text:0000000143BA5018
.text:0000000143BA5018                         loc_143BA5018:                          ; CODE XREF: sub_143BA47A0+6C4↑j
.text:0000000143BA5018 48 8B 84 24 E0 02 00 00                 mov     rax, [rsp+828h+var_548]
.text:0000000143BA5020 48 89 84 24 88 06 00 00                 mov     [rsp+828h+var_1A0], rax
.text:0000000143BA5028 48 8B 84 24 88 06 00 00                 mov     rax, [rsp+828h+var_1A0]
.text:0000000143BA5030 48 89 84 24 50 04 00 00                 mov     [rsp+828h+var_3D8], rax
.text:0000000143BA5038 48 8B 84 24 50 04 00 00                 mov     rax, [rsp+828h+var_3D8]
.text:0000000143BA5040 48 89 84 24 A8 00 00 00                 mov     [rsp+828h+var_780], rax
.text:0000000143BA5048 48 83 BC 24 A8 00 00 00                 cmp     [rsp+828h+var_780], 0 ; Compare Two Operands
.text:0000000143BA5048 00
.text:0000000143BA5051 0F 84 00 07 00 00                       jz      loc_143BA5757   ; Jump if Zero (ZF=1)
.text:0000000143BA5057 48 8B 44 24 40                          mov     rax, [rsp+828h+var_7E8]
.text:0000000143BA505C 48 8B 00                                mov     rax, [rax]
.text:0000000143BA505F 48 8B 4C 24 40                          mov     rcx, [rsp+828h+var_7E8]
.text:0000000143BA5064 FF 90 28 09 00 00                       call    qword ptr [rax+928h] ; Indirect Call Near Procedure
.text:0000000143BA506A 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA506D 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA506F 75 1E                                   jnz     short loc_143BA508F ; Jump if Not Zero (ZF=0)
.text:0000000143BA5071 48 8B 44 24 40                          mov     rax, [rsp+828h+var_7E8]
.text:0000000143BA5076 48 8B 00                                mov     rax, [rax]
.text:0000000143BA5079 48 8B 4C 24 40                          mov     rcx, [rsp+828h+var_7E8]
.text:0000000143BA507E FF 90 88 09 00 00                       call    qword ptr [rax+988h] ; Indirect Call Near Procedure
.text:0000000143BA5084 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA5087 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA5089 0F 84 A2 01 00 00                       jz      loc_143BA5231   ; Jump if Zero (ZF=1)
.text:0000000143BA508F
.text:0000000143BA508F                         loc_143BA508F:                          ; CODE XREF: sub_143BA47A0+8CF↑j
.text:0000000143BA508F 48 8D 94 24 70 07 00 00                 lea     rdx, [rsp+828h+var_B8] ; Load Effective Address
.text:0000000143BA5097 48 8B 4C 24 40                          mov     rcx, [rsp+828h+var_7E8]
.text:0000000143BA509C E8 CF 89 72 FF                          call    sub_1432CDA70   ; Call Procedure
.text:0000000143BA50A1 48 89 84 24 20 02 00 00                 mov     [rsp+828h+var_608], rax
.text:0000000143BA50A9 48 8B 84 24 20 02 00 00                 mov     rax, [rsp+828h+var_608]
.text:0000000143BA50B1 F3 0F 10 44 24 58                       movss   xmm0, [rsp+828h+var_7D0] ; Move Scalar Single-FP
.text:0000000143BA50B7 F3 0F 58 40 08                          addss   xmm0, dword ptr [rax+8] ; Scalar Single-FP Add
.text:0000000143BA50BC F3 0F 11 84 24 30 01 00                 movss   [rsp+828h+var_6F8], xmm0 ; Move Scalar Single-FP
.text:0000000143BA50BC 00
.text:0000000143BA50C5 48 8B 84 24 20 02 00 00                 mov     rax, [rsp+828h+var_608]
.text:0000000143BA50CD F3 0F 10 44 24 54                       movss   xmm0, [rsp+828h+var_7D4] ; Move Scalar Single-FP
.text:0000000143BA50D3 F3 0F 58 40 04                          addss   xmm0, dword ptr [rax+4] ; Scalar Single-FP Add
.text:0000000143BA50D8 F3 0F 11 84 24 28 01 00                 movss   [rsp+828h+var_700], xmm0 ; Move Scalar Single-FP
.text:0000000143BA50D8 00
.text:0000000143BA50E1 48 8B 84 24 20 02 00 00                 mov     rax, [rsp+828h+var_608]
.text:0000000143BA50E9 F3 0F 10 44 24 50                       movss   xmm0, [rsp+828h+var_7D8] ; Move Scalar Single-FP
.text:0000000143BA50EF F3 0F 58 00                             addss   xmm0, dword ptr [rax] ; Scalar Single-FP Add
.text:0000000143BA50F3 F3 0F 11 84 24 20 01 00                 movss   [rsp+828h+var_708], xmm0 ; Move Scalar Single-FP
.text:0000000143BA50F3 00
.text:0000000143BA50FC F3 0F 10 84 24 20 01 00                 movss   xmm0, [rsp+828h+var_708] ; Move Scalar Single-FP
.text:0000000143BA50FC 00
.text:0000000143BA5105 F3 0F 11 84 24 BC 03 00                 movss   [rsp+828h+var_46C], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5105 00
.text:0000000143BA510E F3 0F 10 84 24 28 01 00                 movss   xmm0, [rsp+828h+var_700] ; Move Scalar Single-FP
.text:0000000143BA510E 00
.text:0000000143BA5117 F3 0F 11 84 24 C0 03 00                 movss   [rsp+828h+var_468], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5117 00
.text:0000000143BA5120 F3 0F 10 84 24 30 01 00                 movss   xmm0, [rsp+828h+var_6F8] ; Move Scalar Single-FP
.text:0000000143BA5120 00
.text:0000000143BA5129 F3 0F 11 84 24 C4 03 00                 movss   [rsp+828h+var_464], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5129 00
.text:0000000143BA5132 48 8D 84 24 BC 03 00 00                 lea     rax, [rsp+828h+var_46C] ; Load Effective Address
.text:0000000143BA513A 48 89 84 24 58 04 00 00                 mov     [rsp+828h+var_3D0], rax
.text:0000000143BA5142 48 8B 84 24 A8 00 00 00                 mov     rax, [rsp+828h+var_780]
.text:0000000143BA514A 48 05 64 07 00 00                       add     rax, 764h       ; Add
.text:0000000143BA5150 48 89 84 24 30 02 00 00                 mov     [rsp+828h+var_5F8], rax
.text:0000000143BA5158 48 8B 84 24 58 04 00 00                 mov     rax, [rsp+828h+var_3D0]
.text:0000000143BA5160 48 89 84 24 28 02 00 00                 mov     [rsp+828h+var_600], rax
.text:0000000143BA5168 48 8B 84 24 28 02 00 00                 mov     rax, [rsp+828h+var_600]
.text:0000000143BA5170 48 8B 8C 24 30 02 00 00                 mov     rcx, [rsp+828h+var_5F8]
.text:0000000143BA5178 F3 0F 10 40 08                          movss   xmm0, dword ptr [rax+8] ; Move Scalar Single-FP
.text:0000000143BA517D F3 0F 58 41 08                          addss   xmm0, dword ptr [rcx+8] ; Scalar Single-FP Add
.text:0000000143BA5182 F3 0F 11 84 24 48 01 00                 movss   [rsp+828h+var_6E0], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5182 00
.text:0000000143BA518B 48 8B 84 24 28 02 00 00                 mov     rax, [rsp+828h+var_600]
.text:0000000143BA5193 48 8B 8C 24 30 02 00 00                 mov     rcx, [rsp+828h+var_5F8]
.text:0000000143BA519B F3 0F 10 40 04                          movss   xmm0, dword ptr [rax+4] ; Move Scalar Single-FP
.text:0000000143BA51A0 F3 0F 58 41 04                          addss   xmm0, dword ptr [rcx+4] ; Scalar Single-FP Add
.text:0000000143BA51A5 F3 0F 11 84 24 40 01 00                 movss   [rsp+828h+var_6E8], xmm0 ; Move Scalar Single-FP
.text:0000000143BA51A5 00
.text:0000000143BA51AE 48 8B 84 24 28 02 00 00                 mov     rax, [rsp+828h+var_600]
.text:0000000143BA51B6 48 8B 8C 24 30 02 00 00                 mov     rcx, [rsp+828h+var_5F8]
.text:0000000143BA51BE F3 0F 10 00                             movss   xmm0, dword ptr [rax] ; Move Scalar Single-FP
.text:0000000143BA51C2 F3 0F 58 01                             addss   xmm0, dword ptr [rcx] ; Scalar Single-FP Add
.text:0000000143BA51C6 F3 0F 11 84 24 38 01 00                 movss   [rsp+828h+var_6F0], xmm0 ; Move Scalar Single-FP
.text:0000000143BA51C6 00
.text:0000000143BA51CF F3 0F 10 84 24 38 01 00                 movss   xmm0, [rsp+828h+var_6F0] ; Move Scalar Single-FP
.text:0000000143BA51CF 00
.text:0000000143BA51D8 F3 0F 11 84 24 C8 03 00                 movss   [rsp+828h+var_460], xmm0 ; Move Scalar Single-FP
.text:0000000143BA51D8 00
.text:0000000143BA51E1 F3 0F 10 84 24 40 01 00                 movss   xmm0, [rsp+828h+var_6E8] ; Move Scalar Single-FP
.text:0000000143BA51E1 00
.text:0000000143BA51EA F3 0F 11 84 24 CC 03 00                 movss   [rsp+828h+var_45C], xmm0 ; Move Scalar Single-FP
.text:0000000143BA51EA 00
.text:0000000143BA51F3 F3 0F 10 84 24 48 01 00                 movss   xmm0, [rsp+828h+var_6E0] ; Move Scalar Single-FP
.text:0000000143BA51F3 00
.text:0000000143BA51FC F3 0F 11 84 24 D0 03 00                 movss   [rsp+828h+var_458], xmm0 ; Move Scalar Single-FP
.text:0000000143BA51FC 00
.text:0000000143BA5205 48 8D 84 24 C8 03 00 00                 lea     rax, [rsp+828h+var_460] ; Load Effective Address
.text:0000000143BA520D 48 89 84 24 60 04 00 00                 mov     [rsp+828h+var_3C8], rax
.text:0000000143BA5215 48 8D 44 24 50                          lea     rax, [rsp+828h+var_7D8] ; Load Effective Address
.text:0000000143BA521A 48 8B F8                                mov     rdi, rax
.text:0000000143BA521D 48 8B B4 24 60 04 00 00                 mov     rsi, [rsp+828h+var_3C8]
.text:0000000143BA5225 B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA522A F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA522C E9 26 05 00 00                          jmp     loc_143BA5757   ; Jump
.text:0000000143BA5231                         ; ---------------------------------------------------------------------------
.text:0000000143BA5231
.text:0000000143BA5231                         loc_143BA5231:                          ; CODE XREF: sub_143BA47A0+8E9↑j
.text:0000000143BA5231 48 8B 44 24 40                          mov     rax, [rsp+828h+var_7E8]
.text:0000000143BA5236 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA523D 0F B6 80 B3 02 00 00                    movzx   eax, byte ptr [rax+2B3h] ; Move with Zero-Extend
.text:0000000143BA5244 88 84 24 84 00 00 00                    mov     [rsp+828h+var_7A4], al
.text:0000000143BA524B 80 BC 24 84 00 00 00 01                 cmp     [rsp+828h+var_7A4], 1 ; Compare Two Operands
.text:0000000143BA5253 74 21                                   jz      short loc_143BA5276 ; Jump if Zero (ZF=1)
.text:0000000143BA5255 80 BC 24 84 00 00 00 02                 cmp     [rsp+828h+var_7A4], 2 ; Compare Two Operands
.text:0000000143BA525D 0F 84 B5 01 00 00                       jz      loc_143BA5418   ; Jump if Zero (ZF=1)
.text:0000000143BA5263 80 BC 24 84 00 00 00 03                 cmp     [rsp+828h+var_7A4], 3 ; Compare Two Operands
.text:0000000143BA526B 0F 84 49 03 00 00                       jz      loc_143BA55BA   ; Jump if Zero (ZF=1)
.text:0000000143BA5271 E9 E1 04 00 00                          jmp     loc_143BA5757   ; Jump
.text:0000000143BA5276                         ; ---------------------------------------------------------------------------
.text:0000000143BA5276
.text:0000000143BA5276                         loc_143BA5276:                          ; CODE XREF: sub_143BA47A0+AB3↑j
.text:0000000143BA5276 48 8D 94 24 7C 07 00 00                 lea     rdx, [rsp+828h+var_AC] ; Load Effective Address
.text:0000000143BA527E 48 8B 4C 24 40                          mov     rcx, [rsp+828h+var_7E8]
.text:0000000143BA5283 E8 E8 87 72 FF                          call    sub_1432CDA70   ; Call Procedure
.text:0000000143BA5288 48 89 84 24 38 02 00 00                 mov     [rsp+828h+var_5F0], rax
.text:0000000143BA5290 48 8B 84 24 38 02 00 00                 mov     rax, [rsp+828h+var_5F0]
.text:0000000143BA5298 F3 0F 10 44 24 58                       movss   xmm0, [rsp+828h+var_7D0] ; Move Scalar Single-FP
.text:0000000143BA529E F3 0F 58 40 08                          addss   xmm0, dword ptr [rax+8] ; Scalar Single-FP Add
.text:0000000143BA52A3 F3 0F 11 84 24 60 01 00                 movss   [rsp+828h+var_6C8], xmm0 ; Move Scalar Single-FP
.text:0000000143BA52A3 00
.text:0000000143BA52AC 48 8B 84 24 38 02 00 00                 mov     rax, [rsp+828h+var_5F0]
.text:0000000143BA52B4 F3 0F 10 44 24 54                       movss   xmm0, [rsp+828h+var_7D4] ; Move Scalar Single-FP
.text:0000000143BA52BA F3 0F 58 40 04                          addss   xmm0, dword ptr [rax+4] ; Scalar Single-FP Add
.text:0000000143BA52BF F3 0F 11 84 24 58 01 00                 movss   [rsp+828h+var_6D0], xmm0 ; Move Scalar Single-FP
.text:0000000143BA52BF 00
.text:0000000143BA52C8 48 8B 84 24 38 02 00 00                 mov     rax, [rsp+828h+var_5F0]
.text:0000000143BA52D0 F3 0F 10 44 24 50                       movss   xmm0, [rsp+828h+var_7D8] ; Move Scalar Single-FP
.text:0000000143BA52D6 F3 0F 58 00                             addss   xmm0, dword ptr [rax] ; Scalar Single-FP Add
.text:0000000143BA52DA F3 0F 11 84 24 50 01 00                 movss   [rsp+828h+var_6D8], xmm0 ; Move Scalar Single-FP
.text:0000000143BA52DA 00
.text:0000000143BA52E3 F3 0F 10 84 24 50 01 00                 movss   xmm0, [rsp+828h+var_6D8] ; Move Scalar Single-FP
.text:0000000143BA52E3 00
.text:0000000143BA52EC F3 0F 11 84 24 D4 03 00                 movss   [rsp+828h+var_454], xmm0 ; Move Scalar Single-FP
.text:0000000143BA52EC 00
.text:0000000143BA52F5 F3 0F 10 84 24 58 01 00                 movss   xmm0, [rsp+828h+var_6D0] ; Move Scalar Single-FP
.text:0000000143BA52F5 00
.text:0000000143BA52FE F3 0F 11 84 24 D8 03 00                 movss   [rsp+828h+var_450], xmm0 ; Move Scalar Single-FP
.text:0000000143BA52FE 00
.text:0000000143BA5307 F3 0F 10 84 24 60 01 00                 movss   xmm0, [rsp+828h+var_6C8] ; Move Scalar Single-FP
.text:0000000143BA5307 00
.text:0000000143BA5310 F3 0F 11 84 24 DC 03 00                 movss   [rsp+828h+var_44C], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5310 00
.text:0000000143BA5319 48 8D 84 24 D4 03 00 00                 lea     rax, [rsp+828h+var_454] ; Load Effective Address
.text:0000000143BA5321 48 89 84 24 68 04 00 00                 mov     [rsp+828h+var_3C0], rax
.text:0000000143BA5329 48 8B 84 24 A8 00 00 00                 mov     rax, [rsp+828h+var_780]
.text:0000000143BA5331 48 05 40 07 00 00                       add     rax, 740h       ; Add
.text:0000000143BA5337 48 89 84 24 48 02 00 00                 mov     [rsp+828h+var_5E0], rax
.text:0000000143BA533F 48 8B 84 24 68 04 00 00                 mov     rax, [rsp+828h+var_3C0]
.text:0000000143BA5347 48 89 84 24 98 02 00 00                 mov     [rsp+828h+var_590], rax
.text:0000000143BA534F 48 8B 84 24 98 02 00 00                 mov     rax, [rsp+828h+var_590]
.text:0000000143BA5357 48 8B 8C 24 48 02 00 00                 mov     rcx, [rsp+828h+var_5E0]
.text:0000000143BA535F F3 0F 10 40 08                          movss   xmm0, dword ptr [rax+8] ; Move Scalar Single-FP
.text:0000000143BA5364 F3 0F 58 41 08                          addss   xmm0, dword ptr [rcx+8] ; Scalar Single-FP Add
.text:0000000143BA5369 F3 0F 11 84 24 70 01 00                 movss   [rsp+828h+var_6B8], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5369 00
.text:0000000143BA5372 48 8B 84 24 98 02 00 00                 mov     rax, [rsp+828h+var_590]
.text:0000000143BA537A 48 8B 8C 24 48 02 00 00                 mov     rcx, [rsp+828h+var_5E0]
.text:0000000143BA5382 F3 0F 10 40 04                          movss   xmm0, dword ptr [rax+4] ; Move Scalar Single-FP
.text:0000000143BA5387 F3 0F 58 41 04                          addss   xmm0, dword ptr [rcx+4] ; Scalar Single-FP Add
.text:0000000143BA538C F3 0F 11 84 24 68 01 00                 movss   [rsp+828h+var_6C0], xmm0 ; Move Scalar Single-FP
.text:0000000143BA538C 00
.text:0000000143BA5395 48 8B 84 24 98 02 00 00                 mov     rax, [rsp+828h+var_590]
.text:0000000143BA539D 48 8B 8C 24 48 02 00 00                 mov     rcx, [rsp+828h+var_5E0]
.text:0000000143BA53A5 F3 0F 10 00                             movss   xmm0, dword ptr [rax] ; Move Scalar Single-FP
.text:0000000143BA53A9 F3 0F 58 01                             addss   xmm0, dword ptr [rcx] ; Scalar Single-FP Add
.text:0000000143BA53AD F3 0F 11 84 24 C0 01 00                 movss   [rsp+828h+var_668], xmm0 ; Move Scalar Single-FP
.text:0000000143BA53AD 00
.text:0000000143BA53B6 F3 0F 10 84 24 C0 01 00                 movss   xmm0, [rsp+828h+var_668] ; Move Scalar Single-FP
.text:0000000143BA53B6 00
.text:0000000143BA53BF F3 0F 11 84 24 E0 03 00                 movss   [rsp+828h+var_448], xmm0 ; Move Scalar Single-FP
.text:0000000143BA53BF 00
.text:0000000143BA53C8 F3 0F 10 84 24 68 01 00                 movss   xmm0, [rsp+828h+var_6C0] ; Move Scalar Single-FP
.text:0000000143BA53C8 00
.text:0000000143BA53D1 F3 0F 11 84 24 E4 03 00                 movss   [rsp+828h+var_444], xmm0 ; Move Scalar Single-FP
.text:0000000143BA53D1 00
.text:0000000143BA53DA F3 0F 10 84 24 70 01 00                 movss   xmm0, [rsp+828h+var_6B8] ; Move Scalar Single-FP
.text:0000000143BA53DA 00
.text:0000000143BA53E3 F3 0F 11 84 24 E8 03 00                 movss   [rsp+828h+var_440], xmm0 ; Move Scalar Single-FP
.text:0000000143BA53E3 00
.text:0000000143BA53EC 48 8D 84 24 E0 03 00 00                 lea     rax, [rsp+828h+var_448] ; Load Effective Address
.text:0000000143BA53F4 48 89 84 24 70 04 00 00                 mov     [rsp+828h+var_3B8], rax
.text:0000000143BA53FC 48 8D 44 24 50                          lea     rax, [rsp+828h+var_7D8] ; Load Effective Address
.text:0000000143BA5401 48 8B F8                                mov     rdi, rax
.text:0000000143BA5404 48 8B B4 24 70 04 00 00                 mov     rsi, [rsp+828h+var_3B8]
.text:0000000143BA540C B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA5411 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA5413 E9 3F 03 00 00                          jmp     loc_143BA5757   ; Jump
.text:0000000143BA5418                         ; ---------------------------------------------------------------------------
.text:0000000143BA5418
.text:0000000143BA5418                         loc_143BA5418:                          ; CODE XREF: sub_143BA47A0+ABD↑j
.text:0000000143BA5418 48 8D 94 24 88 07 00 00                 lea     rdx, [rsp+828h+var_A0] ; Load Effective Address
.text:0000000143BA5420 48 8B 4C 24 40                          mov     rcx, [rsp+828h+var_7E8]
.text:0000000143BA5425 E8 46 86 72 FF                          call    sub_1432CDA70   ; Call Procedure
.text:0000000143BA542A 48 89 84 24 50 02 00 00                 mov     [rsp+828h+var_5D8], rax
.text:0000000143BA5432 48 8B 84 24 50 02 00 00                 mov     rax, [rsp+828h+var_5D8]
.text:0000000143BA543A F3 0F 10 44 24 58                       movss   xmm0, [rsp+828h+var_7D0] ; Move Scalar Single-FP
.text:0000000143BA5440 F3 0F 58 40 08                          addss   xmm0, dword ptr [rax+8] ; Scalar Single-FP Add
.text:0000000143BA5445 F3 0F 11 84 24 40 02 00                 movss   [rsp+828h+var_5E8], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5445 00
.text:0000000143BA544E 48 8B 84 24 50 02 00 00                 mov     rax, [rsp+828h+var_5D8]
.text:0000000143BA5456 F3 0F 10 44 24 54                       movss   xmm0, [rsp+828h+var_7D4] ; Move Scalar Single-FP
.text:0000000143BA545C F3 0F 58 40 04                          addss   xmm0, dword ptr [rax+4] ; Scalar Single-FP Add
.text:0000000143BA5461 F3 0F 11 84 24 80 01 00                 movss   [rsp+828h+var_6A8], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5461 00
.text:0000000143BA546A 48 8B 84 24 50 02 00 00                 mov     rax, [rsp+828h+var_5D8]
.text:0000000143BA5472 F3 0F 10 44 24 50                       movss   xmm0, [rsp+828h+var_7D8] ; Move Scalar Single-FP
.text:0000000143BA5478 F3 0F 58 00                             addss   xmm0, dword ptr [rax] ; Scalar Single-FP Add
.text:0000000143BA547C F3 0F 11 84 24 78 01 00                 movss   [rsp+828h+var_6B0], xmm0 ; Move Scalar Single-FP
.text:0000000143BA547C 00
.text:0000000143BA5485 F3 0F 10 84 24 78 01 00                 movss   xmm0, [rsp+828h+var_6B0] ; Move Scalar Single-FP
.text:0000000143BA5485 00
.text:0000000143BA548E F3 0F 11 84 24 EC 03 00                 movss   [rsp+828h+var_43C], xmm0 ; Move Scalar Single-FP
.text:0000000143BA548E 00
.text:0000000143BA5497 F3 0F 10 84 24 80 01 00                 movss   xmm0, [rsp+828h+var_6A8] ; Move Scalar Single-FP
.text:0000000143BA5497 00
.text:0000000143BA54A0 F3 0F 11 84 24 F0 03 00                 movss   [rsp+828h+var_438], xmm0 ; Move Scalar Single-FP
.text:0000000143BA54A0 00
.text:0000000143BA54A9 F3 0F 10 84 24 40 02 00                 movss   xmm0, [rsp+828h+var_5E8] ; Move Scalar Single-FP
.text:0000000143BA54A9 00
.text:0000000143BA54B2 F3 0F 11 84 24 F4 03 00                 movss   [rsp+828h+var_434], xmm0 ; Move Scalar Single-FP
.text:0000000143BA54B2 00
.text:0000000143BA54BB 48 8D 84 24 EC 03 00 00                 lea     rax, [rsp+828h+var_43C] ; Load Effective Address
.text:0000000143BA54C3 48 89 84 24 78 04 00 00                 mov     [rsp+828h+var_3B0], rax
.text:0000000143BA54CB 48 8B 84 24 A8 00 00 00                 mov     rax, [rsp+828h+var_780]
.text:0000000143BA54D3 48 05 4C 07 00 00                       add     rax, 74Ch       ; Add
.text:0000000143BA54D9 48 89 84 24 60 02 00 00                 mov     [rsp+828h+var_5C8], rax
.text:0000000143BA54E1 48 8B 84 24 78 04 00 00                 mov     rax, [rsp+828h+var_3B0]
.text:0000000143BA54E9 48 89 84 24 58 02 00 00                 mov     [rsp+828h+var_5D0], rax
.text:0000000143BA54F1 48 8B 84 24 58 02 00 00                 mov     rax, [rsp+828h+var_5D0]
.text:0000000143BA54F9 48 8B 8C 24 60 02 00 00                 mov     rcx, [rsp+828h+var_5C8]
.text:0000000143BA5501 F3 0F 10 40 08                          movss   xmm0, dword ptr [rax+8] ; Move Scalar Single-FP
.text:0000000143BA5506 F3 0F 58 41 08                          addss   xmm0, dword ptr [rcx+8] ; Scalar Single-FP Add
.text:0000000143BA550B F3 0F 11 84 24 98 01 00                 movss   [rsp+828h+var_690], xmm0 ; Move Scalar Single-FP
.text:0000000143BA550B 00
.text:0000000143BA5514 48 8B 84 24 58 02 00 00                 mov     rax, [rsp+828h+var_5D0]
.text:0000000143BA551C 48 8B 8C 24 60 02 00 00                 mov     rcx, [rsp+828h+var_5C8]
.text:0000000143BA5524 F3 0F 10 40 04                          movss   xmm0, dword ptr [rax+4] ; Move Scalar Single-FP
.text:0000000143BA5529 F3 0F 58 41 04                          addss   xmm0, dword ptr [rcx+4] ; Scalar Single-FP Add
.text:0000000143BA552E F3 0F 11 84 24 90 01 00                 movss   [rsp+828h+var_698], xmm0 ; Move Scalar Single-FP
.text:0000000143BA552E 00
.text:0000000143BA5537 48 8B 84 24 58 02 00 00                 mov     rax, [rsp+828h+var_5D0]
.text:0000000143BA553F 48 8B 8C 24 60 02 00 00                 mov     rcx, [rsp+828h+var_5C8]
.text:0000000143BA5547 F3 0F 10 00                             movss   xmm0, dword ptr [rax] ; Move Scalar Single-FP
.text:0000000143BA554B F3 0F 58 01                             addss   xmm0, dword ptr [rcx] ; Scalar Single-FP Add
.text:0000000143BA554F F3 0F 11 84 24 88 01 00                 movss   [rsp+828h+var_6A0], xmm0 ; Move Scalar Single-FP
.text:0000000143BA554F 00
.text:0000000143BA5558 F3 0F 10 84 24 88 01 00                 movss   xmm0, [rsp+828h+var_6A0] ; Move Scalar Single-FP
.text:0000000143BA5558 00
.text:0000000143BA5561 F3 0F 11 84 24 B0 03 00                 movss   [rsp+828h+var_478], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5561 00
.text:0000000143BA556A F3 0F 10 84 24 90 01 00                 movss   xmm0, [rsp+828h+var_698] ; Move Scalar Single-FP
.text:0000000143BA556A 00
.text:0000000143BA5573 F3 0F 11 84 24 B4 03 00                 movss   [rsp+828h+var_474], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5573 00
.text:0000000143BA557C F3 0F 10 84 24 98 01 00                 movss   xmm0, [rsp+828h+var_690] ; Move Scalar Single-FP
.text:0000000143BA557C 00
.text:0000000143BA5585 F3 0F 11 84 24 B8 03 00                 movss   [rsp+828h+var_470], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5585 00
.text:0000000143BA558E 48 8D 84 24 B0 03 00 00                 lea     rax, [rsp+828h+var_478] ; Load Effective Address
.text:0000000143BA5596 48 89 84 24 80 04 00 00                 mov     [rsp+828h+var_3A8], rax
.text:0000000143BA559E 48 8D 44 24 50                          lea     rax, [rsp+828h+var_7D8] ; Load Effective Address
.text:0000000143BA55A3 48 8B F8                                mov     rdi, rax
.text:0000000143BA55A6 48 8B B4 24 80 04 00 00                 mov     rsi, [rsp+828h+var_3A8]
.text:0000000143BA55AE B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA55B3 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA55B5 E9 9D 01 00 00                          jmp     loc_143BA5757   ; Jump
.text:0000000143BA55BA                         ; ---------------------------------------------------------------------------
.text:0000000143BA55BA
.text:0000000143BA55BA                         loc_143BA55BA:                          ; CODE XREF: sub_143BA47A0+ACB↑j
.text:0000000143BA55BA 48 8D 94 24 94 07 00 00                 lea     rdx, [rsp+828h+var_94] ; Load Effective Address
.text:0000000143BA55C2 48 8B 4C 24 40                          mov     rcx, [rsp+828h+var_7E8]
.text:0000000143BA55C7 E8 A4 84 72 FF                          call    sub_1432CDA70   ; Call Procedure
.text:0000000143BA55CC 48 89 84 24 68 02 00 00                 mov     [rsp+828h+var_5C0], rax
.text:0000000143BA55D4 48 8B 84 24 68 02 00 00                 mov     rax, [rsp+828h+var_5C0]
.text:0000000143BA55DC F3 0F 10 44 24 58                       movss   xmm0, [rsp+828h+var_7D0] ; Move Scalar Single-FP
.text:0000000143BA55E2 F3 0F 58 40 08                          addss   xmm0, dword ptr [rax+8] ; Scalar Single-FP Add
.text:0000000143BA55E7 F3 0F 11 84 24 D0 01 00                 movss   [rsp+828h+var_658], xmm0 ; Move Scalar Single-FP
.text:0000000143BA55E7 00
.text:0000000143BA55F0 48 8B 84 24 68 02 00 00                 mov     rax, [rsp+828h+var_5C0]
.text:0000000143BA55F8 F3 0F 10 44 24 54                       movss   xmm0, [rsp+828h+var_7D4] ; Move Scalar Single-FP
.text:0000000143BA55FE F3 0F 58 40 04                          addss   xmm0, dword ptr [rax+4] ; Scalar Single-FP Add
.text:0000000143BA5603 F3 0F 11 84 24 F0 01 00                 movss   [rsp+828h+var_638], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5603 00
.text:0000000143BA560C 48 8B 84 24 68 02 00 00                 mov     rax, [rsp+828h+var_5C0]
.text:0000000143BA5614 F3 0F 10 44 24 50                       movss   xmm0, [rsp+828h+var_7D8] ; Move Scalar Single-FP
.text:0000000143BA561A F3 0F 58 00                             addss   xmm0, dword ptr [rax] ; Scalar Single-FP Add
.text:0000000143BA561E F3 0F 11 84 24 90 02 00                 movss   [rsp+828h+var_598], xmm0 ; Move Scalar Single-FP
.text:0000000143BA561E 00
.text:0000000143BA5627 F3 0F 10 84 24 90 02 00                 movss   xmm0, [rsp+828h+var_598] ; Move Scalar Single-FP
.text:0000000143BA5627 00
.text:0000000143BA5630 F3 0F 11 84 24 F8 03 00                 movss   [rsp+828h+var_430], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5630 00
.text:0000000143BA5639 F3 0F 10 84 24 F0 01 00                 movss   xmm0, [rsp+828h+var_638] ; Move Scalar Single-FP
.text:0000000143BA5639 00
.text:0000000143BA5642 F3 0F 11 84 24 FC 03 00                 movss   [rsp+828h+var_42C], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5642 00
.text:0000000143BA564B F3 0F 10 84 24 D0 01 00                 movss   xmm0, [rsp+828h+var_658] ; Move Scalar Single-FP
.text:0000000143BA564B 00
.text:0000000143BA5654 F3 0F 11 84 24 00 04 00                 movss   [rsp+828h+var_428], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5654 00
.text:0000000143BA565D 48 8D 84 24 F8 03 00 00                 lea     rax, [rsp+828h+var_430] ; Load Effective Address
.text:0000000143BA5665 48 89 84 24 88 04 00 00                 mov     [rsp+828h+var_3A0], rax
.text:0000000143BA566D 48 8B 84 24 A8 00 00 00                 mov     rax, [rsp+828h+var_780]
.text:0000000143BA5675 48 05 64 07 00 00                       add     rax, 764h       ; Add
.text:0000000143BA567B 48 89 84 24 78 02 00 00                 mov     [rsp+828h+var_5B0], rax
.text:0000000143BA5683 48 8B 84 24 88 04 00 00                 mov     rax, [rsp+828h+var_3A0]
.text:0000000143BA568B 48 89 84 24 70 02 00 00                 mov     [rsp+828h+var_5B8], rax
.text:0000000143BA5693 48 8B 84 24 70 02 00 00                 mov     rax, [rsp+828h+var_5B8]
.text:0000000143BA569B 48 8B 8C 24 78 02 00 00                 mov     rcx, [rsp+828h+var_5B0]
.text:0000000143BA56A3 F3 0F 10 40 08                          movss   xmm0, dword ptr [rax+8] ; Move Scalar Single-FP
.text:0000000143BA56A8 F3 0F 58 41 08                          addss   xmm0, dword ptr [rcx+8] ; Scalar Single-FP Add
.text:0000000143BA56AD F3 0F 11 84 24 A8 01 00                 movss   [rsp+828h+var_680], xmm0 ; Move Scalar Single-FP
.text:0000000143BA56AD 00
.text:0000000143BA56B6 48 8B 84 24 70 02 00 00                 mov     rax, [rsp+828h+var_5B8]
.text:0000000143BA56BE 48 8B 8C 24 78 02 00 00                 mov     rcx, [rsp+828h+var_5B0]
.text:0000000143BA56C6 F3 0F 10 40 04                          movss   xmm0, dword ptr [rax+4] ; Move Scalar Single-FP
.text:0000000143BA56CB F3 0F 58 41 04                          addss   xmm0, dword ptr [rcx+4] ; Scalar Single-FP Add
.text:0000000143BA56D0 F3 0F 11 84 24 B8 01 00                 movss   [rsp+828h+var_670], xmm0 ; Move Scalar Single-FP
.text:0000000143BA56D0 00
.text:0000000143BA56D9 48 8B 84 24 70 02 00 00                 mov     rax, [rsp+828h+var_5B8]
.text:0000000143BA56E1 48 8B 8C 24 78 02 00 00                 mov     rcx, [rsp+828h+var_5B0]
.text:0000000143BA56E9 F3 0F 10 00                             movss   xmm0, dword ptr [rax] ; Move Scalar Single-FP
.text:0000000143BA56ED F3 0F 58 01                             addss   xmm0, dword ptr [rcx] ; Scalar Single-FP Add
.text:0000000143BA56F1 F3 0F 11 84 24 C8 01 00                 movss   [rsp+828h+var_660], xmm0 ; Move Scalar Single-FP
.text:0000000143BA56F1 00
.text:0000000143BA56FA F3 0F 10 84 24 C8 01 00                 movss   xmm0, [rsp+828h+var_660] ; Move Scalar Single-FP
.text:0000000143BA56FA 00
.text:0000000143BA5703 F3 0F 11 84 24 04 04 00                 movss   [rsp+828h+var_424], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5703 00
.text:0000000143BA570C F3 0F 10 84 24 B8 01 00                 movss   xmm0, [rsp+828h+var_670] ; Move Scalar Single-FP
.text:0000000143BA570C 00
.text:0000000143BA5715 F3 0F 11 84 24 08 04 00                 movss   [rsp+828h+var_420], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5715 00
.text:0000000143BA571E F3 0F 10 84 24 A8 01 00                 movss   xmm0, [rsp+828h+var_680] ; Move Scalar Single-FP
.text:0000000143BA571E 00
.text:0000000143BA5727 F3 0F 11 84 24 0C 04 00                 movss   [rsp+828h+var_41C], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5727 00
.text:0000000143BA5730 48 8D 84 24 04 04 00 00                 lea     rax, [rsp+828h+var_424] ; Load Effective Address
.text:0000000143BA5738 48 89 84 24 90 04 00 00                 mov     [rsp+828h+var_398], rax
.text:0000000143BA5740 48 8D 44 24 50                          lea     rax, [rsp+828h+var_7D8] ; Load Effective Address
.text:0000000143BA5745 48 8B F8                                mov     rdi, rax
.text:0000000143BA5748 48 8B B4 24 90 04 00 00                 mov     rsi, [rsp+828h+var_398]
.text:0000000143BA5750 B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA5755 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA5757
.text:0000000143BA5757                         loc_143BA5757:                          ; CODE XREF: sub_143BA47A0+8B1↑j
.text:0000000143BA5757                                                                 ; sub_143BA47A0+A8C↑j ...
.text:0000000143BA5757 E9 97 12 00 00                          jmp     loc_143BA69F3   ; Jump
.text:0000000143BA575C                         ; ---------------------------------------------------------------------------
.text:0000000143BA575C
.text:0000000143BA575C                         loc_143BA575C:                          ; CODE XREF: sub_143BA47A0+655↑j
.text:0000000143BA575C                                                                 ; sub_143BA47A0+670↑j
.text:0000000143BA575C 48 8B 44 24 40                          mov     rax, [rsp+828h+var_7E8]
.text:0000000143BA5761 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA5768 48 05 78 01 00 00                       add     rax, 178h       ; Add
.text:0000000143BA576E 48 89 84 24 98 04 00 00                 mov     [rsp+828h+var_390], rax
.text:0000000143BA5776 48 8B 84 24 98 04 00 00                 mov     rax, [rsp+828h+var_390]
.text:0000000143BA577E BA 02 00 00 00                          mov     edx, 2
.text:0000000143BA5783 48 8B C8                                mov     rcx, rax
.text:0000000143BA5786 E8 15 E1 6B FD                          call    sub_1412638A0   ; Call Procedure
.text:0000000143BA578B 48 89 84 24 F0 00 00 00                 mov     [rsp+828h+var_738], rax
.text:0000000143BA5793 48 83 BC 24 F0 00 00 00                 cmp     [rsp+828h+var_738], 0 ; Compare Two Operands
.text:0000000143BA5793 00
.text:0000000143BA579C 75 11                                   jnz     short loc_143BA57AF ; Jump if Not Zero (ZF=0)
.text:0000000143BA579E 48 C7 84 24 F8 02 00 00                 mov     [rsp+828h+var_530], 0
.text:0000000143BA579E 00 00 00 00
.text:0000000143BA57AA E9 AF 01 00 00                          jmp     loc_143BA595E   ; Jump
.text:0000000143BA57AF                         ; ---------------------------------------------------------------------------
.text:0000000143BA57AF
.text:0000000143BA57AF                         loc_143BA57AF:                          ; CODE XREF: sub_143BA47A0+FFC↑j
.text:0000000143BA57AF 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA57AF 00 00
.text:0000000143BA57B9 48 8B 8C 24 F0 00 00 00                 mov     rcx, [rsp+828h+var_738]
.text:0000000143BA57C1 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA57C4 48 8B C1                                mov     rax, rcx
.text:0000000143BA57C7 48 89 84 24 A0 04 00 00                 mov     [rsp+828h+var_388], rax
.text:0000000143BA57CF 48 8B 84 24 F0 00 00 00                 mov     rax, [rsp+828h+var_738]
.text:0000000143BA57D7 48 C1 E8 30                             shr     rax, 30h        ; Shift Logical Right
.text:0000000143BA57DB 48 25 FF 3F 00 00                       and     rax, 3FFFh      ; Logical AND
.text:0000000143BA57E1 48 89 84 24 F8 00 00 00                 mov     [rsp+828h+var_730], rax
.text:0000000143BA57E9 48 8B 84 24 F0 00 00 00                 mov     rax, [rsp+828h+var_738]
.text:0000000143BA57F1 48 C1 E8 3F                             shr     rax, 3Fh        ; Shift Logical Right
.text:0000000143BA57F5 48 83 E0 01                             and     rax, 1          ; Logical AND
.text:0000000143BA57F9 88 44 24 7F                             mov     [rsp+828h+var_7A9], al
.text:0000000143BA57FD 48 8B 84 24 A0 04 00 00                 mov     rax, [rsp+828h+var_388]
.text:0000000143BA5805 48 89 84 24 B8 00 00 00                 mov     [rsp+828h+var_770], rax
.text:0000000143BA580D 0F B6 44 24 7F                          movzx   eax, [rsp+828h+var_7A9] ; Move with Zero-Extend
.text:0000000143BA5812 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA5814 0F 84 24 01 00 00                       jz      loc_143BA593E   ; Jump if Zero (ZF=1)
.text:0000000143BA581A 48 C7 84 24 50 07 00 00                 mov     [rsp+828h+var_D8], 4
.text:0000000143BA581A 04 00 00 00
.text:0000000143BA5826 83 3D 67 4F CA 12 01                    cmp     cs:dword_15684A794, 1 ; Compare Two Operands
.text:0000000143BA582D 75 25                                   jnz     short loc_143BA5854 ; Jump if Not Zero (ZF=0)
.text:0000000143BA582F 44 8B 8C 24 F8 00 00 00                 mov     r9d, dword ptr [rsp+828h+var_730]
.text:0000000143BA5837 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA583D 48 8D 94 24 B8 00 00 00                 lea     rdx, [rsp+828h+var_770] ; Load Effective Address
.text:0000000143BA5845 48 8B 0D 34 28 83 13                    mov     rcx, cs:qword_1573D8080
.text:0000000143BA584C E8 BF 80 EE FC                          call    sub_140A8D910   ; Call Procedure
.text:0000000143BA5851 90                                      nop                     ; No Operation
.text:0000000143BA5852 EB 65                                   jmp     short loc_143BA58B9 ; Jump
.text:0000000143BA5854                         ; ---------------------------------------------------------------------------
.text:0000000143BA5854
.text:0000000143BA5854                         loc_143BA5854:                          ; CODE XREF: sub_143BA47A0+108D↑j
.text:0000000143BA5854 83 3D 39 4F CA 12 02                    cmp     cs:dword_15684A794, 2 ; Compare Two Operands
.text:0000000143BA585B 75 25                                   jnz     short loc_143BA5882 ; Jump if Not Zero (ZF=0)
.text:0000000143BA585D 44 8B 8C 24 F8 00 00 00                 mov     r9d, dword ptr [rsp+828h+var_730]
.text:0000000143BA5865 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA586B 48 8D 94 24 B8 00 00 00                 lea     rdx, [rsp+828h+var_770] ; Load Effective Address
.text:0000000143BA5873 48 8B 0D 0E 28 83 13                    mov     rcx, cs:qword_1573D8088
.text:0000000143BA587A E8 61 80 EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA587F 90                                      nop                     ; No Operation
.text:0000000143BA5880 EB 37                                   jmp     short loc_143BA58B9 ; Jump
.text:0000000143BA5882                         ; ---------------------------------------------------------------------------
.text:0000000143BA5882
.text:0000000143BA5882                         loc_143BA5882:                          ; CODE XREF: sub_143BA47A0+10BB↑j
.text:0000000143BA5882 83 3D 0B 4F CA 12 03                    cmp     cs:dword_15684A794, 3 ; Compare Two Operands
.text:0000000143BA5889 75 2E                                   jnz     short loc_143BA58B9 ; Jump if Not Zero (ZF=0)
.text:0000000143BA588B 8B 84 24 F8 00 00 00                    mov     eax, dword ptr [rsp+828h+var_730]
.text:0000000143BA5892 48 8D 0D F7 27 83 13                    lea     rcx, qword_1573D8090 ; Load Effective Address
.text:0000000143BA5899 44 8B 8C 24 F8 00 00 00                 mov     r9d, dword ptr [rsp+828h+var_730]
.text:0000000143BA58A1 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA58A7 48 8D 94 24 B8 00 00 00                 lea     rdx, [rsp+828h+var_770] ; Load Effective Address
.text:0000000143BA58AF 48 8B 0C C1                             mov     rcx, [rcx+rax*8]
.text:0000000143BA58B3 E8 28 80 EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA58B8 90                                      nop                     ; No Operation
.text:0000000143BA58B9
.text:0000000143BA58B9                         loc_143BA58B9:                          ; CODE XREF: sub_143BA47A0+10B2↑j
.text:0000000143BA58B9                                                                 ; sub_143BA47A0+10E0↑j ...
.text:0000000143BA58B9 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA58B9 00 00
.text:0000000143BA58C3 48 8B 8C 24 B8 00 00 00                 mov     rcx, [rsp+828h+var_770]
.text:0000000143BA58CB 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA58CE 48 8B C1                                mov     rax, rcx
.text:0000000143BA58D1 48 89 84 24 80 02 00 00                 mov     [rsp+828h+var_5A8], rax
.text:0000000143BA58D9 48 8B 84 24 80 02 00 00                 mov     rax, [rsp+828h+var_5A8]
.text:0000000143BA58E1 48 C1 F8 2F                             sar     rax, 2Fh        ; Shift Arithmetic Right
.text:0000000143BA58E5 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA58E8 75 12                                   jnz     short loc_143BA58FC ; Jump if Not Zero (ZF=0)
.text:0000000143BA58EA 48 8B 84 24 80 02 00 00                 mov     rax, [rsp+828h+var_5A8]
.text:0000000143BA58F2 48 89 84 24 E8 02 00 00                 mov     [rsp+828h+var_540], rax
.text:0000000143BA58FA EB 20                                   jmp     short loc_143BA591C ; Jump
.text:0000000143BA58FC                         ; ---------------------------------------------------------------------------
.text:0000000143BA58FC
.text:0000000143BA58FC                         loc_143BA58FC:                          ; CODE XREF: sub_143BA47A0+1148↑j
.text:0000000143BA58FC 48 B8 00 00 00 00 00 00                 mov     rax, 0FFFF000000000000h
.text:0000000143BA58FC FF FF
.text:0000000143BA5906 48 8B 8C 24 80 02 00 00                 mov     rcx, [rsp+828h+var_5A8]
.text:0000000143BA590E 48 0B C8                                or      rcx, rax        ; Logical Inclusive OR
.text:0000000143BA5911 48 8B C1                                mov     rax, rcx
.text:0000000143BA5914 48 89 84 24 E8 02 00 00                 mov     [rsp+828h+var_540], rax
.text:0000000143BA591C
.text:0000000143BA591C                         loc_143BA591C:                          ; CODE XREF: sub_143BA47A0+115A↑j
.text:0000000143BA591C 48 8B 84 24 E8 02 00 00                 mov     rax, [rsp+828h+var_540]
.text:0000000143BA5924 48 89 84 24 A8 04 00 00                 mov     [rsp+828h+var_380], rax
.text:0000000143BA592C 48 8B 84 24 A8 04 00 00                 mov     rax, [rsp+828h+var_380]
.text:0000000143BA5934 48 89 84 24 F0 02 00 00                 mov     [rsp+828h+var_538], rax
.text:0000000143BA593C EB 10                                   jmp     short loc_143BA594E ; Jump
.text:0000000143BA593E                         ; ---------------------------------------------------------------------------
.text:0000000143BA593E
.text:0000000143BA593E                         loc_143BA593E:                          ; CODE XREF: sub_143BA47A0+1074↑j
.text:0000000143BA593E 48 8B 84 24 B8 00 00 00                 mov     rax, [rsp+828h+var_770]
.text:0000000143BA5946 48 89 84 24 F0 02 00 00                 mov     [rsp+828h+var_538], rax
.text:0000000143BA594E
.text:0000000143BA594E                         loc_143BA594E:                          ; CODE XREF: sub_143BA47A0+119C↑j
.text:0000000143BA594E 48 8B 84 24 F0 02 00 00                 mov     rax, [rsp+828h+var_538]
.text:0000000143BA5956 48 89 84 24 F8 02 00 00                 mov     [rsp+828h+var_530], rax
.text:0000000143BA595E
.text:0000000143BA595E                         loc_143BA595E:                          ; CODE XREF: sub_143BA47A0+100A↑j
.text:0000000143BA595E 48 8B 84 24 F8 02 00 00                 mov     rax, [rsp+828h+var_530]
.text:0000000143BA5966 48 89 84 24 B0 04 00 00                 mov     [rsp+828h+var_378], rax
.text:0000000143BA596E 48 8B 84 24 B0 04 00 00                 mov     rax, [rsp+828h+var_378]
.text:0000000143BA5976 48 89 84 24 B8 04 00 00                 mov     [rsp+828h+var_370], rax
.text:0000000143BA597E 48 8B 84 24 B8 04 00 00                 mov     rax, [rsp+828h+var_370]
.text:0000000143BA5986 48 89 84 24 00 03 00 00                 mov     [rsp+828h+var_528], rax
.text:0000000143BA598E 48 83 BC 24 00 03 00 00                 cmp     [rsp+828h+var_528], 0 ; Compare Two Operands
.text:0000000143BA598E 00
.text:0000000143BA5997 0F 84 56 10 00 00                       jz      loc_143BA69F3   ; Jump if Zero (ZF=1)
.text:0000000143BA599D 48 8B 84 24 00 03 00 00                 mov     rax, [rsp+828h+var_528]
.text:0000000143BA59A5 0F B6 80 F4 01 00 00                    movzx   eax, byte ptr [rax+1F4h] ; Move with Zero-Extend
.text:0000000143BA59AC 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA59AE 0F 84 3F 10 00 00                       jz      loc_143BA69F3   ; Jump if Zero (ZF=1)
.text:0000000143BA59B4 48 8B 44 24 40                          mov     rax, [rsp+828h+var_7E8]
.text:0000000143BA59B9 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA59C0 48 05 70 01 00 00                       add     rax, 170h       ; Add
.text:0000000143BA59C6 48 89 84 24 C0 04 00 00                 mov     [rsp+828h+var_368], rax
.text:0000000143BA59CE 48 8B 84 24 C0 04 00 00                 mov     rax, [rsp+828h+var_368]
.text:0000000143BA59D6 BA 02 00 00 00                          mov     edx, 2
.text:0000000143BA59DB 48 8B C8                                mov     rcx, rax
.text:0000000143BA59DE E8 BD DE 6B FD                          call    sub_1412638A0   ; Call Procedure
.text:0000000143BA59E3 48 89 84 24 10 01 00 00                 mov     [rsp+828h+var_718], rax
.text:0000000143BA59EB 48 83 BC 24 10 01 00 00                 cmp     [rsp+828h+var_718], 0 ; Compare Two Operands
.text:0000000143BA59EB 00
.text:0000000143BA59F4 75 11                                   jnz     short loc_143BA5A07 ; Jump if Not Zero (ZF=0)
.text:0000000143BA59F6 48 C7 84 24 18 03 00 00                 mov     [rsp+828h+var_510], 0
.text:0000000143BA59F6 00 00 00 00
.text:0000000143BA5A02 E9 B5 01 00 00                          jmp     loc_143BA5BBC   ; Jump
.text:0000000143BA5A07                         ; ---------------------------------------------------------------------------
.text:0000000143BA5A07
.text:0000000143BA5A07                         loc_143BA5A07:                          ; CODE XREF: sub_143BA47A0+1254↑j
.text:0000000143BA5A07 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA5A07 00 00
.text:0000000143BA5A11 48 8B 8C 24 10 01 00 00                 mov     rcx, [rsp+828h+var_718]
.text:0000000143BA5A19 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA5A1C 48 8B C1                                mov     rax, rcx
.text:0000000143BA5A1F 48 89 84 24 C8 04 00 00                 mov     [rsp+828h+var_360], rax
.text:0000000143BA5A27 48 8B 84 24 10 01 00 00                 mov     rax, [rsp+828h+var_718]
.text:0000000143BA5A2F 48 C1 E8 30                             shr     rax, 30h        ; Shift Logical Right
.text:0000000143BA5A33 48 25 FF 3F 00 00                       and     rax, 3FFFh      ; Logical AND
.text:0000000143BA5A39 48 89 84 24 00 01 00 00                 mov     [rsp+828h+var_728], rax
.text:0000000143BA5A41 48 8B 84 24 10 01 00 00                 mov     rax, [rsp+828h+var_718]
.text:0000000143BA5A49 48 C1 E8 3F                             shr     rax, 3Fh        ; Shift Logical Right
.text:0000000143BA5A4D 48 83 E0 01                             and     rax, 1          ; Logical AND
.text:0000000143BA5A51 88 84 24 80 00 00 00                    mov     [rsp+828h+var_7A8], al
.text:0000000143BA5A58 48 8B 84 24 C8 04 00 00                 mov     rax, [rsp+828h+var_360]
.text:0000000143BA5A60 48 89 84 24 B0 00 00 00                 mov     [rsp+828h+var_778], rax
.text:0000000143BA5A68 0F B6 84 24 80 00 00 00                 movzx   eax, [rsp+828h+var_7A8] ; Move with Zero-Extend
.text:0000000143BA5A70 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA5A72 0F 84 24 01 00 00                       jz      loc_143BA5B9C   ; Jump if Zero (ZF=1)
.text:0000000143BA5A78 48 C7 84 24 58 07 00 00                 mov     [rsp+828h+var_D0], 4
.text:0000000143BA5A78 04 00 00 00
.text:0000000143BA5A84 83 3D 09 4D CA 12 01                    cmp     cs:dword_15684A794, 1 ; Compare Two Operands
.text:0000000143BA5A8B 75 25                                   jnz     short loc_143BA5AB2 ; Jump if Not Zero (ZF=0)
.text:0000000143BA5A8D 44 8B 8C 24 00 01 00 00                 mov     r9d, dword ptr [rsp+828h+var_728]
.text:0000000143BA5A95 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA5A9B 48 8D 94 24 B0 00 00 00                 lea     rdx, [rsp+828h+var_778] ; Load Effective Address
.text:0000000143BA5AA3 48 8B 0D D6 25 83 13                    mov     rcx, cs:qword_1573D8080
.text:0000000143BA5AAA E8 61 7E EE FC                          call    sub_140A8D910   ; Call Procedure
.text:0000000143BA5AAF 90                                      nop                     ; No Operation
.text:0000000143BA5AB0 EB 65                                   jmp     short loc_143BA5B17 ; Jump
.text:0000000143BA5AB2                         ; ---------------------------------------------------------------------------
.text:0000000143BA5AB2
.text:0000000143BA5AB2                         loc_143BA5AB2:                          ; CODE XREF: sub_143BA47A0+12EB↑j
.text:0000000143BA5AB2 83 3D DB 4C CA 12 02                    cmp     cs:dword_15684A794, 2 ; Compare Two Operands
.text:0000000143BA5AB9 75 25                                   jnz     short loc_143BA5AE0 ; Jump if Not Zero (ZF=0)
.text:0000000143BA5ABB 44 8B 8C 24 00 01 00 00                 mov     r9d, dword ptr [rsp+828h+var_728]
.text:0000000143BA5AC3 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA5AC9 48 8D 94 24 B0 00 00 00                 lea     rdx, [rsp+828h+var_778] ; Load Effective Address
.text:0000000143BA5AD1 48 8B 0D B0 25 83 13                    mov     rcx, cs:qword_1573D8088
.text:0000000143BA5AD8 E8 03 7E EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA5ADD 90                                      nop                     ; No Operation
.text:0000000143BA5ADE EB 37                                   jmp     short loc_143BA5B17 ; Jump
.text:0000000143BA5AE0                         ; ---------------------------------------------------------------------------
.text:0000000143BA5AE0
.text:0000000143BA5AE0                         loc_143BA5AE0:                          ; CODE XREF: sub_143BA47A0+1319↑j
.text:0000000143BA5AE0 83 3D AD 4C CA 12 03                    cmp     cs:dword_15684A794, 3 ; Compare Two Operands
.text:0000000143BA5AE7 75 2E                                   jnz     short loc_143BA5B17 ; Jump if Not Zero (ZF=0)
.text:0000000143BA5AE9 8B 84 24 00 01 00 00                    mov     eax, dword ptr [rsp+828h+var_728]
.text:0000000143BA5AF0 48 8D 0D 99 25 83 13                    lea     rcx, qword_1573D8090 ; Load Effective Address
.text:0000000143BA5AF7 44 8B 8C 24 00 01 00 00                 mov     r9d, dword ptr [rsp+828h+var_728]
.text:0000000143BA5AFF 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA5B05 48 8D 94 24 B0 00 00 00                 lea     rdx, [rsp+828h+var_778] ; Load Effective Address
.text:0000000143BA5B0D 48 8B 0C C1                             mov     rcx, [rcx+rax*8]
.text:0000000143BA5B11 E8 CA 7D EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA5B16 90                                      nop                     ; No Operation
.text:0000000143BA5B17
.text:0000000143BA5B17                         loc_143BA5B17:                          ; CODE XREF: sub_143BA47A0+1310↑j
.text:0000000143BA5B17                                                                 ; sub_143BA47A0+133E↑j ...
.text:0000000143BA5B17 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA5B17 00 00
.text:0000000143BA5B21 48 8B 8C 24 B0 00 00 00                 mov     rcx, [rsp+828h+var_778]
.text:0000000143BA5B29 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA5B2C 48 8B C1                                mov     rax, rcx
.text:0000000143BA5B2F 48 89 84 24 88 02 00 00                 mov     [rsp+828h+var_5A0], rax
.text:0000000143BA5B37 48 8B 84 24 88 02 00 00                 mov     rax, [rsp+828h+var_5A0]
.text:0000000143BA5B3F 48 C1 F8 2F                             sar     rax, 2Fh        ; Shift Arithmetic Right
.text:0000000143BA5B43 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA5B46 75 12                                   jnz     short loc_143BA5B5A ; Jump if Not Zero (ZF=0)
.text:0000000143BA5B48 48 8B 84 24 88 02 00 00                 mov     rax, [rsp+828h+var_5A0]
.text:0000000143BA5B50 48 89 84 24 08 03 00 00                 mov     [rsp+828h+var_520], rax
.text:0000000143BA5B58 EB 20                                   jmp     short loc_143BA5B7A ; Jump
.text:0000000143BA5B5A                         ; ---------------------------------------------------------------------------
.text:0000000143BA5B5A
.text:0000000143BA5B5A                         loc_143BA5B5A:                          ; CODE XREF: sub_143BA47A0+13A6↑j
.text:0000000143BA5B5A 48 B8 00 00 00 00 00 00                 mov     rax, 0FFFF000000000000h
.text:0000000143BA5B5A FF FF
.text:0000000143BA5B64 48 8B 8C 24 88 02 00 00                 mov     rcx, [rsp+828h+var_5A0]
.text:0000000143BA5B6C 48 0B C8                                or      rcx, rax        ; Logical Inclusive OR
.text:0000000143BA5B6F 48 8B C1                                mov     rax, rcx
.text:0000000143BA5B72 48 89 84 24 08 03 00 00                 mov     [rsp+828h+var_520], rax
.text:0000000143BA5B7A
.text:0000000143BA5B7A                         loc_143BA5B7A:                          ; CODE XREF: sub_143BA47A0+13B8↑j
.text:0000000143BA5B7A 48 8B 84 24 08 03 00 00                 mov     rax, [rsp+828h+var_520]
.text:0000000143BA5B82 48 89 84 24 D0 04 00 00                 mov     [rsp+828h+var_358], rax
.text:0000000143BA5B8A 48 8B 84 24 D0 04 00 00                 mov     rax, [rsp+828h+var_358]
.text:0000000143BA5B92 48 89 84 24 10 03 00 00                 mov     [rsp+828h+var_518], rax
.text:0000000143BA5B9A EB 10                                   jmp     short loc_143BA5BAC ; Jump
.text:0000000143BA5B9C                         ; ---------------------------------------------------------------------------
.text:0000000143BA5B9C
.text:0000000143BA5B9C                         loc_143BA5B9C:                          ; CODE XREF: sub_143BA47A0+12D2↑j
.text:0000000143BA5B9C 48 8B 84 24 B0 00 00 00                 mov     rax, [rsp+828h+var_778]
.text:0000000143BA5BA4 48 89 84 24 10 03 00 00                 mov     [rsp+828h+var_518], rax
.text:0000000143BA5BAC
.text:0000000143BA5BAC                         loc_143BA5BAC:                          ; CODE XREF: sub_143BA47A0+13FA↑j
.text:0000000143BA5BAC 48 8B 84 24 10 03 00 00                 mov     rax, [rsp+828h+var_518]
.text:0000000143BA5BB4 48 89 84 24 18 03 00 00                 mov     [rsp+828h+var_510], rax
.text:0000000143BA5BBC
.text:0000000143BA5BBC                         loc_143BA5BBC:                          ; CODE XREF: sub_143BA47A0+1262↑j
.text:0000000143BA5BBC 48 8B 84 24 18 03 00 00                 mov     rax, [rsp+828h+var_510]
.text:0000000143BA5BC4 48 89 84 24 D8 04 00 00                 mov     [rsp+828h+var_350], rax
.text:0000000143BA5BCC 48 8B 84 24 D8 04 00 00                 mov     rax, [rsp+828h+var_350]
.text:0000000143BA5BD4 48 89 84 24 E0 04 00 00                 mov     [rsp+828h+var_348], rax
.text:0000000143BA5BDC 48 8B 84 24 E0 04 00 00                 mov     rax, [rsp+828h+var_348]
.text:0000000143BA5BE4 48 89 84 24 08 01 00 00                 mov     [rsp+828h+var_720], rax
.text:0000000143BA5BEC 48 83 BC 24 08 01 00 00                 cmp     [rsp+828h+var_720], 0 ; Compare Two Operands
.text:0000000143BA5BEC 00
.text:0000000143BA5BF5 0F 84 F8 0D 00 00                       jz      loc_143BA69F3   ; Jump if Zero (ZF=1)
.text:0000000143BA5BFB 0F B6 84 24 50 08 00 00                 movzx   eax, [rsp+828h+arg_20] ; Move with Zero-Extend
.text:0000000143BA5C03 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA5C05 0F 84 60 0B 00 00                       jz      loc_143BA676B   ; Jump if Zero (ZF=1)
.text:0000000143BA5C0B 48 8B 44 24 40                          mov     rax, [rsp+828h+var_7E8]
.text:0000000143BA5C10 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA5C17 0F B6 80 CA 05 00 00                    movzx   eax, byte ptr [rax+5CAh] ; Move with Zero-Extend
.text:0000000143BA5C1E 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA5C20 75 1E                                   jnz     short loc_143BA5C40 ; Jump if Not Zero (ZF=0)
.text:0000000143BA5C22 48 8B 44 24 40                          mov     rax, [rsp+828h+var_7E8]
.text:0000000143BA5C27 48 8B 00                                mov     rax, [rax]
.text:0000000143BA5C2A 48 8B 4C 24 40                          mov     rcx, [rsp+828h+var_7E8]
.text:0000000143BA5C2F FF 90 F0 09 00 00                       call    qword ptr [rax+9F0h] ; Indirect Call Near Procedure
.text:0000000143BA5C35 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA5C38 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA5C3A 0F 84 9E 08 00 00                       jz      loc_143BA64DE   ; Jump if Zero (ZF=1)
.text:0000000143BA5C40
.text:0000000143BA5C40                         loc_143BA5C40:                          ; CODE XREF: sub_143BA47A0+1480↑j
.text:0000000143BA5C40 48 8D 44 24 50                          lea     rax, [rsp+828h+var_7D8] ; Load Effective Address
.text:0000000143BA5C45 48 8D 0D 44 70 80 13                    lea     rcx, xmmword_1573ACC88+8 ; Load Effective Address
.text:0000000143BA5C4C 48 8B F8                                mov     rdi, rax
.text:0000000143BA5C4F 48 8B F1                                mov     rsi, rcx
.text:0000000143BA5C52 B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA5C57 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA5C59 48 8D 44 24 68                          lea     rax, [rsp+828h+var_7C0] ; Load Effective Address
.text:0000000143BA5C5E 48 8D 0D 2B 70 80 13                    lea     rcx, xmmword_1573ACC88+8 ; Load Effective Address
.text:0000000143BA5C65 48 8B F8                                mov     rdi, rax
.text:0000000143BA5C68 48 8B F1                                mov     rsi, rcx
.text:0000000143BA5C6B B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA5C70 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA5C72 4C 8D 44 24 68                          lea     r8, [rsp+828h+var_7C0] ; Load Effective Address
.text:0000000143BA5C77 48 8D 54 24 50                          lea     rdx, [rsp+828h+var_7D8] ; Load Effective Address
.text:0000000143BA5C7C 48 8B 8C 24 08 01 00 00                 mov     rcx, [rsp+828h+var_720]
.text:0000000143BA5C84 E8 37 A3 58 FF                          call    sub_14312FFC0   ; Call Procedure
.text:0000000143BA5C89 90                                      nop                     ; No Operation
.text:0000000143BA5C8A F3 0F 10 05 26 D0 4C 12                 movss   xmm0, cs:dword_156072CB8 ; Move Scalar Single-FP
.text:0000000143BA5C92 F3 0F 11 84 24 88 00 00                 movss   [rsp+828h+var_7A0], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5C92 00
.text:0000000143BA5C9B F3 0F 10 44 24 68                       movss   xmm0, [rsp+828h+var_7C0] ; Move Scalar Single-FP
.text:0000000143BA5CA1 F3 0F 59 84 24 88 00 00                 mulss   xmm0, [rsp+828h+var_7A0] ; Scalar Single-FP Multiply
.text:0000000143BA5CA1 00
.text:0000000143BA5CAA F3 0F 11 44 24 68                       movss   [rsp+828h+var_7C0], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5CB0 F3 0F 10 44 24 6C                       movss   xmm0, [rsp+828h+var_7BC] ; Move Scalar Single-FP
.text:0000000143BA5CB6 F3 0F 59 84 24 88 00 00                 mulss   xmm0, [rsp+828h+var_7A0] ; Scalar Single-FP Multiply
.text:0000000143BA5CB6 00
.text:0000000143BA5CBF F3 0F 11 44 24 6C                       movss   [rsp+828h+var_7BC], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5CC5 F3 0F 10 44 24 70                       movss   xmm0, [rsp+828h+var_7B8] ; Move Scalar Single-FP
.text:0000000143BA5CCB F3 0F 59 84 24 88 00 00                 mulss   xmm0, [rsp+828h+var_7A0] ; Scalar Single-FP Multiply
.text:0000000143BA5CCB 00
.text:0000000143BA5CD4 F3 0F 11 44 24 70                       movss   [rsp+828h+var_7B8], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5CDA 48 8D 84 24 A0 07 00 00                 lea     rax, [rsp+828h+var_88] ; Load Effective Address
.text:0000000143BA5CE2 48 8D 4C 24 68                          lea     rcx, [rsp+828h+var_7C0] ; Load Effective Address
.text:0000000143BA5CE7 48 8B F8                                mov     rdi, rax
.text:0000000143BA5CEA 48 8B F1                                mov     rsi, rcx
.text:0000000143BA5CED B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA5CF2 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA5CF4 0F B6 05 C5 24 83 13                    movzx   eax, cs:byte_1573D81C0 ; Move with Zero-Extend
.text:0000000143BA5CFB 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA5CFD 74 74                                   jz      short loc_143BA5D73 ; Jump if Zero (ZF=1)
.text:0000000143BA5CFF 48 8B 84 24 30 08 00 00                 mov     rax, [rsp+828h+arg_0]
.text:0000000143BA5D07 F3 0F 10 80 5C DC 05 00                 movss   xmm0, dword ptr [rax+5DC5Ch] ; Move Scalar Single-FP
.text:0000000143BA5D0F F3 0F 11 84 24 90 00 00                 movss   [rsp+828h+var_798], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5D0F 00
.text:0000000143BA5D18 F3 0F 10 44 24 68                       movss   xmm0, [rsp+828h+var_7C0] ; Move Scalar Single-FP
.text:0000000143BA5D1E F3 0F 59 84 24 90 00 00                 mulss   xmm0, [rsp+828h+var_798] ; Scalar Single-FP Multiply
.text:0000000143BA5D1E 00
.text:0000000143BA5D27 F3 0F 11 44 24 68                       movss   [rsp+828h+var_7C0], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5D2D F3 0F 10 44 24 6C                       movss   xmm0, [rsp+828h+var_7BC] ; Move Scalar Single-FP
.text:0000000143BA5D33 F3 0F 59 84 24 90 00 00                 mulss   xmm0, [rsp+828h+var_798] ; Scalar Single-FP Multiply
.text:0000000143BA5D33 00
.text:0000000143BA5D3C F3 0F 11 44 24 6C                       movss   [rsp+828h+var_7BC], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5D42 F3 0F 10 44 24 70                       movss   xmm0, [rsp+828h+var_7B8] ; Move Scalar Single-FP
.text:0000000143BA5D48 F3 0F 59 84 24 90 00 00                 mulss   xmm0, [rsp+828h+var_798] ; Scalar Single-FP Multiply
.text:0000000143BA5D48 00
.text:0000000143BA5D51 F3 0F 11 44 24 70                       movss   [rsp+828h+var_7B8], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5D57 48 8D 84 24 AC 07 00 00                 lea     rax, [rsp+828h+var_7C] ; Load Effective Address
.text:0000000143BA5D5F 48 8D 4C 24 68                          lea     rcx, [rsp+828h+var_7C0] ; Load Effective Address
.text:0000000143BA5D64 48 8B F8                                mov     rdi, rax
.text:0000000143BA5D67 48 8B F1                                mov     rsi, rcx
.text:0000000143BA5D6A B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA5D6F F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA5D71 EB 72                                   jmp     short loc_143BA5DE5 ; Jump
.text:0000000143BA5D73                         ; ---------------------------------------------------------------------------
.text:0000000143BA5D73
.text:0000000143BA5D73                         loc_143BA5D73:                          ; CODE XREF: sub_143BA47A0+155D↑j
.text:0000000143BA5D73 48 8B 84 24 30 08 00 00                 mov     rax, [rsp+828h+arg_0]
.text:0000000143BA5D7B F3 0F 10 80 60 DC 05 00                 movss   xmm0, dword ptr [rax+5DC60h] ; Move Scalar Single-FP
.text:0000000143BA5D83 F3 0F 11 84 24 98 00 00                 movss   [rsp+828h+var_790], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5D83 00
.text:0000000143BA5D8C F3 0F 10 44 24 68                       movss   xmm0, [rsp+828h+var_7C0] ; Move Scalar Single-FP
.text:0000000143BA5D92 F3 0F 59 84 24 98 00 00                 mulss   xmm0, [rsp+828h+var_790] ; Scalar Single-FP Multiply
.text:0000000143BA5D92 00
.text:0000000143BA5D9B F3 0F 11 44 24 68                       movss   [rsp+828h+var_7C0], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5DA1 F3 0F 10 44 24 6C                       movss   xmm0, [rsp+828h+var_7BC] ; Move Scalar Single-FP
.text:0000000143BA5DA7 F3 0F 59 84 24 98 00 00                 mulss   xmm0, [rsp+828h+var_790] ; Scalar Single-FP Multiply
.text:0000000143BA5DA7 00
.text:0000000143BA5DB0 F3 0F 11 44 24 6C                       movss   [rsp+828h+var_7BC], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5DB6 F3 0F 10 44 24 70                       movss   xmm0, [rsp+828h+var_7B8] ; Move Scalar Single-FP
.text:0000000143BA5DBC F3 0F 59 84 24 98 00 00                 mulss   xmm0, [rsp+828h+var_790] ; Scalar Single-FP Multiply
.text:0000000143BA5DBC 00
.text:0000000143BA5DC5 F3 0F 11 44 24 70                       movss   [rsp+828h+var_7B8], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5DCB 48 8D 84 24 B8 07 00 00                 lea     rax, [rsp+828h+var_70] ; Load Effective Address
.text:0000000143BA5DD3 48 8D 4C 24 68                          lea     rcx, [rsp+828h+var_7C0] ; Load Effective Address
.text:0000000143BA5DD8 48 8B F8                                mov     rdi, rax
.text:0000000143BA5DDB 48 8B F1                                mov     rsi, rcx
.text:0000000143BA5DDE B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA5DE3 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA5DE5
.text:0000000143BA5DE5                         loc_143BA5DE5:                          ; CODE XREF: sub_143BA47A0+15D1↑j
.text:0000000143BA5DE5 48 83 7C 24 40 00                       cmp     [rsp+828h+var_7E8], 0 ; Compare Two Operands
.text:0000000143BA5DEB 0F 84 5D 03 00 00                       jz      loc_143BA614E   ; Jump if Zero (ZF=1)
.text:0000000143BA5DF1 48 8B 4C 24 40                          mov     rcx, [rsp+828h+var_7E8]
.text:0000000143BA5DF6 E8 85 BC EB FF                          call    sub_143A61A80   ; Call Procedure
.text:0000000143BA5DFB 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA5DFE 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA5E00 0F 84 48 03 00 00                       jz      loc_143BA614E   ; Jump if Zero (ZF=1)
.text:0000000143BA5E06 F3 0F 10 44 24 70                       movss   xmm0, [rsp+828h+var_7B8] ; Move Scalar Single-FP
.text:0000000143BA5E0C F3 0F 11 44 24 20                       movss   dword ptr [rsp+828h+var_808], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5E12 F3 0F 10 5C 24 6C                       movss   xmm3, [rsp+828h+var_7BC] ; Move Scalar Single-FP
.text:0000000143BA5E18 F3 0F 10 54 24 68                       movss   xmm2, [rsp+828h+var_7C0] ; Move Scalar Single-FP
.text:0000000143BA5E1E 48 8D 15 23 B7 B7 0C                    lea     rdx, aX33fY33fZ33f ; Load Effective Address
.text:0000000143BA5E25 48 8D 8C 24 B0 06 00 00                 lea     rcx, [rsp+828h+var_178] ; Load Effective Address
.text:0000000143BA5E2D E8 8E D6 A8 FD                          call    sub_1416334C0   ; Call Procedure
.text:0000000143BA5E32 48 8D 84 24 B0 06 00 00                 lea     rax, [rsp+828h+var_178] ; Load Effective Address
.text:0000000143BA5E3A 48 89 84 24 E8 04 00 00                 mov     [rsp+828h+var_340], rax
.text:0000000143BA5E42 48 8B 84 24 E8 04 00 00                 mov     rax, [rsp+828h+var_340]
.text:0000000143BA5E4A 48 89 84 24 20 03 00 00                 mov     [rsp+828h+var_508], rax
.text:0000000143BA5E52 48 8B 84 24 20 03 00 00                 mov     rax, [rsp+828h+var_508]
.text:0000000143BA5E5A 8B 40 08                                mov     eax, [rax+8]
.text:0000000143BA5E5D 89 84 24 A0 01 00 00                    mov     [rsp+828h+var_688], eax
.text:0000000143BA5E64 8B 84 24 A0 01 00 00                    mov     eax, [rsp+828h+var_688]
.text:0000000143BA5E6B 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA5E6D 74 3A                                   jz      short loc_143BA5EA9 ; Jump if Zero (ZF=1)
.text:0000000143BA5E6F 48 8B 84 24 20 03 00 00                 mov     rax, [rsp+828h+var_508]
.text:0000000143BA5E77 48 8B C8                                mov     rcx, rax        ; _QWORD
.text:0000000143BA5E7A E8 A1 A3 F3 FC                          call    sub_140AE0220   ; Call Procedure
.text:0000000143BA5E7F 48 89 84 24 F0 04 00 00                 mov     [rsp+828h+var_338], rax
.text:0000000143BA5E87 48 8B 84 24 F0 04 00 00                 mov     rax, [rsp+828h+var_338]
.text:0000000143BA5E8F 48 89 84 24 F8 04 00 00                 mov     [rsp+828h+var_330], rax
.text:0000000143BA5E97 48 8B 84 24 F8 04 00 00                 mov     rax, [rsp+828h+var_330]
.text:0000000143BA5E9F 48 89 84 24 28 03 00 00                 mov     [rsp+828h+var_500], rax
.text:0000000143BA5EA7 EB 0F                                   jmp     short loc_143BA5EB8 ; Jump
.text:0000000143BA5EA9                         ; ---------------------------------------------------------------------------
.text:0000000143BA5EA9
.text:0000000143BA5EA9                         loc_143BA5EA9:                          ; CODE XREF: sub_143BA47A0+16CD↑j
.text:0000000143BA5EA9 48 8D 05 A8 22 B2 0C                    lea     rax, word_1506C8158 ; Load Effective Address
.text:0000000143BA5EB0 48 89 84 24 28 03 00 00                 mov     [rsp+828h+var_500], rax
.text:0000000143BA5EB8
.text:0000000143BA5EB8                         loc_143BA5EB8:                          ; CODE XREF: sub_143BA47A0+1707↑j
.text:0000000143BA5EB8 48 8B 84 24 28 03 00 00                 mov     rax, [rsp+828h+var_500]
.text:0000000143BA5EC0 48 89 84 24 18 05 00 00                 mov     [rsp+828h+var_310], rax
.text:0000000143BA5EC8 F3 0F 10 44 24 58                       movss   xmm0, [rsp+828h+var_7D0] ; Move Scalar Single-FP
.text:0000000143BA5ECE F3 0F 11 44 24 20                       movss   dword ptr [rsp+828h+var_808], xmm0 ; Move Scalar Single-FP
.text:0000000143BA5ED4 F3 0F 10 5C 24 54                       movss   xmm3, [rsp+828h+var_7D4] ; Move Scalar Single-FP
.text:0000000143BA5EDA F3 0F 10 54 24 50                       movss   xmm2, [rsp+828h+var_7D8] ; Move Scalar Single-FP
.text:0000000143BA5EE0 48 8D 15 61 B6 B7 0C                    lea     rdx, aX33fY33fZ33f ; Load Effective Address
.text:0000000143BA5EE7 48 8D 8C 24 A0 06 00 00                 lea     rcx, [rsp+828h+var_188] ; Load Effective Address
.text:0000000143BA5EEF E8 CC D5 A8 FD                          call    sub_1416334C0   ; Call Procedure
.text:0000000143BA5EF4 48 8D 84 24 A0 06 00 00                 lea     rax, [rsp+828h+var_188] ; Load Effective Address
.text:0000000143BA5EFC 48 89 84 24 00 05 00 00                 mov     [rsp+828h+var_328], rax
.text:0000000143BA5F04 48 8B 84 24 00 05 00 00                 mov     rax, [rsp+828h+var_328]
.text:0000000143BA5F0C 48 89 84 24 30 03 00 00                 mov     [rsp+828h+var_4F8], rax
.text:0000000143BA5F14 48 8B 84 24 30 03 00 00                 mov     rax, [rsp+828h+var_4F8]
.text:0000000143BA5F1C 8B 40 08                                mov     eax, [rax+8]
.text:0000000143BA5F1F 89 84 24 B0 01 00 00                    mov     [rsp+828h+var_678], eax
.text:0000000143BA5F26 8B 84 24 B0 01 00 00                    mov     eax, [rsp+828h+var_678]
.text:0000000143BA5F2D 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA5F2F 74 3A                                   jz      short loc_143BA5F6B ; Jump if Zero (ZF=1)
.text:0000000143BA5F31 48 8B 84 24 30 03 00 00                 mov     rax, [rsp+828h+var_4F8]
.text:0000000143BA5F39 48 8B C8                                mov     rcx, rax        ; _QWORD
.text:0000000143BA5F3C E8 DF A2 F3 FC                          call    sub_140AE0220   ; Call Procedure
.text:0000000143BA5F41 48 89 84 24 08 05 00 00                 mov     [rsp+828h+var_320], rax
.text:0000000143BA5F49 48 8B 84 24 08 05 00 00                 mov     rax, [rsp+828h+var_320]
.text:0000000143BA5F51 48 89 84 24 10 05 00 00                 mov     [rsp+828h+var_318], rax
.text:0000000143BA5F59 48 8B 84 24 10 05 00 00                 mov     rax, [rsp+828h+var_318]
.text:0000000143BA5F61 48 89 84 24 38 03 00 00                 mov     [rsp+828h+var_4F0], rax
.text:0000000143BA5F69 EB 0F                                   jmp     short loc_143BA5F7A ; Jump
.text:0000000143BA5F6B                         ; ---------------------------------------------------------------------------
.text:0000000143BA5F6B
.text:0000000143BA5F6B                         loc_143BA5F6B:                          ; CODE XREF: sub_143BA47A0+178F↑j
.text:0000000143BA5F6B 48 8D 05 E6 21 B2 0C                    lea     rax, word_1506C8158 ; Load Effective Address
.text:0000000143BA5F72 48 89 84 24 38 03 00 00                 mov     [rsp+828h+var_4F0], rax
.text:0000000143BA5F7A
.text:0000000143BA5F7A                         loc_143BA5F7A:                          ; CODE XREF: sub_143BA47A0+17C9↑j
.text:0000000143BA5F7A 48 8B 84 24 38 03 00 00                 mov     rax, [rsp+828h+var_4F0]
.text:0000000143BA5F82 48 89 84 24 20 05 00 00                 mov     [rsp+828h+var_308], rax
.text:0000000143BA5F8A 48 8B 44 24 40                          mov     rax, [rsp+828h+var_7E8]
.text:0000000143BA5F8F 48 8B 00                                mov     rax, [rax]
.text:0000000143BA5F92 48 8B 4C 24 40                          mov     rcx, [rsp+828h+var_7E8]
.text:0000000143BA5F97 FF 90 F0 09 00 00                       call    qword ptr [rax+9F0h] ; Indirect Call Near Procedure
.text:0000000143BA5F9D 48 8B 4C 24 40                          mov     rcx, [rsp+828h+var_7E8]
.text:0000000143BA5FA2 48 8B 89 F0 0F 00 00                    mov     rcx, [rcx+0FF0h]
.text:0000000143BA5FA9 48 8B 94 24 18 05 00 00                 mov     rdx, [rsp+828h+var_310]
.text:0000000143BA5FB1 48 8B BC 24 20 05 00 00                 mov     rdi, [rsp+828h+var_308]
.text:0000000143BA5FB9 88 44 24 28                             mov     byte ptr [rsp+828h+var_800], al
.text:0000000143BA5FBD 0F B6 81 CA 05 00 00                    movzx   eax, byte ptr [rcx+5CAh] ; Move with Zero-Extend
.text:0000000143BA5FC4 88 44 24 20                             mov     byte ptr [rsp+828h+var_808], al
.text:0000000143BA5FC8 4C 8B CA                                mov     r9, rdx
.text:0000000143BA5FCB 4C 8B C7                                mov     r8, rdi
.text:0000000143BA5FCE 48 8D 15 9B 37 95 0D                    lea     rdx, aJlfppGetcamera ; Load Effective Address
.text:0000000143BA5FD5 48 8D 8C 24 10 04 00 00                 lea     rcx, [rsp+828h+var_418] ; Load Effective Address
.text:0000000143BA5FDD E8 6E 32 FD FF                          call    sub_143B79250   ; Call Procedure
.text:0000000143BA5FE2 48 8D 8C 24 A0 06 00 00                 lea     rcx, [rsp+828h+var_188] ; Load Effective Address
.text:0000000143BA5FEA E8 E1 27 EE FC                          call    sub_140A887D0   ; Call Procedure
.text:0000000143BA5FEF 48 8D 8C 24 B0 06 00 00                 lea     rcx, [rsp+828h+var_178] ; Load Effective Address
.text:0000000143BA5FF7 E8 D4 27 EE FC                          call    sub_140A887D0   ; Call Procedure
.text:0000000143BA5FFC 90                                      nop                     ; No Operation
.text:0000000143BA5FFD 48 8D 0D 6C 2C E7 12                    lea     rcx, qword_156A18C70 ; Load Effective Address
.text:0000000143BA6004 E8 47 38 EE FC                          call    sub_140A89850   ; Call Procedure
.text:0000000143BA6009 48 8D 0D 20 41 CA 12                    lea     rcx, qword_15684A130 ; Load Effective Address
.text:0000000143BA6010 48 89 4C 24 30                          mov     [rsp+828h+var_7F8], rcx
.text:0000000143BA6015 C6 44 24 28 01                          mov     byte ptr [rsp+828h+var_800], 1
.text:0000000143BA601A 48 8D 8C 24 10 04 00 00                 lea     rcx, [rsp+828h+var_418] ; Load Effective Address
.text:0000000143BA6022 48 89 4C 24 20                          mov     [rsp+828h+var_808], rcx
.text:0000000143BA6027 44 8B 0D F6 EE 9D 10                    mov     r9d, cs:dword_154584F24
.text:0000000143BA602E F3 0F 10 15 02 70 B2 0C                 movss   xmm2, dword ptr cs:ymmword_1506CD020+18h ; Move Scalar Single-FP
.text:0000000143BA6036 BA FF FF FF FF                          mov     edx, 0FFFFFFFFh
.text:0000000143BA603B 48 8B C8                                mov     rcx, rax
.text:0000000143BA603E E8 CD C9 ED FC                          call    nullsub_1       ; Call Procedure
.text:0000000143BA6043 90                                      nop                     ; No Operation
.text:0000000143BA6044 33 C0                                   xor     eax, eax        ; Logical Exclusive OR
.text:0000000143BA6046 83 F8 01                                cmp     eax, 1          ; Compare Two Operands
.text:0000000143BA6049 0F 84 F1 00 00 00                       jz      loc_143BA6140   ; Jump if Zero (ZF=1)
.text:0000000143BA604F B8 06 00 00 00                          mov     eax, 6
.text:0000000143BA6054 83 E0 0F                                and     eax, 0Fh        ; Logical AND
.text:0000000143BA6057 48 8D 0D 92 6A 42 13                    lea     rcx, byte_156FCCAF0 ; Load Effective Address
.text:0000000143BA605E 0F B6 09                                movzx   ecx, byte ptr [rcx] ; Move with Zero-Extend
.text:0000000143BA6061 3B C1                                   cmp     eax, ecx        ; Compare Two Operands
.text:0000000143BA6063 7F 07                                   jg      short loc_143BA606C ; Jump if Greater (ZF=0 & SF=OF)
.text:0000000143BA6065 C6 44 24 61 00                          mov     [rsp+828h+var_7C7], 0
.text:0000000143BA606A EB 05                                   jmp     short loc_143BA6071 ; Jump
.text:0000000143BA606C                         ; ---------------------------------------------------------------------------
.text:0000000143BA606C
.text:0000000143BA606C                         loc_143BA606C:                          ; CODE XREF: sub_143BA47A0+18C3↑j
.text:0000000143BA606C C6 44 24 61 01                          mov     [rsp+828h+var_7C7], 1
.text:0000000143BA6071
.text:0000000143BA6071                         loc_143BA6071:                          ; CODE XREF: sub_143BA47A0+18CA↑j
.text:0000000143BA6071 0F B6 44 24 61                          movzx   eax, [rsp+828h+var_7C7] ; Move with Zero-Extend
.text:0000000143BA6076 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA6079 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA607B 0F 85 BF 00 00 00                       jnz     loc_143BA6140   ; Jump if Not Zero (ZF=0)
.text:0000000143BA6081 8B 84 24 18 04 00 00                    mov     eax, [rsp+828h+var_410]
.text:0000000143BA6088 89 84 24 D8 01 00 00                    mov     [rsp+828h+var_650], eax
.text:0000000143BA608F 8B 84 24 D8 01 00 00                    mov     eax, [rsp+828h+var_650]
.text:0000000143BA6096 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA6098 74 3A                                   jz      short loc_143BA60D4 ; Jump if Zero (ZF=1)
.text:0000000143BA609A 48 8D 84 24 10 04 00 00                 lea     rax, [rsp+828h+var_418] ; Load Effective Address
.text:0000000143BA60A2 48 8B C8                                mov     rcx, rax        ; _QWORD
.text:0000000143BA60A5 E8 76 A1 F3 FC                          call    sub_140AE0220   ; Call Procedure
.text:0000000143BA60AA 48 89 84 24 28 05 00 00                 mov     [rsp+828h+var_300], rax
.text:0000000143BA60B2 48 8B 84 24 28 05 00 00                 mov     rax, [rsp+828h+var_300]
.text:0000000143BA60BA 48 89 84 24 30 05 00 00                 mov     [rsp+828h+var_2F8], rax
.text:0000000143BA60C2 48 8B 84 24 30 05 00 00                 mov     rax, [rsp+828h+var_2F8]
.text:0000000143BA60CA 48 89 84 24 40 03 00 00                 mov     [rsp+828h+var_4E8], rax
.text:0000000143BA60D2 EB 0F                                   jmp     short loc_143BA60E3 ; Jump
.text:0000000143BA60D4                         ; ---------------------------------------------------------------------------
.text:0000000143BA60D4
.text:0000000143BA60D4                         loc_143BA60D4:                          ; CODE XREF: sub_143BA47A0+18F8↑j
.text:0000000143BA60D4 48 8D 05 7D 20 B2 0C                    lea     rax, word_1506C8158 ; Load Effective Address
.text:0000000143BA60DB 48 89 84 24 40 03 00 00                 mov     [rsp+828h+var_4E8], rax
.text:0000000143BA60E3
.text:0000000143BA60E3                         loc_143BA60E3:                          ; CODE XREF: sub_143BA47A0+1932↑j
.text:0000000143BA60E3 48 8B 84 24 40 03 00 00                 mov     rax, [rsp+828h+var_4E8]
.text:0000000143BA60EB 48 89 84 24 38 05 00 00                 mov     [rsp+828h+var_2F0], rax
.text:0000000143BA60F3 48 8B 84 24 38 05 00 00                 mov     rax, [rsp+828h+var_2F0]
.text:0000000143BA60FB 48 89 84 24 40 05 00 00                 mov     [rsp+828h+var_2E8], rax
.text:0000000143BA6103 48 8D 0D E6 69 42 13                    lea     rcx, byte_156FCCAF0 ; Load Effective Address
.text:0000000143BA610A E8 81 3F F6 FC                          call    sub_140B0A090   ; Call Procedure
.text:0000000143BA610F 48 8B 8C 24 40 05 00 00                 mov     rcx, [rsp+828h+var_2E8]
.text:0000000143BA6117 48 89 4C 24 28                          mov     [rsp+828h+var_800], rcx
.text:0000000143BA611C 48 8D 0D 19 30 B2 0C                    lea     rcx, aS         ; Load Effective Address
.text:0000000143BA6123 48 89 4C 24 20                          mov     [rsp+828h+var_808], rcx
.text:0000000143BA6128 41 B1 06                                mov     r9b, 6
.text:0000000143BA612B 4C 8B C0                                mov     r8, rax
.text:0000000143BA612E BA 53 0B 00 00                          mov     edx, 0B53h
.text:0000000143BA6133 48 8D 0D 26 26 B2 0C                    lea     rcx, aUnknown   ; Load Effective Address
.text:0000000143BA613A E8 C1 41 F3 FC                          call    sub_140ADA300   ; Call Procedure
.text:0000000143BA613F 90                                      nop                     ; No Operation
.text:0000000143BA6140
.text:0000000143BA6140                         loc_143BA6140:                          ; CODE XREF: sub_143BA47A0+18A9↑j
.text:0000000143BA6140                                                                 ; sub_143BA47A0+18DB↑j
.text:0000000143BA6140 48 8D 8C 24 10 04 00 00                 lea     rcx, [rsp+828h+var_418] ; Load Effective Address
.text:0000000143BA6148 E8 83 26 EE FC                          call    sub_140A887D0   ; Call Procedure
.text:0000000143BA614D 90                                      nop                     ; No Operation
.text:0000000143BA614E
.text:0000000143BA614E                         loc_143BA614E:                          ; CODE XREF: sub_143BA47A0+164B↑j
.text:0000000143BA614E                                                                 ; sub_143BA47A0+1660↑j
.text:0000000143BA614E F3 0F 10 44 24 50                       movss   xmm0, [rsp+828h+var_7D8] ; Move Scalar Single-FP
.text:0000000143BA6154 F3 0F 58 44 24 68                       addss   xmm0, [rsp+828h+var_7C0] ; Scalar Single-FP Add
.text:0000000143BA615A F3 0F 11 44 24 50                       movss   [rsp+828h+var_7D8], xmm0 ; Move Scalar Single-FP
.text:0000000143BA6160 F3 0F 10 44 24 54                       movss   xmm0, [rsp+828h+var_7D4] ; Move Scalar Single-FP
.text:0000000143BA6166 F3 0F 58 44 24 6C                       addss   xmm0, [rsp+828h+var_7BC] ; Scalar Single-FP Add
.text:0000000143BA616C F3 0F 11 44 24 54                       movss   [rsp+828h+var_7D4], xmm0 ; Move Scalar Single-FP
.text:0000000143BA6172 F3 0F 10 44 24 58                       movss   xmm0, [rsp+828h+var_7D0] ; Move Scalar Single-FP
.text:0000000143BA6178 F3 0F 58 44 24 70                       addss   xmm0, [rsp+828h+var_7B8] ; Scalar Single-FP Add
.text:0000000143BA617E F3 0F 11 44 24 58                       movss   [rsp+828h+var_7D0], xmm0 ; Move Scalar Single-FP
.text:0000000143BA6184 48 8D 84 24 C4 07 00 00                 lea     rax, [rsp+828h+var_64] ; Load Effective Address
.text:0000000143BA618C 48 8D 4C 24 50                          lea     rcx, [rsp+828h+var_7D8] ; Load Effective Address
.text:0000000143BA6191 48 8B F8                                mov     rdi, rax
.text:0000000143BA6194 48 8B F1                                mov     rsi, rcx
.text:0000000143BA6197 B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA619C F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA619E 48 83 7C 24 40 00                       cmp     [rsp+828h+var_7E8], 0 ; Compare Two Operands
.text:0000000143BA61A4 0F 84 2F 03 00 00                       jz      loc_143BA64D9   ; Jump if Zero (ZF=1)
.text:0000000143BA61AA 48 8B 4C 24 40                          mov     rcx, [rsp+828h+var_7E8]
.text:0000000143BA61AF E8 CC B8 EB FF                          call    sub_143A61A80   ; Call Procedure
.text:0000000143BA61B4 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA61B7 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA61B9 0F 84 1A 03 00 00                       jz      loc_143BA64D9   ; Jump if Zero (ZF=1)
.text:0000000143BA61BF F3 0F 10 44 24 70                       movss   xmm0, [rsp+828h+var_7B8] ; Move Scalar Single-FP
.text:0000000143BA61C5 F3 0F 11 44 24 20                       movss   dword ptr [rsp+828h+var_808], xmm0 ; Move Scalar Single-FP
.text:0000000143BA61CB F3 0F 10 5C 24 6C                       movss   xmm3, [rsp+828h+var_7BC] ; Move Scalar Single-FP
.text:0000000143BA61D1 F3 0F 10 54 24 68                       movss   xmm2, [rsp+828h+var_7C0] ; Move Scalar Single-FP
.text:0000000143BA61D7 48 8D 15 6A B3 B7 0C                    lea     rdx, aX33fY33fZ33f ; Load Effective Address
.text:0000000143BA61DE 48 8D 8C 24 D0 06 00 00                 lea     rcx, [rsp+828h+var_158] ; Load Effective Address
.text:0000000143BA61E6 E8 D5 D2 A8 FD                          call    sub_1416334C0   ; Call Procedure
.text:0000000143BA61EB 48 8D 84 24 D0 06 00 00                 lea     rax, [rsp+828h+var_158] ; Load Effective Address
.text:0000000143BA61F3 48 89 84 24 48 05 00 00                 mov     [rsp+828h+var_2E0], rax
.text:0000000143BA61FB 48 8B 84 24 48 05 00 00                 mov     rax, [rsp+828h+var_2E0]
.text:0000000143BA6203 48 89 84 24 48 03 00 00                 mov     [rsp+828h+var_4E0], rax
.text:0000000143BA620B 48 8B 84 24 48 03 00 00                 mov     rax, [rsp+828h+var_4E0]
.text:0000000143BA6213 8B 40 08                                mov     eax, [rax+8]
.text:0000000143BA6216 89 84 24 DC 01 00 00                    mov     [rsp+828h+var_64C], eax
.text:0000000143BA621D 8B 84 24 DC 01 00 00                    mov     eax, [rsp+828h+var_64C]
.text:0000000143BA6224 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA6226 74 3A                                   jz      short loc_143BA6262 ; Jump if Zero (ZF=1)
.text:0000000143BA6228 48 8B 84 24 48 03 00 00                 mov     rax, [rsp+828h+var_4E0]
.text:0000000143BA6230 48 8B C8                                mov     rcx, rax        ; _QWORD
.text:0000000143BA6233 E8 E8 9F F3 FC                          call    sub_140AE0220   ; Call Procedure
.text:0000000143BA6238 48 89 84 24 50 05 00 00                 mov     [rsp+828h+var_2D8], rax
.text:0000000143BA6240 48 8B 84 24 50 05 00 00                 mov     rax, [rsp+828h+var_2D8]
.text:0000000143BA6248 48 89 84 24 58 05 00 00                 mov     [rsp+828h+var_2D0], rax
.text:0000000143BA6250 48 8B 84 24 58 05 00 00                 mov     rax, [rsp+828h+var_2D0]
.text:0000000143BA6258 48 89 84 24 50 03 00 00                 mov     [rsp+828h+var_4D8], rax
.text:0000000143BA6260 EB 0F                                   jmp     short loc_143BA6271 ; Jump
.text:0000000143BA6262                         ; ---------------------------------------------------------------------------
.text:0000000143BA6262
.text:0000000143BA6262                         loc_143BA6262:                          ; CODE XREF: sub_143BA47A0+1A86↑j
.text:0000000143BA6262 48 8D 05 EF 1E B2 0C                    lea     rax, word_1506C8158 ; Load Effective Address
.text:0000000143BA6269 48 89 84 24 50 03 00 00                 mov     [rsp+828h+var_4D8], rax
.text:0000000143BA6271
.text:0000000143BA6271                         loc_143BA6271:                          ; CODE XREF: sub_143BA47A0+1AC0↑j
.text:0000000143BA6271 48 8B 84 24 50 03 00 00                 mov     rax, [rsp+828h+var_4D8]
.text:0000000143BA6279 48 89 84 24 78 05 00 00                 mov     [rsp+828h+var_2B0], rax
.text:0000000143BA6281 F3 0F 10 44 24 58                       movss   xmm0, [rsp+828h+var_7D0] ; Move Scalar Single-FP
.text:0000000143BA6287 F3 0F 11 44 24 20                       movss   dword ptr [rsp+828h+var_808], xmm0 ; Move Scalar Single-FP
.text:0000000143BA628D F3 0F 10 5C 24 54                       movss   xmm3, [rsp+828h+var_7D4] ; Move Scalar Single-FP
.text:0000000143BA6293 F3 0F 10 54 24 50                       movss   xmm2, [rsp+828h+var_7D8] ; Move Scalar Single-FP
.text:0000000143BA6299 48 8D 15 A8 B2 B7 0C                    lea     rdx, aX33fY33fZ33f ; Load Effective Address
.text:0000000143BA62A0 48 8D 8C 24 C0 06 00 00                 lea     rcx, [rsp+828h+var_168] ; Load Effective Address
.text:0000000143BA62A8 E8 13 D2 A8 FD                          call    sub_1416334C0   ; Call Procedure
.text:0000000143BA62AD 48 8D 84 24 C0 06 00 00                 lea     rax, [rsp+828h+var_168] ; Load Effective Address
.text:0000000143BA62B5 48 89 84 24 60 05 00 00                 mov     [rsp+828h+var_2C8], rax
.text:0000000143BA62BD 48 8B 84 24 60 05 00 00                 mov     rax, [rsp+828h+var_2C8]
.text:0000000143BA62C5 48 89 84 24 58 03 00 00                 mov     [rsp+828h+var_4D0], rax
.text:0000000143BA62CD 48 8B 84 24 58 03 00 00                 mov     rax, [rsp+828h+var_4D0]
.text:0000000143BA62D5 8B 40 08                                mov     eax, [rax+8]
.text:0000000143BA62D8 89 84 24 E0 01 00 00                    mov     [rsp+828h+var_648], eax
.text:0000000143BA62DF 8B 84 24 E0 01 00 00                    mov     eax, [rsp+828h+var_648]
.text:0000000143BA62E6 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA62E8 74 3A                                   jz      short loc_143BA6324 ; Jump if Zero (ZF=1)
.text:0000000143BA62EA 48 8B 84 24 58 03 00 00                 mov     rax, [rsp+828h+var_4D0]
.text:0000000143BA62F2 48 8B C8                                mov     rcx, rax        ; _QWORD
.text:0000000143BA62F5 E8 26 9F F3 FC                          call    sub_140AE0220   ; Call Procedure
.text:0000000143BA62FA 48 89 84 24 68 05 00 00                 mov     [rsp+828h+var_2C0], rax
.text:0000000143BA6302 48 8B 84 24 68 05 00 00                 mov     rax, [rsp+828h+var_2C0]
.text:0000000143BA630A 48 89 84 24 70 05 00 00                 mov     [rsp+828h+var_2B8], rax
.text:0000000143BA6312 48 8B 84 24 70 05 00 00                 mov     rax, [rsp+828h+var_2B8]
.text:0000000143BA631A 48 89 84 24 60 03 00 00                 mov     [rsp+828h+var_4C8], rax
.text:0000000143BA6322 EB 0F                                   jmp     short loc_143BA6333 ; Jump
.text:0000000143BA6324                         ; ---------------------------------------------------------------------------
.text:0000000143BA6324
.text:0000000143BA6324                         loc_143BA6324:                          ; CODE XREF: sub_143BA47A0+1B48↑j
.text:0000000143BA6324 48 8D 05 2D 1E B2 0C                    lea     rax, word_1506C8158 ; Load Effective Address
.text:0000000143BA632B 48 89 84 24 60 03 00 00                 mov     [rsp+828h+var_4C8], rax
.text:0000000143BA6333
.text:0000000143BA6333                         loc_143BA6333:                          ; CODE XREF: sub_143BA47A0+1B82↑j
.text:0000000143BA6333 48 8B 84 24 60 03 00 00                 mov     rax, [rsp+828h+var_4C8]
.text:0000000143BA633B 48 89 84 24 80 05 00 00                 mov     [rsp+828h+var_2A8], rax
.text:0000000143BA6343 48 8B 84 24 78 05 00 00                 mov     rax, [rsp+828h+var_2B0]
.text:0000000143BA634B 48 8B 8C 24 80 05 00 00                 mov     rcx, [rsp+828h+var_2A8]
.text:0000000143BA6353 4C 8B C8                                mov     r9, rax
.text:0000000143BA6356 4C 8B C1                                mov     r8, rcx
.text:0000000143BA6359 48 8D 15 F0 34 95 0D                    lea     rdx, aJlfppGetcamera_0 ; Load Effective Address
.text:0000000143BA6360 48 8D 8C 24 20 04 00 00                 lea     rcx, [rsp+828h+var_408] ; Load Effective Address
.text:0000000143BA6368 E8 03 41 F3 FC                          call    sub_140ADA470   ; Call Procedure
.text:0000000143BA636D 48 8D 8C 24 C0 06 00 00                 lea     rcx, [rsp+828h+var_168] ; Load Effective Address
.text:0000000143BA6375 E8 56 24 EE FC                          call    sub_140A887D0   ; Call Procedure
.text:0000000143BA637A 48 8D 8C 24 D0 06 00 00                 lea     rcx, [rsp+828h+var_158] ; Load Effective Address
.text:0000000143BA6382 E8 49 24 EE FC                          call    sub_140A887D0   ; Call Procedure
.text:0000000143BA6387 90                                      nop                     ; No Operation
.text:0000000143BA6388 48 8D 0D E1 28 E7 12                    lea     rcx, qword_156A18C70 ; Load Effective Address
.text:0000000143BA638F E8 BC 34 EE FC                          call    sub_140A89850   ; Call Procedure
.text:0000000143BA6394 48 8D 0D 95 3D CA 12                    lea     rcx, qword_15684A130 ; Load Effective Address
.text:0000000143BA639B 48 89 4C 24 30                          mov     [rsp+828h+var_7F8], rcx
.text:0000000143BA63A0 C6 44 24 28 01                          mov     byte ptr [rsp+828h+var_800], 1
.text:0000000143BA63A5 48 8D 8C 24 20 04 00 00                 lea     rcx, [rsp+828h+var_408] ; Load Effective Address
.text:0000000143BA63AD 48 89 4C 24 20                          mov     [rsp+828h+var_808], rcx
.text:0000000143BA63B2 44 8B 0D 6B EB 9D 10                    mov     r9d, cs:dword_154584F24
.text:0000000143BA63B9 F3 0F 10 15 77 6C B2 0C                 movss   xmm2, dword ptr cs:ymmword_1506CD020+18h ; Move Scalar Single-FP
.text:0000000143BA63C1 BA FF FF FF FF                          mov     edx, 0FFFFFFFFh
.text:0000000143BA63C6 48 8B C8                                mov     rcx, rax
.text:0000000143BA63C9 E8 42 C6 ED FC                          call    nullsub_1       ; Call Procedure
.text:0000000143BA63CE 90                                      nop                     ; No Operation
.text:0000000143BA63CF 33 C0                                   xor     eax, eax        ; Logical Exclusive OR
.text:0000000143BA63D1 83 F8 01                                cmp     eax, 1          ; Compare Two Operands
.text:0000000143BA63D4 0F 84 F1 00 00 00                       jz      loc_143BA64CB   ; Jump if Zero (ZF=1)
.text:0000000143BA63DA B8 06 00 00 00                          mov     eax, 6
.text:0000000143BA63DF 83 E0 0F                                and     eax, 0Fh        ; Logical AND
.text:0000000143BA63E2 48 8D 0D 07 67 42 13                    lea     rcx, byte_156FCCAF0 ; Load Effective Address
.text:0000000143BA63E9 0F B6 09                                movzx   ecx, byte ptr [rcx] ; Move with Zero-Extend
.text:0000000143BA63EC 3B C1                                   cmp     eax, ecx        ; Compare Two Operands
.text:0000000143BA63EE 7F 07                                   jg      short loc_143BA63F7 ; Jump if Greater (ZF=0 & SF=OF)
.text:0000000143BA63F0 C6 44 24 62 00                          mov     [rsp+828h+var_7C6], 0
.text:0000000143BA63F5 EB 05                                   jmp     short loc_143BA63FC ; Jump
.text:0000000143BA63F7                         ; ---------------------------------------------------------------------------
.text:0000000143BA63F7
.text:0000000143BA63F7                         loc_143BA63F7:                          ; CODE XREF: sub_143BA47A0+1C4E↑j
.text:0000000143BA63F7 C6 44 24 62 01                          mov     [rsp+828h+var_7C6], 1
.text:0000000143BA63FC
.text:0000000143BA63FC                         loc_143BA63FC:                          ; CODE XREF: sub_143BA47A0+1C55↑j
.text:0000000143BA63FC 0F B6 44 24 62                          movzx   eax, [rsp+828h+var_7C6] ; Move with Zero-Extend
.text:0000000143BA6401 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA6404 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA6406 0F 85 BF 00 00 00                       jnz     loc_143BA64CB   ; Jump if Not Zero (ZF=0)
.text:0000000143BA640C 8B 84 24 28 04 00 00                    mov     eax, [rsp+828h+var_400]
.text:0000000143BA6413 89 84 24 E4 01 00 00                    mov     [rsp+828h+var_644], eax
.text:0000000143BA641A 8B 84 24 E4 01 00 00                    mov     eax, [rsp+828h+var_644]
.text:0000000143BA6421 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA6423 74 3A                                   jz      short loc_143BA645F ; Jump if Zero (ZF=1)
.text:0000000143BA6425 48 8D 84 24 20 04 00 00                 lea     rax, [rsp+828h+var_408] ; Load Effective Address
.text:0000000143BA642D 48 8B C8                                mov     rcx, rax        ; _QWORD
.text:0000000143BA6430 E8 EB 9D F3 FC                          call    sub_140AE0220   ; Call Procedure
.text:0000000143BA6435 48 89 84 24 88 05 00 00                 mov     [rsp+828h+var_2A0], rax
.text:0000000143BA643D 48 8B 84 24 88 05 00 00                 mov     rax, [rsp+828h+var_2A0]
.text:0000000143BA6445 48 89 84 24 90 05 00 00                 mov     [rsp+828h+var_298], rax
.text:0000000143BA644D 48 8B 84 24 90 05 00 00                 mov     rax, [rsp+828h+var_298]
.text:0000000143BA6455 48 89 84 24 68 03 00 00                 mov     [rsp+828h+var_4C0], rax
.text:0000000143BA645D EB 0F                                   jmp     short loc_143BA646E ; Jump
.text:0000000143BA645F                         ; ---------------------------------------------------------------------------
.text:0000000143BA645F
.text:0000000143BA645F                         loc_143BA645F:                          ; CODE XREF: sub_143BA47A0+1C83↑j
.text:0000000143BA645F 48 8D 05 F2 1C B2 0C                    lea     rax, word_1506C8158 ; Load Effective Address
.text:0000000143BA6466 48 89 84 24 68 03 00 00                 mov     [rsp+828h+var_4C0], rax
.text:0000000143BA646E
.text:0000000143BA646E                         loc_143BA646E:                          ; CODE XREF: sub_143BA47A0+1CBD↑j
.text:0000000143BA646E 48 8B 84 24 68 03 00 00                 mov     rax, [rsp+828h+var_4C0]
.text:0000000143BA6476 48 89 84 24 58 06 00 00                 mov     [rsp+828h+var_1D0], rax
.text:0000000143BA647E 48 8B 84 24 58 06 00 00                 mov     rax, [rsp+828h+var_1D0]
.text:0000000143BA6486 48 89 84 24 98 05 00 00                 mov     [rsp+828h+var_290], rax
.text:0000000143BA648E 48 8D 0D 5B 66 42 13                    lea     rcx, byte_156FCCAF0 ; Load Effective Address
.text:0000000143BA6495 E8 F6 3B F6 FC                          call    sub_140B0A090   ; Call Procedure
.text:0000000143BA649A 48 8B 8C 24 98 05 00 00                 mov     rcx, [rsp+828h+var_290]
.text:0000000143BA64A2 48 89 4C 24 28                          mov     [rsp+828h+var_800], rcx
.text:0000000143BA64A7 48 8D 0D 8E 2C B2 0C                    lea     rcx, aS         ; Load Effective Address
.text:0000000143BA64AE 48 89 4C 24 20                          mov     [rsp+828h+var_808], rcx
.text:0000000143BA64B3 41 B1 06                                mov     r9b, 6
.text:0000000143BA64B6 4C 8B C0                                mov     r8, rax
.text:0000000143BA64B9 BA 5A 0B 00 00                          mov     edx, 0B5Ah
.text:0000000143BA64BE 48 8D 0D 9B 22 B2 0C                    lea     rcx, aUnknown   ; Load Effective Address
.text:0000000143BA64C5 E8 36 3E F3 FC                          call    sub_140ADA300   ; Call Procedure
.text:0000000143BA64CA 90                                      nop                     ; No Operation
.text:0000000143BA64CB
.text:0000000143BA64CB                         loc_143BA64CB:                          ; CODE XREF: sub_143BA47A0+1C34↑j
.text:0000000143BA64CB                                                                 ; sub_143BA47A0+1C66↑j
.text:0000000143BA64CB 48 8D 8C 24 20 04 00 00                 lea     rcx, [rsp+828h+var_408] ; Load Effective Address
.text:0000000143BA64D3 E8 F8 22 EE FC                          call    sub_140A887D0   ; Call Procedure
.text:0000000143BA64D8 90                                      nop                     ; No Operation
.text:0000000143BA64D9
.text:0000000143BA64D9                         loc_143BA64D9:                          ; CODE XREF: sub_143BA47A0+1A04↑j
.text:0000000143BA64D9                                                                 ; sub_143BA47A0+1A19↑j
.text:0000000143BA64D9 E9 88 02 00 00                          jmp     loc_143BA6766   ; Jump
.text:0000000143BA64DE                         ; ---------------------------------------------------------------------------
.text:0000000143BA64DE
.text:0000000143BA64DE                         loc_143BA64DE:                          ; CODE XREF: sub_143BA47A0+149A↑j
.text:0000000143BA64DE 48 8D 94 24 D0 07 00 00                 lea     rdx, [rsp+828h+var_58] ; Load Effective Address
.text:0000000143BA64E6 48 8B 8C 24 08 01 00 00                 mov     rcx, [rsp+828h+var_720]
.text:0000000143BA64EE E8 0D A6 58 FF                          call    sub_143130B00   ; Call Procedure
.text:0000000143BA64F3 48 8D 4C 24 50                          lea     rcx, [rsp+828h+var_7D8] ; Load Effective Address
.text:0000000143BA64F8 48 8B F9                                mov     rdi, rcx
.text:0000000143BA64FB 48 8B F0                                mov     rsi, rax
.text:0000000143BA64FE B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA6503 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA6505 48 83 7C 24 40 00                       cmp     [rsp+828h+var_7E8], 0 ; Compare Two Operands
.text:0000000143BA650B 0F 84 55 02 00 00                       jz      loc_143BA6766   ; Jump if Zero (ZF=1)
.text:0000000143BA6511 48 8B 4C 24 40                          mov     rcx, [rsp+828h+var_7E8]
.text:0000000143BA6516 E8 65 B5 EB FF                          call    sub_143A61A80   ; Call Procedure
.text:0000000143BA651B 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA651E 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA6520 0F 84 40 02 00 00                       jz      loc_143BA6766   ; Jump if Zero (ZF=1)
.text:0000000143BA6526 F3 0F 10 44 24 58                       movss   xmm0, [rsp+828h+var_7D0] ; Move Scalar Single-FP
.text:0000000143BA652C F3 0F 11 44 24 20                       movss   dword ptr [rsp+828h+var_808], xmm0 ; Move Scalar Single-FP
.text:0000000143BA6532 F3 0F 10 5C 24 54                       movss   xmm3, [rsp+828h+var_7D4] ; Move Scalar Single-FP
.text:0000000143BA6538 F3 0F 10 54 24 50                       movss   xmm2, [rsp+828h+var_7D8] ; Move Scalar Single-FP
.text:0000000143BA653E 48 8D 15 03 B0 B7 0C                    lea     rdx, aX33fY33fZ33f ; Load Effective Address
.text:0000000143BA6545 48 8D 8C 24 E0 06 00 00                 lea     rcx, [rsp+828h+var_148] ; Load Effective Address
.text:0000000143BA654D E8 6E CF A8 FD                          call    sub_1416334C0   ; Call Procedure
.text:0000000143BA6552 48 8D 84 24 E0 06 00 00                 lea     rax, [rsp+828h+var_148] ; Load Effective Address
.text:0000000143BA655A 48 89 84 24 A0 05 00 00                 mov     [rsp+828h+var_288], rax
.text:0000000143BA6562 48 8B 84 24 A0 05 00 00                 mov     rax, [rsp+828h+var_288]
.text:0000000143BA656A 48 89 84 24 70 03 00 00                 mov     [rsp+828h+var_4B8], rax
.text:0000000143BA6572 48 8B 84 24 70 03 00 00                 mov     rax, [rsp+828h+var_4B8]
.text:0000000143BA657A 8B 40 08                                mov     eax, [rax+8]
.text:0000000143BA657D 89 84 24 E8 01 00 00                    mov     [rsp+828h+var_640], eax
.text:0000000143BA6584 8B 84 24 E8 01 00 00                    mov     eax, [rsp+828h+var_640]
.text:0000000143BA658B 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA658D 74 3A                                   jz      short loc_143BA65C9 ; Jump if Zero (ZF=1)
.text:0000000143BA658F 48 8B 84 24 70 03 00 00                 mov     rax, [rsp+828h+var_4B8]
.text:0000000143BA6597 48 8B C8                                mov     rcx, rax        ; _QWORD
.text:0000000143BA659A E8 81 9C F3 FC                          call    sub_140AE0220   ; Call Procedure
.text:0000000143BA659F 48 89 84 24 A8 05 00 00                 mov     [rsp+828h+var_280], rax
.text:0000000143BA65A7 48 8B 84 24 A8 05 00 00                 mov     rax, [rsp+828h+var_280]
.text:0000000143BA65AF 48 89 84 24 B0 05 00 00                 mov     [rsp+828h+var_278], rax
.text:0000000143BA65B7 48 8B 84 24 B0 05 00 00                 mov     rax, [rsp+828h+var_278]
.text:0000000143BA65BF 48 89 84 24 78 03 00 00                 mov     [rsp+828h+var_4B0], rax
.text:0000000143BA65C7 EB 0F                                   jmp     short loc_143BA65D8 ; Jump
.text:0000000143BA65C9                         ; ---------------------------------------------------------------------------
.text:0000000143BA65C9
.text:0000000143BA65C9                         loc_143BA65C9:                          ; CODE XREF: sub_143BA47A0+1DED↑j
.text:0000000143BA65C9 48 8D 05 88 1B B2 0C                    lea     rax, word_1506C8158 ; Load Effective Address
.text:0000000143BA65D0 48 89 84 24 78 03 00 00                 mov     [rsp+828h+var_4B0], rax
.text:0000000143BA65D8
.text:0000000143BA65D8                         loc_143BA65D8:                          ; CODE XREF: sub_143BA47A0+1E27↑j
.text:0000000143BA65D8 48 8B 84 24 78 03 00 00                 mov     rax, [rsp+828h+var_4B0]
.text:0000000143BA65E0 48 89 84 24 B8 05 00 00                 mov     [rsp+828h+var_270], rax
.text:0000000143BA65E8 48 8B 84 24 B8 05 00 00                 mov     rax, [rsp+828h+var_270]
.text:0000000143BA65F0 4C 8B C0                                mov     r8, rax
.text:0000000143BA65F3 48 8D 15 06 33 95 0D                    lea     rdx, aJlfppGetcamera_1 ; Load Effective Address
.text:0000000143BA65FA 48 8D 8C 24 30 04 00 00                 lea     rcx, [rsp+828h+var_3F8] ; Load Effective Address
.text:0000000143BA6602 E8 69 3E F3 FC                          call    sub_140ADA470   ; Call Procedure
.text:0000000143BA6607 48 8D 8C 24 E0 06 00 00                 lea     rcx, [rsp+828h+var_148] ; Load Effective Address
.text:0000000143BA660F E8 BC 21 EE FC                          call    sub_140A887D0   ; Call Procedure
.text:0000000143BA6614 90                                      nop                     ; No Operation
.text:0000000143BA6615 48 8D 0D 54 26 E7 12                    lea     rcx, qword_156A18C70 ; Load Effective Address
.text:0000000143BA661C E8 2F 32 EE FC                          call    sub_140A89850   ; Call Procedure
.text:0000000143BA6621 48 8D 0D 08 3B CA 12                    lea     rcx, qword_15684A130 ; Load Effective Address
.text:0000000143BA6628 48 89 4C 24 30                          mov     [rsp+828h+var_7F8], rcx
.text:0000000143BA662D C6 44 24 28 01                          mov     byte ptr [rsp+828h+var_800], 1
.text:0000000143BA6632 48 8D 8C 24 30 04 00 00                 lea     rcx, [rsp+828h+var_3F8] ; Load Effective Address
.text:0000000143BA663A 48 89 4C 24 20                          mov     [rsp+828h+var_808], rcx
.text:0000000143BA663F 44 8B 0D DE E8 9D 10                    mov     r9d, cs:dword_154584F24
.text:0000000143BA6646 F3 0F 10 15 EA 69 B2 0C                 movss   xmm2, dword ptr cs:ymmword_1506CD020+18h ; Move Scalar Single-FP
.text:0000000143BA664E BA FF FF FF FF                          mov     edx, 0FFFFFFFFh
.text:0000000143BA6653 48 8B C8                                mov     rcx, rax
.text:0000000143BA6656 E8 B5 C3 ED FC                          call    nullsub_1       ; Call Procedure
.text:0000000143BA665B 90                                      nop                     ; No Operation
.text:0000000143BA665C 33 C0                                   xor     eax, eax        ; Logical Exclusive OR
.text:0000000143BA665E 83 F8 01                                cmp     eax, 1          ; Compare Two Operands
.text:0000000143BA6661 0F 84 F1 00 00 00                       jz      loc_143BA6758   ; Jump if Zero (ZF=1)
.text:0000000143BA6667 B8 06 00 00 00                          mov     eax, 6
.text:0000000143BA666C 83 E0 0F                                and     eax, 0Fh        ; Logical AND
.text:0000000143BA666F 48 8D 0D 7A 64 42 13                    lea     rcx, byte_156FCCAF0 ; Load Effective Address
.text:0000000143BA6676 0F B6 09                                movzx   ecx, byte ptr [rcx] ; Move with Zero-Extend
.text:0000000143BA6679 3B C1                                   cmp     eax, ecx        ; Compare Two Operands
.text:0000000143BA667B 7F 07                                   jg      short loc_143BA6684 ; Jump if Greater (ZF=0 & SF=OF)
.text:0000000143BA667D C6 44 24 63 00                          mov     [rsp+828h+var_7C5], 0
.text:0000000143BA6682 EB 05                                   jmp     short loc_143BA6689 ; Jump
.text:0000000143BA6684                         ; ---------------------------------------------------------------------------
.text:0000000143BA6684
.text:0000000143BA6684                         loc_143BA6684:                          ; CODE XREF: sub_143BA47A0+1EDB↑j
.text:0000000143BA6684 C6 44 24 63 01                          mov     [rsp+828h+var_7C5], 1
.text:0000000143BA6689
.text:0000000143BA6689                         loc_143BA6689:                          ; CODE XREF: sub_143BA47A0+1EE2↑j
.text:0000000143BA6689 0F B6 44 24 63                          movzx   eax, [rsp+828h+var_7C5] ; Move with Zero-Extend
.text:0000000143BA668E 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA6691 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA6693 0F 85 BF 00 00 00                       jnz     loc_143BA6758   ; Jump if Not Zero (ZF=0)
.text:0000000143BA6699 8B 84 24 38 04 00 00                    mov     eax, [rsp+828h+var_3F0]
.text:0000000143BA66A0 89 84 24 EC 01 00 00                    mov     [rsp+828h+var_63C], eax
.text:0000000143BA66A7 8B 84 24 EC 01 00 00                    mov     eax, [rsp+828h+var_63C]
.text:0000000143BA66AE 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA66B0 74 3A                                   jz      short loc_143BA66EC ; Jump if Zero (ZF=1)
.text:0000000143BA66B2 48 8D 84 24 30 04 00 00                 lea     rax, [rsp+828h+var_3F8] ; Load Effective Address
.text:0000000143BA66BA 48 8B C8                                mov     rcx, rax        ; _QWORD
.text:0000000143BA66BD E8 5E 9B F3 FC                          call    sub_140AE0220   ; Call Procedure
.text:0000000143BA66C2 48 89 84 24 C0 05 00 00                 mov     [rsp+828h+var_268], rax
.text:0000000143BA66CA 48 8B 84 24 C0 05 00 00                 mov     rax, [rsp+828h+var_268]
.text:0000000143BA66D2 48 89 84 24 C8 05 00 00                 mov     [rsp+828h+var_260], rax
.text:0000000143BA66DA 48 8B 84 24 C8 05 00 00                 mov     rax, [rsp+828h+var_260]
.text:0000000143BA66E2 48 89 84 24 80 03 00 00                 mov     [rsp+828h+var_4A8], rax
.text:0000000143BA66EA EB 0F                                   jmp     short loc_143BA66FB ; Jump
.text:0000000143BA66EC                         ; ---------------------------------------------------------------------------
.text:0000000143BA66EC
.text:0000000143BA66EC                         loc_143BA66EC:                          ; CODE XREF: sub_143BA47A0+1F10↑j
.text:0000000143BA66EC 48 8D 05 65 1A B2 0C                    lea     rax, word_1506C8158 ; Load Effective Address
.text:0000000143BA66F3 48 89 84 24 80 03 00 00                 mov     [rsp+828h+var_4A8], rax
.text:0000000143BA66FB
.text:0000000143BA66FB                         loc_143BA66FB:                          ; CODE XREF: sub_143BA47A0+1F4A↑j
.text:0000000143BA66FB 48 8B 84 24 80 03 00 00                 mov     rax, [rsp+828h+var_4A8]
.text:0000000143BA6703 48 89 84 24 D0 05 00 00                 mov     [rsp+828h+var_258], rax
.text:0000000143BA670B 48 8B 84 24 D0 05 00 00                 mov     rax, [rsp+828h+var_258]
.text:0000000143BA6713 48 89 84 24 D8 05 00 00                 mov     [rsp+828h+var_250], rax
.text:0000000143BA671B 48 8D 0D CE 63 42 13                    lea     rcx, byte_156FCCAF0 ; Load Effective Address
.text:0000000143BA6722 E8 69 39 F6 FC                          call    sub_140B0A090   ; Call Procedure
.text:0000000143BA6727 48 8B 8C 24 D8 05 00 00                 mov     rcx, [rsp+828h+var_250]
.text:0000000143BA672F 48 89 4C 24 28                          mov     [rsp+828h+var_800], rcx
.text:0000000143BA6734 48 8D 0D 01 2A B2 0C                    lea     rcx, aS         ; Load Effective Address
.text:0000000143BA673B 48 89 4C 24 20                          mov     [rsp+828h+var_808], rcx
.text:0000000143BA6740 41 B1 06                                mov     r9b, 6
.text:0000000143BA6743 4C 8B C0                                mov     r8, rax
.text:0000000143BA6746 BA 64 0B 00 00                          mov     edx, 0B64h
.text:0000000143BA674B 48 8D 0D 0E 20 B2 0C                    lea     rcx, aUnknown   ; Load Effective Address
.text:0000000143BA6752 E8 A9 3B F3 FC                          call    sub_140ADA300   ; Call Procedure
.text:0000000143BA6757 90                                      nop                     ; No Operation
.text:0000000143BA6758
.text:0000000143BA6758                         loc_143BA6758:                          ; CODE XREF: sub_143BA47A0+1EC1↑j
.text:0000000143BA6758                                                                 ; sub_143BA47A0+1EF3↑j
.text:0000000143BA6758 48 8D 8C 24 30 04 00 00                 lea     rcx, [rsp+828h+var_3F8] ; Load Effective Address
.text:0000000143BA6760 E8 6B 20 EE FC                          call    sub_140A887D0   ; Call Procedure
.text:0000000143BA6765 90                                      nop                     ; No Operation
.text:0000000143BA6766
.text:0000000143BA6766                         loc_143BA6766:                          ; CODE XREF: sub_143BA47A0:loc_143BA64D9↑j
.text:0000000143BA6766                                                                 ; sub_143BA47A0+1D6B↑j ...
.text:0000000143BA6766 E9 88 02 00 00                          jmp     loc_143BA69F3   ; Jump
.text:0000000143BA676B                         ; ---------------------------------------------------------------------------
.text:0000000143BA676B
.text:0000000143BA676B                         loc_143BA676B:                          ; CODE XREF: sub_143BA47A0+1465↑j
.text:0000000143BA676B 48 8D 94 24 DC 07 00 00                 lea     rdx, [rsp+828h+var_4C] ; Load Effective Address
.text:0000000143BA6773 48 8B 8C 24 08 01 00 00                 mov     rcx, [rsp+828h+var_720]
.text:0000000143BA677B E8 80 A3 58 FF                          call    sub_143130B00   ; Call Procedure
.text:0000000143BA6780 48 8D 4C 24 50                          lea     rcx, [rsp+828h+var_7D8] ; Load Effective Address
.text:0000000143BA6785 48 8B F9                                mov     rdi, rcx
.text:0000000143BA6788 48 8B F0                                mov     rsi, rax
.text:0000000143BA678B B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA6790 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA6792 48 83 7C 24 40 00                       cmp     [rsp+828h+var_7E8], 0 ; Compare Two Operands
.text:0000000143BA6798 0F 84 55 02 00 00                       jz      loc_143BA69F3   ; Jump if Zero (ZF=1)
.text:0000000143BA679E 48 8B 4C 24 40                          mov     rcx, [rsp+828h+var_7E8]
.text:0000000143BA67A3 E8 D8 B2 EB FF                          call    sub_143A61A80   ; Call Procedure
.text:0000000143BA67A8 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA67AB 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA67AD 0F 84 40 02 00 00                       jz      loc_143BA69F3   ; Jump if Zero (ZF=1)
.text:0000000143BA67B3 F3 0F 10 44 24 58                       movss   xmm0, [rsp+828h+var_7D0] ; Move Scalar Single-FP
.text:0000000143BA67B9 F3 0F 11 44 24 20                       movss   dword ptr [rsp+828h+var_808], xmm0 ; Move Scalar Single-FP
.text:0000000143BA67BF F3 0F 10 5C 24 54                       movss   xmm3, [rsp+828h+var_7D4] ; Move Scalar Single-FP
.text:0000000143BA67C5 F3 0F 10 54 24 50                       movss   xmm2, [rsp+828h+var_7D8] ; Move Scalar Single-FP
.text:0000000143BA67CB 48 8D 15 76 AD B7 0C                    lea     rdx, aX33fY33fZ33f ; Load Effective Address
.text:0000000143BA67D2 48 8D 8C 24 F0 06 00 00                 lea     rcx, [rsp+828h+var_138] ; Load Effective Address
.text:0000000143BA67DA E8 E1 CC A8 FD                          call    sub_1416334C0   ; Call Procedure
.text:0000000143BA67DF 48 8D 84 24 F0 06 00 00                 lea     rax, [rsp+828h+var_138] ; Load Effective Address
.text:0000000143BA67E7 48 89 84 24 E0 05 00 00                 mov     [rsp+828h+var_248], rax
.text:0000000143BA67EF 48 8B 84 24 E0 05 00 00                 mov     rax, [rsp+828h+var_248]
.text:0000000143BA67F7 48 89 84 24 88 03 00 00                 mov     [rsp+828h+var_4A0], rax
.text:0000000143BA67FF 48 8B 84 24 88 03 00 00                 mov     rax, [rsp+828h+var_4A0]
.text:0000000143BA6807 8B 40 08                                mov     eax, [rax+8]
.text:0000000143BA680A 89 84 24 F8 01 00 00                    mov     [rsp+828h+var_630], eax
.text:0000000143BA6811 8B 84 24 F8 01 00 00                    mov     eax, [rsp+828h+var_630]
.text:0000000143BA6818 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA681A 74 3A                                   jz      short loc_143BA6856 ; Jump if Zero (ZF=1)
.text:0000000143BA681C 48 8B 84 24 88 03 00 00                 mov     rax, [rsp+828h+var_4A0]
.text:0000000143BA6824 48 8B C8                                mov     rcx, rax        ; _QWORD
.text:0000000143BA6827 E8 F4 99 F3 FC                          call    sub_140AE0220   ; Call Procedure
.text:0000000143BA682C 48 89 84 24 E8 05 00 00                 mov     [rsp+828h+var_240], rax
.text:0000000143BA6834 48 8B 84 24 E8 05 00 00                 mov     rax, [rsp+828h+var_240]
.text:0000000143BA683C 48 89 84 24 F0 05 00 00                 mov     [rsp+828h+var_238], rax
.text:0000000143BA6844 48 8B 84 24 F0 05 00 00                 mov     rax, [rsp+828h+var_238]
.text:0000000143BA684C 48 89 84 24 90 03 00 00                 mov     [rsp+828h+var_498], rax
.text:0000000143BA6854 EB 0F                                   jmp     short loc_143BA6865 ; Jump
.text:0000000143BA6856                         ; ---------------------------------------------------------------------------
.text:0000000143BA6856
.text:0000000143BA6856                         loc_143BA6856:                          ; CODE XREF: sub_143BA47A0+207A↑j
.text:0000000143BA6856 48 8D 05 FB 18 B2 0C                    lea     rax, word_1506C8158 ; Load Effective Address
.text:0000000143BA685D 48 89 84 24 90 03 00 00                 mov     [rsp+828h+var_498], rax
.text:0000000143BA6865
.text:0000000143BA6865                         loc_143BA6865:                          ; CODE XREF: sub_143BA47A0+20B4↑j
.text:0000000143BA6865 48 8B 84 24 90 03 00 00                 mov     rax, [rsp+828h+var_498]
.text:0000000143BA686D 48 89 84 24 F8 05 00 00                 mov     [rsp+828h+var_230], rax
.text:0000000143BA6875 48 8B 84 24 F8 05 00 00                 mov     rax, [rsp+828h+var_230]
.text:0000000143BA687D 4C 8B C0                                mov     r8, rax
.text:0000000143BA6880 48 8D 15 F9 30 95 0D                    lea     rdx, aJlfppGetcamera_2 ; Load Effective Address
.text:0000000143BA6887 48 8D 8C 24 40 04 00 00                 lea     rcx, [rsp+828h+var_3E8] ; Load Effective Address
.text:0000000143BA688F E8 DC 3B F3 FC                          call    sub_140ADA470   ; Call Procedure
.text:0000000143BA6894 48 8D 8C 24 F0 06 00 00                 lea     rcx, [rsp+828h+var_138] ; Load Effective Address
.text:0000000143BA689C E8 2F 1F EE FC                          call    sub_140A887D0   ; Call Procedure
.text:0000000143BA68A1 90                                      nop                     ; No Operation
.text:0000000143BA68A2 48 8D 0D C7 23 E7 12                    lea     rcx, qword_156A18C70 ; Load Effective Address
.text:0000000143BA68A9 E8 A2 2F EE FC                          call    sub_140A89850   ; Call Procedure
.text:0000000143BA68AE 48 8D 0D 7B 38 CA 12                    lea     rcx, qword_15684A130 ; Load Effective Address
.text:0000000143BA68B5 48 89 4C 24 30                          mov     [rsp+828h+var_7F8], rcx
.text:0000000143BA68BA C6 44 24 28 01                          mov     byte ptr [rsp+828h+var_800], 1
.text:0000000143BA68BF 48 8D 8C 24 40 04 00 00                 lea     rcx, [rsp+828h+var_3E8] ; Load Effective Address
.text:0000000143BA68C7 48 89 4C 24 20                          mov     [rsp+828h+var_808], rcx
.text:0000000143BA68CC 44 8B 0D 51 E6 9D 10                    mov     r9d, cs:dword_154584F24
.text:0000000143BA68D3 F3 0F 10 15 5D 67 B2 0C                 movss   xmm2, dword ptr cs:ymmword_1506CD020+18h ; Move Scalar Single-FP
.text:0000000143BA68DB BA FF FF FF FF                          mov     edx, 0FFFFFFFFh
.text:0000000143BA68E0 48 8B C8                                mov     rcx, rax
.text:0000000143BA68E3 E8 28 C1 ED FC                          call    nullsub_1       ; Call Procedure
.text:0000000143BA68E8 90                                      nop                     ; No Operation
.text:0000000143BA68E9 33 C0                                   xor     eax, eax        ; Logical Exclusive OR
.text:0000000143BA68EB 83 F8 01                                cmp     eax, 1          ; Compare Two Operands
.text:0000000143BA68EE 0F 84 F1 00 00 00                       jz      loc_143BA69E5   ; Jump if Zero (ZF=1)
.text:0000000143BA68F4 B8 06 00 00 00                          mov     eax, 6
.text:0000000143BA68F9 83 E0 0F                                and     eax, 0Fh        ; Logical AND
.text:0000000143BA68FC 48 8D 0D ED 61 42 13                    lea     rcx, byte_156FCCAF0 ; Load Effective Address
.text:0000000143BA6903 0F B6 09                                movzx   ecx, byte ptr [rcx] ; Move with Zero-Extend
.text:0000000143BA6906 3B C1                                   cmp     eax, ecx        ; Compare Two Operands
.text:0000000143BA6908 7F 07                                   jg      short loc_143BA6911 ; Jump if Greater (ZF=0 & SF=OF)
.text:0000000143BA690A C6 44 24 64 00                          mov     [rsp+828h+var_7C4], 0
.text:0000000143BA690F EB 05                                   jmp     short loc_143BA6916 ; Jump
.text:0000000143BA6911                         ; ---------------------------------------------------------------------------
.text:0000000143BA6911
.text:0000000143BA6911                         loc_143BA6911:                          ; CODE XREF: sub_143BA47A0+2168↑j
.text:0000000143BA6911 C6 44 24 64 01                          mov     [rsp+828h+var_7C4], 1
.text:0000000143BA6916
.text:0000000143BA6916                         loc_143BA6916:                          ; CODE XREF: sub_143BA47A0+216F↑j
.text:0000000143BA6916 0F B6 44 24 64                          movzx   eax, [rsp+828h+var_7C4] ; Move with Zero-Extend
.text:0000000143BA691B 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA691E 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA6920 0F 85 BF 00 00 00                       jnz     loc_143BA69E5   ; Jump if Not Zero (ZF=0)
.text:0000000143BA6926 8B 84 24 48 04 00 00                    mov     eax, [rsp+828h+var_3E0]
.text:0000000143BA692D 89 84 24 FC 01 00 00                    mov     [rsp+828h+var_62C], eax
.text:0000000143BA6934 8B 84 24 FC 01 00 00                    mov     eax, [rsp+828h+var_62C]
.text:0000000143BA693B 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA693D 74 3A                                   jz      short loc_143BA6979 ; Jump if Zero (ZF=1)
.text:0000000143BA693F 48 8D 84 24 40 04 00 00                 lea     rax, [rsp+828h+var_3E8] ; Load Effective Address
.text:0000000143BA6947 48 8B C8                                mov     rcx, rax        ; _QWORD
.text:0000000143BA694A E8 D1 98 F3 FC                          call    sub_140AE0220   ; Call Procedure
.text:0000000143BA694F 48 89 84 24 00 06 00 00                 mov     [rsp+828h+var_228], rax
.text:0000000143BA6957 48 8B 84 24 00 06 00 00                 mov     rax, [rsp+828h+var_228]
.text:0000000143BA695F 48 89 84 24 08 06 00 00                 mov     [rsp+828h+var_220], rax
.text:0000000143BA6967 48 8B 84 24 08 06 00 00                 mov     rax, [rsp+828h+var_220]
.text:0000000143BA696F 48 89 84 24 98 03 00 00                 mov     [rsp+828h+var_490], rax
.text:0000000143BA6977 EB 0F                                   jmp     short loc_143BA6988 ; Jump
.text:0000000143BA6979                         ; ---------------------------------------------------------------------------
.text:0000000143BA6979
.text:0000000143BA6979                         loc_143BA6979:                          ; CODE XREF: sub_143BA47A0+219D↑j
.text:0000000143BA6979 48 8D 05 D8 17 B2 0C                    lea     rax, word_1506C8158 ; Load Effective Address
.text:0000000143BA6980 48 89 84 24 98 03 00 00                 mov     [rsp+828h+var_490], rax
.text:0000000143BA6988
.text:0000000143BA6988                         loc_143BA6988:                          ; CODE XREF: sub_143BA47A0+21D7↑j
.text:0000000143BA6988 48 8B 84 24 98 03 00 00                 mov     rax, [rsp+828h+var_490]
.text:0000000143BA6990 48 89 84 24 10 06 00 00                 mov     [rsp+828h+var_218], rax
.text:0000000143BA6998 48 8B 84 24 10 06 00 00                 mov     rax, [rsp+828h+var_218]
.text:0000000143BA69A0 48 89 84 24 18 06 00 00                 mov     [rsp+828h+var_210], rax
.text:0000000143BA69A8 48 8D 0D 41 61 42 13                    lea     rcx, byte_156FCCAF0 ; Load Effective Address
.text:0000000143BA69AF E8 DC 36 F6 FC                          call    sub_140B0A090   ; Call Procedure
.text:0000000143BA69B4 48 8B 8C 24 18 06 00 00                 mov     rcx, [rsp+828h+var_210]
.text:0000000143BA69BC 48 89 4C 24 28                          mov     [rsp+828h+var_800], rcx
.text:0000000143BA69C1 48 8D 0D 74 27 B2 0C                    lea     rcx, aS         ; Load Effective Address
.text:0000000143BA69C8 48 89 4C 24 20                          mov     [rsp+828h+var_808], rcx
.text:0000000143BA69CD 41 B1 06                                mov     r9b, 6
.text:0000000143BA69D0 4C 8B C0                                mov     r8, rax
.text:0000000143BA69D3 BA 6F 0B 00 00                          mov     edx, 0B6Fh
.text:0000000143BA69D8 48 8D 0D 81 1D B2 0C                    lea     rcx, aUnknown   ; Load Effective Address
.text:0000000143BA69DF E8 1C 39 F3 FC                          call    sub_140ADA300   ; Call Procedure
.text:0000000143BA69E4 90                                      nop                     ; No Operation
.text:0000000143BA69E5
.text:0000000143BA69E5                         loc_143BA69E5:                          ; CODE XREF: sub_143BA47A0+214E↑j
.text:0000000143BA69E5                                                                 ; sub_143BA47A0+2180↑j
.text:0000000143BA69E5 48 8D 8C 24 40 04 00 00                 lea     rcx, [rsp+828h+var_3E8] ; Load Effective Address
.text:0000000143BA69ED E8 DE 1D EE FC                          call    sub_140A887D0   ; Call Procedure
.text:0000000143BA69F2 90                                      nop                     ; No Operation
.text:0000000143BA69F3
.text:0000000143BA69F3                         loc_143BA69F3:                          ; CODE XREF: sub_143BA47A0+112↑j
.text:0000000143BA69F3                                                                 ; sub_143BA47A0+125↑j ...
.text:0000000143BA69F3 48 8D 44 24 50                          lea     rax, [rsp+828h+var_7D8] ; Load Effective Address
.text:0000000143BA69F8 48 8B BC 24 38 08 00 00                 mov     rdi, [rsp+828h+arg_8]
.text:0000000143BA6A00 48 8B F0                                mov     rsi, rax
.text:0000000143BA6A03 B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA6A08 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA6A0A 48 8B 84 24 38 08 00 00                 mov     rax, [rsp+828h+arg_8]
.text:0000000143BA6A12 48 8B 8C 24 00 08 00 00                 mov     rcx, [rsp+828h+var_28]
.text:0000000143BA6A1A 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:0000000143BA6A1D E8 3E 94 6B 0C                          call    __security_check_cookie ; Call Procedure
.text:0000000143BA6A22 48 81 C4 18 08 00 00                    add     rsp, 818h       ; Add
.text:0000000143BA6A29 5F                                      pop     rdi
.text:0000000143BA6A2A 5E                                      pop     rsi
.text:0000000143BA6A2B C3                                      retn                    ; Return Near from Procedure
.text:0000000143BA6A2B                         sub_143BA47A0   endp
.text:0000000143BA6A2B
.text:0000000143BA6A2B                         ; ---------------------------------------------------------------------------
.text:0000000143BA6A2C CC CC CC CC                             align 10h

```
