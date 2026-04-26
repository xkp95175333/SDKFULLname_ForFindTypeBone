---
OffsetArray_AddrNew_WorldID
--- 
```c


__int64 __fastcall sub_141097940(float *a1, __int64 a2, float a3)
{
  float v4; // xmm2_4
  float v5; // xmm5_4
  float v6; // xmm4_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  __int64 result; // rax
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm3_4

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  v4 = (float)((float)(*a1 * *a1) + (float)(a1[1] * a1[1])) + (float)(a1[2] * a1[2]);
  v5 = (float)((float)(a1[4] * a1[4]) + (float)(a1[5] * a1[5])) + (float)(a1[6] * a1[6]);
  v6 = (float)((float)(a1[8] * a1[8]) + (float)(a1[9] * a1[9])) + (float)(a1[0xA] * a1[0xA]);
  if ( v4 > a3 )
  {
    v7 = fsqrt(v4);
    *(float *)a2 = v7;
    v8 = (float)(1.0 / v7) * a1[1];
    v9 = (float)(1.0 / v7) * a1[2];
    *a1 = (float)(1.0 / v7) * *a1;
    a1[1] = v8;
    a1[2] = v9;
  }
  if ( v5 <= a3 )
  {
    *(_DWORD *)(a2 + 4) = 0;
  }
  else
  {
    v10 = fsqrt(v5);
    *(float *)(a2 + 4) = v10;
    v11 = (float)(1.0 / v10) * a1[5];
    v12 = (float)(1.0 / v10) * a1[6];
    a1[4] = (float)(1.0 / v10) * a1[4];
    a1[5] = v11;
    a1[6] = v12;
  }
  if ( v6 <= a3 )
  {
    *(_DWORD *)(a2 + 8) = 0;
    return a2;
  }
  else
  {
    result = a2;
    v14 = fsqrt(v6);
    *(float *)(a2 + 8) = v14;
    v15 = (float)(1.0 / v14) * a1[9];
    v16 = (float)(1.0 / v14) * a1[0xA];
    a1[8] = (float)(1.0 / v14) * a1[8];
    a1[9] = v15;
    a1[0xA] = v16;
  }
  return result;
}

```

```h
00000000 struct _GUID // sizeof=0x10
00000000 {
00000000     unsigned int Data1;
00000004     unsigned __int16 Data2;
00000006     unsigned __int16 Data3;
00000008     unsigned __int8 Data4[8];
00000010 };

00000010 typedef struct _GUID GUID;              // XREF: .std:000000015B366004/r

00000000 struct RUNTIME_FUNCTION // sizeof=0xC
00000000 {                                       // XREF: .std:0000000158387D20/r
00000000                                         // .std:0000000158387D30/r ...
00000000     void *__ptr32 FunctionStart __offset(OFF64|RVAOFF);
00000004     void *__ptr32 FunctionEnd __offset(OFF64|RVAOFF|PASTEND);
00000004                                         // XREF: sub_152564107+6A/w
00000008     void *__ptr32 UnwindInfo __offset(OFF64|RVAOFF);
00000008                                         // XREF: HEADER:0000000140000390/o
00000008                                         // sub_151C946D8:loc_151C94721/w
0000000C };

00000000 struct UNWIND_INFO_HDR // sizeof=0x4
00000000 {                                       // XREF: .std:0000000158387CF0/r
00000000                                         // .std:0000000158387D04/r ...
00000000     char Ver3_Flags __hex;
00000001     char PrologSize __hex;
00000002     char CntUnwindCodes __hex;
00000003     char FrReg_FrRegOff __hex;
00000004 };

00000000 struct UNWIND_CODE // sizeof=0x2
00000000 {                                       // XREF: .std:0000000158387CF4/r
00000000                                         // .std:0000000158387CF8/r ...
00000000     char PrologOff;
00000001.0   __int8 UnwindOp : 4 __udec;
00000001.4   __int8 OpInfo : 4 __udec;
00000002 };

00000000 struct FuncInfo // sizeof=0x28
00000000 {                                       // XREF: .std:0000000157E40EA0/r
00000000                                         // .std:0000000157E40F40/r ...
00000000     int magicNumber __hex;              // XREF: sub_151BD48CA-440D1/w
00000004     int maxState __dec;
00000008     void *__ptr32 pUnwindMap __offset(OFF64|RVAOFF);
0000000C     int nTryBlocks __dec;
00000010     void *__ptr32 pTryBlockMap __offset(OFF64|RVAOFF);
00000014     int nIPMapEntries __dec;
00000018     void *__ptr32 pIPtoStateMap __offset(OFF64|RVAOFF);
0000001C     int dispUnwindHelp __dec;
00000020     void *__ptr32 pESTypeList __offset(OFF64|RVAOFF);
00000024     int EHFlags __hex;
00000028 };

00000000 struct UnwindMapEntry // sizeof=0x8
00000000 {                                       // XREF: .std:0000000158AEE7F0/r
00000000                                         // .std:0000000158AEE7F8/r ...
00000000     int toState __dec;
00000004     void *__ptr32 action __offset(OFF64|RVAOFF);
00000008 };

00000000 struct IPtoStateMap // sizeof=0x8
00000000 {                                       // XREF: .std:0000000158AEE7D0/r
00000000                                         // .std:0000000158AEE860/r ...
00000000     void *__ptr32 pc __offset(OFF64|RVAOFF);
00000004     int state __dec;
00000008 };

00000000 struct TryBlockMapEntry // sizeof=0x14
00000000 {                                       // XREF: .std:0000000158AEE810/r
00000000                                         // .std:0000000158AEE824/r ...
00000000     int tryLow __dec;
00000004     int tryHigh __dec;
00000008     int catchHigh __dec;
0000000C     int nCatches __dec;
00000010     void *__ptr32 pHandlerArray __offset(OFF64|RVAOFF);
00000014 };

00000000 struct HandlerType // sizeof=0x14
00000000 {                                       // XREF: .std:0000000158AEE838/r
00000000                                         // .std:0000000158AEE84C/r ...
00000000     int adjectives __hex;
00000004     void *__ptr32 pType __offset(OFF64|RVAOFF);
00000008     int dispCatchObj __dec;
0000000C     void *__ptr32 addressOfHandler __offset(OFF64|RVAOFF);
00000010     int dispFrame __dec;
00000014 };
```
---
BaseAddressDllHide   140000000h  is ProcessBaseAddress And  1400002E8  Dll map Table Fun Name 

---

