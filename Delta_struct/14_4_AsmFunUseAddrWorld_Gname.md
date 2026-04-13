

---
log Chack offset  for Get offset readblack Immm && opcore    Is Gname Fun Getname  newBase
--- 
<img width="1070" height="527" alt="image" src="https://github.com/user-attachments/assets/ff2f7b5a-a57d-4956-a812-f0a51d022b58" />


```asm



```
```c
__int64 __fastcall sub_14C8D9450(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rdx
  _WORD *v12; // rsi
  int v13; // edx
  int v14; // ecx
  unsigned __int64 v15; // rbx
  int v16; // ebx
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  unsigned __int64 v20; // rbx
  int v21; // ebx
  int v22; // eax
  __int64 v23; // rcx
  _WORD *v24; // rdx
  _WORD *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // [rsp+30h] [rbp-10h] BYREF
  __int64 v29; // [rsp+38h] [rbp-8h]
  int v30; // [rsp+60h] [rbp+20h] BYREF
  char v31; // [rsp+70h] [rbp+30h] BYREF

  if ( (*(_BYTE *)(a1 + 0x28) & 1) == 0 )
  {
    v12 = (_WORD *)(a2 + 6);
    if ( *(_BYTE *)(a2 + 4) )
    {
      v13 = 0;
      v28 = 0LL;
      v14 = 0;
      v29 = 0LL;
      if ( v12 && *v12 )
      {
        v15 = 0xFFFFFFFFFFFFFFFFuLL;
        do
          ++v15;
        while ( v12[v15] );
        v16 = v15 + 1;
        if ( v16 > 0 )
        {
          sub_140A827E0(&v28, (unsigned int)v16);
          v14 = HIDWORD(v29);
          v13 = v29;
        }
        LODWORD(v29) = v16 + v13;
        if ( v16 + v13 > v14 )
          sub_140A82700(&v28);
        v17 = qword_15684A770(&v28);
        sub_14C785930(v17, v12, 2LL * v16);
      }
    }
    else
    {
      v18 = 0;
      v28 = 0LL;
      v19 = 0;
      v29 = 0LL;
      if ( v12 && *(_BYTE *)v12 )
      {
        v20 = 0xFFFFFFFFFFFFFFFFuLL;
        do
          ++v20;
        while ( *((_BYTE *)v12 + v20) );
        v21 = v20 + 1;
        if ( v21 > 0 )
        {
          sub_140A827E0(&v28, (unsigned int)v21);
          v19 = HIDWORD(v29);
          v18 = v29;
        }
        LODWORD(v29) = v18 + v21;
        if ( v18 + v21 > v19 )
          sub_140A82700(&v28);
        v22 = qword_15684A770(&v28);
        sub_140A867B0(v22, v21, (_DWORD)v12, v21, 0x3F);
      }
    }
    sub_14C762A20(a1, &v28);
    v23 = *(_QWORD *)(a1 + 8);
    v24 = (_WORD *)(a2 + 0x806);
    if ( (unsigned __int64)(*(_QWORD *)v23 + 2LL) > *(_QWORD *)(v23 + 8) )
    {
      if ( (*(_BYTE *)(a1 + 0x29) & 0x20) != 0 )
        sub_14C8CC1F0(a1, v24);
      else
        (*(void (__fastcall **)(__int64, _WORD *, __int64))(*(_QWORD *)a1 + 0x60LL))(a1, v24, 2LL);
    }
    else
    {
      *v24 = **(_WORD **)v23;
      **(_QWORD **)(a1 + 8) += 2LL;
    }
    v25 = (_WORD *)(a2 + 0x808);
    v26 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int64)(*(_QWORD *)v26 + 2LL) > *(_QWORD *)(v26 + 8) )
    {
      if ( (*(_BYTE *)(a1 + 0x29) & 0x20) != 0 )
        sub_14C8CC1F0(a1, v25);
      else
        (*(void (__fastcall **)(__int64, _WORD *, __int64))(*(_QWORD *)a1 + 0x60LL))(a1, v25, 2LL);
    }
    else
    {
      *v25 = **(_WORD **)v26;
      **(_QWORD **)(a1 + 8) += 2LL;
    }
    qword_15684A770(&v28);
    sub_140A826E0(&v28, 0LL);
    if ( qword_15684A770(&v28) )
    {
      v27 = qword_15684A770(&v28);
      sub_14C7AAFD0(v27);
    }
    return a1;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int64)(*(_QWORD *)v4 + 4LL) > *(_QWORD *)(v4 + 8) )
  {
    if ( (*(_BYTE *)(a1 + 0x29) & 0x20) != 0 )
      sub_14C8CC250(a1, &v30);
    else
      (*(void (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)a1 + 0x60LL))(a1, &v30, 4LL);
  }
  else
  {
    v30 = **(_DWORD **)v4;
    *(_QWORD *)v4 += 4LL;
  }
  v5 = v30;
  if ( v30 >= 0 )
  {
    v10 = *(_QWORD *)(a1 + 0x38);
    if ( v10 > 0 && v30 > v10 )
    {
      *(_BYTE *)(a1 + 0x29) |= 3u;
      if ( (unsigned __int8)byte_1573DBEF0 >= 2u )
      {
        sub_14C829130((unsigned int)"Unknown", 0xA40, (unsigned int)&unk_1573DBEF4, 2, (__int64)L"String is too large");
        return a1;
      }
      return a1;
    }
    *(_BYTE *)(a2 + 4) = 0;
    v9 = v5;
  }
  else
  {
    if ( v30 == 0x80000000 )
    {
      *(_BYTE *)(a1 + 0x29) |= 3u;
      if ( (unsigned __int8)byte_1573DBEF0 >= 2u )
      {
        sub_14C829130((unsigned int)"Unknown", 0xA18, (unsigned int)&unk_1573DBEF4, 2, (__int64)L"Archive is corrupted");
        return a1;
      }
      return a1;
    }
    v7 = *(_QWORD *)(a1 + 0x38);
    v8 = -v30;
    v30 = -v30;
    if ( v7 > 0 && v8 > v7 )
    {
      *(_BYTE *)(a1 + 0x29) |= 3u;
      if ( (unsigned __int8)byte_1573DBEF0 >= 2u )
      {
        sub_14C829130((unsigned int)"Unknown", 0xA24, (unsigned int)&unk_1573DBEF4, 2, (__int64)L"String is too large");
        return a1;
      }
      return a1;
    }
    *(_BYTE *)(a2 + 4) = 1;
    v9 = 2LL * v8;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 0x60LL))(a1, a2 + 6, v9, a1);
  v11 = 0LL;
  if ( *(int *)(a1 + 0x40) >= 0x1F8 )
    v11 = 4LL;
  (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 0x60LL))(a1, &v31, v11);
  return a1;
}

```

