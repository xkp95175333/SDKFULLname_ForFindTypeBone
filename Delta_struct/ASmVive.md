
---
World
---
```asm

.std:000000014EE68B60
.std:000000014EE68B60                                                 ; =============== S U B R O U T I N E =======================================
.std:000000014EE68B60
.std:000000014EE68B60
.std:000000014EE68B60                                                 ; __int64 sub_14EE68B60()
.std:000000014EE68B60                                                 sub_14EE68B60   proc near               ; CODE XREF: sub_140ACDDD0+41C↑p
.std:000000014EE68B60                                                                                         ; sub_140ACFC90:loc_140AD0047↑p ...
.std:000000014EE68B60
.std:000000014EE68B60                                                 var_68          = dword ptr -68h
.std:000000014EE68B60                                                 var_60          = dword ptr -60h
.std:000000014EE68B60                                                 var_58          = dword ptr -58h
.std:000000014EE68B60                                                 var_18          = byte ptr -18h
.std:000000014EE68B60
.std:000000014EE68B60 4C 8B DC                                                        mov     r11, rsp
.std:000000014EE68B63 48 81 EC 88 00 00 00                                            sub     rsp, 88h        ; Integer Subtraction
.std:000000014EE68B6A 48 8B 05 AF 8B 71 08                                            mov     rax, cs:qword_157581720
.std:000000014EE68B71 48 85 C0                                                        test    rax, rax        ; Logical Compare
.std:000000014EE68B74 0F 85 89 00 00 00                                               jnz     loc_14EE68C03   ; Jump if Not Zero (ZF=0)
.std:000000014EE68B7A 33 C9                                                           xor     ecx, ecx        ; Logical Exclusive OR
.std:000000014EE68B7C 48 8D 05 ED AC C6 F1                                            lea     rax, sub_140AD3870 ; Load Effective Address
.std:000000014EE68B83 49 89 4B F0                                                     mov     [r11-10h], rcx
.std:000000014EE68B87 4C 8D 0D D2 02 00 00                                            lea     r9, sub_14EE68E60 ; Load Effective Address
.std:000000014EE68B8E 88 4C 24 70                                                     mov     [rsp+88h+var_18], cl
.std:000000014EE68B92 4C 8D 05 87 8B 71 08                                            lea     r8, qword_157581720 ; Load Effective Address
.std:000000014EE68B99 49 89 43 E0                                                     mov     [r11-20h], rax
.std:000000014EE68B9D 48 8D 15 AE AA 19 06                                            lea     rdx, aUworld+2  ; Load Effective Address
.std:000000014EE68BA4 49 89 43 D8                                                     mov     [r11-28h], rax
.std:000000014EE68BA8 48 8D 05 31 AA CB FF                                            lea     rax, sub_14EB235E0 ; Load Effective Address
.std:000000014EE68BAF 49 89 43 D0                                                     mov     [r11-30h], rax
.std:000000014EE68BB3 48 8D 05 86 8F C1 F1                                            lea     rax, PxLib_start_UE4_PixUI ; Load Effective Address
.std:000000014EE68BBA 49 89 43 C8                                                     mov     [r11-38h], rax
.std:000000014EE68BBE 48 8D 05 1B F7 FF FF                                            lea     rax, sub_14EE682E0 ; Load Effective Address
.std:000000014EE68BC5 49 89 43 C0                                                     mov     [r11-40h], rax
.std:000000014EE68BC9 48 8D 05 F8 00 86 01                                            lea     rax, aEngine_0  ; Load Effective Address
.std:000000014EE68BD0 49 89 43 B8                                                     mov     [r11-48h], rax
.std:000000014EE68BD4 49 89 4B B0                                                     mov     [r11-50h], rcx
.std:000000014EE68BD8 48 8D 0D 21 5E 78 05                                            lea     rcx, aScriptEngine ; Load Effective Address
.std:000000014EE68BDF C7 44 24 30 00 00 00 10                                         mov     [rsp+88h+var_58], 10000000h
.std:000000014EE68BE7 C7 44 24 28 08 00 00 00                                         mov     [rsp+88h+var_60], 8
.std:000000014EE68BEF C7 44 24 20 20 08 00 00                                         mov     [rsp+88h+var_68], 820h
.std:000000014EE68BF7 E8 04 09 C3 FD                                                  call    sub_14CA99500   ; Call Procedure
.std:000000014EE68BFC 48 8B 05 1D 8B 71 08                                            mov     rax, cs:qword_157581720
.std:000000014EE68C03
.std:000000014EE68C03                                                 loc_14EE68C03:                          ; CODE XREF: sub_14EE68B60+14↑j
.std:000000014EE68C03 48 81 C4 88 00 00 00                                            add     rsp, 88h        ; Add
.std:000000014EE68C0A C3                                                              retn                    ; Return Near from Procedure
.std:000000014EE68C0A                                                 sub_14EE68B60   endp
.std:000000014EE68C0A
.std:000000014EE68C0A                                                 ; ---------------------------------------------------------------------------
.std:000000014EE68C0B CC CC CC CC CC                                                  align 10h
.std:000000014EE68C10
.std:000000014EE68C10                                                 ; =============== S U B R O U T I N E =======================================
.std:000000014EE68C10
.std:000000014EE68C10
.std:000000014EE68C10                                                 sub_14EE68C10   proc near               ; CODE XREF: sub_14EE68E90+15↓p
.std:000000014EE68C10 B8 0B 63 D9 C3                                                  mov     eax, 0C3D9630Bh
.std:000000014EE68C15 C3                                                              retn                    ; Return Near from Procedure
.std:000000014EE68C15                                                 sub_14EE68C10   endp
.std:000000014EE68C15
.std:000000014EE68C15         

.std:00000001506C8C48                                                 aCore:                                  ; DATA XREF: sub_140895C80+B↑o
.std:00000001506C8C48                                                                                         ; sub_140895DD0+B↑o ...
.std:00000001506C8C48 43 00 6F 00 72 00 65 00 00 00                                   text "UTF-16LE", 'Core',0
.std:00000001506C8C52 00                                                              db    0
.std:00000001506C8C53 00                                                              db    0
.std:00000001506C8C54 00                                                              db    0
.std:00000001506C8C55 00                                                              db    0
.std:00000001506C8C56 00                                                              db    0
.std:00000001506C8C57 00                                                              db    0
.std:00000001506C8C58 70 9F A8 40 01 00 00 00                         off_1506C8C58   dq offset sub_140A89F70 ; DATA XREF: sub_140A89D10+6↑o
.std:00000001506C8C58                                                                                         ; sub_140A89DA0+1A↑o ...
.std:00000001506C8C60 55 6E 6B 6E 6F 77 6E 00                         aUnknown_0      db 'Unknown',0          ; DATA XREF: sub_1401FB7A0+EB↑o
.std:00000001506C8C60                                                                                         ; sub_1401FB910+EB↑o ...
.std:00000001506C8C68                                                 aD:                                     ; DATA XREF: sub_140AC7CC0+18↑o
.std:00000001506C8C68                                                                                         ; sub_140ADFFB0:loc_140AE010A↑o ...
.std:00000001506C8C68 25 00 64 00 00 00                                               text "UTF-16LE", '%d',0
.std:00000001506C8C6E 00                                                              db    0
.std:00000001506C8C6F 00                                                              db    0
.std:00000001506C8C70 10 9D A8 40 01 00 00 00                         off_1506C8C70   dq offset sub_140A89D10 ; DATA XREF: sub_140A892D0+36↑o
.std:00000001506C8C70                                                                                         ; sub_1428C79D0+2A↑o ...
.std:00000001506C8C78 A0 9D A8 40 01 00 00 00                         off_1506C8C78   dq offset sub_140A89DA0 ; DATA XREF: sub_140A892D0+49↑o
.std:00000001506C8C80 70 9D A8 40 01 00 00 00                         off_1506C8C80   dq offset sub_140A89D70 ; DATA XREF: sub_140A897A0:loc_140A897D6↑o
.std:00000001506C8C80                                                                                         ; sub_140A89810:loc_140A89846↑o ...
.std:00000001506C8C88 51                                                              db  51h ; Q
.std:00000001506C8C89 63                                                              db  63h ; c
.std:00000001506C8C8A 26                                                              db  26h ; &
.std:00000001506C8C8B 50                                                              db  50h ; P
.std:00000001506C8C8C 01                                                              db    1
.std:00000001506C8C8D 00                                                              db    0
.std:00000001506C8C8E 00                                                              db    0
.std:00000001506C8C8F 00                                                              db    0
.std:00000001506C8C90 2D 00 00 00                                     dword_1506C8C90 dd 2Dh                  ; DATA XREF: sub_140AAEE20+DA↑o
.std:00000001506C8C90                                                                                         ; sub_140AB7200+42BB↑o ...
.std:00000001506C8C94 00                                                              db    0
.std:00000001506C8C95 00                                                              db    0
.std:00000001506C8C96 00                                                              db    0
.std:00000001506C8C97 00                                                              db    0
.std:00000001506C8C98                                                 aNone:                                  ; DATA XREF: sub_140349030+4B↑o
.std:00000001506C8C98                                                                                         ; sub_14034B520+4B↑o ...
.std:00000001506C8C98 4E 00 6F 00 6E 00 65 00 00 00                                   text "UTF-16LE", 'None',0
.std:00000001506C8CA2 00                                                              db    0
.std:00000001506C8CA3 00                                                              db    0
.std:00000001506C8CA4                                                 asc_1506C8CA4:                          ; DATA XREF: sub_140203840+4D↑o
.std:00000001506C8CA4                                                                                         ; sub_14028FA60+1F↑o ...
.std:00000001506C8CA4 2E 00 00 00                                                     text "UTF-16LE", '.',0
.std:00000001506C8CA8                                                 aSS:                                    ; DATA XREF: sub_140AB7200+24D3↑o
.std:00000001506C8CA8                                                                                         ; sub_140B2FA00+1C7↑o ...
.std:00000001506C8CA8 25 00 73 00 2E 00 25 00 73 00 00 00                             text "UTF-16LE", '%s.%s',0
.std:00000001506C8CB4                                                 asc_1506C8CB4:                          ; DATA XREF: sub_1402EA300+C↑o
.std:00000001506C8CB4                                                                                         ; sub_1402EA340+C↑o ...
.std:00000001506C8CB4 20 00 00 00                                                     text "UTF-16LE", ' ',0
.std:00000001506C8CB8                                                 aLocal:                                 ; DATA XREF: sub_140A8B210:loc_140A8B309↑o
.std:00000001506C8CB8                                                                                         ; sub_14E509170+1A6↑o ...
.std:00000001506C8CB8 4C 00 6F 00 63 00 61 00 6C 00 00 00                             text "UTF-16LE", 'Local',0
.std:00000001506C8CC4 00                                                              db    0
.std:00000001506C8CC5 00                                                              db    0
.std:00000001506C8CC6 00                                                              db    0
.std:00000001506C8CC7 00                                                              db    0
.std:00000001506C8CC8                                                 aEngine_0:                              ; DATA XREF: sub_1409F6ED0+E↑o
.std:00000001506C8CC8                                                                                         ; sub_1409F6ED0+18↑o ...
.std:00000001506C8CC8 45 00 6E 00 67 00 69 00 6E 00 65 00 00 00                       text "UTF-16LE", 'Engine',0
.std:00000001506C8CD6 00                                                              db    0
.std:00000001506C8CD7 00                                                              db    0
.std:00000001506C8CD8 51 63 26 50 01 00 00 00                         off_1506C8CD8   dq offset sub_150266351 ; DATA XREF: sub_140233F00+B↑o
.std:00000001506C8CD8                                                                                         ; sub_140233F60+B↑o ...
.std:00000001506C8CE0 70 AB AA 40 01 00 00 00                         off_1506C8CE0   dq offset unk_140AAAB70 ; DATA XREF: sub_140AA9CE0+1CB↑o
.std:00000001506C8CE0                                                                                         ; sub_1410F6480+CC↑o ...
.std:00000001506C8CE8 50                                                              db  50h ; P
.std:00000001506C8CE9 1C                                                              db  1Ch
.std:00000001506C8CEA A8                                                              db 0A8h
.std:00000001506C8CEB 40                                                              db  40h ; @
.std:00000001506C8CEC 01                                                              db    1
.std:00000001506C8CED 00                                                              db    0
.std:00000001506C8CEE 00                                                              db    0
.std:00000001506C8CEF 00                                                              db    0
.std:00000001506C8CF0                                                 aGame_0:                                ; DATA XREF: sub_1409BD5B0+4B↑o
.std:00000001506C8CF0                                                                                         ; sub_140AAD1C0+16B↑o ...
.std:00000001506C8CF0 47 00 61 00 6D 00 65 00 00 00                                   text "UTF-16LE", 'Game',0
.std:00000001506C8CFA 00                                                              db    0
.std:00000001506C8CFB 00                                                              db    0
.std:00000001506C8CFC 00                                                              db    0
.std:00000001506C8CFD 00                                                              db    0
.std:00000001506C8CFE 00                                                              db    0
.std:00000001506C8CFF 00                                                              db    0
.std:00000001506C8D00                                                 aLandscape:                             ; DATA XREF: sub_1409807B0+B↑o
.std:00000001506C8D00                                                                                         ; sub_140980A00+E↑o ...
.std:00000001506C8D00 4C 00 61 00 6E 00 64 00 73 00 63 00 61 00 70 00…                text "UTF-16LE", 'Landscape',0
.std:00000001506C8D14 00                                                              db    0
.std:00000001506C8D15 00                                                              db    0
.std:00000001506C8D16 00                                                              db    0
.std:00000001506C8D17 00                                                              db    0
.std:00000001506C8D18                                                 aAudio:                                 ; DATA XREF: sub_140AB7200+84C9↑o
.std:00000001506C8D18                                                                                         ; sub_142983A20+1DF↑o ...
.std:00000001506C8D18 41 00 75 00 64 00 69 00 6F 00 00 00                             text "UTF-16LE", 'Audio',0
.std:00000001506C8D24 00                                                              db    0
.std:00000001506C8D25 00                                                              db    0
.std:00000001506C8D26 00                                                              db    0
.std:00000001506C8D27 00                                                              db    0
.std:00000001506C8D28 51 63 26 50 01 00 00 00                         off_1506C8D28   dq offset sub_150266351 ; DATA XREF: sub_142866960+3D↑o
.std:00000001506C8D28                                                                                         ; sub_142866C50+29↑o ...


```

---
c core
---
```c

__int64 sub_14EE68B60()
{
  __int64 result; // rax

  result = qword_157581720;
  if ( !qword_157581720 )
  {
    sub_14CA99500(
      L"/Script/Engine",
      L"World",
      &qword_157581720,
      sub_14EE68E60,
      0x820,
      8,
      0x10000000,
      0LL,
      L"Engine",
      sub_14EE682E0,
      PxLib_start_UE4_PixUI,
      sub_14EB235E0,
      sub_140AD3870,
      sub_140AD3870,
      0,
      0LL);
    return qword_157581720;
  }
  return result;
}



__int64 __fastcall sub_1452CCB50(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r13
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  __int16 *v13; // r12
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
  __int64 v26; // rbx
  __int64 v27; // rax
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
  int v47; // [rsp+20h] [rbp-68h]
  __int64 v48; // [rsp+40h] [rbp-48h] BYREF
  char v49[64]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v51; // [rsp+98h] [rbp+10h] BYREF
  __int64 v52; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 0x20);
  if ( !v3 )
    return 0LL;
  v6 = a3[0x1E];
  if ( !v6 && (v6 = sub_14E20A610((__int64)a3)) == 0
    || (v10 = sub_14EE68B60(),
        v7 = *(_QWORD *)(v6 + 8),
        v9 = v10 + 0x30,
        v11 = *(int *)(v10 + 0x38),
        (int)v11 > *(_DWORD *)(v7 + 0x38))
    || (v8 = v11, *(_QWORD *)(*(_QWORD *)(v7 + 0x30) + 8 * v11) != v9) )
  {
    if ( (unsigned __int8)off_156A1D480(v8, v7, v9) )
    {
      v51 = qword_156A20488;
      LOBYTE(v51) = HIBYTE(qword_156A20488) ^ 0x36;
      HIBYTE(v51) = qword_156A20488 ^ 0x36;
      v6 = v51;
    }
    else
    {
      v6 = qword_156A1E488;
    }
  }
  v12 = a3[0x54];
  if ( !v12 )
    return 0LL;
  if ( *(_DWORD *)(a2 + 0x18) )
    v13 = (__int16 *)off_15684AC40(a2 + 0x10);
  else
    v13 = &word_1506C8658;
  v52 = *(_QWORD *)(v3 + 8);
  v14 = 0LL;
  v15 = *(_QWORD *)(v6 + 0xF8);
  if ( !v15 )
  {
    v16 = 0LL;
    goto LABEL_25;
  }
  v16 = v15 & 0xFFFFFFFFFFFFLL;
  v17 = HIWORD(v15) & 0x3FFF;
  v51 = v15 & 0xFFFFFFFFFFFFLL;
  if ( v15 < 0 )
  {
    switch ( dword_15684AC64 )
    {
      case 1:
        sub_140A8CB50(qword_1573D82C0, &v51, 4LL, HIWORD(v15) & 0x3FFF);
        goto LABEL_23;
      case 2:
        v18 = qword_1573D82C8;
        v19 = (unsigned int)v17;
        break;
      case 3:
        v18 = qword_1573D82D0[v17];
        v19 = (unsigned int)v17;
        break;
      default:
        goto LABEL_23;
    }
    (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v18 + 0x40))(&v51, 4LL, v19, *(_QWORD *)(v18 + 8));
LABEL_23:
    v16 = v51 & 0xFFFFFFFFFFFFLL;
    if ( (v51 & 0x800000000000LL) != 0 )
      v16 = v51 & 0xFFFFFFFFFFFFLL | 0xFFFF000000000000uLL;
  }
LABEL_25:
  v20 = (_QWORD *)sub_14C8D4F80(v49, v13, 1LL);
  sub_14CC42E70(&v48, v16, v52, *v20);
  if ( !*(_BYTE *)(a1 + 8) )
  {
    v26 = v48;
    v27 = v12;
    if ( v12 == 0xFFFFFFFFFFFFFFFFuLL )
      v27 = sub_14CBE0140();
    v28 = sub_14CC4E3C0(v3, v27, v26, 0xFFFFFFFLL, 0LL, 0, 0x7F800000);
    v24 = v28;
    if ( v28 )
    {
      sub_14E210ED0(v28, v6);
      goto LABEL_36;
    }
    return 0LL;
  }
  v21 = sub_1452D2930(v6);
  if ( !v21 )
  {
    if ( (unsigned __int8)byte_157062AF0 >= 2u )
      sub_14C828330(
        "Unknown",
        0x1CDLL,
        &unk_157062AF4,
        2LL,
        L"failed to destroy component because player manager is null");
    return 0LL;
  }
  v22 = sub_1452D2990(v21 + 0x88, a3[0x52], v6);
  v23 = sub_1452D3C20(v22, a2);
  v24 = v23;
  if ( !v23 )
    return 0LL;
  sub_14E0609E0(v12, v23);
LABEL_36:
  v29 = sub_14EE32B80();
  v31 = *(_QWORD *)(v24 + 8);
  v32 = v29 + 0x30;
  v33 = *(int *)(v29 + 0x38);
  if ( (int)v33 > *(_DWORD *)(v31 + 0x38) )
    goto LABEL_51;
  v30 = v33;
  if ( *(_QWORD *)(*(_QWORD *)(v31 + 0x30) + 8 * v33) != v32 || !v24 )
    goto LABEL_51;
  LOBYTE(v47) = 0;
  sub_14E2DE230(v24, &xmmword_1573A8DF0, 0LL, 0LL, v47);
  v34 = *(_QWORD *)(v12 + 0x180);
  v52 = 0LL;
  if ( v34 )
  {
    v14 = v34 & 0xFFFFFFFFFFFFLL;
    v35 = HIWORD(v34) & 0x3FFF;
    v51 = v34 & 0xFFFFFFFFFFFFLL;
    if ( (v34 & 0x8000000000000000uLL) != 0LL )
    {
      switch ( dword_15684AC64 )
      {
        case 1:
          sub_140A8CB50(qword_1573D82C0, &v51, 4LL, HIWORD(v34) & 0x3FFF);
          goto LABEL_48;
        case 2:
          v36 = qword_1573D82C8;
          v37 = (unsigned int)v35;
          break;
        case 3:
          v37 = HIWORD(v34) & 0x3FFF;
          v36 = qword_1573D82D0[v35];
          break;
        default:
          goto LABEL_48;
      }
      (*(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(v36 + 0x40))(&v51, 4LL, v37, *(_QWORD *)(v36 + 8));
LABEL_48:
      v14 = v51 & 0xFFFFFFFFFFFFLL;
      if ( (v51 & 0x800000000000LL) != 0 )
        v14 = v51 & 0xFFFFFFFFFFFFLL | 0xFFFF000000000000uLL;
    }
  }
  sub_14E2BB870(v24, v14, &dword_157532C78, v52);
LABEL_51:
  v38 = sub_14EDFFAF0(v30, v31, v32);
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
  v43 = sub_14EE3A9C0(v39, v40, v41);
  v44 = *(_QWORD *)(v24 + 8);
  v45 = v43 + 0x30;
  v46 = *(int *)(v43 + 0x38);
  if ( (int)v46 <= *(_DWORD *)(v44 + 0x38) && *(_QWORD *)(*(_QWORD *)(v44 + 0x30) + 8 * v46) == v45 )
  {
    if ( v24 )
    {
      sub_14E2DC280(v24, 2LL);
      sub_14E2DC050(v24, 0LL);
    }
  }
  return v24;
}


__int64 sub_1420F1FB0()
{
  const char *v0; // rdi
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // r12d
  int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int16 *v24; // r14
  __int16 *v25; // r15
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rbx
  unsigned int v28; // ebx
  __int64 v29; // rax
  const char *v30; // rcx
  __int16 *v31; // r15
  unsigned __int64 v32; // rbx
  unsigned int v33; // ebx
  __int64 v34; // rax
  const char *v35; // rcx
  __int16 *v36; // r15
  unsigned __int64 v37; // rbx
  unsigned int v38; // ebx
  __int64 v39; // rax
  const char *v40; // rcx
  __int16 *v41; // r15
  unsigned __int64 v42; // rbx
  unsigned int v43; // ebx
  __int64 v44; // rax
  const char *v45; // rcx
  __int64 v46; // rax
  char *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // [rsp+20h] [rbp-E0h]
  __int64 v59; // [rsp+40h] [rbp-C0h] BYREF
  int v60; // [rsp+48h] [rbp-B8h]
  __int64 v61; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h]
  char v65[8]; // [rsp+70h] [rbp-90h] BYREF
  int v66; // [rsp+78h] [rbp-88h]
  char v67[8]; // [rsp+80h] [rbp-80h] BYREF
  int v68; // [rsp+88h] [rbp-78h]
  char v69[128]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v70; // [rsp+110h] [rbp+10h] BYREF
  char *v71; // [rsp+118h] [rbp+18h]
  int v72; // [rsp+120h] [rbp+20h]
  char v73[128]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v74; // [rsp+1B0h] [rbp+B0h] BYREF
  const char *v75; // [rsp+1B8h] [rbp+B8h]
  int v76; // [rsp+1C0h] [rbp+C0h]
  char v77[128]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v78; // [rsp+250h] [rbp+150h] BYREF
  const char *v79; // [rsp+258h] [rbp+158h]
  int v80; // [rsp+260h] [rbp+160h]
  char v81[128]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v82; // [rsp+2F0h] [rbp+1F0h] BYREF
  const char *v83; // [rsp+2F8h] [rbp+1F8h]
  int v84; // [rsp+300h] [rbp+200h]
  char v85[128]; // [rsp+310h] [rbp+210h] BYREF
  __int64 v86; // [rsp+390h] [rbp+290h] BYREF
  const char *v87; // [rsp+398h] [rbp+298h]
  int v88; // [rsp+3A0h] [rbp+2A0h]

  v0 = 0LL;
  v1 = qword_156E35710;
  result = (unsigned __int8)byte_1573D83D8;
  if ( byte_1573D83D8 )
  {
    v3 = (unsigned int)MEMORY[0x10EBCBDD]() != dword_1573D83C8;
    result = (unsigned __int8)byte_1573D83D8;
  }
  else
  {
    v3 = 0LL;
  }
  if ( *(_BYTE *)(v3 + v1) )
  {
    v4 = qword_156E35728;
    if ( (_BYTE)result )
    {
      result = MEMORY[0x10EBCBDD]();
      v5 = (_DWORD)result != dword_1573D83C8;
    }
    else
    {
      v5 = 0LL;
    }
    if ( *(_BYTE *)(v5 + v4) != 1 )
    {
      sub_1420EBE20(v67);
      v63 = 0LL;
      v64 = 0LL;
      v61 = 0LL;
      v62 = 0LL;
      sub_14C8E6870(&v63, &v61);
      v6 = (__int64 *)sub_14C8E64F0(&v59);
      if ( &v61 != v6 )
      {
        off_15684AC40(&v61);
        if ( off_15684AC40(&v61) )
        {
          v7 = off_15684AC40(&v61);
          sub_14C7AA1D0(v7);
        }
        v61 = *v6;
        off_15684AC40(&v61);
        *v6 = 0LL;
        off_15684AC40(v6);
        v62 = v6[1];
        v6[1] = 0LL;
      }
      off_15684AC40(&v59);
      sub_140A81920(&v59, 0LL);
      if ( off_15684AC40(&v59) )
      {
        v8 = off_15684AC40(&v59);
        sub_14C7AA1D0(v8);
      }
      v9 = sub_14C8F2200();
      v10 = sub_14C782090();
      sub_14E46A460(v65, qword_156E35390);
      if ( (unsigned __int8)off_156A1D480(v12, v11, v13) )
      {
        v59 = qword_156A20488;
        LOBYTE(v59) = HIBYTE(qword_156A20488) ^ 0x36;
        HIBYTE(v59) = qword_156A20488 ^ 0x36;
        v16 = v59;
      }
      else
      {
        v16 = qword_156A1E488;
      }
      if ( v16
        && ((unsigned __int8)off_156A1D480(v16, v14, v15)
          ? (v59 = qword_156A20488,
             LOBYTE(v59) = HIBYTE(qword_156A20488) ^ 0x36,
             HIBYTE(v59) = qword_156A20488 ^ 0x36,
             v17 = v59)
          : (v17 = qword_156A1E488),
            sub_14EB31150(v17) && (v18 = sub_140A88AE0(&off_156A1D480), *(_QWORD *)(sub_14EB31150(v18) + 0xA0))) )
      {
        v19 = sub_140A88AE0(&off_156A1D480);
        v20 = sub_14EB31150(v19);
        v21 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v20 + 0xA0) + 0x18LL))(
                                *(_QWORD *)(v20 + 0xA0),
                                &v59);
        v22 = *v21;
        v23 = v21[1];
      }
      else
      {
        v23 = (unsigned int)v59;
        v22 = (unsigned int)v59;
      }
      sub_14C76BD80(&v59, L"X=%d Y=%d", v22, v23);
      v24 = &word_1506C8658;
      if ( v60 )
        v25 = (__int16 *)off_15684AC40(&v59);
      else
        v25 = &word_1506C8658;
      v86 = 0LL;
      v26 = 0xFFFFFFFFFFFFFFFFuLL;
      if ( v25 )
      {
        v27 = 0xFFFFFFFFFFFFFFFFuLL;
        do
          ++v27;
        while ( v25[v27] );
        v88 = v27;
        v28 = v27 + 1;
        sub_140B3FFF0(v85, 0LL, v28, 1LL);
        v29 = off_15684AC40(&v86);
        v30 = v85;
        if ( v29 )
          v30 = (const char *)v29;
        v87 = v30;
        sub_140AD5E80((_DWORD)v30, v28, (_DWORD)v25, v28, 0x3F);
      }
      else
      {
        v87 = 0LL;
        v88 = 0;
      }
      if ( v66 )
        v31 = (__int16 *)off_15684AC40(v65);
      else
        v31 = &word_1506C8658;
      v82 = 0LL;
      if ( v31 )
      {
        v32 = 0xFFFFFFFFFFFFFFFFuLL;
        do
          ++v32;
        while ( v31[v32] );
        v84 = v32;
        v33 = v32 + 1;
        sub_140B3FFF0(v81, 0LL, v33, 1LL);
        v34 = off_15684AC40(&v82);
        v35 = v81;
        if ( v34 )
          v35 = (const char *)v34;
        v83 = v35;
        sub_140AD5E80((_DWORD)v35, v33, (_DWORD)v31, v33, 0x3F);
      }
      else
      {
        v83 = 0LL;
        v84 = 0;
      }
      if ( (_DWORD)v62 )
        v36 = (__int16 *)off_15684AC40(&v61);
      else
        v36 = &word_1506C8658;
      v78 = 0LL;
      if ( v36 )
      {
        v37 = 0xFFFFFFFFFFFFFFFFuLL;
        do
          ++v37;
        while ( v36[v37] );
        v80 = v37;
        v38 = v37 + 1;
        sub_140B3FFF0(v77, 0LL, v38, 1LL);
        v39 = off_15684AC40(&v78);
        v40 = v77;
        if ( v39 )
          v40 = (const char *)v39;
        v79 = v40;
        sub_140AD5E80((_DWORD)v40, v38, (_DWORD)v36, v38, 0x3F);
      }
      else
      {
        v79 = 0LL;
        v80 = 0;
      }
      if ( (_DWORD)v64 )
        v41 = (__int16 *)off_15684AC40(&v63);
      else
        v41 = &word_1506C8658;
      v74 = 0LL;
      if ( v41 )
      {
        v42 = 0xFFFFFFFFFFFFFFFFuLL;
        do
          ++v42;
        while ( v41[v42] );
        v76 = v42;
        v43 = v42 + 1;
        sub_140B3FFF0(v73, 0LL, v43, 1LL);
        v44 = off_15684AC40(&v74);
        v45 = v73;
        if ( v44 )
          v45 = (const char *)v44;
        v75 = v45;
        sub_140AD5E80((_DWORD)v45, v43, (_DWORD)v41, v43, 0x3F);
      }
      else
      {
        v75 = 0LL;
        v76 = 0;
      }
      if ( v68 )
        v24 = (__int16 *)off_15684AC40(v67);
      v70 = 0LL;
      if ( v24 )
      {
        do
          ++v26;
        while ( v24[v26] );
        v72 = v26;
        sub_140B3FFF0(v69, 0LL, (unsigned int)(v26 + 1), 1LL);
        v46 = off_15684AC40(&v70);
        v47 = v69;
        if ( v46 )
          v47 = (char *)v46;
        v71 = v47;
        sub_140AD5E80((_DWORD)v47, v26 + 1, (_DWORD)v24, v26 + 1, 0x3F);
        v0 = v71;
      }
      else
      {
        v71 = 0LL;
        v72 = 0;
      }
      LODWORD(v58) = v9;
      sub_14FEA3EAB("DeviceInfo: %s,%s,%s,%d,%dGB,%s,%s", v0, v75, v79, v58, v10, v83, v87);
      if ( off_15684AC40(&v70) )
      {
        v48 = off_15684AC40(&v70);
        sub_14C7AA1D0(v48);
      }
      if ( off_15684AC40(&v74) )
      {
        v49 = off_15684AC40(&v74);
        sub_14C7AA1D0(v49);
      }
      if ( off_15684AC40(&v78) )
      {
        v50 = off_15684AC40(&v78);
        sub_14C7AA1D0(v50);
      }
      if ( off_15684AC40(&v82) )
      {
        v51 = off_15684AC40(&v82);
        sub_14C7AA1D0(v51);
      }
      if ( off_15684AC40(&v86) )
      {
        v52 = off_15684AC40(&v86);
        sub_14C7AA1D0(v52);
      }
      off_15684AC40(&v59);
      sub_140A81920(&v59, 0LL);
      if ( off_15684AC40(&v59) )
      {
        v53 = off_15684AC40(&v59);
        sub_14C7AA1D0(v53);
      }
      off_15684AC40(v65);
      sub_140A81920(v65, 0LL);
      if ( off_15684AC40(v65) )
      {
        v54 = off_15684AC40(v65);
        sub_14C7AA1D0(v54);
      }
      off_15684AC40(&v61);
      sub_140A81920(&v61, 0LL);
      if ( off_15684AC40(&v61) )
      {
        v55 = off_15684AC40(&v61);
        sub_14C7AA1D0(v55);
      }
      off_15684AC40(&v63);
      sub_140A81920(&v63, 0LL);
      if ( off_15684AC40(&v63) )
      {
        v56 = off_15684AC40(&v63);
        sub_14C7AA1D0(v56);
      }
      off_15684AC40(v67);
      sub_140A81920(v67, 0LL);
      result = off_15684AC40(v67);
      if ( result )
      {
        v57 = off_15684AC40(v67);
        return sub_14C7AA1D0(v57);
      }
    }
  }
  return result;
}

```
---
C core Offset C2w = 0x210 && offset BoneArray = {0x6F8,0x708,0x718} size 0x30  
---
```c
void __fastcall sub_14D903410(__int64 a1)
{
  _OWORD *v2; // rax
  __m128 v3; // xmm0
  char v4[48]; // [rsp+20h] [rbp-48h] BYREF

  sub_14E289280();
  v2 = (_OWORD *)sub_14E2CB030(a1, v4);
  *(_OWORD *)(a1 + 0x5D0) = *v2;
  *(_OWORD *)(a1 + 0x5E0) = v2[1];
  *(_OWORD *)(a1 + 0x5F0) = v2[2];
  v3 = *(__m128 *)(((__int64 (__fastcall *)(__int64))sub_140B0B0A0)(a1) + 0x20);
  *(_QWORD *)(a1 + 0x600) = _mm_unpacklo_ps(v3, _mm_shuffle_ps(v3, v3, 0x55)).m128_u64[0];
  *(_DWORD *)(a1 + 0x608) = _mm_shuffle_ps(v3, v3, 0xAA).m128_u32[0];
}
void __fastcall sub_14E289280(__int64 a1)
{
  float v2; // xmm0_4
  __int64 v3; // rax
  char v4; // al

  _InterlockedIncrement(dword_15752FA38);
  if ( *(float *)(a1 + 0x260) == 0.0 )
  {
    v2 = *(float *)(a1 + 0x25C);
    if ( v2 > 0.0 )
    {
      if ( (*(_BYTE *)(a1 + 0x268) & 0x40) != 0 || *(_QWORD *)(a1 + 0x480) )
        v2 = 0.0;
      *(float *)(a1 + 0x260) = v2;
    }
  }
  ((void (*)(void))unk_14E2027F0)();
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 0x4D8LL))(a1);
  if ( (unsigned __int8)sub_14E2E07F0(a1)
    && ((unsigned __int8)sub_14E2E08C0(a1) || (*(_BYTE *)(a1 + 0x294) & 0x20) != 0) )
  {
    v3 = *(_QWORD *)(a1 + 0xF0);
    if ( !v3 )
      v3 = sub_14E20A610(a1);
    (***(void (__fastcall ****)(_QWORD, __int64))(v3 + 0x1B8))(*(_QWORD *)(v3 + 0x1B8), a1);
  }
  v4 = *(_BYTE *)(a1 + 0x269);
  if ( (v4 & 4) == 0 )
  {
    if ( *(_BYTE *)(a1 + 0x19F) || (v4 & 2) != 0 )
      JUMPOUT(0x14E28935CLL);
    if ( *(char *)(a1 + 0x268) >= 0 && *(_QWORD *)(a1 + 0xE8) )
    {
      sub_14E078330();
      JUMPOUT(0x14E28934ELL);
    }
  }
  JUMPOUT(0x14E289378LL);
}

__int64 __fastcall sub_14E2CB030(__int64 a1, __int64 a2)
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
    v8 = _mm_div_ps(v7, (__m128)xmmword_1575302E0);
    v9 = _mm_cvtepi32_ps(_mm_cvttps_epi32(v8));
    v10 = _mm_sub_ps(
            v7,
            _mm_mul_ps(
              _mm_xor_ps(
                _mm_and_ps(
                  _mm_cmple_ps((__m128)xmmword_1575302F0, _mm_and_ps(v8, (__m128)xmmword_157530020)),
                  _mm_xor_ps(v9, v8)),
                v9),
              (__m128)xmmword_1575302E0));
    v11 = _mm_add_ps((__m128)xmmword_1575302E0, v10);
    v12 = _mm_xor_ps(_mm_and_ps(_mm_xor_ps(v11, v10), _mm_cmple_ps((__m128)0LL, v10)), v11);
    v13 = _mm_xor_ps(
            _mm_and_ps(
              _mm_xor_ps(_mm_sub_ps(v12, (__m128)xmmword_1575302E0), v12),
              _mm_cmplt_ps((__m128)xmmword_1575302D0, v12)),
            v12);
    *(_QWORD *)v6 = _mm_unpacklo_ps(v13, _mm_shuffle_ps(v13, v13, 0x55)).m128_u64[0];
    *(_DWORD *)(v6 + 8) = _mm_shuffle_ps(v13, v13, 0xAA).m128_u32[0];
    *(_OWORD *)(a1 + 0x1F0) = *(_OWORD *)sub_14C8329D0(v6, v21);
  }
  v14 = *(_OWORD *)(a1 + 0x1F0);
  v15 = (unsigned __int64 *)sub_140EC07E0(a1, &v20);
  v16 = (__m128)*((unsigned int *)v15 + 2);
  v17 = (__m128)*v15;
  result = a2;
  *(__m128 *)(a2 + 0x10) = _mm_movelh_ps(v17, v16);
  *(_OWORD *)a2 = v14;
  *(__m128 *)(a2 + 0x20) = _mm_movelh_ps((__m128)v19, (__m128)_mm_cvtsi32_si128(v3));
  return result;
}
__int64 __fastcall sub_140B0B0A0(__int64 a1)
{
  return a1 + 0x210;
}
```
---
Token
---

```asm
.std:00000001575302D0 00 00 34 43 00 00 34 43 00 00 34 43 00 00 34 43 xmmword_1575302D0 xmmword 43340000433400004334000043340000h
.std:00000001575302D0                                                                                         ; DATA XREF: sub_14E2CB030+E2↑r
.std:00000001575302E0 00 00 B4 43 00 00 B4 43 00 00 B4 43 00 00 B4 43 xmmword_1575302E0 xmmword 43B4000043B4000043B4000043B40000h
.std:00000001575302E0                                                                                         ; DATA XREF: sub_14E2CB030+73↑r
.std:00000001575302F0 00 00 00 4B 00 00 00 4B 00 00 00 4B 00 00 00 4B xmmword_1575302F0 xmmword 4B0000004B0000004B0000004B000000h
.std:00000001575302F0                                                                                         ; DATA XREF: sub_14E2CB030+88↑r
.std:0000000157530300 50 86 6C 50 01 00 00 00                         off_157530300   dq offset off_1506C8650 ; DATA XREF: sub_1409B4D00+49↑w
.std:0000000157530308 80 36 2D 12 00 00 00 00                         qword_157530308 dq 122D3680h            ; DATA XREF: sub_1409B4D00+42↑w
.std:0000000157530310 B8 36 2D 12 00 00 00 00                         qword_157530310 dq 122D36B8h            ; DATA XREF: sub_1409B4D00+60↑w
.std:0000000157530318 38 86 6C 50 01 00 00 00                         off_157530318   dq offset off_1506C8638 ; DATA XREF: sub_1409B55B0+54↑w
.std:0000000157530320 D0 CB 29 12 00 00 00 00                         qword_157530320 dq 1229CBD0h            ; DATA XREF: sub_1409B55B0+3F↑w
.std:0000000157530328 50 86 6C 50 01 00 00 00                         off_157530328   dq offset off_1506C8650 ; DATA XREF: sub_1409B57F0+10D↑w
.std:0000000157530328                                                                                         ; sub_1409B57F0+12F↑w
.std:0000000157530330 00 37 2D 12 00 00 00 00                         qword_157530330 dq 122D3700h            ; DATA XREF: sub_1409B57F0+FF↑w
.std:0000000157530330                                                                                         ; sub_1409B57F0+11D↑r
.std:0000000157530338 38 37 2D 12 00 00 00 00                         qword_157530338 dq 122D3738h            ; DATA XREF: sub_1409B57F0+128↑w
.std:0000000157530340 50 86 6C 50 01 00 00 00                         off_157530340   dq offset off_1506C8650 ; DATA XREF: sub_1409B5770+4C↑w
.std:0000000157530348 80 37 2D 12 00 00 00 00                         qword_157530348 dq 122D3780h            ; DATA XREF: sub_1409B5770+45↑w
.std:0000000157530350 B8 37 2D 12 00 00 00 00                         qword_157530350 dq 122D37B8h            ; DATA XREF: sub_1409B5770+63↑w
.std:0000000157530358 50 86 6C 50 01 00 00 00                         off_157530358   dq offset off_1506C8650 ; DATA XREF: sub_1409B4D70+49↑w
.std:0000000157530360 C0 37 2D 12 00 00 00 00                         qword_157530360 dq 122D37C0h            ; DATA XREF: sub_1409B4D70+42↑w
.std:0000000157530368 F8 37 2D 12 00 00 00 00                         qword_157530368 dq 122D37F8h            ; DATA XREF: sub_1409B4D70+60↑w
.std:0000000157530370 50 86 6C 50 01 00 00 00                         off_157530370   dq offset off_1506C8650 ; DATA XREF: sub_1409B5A20+4C↑w
.std:0000000157530378 40 38 2D 12 00 00 00 00                         qword_157530378 dq 122D3840h            ; DATA XREF: sub_1409B5A20+45↑w
.std:0000000157530380 78 38 2D 12 00 00 00 00                         qword_157530380 dq 122D3878h            ; DATA XREF: sub_1409B5A20+63↑w
.std:0000000157530388 50 86 6C 50 01 00 00 00                         off_157530388   dq offset off_1506C8650 ; DATA XREF: sub_1409B51A0+49↑w
.std:0000000157530390 C0 38 2D 12 00 00 00 00                         qword_157530390 dq 122D38C0h            ; DATA XREF: sub_1409B51A0+42↑w
.std:0000000157530398 F8 38 2D 12 00 00 00 00                         qword_157530398 dq 122D38F8h            ; DATA XREF: sub_1409B51A0+60↑w
.std:00000001575303A0 50 86 6C 50 01 00 00 00                         off_1575303A0   dq offset off_1506C8650 ; DATA XREF: sub_1409B5120+4C↑w
.std:00000001575303A8 00 39 2D 12 00 00 00 00                         qword_1575303A8 dq 122D3900h            ; DATA XREF: sub_1409B5120+45↑w
.std:00000001575303B0 38 39 2D 12 00 00 00 00                         qword_1575303B0 dq 122D3938h            ; DATA XREF: sub_1409B5120+63↑w
.std:00000001575303B8 50 86 6C 50 01 00 00 00                         off_1575303B8   dq offset off_1506C8650 ; DATA XREF: sub_1409B5280+49↑w
.std:00000001575303C0 80 39 2D 12 00 00 00 00                         qword_1575303C0 dq 122D3980h            ; DATA XREF: sub_1409B5280+42↑w
.std:00000001575303C8 B8 39 2D 12 00 00 00 00                         qword_1575303C8 dq 122D39B8h            ; DATA XREF: sub_1409B5280+60↑w
.std:00000001575303D0 50 86 6C 50 01 00 00 00                         off_1575303D0   dq offset off_1506C8650 ; DATA XREF: sub_1409B5210+49↑w
.std:00000001575303D8 00 3A 2D 12 00 00 00 00                         qword_1575303D8 dq 122D3A00h            ; DATA XREF: sub_1409B5210+42↑w
.std:00000001575303E0 38 3A 2D 12 00 00 00 00                         qword_1575303E0 dq 122D3A38h            ; DATA XREF: sub_1409B5210+60↑w
.std:00000001575303E8 50 86 6C 50 01 00 00 00                         off_1575303E8   dq offset off_1506C8650 ; DATA XREF: sub_1409B4ED0+4C↑w
.std:00000001575303F0 40 3A 2D 12 00 00 00 00                         qword_1575303F0 dq 122D3A40h            ; DATA XREF: sub_1409B4ED0+45↑w
.std:00000001575303F8 78 3A 2D 12 00 00 00 00                         qword_1575303F8 dq 122D3A78h            ; DATA XREF: sub_1409B4ED0+63↑w
.std:0000000157530400 50 86 6C 50 01 00 00 00                         off_157530400   dq offset off_1506C8650 ; DATA XREF: sub_1409B4E60+49↑w
.std:0000000157530408 80 3A 2D 12 00 00 00 00                         qword_157530408 dq 122D3A80h            ; DATA XREF: sub_1409B4E60+42↑w
.std:0000000157530410 B8 3A 2D 12 00 00 00 00                         qword_157530410 dq 122D3AB8h            ; DATA XREF: sub_1409B4E60+60↑w
.std:0000000157530418 50 86 6C 50 01 00 00 00                         off_157530418   dq offset off_1506C8650 ; DATA XREF: sub_1409B4B20+4C↑w
.std:0000000157530420 C0 3A 2D 12 00 00 00 00                         qword_157530420 dq 122D3AC0h            ; DATA XREF: sub_1409B4B20+45↑w
.std:0000000157530428 F8 3A 2D 12 00 00 00 00                         qword_157530428 dq 122D3AF8h            ; DATA XREF: sub_1409B4B20+63↑w
.std:0000000157530430 50 86 6C 50 01 00 00 00                         off_157530430   dq offset off_1506C8650 ; DATA XREF: sub_1409B5690+49↑w
.std:0000000157530438 40 3B 2D 12 00 00 00 00                         qword_157530438 dq 122D3B40h            ; DATA XREF: sub_1409B5690+42↑w
.std:0000000157530440 78 3B 2D 12 00 00 00 00                         qword_157530440 dq 122D3B78h            ; DATA XREF: sub_1409B5690+60↑w
.std:0000000157530448 38 86 6C 50 01 00 00 00                         off_157530448   dq offset off_1506C8638 ; DATA XREF: sub_1409B4AB0+54↑w
.std:0000000157530450 60 CD 29 12 00 00 00 00                         qword_157530450 dq 1229CD60h            ; DATA XREF: sub_1409B4AB0+3F↑w
.std:0000000157530458 38 86 6C 50 01 00 00 00                         off_157530458   dq offset off_1506C8638 ; DATA XREF: sub_1409B4620+2D↑o



```
```asm
.std:000000014D903410                                                 ; void sub_14D903410()
.std:000000014D903410                                                 sub_14D903410   proc near
.std:000000014D903410
.std:000000014D903410                                                 var_48          = byte ptr -48h
.std:000000014D903410                                                 var_18          = qword ptr -18h
.std:000000014D903410
.std:000000014D903410                                                 ; __unwind { // sub_15025F80C
.std:000000014D903410 40 53                                                           push    rbx
.std:000000014D903412 48 83 EC 60                                                     sub     rsp, 60h        ; Integer Subtraction
.std:000000014D903416 48 8B 05 E3 23 4C 09                                            mov     rax, cs:__security_cookie
.std:000000014D90341D 48 33 C4                                                        xor     rax, rsp        ; Logical Exclusive OR
.std:000000014D903420 48 89 44 24 50                                                  mov     [rsp+50h], rax
.std:000000014D903425 48 8B D9                                                        mov     rbx, rcx
.std:000000014D903428 E8 53 5E 98 00                                                  call    sub_14E289280   ; Call Procedure
.std:000000014D90342D 48 8D 54 24 20                                                  lea     rdx, [rsp+20h]  ; Load Effective Address
.std:000000014D903432 48 8B CB                                                        mov     rcx, rbx
.std:000000014D903435 E8 F6 7B 9C 00                                                  call    sub_14E2CB030   ; Call Procedure
.std:000000014D90343A 48 8B CB                                                        mov     rcx, rbx
.std:000000014D90343D 0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.std:000000014D903440 0F 11 83 D0 05 00 00                                            movups  xmmword ptr [rbx+5D0h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:000000014D903447 0F 10 48 10                                                     movups  xmm1, xmmword ptr [rax+10h] ; Move Unaligned Four Packed Single-FP
.std:000000014D90344B 0F 11 8B E0 05 00 00                                            movups  xmmword ptr [rbx+5E0h], xmm1 ; Move Unaligned Four Packed Single-FP
.std:000000014D903452 0F 10 40 20                                                     movups  xmm0, xmmword ptr [rax+20h] ; Move Unaligned Four Packed Single-FP
.std:000000014D903456 0F 11 83 F0 05 00 00                                            movups  xmmword ptr [rbx+5F0h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:000000014D90345D E8 3E 7C 20 F3                                                  call    loc_140B0B0A0   ; Call Procedure
.std:000000014D903462 0F 10 40 20                                                     movups  xmm0, xmmword ptr [rax+20h] ; Move Unaligned Four Packed Single-FP
.std:000000014D903466 0F 28 C8                                                        movaps  xmm1, xmm0      ; Move Aligned Four Packed Single-FP
.std:000000014D903469 0F 28 D0                                                        movaps  xmm2, xmm0      ; Move Aligned Four Packed Single-FP
.std:000000014D90346C 0F C6 D0 AA                                                     shufps  xmm2, xmm0, 0AAh ; Shuffle Single-FP
.std:000000014D903470 0F C6 C8 55                                                     shufps  xmm1, xmm0, 55h ; 'U' ; Shuffle Single-FP
.std:000000014D903474 0F 14 C1                                                        unpcklps xmm0, xmm1     ; Unpack Low Packed Single-FP Data
.std:000000014D903477 F2 0F 11 83 00 06 00 00                                         movsd   qword ptr [rbx+600h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014D90347F F3 0F 11 93 08 06 00 00                                         movss   dword ptr [rbx+608h], xmm2 ; Move Scalar Single-FP
.std:000000014D903487 48 8B 4C 24 50                                                  mov     rcx, [rsp+50h]
.std:000000014D90348C 48 33 CC                                                        xor     rcx, rsp        ; Logical Exclusive OR
.std:000000014D90348F E8 EC C4 95 02                                                  call    loc_15025F980   ; Call Procedure
.std:000000014D903494 48 83 C4 60                                                     add     rsp, 60h        ; Add
.std:000000014D903498 5B                                                              pop     rbx
.std:000000014D903499 C3                                                              retn                    ; Return Near from Procedure

.std:000000014E2CB030                                                 sub_14E2CB030   proc near               ; CODE XREF: sub_141CE8230+2231↑p
.std:000000014E2CB030                                                                                         ; sub_141D51480+2B28↑p ...
.std:000000014E2CB030 48 89 5C 24 08                                                  mov     [rsp+8], rbx
.std:000000014E2CB035 48 89 74 24 10                                                  mov     [rsp+10h], rsi
.std:000000014E2CB03A 57                                                              push    rdi
.std:000000014E2CB03B 48 83 EC 60                                                     sub     rsp, 60h        ; Integer Subtraction
.std:000000014E2CB03F F2 0F 10 81 84 01 00 00                                         movsd   xmm0, qword ptr [rcx+184h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB047 48 8B D9                                                        mov     rbx, rcx
.std:000000014E2CB04A 8B B1 8C 01 00 00                                               mov     esi, [rcx+18Ch]
.std:000000014E2CB050 48 8B FA                                                        mov     rdi, rdx
.std:000000014E2CB053 F2 0F 11 44 24 20                                               movsd   qword ptr [rsp+20h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB059 F2 0F 10 81 78 01 00 00                                         movsd   xmm0, qword ptr [rcx+178h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB061 48 81 C1 00 02 00 00                                            add     rcx, 200h       ; Add
.std:000000014E2CB068 0F 29 74 24 50                                                  movaps  xmmword ptr [rsp+50h], xmm6 ; Move Aligned Four Packed Single-FP
.std:000000014E2CB06D F2 0F 11 44 24 2C                                               movsd   qword ptr [rsp+2Ch], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB073 0F 2E 01                                                        ucomiss xmm0, dword ptr [rcx] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CB076 75 1E                                                           jnz     short loc_14E2CB096 ; Jump if Not Zero (ZF=0)
.std:000000014E2CB078 F3 0F 10 44 24 30                                               movss   xmm0, dword ptr [rsp+30h] ; Move Scalar Single-FP
.std:000000014E2CB07E 0F 2E 41 04                                                     ucomiss xmm0, dword ptr [rcx+4] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CB082 75 12                                                           jnz     short loc_14E2CB096 ; Jump if Not Zero (ZF=0)
.std:000000014E2CB084 F3 0F 10 83 80 01 00 00                                         movss   xmm0, dword ptr [rbx+180h] ; Move Scalar Single-FP
.std:000000014E2CB08C 0F 2E 41 08                                                     ucomiss xmm0, dword ptr [rcx+8] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CB090 0F 84 C5 00 00 00                                               jz      loc_14E2CB15B   ; Jump if Zero (ZF=1)
.std:000000014E2CB096
.std:000000014E2CB096                                                 loc_14E2CB096:                          ; CODE XREF: sub_14E2CB030+46↑j
.std:000000014E2CB096                                                                                         ; sub_14E2CB030+52↑j
.std:000000014E2CB096 F2 0F 10 9B 78 01 00 00                                         movsd   xmm3, qword ptr [rbx+178h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB09E 48 8D 54 24 40                                                  lea     rdx, [rsp+40h]  ; Load Effective Address
.std:000000014E2CB0A3 0F 28 35 36 52 26 09                                            movaps  xmm6, cs:xmmword_1575302E0 ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0AA 0F 28 CB                                                        movaps  xmm1, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0AD F3 0F 10 83 80 01 00 00                                         movss   xmm0, dword ptr [rbx+180h] ; Move Scalar Single-FP
.std:000000014E2CB0B5 0F 28 EB                                                        movaps  xmm5, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0B8 0F 28 25 31 52 26 09                                            movaps  xmm4, cs:xmmword_1575302F0 ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0BF 0F C6 C9 55                                                     shufps  xmm1, xmm1, 55h ; 'U' ; Shuffle Single-FP
.std:000000014E2CB0C3 0F 14 E9                                                        unpcklps xmm5, xmm1     ; Unpack Low Packed Single-FP Data
.std:000000014E2CB0C6 0F 16 E8                                                        movlhps xmm5, xmm0      ; Move Low to High Packed Single-FP
.std:000000014E2CB0C9 F2 0F 11 5C 24 2C                                               movsd   qword ptr [rsp+2Ch], xmm3 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB0CF 0F 28 D5                                                        movaps  xmm2, xmm5      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0D2 0F 5E D6                                                        divps   xmm2, xmm6      ; Packed Single-FP Divide
.std:000000014E2CB0D5 F3 0F 5B C2                                                     cvttps2dq xmm0, xmm2    ; Convert With Truncation Packed Single-Precision Floating-Point Values to Packed Doubleword Integers
.std:000000014E2CB0D9 0F 28 CA                                                        movaps  xmm1, xmm2      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0DC 0F 54 0D 3D 4F 26 09                                            andps   xmm1, cs:xmmword_157530020 ; Bitwise Logical And for Single-FP
.std:000000014E2CB0E3 0F 5B D8                                                        cvtdq2ps xmm3, xmm0     ; Convert Packed Doubleword Integers to Packed Double-Precision Floating-Point Values
.std:000000014E2CB0E6 0F C2 E1 02                                                     cmpleps xmm4, xmm1      ; Packed Single-FP Compare LE
.std:000000014E2CB0EA 0F 28 C3                                                        movaps  xmm0, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0ED 0F 28 CE                                                        movaps  xmm1, xmm6      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB0F0 0F 57 C2                                                        xorps   xmm0, xmm2      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB0F3 0F 54 E0                                                        andps   xmm4, xmm0      ; Bitwise Logical And for Single-FP
.std:000000014E2CB0F6 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB0F9 0F 57 E3                                                        xorps   xmm4, xmm3      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB0FC 0F 59 E6                                                        mulps   xmm4, xmm6      ; Packed Single-FP Multiply
.std:000000014E2CB0FF 0F 5C EC                                                        subps   xmm5, xmm4      ; Packed Single-FP Subtract
.std:000000014E2CB102 0F C2 C5 02                                                     cmpleps xmm0, xmm5      ; Packed Single-FP Compare LE
.std:000000014E2CB106 0F 58 CD                                                        addps   xmm1, xmm5      ; Packed Single-FP Add
.std:000000014E2CB109 0F 28 D1                                                        movaps  xmm2, xmm1      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB10C 0F 57 D5                                                        xorps   xmm2, xmm5      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB10F 0F 54 D0                                                        andps   xmm2, xmm0      ; Bitwise Logical And for Single-FP
.std:000000014E2CB112 0F 28 05 B7 51 26 09                                            movaps  xmm0, cs:xmmword_1575302D0 ; Move Aligned Four Packed Single-FP
.std:000000014E2CB119 0F 57 D1                                                        xorps   xmm2, xmm1      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB11C 0F C2 C2 01                                                     cmpltps xmm0, xmm2      ; Packed Single-FP Compare LT
.std:000000014E2CB120 0F 28 DA                                                        movaps  xmm3, xmm2      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB123 0F 5C DE                                                        subps   xmm3, xmm6      ; Packed Single-FP Subtract
.std:000000014E2CB126 0F 57 DA                                                        xorps   xmm3, xmm2      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB129 0F 54 D8                                                        andps   xmm3, xmm0      ; Bitwise Logical And for Single-FP
.std:000000014E2CB12C 0F 57 DA                                                        xorps   xmm3, xmm2      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2CB12F 0F 28 CB                                                        movaps  xmm1, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB132 0F 28 C3                                                        movaps  xmm0, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB135 0F C6 CB 55                                                     shufps  xmm1, xmm3, 55h ; 'U' ; Shuffle Single-FP
.std:000000014E2CB139 0F 28 D3                                                        movaps  xmm2, xmm3      ; Move Aligned Four Packed Single-FP
.std:000000014E2CB13C 0F 14 C1                                                        unpcklps xmm0, xmm1     ; Unpack Low Packed Single-FP Data
.std:000000014E2CB13F 0F C6 D3 AA                                                     shufps  xmm2, xmm3, 0AAh ; Shuffle Single-FP
.std:000000014E2CB143 F2 0F 11 01                                                     movsd   qword ptr [rcx], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB147 F3 0F 11 51 08                                                  movss   dword ptr [rcx+8], xmm2 ; Move Scalar Single-FP
.std:000000014E2CB14C E8 7F 78 56 FE                                                  call    sub_14C8329D0   ; Call Procedure
.std:000000014E2CB151 0F 10 00                                                        movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.std:000000014E2CB154 0F 11 83 F0 01 00 00                                            movups  xmmword ptr [rbx+1F0h], xmm0 ; Move Unaligned Four Packed Single-FP
.std:000000014E2CB15B
.std:000000014E2CB15B                                                 loc_14E2CB15B:                          ; CODE XREF: sub_14E2CB030+60↑j
.std:000000014E2CB15B 0F 10 B3 F0 01 00 00                                            movups  xmm6, xmmword ptr [rbx+1F0h] ; Move Unaligned Four Packed Single-FP
.std:000000014E2CB162 48 8D 54 24 2C                                                  lea     rdx, [rsp+2Ch]  ; Load Effective Address
.std:000000014E2CB167 48 8B CB                                                        mov     rcx, rbx
.std:000000014E2CB16A E8 71 56 BF F2                                                  call    sub_140EC07E0   ; Call Procedure
.std:000000014E2CB16F 48 8B 5C 24 70                                                  mov     rbx, [rsp+70h]
.std:000000014E2CB174 66 0F 6E C6                                                     movd    xmm0, esi       ; Move 32 bits
.std:000000014E2CB178 48 8B 74 24 78                                                  mov     rsi, [rsp+78h]
.std:000000014E2CB17D F3 0F 10 50 08                                                  movss   xmm2, dword ptr [rax+8] ; Move Scalar Single-FP
.std:000000014E2CB182 F2 0F 10 18                                                     movsd   xmm3, qword ptr [rax] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB186 48 8B C7                                                        mov     rax, rdi
.std:000000014E2CB189 0F 16 DA                                                        movlhps xmm3, xmm2      ; Move Low to High Packed Single-FP
.std:000000014E2CB18C 0F 11 5F 10                                                     movups  xmmword ptr [rdi+10h], xmm3 ; Move Unaligned Four Packed Single-FP
.std:000000014E2CB190 F2 0F 10 5C 24 20                                               movsd   xmm3, qword ptr [rsp+20h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB196 0F 16 D8                                                        movlhps xmm3, xmm0      ; Move Low to High Packed Single-FP
.std:000000014E2CB199 0F 11 37                                                        movups  xmmword ptr [rdi], xmm6 ; Move Unaligned Four Packed Single-FP
.std:000000014E2CB19C 0F 28 74 24 50                                                  movaps  xmm6, xmmword ptr [rsp+50h] ; Move Aligned Four Packed Single-FP
.std:000000014E2CB1A1 0F 11 5F 20                                                     movups  xmmword ptr [rdi+20h], xmm3 ; Move Unaligned Four Packed Single-FP
.std:000000014E2CB1A5 48 83 C4 60                                                     add     rsp, 60h        ; Add
.std:000000014E2CB1A9 5F                                                              pop     rdi
.std:000000014E2CB1AA C3                                                              retn                    ; Return Near from Procedure
.std:000000014E2CB1AA                                                 sub_14E2CB030   endp








.std:000000014E2CB030                                                 sub_14E2CB030   proc near               ; CODE XREF: sub_141CE8230+2231↑p
.std:000000014E2CB030                                                                                         ; sub_141D51480+2B28↑p ...
.std:000000014E2CB030 48 89 5C 24 08                                                  mov     [rsp+8], rbx
.std:000000014E2CB035 48 89 74 24 10                                                  mov     [rsp+10h], rsi
.std:000000014E2CB03A 57                                                              push    rdi
.std:000000014E2CB03B 48 83 EC 60                                                     sub     rsp, 60h        ; Integer Subtraction
.std:000000014E2CB03F F2 0F 10 81 84 01 00 00                                         movsd   xmm0, qword ptr [rcx+184h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB047 48 8B D9                                                        mov     rbx, rcx
.std:000000014E2CB04A 8B B1 8C 01 00 00                                               mov     esi, [rcx+18Ch]
.std:000000014E2CB050 48 8B FA                                                        mov     rdi, rdx
.std:000000014E2CB053 F2 0F 11 44 24 20                                               movsd   qword ptr [rsp+20h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB059 F2 0F 10 81 78 01 00 00                                         movsd   xmm0, qword ptr [rcx+178h] ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB061 48 81 C1 00 02 00 00                                            add     rcx, 200h       ; Add
.std:000000014E2CB068 0F 29 74 24 50                                                  movaps  xmmword ptr [rsp+50h], xmm6 ; Move Aligned Four Packed Single-FP
.std:000000014E2CB06D F2 0F 11 44 24 2C                                               movsd   qword ptr [rsp+2Ch], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.std:000000014E2CB073 0F 2E 01                                                        ucomiss xmm0, dword ptr [rcx] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CB076 75 1E                                                           jnz     short loc_14E2CB096 ; Jump if Not Zero (ZF=0)
.std:000000014E2CB078 F3 0F 10 44 24 30                                               movss   xmm0, dword ptr [rsp+30h] ; Move Scalar Single-FP
.std:000000014E2CB07E 0F 2E 41 04                                                     ucomiss xmm0, dword ptr [rcx+4] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CB082 75 12                                                           jnz     short loc_14E2CB096 ; Jump if Not Zero (ZF=0)
.std:000000014E2CB084 F3 0F 10 83 80 01 00 00                                         movss   xmm0, dword ptr [rbx+180h] ; Move Scalar Single-FP
.std:000000014E2CB08C 0F 2E 41 08                                                     ucomiss xmm0, dword ptr [rcx+8] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E2CB090 0F 84 C5 00 00 00                                               jz      near ptr unk_14E2CB15B ; Jump if Zero (ZF=1)



.std:0000000140B0B0A0
.std:0000000140B0B0A0                                                 loc_140B0B0A0:                          ; CODE XREF: sub_140AE6880+20F↑p
.std:0000000140B0B0A0                                                                                         ; sub_140AE6880+6D0↑p ...
.std:0000000140B0B0A0 C7 44 24 08 00 00 00 00                                         mov     dword ptr [rsp+8], 0
.std:0000000140B0B0A8 8B 44 24 08                                                     mov     eax, [rsp+8]
.std:0000000140B0B0AC FF C0                                                           inc     eax             ; Increment by 1
.std:0000000140B0B0AE 89 44 24 08                                                     mov     [rsp+8], eax
.std:0000000140B0B0B2 8B 44 24 08                                                     mov     eax, [rsp+8]
.std:0000000140B0B0B6 FF C8                                                           dec     eax             ; Decrement by 1
.std:0000000140B0B0B8 89 44 24 08                                                     mov     [rsp+8], eax
.std:0000000140B0B0BC 48 8D 81 10 02 00 00                                            lea     rax, [rcx+210h] ; Load Effective Address
.std:0000000140B0B0C3 C3                                                              retn                    ; Return Near from Procedure


.std:000000014E289280
.std:000000014E289280                                                 sub_14E289280   proc near               ; CODE XREF: sub_142A14300+9↑p
.std:000000014E289280                                                                                         ; sub_145E8DE00+A3↑p ...
.std:000000014E289280 40 53                                                           push    rbx
.std:000000014E289282 48 83 EC 20                                                     sub     rsp, 20h        ; Integer Subtraction
.std:000000014E289286 48 8B D9                                                        mov     rbx, rcx
.std:000000014E289289 F0 FF 05 A8 67 2A 09                                            lock inc cs:dword_15752FA38 ; Increment by 1
.std:000000014E289290 0F 57 C9                                                        xorps   xmm1, xmm1      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E289293 0F 2E 89 60 02 00 00                                            ucomiss xmm1, dword ptr [rcx+260h] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.std:000000014E28929A 75 2B                                                           jnz     short loc_14E2892C7 ; Jump if Not Zero (ZF=0)
.std:000000014E28929C F3 0F 10 81 5C 02 00 00                                         movss   xmm0, dword ptr [rcx+25Ch] ; Move Scalar Single-FP
.std:000000014E2892A4 0F 2F C1                                                        comiss  xmm0, xmm1      ; Scalar Ordered Single-FP Compare and Set EFLAGS
.std:000000014E2892A7 76 1E                                                           jbe     short loc_14E2892C7 ; Jump if Below or Equal (CF=1 | ZF=1)
.std:000000014E2892A9 F6 81 68 02 00 00 40                                            test    byte ptr [rcx+268h], 40h ; Logical Compare
.std:000000014E2892B0 75 0A                                                           jnz     short loc_14E2892BC ; Jump if Not Zero (ZF=0)
.std:000000014E2892B2 48 83 B9 80 04 00 00 00                                         cmp     qword ptr [rcx+480h], 0 ; Compare Two Operands
.std:000000014E2892BA 74 03                                                           jz      short loc_14E2892BF ; Jump if Zero (ZF=1)
.std:000000014E2892BC
.std:000000014E2892BC                                                 loc_14E2892BC:                          ; CODE XREF: sub_14E289280+30↑j
.std:000000014E2892BC 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:000000014E2892BF
.std:000000014E2892BF                                                 loc_14E2892BF:                          ; CODE XREF: sub_14E289280+3A↑j
.std:000000014E2892BF F3 0F 11 81 60 02 00 00                                         movss   dword ptr [rcx+260h], xmm0 ; Move Scalar Single-FP
.std:000000014E2892C7
.std:000000014E2892C7                                                 loc_14E2892C7:                          ; CODE XREF: sub_14E289280+1A↑j
.std:000000014E2892C7                                                                                         ; sub_14E289280+27↑j
.std:000000014E2892C7 E8 24 95 F7 FF                                                  call    near ptr unk_14E2027F0 ; Call Procedure
.std:000000014E2892CC 48 8B 03                                                        mov     rax, [rbx]
.std:000000014E2892CF 48 8B CB                                                        mov     rcx, rbx
.std:000000014E2892D2 FF 90 D8 04 00 00                                               call    qword ptr [rax+4D8h] ; Indirect Call Near Procedure
.std:000000014E2892D8 48 8B CB                                                        mov     rcx, rbx
.std:000000014E2892DB E8 10 75 05 00                                                  call    sub_14E2E07F0   ; Call Procedure
.std:000000014E2892E0 84 C0                                                           test    al, al          ; Logical Compare
.std:000000014E2892E2 74 38                                                           jz      short loc_14E28931C ; Jump if Zero (ZF=1)
.std:000000014E2892E4 48 8B CB                                                        mov     rcx, rbx
.std:000000014E2892E7 E8 D4 75 05 00                                                  call    sub_14E2E08C0   ; Call Procedure
.std:000000014E2892EC 84 C0                                                           test    al, al          ; Logical Compare
.std:000000014E2892EE 75 09                                                           jnz     short loc_14E2892F9 ; Jump if Not Zero (ZF=0)
.std:000000014E2892F0 F6 83 94 02 00 00 20                                            test    byte ptr [rbx+294h], 20h ; Logical Compare
.std:000000014E2892F7 74 23                                                           jz      short loc_14E28931C ; Jump if Zero (ZF=1)
.std:000000014E2892F9
.std:000000014E2892F9                                                 loc_14E2892F9:                          ; CODE XREF: sub_14E289280+6E↑j
.std:000000014E2892F9 48 8B 83 F0 00 00 00                                            mov     rax, [rbx+0F0h]
.std:000000014E289300 48 85 C0                                                        test    rax, rax        ; Logical Compare
.std:000000014E289303 75 08                                                           jnz     short loc_14E28930D ; Jump if Not Zero (ZF=0)
.std:000000014E289305 48 8B CB                                                        mov     rcx, rbx
.std:000000014E289308 E8 03 13 F8 FF                                                  call    sub_14E20A610   ; Call Procedure
.std:000000014E28930D
.std:000000014E28930D                                                 loc_14E28930D:                          ; CODE XREF: sub_14E289280+83↑j
.std:000000014E28930D 48 8B 88 B8 01 00 00                                            mov     rcx, [rax+1B8h]
.std:000000014E289314 48 8B D3                                                        mov     rdx, rbx
.std:000000014E289317 48 8B 01                                                        mov     rax, [rcx]
.std:000000014E28931A FF 10                                                           call    qword ptr [rax] ; Indirect Call Near Procedure
.std:000000014E28931C


```
---
ptr RootCom 
---
```c


__int64 __fastcall sub_14E2E02E0(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  unsigned int v4; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbp
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  signed __int64 v17; // rbx
  unsigned int v18; // eax
  unsigned __int64 v19; // r14
  char v20; // cl
  int v21; // ebx
  int v22; // eax
  int v23; // ecx
  __int64 result; // rax
  __int64 (__fastcall ***v25)(_QWORD, __int64, _QWORD, _QWORD); // rax
  int v26; // [rsp+20h] [rbp-88h]
  __int64 v27; // [rsp+28h] [rbp-80h]
  __int64 v28[2]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v29[4]; // [rsp+48h] [rbp-60h] BYREF
  char v30; // [rsp+B0h] [rbp+8h] BYREF
  int v31; // [rsp+B8h] [rbp+10h] BYREF
  int v32; // [rsp+C0h] [rbp+18h]
  unsigned __int8 v33; // [rsp+C8h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v4 = a3;
  *(_BYTE *)(a1 + 0x18) = 1;
  if ( !byte_156A16371 )
  {
    if ( dword_157530478 == 0x400 )
    {
      if ( dword_15731C098 && byte_157530484 == 1 || !dword_156849814 )
      {
        v8 = dword_157530480;
LABEL_12:
        v7 = v8 | 0xFF;
        goto LABEL_13;
      }
    }
    else if ( dword_157530478 == 0x800 && !dword_156849810 )
    {
      v8 = dword_157530480;
      goto LABEL_12;
    }
    v8 = dword_157530478 | dword_15753047C;
    goto LABEL_12;
  }
  v7 = 0x6FF;
LABEL_13:
  *(_DWORD *)(a1 + 8) = v7;
  v9 = 0;
  if ( a2 )
  {
    v26 = 0;
    if ( *(int *)(a2 + 0x28) > 0 )
    {
      v10 = a2 + 0x20;
      v11 = 0LL;
      v27 = 0LL;
      do
      {
        v12 = off_15684AC40(v10);
        v13 = a2;
        v30 = 0;
        v28[0] = (__int64)sub_140A8B180;
        v31 = 0;
        if ( v12 )
          v13 = v12;
        v29[1] = a1;
        v28[1] = (__int64)&v30;
        v29[0] = (__int64)v28;
        v14 = *(_QWORD *)(v13 + v11);
        v29[2] = (__int64)&v31;
        while ( 1 )
        {
          v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), 0LL, 0LL);
          v16 = v15 >> 0x1A;
          v17 = v15;
          v18 = sub_140A88BF0(v29, (v15 & 0x4000000) != 0);
          v19 = v18;
          if ( !v18 )
            break;
          if ( ((v16 + 2) & 0x3FFFFFFFFFLL) < v16 )
            sub_14C76A020();
          *(_DWORD *)(qword_15731C8D8[v19 >> 0xE] + 0x18 * (v19 & 0x3FFF) + 0x10) = v17 & 0x3FFFFFF;
          if ( v17 == _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v14 + 8),
                        ((v16 + 2) << 0x1A) | v19,
                        v17) )
          {
            v20 = 1;
            goto LABEL_27;
          }
        }
        if ( v31 )
          sub_14C769140();
        v20 = 0;
LABEL_27:
        v21 = v26;
        v22 = v9 + 1;
        if ( v20 )
          v22 = v9;
        v11 = v27 + 8;
        ++v26;
        v9 = v22;
        v27 += 8LL;
        v10 = a2 + 0x20;
      }
      while ( v21 + 1 < *(_DWORD *)(a2 + 0x28) );
      v4 = v32;
    }
  }
  v23 = v9 + v33;
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 0xC), -v23);
  if ( (_DWORD)result == v23 )
  {
    v25 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD, _QWORD))sub_14C7694E0();
    return (**v25)(v25, a1, *(unsigned int *)(a1 + 8), v4);
  }
  return result;
}

```
---
C core Array Bone c2w 
---
```c
__int64 __fastcall sub_140AE6880(__int64 a1, float *a2, int *a3, float *a4, v8_qjs::External *a5, v8_qjs::External *a6)
{
  __int64 v7; // rax
  const void *v8; // rax
  unsigned __int8 v9; // [rsp+50h] [rbp-23F8h]
  char v10; // [rsp+9Bh] [rbp-23ADh] BYREF
  unsigned __int8 v11; // [rsp+9Ch] [rbp-23ACh]
  unsigned __int8 v12; // [rsp+9Dh] [rbp-23ABh]
  unsigned __int8 v13; // [rsp+9Eh] [rbp-23AAh]
  char v14; // [rsp+9Fh] [rbp-23A9h] BYREF
  unsigned __int8 v15; // [rsp+A0h] [rbp-23A8h]
  char v16; // [rsp+A1h] [rbp-23A7h]
  char v17; // [rsp+A2h] [rbp-23A6h]
  bool v18; // [rsp+A3h] [rbp-23A5h]
  __int64 v19; // [rsp+A8h] [rbp-23A0h]
  _QWORD v20[2]; // [rsp+B0h] [rbp-2398h] BYREF
  __m128 v21; // [rsp+C0h] [rbp-2388h]
  __m128 v22; // [rsp+D0h] [rbp-2378h]
  __m128 v23; // [rsp+E0h] [rbp-2368h]
  float v24; // [rsp+F0h] [rbp-2358h] BYREF
  float v25; // [rsp+F4h] [rbp-2354h]
  float v26; // [rsp+F8h] [rbp-2350h] BYREF
  float v27; // [rsp+FCh] [rbp-234Ch]
  int v28; // [rsp+100h] [rbp-2348h]
  int v29; // [rsp+104h] [rbp-2344h]
  int v30; // [rsp+108h] [rbp-2340h]
  int v31; // [rsp+10Ch] [rbp-233Ch]
  int v32; // [rsp+110h] [rbp-2338h]
  int v33; // [rsp+114h] [rbp-2334h]
  int v34; // [rsp+118h] [rbp-2330h]
  int v35; // [rsp+11Ch] [rbp-232Ch]
  int v36; // [rsp+120h] [rbp-2328h]
  int v37; // [rsp+124h] [rbp-2324h]
  int v38; // [rsp+128h] [rbp-2320h]
  int v39; // [rsp+12Ch] [rbp-231Ch]
  int v40; // [rsp+130h] [rbp-2318h]
  int v42; // [rsp+138h] [rbp-2310h]
  int v43; // [rsp+13Ch] [rbp-230Ch]
  int v44; // [rsp+140h] [rbp-2308h]
  float v45; // [rsp+144h] [rbp-2304h]
  float v46; // [rsp+148h] [rbp-2300h]
  float v47; // [rsp+14Ch] [rbp-22FCh]
  float v48; // [rsp+150h] [rbp-22F8h]
  int v49; // [rsp+154h] [rbp-22F4h]
  BOOL v50; // [rsp+158h] [rbp-22F0h]
  int v52; // [rsp+160h] [rbp-22E8h]
  int v53; // [rsp+164h] [rbp-22E4h]
  int v54; // [rsp+168h] [rbp-22E0h]
  int v55; // [rsp+16Ch] [rbp-22DCh]
  int v56; // [rsp+170h] [rbp-22D8h]
  int v57; // [rsp+174h] [rbp-22D4h]
  int v58; // [rsp+178h] [rbp-22D0h]
  unsigned __int16 *v59; // [rsp+180h] [rbp-22C8h]
  unsigned __int16 *v60; // [rsp+188h] [rbp-22C0h]
  unsigned __int16 *v61; // [rsp+190h] [rbp-22B8h]
  int v62; // [rsp+198h] [rbp-22B0h]
  int v63; // [rsp+19Ch] [rbp-22ACh]
  int v64; // [rsp+1A0h] [rbp-22A8h]
  int *v65; // [rsp+1A8h] [rbp-22A0h]
  int *v66; // [rsp+1B0h] [rbp-2298h]
  int *v67; // [rsp+1B8h] [rbp-2290h]
  int *v68; // [rsp+1C0h] [rbp-2288h]
  int *v69; // [rsp+1C8h] [rbp-2280h]
  int *v70; // [rsp+1D0h] [rbp-2278h]
  int *v71; // [rsp+1D8h] [rbp-2270h]
  int *v72; // [rsp+1E0h] [rbp-2268h]
  int *v73; // [rsp+1E8h] [rbp-2260h]
  _DWORD *v74; // [rsp+1F0h] [rbp-2258h]
  int *v75; // [rsp+1F8h] [rbp-2250h]
  int *v76; // [rsp+200h] [rbp-2248h]
  __m128 *v77; // [rsp+208h] [rbp-2240h]
  __m128 *v78; // [rsp+210h] [rbp-2238h]
  __m128 *v79; // [rsp+218h] [rbp-2230h]
  _OWORD *v80; // [rsp+220h] [rbp-2228h]
  _OWORD *v81; // [rsp+228h] [rbp-2220h]
  _OWORD *v82; // [rsp+230h] [rbp-2218h]
  __int64 v83; // [rsp+238h] [rbp-2210h]
  _DWORD *v84; // [rsp+240h] [rbp-2208h]
  int *v85; // [rsp+248h] [rbp-2200h]
  int *v86; // [rsp+250h] [rbp-21F8h]
  float v87; // [rsp+258h] [rbp-21F0h]
  float v88; // [rsp+260h] [rbp-21E8h]
  float v89; // [rsp+268h] [rbp-21E0h]
  int v90; // [rsp+270h] [rbp-21D8h]
  int v91; // [rsp+278h] [rbp-21D0h]
  float v92; // [rsp+280h] [rbp-21C8h]
  float v93; // [rsp+288h] [rbp-21C0h]
  float v94; // [rsp+290h] [rbp-21B8h]
  float v95; // [rsp+298h] [rbp-21B0h]
  float v96; // [rsp+2A0h] [rbp-21A8h]
  int v97; // [rsp+2A8h] [rbp-21A0h]
  float v98; // [rsp+2B0h] [rbp-2198h]
  float v99; // [rsp+2B8h] [rbp-2190h]
  float v100; // [rsp+2C0h] [rbp-2188h]
  float v101; // [rsp+2C8h] [rbp-2180h]
  float v102; // [rsp+2D0h] [rbp-2178h]
  float v103; // [rsp+2D8h] [rbp-2170h]
  int v104; // [rsp+2E0h] [rbp-2168h]
  float v105; // [rsp+2E8h] [rbp-2160h]
  float v106; // [rsp+2F0h] [rbp-2158h]
  int v107; // [rsp+2F8h] [rbp-2150h]
  int v108; // [rsp+300h] [rbp-2148h]
  int v109; // [rsp+308h] [rbp-2140h]
  int v110; // [rsp+310h] [rbp-2138h]
  int v111; // [rsp+318h] [rbp-2130h]
  float v112; // [rsp+320h] [rbp-2128h]
  float v113; // [rsp+328h] [rbp-2120h]
  float v114; // [rsp+330h] [rbp-2118h]
  float v115; // [rsp+334h] [rbp-2114h]
  float v116; // [rsp+338h] [rbp-2110h]
  float v117; // [rsp+340h] [rbp-2108h]
  float v118; // [rsp+348h] [rbp-2100h]
  float v119; // [rsp+34Ch] [rbp-20FCh]
  float v120; // [rsp+350h] [rbp-20F8h]
  float v121; // [rsp+358h] [rbp-20F0h]
  float v122; // [rsp+360h] [rbp-20E8h]
  float v123; // [rsp+364h] [rbp-20E4h]
  float v124; // [rsp+368h] [rbp-20E0h]
  float v125; // [rsp+370h] [rbp-20D8h]
  float v126; // [rsp+378h] [rbp-20D0h]
  float v127; // [rsp+37Ch] [rbp-20CCh]
  float v128; // [rsp+380h] [rbp-20C8h]
  float v129; // [rsp+388h] [rbp-20C0h]
  float v130; // [rsp+390h] [rbp-20B8h]
  float v131; // [rsp+394h] [rbp-20B4h]
  float v132; // [rsp+398h] [rbp-20B0h]
  float v133; // [rsp+3A0h] [rbp-20A8h]
  float v134; // [rsp+3A8h] [rbp-20A0h]
  float v135; // [rsp+3ACh] [rbp-209Ch]
  int v136; // [rsp+3B0h] [rbp-2098h]
  int v137; // [rsp+3B4h] [rbp-2094h]
  float v138; // [rsp+3B8h] [rbp-2090h]
  float v139; // [rsp+3BCh] [rbp-208Ch]
  float v140; // [rsp+3C0h] [rbp-2088h]
  float v141; // [rsp+3C4h] [rbp-2084h]
  int *v142; // [rsp+3C8h] [rbp-2080h]
  int *v143; // [rsp+3D0h] [rbp-2078h]
  v8_qjs::External *v144; // [rsp+3D8h] [rbp-2070h]
  int v145; // [rsp+3E0h] [rbp-2068h]
  float v146; // [rsp+3E8h] [rbp-2060h]
  float v147; // [rsp+3F0h] [rbp-2058h]
  float v148; // [rsp+3F8h] [rbp-2050h]
  float v149; // [rsp+400h] [rbp-2048h]
  float v150; // [rsp+408h] [rbp-2040h]
  int v151; // [rsp+410h] [rbp-2038h]
  float v152; // [rsp+418h] [rbp-2030h]
  float v153; // [rsp+420h] [rbp-2028h]
  float v154; // [rsp+428h] [rbp-2020h]
  float v155; // [rsp+430h] [rbp-2018h]
  float v156; // [rsp+438h] [rbp-2010h]
  float v157; // [rsp+440h] [rbp-2008h]
  int v158; // [rsp+448h] [rbp-2000h]
  int v159; // [rsp+450h] [rbp-1FF8h]
  float v160; // [rsp+458h] [rbp-1FF0h]
  float v161; // [rsp+460h] [rbp-1FE8h]
  float v162; // [rsp+468h] [rbp-1FE0h]
  float v163; // [rsp+470h] [rbp-1FD8h]
  float v164; // [rsp+478h] [rbp-1FD0h]
  int v165; // [rsp+480h] [rbp-1FC8h]
  float v166; // [rsp+488h] [rbp-1FC0h]
  float v167; // [rsp+490h] [rbp-1FB8h]
  float v168; // [rsp+498h] [rbp-1FB0h]
  float v169; // [rsp+4A0h] [rbp-1FA8h]
  float v170; // [rsp+4A8h] [rbp-1FA0h]
  float v171; // [rsp+4B0h] [rbp-1F98h]
  int v172; // [rsp+4B8h] [rbp-1F90h]
  int v173; // [rsp+4C0h] [rbp-1F88h]
  float v174; // [rsp+4C8h] [rbp-1F80h]
  float v175; // [rsp+4D0h] [rbp-1F78h]
  float v176; // [rsp+4D8h] [rbp-1F70h]
  float v177; // [rsp+4E0h] [rbp-1F68h]
  float v178; // [rsp+4E8h] [rbp-1F60h]
  int v179; // [rsp+4F0h] [rbp-1F58h]
  __int64 *v180; // [rsp+4F8h] [rbp-1F50h]
  _DWORD *v181; // [rsp+500h] [rbp-1F48h]
  int *v182; // [rsp+508h] [rbp-1F40h]
  int *v183; // [rsp+510h] [rbp-1F38h]
  int *v184; // [rsp+518h] [rbp-1F30h]
  int *v185; // [rsp+520h] [rbp-1F28h]
  int *v186; // [rsp+528h] [rbp-1F20h]
  int *v187; // [rsp+530h] [rbp-1F18h]
  float v188; // [rsp+538h] [rbp-1F10h]
  float v189; // [rsp+540h] [rbp-1F08h]
  float v190; // [rsp+548h] [rbp-1F00h]
  _DWORD *v191; // [rsp+550h] [rbp-1EF8h]
  __int64 v192; // [rsp+560h] [rbp-1EE8h]
  __int64 v193; // [rsp+568h] [rbp-1EE0h]
  __int64 v194; // [rsp+570h] [rbp-1ED8h]
  _DWORD *v195; // [rsp+588h] [rbp-1EC0h]
  int v196[3]; // [rsp+590h] [rbp-1EB8h] BYREF
  int v197[3]; // [rsp+59Ch] [rbp-1EACh] BYREF
  int v198[3]; // [rsp+5A8h] [rbp-1EA0h] BYREF
  int v199[3]; // [rsp+5B4h] [rbp-1E94h] BYREF
  int v200[3]; // [rsp+5C0h] [rbp-1E88h] BYREF
  int v201[3]; // [rsp+5CCh] [rbp-1E7Ch] BYREF
  int v202[3]; // [rsp+5D8h] [rbp-1E70h] BYREF
  int v203[3]; // [rsp+5E4h] [rbp-1E64h] BYREF
  int v204[3]; // [rsp+5F0h] [rbp-1E58h] BYREF
  int v205[3]; // [rsp+5FCh] [rbp-1E4Ch] BYREF
  int v206[3]; // [rsp+608h] [rbp-1E40h] BYREF
  int v207[3]; // [rsp+614h] [rbp-1E34h] BYREF
  int v208[3]; // [rsp+620h] [rbp-1E28h] BYREF
  int v209[3]; // [rsp+62Ch] [rbp-1E1Ch] BYREF
  int v210[3]; // [rsp+638h] [rbp-1E10h] BYREF
  int v211[3]; // [rsp+644h] [rbp-1E04h] BYREF
  int v212[4]; // [rsp+650h] [rbp-1DF8h] BYREF
  int v213[4]; // [rsp+660h] [rbp-1DE8h] BYREF
  int v214[4]; // [rsp+670h] [rbp-1DD8h] BYREF
  int v215[4]; // [rsp+680h] [rbp-1DC8h] BYREF
  int v216[4]; // [rsp+690h] [rbp-1DB8h] BYREF
  int v217[4]; // [rsp+6A0h] [rbp-1DA8h] BYREF
  int v218[4]; // [rsp+6B0h] [rbp-1D98h] BYREF
  int v219[4]; // [rsp+6C0h] [rbp-1D88h] BYREF
  int v220[4]; // [rsp+6D0h] [rbp-1D78h] BYREF
  int v221[4]; // [rsp+6E0h] [rbp-1D68h] BYREF
  int v222[4]; // [rsp+6F0h] [rbp-1D58h] BYREF
  int v223[4]; // [rsp+700h] [rbp-1D48h] BYREF
  int v224[4]; // [rsp+710h] [rbp-1D38h] BYREF
  int v225[4]; // [rsp+720h] [rbp-1D28h] BYREF
  int v226[4]; // [rsp+730h] [rbp-1D18h] BYREF
  int v227[4]; // [rsp+740h] [rbp-1D08h] BYREF
  int v228[4]; // [rsp+750h] [rbp-1CF8h] BYREF
  _DWORD v229[16]; // [rsp+760h] [rbp-1CE8h] BYREF
  float v230[16]; // [rsp+7A0h] [rbp-1CA8h] BYREF
  float v231[16]; // [rsp+7E0h] [rbp-1C68h] BYREF
  unsigned __int64 v232; // [rsp+820h] [rbp-1C28h] BYREF
  int v233; // [rsp+828h] [rbp-1C20h]
  int v234; // [rsp+82Ch] [rbp-1C1Ch]
  __m128 v235; // [rsp+830h] [rbp-1C18h]
  __m128 v236; // [rsp+840h] [rbp-1C08h]
  __m128 v237; // [rsp+850h] [rbp-1BF8h]
  int *v238; // [rsp+860h] [rbp-1BE8h]
  int *v239; // [rsp+868h] [rbp-1BE0h]
  int *v240; // [rsp+870h] [rbp-1BD8h]
  int *v241; // [rsp+878h] [rbp-1BD0h]
  int *v242; // [rsp+880h] [rbp-1BC8h]
  __int64 v243; // [rsp+888h] [rbp-1BC0h]
  __int64 v244; // [rsp+890h] [rbp-1BB8h]
  int *v245; // [rsp+898h] [rbp-1BB0h]
  int *v246; // [rsp+8A0h] [rbp-1BA8h]
  int *v247; // [rsp+8A8h] [rbp-1BA0h]
  int *v248; // [rsp+8B0h] [rbp-1B98h]
  int *v249; // [rsp+8B8h] [rbp-1B90h]
  __int64 v250; // [rsp+8C0h] [rbp-1B88h]
  __int64 v251; // [rsp+8C8h] [rbp-1B80h]
  int *v252; // [rsp+8D0h] [rbp-1B78h]
  int *v253; // [rsp+8D8h] [rbp-1B70h]
  int *v254; // [rsp+8E0h] [rbp-1B68h]
  int *v255; // [rsp+8E8h] [rbp-1B60h]
  int *v256; // [rsp+8F0h] [rbp-1B58h]
  __int64 v257; // [rsp+8F8h] [rbp-1B50h]
  __int64 v258; // [rsp+900h] [rbp-1B48h]
  int *v259; // [rsp+908h] [rbp-1B40h]
  int *v260; // [rsp+910h] [rbp-1B38h]
  int *v261; // [rsp+918h] [rbp-1B30h]
  int *v262; // [rsp+920h] [rbp-1B28h]
  int *v263; // [rsp+928h] [rbp-1B20h]
  __int64 v264; // [rsp+930h] [rbp-1B18h]
  __int64 v265; // [rsp+938h] [rbp-1B10h]
  int *v266; // [rsp+940h] [rbp-1B08h]
  int *v267; // [rsp+948h] [rbp-1B00h]
  int *v268; // [rsp+950h] [rbp-1AF8h]
  int *v269; // [rsp+958h] [rbp-1AF0h]
  int *v270; // [rsp+960h] [rbp-1AE8h]
  __int64 v271; // [rsp+968h] [rbp-1AE0h]
  __int64 v272; // [rsp+970h] [rbp-1AD8h]
  int *v273; // [rsp+978h] [rbp-1AD0h]
  int *v274; // [rsp+980h] [rbp-1AC8h]
  int *v275; // [rsp+988h] [rbp-1AC0h]
  int *v276; // [rsp+990h] [rbp-1AB8h]
  int *v277; // [rsp+998h] [rbp-1AB0h]
  int *v278; // [rsp+9A0h] [rbp-1AA8h]
  int *v279; // [rsp+9A8h] [rbp-1AA0h]
  int *v280; // [rsp+9B0h] [rbp-1A98h]
  int *v281; // [rsp+9B8h] [rbp-1A90h]
  int *v282; // [rsp+9C0h] [rbp-1A88h]
  int *v283; // [rsp+9C8h] [rbp-1A80h]
  int *v284; // [rsp+9D0h] [rbp-1A78h]
  int *v285; // [rsp+9D8h] [rbp-1A70h]
  int *v286; // [rsp+9E0h] [rbp-1A68h]
  int *v287; // [rsp+9E8h] [rbp-1A60h]
  int *v288; // [rsp+9F0h] [rbp-1A58h]
  __m128 *v289; // [rsp+9F8h] [rbp-1A50h]
  __m128 *v290; // [rsp+A00h] [rbp-1A48h]
  __m128 *v291; // [rsp+A08h] [rbp-1A40h]
  int *v292; // [rsp+A10h] [rbp-1A38h]
  unsigned __int64 *v293; // [rsp+A18h] [rbp-1A30h]
  __m128 *v294; // [rsp+A20h] [rbp-1A28h]
  __m128 *v295; // [rsp+A28h] [rbp-1A20h]
  __m128 *v296; // [rsp+A30h] [rbp-1A18h]
  __m128 *v297; // [rsp+A38h] [rbp-1A10h]
  __m128 *v298; // [rsp+A40h] [rbp-1A08h]
  char *v299; // [rsp+A48h] [rbp-1A00h]
  __int64 v300; // [rsp+A50h] [rbp-19F8h]
  __int64 v301; // [rsp+A58h] [rbp-19F0h]
  __int64 v302; // [rsp+A60h] [rbp-19E8h]
  __int64 v303; // [rsp+A68h] [rbp-19E0h]
  __int64 v304; // [rsp+A70h] [rbp-19D8h]
  __int64 v305; // [rsp+A78h] [rbp-19D0h]
  __int64 v306; // [rsp+A80h] [rbp-19C8h]
  __int64 v307; // [rsp+A88h] [rbp-19C0h]
  __int64 v308; // [rsp+A90h] [rbp-19B8h]
  __int64 v309; // [rsp+A98h] [rbp-19B0h]
  _QWORD *v310; // [rsp+AA0h] [rbp-19A8h]
  _QWORD *v311; // [rsp+AA8h] [rbp-19A0h]
  const char *v312; // [rsp+AB0h] [rbp-1998h] BYREF
  v8_qjs::External *v313; // [rsp+AB8h] [rbp-1990h]
  v8_qjs::External *v314; // [rsp+AC0h] [rbp-1988h]
  float *v315; // [rsp+AC8h] [rbp-1980h]
  int *v316; // [rsp+AD0h] [rbp-1978h]
  float *v317; // [rsp+AD8h] [rbp-1970h]
  __int64 *v318; // [rsp+AE0h] [rbp-1968h]
  int v319; // [rsp+AE8h] [rbp-1960h]
  int v320; // [rsp+AECh] [rbp-195Ch]
  int v321; // [rsp+AF0h] [rbp-1958h]
  int v322; // [rsp+AF4h] [rbp-1954h]
  int v323; // [rsp+AF8h] [rbp-1950h]
  int v324; // [rsp+AFCh] [rbp-194Ch]
  int v325; // [rsp+B00h] [rbp-1948h]
  int v326; // [rsp+B04h] [rbp-1944h]
  int v327; // [rsp+B08h] [rbp-1940h]
  int v328; // [rsp+B0Ch] [rbp-193Ch]
  int v329; // [rsp+B10h] [rbp-1938h]
  const char *v330; // [rsp+B18h] [rbp-1930h] BYREF
  v8_qjs::External *v331; // [rsp+B20h] [rbp-1928h]
  v8_qjs::External *v332; // [rsp+B28h] [rbp-1920h]
  float *v333; // [rsp+B30h] [rbp-1918h]
  int *v334; // [rsp+B38h] [rbp-1910h]
  float *v335; // [rsp+B40h] [rbp-1908h]
  __int64 *v336; // [rsp+B48h] [rbp-1900h]
  __int128 *v337; // [rsp+B50h] [rbp-18F8h]
  _DWORD *v338; // [rsp+B58h] [rbp-18F0h]
  __int128 *v339; // [rsp+B60h] [rbp-18E8h]
  __int128 *v340; // [rsp+B68h] [rbp-18E0h]
  int *v341; // [rsp+B70h] [rbp-18D8h]
  int *v342; // [rsp+B78h] [rbp-18D0h]
  __int64 v343; // [rsp+B80h] [rbp-18C8h]
  __int64 v344; // [rsp+B88h] [rbp-18C0h]
  int *v345; // [rsp+B90h] [rbp-18B8h]
  int *v346; // [rsp+B98h] [rbp-18B0h]
  int *v347; // [rsp+BA0h] [rbp-18A8h]
  int *v348; // [rsp+BA8h] [rbp-18A0h]
  int *v349; // [rsp+BB0h] [rbp-1898h]
  __int64 v350; // [rsp+BB8h] [rbp-1890h]
  __int64 v351; // [rsp+BC0h] [rbp-1888h]
  int *v352; // [rsp+BC8h] [rbp-1880h]
  int *v353; // [rsp+BD0h] [rbp-1878h]
  int *v354; // [rsp+BD8h] [rbp-1870h]
  _DWORD v355[2]; // [rsp+BE0h] [rbp-1868h] BYREF
  _DWORD v356[2]; // [rsp+BE8h] [rbp-1860h] BYREF
  int *v357; // [rsp+BF0h] [rbp-1858h]
  int *v358; // [rsp+BF8h] [rbp-1850h]
  __int64 v359; // [rsp+C00h] [rbp-1848h]
  __int64 v360; // [rsp+C08h] [rbp-1840h]
  __int128 v361; // [rsp+C10h] [rbp-1838h]
  _DWORD v362[4]; // [rsp+C20h] [rbp-1828h] BYREF
  __int64 v363[2]; // [rsp+C30h] [rbp-1818h] BYREF
  __m128 v364; // [rsp+C40h] [rbp-1808h]
  __int64 v365; // [rsp+C50h] [rbp-17F8h]
  __int128 v366; // [rsp+C60h] [rbp-17E8h] BYREF
  __int128 v367; // [rsp+C70h] [rbp-17D8h]
  __int128 v368; // [rsp+C80h] [rbp-17C8h] BYREF
  __m128 v369; // [rsp+C90h] [rbp-17B8h]
  __m128 v370; // [rsp+CA0h] [rbp-17A8h]
  __m128 v371; // [rsp+CB0h] [rbp-1798h]
  __m128 v372; // [rsp+CC0h] [rbp-1788h]
  __m128 v373; // [rsp+CD0h] [rbp-1778h]
  __m128 v374; // [rsp+CE0h] [rbp-1768h]
  __m128 v375; // [rsp+CF0h] [rbp-1758h]
  __m128 v376; // [rsp+D00h] [rbp-1748h]
  __m128 v377; // [rsp+D10h] [rbp-1738h]
  __m128 v378; // [rsp+D20h] [rbp-1728h]
  __m128 v379; // [rsp+D30h] [rbp-1718h]
  __m128 v380; // [rsp+D40h] [rbp-1708h]
  __m128 v381; // [rsp+D50h] [rbp-16F8h]
  __m128 v382; // [rsp+D60h] [rbp-16E8h]
  __m128 v383; // [rsp+D70h] [rbp-16D8h]
  __m128 v384; // [rsp+D80h] [rbp-16C8h]
  __m128 v385; // [rsp+D90h] [rbp-16B8h]
  __m128 v386; // [rsp+DA0h] [rbp-16A8h]
  __m128 v387; // [rsp+DB0h] [rbp-1698h]
  __m128 v388; // [rsp+DC0h] [rbp-1688h]
  __m128 v389; // [rsp+DD0h] [rbp-1678h]
  __m128 v390; // [rsp+DE0h] [rbp-1668h]
  __m128 v391; // [rsp+DF0h] [rbp-1658h]
  __m128 v392; // [rsp+E00h] [rbp-1648h]
  __m128 v393; // [rsp+E10h] [rbp-1638h]
  __m128 v394; // [rsp+E20h] [rbp-1628h]
  __m128 v395; // [rsp+E30h] [rbp-1618h]
  __m128 v396; // [rsp+E40h] [rbp-1608h]
  __m128 v397; // [rsp+E50h] [rbp-15F8h]
  __m128 v398; // [rsp+E60h] [rbp-15E8h]
  __m128 v399; // [rsp+E70h] [rbp-15D8h]
  __m128 v400; // [rsp+E80h] [rbp-15C8h]
  __m128 v401; // [rsp+E90h] [rbp-15B8h]
  __m128 v402; // [rsp+EA0h] [rbp-15A8h]
  __m128 v403; // [rsp+EB0h] [rbp-1598h]
  __m128 v404; // [rsp+EC0h] [rbp-1588h]
  __m128 v405; // [rsp+ED0h] [rbp-1578h]
  __m128 v406; // [rsp+EE0h] [rbp-1568h]
  __m128 v407; // [rsp+EF0h] [rbp-1558h]
  __m128 v408; // [rsp+F00h] [rbp-1548h]
  __m128 v409; // [rsp+F10h] [rbp-1538h]
  __m128 v410; // [rsp+F20h] [rbp-1528h]
  __m128 v411; // [rsp+F30h] [rbp-1518h]
  __m128 v412; // [rsp+F40h] [rbp-1508h]
  __m128 v413; // [rsp+F50h] [rbp-14F8h]
  __m128 v414; // [rsp+F60h] [rbp-14E8h]
  __m128 v415; // [rsp+F70h] [rbp-14D8h]
  __m128 v416; // [rsp+F80h] [rbp-14C8h]
  __m128 v417; // [rsp+F90h] [rbp-14B8h]
  __m128 v418; // [rsp+FA0h] [rbp-14A8h]
  __m128 v419; // [rsp+FB0h] [rbp-1498h]
  __m128 v420; // [rsp+FC0h] [rbp-1488h]
  __m128 v421; // [rsp+FD0h] [rbp-1478h]
  __m128 v422; // [rsp+FE0h] [rbp-1468h]
  __m128 v423; // [rsp+FF0h] [rbp-1458h]
  __m128 v424; // [rsp+1000h] [rbp-1448h]
  __m128 v425; // [rsp+1010h] [rbp-1438h]
  __m128 v426; // [rsp+1020h] [rbp-1428h]
  __m128 v427; // [rsp+1030h] [rbp-1418h]
  __m128 v428; // [rsp+1040h] [rbp-1408h]
  __m128 v429; // [rsp+1050h] [rbp-13F8h]
  __m128 v430; // [rsp+1060h] [rbp-13E8h]
  __m128 v431; // [rsp+1070h] [rbp-13D8h]
  __m128 v432; // [rsp+1080h] [rbp-13C8h]
  __m128 v433; // [rsp+1090h] [rbp-13B8h]
  __m128 v434; // [rsp+10A0h] [rbp-13A8h]
  __m128 v435; // [rsp+10B0h] [rbp-1398h]
  __m128 v436; // [rsp+10C0h] [rbp-1388h]
  __m128 v437; // [rsp+10D0h] [rbp-1378h]
  __m128 v438; // [rsp+10E0h] [rbp-1368h]
  __m128 v439; // [rsp+10F0h] [rbp-1358h]
  __m128 v440; // [rsp+1100h] [rbp-1348h]
  __m128 v441; // [rsp+1110h] [rbp-1338h]
  __m128 v442; // [rsp+1120h] [rbp-1328h]
  __m128 v443; // [rsp+1130h] [rbp-1318h]
  __m128 v444; // [rsp+1140h] [rbp-1308h]
  __m128 v445; // [rsp+1150h] [rbp-12F8h]
  __m128 v446; // [rsp+1160h] [rbp-12E8h]
  __m128 v447; // [rsp+1170h] [rbp-12D8h]
  __m128 v448; // [rsp+1180h] [rbp-12C8h]
  __m128 v449; // [rsp+1190h] [rbp-12B8h]
  __m128 v450; // [rsp+11A0h] [rbp-12A8h]
  __m128 v451; // [rsp+11B0h] [rbp-1298h]
  __m128 v452; // [rsp+11C0h] [rbp-1288h]
  __m128 v453; // [rsp+11D0h] [rbp-1278h]
  __m128 v454; // [rsp+11E0h] [rbp-1268h]
  __m128 v455; // [rsp+11F0h] [rbp-1258h]
  __m128 v456; // [rsp+1200h] [rbp-1248h]
  __m128 v457; // [rsp+1210h] [rbp-1238h]
  __m128 v458; // [rsp+1220h] [rbp-1228h]
  __m128 v459; // [rsp+1230h] [rbp-1218h]
  __m128 v460; // [rsp+1240h] [rbp-1208h]
  __m128 v461; // [rsp+1250h] [rbp-11F8h]
  __m128 v462; // [rsp+1260h] [rbp-11E8h]
  __m128 v463; // [rsp+1270h] [rbp-11D8h]
  __m128 v464; // [rsp+1280h] [rbp-11C8h]
  __m128 v465; // [rsp+1290h] [rbp-11B8h]
  __m128 v466; // [rsp+12A0h] [rbp-11A8h]
  __m128 v467; // [rsp+12B0h] [rbp-1198h]
  __m128 v468; // [rsp+12C0h] [rbp-1188h]
  __m128 v469; // [rsp+12D0h] [rbp-1178h]
  __m128 v470; // [rsp+12E0h] [rbp-1168h]
  __m128 v471; // [rsp+12F0h] [rbp-1158h]
  __m128 v472; // [rsp+1300h] [rbp-1148h]
  __m128 v473; // [rsp+1310h] [rbp-1138h]
  __m128 v474; // [rsp+1320h] [rbp-1128h]
  __m128 v475; // [rsp+1330h] [rbp-1118h]
  __m128 v476; // [rsp+1340h] [rbp-1108h]
  __m128 v477; // [rsp+1350h] [rbp-10F8h]
  __m128 v478; // [rsp+1360h] [rbp-10E8h]
  __m128 v479; // [rsp+1370h] [rbp-10D8h]
  __m128 v480; // [rsp+1380h] [rbp-10C8h]
  __m128 v481; // [rsp+1390h] [rbp-10B8h]
  __m128 v482; // [rsp+13A0h] [rbp-10A8h]
  __m128 v483; // [rsp+13B0h] [rbp-1098h]
  __m128 v484; // [rsp+13C0h] [rbp-1088h]
  __m128 v485; // [rsp+13D0h] [rbp-1078h]
  __m128 v486; // [rsp+13E0h] [rbp-1068h]
  __m128 v487; // [rsp+13F0h] [rbp-1058h]
  __m128 v488; // [rsp+1400h] [rbp-1048h]
  __m128 v489; // [rsp+1410h] [rbp-1038h]
  __m128 v490; // [rsp+1420h] [rbp-1028h]
  __m128 v491; // [rsp+1430h] [rbp-1018h]
  __m128 v492; // [rsp+1440h] [rbp-1008h]
  __m128 v493; // [rsp+1450h] [rbp-FF8h]
  __m128 v494; // [rsp+1460h] [rbp-FE8h]
  __m128 v495; // [rsp+1470h] [rbp-FD8h]
  __m128 v496; // [rsp+1480h] [rbp-FC8h]
  __m128 v497; // [rsp+1490h] [rbp-FB8h]
  __m128 v498; // [rsp+14A0h] [rbp-FA8h]
  __m128 v499; // [rsp+14B0h] [rbp-F98h]
  __m128 v500; // [rsp+14C0h] [rbp-F88h]
  __m128 v501; // [rsp+14D0h] [rbp-F78h]
  __m128 v502; // [rsp+14E0h] [rbp-F68h]
  __m128 v503; // [rsp+14F0h] [rbp-F58h]
  __m128 v504; // [rsp+1500h] [rbp-F48h]
  __m128 v505; // [rsp+1510h] [rbp-F38h]
  __m128 v506; // [rsp+1520h] [rbp-F28h]
  __m128 v507; // [rsp+1530h] [rbp-F18h]
  __m128 v508; // [rsp+1540h] [rbp-F08h]
  __m128 v509; // [rsp+1550h] [rbp-EF8h]
  __m128 v510; // [rsp+1560h] [rbp-EE8h]
  __m128 v511; // [rsp+1570h] [rbp-ED8h]
  __m128 v512; // [rsp+1580h] [rbp-EC8h]
  __m128 v513; // [rsp+1590h] [rbp-EB8h]
  __m128 v514; // [rsp+15A0h] [rbp-EA8h]
  __m128 v515; // [rsp+15B0h] [rbp-E98h]
  __m128 v516; // [rsp+15C0h] [rbp-E88h]
  __m128 v517; // [rsp+15D0h] [rbp-E78h]
  __m128 v518; // [rsp+15E0h] [rbp-E68h]
  __m128 v519; // [rsp+15F0h] [rbp-E58h]
  __m128 v520; // [rsp+1600h] [rbp-E48h]
  __m128 v521; // [rsp+1610h] [rbp-E38h]
  __m128 v522; // [rsp+1620h] [rbp-E28h]
  __m128 v523; // [rsp+1630h] [rbp-E18h]
  __m128 v524; // [rsp+1640h] [rbp-E08h]
  __m128 v525; // [rsp+1650h] [rbp-DF8h]
  __m128 v526; // [rsp+1660h] [rbp-DE8h]
  __m128 v527; // [rsp+1670h] [rbp-DD8h]
  __m128 v528; // [rsp+1680h] [rbp-DC8h]
  __m128 v529; // [rsp+1690h] [rbp-DB8h]
  __m128 v530; // [rsp+16A0h] [rbp-DA8h]
  __m128 v531; // [rsp+16B0h] [rbp-D98h]
  __m128 v532; // [rsp+16C0h] [rbp-D88h]
  __m128 v533; // [rsp+16D0h] [rbp-D78h]
  __m128 v534; // [rsp+16E0h] [rbp-D68h]
  __m128 v535; // [rsp+16F0h] [rbp-D58h]
  char v536[12]; // [rsp+1700h] [rbp-D48h] BYREF
  char v537[20]; // [rsp+170Ch] [rbp-D3Ch] BYREF
  __m128 v538[4]; // [rsp+1720h] [rbp-D28h] BYREF
  __m128 v539[4]; // [rsp+1760h] [rbp-CE8h] BYREF
  __m128 v540[4]; // [rsp+17A0h] [rbp-CA8h] BYREF
  __m128 v541[4]; // [rsp+17E0h] [rbp-C68h] BYREF
  __m128 v542[4]; // [rsp+1820h] [rbp-C28h] BYREF
  char v543[64]; // [rsp+1860h] [rbp-BE8h] BYREF
  char v544[16]; // [rsp+18A0h] [rbp-BA8h] BYREF
  char v545[64]; // [rsp+18B0h] [rbp-B98h] BYREF
  char v546[64]; // [rsp+18F0h] [rbp-B58h] BYREF
  char v547[64]; // [rsp+1990h] [rbp-AB8h] BYREF
  char v548[64]; // [rsp+19D0h] [rbp-A78h] BYREF
  __int128 v549; // [rsp+1A10h] [rbp-A38h]
  _DWORD v550[3]; // [rsp+1A20h] [rbp-A28h] BYREF
  _BYTE v551[4]; // [rsp+1A2Ch] [rbp-A1Ch] BYREF
  int v552[9]; // [rsp+1A30h] [rbp-A18h] BYREF
  int v553; // [rsp+1A54h] [rbp-9F4h]
  char v554; // [rsp+1A58h] [rbp-9F0h]
  int v555; // [rsp+2400h] [rbp-48h]
  int v556; // [rsp+2404h] [rbp-44h]
  int v557; // [rsp+2408h] [rbp-40h]
  int v558; // [rsp+2410h] [rbp-38h]
  int v559; // [rsp+2414h] [rbp-34h]
  int v560; // [rsp+2418h] [rbp-30h]
  __int64 v561; // [rsp+2450h] [rbp+8h] BYREF
  float *v562; // [rsp+2458h] [rbp+10h]
  int *v563; // [rsp+2460h] [rbp+18h]
  float *v564; // [rsp+2468h] [rbp+20h]

  v564 = a4;
  v563 = a3;
  v562 = a2;
  v561 = a1;
  v319 = 0x1FA;
  if ( byte_156DD9F80 )
  {
    if ( *(&byte_156DD9F80 + 0x1FA) )
    {
      v336 = &v561;
      v335 = v562;
      v334 = v563;
      v333 = v564;
      v332 = a5;
      v331 = a6;
      v330 = "USceneCaptureComponent2D";
      v14 = sub_140B1FD90();
      v15 = sub_140B6FA10(
              0x1FA,
              (unsigned int)&v561,
              (_DWORD)v335,
              (_DWORD)v334,
              (__int64)v333,
              (__int64)v332,
              (__int64)v331,
              (__int64)&v330,
              (__int64)&v14);
      if ( *(&byte_156DD9F80 + 0x1FA) == 2 )
        return v15;
    }
  }
  v9 = 1;
  v19 = *(_QWORD *)(v561 + 0x310);
  v192 = sub_141104EC0(v19);
  if ( v192 )
    v193 = v192 + 0x88;
  else
    v193 = 0LL;
  v365 = v193;
  sub_140ADB0D0(v550);
  v194 = sub_140B0B0A0(v561);
  v361 = *(_OWORD *)(v194 + 0x10);
  v59 = (unsigned __int16 *)(v194 + 0x30);
  v16 = 0;
  v17 = 1;
  v50 = *v59 != 0xFFFF;
  v18 = v50;
  if ( v50 )
  {
    if ( !*((_BYTE *)v59 + 2) )
      sub_14C834590(L"double decryption in EEncHandlerPolicy::None");
    off_1573ACE98();
  }
  v366 = v361;
  v337 = &v366;
  v549 = v361;
  v180 = v363;
  v363[0] = v361;
  LODWORD(v363[1]) = DWORD2(v361);
  qmemcpy(v362, v363, 0xCuLL);
  v338 = v362;
  v181 = v362;
  v74 = v550;
  v555 = v362[0];
  v556 = v362[1];
  v557 = v362[2];
  v60 = (unsigned __int16 *)v551;
  if ( *v60 != 0xFFFF )
  {
    *((_BYTE *)v60 + 2) = 1;
    off_1573ACE90();
  }
  *v74 = v555;
  v74[1] = v556;
  v74[2] = v557;
  v339 = (__int128 *)sub_140B0B0A0(v561);
  v367 = *v339;
  v368 = v367;
  v340 = &v368;
  qmemcpy(v552, (const void *)sub_14C8355D0(&v368, v536), 0xCuLL);
  v552[3] = *(_DWORD *)(v561 + 0x304);
  v554 = *(_BYTE *)(v561 + 0x300);
  *(float *)&v552[8] = (float)*(int *)(v19 + 0x138) / (float)*(int *)(v19 + 0x13C);
  v552[6] = 0x3F800000;
  v552[7] = 0x447A0000;
  v553 |= 1u;
  v147 = *((float *)v563 + 2);
  v146 = *((float *)v563 + 1);
  v145 = *v563;
  v211[0] = v145;
  *(float *)&v211[1] = v146;
  *(float *)&v211[2] = v147;
  v341 = v211;
  v182 = v211;
  v150 = v562[2] + v147;
  v149 = v562[1] + v146;
  v148 = *v562 + *(float *)&v145;
  *(float *)v212 = v148;
  *(float *)&v212[1] = v149;
  *(float *)&v212[2] = v150;
  v342 = v212;
  v345 = v212;
  v53 = *((_DWORD *)a5 + 2);
  v52 = *((_DWORD *)a5 + 2) + 1;
  *((_DWORD *)a5 + 2) = v52;
  if ( v52 > *((_DWORD *)a5 + 3) )
    sub_140B40F50(a5);
  v151 = v53;
  v54 = v53;
  v343 = v8_qjs::External::Value(a5);
  v344 = v343;
  v346 = (int *)sub_140ADEB10(0xCLL, 0xCLL * v54 + v343);
  v347 = v345;
  qmemcpy(v346, v345, 0xCuLL);
  v320 = v54;
  v154 = *((float *)v563 + 2);
  v153 = *((float *)v563 + 1);
  v152 = -*(float *)v563;
  *(float *)v196 = v152;
  *(float *)&v196[1] = v153;
  *(float *)&v196[2] = v154;
  v348 = v196;
  v183 = v196;
  v157 = v562[2] + v154;
  v156 = v562[1] + v153;
  v155 = *v562 + v152;
  *(float *)v197 = v155;
  *(float *)&v197[1] = v156;
  *(float *)&v197[2] = v157;
  v349 = v197;
  v352 = v197;
  v56 = *((_DWORD *)a5 + 2);
  v55 = *((_DWORD *)a5 + 2) + 1;
  *((_DWORD *)a5 + 2) = v55;
  if ( v55 > *((_DWORD *)a5 + 3) )
    sub_140B40F50(a5);
  v158 = v56;
  v57 = v56;
  v350 = v8_qjs::External::Value(a5);
  v351 = v350;
  v353 = (int *)sub_140ADEB10(0xCLL, 0xCLL * v57 + v350);
  v354 = v352;
  qmemcpy(v353, v352, 0xCuLL);
  v321 = v57;
  v161 = *((float *)v563 + 2);
  v160 = -*((float *)v563 + 1);
  v159 = *v563;
  v198[0] = v159;
  *(float *)&v198[1] = v160;
  *(float *)&v198[2] = v161;
  v357 = v198;
  v184 = v198;
  v164 = v562[2] + v161;
  v163 = v562[1] + v160;
  v162 = *v562 + *(float *)&v159;
  *(float *)v199 = v162;
  *(float *)&v199[1] = v163;
  *(float *)&v199[2] = v164;
  v358 = v199;
  v238 = v199;
  v62 = *((_DWORD *)a5 + 2);
  v58 = *((_DWORD *)a5 + 2) + 1;
  *((_DWORD *)a5 + 2) = v58;
  if ( v58 > *((_DWORD *)a5 + 3) )
    sub_140B40F50(a5);
  v165 = v62;
  v37 = v62;
  v359 = v8_qjs::External::Value(a5);
  v360 = v359;
  v239 = (int *)sub_140ADEB10(0xCLL, 0xCLL * v37 + v359);
  v240 = v238;
  qmemcpy(v239, v238, 0xCuLL);
  v322 = v37;
  v168 = *((float *)v563 + 2);
  v167 = -*((float *)v563 + 1);
  v166 = -*(float *)v563;
  *(float *)v200 = v166;
  *(float *)&v200[1] = v167;
  *(float *)&v200[2] = v168;
  v241 = v200;
  v185 = v200;
  v171 = v562[2] + v168;
  v170 = v562[1] + v167;
  v169 = *v562 + v166;
  *(float *)v201 = v169;
  *(float *)&v201[1] = v170;
  *(float *)&v201[2] = v171;
  v242 = v201;
  v245 = v201;
  v64 = *((_DWORD *)a5 + 2);
  v63 = *((_DWORD *)a5 + 2) + 1;
  *((_DWORD *)a5 + 2) = v63;
  if ( v63 > *((_DWORD *)a5 + 3) )
    sub_140B40F50(a5);
  v172 = v64;
  v28 = v64;
  v243 = v8_qjs::External::Value(a5);
  v244 = v243;
  v246 = (int *)sub_140ADEB10(0xCLL, 0xCLL * v28 + v243);
  v247 = v245;
  qmemcpy(v246, v245, 0xCuLL);
  v323 = v28;
  v175 = -*((float *)v563 + 2);
  v174 = *((float *)v563 + 1);
  v173 = *v563;
  v202[0] = v173;
  *(float *)&v202[1] = v174;
  *(float *)&v202[2] = v175;
  v248 = v202;
  v186 = v202;
  v178 = v562[2] + v175;
  v177 = v562[1] + v174;
  v176 = *v562 + *(float *)&v173;
  *(float *)v203 = v176;
  *(float *)&v203[1] = v177;
  *(float *)&v203[2] = v178;
  v249 = v203;
  v252 = v203;
  v30 = *((_DWORD *)a5 + 2);
  v29 = *((_DWORD *)a5 + 2) + 1;
  *((_DWORD *)a5 + 2) = v29;
  if ( v29 > *((_DWORD *)a5 + 3) )
    sub_140B40F50(a5);
  v179 = v30;
  v31 = v30;
  v250 = v8_qjs::External::Value(a5);
  v251 = v250;
  v253 = (int *)sub_140ADEB10(0xCLL, 0xCLL * v31 + v250);
  v254 = v252;
  qmemcpy(v253, v252, 0xCuLL);
  v324 = v31;
  v190 = -*((float *)v563 + 2);
  v189 = *((float *)v563 + 1);
  v188 = -*(float *)v563;
  *(float *)v204 = v188;
  *(float *)&v204[1] = v189;
  *(float *)&v204[2] = v190;
  v255 = v204;
  v187 = v204;
  v89 = v562[2] + v190;
  v88 = v562[1] + v189;
  v87 = *v562 + v188;
  *(float *)v205 = v87;
  *(float *)&v205[1] = v88;
  *(float *)&v205[2] = v89;
  v256 = v205;
  v259 = v205;
  v33 = *((_DWORD *)a5 + 2);
  v32 = *((_DWORD *)a5 + 2) + 1;
  *((_DWORD *)a5 + 2) = v32;
  if ( v32 > *((_DWORD *)a5 + 3) )
    sub_140B40F50(a5);
  v90 = v33;
  v34 = v33;
  v257 = v8_qjs::External::Value(a5);
  v258 = v257;
  v260 = (int *)sub_140ADEB10(0xCLL, 0xCLL * v34 + v257);
  v261 = v259;
  qmemcpy(v260, v259, 0xCuLL);
  v325 = v34;
  v93 = -*((float *)v563 + 2);
  v92 = -*((float *)v563 + 1);
  v91 = *v563;
  v210[0] = v91;
  *(float *)&v210[1] = v92;
  *(float *)&v210[2] = v93;
  v262 = v210;
  v142 = v210;
  v96 = v562[2] + v93;
  v95 = v562[1] + v92;
  v94 = *v562 + *(float *)&v91;
  *(float *)v206 = v94;
  *(float *)&v206[1] = v95;
  *(float *)&v206[2] = v96;
  v263 = v206;
  v266 = v206;
  v36 = *((_DWORD *)a5 + 2);
  v35 = *((_DWORD *)a5 + 2) + 1;
  *((_DWORD *)a5 + 2) = v35;
  if ( v35 > *((_DWORD *)a5 + 3) )
    sub_140B40F50(a5);
  v97 = v36;
  v49 = v36;
  v264 = v8_qjs::External::Value(a5);
  v265 = v264;
  v267 = (int *)sub_140ADEB10(0xCLL, 0xCLL * v49 + v264);
  v268 = v266;
  qmemcpy(v267, v266, 0xCuLL);
  v326 = v49;
  v100 = -*((float *)v563 + 2);
  v99 = -*((float *)v563 + 1);
  v98 = -*(float *)v563;
  *(float *)v207 = v98;
  *(float *)&v207[1] = v99;
  *(float *)&v207[2] = v100;
  v269 = v207;
  v143 = v207;
  v103 = v562[2] + v100;
  v102 = v562[1] + v99;
  v101 = *v562 + v98;
  *(float *)v208 = v101;
  *(float *)&v208[1] = v102;
  *(float *)&v208[2] = v103;
  v270 = v208;
  v273 = v208;
  v39 = *((_DWORD *)a5 + 2);
  v38 = *((_DWORD *)a5 + 2) + 1;
  *((_DWORD *)a5 + 2) = v38;
  if ( v38 > *((_DWORD *)a5 + 3) )
    sub_140B40F50(a5);
  v104 = v39;
  v40 = v39;
  v271 = v8_qjs::External::Value(a5);
  v272 = v271;
  v274 = (int *)sub_140ADEB10(0xCLL, 0xCLL * v40 + v271);
  v275 = v273;
  qmemcpy(v274, v273, 0xCuLL);
  v327 = v40;
  v106 = (float)*(int *)(v19 + 0x13C);
  v105 = (float)*(int *)(v19 + 0x138);
  v26 = v105;
  v27 = v106;
  v24 = 0.0;
  v25 = 0.0;
  v108 = *(_DWORD *)(v19 + 0x13C);
  v107 = *(_DWORD *)(v19 + 0x138);
  v195 = v355;
  v355[0] = 0;
  v355[1] = 0;
  v191 = v356;
  v356[0] = v107;
  v356[1] = v108;
  sub_140ADB170(v544);
  v84 = v550;
  v558 = v550[0];
  v559 = v550[1];
  v560 = v550[2];
  v61 = (unsigned __int16 *)v551;
  if ( *v61 != 0xFFFF )
  {
    if ( !*((_BYTE *)v61 + 2) )
      sub_14C834590(L"double decryption in EEncHandlerPolicy::None");
    off_1573ACE98();
  }
  v111 = v560;
  v110 = v559;
  v109 = v558;
  v209[0] = v558;
  v209[1] = v559;
  v209[2] = v560;
  v276 = v209;
  qmemcpy(v544, v209, 0xCuLL);
  v213[0] = 0;
  v213[1] = 0;
  v213[2] = 0;
  v213[3] = 0x3F800000;
  v277 = v213;
  v214[0] = 0;
  v214[1] = 0x3F800000;
  v214[2] = 0;
  v214[3] = 0;
  v278 = v214;
  v215[0] = 0x3F800000;
  v215[1] = 0;
  v215[2] = 0;
  v215[3] = 0;
  v279 = v215;
  v216[0] = 0;
  v216[1] = 0;
  v216[2] = 0x3F800000;
  v216[3] = 0;
  v280 = v216;
  v67 = v213;
  v66 = v214;
  v65 = v215;
  v85 = v216;
  v229[0] = 0;
  v229[1] = 0;
  v229[2] = 0x3F800000;
  v229[3] = 0;
  v229[4] = 0x3F800000;
  v229[5] = 0;
  v229[6] = 0;
  v229[7] = 0;
  v229[8] = 0;
  v229[9] = 0x3F800000;
  memset(&v229[0xA], 0, 0x14);
  v229[0xF] = 0x3F800000;
  v298 = (__m128 *)v229;
  v217[0] = 0;
  v217[1] = 0;
  v217[2] = 0;
  v217[3] = 0x3F800000;
  v281 = v217;
  v112 = (float)(*(float *)&v552[2] * 3.1415927) / 180.0;
  v115 = sub_150266405();
  v113 = (float)(*(float *)&v552[2] * 3.1415927) / 180.0;
  v114 = sub_150266411();
  v218[0] = 0;
  *(float *)&v218[1] = -v114;
  *(float *)&v218[2] = v115;
  v218[3] = 0;
  v282 = v218;
  v116 = (float)(*(float *)&v552[2] * 3.1415927) / 180.0;
  v119 = sub_150266411();
  v117 = (float)(*(float *)&v552[2] * 3.1415927) / 180.0;
  v118 = sub_150266405();
  v219[0] = 0;
  *(float *)&v219[1] = v118;
  *(float *)&v219[2] = v119;
  v219[3] = 0;
  v283 = v219;
  v220[0] = 0x3F800000;
  v220[1] = 0;
  v220[2] = 0;
  v220[3] = 0;
  v284 = v220;
  v71 = v281;
  v70 = v282;
  v69 = v219;
  v68 = v220;
  v230[0] = 1.0;
  v230[1] = 0.0;
  v230[2] = 0.0;
  v230[3] = 0.0;
  v230[4] = 0.0;
  v230[5] = v118;
  v230[6] = v119;
  v230[7] = 0.0;
  LODWORD(v230[8]) = *v282;
  LODWORD(v230[9]) = v282[1];
  LODWORD(v230[0xA]) = v282[2];
  LODWORD(v230[0xB]) = v282[3];
  LODWORD(v230[0xC]) = *v281;
  LODWORD(v230[0xD]) = v281[1];
  LODWORD(v230[0xE]) = v281[2];
  LODWORD(v230[0xF]) = v281[3];
  v296 = (__m128 *)v230;
  v221[0] = 0;
  v221[1] = 0;
  v221[2] = 0;
  v221[3] = 0x3F800000;
  v285 = v221;
  v120 = (float)(*(float *)v552 * 3.1415927) / 180.0;
  v123 = sub_150266405();
  v121 = (float)(*(float *)v552 * 3.1415927) / 180.0;
  v122 = sub_150266411();
  *(float *)v222 = v122;
  v222[1] = 0;
  *(float *)&v222[2] = v123;
  v222[3] = 0;
  v286 = v222;
  v223[0] = 0;
  v223[1] = 0x3F800000;
  v223[2] = 0;
  v223[3] = 0;
  v287 = v223;
  v124 = (float)(*(float *)v552 * 3.1415927) / 180.0;
  v127 = sub_150266411();
  v125 = (float)(*(float *)v552 * 3.1415927) / 180.0;
  v126 = sub_150266405();
  *(float *)v224 = v126;
  v224[1] = 0;
  *(float *)&v224[2] = -v127;
  v224[3] = 0;
  v288 = v224;
  v75 = v285;
  v86 = v286;
  v73 = v287;
  v72 = v224;
  v231[0] = v126;
  v231[1] = 0.0;
  v231[2] = -v127;
  v231[3] = 0.0;
  LODWORD(v231[4]) = *v287;
  LODWORD(v231[5]) = v287[1];
  LODWORD(v231[6]) = v287[2];
  LODWORD(v231[7]) = v287[3];
  LODWORD(v231[8]) = *v286;
  LODWORD(v231[9]) = v286[1];
  LODWORD(v231[0xA]) = v286[2];
  LODWORD(v231[0xB]) = v286[3];
  LODWORD(v231[0xC]) = *v285;
  LODWORD(v231[0xD]) = v285[1];
  LODWORD(v231[0xE]) = v285[2];
  LODWORD(v231[0xF]) = v285[3];
  v294 = (__m128 *)v231;
  v225[0] = 0;
  v225[1] = 0;
  v225[2] = 0;
  v225[3] = 0x3F800000;
  v289 = (__m128 *)v225;
  v226[0] = 0;
  v226[1] = 0;
  v226[2] = 0x3F800000;
  v226[3] = 0;
  v290 = (__m128 *)v226;
  v128 = (float)(*(float *)&v552[1] * 3.1415927) / 180.0;
  v131 = sub_150266405();
  v129 = (float)(*(float *)&v552[1] * 3.1415927) / 180.0;
  v130 = sub_150266411();
  *(float *)v227 = v130;
  *(float *)&v227[1] = v131;
  v227[2] = 0;
  v227[3] = 0;
  v291 = (__m128 *)v227;
  v132 = (float)(*(float *)&v552[1] * 3.1415927) / 180.0;
  v135 = sub_150266411();
  v133 = (float)(*(float *)&v552[1] * 3.1415927) / 180.0;
  v134 = sub_150266405();
  *(float *)v228 = v134;
  *(float *)&v228[1] = -v135;
  v228[2] = 0;
  v228[3] = 0;
  v292 = v228;
  v79 = v289;
  v78 = v290;
  v77 = v291;
  v76 = v228;
  *(float *)&v232 = v134;
  *((float *)&v232 + 1) = -v135;
  v233 = 0;
  v234 = 0;
  v235 = *v291;
  v236 = *v290;
  v237 = *v289;
  v293 = &v232;
  v80 = (_OWORD *)v538;
  v369 = _mm_shuffle_ps((__m128)v232, (__m128)v232, 0);
  v370 = _mm_mul_ps(v369, *v294);
  v371 = v370;
  v372 = v370;
  v22 = v370;
  v373 = _mm_shuffle_ps((__m128)v232, (__m128)v232, 0x55);
  v374 = _mm_mul_ps(v373, v294[1]);
  v375 = _mm_add_ps(v374, v370);
  v22 = v375;
  v376 = _mm_shuffle_ps((__m128)v232, (__m128)v232, 0xAA);
  v377 = _mm_mul_ps(v376, v294[2]);
  v378 = _mm_add_ps(v377, v375);
  v22 = v378;
  v379 = _mm_shuffle_ps((__m128)v232, (__m128)v232, 0xFF);
  v380 = _mm_mul_ps(v379, v294[3]);
  v381 = _mm_add_ps(v380, v378);
  v420 = v381;
  v382 = _mm_shuffle_ps(v235, v235, 0);
  v383 = _mm_mul_ps(v382, *v294);
  v384 = v383;
  v364 = v383;
  v22 = v383;
  v386 = _mm_shuffle_ps(v235, v235, 0x55);
  v387 = _mm_mul_ps(v386, v294[1]);
  v388 = _mm_add_ps(v387, v383);
  v22 = v388;
  v389 = _mm_shuffle_ps(v235, v235, 0xAA);
  v390 = _mm_mul_ps(v389, v294[2]);
  v391 = _mm_add_ps(v390, v388);
  v22 = v391;
  v392 = _mm_shuffle_ps(v235, v235, 0xFF);
  v393 = _mm_mul_ps(v392, v294[3]);
  v394 = _mm_add_ps(v393, v391);
  v421 = v394;
  v395 = _mm_shuffle_ps(v236, v236, 0);
  v396 = _mm_mul_ps(v395, *v294);
  v397 = v396;
  v398 = v396;
  v22 = v396;
  v399 = _mm_shuffle_ps(v236, v236, 0x55);
  v400 = _mm_mul_ps(v399, v294[1]);
  v401 = _mm_add_ps(v400, v396);
  v22 = v401;
  v402 = _mm_shuffle_ps(v236, v236, 0xAA);
  v403 = _mm_mul_ps(v402, v294[2]);
  v404 = _mm_add_ps(v403, v401);
  v22 = v404;
  v405 = _mm_shuffle_ps(v236, v236, 0xFF);
  v406 = _mm_mul_ps(v405, v294[3]);
  v407 = _mm_add_ps(v406, v404);
  v422 = v407;
  v385 = _mm_shuffle_ps(v237, v237, 0);
  v408 = _mm_mul_ps(v385, *v294);
  v409 = v408;
  v410 = v408;
  v22 = v408;
  v411 = _mm_shuffle_ps(v237, v237, 0x55);
  v412 = _mm_mul_ps(v411, v294[1]);
  v413 = _mm_add_ps(v412, v408);
  v22 = v413;
  v414 = _mm_shuffle_ps(v237, v237, 0xAA);
  v415 = _mm_mul_ps(v414, v294[2]);
  v416 = _mm_add_ps(v415, v413);
  v22 = v416;
  v417 = _mm_shuffle_ps(v237, v237, 0xFF);
  v418 = _mm_mul_ps(v417, v294[3]);
  v419 = _mm_add_ps(v418, v416);
  v423 = v419;
  v538[0] = v381;
  v538[1] = v394;
  v538[2] = v407;
  v538[3] = v419;
  qmemcpy(v539, v538, sizeof(v539));
  v295 = v539;
  v81 = (_OWORD *)v540;
  v424 = _mm_shuffle_ps(v539[0], v539[0], 0);
  v425 = _mm_mul_ps(v424, *v296);
  v426 = v425;
  v427 = v425;
  v23 = v425;
  v428 = _mm_shuffle_ps(v539[0], v539[0], 0x55);
  v429 = _mm_mul_ps(v428, v296[1]);
  v430 = _mm_add_ps(v429, v425);
  v23 = v430;
  v431 = _mm_shuffle_ps(v539[0], v539[0], 0xAA);
  v432 = _mm_mul_ps(v431, v296[2]);
  v433 = _mm_add_ps(v432, v430);
  v23 = v433;
  v434 = _mm_shuffle_ps(v539[0], v539[0], 0xFF);
  v435 = _mm_mul_ps(v434, v296[3]);
  v436 = _mm_add_ps(v435, v433);
  v476 = v436;
  v437 = _mm_shuffle_ps(v539[1], v539[1], 0);
  v438 = _mm_mul_ps(v437, *v296);
  v439 = v438;
  v440 = v438;
  v23 = v438;
  v441 = _mm_shuffle_ps(v539[1], v539[1], 0x55);
  v442 = _mm_mul_ps(v441, v296[1]);
  v443 = _mm_add_ps(v442, v438);
  v23 = v443;
  v444 = _mm_shuffle_ps(v539[1], v539[1], 0xAA);
  v445 = _mm_mul_ps(v444, v296[2]);
  v446 = _mm_add_ps(v445, v443);
  v23 = v446;
  v447 = _mm_shuffle_ps(v539[1], v539[1], 0xFF);
  v448 = _mm_mul_ps(v447, v296[3]);
  v449 = _mm_add_ps(v448, v446);
  v477 = v449;
  v450 = _mm_shuffle_ps(v539[2], v539[2], 0);
  v451 = _mm_mul_ps(v450, *v296);
  v452 = v451;
  v453 = v451;
  v23 = v451;
  v454 = _mm_shuffle_ps(v539[2], v539[2], 0x55);
  v455 = _mm_mul_ps(v454, v296[1]);
  v456 = _mm_add_ps(v455, v451);
  v23 = v456;
  v457 = _mm_shuffle_ps(v539[2], v539[2], 0xAA);
  v458 = _mm_mul_ps(v457, v296[2]);
  v459 = _mm_add_ps(v458, v456);
  v23 = v459;
  v460 = _mm_shuffle_ps(v539[2], v539[2], 0xFF);
  v461 = _mm_mul_ps(v460, v296[3]);
  v462 = _mm_add_ps(v461, v459);
  v478 = v462;
  v463 = _mm_shuffle_ps(v539[3], v539[3], 0);
  v464 = _mm_mul_ps(v463, *v296);
  v465 = v464;
  v466 = v464;
  v23 = v464;
  v467 = _mm_shuffle_ps(v539[3], v539[3], 0x55);
  v468 = _mm_mul_ps(v467, v296[1]);
  v469 = _mm_add_ps(v468, v464);
  v23 = v469;
  v470 = _mm_shuffle_ps(v539[3], v539[3], 0xAA);
  v471 = _mm_mul_ps(v470, v296[2]);
  v472 = _mm_add_ps(v471, v469);
  v23 = v472;
  v473 = _mm_shuffle_ps(v539[3], v539[3], 0xFF);
  v474 = _mm_mul_ps(v473, v296[3]);
  v475 = _mm_add_ps(v474, v472);
  v479 = v475;
  v540[0] = v436;
  v540[1] = v449;
  v540[2] = v462;
  v540[3] = v475;
  qmemcpy(v541, v540, sizeof(v541));
  v297 = v541;
  v82 = (_OWORD *)v542;
  v480 = _mm_shuffle_ps(v541[0], v541[0], 0);
  v481 = _mm_mul_ps(v480, *v298);
  v482 = v481;
  v483 = v481;
  v21 = v481;
  v484 = _mm_shuffle_ps(v541[0], v541[0], 0x55);
  v485 = _mm_mul_ps(v484, v298[1]);
  v486 = _mm_add_ps(v485, v481);
  v21 = v486;
  v487 = _mm_shuffle_ps(v541[0], v541[0], 0xAA);
  v488 = _mm_mul_ps(v487, v298[2]);
  v489 = _mm_add_ps(v488, v486);
  v21 = v489;
  v490 = _mm_shuffle_ps(v541[0], v541[0], 0xFF);
  v491 = _mm_mul_ps(v490, v298[3]);
  v492 = _mm_add_ps(v491, v489);
  v532 = v492;
  v493 = _mm_shuffle_ps(v541[1], v541[1], 0);
  v494 = _mm_mul_ps(v493, *v298);
  v495 = v494;
  v496 = v494;
  v21 = v494;
  v497 = _mm_shuffle_ps(v541[1], v541[1], 0x55);
  v498 = _mm_mul_ps(v497, v298[1]);
  v499 = _mm_add_ps(v498, v494);
  v21 = v499;
  v500 = _mm_shuffle_ps(v541[1], v541[1], 0xAA);
  v501 = _mm_mul_ps(v500, v298[2]);
  v502 = _mm_add_ps(v501, v499);
  v21 = v502;
  v503 = _mm_shuffle_ps(v541[1], v541[1], 0xFF);
  v504 = _mm_mul_ps(v503, v298[3]);
  v505 = _mm_add_ps(v504, v502);
  v533 = v505;
  v506 = _mm_shuffle_ps(v541[2], v541[2], 0);
  v507 = _mm_mul_ps(v506, *v298);
  v508 = v507;
  v509 = v507;
  v21 = v507;
  v510 = _mm_shuffle_ps(v541[2], v541[2], 0x55);
  v511 = _mm_mul_ps(v510, v298[1]);
  v512 = _mm_add_ps(v511, v507);
  v21 = v512;
  v513 = _mm_shuffle_ps(v541[2], v541[2], 0xAA);
  v514 = _mm_mul_ps(v513, v298[2]);
  v515 = _mm_add_ps(v514, v512);
  v21 = v515;
  v516 = _mm_shuffle_ps(v541[2], v541[2], 0xFF);
  v517 = _mm_mul_ps(v516, v298[3]);
  v518 = _mm_add_ps(v517, v515);
  v534 = v518;
  v519 = _mm_shuffle_ps(v541[3], v541[3], 0);
  v520 = _mm_mul_ps(v519, *v298);
  v521 = v520;
  v522 = v520;
  v21 = v520;
  v523 = _mm_shuffle_ps(v541[3], v541[3], 0x55);
  v524 = _mm_mul_ps(v523, v298[1]);
  v525 = _mm_add_ps(v524, v520);
  v21 = v525;
  v526 = _mm_shuffle_ps(v541[3], v541[3], 0xAA);
  v527 = _mm_mul_ps(v526, v298[2]);
  v528 = _mm_add_ps(v527, v525);
  v21 = v528;
  v529 = _mm_shuffle_ps(v541[3], v541[3], 0xFF);
  v530 = _mm_mul_ps(v529, v298[3]);
  v531 = _mm_add_ps(v530, v528);
  v535 = v531;
  v542[0] = v492;
  v542[1] = v505;
  v542[2] = v518;
  v542[3] = v531;
  qmemcpy(v543, v542, sizeof(v543));
  v299 = v543;
  qmemcpy(v545, v543, sizeof(v545));
  if ( *(_BYTE *)(v561 + 0xC7C) == 1 )
    qmemcpy(v546, (const void *)(v561 + 0xC80), sizeof(v546));
  else
    qmemcpy(v546, (const void *)sub_14E1CB6F0(v550, v547), sizeof(v546));
  sub_140B43210(v544, v355);
  v144 = a5;
  v300 = v8_qjs::External::Value(a5);
  v301 = v300;
  v302 = v300;
  v83 = v300;
  v303 = v8_qjs::External::Value(v144);
  v304 = v303;
  v136 = *((_DWORD *)v144 + 2);
  v305 = 0xCLL * v136 + v303;
  v306 = v305;
  while ( v83 != v306 )
  {
    v307 = v83;
    v20[0] = 0LL;
    v7 = sub_140AEDBC0(v544, v548);
    sub_14E88E5E0(v307, v355, v7, v20);
    v43 = *((_DWORD *)a6 + 2);
    v42 = *((_DWORD *)a6 + 2) + 1;
    *((_DWORD *)a6 + 2) = v42;
    if ( v42 > *((_DWORD *)a6 + 3) )
      sub_140AC7220(a6);
    v137 = v43;
    v44 = v43;
    v308 = v8_qjs::External::Value(a6);
    v309 = v308;
    v311 = (_QWORD *)sub_140ADEB10(8LL, v308 + 8LL * v44);
    v310 = v20;
    *v311 = v20[0];
    v328 = v44;
    if ( *(float *)v20 < v24 )
      v45 = v24;
    else
      v45 = *(float *)v20;
    v138 = v45;
    v24 = v45;
    if ( *((float *)v20 + 1) < v25 )
      v46 = v25;
    else
      v46 = *((float *)v20 + 1);
    v139 = v46;
    v25 = v46;
    if ( *(float *)v20 > v26 )
      v47 = v26;
    else
      v47 = *(float *)v20;
    v140 = v47;
    v26 = v47;
    if ( *((float *)v20 + 1) > v27 )
      v48 = v27;
    else
      v48 = *((float *)v20 + 1);
    v141 = v48;
    v27 = v48;
    v83 += 0xCLL;
  }
  v8 = (const void *)sub_140ADAC40(v537, &v26, &v24);
  qmemcpy(v564, v8, 0x14uLL);
  if ( *v564 >= 0.0 )
  {
    if ( (float)*(int *)(v19 + 0x138) < *v564 )
    {
      *v564 = (float)*(int *)(v19 + 0x138);
      v9 = 0;
    }
  }
  else
  {
    *v564 = 0.0;
    v9 = 0;
  }
  if ( v564[1] >= 0.0 )
  {
    if ( (float)*(int *)(v19 + 0x13C) < v564[1] )
    {
      v564[1] = (float)*(int *)(v19 + 0x13C);
      v9 = 0;
    }
  }
  else
  {
    v564[1] = 0.0;
    v9 = 0;
  }
  if ( (float)*(int *)(v19 + 0x138) >= v564[2] )
  {
    if ( v564[2] < 0.0 )
    {
      v564[2] = 0.0;
      v9 = 0;
    }
  }
  else
  {
    v564[2] = (float)*(int *)(v19 + 0x138);
    v9 = 0;
  }
  if ( (float)*(int *)(v19 + 0x13C) >= v564[3] )
  {
    if ( v564[3] < 0.0 )
    {
      v564[3] = 0.0;
      v9 = 0;
    }
  }
  else
  {
    v564[3] = (float)*(int *)(v19 + 0x13C);
    v9 = 0;
  }
  v329 = 0x1FB;
  if ( !byte_156DD9F80 )
    goto LABEL_77;
  if ( !*(&byte_156DD9F80 + 0x1FB) )
    goto LABEL_77;
  v318 = &v561;
  v317 = v562;
  v316 = v563;
  v315 = v564;
  v314 = a5;
  v313 = a6;
  v312 = "USceneCaptureComponent2D";
  v10 = sub_140B1FD90();
  v11 = sub_140B6FA10(
          0x1FB,
          (_DWORD)v318,
          (_DWORD)v317,
          (_DWORD)v316,
          (__int64)v315,
          (__int64)v314,
          (__int64)v313,
          (__int64)&v312,
          (__int64)&v10);
  if ( *(&byte_156DD9F80 + 0x1FB) == 2 )
  {
    v12 = v11;
    sub_140ADE460(v550);
    return v12;
  }
  else
  {
LABEL_77:
    v13 = v9;
    sub_140ADE460(v550);
    return v13;
  }
}
```
---
SSE Array Offset
---
```asm
.std:0000000140AE8659                                                 loc_140AE8659:                          ; CODE XREF: sub_140AE6880+1CD7↑j
.std:0000000140AE8659                                                                                         ; sub_140AE6880+1D23↑j
.std:0000000140AE8659 B8 04 00 00 00                                                  mov     eax, 4
.std:0000000140AE865E 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE8662 F3 0F 10 84 04 10 24 00 00                                      movss   xmm0, dword ptr [rsp+rax+2410h] ; Move Scalar Single-FP
.std:0000000140AE866B F3 0F 11 84 24 18 03 00 00                                      movss   dword ptr [rsp+318h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8674 B8 04 00 00 00                                                  mov     eax, 4
.std:0000000140AE8679 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE867D F3 0F 10 84 04 10 24 00 00                                      movss   xmm0, dword ptr [rsp+rax+2410h] ; Move Scalar Single-FP
.std:0000000140AE8686 F3 0F 11 84 24 10 03 00 00                                      movss   dword ptr [rsp+310h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE868F B8 04 00 00 00                                                  mov     eax, 4
.std:0000000140AE8694 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE8698 F3 0F 10 84 04 10 24 00 00                                      movss   xmm0, dword ptr [rsp+rax+2410h] ; Move Scalar Single-FP
.std:0000000140AE86A1 F3 0F 11 84 24 08 03 00 00                                      movss   dword ptr [rsp+308h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE86AA F3 0F 10 84 24 08 03 00 00                                      movss   xmm0, dword ptr [rsp+308h] ; Move Scalar Single-FP
.std:0000000140AE86B3 F3 0F 11 84 24 2C 06 00 00                                      movss   dword ptr [rsp+62Ch], xmm0 ; Move Scalar Single-FP
.std:0000000140AE86BC F3 0F 10 84 24 10 03 00 00                                      movss   xmm0, dword ptr [rsp+310h] ; Move Scalar Single-FP
.std:0000000140AE86C5 F3 0F 11 84 24 30 06 00 00                                      movss   dword ptr [rsp+630h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE86CE F3 0F 10 84 24 18 03 00 00                                      movss   xmm0, dword ptr [rsp+318h] ; Move Scalar Single-FP
.std:0000000140AE86D7 F3 0F 11 84 24 34 06 00 00                                      movss   dword ptr [rsp+634h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE86E0 48 8D 84 24 2C 06 00 00                                         lea     rax, [rsp+62Ch] ; Load Effective Address
.std:0000000140AE86E8 48 89 84 24 90 09 00 00                                         mov     [rsp+990h], rax
.std:0000000140AE86F0 48 8D 84 24 A0 18 00 00                                         lea     rax, [rsp+18A0h] ; Load Effective Address
.std:0000000140AE86F8 48 8B F8                                                        mov     rdi, rax
.std:0000000140AE86FB 48 8B B4 24 90 09 00 00                                         mov     rsi, [rsp+990h]
.std:0000000140AE8703 B9 0C 00 00 00                                                  mov     ecx, 0Ch
.std:0000000140AE8708 F3 A4                                                           rep movsb               ; Move Byte(s) from String to String
.std:0000000140AE870A 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE870D F3 0F 11 84 24 60 06 00 00                                      movss   dword ptr [rsp+660h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8716 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8719 F3 0F 11 84 24 64 06 00 00                                      movss   dword ptr [rsp+664h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8722 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8725 F3 0F 11 84 24 68 06 00 00                                      movss   dword ptr [rsp+668h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE872E F3 0F 10 05 DA 4D BE 0F                                         movss   xmm0, dword ptr cs:ymmword_1506CD4FC+14h ; Move Scalar Single-FP
.std:0000000140AE8736 F3 0F 11 84 24 6C 06 00 00                                      movss   dword ptr [rsp+66Ch], xmm0 ; Move Scalar Single-FP
.std:0000000140AE873F 48 8D 84 24 60 06 00 00                                         lea     rax, [rsp+660h] ; Load Effective Address
.std:0000000140AE8747 48 89 84 24 98 09 00 00                                         mov     [rsp+998h], rax
.std:0000000140AE874F 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8752 F3 0F 11 84 24 70 06 00 00                                      movss   dword ptr [rsp+670h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE875B F3 0F 10 05 AD 4D BE 0F                                         movss   xmm0, dword ptr cs:ymmword_1506CD4FC+14h ; Move Scalar Single-FP
.std:0000000140AE8763 F3 0F 11 84 24 74 06 00 00                                      movss   dword ptr [rsp+674h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE876C 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE876F F3 0F 11 84 24 78 06 00 00                                      movss   dword ptr [rsp+678h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8778 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE877B F3 0F 11 84 24 7C 06 00 00                                      movss   dword ptr [rsp+67Ch], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8784 48 8D 84 24 70 06 00 00                                         lea     rax, [rsp+670h] ; Load Effective Address
.std:0000000140AE878C 48 89 84 24 A0 09 00 00                                         mov     [rsp+9A0h], rax
.std:0000000140AE8794 F3 0F 10 05 74 4D BE 0F                                         movss   xmm0, dword ptr cs:ymmword_1506CD4FC+14h ; Move Scalar Single-FP
.std:0000000140AE879C F3 0F 11 84 24 80 06 00 00                                      movss   dword ptr [rsp+680h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE87A5 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE87A8 F3 0F 11 84 24 84 06 00 00                                      movss   dword ptr [rsp+684h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE87B1 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE87B4 F3 0F 11 84 24 88 06 00 00                                      movss   dword ptr [rsp+688h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE87BD 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE87C0 F3 0F 11 84 24 8C 06 00 00                                      movss   dword ptr [rsp+68Ch], xmm0 ; Move Scalar Single-FP
.std:0000000140AE87C9 48 8D 84 24 80 06 00 00                                         lea     rax, [rsp+680h] ; Load Effective Address
.std:0000000140AE87D1 48 89 84 24 A8 09 00 00                                         mov     [rsp+9A8h], rax
.std:0000000140AE87D9 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE87DC F3 0F 11 84 24 90 06 00 00                                      movss   dword ptr [rsp+690h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE87E5 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE87E8 F3 0F 11 84 24 94 06 00 00                                      movss   dword ptr [rsp+694h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE87F1 F3 0F 10 05 17 4D BE 0F                                         movss   xmm0, dword ptr cs:ymmword_1506CD4FC+14h ; Move Scalar Single-FP
.std:0000000140AE87F9 F3 0F 11 84 24 98 06 00 00                                      movss   dword ptr [rsp+698h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8802 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8805 F3 0F 11 84 24 9C 06 00 00                                      movss   dword ptr [rsp+69Ch], xmm0 ; Move Scalar Single-FP
.std:0000000140AE880E 48 8D 84 24 90 06 00 00                                         lea     rax, [rsp+690h] ; Load Effective Address
.std:0000000140AE8816 48 89 84 24 B0 09 00 00                                         mov     [rsp+9B0h], rax
.std:0000000140AE881E 48 8B 84 24 98 09 00 00                                         mov     rax, [rsp+998h]
.std:0000000140AE8826 48 89 84 24 B8 01 00 00                                         mov     [rsp+1B8h], rax
.std:0000000140AE882E 48 8B 84 24 A0 09 00 00                                         mov     rax, [rsp+9A0h]
.std:0000000140AE8836 48 89 84 24 B0 01 00 00                                         mov     [rsp+1B0h], rax
.std:0000000140AE883E 48 8B 84 24 A8 09 00 00                                         mov     rax, [rsp+9A8h]
.std:0000000140AE8846 48 89 84 24 A8 01 00 00                                         mov     [rsp+1A8h], rax
.std:0000000140AE884E 48 8B 84 24 B0 09 00 00                                         mov     rax, [rsp+9B0h]
.std:0000000140AE8856 48 89 84 24 48 02 00 00                                         mov     [rsp+248h], rax
.std:0000000140AE885E B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8863 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE8867 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE886F B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8874 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE8878 48 8B 94 24 48 02 00 00                                         mov     rdx, [rsp+248h]
.std:0000000140AE8880 F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE8884 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8889 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE888E 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE8892 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE889A B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE889F 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE88A3 48 8B 94 24 48 02 00 00                                         mov     rdx, [rsp+248h]
.std:0000000140AE88AB F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE88B0 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE88B5 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE88BA 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE88BE 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE88C6 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE88CB 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE88CF 48 8B 94 24 48 02 00 00                                         mov     rdx, [rsp+248h]
.std:0000000140AE88D7 F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE88DC F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE88E1 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE88E6 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE88EA 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE88F2 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE88F7 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE88FB 48 8B 94 24 48 02 00 00                                         mov     rdx, [rsp+248h]
.std:0000000140AE8903 F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE8908 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE890D B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8912 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE8916 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE891E B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8923 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE8927 48 8B 94 24 A8 01 00 00                                         mov     rdx, [rsp+1A8h]
.std:0000000140AE892F F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE8933 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8938 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE893D 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE8941 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE8949 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE894E 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE8952 48 8B 94 24 A8 01 00 00                                         mov     rdx, [rsp+1A8h]
.std:0000000140AE895A F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE895F F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8964 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8969 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE896D 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE8975 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE897A 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE897E 48 8B 94 24 A8 01 00 00                                         mov     rdx, [rsp+1A8h]
.std:0000000140AE8986 F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE898B F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8990 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8995 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE8999 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE89A1 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE89A6 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE89AA 48 8B 94 24 A8 01 00 00                                         mov     rdx, [rsp+1A8h]
.std:0000000140AE89B2 F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE89B7 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE89BC B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE89C1 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE89C5 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE89CD B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE89D2 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE89D6 48 8B 94 24 B0 01 00 00                                         mov     rdx, [rsp+1B0h]
.std:0000000140AE89DE F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE89E2 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE89E7 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE89EC 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE89F0 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE89F8 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE89FD 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE8A01 48 8B 94 24 B0 01 00 00                                         mov     rdx, [rsp+1B0h]
.std:0000000140AE8A09 F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE8A0E F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8A13 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8A18 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE8A1C 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE8A24 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8A29 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE8A2D 48 8B 94 24 B0 01 00 00                                         mov     rdx, [rsp+1B0h]
.std:0000000140AE8A35 F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE8A3A F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8A3F B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8A44 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE8A48 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE8A50 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8A55 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE8A59 48 8B 94 24 B0 01 00 00                                         mov     rdx, [rsp+1B0h]
.std:0000000140AE8A61 F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE8A66 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8A6B B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8A70 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE8A74 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE8A7C B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8A81 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE8A85 48 8B 94 24 B8 01 00 00                                         mov     rdx, [rsp+1B8h]
.std:0000000140AE8A8D F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE8A91 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8A96 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8A9B 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE8A9F 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE8AA7 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8AAC 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE8AB0 48 8B 94 24 B8 01 00 00                                         mov     rdx, [rsp+1B8h]
.std:0000000140AE8AB8 F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE8ABD F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8AC2 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8AC7 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE8ACB 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE8AD3 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8AD8 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE8ADC 48 8B 94 24 B8 01 00 00                                         mov     rdx, [rsp+1B8h]
.std:0000000140AE8AE4 F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE8AE9 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8AEE B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8AF3 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE8AF7 48 8D 84 04 60 07 00 00                                         lea     rax, [rsp+rax+760h] ; Load Effective Address
.std:0000000140AE8AFF B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8B04 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE8B08 48 8B 94 24 B8 01 00 00                                         mov     rdx, [rsp+1B8h]
.std:0000000140AE8B10 F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE8B15 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8B1A 48 8D 84 24 60 07 00 00                                         lea     rax, [rsp+760h] ; Load Effective Address
.std:0000000140AE8B22 48 89 84 24 40 0A 00 00                                         mov     [rsp+0A40h], rax
.std:0000000140AE8B2A 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8B2D F3 0F 11 84 24 A0 06 00 00                                      movss   dword ptr [rsp+6A0h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8B36 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8B39 F3 0F 11 84 24 A4 06 00 00                                      movss   dword ptr [rsp+6A4h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8B42 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8B45 F3 0F 11 84 24 A8 06 00 00                                      movss   dword ptr [rsp+6A8h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8B4E F3 0F 10 05 BA 49 BE 0F                                         movss   xmm0, dword ptr cs:ymmword_1506CD4FC+14h ; Move Scalar Single-FP
.std:0000000140AE8B56 F3 0F 11 84 24 AC 06 00 00                                      movss   dword ptr [rsp+6ACh], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8B5F 48 8D 84 24 A0 06 00 00                                         lea     rax, [rsp+6A0h] ; Load Effective Address
.std:0000000140AE8B67 48 89 84 24 B8 09 00 00                                         mov     [rsp+9B8h], rax
.std:0000000140AE8B6F F3 0F 10 84 24 38 1A 00 00                                      movss   xmm0, dword ptr [rsp+1A38h] ; Move Scalar Single-FP
.std:0000000140AE8B78 F3 0F 59 05 94 4C BF 0F                                         mulss   xmm0, cs:dword_1506DD814 ; Scalar Single-FP Multiply
.std:0000000140AE8B80 F3 0F 5E 05 90 4C BF 0F                                         divss   xmm0, cs:dword_1506DD818 ; Scalar Single-FP Divide
.std:0000000140AE8B88 F3 0F 11 84 24 20 03 00 00                                      movss   dword ptr [rsp+320h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8B91 F3 0F 10 84 24 20 03 00 00                                      movss   xmm0, dword ptr [rsp+320h] ; Move Scalar Single-FP
.std:0000000140AE8B9A E8 66 D8 77 0F                                                  call    loc_150266405   ; Call Procedure
.std:0000000140AE8B9F F3 0F 11 84 24 34 03 00 00                                      movss   dword ptr [rsp+334h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8BA8 F3 0F 10 84 24 38 1A 00 00                                      movss   xmm0, dword ptr [rsp+1A38h] ; Move Scalar Single-FP
.std:0000000140AE8BB1 F3 0F 59 05 5B 4C BF 0F                                         mulss   xmm0, cs:dword_1506DD814 ; Scalar Single-FP Multiply
.std:0000000140AE8BB9 F3 0F 5E 05 57 4C BF 0F                                         divss   xmm0, cs:dword_1506DD818 ; Scalar Single-FP Divide
.std:0000000140AE8BC1 F3 0F 11 84 24 28 03 00 00                                      movss   dword ptr [rsp+328h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8BCA F3 0F 10 84 24 28 03 00 00                                      movss   xmm0, dword ptr [rsp+328h] ; Move Scalar Single-FP
.std:0000000140AE8BD3 E8 39 D8 77 0F                                                  call    loc_150266411   ; Call Procedure
.std:0000000140AE8BD8 F3 0F 11 84 24 30 03 00 00                                      movss   dword ptr [rsp+330h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8BE1 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8BE4 F3 0F 11 84 24 B0 06 00 00                                      movss   dword ptr [rsp+6B0h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8BED F3 0F 10 84 24 30 03 00 00                                      movss   xmm0, dword ptr [rsp+330h] ; Move Scalar Single-FP
.std:0000000140AE8BF6 0F 57 05 13 F0 BD 0F                                            xorps   xmm0, cs:xmmword_1506C7C10 ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8BFD F3 0F 11 84 24 B4 06 00 00                                      movss   dword ptr [rsp+6B4h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8C06 F3 0F 10 84 24 34 03 00 00                                      movss   xmm0, dword ptr [rsp+334h] ; Move Scalar Single-FP
.std:0000000140AE8C0F F3 0F 11 84 24 B8 06 00 00                                      movss   dword ptr [rsp+6B8h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8C18 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8C1B F3 0F 11 84 24 BC 06 00 00                                      movss   dword ptr [rsp+6BCh], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8C24 48 8D 84 24 B0 06 00 00                                         lea     rax, [rsp+6B0h] ; Load Effective Address
.std:0000000140AE8C2C 48 89 84 24 C0 09 00 00                                         mov     [rsp+9C0h], rax
.std:0000000140AE8C34 F3 0F 10 84 24 38 1A 00 00                                      movss   xmm0, dword ptr [rsp+1A38h] ; Move Scalar Single-FP
.std:0000000140AE8C3D F3 0F 59 05 CF 4B BF 0F                                         mulss   xmm0, cs:dword_1506DD814 ; Scalar Single-FP Multiply
.std:0000000140AE8C45 F3 0F 5E 05 CB 4B BF 0F                                         divss   xmm0, cs:dword_1506DD818 ; Scalar Single-FP Divide
.std:0000000140AE8C4D F3 0F 11 84 24 38 03 00 00                                      movss   dword ptr [rsp+338h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8C56 F3 0F 10 84 24 38 03 00 00                                      movss   xmm0, dword ptr [rsp+338h] ; Move Scalar Single-FP
.std:0000000140AE8C5F E8 AD D7 77 0F                                                  call    loc_150266411   ; Call Procedure
.std:0000000140AE8C64 F3 0F 11 84 24 4C 03 00 00                                      movss   dword ptr [rsp+34Ch], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8C6D F3 0F 10 84 24 38 1A 00 00                                      movss   xmm0, dword ptr [rsp+1A38h] ; Move Scalar Single-FP
.std:0000000140AE8C76 F3 0F 59 05 96 4B BF 0F                                         mulss   xmm0, cs:dword_1506DD814 ; Scalar Single-FP Multiply
.std:0000000140AE8C7E F3 0F 5E 05 92 4B BF 0F                                         divss   xmm0, cs:dword_1506DD818 ; Scalar Single-FP Divide
.std:0000000140AE8C86 F3 0F 11 84 24 40 03 00 00                                      movss   dword ptr [rsp+340h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8C8F F3 0F 10 84 24 40 03 00 00                                      movss   xmm0, dword ptr [rsp+340h] ; Move Scalar Single-FP
.std:0000000140AE8C98 E8 68 D7 77 0F                                                  call    loc_150266405   ; Call Procedure
.std:0000000140AE8C9D F3 0F 11 84 24 48 03 00 00                                      movss   dword ptr [rsp+348h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8CA6 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8CA9 F3 0F 11 84 24 C0 06 00 00                                      movss   dword ptr [rsp+6C0h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8CB2 F3 0F 10 84 24 48 03 00 00                                      movss   xmm0, dword ptr [rsp+348h] ; Move Scalar Single-FP
.std:0000000140AE8CBB F3 0F 11 84 24 C4 06 00 00                                      movss   dword ptr [rsp+6C4h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8CC4 F3 0F 10 84 24 4C 03 00 00                                      movss   xmm0, dword ptr [rsp+34Ch] ; Move Scalar Single-FP
.std:0000000140AE8CCD F3 0F 11 84 24 C8 06 00 00                                      movss   dword ptr [rsp+6C8h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8CD6 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8CD9 F3 0F 11 84 24 CC 06 00 00                                      movss   dword ptr [rsp+6CCh], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8CE2 48 8D 84 24 C0 06 00 00                                         lea     rax, [rsp+6C0h] ; Load Effective Address
.std:0000000140AE8CEA 48 89 84 24 C8 09 00 00                                         mov     [rsp+9C8h], rax
.std:0000000140AE8CF2 F3 0F 10 05 16 48 BE 0F                                         movss   xmm0, dword ptr cs:ymmword_1506CD4FC+14h ; Move Scalar Single-FP
.std:0000000140AE8CFA F3 0F 11 84 24 D0 06 00 00                                      movss   dword ptr [rsp+6D0h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8D03 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8D06 F3 0F 11 84 24 D4 06 00 00                                      movss   dword ptr [rsp+6D4h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8D0F 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8D12 F3 0F 11 84 24 D8 06 00 00                                      movss   dword ptr [rsp+6D8h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8D1B 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE8D1E F3 0F 11 84 24 DC 06 00 00                                      movss   dword ptr [rsp+6DCh], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8D27 48 8D 84 24 D0 06 00 00                                         lea     rax, [rsp+6D0h] ; Load Effective Address
.std:0000000140AE8D2F 48 89 84 24 D0 09 00 00                                         mov     [rsp+9D0h], rax
.std:0000000140AE8D37 48 8B 84 24 B8 09 00 00                                         mov     rax, [rsp+9B8h]
.std:0000000140AE8D3F 48 89 84 24 D8 01 00 00                                         mov     [rsp+1D8h], rax
.std:0000000140AE8D47 48 8B 84 24 C0 09 00 00                                         mov     rax, [rsp+9C0h]
.std:0000000140AE8D4F 48 89 84 24 D0 01 00 00                                         mov     [rsp+1D0h], rax
.std:0000000140AE8D57 48 8B 84 24 C8 09 00 00                                         mov     rax, [rsp+9C8h]
.std:0000000140AE8D5F 48 89 84 24 C8 01 00 00                                         mov     [rsp+1C8h], rax
.std:0000000140AE8D67 48 8B 84 24 D0 09 00 00                                         mov     rax, [rsp+9D0h]
.std:0000000140AE8D6F 48 89 84 24 C0 01 00 00                                         mov     [rsp+1C0h], rax
.std:0000000140AE8D77 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8D7C 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE8D80 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8D88 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8D8D 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE8D91 48 8B 94 24 C0 01 00 00                                         mov     rdx, [rsp+1C0h]
.std:0000000140AE8D99 F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE8D9D F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8DA2 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8DA7 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE8DAB 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8DB3 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8DB8 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE8DBC 48 8B 94 24 C0 01 00 00                                         mov     rdx, [rsp+1C0h]
.std:0000000140AE8DC4 F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE8DC9 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8DCE B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8DD3 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE8DD7 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8DDF B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8DE4 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE8DE8 48 8B 94 24 C0 01 00 00                                         mov     rdx, [rsp+1C0h]
.std:0000000140AE8DF0 F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE8DF5 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8DFA B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8DFF 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE8E03 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8E0B B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8E10 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE8E14 48 8B 94 24 C0 01 00 00                                         mov     rdx, [rsp+1C0h]
.std:0000000140AE8E1C F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE8E21 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8E26 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8E2B 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE8E2F 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8E37 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8E3C 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE8E40 48 8B 94 24 C8 01 00 00                                         mov     rdx, [rsp+1C8h]
.std:0000000140AE8E48 F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE8E4C F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8E51 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8E56 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE8E5A 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8E62 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8E67 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE8E6B 48 8B 94 24 C8 01 00 00                                         mov     rdx, [rsp+1C8h]
.std:0000000140AE8E73 F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE8E78 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8E7D B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8E82 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE8E86 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8E8E B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8E93 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE8E97 48 8B 94 24 C8 01 00 00                                         mov     rdx, [rsp+1C8h]
.std:0000000140AE8E9F F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE8EA4 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8EA9 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8EAE 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE8EB2 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8EBA B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8EBF 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE8EC3 48 8B 94 24 C8 01 00 00                                         mov     rdx, [rsp+1C8h]
.std:0000000140AE8ECB F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE8ED0 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8ED5 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8EDA 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE8EDE 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8EE6 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8EEB 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE8EEF 48 8B 94 24 D0 01 00 00                                         mov     rdx, [rsp+1D0h]
.std:0000000140AE8EF7 F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE8EFB F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8F00 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8F05 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE8F09 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8F11 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8F16 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE8F1A 48 8B 94 24 D0 01 00 00                                         mov     rdx, [rsp+1D0h]
.std:0000000140AE8F22 F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE8F27 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8F2C B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8F31 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE8F35 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8F3D B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8F42 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE8F46 48 8B 94 24 D0 01 00 00                                         mov     rdx, [rsp+1D0h]
.std:0000000140AE8F4E F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE8F53 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8F58 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8F5D 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE8F61 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8F69 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8F6E 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE8F72 48 8B 94 24 D0 01 00 00                                         mov     rdx, [rsp+1D0h]
.std:0000000140AE8F7A F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE8F7F F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8F84 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8F89 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE8F8D 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8F95 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8F9A 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE8F9E 48 8B 94 24 D8 01 00 00                                         mov     rdx, [rsp+1D8h]
.std:0000000140AE8FA6 F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE8FAA F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8FAF B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8FB4 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE8FB8 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8FC0 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8FC5 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE8FC9 48 8B 94 24 D8 01 00 00                                         mov     rdx, [rsp+1D8h]
.std:0000000140AE8FD1 F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE8FD6 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE8FDB B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE8FE0 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE8FE4 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE8FEC B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE8FF1 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE8FF5 48 8B 94 24 D8 01 00 00                                         mov     rdx, [rsp+1D8h]
.std:0000000140AE8FFD F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE9002 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9007 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE900C 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE9010 48 8D 84 04 A0 07 00 00                                         lea     rax, [rsp+rax+7A0h] ; Load Effective Address
.std:0000000140AE9018 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE901D 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE9021 48 8B 94 24 D8 01 00 00                                         mov     rdx, [rsp+1D8h]
.std:0000000140AE9029 F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE902E F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9033 48 8D 84 24 A0 07 00 00                                         lea     rax, [rsp+7A0h] ; Load Effective Address
.std:0000000140AE903B 48 89 84 24 30 0A 00 00                                         mov     [rsp+0A30h], rax
.std:0000000140AE9043 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE9046 F3 0F 11 84 24 E0 06 00 00                                      movss   dword ptr [rsp+6E0h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE904F 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE9052 F3 0F 11 84 24 E4 06 00 00                                      movss   dword ptr [rsp+6E4h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE905B 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE905E F3 0F 11 84 24 E8 06 00 00                                      movss   dword ptr [rsp+6E8h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9067 F3 0F 10 05 A1 44 BE 0F                                         movss   xmm0, dword ptr cs:ymmword_1506CD4FC+14h ; Move Scalar Single-FP
.std:0000000140AE906F F3 0F 11 84 24 EC 06 00 00                                      movss   dword ptr [rsp+6ECh], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9078 48 8D 84 24 E0 06 00 00                                         lea     rax, [rsp+6E0h] ; Load Effective Address
.std:0000000140AE9080 48 89 84 24 D8 09 00 00                                         mov     [rsp+9D8h], rax
.std:0000000140AE9088 F3 0F 10 84 24 30 1A 00 00                                      movss   xmm0, dword ptr [rsp+1A30h] ; Move Scalar Single-FP
.std:0000000140AE9091 F3 0F 59 05 7B 47 BF 0F                                         mulss   xmm0, cs:dword_1506DD814 ; Scalar Single-FP Multiply
.std:0000000140AE9099 F3 0F 5E 05 77 47 BF 0F                                         divss   xmm0, cs:dword_1506DD818 ; Scalar Single-FP Divide
.std:0000000140AE90A1 F3 0F 11 84 24 50 03 00 00                                      movss   dword ptr [rsp+350h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE90AA F3 0F 10 84 24 50 03 00 00                                      movss   xmm0, dword ptr [rsp+350h] ; Move Scalar Single-FP
.std:0000000140AE90B3 E8 4D D3 77 0F                                                  call    loc_150266405   ; Call Procedure
.std:0000000140AE90B8 F3 0F 11 84 24 64 03 00 00                                      movss   dword ptr [rsp+364h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE90C1 F3 0F 10 84 24 30 1A 00 00                                      movss   xmm0, dword ptr [rsp+1A30h] ; Move Scalar Single-FP
.std:0000000140AE90CA F3 0F 59 05 42 47 BF 0F                                         mulss   xmm0, cs:dword_1506DD814 ; Scalar Single-FP Multiply
.std:0000000140AE90D2 F3 0F 5E 05 3E 47 BF 0F                                         divss   xmm0, cs:dword_1506DD818 ; Scalar Single-FP Divide
.std:0000000140AE90DA F3 0F 11 84 24 58 03 00 00                                      movss   dword ptr [rsp+358h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE90E3 F3 0F 10 84 24 58 03 00 00                                      movss   xmm0, dword ptr [rsp+358h] ; Move Scalar Single-FP
.std:0000000140AE90EC E8 20 D3 77 0F                                                  call    loc_150266411   ; Call Procedure
.std:0000000140AE90F1 F3 0F 11 84 24 60 03 00 00                                      movss   dword ptr [rsp+360h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE90FA F3 0F 10 84 24 60 03 00 00                                      movss   xmm0, dword ptr [rsp+360h] ; Move Scalar Single-FP
.std:0000000140AE9103 F3 0F 11 84 24 F0 06 00 00                                      movss   dword ptr [rsp+6F0h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE910C 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE910F F3 0F 11 84 24 F4 06 00 00                                      movss   dword ptr [rsp+6F4h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9118 F3 0F 10 84 24 64 03 00 00                                      movss   xmm0, dword ptr [rsp+364h] ; Move Scalar Single-FP
.std:0000000140AE9121 F3 0F 11 84 24 F8 06 00 00                                      movss   dword ptr [rsp+6F8h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE912A 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE912D F3 0F 11 84 24 FC 06 00 00                                      movss   dword ptr [rsp+6FCh], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9136 48 8D 84 24 F0 06 00 00                                         lea     rax, [rsp+6F0h] ; Load Effective Address
.std:0000000140AE913E 48 89 84 24 E0 09 00 00                                         mov     [rsp+9E0h], rax
.std:0000000140AE9146 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE9149 F3 0F 11 84 24 00 07 00 00                                      movss   dword ptr [rsp+700h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9152 F3 0F 10 05 B6 43 BE 0F                                         movss   xmm0, dword ptr cs:ymmword_1506CD4FC+14h ; Move Scalar Single-FP
.std:0000000140AE915A F3 0F 11 84 24 04 07 00 00                                      movss   dword ptr [rsp+704h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9163 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE9166 F3 0F 11 84 24 08 07 00 00                                      movss   dword ptr [rsp+708h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE916F 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE9172 F3 0F 11 84 24 0C 07 00 00                                      movss   dword ptr [rsp+70Ch], xmm0 ; Move Scalar Single-FP
.std:0000000140AE917B 48 8D 84 24 00 07 00 00                                         lea     rax, [rsp+700h] ; Load Effective Address
.std:0000000140AE9183 48 89 84 24 E8 09 00 00                                         mov     [rsp+9E8h], rax
.std:0000000140AE918B F3 0F 10 84 24 30 1A 00 00                                      movss   xmm0, dword ptr [rsp+1A30h] ; Move Scalar Single-FP
.std:0000000140AE9194 F3 0F 59 05 78 46 BF 0F                                         mulss   xmm0, cs:dword_1506DD814 ; Scalar Single-FP Multiply
.std:0000000140AE919C F3 0F 5E 05 74 46 BF 0F                                         divss   xmm0, cs:dword_1506DD818 ; Scalar Single-FP Divide
.std:0000000140AE91A4 F3 0F 11 84 24 68 03 00 00                                      movss   dword ptr [rsp+368h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE91AD F3 0F 10 84 24 68 03 00 00                                      movss   xmm0, dword ptr [rsp+368h] ; Move Scalar Single-FP
.std:0000000140AE91B6 E8 56 D2 77 0F                                                  call    loc_150266411   ; Call Procedure
.std:0000000140AE91BB F3 0F 11 84 24 7C 03 00 00                                      movss   dword ptr [rsp+37Ch], xmm0 ; Move Scalar Single-FP
.std:0000000140AE91C4 F3 0F 10 84 24 30 1A 00 00                                      movss   xmm0, dword ptr [rsp+1A30h] ; Move Scalar Single-FP
.std:0000000140AE91CD F3 0F 59 05 3F 46 BF 0F                                         mulss   xmm0, cs:dword_1506DD814 ; Scalar Single-FP Multiply
.std:0000000140AE91D5 F3 0F 5E 05 3B 46 BF 0F                                         divss   xmm0, cs:dword_1506DD818 ; Scalar Single-FP Divide
.std:0000000140AE91DD F3 0F 11 84 24 70 03 00 00                                      movss   dword ptr [rsp+370h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE91E6 F3 0F 10 84 24 70 03 00 00                                      movss   xmm0, dword ptr [rsp+370h] ; Move Scalar Single-FP
.std:0000000140AE91EF E8 11 D2 77 0F                                                  call    loc_150266405   ; Call Procedure
.std:0000000140AE91F4 F3 0F 11 84 24 78 03 00 00                                      movss   dword ptr [rsp+378h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE91FD F3 0F 10 84 24 78 03 00 00                                      movss   xmm0, dword ptr [rsp+378h] ; Move Scalar Single-FP
.std:0000000140AE9206 F3 0F 11 84 24 10 07 00 00                                      movss   dword ptr [rsp+710h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE920F 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE9212 F3 0F 11 84 24 14 07 00 00                                      movss   dword ptr [rsp+714h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE921B F3 0F 10 84 24 7C 03 00 00                                      movss   xmm0, dword ptr [rsp+37Ch] ; Move Scalar Single-FP
.std:0000000140AE9224 0F 57 05 E5 E9 BD 0F                                            xorps   xmm0, cs:xmmword_1506C7C10 ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE922B F3 0F 11 84 24 18 07 00 00                                      movss   dword ptr [rsp+718h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9234 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE9237 F3 0F 11 84 24 1C 07 00 00                                      movss   dword ptr [rsp+71Ch], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9240 48 8D 84 24 10 07 00 00                                         lea     rax, [rsp+710h] ; Load Effective Address
.std:0000000140AE9248 48 89 84 24 F0 09 00 00                                         mov     [rsp+9F0h], rax
.std:0000000140AE9250 48 8B 84 24 D8 09 00 00                                         mov     rax, [rsp+9D8h]
.std:0000000140AE9258 48 89 84 24 F8 01 00 00                                         mov     [rsp+1F8h], rax
.std:0000000140AE9260 48 8B 84 24 E0 09 00 00                                         mov     rax, [rsp+9E0h]
.std:0000000140AE9268 48 89 84 24 50 02 00 00                                         mov     [rsp+250h], rax
.std:0000000140AE9270 48 8B 84 24 E8 09 00 00                                         mov     rax, [rsp+9E8h]
.std:0000000140AE9278 48 89 84 24 E8 01 00 00                                         mov     [rsp+1E8h], rax
.std:0000000140AE9280 48 8B 84 24 F0 09 00 00                                         mov     rax, [rsp+9F0h]
.std:0000000140AE9288 48 89 84 24 E0 01 00 00                                         mov     [rsp+1E0h], rax
.std:0000000140AE9290 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9295 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE9299 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE92A1 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE92A6 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE92AA 48 8B 94 24 E0 01 00 00                                         mov     rdx, [rsp+1E0h]
.std:0000000140AE92B2 F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE92B6 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE92BB B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE92C0 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE92C4 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE92CC B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE92D1 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE92D5 48 8B 94 24 E0 01 00 00                                         mov     rdx, [rsp+1E0h]
.std:0000000140AE92DD F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE92E2 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE92E7 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE92EC 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE92F0 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE92F8 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE92FD 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE9301 48 8B 94 24 E0 01 00 00                                         mov     rdx, [rsp+1E0h]
.std:0000000140AE9309 F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE930E F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9313 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9318 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE931C 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE9324 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE9329 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE932D 48 8B 94 24 E0 01 00 00                                         mov     rdx, [rsp+1E0h]
.std:0000000140AE9335 F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE933A F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE933F B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9344 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE9348 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE9350 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE9355 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE9359 48 8B 94 24 E8 01 00 00                                         mov     rdx, [rsp+1E8h]
.std:0000000140AE9361 F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE9365 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE936A B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE936F 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE9373 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE937B B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE9380 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE9384 48 8B 94 24 E8 01 00 00                                         mov     rdx, [rsp+1E8h]
.std:0000000140AE938C F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE9391 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9396 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE939B 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE939F 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE93A7 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE93AC 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE93B0 48 8B 94 24 E8 01 00 00                                         mov     rdx, [rsp+1E8h]
.std:0000000140AE93B8 F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE93BD F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE93C2 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE93C7 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE93CB 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE93D3 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE93D8 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE93DC 48 8B 94 24 E8 01 00 00                                         mov     rdx, [rsp+1E8h]
.std:0000000140AE93E4 F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE93E9 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE93EE B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE93F3 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE93F7 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE93FF B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE9404 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE9408 48 8B 94 24 50 02 00 00                                         mov     rdx, [rsp+250h]
.std:0000000140AE9410 F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE9414 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9419 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE941E 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE9422 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE942A B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE942F 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE9433 48 8B 94 24 50 02 00 00                                         mov     rdx, [rsp+250h]
.std:0000000140AE943B F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE9440 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9445 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE944A 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE944E 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE9456 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE945B 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE945F 48 8B 94 24 50 02 00 00                                         mov     rdx, [rsp+250h]
.std:0000000140AE9467 F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE946C F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9471 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9476 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE947A 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE9482 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE9487 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE948B 48 8B 94 24 50 02 00 00                                         mov     rdx, [rsp+250h]
.std:0000000140AE9493 F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE9498 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE949D B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE94A2 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE94A6 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE94AE B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE94B3 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE94B7 48 8B 94 24 F8 01 00 00                                         mov     rdx, [rsp+1F8h]
.std:0000000140AE94BF F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE94C3 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE94C8 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE94CD 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE94D1 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE94D9 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE94DE 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE94E2 48 8B 94 24 F8 01 00 00                                         mov     rdx, [rsp+1F8h]
.std:0000000140AE94EA F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE94EF F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE94F4 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE94F9 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE94FD 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE9505 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE950A 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE950E 48 8B 94 24 F8 01 00 00                                         mov     rdx, [rsp+1F8h]
.std:0000000140AE9516 F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE951B F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9520 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9525 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE9529 48 8D 84 04 E0 07 00 00                                         lea     rax, [rsp+rax+7E0h] ; Load Effective Address
.std:0000000140AE9531 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE9536 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE953A 48 8B 94 24 F8 01 00 00                                         mov     rdx, [rsp+1F8h]
.std:0000000140AE9542 F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE9547 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE954C 48 8D 84 24 E0 07 00 00                                         lea     rax, [rsp+7E0h] ; Load Effective Address
.std:0000000140AE9554 48 89 84 24 20 0A 00 00                                         mov     [rsp+0A20h], rax
.std:0000000140AE955C 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE955F F3 0F 11 84 24 20 07 00 00                                      movss   dword ptr [rsp+720h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9568 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE956B F3 0F 11 84 24 24 07 00 00                                      movss   dword ptr [rsp+724h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9574 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE9577 F3 0F 11 84 24 28 07 00 00                                      movss   dword ptr [rsp+728h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9580 F3 0F 10 05 88 3F BE 0F                                         movss   xmm0, dword ptr cs:ymmword_1506CD4FC+14h ; Move Scalar Single-FP
.std:0000000140AE9588 F3 0F 11 84 24 2C 07 00 00                                      movss   dword ptr [rsp+72Ch], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9591 48 8D 84 24 20 07 00 00                                         lea     rax, [rsp+720h] ; Load Effective Address
.std:0000000140AE9599 48 89 84 24 F8 09 00 00                                         mov     [rsp+9F8h], rax
.std:0000000140AE95A1 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE95A4 F3 0F 11 84 24 30 07 00 00                                      movss   dword ptr [rsp+730h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE95AD 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE95B0 F3 0F 11 84 24 34 07 00 00                                      movss   dword ptr [rsp+734h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE95B9 F3 0F 10 05 4F 3F BE 0F                                         movss   xmm0, dword ptr cs:ymmword_1506CD4FC+14h ; Move Scalar Single-FP
.std:0000000140AE95C1 F3 0F 11 84 24 38 07 00 00                                      movss   dword ptr [rsp+738h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE95CA 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE95CD F3 0F 11 84 24 3C 07 00 00                                      movss   dword ptr [rsp+73Ch], xmm0 ; Move Scalar Single-FP
.std:0000000140AE95D6 48 8D 84 24 30 07 00 00                                         lea     rax, [rsp+730h] ; Load Effective Address
.std:0000000140AE95DE 48 89 84 24 00 0A 00 00                                         mov     [rsp+0A00h], rax
.std:0000000140AE95E6 F3 0F 10 84 24 34 1A 00 00                                      movss   xmm0, dword ptr [rsp+1A34h] ; Move Scalar Single-FP
.std:0000000140AE95EF F3 0F 59 05 1D 42 BF 0F                                         mulss   xmm0, cs:dword_1506DD814 ; Scalar Single-FP Multiply
.std:0000000140AE95F7 F3 0F 5E 05 19 42 BF 0F                                         divss   xmm0, cs:dword_1506DD818 ; Scalar Single-FP Divide
.std:0000000140AE95FF F3 0F 11 84 24 80 03 00 00                                      movss   dword ptr [rsp+380h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9608 F3 0F 10 84 24 80 03 00 00                                      movss   xmm0, dword ptr [rsp+380h] ; Move Scalar Single-FP
.std:0000000140AE9611 E8 EF CD 77 0F                                                  call    loc_150266405   ; Call Procedure
.std:0000000140AE9616 F3 0F 11 84 24 94 03 00 00                                      movss   dword ptr [rsp+394h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE961F F3 0F 10 84 24 34 1A 00 00                                      movss   xmm0, dword ptr [rsp+1A34h] ; Move Scalar Single-FP
.std:0000000140AE9628 F3 0F 59 05 E4 41 BF 0F                                         mulss   xmm0, cs:dword_1506DD814 ; Scalar Single-FP Multiply
.std:0000000140AE9630 F3 0F 5E 05 E0 41 BF 0F                                         divss   xmm0, cs:dword_1506DD818 ; Scalar Single-FP Divide
.std:0000000140AE9638 F3 0F 11 84 24 88 03 00 00                                      movss   dword ptr [rsp+388h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9641 F3 0F 10 84 24 88 03 00 00                                      movss   xmm0, dword ptr [rsp+388h] ; Move Scalar Single-FP
.std:0000000140AE964A E8 C2 CD 77 0F                                                  call    loc_150266411   ; Call Procedure
.std:0000000140AE964F F3 0F 11 84 24 90 03 00 00                                      movss   dword ptr [rsp+390h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9658 F3 0F 10 84 24 90 03 00 00                                      movss   xmm0, dword ptr [rsp+390h] ; Move Scalar Single-FP
.std:0000000140AE9661 F3 0F 11 84 24 40 07 00 00                                      movss   dword ptr [rsp+740h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE966A F3 0F 10 84 24 94 03 00 00                                      movss   xmm0, dword ptr [rsp+394h] ; Move Scalar Single-FP
.std:0000000140AE9673 F3 0F 11 84 24 44 07 00 00                                      movss   dword ptr [rsp+744h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE967C 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE967F F3 0F 11 84 24 48 07 00 00                                      movss   dword ptr [rsp+748h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9688 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE968B F3 0F 11 84 24 4C 07 00 00                                      movss   dword ptr [rsp+74Ch], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9694 48 8D 84 24 40 07 00 00                                         lea     rax, [rsp+740h] ; Load Effective Address
.std:0000000140AE969C 48 89 84 24 08 0A 00 00                                         mov     [rsp+0A08h], rax
.std:0000000140AE96A4 F3 0F 10 84 24 34 1A 00 00                                      movss   xmm0, dword ptr [rsp+1A34h] ; Move Scalar Single-FP
.std:0000000140AE96AD F3 0F 59 05 5F 41 BF 0F                                         mulss   xmm0, cs:dword_1506DD814 ; Scalar Single-FP Multiply
.std:0000000140AE96B5 F3 0F 5E 05 5B 41 BF 0F                                         divss   xmm0, cs:dword_1506DD818 ; Scalar Single-FP Divide
.std:0000000140AE96BD F3 0F 11 84 24 98 03 00 00                                      movss   dword ptr [rsp+398h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE96C6 F3 0F 10 84 24 98 03 00 00                                      movss   xmm0, dword ptr [rsp+398h] ; Move Scalar Single-FP
.std:0000000140AE96CF E8 3D CD 77 0F                                                  call    loc_150266411   ; Call Procedure
.std:0000000140AE96D4 F3 0F 11 84 24 AC 03 00 00                                      movss   dword ptr [rsp+3ACh], xmm0 ; Move Scalar Single-FP
.std:0000000140AE96DD F3 0F 10 84 24 34 1A 00 00                                      movss   xmm0, dword ptr [rsp+1A34h] ; Move Scalar Single-FP
.std:0000000140AE96E6 F3 0F 59 05 26 41 BF 0F                                         mulss   xmm0, cs:dword_1506DD814 ; Scalar Single-FP Multiply
.std:0000000140AE96EE F3 0F 5E 05 22 41 BF 0F                                         divss   xmm0, cs:dword_1506DD818 ; Scalar Single-FP Divide
.std:0000000140AE96F6 F3 0F 11 84 24 A0 03 00 00                                      movss   dword ptr [rsp+3A0h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE96FF F3 0F 10 84 24 A0 03 00 00                                      movss   xmm0, dword ptr [rsp+3A0h] ; Move Scalar Single-FP
.std:0000000140AE9708 E8 F8 CC 77 0F                                                  call    loc_150266405   ; Call Procedure
.std:0000000140AE970D F3 0F 11 84 24 A8 03 00 00                                      movss   dword ptr [rsp+3A8h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9716 F3 0F 10 84 24 A8 03 00 00                                      movss   xmm0, dword ptr [rsp+3A8h] ; Move Scalar Single-FP
.std:0000000140AE971F F3 0F 11 84 24 50 07 00 00                                      movss   dword ptr [rsp+750h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9728 F3 0F 10 84 24 AC 03 00 00                                      movss   xmm0, dword ptr [rsp+3ACh] ; Move Scalar Single-FP
.std:0000000140AE9731 0F 57 05 D8 E4 BD 0F                                            xorps   xmm0, cs:xmmword_1506C7C10 ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE9738 F3 0F 11 84 24 54 07 00 00                                      movss   dword ptr [rsp+754h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9741 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE9744 F3 0F 11 84 24 58 07 00 00                                      movss   dword ptr [rsp+758h], xmm0 ; Move Scalar Single-FP
.std:0000000140AE974D 0F 57 C0                                                        xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.std:0000000140AE9750 F3 0F 11 84 24 5C 07 00 00                                      movss   dword ptr [rsp+75Ch], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9759 48 8D 84 24 50 07 00 00                                         lea     rax, [rsp+750h] ; Load Effective Address
.std:0000000140AE9761 48 89 84 24 10 0A 00 00                                         mov     [rsp+0A10h], rax
.std:0000000140AE9769 48 8B 84 24 F8 09 00 00                                         mov     rax, [rsp+9F8h]
.std:0000000140AE9771 48 89 84 24 18 02 00 00                                         mov     [rsp+218h], rax
.std:0000000140AE9779 48 8B 84 24 00 0A 00 00                                         mov     rax, [rsp+0A00h]
.std:0000000140AE9781 48 89 84 24 10 02 00 00                                         mov     [rsp+210h], rax
.std:0000000140AE9789 48 8B 84 24 08 0A 00 00                                         mov     rax, [rsp+0A08h]
.std:0000000140AE9791 48 89 84 24 08 02 00 00                                         mov     [rsp+208h], rax
.std:0000000140AE9799 48 8B 84 24 10 0A 00 00                                         mov     rax, [rsp+0A10h]
.std:0000000140AE97A1 48 89 84 24 00 02 00 00                                         mov     [rsp+200h], rax
.std:0000000140AE97A9 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE97AE 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE97B2 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE97BA B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE97BF 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE97C3 48 8B 94 24 00 02 00 00                                         mov     rdx, [rsp+200h]
.std:0000000140AE97CB F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE97CF F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE97D4 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE97D9 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE97DD 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE97E5 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE97EA 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE97EE 48 8B 94 24 00 02 00 00                                         mov     rdx, [rsp+200h]
.std:0000000140AE97F6 F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE97FB F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9800 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9805 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE9809 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE9811 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE9816 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE981A 48 8B 94 24 00 02 00 00                                         mov     rdx, [rsp+200h]
.std:0000000140AE9822 F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE9827 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE982C B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9831 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE9835 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE983D B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE9842 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE9846 48 8B 94 24 00 02 00 00                                         mov     rdx, [rsp+200h]
.std:0000000140AE984E F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE9853 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9858 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE985D 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE9861 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE9869 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE986E 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE9872 48 8B 94 24 08 02 00 00                                         mov     rdx, [rsp+208h]
.std:0000000140AE987A F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE987E F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9883 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9888 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE988C 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE9894 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE9899 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE989D 48 8B 94 24 08 02 00 00                                         mov     rdx, [rsp+208h]
.std:0000000140AE98A5 F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE98AA F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE98AF B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE98B4 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE98B8 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE98C0 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE98C5 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE98C9 48 8B 94 24 08 02 00 00                                         mov     rdx, [rsp+208h]
.std:0000000140AE98D1 F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE98D6 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE98DB B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE98E0 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE98E4 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE98EC B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE98F1 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE98F5 48 8B 94 24 08 02 00 00                                         mov     rdx, [rsp+208h]
.std:0000000140AE98FD F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE9902 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9907 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE990C 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE9910 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE9918 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE991D 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE9921 48 8B 94 24 10 02 00 00                                         mov     rdx, [rsp+210h]
.std:0000000140AE9929 F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE992D F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9932 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9937 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE993B 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE9943 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE9948 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE994C 48 8B 94 24 10 02 00 00                                         mov     rdx, [rsp+210h]
.std:0000000140AE9954 F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE9959 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE995E B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9963 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE9967 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE996F B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE9974 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE9978 48 8B 94 24 10 02 00 00                                         mov     rdx, [rsp+210h]
.std:0000000140AE9980 F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE9985 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE998A B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE998F 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE9993 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE999B B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE99A0 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE99A4 48 8B 94 24 10 02 00 00                                         mov     rdx, [rsp+210h]
.std:0000000140AE99AC F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE99B1 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE99B6 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE99BB 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE99BF 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE99C7 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE99CC 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE99D0 48 8B 94 24 18 02 00 00                                         mov     rdx, [rsp+218h]
.std:0000000140AE99D8 F3 0F 10 02                                                     movss   xmm0, dword ptr [rdx] ; Move Scalar Single-FP
.std:0000000140AE99DC F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE99E1 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE99E6 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE99EA 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE99F2 B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE99F7 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE99FB 48 8B 94 24 18 02 00 00                                         mov     rdx, [rsp+218h]
.std:0000000140AE9A03 F3 0F 10 42 04                                                  movss   xmm0, dword ptr [rdx+4] ; Move Scalar Single-FP
.std:0000000140AE9A08 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9A0D B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9A12 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE9A16 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE9A1E B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE9A23 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE9A27 48 8B 94 24 18 02 00 00                                         mov     rdx, [rsp+218h]
.std:0000000140AE9A2F F3 0F 10 42 08                                                  movss   xmm0, dword ptr [rdx+8] ; Move Scalar Single-FP
.std:0000000140AE9A34 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9A39 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9A3E 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE9A42 48 8D 84 04 20 08 00 00                                         lea     rax, [rsp+rax+820h] ; Load Effective Address
.std:0000000140AE9A4A B9 04 00 00 00                                                  mov     ecx, 4
.std:0000000140AE9A4F 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AE9A53 48 8B 94 24 18 02 00 00                                         mov     rdx, [rsp+218h]
.std:0000000140AE9A5B F3 0F 10 42 0C                                                  movss   xmm0, dword ptr [rdx+0Ch] ; Move Scalar Single-FP
.std:0000000140AE9A60 F3 0F 11 04 08                                                  movss   dword ptr [rax+rcx], xmm0 ; Move Scalar Single-FP
.std:0000000140AE9A65 48 8D 84 24 20 08 00 00                                         lea     rax, [rsp+820h] ; Load Effective Address
.std:0000000140AE9A6D 48 89 84 24 18 0A 00 00                                         mov     [rsp+0A18h], rax
.std:0000000140AE9A75 48 8B 84 24 18 0A 00 00                                         mov     rax, [rsp+0A18h]
.std:0000000140AE9A7D 48 89 44 24 58                                                  mov     [rsp+58h], rax
.std:0000000140AE9A82 48 8B 84 24 20 0A 00 00                                         mov     rax, [rsp+0A20h]
.std:0000000140AE9A8A 48 89 44 24 78                                                  mov     [rsp+78h], rax
.std:0000000140AE9A8F 48 8D 84 24 20 17 00 00                                         lea     rax, [rsp+1720h] ; Load Effective Address
.std:0000000140AE9A97 48 89 84 24 20 02 00 00                                         mov     [rsp+220h], rax
.std:0000000140AE9A9F B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9AA4 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE9AA8 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AE9AAD 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE9AB1 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AE9AB6 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AE9ABB 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AE9ABF 0F C6 04 07 00                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.std:0000000140AE9AC4 0F 29 84 24 90 0C 00 00                                         movaps  xmmword ptr [rsp+0C90h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9ACC B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9AD1 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE9AD5 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AE9ADA 0F 28 84 24 90 0C 00 00                                         movaps  xmm0, xmmword ptr [rsp+0C90h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9AE2 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AE9AE6 0F 29 84 24 A0 0C 00 00                                         movaps  xmmword ptr [rsp+0CA0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9AEE 0F 28 84 24 A0 0C 00 00                                         movaps  xmm0, xmmword ptr [rsp+0CA0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9AF6 0F 29 84 24 B0 0C 00 00                                         movaps  xmmword ptr [rsp+0CB0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9AFE 0F 28 84 24 B0 0C 00 00                                         movaps  xmm0, xmmword ptr [rsp+0CB0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9B06 0F 29 84 24 C0 0C 00 00                                         movaps  xmmword ptr [rsp+0CC0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9B0E 0F 28 84 24 C0 0C 00 00                                         movaps  xmm0, xmmword ptr [rsp+0CC0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9B16 0F 29 84 24 D0 00 00 00                                         movaps  xmmword ptr [rsp+0D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9B1E B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9B23 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE9B27 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AE9B2C 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE9B30 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AE9B35 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AE9B3A 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AE9B3E 0F C6 04 07 55                                                  shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.std:0000000140AE9B43 0F 29 84 24 D0 0C 00 00                                         movaps  xmmword ptr [rsp+0CD0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9B4B B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9B50 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE9B54 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AE9B59 0F 28 84 24 D0 0C 00 00                                         movaps  xmm0, xmmword ptr [rsp+0CD0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9B61 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AE9B65 0F 29 84 24 E0 0C 00 00                                         movaps  xmmword ptr [rsp+0CE0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9B6D 0F 28 84 24 E0 0C 00 00                                         movaps  xmm0, xmmword ptr [rsp+0CE0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9B75 0F 58 84 24 D0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0D0h] ; Packed Single-FP Add
.std:0000000140AE9B7D 0F 29 84 24 F0 0C 00 00                                         movaps  xmmword ptr [rsp+0CF0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9B85 0F 28 84 24 F0 0C 00 00                                         movaps  xmm0, xmmword ptr [rsp+0CF0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9B8D 0F 29 84 24 D0 00 00 00                                         movaps  xmmword ptr [rsp+0D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9B95 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9B9A 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE9B9E B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AE9BA3 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE9BA7 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AE9BAC 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AE9BB1 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AE9BB5 0F C6 04 07 AA                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.std:0000000140AE9BBA 0F 29 84 24 00 0D 00 00                                         movaps  xmmword ptr [rsp+0D00h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9BC2 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9BC7 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE9BCB 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AE9BD0 0F 28 84 24 00 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0D00h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9BD8 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AE9BDC 0F 29 84 24 10 0D 00 00                                         movaps  xmmword ptr [rsp+0D10h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9BE4 0F 28 84 24 10 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0D10h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9BEC 0F 58 84 24 D0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0D0h] ; Packed Single-FP Add
.std:0000000140AE9BF4 0F 29 84 24 20 0D 00 00                                         movaps  xmmword ptr [rsp+0D20h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9BFC 0F 28 84 24 20 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0D20h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9C04 0F 29 84 24 D0 00 00 00                                         movaps  xmmword ptr [rsp+0D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9C0C B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9C11 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE9C15 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AE9C1A 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AE9C1E 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AE9C23 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AE9C28 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AE9C2C 0F C6 04 07 FF                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.std:0000000140AE9C31 0F 29 84 24 30 0D 00 00                                         movaps  xmmword ptr [rsp+0D30h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9C39 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9C3E 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE9C42 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AE9C47 0F 28 84 24 30 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0D30h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9C4F 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AE9C53 0F 29 84 24 40 0D 00 00                                         movaps  xmmword ptr [rsp+0D40h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9C5B 0F 28 84 24 40 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0D40h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9C63 0F 58 84 24 D0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0D0h] ; Packed Single-FP Add
.std:0000000140AE9C6B 0F 29 84 24 50 0D 00 00                                         movaps  xmmword ptr [rsp+0D50h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9C73 0F 28 84 24 50 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0D50h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9C7B 0F 29 84 24 C0 0F 00 00                                         movaps  xmmword ptr [rsp+0FC0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9C83 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9C88 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE9C8C B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AE9C91 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE9C95 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AE9C9A 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AE9C9F 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AE9CA3 0F C6 04 07 00                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.std:0000000140AE9CA8 0F 29 84 24 60 0D 00 00                                         movaps  xmmword ptr [rsp+0D60h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9CB0 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9CB5 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE9CB9 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AE9CBE 0F 28 84 24 60 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0D60h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9CC6 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AE9CCA 0F 29 84 24 70 0D 00 00                                         movaps  xmmword ptr [rsp+0D70h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9CD2 0F 28 84 24 70 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0D70h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9CDA 0F 29 84 24 80 0D 00 00                                         movaps  xmmword ptr [rsp+0D80h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9CE2 0F 28 84 24 80 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0D80h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9CEA 0F 29 84 24 40 0C 00 00                                         movaps  xmmword ptr [rsp+0C40h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9CF2 0F 28 84 24 40 0C 00 00                                         movaps  xmm0, xmmword ptr [rsp+0C40h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9CFA 0F 29 84 24 D0 00 00 00                                         movaps  xmmword ptr [rsp+0D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9D02 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9D07 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE9D0B B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AE9D10 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE9D14 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AE9D19 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AE9D1E 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AE9D22 0F C6 04 07 55                                                  shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.std:0000000140AE9D27 0F 29 84 24 A0 0D 00 00                                         movaps  xmmword ptr [rsp+0DA0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9D2F B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9D34 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE9D38 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AE9D3D 0F 28 84 24 A0 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0DA0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9D45 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AE9D49 0F 29 84 24 B0 0D 00 00                                         movaps  xmmword ptr [rsp+0DB0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9D51 0F 28 84 24 B0 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0DB0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9D59 0F 58 84 24 D0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0D0h] ; Packed Single-FP Add
.std:0000000140AE9D61 0F 29 84 24 C0 0D 00 00                                         movaps  xmmword ptr [rsp+0DC0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9D69 0F 28 84 24 C0 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0DC0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9D71 0F 29 84 24 D0 00 00 00                                         movaps  xmmword ptr [rsp+0D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9D79 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9D7E 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE9D82 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AE9D87 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE9D8B 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AE9D90 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AE9D95 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AE9D99 0F C6 04 07 AA                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.std:0000000140AE9D9E 0F 29 84 24 D0 0D 00 00                                         movaps  xmmword ptr [rsp+0DD0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9DA6 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9DAB 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE9DAF 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AE9DB4 0F 28 84 24 D0 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0DD0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9DBC 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AE9DC0 0F 29 84 24 E0 0D 00 00                                         movaps  xmmword ptr [rsp+0DE0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9DC8 0F 28 84 24 E0 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0DE0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9DD0 0F 58 84 24 D0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0D0h] ; Packed Single-FP Add
.std:0000000140AE9DD8 0F 29 84 24 F0 0D 00 00                                         movaps  xmmword ptr [rsp+0DF0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9DE0 0F 28 84 24 F0 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0DF0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9DE8 0F 29 84 24 D0 00 00 00                                         movaps  xmmword ptr [rsp+0D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9DF0 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9DF5 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE9DF9 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AE9DFE 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AE9E02 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AE9E07 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AE9E0C 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AE9E10 0F C6 04 07 FF                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.std:0000000140AE9E15 0F 29 84 24 00 0E 00 00                                         movaps  xmmword ptr [rsp+0E00h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9E1D B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9E22 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AE9E26 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AE9E2B 0F 28 84 24 00 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0E00h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9E33 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AE9E37 0F 29 84 24 10 0E 00 00                                         movaps  xmmword ptr [rsp+0E10h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9E3F 0F 28 84 24 10 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0E10h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9E47 0F 58 84 24 D0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0D0h] ; Packed Single-FP Add
.std:0000000140AE9E4F 0F 29 84 24 20 0E 00 00                                         movaps  xmmword ptr [rsp+0E20h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9E57 0F 28 84 24 20 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0E20h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9E5F 0F 29 84 24 D0 0F 00 00                                         movaps  xmmword ptr [rsp+0FD0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9E67 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9E6C 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE9E70 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AE9E75 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE9E79 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AE9E7E 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AE9E83 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AE9E87 0F C6 04 07 00                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.std:0000000140AE9E8C 0F 29 84 24 30 0E 00 00                                         movaps  xmmword ptr [rsp+0E30h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9E94 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9E99 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AE9E9D 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AE9EA2 0F 28 84 24 30 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0E30h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9EAA 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AE9EAE 0F 29 84 24 40 0E 00 00                                         movaps  xmmword ptr [rsp+0E40h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9EB6 0F 28 84 24 40 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0E40h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9EBE 0F 29 84 24 50 0E 00 00                                         movaps  xmmword ptr [rsp+0E50h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9EC6 0F 28 84 24 50 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0E50h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9ECE 0F 29 84 24 60 0E 00 00                                         movaps  xmmword ptr [rsp+0E60h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9ED6 0F 28 84 24 60 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0E60h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9EDE 0F 29 84 24 D0 00 00 00                                         movaps  xmmword ptr [rsp+0D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9EE6 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9EEB 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE9EEF B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AE9EF4 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE9EF8 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AE9EFD 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AE9F02 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AE9F06 0F C6 04 07 55                                                  shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.std:0000000140AE9F0B 0F 29 84 24 70 0E 00 00                                         movaps  xmmword ptr [rsp+0E70h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9F13 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9F18 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AE9F1C 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AE9F21 0F 28 84 24 70 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0E70h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9F29 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AE9F2D 0F 29 84 24 80 0E 00 00                                         movaps  xmmword ptr [rsp+0E80h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9F35 0F 28 84 24 80 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0E80h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9F3D 0F 58 84 24 D0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0D0h] ; Packed Single-FP Add
.std:0000000140AE9F45 0F 29 84 24 90 0E 00 00                                         movaps  xmmword ptr [rsp+0E90h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9F4D 0F 28 84 24 90 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0E90h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9F55 0F 29 84 24 D0 00 00 00                                         movaps  xmmword ptr [rsp+0D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9F5D B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9F62 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE9F66 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AE9F6B 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE9F6F 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AE9F74 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AE9F79 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AE9F7D 0F C6 04 07 AA                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.std:0000000140AE9F82 0F 29 84 24 A0 0E 00 00                                         movaps  xmmword ptr [rsp+0EA0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9F8A B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9F8F 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE9F93 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AE9F98 0F 28 84 24 A0 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0EA0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9FA0 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AE9FA4 0F 29 84 24 B0 0E 00 00                                         movaps  xmmword ptr [rsp+0EB0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9FAC 0F 28 84 24 B0 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0EB0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9FB4 0F 58 84 24 D0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0D0h] ; Packed Single-FP Add
.std:0000000140AE9FBC 0F 29 84 24 C0 0E 00 00                                         movaps  xmmword ptr [rsp+0EC0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9FC4 0F 28 84 24 C0 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0EC0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AE9FCC 0F 29 84 24 D0 00 00 00                                         movaps  xmmword ptr [rsp+0D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AE9FD4 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AE9FD9 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AE9FDD B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AE9FE2 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AE9FE6 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AE9FEB 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AE9FF0 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AE9FF4 0F C6 04 07 FF                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.std:0000000140AE9FF9 0F 29 84 24 D0 0E 00 00                                         movaps  xmmword ptr [rsp+0ED0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA001 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA006 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEA00A 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AEA00F 0F 28 84 24 D0 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0ED0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA017 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA01B 0F 29 84 24 E0 0E 00 00                                         movaps  xmmword ptr [rsp+0EE0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA023 0F 28 84 24 E0 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0EE0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA02B 0F 58 84 24 D0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0D0h] ; Packed Single-FP Add
.std:0000000140AEA033 0F 29 84 24 F0 0E 00 00                                         movaps  xmmword ptr [rsp+0EF0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA03B 0F 28 84 24 F0 0E 00 00                                         movaps  xmm0, xmmword ptr [rsp+0EF0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA043 0F 29 84 24 E0 0F 00 00                                         movaps  xmmword ptr [rsp+0FE0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA04B B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA050 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEA054 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA059 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AEA05D 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AEA062 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AEA067 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA06B 0F C6 04 07 00                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.std:0000000140AEA070 0F 29 84 24 90 0D 00 00                                         movaps  xmmword ptr [rsp+0D90h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA078 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA07D 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEA081 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AEA086 0F 28 84 24 90 0D 00 00                                         movaps  xmm0, xmmword ptr [rsp+0D90h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA08E 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA092 0F 29 84 24 00 0F 00 00                                         movaps  xmmword ptr [rsp+0F00h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA09A 0F 28 84 24 00 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0F00h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA0A2 0F 29 84 24 10 0F 00 00                                         movaps  xmmword ptr [rsp+0F10h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA0AA 0F 28 84 24 10 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0F10h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA0B2 0F 29 84 24 20 0F 00 00                                         movaps  xmmword ptr [rsp+0F20h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA0BA 0F 28 84 24 20 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0F20h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA0C2 0F 29 84 24 D0 00 00 00                                         movaps  xmmword ptr [rsp+0D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA0CA B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA0CF 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEA0D3 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA0D8 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AEA0DC 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AEA0E1 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AEA0E6 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA0EA 0F C6 04 07 55                                                  shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.std:0000000140AEA0EF 0F 29 84 24 30 0F 00 00                                         movaps  xmmword ptr [rsp+0F30h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA0F7 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA0FC 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEA100 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AEA105 0F 28 84 24 30 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0F30h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA10D 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA111 0F 29 84 24 40 0F 00 00                                         movaps  xmmword ptr [rsp+0F40h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA119 0F 28 84 24 40 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0F40h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA121 0F 58 84 24 D0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0D0h] ; Packed Single-FP Add
.std:0000000140AEA129 0F 29 84 24 50 0F 00 00                                         movaps  xmmword ptr [rsp+0F50h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA131 0F 28 84 24 50 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0F50h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA139 0F 29 84 24 D0 00 00 00                                         movaps  xmmword ptr [rsp+0D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA141 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA146 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEA14A B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA14F 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AEA153 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AEA158 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AEA15D 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA161 0F C6 04 07 AA                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.std:0000000140AEA166 0F 29 84 24 60 0F 00 00                                         movaps  xmmword ptr [rsp+0F60h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA16E B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA173 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEA177 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AEA17C 0F 28 84 24 60 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0F60h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA184 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA188 0F 29 84 24 70 0F 00 00                                         movaps  xmmword ptr [rsp+0F70h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA190 0F 28 84 24 70 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0F70h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA198 0F 58 84 24 D0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0D0h] ; Packed Single-FP Add
.std:0000000140AEA1A0 0F 29 84 24 80 0F 00 00                                         movaps  xmmword ptr [rsp+0F80h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA1A8 0F 28 84 24 80 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0F80h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA1B0 0F 29 84 24 D0 00 00 00                                         movaps  xmmword ptr [rsp+0D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA1B8 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA1BD 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEA1C1 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA1C6 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AEA1CA 48 8B 54 24 58                                                  mov     rdx, [rsp+58h]
.std:0000000140AEA1CF 48 8B 7C 24 58                                                  mov     rdi, [rsp+58h]
.std:0000000140AEA1D4 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA1D8 0F C6 04 07 FF                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.std:0000000140AEA1DD 0F 29 84 24 90 0F 00 00                                         movaps  xmmword ptr [rsp+0F90h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA1E5 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA1EA 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEA1EE 48 8B 4C 24 78                                                  mov     rcx, [rsp+78h]
.std:0000000140AEA1F3 0F 28 84 24 90 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0F90h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA1FB 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA1FF 0F 29 84 24 A0 0F 00 00                                         movaps  xmmword ptr [rsp+0FA0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA207 0F 28 84 24 A0 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0FA0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA20F 0F 58 84 24 D0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0D0h] ; Packed Single-FP Add
.std:0000000140AEA217 0F 29 84 24 B0 0F 00 00                                         movaps  xmmword ptr [rsp+0FB0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA21F 0F 28 84 24 B0 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0FB0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA227 0F 29 84 24 F0 0F 00 00                                         movaps  xmmword ptr [rsp+0FF0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA22F B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA234 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEA238 48 8B 8C 24 20 02 00 00                                         mov     rcx, [rsp+220h]
.std:0000000140AEA240 0F 28 84 24 C0 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0FC0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA248 0F 11 04 01                                                     movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA24C B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA251 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEA255 48 8B 8C 24 20 02 00 00                                         mov     rcx, [rsp+220h]
.std:0000000140AEA25D 0F 28 84 24 D0 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0FD0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA265 0F 11 04 01                                                     movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA269 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA26E 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEA272 48 8B 8C 24 20 02 00 00                                         mov     rcx, [rsp+220h]
.std:0000000140AEA27A 0F 28 84 24 E0 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0FE0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA282 0F 11 04 01                                                     movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA286 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA28B 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEA28F 48 8B 8C 24 20 02 00 00                                         mov     rcx, [rsp+220h]
.std:0000000140AEA297 0F 28 84 24 F0 0F 00 00                                         movaps  xmm0, xmmword ptr [rsp+0FF0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA29F 0F 11 04 01                                                     movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA2A3 48 8D 84 24 60 17 00 00                                         lea     rax, [rsp+1760h] ; Load Effective Address
.std:0000000140AEA2AB 48 8D 8C 24 20 17 00 00                                         lea     rcx, [rsp+1720h] ; Load Effective Address
.std:0000000140AEA2B3 48 8B F8                                                        mov     rdi, rax
.std:0000000140AEA2B6 48 8B F1                                                        mov     rsi, rcx
.std:0000000140AEA2B9 B9 40 00 00 00                                                  mov     ecx, 40h ; '@'
.std:0000000140AEA2BE F3 A4                                                           rep movsb               ; Move Byte(s) from String to String
.std:0000000140AEA2C0 48 8D 84 24 60 17 00 00                                         lea     rax, [rsp+1760h] ; Load Effective Address
.std:0000000140AEA2C8 48 89 84 24 28 0A 00 00                                         mov     [rsp+0A28h], rax
.std:0000000140AEA2D0 48 8B 84 24 28 0A 00 00                                         mov     rax, [rsp+0A28h]
.std:0000000140AEA2D8 48 89 44 24 60                                                  mov     [rsp+60h], rax
.std:0000000140AEA2DD 48 8B 84 24 30 0A 00 00                                         mov     rax, [rsp+0A30h]
.std:0000000140AEA2E5 48 89 84 24 80 00 00 00                                         mov     [rsp+80h], rax
.std:0000000140AEA2ED 48 8D 84 24 A0 17 00 00                                         lea     rax, [rsp+17A0h] ; Load Effective Address
.std:0000000140AEA2F5 48 89 84 24 28 02 00 00                                         mov     [rsp+228h], rax
.std:0000000140AEA2FD B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA302 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEA306 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA30B 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AEA30F 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA314 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA319 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA31D 0F C6 04 07 00                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.std:0000000140AEA322 0F 29 84 24 00 10 00 00                                         movaps  xmmword ptr [rsp+1000h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA32A B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA32F 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEA333 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA33B 0F 28 84 24 00 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+1000h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA343 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA347 0F 29 84 24 10 10 00 00                                         movaps  xmmword ptr [rsp+1010h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA34F 0F 28 84 24 10 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+1010h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA357 0F 29 84 24 20 10 00 00                                         movaps  xmmword ptr [rsp+1020h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA35F 0F 28 84 24 20 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+1020h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA367 0F 29 84 24 30 10 00 00                                         movaps  xmmword ptr [rsp+1030h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA36F 0F 28 84 24 30 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+1030h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA377 0F 29 84 24 E0 00 00 00                                         movaps  xmmword ptr [rsp+0E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA37F B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA384 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEA388 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA38D 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AEA391 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA396 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA39B 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA39F 0F C6 04 07 55                                                  shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.std:0000000140AEA3A4 0F 29 84 24 40 10 00 00                                         movaps  xmmword ptr [rsp+1040h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA3AC B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA3B1 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEA3B5 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA3BD 0F 28 84 24 40 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+1040h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA3C5 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA3C9 0F 29 84 24 50 10 00 00                                         movaps  xmmword ptr [rsp+1050h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA3D1 0F 28 84 24 50 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+1050h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA3D9 0F 58 84 24 E0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0E0h] ; Packed Single-FP Add
.std:0000000140AEA3E1 0F 29 84 24 60 10 00 00                                         movaps  xmmword ptr [rsp+1060h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA3E9 0F 28 84 24 60 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+1060h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA3F1 0F 29 84 24 E0 00 00 00                                         movaps  xmmword ptr [rsp+0E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA3F9 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA3FE 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEA402 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA407 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AEA40B 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA410 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA415 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA419 0F C6 04 07 AA                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.std:0000000140AEA41E 0F 29 84 24 70 10 00 00                                         movaps  xmmword ptr [rsp+1070h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA426 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA42B 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEA42F 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA437 0F 28 84 24 70 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+1070h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA43F 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA443 0F 29 84 24 80 10 00 00                                         movaps  xmmword ptr [rsp+1080h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA44B 0F 28 84 24 80 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+1080h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA453 0F 58 84 24 E0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0E0h] ; Packed Single-FP Add
.std:0000000140AEA45B 0F 29 84 24 90 10 00 00                                         movaps  xmmword ptr [rsp+1090h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA463 0F 28 84 24 90 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+1090h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA46B 0F 29 84 24 E0 00 00 00                                         movaps  xmmword ptr [rsp+0E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA473 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA478 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEA47C B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA481 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AEA485 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA48A 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA48F 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA493 0F C6 04 07 FF                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.std:0000000140AEA498 0F 29 84 24 A0 10 00 00                                         movaps  xmmword ptr [rsp+10A0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA4A0 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA4A5 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEA4A9 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA4B1 0F 28 84 24 A0 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+10A0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA4B9 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA4BD 0F 29 84 24 B0 10 00 00                                         movaps  xmmword ptr [rsp+10B0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA4C5 0F 28 84 24 B0 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+10B0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA4CD 0F 58 84 24 E0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0E0h] ; Packed Single-FP Add
.std:0000000140AEA4D5 0F 29 84 24 C0 10 00 00                                         movaps  xmmword ptr [rsp+10C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA4DD 0F 28 84 24 C0 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+10C0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA4E5 0F 29 84 24 40 13 00 00                                         movaps  xmmword ptr [rsp+1340h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA4ED B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA4F2 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEA4F6 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA4FB 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AEA4FF 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA504 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA509 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA50D 0F C6 04 07 00                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.std:0000000140AEA512 0F 29 84 24 D0 10 00 00                                         movaps  xmmword ptr [rsp+10D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA51A B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA51F 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEA523 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA52B 0F 28 84 24 D0 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+10D0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA533 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA537 0F 29 84 24 E0 10 00 00                                         movaps  xmmword ptr [rsp+10E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA53F 0F 28 84 24 E0 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+10E0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA547 0F 29 84 24 F0 10 00 00                                         movaps  xmmword ptr [rsp+10F0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA54F 0F 28 84 24 F0 10 00 00                                         movaps  xmm0, xmmword ptr [rsp+10F0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA557 0F 29 84 24 00 11 00 00                                         movaps  xmmword ptr [rsp+1100h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA55F 0F 28 84 24 00 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+1100h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA567 0F 29 84 24 E0 00 00 00                                         movaps  xmmword ptr [rsp+0E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA56F B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA574 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEA578 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA57D 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AEA581 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA586 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA58B 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA58F 0F C6 04 07 55                                                  shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.std:0000000140AEA594 0F 29 84 24 10 11 00 00                                         movaps  xmmword ptr [rsp+1110h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA59C B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA5A1 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEA5A5 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA5AD 0F 28 84 24 10 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+1110h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA5B5 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA5B9 0F 29 84 24 20 11 00 00                                         movaps  xmmword ptr [rsp+1120h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA5C1 0F 28 84 24 20 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+1120h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA5C9 0F 58 84 24 E0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0E0h] ; Packed Single-FP Add
.std:0000000140AEA5D1 0F 29 84 24 30 11 00 00                                         movaps  xmmword ptr [rsp+1130h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA5D9 0F 28 84 24 30 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+1130h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA5E1 0F 29 84 24 E0 00 00 00                                         movaps  xmmword ptr [rsp+0E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA5E9 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA5EE 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEA5F2 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA5F7 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AEA5FB 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA600 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA605 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA609 0F C6 04 07 AA                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.std:0000000140AEA60E 0F 29 84 24 40 11 00 00                                         movaps  xmmword ptr [rsp+1140h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA616 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA61B 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEA61F 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA627 0F 28 84 24 40 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+1140h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA62F 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA633 0F 29 84 24 50 11 00 00                                         movaps  xmmword ptr [rsp+1150h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA63B 0F 28 84 24 50 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+1150h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA643 0F 58 84 24 E0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0E0h] ; Packed Single-FP Add
.std:0000000140AEA64B 0F 29 84 24 60 11 00 00                                         movaps  xmmword ptr [rsp+1160h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA653 0F 28 84 24 60 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+1160h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA65B 0F 29 84 24 E0 00 00 00                                         movaps  xmmword ptr [rsp+0E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA663 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA668 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEA66C B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA671 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AEA675 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA67A 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA67F 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA683 0F C6 04 07 FF                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.std:0000000140AEA688 0F 29 84 24 70 11 00 00                                         movaps  xmmword ptr [rsp+1170h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA690 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA695 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEA699 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA6A1 0F 28 84 24 70 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+1170h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA6A9 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA6AD 0F 29 84 24 80 11 00 00                                         movaps  xmmword ptr [rsp+1180h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA6B5 0F 28 84 24 80 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+1180h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA6BD 0F 58 84 24 E0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0E0h] ; Packed Single-FP Add
.std:0000000140AEA6C5 0F 29 84 24 90 11 00 00                                         movaps  xmmword ptr [rsp+1190h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA6CD 0F 28 84 24 90 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+1190h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA6D5 0F 29 84 24 50 13 00 00                                         movaps  xmmword ptr [rsp+1350h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA6DD B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA6E2 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEA6E6 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA6EB 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AEA6EF 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA6F4 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA6F9 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA6FD 0F C6 04 07 00                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.std:0000000140AEA702 0F 29 84 24 A0 11 00 00                                         movaps  xmmword ptr [rsp+11A0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA70A B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA70F 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEA713 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA71B 0F 28 84 24 A0 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+11A0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA723 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA727 0F 29 84 24 B0 11 00 00                                         movaps  xmmword ptr [rsp+11B0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA72F 0F 28 84 24 B0 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+11B0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA737 0F 29 84 24 C0 11 00 00                                         movaps  xmmword ptr [rsp+11C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA73F 0F 28 84 24 C0 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+11C0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA747 0F 29 84 24 D0 11 00 00                                         movaps  xmmword ptr [rsp+11D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA74F 0F 28 84 24 D0 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+11D0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA757 0F 29 84 24 E0 00 00 00                                         movaps  xmmword ptr [rsp+0E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA75F B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA764 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEA768 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA76D 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AEA771 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA776 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA77B 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA77F 0F C6 04 07 55                                                  shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.std:0000000140AEA784 0F 29 84 24 E0 11 00 00                                         movaps  xmmword ptr [rsp+11E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA78C B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA791 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEA795 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA79D 0F 28 84 24 E0 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+11E0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA7A5 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA7A9 0F 29 84 24 F0 11 00 00                                         movaps  xmmword ptr [rsp+11F0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA7B1 0F 28 84 24 F0 11 00 00                                         movaps  xmm0, xmmword ptr [rsp+11F0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA7B9 0F 58 84 24 E0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0E0h] ; Packed Single-FP Add
.std:0000000140AEA7C1 0F 29 84 24 00 12 00 00                                         movaps  xmmword ptr [rsp+1200h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA7C9 0F 28 84 24 00 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+1200h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA7D1 0F 29 84 24 E0 00 00 00                                         movaps  xmmword ptr [rsp+0E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA7D9 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA7DE 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEA7E2 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA7E7 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AEA7EB 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA7F0 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA7F5 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA7F9 0F C6 04 07 AA                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.std:0000000140AEA7FE 0F 29 84 24 10 12 00 00                                         movaps  xmmword ptr [rsp+1210h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA806 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA80B 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEA80F 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA817 0F 28 84 24 10 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+1210h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA81F 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA823 0F 29 84 24 20 12 00 00                                         movaps  xmmword ptr [rsp+1220h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA82B 0F 28 84 24 20 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+1220h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA833 0F 58 84 24 E0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0E0h] ; Packed Single-FP Add
.std:0000000140AEA83B 0F 29 84 24 30 12 00 00                                         movaps  xmmword ptr [rsp+1230h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA843 0F 28 84 24 30 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+1230h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA84B 0F 29 84 24 E0 00 00 00                                         movaps  xmmword ptr [rsp+0E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA853 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA858 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEA85C B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA861 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AEA865 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA86A 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA86F 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA873 0F C6 04 07 FF                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.std:0000000140AEA878 0F 29 84 24 40 12 00 00                                         movaps  xmmword ptr [rsp+1240h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA880 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA885 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEA889 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA891 0F 28 84 24 40 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+1240h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA899 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA89D 0F 29 84 24 50 12 00 00                                         movaps  xmmword ptr [rsp+1250h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA8A5 0F 28 84 24 50 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+1250h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA8AD 0F 58 84 24 E0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0E0h] ; Packed Single-FP Add
.std:0000000140AEA8B5 0F 29 84 24 60 12 00 00                                         movaps  xmmword ptr [rsp+1260h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA8BD 0F 28 84 24 60 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+1260h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA8C5 0F 29 84 24 60 13 00 00                                         movaps  xmmword ptr [rsp+1360h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA8CD B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA8D2 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEA8D6 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA8DB 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AEA8DF 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA8E4 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA8E9 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA8ED 0F C6 04 07 00                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.std:0000000140AEA8F2 0F 29 84 24 70 12 00 00                                         movaps  xmmword ptr [rsp+1270h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA8FA B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA8FF 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEA903 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA90B 0F 28 84 24 70 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+1270h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA913 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA917 0F 29 84 24 80 12 00 00                                         movaps  xmmword ptr [rsp+1280h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA91F 0F 28 84 24 80 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+1280h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA927 0F 29 84 24 90 12 00 00                                         movaps  xmmword ptr [rsp+1290h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA92F 0F 28 84 24 90 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+1290h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA937 0F 29 84 24 A0 12 00 00                                         movaps  xmmword ptr [rsp+12A0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA93F 0F 28 84 24 A0 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+12A0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA947 0F 29 84 24 E0 00 00 00                                         movaps  xmmword ptr [rsp+0E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA94F B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA954 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEA958 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA95D 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AEA961 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA966 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA96B 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA96F 0F C6 04 07 55                                                  shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.std:0000000140AEA974 0F 29 84 24 B0 12 00 00                                         movaps  xmmword ptr [rsp+12B0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA97C B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA981 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEA985 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEA98D 0F 28 84 24 B0 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+12B0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA995 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEA999 0F 29 84 24 C0 12 00 00                                         movaps  xmmword ptr [rsp+12C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA9A1 0F 28 84 24 C0 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+12C0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA9A9 0F 58 84 24 E0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0E0h] ; Packed Single-FP Add
.std:0000000140AEA9B1 0F 29 84 24 D0 12 00 00                                         movaps  xmmword ptr [rsp+12D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA9B9 0F 28 84 24 D0 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+12D0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEA9C1 0F 29 84 24 E0 00 00 00                                         movaps  xmmword ptr [rsp+0E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA9C9 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA9CE 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEA9D2 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEA9D7 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AEA9DB 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEA9E0 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEA9E5 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEA9E9 0F C6 04 07 AA                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.std:0000000140AEA9EE 0F 29 84 24 E0 12 00 00                                         movaps  xmmword ptr [rsp+12E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEA9F6 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEA9FB 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEA9FF 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEAA07 0F 28 84 24 E0 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+12E0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAA0F 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEAA13 0F 29 84 24 F0 12 00 00                                         movaps  xmmword ptr [rsp+12F0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAA1B 0F 28 84 24 F0 12 00 00                                         movaps  xmm0, xmmword ptr [rsp+12F0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAA23 0F 58 84 24 E0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0E0h] ; Packed Single-FP Add
.std:0000000140AEAA2B 0F 29 84 24 00 13 00 00                                         movaps  xmmword ptr [rsp+1300h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAA33 0F 28 84 24 00 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+1300h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAA3B 0F 29 84 24 E0 00 00 00                                         movaps  xmmword ptr [rsp+0E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAA43 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAA48 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEAA4C B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEAA51 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AEAA55 48 8B 54 24 60                                                  mov     rdx, [rsp+60h]
.std:0000000140AEAA5A 48 8B 7C 24 60                                                  mov     rdi, [rsp+60h]
.std:0000000140AEAA5F 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEAA63 0F C6 04 07 FF                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.std:0000000140AEAA68 0F 29 84 24 10 13 00 00                                         movaps  xmmword ptr [rsp+1310h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAA70 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAA75 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEAA79 48 8B 8C 24 80 00 00 00                                         mov     rcx, [rsp+80h]
.std:0000000140AEAA81 0F 28 84 24 10 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+1310h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAA89 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEAA8D 0F 29 84 24 20 13 00 00                                         movaps  xmmword ptr [rsp+1320h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAA95 0F 28 84 24 20 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+1320h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAA9D 0F 58 84 24 E0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0E0h] ; Packed Single-FP Add
.std:0000000140AEAAA5 0F 29 84 24 30 13 00 00                                         movaps  xmmword ptr [rsp+1330h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAAAD 0F 28 84 24 30 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+1330h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAAB5 0F 29 84 24 70 13 00 00                                         movaps  xmmword ptr [rsp+1370h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAABD B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAAC2 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEAAC6 48 8B 8C 24 28 02 00 00                                         mov     rcx, [rsp+228h]
.std:0000000140AEAACE 0F 28 84 24 40 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+1340h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAAD6 0F 11 04 01                                                     movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140AEAADA B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAADF 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEAAE3 48 8B 8C 24 28 02 00 00                                         mov     rcx, [rsp+228h]
.std:0000000140AEAAEB 0F 28 84 24 50 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+1350h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAAF3 0F 11 04 01                                                     movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140AEAAF7 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAAFC 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEAB00 48 8B 8C 24 28 02 00 00                                         mov     rcx, [rsp+228h]
.std:0000000140AEAB08 0F 28 84 24 60 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+1360h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAB10 0F 11 04 01                                                     movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140AEAB14 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAB19 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEAB1D 48 8B 8C 24 28 02 00 00                                         mov     rcx, [rsp+228h]
.std:0000000140AEAB25 0F 28 84 24 70 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+1370h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAB2D 0F 11 04 01                                                     movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140AEAB31 48 8D 84 24 E0 17 00 00                                         lea     rax, [rsp+17E0h] ; Load Effective Address
.std:0000000140AEAB39 48 8D 8C 24 A0 17 00 00                                         lea     rcx, [rsp+17A0h] ; Load Effective Address
.std:0000000140AEAB41 48 8B F8                                                        mov     rdi, rax
.std:0000000140AEAB44 48 8B F1                                                        mov     rsi, rcx
.std:0000000140AEAB47 B9 40 00 00 00                                                  mov     ecx, 40h ; '@'
.std:0000000140AEAB4C F3 A4                                                           rep movsb               ; Move Byte(s) from String to String
.std:0000000140AEAB4E 48 8D 84 24 E0 17 00 00                                         lea     rax, [rsp+17E0h] ; Load Effective Address
.std:0000000140AEAB56 48 89 84 24 38 0A 00 00                                         mov     [rsp+0A38h], rax
.std:0000000140AEAB5E 48 8B 84 24 38 0A 00 00                                         mov     rax, [rsp+0A38h]
.std:0000000140AEAB66 48 89 44 24 68                                                  mov     [rsp+68h], rax
.std:0000000140AEAB6B 48 8B 84 24 40 0A 00 00                                         mov     rax, [rsp+0A40h]
.std:0000000140AEAB73 48 89 84 24 88 00 00 00                                         mov     [rsp+88h], rax
.std:0000000140AEAB7B 48 8D 84 24 20 18 00 00                                         lea     rax, [rsp+1820h] ; Load Effective Address
.std:0000000140AEAB83 48 89 84 24 30 02 00 00                                         mov     [rsp+230h], rax
.std:0000000140AEAB8B B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAB90 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEAB94 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEAB99 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AEAB9D 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEABA2 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEABA7 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEABAB 0F C6 04 07 00                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.std:0000000140AEABB0 0F 29 84 24 80 13 00 00                                         movaps  xmmword ptr [rsp+1380h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEABB8 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEABBD 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEABC1 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEABC9 0F 28 84 24 80 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+1380h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEABD1 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEABD5 0F 29 84 24 90 13 00 00                                         movaps  xmmword ptr [rsp+1390h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEABDD 0F 28 84 24 90 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+1390h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEABE5 0F 29 84 24 A0 13 00 00                                         movaps  xmmword ptr [rsp+13A0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEABED 0F 28 84 24 A0 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+13A0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEABF5 0F 29 84 24 B0 13 00 00                                         movaps  xmmword ptr [rsp+13B0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEABFD 0F 28 84 24 B0 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+13B0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAC05 0F 29 84 24 C0 00 00 00                                         movaps  xmmword ptr [rsp+0C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAC0D B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAC12 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEAC16 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEAC1B 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AEAC1F 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEAC24 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEAC29 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEAC2D 0F C6 04 07 55                                                  shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.std:0000000140AEAC32 0F 29 84 24 C0 13 00 00                                         movaps  xmmword ptr [rsp+13C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAC3A B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAC3F 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEAC43 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEAC4B 0F 28 84 24 C0 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+13C0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAC53 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEAC57 0F 29 84 24 D0 13 00 00                                         movaps  xmmword ptr [rsp+13D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAC5F 0F 28 84 24 D0 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+13D0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAC67 0F 58 84 24 C0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0C0h] ; Packed Single-FP Add
.std:0000000140AEAC6F 0F 29 84 24 E0 13 00 00                                         movaps  xmmword ptr [rsp+13E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAC77 0F 28 84 24 E0 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+13E0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAC7F 0F 29 84 24 C0 00 00 00                                         movaps  xmmword ptr [rsp+0C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAC87 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAC8C 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEAC90 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEAC95 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AEAC99 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEAC9E 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEACA3 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEACA7 0F C6 04 07 AA                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.std:0000000140AEACAC 0F 29 84 24 F0 13 00 00                                         movaps  xmmword ptr [rsp+13F0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEACB4 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEACB9 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEACBD 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEACC5 0F 28 84 24 F0 13 00 00                                         movaps  xmm0, xmmword ptr [rsp+13F0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEACCD 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEACD1 0F 29 84 24 00 14 00 00                                         movaps  xmmword ptr [rsp+1400h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEACD9 0F 28 84 24 00 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+1400h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEACE1 0F 58 84 24 C0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0C0h] ; Packed Single-FP Add
.std:0000000140AEACE9 0F 29 84 24 10 14 00 00                                         movaps  xmmword ptr [rsp+1410h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEACF1 0F 28 84 24 10 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+1410h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEACF9 0F 29 84 24 C0 00 00 00                                         movaps  xmmword ptr [rsp+0C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAD01 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAD06 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEAD0A B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEAD0F 48 6B C9 00                                                     imul    rcx, 0          ; Signed Multiply
.std:0000000140AEAD13 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEAD18 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEAD1D 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEAD21 0F C6 04 07 FF                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.std:0000000140AEAD26 0F 29 84 24 20 14 00 00                                         movaps  xmmword ptr [rsp+1420h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAD2E B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAD33 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEAD37 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEAD3F 0F 28 84 24 20 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+1420h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAD47 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEAD4B 0F 29 84 24 30 14 00 00                                         movaps  xmmword ptr [rsp+1430h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAD53 0F 28 84 24 30 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+1430h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAD5B 0F 58 84 24 C0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0C0h] ; Packed Single-FP Add
.std:0000000140AEAD63 0F 29 84 24 40 14 00 00                                         movaps  xmmword ptr [rsp+1440h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAD6B 0F 28 84 24 40 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+1440h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAD73 0F 29 84 24 C0 16 00 00                                         movaps  xmmword ptr [rsp+16C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAD7B B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAD80 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEAD84 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEAD89 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AEAD8D 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEAD92 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEAD97 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEAD9B 0F C6 04 07 00                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.std:0000000140AEADA0 0F 29 84 24 50 14 00 00                                         movaps  xmmword ptr [rsp+1450h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEADA8 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEADAD 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEADB1 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEADB9 0F 28 84 24 50 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+1450h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEADC1 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEADC5 0F 29 84 24 60 14 00 00                                         movaps  xmmword ptr [rsp+1460h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEADCD 0F 28 84 24 60 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+1460h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEADD5 0F 29 84 24 70 14 00 00                                         movaps  xmmword ptr [rsp+1470h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEADDD 0F 28 84 24 70 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+1470h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEADE5 0F 29 84 24 80 14 00 00                                         movaps  xmmword ptr [rsp+1480h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEADED 0F 28 84 24 80 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+1480h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEADF5 0F 29 84 24 C0 00 00 00                                         movaps  xmmword ptr [rsp+0C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEADFD B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAE02 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEAE06 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEAE0B 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AEAE0F 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEAE14 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEAE19 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEAE1D 0F C6 04 07 55                                                  shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.std:0000000140AEAE22 0F 29 84 24 90 14 00 00                                         movaps  xmmword ptr [rsp+1490h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAE2A B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAE2F 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEAE33 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEAE3B 0F 28 84 24 90 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+1490h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAE43 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEAE47 0F 29 84 24 A0 14 00 00                                         movaps  xmmword ptr [rsp+14A0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAE4F 0F 28 84 24 A0 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+14A0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAE57 0F 58 84 24 C0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0C0h] ; Packed Single-FP Add
.std:0000000140AEAE5F 0F 29 84 24 B0 14 00 00                                         movaps  xmmword ptr [rsp+14B0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAE67 0F 28 84 24 B0 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+14B0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAE6F 0F 29 84 24 C0 00 00 00                                         movaps  xmmword ptr [rsp+0C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAE77 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAE7C 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEAE80 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEAE85 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AEAE89 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEAE8E 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEAE93 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEAE97 0F C6 04 07 AA                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.std:0000000140AEAE9C 0F 29 84 24 C0 14 00 00                                         movaps  xmmword ptr [rsp+14C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAEA4 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAEA9 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEAEAD 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEAEB5 0F 28 84 24 C0 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+14C0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAEBD 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEAEC1 0F 29 84 24 D0 14 00 00                                         movaps  xmmword ptr [rsp+14D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAEC9 0F 28 84 24 D0 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+14D0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAED1 0F 58 84 24 C0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0C0h] ; Packed Single-FP Add
.std:0000000140AEAED9 0F 29 84 24 E0 14 00 00                                         movaps  xmmword ptr [rsp+14E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAEE1 0F 28 84 24 E0 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+14E0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAEE9 0F 29 84 24 C0 00 00 00                                         movaps  xmmword ptr [rsp+0C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAEF1 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAEF6 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEAEFA B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEAEFF 48 6B C9 01                                                     imul    rcx, 1          ; Signed Multiply
.std:0000000140AEAF03 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEAF08 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEAF0D 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEAF11 0F C6 04 07 FF                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.std:0000000140AEAF16 0F 29 84 24 F0 14 00 00                                         movaps  xmmword ptr [rsp+14F0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAF1E B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAF23 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEAF27 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEAF2F 0F 28 84 24 F0 14 00 00                                         movaps  xmm0, xmmword ptr [rsp+14F0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAF37 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEAF3B 0F 29 84 24 00 15 00 00                                         movaps  xmmword ptr [rsp+1500h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAF43 0F 28 84 24 00 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+1500h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAF4B 0F 58 84 24 C0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0C0h] ; Packed Single-FP Add
.std:0000000140AEAF53 0F 29 84 24 10 15 00 00                                         movaps  xmmword ptr [rsp+1510h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAF5B 0F 28 84 24 10 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+1510h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAF63 0F 29 84 24 D0 16 00 00                                         movaps  xmmword ptr [rsp+16D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAF6B B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAF70 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEAF74 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEAF79 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AEAF7D 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEAF82 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEAF87 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEAF8B 0F C6 04 07 00                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.std:0000000140AEAF90 0F 29 84 24 20 15 00 00                                         movaps  xmmword ptr [rsp+1520h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAF98 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAF9D 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEAFA1 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEAFA9 0F 28 84 24 20 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+1520h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAFB1 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEAFB5 0F 29 84 24 30 15 00 00                                         movaps  xmmword ptr [rsp+1530h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAFBD 0F 28 84 24 30 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+1530h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAFC5 0F 29 84 24 40 15 00 00                                         movaps  xmmword ptr [rsp+1540h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAFCD 0F 28 84 24 40 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+1540h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAFD5 0F 29 84 24 50 15 00 00                                         movaps  xmmword ptr [rsp+1550h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAFDD 0F 28 84 24 50 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+1550h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEAFE5 0F 29 84 24 C0 00 00 00                                         movaps  xmmword ptr [rsp+0C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEAFED B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEAFF2 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEAFF6 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEAFFB 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AEAFFF 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEB004 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEB009 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEB00D 0F C6 04 07 55                                                  shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.std:0000000140AEB012 0F 29 84 24 60 15 00 00                                         movaps  xmmword ptr [rsp+1560h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB01A B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB01F 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEB023 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEB02B 0F 28 84 24 60 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+1560h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB033 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEB037 0F 29 84 24 70 15 00 00                                         movaps  xmmword ptr [rsp+1570h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB03F 0F 28 84 24 70 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+1570h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB047 0F 58 84 24 C0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0C0h] ; Packed Single-FP Add
.std:0000000140AEB04F 0F 29 84 24 80 15 00 00                                         movaps  xmmword ptr [rsp+1580h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB057 0F 28 84 24 80 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+1580h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB05F 0F 29 84 24 C0 00 00 00                                         movaps  xmmword ptr [rsp+0C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB067 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB06C 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEB070 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEB075 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AEB079 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEB07E 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEB083 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEB087 0F C6 04 07 AA                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.std:0000000140AEB08C 0F 29 84 24 90 15 00 00                                         movaps  xmmword ptr [rsp+1590h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB094 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB099 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEB09D 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEB0A5 0F 28 84 24 90 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+1590h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB0AD 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEB0B1 0F 29 84 24 A0 15 00 00                                         movaps  xmmword ptr [rsp+15A0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB0B9 0F 28 84 24 A0 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+15A0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB0C1 0F 58 84 24 C0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0C0h] ; Packed Single-FP Add
.std:0000000140AEB0C9 0F 29 84 24 B0 15 00 00                                         movaps  xmmword ptr [rsp+15B0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB0D1 0F 28 84 24 B0 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+15B0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB0D9 0F 29 84 24 C0 00 00 00                                         movaps  xmmword ptr [rsp+0C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB0E1 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB0E6 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEB0EA B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEB0EF 48 6B C9 02                                                     imul    rcx, 2          ; Signed Multiply
.std:0000000140AEB0F3 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEB0F8 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEB0FD 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEB101 0F C6 04 07 FF                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.std:0000000140AEB106 0F 29 84 24 C0 15 00 00                                         movaps  xmmword ptr [rsp+15C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB10E B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB113 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEB117 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEB11F 0F 28 84 24 C0 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+15C0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB127 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEB12B 0F 29 84 24 D0 15 00 00                                         movaps  xmmword ptr [rsp+15D0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB133 0F 28 84 24 D0 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+15D0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB13B 0F 58 84 24 C0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0C0h] ; Packed Single-FP Add
.std:0000000140AEB143 0F 29 84 24 E0 15 00 00                                         movaps  xmmword ptr [rsp+15E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB14B 0F 28 84 24 E0 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+15E0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB153 0F 29 84 24 E0 16 00 00                                         movaps  xmmword ptr [rsp+16E0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB15B B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB160 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEB164 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEB169 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AEB16D 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEB172 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEB177 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEB17B 0F C6 04 07 00                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.std:0000000140AEB180 0F 29 84 24 F0 15 00 00                                         movaps  xmmword ptr [rsp+15F0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB188 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB18D 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEB191 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEB199 0F 28 84 24 F0 15 00 00                                         movaps  xmm0, xmmword ptr [rsp+15F0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB1A1 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEB1A5 0F 29 84 24 00 16 00 00                                         movaps  xmmword ptr [rsp+1600h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB1AD 0F 28 84 24 00 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+1600h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB1B5 0F 29 84 24 10 16 00 00                                         movaps  xmmword ptr [rsp+1610h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB1BD 0F 28 84 24 10 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+1610h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB1C5 0F 29 84 24 20 16 00 00                                         movaps  xmmword ptr [rsp+1620h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB1CD 0F 28 84 24 20 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+1620h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB1D5 0F 29 84 24 C0 00 00 00                                         movaps  xmmword ptr [rsp+0C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB1DD B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB1E2 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEB1E6 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEB1EB 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AEB1EF 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEB1F4 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEB1F9 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEB1FD 0F C6 04 07 55                                                  shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.std:0000000140AEB202 0F 29 84 24 30 16 00 00                                         movaps  xmmword ptr [rsp+1630h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB20A B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB20F 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEB213 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEB21B 0F 28 84 24 30 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+1630h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB223 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEB227 0F 29 84 24 40 16 00 00                                         movaps  xmmword ptr [rsp+1640h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB22F 0F 28 84 24 40 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+1640h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB237 0F 58 84 24 C0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0C0h] ; Packed Single-FP Add
.std:0000000140AEB23F 0F 29 84 24 50 16 00 00                                         movaps  xmmword ptr [rsp+1650h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB247 0F 28 84 24 50 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+1650h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB24F 0F 29 84 24 C0 00 00 00                                         movaps  xmmword ptr [rsp+0C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB257 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB25C 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEB260 B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEB265 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AEB269 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEB26E 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEB273 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEB277 0F C6 04 07 AA                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.std:0000000140AEB27C 0F 29 84 24 60 16 00 00                                         movaps  xmmword ptr [rsp+1660h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB284 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB289 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEB28D 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEB295 0F 28 84 24 60 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+1660h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB29D 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEB2A1 0F 29 84 24 70 16 00 00                                         movaps  xmmword ptr [rsp+1670h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB2A9 0F 28 84 24 70 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+1670h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB2B1 0F 58 84 24 C0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0C0h] ; Packed Single-FP Add
.std:0000000140AEB2B9 0F 29 84 24 80 16 00 00                                         movaps  xmmword ptr [rsp+1680h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB2C1 0F 28 84 24 80 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+1680h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB2C9 0F 29 84 24 C0 00 00 00                                         movaps  xmmword ptr [rsp+0C0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB2D1 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB2D6 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEB2DA B9 10 00 00 00                                                  mov     ecx, 10h
.std:0000000140AEB2DF 48 6B C9 03                                                     imul    rcx, 3          ; Signed Multiply
.std:0000000140AEB2E3 48 8B 54 24 68                                                  mov     rdx, [rsp+68h]
.std:0000000140AEB2E8 48 8B 7C 24 68                                                  mov     rdi, [rsp+68h]
.std:0000000140AEB2ED 0F 10 04 0A                                                     movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.std:0000000140AEB2F1 0F C6 04 07 FF                                                  shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.std:0000000140AEB2F6 0F 29 84 24 90 16 00 00                                         movaps  xmmword ptr [rsp+1690h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB2FE B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB303 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEB307 48 8B 8C 24 88 00 00 00                                         mov     rcx, [rsp+88h]
.std:0000000140AEB30F 0F 28 84 24 90 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+1690h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB317 0F 59 04 01                                                     mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.std:0000000140AEB31B 0F 29 84 24 A0 16 00 00                                         movaps  xmmword ptr [rsp+16A0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB323 0F 28 84 24 A0 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+16A0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB32B 0F 58 84 24 C0 00 00 00                                         addps   xmm0, xmmword ptr [rsp+0C0h] ; Packed Single-FP Add
.std:0000000140AEB333 0F 29 84 24 B0 16 00 00                                         movaps  xmmword ptr [rsp+16B0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB33B 0F 28 84 24 B0 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+16B0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB343 0F 29 84 24 F0 16 00 00                                         movaps  xmmword ptr [rsp+16F0h], xmm0 ; Move Aligned Four Packed Single-FP
.std:0000000140AEB34B B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB350 48 6B C0 00                                                     imul    rax, 0          ; Signed Multiply
.std:0000000140AEB354 48 8B 8C 24 30 02 00 00                                         mov     rcx, [rsp+230h]
.std:0000000140AEB35C 0F 28 84 24 C0 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+16C0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB364 0F 11 04 01                                                     movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140AEB368 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB36D 48 6B C0 01                                                     imul    rax, 1          ; Signed Multiply
.std:0000000140AEB371 48 8B 8C 24 30 02 00 00                                         mov     rcx, [rsp+230h]
.std:0000000140AEB379 0F 28 84 24 D0 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+16D0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB381 0F 11 04 01                                                     movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140AEB385 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB38A 48 6B C0 02                                                     imul    rax, 2          ; Signed Multiply
.std:0000000140AEB38E 48 8B 8C 24 30 02 00 00                                         mov     rcx, [rsp+230h]
.std:0000000140AEB396 0F 28 84 24 E0 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+16E0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB39E 0F 11 04 01                                                     movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140AEB3A2 B8 10 00 00 00                                                  mov     eax, 10h
.std:0000000140AEB3A7 48 6B C0 03                                                     imul    rax, 3          ; Signed Multiply
.std:0000000140AEB3AB 48 8B 8C 24 30 02 00 00                                         mov     rcx, [rsp+230h]
.std:0000000140AEB3B3 0F 28 84 24 F0 16 00 00                                         movaps  xmm0, xmmword ptr [rsp+16F0h] ; Move Aligned Four Packed Single-FP
.std:0000000140AEB3BB 0F 11 04 01                                                     movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.std:0000000140AEB3BF 48 8D 84 24 60 18 00 00                                         lea     rax, [rsp+1860h] ; Load Effective Address
.std:0000000140AEB3C7 48 8D 8C 24 20 18 00 00                                         lea     rcx, [rsp+1820h] ; Load Effective Address
.std:0000000140AEB3CF 48 8B F8                                                        mov     rdi, rax
.std:0000000140AEB3D2 48 8B F1                                                        mov     rsi, rcx
.std:0000000140AEB3D5 B9 40 00 00 00                                                  mov     ecx, 40h ; '@'
.std:0000000140AEB3DA F3 A4                                                           rep movsb               ; Move Byte(s) from String to String
.std:0000000140AEB3DC 48 8D 84 24 60 18 00 00                                         lea     rax, [rsp+1860h] ; Load Effective Address
.std:0000000140AEB3E4 48 89 84 24 48 0A 00 00                                         mov     [rsp+0A48h], rax
.std:0000000140AEB3EC 48 8D 84 24 B0 18 00 00                                         lea     rax, [rsp+18B0h] ; Load Effective Address
.std:0000000140AEB3F4 48 8B F8                                                        mov     rdi, rax
.std:0000000140AEB3F7 48 8B B4 24 48 0A 00 00                                         mov     rsi, [rsp+0A48h]
.std:0000000140AEB3FF B9 40 00 00 00                                                  mov     ecx, 40h ; '@'
.std:0000000140AEB404 F3 A4                                                           rep movsb               ; Move Byte(s) from String to String
.std:0000000140AEB406 48 8B 84 24 50 24 00 00                                         mov     rax, [rsp+2450h]
.std:0000000140AEB40E 0F B6 80 7C 0C 00 00                                            movzx   eax, byte ptr [rax+0C7Ch] ; Move with Zero-Extend
.std:0000000140AEB415 83 F8 01                                                        cmp     eax, 1          ; Compare Two Operands
.std:0000000140AEB418 75 23                                                           jnz     short loc_140AEB43D ; Jump if Not Zero (ZF=0)
.std:0000000140AEB41A 48 8D 84 24 F0 18 00 00                                         lea     rax, [rsp+18F0h] ; Load Effective Address
.std:0000000140AEB422 48 8B 8C 24 50 24 00 00                                         mov     rcx, [rsp+2450h]
.std:0000000140AEB42A 48 8B F8                                                        mov     rdi, rax
.std:0000000140AEB42D 48 8D B1 80 0C 00 00                                            lea     rsi, [rcx+0C80h] ; Load Effective Address
.std:0000000140AEB434 B9 40 00 00 00                                                  mov     ecx, 40h ; '@'
.std:0000000140AEB439 F3 A4                                                           rep movsb               ; Move Byte(s) from String to String
.std:0000000140AEB43B EB 2A                                                           jmp     short loc_140AEB467 ; Jump


```
---
Array
---
```c
__int64 __fastcall sub_14CC651F0(v8_qjs::External *a1)
{
  char v2; // dl
  __int64 result; // rax
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 v6; // rax
  v8_qjs::External **v7; // r13
  v8_qjs::External *v8; // r15
  v8_qjs::External **v9; // r12
  __int64 v10; // rcx
  int v11; // r15d
  __int32 v12; // edi
  v8_qjs::External *v13; // rdx
  __int64 v14; // rax
  int *v15; // r8
  int v16; // r9d
  int v17; // ecx
  int v18; // r10d
  __int64 v19; // rcx
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  __m128i v23; // xmm0
  __int64 v24; // rax
  v8_qjs::External *v25; // rdi
  char *v26; // rcx
  __int64 v27; // rax
  v8_qjs::External *v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // edi
  _QWORD *v32; // r12
  int v33; // ebx
  v8_qjs::External *v34; // r13
  int *v35; // r15
  __int32 v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // r8d
  int v40; // ecx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  int v44; // eax
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int16 *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // ecx
  __int64 v53; // rax
  int v54; // ebx
  _QWORD *v55; // r12
  v8_qjs::External *v56; // r13
  int *v57; // r15
  __int32 v58; // ebx
  int v59; // edi
  __int64 v60; // rdx
  __int64 v61; // rax
  int v62; // r8d
  int v63; // ecx
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  int v67; // eax
  __int64 v68; // rax
  __m128i v69; // xmm0
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int16 *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // ecx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // rcx
  unsigned int *v81; // rbx
  int v82; // edi
  __int64 v83; // rax
  __int16 *v84; // rax
  __int64 v85; // rax
  __int64 v86; // [rsp+28h] [rbp-D8h]
  int *v87; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v88; // [rsp+48h] [rbp-B8h]
  __m128i v89; // [rsp+50h] [rbp-B0h]
  __m128d v90; // [rsp+60h] [rbp-A0h]
  v8_qjs::External *v91; // [rsp+70h] [rbp-90h]
  v8_qjs::External *v92[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v93; // [rsp+88h] [rbp-78h]
  __int64 v94; // [rsp+98h] [rbp-68h]
  __int64 v95; // [rsp+A0h] [rbp-60h]
  v8_qjs::External *v96; // [rsp+A8h] [rbp-58h]
  _BYTE v97[40]; // [rsp+B0h] [rbp-50h]
  int v98; // [rsp+130h] [rbp+30h]
  int v99; // [rsp+130h] [rbp+30h]
  int v100; // [rsp+130h] [rbp+30h]
  int v101; // [rsp+130h] [rbp+30h]
  int v102; // [rsp+138h] [rbp+38h]
  int v103; // [rsp+138h] [rbp+38h]
  __int64 v104; // [rsp+140h] [rbp+40h]
  __int64 v105; // [rsp+148h] [rbp+48h]

  v104 = *(_QWORD *)((char *)a1 + 0x1C);
  v2 = sub_14C8D9380((unsigned int)v104, 0LL) ^ 1;
  result = 1LL;
  if ( HIDWORD(v104) )
    v2 = 1;
  if ( v2 )
  {
    v4 = sub_14CC60E90();
    v105 = v4;
    if ( (unsigned __int8)sub_14CBBDC30() && (!byte_1573D83D8 || (unsigned int)MEMORY[0x10EBCBDD]() == dword_1573D83C8) )
    {
      v5 = 0LL;
    }
    else
    {
      v5 = v4;
      MEMORY[0x7FFC724F1A90](v4);
    }
    sub_14C8EA9A0((unsigned int)v104);
    sub_140E2B540((v8_qjs::External *)(v4 + 0x28));
    if ( v98 == 0xFFFFFFFF )
      goto LABEL_40;
    v6 = 0x20LL * v98 + off_15684AC40(v4 + 0x28);
    if ( !v6 )
      goto LABEL_40;
    v7 = (v8_qjs::External **)(v6 + 8);
    if ( v6 == 0xFFFFFFFFFFFFFFF8uLL )
      goto LABEL_40;
    v8 = *(v8_qjs::External **)(v6 + 0x10);
    v96 = v8;
    if ( v8 && !*v7 )
    {
      sub_140D685A0(v8);
      v9 = v7;
      if ( *((_DWORD *)v8 + 2) - *((_DWORD *)v8 + 0xD) <= 2 )
      {
        v10 = (__int64)v8 + 0x10;
        v89.m128i_i64[0] = 0x100000000LL;
        v11 = 0;
        *(double *)((char *)v90.m128d_f64 + 4) = 0.0;
        v12 = 0;
        v99 = 0;
        v13 = v96;
        v91 = v96;
        v89.m128i_i64[1] = v10;
        LODWORD(v90.m128d_f64[0]) = 0xFFFFFFFF;
        v87 = (int *)(v10 + 0x18);
        if ( *(_DWORD *)(v10 + 0x18) )
        {
          v14 = off_15684AC40(v10 + 0x10);
          v15 = (int *)v89.m128i_i64[1];
          if ( v14 )
            v15 = (int *)v14;
          v16 = *v87;
          v17 = *v15;
          v18 = (*v87 - 1) / 0x20;
          v13 = v96;
          v91 = v96;
          if ( v17 )
          {
LABEL_22:
            v20 = v17 ^ v17 & (v17 - 1);
            v21 = !_BitScanReverse((unsigned int *)&v17, v20);
            v89.m128i_i32[1] = v20;
            if ( v21 )
              v22 = 0x20;
            else
              v22 = 0x1F - v17;
            v99 = v11 - v22 + 0x1F;
            HIDWORD(v90.m128d_f64[0]) = v99;
            if ( v99 <= v16 )
              goto LABEL_27;
          }
          else
          {
            v91 = v96;
            while ( 1 )
            {
              v19 = v12;
              v11 += 0x20;
              ++v12;
              LODWORD(v90.m128d_f64[1]) = v11;
              v89.m128i_i32[0] = v12;
              if ( (int)v19 >= v18 )
                break;
              v17 = v15[v19 + 1];
              LODWORD(v90.m128d_f64[0]) = 0xFFFFFFFF;
              if ( v17 )
                goto LABEL_22;
            }
          }
          v99 = v16;
          HIDWORD(v90.m128d_f64[0]) = v16;
        }
LABEL_27:
        *(_QWORD *)v97 = v13;
        v95 = (__int64)v13;
        *(__m128d *)&v97[0x18] = v90;
        *(__m128i *)&v97[8] = v89;
        *(_OWORD *)v92 = *(_OWORD *)v97;
        v94 = *(_OWORD *)&_mm_unpackhi_pd(v90, v90);
        v93 = *(_OWORD *)&v97[0x10];
        v23 = _mm_srli_si128(v89, 4);
        *v7 = *(v8_qjs::External **)(off_15684AC40(v13) + 0x10LL * v99);
        DWORD2(v93) = LODWORD(v90.m128d_f64[0]) & ~_mm_cvtsi128_si32(v23);
        sub_140AABDC0(&v92[1]);
        v24 = off_15684AC40(v92[0]);
        v25 = v91;
        v26 = (char *)v91 + 0x40;
        v7[1] = *(v8_qjs::External **)(v24 + 0x10LL * SHIDWORD(v93));
        *((_DWORD *)v25 + 0x12) = 0;
        if ( off_15684AC40(v26) )
        {
          v27 = off_15684AC40((char *)v25 + 0x40);
          sub_14C7AA1D0(v27);
        }
        sub_140C32C40(v25);
        sub_1410EF380(v25);
      }
LABEL_34:
      v28 = v9[1];
      if ( !v28 || *v9 )
        v29 = (*v9 != 0LL) + (v28 != 0LL);
      else
        v29 = *((_DWORD *)v28 + 2) - *((_DWORD *)v28 + 0xD);
      v4 = v105;
      if ( !v29 )
        sub_14CC62F40((v8_qjs::External *)(v105 + 0x28));
LABEL_40:
      if ( !*((_QWORD *)a1 + 2) )
        goto LABEL_80;
      sub_14C8EA9A0((unsigned int)v104);
      sub_14CC63560((v8_qjs::External *)(v4 + 0x78));
      v30 = sub_14CC5C330((v8_qjs::External *)(v4 + 0xC8));
      v31 = 0;
      v32 = (_QWORD *)v30;
      v33 = 0;
      v34 = *(v8_qjs::External **)(v30 + 8);
      if ( !v34 || *(_QWORD *)v30 )
      {
        if ( a1 == v34 )
        {
          *(_QWORD *)(v30 + 8) = 0LL;
        }
        else
        {
          if ( a1 != *(v8_qjs::External **)v30 )
            goto LABEL_59;
          *(_QWORD *)v30 = v34;
          *(_QWORD *)(v30 + 8) = 0LL;
        }
        goto LABEL_74;
      }
      v33 = sub_140D685A0(*(v8_qjs::External **)(v30 + 8));
      v102 = v33;
      if ( *((_DWORD *)v34 + 2) - *((_DWORD *)v34 + 0xD) > 2 )
      {
LABEL_58:
        if ( v33 != 1 )
        {
LABEL_59:
          if ( *((_QWORD *)a1 + 1) )
          {
            sub_14CC3C8B0(a1, &v87, 0LL, 0LL);
          }
          else
          {
            v87 = 0LL;
            v88 = 0LL;
            sub_140A81A20(&v87, 5LL);
            LODWORD(v88) = v88 + 5;
            if ( (int)v88 > SHIDWORD(v88) )
              sub_140A81940(&v87);
            v48 = off_15684AC40(&v87);
            sub_14C784B30(v48, (__int64)L"None", 0xALL);
          }
          if ( (_DWORD)v88 )
            v49 = (__int16 *)off_15684AC40(&v87);
          else
            v49 = &word_1506C8658;
          sub_14C828330(
            "Unknown",
            0x2B6LL,
            &unk_157400CDC,
            1LL,
            L"Internal Error: RemoveFromOuterMap NumRemoved = %d  for %s",
            v33,
            v49);
          off_15684AC40(&v87);
          sub_140A81920(&v87, 0LL);
          if ( off_15684AC40(&v87) )
          {
            v50 = off_15684AC40(&v87);
            sub_14C7AA1D0(v50);
          }
          sub_14C85B350();
        }
LABEL_74:
        v51 = v32[1];
        if ( !v51 || *v32 )
          v52 = (v32[1] != 0LL) + (*v32 != 0LL);
        else
          v52 = *(_DWORD *)(v51 + 8) - *(_DWORD *)(v51 + 0x34);
        if ( !v52 )
          sub_14CC630C0((v8_qjs::External *)(v4 + 0xC8));
LABEL_80:
        v53 = sub_14CC5C330((v8_qjs::External *)(v4 + 0x118));
        v54 = 0;
        v55 = (_QWORD *)v53;
        v56 = *(v8_qjs::External **)(v53 + 8);
        if ( !v56 || *(_QWORD *)v53 )
        {
          if ( a1 == v56 )
          {
            *(_QWORD *)(v53 + 8) = 0LL;
          }
          else
          {
            if ( a1 != *(v8_qjs::External **)v53 )
            {
LABEL_98:
              if ( (unsigned __int8)byte_157400CD8 >= 2u )
              {
                if ( *((_QWORD *)a1 + 1) )
                {
                  sub_14CC3C8B0(a1, &v87, 0LL, 0LL);
                }
                else
                {
                  v87 = 0LL;
                  v88 = 0LL;
                  sub_140A81A20(&v87, 5LL);
                  LODWORD(v88) = v88 + 5;
                  if ( (int)v88 > SHIDWORD(v88) )
                    sub_140A81940(&v87);
                  v72 = off_15684AC40(&v87);
                  sub_14C784B30(v72, (__int64)L"None", 0xALL);
                }
                if ( (_DWORD)v88 )
                  v73 = (__int16 *)off_15684AC40(&v87);
                else
                  v73 = &word_1506C8658;
                LODWORD(v86) = v54;
                sub_14C828330(
                  "Unknown",
                  0x2C8LL,
                  &unk_157400CDC,
                  2LL,
                  L"Internal Error: RemoveFromClassMap NumRemoved = %d from object list for %s",
                  v86,
                  v73);
                off_15684AC40(&v87);
                sub_140A81920(&v87, 0LL);
                if ( off_15684AC40(&v87) )
                {
                  v74 = off_15684AC40(&v87);
                  sub_14C7AA1D0(v74);
                }
              }
              goto LABEL_113;
            }
            *(_QWORD *)v53 = v56;
            *(_QWORD *)(v53 + 8) = 0LL;
          }
LABEL_113:
          v75 = v55[1];
          if ( !v75 || *v55 )
            v76 = (*v55 != 0LL) + (v75 != 0);
          else
            v76 = *(_DWORD *)(v75 + 8) - *(_DWORD *)(v75 + 0x34);
          if ( !v76 )
            sub_14CC630C0((v8_qjs::External *)(v4 + 0x118));
          v77 = sub_14CA98460();
          v78 = *((_QWORD *)a1 + 1);
          v79 = v77 + 0x30;
          result = *(int *)(v77 + 0x38);
          if ( (int)result <= *(_DWORD *)(v78 + 0x38) )
          {
            v80 = result;
            result = *(_QWORD *)(v78 + 0x30);
            if ( *(_QWORD *)(result + 8 * v80) == v79 )
            {
              v79 = *((_QWORD *)a1 + 9);
              if ( v79 )
              {
                v81 = (unsigned int *)sub_14CC5C1F0((v8_qjs::External *)(v4 + 0x168));
                v82 = sub_140D685A0((v8_qjs::External *)v81);
                if ( v82 != 1 && (unsigned __int8)byte_157400CD8 >= 2u )
                {
                  if ( *((_QWORD *)a1 + 1) )
                  {
                    sub_14CC3C8B0(a1, &v87, 0LL, 0LL);
                  }
                  else
                  {
                    v87 = 0LL;
                    v88 = 0LL;
                    sub_140A81A20(&v87, 5LL);
                    LODWORD(v88) = v88 + 5;
                    if ( (int)v88 > SHIDWORD(v88) )
                      sub_140A81940(&v87);
                    v83 = off_15684AC40(&v87);
                    sub_14C784B30(v83, (__int64)L"None", 0xALL);
                  }
                  if ( (_DWORD)v88 )
                    v84 = (__int16 *)off_15684AC40(&v87);
                  else
                    v84 = &word_1506C8658;
                  LODWORD(v86) = v82;
                  sub_14C828330(
                    "Unknown",
                    0x2DCLL,
                    &unk_157400CDC,
                    2LL,
                    L"Internal Error: RemoveFromClassMap NumRemoved = %d from child list for %s",
                    v86,
                    v84);
                  off_15684AC40(&v87);
                  sub_140A81920(&v87, 0LL);
                  if ( off_15684AC40(&v87) )
                  {
                    v85 = off_15684AC40(&v87);
                    sub_14C7AA1D0(v85);
                  }
                }
                result = v81[2];
                if ( (_DWORD)result == v81[0xD] )
                  result = sub_141C28D30((v8_qjs::External *)(v4 + 0x168));
              }
            }
          }
          if ( v5 )
            return MEMORY[0x7FFC724F6F90](v5, v78, v79);
          return result;
        }
        v54 = sub_140D685A0(*(v8_qjs::External **)(v53 + 8));
        v103 = v54;
        if ( *((_DWORD *)v56 + 2) - *((_DWORD *)v56 + 0xD) > 2 )
        {
LABEL_97:
          if ( v54 != 1 )
            goto LABEL_98;
          goto LABEL_113;
        }
        v57 = (int *)((char *)v56 + 0x10);
        v89.m128i_i64[0] = 0x100000000LL;
        v58 = 0;
        v59 = 0;
        v89.m128i_i64[1] = (__int64)v56 + 0x10;
        v60 = (__int64)v56;
        LODWORD(v90.m128d_f64[0]) = 0xFFFFFFFF;
        *(double *)((char *)v90.m128d_f64 + 4) = 0.0;
        v87 = (int *)((char *)v56 + 0x28);
        v101 = 0;
        if ( *((_DWORD *)v56 + 0xA) )
        {
          v61 = off_15684AC40((char *)v56 + 0x20);
          if ( v61 )
            v57 = (int *)v61;
          v62 = *v87;
          v63 = *v57;
          v60 = (__int64)v56;
          v64 = (*v87 - 1) / 0x20;
          if ( *v57 )
          {
LABEL_89:
            v66 = v63 ^ v63 & (v63 - 1);
            v21 = !_BitScanReverse((unsigned int *)&v63, v66);
            v89.m128i_i32[1] = v66;
            if ( v21 )
              v67 = 0x20;
            else
              v67 = 0x1F - v63;
            v101 = v59 - v67 + 0x1F;
            HIDWORD(v90.m128d_f64[0]) = v101;
            if ( v101 <= v62 )
              goto LABEL_94;
          }
          else
          {
            while ( 1 )
            {
              v65 = v58;
              v59 += 0x20;
              ++v58;
              LODWORD(v90.m128d_f64[1]) = v59;
              v89.m128i_i32[0] = v58;
              if ( (int)v65 >= v64 )
                break;
              v63 = v57[v65 + 1];
              LODWORD(v90.m128d_f64[0]) = 0xFFFFFFFF;
              if ( v63 )
                goto LABEL_89;
            }
          }
          v101 = v62;
          HIDWORD(v90.m128d_f64[0]) = v62;
        }
LABEL_94:
        *(_QWORD *)v97 = v60;
        v95 = v60;
        *(__m128d *)&v97[0x18] = v90;
        *(__m128i *)&v97[8] = v89;
        *(_OWORD *)v92 = *(_OWORD *)v97;
        v94 = *(_OWORD *)&_mm_unpackhi_pd(v90, v90);
        v93 = *(_OWORD *)&v97[0x10];
        v68 = off_15684AC40(v60);
        v69 = _mm_srli_si128(v89, 4);
        *v55 = *(_QWORD *)(v68 + 0x10LL * v101);
        DWORD2(v93) = LODWORD(v90.m128d_f64[0]) & ~_mm_cvtsi128_si32(v69);
        sub_140AABDC0(&v92[1]);
        v70 = off_15684AC40(v92[0]);
        v55[1] = *(_QWORD *)(v70 + 0x10LL * SHIDWORD(v93));
        *((_DWORD *)v56 + 0x12) = 0;
        if ( off_15684AC40((char *)v56 + 0x40) )
        {
          v71 = off_15684AC40((char *)v56 + 0x40);
          sub_14C7AA1D0(v71);
        }
        sub_140C32C40(v56);
        sub_1410EF380(v56);
        v4 = v105;
        v54 = v103;
        goto LABEL_97;
      }
      v35 = (int *)((char *)v34 + 0x10);
      v36 = 0;
      v37 = (__int64)v34;
      v89.m128i_i64[0] = 0x100000000LL;
      v89.m128i_i64[1] = (__int64)v34 + 0x10;
      LODWORD(v90.m128d_f64[0]) = 0xFFFFFFFF;
      *(double *)((char *)v90.m128d_f64 + 4) = 0.0;
      v87 = (int *)((char *)v34 + 0x28);
      v100 = 0;
      if ( *((_DWORD *)v34 + 0xA) )
      {
        v38 = off_15684AC40((char *)v34 + 0x20);
        if ( v38 )
          v35 = (int *)v38;
        v39 = *v87;
        v40 = *v35;
        v37 = (__int64)v34;
        v41 = (*v87 - 1) / 0x20;
        if ( *v35 )
        {
LABEL_50:
          v43 = v40 ^ v40 & (v40 - 1);
          v21 = !_BitScanReverse((unsigned int *)&v40, v43);
          v89.m128i_i32[1] = v43;
          if ( v21 )
            v44 = 0x20;
          else
            v44 = 0x1F - v40;
          v100 = v31 - v44 + 0x1F;
          HIDWORD(v90.m128d_f64[0]) = v100;
          if ( v100 <= v39 )
            goto LABEL_55;
        }
        else
        {
          while ( 1 )
          {
            v42 = v36;
            v31 += 0x20;
            ++v36;
            LODWORD(v90.m128d_f64[1]) = v31;
            v89.m128i_i32[0] = v36;
            if ( (int)v42 >= v41 )
              break;
            v40 = v35[v42 + 1];
            LODWORD(v90.m128d_f64[0]) = 0xFFFFFFFF;
            if ( v40 )
              goto LABEL_50;
          }
        }
        v100 = v39;
        HIDWORD(v90.m128d_f64[0]) = v39;
      }
LABEL_55:
      *(_QWORD *)v97 = v37;
      v95 = v37;
      *(__m128d *)&v97[0x18] = v90;
      *(__m128i *)&v97[8] = v89;
      *(_OWORD *)v92 = *(_OWORD *)v97;
      v94 = *(_OWORD *)&_mm_unpackhi_pd(v90, v90);
      v93 = *(_OWORD *)&v97[0x10];
      v45 = _mm_srli_si128(v89, 4);
      *v32 = *(_QWORD *)(off_15684AC40(v37) + 0x10LL * v100);
      DWORD2(v93) = LODWORD(v90.m128d_f64[0]) & ~_mm_cvtsi128_si32(v45);
      sub_140AABDC0(&v92[1]);
      v46 = off_15684AC40(v92[0]);
      v32[1] = *(_QWORD *)(v46 + 0x10LL * SHIDWORD(v93));
      *((_DWORD *)v34 + 0x12) = 0;
      if ( off_15684AC40((char *)v34 + 0x40) )
      {
        v47 = off_15684AC40((char *)v34 + 0x40);
        sub_14C7AA1D0(v47);
      }
      sub_140C32C40(v34);
      sub_1410EF380(v34);
      v4 = v105;
      v33 = v102;
      goto LABEL_58;
    }
    v9 = (v8_qjs::External **)(v6 + 8);
    if ( a1 != v8 )
    {
      if ( a1 != *v7 )
        goto LABEL_34;
      *v7 = v8;
    }
    *(_QWORD *)(v6 + 0x10) = 0LL;
    goto LABEL_34;
  }
  return result;
}

```
```asm


std:00000001506C7CA0 aLoglaunchwindo:                        ; DATA XREF: sub_1401C2DB0+A↑o
.std:00000001506C7CA0                 text "UTF-16LE", 'LogLaunchWindows',0
.std:00000001506C7CC2                 align 4
.std:00000001506C7CC4 ; Exported entry 1401. D3D12SDKVersion
.std:00000001506C7CC4                 public D3D12SDKVersion
.std:00000001506C7CC4 D3D12SDKVersion db  60h ; `             ; DATA XREF: .std:off_155E60438↓o
.std:00000001506C7CC5                 db    2
.std:00000001506C7CC6                 db    0
.std:00000001506C7CC7                 db    0
.std:00000001506C7CC8 aD3d12_2        db '.\D3D12\',0         ; DATA XREF: .std:D3D12SDKPath↓o
.std:00000001506C7CD1                 align 8
.std:00000001506C7CD8 aAssetregistry_1 db 'AssetRegistry',0   ; DATA XREF: sub_1401C2E00+6↑o
.std:00000001506C7CD8                                         ; sub_1401C3480+6↑o ...
.std:00000001506C7CE6                 align 10h
.std:00000001506C7CF0 aIfFalseDisrega:                        ; DATA XREF: sub_1401C2C80+1F↑o
.std:00000001506C7CF0                 text "UTF-16LE", 'If false, DisregardForGC will be disabled for dedic'
.std:00000001506C7D56                 text "UTF-16LE", 'ated servers.',0
.std:00000001506C7D72                 align 20h
.std:00000001506C7D80 aGcUsedisregard:                        ; DATA XREF: sub_1401C2C80+35↑o
.std:00000001506C7D80                 text "UTF-16LE", 'gc.UseDisregardForGCOnDedicatedServers',0
.std:00000001506C7DCE                 align 10h
.std:00000001506C7DD0 aUsedToAddRando:                        ; DATA XREF: sub_1401C2650+1F↑o
.std:00000001506C7DD0                 text "UTF-16LE", 'Used to add random sleeps to tick.DoAsyncEndOfFrame'
.std:00000001506C7E36                 text "UTF-16LE", 'Tasks to shake loose bugs on either thread. Also do'
.std:00000001506C7E9C                 text "UTF-16LE", 'es random render thread flushes from the game threa'
.std:00000001506C7F02                 text "UTF-16LE", 'd.',0
.std:00000001506C7F08                 align 10h
.std:00000001506C7F10 aTickDoasyncend:                        ; DATA XREF: sub_1401C2650+31↑o
.std:00000001506C7F10                 text "UTF-16LE", 'tick.DoAsyncEndOfFrameTasks.Randomize',0
.std:00000001506C7F5C                 align 20h
.std:00000001506C7F60 aIfTrueValidate:                        ; DATA XREF: sub_1401C26C0+1F↑o
.std:00000001506C7F60                 text "UTF-16LE", 'If true, validates that replicated properties haven'
.std:00000001506C7FC6                 text "UTF-16LE", 27h,'t changed during the Slate tick. Results will n'
.std:00000001506C8026                 text "UTF-16LE", 'ot be valid if demo.ClientRecordAsyncEndOfFrame is '
.std:00000001506C808C                 text "UTF-16LE", 'also enabled.',0
.std:00000001506C80A8                 align 10h
.std:00000001506C80B0 aTickDoasyncend_0:                      ; DATA XREF: sub_1401C26C0+31↑o
.std:00000001506C80B0                 text "UTF-16LE", 'tick.DoAsyncEndOfFrameTasks.ValidateReplicatedPrope'
.std:00000001506C8116                 text "UTF-16LE", 'rties',0
.std:00000001506C8122                 align 10h
.std:00000001506C8130 aTaskAndThreadP:                        ; DATA XREF: sub_1401C2580+9↑o
.std:00000001506C8130                 text "UTF-16LE", 'Task and thread priority for the experiemntal async'
.std:00000001506C8196                 text "UTF-16LE", ' end of frame tasks.',0
.std:00000001506C81C0 aTaskgraphTaskp:                        ; DATA XREF: sub_1401C2580+18↑o
.std:00000001506C81C0                 text "UTF-16LE", 'TaskGraph.TaskPriorities.AsyncEndOfFrameGameTasks',0
.std:00000001506C8224                 align 10h
.std:00000001506C8230 aWhenBuiltAsEmb:                        ; DATA XREF: sub_1401C2B20+1F↑o
.std:00000001506C8230                 text "UTF-16LE", 'When built as embedded, how many ticks to perform b'
.std:00000001506C8296                 text "UTF-16LE", 'efore sleeping',0
.std:00000001506C82B4                 align 20h
.std:00000001506C82C0 aTickSecondsbef:                        ; DATA XREF: sub_1401C2B20+2E↑o
.std:00000001506C82C0                 text "UTF-16LE", 'tick.SecondsBeforeEmbeddedAppSleeps',0
.std:00000001506C8308                 align 10h
.std:00000001506C8310 aWhetherEnableA:                        ; DATA XREF: sub_1401C2BA0+1F↑o
.std:00000001506C8310                 text "UTF-16LE", 'whether enable auxiliary RHI thread',0
.std:00000001506C8358 aRAuxrhiEnable:                         ; DATA XREF: sub_1401C2BA0+31↑o
.std:00000001506C8358                 text "UTF-16LE", 'r.AuxRHI.Enable',0
.std:00000001506C8378                 align 20h
.std:00000001506C8380 aWhetherOpenglE:                        ; DATA XREF: sub_1401C2AB0+1F↑o
.std:00000001506C8380                 text "UTF-16LE", 'whether OpenGL enable auxiliary RHI thread',0
.std:00000001506C83D6                 align 8
.std:00000001506C83D8 aROpenglAuxrhiE:                        ; DATA XREF: sub_1401C2AB0+31↑o
.std:00000001506C83D8                 text "UTF-16LE", 'r.OpenGL.AuxRHI.Enable',0
.std:00000001506C8406                 align 10h
.std:00000001506C8410 aWhetherEnableA_0:                      ; DATA XREF: sub_1401C2C10+1F↑o
.std:00000001506C8410                 text "UTF-16LE", 'whether enable auxiliary RHI thread in editor',0
.std:00000001506C846C                 align 10h
.std:00000001506C8470 aRAuxrhiEditore:                        ; DATA XREF: sub_1401C2C10+31↑o
.std:00000001506C8470                 text "UTF-16LE", 'r.AuxRHI.EditorEnable',0
.std:00000001506C849C                 align 20h
.std:00000001506C84A0 a0Old1New:                              ; DATA XREF: sub_1401C25D0+1F↑o
.std:00000001506C84A0                 text "UTF-16LE", '0 old 1 new',0
.std:00000001506C84B8 aRAuxrhiFlushmo:                        ; DATA XREF: sub_1401C25D0+34↑o
.std:00000001506C84B8                                         ; sub_14DADD620+653↑o ...
.std:00000001506C84B8                 text "UTF-16LE", 'r.AuxRHI.FlushMode',0
.std:00000001506C84DE                 align 20h
.std:00000001506C84E0 off_1506C84E0   dq offset PxLib_start_UE4_PixUI
.std:00000001506C84E0                                         ; DATA XREF: sub_140889050+D5↑o
.std:00000001506C84E0                                         ; sub_140A81B90+18↑o ...
.std:00000001506C84E8                 dq offset ?GetIsolate@Context@v8_qjs@@QEAAPEAVIsolate@2@XZ ; v8_qjs::Context::GetIsolate(void)
.std:00000001506C84F0                 dq offset ?Bytes@WriteBytesMem@AK@@UEBAPEAEXZ ; AK::WriteBytesMem::Bytes(void)
.std:00000001506C84F8                 dq offset sub_140A81B70
.std:00000001506C8500                 dq offset sub_140A81AF0
.std:00000001506C8508                 dq offset ?OnNoticeExtract@GCloudDolphinCallBack@GCloud@@UEAA_NXZ ; GCloud::GCloudDolphinCallBack::OnNoticeExtract(void)
.std:00000001506C8510                 dq offset sub_140A81BF0
.std:00000001506C8518                 dq offset sub_140A81C00
.std:00000001506C8520                 dq offset sub_140A81B90
.std:00000001506C8528                 dq offset sub_140A81BE0
.std:00000001506C8530                 dq offset sub_150266351
.std:00000001506C8538 aGRhipacingEnab:                        ; DATA XREF: sub_1401C2CF0+35↑o
.std:00000001506C8538                                         ; sub_14EAE3BB0+B85↑o
.std:00000001506C8538                 text "UTF-16LE", 'g.RHIPacing.Enabled',0
.std:00000001506C8560 aLoadGiosloadid:                        ; DATA XREF: sub_1401C2730+1F↑o
.std:00000001506C8560                 text "UTF-16LE", 'Load < GIOSLoadId+1 metallib id.',0
.std:00000001506C85A2                 align 8
.std:00000001506C85A8 aRShadercompres:                        ; DATA XREF: sub_1401C2730+35↑o
.std:00000001506C85A8                 text "UTF-16LE", 'r.ShaderCompress.LoadId',0
.std:00000001506C85D8 off_1506C85D8   dq offset PxLib_start_UE4_PixUI
.std:00000001506C85D8                                         ; DATA XREF: sub_140889050+F7↑o
.std:00000001506C85D8                                         ; sub_140A81B90+3A↑o ...
.std:00000001506C85E0                 dq offset ?GetIsolate@Context@v8_qjs@@QEAAPEAVIsolate@2@XZ ; v8_qjs::Context::GetIsolate(void)
.std:00000001506C85E8                 dq offset ?Bytes@WriteBytesMem@AK@@UEBAPEAEXZ ; AK::WriteBytesMem::Bytes(void)
.std:00000001506C85F0                 dq offset sub_140A81B70
.std:00000001506C85F8                 dq offset sub_140A81AF0
.std:00000001506C8600                 dq offset ?OnNoticeExtract@GCloudDolphinCallBack@GCloud@@UEAA_NXZ ; GCloud::GCloudDolphinCallBack::OnNoticeExtract(void)
.std:00000001506C8608                 dq offset sub_140A81BF0
.std:00000001506C8610                 dq offset sub_140A81C00
.std:00000001506C8618                 dq offset sub_140A81B90
.std:00000001506C8620                 dq offset sub_140A81BE0
.std:00000001506C8628                 dq offset sub_140A81C30
.std:00000001506C8630 off_1506C8630   dq offset sub_140A81C70 ; DATA XREF: sub_1401C2820+D0↑o
.std:00000001506C8630                                         ; sub_140239AC0+D0↑o ...
.std:00000001506C8638 off_1506C8638   dq offset sub_140A81CA0 ; DATA XREF: sub_1401C2730+4D↑o
.std:00000001506C8638                                         ; sub_1401C2C80+4D↑o ...
.std:00000001506C8640 aLaunch:                                ; DATA XREF: sub_1401C2E20+E↑o
.std:00000001506C8640                                         ; sub_1401C2E20+18↑o ...
.std:00000001506C8640                 text "UTF-16LE", 'Launch',0
.std:00000001506C864E                 align 10h
.std:00000001506C8650 off_1506C8650   dq offset sub_140A81D50 ; DATA XREF: sub_1401C25D0+3E↑o
.std:00000001506C8650                                         ; sub_1401C2650+3B↑o ...
.std:00000001506C8658 ; const AK::SoundEngine word_1506C8658
.std:00000001506C8658 word_1506C8658  dw 0                    ; DATA XREF: sub_1401C2CF0+1F↑o
.std:00000001506C8658                                         ; sub_1401DC380+1F↑o ...
.std:00000001506C865A                 align 20h
.std:00000001506C8660 aDefinesIfTimeI:                        ; DATA XREF: sub_1401C2A30+1F↑o
.std:00000001506C8660                 text "UTF-16LE", 'Defines if time is included in each line in the log'
.std:00000001506C86C6                 text "UTF-16LE", ' file and in what form. Layout: [time][frame mod 10'
.std:00000001506C872C                 text "UTF-16LE", '00]',0Ah
.std:00000001506C8734                 text "UTF-16LE", '  0 = Do not display log timestamps',0Ah
.std:00000001506C877C                 text "UTF-16LE", '  1 = Log time stamps in UTC and frame time (defaul'
.std:00000001506C87E2                 text "UTF-16LE", 't) e.g. [2015.11.25-21.28.50:803][376]',0Ah
.std:00000001506C8830                 text "UTF-16LE", '  2 = Log timestamps in seconds elapsed since GStar'
.std:00000001506C8896                 text "UTF-16LE", 'tTime e.g. [0130.29][420]  3 = Log timestamps in lo'
.std:00000001506C88FC                 text "UTF-16LE", 'cal time and frame time e.g. [2017.08.04-17.59.50:8'
.std:00000001506C8962                 text "UTF-16LE", '03][420]  4 = Log timestamps with the engine',27h,'s'
.std:00000001506C89BE                 text "UTF-16LE", ' timecode and frame time e.g. [17:59:50:18][420]',0
.std:00000001506C8A20 aLogTimestamp:                          ; DATA XREF: sub_1401C2A30+34↑o
.std:00000001506C8A20                 text "UTF-16LE", 'log.Timestamp',0
.std:00000001506C8A3C                 align 20h
.std:00000001506C8A40 aDefinesIfTheCa:                        ; DATA XREF: sub_1401C27A0+1F↑o
.std:00000001506C8A40                 text "UTF-16LE", 'Defines if the categoy is included in each line in '
.std:00000001506C8AA6                 text "UTF-16LE", 'the log file and in what form.',0Ah
.std:00000001506C8AE4                 text "UTF-16LE", '  0 = Do not log category',0Ah
.std:00000001506C8B18                 text "UTF-16LE", '  2 = Log the category (default)',0
.std:00000001506C8B5A                 align 20h
.std:00000001506C8B60 aLogCategory:                           ; DATA XREF: sub_1401C27A0+34↑o
.std:00000001506C8B60                 text "UTF-16LE", 'log.Category',0
.std:00000001506C8B7A                 align 20h
.std:00000001506C8B80 off_1506C8B80   dq offset sub_140A81DF0 ; DATA XREF: sub_140A87CF0+A↑o
.std:00000001506C8B80                                         ; .std:off_155E8E040↓o
.std:00000001506C8B88                 dq offset sub_140A82A80
.std:00000001506C8B90                 dq offset sub_140A84940
.std:00000001506C8B98                 dq offset sub_140A849A0
.std:00000001506C8BA0 aUnknown_1:                             ; DATA XREF: sub_140203BA0+4B↑o
.std:00000001506C8BA0                                         ; sub_140204DD0+4B↑o ...
.std:00000001506C8BA0                 text "UTF-16LE", 'Unknown',0
.std:00000001506C8BB0 a1001:                                  ; DATA XREF: sub_140AAFC20+6B8D↑o
.std:00000001506C8BB0                                         ; sub_140AAFC20+6CF9↑o ...
.std:00000001506C8BB0                 text "UTF-16LE", '1001',0
.std:00000001506C8BBA                 align 20h
.std:00000001506C8BC0 a0101:                                  ; DATA XREF: sub_140AAFC20+70EE↑o
.std:00000001506C8BC0                 text "UTF-16LE", '0101',0
.std:00000001506C8BCA                 align 10h
.std:00000001506C8BD0 a1101:                                  ; DATA XREF: sub_140AAFC20:loc_140AB6A6C↑o
.std:00000001506C8BD0                                         ; sub_140AAFC20+70E7↑o ...
.std:00000001506C8BD0                 text "UTF-16LE", '1101',0
.std:00000001506C8BDA                 align 20h
.std:00000001506C8BE0 a1111:                                  ; DATA XREF: sub_140AAFC20:loc_140AB67C0↑o
.std:00000001506C8BE0                                         ; sub_140AAFC20:loc_140AB6A02↑o ...
.std:00000001506C8BE0                 text "UTF-16LE", '1111',0
.std:00000001506C8BEA                 align 10h
.std:00000001506C8BF0 off_1506C8BF0   dq offset sub_140A89DF0 ; DATA XREF: sub_144C13BB0+18↑o
.std:00000001506C8BF0                                         ; sub_146950C40↑o ...
.std:00000001506C8BF8                 dq offset sub_140AC7B10
.std:00000001506C8C00                 dq offset sub_150266351
.std:00000001506C8C08                 dq offset lua_setprotopageout
.std:00000001506C8C10                 dq offset lua_setprotopageout
.std:00000001506C8C18                 dq offset lua_setprotopageout
.std:00000001506C8C20                 dq offset ?Reserve@WriteBytesCount@AK@@UEAA_NJ@Z ; AK::WriteBytesCount::Reserve(long)
.std:00000001506C8C28                 dq offset ?Reserve@WriteBytesCount@AK@@UEAA_NJ@Z ; AK::WriteBytesCount::Reserve(long)
.std:00000001506C8C30                 dq offset ?Reserve@WriteBytesCount@AK@@UEAA_NJ@Z ; AK::WriteBytesCount::Reserve(long)
.std:00000001506C8C38 off_1506C8C38   dq offset sub_150266351 ; DATA XREF: sub_15037C940:loc_140A87EF0↑o
.std:00000001506C8C38                                         ; sub_140A89CE0+6↑o ...
.std:00000001506C8C40                 dq offset sub_140A89F40
.std:00000001506C8C48 aCore:                                  ; DATA XREF: sub_140895C80+B↑o
.std:00000001506C8C48                                         ; sub_140895DD0+B↑o ...
.std:00000001506C8C48                 text "UTF-16LE", 'Core',0
.std:00000001506C8C52                 align 8
.std:00000001506C8C58 off_1506C8C58   dq offset sub_140A89F70 ; DATA XREF: sub_140A89D10+6↑o
.std:00000001506C8C58                                         ; sub_140A89DA0+1A↑o ...
.std:00000001506C8C60 ; const __int64 aUnknown_0
.std:00000001506C8C60 aUnknown_0      db 'Unknown',0          ; DATA XREF: sub_1401FB7A0+EB↑o
.std:00000001506C8C60                                         ; sub_1401FB910+EB↑o ...
.std:00000001506C8C68 aD:                                     ; DATA XREF: sub_140AC7CC0+18↑o
.std:00000001506C8C68                                         ; sub_140ADFFB0:loc_140AE010A↑o ...
.std:00000001506C8C68                 text "UTF-16LE", '%d',0
.std:00000001506C8C6E                 align 10h
.std:00000001506C8C70 off_1506C8C70   dq offset sub_140A89D10 ; DATA XREF: sub_140A892D0+36↑o
.std:00000001506C8C70                                         ; sub_1428C79D0+2A↑o ...
.std:00000001506C8C78 off_1506C8C78   dq offset sub_140A89DA0 ; DATA XREF: sub_140A892D0+49↑o
.std:00000001506C8C80 off_1506C8C80   dq offset sub_140A89D70 ; DATA XREF: sub_140A897A0:loc_140A897D6↑o
.std:00000001506C8C80                                         ; sub_140A89810:loc_140A89846↑o ...
.std:00000001506C8C88                 dq offset sub_150266351
.std:00000001506C8C90 dword_1506C8C90 dd 2Dh                  ; DATA XREF: sub_140AAEE20+DA↑o
.std:00000001506C8C90                                         ; sub_140AB7200+42BB↑o ...
.std:00000001506C8C94                 align 8
.std:00000001506C8C98 aNone:                                  ; DATA XREF: sub_140349030+4B↑o
.std:00000001506C8C98                                         ; sub_14034B520+4B↑o ...
.std:00000001506C8C98                 text "UTF-16LE", 'None',0
.std:00000001506C8CA2                 align 4
.std:00000001506C8CA4 asc_1506C8CA4:                          ; DATA XREF: sub_140203840+4D↑o
.std:00000001506C8CA4                                         ; sub_14028FA60+1F↑o ...
.std:00000001506C8CA4                 text "UTF-16LE", '.',0
.std:00000001506C8CA8 aSS:                                    ; DATA XREF: sub_140AB7200+24D3↑o
.std:00000001506C8CA8                                         ; sub_140B2FA00+1C7↑o ...
.std:00000001506C8CA8                 text "UTF-16LE", '%s.%s',0
.std:00000001506C8CB4 asc_1506C8CB4:                          ; DATA XREF: sub_1402EA300+C↑o
.std:00000001506C8CB4                                         ; sub_1402EA340+C↑o ...
.std:00000001506C8CB4                 text "UTF-16LE", ' ',0
.std:00000001506C8CB8 aLocal:                                 ; DATA XREF: sub_140A8B210:loc_140A8B309↑o
.std:00000001506C8CB8                                         ; sub_14E509170+1A6↑o ...
.std:00000001506C8CB8                 text "UTF-16LE", 'Local',0
.std:00000001506C8CC4                 align 8
.std:00000001506C8CC8 aEngine_0:                              ; DATA XREF: sub_1409F6ED0+E↑o
.std:00000001506C8CC8                                         ; sub_1409F6ED0+18↑o ...
.std:00000001506C8CC8                 text "UTF-16LE", 'Engine',0
.std:00000001506C8CD6                 align 8
.std:00000001506C8CD8 off_1506C8CD8   dq offset sub_150266351 ; DATA XREF: sub_140233F00+B↑o
.std:00000001506C8CD8                                         ; sub_140233F60+B↑o ...
.std:00000001506C8CE0 off_1506C8CE0   dq offset loc_140AAAB70 ; DATA XREF: sub_140AA9CE0+1CB↑o
.std:00000001506C8CE0                                         ; sub_1410F6480+CC↑o ...
.std:00000001506C8CE8                 dq offset lua_setprotopageout
.std:00000001506C8CF0 aGame_0:                                ; DATA XREF: sub_1409BD5B0+4B↑o
.std:00000001506C8CF0                                         ; sub_140AAD1C0+16B↑o ...
.std:00000001506C8CF0                 text "UTF-16LE", 'Game',0
.std:00000001506C8CFA                 align 20h
.std:00000001506C8D00 aLandscape:                             ; DATA XREF: sub_1409807B0+B↑o
.std:00000001506C8D00                                         ; sub_140980A00+E↑o ...
.std:00000001506C8D00                 text "UTF-16LE", 'Landscape',0
.std:00000001506C8D14                 align 8
.std:00000001506C8D18 aAudio:                                 ; DATA XREF: sub_140AB7200+84C9↑o
.std:00000001506C8D18                                         ; sub_142983A20+1DF↑o ...
.std:00000001506C8D18                 text "UTF-16LE", 'Audio',0
.std:00000001506C8D24                 align 8
.std:00000001506C8D28 off_1506C8D28   dq offset sub_150266351 ; DATA XREF: sub_142866960+3D↑o
.std:00000001506C8D28                                         ; sub_142866C50+29↑o ...
.std:00000001506C8D30                 dq offset sub_150266351
.std:00000001506C8D38                 dq offset sub_150266351
.std:00000001506C8D40                 dq offset sub_150266351
.std:00000001506C8D48                 dq offset sub_140A81AF0
.std:00000001506C8D50                 dq offset sub_150266351
.std:00000001506C8D58                 dq offset sub_150266351
.std:00000001506C8D60                 dq offset sub_140A81B10
.std:00000001506C8D68                 dq offset sub_150266351
.std:00000001506C8D70                 dq offset sub_150266351
.std:00000001506C8D78 off_1506C8D78   dq offset sub_150266351 ; DATA XREF: sub_142866960+4C↑o
.std:00000001506C8D78                                         ; sub_142866C50+38↑o ...
.std:00000001506C8D80                 dq offset sub_150266351
.std:00000001506C8D88                 dq offset sub_150266351
.std:00000001506C8D90                 dq offset sub_150266351
.std:00000001506C8D98                 dq offset sub_140A81AF0
.std:00000001506C8DA0                 dq offset sub_150266351
.std:00000001506C8DA8                 dq offset sub_150266351
.std:00000001506C8DB0                 dq offset sub_140A81B10
.std:00000001506C8DB8                 dq offset sub_150266351
.std:00000001506C8DC0                 dq offset sub_150266351
.std:00000001506C8DC8                 dq offset sub_150266351
.std:00000001506C8DD0 unk_1506C8DD0   db  22h ; "             ; DATA XREF: sub_140AC47F0+467↑o
.std:00000001506C8DD0                                         ; sub_140AC47F0+660↑o ...
.std:00000001506C8DD1                 db    0
.std:00000001506C8DD2                 db    0
.std:00000001506C8DD3                 db    0
.std:00000001506C8DD4                 db    0
.std:00000001506C8DD5                 db    0
.std:00000001506C8DD6                 db    0
.std:00000001506C8DD7                 db    0
.std:00000001506C8DD8                 db    0
.std:00000001506C8DD9                 db    0
.std:00000001506C8DDA                 db    0
.std:00000001506C8DDB                 db    0
.std:00000001506C8DDC                 db    0
.std:00000001506C8DDD                 db    0
.std:00000001506C8DDE                 db    0
.std:00000001506C8DDF                 db    0
.std:00000001506C8DE0 aNewobjectWithE:                        ; DATA XREF: sub_140A862D0+41↑o
.std:00000001506C8DE0                                         ; sub_140AAFC20+6929↑o ...
.std:00000001506C8DE0                 text "UTF-16LE", 'NewObject with empty name can',27h,'t be used to cr'
.std:00000001506C8E3A                 text "UTF-16LE", 'eate default subobjects (inside of UObject derived '
.std:00000001506C8EA0                 text "UTF-16LE", 'class constructor) as it produces inconsistent obje'
.std:00000001506C8F06                 text "UTF-16LE", 'ct names. Use ObjectInitializer.CreateDefaultSuobje'
.std:00000001506C8F6C                 text "UTF-16LE", 'ct<> instead.',0
.std:00000001506C8F88 aFalse:                                 ; DATA XREF: sub_140895C80+4↑o
.std:00000001506C8F88                                         ; sub_140895C80+12↑o ...
.std:00000001506C8F88                 text "UTF-16LE", 'False',0
.std:00000001506C8F94                 align 8
.std:00000001506C8F98 aTrue:                                  ; DATA XREF: sub_140895F00+4↑o
.std:00000001506C8F98                                         ; sub_140895F00+12↑o ...
.std:00000001506C8F98                 text "UTF-16LE", 'True',0
.std:00000001506C8FA2                 align 4
.std:00000001506C8FA4 asc_1506C8FA4:                          ; DATA XREF: sub_140A88D00+79↑o
.std:00000001506C8FA4                                         ; sub_140AA9FF0+76↑o ...
.std:00000001506C8FA4                 text "UTF-16LE", ':',0
.std:00000001506C8FA8                 align 10h
.std:00000001506C8FB0 aDHotpatchexev3_0 db 'D:/HotPatchExeV3_Ma1_GL_Release_A/Build_Ma1Release/EngineSource/E'
.std:00000001506C8FB0                                         ; DATA XREF: sub_140AA9FF0+DA↑o
.std:00000001506C8FB0                                         ; sub_140AAA530+DD↑o
.std:00000001506C8FF1                 db 'ngine/Source/Runtime/Launch/Private/Launch.cpp',0
.std:00000001506C9020 aEnginepreinit  db 'EnginePreInit',0    ; DATA XREF: sub_140AAA530+397↑o
.std:00000001506C902E                 align 10h
.std:00000001506C9030 aEngineinit     db 'EngineInit',0       ; DATA XREF: sub_140AA9FF0+390↑o
.std:00000001506C903B                 align 20h
.std:00000001506C9040 aEngineexitWasC:                        ; DATA XREF: sub_140AAC0A0:loc_140AAC505↑o
.std:00000001506C9040                 text "UTF-16LE", 'EngineExit() was called',0
.std:00000001506C9070 aDefaultmain    db 'DefaultMain',0      ; DATA XREF: sub_140AAC0A0+2D↑o
.std:00000001506C907C                 align 20h
.std:00000001506C9080 aUnrealVISDmp:                          ; DATA XREF: sub_140AAC0A0+89↑o
.std:00000001506C9080                 text "UTF-16LE", 'unreal-v%i-%s.dmp',0
.std:00000001506C90A4                 align 8
.std:00000001506C90A8 aEngineinitLoad:                        ; DATA XREF: sub_140AAC0A0+17F↑o
.std:00000001506C90A8                 text "UTF-16LE", 'EngineInit_Loading',0
.std:00000001506C90CE                 align 10h
.std:00000001506C90D0 aEngineinit_0:                          ; DATA XREF: sub_140AAC0A0+186↑o
.std:00000001506C90D0                 text "UTF-16LE", 'EngineInit',0
.std:00000001506C90E6                 align 8
.std:00000001506C90E8 aLoading_0:                             ; DATA XREF: sub_140AAC0A0+18D↑o
.std:00000001506C90E8                                         ; sub_141359260+5D↑o
.std:00000001506C90E8                 text "UTF-16LE", 'Loading...',0
.std:00000001506C90FE                 align 20h
.std:00000001506C9100 aEngineInit:                            ; DATA XREF: sub_140AAC0A0+23D↑o
.std:00000001506C9100                                         ; sub_140AAC0A0+2E0↑o
.std:00000001506C9100                 text "UTF-16LE", 'Engine Init',0
.std:00000001506C9118                 align 20h
.std:00000001506C9120 aEngineInitiali:                        ; DATA XREF: sub_140AAC0A0+3FB↑o
.std:00000001506C9120                 text "UTF-16LE", '(Engine Initialization) Total time: %.2f seconds',0
.std:00000001506C9182                 align 8
.std:00000001506C9188 aTickLoopStarti db 'Tick loop starting',0
.std:00000001506C9188                                         ; DATA XREF: sub_140AAC0A0:loc_140AAC4CB↑o
.std:00000001506C919B                 align 20h
.std:00000001506C91A0 aPakfile:                               ; DATA XREF: sub_1409A36C0+E↑o
.std:00000001506C91A0                                         ; sub_1409A36C0+18↑o ...
.std:00000001506C91A0                 text "UTF-16LE", 'PakFile',0
.std:00000001506C91B0 off_1506C91B0   dq offset sub_140A81DC0 ; DATA XREF: sub_140AB7200+7AC7↑o
.std:00000001506C91B0                                         ; sub_14E3F23A0+65↑o
.std:00000001506C91B8                 dq offset lua_setprotopageout
.std:00000001506C91C0                 dq offset lua_setprotopageout
.std:00000001506C91C8                 dq offset lua_setprotopageout
.std:00000001506C91D0                 dq offset lua_setprotopageout
.std:00000001506C91D8                 dq offset ?OnNoticeExtract@GCloudDolphinCallBack@GCloud@@UEAA_NXZ ; GCloud::GCloudDolphinCallBack::OnNoticeExtract(void)
.std:00000001506C91E0                 dq offset ?OnNoticeExtract@GCloudDolphinCallBack@GCloud@@UEAA_NXZ ; GCloud::GCloudDolphinCallBack::OnNoticeExtract(void)
.std:00000001506C91E8                 dq offset ?Reserve@WriteBytesCount@AK@@UEAA_NJ@Z ; AK::WriteBytesCount::Reserve(long)
.std:00000001506C91F0                 dq offset sub_14E7D3E10
.std:00000001506C91F8                 dq offset sub_14E7D58C0
.std:00000001506C9200                 dq offset sub_140ACFAD0
.std:00000001506C9208                 dq offset sub_140ACFAD0
.std:00000001506C9210                 dq offset sub_14E7D6380
.std:00000001506C9218 aHotreload      db 'HotReload',0        ; DATA XREF: sub_140AAB9C0+3CF↑o
.std:00000001506C9218                                         ; sub_140F53A10+206↑o ...
.std:00000001506C9222                 align 8
.std:00000001506C9228 aMessaging_0    db 'Messaging',0        ; DATA XREF: sub_140AADED0+2E8↑o
.std:00000001506C9228                                         ; sub_1429ED580+94↑o ...
.std:00000001506C9232                 align 8
.std:00000001506C9238 off_1506C9238   dq offset sub_150266351 ; DATA XREF: sub_140A89D40+6↑o
.std:00000001506C9238                                         ; sub_141656780+6↑o ...
.std:00000001506C9240                 dq offset sub_140A89D40
.std:00000001506C9248 off_1506C9248   dq offset sub_14EE87770 ; DATA XREF: sub_140A81DF0+93A↑o
.std:00000001506C9250                 dq offset sub_140A89D40
.std:00000001506C9258 aHmd_0:                                 ; DATA XREF: sub_14095DD70+6↑o
.std:00000001506C9258                                         ; sub_140AAF7D0+41D↑o ...
.std:00000001506C9258                 text "UTF-16LE", 'HMD',0
.std:00000001506C9260 off_1506C9260   dq offset sub_140A89E50 ; DATA XREF: sub_140A89E50+6↑o
.std:00000001506C9260                                         ; sub_140A8B660+42↑o
.std:00000001506C9268                 dq offset sub_14D9E90D0
.std:00000001506C9270 off_1506C9270   dq offset sub_140A89E20 ; DATA XREF: sub_140A871C0+6↑o
.std:00000001506C9278                 dq offset sub_140AC7B10
.std:00000001506C9280                 dq offset sub_140AC7B20
.std:00000001506C9288                 dq offset lua_setprotopageout
.std:00000001506C9290                 dq offset lua_setprotopageout
.std:00000001506C9298                 dq offset lua_setprotopageout
.std:00000001506C92A0                 dq offset ?Reserve@WriteBytesCount@AK@@UEAA_NJ@Z ; AK::WriteBytesCount::Reserve(long)
.std:00000001506C92A8                 dq offset ?OnNoticeExtract@GCloudDolphinCallBack@GCloud@@UEAA_NXZ ; GCloud::GCloudDolphinCallBack::OnNoticeExtract(void)
.std:00000001506C92B0                 dq offset ?Reserve@WriteBytesCount@AK@@UEAA_NJ@Z ; AK::WriteBytesCount::Reserve(long)
.std:00000001506C92B8 aGenericconsole:                        ; DATA XREF: sub_140A871C0+46↑o
.std:00000001506C92B8                 text "UTF-16LE", 'GenericConsoleOutput',0
.std:00000001506C92E2                 align 8
.std:00000001506C92E8 aAllowstdoutlog:                        ; DATA XREF: sub_140A871C0+67↑o
.std:00000001506C92E8                 text "UTF-16LE", 'AllowStdOutLogVerbosity',0
.std:00000001506C9318 aFullstdoutlogo:                        ; DATA XREF: sub_140A871C0+83↑o
.std:00000001506C9318                 text "UTF-16LE", 'FullStdOutLogOutput',0
.std:00000001506C9340 aS_0:                                   ; DATA XREF: sub_140AC7B20+140↑o
.std:00000001506C9340                                         ; sub_140BE6DA0+EF↑o ...
.std:00000001506C9340                 text "UTF-16LE", '%s',0Ah,0
.std:00000001506C9348 off_1506C9348   dq offset sub_140A89C70 ; DATA XREF: sub_140A89C70+A↑o
.std:00000001506C9348                                         ; sub_140A8C820+127↑o ...
.std:00000001506C9350                 dq offset sub_140AAB8B0
.std:00000001506C9358 aUe4game:                               ; DATA XREF: sub_140AAD500:loc_140AAD83A↑o
.std:00000001506C9358                 text "UTF-16LE", 'UE4Game',0
.std:00000001506C9368 asc_1506C9368:                          ; DATA XREF: sub_140AAD500:loc_140AADAA9↑o
.std:00000001506C9368                                         ; sub_142403440:loc_1424036AD↑o ...
.std:00000001506C9368                 text "UTF-16LE", '..',0
.std:00000001506C936E                 align 10h
.std:00000001506C9370 aRunningEngineF:                        ; DATA XREF: sub_140AAD500+76B↑o
.std:00000001506C9370                 text "UTF-16LE", 'Running engine for game: %s',0
.std:00000001506C93A8                 align 10h
.std:00000001506C93B0 aNonAgnosticGam:                        ; DATA XREF: sub_140AAD500:loc_140AADC9C↑o
.std:00000001506C93B0                 text "UTF-16LE", 'Non-agnostic games on cooked platforms require a up'
.std:00000001506C9416                 text "UTF-16LE", 'roject file be specified.',0
.std:00000001506C944A                 align 10h
.std:00000001506C9450 aNonAgnosticGam_0:                      ; DATA XREF: sub_140AAD500+88A↑o
.std:00000001506C9450                 text "UTF-16LE", 'Non-agnostic games cannot load projects on cooked p'
.std:00000001506C94B6                 text "UTF-16LE", 'latforms - try running UE4Game.',0
.std:00000001506C94F6                 align 8
.std:00000001506C94F8 aCouldNotSetGam:                        ; DATA XREF: sub_140AAD500:loc_140AADE15↑o
.std:00000001506C94F8                 text "UTF-16LE", 'Could not set game name!',0
.std:00000001506C952A                 align 10h
.std:00000001506C9530 aMismatchedgame:                        ; DATA XREF: sub_140AAC9E0+324↑o
.std:00000001506C9530                 text "UTF-16LE", 'MismatchedGameNames',0
.std:00000001506C9558                 align 20h
.std:00000001506C9560 aTheNameOfTheUp:                        ; DATA XREF: sub_140AAC9E0+335↑o
.std:00000001506C9560                 text "UTF-16LE", 'The name of the .uproject file (',27h,'{0}',27h,') '
.std:00000001506C95AE                 text "UTF-16LE", 'must match the name of the project passed in the co'
.std:00000001506C9614                 text "UTF-16LE", 'mmand line (',27h,'{1}',27h,').',0
.std:00000001506C963C aS:                                     ; DATA XREF: sub_140AAC9E0+655↑o
.std:00000001506C963C                                         ; sub_140AAFC20+6B86↑o ...
.std:00000001506C963C                 text "UTF-16LE", '%s',0
.std:00000001506C9642                 align 8
.std:00000001506C9648 aCachedreadfile:                        ; DATA XREF: sub_140AAC800+9A↑o
.std:00000001506C9648                                         ; sub_14C7AF360↑o ...
.std:00000001506C9648                 text "UTF-16LE", 'CachedReadFile',0
.std:00000001506C9666                 align 8
.std:00000001506C9668 aSandboxfile:                           ; DATA XREF: sub_140A41870+E↑o
.std:00000001506C9668                                         ; sub_140A41870+18↑o ...
.std:00000001506C9668                 text "UTF-16LE", 'SandboxFile',0
.std:00000001506C9680 aLogfile:                               ; DATA XREF: sub_140AAC800+158↑o
.std:00000001506C9680                                         ; sub_14C7AF420↑o ...
.std:00000001506C9680                 text "UTF-16LE", 'LogFile',0
.std:00000001506C9690 aFailedToDeterm:                        ; DATA XREF: sub_140AAC710+C1↑o
.std:00000001506C9690                 text "UTF-16LE", 'Failed to determine if OSS is server in PIE, OSS re'
.std:00000001506C96F6                 text "UTF-16LE", 'quests will fail',0
.std:00000001506C9718                 align 20h
.std:00000001506C9720 aApplifetimeApp_1:                      ; DATA XREF: sub_140A8ADC0+D↑o
.std:00000001506C9720                 text "UTF-16LE", 'AppLifetime: Application will deactivate',0
.std:00000001506C9772                 align 20h
.std:00000001506C9780 aApplifetimeApp_0:                      ; DATA XREF: sub_140A8A100+D↑o
.std:00000001506C9780                 text "UTF-16LE", 'AppLifetime: Application has reactivated',0
.std:00000001506C97D2                 align 20h
.std:00000001506C97E0 aApplifetimeApp_2:                      ; DATA XREF: sub_140A8AE00+D↑o
.std:00000001506C97E0                 text "UTF-16LE", 'AppLifetime: Application will enter background',0
.std:00000001506C983E                 align 20h
.std:00000001506C9840 aApplifetimeApp:                        ; DATA XREF: sub_140A8A0C0+D↑o
.std:00000001506C9840                 text "UTF-16LE", 'AppLifetime: Application has entered foreground',0
.std:00000001506C98A0 off_1506C98A0   dq offset PxLib_start_UE4_PixUI
.std:00000001506C98A0                                         ; DATA XREF: sub_1401C2820+A1↑o
.std:00000001506C98A0                                         ; sub_1401D6770+AF↑o ...
.std:00000001506C98A8                 dq offset PxLib_start_UE4_PixUI
.std:00000001506C98B0                 dq offset ?GetIsolate@Context@v8_qjs@@QEAAPEAVIsolate@2@XZ ; v8_qjs::Context::GetIsolate(void)
.std:00000001506C98B8                 dq offset ?Reserve@WriteBytesCount@AK@@UEAA_NJ@Z ; AK::WriteBytesCount::Reserve(long)
.std:00000001506C98C0                 dq offset sub_140A81AF0
.std:00000001506C98C8                 dq offset ?OnNoticeExtract@GCloudDolphinCallBack@GCloud@@UEAA_NXZ ; GCloud::GCloudDolphinCallBack::OnNoticeExtract(void)
.std:00000001506C98D0                 dq offset sub_140AAC090
.std:00000001506C98D8                 dq offset sub_140A89710
.std:00000001506C98E0                 dq offset sub_140A8B920
.std:00000001506C98E8                 dq offset sub_140AAAB30
.std:00000001506C98F0                 dq offset sub_150266351
.std:00000001506C98F8 off_1506C98F8   dq offset PxLib_start_UE4_PixUI
.std:00000001506C98F8                                         ; DATA XREF: sub_1401C2820+BF↑o
.std:00000001506C98F8                                         ; sub_1401D6770+CD↑o ...
.std:00000001506C9900                 dq offset PxLib_start_UE4_PixUI
.std:00000001506C9908                 dq offset ?GetIsolate@Context@v8_qjs@@QEAAPEAVIsolate@2@XZ ; v8_qjs::Context::GetIsolate(void)
.std:00000001506C9910                 dq offset ?Reserve@WriteBytesCount@AK@@UEAA_NJ@Z ; AK::WriteBytesCount::Reserve(long)
.std:00000001506C9918                 dq offset sub_140A81AF0
.std:00000001506C9920                 dq offset ?OnNoticeExtract@GCloudDolphinCallBack@GCloud@@UEAA_NXZ ; GCloud::GCloudDolphinCallBack::OnNoticeExtract(void)
.std:00000001506C9928                 dq offset sub_140AAC090
.std:00000001506C9930                 dq offset sub_140A89710
.std:00000001506C9938                 dq offset sub_140A8B920
.std:00000001506C9940                 dq offset sub_140AAAB30
.std:00000001506C9948                 dq offset sub_140AAADC0
.std:00000001506C9950 aDHotpatchexev3 db 'D:/HotPatchExeV3_Ma1_GL_Release_A/Build_Ma1Release/EngineSource/E'
.std:00000001506C9950                                         ; DATA XREF: sub_140A88D00+DD↑o
.std:00000001506C9950                                         ; sub_140AAF260+E5↑o ...
.std:00000001506C9991                 db 'ngine/Source/Runtime/Launch/Private/LaunchEngineLoop.cpp',0
.std:00000001506C99CA                 align 10h
.std:00000001506C99D0 aInpackagelocal db 'InPackageLocalizationManager.InitializeFromCache()',0
.std:00000001506C99D0                                         ; DATA XREF: sub_140A88D00+398↑o
.std:00000001506C9A03                 align 8
.std:00000001506C9A08 aPreinitprestar db 'PreInitPreStartupScreen',0
.std:00000001506C9A08                                         ; DATA XREF: sub_140AB7200+221↑o
.std:00000001506C9A20 aFengineloopPre db 'FEngineLoop::PreInit',0
.std:00000001506C9A20                                         ; DATA XREF: sub_140AAF260+39F↑o
.std:00000001506C9A20                                         ; sub_140AB7200+34B↑o
.std:00000001506C9A35                 align 8
.std:00000001506C9A38 aPriorityclass_0:                       ; DATA XREF: sub_140AB7200+376↑o
.std:00000001506C9A38                 text "UTF-16LE", '-priorityclass=',0
.std:00000001506C9A58                 align 20h
.std:00000001506C9A60 aFengineloopPre_0:                      ; DATA XREF: sub_140AB7200+3BF↑o
.std:00000001506C9A60                 text "UTF-16LE", 'FEngineLoop::PreInitPreStartupScreen, PriorityClass'
.std:00000001506C9AC6                 text "UTF-16LE", ': %s',0
.std:00000001506C9AD0 byte_1506C9AD0  db 44h                  ; DATA XREF: sub_140AB7200:loc_140AB7670↑r
.std:00000001506C9AD1                 align 2
```