```asm
HEADER:0000000140000000                         ; IMAGE_DOS_HEADER
HEADER:0000000140000000                         ; ===========================================================================
HEADER:0000000140000000
HEADER:0000000140000000                         ; Segment type: Pure data
HEADER:0000000140000000                         HEADER          segment page public 'DATA' use64
HEADER:0000000140000000                                         assume cs:HEADER
HEADER:0000000140000000                                         ;org 140000000h
HEADER:0000000140000000 4D 5A                   __ImageBase     dw 5A4Dh                ; DATA XREF: HEADER:off_14000003C↓o
HEADER:0000000140000000                                                                 ; HEADER:0000000140000310↓o ...
HEADER:0000000140000000                                                                 ; PE magic number
HEADER:0000000140000002 90 00                   word_140000002  dw 90h                  ; DATA XREF: sub_152B5D3B4+D6↓o
HEADER:0000000140000002                                                                 ; Bytes on last page of file
HEADER:0000000140000004 03 00                                   dw 3                    ; Pages in file
HEADER:0000000140000006 00 00                                   dw 0                    ; Relocations
HEADER:0000000140000008 04 00                                   dw 4                    ; Size of header in paragraphs
HEADER:000000014000000A 00 00                                   dw 0                    ; Minimum extra paragraphs needed
HEADER:000000014000000C FF FF                                   dw 0FFFFh               ; Maximum extra paragraphs needed
HEADER:000000014000000E 00 00                                   dw 0                    ; Initial (relative) SS value
HEADER:0000000140000010 B8 00                                   dw 0B8h                 ; Initial SP value
HEADER:0000000140000012 00 00                                   dw 0                    ; Checksum
HEADER:0000000140000014 00 00                                   dw 0                    ; Initial IP value
HEADER:0000000140000016 00 00                                   dw 0                    ; Initial (relative) CS value
HEADER:0000000140000018 40 00                   word_140000018  dw 40h                  ; DATA XREF: sub_14EF67920+6D↓o
HEADER:0000000140000018                                                                 ; File address of relocation table
HEADER:000000014000001A 00 00                                   dw 0                    ; Overlay number
HEADER:000000014000001C 08 74 77 1A 48 00 00 00                 dw 7408h, 1A77h, 48h, 0 ; Reserved words
HEADER:0000000140000024 00 00                                   dw 0                    ; OEM identifier (for e_oeminfo)
HEADER:0000000140000026 00 00                                   dw 0                    ; OEM information; e_oemid specific
HEADER:0000000140000028 00 00 00 00 00 00 00 00…                dw 0Ah dup(0)           ; Reserved words
HEADER:000000014000003C E8 02 00 00             off_14000003C   dd offset dword_1400002E8 - offset __ImageBase
HEADER:000000014000003C                                                                 ; DATA XREF: sub_14EF67920+5D↓r
HEADER:000000014000003C                                                                 ; sub_152B55F48+15↓r ...
HEADER:000000014000003C                                                                 ; File address of new exe header
HEADER:0000000140000040 0E 1F BA 0E 00 B4 09 CD…                db 0Eh, 1Fh, 0BAh, 0Eh, 0, 0B4h, 9, 0CDh, 21h, 0B8h, 1 ; DOS Stub code
HEADER:0000000140000040 0E 1F BA 0E 00 B4 09 CD…                db 0Eh, 1Fh, 0BAh, 0Eh, 0, 0B4h, 9, 0CDh, 21h, 0B8h, 1 ; DOS Stub code
HEADER:000000014000004B 4C CD 21 54 68 69 73 20…                db 4Ch, 0CDh, 21h, 54h, 68h, 69h, 73h, 20h, 70h, 72h, 6Fh
HEADER:0000000140000056 67 72 61 6D 20 63 61 6E…                db 67h, 72h, 61h, 6Dh, 20h, 63h, 61h, 2 dup(6Eh), 6Fh
HEADER:0000000140000060 74 20 62 65 20 72 75 6E…                db 74h, 20h, 62h, 65h, 20h, 72h, 75h, 6Eh, 20h, 69h, 6Eh
HEADER:000000014000006B 20 44 4F 53 20 6D 6F 64…                db 20h, 44h, 4Fh, 53h, 20h, 6Dh, 6Fh, 64h, 65h, 2Eh, 2 dup(0Dh)
HEADER:0000000140000077 0A 24 00 00 00 00 00 00…                db 0Ah, 24h, 7 dup(0), 4Fh, 0A9h, 4Ah, 28h, 0Bh, 0C8h
HEADER:0000000140000086 24 7B 0B C8 24 7B 0B C8…                db 24h, 7Bh, 0Bh, 0C8h, 24h, 7Bh, 0Bh, 0C8h, 24h, 7Bh
HEADER:0000000140000090 02 B0 B7 7B 1D C8 24 7B…                db 2, 0B0h, 0B7h, 7Bh, 1Dh, 0C8h, 24h, 7Bh, 40h, 0B0h
HEADER:000000014000009A 21 7A 09 C8 24 7B C8 4B…                db 21h, 7Ah, 9, 0C8h, 24h, 7Bh, 0C8h, 4Bh, 0D9h, 7Bh, 0
HEADER:00000001400000A5 C8 24 7B C8 4B 20 7A 01…                db 0C8h, 24h, 7Bh, 0C8h, 4Bh, 20h, 7Ah, 1, 0C8h, 24h, 7Bh
HEADER:00000001400000B0 C8 4B 27 7A 2D C8 24 7B…                db 0C8h, 4Bh, 27h, 7Ah, 2Dh, 0C8h, 24h, 7Bh, 0C8h, 4Bh
HEADER:00000001400000BA 25 7A 0D C8 24 7B 6D 26…                db 25h, 7Ah, 0Dh, 0C8h, 24h, 7Bh, 6Dh, 26h, 0EAh, 7Bh
HEADER:00000001400000C4 8E C8 24 7B 80 41 20 7A…                db 8Eh, 0C8h, 24h, 7Bh, 80h, 41h, 20h, 7Ah, 0Fh, 0C8h
HEADER:00000001400000CE 24 7B 64 AC 25 7A 0F C8…                db 24h, 7Bh, 64h, 0ACh, 25h, 7Ah, 0Fh, 0C8h, 24h, 7Bh
HEADER:00000001400000D8 67 A0 20 7A 0D C8 24 7B…                db 67h, 0A0h, 20h, 7Ah, 0Dh, 0C8h, 24h, 7Bh, 5Ah, 90h
HEADER:00000001400000E2 20 7A 05 C8 24 7B 76 B1…                db 20h, 7Ah, 5, 0C8h, 24h, 7Bh, 76h, 0B1h, 0C4h, 7Bh, 0Ah
HEADER:00000001400000ED C8 24 7B 93 A1 21 7A 0E…                db 0C8h, 24h, 7Bh, 93h, 0A1h, 21h, 7Ah, 0Eh, 0C8h, 24h
HEADER:00000001400000F7 7B B2 BD 27 7A 0F C8 24…                db 7Bh, 0B2h, 0BDh, 27h, 7Ah, 0Fh, 0C8h, 24h, 7Bh, 0B2h
HEADER:0000000140000101 BD 20 7A 08 C8 24 7B 99…                db 0BDh, 20h, 7Ah, 8, 0C8h, 24h, 7Bh, 99h, 0A1h, 20h, 7Ah
HEADER:000000014000010C 0A C8 24 7B 99 A1 21 7A…                db 0Ah, 0C8h, 24h, 7Bh, 99h, 0A1h, 21h, 7Ah, 42h, 0C8h
HEADER:0000000140000116 24 7B BE BD 21 7A 3D C8…                db 24h, 7Bh, 0BEh, 0BDh, 21h, 7Ah, 3Dh, 0C8h, 24h, 7Bh
HEADER:0000000140000120 F1 4F 25 7A 09 C8 24 7B…                db 0F1h, 4Fh, 25h, 7Ah, 9, 0C8h, 24h, 7Bh, 0B7h, 0BDh
HEADER:000000014000012A 21 7A 08 C8 24 7B 64 49…                db 21h, 7Ah, 8, 0C8h, 24h, 7Bh, 64h, 49h, 20h, 7Ah, 0Ah
HEADER:0000000140000135 C8 24 7B 64 49 21 7A 1B…                db 0C8h, 24h, 7Bh, 64h, 49h, 21h, 7Ah, 1Bh, 0C8h, 24h
HEADER:000000014000013F 7B 93 A1 20 7A 3F CA 24…                db 7Bh, 93h, 0A1h, 20h, 7Ah, 3Fh, 0CAh, 24h, 7Bh, 9Dh
HEADER:0000000140000149 41 27 7A 0C C8 24 7B 9D…                db 41h, 27h, 7Ah, 0Ch, 0C8h, 24h, 7Bh, 9Dh, 41h, 21h, 7Ah
HEADER:0000000140000154 0A C8 24 7B 9D A1 25 7A…                db 0Ah, 0C8h, 24h, 7Bh, 9Dh, 0A1h, 25h, 7Ah, 9, 0C8h, 24h
HEADER:000000014000015F 7B 67 A0 25 7A 09 C8 24…                db 7Bh, 67h, 0A0h, 25h, 7Ah, 9, 0C8h, 24h, 7Bh, 0D2h, 0B5h
HEADER:000000014000016A 25 7A 09 C8 24 7B 9C 96…                db 25h, 7Ah, 9, 0C8h, 24h, 7Bh, 9Ch, 96h, 25h, 7Ah, 9
HEADER:0000000140000175 C8 24 7B C2 BD 25 7A 09…                db 0C8h, 24h, 7Bh, 0C2h, 0BDh, 25h, 7Ah, 9, 0C8h, 24h
HEADER:000000014000017F 7B AB A1 20 7A 09 C8 24…                db 7Bh, 0ABh, 0A1h, 20h, 7Ah, 9, 0C8h, 24h, 7Bh, 0ABh
HEADER:0000000140000189 A1 21 7A 61 C8 24 7B AE…                db 0A1h, 21h, 7Ah, 61h, 0C8h, 24h, 7Bh, 0AEh, 0A1h, 25h
HEADER:0000000140000193 7A 0F C8 24 7B 37 AF 25…                db 7Ah, 0Fh, 0C8h, 24h, 7Bh, 37h, 0AFh, 25h, 7Ah, 9, 0C8h
HEADER:000000014000019E 24 7B A5 A1 25 7A 0F C8…                db 24h, 7Bh, 0A5h, 0A1h, 25h, 7Ah, 0Fh, 0C8h, 24h, 7Bh
HEADER:00000001400001A8 CC BD 21 7A 0E C8 24 7B…                db 0CCh, 0BDh, 21h, 7Ah, 0Eh, 0C8h, 24h, 7Bh, 8Dh, 0B8h
HEADER:00000001400001B2 21 7A 02 C8 24 7B B4 BD…                db 21h, 7Ah, 2, 0C8h, 24h, 7Bh, 0B4h, 0BDh, 20h, 7Ah, 21h
HEADER:00000001400001BD C8 24 7B B6 B9 20 7A 0A…                db 0C8h, 24h, 7Bh, 0B6h, 0B9h, 20h, 7Ah, 0Ah, 0C8h, 24h
HEADER:00000001400001C7 7B B6 B9 21 7A 19 C8 24…                db 7Bh, 0B6h, 0B9h, 21h, 7Ah, 19h, 0C8h, 24h, 7Bh, 0AAh
HEADER:00000001400001D1 A6 21 7A 06 C8 24 7B 35…                db 0A6h, 21h, 7Ah, 6, 0C8h, 24h, 7Bh, 35h, 0AFh, 21h, 7Ah
HEADER:00000001400001DC 0F C8 24 7B B4 BD 21 7A…                db 0Fh, 0C8h, 24h, 7Bh, 0B4h, 0BDh, 21h, 7Ah, 0A6h, 0C8h
HEADER:00000001400001E6 24 7B 9A 41 20 7A 43 C8…                db 24h, 7Bh, 9Ah, 41h, 20h, 7Ah, 43h, 0C8h, 24h, 7Bh, 65h
HEADER:00000001400001F1 49 21 7A 03 C8 24 7B C8…                db 49h, 21h, 7Ah, 3, 0C8h, 24h, 7Bh, 0C8h, 0BDh, 25h, 7Ah
HEADER:00000001400001FC 09 C8 24 7B 64 BE 89 7B…                db 9, 0C8h, 24h, 7Bh, 64h, 0BEh, 89h, 7Bh, 9, 0C8h, 24h
HEADER:0000000140000207 7B 64 BE B8 7B 0F C8 24…                db 7Bh, 64h, 0BEh, 0B8h, 7Bh, 0Fh, 0C8h, 24h, 7Bh, 1Fh
HEADER:0000000140000211 A3 25 7A 0F C8 24 7B 99…                db 0A3h, 25h, 7Ah, 0Fh, 0C8h, 24h, 7Bh, 99h, 96h, 21h
HEADER:000000014000021B 7A 02 C8 24 7B 4A AF 20…                db 7Ah, 2, 0C8h, 24h, 7Bh, 4Ah, 0AFh, 20h, 7Ah, 0Ah, 0C8h
HEADER:0000000140000226 24 7B 4A AF 21 7A 0D C8…                db 24h, 7Bh, 4Ah, 0AFh, 21h, 7Ah, 0Dh, 0C8h, 24h, 7Bh
HEADER:0000000140000230 02 B0 A0 7B 0A C8 24 7B…                db 2, 0B0h, 0A0h, 7Bh, 0Ah, 0C8h, 24h, 7Bh, 2, 0B0h, 0A7h
HEADER:000000014000023B 7B 0A C8 24 7B 1F A3 21…                db 7Bh, 0Ah, 0C8h, 24h, 7Bh, 1Fh, 0A3h, 21h, 7Ah, 9, 0C8h
HEADER:0000000140000246 24 7B 9C 96 20 7A 37 CA…                db 24h, 7Bh, 9Ch, 96h, 20h, 7Ah, 37h, 0CAh, 24h, 7Bh, 99h
HEADER:0000000140000251 96 27 7A 09 C8 24 7B 9C…                db 96h, 27h, 7Ah, 9, 0C8h, 24h, 7Bh, 9Ch, 96h, 21h, 7Ah
HEADER:000000014000025C 1F CA 24 7B 9A 41 27 7A…                db 1Fh, 0CAh, 24h, 7Bh, 9Ah, 41h, 27h, 7Ah, 3, 0C8h, 24h
HEADER:0000000140000267 7B 9A 41 21 7A F3 C8 24…                db 7Bh, 9Ah, 41h, 21h, 7Ah, 0F3h, 0C8h, 24h, 7Bh, 40h
HEADER:0000000140000271 B0 20 7A 07 C8 24 7B 40…                db 0B0h, 20h, 7Ah, 7, 0C8h, 24h, 7Bh, 40h, 0B0h, 22h, 7Ah
HEADER:000000014000027C 0A C8 24 7B 0B C8 25 7B…                db 0Ah, 0C8h, 24h, 7Bh, 0Bh, 0C8h, 25h, 7Bh, 6Eh, 0C0h
HEADER:0000000140000286 24 7B 40 B0 25 7A 36 C8…                db 24h, 7Bh, 40h, 0B0h, 25h, 7Ah, 36h, 0C8h, 24h, 7Bh
HEADER:0000000140000290 C8 4B 21 7A 21 C8 24 7B…                db 0C8h, 4Bh, 21h, 7Ah, 21h, 0C8h, 24h, 7Bh, 13h, 4Ch
HEADER:000000014000029A 20 7A 20 C8 24 7B 13 4C…                db 20h, 7Ah, 20h, 0C8h, 24h, 7Bh, 13h, 4Ch, 21h, 7Ah, 67h
HEADER:00000001400002A5 C3 24 7B 0B C8 24 7B 2F…                db 0C3h, 24h, 7Bh, 0Bh, 0C8h, 24h, 7Bh, 2Fh, 0C8h, 24h
HEADER:00000001400002AF 7B 13 4C 24 7A 0A C8 24…                db 7Bh, 13h, 4Ch, 24h, 7Ah, 0Ah, 0C8h, 24h, 7Bh, 13h, 4Ch
HEADER:00000001400002BA DB 7B 0A C8 24 7B 0B C8…                db 0DBh, 7Bh, 0Ah, 0C8h, 24h, 7Bh, 0Bh, 0C8h, 0B3h, 7Bh
HEADER:00000001400002C4 0A C8 24 7B 13 4C 26 7A…                db 0Ah, 0C8h, 24h, 7Bh, 13h, 4Ch, 26h, 7Ah, 0Ah, 0C8h
HEADER:00000001400002CE 24 7B 52 69 63 68 0B C8…                db 24h, 7Bh, 52h, 69h, 63h, 68h, 0Bh, 0C8h, 24h, 7Bh, 10h dup(0)
HEADER:00000001400002E8                         ; IMAGE_NT_HEADERS
HEADER:00000001400002E8 50 45 00 00             dword_1400002E8 dd 4550h                ; DATA XREF: HEADER:off_14000003C↑o
HEADER:00000001400002E8                                                                 ; Signature
HEADER:00000001400002EC                         ; IMAGE_FILE_HEADER
HEADER:00000001400002EC 64 86                                   dw 8664h                ; Machine
HEADER:00000001400002EE 0B 00                                   dw 0Bh                  ; Number of sections
HEADER:00000001400002F0 6C B3 D8 69                             dd 69D8B36Ch            ; Time stamp: Fri Apr 10 08:23:08 2026
HEADER:00000001400002F4 00 00 00 00                             dd 0                    ; Pointer to symbol table
HEADER:00000001400002F8 00 00 00 00                             dd 0                    ; Number of symbols
HEADER:00000001400002FC F0 00                                   dw 0F0h                 ; Size of optional header
HEADER:00000001400002FE 23 00                                   dw 23h                  ; Characteristics
HEADER:0000000140000300                         ; IMAGE_OPTIONAL_HEADER
HEADER:0000000140000300 0B 02                                   dw 20Bh                 ; Magic number
HEADER:0000000140000302 0E                                      db 0Eh                  ; Major linker version
HEADER:0000000140000303 28                                      db 28h                  ; Minor linker version
HEADER:0000000140000304 00 34 E7 12                             dd 12E73400h            ; Size of code
HEADER:0000000140000308 00 70 DE 08                             dd 8DE7000h             ; Size of initialized data
HEADER:000000014000030C 00 00 00 00                             dd 0                    ; Size of uninitialized data
HEADER:0000000140000310 1D 30 31 1B                             dd rva start            ; Address of entry point
HEADER:0000000140000314 00 10 00 00                             dd rva sub_140001000    ; Base of code
HEADER:0000000140000318 00 00 00 40 01 00 00 00                 dq offset __ImageBase   ; Image base
HEADER:0000000140000320 00 10 00 00                             dd 1000h                ; Section alignment
HEADER:0000000140000324 00 02 00 00                             dd 200h                 ; File alignment
HEADER:0000000140000328 06 00                                   dw 6                    ; Major operating system version
HEADER:000000014000032A 00 00                                   dw 0                    ; Minor operating system version
HEADER:000000014000032C 00 00                                   dw 0                    ; Major image version
HEADER:000000014000032E 00 00                                   dw 0                    ; Minor image version
HEADER:0000000140000330 06 00                                   dw 6                    ; Major subsystem version
HEADER:0000000140000332 00 00                                   dw 0                    ; Minor subsystem version
HEADER:0000000140000334 00 00 00 00                             dd 0                    ; Reserved 1
HEADER:0000000140000338 00 70 36 1B                             dd 1B367000h            ; Size of image
HEADER:000000014000033C 00 06 00 00                             dd 600h                 ; Size of headers
HEADER:0000000140000340 E3 86 78 1A                             dd 1A7886E3h            ; Checksum
HEADER:0000000140000344 02 00                                   dw 2                    ; Subsystem
HEADER:0000000140000346 20 81                                   dw 8120h                ; Dll characteristics
HEADER:0000000140000348 00 1B B7 00 00 00 00 00                 dq 0B71B00h             ; Size of stack reserve
HEADER:0000000140000350 00 10 00 00 00 00 00 00                 dq 1000h                ; Size of stack commit
HEADER:0000000140000358 00 00 10 00 00 00 00 00                 dq 100000h              ; Size of heap reserve
HEADER:0000000140000360 00 10 00 00 00 00 00 00                 dq 1000h                ; Size of heap commit
HEADER:0000000140000368 00 00 00 00                             dd 0                    ; Loader flag
HEADER:000000014000036C 10 00 00 00                             dd 10h                  ; Number of data directories
HEADER:0000000140000370                         ; Export Directory
HEADER:0000000140000370 A0 BF BB 18                             dd rva dword_158BBBFA0  ; Virtual address
HEADER:0000000140000374 40 C0 01 00                             dd 1C040h               ; Size
HEADER:0000000140000378                         ; Import Directory
HEADER:0000000140000378 B9 2F 31 1B                             dd rva off_15B312FB9    ; Virtual address
HEADER:000000014000037C 28 00 00 00                             dd 28h                  ; Size
HEADER:0000000140000380                         ; Resource Directory
HEADER:0000000140000380 00 B0 2D 1B                             dd rva unk_15B2DB000    ; Virtual address
HEADER:0000000140000384 78 89 00 00                             dd 8978h                ; Size
HEADER:0000000140000388                         ; Exception Directory
HEADER:0000000140000388 00 A0 75 1A                             dd rva ExceptionDir     ; Virtual address
HEADER:000000014000038C 5C 8E B4 00                             dd 0B48E5Ch             ; Size
HEADER:0000000140000390                         ; Security Directory
HEADER:0000000140000390 50 74 77 1A                             dd rva stru_15A777448.UnwindInfo ; Virtual address
HEADER:0000000140000394 A0 29 00 00                             dd 29A0h                ; Size
HEADER:0000000140000398 00 00 00 00 00 00 00 00                 dd 2 dup(0)             ; Base Relocation Table
HEADER:00000001400003A0                         ; Debug Directory
HEADER:00000001400003A0 3C 60 36 1B                             dd rva dword_15B36603C  ; Virtual address
HEADER:00000001400003A4 54 00 00 00                             dd 54h                  ; Size
HEADER:00000001400003A8 00 00 00 00 00 00 00 00                 dd 2 dup(0)             ; Architecture Specific Data
HEADER:00000001400003B0 00 00 00 00 00 00 00 00                 dd 2 dup(0)             ; RVA of GP
HEADER:00000001400003B8                         ; TLS Directory
HEADER:00000001400003B8 27 30 31 1B                             dd rva TlsDirectory     ; Virtual address
HEADER:00000001400003BC 28 00 00 00                             dd 28h                  ; Size
HEADER:00000001400003C0                         ; Load Configuration Directory
HEADER:00000001400003C0 00 05 2E 18                             dd rva _load_config_used ; Virtual address
HEADER:00000001400003C4 40 01 00 00                             dd 140h                 ; Size
HEADER:00000001400003C8 00 00 00 00 00 00 00 00                 dd 2 dup(0)             ; Bound Import Directory in headers
HEADER:00000001400003D0 00 00 00 00 00 00 00 00                 dd 2 dup(0)             ; Import Address Table
HEADER:00000001400003D8                         ; Delay Load Import Descriptors
HEADER:00000001400003D8 F8 7E BB 18                             dd rva dbghelp_dll_import_table ; Virtual address
HEADER:00000001400003DC 60 02 00 00                             dd 260h                 ; Size
HEADER:00000001400003E0 00 00 00 00 00 00 00 00                 dd 2 dup(0)             ; COM Runtime descriptor
HEADER:00000001400003E8 00 00 00 00 00 00 00 00                 dd 2 dup(0)             ; Image data directory 15
HEADER:00000001400003F0                         ; IMAGE_SECTION_HEADER
HEADER:00000001400003F0 2E 73 74 64 00 00 00 00                 db '.std',0,0,0,0       ; Name
HEADER:00000001400003F8 00 40 E7 12                             dd 12E74000h            ; Virtual size
HEADER:00000001400003FC 00 10 00 00                             dd rva sub_140001000    ; Virtual address
HEADER:0000000140000400 00 34 E7 12                             dd 12E73400h            ; Size of raw data
HEADER:0000000140000404 00 06 00 00                             dd 600h                 ; Pointer to raw data
HEADER:0000000140000408 00 00 00 00                             dd 0                    ; Pointer to relocations
HEADER:000000014000040C 00 00 00 00                             dd 0                    ; Pointer to line numbers
HEADER:0000000140000410 00 00                                   dw 0                    ; Number of relocations
HEADER:0000000140000412 00 00                                   dw 0                    ; Number of linenumbers
HEADER:0000000140000414 20 00 00 60                             dd 60000020h            ; Characteristics
HEADER:0000000140000418                         ; IMAGE_SECTION_HEADER
HEADER:0000000140000418 2E 73 74 64 00 00 00 00                 db '.std',0,0,0,0       ; Name
HEADER:0000000140000420 00 50 D7 05                             dd 5D75000h             ; Virtual size
HEADER:0000000140000424 00 50 E7 12                             dd rva qword_152E75000  ; Virtual address
HEADER:0000000140000428 00 46 D7 05                             dd 5D74600h             ; Size of raw data
HEADER:000000014000042C 00 3A E7 12                             dd 12E73A00h            ; Pointer to raw data
HEADER:0000000140000430 00 00 00 00                             dd 0                    ; Pointer to relocations
HEADER:0000000140000434 00 00 00 00                             dd 0                    ; Pointer to line numbers
HEADER:0000000140000438 00 00                                   dw 0                    ; Number of relocations
HEADER:000000014000043A 00 00                                   dw 0                    ; Number of linenumbers
HEADER:000000014000043C 40 00 00 40                             dd 40000040h            ; Characteristics
HEADER:0000000140000440                         ; IMAGE_SECTION_HEADER
HEADER:0000000140000440 2E 73 74 64 00 00 00 00                 db '.std',0,0,0,0       ; Name
HEADER:0000000140000448 00 00 B7 01                             dd 1B70000h             ; Virtual size
HEADER:000000014000044C 00 A0 BE 18                             dd rva unk_158BEA000    ; Virtual address
HEADER:0000000140000450 00 EE B6 01                             dd 1B6EE00h             ; Size of raw data
HEADER:0000000140000454 00 80 BE 18                             dd 18BE8000h            ; Pointer to raw data
HEADER:0000000140000458 00 00 00 00                             dd 0                    ; Pointer to relocations
HEADER:000000014000045C 00 00 00 00                             dd 0                    ; Pointer to line numbers
HEADER:0000000140000460 00 00                                   dw 0                    ; Number of relocations
HEADER:0000000140000462 00 00                                   dw 0                    ; Number of linenumbers
HEADER:0000000140000464 40 00 00 C0                             dd 0C0000040h           ; Characteristics
HEADER:0000000140000468                         ; IMAGE_SECTION_HEADER
HEADER:0000000140000468 2E 73 74 64 00 00 00 00                 db '.std',0,0,0,0       ; Name
HEADER:0000000140000470 00 90 B4 00                             dd 0B49000h             ; Virtual size
HEADER:0000000140000474 00 A0 75 1A                             dd rva ExceptionDir     ; Virtual address
HEADER:0000000140000478 00 90 B4 00                             dd 0B49000h             ; Size of raw data
HEADER:000000014000047C 00 6E 75 1A                             dd 1A756E00h            ; Pointer to raw data
HEADER:0000000140000480 00 00 00 00                             dd 0                    ; Pointer to relocations
HEADER:0000000140000484 00 00 00 00                             dd 0                    ; Pointer to line numbers
HEADER:0000000140000488 00 00                                   dw 0                    ; Number of relocations
HEADER:000000014000048A 00 00                                   dw 0                    ; Number of linenumbers
HEADER:000000014000048C 40 00 00 40                             dd 40000040h            ; Characteristics
HEADER:0000000140000490                         ; IMAGE_SECTION_HEADER
HEADER:0000000140000490 2E 73 74 64 00 00 00 00                 db '.std',0,0,0,0       ; Name
HEADER:0000000140000498 00 30 00 00                             dd 3000h                ; Virtual size
HEADER:000000014000049C 00 30 2A 1B                             dd rva unk_15B2A3000    ; Virtual address
HEADER:00000001400004A0 00 22 00 00                             dd 2200h                ; Size of raw data
HEADER:00000001400004A4 00 FE 29 1B                             dd 1B29FE00h            ; Pointer to raw data
HEADER:00000001400004A8 00 00 00 00                             dd 0                    ; Pointer to relocations
HEADER:00000001400004AC 00 00 00 00                             dd 0                    ; Pointer to line numbers
HEADER:00000001400004B0 00 00                                   dw 0                    ; Number of relocations
HEADER:00000001400004B2 00 00                                   dw 0                    ; Number of linenumbers
HEADER:00000001400004B4 40 00 00 40                             dd 40000040h            ; Characteristics
HEADER:00000001400004B8                         ; IMAGE_SECTION_HEADER
HEADER:00000001400004B8 2E 73 74 64 00 00 00 00                 db '.std',0,0,0,0       ; Name
HEADER:00000001400004C0 00 10 00 00                             dd 1000h                ; Virtual size
HEADER:00000001400004C4 00 60 2A 1B                             dd rva dword_15B2A6000  ; Virtual address
HEADER:00000001400004C8 00 02 00 00                             dd 200h                 ; Size of raw data
HEADER:00000001400004CC 00 20 2A 1B                             dd 1B2A2000h            ; Pointer to raw data
HEADER:00000001400004D0 00 00 00 00                             dd 0                    ; Pointer to relocations
HEADER:00000001400004D4 00 00 00 00                             dd 0                    ; Pointer to line numbers
HEADER:00000001400004D8 00 00                                   dw 0                    ; Number of relocations
HEADER:00000001400004DA 00 00                                   dw 0                    ; Number of linenumbers
HEADER:00000001400004DC 40 00 00 C0                             dd 0C0000040h           ; Characteristics
HEADER:00000001400004E0                         ; IMAGE_SECTION_HEADER
HEADER:00000001400004E0 2E 73 74 64 00 00 00 00                 db '.std',0,0,0,0       ; Name
HEADER:00000001400004E8 00 40 03 00                             dd 34000h               ; Virtual size
HEADER:00000001400004EC 00 70 2A 1B                             dd rva xmmword_15B2A7000 ; Virtual address
HEADER:00000001400004F0 00 38 03 00                             dd 33800h               ; Size of raw data
HEADER:00000001400004F4 00 22 2A 1B                             dd 1B2A2200h            ; Pointer to raw data
HEADER:00000001400004F8 00 00 00 00                             dd 0                    ; Pointer to relocations
HEADER:00000001400004FC 00 00 00 00                             dd 0                    ; Pointer to line numbers
HEADER:0000000140000500 00 00                                   dw 0                    ; Number of relocations
HEADER:0000000140000502 00 00                                   dw 0                    ; Number of linenumbers
HEADER:0000000140000504 40 00 00 40                             dd 40000040h            ; Characteristics
HEADER:0000000140000508                         ; IMAGE_SECTION_HEADER
HEADER:0000000140000508 2E 73 74 64 00 00 00 00                 db '.std',0,0,0,0       ; Name
HEADER:0000000140000510 00 90 00 00                             dd 9000h                ; Virtual size
HEADER:0000000140000514 00 B0 2D 1B                             dd rva unk_15B2DB000    ; Virtual address
HEADER:0000000140000518 00 8A 00 00                             dd 8A00h                ; Size of raw data
HEADER:000000014000051C 00 5A 2D 1B                             dd 1B2D5A00h            ; Pointer to raw data
HEADER:0000000140000520 00 00 00 00                             dd 0                    ; Pointer to relocations
HEADER:0000000140000524 00 00 00 00                             dd 0                    ; Pointer to line numbers
HEADER:0000000140000528 00 00                                   dw 0                    ; Number of relocations
HEADER:000000014000052A 00 00                                   dw 0                    ; Number of linenumbers
HEADER:000000014000052C 40 00 00 40                             dd 40000040h            ; Characteristics
HEADER:0000000140000530                         ; IMAGE_SECTION_HEADER
HEADER:0000000140000530 2E 73 74 64 00 00 00 00                 db '.std',0,0,0,0       ; Name
HEADER:0000000140000538 00 50 06 00                             dd 65000h               ; Virtual size
HEADER:000000014000053C 00 40 2E 1B                             dd rva unk_15B2E4000    ; Virtual address
HEADER:0000000140000540 00 4E 06 00                             dd 64E00h               ; Size of raw data
HEADER:0000000140000544 00 E4 2D 1B                             dd 1B2DE400h            ; Pointer to raw data
HEADER:0000000140000548 00 00 00 00                             dd 0                    ; Pointer to relocations
HEADER:000000014000054C F2 51 AC 99                             dd 99AC51F2h            ; Pointer to line numbers
HEADER:0000000140000550 00 00                                   dw 0                    ; Number of relocations
HEADER:0000000140000552 00 00                                   dw 0                    ; Number of linenumbers
HEADER:0000000140000554 20 00 00 60                             dd 60000020h            ; Characteristics
HEADER:0000000140000558                         ; IMAGE_SECTION_HEADER
HEADER:0000000140000558 2E 73 74 64 00 00 00 00                 db '.std',0,0,0,0       ; Name
HEADER:0000000140000560 00 D0 01 00                             dd 1D000h               ; Virtual size
HEADER:0000000140000564 00 90 34 1B                             dd rva unk_15B349000    ; Virtual address
HEADER:0000000140000568 00 00 00 00                             dd 0                    ; Size of raw data
HEADER:000000014000056C 00 32 34 1B                             dd 1B343200h            ; Pointer to raw data
HEADER:0000000140000570 00 00 00 00                             dd 0                    ; Pointer to relocations
HEADER:0000000140000574 00 00 00 00                             dd 0                    ; Pointer to line numbers
HEADER:0000000140000578 00 00                                   dw 0                    ; Number of relocations
HEADER:000000014000057A 00 00                                   dw 0                    ; Number of linenumbers
HEADER:000000014000057C 40 00 00 C0                             dd 0C0000040h           ; Characteristics
HEADER:0000000140000580                         ; IMAGE_SECTION_HEADER
HEADER:0000000140000580 2E 73 74 64 00 00 00 00                 db '.std',0,0,0,0       ; Name
HEADER:0000000140000588 00 10 00 00                             dd 1000h                ; Virtual size
HEADER:000000014000058C 00 60 36 1B                             dd rva asc_15B366000    ; Virtual address
HEADER:0000000140000590 00 02 00 00                             dd 200h                 ; Size of raw data
HEADER:0000000140000594 00 32 34 1B                             dd 1B343200h            ; Pointer to raw data
HEADER:0000000140000598 00 00 00 00                             dd 0                    ; Pointer to relocations
HEADER:000000014000059C 00 00 00 00                             dd 0                    ; Pointer to line numbers
HEADER:00000001400005A0 00 00                                   dw 0                    ; Number of relocations
HEADER:00000001400005A2 00 00                                   dw 0                    ; Number of linenumbers
HEADER:00000001400005A4 40 00 00 40                             dd 40000040h            ; Characteristics
HEADER:00000001400005A8 00                                      db    0
HEADER:00000001400005A9 00                                      db    0
HEADER:00000001400005AA 00                                      db    0
```

