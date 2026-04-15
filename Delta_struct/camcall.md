
---
camcall
---
Address								Function						  Instruction
.text:0000000143BA4664	sub_143BA4650	call    sub_143BAAA30; Call Procedure
	.text:0000000143BA4664 E8 C7 63 00 00                          call    sub_143BAAA30   ; Call Procedure








```asm

.text:0000000143BA4650                         sub_143BA4650   proc near               ; CODE XREF: sub_143BB0CC0+1C↓p
.text:0000000143BA4650                                                                 ; sub_143BBEB20+18↓p ...
.text:0000000143BA4650
.text:0000000143BA4650                         var_158         = dword ptr -158h
.text:0000000143BA4650                         var_150         = qword ptr -150h
.text:0000000143BA4650                         var_148         = qword ptr -148h
.text:0000000143BA4650                         var_140         = qword ptr -140h
.text:0000000143BA4650                         var_138         = byte ptr -138h
.text:0000000143BA4650                         var_F8          = byte ptr -0F8h
.text:0000000143BA4650                         arg_0           = qword ptr  8
.text:0000000143BA4650
.text:0000000143BA4650 48 89 4C 24 08                          mov     [rsp+8], rcx
.text:0000000143BA4655 48 81 EC 78 01 00 00                    sub     rsp, 178h       ; Integer Subtraction
.text:0000000143BA465C 48 8B 8C 24 80 01 00 00                 mov     rcx, [rsp+180h]
.text:0000000143BA4664 E8 C7 63 00 00                          call    sub_143BAAA30   ; Call Procedure
.text:0000000143BA4669 F3 0F 11 44 24 20                       movss   dword ptr [rsp+20h], xmm0 ; Move Scalar Single-FP
.text:0000000143BA466F 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA4677 F3 0F 10 44 24 20                       movss   xmm0, dword ptr [rsp+20h] ; Move Scalar Single-FP
.text:0000000143BA467D 0F 2E 80 10 DD 05 00                    ucomiss xmm0, dword ptr [rax+5DD10h] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.text:0000000143BA4684 75 13                                   jnz     short loc_143BA4699 ; Jump if Not Zero (ZF=0)
.text:0000000143BA4686 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA468E 48 05 20 DD 05 00                       add     rax, 5DD20h     ; Add
.text:0000000143BA4694 E9 F6 00 00 00                          jmp     loc_143BA478F   ; Jump

	call    sub_143BAAA30 
			.text:0000000143BAAA30                         sub_143BAAA30   proc near               ; CODE XREF: sub_143BA4650+14↑p
			.text:0000000143BAAA30                                                                 ; sub_1446CD930+14A↓p
			.text:0000000143BAAA30 F3 0F 10 81 E0 F2 02 00                 movss   xmm0, dword ptr [rcx+2F2E0h] ; Move Scalar Single-FP
			.text:0000000143BAAA38 C3                                      retn                    ; Return Near from Procedure
			.text:0000000143BAAA38                         sub_143BAAA30   endp
			.text:0000000143BAAA38


```
---
full Asm ArrayCam_call_follow
---
```c
float *__fastcall sub_143BA4650(float *a1)
{
  __int64 v2; // r8
  float v3; // [rsp+20h] [rbp-158h]
  _QWORD *v4; // [rsp+28h] [rbp-150h]
  __int64 v5; // [rsp+30h] [rbp-148h]
  char v6[64]; // [rsp+40h] [rbp-138h] BYREF
  char v7[248]; // [rsp+80h] [rbp-F8h] BYREF

  v3 = sub_143BAAA30(a1);
  if ( v3 == a1[0x17744] )
    return a1 + 0x17748;
  v5 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 0x6F0LL))(a1);
  if ( v5 )
  {
    v4 = (_QWORD *)sub_14E7D2260(v5);
    if ( v4 )
    {
      if ( v4[0xE] )
      {
        sub_140ADBF30(v7);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, _QWORD, char *))(*v4 + 0x2B0LL))(
               v4,
               *(_QWORD *)(v4[0xE] + 0xA0LL),
               0LL,
               v7) )
        {
          sub_140AEE980(v7, v6);
          LOBYTE(v2) = 1;
          sub_14E33E2D0(a1 + 0x17748, v6, v2);
          a1[0x17744] = v3;
        }
      }
    }
  }
  return a1 + 0x17748;
}


unsigned __int64 __fastcall sub_14E7D2260(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rax
  bool v3; // bp
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v18; // [rsp+50h] [rbp+8h]
  unsigned __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 0x3E8) >> 0x3E;
  v2 = *(_QWORD *)(a1 + 0x3E8);
  v3 = (v2 & 0x4000000000000000LL) != 0;
  v4 = HIWORD(v2) & 0x3FFF;
  if ( !v2 )
    goto LABEL_15;
  v5 = v2 & 0xFFFFFFFFFFFFLL;
  v6 = HIWORD(v2) & 0x3FFF;
  v19 = v2 & 0xFFFFFFFFFFFFLL;
  if ( (v2 & 0x8000000000000000uLL) == 0LL )
    goto LABEL_12;
  switch ( dword_15684A794 )
  {
    case 1:
      sub_140A8D910(qword_1573D8080, &v19, 4LL, HIWORD(v2) & 0x3FFF);
      goto LABEL_10;
    case 2:
      v7 = qword_1573D8088;
      v8 = (unsigned int)v6;
      break;
    case 3:
      v7 = *(&qword_1573D8090 + v6);
      v8 = (unsigned int)v6;
      break;
    default:
      goto LABEL_10;
  }
  (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64, _QWORD))(v7 + 0x40))(&v19, 4LL, v8, *(_QWORD *)(v7 + 8));
LABEL_10:
  v5 = v19 & 0xFFFFFFFFFFFFLL;
  if ( (v19 & 0x800000000000LL) != 0 )
    v5 = v19 & 0xFFFFFFFFFFFFLL | 0xFFFF000000000000uLL;
LABEL_12:
  if ( !v5
    || (v9 = sub_14EDD0B80(v6),
        v10 = *(_QWORD *)(v5 + 8),
        v11 = v9 + 0x30,
        v12 = *(int *)(v9 + 0x38),
        (int)v12 > *(_DWORD *)(v10 + 0x38))
    || *(_QWORD *)(*(_QWORD *)(v10 + 0x30) + 8 * v12) != v11 )
  {
LABEL_15:
    v5 = 0LL;
  }
  v13 = 0LL;
  if ( v5 )
  {
    if ( v3 && byte_1573D801B )
    {
      v19 = v5;
      switch ( dword_15684A794 )
      {
        case 1:
          sub_140A9C980(qword_1573D8080, &v19, 4LL, (unsigned int)v4);
          break;
        case 2:
          (*(void (__fastcall **)(unsigned __int64 *, __int64, _QWORD, _QWORD))(qword_1573D8088 + 0x38LL))(
            &v19,
            4LL,
            (unsigned int)v4,
            *(_QWORD *)(qword_1573D8088 + 8LL));
          break;
        case 3:
          (*(void (__fastcall **)(unsigned __int64 *, __int64, _QWORD, _QWORD))(*(&qword_1573D8090 + v4) + 0x38LL))(
            &v19,
            4LL,
            (unsigned int)v4,
            *(_QWORD *)(*(&qword_1573D8090 + v4) + 8LL));
          break;
      }
      v5 = v19;
      v13 = 2LL;
    }
    v18 = v5 | (((unsigned int)v4 | ((v13 | v1 & 1) << 0xE)) << 0x30);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
    return 0LL;
  v14 = v18 & 0xFFFFFFFFFFFFLL;
  v19 = v18 & 0xFFFFFFFFFFFFLL;
  if ( (v18 & 0x8000000000000000uLL) == 0LL )
    return v14;
  switch ( dword_15684A794 )
  {
    case 1:
      sub_140A8D910(qword_1573D8080, &v19, 4LL, HIWORD(v18) & 0x3FFF);
      goto LABEL_38;
    case 2:
      v15 = qword_1573D8088;
      v16 = HIWORD(v18) & 0x3FFF;
      break;
    case 3:
      v15 = *(&qword_1573D8090 + (HIWORD(v18) & 0x3FFF));
      v16 = HIWORD(v18) & 0x3FFF;
      break;
    default:
      goto LABEL_38;
  }
  (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64, _QWORD))(v15 + 0x40))(
    &v19,
    4LL,
    v16,
    *(_QWORD *)(v15 + 8));
LABEL_38:
  v14 = v19 & 0xFFFFFFFFFFFFLL;
  if ( (v19 & 0x800000000000LL) != 0 )
    return v19 & 0xFFFFFFFFFFFFLL | 0xFFFF000000000000uLL;
  return v14;
}

```
```asm

.text:0000000143BA4650
.text:0000000143BA4650                         ; =============== S U B R O U T I N E =======================================
.text:0000000143BA4650
.text:0000000143BA4650
.text:0000000143BA4650                         sub_143BA4650   proc near               ; CODE XREF: sub_143BB0CC0+1C↓p
.text:0000000143BA4650                                                                 ; sub_143BBEB20+18↓p ...
.text:0000000143BA4650
.text:0000000143BA4650                         var_158         = dword ptr -158h
.text:0000000143BA4650                         var_150         = qword ptr -150h
.text:0000000143BA4650                         var_148         = qword ptr -148h
.text:0000000143BA4650                         var_140         = qword ptr -140h
.text:0000000143BA4650                         var_138         = byte ptr -138h
.text:0000000143BA4650                         var_F8          = byte ptr -0F8h
.text:0000000143BA4650                         arg_0           = qword ptr  8
.text:0000000143BA4650
.text:0000000143BA4650 48 89 4C 24 08                          mov     [rsp+8], rcx
.text:0000000143BA4655 48 81 EC 78 01 00 00                    sub     rsp, 178h       ; Integer Subtraction
.text:0000000143BA465C 48 8B 8C 24 80 01 00 00                 mov     rcx, [rsp+180h]
.text:0000000143BA4664 E8 C7 63 00 00                          call    sub_143BAAA30   ; Call Procedure
.text:0000000143BA4669 F3 0F 11 44 24 20                       movss   dword ptr [rsp+20h], xmm0 ; Move Scalar Single-FP
.text:0000000143BA466F 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA4677 F3 0F 10 44 24 20                       movss   xmm0, dword ptr [rsp+20h] ; Move Scalar Single-FP
.text:0000000143BA467D 0F 2E 80 10 DD 05 00                    ucomiss xmm0, dword ptr [rax+5DD10h] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.text:0000000143BA4684 75 13                                   jnz     short loc_143BA4699 ; Jump if Not Zero (ZF=0)
.text:0000000143BA4686 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA468E 48 05 20 DD 05 00                       add     rax, 5DD20h     ; Add
.text:0000000143BA4694 E9 F6 00 00 00                          jmp     loc_143BA478F   ; Jump
.text:0000000143BA4699                         ; ---------------------------------------------------------------------------
.text:0000000143BA4699
.text:0000000143BA4699                         loc_143BA4699:                          ; CODE XREF: sub_143BA4650+34↑j
.text:0000000143BA4699 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA46A1 48 8B 00                                mov     rax, [rax]
.text:0000000143BA46A4 48 8B 8C 24 80 01 00 00                 mov     rcx, [rsp+180h]
.text:0000000143BA46AC FF 90 F0 06 00 00                       call    qword ptr [rax+6F0h] ; Indirect Call Near Procedure
.text:0000000143BA46B2 48 89 44 24 30                          mov     [rsp+30h], rax
.text:0000000143BA46B7 48 83 7C 24 30 00                       cmp     qword ptr [rsp+30h], 0 ; Compare Two Operands
.text:0000000143BA46BD 0F 84 BE 00 00 00                       jz      loc_143BA4781   ; Jump if Zero (ZF=1)
.text:0000000143BA46C3 48 8B 4C 24 30                          mov     rcx, [rsp+30h]
.text:0000000143BA46C8 E8 93 DB C2 0A                          call    sub_14E7D2260   ; Call Procedure
.text:0000000143BA46CD 48 89 44 24 28                          mov     [rsp+28h], rax
.text:0000000143BA46D2 48 83 7C 24 28 00                       cmp     qword ptr [rsp+28h], 0 ; Compare Two Operands
.text:0000000143BA46D8 0F 84 A3 00 00 00                       jz      loc_143BA4781   ; Jump if Zero (ZF=1)
.text:0000000143BA46DE 48 8B 44 24 28                          mov     rax, [rsp+28h]
.text:0000000143BA46E3 48 83 78 70 00                          cmp     qword ptr [rax+70h], 0 ; Compare Two Operands
.text:0000000143BA46E8 0F 84 93 00 00 00                       jz      loc_143BA4781   ; Jump if Zero (ZF=1)
.text:0000000143BA46EE 48 8D 8C 24 80 00 00 00                 lea     rcx, [rsp+80h]  ; Load Effective Address
.text:0000000143BA46F6 E8 35 78 F3 FC                          call    sub_140ADBF30   ; Call Procedure
.text:0000000143BA46FB 90                                      nop                     ; No Operation
.text:0000000143BA46FC 48 8B 44 24 28                          mov     rax, [rsp+28h]
.text:0000000143BA4701 48 8B 40 70                             mov     rax, [rax+70h]
.text:0000000143BA4705 48 8B 4C 24 28                          mov     rcx, [rsp+28h]
.text:0000000143BA470A 48 8B 09                                mov     rcx, [rcx]
.text:0000000143BA470D 48 89 4C 24 38                          mov     [rsp+38h], rcx
.text:0000000143BA4712 4C 8D 8C 24 80 00 00 00                 lea     r9, [rsp+80h]   ; Load Effective Address
.text:0000000143BA471A 45 33 C0                                xor     r8d, r8d        ; Logical Exclusive OR
.text:0000000143BA471D 48 8B 90 A0 00 00 00                    mov     rdx, [rax+0A0h]
.text:0000000143BA4724 48 8B 4C 24 28                          mov     rcx, [rsp+28h]
.text:0000000143BA4729 48 8B 44 24 38                          mov     rax, [rsp+38h]
.text:0000000143BA472E FF 90 B0 02 00 00                       call    qword ptr [rax+2B0h] ; Indirect Call Near Procedure
.text:0000000143BA4734 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA4737 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4739 74 46                                   jz      short loc_143BA4781 ; Jump if Zero (ZF=1)
.text:0000000143BA473B 48 8D 54 24 40                          lea     rdx, [rsp+40h]  ; Load Effective Address
.text:0000000143BA4740 48 8D 8C 24 80 00 00 00                 lea     rcx, [rsp+80h]  ; Load Effective Address
.text:0000000143BA4748 E8 33 A2 F4 FC                          call    sub_140AEE980   ; Call Procedure
.text:0000000143BA474D 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA4755 48 05 20 DD 05 00                       add     rax, 5DD20h     ; Add
.text:0000000143BA475B 41 B0 01                                mov     r8b, 1
.text:0000000143BA475E 48 8D 54 24 40                          lea     rdx, [rsp+40h]  ; Load Effective Address
.text:0000000143BA4763 48 8B C8                                mov     rcx, rax
.text:0000000143BA4766 E8 65 9B 79 0A                          call    sub_14E33E2D0   ; Call Procedure
.text:0000000143BA476B 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA4773 F3 0F 10 44 24 20                       movss   xmm0, dword ptr [rsp+20h] ; Move Scalar Single-FP
.text:0000000143BA4779 F3 0F 11 80 10 DD 05 00                 movss   dword ptr [rax+5DD10h], xmm0 ; Move Scalar Single-FP
.text:0000000143BA4781
.text:0000000143BA4781                         loc_143BA4781:                          ; CODE XREF: sub_143BA4650+6D↑j
.text:0000000143BA4781                                                                 ; sub_143BA4650+88↑j ...
.text:0000000143BA4781 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA4789 48 05 20 DD 05 00                       add     rax, 5DD20h     ; Add
.text:0000000143BA478F
.text:0000000143BA478F                         loc_143BA478F:                          ; CODE XREF: sub_143BA4650+44↑j
.text:0000000143BA478F 48 81 C4 78 01 00 00                    add     rsp, 178h       ; Add
.text:0000000143BA4796 C3                                      retn                    ; Return Near from Procedure
.text:0000000143BA4796                         sub_143BA4650   endp
.text:0000000143BA4796
.text:0000000143BA4796                         ; ---------------------------------------------------------------------------
.text:0000000143BA4797 CC CC CC CC CC CC CC CC…                align 20h
.text:0000000143BA47A0

//in call 


.text:0000000143BA95D0
.text:0000000143BA95D0                         ; =============== S U B R O U T I N E =======================================
.text:0000000143BA95D0
.text:0000000143BA95D0
.text:0000000143BA95D0                         sub_143BA95D0   proc near
.text:0000000143BA95D0
.text:0000000143BA95D0                         var_758         = dword ptr -758h
.text:0000000143BA95D0                         var_748         = qword ptr -748h
.text:0000000143BA95D0                         var_740         = qword ptr -740h
.text:0000000143BA95D0                         var_738         = byte ptr -738h
.text:0000000143BA95D0                         var_737         = byte ptr -737h
.text:0000000143BA95D0                         var_736         = byte ptr -736h
.text:0000000143BA95D0                         var_735         = byte ptr -735h
.text:0000000143BA95D0                         var_734         = byte ptr -734h
.text:0000000143BA95D0                         var_733         = byte ptr -733h
.text:0000000143BA95D0                         var_728         = xmmword ptr -728h
.text:0000000143BA95D0                         var_718         = qword ptr -718h
.text:0000000143BA95D0                         var_710         = dword ptr -710h
.text:0000000143BA95D0                         var_708         = qword ptr -708h
.text:0000000143BA95D0                         var_700         = qword ptr -700h
.text:0000000143BA95D0                         var_6F8         = qword ptr -6F8h
.text:0000000143BA95D0                         var_6F0         = qword ptr -6F0h
.text:0000000143BA95D0                         var_6E8         = qword ptr -6E8h
.text:0000000143BA95D0                         var_6E0         = byte ptr -6E0h
.text:0000000143BA95D0                         var_6DC         = dword ptr -6DCh
.text:0000000143BA95D0                         var_6D0         = qword ptr -6D0h
.text:0000000143BA95D0                         var_6C8         = qword ptr -6C8h
.text:0000000143BA95D0                         var_6C0         = qword ptr -6C0h
.text:0000000143BA95D0                         var_6B8         = qword ptr -6B8h
.text:0000000143BA95D0                         var_6B0         = qword ptr -6B0h
.text:0000000143BA95D0                         var_6A8         = qword ptr -6A8h
.text:0000000143BA95D0                         var_6A0         = qword ptr -6A0h
.text:0000000143BA95D0                         var_698         = qword ptr -698h
.text:0000000143BA95D0                         var_690         = qword ptr -690h
.text:0000000143BA95D0                         var_688         = dword ptr -688h
.text:0000000143BA95D0                         var_680         = dword ptr -680h
.text:0000000143BA95D0                         var_678         = dword ptr -678h
.text:0000000143BA95D0                         var_670         = qword ptr -670h
.text:0000000143BA95D0                         var_668         = qword ptr -668h
.text:0000000143BA95D0                         var_660         = qword ptr -660h
.text:0000000143BA95D0                         var_658         = qword ptr -658h
.text:0000000143BA95D0                         var_650         = qword ptr -650h
.text:0000000143BA95D0                         var_648         = dword ptr -648h
.text:0000000143BA95D0                         var_640         = dword ptr -640h
.text:0000000143BA95D0                         var_638         = qword ptr -638h
.text:0000000143BA95D0                         var_630         = qword ptr -630h
.text:0000000143BA95D0                         var_628         = qword ptr -628h
.text:0000000143BA95D0                         var_620         = qword ptr -620h
.text:0000000143BA95D0                         var_618         = qword ptr -618h
.text:0000000143BA95D0                         var_610         = qword ptr -610h
.text:0000000143BA95D0                         var_608         = qword ptr -608h
.text:0000000143BA95D0                         var_600         = qword ptr -600h
.text:0000000143BA95D0                         var_5F8         = qword ptr -5F8h
.text:0000000143BA95D0                         var_5F0         = qword ptr -5F0h
.text:0000000143BA95D0                         var_5E8         = qword ptr -5E8h
.text:0000000143BA95D0                         var_5E0         = qword ptr -5E0h
.text:0000000143BA95D0                         var_5D8         = qword ptr -5D8h
.text:0000000143BA95D0                         var_5D0         = dword ptr -5D0h
.text:0000000143BA95D0                         var_5CC         = dword ptr -5CCh
.text:0000000143BA95D0                         var_5C8         = dword ptr -5C8h
.text:0000000143BA95D0                         var_5C0         = dword ptr -5C0h
.text:0000000143BA95D0                         var_5BC         = dword ptr -5BCh
.text:0000000143BA95D0                         var_5B8         = dword ptr -5B8h
.text:0000000143BA95D0                         var_5B0         = dword ptr -5B0h
.text:0000000143BA95D0                         var_5AC         = dword ptr -5ACh
.text:0000000143BA95D0                         var_5A8         = dword ptr -5A8h
.text:0000000143BA95D0                         var_5A0         = qword ptr -5A0h
.text:0000000143BA95D0                         var_598         = qword ptr -598h
.text:0000000143BA95D0                         var_590         = qword ptr -590h
.text:0000000143BA95D0                         var_588         = qword ptr -588h
.text:0000000143BA95D0                         var_580         = qword ptr -580h
.text:0000000143BA95D0                         var_578         = qword ptr -578h
.text:0000000143BA95D0                         var_570         = qword ptr -570h
.text:0000000143BA95D0                         var_568         = qword ptr -568h
.text:0000000143BA95D0                         var_560         = qword ptr -560h
.text:0000000143BA95D0                         var_558         = qword ptr -558h
.text:0000000143BA95D0                         var_550         = qword ptr -550h
.text:0000000143BA95D0                         var_548         = qword ptr -548h
.text:0000000143BA95D0                         var_540         = qword ptr -540h
.text:0000000143BA95D0                         var_538         = qword ptr -538h
.text:0000000143BA95D0                         var_530         = qword ptr -530h
.text:0000000143BA95D0                         var_528         = qword ptr -528h
.text:0000000143BA95D0                         var_520         = qword ptr -520h
.text:0000000143BA95D0                         var_518         = qword ptr -518h
.text:0000000143BA95D0                         var_510         = qword ptr -510h
.text:0000000143BA95D0                         var_508         = qword ptr -508h
.text:0000000143BA95D0                         var_500         = byte ptr -500h
.text:0000000143BA95D0                         var_4FC         = dword ptr -4FCh
.text:0000000143BA95D0                         var_4F0         = qword ptr -4F0h
.text:0000000143BA95D0                         var_4E8         = qword ptr -4E8h
.text:0000000143BA95D0                         var_4E0         = qword ptr -4E0h
.text:0000000143BA95D0                         var_4D8         = qword ptr -4D8h
.text:0000000143BA95D0                         var_4D0         = qword ptr -4D0h
.text:0000000143BA95D0                         var_4C8         = xmmword ptr -4C8h
.text:0000000143BA95D0                         var_4B8         = xmmword ptr -4B8h
.text:0000000143BA95D0                         var_4A8         = xmmword ptr -4A8h
.text:0000000143BA95D0                         var_498         = xmmword ptr -498h
.text:0000000143BA95D0                         var_488         = xmmword ptr -488h
.text:0000000143BA95D0                         var_478         = xmmword ptr -478h
.text:0000000143BA95D0                         var_468         = xmmword ptr -468h
.text:0000000143BA95D0                         var_458         = xmmword ptr -458h
.text:0000000143BA95D0                         var_448         = xmmword ptr -448h
.text:0000000143BA95D0                         var_438         = xmmword ptr -438h
.text:0000000143BA95D0                         var_428         = xmmword ptr -428h
.text:0000000143BA95D0                         var_418         = xmmword ptr -418h
.text:0000000143BA95D0                         var_408         = xmmword ptr -408h
.text:0000000143BA95D0                         var_3F8         = xmmword ptr -3F8h
.text:0000000143BA95D0                         var_3E8         = xmmword ptr -3E8h
.text:0000000143BA95D0                         var_3D8         = xmmword ptr -3D8h
.text:0000000143BA95D0                         var_3C8         = xmmword ptr -3C8h
.text:0000000143BA95D0                         var_3B8         = xmmword ptr -3B8h
.text:0000000143BA95D0                         var_3A8         = xmmword ptr -3A8h
.text:0000000143BA95D0                         var_398         = xmmword ptr -398h
.text:0000000143BA95D0                         var_388         = xmmword ptr -388h
.text:0000000143BA95D0                         var_378         = xmmword ptr -378h
.text:0000000143BA95D0                         var_368         = xmmword ptr -368h
.text:0000000143BA95D0                         var_358         = xmmword ptr -358h
.text:0000000143BA95D0                         var_348         = xmmword ptr -348h
.text:0000000143BA95D0                         var_338         = xmmword ptr -338h
.text:0000000143BA95D0                         var_328         = xmmword ptr -328h
.text:0000000143BA95D0                         var_318         = xmmword ptr -318h
.text:0000000143BA95D0                         var_308         = xmmword ptr -308h
.text:0000000143BA95D0                         var_2F8         = xmmword ptr -2F8h
.text:0000000143BA95D0                         var_2E8         = xmmword ptr -2E8h
.text:0000000143BA95D0                         var_2D8         = xmmword ptr -2D8h
.text:0000000143BA95D0                         var_2C8         = xmmword ptr -2C8h
.text:0000000143BA95D0                         var_2B8         = xmmword ptr -2B8h
.text:0000000143BA95D0                         var_2A8         = xmmword ptr -2A8h
.text:0000000143BA95D0                         var_298         = xmmword ptr -298h
.text:0000000143BA95D0                         var_288         = xmmword ptr -288h
.text:0000000143BA95D0                         var_278         = xmmword ptr -278h
.text:0000000143BA95D0                         var_268         = xmmword ptr -268h
.text:0000000143BA95D0                         var_258         = xmmword ptr -258h
.text:0000000143BA95D0                         var_248         = xmmword ptr -248h
.text:0000000143BA95D0                         var_238         = xmmword ptr -238h
.text:0000000143BA95D0                         var_228         = xmmword ptr -228h
.text:0000000143BA95D0                         var_218         = xmmword ptr -218h
.text:0000000143BA95D0                         var_208         = xmmword ptr -208h
.text:0000000143BA95D0                         var_1F8         = xmmword ptr -1F8h
.text:0000000143BA95D0                         var_1E8         = xmmword ptr -1E8h
.text:0000000143BA95D0                         var_1D8         = xmmword ptr -1D8h
.text:0000000143BA95D0                         var_1C8         = xmmword ptr -1C8h
.text:0000000143BA95D0                         var_1B8         = xmmword ptr -1B8h
.text:0000000143BA95D0                         var_1A8         = xmmword ptr -1A8h
.text:0000000143BA95D0                         var_198         = xmmword ptr -198h
.text:0000000143BA95D0                         var_188         = xmmword ptr -188h
.text:0000000143BA95D0                         var_178         = xmmword ptr -178h
.text:0000000143BA95D0                         var_168         = xmmword ptr -168h
.text:0000000143BA95D0                         var_158         = xmmword ptr -158h
.text:0000000143BA95D0                         var_148         = byte ptr -148h
.text:0000000143BA95D0                         var_13C         = byte ptr -13Ch
.text:0000000143BA95D0                         var_130         = byte ptr -130h
.text:0000000143BA95D0                         var_118         = byte ptr -118h
.text:0000000143BA95D0                         var_D8          = byte ptr -0D8h
.text:0000000143BA95D0                         var_98          = byte ptr -98h
.text:0000000143BA95D0                         var_58          = byte ptr -58h
.text:0000000143BA95D0                         arg_0           = qword ptr  8
.text:0000000143BA95D0                         arg_8           = qword ptr  10h
.text:0000000143BA95D0                         arg_10          = qword ptr  18h
.text:0000000143BA95D0                         arg_18          = dword ptr  20h
.text:0000000143BA95D0
.text:0000000143BA95D0 F3 0F 11 5C 24 20                       movss   dword ptr [rsp+20h], xmm3 ; Move Scalar Single-FP
.text:0000000143BA95D6 4C 89 44 24 18                          mov     [rsp+18h], r8
.text:0000000143BA95DB 48 89 54 24 10                          mov     [rsp+10h], rdx
.text:0000000143BA95E0 48 89 4C 24 08                          mov     [rsp+8], rcx
.text:0000000143BA95E5 56                                      push    rsi
.text:0000000143BA95E6 57                                      push    rdi
.text:0000000143BA95E7 48 81 EC 68 07 00 00                    sub     rsp, 768h       ; Integer Subtraction
.text:0000000143BA95EE 48 8D 84 24 98 00 00 00                 lea     rax, [rsp+98h]  ; Load Effective Address
.text:0000000143BA95F6 48 8D 0D A3 36 80 13                    lea     rcx, xmmword_1573ACC98+8 ; Load Effective Address
.text:0000000143BA95FD 48 8B F8                                mov     rdi, rax
.text:0000000143BA9600 48 8B F1                                mov     rsi, rcx
.text:0000000143BA9603 B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA9608 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA960A 48 8B 84 24 90 07 00 00                 mov     rax, [rsp+790h]
.text:0000000143BA9612 48 8B 00                                mov     rax, [rax]
.text:0000000143BA9615 48 89 84 24 08 01 00 00                 mov     [rsp+108h], rax
.text:0000000143BA961D 48 83 BC 24 08 01 00 00                 cmp     qword ptr [rsp+108h], 0 ; Compare Two Operands
.text:0000000143BA961D 00
.text:0000000143BA9626 74 26                                   jz      short loc_143BA964E ; Jump if Zero (ZF=1)
.text:0000000143BA9628 48 8B 8C 24 08 01 00 00                 mov     rcx, [rsp+108h]
.text:0000000143BA9630 E8 DB F2 19 FF                          call    sub_142D48910   ; Call Procedure
.text:0000000143BA9635 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA9638 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA963A 74 12                                   jz      short loc_143BA964E ; Jump if Zero (ZF=1)
.text:0000000143BA963C 48 8B 84 24 08 01 00 00                 mov     rax, [rsp+108h]
.text:0000000143BA9644 48 89 84 24 98 01 00 00                 mov     [rsp+198h], rax
.text:0000000143BA964C EB 0C                                   jmp     short loc_143BA965A ; Jump
.text:0000000143BA964E                         ; ---------------------------------------------------------------------------
.text:0000000143BA964E
.text:0000000143BA964E                         loc_143BA964E:                          ; CODE XREF: sub_143BA95D0+56↑j
.text:0000000143BA964E                                                                 ; sub_143BA95D0+6A↑j
.text:0000000143BA964E 48 C7 84 24 98 01 00 00                 mov     qword ptr [rsp+198h], 0
.text:0000000143BA964E 00 00 00 00
.text:0000000143BA965A
.text:0000000143BA965A                         loc_143BA965A:                          ; CODE XREF: sub_143BA95D0+7C↑j
.text:0000000143BA965A 48 8B 84 24 98 01 00 00                 mov     rax, [rsp+198h]
.text:0000000143BA9662 48 89 84 24 08 02 00 00                 mov     [rsp+208h], rax
.text:0000000143BA966A 48 8B 84 24 08 02 00 00                 mov     rax, [rsp+208h]
.text:0000000143BA9672 48 89 84 24 70 02 00 00                 mov     [rsp+270h], rax
.text:0000000143BA967A 48 8B 84 24 70 02 00 00                 mov     rax, [rsp+270h]
.text:0000000143BA9682 48 89 44 24 60                          mov     [rsp+60h], rax
.text:0000000143BA9687 48 83 7C 24 60 00                       cmp     qword ptr [rsp+60h], 0 ; Compare Two Operands
.text:0000000143BA968D 0F 84 71 13 00 00                       jz      loc_143BAAA04   ; Jump if Zero (ZF=1)
.text:0000000143BA9693 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA9698 48 83 B8 F0 0F 00 00 00                 cmp     qword ptr [rax+0FF0h], 0 ; Compare Two Operands
.text:0000000143BA96A0 0F 84 5E 13 00 00                       jz      loc_143BAAA04   ; Jump if Zero (ZF=1)
.text:0000000143BA96A6 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA96AB 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA96B2 48 05 78 01 00 00                       add     rax, 178h       ; Add
.text:0000000143BA96B8 48 89 84 24 D8 01 00 00                 mov     [rsp+1D8h], rax
.text:0000000143BA96C0 48 8B 84 24 D8 01 00 00                 mov     rax, [rsp+1D8h]
.text:0000000143BA96C8 BA 02 00 00 00                          mov     edx, 2
.text:0000000143BA96CD 48 8B C8                                mov     rcx, rax
.text:0000000143BA96D0 E8 CB A1 6B FD                          call    sub_1412638A0   ; Call Procedure
.text:0000000143BA96D5 48 89 84 24 A8 00 00 00                 mov     [rsp+0A8h], rax
.text:0000000143BA96DD 48 83 BC 24 A8 00 00 00                 cmp     qword ptr [rsp+0A8h], 0 ; Compare Two Operands
.text:0000000143BA96DD 00
.text:0000000143BA96E6 75 11                                   jnz     short loc_143BA96F9 ; Jump if Not Zero (ZF=0)
.text:0000000143BA96E8 48 C7 84 24 48 01 00 00                 mov     qword ptr [rsp+148h], 0
.text:0000000143BA96E8 00 00 00 00
.text:0000000143BA96F4 E9 AF 01 00 00                          jmp     loc_143BA98A8   ; Jump
.text:0000000143BA96F9                         ; ---------------------------------------------------------------------------
.text:0000000143BA96F9
.text:0000000143BA96F9                         loc_143BA96F9:                          ; CODE XREF: sub_143BA95D0+116↑j
.text:0000000143BA96F9 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA96F9 00 00
.text:0000000143BA9703 48 8B 8C 24 A8 00 00 00                 mov     rcx, [rsp+0A8h]
.text:0000000143BA970B 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA970E 48 8B C1                                mov     rax, rcx
.text:0000000143BA9711 48 89 84 24 E0 01 00 00                 mov     [rsp+1E0h], rax
.text:0000000143BA9719 48 8B 84 24 A8 00 00 00                 mov     rax, [rsp+0A8h]
.text:0000000143BA9721 48 C1 E8 30                             shr     rax, 30h ; '0'  ; Shift Logical Right
.text:0000000143BA9725 48 25 FF 3F 00 00                       and     rax, 3FFFh      ; Logical AND
.text:0000000143BA972B 48 89 84 24 B0 00 00 00                 mov     [rsp+0B0h], rax
.text:0000000143BA9733 48 8B 84 24 A8 00 00 00                 mov     rax, [rsp+0A8h]
.text:0000000143BA973B 48 C1 E8 3F                             shr     rax, 3Fh        ; Shift Logical Right
.text:0000000143BA973F 48 83 E0 01                             and     rax, 1          ; Logical AND
.text:0000000143BA9743 88 44 24 40                             mov     [rsp+40h], al
.text:0000000143BA9747 48 8B 84 24 E0 01 00 00                 mov     rax, [rsp+1E0h]
.text:0000000143BA974F 48 89 84 24 90 00 00 00                 mov     [rsp+90h], rax
.text:0000000143BA9757 0F B6 44 24 40                          movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
.text:0000000143BA975C 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA975E 0F 84 24 01 00 00                       jz      loc_143BA9888   ; Jump if Zero (ZF=1)
.text:0000000143BA9764 48 C7 84 24 A0 02 00 00                 mov     qword ptr [rsp+2A0h], 4
.text:0000000143BA9764 04 00 00 00
.text:0000000143BA9770 83 3D 1D 10 CA 12 01                    cmp     cs:dword_15684A794, 1 ; Compare Two Operands
.text:0000000143BA9777 75 25                                   jnz     short loc_143BA979E ; Jump if Not Zero (ZF=0)
.text:0000000143BA9779 44 8B 8C 24 B0 00 00 00                 mov     r9d, [rsp+0B0h]
.text:0000000143BA9781 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9787 48 8D 94 24 90 00 00 00                 lea     rdx, [rsp+90h]  ; Load Effective Address
.text:0000000143BA978F 48 8B 0D EA E8 82 13                    mov     rcx, cs:qword_1573D8080
.text:0000000143BA9796 E8 75 41 EE FC                          call    sub_140A8D910   ; Call Procedure
.text:0000000143BA979B 90                                      nop                     ; No Operation
.text:0000000143BA979C EB 65                                   jmp     short loc_143BA9803 ; Jump
.text:0000000143BA979E                         ; ---------------------------------------------------------------------------
.text:0000000143BA979E
.text:0000000143BA979E                         loc_143BA979E:                          ; CODE XREF: sub_143BA95D0+1A7↑j
.text:0000000143BA979E 83 3D EF 0F CA 12 02                    cmp     cs:dword_15684A794, 2 ; Compare Two Operands
.text:0000000143BA97A5 75 25                                   jnz     short loc_143BA97CC ; Jump if Not Zero (ZF=0)
.text:0000000143BA97A7 44 8B 8C 24 B0 00 00 00                 mov     r9d, [rsp+0B0h]
.text:0000000143BA97AF 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA97B5 48 8D 94 24 90 00 00 00                 lea     rdx, [rsp+90h]  ; Load Effective Address
.text:0000000143BA97BD 48 8B 0D C4 E8 82 13                    mov     rcx, cs:qword_1573D8088
.text:0000000143BA97C4 E8 17 41 EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA97C9 90                                      nop                     ; No Operation
.text:0000000143BA97CA EB 37                                   jmp     short loc_143BA9803 ; Jump
.text:0000000143BA97CC                         ; ---------------------------------------------------------------------------
.text:0000000143BA97CC
.text:0000000143BA97CC                         loc_143BA97CC:                          ; CODE XREF: sub_143BA95D0+1D5↑j
.text:0000000143BA97CC 83 3D C1 0F CA 12 03                    cmp     cs:dword_15684A794, 3 ; Compare Two Operands
.text:0000000143BA97D3 75 2E                                   jnz     short loc_143BA9803 ; Jump if Not Zero (ZF=0)
.text:0000000143BA97D5 8B 84 24 B0 00 00 00                    mov     eax, [rsp+0B0h]
.text:0000000143BA97DC 48 8D 0D AD E8 82 13                    lea     rcx, qword_1573D8090 ; Load Effective Address
.text:0000000143BA97E3 44 8B 8C 24 B0 00 00 00                 mov     r9d, [rsp+0B0h]
.text:0000000143BA97EB 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA97F1 48 8D 94 24 90 00 00 00                 lea     rdx, [rsp+90h]  ; Load Effective Address
.text:0000000143BA97F9 48 8B 0C C1                             mov     rcx, [rcx+rax*8]
.text:0000000143BA97FD E8 DE 40 EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9802 90                                      nop                     ; No Operation
.text:0000000143BA9803
.text:0000000143BA9803                         loc_143BA9803:                          ; CODE XREF: sub_143BA95D0+1CC↑j
.text:0000000143BA9803                                                                 ; sub_143BA95D0+1FA↑j ...
.text:0000000143BA9803 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA9803 00 00
.text:0000000143BA980D 48 8B 8C 24 90 00 00 00                 mov     rcx, [rsp+90h]
.text:0000000143BA9815 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9818 48 8B C1                                mov     rax, rcx
.text:0000000143BA981B 48 89 84 24 10 01 00 00                 mov     [rsp+110h], rax
.text:0000000143BA9823 48 8B 84 24 10 01 00 00                 mov     rax, [rsp+110h]
.text:0000000143BA982B 48 C1 F8 2F                             sar     rax, 2Fh ; '/'  ; Shift Arithmetic Right
.text:0000000143BA982F 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA9832 75 12                                   jnz     short loc_143BA9846 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9834 48 8B 84 24 10 01 00 00                 mov     rax, [rsp+110h]
.text:0000000143BA983C 48 89 84 24 A0 01 00 00                 mov     [rsp+1A0h], rax
.text:0000000143BA9844 EB 20                                   jmp     short loc_143BA9866 ; Jump
.text:0000000143BA9846                         ; ---------------------------------------------------------------------------
.text:0000000143BA9846
.text:0000000143BA9846                         loc_143BA9846:                          ; CODE XREF: sub_143BA95D0+262↑j
.text:0000000143BA9846 48 B8 00 00 00 00 00 00                 mov     rax, 0FFFF000000000000h
.text:0000000143BA9846 FF FF
.text:0000000143BA9850 48 8B 8C 24 10 01 00 00                 mov     rcx, [rsp+110h]
.text:0000000143BA9858 48 0B C8                                or      rcx, rax        ; Logical Inclusive OR
.text:0000000143BA985B 48 8B C1                                mov     rax, rcx
.text:0000000143BA985E 48 89 84 24 A0 01 00 00                 mov     [rsp+1A0h], rax
.text:0000000143BA9866
.text:0000000143BA9866                         loc_143BA9866:                          ; CODE XREF: sub_143BA95D0+274↑j
.text:0000000143BA9866 48 8B 84 24 A0 01 00 00                 mov     rax, [rsp+1A0h]
.text:0000000143BA986E 48 89 84 24 E8 01 00 00                 mov     [rsp+1E8h], rax
.text:0000000143BA9876 48 8B 84 24 E8 01 00 00                 mov     rax, [rsp+1E8h]
.text:0000000143BA987E 48 89 84 24 40 01 00 00                 mov     [rsp+140h], rax
.text:0000000143BA9886 EB 10                                   jmp     short loc_143BA9898 ; Jump
.text:0000000143BA9888                         ; ---------------------------------------------------------------------------
.text:0000000143BA9888
.text:0000000143BA9888                         loc_143BA9888:                          ; CODE XREF: sub_143BA95D0+18E↑j
.text:0000000143BA9888 48 8B 84 24 90 00 00 00                 mov     rax, [rsp+90h]
.text:0000000143BA9890 48 89 84 24 40 01 00 00                 mov     [rsp+140h], rax
.text:0000000143BA9898
.text:0000000143BA9898                         loc_143BA9898:                          ; CODE XREF: sub_143BA95D0+2B6↑j
.text:0000000143BA9898 48 8B 84 24 40 01 00 00                 mov     rax, [rsp+140h]
.text:0000000143BA98A0 48 89 84 24 48 01 00 00                 mov     [rsp+148h], rax
.text:0000000143BA98A8
.text:0000000143BA98A8                         loc_143BA98A8:                          ; CODE XREF: sub_143BA95D0+124↑j
.text:0000000143BA98A8 48 8B 84 24 48 01 00 00                 mov     rax, [rsp+148h]
.text:0000000143BA98B0 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA98B3 74 0A                                   jz      short loc_143BA98BF ; Jump if Zero (ZF=1)
.text:0000000143BA98B5 C7 44 24 68 01 00 00 00                 mov     dword ptr [rsp+68h], 1
.text:0000000143BA98BD EB 08                                   jmp     short loc_143BA98C7 ; Jump
.text:0000000143BA98BF                         ; ---------------------------------------------------------------------------
.text:0000000143BA98BF
.text:0000000143BA98BF                         loc_143BA98BF:                          ; CODE XREF: sub_143BA95D0+2E3↑j
.text:0000000143BA98BF C7 44 24 68 00 00 00 00                 mov     dword ptr [rsp+68h], 0
.text:0000000143BA98C7
.text:0000000143BA98C7                         loc_143BA98C7:                          ; CODE XREF: sub_143BA95D0+2ED↑j
.text:0000000143BA98C7 0F B6 44 24 68                          movzx   eax, byte ptr [rsp+68h] ; Move with Zero-Extend
.text:0000000143BA98CC 88 44 24 41                             mov     [rsp+41h], al
.text:0000000143BA98D0 0F B6 44 24 41                          movzx   eax, byte ptr [rsp+41h] ; Move with Zero-Extend
.text:0000000143BA98D5 88 44 24 42                             mov     [rsp+42h], al
.text:0000000143BA98D9 0F B6 44 24 42                          movzx   eax, byte ptr [rsp+42h] ; Move with Zero-Extend
.text:0000000143BA98DE 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA98E1 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA98E3 0F 84 1B 11 00 00                       jz      loc_143BAAA04   ; Jump if Zero (ZF=1)
.text:0000000143BA98E9 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA98EE 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA98F5 48 05 70 01 00 00                       add     rax, 170h       ; Add
.text:0000000143BA98FB 48 89 84 24 F0 01 00 00                 mov     [rsp+1F0h], rax
.text:0000000143BA9903 48 8B 84 24 F0 01 00 00                 mov     rax, [rsp+1F0h]
.text:0000000143BA990B BA 02 00 00 00                          mov     edx, 2
.text:0000000143BA9910 48 8B C8                                mov     rcx, rax
.text:0000000143BA9913 E8 88 9F 6B FD                          call    sub_1412638A0   ; Call Procedure
.text:0000000143BA9918 48 89 84 24 B8 00 00 00                 mov     [rsp+0B8h], rax
.text:0000000143BA9920 48 83 BC 24 B8 00 00 00                 cmp     qword ptr [rsp+0B8h], 0 ; Compare Two Operands
.text:0000000143BA9920 00
.text:0000000143BA9929 75 11                                   jnz     short loc_143BA993C ; Jump if Not Zero (ZF=0)
.text:0000000143BA992B 48 C7 84 24 60 01 00 00                 mov     qword ptr [rsp+160h], 0
.text:0000000143BA992B 00 00 00 00
.text:0000000143BA9937 E9 9D 01 00 00                          jmp     loc_143BA9AD9   ; Jump
.text:0000000143BA993C                         ; ---------------------------------------------------------------------------
.text:0000000143BA993C
.text:0000000143BA993C                         loc_143BA993C:                          ; CODE XREF: sub_143BA95D0+359↑j
.text:0000000143BA993C 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA993C 00 00
.text:0000000143BA9946 48 8B 8C 24 B8 00 00 00                 mov     rcx, [rsp+0B8h]
.text:0000000143BA994E 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9951 48 8B C1                                mov     rax, rcx
.text:0000000143BA9954 48 89 84 24 F8 01 00 00                 mov     [rsp+1F8h], rax
.text:0000000143BA995C 48 8B 84 24 B8 00 00 00                 mov     rax, [rsp+0B8h]
.text:0000000143BA9964 48 C1 E8 30                             shr     rax, 30h        ; Shift Logical Right
.text:0000000143BA9968 48 25 FF 3F 00 00                       and     rax, 3FFFh      ; Logical AND
.text:0000000143BA996E 48 89 84 24 C0 00 00 00                 mov     [rsp+0C0h], rax
.text:0000000143BA9976 48 8B 84 24 B8 00 00 00                 mov     rax, [rsp+0B8h]
.text:0000000143BA997E 48 C1 E8 3F                             shr     rax, 3Fh        ; Shift Logical Right
.text:0000000143BA9982 48 83 E0 01                             and     rax, 1          ; Logical AND
.text:0000000143BA9986 88 44 24 43                             mov     [rsp+43h], al
.text:0000000143BA998A 48 8B 84 24 F8 01 00 00                 mov     rax, [rsp+1F8h]
.text:0000000143BA9992 48 89 44 24 70                          mov     [rsp+70h], rax
.text:0000000143BA9997 0F B6 44 24 43                          movzx   eax, byte ptr [rsp+43h] ; Move with Zero-Extend
.text:0000000143BA999C 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA999E 0F 84 18 01 00 00                       jz      loc_143BA9ABC   ; Jump if Zero (ZF=1)
.text:0000000143BA99A4 48 C7 84 24 A8 02 00 00                 mov     qword ptr [rsp+2A8h], 4
.text:0000000143BA99A4 04 00 00 00
.text:0000000143BA99B0 83 3D DD 0D CA 12 01                    cmp     cs:dword_15684A794, 1 ; Compare Two Operands
.text:0000000143BA99B7 75 22                                   jnz     short loc_143BA99DB ; Jump if Not Zero (ZF=0)
.text:0000000143BA99B9 44 8B 8C 24 C0 00 00 00                 mov     r9d, [rsp+0C0h]
.text:0000000143BA99C1 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA99C7 48 8D 54 24 70                          lea     rdx, [rsp+70h]  ; Load Effective Address
.text:0000000143BA99CC 48 8B 0D AD E6 82 13                    mov     rcx, cs:qword_1573D8080
.text:0000000143BA99D3 E8 38 3F EE FC                          call    sub_140A8D910   ; Call Procedure
.text:0000000143BA99D8 90                                      nop                     ; No Operation
.text:0000000143BA99D9 EB 5F                                   jmp     short loc_143BA9A3A ; Jump
.text:0000000143BA99DB                         ; ---------------------------------------------------------------------------
.text:0000000143BA99DB
.text:0000000143BA99DB                         loc_143BA99DB:                          ; CODE XREF: sub_143BA95D0+3E7↑j
.text:0000000143BA99DB 83 3D B2 0D CA 12 02                    cmp     cs:dword_15684A794, 2 ; Compare Two Operands
.text:0000000143BA99E2 75 22                                   jnz     short loc_143BA9A06 ; Jump if Not Zero (ZF=0)
.text:0000000143BA99E4 44 8B 8C 24 C0 00 00 00                 mov     r9d, [rsp+0C0h]
.text:0000000143BA99EC 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA99F2 48 8D 54 24 70                          lea     rdx, [rsp+70h]  ; Load Effective Address
.text:0000000143BA99F7 48 8B 0D 8A E6 82 13                    mov     rcx, cs:qword_1573D8088
.text:0000000143BA99FE E8 DD 3E EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9A03 90                                      nop                     ; No Operation
.text:0000000143BA9A04 EB 34                                   jmp     short loc_143BA9A3A ; Jump
.text:0000000143BA9A06                         ; ---------------------------------------------------------------------------
.text:0000000143BA9A06
.text:0000000143BA9A06                         loc_143BA9A06:                          ; CODE XREF: sub_143BA95D0+412↑j
.text:0000000143BA9A06 83 3D 87 0D CA 12 03                    cmp     cs:dword_15684A794, 3 ; Compare Two Operands
.text:0000000143BA9A0D 75 2B                                   jnz     short loc_143BA9A3A ; Jump if Not Zero (ZF=0)
.text:0000000143BA9A0F 8B 84 24 C0 00 00 00                    mov     eax, [rsp+0C0h]
.text:0000000143BA9A16 48 8D 0D 73 E6 82 13                    lea     rcx, qword_1573D8090 ; Load Effective Address
.text:0000000143BA9A1D 44 8B 8C 24 C0 00 00 00                 mov     r9d, [rsp+0C0h]
.text:0000000143BA9A25 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9A2B 48 8D 54 24 70                          lea     rdx, [rsp+70h]  ; Load Effective Address
.text:0000000143BA9A30 48 8B 0C C1                             mov     rcx, [rcx+rax*8]
.text:0000000143BA9A34 E8 A7 3E EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9A39 90                                      nop                     ; No Operation
.text:0000000143BA9A3A
.text:0000000143BA9A3A                         loc_143BA9A3A:                          ; CODE XREF: sub_143BA95D0+409↑j
.text:0000000143BA9A3A                                                                 ; sub_143BA95D0+434↑j ...
.text:0000000143BA9A3A 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA9A3A 00 00
.text:0000000143BA9A44 48 8B 4C 24 70                          mov     rcx, [rsp+70h]
.text:0000000143BA9A49 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9A4C 48 8B C1                                mov     rax, rcx
.text:0000000143BA9A4F 48 89 84 24 18 01 00 00                 mov     [rsp+118h], rax
.text:0000000143BA9A57 48 8B 84 24 18 01 00 00                 mov     rax, [rsp+118h]
.text:0000000143BA9A5F 48 C1 F8 2F                             sar     rax, 2Fh ; '/'  ; Shift Arithmetic Right
.text:0000000143BA9A63 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA9A66 75 12                                   jnz     short loc_143BA9A7A ; Jump if Not Zero (ZF=0)
.text:0000000143BA9A68 48 8B 84 24 18 01 00 00                 mov     rax, [rsp+118h]
.text:0000000143BA9A70 48 89 84 24 50 01 00 00                 mov     [rsp+150h], rax
.text:0000000143BA9A78 EB 20                                   jmp     short loc_143BA9A9A ; Jump
.text:0000000143BA9A7A                         ; ---------------------------------------------------------------------------
.text:0000000143BA9A7A
.text:0000000143BA9A7A                         loc_143BA9A7A:                          ; CODE XREF: sub_143BA95D0+496↑j
.text:0000000143BA9A7A 48 B8 00 00 00 00 00 00                 mov     rax, 0FFFF000000000000h
.text:0000000143BA9A7A FF FF
.text:0000000143BA9A84 48 8B 8C 24 18 01 00 00                 mov     rcx, [rsp+118h]
.text:0000000143BA9A8C 48 0B C8                                or      rcx, rax        ; Logical Inclusive OR
.text:0000000143BA9A8F 48 8B C1                                mov     rax, rcx
.text:0000000143BA9A92 48 89 84 24 50 01 00 00                 mov     [rsp+150h], rax
.text:0000000143BA9A9A
.text:0000000143BA9A9A                         loc_143BA9A9A:                          ; CODE XREF: sub_143BA95D0+4A8↑j
.text:0000000143BA9A9A 48 8B 84 24 50 01 00 00                 mov     rax, [rsp+150h]
.text:0000000143BA9AA2 48 89 84 24 00 02 00 00                 mov     [rsp+200h], rax
.text:0000000143BA9AAA 48 8B 84 24 00 02 00 00                 mov     rax, [rsp+200h]
.text:0000000143BA9AB2 48 89 84 24 58 01 00 00                 mov     [rsp+158h], rax
.text:0000000143BA9ABA EB 0D                                   jmp     short loc_143BA9AC9 ; Jump
.text:0000000143BA9ABC                         ; ---------------------------------------------------------------------------
.text:0000000143BA9ABC
.text:0000000143BA9ABC                         loc_143BA9ABC:                          ; CODE XREF: sub_143BA95D0+3CE↑j
.text:0000000143BA9ABC 48 8B 44 24 70                          mov     rax, [rsp+70h]
.text:0000000143BA9AC1 48 89 84 24 58 01 00 00                 mov     [rsp+158h], rax
.text:0000000143BA9AC9
.text:0000000143BA9AC9                         loc_143BA9AC9:                          ; CODE XREF: sub_143BA95D0+4EA↑j
.text:0000000143BA9AC9 48 8B 84 24 58 01 00 00                 mov     rax, [rsp+158h]
.text:0000000143BA9AD1 48 89 84 24 60 01 00 00                 mov     [rsp+160h], rax
.text:0000000143BA9AD9
.text:0000000143BA9AD9                         loc_143BA9AD9:                          ; CODE XREF: sub_143BA95D0+367↑j
.text:0000000143BA9AD9 48 8B 84 24 60 01 00 00                 mov     rax, [rsp+160h]
.text:0000000143BA9AE1 48 89 84 24 50 02 00 00                 mov     [rsp+250h], rax
.text:0000000143BA9AE9 48 8B 84 24 50 02 00 00                 mov     rax, [rsp+250h]
.text:0000000143BA9AF1 48 89 84 24 10 02 00 00                 mov     [rsp+210h], rax
.text:0000000143BA9AF9 48 8B 84 24 10 02 00 00                 mov     rax, [rsp+210h]
.text:0000000143BA9B01 48 89 84 24 88 00 00 00                 mov     [rsp+88h], rax
.text:0000000143BA9B09 48 83 BC 24 88 00 00 00                 cmp     qword ptr [rsp+88h], 0 ; Compare Two Operands
.text:0000000143BA9B09 00
.text:0000000143BA9B12 0F 84 EC 0E 00 00                       jz      loc_143BAAA04   ; Jump if Zero (ZF=1)
.text:0000000143BA9B18 48 8B 84 24 88 00 00 00                 mov     rax, [rsp+88h]
.text:0000000143BA9B20 80 B8 F0 0B 00 00 01                    cmp     byte ptr [rax+0BF0h], 1 ; Compare Two Operands
.text:0000000143BA9B27 0F 85 AF 00 00 00                       jnz     loc_143BA9BDC   ; Jump if Not Zero (ZF=0)
.text:0000000143BA9B2D 45 33 C9                                xor     r9d, r9d        ; Logical Exclusive OR
.text:0000000143BA9B30 48 8B 84 24 80 07 00 00                 mov     rax, [rsp+780h]
.text:0000000143BA9B38 4C 8B 80 50 D9 05 00                    mov     r8, [rax+5D950h]
.text:0000000143BA9B3F 48 8D 94 24 78 02 00 00                 lea     rdx, [rsp+278h] ; Load Effective Address
.text:0000000143BA9B47 48 8B 8C 24 88 00 00 00                 mov     rcx, [rsp+88h]
.text:0000000143BA9B4F E8 DC 77 58 FF                          call    sub_143131330   ; Call Procedure
.text:0000000143BA9B54 90                                      nop                     ; No Operation
.text:0000000143BA9B55 48 8B 84 24 90 07 00 00                 mov     rax, [rsp+790h]
.text:0000000143BA9B5D 48 83 C0 20                             add     rax, 20h        ; Add
.text:0000000143BA9B61 F3 0F 10 05 E7 DA 35 0D                 movss   xmm0, cs:dword_150F07650 ; Move Scalar Single-FP
.text:0000000143BA9B69 F3 0F 11 44 24 20                       movss   dword ptr [rsp+20h], xmm0 ; Move Scalar Single-FP
.text:0000000143BA9B6F F3 0F 10 9C 24 98 07 00                 movss   xmm3, dword ptr [rsp+798h] ; Move Scalar Single-FP
.text:0000000143BA9B6F 00
.text:0000000143BA9B78 4C 8D 84 24 78 02 00 00                 lea     r8, [rsp+278h]  ; Load Effective Address
.text:0000000143BA9B80 48 8B D0                                mov     rdx, rax
.text:0000000143BA9B83 48 8D 8C 24 30 06 00 00                 lea     rcx, [rsp+630h] ; Load Effective Address
.text:0000000143BA9B8B E8 D0 9F C8 08                          call    sub_14C833B60   ; Call Procedure
.text:0000000143BA9B90 48 8D 8C 24 98 00 00 00                 lea     rcx, [rsp+98h]  ; Load Effective Address
.text:0000000143BA9B98 48 8B F9                                mov     rdi, rcx
.text:0000000143BA9B9B 48 8B F0                                mov     rsi, rax
.text:0000000143BA9B9E B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA9BA3 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA9BA5 F3 0F 10 84 24 7C 02 00                 movss   xmm0, dword ptr [rsp+27Ch] ; Move Scalar Single-FP
.text:0000000143BA9BA5 00
.text:0000000143BA9BAE F3 0F 11 84 24 9C 00 00                 movss   dword ptr [rsp+9Ch], xmm0 ; Move Scalar Single-FP
.text:0000000143BA9BAE 00
.text:0000000143BA9BB7 48 8B 84 24 80 07 00 00                 mov     rax, [rsp+780h]
.text:0000000143BA9BBF 48 8B 8C 24 80 07 00 00                 mov     rcx, [rsp+780h]
.text:0000000143BA9BC7 F3 0F 10 81 AC D8 05 00                 movss   xmm0, dword ptr [rcx+5D8ACh] ; Move Scalar Single-FP
.text:0000000143BA9BCF F3 0F 11 80 B0 D8 05 00                 movss   dword ptr [rax+5D8B0h], xmm0 ; Move Scalar Single-FP
.text:0000000143BA9BD7 E9 28 0E 00 00                          jmp     loc_143BAAA04   ; Jump
.text:0000000143BA9BDC                         ; ---------------------------------------------------------------------------
.text:0000000143BA9BDC
.text:0000000143BA9BDC                         loc_143BA9BDC:                          ; CODE XREF: sub_143BA95D0+557↑j
.text:0000000143BA9BDC 0F B6 05 86 2B 42 13                    movzx   eax, cs:byte_156FCC769 ; Move with Zero-Extend
.text:0000000143BA9BE3 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA9BE5 75 2E                                   jnz     short loc_143BA9C15 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9BE7 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA9BEC 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA9BF3 0F B6 80 18 03 00 00                    movzx   eax, byte ptr [rax+318h] ; Move with Zero-Extend
.text:0000000143BA9BFA 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA9BFC 75 17                                   jnz     short loc_143BA9C15 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9BFE 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA9C03 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA9C0A 0F B6 80 21 04 00 00                    movzx   eax, byte ptr [rax+421h] ; Move with Zero-Extend
.text:0000000143BA9C11 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA9C13 74 41                                   jz      short loc_143BA9C56 ; Jump if Zero (ZF=1)
.text:0000000143BA9C15
.text:0000000143BA9C15                         loc_143BA9C15:                          ; CODE XREF: sub_143BA95D0+615↑j
.text:0000000143BA9C15                                                                 ; sub_143BA95D0+62C↑j
.text:0000000143BA9C15 45 33 C9                                xor     r9d, r9d        ; Logical Exclusive OR
.text:0000000143BA9C18 48 8B 84 24 80 07 00 00                 mov     rax, [rsp+780h]
.text:0000000143BA9C20 4C 8B 80 50 D9 05 00                    mov     r8, [rax+5D950h]
.text:0000000143BA9C27 48 8D 94 24 3C 06 00 00                 lea     rdx, [rsp+63Ch] ; Load Effective Address
.text:0000000143BA9C2F 48 8B 8C 24 88 00 00 00                 mov     rcx, [rsp+88h]
.text:0000000143BA9C37 E8 F4 76 58 FF                          call    sub_143131330   ; Call Procedure
.text:0000000143BA9C3C 48 8D 8C 24 98 00 00 00                 lea     rcx, [rsp+98h]  ; Load Effective Address
.text:0000000143BA9C44 48 8B F9                                mov     rdi, rcx
.text:0000000143BA9C47 48 8B F0                                mov     rsi, rax
.text:0000000143BA9C4A B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA9C4F F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA9C51 E9 AE 0D 00 00                          jmp     loc_143BAAA04   ; Jump
.text:0000000143BA9C56                         ; ---------------------------------------------------------------------------
.text:0000000143BA9C56
.text:0000000143BA9C56                         loc_143BA9C56:                          ; CODE XREF: sub_143BA95D0+643↑j
.text:0000000143BA9C56 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA9C5B 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA9C62 48 05 78 01 00 00                       add     rax, 178h       ; Add
.text:0000000143BA9C68 48 89 84 24 18 02 00 00                 mov     [rsp+218h], rax
.text:0000000143BA9C70 48 8B 84 24 18 02 00 00                 mov     rax, [rsp+218h]
.text:0000000143BA9C78 BA 02 00 00 00                          mov     edx, 2
.text:0000000143BA9C7D 48 8B C8                                mov     rcx, rax
.text:0000000143BA9C80 E8 1B 9C 6B FD                          call    sub_1412638A0   ; Call Procedure
.text:0000000143BA9C85 48 89 84 24 C8 00 00 00                 mov     [rsp+0C8h], rax
.text:0000000143BA9C8D 48 83 BC 24 C8 00 00 00                 cmp     qword ptr [rsp+0C8h], 0 ; Compare Two Operands
.text:0000000143BA9C8D 00
.text:0000000143BA9C96 75 11                                   jnz     short loc_143BA9CA9 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9C98 48 C7 84 24 78 01 00 00                 mov     qword ptr [rsp+178h], 0
.text:0000000143BA9C98 00 00 00 00
.text:0000000143BA9CA4 E9 9D 01 00 00                          jmp     loc_143BA9E46   ; Jump
.text:0000000143BA9CA9                         ; ---------------------------------------------------------------------------
.text:0000000143BA9CA9
.text:0000000143BA9CA9                         loc_143BA9CA9:                          ; CODE XREF: sub_143BA95D0+6C6↑j
.text:0000000143BA9CA9 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA9CA9 00 00
.text:0000000143BA9CB3 48 8B 8C 24 C8 00 00 00                 mov     rcx, [rsp+0C8h]
.text:0000000143BA9CBB 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9CBE 48 8B C1                                mov     rax, rcx
.text:0000000143BA9CC1 48 89 84 24 20 02 00 00                 mov     [rsp+220h], rax
.text:0000000143BA9CC9 48 8B 84 24 C8 00 00 00                 mov     rax, [rsp+0C8h]
.text:0000000143BA9CD1 48 C1 E8 30                             shr     rax, 30h ; '0'  ; Shift Logical Right
.text:0000000143BA9CD5 48 25 FF 3F 00 00                       and     rax, 3FFFh      ; Logical AND
.text:0000000143BA9CDB 48 89 84 24 D0 00 00 00                 mov     [rsp+0D0h], rax
.text:0000000143BA9CE3 48 8B 84 24 C8 00 00 00                 mov     rax, [rsp+0C8h]
.text:0000000143BA9CEB 48 C1 E8 3F                             shr     rax, 3Fh        ; Shift Logical Right
.text:0000000143BA9CEF 48 83 E0 01                             and     rax, 1          ; Logical AND
.text:0000000143BA9CF3 88 44 24 44                             mov     [rsp+44h], al
.text:0000000143BA9CF7 48 8B 84 24 20 02 00 00                 mov     rax, [rsp+220h]
.text:0000000143BA9CFF 48 89 44 24 78                          mov     [rsp+78h], rax
.text:0000000143BA9D04 0F B6 44 24 44                          movzx   eax, byte ptr [rsp+44h] ; Move with Zero-Extend
.text:0000000143BA9D09 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA9D0B 0F 84 18 01 00 00                       jz      loc_143BA9E29   ; Jump if Zero (ZF=1)
.text:0000000143BA9D11 48 C7 84 24 90 02 00 00                 mov     qword ptr [rsp+290h], 4
.text:0000000143BA9D11 04 00 00 00
.text:0000000143BA9D1D 83 3D 70 0A CA 12 01                    cmp     cs:dword_15684A794, 1 ; Compare Two Operands
.text:0000000143BA9D24 75 22                                   jnz     short loc_143BA9D48 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9D26 44 8B 8C 24 D0 00 00 00                 mov     r9d, [rsp+0D0h]
.text:0000000143BA9D2E 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9D34 48 8D 54 24 78                          lea     rdx, [rsp+78h]  ; Load Effective Address
.text:0000000143BA9D39 48 8B 0D 40 E3 82 13                    mov     rcx, cs:qword_1573D8080
.text:0000000143BA9D40 E8 CB 3B EE FC                          call    sub_140A8D910   ; Call Procedure
.text:0000000143BA9D45 90                                      nop                     ; No Operation
.text:0000000143BA9D46 EB 5F                                   jmp     short loc_143BA9DA7 ; Jump
.text:0000000143BA9D48                         ; ---------------------------------------------------------------------------
.text:0000000143BA9D48
.text:0000000143BA9D48                         loc_143BA9D48:                          ; CODE XREF: sub_143BA95D0+754↑j
.text:0000000143BA9D48 83 3D 45 0A CA 12 02                    cmp     cs:dword_15684A794, 2 ; Compare Two Operands
.text:0000000143BA9D4F 75 22                                   jnz     short loc_143BA9D73 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9D51 44 8B 8C 24 D0 00 00 00                 mov     r9d, [rsp+0D0h]
.text:0000000143BA9D59 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9D5F 48 8D 54 24 78                          lea     rdx, [rsp+78h]  ; Load Effective Address
.text:0000000143BA9D64 48 8B 0D 1D E3 82 13                    mov     rcx, cs:qword_1573D8088
.text:0000000143BA9D6B E8 70 3B EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9D70 90                                      nop                     ; No Operation
.text:0000000143BA9D71 EB 34                                   jmp     short loc_143BA9DA7 ; Jump
.text:0000000143BA9D73                         ; ---------------------------------------------------------------------------
.text:0000000143BA9D73
.text:0000000143BA9D73                         loc_143BA9D73:                          ; CODE XREF: sub_143BA95D0+77F↑j
.text:0000000143BA9D73 83 3D 1A 0A CA 12 03                    cmp     cs:dword_15684A794, 3 ; Compare Two Operands
.text:0000000143BA9D7A 75 2B                                   jnz     short loc_143BA9DA7 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9D7C 8B 84 24 D0 00 00 00                    mov     eax, [rsp+0D0h]
.text:0000000143BA9D83 48 8D 0D 06 E3 82 13                    lea     rcx, qword_1573D8090 ; Load Effective Address
.text:0000000143BA9D8A 44 8B 8C 24 D0 00 00 00                 mov     r9d, [rsp+0D0h]
.text:0000000143BA9D92 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9D98 48 8D 54 24 78                          lea     rdx, [rsp+78h]  ; Load Effective Address
.text:0000000143BA9D9D 48 8B 0C C1                             mov     rcx, [rcx+rax*8]
.text:0000000143BA9DA1 E8 3A 3B EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9DA6 90                                      nop                     ; No Operation
.text:0000000143BA9DA7
.text:0000000143BA9DA7                         loc_143BA9DA7:                          ; CODE XREF: sub_143BA95D0+776↑j
.text:0000000143BA9DA7                                                                 ; sub_143BA95D0+7A1↑j ...
.text:0000000143BA9DA7 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA9DA7 00 00
.text:0000000143BA9DB1 48 8B 4C 24 78                          mov     rcx, [rsp+78h]
.text:0000000143BA9DB6 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9DB9 48 8B C1                                mov     rax, rcx
.text:0000000143BA9DBC 48 89 84 24 20 01 00 00                 mov     [rsp+120h], rax
.text:0000000143BA9DC4 48 8B 84 24 20 01 00 00                 mov     rax, [rsp+120h]
.text:0000000143BA9DCC 48 C1 F8 2F                             sar     rax, 2Fh        ; Shift Arithmetic Right
.text:0000000143BA9DD0 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA9DD3 75 12                                   jnz     short loc_143BA9DE7 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9DD5 48 8B 84 24 20 01 00 00                 mov     rax, [rsp+120h]
.text:0000000143BA9DDD 48 89 84 24 68 01 00 00                 mov     [rsp+168h], rax
.text:0000000143BA9DE5 EB 20                                   jmp     short loc_143BA9E07 ; Jump
.text:0000000143BA9DE7                         ; ---------------------------------------------------------------------------
.text:0000000143BA9DE7
.text:0000000143BA9DE7                         loc_143BA9DE7:                          ; CODE XREF: sub_143BA95D0+803↑j
.text:0000000143BA9DE7 48 B8 00 00 00 00 00 00                 mov     rax, 0FFFF000000000000h
.text:0000000143BA9DE7 FF FF
.text:0000000143BA9DF1 48 8B 8C 24 20 01 00 00                 mov     rcx, [rsp+120h]
.text:0000000143BA9DF9 48 0B C8                                or      rcx, rax        ; Logical Inclusive OR
.text:0000000143BA9DFC 48 8B C1                                mov     rax, rcx
.text:0000000143BA9DFF 48 89 84 24 68 01 00 00                 mov     [rsp+168h], rax
.text:0000000143BA9E07
.text:0000000143BA9E07                         loc_143BA9E07:                          ; CODE XREF: sub_143BA95D0+815↑j
.text:0000000143BA9E07 48 8B 84 24 68 01 00 00                 mov     rax, [rsp+168h]
.text:0000000143BA9E0F 48 89 84 24 28 02 00 00                 mov     [rsp+228h], rax
.text:0000000143BA9E17 48 8B 84 24 28 02 00 00                 mov     rax, [rsp+228h]
.text:0000000143BA9E1F 48 89 84 24 70 01 00 00                 mov     [rsp+170h], rax
.text:0000000143BA9E27 EB 0D                                   jmp     short loc_143BA9E36 ; Jump
.text:0000000143BA9E29                         ; ---------------------------------------------------------------------------
.text:0000000143BA9E29
.text:0000000143BA9E29                         loc_143BA9E29:                          ; CODE XREF: sub_143BA95D0+73B↑j
.text:0000000143BA9E29 48 8B 44 24 78                          mov     rax, [rsp+78h]
.text:0000000143BA9E2E 48 89 84 24 70 01 00 00                 mov     [rsp+170h], rax
.text:0000000143BA9E36
.text:0000000143BA9E36                         loc_143BA9E36:                          ; CODE XREF: sub_143BA95D0+857↑j
.text:0000000143BA9E36 48 8B 84 24 70 01 00 00                 mov     rax, [rsp+170h]
.text:0000000143BA9E3E 48 89 84 24 78 01 00 00                 mov     [rsp+178h], rax
.text:0000000143BA9E46
.text:0000000143BA9E46                         loc_143BA9E46:                          ; CODE XREF: sub_143BA95D0+6D4↑j
.text:0000000143BA9E46 48 8B 84 24 78 01 00 00                 mov     rax, [rsp+178h]
.text:0000000143BA9E4E 48 89 84 24 48 02 00 00                 mov     [rsp+248h], rax
.text:0000000143BA9E56 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA9E5B 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA9E62 48 05 78 01 00 00                       add     rax, 178h       ; Add
.text:0000000143BA9E68 48 89 84 24 30 02 00 00                 mov     [rsp+230h], rax
.text:0000000143BA9E70 48 8B 84 24 30 02 00 00                 mov     rax, [rsp+230h]
.text:0000000143BA9E78 BA 02 00 00 00                          mov     edx, 2
.text:0000000143BA9E7D 48 8B C8                                mov     rcx, rax
.text:0000000143BA9E80 E8 1B 9A 6B FD                          call    sub_1412638A0   ; Call Procedure
.text:0000000143BA9E85 48 89 84 24 D8 00 00 00                 mov     [rsp+0D8h], rax
.text:0000000143BA9E8D 48 83 BC 24 D8 00 00 00                 cmp     qword ptr [rsp+0D8h], 0 ; Compare Two Operands
.text:0000000143BA9E8D 00
.text:0000000143BA9E96 75 11                                   jnz     short loc_143BA9EA9 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9E98 48 C7 84 24 90 01 00 00                 mov     qword ptr [rsp+190h], 0
.text:0000000143BA9E98 00 00 00 00
.text:0000000143BA9EA4 E9 AF 01 00 00                          jmp     loc_143BAA058   ; Jump
.text:0000000143BA9EA9                         ; ---------------------------------------------------------------------------
.text:0000000143BA9EA9
.text:0000000143BA9EA9                         loc_143BA9EA9:                          ; CODE XREF: sub_143BA95D0+8C6↑j
.text:0000000143BA9EA9 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA9EA9 00 00
.text:0000000143BA9EB3 48 8B 8C 24 D8 00 00 00                 mov     rcx, [rsp+0D8h]
.text:0000000143BA9EBB 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9EBE 48 8B C1                                mov     rax, rcx
.text:0000000143BA9EC1 48 89 84 24 38 02 00 00                 mov     [rsp+238h], rax
.text:0000000143BA9EC9 48 8B 84 24 D8 00 00 00                 mov     rax, [rsp+0D8h]
.text:0000000143BA9ED1 48 C1 E8 30                             shr     rax, 30h        ; Shift Logical Right
.text:0000000143BA9ED5 48 25 FF 3F 00 00                       and     rax, 3FFFh      ; Logical AND
.text:0000000143BA9EDB 48 89 84 24 E0 00 00 00                 mov     [rsp+0E0h], rax
.text:0000000143BA9EE3 48 8B 84 24 D8 00 00 00                 mov     rax, [rsp+0D8h]
.text:0000000143BA9EEB 48 C1 E8 3F                             shr     rax, 3Fh ; '?'  ; Shift Logical Right
.text:0000000143BA9EEF 48 83 E0 01                             and     rax, 1          ; Logical AND
.text:0000000143BA9EF3 88 44 24 45                             mov     [rsp+45h], al
.text:0000000143BA9EF7 48 8B 84 24 38 02 00 00                 mov     rax, [rsp+238h]
.text:0000000143BA9EFF 48 89 84 24 80 00 00 00                 mov     [rsp+80h], rax
.text:0000000143BA9F07 0F B6 44 24 45                          movzx   eax, byte ptr [rsp+45h] ; Move with Zero-Extend
.text:0000000143BA9F0C 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA9F0E 0F 84 24 01 00 00                       jz      loc_143BAA038   ; Jump if Zero (ZF=1)
.text:0000000143BA9F14 48 C7 84 24 98 02 00 00                 mov     qword ptr [rsp+298h], 4
.text:0000000143BA9F14 04 00 00 00
.text:0000000143BA9F20 83 3D 6D 08 CA 12 01                    cmp     cs:dword_15684A794, 1 ; Compare Two Operands
.text:0000000143BA9F27 75 25                                   jnz     short loc_143BA9F4E ; Jump if Not Zero (ZF=0)
.text:0000000143BA9F29 44 8B 8C 24 E0 00 00 00                 mov     r9d, [rsp+0E0h]
.text:0000000143BA9F31 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9F37 48 8D 94 24 80 00 00 00                 lea     rdx, [rsp+80h]  ; Load Effective Address
.text:0000000143BA9F3F 48 8B 0D 3A E1 82 13                    mov     rcx, cs:qword_1573D8080
.text:0000000143BA9F46 E8 C5 39 EE FC                          call    sub_140A8D910   ; Call Procedure
.text:0000000143BA9F4B 90                                      nop                     ; No Operation
.text:0000000143BA9F4C EB 65                                   jmp     short loc_143BA9FB3 ; Jump
.text:0000000143BA9F4E                         ; ---------------------------------------------------------------------------
.text:0000000143BA9F4E
.text:0000000143BA9F4E                         loc_143BA9F4E:                          ; CODE XREF: sub_143BA95D0+957↑j
.text:0000000143BA9F4E 83 3D 3F 08 CA 12 02                    cmp     cs:dword_15684A794, 2 ; Compare Two Operands
.text:0000000143BA9F55 75 25                                   jnz     short loc_143BA9F7C ; Jump if Not Zero (ZF=0)
.text:0000000143BA9F57 44 8B 8C 24 E0 00 00 00                 mov     r9d, [rsp+0E0h]
.text:0000000143BA9F5F 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9F65 48 8D 94 24 80 00 00 00                 lea     rdx, [rsp+80h]  ; Load Effective Address
.text:0000000143BA9F6D 48 8B 0D 14 E1 82 13                    mov     rcx, cs:qword_1573D8088
.text:0000000143BA9F74 E8 67 39 EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9F79 90                                      nop                     ; No Operation
.text:0000000143BA9F7A EB 37                                   jmp     short loc_143BA9FB3 ; Jump
.text:0000000143BA9F7C                         ; ---------------------------------------------------------------------------
.text:0000000143BA9F7C
.text:0000000143BA9F7C                         loc_143BA9F7C:                          ; CODE XREF: sub_143BA95D0+985↑j
.text:0000000143BA9F7C 83 3D 11 08 CA 12 03                    cmp     cs:dword_15684A794, 3 ; Compare Two Operands
.text:0000000143BA9F83 75 2E                                   jnz     short loc_143BA9FB3 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9F85 8B 84 24 E0 00 00 00                    mov     eax, [rsp+0E0h]
.text:0000000143BA9F8C 48 8D 0D FD E0 82 13                    lea     rcx, qword_1573D8090 ; Load Effective Address
.text:0000000143BA9F93 44 8B 8C 24 E0 00 00 00                 mov     r9d, [rsp+0E0h]
.text:0000000143BA9F9B 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9FA1 48 8D 94 24 80 00 00 00                 lea     rdx, [rsp+80h]  ; Load Effective Address
.text:0000000143BA9FA9 48 8B 0C C1                             mov     rcx, [rcx+rax*8]
.text:0000000143BA9FAD E8 2E 39 EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9FB2 90                                      nop                     ; No Operation
.text:0000000143BA9FB3
.text:0000000143BA9FB3                         loc_143BA9FB3:                          ; CODE XREF: sub_143BA95D0+97C↑j
.text:0000000143BA9FB3                                                                 ; sub_143BA95D0+9AA↑j ...
.text:0000000143BA9FB3 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA9FB3 00 00
.text:0000000143BA9FBD 48 8B 8C 24 80 00 00 00                 mov     rcx, [rsp+80h]
.text:0000000143BA9FC5 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9FC8 48 8B C1                                mov     rax, rcx
.text:0000000143BA9FCB 48 89 84 24 28 01 00 00                 mov     [rsp+128h], rax
.text:0000000143BA9FD3 48 8B 84 24 28 01 00 00                 mov     rax, [rsp+128h]
.text:0000000143BA9FDB 48 C1 F8 2F                             sar     rax, 2Fh ; '/'  ; Shift Arithmetic Right
.text:0000000143BA9FDF 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA9FE2 75 12                                   jnz     short loc_143BA9FF6 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9FE4 48 8B 84 24 28 01 00 00                 mov     rax, [rsp+128h]
.text:0000000143BA9FEC 48 89 84 24 80 01 00 00                 mov     [rsp+180h], rax
.text:0000000143BA9FF4 EB 20                                   jmp     short loc_143BAA016 ; Jump
.text:0000000143BA9FF6                         ; ---------------------------------------------------------------------------
.text:0000000143BA9FF6
.text:0000000143BA9FF6                         loc_143BA9FF6:                          ; CODE XREF: sub_143BA95D0+A12↑j
.text:0000000143BA9FF6 48 B8 00 00 00 00 00 00                 mov     rax, 0FFFF000000000000h
.text:0000000143BA9FF6 FF FF
.text:0000000143BAA000 48 8B 8C 24 28 01 00 00                 mov     rcx, [rsp+128h]
.text:0000000143BAA008 48 0B C8                                or      rcx, rax        ; Logical Inclusive OR
.text:0000000143BAA00B 48 8B C1                                mov     rax, rcx
.text:0000000143BAA00E 48 89 84 24 80 01 00 00                 mov     [rsp+180h], rax
.text:0000000143BAA016
.text:0000000143BAA016                         loc_143BAA016:                          ; CODE XREF: sub_143BA95D0+A24↑j
.text:0000000143BAA016 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BAA01E 48 89 84 24 40 02 00 00                 mov     [rsp+240h], rax
.text:0000000143BAA026 48 8B 84 24 40 02 00 00                 mov     rax, [rsp+240h]
.text:0000000143BAA02E 48 89 84 24 88 01 00 00                 mov     [rsp+188h], rax
.text:0000000143BAA036 EB 10                                   jmp     short loc_143BAA048 ; Jump
.text:0000000143BAA038                         ; ---------------------------------------------------------------------------
.text:0000000143BAA038
.text:0000000143BAA038                         loc_143BAA038:                          ; CODE XREF: sub_143BA95D0+93E↑j
.text:0000000143BAA038 48 8B 84 24 80 00 00 00                 mov     rax, [rsp+80h]
.text:0000000143BAA040 48 89 84 24 88 01 00 00                 mov     [rsp+188h], rax
.text:0000000143BAA048
.text:0000000143BAA048                         loc_143BAA048:                          ; CODE XREF: sub_143BA95D0+A66↑j
.text:0000000143BAA048 48 8B 84 24 88 01 00 00                 mov     rax, [rsp+188h]
.text:0000000143BAA050 48 89 84 24 90 01 00 00                 mov     [rsp+190h], rax
.text:0000000143BAA058
.text:0000000143BAA058                         loc_143BAA058:                          ; CODE XREF: sub_143BA95D0+8D4↑j
.text:0000000143BAA058 48 8B 84 24 90 01 00 00                 mov     rax, [rsp+190h]
.text:0000000143BAA060 48 89 84 24 88 02 00 00                 mov     [rsp+288h], rax
.text:0000000143BAA068 48 8B 84 24 48 02 00 00                 mov     rax, [rsp+248h]
.text:0000000143BAA070 F3 0F 10 80 E8 01 00 00                 movss   xmm0, dword ptr [rax+1E8h] ; Move Scalar Single-FP
.text:0000000143BAA078 F3 0F 11 84 24 F8 00 00                 movss   dword ptr [rsp+0F8h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA078 00
.text:0000000143BAA081 48 8B 84 24 88 02 00 00                 mov     rax, [rsp+288h]
.text:0000000143BAA089 F3 0F 10 80 E4 01 00 00                 movss   xmm0, dword ptr [rax+1E4h] ; Move Scalar Single-FP
.text:0000000143BAA091 F3 0F 11 84 24 F0 00 00                 movss   dword ptr [rsp+0F0h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA091 00
.text:0000000143BAA09A F3 0F 10 84 24 F0 00 00                 movss   xmm0, dword ptr [rsp+0F0h] ; Move Scalar Single-FP
.text:0000000143BAA09A 00
.text:0000000143BAA0A3 F3 0F 11 84 24 A8 01 00                 movss   dword ptr [rsp+1A8h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA0A3 00
.text:0000000143BAA0AC F3 0F 10 84 24 F8 00 00                 movss   xmm0, dword ptr [rsp+0F8h] ; Move Scalar Single-FP
.text:0000000143BAA0AC 00
.text:0000000143BAA0B5 F3 0F 11 84 24 AC 01 00                 movss   dword ptr [rsp+1ACh], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA0B5 00
.text:0000000143BAA0BE 0F 57 C0                                xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.text:0000000143BAA0C1 F3 0F 11 84 24 B0 01 00                 movss   dword ptr [rsp+1B0h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA0C1 00
.text:0000000143BAA0CA 48 8D 84 24 A8 01 00 00                 lea     rax, [rsp+1A8h] ; Load Effective Address
.text:0000000143BAA0D2 48 89 84 24 58 02 00 00                 mov     [rsp+258h], rax
.text:0000000143BAA0DA 48 8D 84 24 98 00 00 00                 lea     rax, [rsp+98h]  ; Load Effective Address
.text:0000000143BAA0E2 48 8B F8                                mov     rdi, rax
.text:0000000143BAA0E5 48 8B B4 24 58 02 00 00                 mov     rsi, [rsp+258h]
.text:0000000143BAA0ED B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BAA0F2 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BAA0F4 41 B9 03 00 00 00                       mov     r9d, 3
.text:0000000143BAA0FA 48 8B 84 24 80 07 00 00                 mov     rax, [rsp+780h]
.text:0000000143BAA102 4C 8B 80 48 D9 05 00                    mov     r8, [rax+5D948h]
.text:0000000143BAA109 48 8D 94 24 B8 01 00 00                 lea     rdx, [rsp+1B8h] ; Load Effective Address
.text:0000000143BAA111 48 8B 8C 24 88 00 00 00                 mov     rcx, [rsp+88h]
.text:0000000143BAA119 E8 12 72 58 FF                          call    sub_143131330   ; Call Procedure
.text:0000000143BAA11E F3 0F 10 84 24 B8 01 00                 movss   xmm0, dword ptr [rsp+1B8h] ; Move Scalar Single-FP
.text:0000000143BAA11E 00
.text:0000000143BAA127 F3 0F 11 84 24 00 01 00                 movss   dword ptr [rsp+100h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA127 00
.text:0000000143BAA130 F3 0F 10 84 24 BC 01 00                 movss   xmm0, dword ptr [rsp+1BCh] ; Move Scalar Single-FP
.text:0000000143BAA130 00
.text:0000000143BAA139 F3 0F 11 84 24 30 01 00                 movss   dword ptr [rsp+130h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA139 00
.text:0000000143BAA142 F3 0F 10 84 24 C0 01 00                 movss   xmm0, dword ptr [rsp+1C0h] ; Move Scalar Single-FP
.text:0000000143BAA142 00
.text:0000000143BAA14B 0F 57 05 BE D5 B1 0C                    xorps   xmm0, cs:xmmword_1506C7710 ; Bitwise Logical XOR for Single-FP Data
.text:0000000143BAA152 F3 0F 11 84 24 38 01 00                 movss   dword ptr [rsp+138h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA152 00
.text:0000000143BAA15B F3 0F 10 84 24 38 01 00                 movss   xmm0, dword ptr [rsp+138h] ; Move Scalar Single-FP
.text:0000000143BAA15B 00
.text:0000000143BAA164 F3 0F 11 84 24 C8 01 00                 movss   dword ptr [rsp+1C8h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA164 00
.text:0000000143BAA16D F3 0F 10 84 24 30 01 00                 movss   xmm0, dword ptr [rsp+130h] ; Move Scalar Single-FP
.text:0000000143BAA16D 00
.text:0000000143BAA176 F3 0F 11 84 24 CC 01 00                 movss   dword ptr [rsp+1CCh], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA176 00
.text:0000000143BAA17F F3 0F 10 84 24 00 01 00                 movss   xmm0, dword ptr [rsp+100h] ; Move Scalar Single-FP
.text:0000000143BAA17F 00
.text:0000000143BAA188 F3 0F 11 84 24 D0 01 00                 movss   dword ptr [rsp+1D0h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA188 00
.text:0000000143BAA191 48 8D 94 24 C8 01 00 00                 lea     rdx, [rsp+1C8h] ; Load Effective Address
.text:0000000143BAA199 48 8D 8C 24 60 06 00 00                 lea     rcx, [rsp+660h] ; Load Effective Address
.text:0000000143BAA1A1 E8 BA 50 19 FD                          call    sub_140D3F260   ; Call Procedure
.text:0000000143BAA1A6 90                                      nop                     ; No Operation
.text:0000000143BAA1A7 48 8D 94 24 98 00 00 00                 lea     rdx, [rsp+98h]  ; Load Effective Address
.text:0000000143BAA1AF 48 8D 8C 24 20 07 00 00                 lea     rcx, [rsp+720h] ; Load Effective Address
.text:0000000143BAA1B7 E8 A4 50 19 FD                          call    sub_140D3F260   ; Call Procedure
.text:0000000143BAA1BC 48 89 84 24 60 02 00 00                 mov     [rsp+260h], rax
.text:0000000143BAA1C4 48 8D 84 24 60 06 00 00                 lea     rax, [rsp+660h] ; Load Effective Address
.text:0000000143BAA1CC 48 89 44 24 30                          mov     [rsp+30h], rax
.text:0000000143BAA1D1 48 8B 84 24 60 02 00 00                 mov     rax, [rsp+260h]
.text:0000000143BAA1D9 48 89 44 24 38                          mov     [rsp+38h], rax
.text:0000000143BAA1DE 48 8D 84 24 A0 06 00 00                 lea     rax, [rsp+6A0h] ; Load Effective Address
.text:0000000143BAA1E6 48 89 84 24 E8 00 00 00                 mov     [rsp+0E8h], rax
.text:0000000143BAA1EE B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA1F3 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA1F7 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA1FC 48 6B C9 00                             imul    rcx, 0          ; Signed Multiply
.text:0000000143BAA200 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA205 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA20A 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA20E 0F C6 04 07 00                          shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.text:0000000143BAA213 0F 29 84 24 B0 02 00 00                 movaps  xmmword ptr [rsp+2B0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA21B B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA220 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA224 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA229 0F 28 84 24 B0 02 00 00                 movaps  xmm0, xmmword ptr [rsp+2B0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA231 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA235 0F 29 84 24 C0 02 00 00                 movaps  xmmword ptr [rsp+2C0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA23D 0F 28 84 24 C0 02 00 00                 movaps  xmm0, xmmword ptr [rsp+2C0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA245 0F 29 84 24 D0 02 00 00                 movaps  xmmword ptr [rsp+2D0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA24D 0F 28 84 24 D0 02 00 00                 movaps  xmm0, xmmword ptr [rsp+2D0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA255 0F 29 84 24 E0 02 00 00                 movaps  xmmword ptr [rsp+2E0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA25D 0F 28 84 24 E0 02 00 00                 movaps  xmm0, xmmword ptr [rsp+2E0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA265 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA26A B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA26F 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA273 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA278 48 6B C9 00                             imul    rcx, 0          ; Signed Multiply
.text:0000000143BAA27C 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA281 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA286 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA28A 0F C6 04 07 55                          shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.text:0000000143BAA28F 0F 29 84 24 F0 02 00 00                 movaps  xmmword ptr [rsp+2F0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA297 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA29C 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA2A0 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA2A5 0F 28 84 24 F0 02 00 00                 movaps  xmm0, xmmword ptr [rsp+2F0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA2AD 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA2B1 0F 29 84 24 00 03 00 00                 movaps  xmmword ptr [rsp+300h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA2B9 0F 28 84 24 00 03 00 00                 movaps  xmm0, xmmword ptr [rsp+300h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA2C1 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA2C6 0F 29 84 24 10 03 00 00                 movaps  xmmword ptr [rsp+310h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA2CE 0F 28 84 24 10 03 00 00                 movaps  xmm0, xmmword ptr [rsp+310h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA2D6 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA2DB B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA2E0 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA2E4 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA2E9 48 6B C9 00                             imul    rcx, 0          ; Signed Multiply
.text:0000000143BAA2ED 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA2F2 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA2F7 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA2FB 0F C6 04 07 AA                          shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.text:0000000143BAA300 0F 29 84 24 20 03 00 00                 movaps  xmmword ptr [rsp+320h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA308 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA30D 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA311 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA316 0F 28 84 24 20 03 00 00                 movaps  xmm0, xmmword ptr [rsp+320h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA31E 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA322 0F 29 84 24 30 03 00 00                 movaps  xmmword ptr [rsp+330h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA32A 0F 28 84 24 30 03 00 00                 movaps  xmm0, xmmword ptr [rsp+330h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA332 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA337 0F 29 84 24 40 03 00 00                 movaps  xmmword ptr [rsp+340h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA33F 0F 28 84 24 40 03 00 00                 movaps  xmm0, xmmword ptr [rsp+340h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA347 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA34C B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA351 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA355 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA35A 48 6B C9 00                             imul    rcx, 0          ; Signed Multiply
.text:0000000143BAA35E 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA363 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA368 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA36C 0F C6 04 07 FF                          shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.text:0000000143BAA371 0F 29 84 24 50 03 00 00                 movaps  xmmword ptr [rsp+350h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA379 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA37E 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA382 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA387 0F 28 84 24 50 03 00 00                 movaps  xmm0, xmmword ptr [rsp+350h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA38F 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA393 0F 29 84 24 60 03 00 00                 movaps  xmmword ptr [rsp+360h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA39B 0F 28 84 24 60 03 00 00                 movaps  xmm0, xmmword ptr [rsp+360h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA3A3 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA3A8 0F 29 84 24 70 03 00 00                 movaps  xmmword ptr [rsp+370h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA3B0 0F 28 84 24 70 03 00 00                 movaps  xmm0, xmmword ptr [rsp+370h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA3B8 0F 29 84 24 F0 05 00 00                 movaps  xmmword ptr [rsp+5F0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA3C0 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA3C5 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA3C9 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA3CE 48 6B C9 01                             imul    rcx, 1          ; Signed Multiply
.text:0000000143BAA3D2 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA3D7 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA3DC 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA3E0 0F C6 04 07 00                          shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.text:0000000143BAA3E5 0F 29 84 24 80 03 00 00                 movaps  xmmword ptr [rsp+380h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA3ED B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA3F2 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA3F6 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA3FB 0F 28 84 24 80 03 00 00                 movaps  xmm0, xmmword ptr [rsp+380h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA403 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA407 0F 29 84 24 90 03 00 00                 movaps  xmmword ptr [rsp+390h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA40F 0F 28 84 24 90 03 00 00                 movaps  xmm0, xmmword ptr [rsp+390h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA417 0F 29 84 24 A0 03 00 00                 movaps  xmmword ptr [rsp+3A0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA41F 0F 28 84 24 A0 03 00 00                 movaps  xmm0, xmmword ptr [rsp+3A0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA427 0F 29 84 24 B0 03 00 00                 movaps  xmmword ptr [rsp+3B0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA42F 0F 28 84 24 B0 03 00 00                 movaps  xmm0, xmmword ptr [rsp+3B0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA437 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA43C B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA441 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA445 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA44A 48 6B C9 01                             imul    rcx, 1          ; Signed Multiply
.text:0000000143BAA44E 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA453 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA458 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA45C 0F C6 04 07 55                          shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.text:0000000143BAA461 0F 29 84 24 C0 03 00 00                 movaps  xmmword ptr [rsp+3C0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA469 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA46E 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA472 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA477 0F 28 84 24 C0 03 00 00                 movaps  xmm0, xmmword ptr [rsp+3C0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA47F 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA483 0F 29 84 24 D0 03 00 00                 movaps  xmmword ptr [rsp+3D0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA48B 0F 28 84 24 D0 03 00 00                 movaps  xmm0, xmmword ptr [rsp+3D0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA493 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA498 0F 29 84 24 E0 03 00 00                 movaps  xmmword ptr [rsp+3E0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA4A0 0F 28 84 24 E0 03 00 00                 movaps  xmm0, xmmword ptr [rsp+3E0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA4A8 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA4AD B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA4B2 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA4B6 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA4BB 48 6B C9 01                             imul    rcx, 1          ; Signed Multiply
.text:0000000143BAA4BF 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA4C4 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA4C9 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA4CD 0F C6 04 07 AA                          shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.text:0000000143BAA4D2 0F 29 84 24 F0 03 00 00                 movaps  xmmword ptr [rsp+3F0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA4DA B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA4DF 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA4E3 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA4E8 0F 28 84 24 F0 03 00 00                 movaps  xmm0, xmmword ptr [rsp+3F0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA4F0 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA4F4 0F 29 84 24 00 04 00 00                 movaps  xmmword ptr [rsp+400h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA4FC 0F 28 84 24 00 04 00 00                 movaps  xmm0, xmmword ptr [rsp+400h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA504 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA509 0F 29 84 24 10 04 00 00                 movaps  xmmword ptr [rsp+410h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA511 0F 28 84 24 10 04 00 00                 movaps  xmm0, xmmword ptr [rsp+410h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA519 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA51E B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA523 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA527 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA52C 48 6B C9 01                             imul    rcx, 1          ; Signed Multiply
.text:0000000143BAA530 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA535 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA53A 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA53E 0F C6 04 07 FF                          shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.text:0000000143BAA543 0F 29 84 24 20 04 00 00                 movaps  xmmword ptr [rsp+420h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA54B B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA550 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA554 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA559 0F 28 84 24 20 04 00 00                 movaps  xmm0, xmmword ptr [rsp+420h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA561 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA565 0F 29 84 24 30 04 00 00                 movaps  xmmword ptr [rsp+430h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA56D 0F 28 84 24 30 04 00 00                 movaps  xmm0, xmmword ptr [rsp+430h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA575 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA57A 0F 29 84 24 40 04 00 00                 movaps  xmmword ptr [rsp+440h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA582 0F 28 84 24 40 04 00 00                 movaps  xmm0, xmmword ptr [rsp+440h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA58A 0F 29 84 24 00 06 00 00                 movaps  xmmword ptr [rsp+600h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA592 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA597 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA59B B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA5A0 48 6B C9 02                             imul    rcx, 2          ; Signed Multiply
.text:0000000143BAA5A4 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA5A9 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA5AE 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA5B2 0F C6 04 07 00                          shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.text:0000000143BAA5B7 0F 29 84 24 50 04 00 00                 movaps  xmmword ptr [rsp+450h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA5BF B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA5C4 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA5C8 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA5CD 0F 28 84 24 50 04 00 00                 movaps  xmm0, xmmword ptr [rsp+450h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA5D5 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA5D9 0F 29 84 24 60 04 00 00                 movaps  xmmword ptr [rsp+460h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA5E1 0F 28 84 24 60 04 00 00                 movaps  xmm0, xmmword ptr [rsp+460h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA5E9 0F 29 84 24 70 04 00 00                 movaps  xmmword ptr [rsp+470h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA5F1 0F 28 84 24 70 04 00 00                 movaps  xmm0, xmmword ptr [rsp+470h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA5F9 0F 29 84 24 80 04 00 00                 movaps  xmmword ptr [rsp+480h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA601 0F 28 84 24 80 04 00 00                 movaps  xmm0, xmmword ptr [rsp+480h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA609 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA60E B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA613 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA617 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA61C 48 6B C9 02                             imul    rcx, 2          ; Signed Multiply
.text:0000000143BAA620 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA625 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA62A 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA62E 0F C6 04 07 55                          shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.text:0000000143BAA633 0F 29 84 24 90 04 00 00                 movaps  xmmword ptr [rsp+490h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA63B B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA640 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA644 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA649 0F 28 84 24 90 04 00 00                 movaps  xmm0, xmmword ptr [rsp+490h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA651 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA655 0F 29 84 24 A0 04 00 00                 movaps  xmmword ptr [rsp+4A0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA65D 0F 28 84 24 A0 04 00 00                 movaps  xmm0, xmmword ptr [rsp+4A0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA665 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA66A 0F 29 84 24 B0 04 00 00                 movaps  xmmword ptr [rsp+4B0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA672 0F 28 84 24 B0 04 00 00                 movaps  xmm0, xmmword ptr [rsp+4B0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA67A 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA67F B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA684 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA688 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA68D 48 6B C9 02                             imul    rcx, 2          ; Signed Multiply
.text:0000000143BAA691 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA696 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA69B 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA69F 0F C6 04 07 AA                          shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.text:0000000143BAA6A4 0F 29 84 24 C0 04 00 00                 movaps  xmmword ptr [rsp+4C0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6AC B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA6B1 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA6B5 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA6BA 0F 28 84 24 C0 04 00 00                 movaps  xmm0, xmmword ptr [rsp+4C0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6C2 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA6C6 0F 29 84 24 D0 04 00 00                 movaps  xmmword ptr [rsp+4D0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6CE 0F 28 84 24 D0 04 00 00                 movaps  xmm0, xmmword ptr [rsp+4D0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6D6 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA6DB 0F 29 84 24 E0 04 00 00                 movaps  xmmword ptr [rsp+4E0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6E3 0F 28 84 24 E0 04 00 00                 movaps  xmm0, xmmword ptr [rsp+4E0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6EB 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6F0 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA6F5 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA6F9 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA6FE 48 6B C9 02                             imul    rcx, 2          ; Signed Multiply
.text:0000000143BAA702 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA707 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA70C 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA710 0F C6 04 07 FF                          shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.text:0000000143BAA715 0F 29 84 24 F0 04 00 00                 movaps  xmmword ptr [rsp+4F0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA71D B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA722 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA726 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA72B 0F 28 84 24 F0 04 00 00                 movaps  xmm0, xmmword ptr [rsp+4F0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA733 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA737 0F 29 84 24 00 05 00 00                 movaps  xmmword ptr [rsp+500h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA73F 0F 28 84 24 00 05 00 00                 movaps  xmm0, xmmword ptr [rsp+500h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA747 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA74C 0F 29 84 24 10 05 00 00                 movaps  xmmword ptr [rsp+510h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA754 0F 28 84 24 10 05 00 00                 movaps  xmm0, xmmword ptr [rsp+510h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA75C 0F 29 84 24 10 06 00 00                 movaps  xmmword ptr [rsp+610h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA764 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA769 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA76D B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA772 48 6B C9 03                             imul    rcx, 3          ; Signed Multiply
.text:0000000143BAA776 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA77B 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA780 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA784 0F C6 04 07 00                          shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.text:0000000143BAA789 0F 29 84 24 20 05 00 00                 movaps  xmmword ptr [rsp+520h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA791 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA796 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA79A 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA79F 0F 28 84 24 20 05 00 00                 movaps  xmm0, xmmword ptr [rsp+520h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7A7 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA7AB 0F 29 84 24 30 05 00 00                 movaps  xmmword ptr [rsp+530h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7B3 0F 28 84 24 30 05 00 00                 movaps  xmm0, xmmword ptr [rsp+530h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7BB 0F 29 84 24 40 05 00 00                 movaps  xmmword ptr [rsp+540h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7C3 0F 28 84 24 40 05 00 00                 movaps  xmm0, xmmword ptr [rsp+540h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7CB 0F 29 84 24 50 05 00 00                 movaps  xmmword ptr [rsp+550h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7D3 0F 28 84 24 50 05 00 00                 movaps  xmm0, xmmword ptr [rsp+550h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7DB 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7E0 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA7E5 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA7E9 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA7EE 48 6B C9 03                             imul    rcx, 3          ; Signed Multiply
.text:0000000143BAA7F2 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA7F7 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA7FC 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA800 0F C6 04 07 55                          shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.text:0000000143BAA805 0F 29 84 24 60 05 00 00                 movaps  xmmword ptr [rsp+560h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA80D B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA812 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA816 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA81B 0F 28 84 24 60 05 00 00                 movaps  xmm0, xmmword ptr [rsp+560h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA823 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA827 0F 29 84 24 70 05 00 00                 movaps  xmmword ptr [rsp+570h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA82F 0F 28 84 24 70 05 00 00                 movaps  xmm0, xmmword ptr [rsp+570h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA837 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA83C 0F 29 84 24 80 05 00 00                 movaps  xmmword ptr [rsp+580h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA844 0F 28 84 24 80 05 00 00                 movaps  xmm0, xmmword ptr [rsp+580h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA84C 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA851 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA856 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA85A B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA85F 48 6B C9 03                             imul    rcx, 3          ; Signed Multiply
.text:0000000143BAA863 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA868 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA86D 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA871 0F C6 04 07 AA                          shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.text:0000000143BAA876 0F 29 84 24 90 05 00 00                 movaps  xmmword ptr [rsp+590h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA87E B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA883 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA887 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA88C 0F 28 84 24 90 05 00 00                 movaps  xmm0, xmmword ptr [rsp+590h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA894 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA898 0F 29 84 24 A0 05 00 00                 movaps  xmmword ptr [rsp+5A0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA8A0 0F 28 84 24 A0 05 00 00                 movaps  xmm0, xmmword ptr [rsp+5A0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA8A8 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA8AD 0F 29 84 24 B0 05 00 00                 movaps  xmmword ptr [rsp+5B0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA8B5 0F 28 84 24 B0 05 00 00                 movaps  xmm0, xmmword ptr [rsp+5B0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA8BD 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA8C2 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA8C7 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA8CB B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA8D0 48 6B C9 03                             imul    rcx, 3          ; Signed Multiply
.text:0000000143BAA8D4 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA8D9 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA8DE 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA8E2 0F C6 04 07 FF                          shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.text:0000000143BAA8E7 0F 29 84 24 C0 05 00 00                 movaps  xmmword ptr [rsp+5C0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA8EF B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA8F4 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA8F8 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA8FD 0F 28 84 24 C0 05 00 00                 movaps  xmm0, xmmword ptr [rsp+5C0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA905 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA909 0F 29 84 24 D0 05 00 00                 movaps  xmmword ptr [rsp+5D0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA911 0F 28 84 24 D0 05 00 00                 movaps  xmm0, xmmword ptr [rsp+5D0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA919 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA91E 0F 29 84 24 E0 05 00 00                 movaps  xmmword ptr [rsp+5E0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA926 0F 28 84 24 E0 05 00 00                 movaps  xmm0, xmmword ptr [rsp+5E0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA92E 0F 29 84 24 20 06 00 00                 movaps  xmmword ptr [rsp+620h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA936 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA93B 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA93F 48 8B 8C 24 E8 00 00 00                 mov     rcx, [rsp+0E8h]
.text:0000000143BAA947 0F 28 84 24 F0 05 00 00                 movaps  xmm0, xmmword ptr [rsp+5F0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA94F 0F 11 04 01                             movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA953 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA958 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA95C 48 8B 8C 24 E8 00 00 00                 mov     rcx, [rsp+0E8h]
.text:0000000143BAA964 0F 28 84 24 00 06 00 00                 movaps  xmm0, xmmword ptr [rsp+600h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA96C 0F 11 04 01                             movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA970 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA975 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA979 48 8B 8C 24 E8 00 00 00                 mov     rcx, [rsp+0E8h]
.text:0000000143BAA981 0F 28 84 24 10 06 00 00                 movaps  xmm0, xmmword ptr [rsp+610h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA989 0F 11 04 01                             movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA98D B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA992 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA996 48 8B 8C 24 E8 00 00 00                 mov     rcx, [rsp+0E8h]
.text:0000000143BAA99E 0F 28 84 24 20 06 00 00                 movaps  xmm0, xmmword ptr [rsp+620h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA9A6 0F 11 04 01                             movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA9AA 48 8D 84 24 E0 06 00 00                 lea     rax, [rsp+6E0h] ; Load Effective Address
.text:0000000143BAA9B2 48 8D 8C 24 A0 06 00 00                 lea     rcx, [rsp+6A0h] ; Load Effective Address
.text:0000000143BAA9BA 48 8B F8                                mov     rdi, rax
.text:0000000143BAA9BD 48 8B F1                                mov     rsi, rcx
.text:0000000143BAA9C0 B9 40 00 00 00                          mov     ecx, 40h ; '@'
.text:0000000143BAA9C5 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BAA9C7 48 8D 84 24 E0 06 00 00                 lea     rax, [rsp+6E0h] ; Load Effective Address
.text:0000000143BAA9CF 48 89 84 24 68 02 00 00                 mov     [rsp+268h], rax
.text:0000000143BAA9D7 48 8B 84 24 68 02 00 00                 mov     rax, [rsp+268h]
.text:0000000143BAA9DF 48 8D 94 24 48 06 00 00                 lea     rdx, [rsp+648h] ; Load Effective Address
.text:0000000143BAA9E7 48 8B C8                                mov     rcx, rax
.text:0000000143BAA9EA E8 61 B8 C8 08                          call    sub_14C836250   ; Call Procedure
.text:0000000143BAA9EF 48 8D 8C 24 98 00 00 00                 lea     rcx, [rsp+98h]  ; Load Effective Address
.text:0000000143BAA9F7 48 8B F9                                mov     rdi, rcx
.text:0000000143BAA9FA 48 8B F0                                mov     rsi, rax
.text:0000000143BAA9FD B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BAAA02 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BAAA04
.text:0000000143BAAA04                         loc_143BAAA04:                          ; CODE XREF: sub_143BA95D0+BD↑j
.text:0000000143BAAA04                                                                 ; sub_143BA95D0+D0↑j ...
.text:0000000143BAAA04 48 8D 84 24 98 00 00 00                 lea     rax, [rsp+98h]  ; Load Effective Address
.text:0000000143BAAA0C 48 8B BC 24 88 07 00 00                 mov     rdi, [rsp+788h]
.text:0000000143BAAA14 48 8B F0                                mov     rsi, rax
.text:0000000143BAAA17 B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BAAA1C F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BAAA1E 48 8B 84 24 88 07 00 00                 mov     rax, [rsp+788h]
.text:0000000143BAAA26 48 81 C4 68 07 00 00                    add     rsp, 768h       ; Add
.text:0000000143BAAA2D 5F                                      pop     rdi
.text:0000000143BAAA2E 5E                                      pop     rsi
.text:0000000143BAAA2F C3                                      retn                    ; Return Near from Procedure
.text:0000000143BAAA2F                         sub_143BA95D0   endp
.text:0000000143BAAA2F
.text:0000000143BAAA30
.text:0000000143BAAA30                         ; =============== S U B R O U T I N E =======================================
.text:0000000143BAAA30
.text:0000000143BAAA30
.text:0000000143BAAA30                         sub_143BAAA30   proc near               ; CODE XREF: sub_143BA4650+14↑p
.text:0000000143BAAA30                                                                 ; sub_1446CD930+14A↓p
.text:0000000143BAAA30 F3 0F 10 81 E0 F2 02 00                 movss   xmm0, dword ptr [rcx+2F2E0h] ; Move Scalar Single-FP
.text:0000000143BAAA38 C3                                      retn                    ; Return Near from Procedure
.text:0000000143BAAA38                         sub_143BAAA30   endp
.text:0000000143BAAA38
.text:0000000143BAAA38                         ; ---------------------------------------------------------------------------
.text:0000000143BAAA39 CC CC CC CC CC CC CC                    align 20h
.text:0000000143BAAA40
```