---
  Is Gname Fun Getname Itme
--- 

imm     ( 0x14C8F1020  -  0x14C8F12CF)
Aob Scan 
.text:000000014C8F1059 48 8D 35 60 B1 AE 0A   lea   rsi, unk_1573DC1C0

GetAddressStart   = 0x14C8F1059 - 0x39;
sizebytes   0x2AF
```asm
text:000000014C8F1020                         ; =============== S U B R O U T I N E =======================================
.text:000000014C8F1020
.text:000000014C8F1020                         ; Attributes: bp-based frame
.text:000000014C8F1020
.text:000000014C8F1020                         ; int *__fastcall sub_14C8F1020(int *, __m128i *, int, int)
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
.text:000000014C8F102F 48 81 EC 80 00 00 00                    sub     rsp, 80h
.text:000000014C8F1036 48 8B 05 03 43 4D 0A                    mov     rax, cs:off_156DC5340
.text:000000014C8F103D 48 33 C4                                xor     rax, rsp
.text:000000014C8F1040 48 89 45 F8                             mov     [rbp-8], rax
.text:000000014C8F1044 80 3D A1 AE AE 0A 00                    cmp     cs:byte_1573DBEEC, 0
.text:000000014C8F104B 45 8B F9                                mov     r15d, r9d
.text:000000014C8F104E 41 8B D8                                mov     ebx, r8d
.text:000000014C8F1051 48 8B FA                                mov     rdi, rdx
.text:000000014C8F1054 4C 8B F1                                mov     r14, rcx
.text:000000014C8F1057 74 09                                   jz      short loc_14C8F1062
.text:000000014C8F1059 48 8D 35 60 B1 AE 0A                    lea     rsi, unk_1573DC1C0
.text:000000014C8F1060 EB 16                                   jmp     short loc_14C8F1078
.text:000000014C8F1062                         ; ---------------------------------------------------------------------------
.text:000000014C8F1062
.text:000000014C8F1062                         loc_14C8F1062:                          ; CODE XREF: sub_14C8F1020+37↑j
.text:000000014C8F1062 48 8D 0D 57 B1 AE 0A                    lea     rcx, unk_1573DC1C0
.text:000000014C8F1069 E8 22 46 FE FF                          call    sub_14C8D5690
.text:000000014C8F106E 48 8B F0                                mov     rsi, rax
.text:000000014C8F1071 C6 05 74 AE AE 0A 01                    mov     cs:byte_1573DBEEC, 1
.text:000000014C8F1078
.text:000000014C8F1078                         loc_14C8F1078:                          ; CODE XREF: sub_14C8F1020+40↑j
.text:000000014C8F1078 4C 8B 47 08                             mov     r8, [rdi+8]
.text:000000014C8F107C 83 FB 01                                cmp     ebx, 1
.text:000000014C8F107F 0F 85 A2 00 00 00                       jnz     loc_14C8F1127
.text:000000014C8F1085 0F 10 0F                                movups  xmm1, xmmword ptr [rdi]
.text:000000014C8F1088 B9 24 00 01 00                          mov     ecx, 10024h
.text:000000014C8F108D C6 45 A0 00                             mov     byte ptr [rbp-60h], 0
.text:000000014C8F1091 49 8B C0                                mov     rax, r8
.text:000000014C8F1094 44 89 45 D8                             mov     [rbp-28h], r8d
.text:000000014C8F1098 48 C1 E8 20                             shr     rax, 20h
.text:000000014C8F109C 66 48 0F 7E CA                          movq    rdx, xmm1
.text:000000014C8F10A1 84 C0                                   test    al, al
.text:000000014C8F10A3 0F 29 4D B0                             movaps  xmmword ptr [rbp-50h], xmm1
.text:000000014C8F10A7 0F B7 45 BD                             movzx   eax, word ptr [rbp-43h]
.text:000000014C8F10AB BB 20 00 01 00                          mov     ebx, 10020h
.text:000000014C8F10B0 0F 45 D9                                cmovnz  ebx, ecx
.text:000000014C8F10B3 66 0F 73 D9 0F                          psrldq  xmm1, 0Fh
.text:000000014C8F10B8 49 8B C8                                mov     rcx, r8
.text:000000014C8F10BB 66 89 45 DD                             mov     [rbp-23h], ax
.text:000000014C8F10BF 48 C1 E9 20                             shr     rcx, 20h
.text:000000014C8F10C3 66 0F 7E C8                             movd    eax, xmm1
.text:000000014C8F10C7 48 89 55 D0                             mov     [rbp-30h], rdx
.text:000000014C8F10CB 88 4D DC                                mov     [rbp-24h], cl
.text:000000014C8F10CE 88 45 DF                                mov     [rbp-21h], al
.text:000000014C8F10D1 84 C9                                   test    cl, cl
.text:000000014C8F10D3 75 0B                                   jnz     short loc_14C8F10E0
.text:000000014C8F10D5 48 8D 4D B0                             lea     rcx, [rbp-50h]
.text:000000014C8F10D9 E8 A2 34 FE FF                          call    sub_14C8D4580
.text:000000014C8F10DE EB 09                                   jmp     short loc_14C8F10E9
.text:000000014C8F10E0                         ; ---------------------------------------------------------------------------
.text:000000014C8F10E0
.text:000000014C8F10E0                         loc_14C8F10E0:                          ; CODE XREF: sub_14C8F1020+B3↑j
.text:000000014C8F10E0 48 8D 4D C0                             lea     rcx, [rbp-40h]
.text:000000014C8F10E4 E8 87 35 FE FF                          call    sub_14C8D4670
.text:000000014C8F10E9
.text:000000014C8F10E9                         loc_14C8F10E9:                          ; CODE XREF: sub_14C8F1020+BE↑j
.text:000000014C8F10E9 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.text:000000014C8F10EC 4C 8D 4D A0                             lea     r9, [rbp-60h]
.text:000000014C8F10F0 C6 45 F4 00                             mov     byte ptr [rbp-0Ch], 0
.text:000000014C8F10F4 4C 8D 45 D0                             lea     r8, [rbp-30h]
.text:000000014C8F10F8 66 0F 7E C1                             movd    ecx, xmm0
.text:000000014C8F10FC 48 8D 55 B0                             lea     rdx, [rbp-50h]
.text:000000014C8F1100 0F 11 45 E0                             movups  xmmword ptr [rbp-20h], xmm0
.text:000000014C8F1104 48 81 C1 01 04 00 00                    add     rcx, 401h
.text:000000014C8F110B 48 C1 E1 06                             shl     rcx, 6
.text:000000014C8F110F 48 03 CE                                add     rcx, rsi
.text:000000014C8F1112 E8 09 C1 FF FF                          call    sub_14C8ED220
.text:000000014C8F1117 0F B6 45 A0                             movzx   eax, byte ptr [rbp-60h]
.text:000000014C8F111B F0 01 04 33                             lock add [rbx+rsi], eax
.text:000000014C8F111F 8B 5D B0                                mov     ebx, [rbp-50h]
.text:000000014C8F1122 E9 7C 01 00 00                          jmp     loc_14C8F12A3
.text:000000014C8F1127                         ; ---------------------------------------------------------------------------
.text:000000014C8F1127
.text:000000014C8F1127                         loc_14C8F1127:                          ; CODE XREF: sub_14C8F1020+5F↑j
.text:000000014C8F1127 85 DB                                   test    ebx, ebx
.text:000000014C8F1129 75 71                                   jnz     short loc_14C8F119C
.text:000000014C8F112B 0F 10 07                                movups  xmm0, xmmword ptr [rdi]
.text:000000014C8F112E 49 8B C0                                mov     rax, r8
.text:000000014C8F1131 48 C1 E8 20                             shr     rax, 20h
.text:000000014C8F1135 66 48 0F 7E C2                          movq    rdx, xmm0
.text:000000014C8F113A 0F 11 45 D0                             movups  xmmword ptr [rbp-30h], xmm0
.text:000000014C8F113E 84 C0                                   test    al, al
.text:000000014C8F1140 75 0B                                   jnz     short loc_14C8F114D
.text:000000014C8F1142 48 8D 4D C0                             lea     rcx, [rbp-40h]
.text:000000014C8F1146 E8 35 34 FE FF                          call    sub_14C8D4580
.text:000000014C8F114B EB 09                                   jmp     short loc_14C8F1156
.text:000000014C8F114D                         ; ---------------------------------------------------------------------------
.text:000000014C8F114D
.text:000000014C8F114D                         loc_14C8F114D:                          ; CODE XREF: sub_14C8F1020+120↑j
.text:000000014C8F114D 48 8D 4D B0                             lea     rcx, [rbp-50h]
.text:000000014C8F1151 E8 1A 35 FE FF                          call    sub_14C8D4670
.text:000000014C8F1156
.text:000000014C8F1156                         loc_14C8F1156:                          ; CODE XREF: sub_14C8F1020+12B↑j
.text:000000014C8F1156 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.text:000000014C8F1159 C6 45 F4 00                             mov     byte ptr [rbp-0Ch], 0
.text:000000014C8F115D 66 0F 7E C7                             movd    edi, xmm0
.text:000000014C8F1161 0F 11 45 E0                             movups  xmmword ptr [rbp-20h], xmm0
.text:000000014C8F1165 48 81 C7 01 04 00 00                    add     rdi, 401h
.text:000000014C8F116C 48 C1 E7 06                             shl     rdi, 6
.text:000000014C8F1170 48 03 FE                                add     rdi, rsi
.text:000000014C8F1173 48 8B CF                                mov     rcx, rdi
.text:000000014C8F1176 FF 15 2C A3 C8 03                       call    cs:qword_15057B4A8
.text:000000014C8F117C 48 8D 55 D0                             lea     rdx, [rbp-30h]
.text:000000014C8F1180 48 8B CF                                mov     rcx, rdi
.text:000000014C8F1183 E8 88 24 00 00                          call    sub_14C8F3610
.text:000000014C8F1188 48 8B CF                                mov     rcx, rdi
.text:000000014C8F118B 8B 18                                   mov     ebx, [rax]
.text:000000014C8F118D FF 15 0D A3 C8 03                       call    cs:qword_15057B4A0
.text:000000014C8F1193 0F BA F3 1F                             btr     ebx, 1Fh
.text:000000014C8F1197 E9 07 01 00 00                          jmp     loc_14C8F12A3
.text:000000014C8F119C                         ; ---------------------------------------------------------------------------
.text:000000014C8F119C
.text:000000014C8F119C                         loc_14C8F119C:                          ; CODE XREF: sub_14C8F1020+109↑j
.text:000000014C8F119C 0F 10 0F                                movups  xmm1, xmmword ptr [rdi]
.text:000000014C8F119F 48 8B 47 08                             mov     rax, [rdi+8]
.text:000000014C8F11A3 B9 24 00 01 00                          mov     ecx, 10024h
.text:000000014C8F11A8 48 C1 E8 20                             shr     rax, 20h
.text:000000014C8F11AC BB 20 00 01 00                          mov     ebx, 10020h
.text:000000014C8F11B1 84 C0                                   test    al, al
.text:000000014C8F11B3 0F 29 4D B0                             movaps  xmmword ptr [rbp-50h], xmm1
.text:000000014C8F11B7 0F B7 45 BD                             movzx   eax, word ptr [rbp-43h]
.text:000000014C8F11BB 66 48 0F 7E CA                          movq    rdx, xmm1
.text:000000014C8F11C0 0F 45 D9                                cmovnz  ebx, ecx
.text:000000014C8F11C3 66 0F 73 D9 0F                          psrldq  xmm1, 0Fh
.text:000000014C8F11C8 49 8B C8                                mov     rcx, r8
.text:000000014C8F11CB 66 89 45 DD                             mov     [rbp-23h], ax
.text:000000014C8F11CF 48 C1 E9 20                             shr     rcx, 20h
.text:000000014C8F11D3 66 0F 7E C8                             movd    eax, xmm1
.text:000000014C8F11D7 C6 45 A0 00                             mov     byte ptr [rbp-60h], 0
.text:000000014C8F11DB 48 89 55 D0                             mov     [rbp-30h], rdx
.text:000000014C8F11DF 44 89 45 D8                             mov     [rbp-28h], r8d
.text:000000014C8F11E3 88 4D DC                                mov     [rbp-24h], cl
.text:000000014C8F11E6 88 45 DF                                mov     [rbp-21h], al
.text:000000014C8F11E9 84 C9                                   test    cl, cl
.text:000000014C8F11EB 75 0B                                   jnz     short loc_14C8F11F8
.text:000000014C8F11ED 48 8D 4D C0                             lea     rcx, [rbp-40h]
.text:000000014C8F11F1 E8 8A 33 FE FF                          call    sub_14C8D4580
.text:000000014C8F11F6 EB 09                                   jmp     short loc_14C8F1201
.text:000000014C8F11F8                         ; ---------------------------------------------------------------------------
.text:000000014C8F11F8
.text:000000014C8F11F8                         loc_14C8F11F8:                          ; CODE XREF: sub_14C8F1020+1CB↑j
.text:000000014C8F11F8 48 8D 4D B0                             lea     rcx, [rbp-50h]
.text:000000014C8F11FC E8 6F 34 FE FF                          call    sub_14C8D4670
.text:000000014C8F1201
.text:000000014C8F1201                         loc_14C8F1201:                          ; CODE XREF: sub_14C8F1020+1D6↑j
.text:000000014C8F1201 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.text:000000014C8F1204 4C 8D 4D A0                             lea     r9, [rbp-60h]
.text:000000014C8F1208 C6 45 F4 00                             mov     byte ptr [rbp-0Ch], 0
.text:000000014C8F120C 4C 8D 45 D0                             lea     r8, [rbp-30h]
.text:000000014C8F1210 66 0F 7E C1                             movd    ecx, xmm0
.text:000000014C8F1214 48 8D 55 B0                             lea     rdx, [rbp-50h]
.text:000000014C8F1218 0F 11 45 E0                             movups  xmmword ptr [rbp-20h], xmm0
.text:000000014C8F121C 48 81 C1 01 04 00 00                    add     rcx, 401h
.text:000000014C8F1223 48 C1 E1 06                             shl     rcx, 6
.text:000000014C8F1227 48 03 CE                                add     rcx, rsi
.text:000000014C8F122A E8 F1 BF FF FF                          call    sub_14C8ED220
.text:000000014C8F122F 0F B6 45 A0                             movzx   eax, byte ptr [rbp-60h]
.text:000000014C8F1233 F0 01 04 33                             lock add [rbx+rsi], eax
.text:000000014C8F1237 8B 5D B0                                mov     ebx, [rbp-50h]
.text:000000014C8F123A 8B D3                                   mov     edx, ebx
.text:000000014C8F123C 0F 10 0F                                movups  xmm1, xmmword ptr [rdi]
.text:000000014C8F123F 48 8B 7F 08                             mov     rdi, [rdi+8]
.text:000000014C8F1243 8B C3                                   mov     eax, ebx
.text:000000014C8F1245 25 FF FF 03 00                          and     eax, 3FFFFh
.text:000000014C8F124A C1 EA 12                                shr     edx, 12h
.text:000000014C8F124D 89 45 B4                                mov     [rbp-4Ch], eax
.text:000000014C8F1250 89 55 B0                                mov     [rbp-50h], edx
.text:000000014C8F1253 48 8B 45 B0                             mov     rax, [rbp-50h]
.text:000000014C8F1257 48 C1 E8 20                             shr     rax, 20h
.text:000000014C8F125B 44 8B C7                                mov     r8d, edi
.text:000000014C8F125E 8D 0C 00                                lea     ecx, [rax+rax]
.text:000000014C8F1261 48 8B 44 D6 08                          mov     rax, [rsi+rdx*8+8]
.text:000000014C8F1266 48 8D 71 02                             lea     rsi, [rcx+2]
.text:000000014C8F126A 66 48 0F 7E CA                          movq    rdx, xmm1
.text:000000014C8F126F 48 03 F0                                add     rsi, rax
.text:000000014C8F1272 48 8B C7                                mov     rax, rdi
.text:000000014C8F1275 48 C1 E8 20                             shr     rax, 20h
.text:000000014C8F1279 48 8B CE                                mov     rcx, rsi
.text:000000014C8F127C 84 C0                                   test    al, al
.text:000000014C8F127E 74 14                                   jz      short loc_14C8F1294
.text:000000014C8F1280 4D 03 C0                                add     r8, r8
.text:000000014C8F1283 E8 B5 55 97 03                          call    sub_15026683D
.text:000000014C8F1288 8B D7                                   mov     edx, edi
.text:000000014C8F128A 48 8B CE                                mov     rcx, rsi
.text:000000014C8F128D E8 EE F1 FE FF                          call    sub_14C8E0480
.text:000000014C8F1292 EB 0F                                   jmp     short loc_14C8F12A3
.text:000000014C8F1294                         ; ---------------------------------------------------------------------------
.text:000000014C8F1294
.text:000000014C8F1294                         loc_14C8F1294:                          ; CODE XREF: sub_14C8F1020+25E↑j
.text:000000014C8F1294 E8 A4 55 97 03                          call    sub_15026683D
.text:000000014C8F1299 8B D7                                   mov     edx, edi
.text:000000014C8F129B 48 8B CE                                mov     rcx, rsi
.text:000000014C8F129E E8 CD EF FE FF                          call    sub_14C8E0270
.text:000000014C8F12A3
.text:000000014C8F12A3                         loc_14C8F12A3:                          ; CODE XREF: sub_14C8F1020+102↑j
.text:000000014C8F12A3                                                                 ; sub_14C8F1020+177↑j ...
.text:000000014C8F12A3 41 89 1E                                mov     [r14], ebx
.text:000000014C8F12A6 49 8B C6                                mov     rax, r14
.text:000000014C8F12A9 45 89 7E 04                             mov     [r14+4], r15d
.text:000000014C8F12AD 48 8B 4D F8                             mov     rcx, [rbp-8]
.text:000000014C8F12B1 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014C8F12B4 E8 A7 EB 96 03                          call    __security_check_cookie
.text:000000014C8F12B9 48 8B 9C 24 C0 00 00 00                 mov     rbx, [rsp+0C0h]
.text:000000014C8F12C1 48 81 C4 80 00 00 00                    add     rsp, 80h
.text:000000014C8F12C8 41 5F                                   pop     r15
.text:000000014C8F12CA 41 5E                                   pop     r14
.text:000000014C8F12CC 5F                                      pop     rdi
.text:000000014C8F12CD 5E                                      pop     rsi
.text:000000014C8F12CE 5D                                      pop     rbp
.text:000000014C8F12CF C3                                      retn
.text:000000014C8F12CF                         sub_14C8F1020   endp

```

