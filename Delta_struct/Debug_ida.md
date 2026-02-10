
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