```

Direction	Type	Address	Text
Up	r	sub_140B9C1B0+4	movups  xmm0, cs:xmmword_15961B618
Up	o	sub_150B378E0+230	lea     rdx, xmmword_15961B618
Up	o	sub_150B378E0+246	lea     rdx, xmmword_15961B618
Up	o	sub_150C0AED0+11	lea     rdx, xmmword_15961B618


```asm



.std:0000000140B9BBD0
.std:0000000140B9BBD0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9BBD0
.std:0000000140B9BBD0
.std:0000000140B9BBD0                         sub_140B9BBD0   proc near
.std:0000000140B9BBD0
.std:0000000140B9BBD0                         var_18          = dword ptr -18h
.std:0000000140B9BBD0
.std:0000000140B9BBD0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9BBD4 48 8B 0D 15 0E 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BBDB 48 85 C9                                test    rcx, rcx
.std:0000000140B9BBDE 75 0C                                   jnz     short loc_140B9BBEC
.std:0000000140B9BBE0 E8 9B 77 3A 0E                          call    sub_14EF43380
.std:0000000140B9BBE5 48 8B 0D 04 0E 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BBEC
.std:0000000140B9BBEC                         loc_140B9BBEC:                          ; CODE XREF: sub_140B9BBD0+E↑j
.std:0000000140B9BBEC 48 8B 01                                mov     rax, [rcx]
.std:0000000140B9BBEF 4C 8D 0D 9A 0F 71 16                    lea     r9, a1DefaultValueM ; "1: default value, mapped to file; 0: no"...
.std:0000000140B9BBF6 4C 8D 05 1B 86 91 19                    lea     r8, unk_15A4B4218
.std:0000000140B9BBFD C7 44 24 20 00 00 00 00                 mov     [rsp+38h+var_18], 0
.std:0000000140B9BC05 48 8D 15 E4 0F 71 16                    lea     rdx, aMFnameMmap ; "m.fname.mmap"
.std:0000000140B9BC0C FF 50 38                                call    qword ptr [rax+38h]
.std:0000000140B9BC0F 48 89 05 F2 88 91 19                    mov     cs:qword_15A4B4508, rax
.std:0000000140B9BC16 48 8D 0D 33 3E 25 12                    lea     rcx, sub_152DEFA50
.std:0000000140B9BC1D 48 8D 05 5C 61 54 12                    lea     rax, off_1530E1D80
.std:0000000140B9BC24 48 89 05 D5 88 91 19                    mov     cs:off_15A4B4500, rax
.std:0000000140B9BC2B 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9BC2F E9 38 A4 FB 11                          jmp     sub_152B5606C
.std:0000000140B9BC2F                         sub_140B9BBD0   endp
.std:0000000140B9BC2F
.std:0000000140B9BC2F                         ; ---------------------------------------------------------------------------
.std:0000000140B9BC34 CC CC CC CC CC CC CC CC…                align 20h
.std:0000000140B9BC40
.std:0000000140B9BC40                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9BC40
.std:0000000140B9BC40
.std:0000000140B9BC40                         sub_140B9BC40   proc near
.std:0000000140B9BC40
.std:0000000140B9BC40                         var_18          = dword ptr -18h
.std:0000000140B9BC40
.std:0000000140B9BC40 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9BC44 48 8B 0D A5 0D 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BC4B 48 85 C9                                test    rcx, rcx
.std:0000000140B9BC4E 75 0C                                   jnz     short loc_140B9BC5C
.std:0000000140B9BC50 E8 2B 77 3A 0E                          call    sub_14EF43380
.std:0000000140B9BC55 48 8B 0D 94 0D 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BC5C
.std:0000000140B9BC5C                         loc_140B9BC5C:                          ; CODE XREF: sub_140B9BC40+E↑j
.std:0000000140B9BC5C 48 8B 01                                mov     rax, [rcx]
.std:0000000140B9BC5F 4C 8D 0D E2 06 71 16                    lea     r9, aDefault0Disabl ; "Default: 0:Disable, 1:Enable "
.std:0000000140B9BC66 4C 8D 05 A3 85 91 19                    lea     r8, unk_15A4B4210
.std:0000000140B9BC6D C7 44 24 20 00 00 00 00                 mov     [rsp+38h+var_18], 0
.std:0000000140B9BC75 48 8D 15 0C 07 71 16                    lea     rdx, aTProcesspriori ; "t.ProcessPriorityBoost"
.std:0000000140B9BC7C FF 50 38                                call    qword ptr [rax+38h]
.std:0000000140B9BC7F 48 89 05 D2 86 91 19                    mov     cs:qword_15A4B4358, rax
.std:0000000140B9BC86 48 8D 0D 13 3E 25 12                    lea     rcx, sub_152DEFAA0
.std:0000000140B9BC8D 48 8D 05 EC 60 54 12                    lea     rax, off_1530E1D80
.std:0000000140B9BC94 48 89 05 B5 86 91 19                    mov     cs:off_15A4B4350, rax
.std:0000000140B9BC9B 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9BC9F E9 C8 A3 FB 11                          jmp     sub_152B5606C
.std:0000000140B9BC9F                         sub_140B9BC40   endp
.std:0000000140B9BC9F
.std:0000000140B9BC9F                         ; ---------------------------------------------------------------------------
.std:0000000140B9BCA4 CC CC CC CC CC CC CC CC…                align 10h
.std:0000000140B9BCB0
.std:0000000140B9BCB0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9BCB0
.std:0000000140B9BCB0
.std:0000000140B9BCB0                         sub_140B9BCB0   proc near
.std:0000000140B9BCB0
.std:0000000140B9BCB0                         var_18          = dword ptr -18h
.std:0000000140B9BCB0
.std:0000000140B9BCB0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9BCB4 48 8B 0D 35 0D 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BCBB 48 85 C9                                test    rcx, rcx
.std:0000000140B9BCBE 75 0C                                   jnz     short loc_140B9BCCC
.std:0000000140B9BCC0 E8 BB 76 3A 0E                          call    sub_14EF43380
.std:0000000140B9BCC5 48 8B 0D 24 0D 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BCCC
.std:0000000140B9BCCC                         loc_140B9BCCC:                          ; CODE XREF: sub_140B9BCB0+E↑j
.std:0000000140B9BCCC 48 8B 01                                mov     rax, [rcx]
.std:0000000140B9BCCF 4C 8D 0D E2 06 71 16                    lea     r9, aDefault0Ingame ; "Default: 0, InGame: 1"
.std:0000000140B9BCD6 4C 8D 05 37 85 91 19                    lea     r8, unk_15A4B4214
.std:0000000140B9BCDD C7 44 24 20 00 00 00 00                 mov     [rsp+38h+var_18], 0
.std:0000000140B9BCE5 48 8D 15 FC 06 71 16                    lea     rdx, aTThreadaffinit ; "t.ThreadAffinityMode"
.std:0000000140B9BCEC FF 50 38                                call    qword ptr [rax+38h]
.std:0000000140B9BCEF 48 89 05 82 88 91 19                    mov     cs:qword_15A4B4578, rax
.std:0000000140B9BCF6 48 8D 0D F3 3D 25 12                    lea     rcx, sub_152DEFAF0
.std:0000000140B9BCFD 48 8D 05 7C 60 54 12                    lea     rax, off_1530E1D80
.std:0000000140B9BD04 48 89 05 65 88 91 19                    mov     cs:off_15A4B4570, rax
.std:0000000140B9BD0B 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9BD0F E9 58 A3 FB 11                          jmp     sub_152B5606C
.std:0000000140B9BD0F                         sub_140B9BCB0   endp
.std:0000000140B9BD0F
.std:0000000140B9BD0F                         ; ---------------------------------------------------------------------------
.std:0000000140B9BD14 CC CC CC CC CC CC CC CC…                align 20h
.std:0000000140B9BD20
.std:0000000140B9BD20                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9BD20
.std:0000000140B9BD20
.std:0000000140B9BD20                         sub_140B9BD20   proc near
.std:0000000140B9BD20
.std:0000000140B9BD20                         var_28          = dword ptr -28h
.std:0000000140B9BD20                         var_18          = qword ptr -18h
.std:0000000140B9BD20                         var_10          = qword ptr -10h
.std:0000000140B9BD20
.std:0000000140B9BD20 40 53                                   push    rbx
.std:0000000140B9BD22 48 83 EC 40                             sub     rsp, 40h
.std:0000000140B9BD26 33 DB                                   xor     ebx, ebx
.std:0000000140B9BD28 48 8D 4C 24 30                          lea     rcx, [rsp+48h+var_18]
.std:0000000140B9BD2D BA 52 00 00 00                          mov     edx, 52h ; 'R'
.std:0000000140B9BD32 48 89 5C 24 30                          mov     [rsp+48h+var_18], rbx
.std:0000000140B9BD37 48 89 5C 24 38                          mov     [rsp+48h+var_10], rbx
.std:0000000140B9BD3C E8 EF 3D 26 00                          call    sub_140DFFB30
.std:0000000140B9BD41 8B 54 24 38                             mov     edx, dword ptr [rsp+48h+var_10]
.std:0000000140B9BD45 8D 42 52                                lea     eax, [rdx+52h]
.std:0000000140B9BD48 89 44 24 38                             mov     dword ptr [rsp+48h+var_10], eax
.std:0000000140B9BD4C 3B 44 24 3C                             cmp     eax, dword ptr [rsp+48h+var_10+4]
.std:0000000140B9BD50 7E 0A                                   jle     short loc_140B9BD5C
.std:0000000140B9BD52 48 8D 4C 24 30                          lea     rcx, [rsp+48h+var_18]
.std:0000000140B9BD57 E8 F4 3C 26 00                          call    sub_140DFFA50
.std:0000000140B9BD5C
.std:0000000140B9BD5C                         loc_140B9BD5C:                          ; CODE XREF: sub_140B9BD20+30↑j
.std:0000000140B9BD5C 48 8D 4C 24 30                          lea     rcx, [rsp+48h+var_18]
.std:0000000140B9BD61 FF 15 19 1D A7 18                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:0000000140B9BD67 41 B8 A4 00 00 00                       mov     r8d, 0A4h
.std:0000000140B9BD6D 48 8D 15 1C 08 71 16                    lea     rdx, aGtB0RtB1RhiB2H ; "GT:b0,RT:b1,RHI:b2,HPTask:b3,BPTask:bs|"...
.std:0000000140B9BD74 48 8B C8                                mov     rcx, rax
.std:0000000140B9BD77 E8 64 F5 39 0E                          call    sub_14EF3B2E0
.std:0000000140B9BD7C 48 8B 0D 6D 0C 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BD83 48 85 C9                                test    rcx, rcx
.std:0000000140B9BD86 75 0C                                   jnz     short loc_140B9BD94
.std:0000000140B9BD88 E8 F3 75 3A 0E                          call    sub_14EF43380
.std:0000000140B9BD8D 48 8B 0D 5C 0C 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BD94
.std:0000000140B9BD94                         loc_140B9BD94:                          ; CODE XREF: sub_140B9BD20+66↑j
.std:0000000140B9BD94 48 8B 01                                mov     rax, [rcx]
.std:0000000140B9BD97 4C 8D 0D 82 06 71 16                    lea     r9, aSetsTheThreadA ; "Sets the thread affinity. Pairs of args"...
.std:0000000140B9BD9E 4C 8D 44 24 30                          lea     r8, [rsp+48h+var_18]
.std:0000000140B9BDA3 89 5C 24 20                             mov     [rsp+48h+var_28], ebx
.std:0000000140B9BDA7 48 8D 15 8A 08 71 16                    lea     rdx, aTThreadaffinit_0 ; "t.ThreadAffinity_Default"
.std:0000000140B9BDAE FF 10                                   call    qword ptr [rax]
.std:0000000140B9BDB0 48 8D 0D D1 5F 54 12                    lea     rcx, off_1530E1D88
.std:0000000140B9BDB7 48 89 05 8A 86 91 19                    mov     cs:qword_15A4B4448, rax
.std:0000000140B9BDBE 48 89 0D 7B 86 91 19                    mov     cs:off_15A4B4440, rcx
.std:0000000140B9BDC5 48 8B C8                                mov     rcx, rax
.std:0000000140B9BDC8 48 8B 10                                mov     rdx, [rax]
.std:0000000140B9BDCB FF 52 68                                call    qword ptr [rdx+68h]
.std:0000000140B9BDCE 48 8D 4C 24 30                          lea     rcx, [rsp+48h+var_18]
.std:0000000140B9BDD3 48 89 05 76 86 91 19                    mov     cs:qword_15A4B4450, rax
.std:0000000140B9BDDA E8 F1 3A 26 00                          call    sub_140DFF8D0
.std:0000000140B9BDDF 48 8D 0D 5A 3D 25 12                    lea     rcx, sub_152DEFB40
.std:0000000140B9BDE6 48 83 C4 40                             add     rsp, 40h
.std:0000000140B9BDEA 5B                                      pop     rbx
.std:0000000140B9BDEB E9 7C A2 FB 11                          jmp     sub_152B5606C
.std:0000000140B9BDEB                         sub_140B9BD20   endp
.std:0000000140B9BDEB
.std:0000000140B9BDF0
.std:0000000140B9BDF0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9BDF0
.std:0000000140B9BDF0
.std:0000000140B9BDF0                         sub_140B9BDF0   proc near
.std:0000000140B9BDF0
.std:0000000140B9BDF0                         var_28          = dword ptr -28h
.std:0000000140B9BDF0                         var_18          = qword ptr -18h
.std:0000000140B9BDF0                         var_10          = qword ptr -10h
.std:0000000140B9BDF0
.std:0000000140B9BDF0 40 53                                   push    rbx
.std:0000000140B9BDF2 48 83 EC 40                             sub     rsp, 40h
.std:0000000140B9BDF6 33 DB                                   xor     ebx, ebx
.std:0000000140B9BDF8 48 8D 4C 24 30                          lea     rcx, [rsp+48h+var_18]
.std:0000000140B9BDFD BA 56 00 00 00                          mov     edx, 56h ; 'V'
.std:0000000140B9BE02 48 89 5C 24 30                          mov     [rsp+48h+var_18], rbx
.std:0000000140B9BE07 48 89 5C 24 38                          mov     [rsp+48h+var_10], rbx
.std:0000000140B9BE0C E8 1F 3D 26 00                          call    sub_140DFFB30
.std:0000000140B9BE11 8B 54 24 38                             mov     edx, dword ptr [rsp+48h+var_10]
.std:0000000140B9BE15 8D 42 56                                lea     eax, [rdx+56h]
.std:0000000140B9BE18 89 44 24 38                             mov     dword ptr [rsp+48h+var_10], eax
.std:0000000140B9BE1C 3B 44 24 3C                             cmp     eax, dword ptr [rsp+48h+var_10+4]
.std:0000000140B9BE20 7E 0A                                   jle     short loc_140B9BE2C
.std:0000000140B9BE22 48 8D 4C 24 30                          lea     rcx, [rsp+48h+var_18]
.std:0000000140B9BE27 E8 24 3C 26 00                          call    sub_140DFFA50
.std:0000000140B9BE2C
.std:0000000140B9BE2C                         loc_140B9BE2C:                          ; CODE XREF: sub_140B9BDF0+30↑j
.std:0000000140B9BE2C 48 8D 4C 24 30                          lea     rcx, [rsp+48h+var_18]
.std:0000000140B9BE31 FF 15 49 1C A7 18                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:0000000140B9BE37 41 B8 AC 00 00 00                       mov     r8d, 0ACh
.std:0000000140B9BE3D 48 8D 15 2C 08 71 16                    lea     rdx, aGtB0RtB1RhiB2H_0 ; "GT:b0,RT:b1,RHI:b2,HPTask:b3,NPTask:bs|"...
.std:0000000140B9BE44 48 8B C8                                mov     rcx, rax
.std:0000000140B9BE47 E8 94 F4 39 0E                          call    sub_14EF3B2E0
.std:0000000140B9BE4C 48 8B 0D 9D 0B 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BE53 48 85 C9                                test    rcx, rcx
.std:0000000140B9BE56 75 0C                                   jnz     short loc_140B9BE64
.std:0000000140B9BE58 E8 23 75 3A 0E                          call    sub_14EF43380
.std:0000000140B9BE5D 48 8B 0D 8C 0B 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BE64
.std:0000000140B9BE64                         loc_140B9BE64:                          ; CODE XREF: sub_140B9BDF0+66↑j
.std:0000000140B9BE64 48 8B 01                                mov     rax, [rcx]
.std:0000000140B9BE67 4C 8D 0D B2 05 71 16                    lea     r9, aSetsTheThreadA ; "Sets the thread affinity. Pairs of args"...
.std:0000000140B9BE6E 4C 8D 44 24 30                          lea     r8, [rsp+48h+var_18]
.std:0000000140B9BE73 89 5C 24 20                             mov     [rsp+48h+var_28], ebx
.std:0000000140B9BE77 48 8D 15 A2 08 71 16                    lea     rdx, aTThreadaffinit_1 ; "t.ThreadAffinity_InGame"
.std:0000000140B9BE7E FF 10                                   call    qword ptr [rax]
.std:0000000140B9BE80 48 8D 0D 01 5F 54 12                    lea     rcx, off_1530E1D88
.std:0000000140B9BE87 48 89 05 E2 85 91 19                    mov     cs:qword_15A4B4470, rax
.std:0000000140B9BE8E 48 89 0D D3 85 91 19                    mov     cs:off_15A4B4468, rcx
.std:0000000140B9BE95 48 8B C8                                mov     rcx, rax
.std:0000000140B9BE98 48 8B 10                                mov     rdx, [rax]
.std:0000000140B9BE9B FF 52 68                                call    qword ptr [rdx+68h]
.std:0000000140B9BE9E 48 8D 4C 24 30                          lea     rcx, [rsp+48h+var_18]
.std:0000000140B9BEA3 48 89 05 CE 85 91 19                    mov     cs:qword_15A4B4478, rax
.std:0000000140B9BEAA E8 21 3A 26 00                          call    sub_140DFF8D0
.std:0000000140B9BEAF 48 8D 0D DA 3C 25 12                    lea     rcx, sub_152DEFB90
.std:0000000140B9BEB6 48 83 C4 40                             add     rsp, 40h
.std:0000000140B9BEBA 5B                                      pop     rbx
.std:0000000140B9BEBB E9 AC A1 FB 11                          jmp     sub_152B5606C
.std:0000000140B9BEBB                         sub_140B9BDF0   endp
.std:0000000140B9BEBB
.std:0000000140B9BEC0
.std:0000000140B9BEC0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9BEC0
.std:0000000140B9BEC0
.std:0000000140B9BEC0                         sub_140B9BEC0   proc near
.std:0000000140B9BEC0
.std:0000000140B9BEC0                         var_18          = dword ptr -18h
.std:0000000140B9BEC0
.std:0000000140B9BEC0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9BEC4 48 8B 0D 25 0B 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BECB 48 85 C9                                test    rcx, rcx
.std:0000000140B9BECE 75 0C                                   jnz     short loc_140B9BEDC
.std:0000000140B9BED0 E8 AB 74 3A 0E                          call    sub_14EF43380
.std:0000000140B9BED5 48 8B 0D 14 0B 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BEDC
.std:0000000140B9BEDC                         loc_140B9BEDC:                          ; CODE XREF: sub_140B9BEC0+E↑j
.std:0000000140B9BEDC 48 8B 01                                mov     rax, [rcx]
.std:0000000140B9BEDF 4C 8D 0D 2A 0D 71 16                    lea     r9, aTimeInSecondsG ; "Time in seconds (game time) we should w"...
.std:0000000140B9BEE6 4C 8D 05 13 F7 A7 18                    lea     r8, unk_15961B600
.std:0000000140B9BEED C7 44 24 20 00 00 00 00                 mov     [rsp+38h+var_18], 0
.std:0000000140B9BEF5 48 8D 15 A4 0D 71 16                    lea     rdx, aMFnameTimebetw ; "m.fname.TimeBetweenFreeMmapBlocks"
.std:0000000140B9BEFC FF 50 30                                call    qword ptr [rax+30h]
.std:0000000140B9BEFF 48 89 05 72 88 91 19                    mov     cs:qword_15A4B4778, rax
.std:0000000140B9BF06 48 8D 0D D3 3C 25 12                    lea     rcx, sub_152DEFBE0
.std:0000000140B9BF0D 48 8D 05 6C 5E 54 12                    lea     rax, off_1530E1D80
.std:0000000140B9BF14 48 89 05 55 88 91 19                    mov     cs:off_15A4B4770, rax
.std:0000000140B9BF1B 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9BF1F E9 48 A1 FB 11                          jmp     sub_152B5606C
.std:0000000140B9BF1F                         sub_140B9BEC0   endp
.std:0000000140B9BF1F
.std:0000000140B9BF1F                         ; ---------------------------------------------------------------------------
.std:0000000140B9BF24 CC CC CC CC CC CC CC CC…                align 10h
.std:0000000140B9BF30
.std:0000000140B9BF30                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9BF30
.std:0000000140B9BF30
.std:0000000140B9BF30                         sub_140B9BF30   proc near
.std:0000000140B9BF30
.std:0000000140B9BF30                         var_18          = dword ptr -18h
.std:0000000140B9BF30
.std:0000000140B9BF30 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9BF34 48 8B 0D B5 0A 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BF3B 48 85 C9                                test    rcx, rcx
.std:0000000140B9BF3E 75 0C                                   jnz     short loc_140B9BF4C
.std:0000000140B9BF40 E8 3B 74 3A 0E                          call    sub_14EF43380
.std:0000000140B9BF45 48 8B 0D A4 0A 86 19                    mov     rcx, cs:qword_15A3FC9F0
.std:0000000140B9BF4C
.std:0000000140B9BF4C                         loc_140B9BF4C:                          ; CODE XREF: sub_140B9BF30+E↑j
.std:0000000140B9BF4C 48 8B 01                                mov     rax, [rcx]
.std:0000000140B9BF4F 4C 8D 0D 92 03 71 16                    lea     r9, aDefault0Enable_0 ; "Default: 0:Enable, 1:Disable "
.std:0000000140B9BF56 4C 8D 05 9F F6 A7 18                    lea     r8, byte_15961B5FC
.std:0000000140B9BF5D C7 44 24 20 00 00 00 00                 mov     [rsp+38h+var_18], 0
.std:0000000140B9BF65 48 8D 15 BC 03 71 16                    lea     rdx, aTUseaffinity ; "t.UseAffinity"
.std:0000000140B9BF6C FF 50 40                                call    qword ptr [rax+40h]
.std:0000000140B9BF6F 48 89 05 42 87 91 19                    mov     cs:qword_15A4B46B8, rax
.std:0000000140B9BF76 48 8D 0D B3 3C 25 12                    lea     rcx, sub_152DEFC30
.std:0000000140B9BF7D 48 8D 05 FC 5D 54 12                    lea     rax, off_1530E1D80
.std:0000000140B9BF84 48 89 05 25 87 91 19                    mov     cs:off_15A4B46B0, rax
.std:0000000140B9BF8B 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9BF8F E9 D8 A0 FB 11                          jmp     sub_152B5606C
.std:0000000140B9BF8F                         sub_140B9BF30   endp
.std:0000000140B9BF8F
.std:0000000140B9BF8F                         ; ---------------------------------------------------------------------------
.std:0000000140B9BF94 CC                                      db 0CCh
.std:0000000140B9BF95 CC                                      db 0CCh
.std:0000000140B9BF96 CC                                      db 0CCh
.std:0000000140B9BF97 CC                                      db 0CCh
.std:0000000140B9BF98 CC                                      db 0CCh
.std:0000000140B9BF99 CC                                      db 0CCh
.std:0000000140B9BF9A CC                                      db 0CCh
.std:0000000140B9BF9B CC                                      db 0CCh
.std:0000000140B9BF9C CC                                      db 0CCh
.std:0000000140B9BF9D CC                                      db 0CCh
.std:0000000140B9BF9E CC                                      db 0CCh
.std:0000000140B9BF9F CC                                      db 0CCh
.std:0000000140B9BFA0
.std:0000000140B9BFA0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9BFA0
.std:0000000140B9BFA0
.std:0000000140B9BFA0                         sub_140B9BFA0   proc near
.std:0000000140B9BFA0 66 0F 6F 05 F8 4C 54 12                 movdqa  xmm0, cs:xmmword_1530E0CA0
.std:0000000140B9BFA8 0F 29 05 81 83 91 19                    movaps  cs:xmmword_15A4B4330, xmm0
.std:0000000140B9BFAF C3                                      retn
.std:0000000140B9BFAF                         sub_140B9BFA0   endp
.std:0000000140B9BFAF
.std:0000000140B9BFB0
.std:0000000140B9BFB0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9BFB0
.std:0000000140B9BFB0
.std:0000000140B9BFB0                         sub_140B9BFB0   proc near
.std:0000000140B9BFB0 66 0F 6F 05 C8 4C 54 12                 movdqa  xmm0, cs:xmmword_1530E0C80
.std:0000000140B9BFB8 0F 29 05 81 85 91 19                    movaps  cs:xmmword_15A4B4540, xmm0
.std:0000000140B9BFBF C3                                      retn
.std:0000000140B9BFBF                         sub_140B9BFB0   endp
.std:0000000140B9BFBF
.std:0000000140B9BFC0
.std:0000000140B9BFC0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9BFC0
.std:0000000140B9BFC0
.std:0000000140B9BFC0                         sub_140B9BFC0   proc near
.std:0000000140B9BFC0 66 0F 6F 05 28 4D 54 12                 movdqa  xmm0, cs:xmmword_1530E0CF0
.std:0000000140B9BFC8 0F 29 05 D1 83 91 19                    movaps  cs:xmmword_15A4B43A0, xmm0
.std:0000000140B9BFCF C3                                      retn
.std:0000000140B9BFCF                         sub_140B9BFC0   endp
.std:0000000140B9BFCF
.std:0000000140B9BFD0
.std:0000000140B9BFD0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9BFD0
.std:0000000140B9BFD0
.std:0000000140B9BFD0                         sub_140B9BFD0   proc near
.std:0000000140B9BFD0 66 0F 6F 05 58 4E 54 12                 movdqa  xmm0, cs:xmmword_1530E0E30
.std:0000000140B9BFD8 0F 29 05 31 86 91 19                    movaps  cs:xmmword_15A4B4610, xmm0
.std:0000000140B9BFDF C3                                      retn
.std:0000000140B9BFDF                         sub_140B9BFD0   endp
.std:0000000140B9BFDF
.std:0000000140B9BFE0
.std:0000000140B9BFE0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9BFE0
.std:0000000140B9BFE0
.std:0000000140B9BFE0                         sub_140B9BFE0   proc near
.std:0000000140B9BFE0 66 0F 6F 05 A8 4D 54 12                 movdqa  xmm0, cs:xmmword_1530E0D90
.std:0000000140B9BFE8 0F 29 05 01 85 91 19                    movaps  cs:xmmword_15A4B44F0, xmm0
.std:0000000140B9BFEF C3                                      retn
.std:0000000140B9BFEF                         sub_140B9BFE0   endp
.std:0000000140B9BFEF
.std:0000000140B9BFF0
.std:0000000140B9BFF0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9BFF0
.std:0000000140B9BFF0
.std:0000000140B9BFF0                         sub_140B9BFF0   proc near
.std:0000000140B9BFF0 66 0F 6F 05 A8 4D 54 12                 movdqa  xmm0, cs:xmmword_1530E0DA0
.std:0000000140B9BFF8 0F 29 05 E1 87 91 19                    movaps  cs:xmmword_15A4B47E0, xmm0
.std:0000000140B9BFFF C3                                      retn
.std:0000000140B9BFFF                         sub_140B9BFF0   endp
.std:0000000140B9BFFF
.std:0000000140B9C000
.std:0000000140B9C000                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C000
.std:0000000140B9C000
.std:0000000140B9C000                         sub_140B9C000   proc near
.std:0000000140B9C000 66 0F 6F 05 A8 4D 54 12                 movdqa  xmm0, cs:xmmword_1530E0DB0
.std:0000000140B9C008 0F 29 05 D1 84 91 19                    movaps  cs:xmmword_15A4B44E0, xmm0
.std:0000000140B9C00F C3                                      retn
.std:0000000140B9C00F                         sub_140B9C000   endp
.std:0000000140B9C00F
.std:0000000140B9C010
.std:0000000140B9C010                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C010
.std:0000000140B9C010
.std:0000000140B9C010                         sub_140B9C010   proc near
.std:0000000140B9C010 66 0F 6F 05 A8 4D 54 12                 movdqa  xmm0, cs:xmmword_1530E0DC0
.std:0000000140B9C018 0F 29 05 E1 82 91 19                    movaps  cs:xmmword_15A4B4300, xmm0
.std:0000000140B9C01F C3                                      retn
.std:0000000140B9C01F                         sub_140B9C010   endp
.std:0000000140B9C01F
.std:0000000140B9C020
.std:0000000140B9C020                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C020
.std:0000000140B9C020
.std:0000000140B9C020                         sub_140B9C020   proc near
.std:0000000140B9C020 66 0F 6F 05 18 4D 54 12                 movdqa  xmm0, cs:xmmword_1530E0D40
.std:0000000140B9C028 0F 29 05 A1 83 91 19                    movaps  cs:xmmword_15A4B43D0, xmm0
.std:0000000140B9C02F C3                                      retn
.std:0000000140B9C02F                         sub_140B9C020   endp
.std:0000000140B9C02F
.std:0000000140B9C030
.std:0000000140B9C030                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C030
.std:0000000140B9C030
.std:0000000140B9C030                         sub_140B9C030   proc near
.std:0000000140B9C030 66 0F 6F 05 B8 4D 54 12                 movdqa  xmm0, cs:xmmword_1530E0DF0
.std:0000000140B9C038 66 0F 7F 05 80 86 91 19                 movdqa  cs:xmmword_15A4B46C0, xmm0
.std:0000000140B9C040 C3                                      retn
.std:0000000140B9C040                         sub_140B9C030   endp
.std:0000000140B9C040
.std:0000000140B9C041
.std:0000000140B9C041                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C041
.std:0000000140B9C041
.std:0000000140B9C041                         sub_140B9C041   proc near
.std:0000000140B9C041 CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C042 CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C043 CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C044 CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C045 CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C046 CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C047 CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C048 CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C049 CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C04A CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C04B CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C04C CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C04D CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C04E CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C04F CC                                      int     3               ; Trap to Debugger
.std:0000000140B9C050 66 0F 6F 05 B8 4C 54 12                 movdqa  xmm0, cs:xmmword_1530E0D10
.std:0000000140B9C058 0F 29 05 C1 83 91 19                    movaps  cs:xmmword_15A4B4420, xmm0
.std:0000000140B9C05F C3                                      retn
.std:0000000140B9C05F                         sub_140B9C041   endp
.std:0000000140B9C05F
.std:0000000140B9C060
.std:0000000140B9C060                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C060
.std:0000000140B9C060
.std:0000000140B9C060                         sub_140B9C060   proc near
.std:0000000140B9C060 66 0F 6F 05 08 4E 54 12                 movdqa  xmm0, cs:xmmword_1530E0E70
.std:0000000140B9C068 0F 29 05 51 85 91 19                    movaps  cs:xmmword_15A4B45C0, xmm0
.std:0000000140B9C06F C3                                      retn
.std:0000000140B9C06F                         sub_140B9C060   endp
.std:0000000140B9C06F
.std:0000000140B9C070
.std:0000000140B9C070                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C070
.std:0000000140B9C070
.std:0000000140B9C070                         sub_140B9C070   proc near
.std:0000000140B9C070 66 0F 6F 05 A8 4D 54 12                 movdqa  xmm0, cs:xmmword_1530E0E20
.std:0000000140B9C078 0F 29 05 F1 81 91 19                    movaps  cs:xmmword_15A4B4270, xmm0
.std:0000000140B9C07F C3                                      retn
.std:0000000140B9C07F                         sub_140B9C070   endp
.std:0000000140B9C07F
.std:0000000140B9C080
.std:0000000140B9C080                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C080
.std:0000000140B9C080
.std:0000000140B9C080                         sub_140B9C080   proc near
.std:0000000140B9C080 66 0F 6F 05 F8 4D 54 12                 movdqa  xmm0, cs:xmmword_1530E0E80
.std:0000000140B9C088 0F 29 05 41 85 91 19                    movaps  cs:xmmword_15A4B45D0, xmm0
.std:0000000140B9C08F C3                                      retn
.std:0000000140B9C08F                         sub_140B9C080   endp
.std:0000000140B9C08F
.std:0000000140B9C090
.std:0000000140B9C090                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C090
.std:0000000140B9C090
.std:0000000140B9C090                         sub_140B9C090   proc near
.std:0000000140B9C090 66 0F 6F 05 38 4D 54 12                 movdqa  xmm0, cs:xmmword_1530E0DD0
.std:0000000140B9C098 0F 29 05 71 84 91 19                    movaps  cs:xmmword_15A4B4510, xmm0
.std:0000000140B9C09F C3                                      retn
.std:0000000140B9C09F                         sub_140B9C090   endp
.std:0000000140B9C09F
.std:0000000140B9C0A0
.std:0000000140B9C0A0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C0A0
.std:0000000140B9C0A0
.std:0000000140B9C0A0                         sub_140B9C0A0   proc near
.std:0000000140B9C0A0 66 0F 6F 05 58 4C 54 12                 movdqa  xmm0, cs:xmmword_1530E0D00
.std:0000000140B9C0A8 0F 29 05 B1 84 91 19                    movaps  cs:xmmword_15A4B4560, xmm0
.std:0000000140B9C0AF C3                                      retn
.std:0000000140B9C0AF                         sub_140B9C0A0   endp
.std:0000000140B9C0AF
.std:0000000140B9C0B0
.std:0000000140B9C0B0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C0B0
.std:0000000140B9C0B0
.std:0000000140B9C0B0                         sub_140B9C0B0   proc near
.std:0000000140B9C0B0 66 0F 6F 05 18 4C 54 12                 movdqa  xmm0, cs:xmmword_1530E0CD0
.std:0000000140B9C0B8 0F 29 05 F1 83 91 19                    movaps  cs:xmmword_15A4B44B0, xmm0
.std:0000000140B9C0BF C3                                      retn
.std:0000000140B9C0BF                         sub_140B9C0B0   endp
.std:0000000140B9C0BF
.std:0000000140B9C0C0
.std:0000000140B9C0C0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C0C0
.std:0000000140B9C0C0
.std:0000000140B9C0C0                         sub_140B9C0C0   proc near
.std:0000000140B9C0C0 66 0F 6F 05 C8 4B 54 12                 movdqa  xmm0, cs:xmmword_1530E0C90
.std:0000000140B9C0C8 0F 29 05 A1 82 91 19                    movaps  cs:xmmword_15A4B4370, xmm0
.std:0000000140B9C0CF C3                                      retn
.std:0000000140B9C0CF                         sub_140B9C0C0   endp
.std:0000000140B9C0CF
.std:0000000140B9C0D0
.std:0000000140B9C0D0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C0D0
.std:0000000140B9C0D0
.std:0000000140B9C0D0                         sub_140B9C0D0   proc near
.std:0000000140B9C0D0 66 0F 6F 05 78 4C 54 12                 movdqa  xmm0, cs:xmmword_1530E0D50
.std:0000000140B9C0D8 0F 29 05 B1 82 91 19                    movaps  cs:xmmword_15A4B4390, xmm0
.std:0000000140B9C0DF C3                                      retn
.std:0000000140B9C0DF                         sub_140B9C0D0   endp
.std:0000000140B9C0DF
.std:0000000140B9C0E0
.std:0000000140B9C0E0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C0E0
.std:0000000140B9C0E0
.std:0000000140B9C0E0                         sub_140B9C0E0   proc near
.std:0000000140B9C0E0 0F 57 C0                                xorps   xmm0, xmm0
.std:0000000140B9C0E3 0F 29 05 D6 83 91 19                    movaps  cs:xmmword_15A4B44C0, xmm0
.std:0000000140B9C0EA C3                                      retn
.std:0000000140B9C0EA                         sub_140B9C0E0   endp
.std:0000000140B9C0EA
.std:0000000140B9C0EA                         ; ---------------------------------------------------------------------------
.std:0000000140B9C0EB CC                                      db 0CCh
.std:0000000140B9C0EC CC                                      db 0CCh
.std:0000000140B9C0ED CC                                      db 0CCh
.std:0000000140B9C0EE CC                                      db 0CCh
.std:0000000140B9C0EF CC                                      db 0CCh
.std:0000000140B9C0F0
.std:0000000140B9C0F0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C0F0
.std:0000000140B9C0F0
.std:0000000140B9C0F0                         sub_140B9C0F0   proc near
.std:0000000140B9C0F0
.std:0000000140B9C0F0                         var_18          = xmmword ptr -18h
.std:0000000140B9C0F0
.std:0000000140B9C0F0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C0F4 0F 10 05 2D F6 A7 18                    movups  xmm0, cs:xmmword_15961B728
.std:0000000140B9C0FB 4C 8D 05 9E 08 71 16                    lea     r8, aDevAnim    ; "Dev-Anim"
.std:0000000140B9C102 BA 02 00 00 00                          mov     edx, 2
.std:0000000140B9C107 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C10C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C111 0F 11 05 E8 86 91 19                    movups  cs:xmmword_15A4B4800, xmm0
.std:0000000140B9C118 E8 D3 90 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C11D 48 8D 0D 5C 3B 25 12                    lea     rcx, sub_152DEFC80
.std:0000000140B9C124 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C128 E9 3F 9F FB 11                          jmp     sub_152B5606C
.std:0000000140B9C128                         sub_140B9C0F0   endp
.std:0000000140B9C128
.std:0000000140B9C128                         ; ---------------------------------------------------------------------------
.std:0000000140B9C12D CC CC CC                                align 10h
.std:0000000140B9C130
.std:0000000140B9C130                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C130
.std:0000000140B9C130
.std:0000000140B9C130                         sub_140B9C130   proc near
.std:0000000140B9C130
.std:0000000140B9C130                         var_18          = xmmword ptr -18h
.std:0000000140B9C130
.std:0000000140B9C130 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C134 0F 10 05 DD F5 A7 18                    movups  xmm0, cs:xmmword_15961B718
.std:0000000140B9C13B 4C 8D 05 3E 08 71 16                    lea     r8, aDevAnimphys ; "Dev-AnimPhys"
.std:0000000140B9C142 BA 11 00 00 00                          mov     edx, 11h
.std:0000000140B9C147 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C14C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C151 0F 11 05 98 85 91 19                    movups  cs:xmmword_15A4B46F0, xmm0
.std:0000000140B9C158 E8 93 90 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C15D 48 8D 0D 2C 3B 25 12                    lea     rcx, sub_152DEFC90
.std:0000000140B9C164 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C168 E9 FF 9E FB 11                          jmp     sub_152B5606C
.std:0000000140B9C168                         sub_140B9C130   endp
.std:0000000140B9C168
.std:0000000140B9C168                         ; ---------------------------------------------------------------------------
.std:0000000140B9C16D CC CC CC                                align 10h
.std:0000000140B9C170
.std:0000000140B9C170                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C170
.std:0000000140B9C170
.std:0000000140B9C170                         sub_140B9C170   proc near
.std:0000000140B9C170
.std:0000000140B9C170                         var_18          = xmmword ptr -18h
.std:0000000140B9C170
.std:0000000140B9C170 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C174 0F 10 05 ED F5 A7 18                    movups  xmm0, cs:xmmword_15961B768
.std:0000000140B9C17B 4C 8D 05 66 08 71 16                    lea     r8, aDevAutomation ; "Dev-Automation"
.std:0000000140B9C182 BA 01 00 00 00                          mov     edx, 1
.std:0000000140B9C187 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C18C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C191 0F 11 05 38 86 91 19                    movups  cs:xmmword_15A4B47D0, xmm0
.std:0000000140B9C198 E8 53 90 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C19D 48 8D 0D FC 3A 25 12                    lea     rcx, sub_152DEFCA0
.std:0000000140B9C1A4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C1A8 E9 BF 9E FB 11                          jmp     sub_152B5606C
.std:0000000140B9C1A8                         sub_140B9C170   endp
.std:0000000140B9C1A8
.std:0000000140B9C1A8                         ; ---------------------------------------------------------------------------
.std:0000000140B9C1AD CC CC CC                                align 10h
.std:0000000140B9C1B0
.std:0000000140B9C1B0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C1B0
.std:0000000140B9C1B0
.std:0000000140B9C1B0                         sub_140B9C1B0   proc near
.std:0000000140B9C1B0
.std:0000000140B9C1B0                         var_18          = xmmword ptr -18h
.std:0000000140B9C1B0
.std:0000000140B9C1B0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C1B4 0F 10 05 5D F4 A7 18                    movups  xmm0, cs:xmmword_15961B618
.std:0000000140B9C1BB 4C 8D 05 E6 05 71 16                    lea     r8, aDevBlueprints ; "Dev-Blueprints"
.std:0000000140B9C1C2 BA 0A 00 00 00                          mov     edx, 0Ah
.std:0000000140B9C1C7 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C1CC 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C1D1 0F 11 05 48 86 91 19                    movups  cs:xmmword_15A4B4820, xmm0
.std:0000000140B9C1D8 E8 13 90 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C1DD 48 8D 0D CC 3A 25 12                    lea     rcx, sub_152DEFCB0
.std:0000000140B9C1E4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C1E8 E9 7F 9E FB 11                          jmp     sub_152B5606C
.std:0000000140B9C1E8                         sub_140B9C1B0   endp
.std:0000000140B9C1E8
.std:0000000140B9C1E8                         ; ---------------------------------------------------------------------------
.std:0000000140B9C1ED CC CC CC                                align 10h
.std:0000000140B9C1F0
.std:0000000140B9C1F0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C1F0
.std:0000000140B9C1F0
.std:0000000140B9C1F0                         sub_140B9C1F0   proc near
.std:0000000140B9C1F0
.std:0000000140B9C1F0                         var_18          = xmmword ptr -18h
.std:0000000140B9C1F0
.std:0000000140B9C1F0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C1F4 0F 10 05 2D F4 A7 18                    movups  xmm0, cs:xmmword_15961B628
.std:0000000140B9C1FB 4C 8D 05 C6 05 71 16                    lea     r8, aDevBuild   ; "Dev-Build"
.std:0000000140B9C202 33 D2                                   xor     edx, edx
.std:0000000140B9C204 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C209 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C20E 0F 11 05 2B 80 91 19                    movups  cs:xmmword_15A4B4240, xmm0
.std:0000000140B9C215 E8 D6 8F 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C21A 48 8D 0D 9F 3A 25 12                    lea     rcx, sub_152DEFCC0
.std:0000000140B9C221 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C225 E9 42 9E FB 11                          jmp     sub_152B5606C
.std:0000000140B9C225                         sub_140B9C1F0   endp
.std:0000000140B9C225
.std:0000000140B9C225                         ; ---------------------------------------------------------------------------
.std:0000000140B9C22A CC CC CC CC CC CC                       align 10h
.std:0000000140B9C230
.std:0000000140B9C230                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C230
.std:0000000140B9C230
.std:0000000140B9C230                         sub_140B9C230   proc near
.std:0000000140B9C230
.std:0000000140B9C230                         var_18          = xmmword ptr -18h
.std:0000000140B9C230
.std:0000000140B9C230 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C234 0F 10 05 6D F5 A7 18                    movups  xmm0, cs:xmmword_15961B7A8
.std:0000000140B9C23B 4C 8D 05 5E 08 71 16                    lea     r8, aDevCinecamera ; "Dev-CineCamera"
.std:0000000140B9C242 BA 01 00 00 00                          mov     edx, 1
.std:0000000140B9C247 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C24C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C251 0F 11 05 E8 84 91 19                    movups  cs:xmmword_15A4B4740, xmm0
.std:0000000140B9C258 E8 93 8F 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C25D 48 8D 0D 6C 3A 25 12                    lea     rcx, sub_152DEFCD0
.std:0000000140B9C264 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C268 E9 FF 9D FB 11                          jmp     sub_152B5606C
.std:0000000140B9C268                         sub_140B9C230   endp
.std:0000000140B9C268
.std:0000000140B9C268                         ; ---------------------------------------------------------------------------
.std:0000000140B9C26D CC CC CC                                align 10h
.std:0000000140B9C270
.std:0000000140B9C270                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C270
.std:0000000140B9C270
.std:0000000140B9C270                         sub_140B9C270   proc near
.std:0000000140B9C270
.std:0000000140B9C270                         var_18          = xmmword ptr -18h
.std:0000000140B9C270
.std:0000000140B9C270 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C274 0F 10 05 BD F3 A7 18                    movups  xmm0, cs:xmmword_15961B638
.std:0000000140B9C27B 4C 8D 05 5E 05 71 16                    lea     r8, aDevCore    ; "Dev-Core"
.std:0000000140B9C282 BA 04 00 00 00                          mov     edx, 4
.std:0000000140B9C287 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C28C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C291 0F 11 05 68 84 91 19                    movups  cs:xmmword_15A4B4700, xmm0
.std:0000000140B9C298 E8 53 8F 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C29D 48 8D 0D 3C 3A 25 12                    lea     rcx, sub_152DEFCE0
.std:0000000140B9C2A4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C2A8 E9 BF 9D FB 11                          jmp     sub_152B5606C
.std:0000000140B9C2A8                         sub_140B9C270   endp
.std:0000000140B9C2A8
.std:0000000140B9C2A8                         ; ---------------------------------------------------------------------------
.std:0000000140B9C2AD CC CC CC                                align 10h
.std:0000000140B9C2B0
.std:0000000140B9C2B0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C2B0
.std:0000000140B9C2B0
.std:0000000140B9C2B0                         sub_140B9C2B0   proc near
.std:0000000140B9C2B0
.std:0000000140B9C2B0                         var_18          = xmmword ptr -18h
.std:0000000140B9C2B0
.std:0000000140B9C2B0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C2B4 0F 10 05 3D F5 A7 18                    movups  xmm0, cs:xmmword_15961B7F8
.std:0000000140B9C2BB 4C 8D 05 6E 08 71 16                    lea     r8, aDevDfhd    ; "Dev-DFHD"
.std:0000000140B9C2C2 BA 04 00 00 00                          mov     edx, 4
.std:0000000140B9C2C7 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C2CC 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C2D1 0F 11 05 68 83 91 19                    movups  cs:xmmword_15A4B4640, xmm0
.std:0000000140B9C2D8 E8 13 8F 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C2DD 48 8D 0D 0C 3A 25 12                    lea     rcx, sub_152DEFCF0
.std:0000000140B9C2E4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C2E8 E9 7F 9D FB 11                          jmp     sub_152B5606C
.std:0000000140B9C2E8                         sub_140B9C2B0   endp
.std:0000000140B9C2E8
.std:0000000140B9C2E8                         ; ---------------------------------------------------------------------------
.std:0000000140B9C2ED CC CC CC                                align 10h
.std:0000000140B9C2F0
.std:0000000140B9C2F0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C2F0
.std:0000000140B9C2F0
.std:0000000140B9C2F0                         sub_140B9C2F0   proc near
.std:0000000140B9C2F0
.std:0000000140B9C2F0                         var_18          = xmmword ptr -18h
.std:0000000140B9C2F0
.std:0000000140B9C2F0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C2F4 0F 10 05 8D F4 A7 18                    movups  xmm0, cs:xmmword_15961B788
.std:0000000140B9C2FB 4C 8D 05 5E 07 71 16                    lea     r8, aDevDestruction ; "Dev-Destruction"
.std:0000000140B9C302 BA 09 00 00 00                          mov     edx, 9
.std:0000000140B9C307 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C30C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C311 0F 11 05 18 84 91 19                    movups  cs:xmmword_15A4B4730, xmm0
.std:0000000140B9C318 E8 D3 8E 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C31D 48 8D 0D DC 39 25 12                    lea     rcx, sub_152DEFD00
.std:0000000140B9C324 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C328 E9 3F 9D FB 11                          jmp     sub_152B5606C
.std:0000000140B9C328                         sub_140B9C2F0   endp
.std:0000000140B9C328
.std:0000000140B9C328                         ; ---------------------------------------------------------------------------
.std:0000000140B9C32D CC CC CC                                align 10h
.std:0000000140B9C330
.std:0000000140B9C330                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C330
.std:0000000140B9C330
.std:0000000140B9C330                         sub_140B9C330   proc near
.std:0000000140B9C330
.std:0000000140B9C330                         var_18          = xmmword ptr -18h
.std:0000000140B9C330
.std:0000000140B9C330 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C334 0F 10 05 0D F3 A7 18                    movups  xmm0, cs:xmmword_15961B648
.std:0000000140B9C33B 4C 8D 05 B6 04 71 16                    lea     r8, aDevEditor  ; "Dev-Editor"
.std:0000000140B9C342 BA 25 00 00 00                          mov     edx, 25h ; '%'
.std:0000000140B9C347 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C34C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C351 0F 11 05 C8 81 91 19                    movups  cs:xmmword_15A4B4520, xmm0
.std:0000000140B9C358 E8 93 8E 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C35D 48 8D 0D AC 39 25 12                    lea     rcx, sub_152DEFD10
.std:0000000140B9C364 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C368 E9 FF 9C FB 11                          jmp     sub_152B5606C
.std:0000000140B9C368                         sub_140B9C330   endp
.std:0000000140B9C368
.std:0000000140B9C368                         ; ---------------------------------------------------------------------------
.std:0000000140B9C36D CC CC CC                                align 10h
.std:0000000140B9C370
.std:0000000140B9C370                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C370
.std:0000000140B9C370
.std:0000000140B9C370                         sub_140B9C370   proc near
.std:0000000140B9C370
.std:0000000140B9C370                         var_18          = xmmword ptr -18h
.std:0000000140B9C370
.std:0000000140B9C370 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C374 0F 10 05 DD F2 A7 18                    movups  xmm0, cs:xmmword_15961B658
.std:0000000140B9C37B 4C 8D 05 A6 06 71 16                    lea     r8, aDevEnterprise ; "Dev-Enterprise"
.std:0000000140B9C382 BA 08 00 00 00                          mov     edx, 8
.std:0000000140B9C387 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C38C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C391 0F 11 05 18 82 91 19                    movups  cs:xmmword_15A4B45B0, xmm0
.std:0000000140B9C398 E8 53 8E 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C39D 48 8D 0D 7C 39 25 12                    lea     rcx, sub_152DEFD20
.std:0000000140B9C3A4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C3A8 E9 BF 9C FB 11                          jmp     sub_152B5606C
.std:0000000140B9C3A8                         sub_140B9C370   endp
.std:0000000140B9C3A8
.std:0000000140B9C3A8                         ; ---------------------------------------------------------------------------
.std:0000000140B9C3AD CC CC CC                                align 10h
.std:0000000140B9C3B0
.std:0000000140B9C3B0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C3B0
.std:0000000140B9C3B0
.std:0000000140B9C3B0                         sub_140B9C3B0   proc near
.std:0000000140B9C3B0
.std:0000000140B9C3B0                         var_18          = xmmword ptr -18h
.std:0000000140B9C3B0
.std:0000000140B9C3B0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C3B4 0F 10 05 DD F3 A7 18                    movups  xmm0, cs:xmmword_15961B798
.std:0000000140B9C3BB 4C 8D 05 BE 06 71 16                    lea     r8, aDevPhysicsExt ; "Dev-Physics-Ext"
.std:0000000140B9C3C2 BA 08 00 00 00                          mov     edx, 8
.std:0000000140B9C3C7 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C3CC 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C3D1 0F 11 05 28 82 91 19                    movups  cs:xmmword_15A4B4600, xmm0
.std:0000000140B9C3D8 E8 13 8E 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C3DD 48 8D 0D 4C 39 25 12                    lea     rcx, sub_152DEFD30
.std:0000000140B9C3E4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C3E8 E9 7F 9C FB 11                          jmp     sub_152B5606C
.std:0000000140B9C3E8                         sub_140B9C3B0   endp
.std:0000000140B9C3E8
.std:0000000140B9C3E8                         ; ---------------------------------------------------------------------------
.std:0000000140B9C3ED CC CC CC                                align 10h
.std:0000000140B9C3F0
.std:0000000140B9C3F0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C3F0
.std:0000000140B9C3F0
.std:0000000140B9C3F0                         sub_140B9C3F0   proc near
.std:0000000140B9C3F0
.std:0000000140B9C3F0                         var_18          = xmmword ptr -18h
.std:0000000140B9C3F0
.std:0000000140B9C3F0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C3F4 0F 10 05 3D F3 A7 18                    movups  xmm0, cs:xmmword_15961B738
.std:0000000140B9C3FB 4C 8D 05 06 06 71 16                    lea     r8, aFortnitemain ; "FortniteMain"
.std:0000000140B9C402 BA 1F 00 00 00                          mov     edx, 1Fh
.std:0000000140B9C407 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C40C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C411 0F 11 05 A8 7F 91 19                    movups  cs:xmmword_15A4B43C0, xmm0
.std:0000000140B9C418 E8 D3 8D 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C41D 48 8D 0D 1C 39 25 12                    lea     rcx, sub_152DEFD40
.std:0000000140B9C424 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C428 E9 3F 9C FB 11                          jmp     sub_152B5606C
.std:0000000140B9C428                         sub_140B9C3F0   endp
.std:0000000140B9C428
.std:0000000140B9C428                         ; ---------------------------------------------------------------------------
.std:0000000140B9C42D CC CC CC                                align 10h
.std:0000000140B9C430
.std:0000000140B9C430                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C430
.std:0000000140B9C430
.std:0000000140B9C430                         sub_140B9C430   proc near
.std:0000000140B9C430
.std:0000000140B9C430                         var_18          = xmmword ptr -18h
.std:0000000140B9C430
.std:0000000140B9C430 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C434 0F 10 05 2D F2 A7 18                    movups  xmm0, cs:xmmword_15961B668
.std:0000000140B9C43B 4C 8D 05 CE 03 71 16                    lea     r8, aDevFramework ; "Dev-Framework"
.std:0000000140B9C442 BA 24 00 00 00                          mov     edx, 24h ; '$'
.std:0000000140B9C447 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C44C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C451 0F 11 05 48 83 91 19                    movups  cs:xmmword_15A4B47A0, xmm0
.std:0000000140B9C458 E8 93 8D 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C45D 48 8D 0D EC 38 25 12                    lea     rcx, sub_152DEFD50
.std:0000000140B9C464 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C468 E9 FF 9B FB 11                          jmp     sub_152B5606C
.std:0000000140B9C468                         sub_140B9C430   endp
.std:0000000140B9C468
.std:0000000140B9C468                         ; ---------------------------------------------------------------------------
.std:0000000140B9C46D CC CC CC                                align 10h
.std:0000000140B9C470
.std:0000000140B9C470                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C470
.std:0000000140B9C470
.std:0000000140B9C470                         sub_140B9C470   proc near
.std:0000000140B9C470
.std:0000000140B9C470                         var_18          = xmmword ptr -18h
.std:0000000140B9C470
.std:0000000140B9C470 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C474 0F 10 05 8D F2 A7 18                    movups  xmm0, cs:xmmword_15961B708
.std:0000000140B9C47B 4C 8D 05 D6 04 71 16                    lea     r8, aPrivateGeometr ; "Private-Geometry"
.std:0000000140B9C482 BA 03 00 00 00                          mov     edx, 3
.std:0000000140B9C487 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C48C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C491 0F 11 05 58 81 91 19                    movups  cs:xmmword_15A4B45F0, xmm0
.std:0000000140B9C498 E8 53 8D 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C49D 48 8D 0D BC 38 25 12                    lea     rcx, sub_152DEFD60
.std:0000000140B9C4A4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C4A8 E9 BF 9B FB 11                          jmp     sub_152B5606C
.std:0000000140B9C4A8                         sub_140B9C470   endp
.std:0000000140B9C4A8
.std:0000000140B9C4A8                         ; ---------------------------------------------------------------------------
.std:0000000140B9C4AD CC CC CC                                align 10h
.std:0000000140B9C4B0
.std:0000000140B9C4B0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C4B0
.std:0000000140B9C4B0
.std:0000000140B9C4B0                         sub_140B9C4B0   proc near
.std:0000000140B9C4B0
.std:0000000140B9C4B0                         var_18          = xmmword ptr -18h
.std:0000000140B9C4B0
.std:0000000140B9C4B0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C4B4 0F 10 05 9D F2 A7 18                    movups  xmm0, cs:xmmword_15961B758
.std:0000000140B9C4BB 4C 8D 05 76 04 71 16                    lea     r8, aDevLoadtimes ; "Dev-LoadTimes"
.std:0000000140B9C4C2 BA 01 00 00 00                          mov     edx, 1
.std:0000000140B9C4C7 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C4CC 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C4D1 0F 11 05 58 83 91 19                    movups  cs:xmmword_15A4B4830, xmm0
.std:0000000140B9C4D8 E8 13 8D 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C4DD 48 8D 0D 8C 38 25 12                    lea     rcx, sub_152DEFD70
.std:0000000140B9C4E4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C4E8 E9 7F 9B FB 11                          jmp     sub_152B5606C
.std:0000000140B9C4E8                         sub_140B9C4B0   endp
.std:0000000140B9C4E8
.std:0000000140B9C4E8                         ; ---------------------------------------------------------------------------
.std:0000000140B9C4ED CC CC CC                                align 10h
.std:0000000140B9C4F0
.std:0000000140B9C4F0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C4F0
.std:0000000140B9C4F0
.std:0000000140B9C4F0                         sub_140B9C4F0   proc near
.std:0000000140B9C4F0
.std:0000000140B9C4F0                         var_18          = xmmword ptr -18h
.std:0000000140B9C4F0
.std:0000000140B9C4F0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C4F4 0F 10 05 DD F1 A7 18                    movups  xmm0, cs:xmmword_15961B6D8
.std:0000000140B9C4FB 4C 8D 05 D6 03 71 16                    lea     r8, aDevMaterialexp ; "Dev-MaterialExpression"
.std:0000000140B9C502 BA 01 00 00 00                          mov     edx, 1
.std:0000000140B9C507 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C50C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C511 0F 11 05 68 7E 91 19                    movups  cs:xmmword_15A4B4380, xmm0
.std:0000000140B9C518 E8 D3 8C 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C51D 48 8D 0D 5C 38 25 12                    lea     rcx, sub_152DEFD80
.std:0000000140B9C524 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C528 E9 3F 9B FB 11                          jmp     sub_152B5606C
.std:0000000140B9C528                         sub_140B9C4F0   endp
.std:0000000140B9C528
.std:0000000140B9C528                         ; ---------------------------------------------------------------------------
.std:0000000140B9C52D CC CC CC                                align 10h
.std:0000000140B9C530
.std:0000000140B9C530                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C530
.std:0000000140B9C530
.std:0000000140B9C530                         sub_140B9C530   proc near
.std:0000000140B9C530
.std:0000000140B9C530                         var_18          = xmmword ptr -18h
.std:0000000140B9C530
.std:0000000140B9C530 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C534 0F 10 05 7D F2 A7 18                    movups  xmm0, cs:xmmword_15961B7B8
.std:0000000140B9C53B 4C 8D 05 BE 05 71 16                    lea     r8, aDevMaterialins ; "Dev-MaterialInstance"
.std:0000000140B9C542 BA 04 00 00 00                          mov     edx, 4
.std:0000000140B9C547 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C54C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C551 0F 11 05 F8 7C 91 19                    movups  cs:xmmword_15A4B4250, xmm0
.std:0000000140B9C558 E8 93 8C 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C55D 48 8D 0D 2C 38 25 12                    lea     rcx, sub_152DEFD90
.std:0000000140B9C564 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C568 E9 FF 9A FB 11                          jmp     sub_152B5606C
.std:0000000140B9C568                         sub_140B9C530   endp
.std:0000000140B9C568
.std:0000000140B9C568                         ; ---------------------------------------------------------------------------
.std:0000000140B9C56D CC CC CC                                align 10h
.std:0000000140B9C570
.std:0000000140B9C570                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C570
.std:0000000140B9C570
.std:0000000140B9C570                         sub_140B9C570   proc near
.std:0000000140B9C570
.std:0000000140B9C570                         var_18          = xmmword ptr -18h
.std:0000000140B9C570
.std:0000000140B9C570 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C574 0F 10 05 4D F2 A7 18                    movups  xmm0, cs:xmmword_15961B7C8
.std:0000000140B9C57B 4C 8D 05 C6 05 71 16                    lea     r8, aDevShaderstrip ; "Dev-ShaderStrip"
.std:0000000140B9C582 BA 01 00 00 00                          mov     edx, 1
.std:0000000140B9C587 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C58C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C591 0F 11 05 58 82 91 19                    movups  cs:xmmword_15A4B47F0, xmm0
.std:0000000140B9C598 E8 53 8C 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C59D 48 8D 0D FC 37 25 12                    lea     rcx, sub_152DEFDA0
.std:0000000140B9C5A4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C5A8 E9 BF 9A FB 11                          jmp     sub_152B5606C
.std:0000000140B9C5A8                         sub_140B9C570   endp
.std:0000000140B9C5A8
.std:0000000140B9C5A8                         ; ---------------------------------------------------------------------------
.std:0000000140B9C5AD CC CC CC                                align 10h
.std:0000000140B9C5B0
.std:0000000140B9C5B0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C5B0
.std:0000000140B9C5B0
.std:0000000140B9C5B0                         sub_140B9C5B0   proc near
.std:0000000140B9C5B0
.std:0000000140B9C5B0                         var_18          = xmmword ptr -18h
.std:0000000140B9C5B0
.std:0000000140B9C5B0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C5B4 0F 10 05 2D F2 A7 18                    movups  xmm0, cs:xmmword_15961B7E8
.std:0000000140B9C5BB 4C 8D 05 FE 04 71 16                    lea     r8, aMobilecombines ; "MobileCombineShadowSDF2Alpha"
.std:0000000140B9C5C2 BA 01 00 00 00                          mov     edx, 1
.std:0000000140B9C5C7 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C5CC 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C5D1 0F 11 05 28 7E 91 19                    movups  cs:xmmword_15A4B4400, xmm0
.std:0000000140B9C5D8 E8 13 8C 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C5DD 48 8D 0D CC 37 25 12                    lea     rcx, sub_152DEFDB0
.std:0000000140B9C5E4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C5E8 E9 7F 9A FB 11                          jmp     sub_152B5606C
.std:0000000140B9C5E8                         sub_140B9C5B0   endp
.std:0000000140B9C5E8
.std:0000000140B9C5E8                         ; ---------------------------------------------------------------------------
.std:0000000140B9C5ED CC CC CC                                align 10h
.std:0000000140B9C5F0
.std:0000000140B9C5F0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C5F0
.std:0000000140B9C5F0
.std:0000000140B9C5F0                         sub_140B9C5F0   proc near
.std:0000000140B9C5F0
.std:0000000140B9C5F0                         var_18          = xmmword ptr -18h
.std:0000000140B9C5F0
.std:0000000140B9C5F0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C5F4 0F 10 05 7D F0 A7 18                    movups  xmm0, cs:xmmword_15961B678
.std:0000000140B9C5FB 4C 8D 05 2E 02 71 16                    lea     r8, aDevMobile  ; "Dev-Mobile"
.std:0000000140B9C602 BA 02 00 00 00                          mov     edx, 2
.std:0000000140B9C607 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C60C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C611 0F 11 05 18 80 91 19                    movups  cs:xmmword_15A4B4630, xmm0
.std:0000000140B9C618 E8 D3 8B 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C61D 48 8D 0D 9C 37 25 12                    lea     rcx, sub_152DEFDC0
.std:0000000140B9C624 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C628 E9 3F 9A FB 11                          jmp     sub_152B5606C
.std:0000000140B9C628                         sub_140B9C5F0   endp
.std:0000000140B9C628
.std:0000000140B9C628                         ; ---------------------------------------------------------------------------
.std:0000000140B9C62D CC CC CC                                align 10h
.std:0000000140B9C630
.std:0000000140B9C630                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C630
.std:0000000140B9C630
.std:0000000140B9C630                         sub_140B9C630   proc near
.std:0000000140B9C630
.std:0000000140B9C630                         var_18          = xmmword ptr -18h
.std:0000000140B9C630
.std:0000000140B9C630 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C634 0F 10 05 4D F0 A7 18                    movups  xmm0, cs:xmmword_15961B688
.std:0000000140B9C63B 4C 8D 05 06 02 71 16                    lea     r8, aDevNetworking ; "Dev-Networking"
.std:0000000140B9C642 33 D2                                   xor     edx, edx
.std:0000000140B9C644 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C649 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C64E 0F 11 05 FB 80 91 19                    movups  cs:xmmword_15A4B4750, xmm0
.std:0000000140B9C655 E8 96 8B 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C65A 48 8D 0D 6F 37 25 12                    lea     rcx, sub_152DEFDD0
.std:0000000140B9C661 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C665 E9 02 9A FB 11                          jmp     sub_152B5606C
.std:0000000140B9C665                         sub_140B9C630   endp
.std:0000000140B9C665
.std:0000000140B9C665                         ; ---------------------------------------------------------------------------
.std:0000000140B9C66A CC CC CC CC CC CC                       align 10h
.std:0000000140B9C670
.std:0000000140B9C670                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C670
.std:0000000140B9C670
.std:0000000140B9C670                         sub_140B9C670   proc near
.std:0000000140B9C670
.std:0000000140B9C670                         var_18          = xmmword ptr -18h
.std:0000000140B9C670
.std:0000000140B9C670 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C674 0F 10 05 FD F0 A7 18                    movups  xmm0, cs:xmmword_15961B778
.std:0000000140B9C67B 4C 8D 05 C6 03 71 16                    lea     r8, aDevNiagara ; "Dev-Niagara"
.std:0000000140B9C682 BA 01 00 00 00                          mov     edx, 1
.std:0000000140B9C687 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C68C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C691 0F 11 05 78 7D 91 19                    movups  cs:xmmword_15A4B4410, xmm0
.std:0000000140B9C698 E8 53 8B 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C69D 48 8D 0D 3C 37 25 12                    lea     rcx, sub_152DEFDE0
.std:0000000140B9C6A4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C6A8 E9 BF 99 FB 11                          jmp     sub_152B5606C
.std:0000000140B9C6A8                         sub_140B9C670   endp
.std:0000000140B9C6A8
.std:0000000140B9C6A8                         ; ---------------------------------------------------------------------------
.std:0000000140B9C6AD CC CC CC                                align 10h
.std:0000000140B9C6B0
.std:0000000140B9C6B0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C6B0
.std:0000000140B9C6B0
.std:0000000140B9C6B0                         sub_140B9C6B0   proc near
.std:0000000140B9C6B0
.std:0000000140B9C6B0                         var_18          = xmmword ptr -18h
.std:0000000140B9C6B0
.std:0000000140B9C6B0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C6B4 0F 10 05 DD EF A7 18                    movups  xmm0, cs:xmmword_15961B698
.std:0000000140B9C6BB 4C 8D 05 A6 01 71 16                    lea     r8, aDevOnline  ; "Dev-Online"
.std:0000000140B9C6C2 33 D2                                   xor     edx, edx
.std:0000000140B9C6C4 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C6C9 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C6CE 0F 11 05 4B 80 91 19                    movups  cs:xmmword_15A4B4720, xmm0
.std:0000000140B9C6D5 E8 16 8B 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C6DA 48 8D 0D 0F 37 25 12                    lea     rcx, sub_152DEFDF0
.std:0000000140B9C6E1 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C6E5 E9 82 99 FB 11                          jmp     sub_152B5606C
.std:0000000140B9C6E5                         sub_140B9C6B0   endp
.std:0000000140B9C6E5
.std:0000000140B9C6E5                         ; ---------------------------------------------------------------------------
.std:0000000140B9C6EA CC CC CC CC CC CC                       align 10h
.std:0000000140B9C6F0
.std:0000000140B9C6F0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C6F0
.std:0000000140B9C6F0
.std:0000000140B9C6F0                         sub_140B9C6F0   proc near
.std:0000000140B9C6F0
.std:0000000140B9C6F0                         var_18          = xmmword ptr -18h
.std:0000000140B9C6F0
.std:0000000140B9C6F0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C6F4 0F 10 05 AD EF A7 18                    movups  xmm0, cs:xmmword_15961B6A8
.std:0000000140B9C6FB 4C 8D 05 7E 01 71 16                    lea     r8, aDevPhysics ; "Dev-Physics"
.std:0000000140B9C702 BA 02 00 00 00                          mov     edx, 2
.std:0000000140B9C707 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C70C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C711 0F 11 05 40 7D 91 19                    movups  cs:xmmword_15A4B4458, xmm0
.std:0000000140B9C718 E8 D3 8A 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C71D 48 8D 0D DC 36 25 12                    lea     rcx, sub_152DEFE00
.std:0000000140B9C724 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C728 E9 3F 99 FB 11                          jmp     sub_152B5606C
.std:0000000140B9C728                         sub_140B9C6F0   endp
.std:0000000140B9C728
.std:0000000140B9C728                         ; ---------------------------------------------------------------------------
.std:0000000140B9C72D CC CC CC                                align 10h
.std:0000000140B9C730
.std:0000000140B9C730                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C730
.std:0000000140B9C730
.std:0000000140B9C730                         sub_140B9C730   proc near
.std:0000000140B9C730
.std:0000000140B9C730                         var_18          = xmmword ptr -18h
.std:0000000140B9C730
.std:0000000140B9C730 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C734 0F 10 05 7D EF A7 18                    movups  xmm0, cs:xmmword_15961B6B8
.std:0000000140B9C73B 4C 8D 05 56 01 71 16                    lea     r8, aDevPlatform ; "Dev-Platform"
.std:0000000140B9C742 BA 02 00 00 00                          mov     edx, 2
.std:0000000140B9C747 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C74C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C751 0F 11 05 38 80 91 19                    movups  cs:xmmword_15A4B4790, xmm0
.std:0000000140B9C758 E8 93 8A 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C75D 48 8D 0D AC 36 25 12                    lea     rcx, sub_152DEFE10
.std:0000000140B9C764 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C768 E9 FF 98 FB 11                          jmp     sub_152B5606C
.std:0000000140B9C768                         sub_140B9C730   endp
.std:0000000140B9C768
.std:0000000140B9C768                         ; ---------------------------------------------------------------------------
.std:0000000140B9C76D CC CC CC                                align 10h
.std:0000000140B9C770
.std:0000000140B9C770                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C770
.std:0000000140B9C770
.std:0000000140B9C770                         sub_140B9C770   proc near
.std:0000000140B9C770
.std:0000000140B9C770                         var_18          = xmmword ptr -18h
.std:0000000140B9C770
.std:0000000140B9C770 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C774 0F 10 05 CD EF A7 18                    movups  xmm0, cs:xmmword_15961B748
.std:0000000140B9C77B 4C 8D 05 36 02 71 16                    lea     r8, aDevReflectionc ; "Dev-ReflectionCapture"
.std:0000000140B9C782 BA 04 00 00 00                          mov     edx, 4
.std:0000000140B9C787 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C78C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C791 0F 11 05 B8 7D 91 19                    movups  cs:xmmword_15A4B4550, xmm0
.std:0000000140B9C798 E8 53 8A 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C79D 48 8D 0D 7C 36 25 12                    lea     rcx, sub_152DEFE20
.std:0000000140B9C7A4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C7A8 E9 BF 98 FB 11                          jmp     sub_152B5606C
.std:0000000140B9C7A8                         sub_140B9C770   endp
.std:0000000140B9C7A8
.std:0000000140B9C7A8                         ; ---------------------------------------------------------------------------
.std:0000000140B9C7AD CC CC CC                                align 10h
.std:0000000140B9C7B0
.std:0000000140B9C7B0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C7B0
.std:0000000140B9C7B0
.std:0000000140B9C7B0                         sub_140B9C7B0   proc near
.std:0000000140B9C7B0
.std:0000000140B9C7B0                         var_18          = xmmword ptr -18h
.std:0000000140B9C7B0
.std:0000000140B9C7B0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C7B4 0F 10 05 0D EF A7 18                    movups  xmm0, cs:xmmword_15961B6C8
.std:0000000140B9C7BB 4C 8D 05 F6 00 71 16                    lea     r8, aDevRendering ; "Dev-Rendering"
.std:0000000140B9C7C2 BA 26 00 00 00                          mov     edx, 26h ; '&'
.std:0000000140B9C7C7 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C7CC 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C7D1 0F 11 05 B8 7D 91 19                    movups  cs:xmmword_15A4B4590, xmm0
.std:0000000140B9C7D8 E8 13 8A 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C7DD 48 8D 0D 4C 36 25 12                    lea     rcx, sub_152DEFE30
.std:0000000140B9C7E4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C7E8 E9 7F 98 FB 11                          jmp     sub_152B5606C
.std:0000000140B9C7E8                         sub_140B9C7B0   endp
.std:0000000140B9C7E8
.std:0000000140B9C7E8                         ; ---------------------------------------------------------------------------
.std:0000000140B9C7ED CC CC CC                                align 10h
.std:0000000140B9C7F0
.std:0000000140B9C7F0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C7F0
.std:0000000140B9C7F0
.std:0000000140B9C7F0                         sub_140B9C7F0   proc near
.std:0000000140B9C7F0
.std:0000000140B9C7F0                         var_18          = xmmword ptr -18h
.std:0000000140B9C7F0
.std:0000000140B9C7F0 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C7F4 0F 10 05 ED EE A7 18                    movups  xmm0, cs:xmmword_15961B6E8
.std:0000000140B9C7FB 4C 8D 05 06 01 71 16                    lea     r8, aDevSequencer ; "Dev-Sequencer"
.std:0000000140B9C802 BA 0C 00 00 00                          mov     edx, 0Ch
.std:0000000140B9C807 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C80C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C811 0F 11 05 98 7B 91 19                    movups  cs:xmmword_15A4B43B0, xmm0
.std:0000000140B9C818 E8 D3 89 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C81D 48 8D 0D 1C 36 25 12                    lea     rcx, sub_152DEFE40
.std:0000000140B9C824 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C828 E9 3F 98 FB 11                          jmp     sub_152B5606C
.std:0000000140B9C828                         sub_140B9C7F0   endp
.std:0000000140B9C828
.std:0000000140B9C828                         ; ---------------------------------------------------------------------------
.std:0000000140B9C82D CC CC CC                                align 10h
.std:0000000140B9C830
.std:0000000140B9C830                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C830
.std:0000000140B9C830
.std:0000000140B9C830                         sub_140B9C830   proc near
.std:0000000140B9C830
.std:0000000140B9C830                         var_18          = xmmword ptr -18h
.std:0000000140B9C830
.std:0000000140B9C830 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C834 0F 10 05 9D EF A7 18                    movups  xmm0, cs:xmmword_15961B7D8
.std:0000000140B9C83B 4C 8D 05 3E FF 70 16                    lea     r8, aDevShaderresou ; "Dev-ShaderResource"
.std:0000000140B9C842 BA 01 00 00 00                          mov     edx, 1
.std:0000000140B9C847 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C84C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C851 0F 11 05 88 7D 91 19                    movups  cs:xmmword_15A4B45E0, xmm0
.std:0000000140B9C858 E8 93 89 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C85D 48 8D 0D EC 35 25 12                    lea     rcx, sub_152DEFE50
.std:0000000140B9C864 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C868 E9 FF 97 FB 11                          jmp     sub_152B5606C
.std:0000000140B9C868                         sub_140B9C830   endp
.std:0000000140B9C868
.std:0000000140B9C868                         ; ---------------------------------------------------------------------------
.std:0000000140B9C86D CC CC CC                                align 10h
.std:0000000140B9C870
.std:0000000140B9C870                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C870
.std:0000000140B9C870
.std:0000000140B9C870                         sub_140B9C870   proc near
.std:0000000140B9C870
.std:0000000140B9C870                         var_18          = xmmword ptr -18h
.std:0000000140B9C870
.std:0000000140B9C870 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C874 0F 10 05 7D EE A7 18                    movups  xmm0, cs:xmmword_15961B6F8
.std:0000000140B9C87B 4C 8D 05 A6 00 71 16                    lea     r8, aDevVr      ; "Dev-VR"
.std:0000000140B9C882 BA 02 00 00 00                          mov     edx, 2
.std:0000000140B9C887 48 8D 4C 24 20                          lea     rcx, [rsp+38h+var_18]
.std:0000000140B9C88C 0F 29 44 24 20                          movaps  [rsp+38h+var_18], xmm0
.std:0000000140B9C891 0F 11 05 18 7F 91 19                    movups  cs:xmmword_15A4B47B0, xmm0
.std:0000000140B9C898 E8 53 89 4D 0E                          call    sub_14F0751F0
.std:0000000140B9C89D 48 8D 0D BC 35 25 12                    lea     rcx, sub_152DEFE60
.std:0000000140B9C8A4 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C8A8 E9 BF 97 FB 11                          jmp     sub_152B5606C
.std:0000000140B9C8A8                         sub_140B9C870   endp