```c

_QWORD *__fastcall sub_14C8D5120(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rbx
  char v5; // r14
  char *v6; // rsi
  volatile signed __int32 *v7; // r14
  __m128i *v8; // rax
  __m128i v9; // xmm0
  _QWORD *result; // rax
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
  if ( *(_BYTE *)(a2 + 4) )
  {
    v5 = 1;
    do
      ++v4;
    while ( *(_WORD *)(v2 + 2 * v4) );
  }
  else
  {
    v5 = 0;
    do
      ++v4;
    while ( *(_BYTE *)(v2 + v4) );
  }
  if ( byte_1573DBEEC )
  {
    v6 = (char *)&unk_1573DC1C0;
  }
  else
  {
    v6 = (char *)sub_14C8D5690(&unk_1573DC1C0);
    byte_1573DBEEC = 1;
  }
  v11[0] = 0;
  v17 = v2;
  v18 = v4;
  v19 = v5;
  v20 = v14;
  v21 = v15;
  if ( v5 )
  {
    v7 = (volatile signed __int32 *)(v6 + 0x10024);
    v8 = (__m128i *)sub_14C8D4670((__int64)v16, v2, v4);
  }
  else
  {
    v7 = (volatile signed __int32 *)(v6 + 0x10020);
    v8 = (__m128i *)sub_14C8D4580(v13);
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
```