.std:0000000140B9C8AD CC CC CC                                align 10h
.std:0000000140B9C8B0
.std:0000000140B9C8B0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C8B0
.std:0000000140B9C8B0
.std:0000000140B9C8B0                         sub_140B9C8B0   proc near
.std:0000000140B9C8B0 66 0F 6F 05 D8 45 54 12                 movdqa  xmm0, cs:xmmword_1530E0E90
.std:0000000140B9C8B8 66 0F 7F 05 C0 79 91 19                 movdqa  cs:xmmword_15A4B4280, xmm0
.std:0000000140B9C8C0 C3                                      retn
.std:0000000140B9C8C0                         sub_140B9C8B0   endp
.std:0000000140B9C8C0
.std:0000000140B9C8C0                         ; ---------------------------------------------------------------------------
.std:0000000140B9C8C1 CC                                      db 0CCh
.std:0000000140B9C8C2 CC                                      db 0CCh
.std:0000000140B9C8C3 CC                                      db 0CCh
.std:0000000140B9C8C4 CC                                      db 0CCh
.std:0000000140B9C8C5 CC                                      db 0CCh
.std:0000000140B9C8C6 CC                                      db 0CCh
.std:0000000140B9C8C7 CC                                      db 0CCh
.std:0000000140B9C8C8 CC                                      db 0CCh
.std:0000000140B9C8C9 CC                                      db 0CCh
.std:0000000140B9C8CA CC                                      db 0CCh
.std:0000000140B9C8CB CC                                      db 0CCh
.std:0000000140B9C8CC CC                                      db 0CCh
.std:0000000140B9C8CD CC                                      db 0CCh
.std:0000000140B9C8CE CC                                      db 0CCh
.std:0000000140B9C8CF CC                                      db 0CCh
.std:0000000140B9C8D0
.std:0000000140B9C8D0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C8D0
.std:0000000140B9C8D0
.std:0000000140B9C8D0                         sub_140B9C8D0   proc near
.std:0000000140B9C8D0 66 0F 6F 05 B8 45 54 12                 movdqa  xmm0, cs:xmmword_1530E0E90
.std:0000000140B9C8D8 66 0F 7F 05 A0 7B 91 19                 movdqa  cs:xmmword_15A4B4480, xmm0
.std:0000000140B9C8E0 C3                                      retn
.std:0000000140B9C8E0                         sub_140B9C8D0   endp
.std:0000000140B9C8E0
.std:0000000140B9C8E0                         ; ---------------------------------------------------------------------------
.std:0000000140B9C8E1 CC                                      db 0CCh
.std:0000000140B9C8E2 CC                                      db 0CCh
.std:0000000140B9C8E3 CC                                      db 0CCh
.std:0000000140B9C8E4 CC                                      db 0CCh
.std:0000000140B9C8E5 CC                                      db 0CCh
.std:0000000140B9C8E6 CC                                      db 0CCh
.std:0000000140B9C8E7 CC                                      db 0CCh
.std:0000000140B9C8E8 CC                                      db 0CCh
.std:0000000140B9C8E9 CC                                      db 0CCh
.std:0000000140B9C8EA CC                                      db 0CCh
.std:0000000140B9C8EB CC                                      db 0CCh
.std:0000000140B9C8EC CC                                      db 0CCh
.std:0000000140B9C8ED CC                                      db 0CCh
.std:0000000140B9C8EE CC                                      db 0CCh
.std:0000000140B9C8EF CC                                      db 0CCh
.std:0000000140B9C8F0
.std:0000000140B9C8F0                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C8F0
.std:0000000140B9C8F0
.std:0000000140B9C8F0                         sub_140B9C8F0   proc near
.std:0000000140B9C8F0 66 0F 6F 05 48 43 54 12                 movdqa  xmm0, cs:xmmword_1530E0C40
.std:0000000140B9C8F8 66 0F 7F 05 60 7D 91 19                 movdqa  cs:xmmword_15A4B4660, xmm0
.std:0000000140B9C900 C3                                      retn
.std:0000000140B9C900                         sub_140B9C8F0   endp
.std:0000000140B9C900
.std:0000000140B9C900                         ; ---------------------------------------------------------------------------
.std:0000000140B9C901 CC                                      db 0CCh
.std:0000000140B9C902 CC                                      db 0CCh
.std:0000000140B9C903 CC                                      db 0CCh
.std:0000000140B9C904 CC                                      db 0CCh
.std:0000000140B9C905 CC                                      db 0CCh
.std:0000000140B9C906 CC                                      db 0CCh
.std:0000000140B9C907 CC                                      db 0CCh
.std:0000000140B9C908 CC                                      db 0CCh
.std:0000000140B9C909 CC                                      db 0CCh
.std:0000000140B9C90A CC                                      db 0CCh
.std:0000000140B9C90B CC                                      db 0CCh
.std:0000000140B9C90C CC                                      db 0CCh
.std:0000000140B9C90D CC                                      db 0CCh
.std:0000000140B9C90E CC                                      db 0CCh
.std:0000000140B9C90F CC                                      db 0CCh
.std:0000000140B9C910
.std:0000000140B9C910                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C910
.std:0000000140B9C910
.std:0000000140B9C910                         sub_140B9C910   proc near
.std:0000000140B9C910 66 0F 6F 05 F8 44 54 12                 movdqa  xmm0, cs:xmmword_1530E0E10
.std:0000000140B9C918 66 0F 7F 05 80 7C 91 19                 movdqa  cs:xmmword_15A4B45A0, xmm0
.std:0000000140B9C920 C3                                      retn
.std:0000000140B9C920                         sub_140B9C910   endp
.std:0000000140B9C920
.std:0000000140B9C920                         ; ---------------------------------------------------------------------------
.std:0000000140B9C921 CC                                      db 0CCh
.std:0000000140B9C922 CC                                      db 0CCh
.std:0000000140B9C923 CC                                      db 0CCh
.std:0000000140B9C924 CC                                      db 0CCh
.std:0000000140B9C925 CC                                      db 0CCh
.std:0000000140B9C926 CC                                      db 0CCh
.std:0000000140B9C927 CC                                      db 0CCh
.std:0000000140B9C928 CC                                      db 0CCh
.std:0000000140B9C929 CC                                      db 0CCh
.std:0000000140B9C92A CC                                      db 0CCh
.std:0000000140B9C92B CC                                      db 0CCh
.std:0000000140B9C92C CC                                      db 0CCh
.std:0000000140B9C92D CC                                      db 0CCh
.std:0000000140B9C92E CC                                      db 0CCh
.std:0000000140B9C92F CC                                      db 0CCh
.std:0000000140B9C930
.std:0000000140B9C930                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C930
.std:0000000140B9C930
.std:0000000140B9C930                         sub_140B9C930   proc near
.std:0000000140B9C930 66 0F 6F 05 C8 44 54 12                 movdqa  xmm0, cs:xmmword_1530E0E00
.std:0000000140B9C938 66 0F 7F 05 20 7E 91 19                 movdqa  cs:xmmword_15A4B4760, xmm0
.std:0000000140B9C940 C3                                      retn
.std:0000000140B9C940                         sub_140B9C930   endp
.std:0000000140B9C940
.std:0000000140B9C940                         ; ---------------------------------------------------------------------------
.std:0000000140B9C941 CC                                      db 0CCh
.std:0000000140B9C942 CC                                      db 0CCh
.std:0000000140B9C943 CC                                      db 0CCh
.std:0000000140B9C944 CC                                      db 0CCh
.std:0000000140B9C945 CC                                      db 0CCh
.std:0000000140B9C946 CC                                      db 0CCh
.std:0000000140B9C947 CC                                      db 0CCh
.std:0000000140B9C948 CC                                      db 0CCh
.std:0000000140B9C949 CC                                      db 0CCh
.std:0000000140B9C94A CC                                      db 0CCh
.std:0000000140B9C94B CC                                      db 0CCh
.std:0000000140B9C94C CC                                      db 0CCh
.std:0000000140B9C94D CC                                      db 0CCh
.std:0000000140B9C94E CC                                      db 0CCh
.std:0000000140B9C94F CC                                      db 0CCh
.std:0000000140B9C950
.std:0000000140B9C950                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C950
.std:0000000140B9C950
.std:0000000140B9C950                         sub_140B9C950   proc near
.std:0000000140B9C950 0F 57 C0                                xorps   xmm0, xmm0
.std:0000000140B9C953 66 0F 7F 05 85 7D 91 19                 movdqa  cs:xmmword_15A4B46E0, xmm0
.std:0000000140B9C95B C3                                      retn
.std:0000000140B9C95B                         sub_140B9C950   endp
.std:0000000140B9C95B
.std:0000000140B9C95B                         ; ---------------------------------------------------------------------------
.std:0000000140B9C95C CC                                      db 0CCh
.std:0000000140B9C95D CC                                      db 0CCh
.std:0000000140B9C95E CC                                      db 0CCh
.std:0000000140B9C95F CC                                      db 0CCh
.std:0000000140B9C960
.std:0000000140B9C960                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C960
.std:0000000140B9C960
.std:0000000140B9C960                         sub_140B9C960   proc near
.std:0000000140B9C960 66 0F 6F 05 08 43 54 12                 movdqa  xmm0, cs:xmmword_1530E0C70
.std:0000000140B9C968 0F 29 05 E1 7C 91 19                    movaps  cs:xmmword_15A4B4650, xmm0
.std:0000000140B9C96F C3                                      retn
.std:0000000140B9C96F                         sub_140B9C960   endp
.std:0000000140B9C96F
.std:0000000140B9C970
.std:0000000140B9C970                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9C970
.std:0000000140B9C970
.std:0000000140B9C970                         sub_140B9C970   proc near
.std:0000000140B9C970
.std:0000000140B9C970                         var_18          = xmmword ptr -18h
.std:0000000140B9C970                         arg_0           = byte ptr  8
.std:0000000140B9C970
.std:0000000140B9C970 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9C974 4C 8D 0D DD FD 70 16                    lea     r9, aLogdevobjectve ; "LogDevObjectVersion"
.std:0000000140B9C97B 33 D2                                   xor     edx, edx
.std:0000000140B9C97D 4C 89 4C 24 20                          mov     qword ptr [rsp+38h+var_18], r9
.std:0000000140B9C982 49 8B C1                                mov     rax, r9
.std:0000000140B9C985 41 B8 4C 00 00 00                       mov     r8d, 4Ch ; 'L'
.std:0000000140B9C98B 0F 1F 44 00 00                          nop     dword ptr [rax+rax+00h]
.std:0000000140B9C990
.std:0000000140B9C990                         loc_140B9C990:                          ; CODE XREF: sub_140B9C970+34↓j
.std:0000000140B9C990 41 0F B7 C8                             movzx   ecx, r8w
.std:0000000140B9C994 48 83 C0 02                             add     rax, 2
.std:0000000140B9C998 0B D1                                   or      edx, ecx
.std:0000000140B9C99A 0F B7 08                                movzx   ecx, word ptr [rax]
.std:0000000140B9C99D 44 0F B7 C1                             movzx   r8d, cx
.std:0000000140B9C9A1 66 85 C9                                test    cx, cx
.std:0000000140B9C9A4 75 EA                                   jnz     short loc_140B9C990
.std:0000000140B9C9A6 F7 C2 80 FF FF FF                       test    edx, 0FFFFFF80h
.std:0000000140B9C9AC 48 8D 4C 24 40                          lea     rcx, [rsp+38h+arg_0]
.std:0000000140B9C9B1 41 B8 01 00 00 00                       mov     r8d, 1
.std:0000000140B9C9B7 48 8D 54 24 20                          lea     rdx, [rsp+38h+var_18]
.std:0000000140B9C9BC 0F 95 44 24 2C                          setnz   byte ptr [rsp+38h+var_18+0Ch]
.std:0000000140B9C9C1 49 2B C1                                sub     rax, r9
.std:0000000140B9C9C4 48 D1 F8                                sar     rax, 1
.std:0000000140B9C9C7 89 44 24 28                             mov     dword ptr [rsp+38h+var_18+8], eax
.std:0000000140B9C9CB 0F 28 44 24 20                          movaps  xmm0, [rsp+38h+var_18]
.std:0000000140B9C9D0 66 0F 7F 44 24 20                       movdqa  [rsp+38h+var_18], xmm0
.std:0000000140B9C9D6 E8 85 E4 4D 0E                          call    sub_14F07AE60
.std:0000000140B9C9DB 41 B1 08                                mov     r9b, 8
.std:0000000140B9C9DE 48 8D 54 24 40                          lea     rdx, [rsp+38h+arg_0]
.std:0000000140B9C9E3 41 B0 06                                mov     r8b, 6
.std:0000000140B9C9E6 48 8D 0D 83 7C 91 19                    lea     rcx, unk_15A4B4670
.std:0000000140B9C9ED E8 DE 7A 41 0E                          call    sub_14EFB44D0
.std:0000000140B9C9F2 48 8D 0D 77 34 25 12                    lea     rcx, sub_152DEFE70
.std:0000000140B9C9F9 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9C9FD E9 6A 96 FB 11                          jmp     sub_152B5606C
.std:0000000140B9C9FD                         sub_140B9C970   endp
.std:0000000140B9C9FD
.std:0000000140B9C9FD                         ; ---------------------------------------------------------------------------
.std:0000000140B9CA02 CC CC CC CC CC CC CC CC…                align 10h
.std:0000000140B9CA10
.std:0000000140B9CA10                         ; =============== S U B R O U T I N E =======================================
.std:0000000140B9CA10
.std:0000000140B9CA10
.std:0000000140B9CA10                         sub_140B9CA10   proc near
.std:0000000140B9CA10
.std:0000000140B9CA10                         var_18          = xmmword ptr -18h
.std:0000000140B9CA10                         arg_0           = byte ptr  8
.std:0000000140B9CA10
.std:0000000140B9CA10 48 83 EC 38                             sub     rsp, 38h
.std:0000000140B9CA14 4C 8D 0D 4D 01 71 16                    lea     r9, aLogunrealnames ; "LogUnrealNames"
.std:0000000140B9CA1B 33 D2                                   xor     edx, edx
.std:0000000140B9CA1D 4C 89 4C 24 20                          mov     qword ptr [rsp+38h+var_18], r9
.std:0000000140B9CA22 49 8B C1                                mov     rax, r9
.std:0000000140B9CA25 41 B8 4C 00 00 00                       mov     r8d, 4Ch ; 'L'
.std:0000000140B9CA2B 0F 1F 44 00 00                          nop     dword ptr [rax+rax+00h]
.std:0000000140B9CA30
.std:0000000140B9CA30                         loc_140B9CA30:                          ; CODE XREF: sub_140B9CA10+34↓j
.std:0000000140B9CA30 41 0F B7 C8                             movzx   ecx, r8w
.std:0000000140B9CA34 48 83 C0 02                             add     rax, 2
.std:0000000140B9CA38 0B D1                                   or      edx, ecx
.std:0000000140B9CA3A 0F B7 08                                movzx   ecx, word ptr [rax]
.std:0000000140B9CA3D 44 0F B7 C1                             movzx   r8d, cx
.std:0000000140B9CA41 66 85 C9                                test    cx, cx
.std:0000000140B9CA44 75 EA                                   jnz     short loc_140B9CA30
.std:0000000140B9CA46 F7 C2 80 FF FF FF                       test    edx, 0FFFFFF80h
.std:0000000140B9CA4C 48 8D 4C 24 40                          lea     rcx, [rsp+38h+arg_0]
.std:0000000140B9CA51 41 B8 01 00 00 00                       mov     r8d, 1
.std:0000000140B9CA57 48 8D 54 24 20                          lea     rdx, [rsp+38h+var_18]
.std:0000000140B9CA5C 0F 95 44 24 2C                          setnz   byte ptr [rsp+38h+var_18+0Ch]
.std:0000000140B9CA61 49 2B C1                                sub     rax, r9
.std:0000000140B9CA64 48 D1 F8                                sar     rax, 1
.std:0000000140B9CA67 89 44 24 28                             mov     dword ptr [rsp+38h+var_18+8], eax
.std:0000000140B9CA6B 0F 28 44 24 20                          movaps  xmm0, [rsp+38h+var_18]
.std:0000000140B9CA70 66 0F 7F 44 24 20                       movdqa  [rsp+38h+var_18], xmm0
.std:0000000140B9CA76 E8 E5 E3 4D 0E                          call    sub_14F07AE60
.std:0000000140B9CA7B 41 B1 08                                mov     r9b, 8
.std:0000000140B9CA7E 48 8D 54 24 40                          lea     rdx, [rsp+38h+arg_0]
.std:0000000140B9CA83 41 B0 06                                mov     r8b, 6
.std:0000000140B9CA86 48 8D 0D 83 7C 91 19                    lea     rcx, byte_15A4B4710
.std:0000000140B9CA8D E8 3E 7A 41 0E                          call    sub_14EFB44D0
.std:0000000140B9CA92 48 8D 0D E7 33 25 12                    lea     rcx, sub_152DEFE80
.std:0000000140B9CA99 48 83 C4 38                             add     rsp, 38h
.std:0000000140B9CA9D E9 CA 95 FB 11                          jmp     sub_152B5606C
.std:0000000140B9CA9D                         sub_140B9CA10   endp
.std:0000000140B9CA9D
```
