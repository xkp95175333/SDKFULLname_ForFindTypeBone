
---
miniBaseUWorld37
---
```cpp

    uint32_t Uworldkey37immmen = 0x197DE4C8;
    BYTE StartKeyimm = 0x37;
    uint32_t Uworldkey37ArrayStartAddr = Uworldkey37immmen + 0x2000; // 0x197E04C8;
     int LavelArrayStart=0x68;
     int CountLoopIDAndBytexorptr=6;
    int LavelArrayEnc=LavelArrayStart+CountLoopID; 
    uint32_t Uworldkey37ArrayEncAddr = Uworldkey37immmen + 0x2000;


  /*
               if ( (unsigned __int8)off_1597DD4C0() )
              {
                v57 = qword_1597E04C8;
                BYTE1(v57) = BYTE6(qword_1597E04C8) ^ 0x37;
                BYTE6(v57) = BYTE1(qword_1597E04C8) ^ 0x37;
                v11 = v57;
              }
              else
              {
                v11 = qword_1597DE4C8;
              }
*/
```


---
Asm Full Uworld37_ImmNewOffset_NewAddr
---


```c
__int64 __fastcall sub_15095C060(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // ebx
  __int64 result; // rax
  signed int i; // r15d
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int128 v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  __m128 v19; // xmm6
  __int64 v20; // r8
  unsigned __int8 v21; // al
  __m128 v22; // xmm1
  __m128 v23; // xmm1
  __m128 v24; // xmm4
  __m128 v25; // xmm1
  __m128 v26; // xmm3
  __m128 v27; // xmm2
  bool v28; // bl
  unsigned int *v29; // rax
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rbx
  __m128 v33; // xmm6
  __int64 v34; // r8
  unsigned __int8 v35; // al
  __m128 v36; // xmm1
  __m128 v37; // xmm1
  __m128 v38; // xmm4
  __m128 v39; // xmm1
  __m128 v40; // xmm3
  __m128 v41; // xmm2
  bool v42; // bl
  unsigned __int8 v43; // al
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // r8
  int v47; // [rsp+20h] [rbp-E0h]
  int v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+30h] [rbp-D0h]
  signed int v50; // [rsp+38h] [rbp-C8h]
  __int64 v51; // [rsp+40h] [rbp-C0h]
  __int128 v52; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v53; // [rsp+60h] [rbp-A0h]
  __int128 v54; // [rsp+70h] [rbp-90h]
  __int128 v55; // [rsp+80h] [rbp-80h] BYREF
  int v56; // [rsp+90h] [rbp-70h]
  __int64 v57; // [rsp+98h] [rbp-68h]
  __int128 v58; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v59; // [rsp+B0h] [rbp-50h]
  __int128 v60; // [rsp+C0h] [rbp-40h]
  __int128 v61; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v62; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v63; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v64; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v65; // [rsp+F8h] [rbp-8h]
  __int128 v66; // [rsp+100h] [rbp+0h] BYREF
  char v67[4]; // [rsp+110h] [rbp+10h] BYREF
  char v68[4]; // [rsp+114h] [rbp+14h] BYREF
  char v69[8]; // [rsp+118h] [rbp+18h] BYREF
  __m128 v70; // [rsp+120h] [rbp+20h] BYREF
  __m128 v71; // [rsp+130h] [rbp+30h] BYREF
  char v72[16]; // [rsp+140h] [rbp+40h] BYREF
  __m128 v73; // [rsp+150h] [rbp+50h] BYREF
  __m128 v74; // [rsp+160h] [rbp+60h]
  __m128 v75; // [rsp+170h] [rbp+70h]

  v5 = a4;
  v56 = a4;
  result = sub_1502A5EC0();
  if ( (_BYTE)result )
  {
    for ( i = 0; i < *(_DWORD *)(a2 + 8); ++i )
    {
      if ( _bittest(&v5, i) )
      {
        off_15960DA80(a2);
        if ( (*(_BYTE *)(a1 + 0x448) & 4) != 0 && (*(char *)(a1 + 0x35) < 0 || (*(_BYTE *)(a1 + 0x36) & 1) != 0) )
        {
          result = sub_14EFB4020(&v66, a1 + 0x44C);
          if ( *(_QWORD *)(a1 + 0x468) )
          {
            v10 = sub_142E15B00(0x2A8LL);
            if ( v10 )
            {
              if ( (unsigned __int8)off_1597DD4C0() )
              {
                v57 = qword_1597E04C8;
                BYTE1(v57) = BYTE6(qword_1597E04C8) ^ 0x37;
                BYTE6(v57) = BYTE1(qword_1597E04C8) ^ 0x37;
                v11 = v57;
              }
              else
              {
                v11 = qword_1597DE4C8;
              }
              v12 = *(_QWORD *)(v11 + 0x4B8);
              v13 = *(unsigned int *)sub_14F0828C0(v67, 0x3ELL);
              v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 0x278LL))(v12);
              sub_150D55480(v10);
              *(_QWORD *)(v10 + 0x288) = v14;
              *(_QWORD *)v10 = &off_1531E7478;
              v15 = v66;
              *(_QWORD *)(v10 + 0x2A0) = v13;
              *(_OWORD *)(v10 + 0x290) = v15;
            }
            else
            {
              v10 = 0LL;
            }
            v16 = *(int *)(a5 + 0xB0);
            *(_DWORD *)(a5 + 0xB0) = v16 + 1;
            if ( (int)v16 + 1 > *(_DWORD *)(a5 + 0xB4) )
              sub_1417C6070(a5 + 0xA8, (unsigned int)v16);
            *(_QWORD *)(*(_QWORD *)(a5 + 0xA8) + 8 * v16) = v10;
            v17 = sub_14119C930(a1);
            v18 = v17 + 0x40;
            v52 = *(_OWORD *)v17;
            v53 = *(_OWORD *)(v17 + 0x10);
            v54 = *(_OWORD *)(v17 + 0x20);
            v55 = *(_OWORD *)(v17 + 0x30);
            if ( *(_WORD *)(v17 + 0x40) != 0xFFFF )
            {
              if ( !*(_BYTE *)(v17 + 0x42) )
                sub_14EFD1950(L"double decryption in EEncHandlerPolicy::None");
              off_15A483D40(&v55, 0xCLL, v18);
            }
            v58 = v52;
            v59 = v53;
            v60 = v54;
            v61 = v55;
            sub_141097940(&v58, &v62);
            v19 = _mm_movelh_ps((__m128)v62, (__m128)v63);
            v75 = v19;
            if ( sub_14108DC10(&v52) < 0.0 )
            {
              *(float *)&v58 = -*(float *)&v58;
              *((float *)&v58 + 1) = -*((float *)&v58 + 1);
              *((float *)&v58 + 2) = -*((float *)&v58 + 2);
              v75 = _mm_mul_ps(v19, (__m128)xmmword_15A63BE90);
            }
            sub_141082F40(&v70, &v58);
            v21 = *(_BYTE *)(a1 + 0x32) - 1;
            v22 = _mm_mul_ps(v70, v70);
            v74 = _mm_movelh_ps((__m128)(unsigned __int64)v55, (__m128)DWORD2(v55));
            v23 = _mm_add_ps(v22, _mm_shuffle_ps(v22, v22, 0x4E));
            v24 = _mm_add_ps(_mm_shuffle_ps(v23, v23, 0x39), v23);
            v25 = _mm_rsqrt_ps(v24);
            v26 = _mm_mul_ps(v24, (__m128)xmmword_15A63BEE0);
            v27 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps((__m128)xmmword_15A63BEE0, _mm_mul_ps(_mm_mul_ps(v25, v25), v26)), v25),
                    v25);
            v73 = _mm_xor_ps(
                    _mm_and_ps(
                      _mm_xor_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_mul_ps(
                              _mm_sub_ps((__m128)xmmword_15A63BEE0, _mm_mul_ps(_mm_mul_ps(v27, v27), v26)),
                              v27),
                            v27),
                          v70),
                        (__m128)xmmword_15A63BE30),
                      _mm_cmple_ps((__m128)xmmword_15A63BCA0, v24)),
                    (__m128)xmmword_15A63BE30);
            v28 = v21 <= 1u || (*(_BYTE *)(a1 + 0x3F0) & 2) != 0;
            LOBYTE(v20) = 1;
            v29 = (unsigned int *)sub_14EFD3AD0(&v66, v68, v20);
            v51 = a5;
            v30 = v10;
            v50 = i;
            LOBYTE(v49) = v28;
            LOBYTE(v48) = 1;
LABEL_43:
            LOBYTE(v47) = 0;
            result = sub_150ECE5E0(*(_QWORD *)(a1 + 0x468) + 0x28LL, &v73, *v29, v30, v47, v48, v49, v50, v51);
            v5 = v56;
          }
        }
        else
        {
          result = sub_14EFB4020(&v66, a1 + 0x44C);
          if ( *(_QWORD *)(a1 + 0x468) )
          {
            v31 = sub_14119C930(a1);
            v32 = v31 + 0x40;
            v52 = *(_OWORD *)v31;
            v53 = *(_OWORD *)(v31 + 0x10);
            v54 = *(_OWORD *)(v31 + 0x20);
            v55 = *(_OWORD *)(v31 + 0x30);
            if ( *(_WORD *)(v31 + 0x40) != 0xFFFF )
            {
              if ( !*(_BYTE *)(v31 + 0x42) )
                sub_14EFD1950(L"double decryption in EEncHandlerPolicy::None");
              off_15A483D40(&v55, 0xCLL, v32);
            }
            v58 = v52;
            v59 = v53;
            v60 = v54;
            v61 = v55;
            sub_141097940(&v58, &v64);
            v33 = _mm_movelh_ps((__m128)v64, (__m128)v65);
            v75 = v33;
            if ( sub_14108DC10(&v52) < 0.0 )
            {
              *(float *)&v58 = -*(float *)&v58;
              *((float *)&v58 + 1) = -*((float *)&v58 + 1);
              *((float *)&v58 + 2) = -*((float *)&v58 + 2);
              v75 = _mm_mul_ps(v33, (__m128)xmmword_15A63BE90);
            }
            sub_141082F40(&v71, &v58);
            v35 = *(_BYTE *)(a1 + 0x32) - 1;
            v36 = _mm_mul_ps(v71, v71);
            v74 = _mm_movelh_ps((__m128)(unsigned __int64)v55, (__m128)DWORD2(v55));
            v37 = _mm_add_ps(v36, _mm_shuffle_ps(v36, v36, 0x4E));
            v38 = _mm_add_ps(_mm_shuffle_ps(v37, v37, 0x39), v37);
            v39 = _mm_rsqrt_ps(v38);
            v40 = _mm_mul_ps(v38, (__m128)xmmword_15A63BEE0);
            v41 = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps((__m128)xmmword_15A63BEE0, _mm_mul_ps(_mm_mul_ps(v39, v39), v40)), v39),
                    v39);
            v73 = _mm_xor_ps(
                    _mm_and_ps(
                      _mm_xor_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_mul_ps(
                              _mm_sub_ps((__m128)xmmword_15A63BEE0, _mm_mul_ps(_mm_mul_ps(v41, v41), v40)),
                              v41),
                            v41),
                          v71),
                        (__m128)xmmword_15A63BE30),
                      _mm_cmple_ps((__m128)xmmword_15A63BCA0, v38)),
                    (__m128)xmmword_15A63BE30);
            v42 = v35 <= 1u || (*(_BYTE *)(a1 + 0x3F0) & 2) != 0;
            v43 = *(_BYTE *)(a1 + 0x36);
            v44 = v43;
            LOBYTE(v34) = *(char *)(a1 + 0x35) < 0 || (v43 & 1) != 0;
            LOBYTE(v47) = 1;
            LOBYTE(v44) = (v43 & 4) != 0;
            v45 = sub_150F99B00(v72, &v66, v34, v44, v47);
            LOBYTE(v46) = 1;
            v29 = (unsigned int *)sub_14EFD3AD0(v45, v69, v46);
            v51 = a5;
            v30 = 0LL;
            v50 = i;
            LOBYTE(v49) = v42;
            LOBYTE(v48) = 0;
            goto LABEL_43;
          }
        }
      }
    }
  }
  return result;
}


```

---
Asm for +-*/ offset  
---
```asm
// a11
.std:000000015095C060
.std:000000015095C060                         ; =============== S U B R O U T I N E =======================================
.std:000000015095C060
.std:000000015095C060                         ; Attributes: bp-based frame fpd=100h
.std:000000015095C060
.std:000000015095C060                         sub_15095C060   proc near
.std:000000015095C060                         ; __unwind { // sub_152B5621C
.std:000000015095C060 40 55                                   push    rbp
.std:000000015095C062 53                                      push    rbx
.std:000000015095C063 56                                      push    rsi
.std:000000015095C064 41 54                                   push    r12
.std:000000015095C066 41 55                                   push    r13
.std:000000015095C068 48 8D AC 24 20 FF FF FF                 lea     rbp, [rsp-0E0h]
.std:000000015095C070 48 81 EC E0 01 00 00                    sub     rsp, 1E0h
.std:000000015095C077 48 8B 05 C2 EF 22 09                    mov     rax, cs:__security_cookie
.std:000000015095C07E 48 33 C4                                xor     rax, rsp
.std:000000015095C081 48 89 85 80 00 00 00                    mov     [rbp+80h], rax
.std:000000015095C088 4C 8B AD 30 01 00 00                    mov     r13, [rbp+130h]
.std:000000015095C08F 41 8B D9                                mov     ebx, r9d
.std:000000015095C092 89 5D 90                                mov     [rbp-70h], ebx
.std:000000015095C095 4C 8B E2                                mov     r12, rdx
.std:000000015095C098 48 8B F1                                mov     rsi, rcx
.std:000000015095C09B E8 20 9E 94 FF                          call    sub_1502A5EC0
.std:000000015095C0A0 84 C0                                   test    al, al
.std:000000015095C0A2 0F 84 C8 06 00 00                       jz      loc_15095C770
.std:000000015095C0A2                         ; } // starts at 15095C060
.std:000000015095C0A8                         ; __unwind { // sub_152B5621C
.std:000000015095C0A8 4C 89 BC 24 D0 01 00 00                 mov     [rsp+1D0h], r15
.std:000000015095C0B0 45 33 FF                                xor     r15d, r15d
.std:000000015095C0B3 45 39 7C 24 08                          cmp     [r12+8], r15d
.std:000000015095C0B8 0F 8E AA 06 00 00                       jle     loc_15095C768
.std:000000015095C0B8                         ; } // starts at 15095C0A8
.std:000000015095C0BE                         ; __unwind { // sub_152B5621C
.std:000000015095C0BE 48 89 BC 24 20 02 00 00                 mov     [rsp+220h], rdi
.std:000000015095C0C6 BF FF FF 00 00                          mov     edi, 0FFFFh
.std:000000015095C0CB 0F 29 BC 24 B0 01 00 00                 movaps  xmmword ptr [rsp+1B0h], xmm7
.std:000000015095C0D3 F3 0F 10 3D 35 4D 78 02                 movss   xmm7, dword ptr cs:xmmword_1530E0E10
.std:000000015095C0DB 44 0F 29 84 24 A0 01 00                 movaps  xmmword ptr [rsp+1A0h], xmm8
.std:000000015095C0DB 00
.std:000000015095C0E4 45 0F 57 C0                             xorps   xmm8, xmm8
.std:000000015095C0E8 44 0F 29 8C 24 90 01 00                 movaps  xmmword ptr [rsp+190h], xmm9
.std:000000015095C0E8 00
.std:000000015095C0F1 F3 44 0F 10 0D BE B3 79                 movss   xmm9, cs:dword_1530F74B8
.std:000000015095C0F1 02
.std:000000015095C0FA 4C 89 B4 24 D8 01 00 00                 mov     [rsp+1D8h], r14
.std:000000015095C102 0F 29 B4 24 C0 01 00 00                 movaps  xmmword ptr [rsp+1C0h], xmm6
.std:000000015095C10A 66 0F 1F 44 00 00                       nop     word ptr [rax+rax+00h]
.std:000000015095C110
.std:000000015095C110                         loc_15095C110:                          ; CODE XREF: sub_15095C060+6D0↓j
.std:000000015095C110 44 0F A3 FB                             bt      ebx, r15d
.std:000000015095C114 0F 83 0E 06 00 00                       jnb     loc_15095C728
.std:000000015095C11A 49 8B CC                                mov     rcx, r12
.std:000000015095C11D FF 15 5D 19 CB 08                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000015095C123 F6 86 48 04 00 00 04                    test    byte ptr [rsi+448h], 4
.std:000000015095C12A 0F 84 4C 03 00 00                       jz      loc_15095C47C
.std:000000015095C130 80 7E 35 00                             cmp     byte ptr [rsi+35h], 0
.std:000000015095C134 7C 0A                                   jl      short loc_15095C140
.std:000000015095C136 F6 46 36 01                             test    byte ptr [rsi+36h], 1
.std:000000015095C13A 0F 84 3C 03 00 00                       jz      loc_15095C47C
.std:000000015095C140
.std:000000015095C140                         loc_15095C140:                          ; CODE XREF: sub_15095C060+D4↑j
.std:000000015095C140 48 8D 96 4C 04 00 00                    lea     rdx, [rsi+44Ch]
.std:000000015095C147 48 8D 4D 00                             lea     rcx, [rbp+0]
.std:000000015095C14B E8 D0 7E 65 FE                          call    sub_14EFB4020
.std:000000015095C150 48 83 BE 68 04 00 00 00                 cmp     qword ptr [rsi+468h], 0
.std:000000015095C158 0F 84 CA 05 00 00                       jz      loc_15095C728
.std:000000015095C15E B9 A8 02 00 00                          mov     ecx, 2A8h
.std:000000015095C163 E8 98 99 4B F2                          call    sub_142E15B00
.std:000000015095C168 4C 8B F0                                mov     r14, rax
.std:000000015095C16B 48 85 C0                                test    rax, rax
.std:000000015095C16E 0F 84 8C 00 00 00                       jz      loc_15095C200
.std:000000015095C174 FF 15 46 13 E8 08                       call    cs:off_1597DD4C0 ; AK::WriteBytesCount::Reserve(long) ...
.std:000000015095C17A 84 C0                                   test    al, al
.std:000000015095C17C 75 09                                   jnz     short loc_15095C187
.std:000000015095C17E 48 8B 1D 43 23 E8 08                    mov     rbx, cs:qword_1597DE4C8
.std:000000015095C185 EB 25                                   jmp     short loc_15095C1AC
.std:000000015095C187                         ; ---------------------------------------------------------------------------
.std:000000015095C187
.std:000000015095C187                         loc_15095C187:                          ; CODE XREF: sub_15095C060+11C↑j
.std:000000015095C187 48 8B 0D 3A 43 E8 08                    mov     rcx, cs:qword_1597E04C8
.std:000000015095C18E 0F B6 05 39 43 E8 08                    movzx   eax, byte ptr cs:qword_1597E04C8+6
.std:000000015095C195 48 89 4D 98                             mov     [rbp-68h], rcx
.std:000000015095C199 34 37                                   xor     al, 37h
.std:000000015095C19B 48 C1 E9 08                             shr     rcx, 8
.std:000000015095C19F 80 F1 37                                xor     cl, 37h
.std:000000015095C1A2 88 45 99                                mov     [rbp-67h], al
.std:000000015095C1A5 88 4D 9E                                mov     [rbp-62h], cl
.std:000000015095C1A8 48 8B 5D 98                             mov     rbx, [rbp-68h]
.std:000000015095C1AC
.std:000000015095C1AC                         loc_15095C1AC:                          ; CODE XREF: sub_15095C060+125↑j
.std:000000015095C1AC 48 8B 9B B8 04 00 00                    mov     rbx, [rbx+4B8h]
.std:000000015095C1B3 48 8D 4D 10                             lea     rcx, [rbp+10h]
.std:000000015095C1B7 BA 3E 00 00 00                          mov     edx, 3Eh ; '>'
.std:000000015095C1BC E8 FF 66 72 FE                          call    sub_14F0828C0
.std:000000015095C1C1 48 8B CB                                mov     rcx, rbx
.std:000000015095C1C4 8B 38                                   mov     edi, [rax]
.std:000000015095C1C6 48 8B 03                                mov     rax, [rbx]
.std:000000015095C1C9 FF 90 78 02 00 00                       call    qword ptr [rax+278h]
.std:000000015095C1CF 49 8B CE                                mov     rcx, r14
.std:000000015095C1D2 48 8B D8                                mov     rbx, rax
.std:000000015095C1D5 E8 A6 92 3F 00                          call    sub_150D55480
.std:000000015095C1DA 48 8D 05 97 B2 88 02                    lea     rax, off_1531E7478
.std:000000015095C1E1 49 89 9E 88 02 00 00                    mov     [r14+288h], rbx
.std:000000015095C1E8 49 89 06                                mov     [r14], rax
.std:000000015095C1EB 0F 10 45 00                             movups  xmm0, xmmword ptr [rbp+0]
.std:000000015095C1EF 49 89 BE A0 02 00 00                    mov     [r14+2A0h], rdi
.std:000000015095C1F6 41 0F 11 86 90 02 00 00                 movups  xmmword ptr [r14+290h], xmm0
.std:000000015095C1FE EB 03                                   jmp     short loc_15095C203
.std:000000015095C200                         ; ---------------------------------------------------------------------------
.std:000000015095C200
.std:000000015095C200                         loc_15095C200:                          ; CODE XREF: sub_15095C060+10E↑j
.std:000000015095C200 45 33 F6                                xor     r14d, r14d
.std:000000015095C203
.std:000000015095C203                         loc_15095C203:                          ; CODE XREF: sub_15095C060+19E↑j
.std:000000015095C203 49 63 BD B0 00 00 00                    movsxd  rdi, dword ptr [r13+0B0h]
.std:000000015095C20A 8D 47 01                                lea     eax, [rdi+1]
.std:000000015095C20D 41 89 85 B0 00 00 00                    mov     [r13+0B0h], eax
.std:000000015095C214 41 3B 85 B4 00 00 00                    cmp     eax, [r13+0B4h]
.std:000000015095C21B 7E 0E                                   jle     short loc_15095C22B
.std:000000015095C21D 8B D7                                   mov     edx, edi
.std:000000015095C21F 49 8D 8D A8 00 00 00                    lea     rcx, [r13+0A8h]
.std:000000015095C226 E8 45 9E E6 F0                          call    sub_1417C6070
.std:000000015095C22B
.std:000000015095C22B                         loc_15095C22B:                          ; CODE XREF: sub_15095C060+1BB↑j
.std:000000015095C22B 49 8B 85 A8 00 00 00                    mov     rax, [r13+0A8h]
.std:000000015095C232 48 8B CE                                mov     rcx, rsi
.std:000000015095C235 4C 89 34 F8                             mov     [rax+rdi*8], r14
.std:000000015095C239 E8 F2 06 84 F0                          call    sub_14119C930
.std:000000015095C23E BF FF FF 00 00                          mov     edi, 0FFFFh
.std:000000015095C243 F3 0F 10 00                             movss   xmm0, dword ptr [rax]
.std:000000015095C247 48 8D 58 40                             lea     rbx, [rax+40h]
.std:000000015095C24B F3 0F 11 44 24 50                       movss   dword ptr [rsp+50h], xmm0
.std:000000015095C251 F3 0F 10 48 04                          movss   xmm1, dword ptr [rax+4]
.std:000000015095C256 F3 0F 11 4C 24 54                       movss   dword ptr [rsp+54h], xmm1
.std:000000015095C25C F3 0F 10 40 08                          movss   xmm0, dword ptr [rax+8]
.std:000000015095C261 F3 0F 11 44 24 58                       movss   dword ptr [rsp+58h], xmm0
.std:000000015095C267 F3 0F 10 48 0C                          movss   xmm1, dword ptr [rax+0Ch]
.std:000000015095C26C F3 0F 11 4C 24 5C                       movss   dword ptr [rsp+5Ch], xmm1
.std:000000015095C272 F3 0F 10 40 10                          movss   xmm0, dword ptr [rax+10h]
.std:000000015095C277 F3 0F 11 44 24 60                       movss   dword ptr [rsp+60h], xmm0
.std:000000015095C27D F3 0F 10 48 14                          movss   xmm1, dword ptr [rax+14h]
.std:000000015095C282 F3 0F 11 4C 24 64                       movss   dword ptr [rsp+64h], xmm1
.std:000000015095C288 F3 0F 10 40 18                          movss   xmm0, dword ptr [rax+18h]
.std:000000015095C28D F3 0F 11 44 24 68                       movss   dword ptr [rsp+68h], xmm0
.std:000000015095C293 F3 0F 10 48 1C                          movss   xmm1, dword ptr [rax+1Ch]
.std:000000015095C298 F3 0F 11 4C 24 6C                       movss   dword ptr [rsp+6Ch], xmm1
.std:000000015095C29E F3 0F 10 40 20                          movss   xmm0, dword ptr [rax+20h]
.std:000000015095C2A3 F3 0F 11 44 24 70                       movss   dword ptr [rsp+70h], xmm0
.std:000000015095C2A9 F3 0F 10 48 24                          movss   xmm1, dword ptr [rax+24h]
.std:000000015095C2AE F3 0F 11 4C 24 74                       movss   dword ptr [rsp+74h], xmm1
.std:000000015095C2B4 F3 0F 10 40 28                          movss   xmm0, dword ptr [rax+28h]
.std:000000015095C2B9 F3 0F 11 44 24 78                       movss   dword ptr [rsp+78h], xmm0
.std:000000015095C2BF F3 0F 10 48 2C                          movss   xmm1, dword ptr [rax+2Ch]
.std:000000015095C2C4 F3 0F 11 4C 24 7C                       movss   dword ptr [rsp+7Ch], xmm1
.std:000000015095C2CA F3 0F 10 40 30                          movss   xmm0, dword ptr [rax+30h]
.std:000000015095C2CF F3 0F 11 45 80                          movss   dword ptr [rbp-80h], xmm0
.std:000000015095C2D4 F3 0F 10 48 34                          movss   xmm1, dword ptr [rax+34h]
.std:000000015095C2D9 F3 0F 11 4D 84                          movss   dword ptr [rbp-7Ch], xmm1
.std:000000015095C2DE F3 0F 10 40 38                          movss   xmm0, dword ptr [rax+38h]
.std:000000015095C2E3 F3 0F 11 45 88                          movss   dword ptr [rbp-78h], xmm0
.std:000000015095C2E8 F3 0F 10 48 3C                          movss   xmm1, dword ptr [rax+3Ch]
.std:000000015095C2ED F3 0F 11 4D 8C                          movss   dword ptr [rbp-74h], xmm1
.std:000000015095C2F2 66 39 3B                                cmp     [rbx], di
.std:000000015095C2F5 74 24                                   jz      short loc_15095C31B
.std:000000015095C2F7 80 7B 02 00                             cmp     byte ptr [rbx+2], 0
.std:000000015095C2FB 75 0C                                   jnz     short loc_15095C309
.std:000000015095C2FD 48 8D 0D 5C AC 79 02                    lea     rcx, aDoubleDecrypti_0 ; "double decryption in EEncHandlerPolicy:"...
.std:000000015095C304 E8 47 56 67 FE                          call    sub_14EFD1950
.std:000000015095C309
.std:000000015095C309                         loc_15095C309:                          ; CODE XREF: sub_15095C060+29B↑j
.std:000000015095C309 4C 8B C3                                mov     r8, rbx
.std:000000015095C30C 48 8D 4D 80                             lea     rcx, [rbp-80h]
.std:000000015095C310 BA 0C 00 00 00                          mov     edx, 0Ch
.std:000000015095C315 FF 15 25 7A B2 09                       call    cs:off_15A483D40
.std:000000015095C31B
.std:000000015095C31B                         loc_15095C31B:                          ; CODE XREF: sub_15095C060+295↑j
.std:000000015095C31B 0F 28 44 24 50                          movaps  xmm0, xmmword ptr [rsp+50h]
.std:000000015095C320 48 8D 55 E0                             lea     rdx, [rbp-20h]
.std:000000015095C324 0F 28 4C 24 60                          movaps  xmm1, xmmword ptr [rsp+60h]
.std:000000015095C329 48 8D 4D A0                             lea     rcx, [rbp-60h]
.std:000000015095C32D 0F 29 45 A0                             movaps  xmmword ptr [rbp-60h], xmm0
.std:000000015095C331 41 0F 28 D1                             movaps  xmm2, xmm9
.std:000000015095C335 0F 28 44 24 70                          movaps  xmm0, xmmword ptr [rsp+70h]
.std:000000015095C33A 0F 29 4D B0                             movaps  xmmword ptr [rbp-50h], xmm1
.std:000000015095C33E 0F 28 4D 80                             movaps  xmm1, xmmword ptr [rbp-80h]
.std:000000015095C342 0F 29 45 C0                             movaps  xmmword ptr [rbp-40h], xmm0
.std:000000015095C346 0F 29 4D D0                             movaps  xmmword ptr [rbp-30h], xmm1
.std:000000015095C34A E8 F1 B5 73 F0                          call    sub_141097940
.std:000000015095C34F F3 0F 10 55 E8                          movss   xmm2, dword ptr [rbp-18h]
.std:000000015095C354 48 8D 4C 24 50                          lea     rcx, [rsp+50h]
.std:000000015095C359 F2 0F 10 75 E0                          movsd   xmm6, qword ptr [rbp-20h]
.std:000000015095C35E 0F 16 F2                                movlhps xmm6, xmm2
.std:000000015095C361 0F 29 75 70                             movaps  xmmword ptr [rbp+70h], xmm6
.std:000000015095C365 E8 A6 18 73 F0                          call    sub_14108DC10
.std:000000015095C36A 41 0F 2F C0                             comiss  xmm0, xmm8
.std:000000015095C36E 73 32                                   jnb     short loc_15095C3A2
.std:000000015095C370 F3 0F 10 55 A0                          movss   xmm2, dword ptr [rbp-60h]
.std:000000015095C375 F3 0F 10 4D A4                          movss   xmm1, dword ptr [rbp-5Ch]
.std:000000015095C37A 0F 57 D7                                xorps   xmm2, xmm7
.std:000000015095C37D F3 0F 10 45 A8                          movss   xmm0, dword ptr [rbp-58h]
.std:000000015095C382 0F 57 CF                                xorps   xmm1, xmm7
.std:000000015095C385 0F 59 35 04 FB CD 09                    mulps   xmm6, cs:xmmword_15A63BE90
.std:000000015095C38C 0F 57 C7                                xorps   xmm0, xmm7
.std:000000015095C38F F3 0F 11 55 A0                          movss   dword ptr [rbp-60h], xmm2
.std:000000015095C394 F3 0F 11 4D A4                          movss   dword ptr [rbp-5Ch], xmm1
.std:000000015095C399 F3 0F 11 45 A8                          movss   dword ptr [rbp-58h], xmm0
.std:000000015095C39E 0F 29 75 70                             movaps  xmmword ptr [rbp+70h], xmm6
.std:000000015095C3A2
.std:000000015095C3A2                         loc_15095C3A2:                          ; CODE XREF: sub_15095C060+30E↑j
.std:000000015095C3A2 48 8D 55 A0                             lea     rdx, [rbp-60h]
.std:000000015095C3A6 48 8D 4D 20                             lea     rcx, [rbp+20h]
.std:000000015095C3AA E8 91 6B 72 F0                          call    sub_141082F40
.std:000000015095C3AF 0F 28 75 20                             movaps  xmm6, xmmword ptr [rbp+20h]
.std:000000015095C3B3 0F 28 2D 26 FB CD 09                    movaps  xmm5, cs:xmmword_15A63BEE0
.std:000000015095C3BA 0F 28 CE                                movaps  xmm1, xmm6
.std:000000015095C3BD F3 0F 10 55 88                          movss   xmm2, dword ptr [rbp-78h]
.std:000000015095C3C2 F2 0F 10 5D 80                          movsd   xmm3, qword ptr [rbp-80h]
.std:000000015095C3C7 0F B6 46 32                             movzx   eax, byte ptr [rsi+32h]
.std:000000015095C3CB 0F 16 DA                                movlhps xmm3, xmm2
.std:000000015095C3CE FE C8                                   dec     al
.std:000000015095C3D0 0F 59 CE                                mulps   xmm1, xmm6
.std:000000015095C3D3 0F 28 D5                                movaps  xmm2, xmm5
.std:000000015095C3D6 0F 29 5D 60                             movaps  xmmword ptr [rbp+60h], xmm3
.std:000000015095C3DA 0F 28 C1                                movaps  xmm0, xmm1
.std:000000015095C3DD 0F C6 C1 4E                             shufps  xmm0, xmm1, 4Eh ; 'N'
.std:000000015095C3E1 0F 58 C8                                addps   xmm1, xmm0
.std:000000015095C3E4 0F 28 E1                                movaps  xmm4, xmm1
.std:000000015095C3E7 0F C6 E1 39                             shufps  xmm4, xmm1, 39h ; '9'
.std:000000015095C3EB 0F 58 E1                                addps   xmm4, xmm1
.std:000000015095C3EE 0F 52 CC                                rsqrtps xmm1, xmm4
.std:000000015095C3F1 0F 28 DC                                movaps  xmm3, xmm4
.std:000000015095C3F4 0F 59 DD                                mulps   xmm3, xmm5
.std:000000015095C3F7 0F 28 C1                                movaps  xmm0, xmm1
.std:000000015095C3FA 0F 59 C1                                mulps   xmm0, xmm1
.std:000000015095C3FD 0F 59 C3                                mulps   xmm0, xmm3
.std:000000015095C400 0F 5C D0                                subps   xmm2, xmm0
.std:000000015095C403 0F 59 D1                                mulps   xmm2, xmm1
.std:000000015095C406 0F 58 D1                                addps   xmm2, xmm1
.std:000000015095C409 0F 28 C2                                movaps  xmm0, xmm2
.std:000000015095C40C 0F 59 C2                                mulps   xmm0, xmm2
.std:000000015095C40F 0F 59 C3                                mulps   xmm0, xmm3
.std:000000015095C412 0F 5C E8                                subps   xmm5, xmm0
.std:000000015095C415 0F 28 05 84 F8 CD 09                    movaps  xmm0, cs:xmmword_15A63BCA0
.std:000000015095C41C 0F C2 C4 02                             cmpleps xmm0, xmm4
.std:000000015095C420 0F 59 EA                                mulps   xmm5, xmm2
.std:000000015095C423 0F 58 EA                                addps   xmm5, xmm2
.std:000000015095C426 0F 59 EE                                mulps   xmm5, xmm6
.std:000000015095C429 0F 57 2D 00 FA CD 09                    xorps   xmm5, cs:xmmword_15A63BE30
.std:000000015095C430 0F 54 E8                                andps   xmm5, xmm0
.std:000000015095C433 0F 57 2D F6 F9 CD 09                    xorps   xmm5, cs:xmmword_15A63BE30
.std:000000015095C43A 0F 29 6D 50                             movaps  xmmword ptr [rbp+50h], xmm5
.std:000000015095C43E 3C 01                                   cmp     al, 1
.std:000000015095C440 76 0D                                   jbe     short loc_15095C44F
.std:000000015095C442 F6 86 F0 03 00 00 02                    test    byte ptr [rsi+3F0h], 2
.std:000000015095C449 75 04                                   jnz     short loc_15095C44F
.std:000000015095C44B 32 DB                                   xor     bl, bl
.std:000000015095C44D EB 02                                   jmp     short loc_15095C451
.std:000000015095C44F                         ; ---------------------------------------------------------------------------
.std:000000015095C44F
.std:000000015095C44F                         loc_15095C44F:                          ; CODE XREF: sub_15095C060+3E0↑j
.std:000000015095C44F                                                                 ; sub_15095C060+3E9↑j
.std:000000015095C44F B3 01                                   mov     bl, 1
.std:000000015095C451
.std:000000015095C451                         loc_15095C451:                          ; CODE XREF: sub_15095C060+3ED↑j
.std:000000015095C451 41 B0 01                                mov     r8b, 1
.std:000000015095C454 48 8D 55 14                             lea     rdx, [rbp+14h]
.std:000000015095C458 48 8D 4D 00                             lea     rcx, [rbp+0]
.std:000000015095C45C E8 6F 76 67 FE                          call    sub_14EFD3AD0
.std:000000015095C461 4C 89 6C 24 40                          mov     [rsp+40h], r13
.std:000000015095C466 4D 8B CE                                mov     r9, r14
.std:000000015095C469 44 89 7C 24 38                          mov     [rsp+38h], r15d
.std:000000015095C46E 88 5C 24 30                             mov     [rsp+30h], bl
.std:000000015095C472 C6 44 24 28 01                          mov     byte ptr [rsp+28h], 1
.std:000000015095C477 E9 8D 02 00 00                          jmp     loc_15095C709
.std:000000015095C47C                         ; ---------------------------------------------------------------------------
.std:000000015095C47C
.std:000000015095C47C                         loc_15095C47C:                          ; CODE XREF: sub_15095C060+CA↑j
.std:000000015095C47C                                                                 ; sub_15095C060+DA↑j
.std:000000015095C47C 48 8D 96 4C 04 00 00                    lea     rdx, [rsi+44Ch]
.std:000000015095C483 48 8D 4D 00                             lea     rcx, [rbp+0]
.std:000000015095C487 E8 94 7B 65 FE                          call    sub_14EFB4020
.std:000000015095C48C 48 83 BE 68 04 00 00 00                 cmp     qword ptr [rsi+468h], 0
.std:000000015095C494 0F 84 8E 02 00 00                       jz      loc_15095C728
.std:000000015095C49A 48 8B CE                                mov     rcx, rsi
.std:000000015095C49D E8 8E 04 84 F0                          call    sub_14119C930
.std:000000015095C4A2 F3 0F 10 00                             movss   xmm0, dword ptr [rax]
.std:000000015095C4A6 48 8D 58 40                             lea     rbx, [rax+40h]
.std:000000015095C4AA F3 0F 11 44 24 50                       movss   dword ptr [rsp+50h], xmm0
.std:000000015095C4B0 F3 0F 10 48 04                          movss   xmm1, dword ptr [rax+4]
.std:000000015095C4B5 F3 0F 11 4C 24 54                       movss   dword ptr [rsp+54h], xmm1
.std:000000015095C4BB F3 0F 10 40 08                          movss   xmm0, dword ptr [rax+8]
.std:000000015095C4C0 F3 0F 11 44 24 58                       movss   dword ptr [rsp+58h], xmm0
.std:000000015095C4C6 F3 0F 10 48 0C                          movss   xmm1, dword ptr [rax+0Ch]
.std:000000015095C4CB F3 0F 11 4C 24 5C                       movss   dword ptr [rsp+5Ch], xmm1
.std:000000015095C4D1 F3 0F 10 40 10                          movss   xmm0, dword ptr [rax+10h]
.std:000000015095C4D6 F3 0F 11 44 24 60                       movss   dword ptr [rsp+60h], xmm0
.std:000000015095C4DC F3 0F 10 48 14                          movss   xmm1, dword ptr [rax+14h]
.std:000000015095C4E1 F3 0F 11 4C 24 64                       movss   dword ptr [rsp+64h], xmm1
.std:000000015095C4E7 F3 0F 10 40 18                          movss   xmm0, dword ptr [rax+18h]
.std:000000015095C4EC F3 0F 11 44 24 68                       movss   dword ptr [rsp+68h], xmm0
.std:000000015095C4F2 F3 0F 10 48 1C                          movss   xmm1, dword ptr [rax+1Ch]
.std:000000015095C4F7 F3 0F 11 4C 24 6C                       movss   dword ptr [rsp+6Ch], xmm1
.std:000000015095C4FD F3 0F 10 40 20                          movss   xmm0, dword ptr [rax+20h]
.std:000000015095C502 F3 0F 11 44 24 70                       movss   dword ptr [rsp+70h], xmm0
.std:000000015095C508 F3 0F 10 48 24                          movss   xmm1, dword ptr [rax+24h]
.std:000000015095C50D F3 0F 11 4C 24 74                       movss   dword ptr [rsp+74h], xmm1
.std:000000015095C513 F3 0F 10 40 28                          movss   xmm0, dword ptr [rax+28h]
.std:000000015095C518 F3 0F 11 44 24 78                       movss   dword ptr [rsp+78h], xmm0
.std:000000015095C51E F3 0F 10 48 2C                          movss   xmm1, dword ptr [rax+2Ch]
.std:000000015095C523 F3 0F 11 4C 24 7C                       movss   dword ptr [rsp+7Ch], xmm1
.std:000000015095C529 F3 0F 10 40 30                          movss   xmm0, dword ptr [rax+30h]
.std:000000015095C52E F3 0F 11 45 80                          movss   dword ptr [rbp-80h], xmm0
.std:000000015095C533 F3 0F 10 48 34                          movss   xmm1, dword ptr [rax+34h]
.std:000000015095C538 F3 0F 11 4D 84                          movss   dword ptr [rbp-7Ch], xmm1
.std:000000015095C53D F3 0F 10 40 38                          movss   xmm0, dword ptr [rax+38h]
.std:000000015095C542 F3 0F 11 45 88                          movss   dword ptr [rbp-78h], xmm0
.std:000000015095C547 F3 0F 10 48 3C                          movss   xmm1, dword ptr [rax+3Ch]
.std:000000015095C54C F3 0F 11 4D 8C                          movss   dword ptr [rbp-74h], xmm1
.std:000000015095C551 66 39 3B                                cmp     [rbx], di
.std:000000015095C554 74 24                                   jz      short loc_15095C57A
.std:000000015095C556 80 7B 02 00                             cmp     byte ptr [rbx+2], 0
.std:000000015095C55A 75 0C                                   jnz     short loc_15095C568
.std:000000015095C55C 48 8D 0D FD A9 79 02                    lea     rcx, aDoubleDecrypti_0 ; "double decryption in EEncHandlerPolicy:"...
.std:000000015095C563 E8 E8 53 67 FE                          call    sub_14EFD1950
.std:000000015095C568
.std:000000015095C568                         loc_15095C568:                          ; CODE XREF: sub_15095C060+4FA↑j
.std:000000015095C568 4C 8B C3                                mov     r8, rbx
.std:000000015095C56B 48 8D 4D 80                             lea     rcx, [rbp-80h]
.std:000000015095C56F BA 0C 00 00 00                          mov     edx, 0Ch
.std:000000015095C574 FF 15 C6 77 B2 09                       call    cs:off_15A483D40
.std:000000015095C57A
.std:000000015095C57A                         loc_15095C57A:                          ; CODE XREF: sub_15095C060+4F4↑j
.std:000000015095C57A 0F 28 44 24 50                          movaps  xmm0, xmmword ptr [rsp+50h]
.std:000000015095C57F 48 8D 55 F0                             lea     rdx, [rbp-10h]
.std:000000015095C583 0F 28 4C 24 60                          movaps  xmm1, xmmword ptr [rsp+60h]
.std:000000015095C588 48 8D 4D A0                             lea     rcx, [rbp-60h]
.std:000000015095C58C 0F 29 45 A0                             movaps  xmmword ptr [rbp-60h], xmm0
.std:000000015095C590 41 0F 28 D1                             movaps  xmm2, xmm9
.std:000000015095C594 0F 28 44 24 70                          movaps  xmm0, xmmword ptr [rsp+70h]
.std:000000015095C599 0F 29 4D B0                             movaps  xmmword ptr [rbp-50h], xmm1
.std:000000015095C59D 0F 28 4D 80                             movaps  xmm1, xmmword ptr [rbp-80h]
.std:000000015095C5A1 0F 29 45 C0                             movaps  xmmword ptr [rbp-40h], xmm0
.std:000000015095C5A5 0F 29 4D D0                             movaps  xmmword ptr [rbp-30h], xmm1
.std:000000015095C5A9 E8 92 B3 73 F0                          call    sub_141097940
.std:000000015095C5AE F3 0F 10 55 F8                          movss   xmm2, dword ptr [rbp-8]
.std:000000015095C5B3 48 8D 4C 24 50                          lea     rcx, [rsp+50h]
.std:000000015095C5B8 F2 0F 10 75 F0                          movsd   xmm6, qword ptr [rbp-10h]
.std:000000015095C5BD 0F 16 F2                                movlhps xmm6, xmm2
.std:000000015095C5C0 0F 29 75 70                             movaps  xmmword ptr [rbp+70h], xmm6
.std:000000015095C5C4 E8 47 16 73 F0                          call    sub_14108DC10
.std:000000015095C5C9 41 0F 2F C0                             comiss  xmm0, xmm8
.std:000000015095C5CD 73 32                                   jnb     short loc_15095C601
.std:000000015095C5CF F3 0F 10 55 A0                          movss   xmm2, dword ptr [rbp-60h]
.std:000000015095C5D4 F3 0F 10 4D A4                          movss   xmm1, dword ptr [rbp-5Ch]
.std:000000015095C5D9 0F 57 D7                                xorps   xmm2, xmm7
.std:000000015095C5DC F3 0F 10 45 A8                          movss   xmm0, dword ptr [rbp-58h]
.std:000000015095C5E1 0F 57 CF                                xorps   xmm1, xmm7
.std:000000015095C5E4 0F 59 35 A5 F8 CD 09                    mulps   xmm6, cs:xmmword_15A63BE90
.std:000000015095C5EB 0F 57 C7                                xorps   xmm0, xmm7
.std:000000015095C5EE F3 0F 11 55 A0                          movss   dword ptr [rbp-60h], xmm2
.std:000000015095C5F3 F3 0F 11 4D A4                          movss   dword ptr [rbp-5Ch], xmm1
.std:000000015095C5F8 F3 0F 11 45 A8                          movss   dword ptr [rbp-58h], xmm0
.std:000000015095C5FD 0F 29 75 70                             movaps  xmmword ptr [rbp+70h], xmm6
.std:000000015095C601
.std:000000015095C601                         loc_15095C601:                          ; CODE XREF: sub_15095C060+56D↑j
.std:000000015095C601 48 8D 55 A0                             lea     rdx, [rbp-60h]
.std:000000015095C605 48 8D 4D 30                             lea     rcx, [rbp+30h]
.std:000000015095C609 E8 32 69 72 F0                          call    sub_141082F40
.std:000000015095C60E 0F 28 75 30                             movaps  xmm6, xmmword ptr [rbp+30h]
.std:000000015095C612 0F 28 2D C7 F8 CD 09                    movaps  xmm5, cs:xmmword_15A63BEE0
.std:000000015095C619 0F 28 CE                                movaps  xmm1, xmm6
.std:000000015095C61C F3 0F 10 55 88                          movss   xmm2, dword ptr [rbp-78h]
.std:000000015095C621 F2 0F 10 5D 80                          movsd   xmm3, qword ptr [rbp-80h]
.std:000000015095C626 0F B6 46 32                             movzx   eax, byte ptr [rsi+32h]
.std:000000015095C62A 0F 16 DA                                movlhps xmm3, xmm2
.std:000000015095C62D FE C8                                   dec     al
.std:000000015095C62F 0F 59 CE                                mulps   xmm1, xmm6
.std:000000015095C632 0F 28 D5                                movaps  xmm2, xmm5
.std:000000015095C635 0F 29 5D 60                             movaps  xmmword ptr [rbp+60h], xmm3
.std:000000015095C639 0F 28 C1                                movaps  xmm0, xmm1
.std:000000015095C63C 0F C6 C1 4E                             shufps  xmm0, xmm1, 4Eh ; 'N'
.std:000000015095C640 0F 58 C8                                addps   xmm1, xmm0
.std:000000015095C643 0F 28 E1                                movaps  xmm4, xmm1
.std:000000015095C646 0F C6 E1 39                             shufps  xmm4, xmm1, 39h ; '9'
.std:000000015095C64A 0F 58 E1                                addps   xmm4, xmm1
.std:000000015095C64D 0F 52 CC                                rsqrtps xmm1, xmm4
.std:000000015095C650 0F 28 DC                                movaps  xmm3, xmm4
.std:000000015095C653 0F 59 DD                                mulps   xmm3, xmm5
.std:000000015095C656 0F 28 C1                                movaps  xmm0, xmm1
.std:000000015095C659 0F 59 C1                                mulps   xmm0, xmm1
.std:000000015095C65C 0F 59 C3                                mulps   xmm0, xmm3
.std:000000015095C65F 0F 5C D0                                subps   xmm2, xmm0
.std:000000015095C662 0F 59 D1                                mulps   xmm2, xmm1
.std:000000015095C665 0F 58 D1                                addps   xmm2, xmm1
.std:000000015095C668 0F 28 C2                                movaps  xmm0, xmm2
.std:000000015095C66B 0F 59 C2                                mulps   xmm0, xmm2
.std:000000015095C66E 0F 59 C3                                mulps   xmm0, xmm3
.std:000000015095C671 0F 5C E8                                subps   xmm5, xmm0
.std:000000015095C674 0F 28 05 25 F6 CD 09                    movaps  xmm0, cs:xmmword_15A63BCA0
.std:000000015095C67B 0F C2 C4 02                             cmpleps xmm0, xmm4
.std:000000015095C67F 0F 59 EA                                mulps   xmm5, xmm2
.std:000000015095C682 0F 58 EA                                addps   xmm5, xmm2
.std:000000015095C685 0F 59 EE                                mulps   xmm5, xmm6
.std:000000015095C688 0F 57 2D A1 F7 CD 09                    xorps   xmm5, cs:xmmword_15A63BE30
.std:000000015095C68F 0F 54 E8                                andps   xmm5, xmm0
.std:000000015095C692 0F 57 2D 97 F7 CD 09                    xorps   xmm5, cs:xmmword_15A63BE30
.std:000000015095C699 0F 29 6D 50                             movaps  xmmword ptr [rbp+50h], xmm5
.std:000000015095C69D 3C 01                                   cmp     al, 1
.std:000000015095C69F 76 0D                                   jbe     short loc_15095C6AE
.std:000000015095C6A1 F6 86 F0 03 00 00 02                    test    byte ptr [rsi+3F0h], 2
.std:000000015095C6A8 75 04                                   jnz     short loc_15095C6AE
.std:000000015095C6AA 32 DB                                   xor     bl, bl
.std:000000015095C6AC EB 02                                   jmp     short loc_15095C6B0
.std:000000015095C6AE                         ; ---------------------------------------------------------------------------
.std:000000015095C6AE
.std:000000015095C6AE                         loc_15095C6AE:                          ; CODE XREF: sub_15095C060+63F↑j
.std:000000015095C6AE                                                                 ; sub_15095C060+648↑j
.std:000000015095C6AE B3 01                                   mov     bl, 1
.std:000000015095C6B0
.std:000000015095C6B0                         loc_15095C6B0:                          ; CODE XREF: sub_15095C060+64C↑j
.std:000000015095C6B0 0F B6 46 36                             movzx   eax, byte ptr [rsi+36h]
.std:000000015095C6B4 44 0F B6 C8                             movzx   r9d, al
.std:000000015095C6B8 41 C0 E9 02                             shr     r9b, 2
.std:000000015095C6BC 41 80 E1 01                             and     r9b, 1
.std:000000015095C6C0 80 7E 35 00                             cmp     byte ptr [rsi+35h], 0
.std:000000015095C6C4 7C 09                                   jl      short loc_15095C6CF
.std:000000015095C6C6 A8 01                                   test    al, 1
.std:000000015095C6C8 75 05                                   jnz     short loc_15095C6CF
.std:000000015095C6CA 45 32 C0                                xor     r8b, r8b
.std:000000015095C6CD EB 03                                   jmp     short loc_15095C6D2
.std:000000015095C6CF                         ; ---------------------------------------------------------------------------
.std:000000015095C6CF
.std:000000015095C6CF                         loc_15095C6CF:                          ; CODE XREF: sub_15095C060+664↑j
.std:000000015095C6CF                                                                 ; sub_15095C060+668↑j
.std:000000015095C6CF 41 B0 01                                mov     r8b, 1
.std:000000015095C6D2
.std:000000015095C6D2                         loc_15095C6D2:                          ; CODE XREF: sub_15095C060+66D↑j
.std:000000015095C6D2 48 8D 55 00                             lea     rdx, [rbp+0]
.std:000000015095C6D6 C6 44 24 20 01                          mov     byte ptr [rsp+20h], 1
.std:000000015095C6DB 48 8D 4D 40                             lea     rcx, [rbp+40h]
.std:000000015095C6DF E8 1C D4 63 00                          call    sub_150F99B00
.std:000000015095C6E4 48 8B C8                                mov     rcx, rax
.std:000000015095C6E7 48 8D 55 18                             lea     rdx, [rbp+18h]
.std:000000015095C6EB 41 B0 01                                mov     r8b, 1
.std:000000015095C6EE E8 DD 73 67 FE                          call    sub_14EFD3AD0
.std:000000015095C6F3 4C 89 6C 24 40                          mov     [rsp+40h], r13
.std:000000015095C6F8 45 33 C9                                xor     r9d, r9d
.std:000000015095C6FB 44 89 7C 24 38                          mov     [rsp+38h], r15d
.std:000000015095C700 88 5C 24 30                             mov     [rsp+30h], bl
.std:000000015095C704 C6 44 24 28 00                          mov     byte ptr [rsp+28h], 0
.std:000000015095C709
.std:000000015095C709                         loc_15095C709:                          ; CODE XREF: sub_15095C060+417↑j
.std:000000015095C709 48 8B 8E 68 04 00 00                    mov     rcx, [rsi+468h]
.std:000000015095C710 48 8D 55 50                             lea     rdx, [rbp+50h]
.std:000000015095C714 44 8B 00                                mov     r8d, [rax]
.std:000000015095C717 48 83 C1 28                             add     rcx, 28h ; '('
.std:000000015095C71B C6 44 24 20 00                          mov     byte ptr [rsp+20h], 0
.std:000000015095C720 E8 BB 1E 57 00                          call    sub_150ECE5E0
.std:000000015095C725 8B 5D 90                                mov     ebx, [rbp-70h]
.std:000000015095C728
.std:000000015095C728                         loc_15095C728:                          ; CODE XREF: sub_15095C060+B4↑j
.std:000000015095C728                                                                 ; sub_15095C060+F8↑j ...
.std:000000015095C728 41 FF C7                                inc     r15d
.std:000000015095C72B 45 3B 7C 24 08                          cmp     r15d, [r12+8]
.std:000000015095C730 0F 8C DA F9 FF FF                       jl      loc_15095C110
.std:000000015095C736 44 0F 28 8C 24 90 01 00                 movaps  xmm9, xmmword ptr [rsp+190h]
.std:000000015095C736 00
.std:000000015095C73F 44 0F 28 84 24 A0 01 00                 movaps  xmm8, xmmword ptr [rsp+1A0h]
.std:000000015095C73F 00
.std:000000015095C748 0F 28 BC 24 B0 01 00 00                 movaps  xmm7, xmmword ptr [rsp+1B0h]
.std:000000015095C750 0F 28 B4 24 C0 01 00 00                 movaps  xmm6, xmmword ptr [rsp+1C0h]
.std:000000015095C758 4C 8B B4 24 D8 01 00 00                 mov     r14, [rsp+1D8h]
.std:000000015095C760 48 8B BC 24 20 02 00 00                 mov     rdi, [rsp+220h]
.std:000000015095C760                         ; } // starts at 15095C0BE
.std:000000015095C768
.std:000000015095C768                         loc_15095C768:                          ; CODE XREF: sub_15095C060+58↑j
.std:000000015095C768                         ; __unwind { // sub_152B5621C
.std:000000015095C768 4C 8B BC 24 D0 01 00 00                 mov     r15, [rsp+1D0h]
.std:000000015095C768                         ; } // starts at 15095C768
.std:000000015095C770
.std:000000015095C770                         loc_15095C770:                          ; CODE XREF: sub_15095C060+42↑j
.std:000000015095C770                         ; __unwind { // sub_152B5621C
.std:000000015095C770 48 8B 8D 80 00 00 00                    mov     rcx, [rbp+80h]
.std:000000015095C777 48 33 CC                                xor     rcx, rsp
.std:000000015095C77A E8 11 9C 1F 02                          call    sub_152B56390
.std:000000015095C77F 48 81 C4 E0 01 00 00                    add     rsp, 1E0h
.std:000000015095C786 41 5D                                   pop     r13
.std:000000015095C788 41 5C                                   pop     r12
.std:000000015095C78A 5E                                      pop     rsi
.std:000000015095C78B 5B                                      pop     rbx
.std:000000015095C78C 5D                                      pop     rbp
.std:000000015095C78D C3                                      retn
.std:000000015095C78D                         ; } // starts at 15095C770
.std:000000015095C78D                         sub_15095C060   endp
.std:000000015095C78D
.std:000000015095C78D                         ; ---------------------------------------------------------------------------
.std:000000015095C78E CC CC                                   align 10h
.std:000000015095C790
.std:000000015095C790                         ; =============== S U B R O U T I N E =======================================
.std:000000015095C790
.std:000000015095C790
.std:000000015095C790                         sub_15095C790   proc near
.std:000000015095C790 4C 8B DC                                mov     r11, rsp
.std:000000015095C793 45 89 4B 20                             mov     [r11+20h], r9d
.std:000000015095C797 49 89 53 10                             mov     [r11+10h], rdx
.std:000000015095C79B 57                                      push    rdi
.std:000000015095C79C 48 81 EC 40 01 00 00                    sub     rsp, 140h
.std:000000015095C7A3 48 8B 81 60 04 00 00                    mov     rax, [rcx+460h]
.std:000000015095C7AA 48 8B F9                                mov     rdi, rcx
.std:000000015095C7AD 48 85 C0                                test    rax, rax
.std:000000015095C7B0 0F 84 7A 05 00 00                       jz      loc_15095CD30
.std:000000015095C7B6 48 8B 80 F0 00 00 00                    mov     rax, [rax+0F0h]
.std:000000015095C7BD 48 89 44 24 78                          mov     [rsp+78h], rax
.std:000000015095C7C2 48 85 C0                                test    rax, rax
.std:000000015095C7C5 0F 84 65 05 00 00                       jz      loc_15095CD30
.std:000000015095C7CB 4D 89 6B D8                             mov     [r11-28h], r13
.std:000000015095C7CF 45 33 ED                                xor     r13d, r13d
.std:000000015095C7D2 44 39 6A 08                             cmp     [rdx+8], r13d
.std:000000015095C7D6 0F 8E 4C 05 00 00                       jle     loc_15095CD28
.std:000000015095C7DC 49 89 73 E8                             mov     [r11-18h], rsi
.std:000000015095C7E0 4D 89 63 E0                             mov     [r11-20h], r12
.std:000000015095C7E4 45 8B E5                                mov     r12d, r13d
.std:000000015095C7E7 4D 89 73 D0                             mov     [r11-30h], r14
.std:000000015095C7EB 41 BE 9C 0A 00 00                       mov     r14d, 0A9Ch
.std:000000015095C7F1 4D 89 7B C8                             mov     [r11-38h], r15
.std:000000015095C7F5 41 BF 01 00 00 00                       mov     r15d, 1
.std:000000015095C7FB 45 0F 29 4B 88                          movaps  xmmword ptr [r11-78h], xmm9
.std:000000015095C800 F3 44 0F 10 0D 0F A2 78                 movss   xmm9, dword ptr cs:ymmword_1530E6A04+14h
.std:000000015095C800 02
.std:000000015095C809 45 0F 29 93 78 FF FF FF                 movaps  xmmword ptr [r11-88h], xmm10
.std:000000015095C811 F3 44 0F 10 15 2A A2 78                 movss   xmm10, dword ptr cs:ymmword_1530E6A28+1Ch
.std:000000015095C811 02
.std:000000015095C81A 45 0F 29 9B 68 FF FF FF                 movaps  xmmword ptr [r11-98h], xmm11
.std:000000015095C822 45 0F 57 DB                             xorps   xmm11, xmm11
.std:000000015095C826 49 89 5B 18                             mov     [r11+18h], rbx
.std:000000015095C82A 49 89 6B F0                             mov     [r11-10h], rbp
.std:000000015095C82E 41 0F 29 73 B8                          movaps  xmmword ptr [r11-48h], xmm6
.std:000000015095C833 41 0F 29 7B A8                          movaps  xmmword ptr [r11-58h], xmm7
.std:000000015095C838 45 0F 29 43 98                          movaps  xmmword ptr [r11-68h], xmm8
.std:000000015095C83D 0F 1F 00                                nop     dword ptr [rax]
.std:000000015095C840
.std:000000015095C840                         loc_15095C840:                          ; CODE XREF: sub_15095C790+52E↓j
.std:000000015095C840 45 85 F9                                test    r9d, r15d
.std:000000015095C843 0F 84 67 04 00 00                       jz      loc_15095CCB0
.std:000000015095C849 48 8B CA                                mov     rcx, rdx
.std:000000015095C84C FF 15 2E 12 CB 08                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000015095C852 F6 87 88 04 00 00 01                    test    byte ptr [rdi+488h], 1
.std:000000015095C859 F3 0F 10 BF 54 04 00 00                 movss   xmm7, dword ptr [rdi+454h]
.std:000000015095C861 F3 44 0F 10 87 58 04 00                 movss   xmm8, dword ptr [rdi+458h]
.std:000000015095C861 00
.std:000000015095C86A 49 8B 2C 04                             mov     rbp, [r12+rax]
.std:000000015095C86E 0F 84 05 01 00 00                       jz      loc_15095C979
.std:000000015095C874 0F B6 05 35 FA CD 09                    movzx   eax, cs:byte_15A63C2B0
.std:000000015095C87B 84 C0                                   test    al, al
.std:000000015095C87D 74 26                                   jz      short loc_15095C8A5
.std:000000015095C87F 4C 8D 44 24 60                          lea     r8, [rsp+60h]
.std:000000015095C884 48 8B D5                                mov     rdx, rbp
.std:000000015095C887 48 8D 0D 8A A3 2C 08                    lea     rcx, off_158C26C18
.std:000000015095C88E E8 DD F6 9F F0                          call    sub_14135BF70
.std:000000015095C893 84 C0                                   test    al, al
.std:000000015095C895 74 0E                                   jz      short loc_15095C8A5
.std:000000015095C897 48 8B 4C 24 60                          mov     rcx, [rsp+60h]
.std:000000015095C89C 48 8D 9D 10 03 00 00                    lea     rbx, [rbp+310h]
.std:000000015095C8A3 EB 0A                                   jmp     short loc_15095C8AF
.std:000000015095C8A5                         ; ---------------------------------------------------------------------------
.std:000000015095C8A5
.std:000000015095C8A5                         loc_15095C8A5:                          ; CODE XREF: sub_15095C790+ED↑j
.std:000000015095C8A5                                                                 ; sub_15095C790+105↑j
.std:000000015095C8A5 48 8D 9D 10 03 00 00                    lea     rbx, [rbp+310h]
.std:000000015095C8AC 48 8B CB                                mov     rcx, rbx
.std:000000015095C8AF
.std:000000015095C8AF                         loc_15095C8AF:                          ; CODE XREF: sub_15095C790+113↑j
.std:000000015095C8AF 48 63 81 00 09 00 00                    movsxd  rax, dword ptr [rcx+900h]
.std:000000015095C8B6 48 C1 E0 06                             shl     rax, 6
.std:000000015095C8BA 44 0F 2E 4C 08 3C                       ucomiss xmm9, dword ptr [rax+rcx+3Ch]
.std:000000015095C8C0 0F 84 B3 00 00 00                       jz      loc_15095C979
.std:000000015095C8C6 0F B6 05 E3 F9 CD 09                    movzx   eax, cs:byte_15A63C2B0
.std:000000015095C8CD 84 C0                                   test    al, al
.std:000000015095C8CF 74 1D                                   jz      short loc_15095C8EE
.std:000000015095C8D1 4C 8D 44 24 68                          lea     r8, [rsp+68h]
.std:000000015095C8D6 48 8B D5                                mov     rdx, rbp
.std:000000015095C8D9 48 8D 0D 38 A3 2C 08                    lea     rcx, off_158C26C18
.std:000000015095C8E0 E8 8B F6 9F F0                          call    sub_14135BF70
.std:000000015095C8E5 84 C0                                   test    al, al
.std:000000015095C8E7 48 8B 44 24 68                          mov     rax, [rsp+68h]
.std:000000015095C8EC 75 03                                   jnz     short loc_15095C8F1
.std:000000015095C8EE
.std:000000015095C8EE                         loc_15095C8EE:                          ; CODE XREF: sub_15095C790+13F↑j
.std:000000015095C8EE 48 8B C3                                mov     rax, rbx
.std:000000015095C8F1
.std:000000015095C8F1                         loc_15095C8F1:                          ; CODE XREF: sub_15095C790+15C↑j
.std:000000015095C8F1 48 63 B0 00 09 00 00                    movsxd  rsi, dword ptr [rax+900h]
.std:000000015095C8F8 48 C1 E6 06                             shl     rsi, 6
.std:000000015095C8FC 48 03 F0                                add     rsi, rax
.std:000000015095C8FF 0F B6 05 AA F9 CD 09                    movzx   eax, cs:byte_15A63C2B0
.std:000000015095C906 84 C0                                   test    al, al
.std:000000015095C908 74 1D                                   jz      short loc_15095C927
.std:000000015095C90A 4C 8D 44 24 70                          lea     r8, [rsp+70h]
.std:000000015095C90F 48 8B D5                                mov     rdx, rbp
.std:000000015095C912 48 8D 0D FF A2 2C 08                    lea     rcx, off_158C26C18
.std:000000015095C919 E8 52 F6 9F F0                          call    sub_14135BF70
.std:000000015095C91E 84 C0                                   test    al, al
.std:000000015095C920 74 05                                   jz      short loc_15095C927
.std:000000015095C922 48 8B 5C 24 70                          mov     rbx, [rsp+70h]
.std:000000015095C927
.std:000000015095C927                         loc_15095C927:                          ; CODE XREF: sub_15095C790+178↑j
.std:000000015095C927                                                                 ; sub_15095C790+190↑j
.std:000000015095C927 48 63 83 00 09 00 00                    movsxd  rax, dword ptr [rbx+900h]
.std:000000015095C92E 48 C1 E0 06                             shl     rax, 6
.std:000000015095C932 F3 0F 10 34 18                          movss   xmm6, dword ptr [rax+rbx]
.std:000000015095C937 F3 0F 5D 76 14                          minss   xmm6, dword ptr [rsi+14h]
.std:000000015095C93C 41 0F 2E F3                             ucomiss xmm6, xmm11
.std:000000015095C940 74 37                                   jz      short loc_15095C979
.std:000000015095C942 4C 8D 87 48 04 00 00                    lea     r8, [rdi+448h]
.std:000000015095C949 48 8B CD                                mov     rcx, rbp
.std:000000015095C94C 48 8D 94 24 A0 00 00 00                 lea     rdx, [rsp+0A0h]
.std:000000015095C954 E8 A7 35 6B 00                          call    sub_15100FF00
.std:000000015095C959 F3 0F 10 87 5C 04 00 00                 movss   xmm0, dword ptr [rdi+45Ch]
.std:000000015095C961 F3 0F 5E C6                             divss   xmm0, xmm6
.std:000000015095C965 F3 0F 59 40 0C                          mulss   xmm0, dword ptr [rax+0Ch]
.std:000000015095C96A 41 0F 2F C1                             comiss  xmm0, xmm9
.std:000000015095C96E 73 09                                   jnb     short loc_15095C979
.std:000000015095C970 F3 0F 59 F8                             mulss   xmm7, xmm0
.std:000000015095C974 F3 44 0F 59 C0                          mulss   xmm8, xmm0
.std:000000015095C979
.std:000000015095C979                         loc_15095C979:                          ; CODE XREF: sub_15095C790+DE↑j
.std:000000015095C979                                                                 ; sub_15095C790+130↑j ...
.std:000000015095C979 80 7F 35 00                             cmp     byte ptr [rdi+35h], 0
.std:000000015095C97D 0F 10 87 78 04 00 00                    movups  xmm0, xmmword ptr [rdi+478h]
.std:000000015095C984 0F 11 84 24 80 00 00 00                 movups  xmmword ptr [rsp+80h], xmm0
.std:000000015095C98C 0F 8C B0 00 00 00                       jl      loc_15095CA42
.std:000000015095C992 0F B6 47 36                             movzx   eax, byte ptr [rdi+36h]
.std:000000015095C996 48 8D 77 36                             lea     rsi, [rdi+36h]
.std:000000015095C99A A8 01                                   test    al, 1
.std:000000015095C99C 0F 85 A0 00 00 00                       jnz     loc_15095CA42
.std:000000015095C9A2 A8 04                                   test    al, 4
.std:000000015095C9A4 0F 84 EE 01 00 00                       jz      loc_15095CB98
.std:000000015095C9AA FF 15 10 0B E8 08                       call    cs:off_1597DD4C0 ; AK::WriteBytesCount::Reserve(long) ...
.std:000000015095C9B0 84 C0                                   test    al, al
.std:000000015095C9B2 75 09                                   jnz     short loc_15095C9BD
.std:000000015095C9B4 48 8B 1D 0D 1B E8 08                    mov     rbx, cs:qword_1597DE4C8
.std:000000015095C9BB EB 35                                   jmp     short loc_15095C9F2
.std:000000015095C9BD                         ; ---------------------------------------------------------------------------
.std:000000015095C9BD
.std:000000015095C9BD                         loc_15095C9BD:                          ; CODE XREF: sub_15095C790+222↑j
.std:000000015095C9BD 48 8B 0D 04 3B E8 08                    mov     rcx, cs:qword_1597E04C8
.std:000000015095C9C4 0F B6 05 03 3B E8 08                    movzx   eax, byte ptr cs:qword_1597E04C8+6
.std:000000015095C9CB 48 89 8C 24 50 01 00 00                 mov     [rsp+150h], rcx
.std:000000015095C9D3 34 37                                   xor     al, 37h
.std:000000015095C9D5 48 C1 E9 08                             shr     rcx, 8
.std:000000015095C9D9 80 F1 37                                xor     cl, 37h
.std:000000015095C9DC 88 84 24 51 01 00 00                    mov     [rsp+151h], al
.std:000000015095C9E3 88 8C 24 56 01 00 00                    mov     [rsp+156h], cl
.std:000000015095C9EA 48 8B 9C 24 50 01 00 00                 mov     rbx, [rsp+150h]
.std:000000015095C9F2
.std:000000015095C9F2                         loc_15095C9F2:                          ; CODE XREF: sub_15095C790+22B↑j
.std:000000015095C9F2 FF 15 C8 0A E8 08                       call    cs:off_1597DD4C0 ; AK::WriteBytesCount::Reserve(long) ...
.std:000000015095C9F8 84 C0                                   test    al, al
.std:000000015095C9FA 75 0C                                   jnz     short loc_15095CA08
.std:000000015095C9FC 48 8B 15 C5 1A E8 08                    mov     rdx, cs:qword_1597DE4C8
.std:000000015095CA03 E9 CE 00 00 00                          jmp     loc_15095CAD6
.std:000000015095CA08                         ; ---------------------------------------------------------------------------
.std:000000015095CA08
.std:000000015095CA08                         loc_15095CA08:                          ; CODE XREF: sub_15095C790+26A↑j
.std:000000015095CA08 48 8B 0D B9 3A E8 08                    mov     rcx, cs:qword_1597E04C8
.std:000000015095CA0F 0F B6 05 B8 3A E8 08                    movzx   eax, byte ptr cs:qword_1597E04C8+6
.std:000000015095CA16 48 89 8C 24 50 01 00 00                 mov     [rsp+150h], rcx
.std:000000015095CA1E 34 37                                   xor     al, 37h
.std:000000015095CA20 48 C1 E9 08                             shr     rcx, 8
.std:000000015095CA24 80 F1 37                                xor     cl, 37h
.std:000000015095CA27 88 84 24 51 01 00 00                    mov     [rsp+151h], al
.std:000000015095CA2E 88 8C 24 56 01 00 00                    mov     [rsp+156h], cl
.std:000000015095CA35 48 8B 94 24 50 01 00 00                 mov     rdx, [rsp+150h]
.std:000000015095CA3D E9 94 00 00 00                          jmp     loc_15095CAD6
.std:000000015095CA42                         ; ---------------------------------------------------------------------------
.std:000000015095CA42
.std:000000015095CA42                         loc_15095CA42:                          ; CODE XREF: sub_15095C790+1FC↑j
.std:000000015095CA42                                                                 ; sub_15095C790+20C↑j
.std:000000015095CA42 FF 15 78 0A E8 08                       call    cs:off_1597DD4C0 ; AK::WriteBytesCount::Reserve(long) ...
.std:000000015095CA48 84 C0                                   test    al, al
.std:000000015095CA4A 75 09                                   jnz     short loc_15095CA55
.std:000000015095CA4C 48 8B 1D 75 1A E8 08                    mov     rbx, cs:qword_1597DE4C8
.std:000000015095CA53 EB 35                                   jmp     short loc_15095CA8A
.std:000000015095CA55                         ; ---------------------------------------------------------------------------
.std:000000015095CA55
.std:000000015095CA55                         loc_15095CA55:                          ; CODE XREF: sub_15095C790+2BA↑j
.std:000000015095CA55 48 8B 0D 6C 3A E8 08                    mov     rcx, cs:qword_1597E04C8
.std:000000015095CA5C 0F B6 05 6B 3A E8 08                    movzx   eax, byte ptr cs:qword_1597E04C8+6
.std:000000015095CA63 48 89 8C 24 50 01 00 00                 mov     [rsp+150h], rcx
.std:000000015095CA6B 34 37                                   xor     al, 37h
.std:000000015095CA6D 48 C1 E9 08                             shr     rcx, 8
.std:000000015095CA71 80 F1 37                                xor     cl, 37h
.std:000000015095CA74 88 84 24 51 01 00 00                    mov     [rsp+151h], al
.std:000000015095CA7B 88 8C 24 56 01 00 00                    mov     [rsp+156h], cl
.std:000000015095CA82 48 8B 9C 24 50 01 00 00                 mov     rbx, [rsp+150h]
.std:000000015095CA8A
.std:000000015095CA8A                         loc_15095CA8A:                          ; CODE XREF: sub_15095C790+2C3↑j
.std:000000015095CA8A FF 15 30 0A E8 08                       call    cs:off_1597DD4C0 ; AK::WriteBytesCount::Reserve(long) ...
.std:000000015095CA90 84 C0                                   test    al, al
.std:000000015095CA92 75 09                                   jnz     short loc_15095CA9D
.std:000000015095CA94 48 8B 15 2D 1A E8 08                    mov     rdx, cs:qword_1597DE4C8
.std:000000015095CA9B EB 35                                   jmp     short loc_15095CAD2
.std:000000015095CA9D                         ; ---------------------------------------------------------------------------
.std:000000015095CA9D
.std:000000015095CA9D                         loc_15095CA9D:                          ; CODE XREF: sub_15095C790+302↑j
.std:000000015095CA9D 48 8B 0D 24 3A E8 08                    mov     rcx, cs:qword_1597E04C8
.std:000000015095CAA4 0F B6 05 23 3A E8 08                    movzx   eax, byte ptr cs:qword_1597E04C8+6
.std:000000015095CAAB 48 89 8C 24 50 01 00 00                 mov     [rsp+150h], rcx
.std:000000015095CAB3 34 37                                   xor     al, 37h
.std:000000015095CAB5 48 C1 E9 08                             shr     rcx, 8
.std:000000015095CAB9 80 F1 37                                xor     cl, 37h
.std:000000015095CABC 88 84 24 51 01 00 00                    mov     [rsp+151h], al
.std:000000015095CAC3 88 8C 24 56 01 00 00                    mov     [rsp+156h], cl
.std:000000015095CACA 48 8B 94 24 50 01 00 00                 mov     rdx, [rsp+150h]
.std:000000015095CAD2
.std:000000015095CAD2                         loc_15095CAD2:                          ; CODE XREF: sub_15095C790+30B↑j
.std:000000015095CAD2 48 8D 77 36                             lea     rsi, [rdi+36h]
.std:000000015095CAD6
.std:000000015095CAD6                         loc_15095CAD6:                          ; CODE XREF: sub_15095C790+273↑j
.std:000000015095CAD6                                                                 ; sub_15095C790+2AD↑j
.std:000000015095CAD6 F3 0F 10 93 20 0B 00 00                 movss   xmm2, dword ptr [rbx+0B20h]
.std:000000015095CADE 41 B8 A0 0A 00 00                       mov     r8d, 0AA0h
.std:000000015095CAE4 0F B6 8A DC 0A 00 00                    movzx   ecx, byte ptr [rdx+0ADCh]
.std:000000015095CAEB 0F 28 DA                                movaps  xmm3, xmm2
.std:000000015095CAEE 84 C9                                   test    cl, cl
.std:000000015095CAF0 0F 28 CA                                movaps  xmm1, xmm2
.std:000000015095CAF3 0F 28 C2                                movaps  xmm0, xmm2
.std:000000015095CAF6 B8 CC 0A 00 00                          mov     eax, 0ACCh
.std:000000015095CAFB 49 0F 44 C6                             cmovz   rax, r14
.std:000000015095CAFF B9 A8 0A 00 00                          mov     ecx, 0AA8h
.std:000000015095CB04 F3 0F 59 1C 10                          mulss   xmm3, dword ptr [rax+rdx]
.std:000000015095CB09 B8 D0 0A 00 00                          mov     eax, 0AD0h
.std:000000015095CB0E 41 0F 44 C0                             cmovz   eax, r8d
.std:000000015095CB12 41 B8 A4 0A 00 00                       mov     r8d, 0AA4h
.std:000000015095CB18 F3 41 0F 59 DA                          mulss   xmm3, xmm10
.std:000000015095CB1D F3 0F 59 0C 10                          mulss   xmm1, dword ptr [rax+rdx]
.std:000000015095CB22 B8 D4 0A 00 00                          mov     eax, 0AD4h
.std:000000015095CB27 41 0F 44 C0                             cmovz   eax, r8d
.std:000000015095CB2B F3 0F 58 1D DD 9A 93 06                 addss   xmm3, dword ptr cs:xmmword_157296610
.std:000000015095CB33 F3 41 0F 59 CA                          mulss   xmm1, xmm10
.std:000000015095CB38 F3 0F 59 04 10                          mulss   xmm0, dword ptr [rax+rdx]
.std:000000015095CB3D B8 D8 0A 00 00                          mov     eax, 0AD8h
.std:000000015095CB42 0F 44 C1                                cmovz   eax, ecx
.std:000000015095CB45 0F C6 DB E1                             shufps  xmm3, xmm3, 0E1h
.std:000000015095CB49 F3 0F 58 0D C3 9A 93 06                 addss   xmm1, dword ptr cs:xmmword_157296610+4
.std:000000015095CB51 F3 41 0F 59 C2                          mulss   xmm0, xmm10
.std:000000015095CB56 F3 0F 59 14 10                          mulss   xmm2, dword ptr [rax+rdx]
.std:000000015095CB5B F3 0F 58 05 B5 9A 93 06                 addss   xmm0, dword ptr cs:xmmword_157296610+8
.std:000000015095CB63 F3 0F 10 D9                             movss   xmm3, xmm1
.std:000000015095CB67 0F C6 DB C6                             shufps  xmm3, xmm3, 0C6h
.std:000000015095CB6B F3 41 0F 59 D2                          mulss   xmm2, xmm10
.std:000000015095CB70 F3 0F 10 D8                             movss   xmm3, xmm0
.std:000000015095CB74 0F C6 DB 27                             shufps  xmm3, xmm3, 27h ; '''
.std:000000015095CB78 F3 0F 58 15 9C 9A 93 06                 addss   xmm2, dword ptr cs:xmmword_157296610+0Ch
.std:000000015095CB80 F3 0F 10 DA                             movss   xmm3, xmm2
.std:000000015095CB84 0F C6 DB 39                             shufps  xmm3, xmm3, 39h ; '9'
.std:000000015095CB88 0F 11 9C 24 80 00 00 00                 movups  xmmword ptr [rsp+80h], xmm3
.std:000000015095CB90 0F 11 9C 24 80 00 00 00                 movups  xmmword ptr [rsp+80h], xmm3
.std:000000015095CB98
.std:000000015095CB98                         loc_15095CB98:                          ; CODE XREF: sub_15095C790+214↑j
.std:000000015095CB98 F6 87 88 04 00 00 02                    test    byte ptr [rdi+488h], 2
.std:000000015095CB9F 74 24                                   jz      short loc_15095CBC5
.std:000000015095CBA1 48 8D 15 F4 9A 93 06                    lea     rdx, dword_15729669C
.std:000000015095CBA8 48 8D 8C 24 90 00 00 00                 lea     rcx, [rsp+90h]
.std:000000015095CBB0 E8 6B 74 65 FE                          call    sub_14EFB4020
.std:000000015095CBB5 0F 10 84 24 90 00 00 00                 movups  xmm0, xmmword ptr [rsp+90h]
.std:000000015095CBBD 0F 11 84 24 80 00 00 00                 movups  xmmword ptr [rsp+80h], xmm0
.std:000000015095CBC5
.std:000000015095CBC5                         loc_15095CBC5:                          ; CODE XREF: sub_15095C790+40F↑j
.std:000000015095CBC5 48 8B 9C 24 70 01 00 00                 mov     rbx, [rsp+170h]
.std:000000015095CBCD 48 83 C3 50                             add     rbx, 50h ; 'P'
.std:000000015095CBD1 48 8D 4B 10                             lea     rcx, [rbx+10h]
.std:000000015095CBD5 FF 15 A5 0E CB 08                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000015095CBDB 48 85 C0                                test    rax, rax
.std:000000015095CBDE 48 0F 45 D8                             cmovnz  rbx, rax
.std:000000015095CBE2 F6 06 08                                test    byte ptr [rsi], 8
.std:000000015095CBE5 4E 8B 34 23                             mov     r14, [rbx+r12]
.std:000000015095CBE9 74 39                                   jz      short loc_15095CC24
.std:000000015095CBEB 48 8B B5 C8 02 00 00                    mov     rsi, [rbp+2C8h]
.std:000000015095CBF2 48 8D 8F 30 01 00 00                    lea     rcx, [rdi+130h]
.std:000000015095CBF9 FF 15 81 0E CB 08                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000015095CBFF 48 63 8F 38 01 00 00                    movsxd  rcx, dword ptr [rdi+138h]
.std:000000015095CC06 48 8B D0                                mov     rdx, rax
.std:000000015095CC09 4C 8D 04 C8                             lea     r8, [rax+rcx*8]
.std:000000015095CC0D 49 3B C0                                cmp     rax, r8
.std:000000015095CC10 74 12                                   jz      short loc_15095CC24
.std:000000015095CC12
.std:000000015095CC12                         loc_15095CC12:                          ; CODE XREF: sub_15095C790+492↓j
.std:000000015095CC12 48 39 32                                cmp     [rdx], rsi
.std:000000015095CC15 0F 84 1E 01 00 00                       jz      loc_15095CD39
.std:000000015095CC1B 48 83 C2 08                             add     rdx, 8
.std:000000015095CC1F 49 3B D0                                cmp     rdx, r8
.std:000000015095CC22 75 EE                                   jnz     short loc_15095CC12
.std:000000015095CC24
.std:000000015095CC24                         loc_15095CC24:                          ; CODE XREF: sub_15095C790+459↑j
.std:000000015095CC24                                                                 ; sub_15095C790+480↑j ...
.std:000000015095CC24 0F B6 4F 36                             movzx   ecx, byte ptr [rdi+36h]
.std:000000015095CC28 C0 E9 05                                shr     cl, 5
.std:000000015095CC2B
.std:000000015095CC2B                         loc_15095CC2B:                          ; CODE XREF: sub_15095C790+5C0↓j
.std:000000015095CC2B F3 0F 10 87 74 04 00 00                 movss   xmm0, dword ptr [rdi+474h]
.std:000000015095CC33 48 8D 97 48 04 00 00                    lea     rdx, [rdi+448h]
.std:000000015095CC3A F3 0F 10 8F 70 04 00 00                 movss   xmm1, dword ptr [rdi+470h]
.std:000000015095CC42 41 0F 28 D8                             movaps  xmm3, xmm8
.std:000000015095CC46 49 8B 06                                mov     rax, [r14]
.std:000000015095CC49 0F 28 D7                                movaps  xmm2, xmm7
.std:000000015095CC4C C6 44 24 58 01                          mov     byte ptr [rsp+58h], 1
.std:000000015095CC51 F3 0F 11 44 24 50                       movss   dword ptr [rsp+50h], xmm0
.std:000000015095CC57 F3 0F 10 87 6C 04 00 00                 movss   xmm0, dword ptr [rdi+46Ch]
.std:000000015095CC5F F3 0F 11 4C 24 48                       movss   dword ptr [rsp+48h], xmm1
.std:000000015095CC65 F3 0F 10 8F 68 04 00 00                 movss   xmm1, dword ptr [rdi+468h]
.std:000000015095CC6D F3 0F 11 44 24 40                       movss   dword ptr [rsp+40h], xmm0
.std:000000015095CC73 F3 0F 11 4C 24 38                       movss   dword ptr [rsp+38h], xmm1
.std:000000015095CC79 88 4C 24 30                             mov     [rsp+30h], cl
.std:000000015095CC7D 48 8D 8C 24 80 00 00 00                 lea     rcx, [rsp+80h]
.std:000000015095CC85 48 89 4C 24 28                          mov     [rsp+28h], rcx
.std:000000015095CC8A 48 8B 4C 24 78                          mov     rcx, [rsp+78h]
.std:000000015095CC8F 48 89 4C 24 20                          mov     [rsp+20h], rcx
.std:000000015095CC94 49 8B CE                                mov     rcx, r14
.std:000000015095CC97 FF 50 28                                call    qword ptr [rax+28h]
.std:000000015095CC9A 48 8B 94 24 58 01 00 00                 mov     rdx, [rsp+158h]
.std:000000015095CCA2 41 BE 9C 0A 00 00                       mov     r14d, 0A9Ch
.std:000000015095CCA8 44 8B 8C 24 68 01 00 00                 mov     r9d, [rsp+168h]
.std:000000015095CCB0
.std:000000015095CCB0                         loc_15095CCB0:                          ; CODE XREF: sub_15095C790+B3↑j
.std:000000015095CCB0 41 FF C5                                inc     r13d
.std:000000015095CCB3 41 D1 C7                                rol     r15d, 1
.std:000000015095CCB6 49 83 C4 08                             add     r12, 8
.std:000000015095CCBA 44 3B 6A 08                             cmp     r13d, [rdx+8]
.std:000000015095CCBE 0F 8C 7C FB FF FF                       jl      loc_15095C840
.std:000000015095CCC4 44 0F 28 9C 24 B0 00 00                 movaps  xmm11, xmmword ptr [rsp+0B0h]
.std:000000015095CCC4 00
.std:000000015095CCCD 44 0F 28 94 24 C0 00 00                 movaps  xmm10, xmmword ptr [rsp+0C0h]
.std:000000015095CCCD 00
.std:000000015095CCD6 44 0F 28 8C 24 D0 00 00                 movaps  xmm9, xmmword ptr [rsp+0D0h]
.std:000000015095CCD6 00
.std:000000015095CCDF 44 0F 28 84 24 E0 00 00                 movaps  xmm8, xmmword ptr [rsp+0E0h]
.std:000000015095CCDF 00
.std:000000015095CCE8 0F 28 BC 24 F0 00 00 00                 movaps  xmm7, xmmword ptr [rsp+0F0h]
.std:000000015095CCF0 0F 28 B4 24 00 01 00 00                 movaps  xmm6, xmmword ptr [rsp+100h]
.std:000000015095CCF8 4C 8B BC 24 10 01 00 00                 mov     r15, [rsp+110h]
.std:000000015095CD00 4C 8B B4 24 18 01 00 00                 mov     r14, [rsp+118h]
.std:000000015095CD08 4C 8B A4 24 28 01 00 00                 mov     r12, [rsp+128h]
.std:000000015095CD10 48 8B B4 24 30 01 00 00                 mov     rsi, [rsp+130h]
.std:000000015095CD18 48 8B AC 24 38 01 00 00                 mov     rbp, [rsp+138h]
.std:000000015095CD20 48 8B 9C 24 60 01 00 00                 mov     rbx, [rsp+160h]
.std:000000015095CD28
.std:000000015095CD28                         loc_15095CD28:                          ; CODE XREF: sub_15095C790+46↑j
.std:000000015095CD28 4C 8B AC 24 20 01 00 00                 mov     r13, [rsp+120h]
.std:000000015095CD30
.std:000000015095CD30                         loc_15095CD30:                          ; CODE XREF: sub_15095C790+20↑j
.std:000000015095CD30                                                                 ; sub_15095C790+35↑j
.std:000000015095CD30 48 81 C4 40 01 00 00                    add     rsp, 140h
.std:000000015095CD37 5F                                      pop     rdi
.std:000000015095CD38 C3                                      retn
.std:000000015095CD39                         ; ---------------------------------------------------------------------------
.std:000000015095CD39
.std:000000015095CD39                         loc_15095CD39:                          ; CODE XREF: sub_15095C790+485↑j
.std:000000015095CD39 48 2B D0                                sub     rdx, rax
.std:000000015095CD3C 48 C1 FA 03                             sar     rdx, 3
.std:000000015095CD40 83 FA FF                                cmp     edx, 0FFFFFFFFh
.std:000000015095CD43 0F 84 DB FE FF FF                       jz      loc_15095CC24
.std:000000015095CD49 0F B6 4F 37                             movzx   ecx, byte ptr [rdi+37h]
.std:000000015095CD4D 80 E1 07                                and     cl, 7
.std:000000015095CD50 E9 D6 FE FF FF                          jmp     loc_15095CC2B
.std:000000015095CD50                         sub_15095C790   endp
.std:000000015095CD50


// a2
.std:000000014FDD11F0                         ; =============== S U B R O U T I N E =======================================
.std:000000014FDD11F0
.std:000000014FDD11F0                         ; Attributes: bp-based frame fpd=400h
.std:000000014FDD11F0
.std:000000014FDD11F0                         sub_14FDD11F0   proc near               ; CODE XREF: sub_14F899970+2593↑p
.std:000000014FDD11F0                                                                 ; sub_14F899970+2BC1↑p ...
.std:000000014FDD11F0                         ; __unwind { // sub_152B5621C
.std:000000014FDD11F0 40 55                                   push    rbp
.std:000000014FDD11F2 53                                      push    rbx
.std:000000014FDD11F3 57                                      push    rdi
.std:000000014FDD11F4 48 8D AC 24 10 FC FF FF                 lea     rbp, [rsp-3F0h]
.std:000000014FDD11FC 48 81 EC F0 04 00 00                    sub     rsp, 4F0h
.std:000000014FDD1203 48 8B 05 36 9E DB 09                    mov     rax, cs:__security_cookie
.std:000000014FDD120A 48 33 C4                                xor     rax, rsp
.std:000000014FDD120D 48 89 85 70 03 00 00                    mov     [rbp+370h], rax
.std:000000014FDD1214 48 8B F9                                mov     rdi, rcx
.std:000000014FDD1217 48 89 4C 24 70                          mov     [rsp+70h], rcx
.std:000000014FDD121C 48 8B CA                                mov     rcx, rdx
.std:000000014FDD121F 48 89 54 24 60                          mov     [rsp+60h], rdx
.std:000000014FDD1224 41 0F B6 D8                             movzx   ebx, r8b
.std:000000014FDD1228 E8 13 6F E8 FF                          call    sub_14FC58140
.std:000000014FDD122D 48 89 45 C8                             mov     [rbp-38h], rax
.std:000000014FDD1231 80 B8 E4 04 00 00 00                    cmp     byte ptr [rax+4E4h], 0
.std:000000014FDD1238 74 1A                                   jz      short loc_14FDD1254
.std:000000014FDD123A 48 8B 90 90 00 00 00                    mov     rdx, [rax+90h]
.std:000000014FDD1241 48 85 D2                                test    rdx, rdx
.std:000000014FDD1244 74 0E                                   jz      short loc_14FDD1254
.std:000000014FDD1246 48 83 7A 08 00                          cmp     qword ptr [rdx+8], 0
.std:000000014FDD124B 74 07                                   jz      short loc_14FDD1254
.std:000000014FDD124D C6 44 24 40 01                          mov     byte ptr [rsp+40h], 1
.std:000000014FDD1252 EB 06                                   jmp     short loc_14FDD125A
.std:000000014FDD1254                         ; ---------------------------------------------------------------------------
.std:000000014FDD1254
.std:000000014FDD1254                         loc_14FDD1254:                          ; CODE XREF: sub_14FDD11F0+48↑j
.std:000000014FDD1254                                                                 ; sub_14FDD11F0+54↑j ...
.std:000000014FDD1254 32 C0                                   xor     al, al
.std:000000014FDD1256 88 44 24 40                             mov     [rsp+40h], al
.std:000000014FDD125A
.std:000000014FDD125A                         loc_14FDD125A:                          ; CODE XREF: sub_14FDD11F0+62↑j
.std:000000014FDD125A 84 DB                                   test    bl, bl
.std:000000014FDD125C 0F 84 A5 20 00 00                       jz      loc_14FDD3307
.std:000000014FDD1262 8B 8F 08 04 00 00                       mov     ecx, [rdi+408h]
.std:000000014FDD1262                         ; } // starts at 14FDD11F0
.std:000000014FDD1268                         ; __unwind { // sub_152B5621C
.std:000000014FDD1268 48 89 B4 24 20 05 00 00                 mov     [rsp+520h], rsi
.std:000000014FDD1270 4C 89 AC 24 E0 04 00 00                 mov     [rsp+4E0h], r13
.std:000000014FDD1278 4C 89 B4 24 D8 04 00 00                 mov     [rsp+4D8h], r14
.std:000000014FDD1280 4C 89 BC 24 D0 04 00 00                 mov     [rsp+4D0h], r15
.std:000000014FDD1288 E8 A3 7D 00 00                          call    sub_14FDD9030
.std:000000014FDD128D 8B 9F D8 00 00 00                       mov     ebx, [rdi+0D8h]
.std:000000014FDD1293 48 8D 4D E8                             lea     rcx, [rbp-18h]
.std:000000014FDD1297 45 33 F6                                xor     r14d, r14d
.std:000000014FDD129A 89 44 24 50                             mov     [rsp+50h], eax
.std:000000014FDD129E 40 32 F6                                xor     sil, sil
.std:000000014FDD12A1 4C 89 75 E8                             mov     [rbp-18h], r14
.std:000000014FDD12A5 44 89 75 F4                             mov     [rbp-0Ch], r14d
.std:000000014FDD12A9 44 8B F8                                mov     r15d, eax
.std:000000014FDD12AC 89 5D F0                                mov     [rbp-10h], ebx
.std:000000014FDD12AF 85 DB                                   test    ebx, ebx
.std:000000014FDD12B1 7E 13                                   jle     short loc_14FDD12C6
.std:000000014FDD12B3 33 D2                                   xor     edx, edx
.std:000000014FDD12B5 E8 86 10 39 F1                          call    sub_141162340
.std:000000014FDD12BA 48 8D 4D E8                             lea     rcx, [rbp-18h]
.std:000000014FDD12BE FF 15 BC C7 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD12C4 EB 0A                                   jmp     short loc_14FDD12D0
.std:000000014FDD12C6                         ; ---------------------------------------------------------------------------
.std:000000014FDD12C6
.std:000000014FDD12C6                         loc_14FDD12C6:                          ; CODE XREF: sub_14FDD11F0+C1↑j
.std:000000014FDD12C6 FF 15 B4 C7 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD12CC 85 DB                                   test    ebx, ebx
.std:000000014FDD12CE 74 6C                                   jz      short loc_14FDD133C
.std:000000014FDD12D0
.std:000000014FDD12D0                         loc_14FDD12D0:                          ; CODE XREF: sub_14FDD11F0+D4↑j
.std:000000014FDD12D0 48 83 C0 1C                             add     rax, 1Ch
.std:000000014FDD12D4 0F 1F 40 00                             nop     dword ptr [rax+00h]
.std:000000014FDD12D8 0F 1F 84 00 00 00 00 00                 nop     dword ptr [rax+rax+00000000h]
.std:000000014FDD12E0
.std:000000014FDD12E0                         loc_14FDD12E0:                          ; CODE XREF: sub_14FDD11F0+14A↓j
.std:000000014FDD12E0 4C 89 70 E4                             mov     [rax-1Ch], r14
.std:000000014FDD12E4 4C 89 70 EC                             mov     [rax-14h], r14
.std:000000014FDD12E8 4C 89 70 F4                             mov     [rax-0Ch], r14
.std:000000014FDD12EC 4C 89 70 FC                             mov     [rax-4], r14
.std:000000014FDD12F0 4C 89 70 04                             mov     [rax+4], r14
.std:000000014FDD12F4 4C 89 70 0C                             mov     [rax+0Ch], r14
.std:000000014FDD12F8 4C 89 70 14                             mov     [rax+14h], r14
.std:000000014FDD12FC 4C 89 70 1C                             mov     [rax+1Ch], r14
.std:000000014FDD1300 4C 89 70 24                             mov     [rax+24h], r14
.std:000000014FDD1304 4C 89 70 2C                             mov     [rax+2Ch], r14
.std:000000014FDD1308 4C 89 70 34                             mov     [rax+34h], r14
.std:000000014FDD130C 4C 89 70 3C                             mov     [rax+3Ch], r14
.std:000000014FDD1310 4C 89 70 44                             mov     [rax+44h], r14
.std:000000014FDD1314 4C 89 70 4C                             mov     [rax+4Ch], r14
.std:000000014FDD1318 4C 89 70 54                             mov     [rax+54h], r14
.std:000000014FDD131C 4C 89 70 5C                             mov     [rax+5Ch], r14
.std:000000014FDD1320 4C 89 70 64                             mov     [rax+64h], r14
.std:000000014FDD1324 4C 89 70 6C                             mov     [rax+6Ch], r14
.std:000000014FDD1328 4C 89 70 74                             mov     [rax+74h], r14
.std:000000014FDD132C 4C 89 70 7C                             mov     [rax+7Ch], r14
.std:000000014FDD1330 48 8D 80 A0 00 00 00                    lea     rax, [rax+0A0h]
.std:000000014FDD1337 83 EB 01                                sub     ebx, 1
.std:000000014FDD133A 75 A4                                   jnz     short loc_14FDD12E0
.std:000000014FDD133C
.std:000000014FDD133C                         loc_14FDD133C:                          ; CODE XREF: sub_14FDD11F0+DE↑j
.std:000000014FDD133C 45 8B EE                                mov     r13d, r14d
.std:000000014FDD133F 44 89 74 24 78                          mov     [rsp+78h], r14d
.std:000000014FDD1344 44 39 B7 D8 00 00 00                    cmp     [rdi+0D8h], r14d
.std:000000014FDD134B 0F 8E 8D 1F 00 00                       jle     loc_14FDD32DE
.std:000000014FDD1351 49 8B DE                                mov     rbx, r14
.std:000000014FDD1351                         ; } // starts at 14FDD1268
.std:000000014FDD1354                         ; __unwind { // sub_152B5621C
.std:000000014FDD1354 4C 89 A4 24 E8 04 00 00                 mov     [rsp+4E8h], r12
.std:000000014FDD135C 48 8D 87 D0 00 00 00                    lea     rax, [rdi+0D0h]
.std:000000014FDD1363 48 89 5D 88                             mov     [rbp-78h], rbx
.std:000000014FDD1367 48 89 45 00                             mov     [rbp+0], rax
.std:000000014FDD136B 0F 1F 44 00 00                          nop     dword ptr [rax+rax+00h]
.std:000000014FDD1370
.std:000000014FDD1370                         loc_14FDD1370:                          ; CODE XREF: sub_14FDD11F0+8AE↓j
.std:000000014FDD1370 48 8B C8                                mov     rcx, rax
.std:000000014FDD1373 FF 15 07 C7 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD1379 4C 69 F3 80 C0 00 00                    imul    r14, rbx, 0C080h
.std:000000014FDD1380 48 8D 4D E8                             lea     rcx, [rbp-18h]
.std:000000014FDD1384 4C 03 F0                                add     r14, rax
.std:000000014FDD1387 FF 15 F3 C6 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD138D 4D 8B 66 18                             mov     r12, [r14+18h]
.std:000000014FDD1391 48 8D 3C 9B                             lea     rdi, [rbx+rbx*4]
.std:000000014FDD1395 48 C1 E7 05                             shl     rdi, 5
.std:000000014FDD1399 48 03 F8                                add     rdi, rax
.std:000000014FDD139C 4D 85 E4                                test    r12, r12
.std:000000014FDD139F 0F 84 DA 06 00 00                       jz      loc_14FDD1A7F
.std:000000014FDD13A5 41 F6 86 F0 A9 00 00 20                 test    byte ptr [r14+0A9F0h], 20h
.std:000000014FDD13AD 0F 85 CC 06 00 00                       jnz     loc_14FDD1A7F
.std:000000014FDD13B3 41 8B 84 24 24 02 00 00                 mov     eax, [r12+224h]
.std:000000014FDD13BB 4D 8D 6C 24 30                          lea     r13, [r12+30h]
.std:000000014FDD13C0 99                                      cdq
.std:000000014FDD13C1 49 8D 8D F0 00 00 00                    lea     rcx, [r13+0F0h]
.std:000000014FDD13C8 41 F7 FF                                idiv    r15d
.std:000000014FDD13CB 48 63 DA                                movsxd  rbx, edx
.std:000000014FDD13CE FF 15 AC C6 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD13D4 48 85 C0                                test    rax, rax
.std:000000014FDD13D7 48 8D 0C 9B                             lea     rcx, [rbx+rbx*4]
.std:000000014FDD13DB 4C 0F 45 E8                             cmovnz  r13, rax
.std:000000014FDD13DF 48 C1 E1 04                             shl     rcx, 4
.std:000000014FDD13E3 4C 03 E9                                add     r13, rcx
.std:000000014FDD13E6 FF 15 D4 C0 A0 09                       call    cs:off_1597DD4C0 ; AK::WriteBytesCount::Reserve(long) ...
.std:000000014FDD13EC 84 C0                                   test    al, al
.std:000000014FDD13EE 75 09                                   jnz     short loc_14FDD13F9
.std:000000014FDD13F0 48 8B 05 D1 D0 A0 09                    mov     rax, cs:qword_1597DE4C8
.std:000000014FDD13F7 EB 29                                   jmp     short loc_14FDD1422
.std:000000014FDD13F9                         ; ---------------------------------------------------------------------------
.std:000000014FDD13F9
.std:000000014FDD13F9                         loc_14FDD13F9:                          ; CODE XREF: sub_14FDD11F0+1FE↑j
.std:000000014FDD13F9 48 8B 15 C8 F0 A0 09                    mov     rdx, cs:qword_1597E04C8
.std:000000014FDD1400 0F B6 05 C7 F0 A0 09                    movzx   eax, byte ptr cs:qword_1597E04C8+6
.std:000000014FDD1407 48 89 54 24 68                          mov     [rsp+68h], rdx
.std:000000014FDD140C 34 37                                   xor     al, 37h
.std:000000014FDD140E 48 C1 EA 08                             shr     rdx, 8
.std:000000014FDD1412 80 F2 37                                xor     dl, 37h
.std:000000014FDD1415 88 44 24 69                             mov     [rsp+69h], al
.std:000000014FDD1419 88 54 24 6E                             mov     [rsp+6Eh], dl
.std:000000014FDD141D 48 8B 44 24 68                          mov     rax, [rsp+68h]
.std:000000014FDD1422
.std:000000014FDD1422                         loc_14FDD1422:                          ; CODE XREF: sub_14FDD11F0+207↑j
.std:000000014FDD1422 48 8B 4C 24 70                          mov     rcx, [rsp+70h]
.std:000000014FDD1427 F3 0F 10 49 54                          movss   xmm1, dword ptr [rcx+54h]
.std:000000014FDD142C 49 8B CC                                mov     rcx, r12
.std:000000014FDD142F 0F 28 D1                                movaps  xmm2, xmm1
.std:000000014FDD1432 0F 28 D9                                movaps  xmm3, xmm1
.std:000000014FDD1435 F3 0F 5C 90 58 0A 00 00                 subss   xmm2, dword ptr [rax+0A58h]
.std:000000014FDD143D 41 8B 84 24 A8 02 00 00                 mov     eax, [r12+2A8h]
.std:000000014FDD1445 89 44 24 20                             mov     [rsp+20h], eax
.std:000000014FDD1449 E8 C2 5E 01 00                          call    sub_14FDE7310
.std:000000014FDD144E 49 8B CD                                mov     rcx, r13
.std:000000014FDD1451 E8 DA E2 00 00                          call    sub_14FDDF730
.std:000000014FDD1456 4C 8B 6C 24 70                          mov     r13, [rsp+70h]
.std:000000014FDD145B 41 80 BD 34 04 00 00 00                 cmp     byte ptr [r13+434h], 0
.std:000000014FDD1463 0F 85 25 01 00 00                       jnz     loc_14FDD158E
.std:000000014FDD1469 41 83 BD 08 04 00 00 03                 cmp     dword ptr [r13+408h], 3
.std:000000014FDD1471 0F 8C 17 01 00 00                       jl      loc_14FDD158E
.std:000000014FDD1477 80 3D AA DD 6D 0A 00                    cmp     cs:byte_15A4AF228, 0
.std:000000014FDD147E 48 8B 1D CB 3E 7D 0A                    mov     rbx, cs:qword_15A5A5350
.std:000000014FDD1485 74 13                                   jz      short loc_14FDD149A
.std:000000014FDD1487 FF 15 BB 50 0A 03                       call    cs:qword_152E76548
.std:000000014FDD148D 33 C9                                   xor     ecx, ecx
.std:000000014FDD148F 3B 05 83 DD 6D 0A                       cmp     eax, cs:dword_15A4AF218
.std:000000014FDD1495 0F 95 C1                                setnz   cl
.std:000000014FDD1498 EB 04                                   jmp     short loc_14FDD149E
.std:000000014FDD149A                         ; ---------------------------------------------------------------------------
.std:000000014FDD149A
.std:000000014FDD149A                         loc_14FDD149A:                          ; CODE XREF: sub_14FDD11F0+295↑j
.std:000000014FDD149A 33 C0                                   xor     eax, eax
.std:000000014FDD149C 8B C8                                   mov     ecx, eax
.std:000000014FDD149E
.std:000000014FDD149E                         loc_14FDD149E:                          ; CODE XREF: sub_14FDD11F0+2A8↑j
.std:000000014FDD149E 83 3C 8B 00                             cmp     dword ptr [rbx+rcx*4], 0
.std:000000014FDD14A2 0F 8E E6 00 00 00                       jle     loc_14FDD158E
.std:000000014FDD14A8 49 8B 55 10                             mov     rdx, [r13+10h]
.std:000000014FDD14AC 48 8D 4D 90                             lea     rcx, [rbp-70h]
.std:000000014FDD14B0 48 81 C2 F8 1F 00 00                    add     rdx, 1FF8h
.std:000000014FDD14B7 E8 E4 AB 05 F1                          call    sub_140E2C0A0
.std:000000014FDD14BC 48 8B 45 A0                             mov     rax, [rbp-60h]
.std:000000014FDD14C0 8B 5D AC                                mov     ebx, [rbp-54h]
.std:000000014FDD14C3 3B 58 18                                cmp     ebx, [rax+18h]
.std:000000014FDD14C6 0F 8D C2 00 00 00                       jge     loc_14FDD158E
.std:000000014FDD14CC 0F 1F 40 00                             nop     dword ptr [rax+00h]
.std:000000014FDD14D0
.std:000000014FDD14D0                         loc_14FDD14D0:                          ; CODE XREF: sub_14FDD11F0+398↓j
.std:000000014FDD14D0 48 8B 4D 90                             mov     rcx, [rbp-70h]
.std:000000014FDD14D4 FF 15 A6 C5 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD14DA 48 63 CB                                movsxd  rcx, ebx
.std:000000014FDD14DD 48 8D 14 49                             lea     rdx, [rcx+rcx*2]
.std:000000014FDD14E1 48 03 D2                                add     rdx, rdx
.std:000000014FDD14E4 4C 8B 64 D0 20                          mov     r12, [rax+rdx*8+20h]
.std:000000014FDD14E9 49 63 44 24 28                          movsxd  rax, dword ptr [r12+28h]
.std:000000014FDD14EE 48 6B C8 78                             imul    rcx, rax, 78h ; 'x'
.std:000000014FDD14F2 49 8B 86 E8 33 00 00                    mov     rax, [r14+33E8h]
.std:000000014FDD14F9 F6 44 01 40 01                          test    byte ptr [rcx+rax+40h], 1
.std:000000014FDD14FE 74 6D                                   jz      short loc_14FDD156D
.std:000000014FDD1500 4C 8D 4D E0                             lea     r9, [rbp-20h]
.std:000000014FDD1504 45 8B C7                                mov     r8d, r15d
.std:000000014FDD1507 49 8B D4                                mov     rdx, r12
.std:000000014FDD150A 49 8B CE                                mov     rcx, r14
.std:000000014FDD150D E8 9E E3 FF FF                          call    sub_14FDCF8B0
.std:000000014FDD1512 84 C0                                   test    al, al
.std:000000014FDD1514 74 57                                   jz      short loc_14FDD156D
.std:000000014FDD1516 48 63 77 28                             movsxd  rsi, dword ptr [rdi+28h]
.std:000000014FDD151A 8D 46 01                                lea     eax, [rsi+1]
.std:000000014FDD151D 89 47 28                                mov     [rdi+28h], eax
.std:000000014FDD1520 3B 47 2C                                cmp     eax, [rdi+2Ch]
.std:000000014FDD1523 7E 0B                                   jle     short loc_14FDD1530
.std:000000014FDD1525 8B D6                                   mov     edx, esi
.std:000000014FDD1527 48 8D 4F 20                             lea     rcx, [rdi+20h]
.std:000000014FDD152B E8 70 6D 05 F1                          call    sub_140E282A0
.std:000000014FDD1530
.std:000000014FDD1530                         loc_14FDD1530:                          ; CODE XREF: sub_14FDD11F0+333↑j
.std:000000014FDD1530 48 8D 4F 20                             lea     rcx, [rdi+20h]
.std:000000014FDD1534 FF 15 46 C5 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD153A 4C 89 24 F0                             mov     [rax+rsi*8], r12
.std:000000014FDD153E 48 63 77 78                             movsxd  rsi, dword ptr [rdi+78h]
.std:000000014FDD1542 8D 46 01                                lea     eax, [rsi+1]
.std:000000014FDD1545 89 47 78                                mov     [rdi+78h], eax
.std:000000014FDD1548 3B 47 7C                                cmp     eax, [rdi+7Ch]
.std:000000014FDD154B 7E 0B                                   jle     short loc_14FDD1558
.std:000000014FDD154D 8B D6                                   mov     edx, esi
.std:000000014FDD154F 48 8D 4F 70                             lea     rcx, [rdi+70h]
.std:000000014FDD1553 E8 48 6D 05 F1                          call    sub_140E282A0
.std:000000014FDD1558
.std:000000014FDD1558                         loc_14FDD1558:                          ; CODE XREF: sub_14FDD11F0+35B↑j
.std:000000014FDD1558 48 8D 4F 70                             lea     rcx, [rdi+70h]
.std:000000014FDD155C FF 15 1E C5 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD1562 48 8B 4D E0                             mov     rcx, [rbp-20h]
.std:000000014FDD1566 48 89 0C F0                             mov     [rax+rsi*8], rcx
.std:000000014FDD156A 40 B6 01                                mov     sil, 1
.std:000000014FDD156D
.std:000000014FDD156D                         loc_14FDD156D:                          ; CODE XREF: sub_14FDD11F0+30E↑j
.std:000000014FDD156D                                                                 ; sub_14FDD11F0+324↑j
.std:000000014FDD156D 8B 45 9C                                mov     eax, [rbp-64h]
.std:000000014FDD1570 48 8D 4D 98                             lea     rcx, [rbp-68h]
.std:000000014FDD1574 F7 D0                                   not     eax
.std:000000014FDD1576 21 45 A8                                and     [rbp-58h], eax
.std:000000014FDD1579 E8 62 C1 03 F1                          call    sub_140E0D6E0
.std:000000014FDD157E 48 8B 45 A0                             mov     rax, [rbp-60h]
.std:000000014FDD1582 8B 5D AC                                mov     ebx, [rbp-54h]
.std:000000014FDD1585 3B 58 18                                cmp     ebx, [rax+18h]
.std:000000014FDD1588 0F 8C 42 FF FF FF                       jl      loc_14FDD14D0
.std:000000014FDD158E
.std:000000014FDD158E                         loc_14FDD158E:                          ; CODE XREF: sub_14FDD11F0+273↑j
.std:000000014FDD158E                                                                 ; sub_14FDD11F0+281↑j ...
.std:000000014FDD158E 41 83 BD 08 04 00 00 01                 cmp     dword ptr [r13+408h], 1
.std:000000014FDD1596 0F 8E BD 04 00 00                       jle     loc_14FDD1A59
.std:000000014FDD159C 33 DB                                   xor     ebx, ebx
.std:000000014FDD159E 48 89 5C 24 68                          mov     [rsp+68h], rbx
.std:000000014FDD15A3 E8 B8 BD 23 FF                          call    sub_14F00D360
.std:000000014FDD15A8 84 C0                                   test    al, al
.std:000000014FDD15AA 74 19                                   jz      short loc_14FDD15C5
.std:000000014FDD15AC 48 8B 54 24 60                          mov     rdx, [rsp+60h]
.std:000000014FDD15B1 4C 8D 0D E8 96 67 07                    lea     r9, aShadowfrustumq ; "ShadowFrustumQueries"
.std:000000014FDD15B8 44 8B C3                                mov     r8d, ebx
.std:000000014FDD15BB 48 8D 4C 24 68                          lea     rcx, [rsp+68h]
.std:000000014FDD15C0 E8 5B 4F 4C 00                          call    sub_150296520
.std:000000014FDD15C5
.std:000000014FDD15C5                         loc_14FDD15C5:                          ; CODE XREF: sub_14FDD11F0+3BA↑j
.std:000000014FDD15C5 49 8B 55 10                             mov     rdx, [r13+10h]
.std:000000014FDD15C9 48 8D 4D 90                             lea     rcx, [rbp-70h]
.std:000000014FDD15CD 48 81 C2 F8 1F 00 00                    add     rdx, 1FF8h
.std:000000014FDD15D4 E8 C7 AA 05 F1                          call    sub_140E2C0A0
.std:000000014FDD15D9 48 8B 45 A0                             mov     rax, [rbp-60h]
.std:000000014FDD15DD 8B 4D AC                                mov     ecx, [rbp-54h]
.std:000000014FDD15E0 3B 48 18                                cmp     ecx, [rax+18h]
.std:000000014FDD15E3 0F 8D 52 03 00 00                       jge     loc_14FDD193B
.std:000000014FDD15E9 0F 1F 80 00 00 00 00                    nop     dword ptr [rax+00000000h]
.std:000000014FDD15F0
.std:000000014FDD15F0                         loc_14FDD15F0:                          ; CODE XREF: sub_14FDD11F0+745↓j
.std:000000014FDD15F0 48 63 C1                                movsxd  rax, ecx
.std:000000014FDD15F3 89 5C 24 58                             mov     [rsp+58h], ebx
.std:000000014FDD15F7 4C 8D 24 40                             lea     r12, [rax+rax*2]
.std:000000014FDD15FB 49 C1 E4 05                             shl     r12, 5
.std:000000014FDD15FF 4D 03 A5 10 03 00 00                    add     r12, [r13+310h]
.std:000000014FDD1606 41 83 7C 24 08 00                       cmp     dword ptr [r12+8], 0
.std:000000014FDD160C 0F 8E 3B 02 00 00                       jle     loc_14FDD184D
.std:000000014FDD1612 4C 8B EB                                mov     r13, rbx
.std:000000014FDD1615                                         db      66h, 66h
.std:000000014FDD1615 66 66 66 0F 1F 84 00 00                 nop     word ptr [rax+rax+00000000h]
.std:000000014FDD1615 00 00 00
.std:000000014FDD1620
.std:000000014FDD1620                         loc_14FDD1620:                          ; CODE XREF: sub_14FDD11F0+655↓j
.std:000000014FDD1620 49 8B 04 24                             mov     rax, [r12]
.std:000000014FDD1624 4A 8B 1C 28                             mov     rbx, [rax+r13]
.std:000000014FDD1628 48 8B 43 48                             mov     rax, [rbx+48h]
.std:000000014FDD162C 48 85 C0                                test    rax, rax
.std:000000014FDD162F 74 09                                   jz      short loc_14FDD163A
.std:000000014FDD1631 49 3B C6                                cmp     rax, r14
.std:000000014FDD1634 0F 85 F8 01 00 00                       jnz     loc_14FDD1832
.std:000000014FDD163A
.std:000000014FDD163A                         loc_14FDD163A:                          ; CODE XREF: sub_14FDD11F0+43F↑j
.std:000000014FDD163A 83 7B 40 01                             cmp     dword ptr [rbx+40h], 1
.std:000000014FDD163E 0F 84 EE 01 00 00                       jz      loc_14FDD1832
.std:000000014FDD1644 8B 8B C0 05 00 00                       mov     ecx, [rbx+5C0h]
.std:000000014FDD164A F6 C1 20                                test    cl, 20h
.std:000000014FDD164D 74 78                                   jz      short loc_14FDD16C7
.std:000000014FDD164F 48 8D 45 D8                             lea     rax, [rbp-28h]
.std:000000014FDD1653 41 B9 01 00 00 00                       mov     r9d, 1
.std:000000014FDD1659 45 8B C7                                mov     r8d, r15d
.std:000000014FDD165C 48 89 44 24 20                          mov     [rsp+20h], rax
.std:000000014FDD1661 48 8B D3                                mov     rdx, rbx
.std:000000014FDD1664 49 8B CE                                mov     rcx, r14
.std:000000014FDD1667 E8 B4 EC FF FF                          call    sub_14FDD0320
.std:000000014FDD166C 84 C0                                   test    al, al
.std:000000014FDD166E 0F 84 BE 01 00 00                       jz      loc_14FDD1832
.std:000000014FDD1674 48 63 77 08                             movsxd  rsi, dword ptr [rdi+8]
.std:000000014FDD1678 8D 46 01                                lea     eax, [rsi+1]
.std:000000014FDD167B 89 47 08                                mov     [rdi+8], eax
.std:000000014FDD167E 3B 47 0C                                cmp     eax, [rdi+0Ch]
.std:000000014FDD1681 7E 0A                                   jle     short loc_14FDD168D
.std:000000014FDD1683 8B D6                                   mov     edx, esi
.std:000000014FDD1685 48 8B CF                                mov     rcx, rdi
.std:000000014FDD1688 E8 13 6C 05 F1                          call    sub_140E282A0
.std:000000014FDD168D
.std:000000014FDD168D                         loc_14FDD168D:                          ; CODE XREF: sub_14FDD11F0+491↑j
.std:000000014FDD168D 48 8B CF                                mov     rcx, rdi
.std:000000014FDD1690 FF 15 EA C3 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD1696 48 89 1C F0                             mov     [rax+rsi*8], rbx
.std:000000014FDD169A 48 63 77 58                             movsxd  rsi, dword ptr [rdi+58h]
.std:000000014FDD169E 8D 46 01                                lea     eax, [rsi+1]
.std:000000014FDD16A1 89 47 58                                mov     [rdi+58h], eax
.std:000000014FDD16A4 3B 47 5C                                cmp     eax, [rdi+5Ch]
.std:000000014FDD16A7 7E 0B                                   jle     short loc_14FDD16B4
.std:000000014FDD16A9 8B D6                                   mov     edx, esi
.std:000000014FDD16AB 48 8D 4F 50                             lea     rcx, [rdi+50h]
.std:000000014FDD16AF E8 EC 6B 05 F1                          call    sub_140E282A0
.std:000000014FDD16B4
.std:000000014FDD16B4                         loc_14FDD16B4:                          ; CODE XREF: sub_14FDD11F0+4B7↑j
.std:000000014FDD16B4 48 8D 4F 50                             lea     rcx, [rdi+50h]
.std:000000014FDD16B8 FF 15 C2 C3 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD16BE 48 8B 4D D8                             mov     rcx, [rbp-28h]
.std:000000014FDD16C2 E9 64 01 00 00                          jmp     loc_14FDD182B
.std:000000014FDD16C7                         ; ---------------------------------------------------------------------------
.std:000000014FDD16C7
.std:000000014FDD16C7                         loc_14FDD16C7:                          ; CODE XREF: sub_14FDD11F0+45D↑j
.std:000000014FDD16C7 F6 C1 40                                test    cl, 40h
.std:000000014FDD16CA 0F 84 A5 00 00 00                       jz      loc_14FDD1775
.std:000000014FDD16D0 8B 83 50 05 00 00                       mov     eax, [rbx+550h]
.std:000000014FDD16D6 85 C0                                   test    eax, eax
.std:000000014FDD16D8 0F 88 97 00 00 00                       js      loc_14FDD1775
.std:000000014FDD16DE F6 C1 10                                test    cl, 10h
.std:000000014FDD16E1 0F 84 8E 00 00 00                       jz      loc_14FDD1775
.std:000000014FDD16E7 83 3D BE 32 7D 0A 00                    cmp     cs:dword_15A5A49AC, 0
.std:000000014FDD16EE 0F 84 3E 01 00 00                       jz      loc_14FDD1832
.std:000000014FDD16F4 85 C0                                   test    eax, eax
.std:000000014FDD16F6 0F 8E 36 01 00 00                       jle     loc_14FDD1832
.std:000000014FDD16FC 48 8D 45 D0                             lea     rax, [rbp-30h]
.std:000000014FDD1700 45 33 C9                                xor     r9d, r9d
.std:000000014FDD1703 45 8B C7                                mov     r8d, r15d
.std:000000014FDD1706 48 89 44 24 20                          mov     [rsp+20h], rax
.std:000000014FDD170B 48 8B D3                                mov     rdx, rbx
.std:000000014FDD170E 49 8B CE                                mov     rcx, r14
.std:000000014FDD1711 E8 0A EC FF FF                          call    sub_14FDD0320
.std:000000014FDD1716 84 C0                                   test    al, al
.std:000000014FDD1718 0F 84 14 01 00 00                       jz      loc_14FDD1832
.std:000000014FDD171E 4C 63 7F 18                             movsxd  r15, dword ptr [rdi+18h]
.std:000000014FDD1722 41 8D 47 01                             lea     eax, [r15+1]
.std:000000014FDD1726 89 47 18                                mov     [rdi+18h], eax
.std:000000014FDD1729 3B 47 1C                                cmp     eax, [rdi+1Ch]
.std:000000014FDD172C 7E 0C                                   jle     short loc_14FDD173A
.std:000000014FDD172E 41 8B D7                                mov     edx, r15d
.std:000000014FDD1731 48 8D 4F 10                             lea     rcx, [rdi+10h]
.std:000000014FDD1735 E8 66 6B 05 F1                          call    sub_140E282A0
.std:000000014FDD173A
.std:000000014FDD173A                         loc_14FDD173A:                          ; CODE XREF: sub_14FDD11F0+53C↑j
.std:000000014FDD173A 48 8D 4F 10                             lea     rcx, [rdi+10h]
.std:000000014FDD173E FF 15 3C C3 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD1744 4A 89 1C F8                             mov     [rax+r15*8], rbx
.std:000000014FDD1748 48 63 77 68                             movsxd  rsi, dword ptr [rdi+68h]
.std:000000014FDD174C 8D 46 01                                lea     eax, [rsi+1]
.std:000000014FDD174F 89 47 68                                mov     [rdi+68h], eax
.std:000000014FDD1752 3B 47 6C                                cmp     eax, [rdi+6Ch]
.std:000000014FDD1755 7E 0B                                   jle     short loc_14FDD1762
.std:000000014FDD1757 8B D6                                   mov     edx, esi
.std:000000014FDD1759 48 8D 4F 60                             lea     rcx, [rdi+60h]
.std:000000014FDD175D E8 3E 6B 05 F1                          call    sub_140E282A0
.std:000000014FDD1762
.std:000000014FDD1762                         loc_14FDD1762:                          ; CODE XREF: sub_14FDD11F0+565↑j
.std:000000014FDD1762 48 8D 4F 60                             lea     rcx, [rdi+60h]
.std:000000014FDD1766 FF 15 14 C3 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD176C 48 8B 4D D0                             mov     rcx, [rbp-30h]
.std:000000014FDD1770 E9 B1 00 00 00                          jmp     loc_14FDD1826
.std:000000014FDD1775                         ; ---------------------------------------------------------------------------
.std:000000014FDD1775
.std:000000014FDD1775                         loc_14FDD1775:                          ; CODE XREF: sub_14FDD11F0+4DA↑j
.std:000000014FDD1775                                                                 ; sub_14FDD11F0+4E8↑j ...
.std:000000014FDD1775 8B C1                                   mov     eax, ecx
.std:000000014FDD1777 25 50 00 08 00                          and     eax, 80050h
.std:000000014FDD177C 3D 50 00 08 00                          cmp     eax, 80050h
.std:000000014FDD1781 0F 84 AB 00 00 00                       jz      loc_14FDD1832
.std:000000014FDD1787 0F BA E1 0C                             bt      ecx, 0Ch
.std:000000014FDD178B 0F 82 A1 00 00 00                       jb      loc_14FDD1832
.std:000000014FDD1791 49 8B D6                                mov     rdx, r14
.std:000000014FDD1794 48 8B CB                                mov     rcx, rbx
.std:000000014FDD1797 E8 34 9F 10 00                          call    sub_14FEDB6D0
.std:000000014FDD179C 84 C0                                   test    al, al
.std:000000014FDD179E 0F 85 8E 00 00 00                       jnz     loc_14FDD1832
.std:000000014FDD17A4 48 8D 45 C0                             lea     rax, [rbp-40h]
.std:000000014FDD17A8 41 B9 02 00 00 00                       mov     r9d, 2
.std:000000014FDD17AE 45 8B C7                                mov     r8d, r15d
.std:000000014FDD17B1 48 89 44 24 20                          mov     [rsp+20h], rax
.std:000000014FDD17B6 48 8B D3                                mov     rdx, rbx
.std:000000014FDD17B9 49 8B CE                                mov     rcx, r14
.std:000000014FDD17BC E8 5F EB FF FF                          call    sub_14FDD0320
.std:000000014FDD17C1 84 C0                                   test    al, al
.std:000000014FDD17C3 74 6D                                   jz      short loc_14FDD1832
.std:000000014FDD17C5 4C 63 7F 38                             movsxd  r15, dword ptr [rdi+38h]
.std:000000014FDD17C9 41 8D 47 01                             lea     eax, [r15+1]
.std:000000014FDD17CD 89 47 38                                mov     [rdi+38h], eax
.std:000000014FDD17D0 3B 47 3C                                cmp     eax, [rdi+3Ch]
.std:000000014FDD17D3 7E 0C                                   jle     short loc_14FDD17E1
.std:000000014FDD17D5 41 8B D7                                mov     edx, r15d
.std:000000014FDD17D8 48 8D 4F 30                             lea     rcx, [rdi+30h]
.std:000000014FDD17DC E8 BF 6A 05 F1                          call    sub_140E282A0
.std:000000014FDD17E1
.std:000000014FDD17E1                         loc_14FDD17E1:                          ; CODE XREF: sub_14FDD11F0+5E3↑j
.std:000000014FDD17E1 48 8D 4F 30                             lea     rcx, [rdi+30h]
.std:000000014FDD17E5 FF 15 95 C2 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD17EB 4A 89 1C F8                             mov     [rax+r15*8], rbx
.std:000000014FDD17EF 48 63 B7 88 00 00 00                    movsxd  rsi, dword ptr [rdi+88h]
.std:000000014FDD17F6 8D 46 01                                lea     eax, [rsi+1]
.std:000000014FDD17F9 89 87 88 00 00 00                       mov     [rdi+88h], eax
.std:000000014FDD17FF 3B 87 8C 00 00 00                       cmp     eax, [rdi+8Ch]
.std:000000014FDD1805 7E 0E                                   jle     short loc_14FDD1815
.std:000000014FDD1807 8B D6                                   mov     edx, esi
.std:000000014FDD1809 48 8D 8F 80 00 00 00                    lea     rcx, [rdi+80h]
.std:000000014FDD1810 E8 8B 6A 05 F1                          call    sub_140E282A0
.std:000000014FDD1815
.std:000000014FDD1815                         loc_14FDD1815:                          ; CODE XREF: sub_14FDD11F0+615↑j
.std:000000014FDD1815 48 8D 8F 80 00 00 00                    lea     rcx, [rdi+80h]
.std:000000014FDD181C FF 15 5E C2 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD1822 48 8B 4D C0                             mov     rcx, [rbp-40h]
.std:000000014FDD1826
.std:000000014FDD1826                         loc_14FDD1826:                          ; CODE XREF: sub_14FDD11F0+580↑j
.std:000000014FDD1826 44 8B 7C 24 50                          mov     r15d, [rsp+50h]
.std:000000014FDD182B
.std:000000014FDD182B                         loc_14FDD182B:                          ; CODE XREF: sub_14FDD11F0+4D2↑j
.std:000000014FDD182B 48 89 0C F0                             mov     [rax+rsi*8], rcx
.std:000000014FDD182F 40 B6 01                                mov     sil, 1
.std:000000014FDD1832
.std:000000014FDD1832                         loc_14FDD1832:                          ; CODE XREF: sub_14FDD11F0+444↑j
.std:000000014FDD1832                                                                 ; sub_14FDD11F0+44E↑j ...
.std:000000014FDD1832 8B 44 24 58                             mov     eax, [rsp+58h]
.std:000000014FDD1836 49 83 C5 08                             add     r13, 8
.std:000000014FDD183A FF C0                                   inc     eax
.std:000000014FDD183C 89 44 24 58                             mov     [rsp+58h], eax
.std:000000014FDD1840 41 3B 44 24 08                          cmp     eax, [r12+8]
.std:000000014FDD1845 0F 8C D5 FD FF FF                       jl      loc_14FDD1620
.std:000000014FDD184B 33 DB                                   xor     ebx, ebx
.std:000000014FDD184D
.std:000000014FDD184D                         loc_14FDD184D:                          ; CODE XREF: sub_14FDD11F0+41C↑j
.std:000000014FDD184D 41 83 7C 24 58 00                       cmp     dword ptr [r12+58h], 0
.std:000000014FDD1853 44 8B FB                                mov     r15d, ebx
.std:000000014FDD1856 0F 8E B4 00 00 00                       jle     loc_14FDD1910
.std:000000014FDD185C 4C 8B EB                                mov     r13, rbx
.std:000000014FDD185F 90                                      nop
.std:000000014FDD1860
.std:000000014FDD1860                         loc_14FDD1860:                          ; CODE XREF: sub_14FDD11F0+718↓j
.std:000000014FDD1860 49 8B 44 24 50                          mov     rax, [r12+50h]
.std:000000014FDD1865 48 8D 4D 80                             lea     rcx, [rbp-80h]
.std:000000014FDD1869 44 8B 44 24 50                          mov     r8d, [rsp+50h]
.std:000000014FDD186E 41 B9 02 00 00 00                       mov     r9d, 2
.std:000000014FDD1874 48 89 4C 24 20                          mov     [rsp+20h], rcx
.std:000000014FDD1879 49 8B CE                                mov     rcx, r14
.std:000000014FDD187C 4A 8B 04 28                             mov     rax, [rax+r13]
.std:000000014FDD1880 48 8B D0                                mov     rdx, rax
.std:000000014FDD1883 48 89 44 24 48                          mov     [rsp+48h], rax
.std:000000014FDD1888 E8 93 EA FF FF                          call    sub_14FDD0320
.std:000000014FDD188D 84 C0                                   test    al, al
.std:000000014FDD188F 74 6B                                   jz      short loc_14FDD18FC
.std:000000014FDD1891 48 63 77 38                             movsxd  rsi, dword ptr [rdi+38h]
.std:000000014FDD1895 8D 46 01                                lea     eax, [rsi+1]
.std:000000014FDD1898 89 47 38                                mov     [rdi+38h], eax
.std:000000014FDD189B 3B 47 3C                                cmp     eax, [rdi+3Ch]
.std:000000014FDD189E 7E 0B                                   jle     short loc_14FDD18AB
.std:000000014FDD18A0 8B D6                                   mov     edx, esi
.std:000000014FDD18A2 48 8D 4F 30                             lea     rcx, [rdi+30h]
.std:000000014FDD18A6 E8 F5 69 05 F1                          call    sub_140E282A0
.std:000000014FDD18AB
.std:000000014FDD18AB                         loc_14FDD18AB:                          ; CODE XREF: sub_14FDD11F0+6AE↑j
.std:000000014FDD18AB 48 8D 4F 30                             lea     rcx, [rdi+30h]
.std:000000014FDD18AF FF 15 CB C1 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD18B5 48 8B 54 24 48                          mov     rdx, [rsp+48h]
.std:000000014FDD18BA 48 89 14 F0                             mov     [rax+rsi*8], rdx
.std:000000014FDD18BE 48 63 B7 88 00 00 00                    movsxd  rsi, dword ptr [rdi+88h]
.std:000000014FDD18C5 8D 46 01                                lea     eax, [rsi+1]
.std:000000014FDD18C8 89 87 88 00 00 00                       mov     [rdi+88h], eax
.std:000000014FDD18CE 3B 87 8C 00 00 00                       cmp     eax, [rdi+8Ch]
.std:000000014FDD18D4 7E 0E                                   jle     short loc_14FDD18E4
.std:000000014FDD18D6 8B D6                                   mov     edx, esi
.std:000000014FDD18D8 48 8D 8F 80 00 00 00                    lea     rcx, [rdi+80h]
.std:000000014FDD18DF E8 BC 69 05 F1                          call    sub_140E282A0
.std:000000014FDD18E4
.std:000000014FDD18E4                         loc_14FDD18E4:                          ; CODE XREF: sub_14FDD11F0+6E4↑j
.std:000000014FDD18E4 48 8D 8F 80 00 00 00                    lea     rcx, [rdi+80h]
.std:000000014FDD18EB FF 15 8F C1 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD18F1 48 8B 4D 80                             mov     rcx, [rbp-80h]
.std:000000014FDD18F5 48 89 0C F0                             mov     [rax+rsi*8], rcx
.std:000000014FDD18F9 40 B6 01                                mov     sil, 1
.std:000000014FDD18FC
.std:000000014FDD18FC                         loc_14FDD18FC:                          ; CODE XREF: sub_14FDD11F0+69F↑j
.std:000000014FDD18FC 41 FF C7                                inc     r15d
.std:000000014FDD18FF 49 83 C5 08                             add     r13, 8
.std:000000014FDD1903 45 3B 7C 24 58                          cmp     r15d, [r12+58h]
.std:000000014FDD1908 0F 8C 52 FF FF FF                       jl      loc_14FDD1860
.std:000000014FDD190E 33 DB                                   xor     ebx, ebx
.std:000000014FDD1910
.std:000000014FDD1910                         loc_14FDD1910:                          ; CODE XREF: sub_14FDD11F0+666↑j
.std:000000014FDD1910 8B 45 9C                                mov     eax, [rbp-64h]
.std:000000014FDD1913 48 8D 4D 98                             lea     rcx, [rbp-68h]
.std:000000014FDD1917 F7 D0                                   not     eax
.std:000000014FDD1919 21 45 A8                                and     [rbp-58h], eax
.std:000000014FDD191C E8 BF BD 03 F1                          call    sub_140E0D6E0
.std:000000014FDD1921 48 8B 45 A0                             mov     rax, [rbp-60h]
.std:000000014FDD1925 8B 4D AC                                mov     ecx, [rbp-54h]
.std:000000014FDD1928 44 8B 7C 24 50                          mov     r15d, [rsp+50h]
.std:000000014FDD192D 4C 8B 6C 24 70                          mov     r13, [rsp+70h]
.std:000000014FDD1932 3B 48 18                                cmp     ecx, [rax+18h]
.std:000000014FDD1935 0F 8C B5 FC FF FF                       jl      loc_14FDD15F0
.std:000000014FDD193B
.std:000000014FDD193B                         loc_14FDD193B:                          ; CODE XREF: sub_14FDD11F0+3F3↑j
.std:000000014FDD193B 48 83 7C 24 68 00                       cmp     qword ptr [rsp+68h], 0
.std:000000014FDD1941 74 0A                                   jz      short loc_14FDD194D
.std:000000014FDD1943 48 8D 4C 24 68                          lea     rcx, [rsp+68h]
.std:000000014FDD1948 E8 23 58 4C 00                          call    sub_150297170
.std:000000014FDD194D
.std:000000014FDD194D                         loc_14FDD194D:                          ; CODE XREF: sub_14FDD11F0+751↑j
.std:000000014FDD194D 41 83 BD 08 04 00 00 01                 cmp     dword ptr [r13+408h], 1
.std:000000014FDD1955 0F 8E FE 00 00 00                       jle     loc_14FDD1A59
.std:000000014FDD195B 41 80 BE F6 22 00 00 00                 cmp     byte ptr [r14+22F6h], 0
.std:000000014FDD1963 0F 85 F0 00 00 00                       jnz     loc_14FDD1A59
.std:000000014FDD1969 41 80 BE F2 22 00 00 00                 cmp     byte ptr [r14+22F2h], 0
.std:000000014FDD1971 0F 85 E2 00 00 00                       jnz     loc_14FDD1A59
.std:000000014FDD1977 41 80 BE F4 22 00 00 00                 cmp     byte ptr [r14+22F4h], 0
.std:000000014FDD197F 0F 85 D4 00 00 00                       jnz     loc_14FDD1A59
.std:000000014FDD1985 49 8B 45 10                             mov     rax, [r13+10h]
.std:000000014FDD1989 41 8D 5F 01                             lea     ebx, [r15+1]
.std:000000014FDD198D 33 C9                                   xor     ecx, ecx
.std:000000014FDD198F 44 8B E1                                mov     r12d, ecx
.std:000000014FDD1992 39 88 20 21 00 00                       cmp     [rax+2120h], ecx
.std:000000014FDD1998 0F 8E BB 00 00 00                       jle     loc_14FDD1A59
.std:000000014FDD199E 44 8B E9                                mov     r13d, ecx
.std:000000014FDD19A1
.std:000000014FDD19A1                         loc_14FDD19A1:                          ; CODE XREF: sub_14FDD11F0+863↓j
.std:000000014FDD19A1 48 8D 88 18 21 00 00                    lea     rcx, [rax+2118h]
.std:000000014FDD19A8 FF 15 D2 C0 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD19AE 4C 8D 4D 08                             lea     r9, [rbp+8]
.std:000000014FDD19B2 44 8B C3                                mov     r8d, ebx
.std:000000014FDD19B5 49 8B CE                                mov     rcx, r14
.std:000000014FDD19B8 4A 8B 04 28                             mov     rax, [rax+r13]
.std:000000014FDD19BC 48 8B D0                                mov     rdx, rax
.std:000000014FDD19BF 48 89 44 24 48                          mov     [rsp+48h], rax
.std:000000014FDD19C4 E8 C7 E4 FF FF                          call    sub_14FDCFE90
.std:000000014FDD19C9 84 C0                                   test    al, al
.std:000000014FDD19CB 74 6F                                   jz      short loc_14FDD1A3C
.std:000000014FDD19CD 48 63 77 48                             movsxd  rsi, dword ptr [rdi+48h]
.std:000000014FDD19D1 8D 46 01                                lea     eax, [rsi+1]
.std:000000014FDD19D4 89 47 48                                mov     [rdi+48h], eax
.std:000000014FDD19D7 3B 47 4C                                cmp     eax, [rdi+4Ch]
.std:000000014FDD19DA 7E 0B                                   jle     short loc_14FDD19E7
.std:000000014FDD19DC 8B D6                                   mov     edx, esi
.std:000000014FDD19DE 48 8D 4F 40                             lea     rcx, [rdi+40h]
.std:000000014FDD19E2 E8 B9 68 05 F1                          call    sub_140E282A0
.std:000000014FDD19E7
.std:000000014FDD19E7                         loc_14FDD19E7:                          ; CODE XREF: sub_14FDD11F0+7EA↑j
.std:000000014FDD19E7 48 8D 4F 40                             lea     rcx, [rdi+40h]
.std:000000014FDD19EB FF 15 8F C0 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD19F1 48 8B 54 24 48                          mov     rdx, [rsp+48h]
.std:000000014FDD19F6 48 89 14 F0                             mov     [rax+rsi*8], rdx
.std:000000014FDD19FA 48 63 B7 98 00 00 00                    movsxd  rsi, dword ptr [rdi+98h]
.std:000000014FDD1A01 8D 46 01                                lea     eax, [rsi+1]
.std:000000014FDD1A04 89 87 98 00 00 00                       mov     [rdi+98h], eax
.std:000000014FDD1A0A 3B 87 9C 00 00 00                       cmp     eax, [rdi+9Ch]
.std:000000014FDD1A10 7E 0E                                   jle     short loc_14FDD1A20
.std:000000014FDD1A12 8B D6                                   mov     edx, esi
.std:000000014FDD1A14 48 8D 8F 90 00 00 00                    lea     rcx, [rdi+90h]
.std:000000014FDD1A1B E8 80 68 05 F1                          call    sub_140E282A0
.std:000000014FDD1A20
.std:000000014FDD1A20                         loc_14FDD1A20:                          ; CODE XREF: sub_14FDD11F0+820↑j
.std:000000014FDD1A20 48 8D 8F 90 00 00 00                    lea     rcx, [rdi+90h]
.std:000000014FDD1A27 FF 15 53 C0 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD1A2D 48 8B 4D 08                             mov     rcx, [rbp+8]
.std:000000014FDD1A31 41 8D 5F 01                             lea     ebx, [r15+1]
.std:000000014FDD1A35 48 89 0C F0                             mov     [rax+rsi*8], rcx
.std:000000014FDD1A39 40 B6 01                                mov     sil, 1
.std:000000014FDD1A3C
.std:000000014FDD1A3C                         loc_14FDD1A3C:                          ; CODE XREF: sub_14FDD11F0+7DB↑j
.std:000000014FDD1A3C 48 8B 44 24 70                          mov     rax, [rsp+70h]
.std:000000014FDD1A41 41 FF C4                                inc     r12d
.std:000000014FDD1A44 49 83 C5 08                             add     r13, 8
.std:000000014FDD1A48 48 8B 40 10                             mov     rax, [rax+10h]
.std:000000014FDD1A4C 44 3B A0 20 21 00 00                    cmp     r12d, [rax+2120h]
.std:000000014FDD1A53 0F 8C 48 FF FF FF                       jl      loc_14FDD19A1
.std:000000014FDD1A59
.std:000000014FDD1A59                         loc_14FDD1A59:                          ; CODE XREF: sub_14FDD11F0+3A6↑j
.std:000000014FDD1A59                                                                 ; sub_14FDD11F0+765↑j ...
.std:000000014FDD1A59 41 83 BE F4 BB 00 00 00                 cmp     dword ptr [r14+0BBF4h], 0
.std:000000014FDD1A61 77 0E                                   ja      short loc_14FDD1A71
.std:000000014FDD1A63 41 83 BE 1C BC 00 00 00                 cmp     dword ptr [r14+0BC1Ch], 0
.std:000000014FDD1A6B 77 04                                   ja      short loc_14FDD1A71
.std:000000014FDD1A6D 32 C0                                   xor     al, al
.std:000000014FDD1A6F EB 02                                   jmp     short loc_14FDD1A73
.std:000000014FDD1A71                         ; ---------------------------------------------------------------------------
.std:000000014FDD1A71
.std:000000014FDD1A71                         loc_14FDD1A71:                          ; CODE XREF: sub_14FDD11F0+871↑j
.std:000000014FDD1A71                                                                 ; sub_14FDD11F0+87B↑j
.std:000000014FDD1A71 B0 01                                   mov     al, 1
.std:000000014FDD1A73
.std:000000014FDD1A73                         loc_14FDD1A73:                          ; CODE XREF: sub_14FDD11F0+87F↑j
.std:000000014FDD1A73 48 8B 5D 88                             mov     rbx, [rbp-78h]
.std:000000014FDD1A77 40 0A F0                                or      sil, al
.std:000000014FDD1A7A 44 8B 6C 24 78                          mov     r13d, [rsp+78h]
.std:000000014FDD1A7F
.std:000000014FDD1A7F                         loc_14FDD1A7F:                          ; CODE XREF: sub_14FDD11F0+1AF↑j
.std:000000014FDD1A7F                                                                 ; sub_14FDD11F0+1BD↑j
.std:000000014FDD1A7F 48 8B 44 24 70                          mov     rax, [rsp+70h]
.std:000000014FDD1A84 41 FF C5                                inc     r13d
.std:000000014FDD1A87 48 FF C3                                inc     rbx
.std:000000014FDD1A8A 44 89 6C 24 78                          mov     [rsp+78h], r13d
.std:000000014FDD1A8F 48 89 5D 88                             mov     [rbp-78h], rbx
.std:000000014FDD1A93 44 3B A8 D8 00 00 00                    cmp     r13d, [rax+0D8h]
.std:000000014FDD1A9A 48 8B 45 00                             mov     rax, [rbp+0]
.std:000000014FDD1A9E 0F 8C CC F8 FF FF                       jl      loc_14FDD1370
.std:000000014FDD1AA4 40 84 F6                                test    sil, sil
.std:000000014FDD1AA7 0F 84 29 18 00 00                       jz      loc_14FDD32D6
.std:000000014FDD1AAD 45 33 F6                                xor     r14d, r14d
.std:000000014FDD1AB0 4C 89 75 88                             mov     [rbp-78h], r14
.std:000000014FDD1AB4 E8 A7 B8 23 FF                          call    sub_14F00D360
.std:000000014FDD1AB9 4C 8B 64 24 60                          mov     r12, [rsp+60h]
.std:000000014FDD1ABE 84 C0                                   test    al, al
.std:000000014FDD1AC0 74 16                                   jz      short loc_14FDD1AD8
.std:000000014FDD1AC2 4C 8D 0D 07 92 67 07                    lea     r9, aBeginocclusion ; "BeginOcclusionTests"
.std:000000014FDD1AC9 45 8B C6                                mov     r8d, r14d
.std:000000014FDD1ACC 49 8B D4                                mov     rdx, r12
.std:000000014FDD1ACF 48 8D 4D 88                             lea     rcx, [rbp-78h]
.std:000000014FDD1AD3 E8 48 4A 4C 00                          call    sub_150296520
.std:000000014FDD1AD8
.std:000000014FDD1AD8                         loc_14FDD1AD8:                          ; CODE XREF: sub_14FDD11F0+8D0↑j
.std:000000014FDD1AD8 4C 8B 6C 24 70                          mov     r13, [rsp+70h]
.std:000000014FDD1ADD 41 8B DE                                mov     ebx, r14d
.std:000000014FDD1AE0 41 8B FE                                mov     edi, r14d
.std:000000014FDD1AE3 45 39 B5 D8 00 00 00                    cmp     [r13+0D8h], r14d
.std:000000014FDD1AEA 7E 61                                   jle     short loc_14FDD1B4D
.std:000000014FDD1AEC 49 8B F6                                mov     rsi, r14
.std:000000014FDD1AEF 90                                      nop
.std:000000014FDD1AF0
.std:000000014FDD1AF0                         loc_14FDD1AF0:                          ; CODE XREF: sub_14FDD11F0+958↓j
.std:000000014FDD1AF0 48 8D 4D E8                             lea     rcx, [rbp-18h]
.std:000000014FDD1AF4 FF 15 86 BF 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD1AFA 49 03 C6                                add     rax, r14
.std:000000014FDD1AFD 8B 88 98 00 00 00                       mov     ecx, [rax+98h]
.std:000000014FDD1B03 03 88 88 00 00 00                       add     ecx, [rax+88h]
.std:000000014FDD1B09 03 48 78                                add     ecx, [rax+78h]
.std:000000014FDD1B0C 03 48 68                                add     ecx, [rax+68h]
.std:000000014FDD1B0F 03 48 58                                add     ecx, [rax+58h]
.std:000000014FDD1B12 03 D9                                   add     ebx, ecx
.std:000000014FDD1B14 49 8D 8D D0 00 00 00                    lea     rcx, [r13+0D0h]
.std:000000014FDD1B1B FF 15 5F BF 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD1B21 FF C7                                   inc     edi
.std:000000014FDD1B23 48 8D B6 80 C0 00 00                    lea     rsi, [rsi+0C080h]
.std:000000014FDD1B2A 49 81 C6 A0 00 00 00                    add     r14, 0A0h
.std:000000014FDD1B31 8B 8C 30 88 FB FF FF                    mov     ecx, [rax+rsi-478h]
.std:000000014FDD1B38 03 8C 30 60 FB FF FF                    add     ecx, [rax+rsi-4A0h]
.std:000000014FDD1B3F 03 D9                                   add     ebx, ecx
.std:000000014FDD1B41 41 3B BD D8 00 00 00                    cmp     edi, [r13+0D8h]
.std:000000014FDD1B48 7C A6                                   jl      short loc_14FDD1AF0
.std:000000014FDD1B4A 45 33 F6                                xor     r14d, r14d
.std:000000014FDD1B4D
.std:000000014FDD1B4D                         loc_14FDD1B4D:                          ; CODE XREF: sub_14FDD11F0+8FA↑j
.std:000000014FDD1B4D 41 83 BD 08 04 00 00 01                 cmp     dword ptr [r13+408h], 1
.std:000000014FDD1B55 44 0F B6 7C 24 40                       movzx   r15d, byte ptr [rsp+40h]
.std:000000014FDD1B5B 0F 8E 1D 03 00 00                       jle     loc_14FDD1E7E
.std:000000014FDD1B61 48 8B 45 C8                             mov     rax, [rbp-38h]
.std:000000014FDD1B65 45 84 FF                                test    r15b, r15b
.std:000000014FDD1B68 74 09                                   jz      short loc_14FDD1B73
.std:000000014FDD1B6A 48 8B 80 90 00 00 00                    mov     rax, [rax+90h]
.std:000000014FDD1B71 EB 04                                   jmp     short loc_14FDD1B77
.std:000000014FDD1B73                         ; ---------------------------------------------------------------------------
.std:000000014FDD1B73
.std:000000014FDD1B73                         loc_14FDD1B73:                          ; CODE XREF: sub_14FDD11F0+978↑j
.std:000000014FDD1B73 48 8B 40 60                             mov     rax, [rax+60h]
.std:000000014FDD1B77
.std:000000014FDD1B77                         loc_14FDD1B77:                          ; CODE XREF: sub_14FDD11F0+981↑j
.std:000000014FDD1B77 48 8B 40 08                             mov     rax, [rax+8]
.std:000000014FDD1B7B 33 C9                                   xor     ecx, ecx
.std:000000014FDD1B7D 66 0F 6F 05 0B F3 30 03                 movdqa  xmm0, cs:xmmword_1530E0E90
.std:000000014FDD1B85 41 B8 C0 00 00 00                       mov     r8d, 0C0h
.std:000000014FDD1B8B 66 0F 6F 0D 9D F0 30 03                 movdqa  xmm1, cs:xmmword_1530E0C30
.std:000000014FDD1B93 F3 0F 7F 85 B0 02 00 00                 movdqu  xmmword ptr [rbp+2B0h], xmm0
.std:000000014FDD1B9B 0F 57 C0                                xorps   xmm0, xmm0
.std:000000014FDD1B9E F3 0F 7F 8D C0 02 00 00                 movdqu  xmmword ptr [rbp+2C0h], xmm1
.std:000000014FDD1BA6 0F 57 C9                                xorps   xmm1, xmm1
.std:000000014FDD1BA9 48 89 8D 08 03 00 00                    mov     [rbp+308h], rcx
.std:000000014FDD1BB0 89 8D 10 03 00 00                       mov     [rbp+310h], ecx
.std:000000014FDD1BB6 88 8D 16 03 00 00                       mov     [rbp+316h], cl
.std:000000014FDD1BBC 48 8D 8D D0 01 00 00                    lea     rcx, [rbp+1D0h]
.std:000000014FDD1BC3 0F 11 85 F8 02 00 00                    movups  xmmword ptr [rbp+2F8h], xmm0
.std:000000014FDD1BCA 44 89 B5 A8 02 00 00                    mov     [rbp+2A8h], r14d
.std:000000014FDD1BD1 F3 0F 7F 85 20 03 00 00                 movdqu  xmmword ptr [rbp+320h], xmm0
.std:000000014FDD1BD9 F3 0F 7F 8D 30 03 00 00                 movdqu  xmmword ptr [rbp+330h], xmm1
.std:000000014FDD1BE1 F3 0F 7F 85 40 03 00 00                 movdqu  xmmword ptr [rbp+340h], xmm0
.std:000000014FDD1BE9 F3 0F 7F 8D 50 03 00 00                 movdqu  xmmword ptr [rbp+350h], xmm1
.std:000000014FDD1BF1 C7 85 AC 02 00 00 FF FF                 mov     dword ptr [rbp+2ACh], 0FFFFFFFFh
.std:000000014FDD1BF1 FF FF
.std:000000014FDD1BFB 48 C7 85 D0 02 00 00 00                 mov     qword ptr [rbp+2D0h], 0
.std:000000014FDD1BFB 00 00 00
.std:000000014FDD1C06 4C 89 B5 D8 02 00 00                    mov     [rbp+2D8h], r14
.std:000000014FDD1C0D 4C 89 B5 E0 02 00 00                    mov     [rbp+2E0h], r14
.std:000000014FDD1C14 C6 85 E8 02 00 00 00                    mov     byte ptr [rbp+2E8h], 0
.std:000000014FDD1C1B 89 9D EC 02 00 00                       mov     [rbp+2ECh], ebx
.std:000000014FDD1C21 66 C7 85 F0 02 00 00 01                 mov     word ptr [rbp+2F0h], 1
.std:000000014FDD1C21 00
.std:000000014FDD1C2A 44 89 B5 F4 02 00 00                    mov     [rbp+2F4h], r14d
.std:000000014FDD1C31 66 C7 85 14 03 00 00 01                 mov     word ptr [rbp+314h], 1
.std:000000014FDD1C31 00
.std:000000014FDD1C3A C7 85 18 03 00 00 FF FF                 mov     dword ptr [rbp+318h], 0FFFFFFFFh
.std:000000014FDD1C3A FF FF
.std:000000014FDD1C44 44 89 B5 1C 03 00 00                    mov     [rbp+31Ch], r14d
.std:000000014FDD1C4B 48 89 85 90 02 00 00                    mov     [rbp+290h], rax
.std:000000014FDD1C52 4C 89 B5 98 02 00 00                    mov     [rbp+298h], r14
.std:000000014FDD1C59 C6 85 A0 02 00 00 45                    mov     byte ptr [rbp+2A0h], 45h ; 'E'
.std:000000014FDD1C60 C7 85 A4 02 00 00 21 00                 mov     dword ptr [rbp+2A4h], 21h ; '!'
.std:000000014FDD1C60 00 00
.std:000000014FDD1C6A 83 78 58 01                             cmp     dword ptr [rax+58h], 1
.std:000000014FDD1C6E 0F 97 85 60 03 00 00                    setnbe  byte ptr [rbp+360h]
.std:000000014FDD1C75 33 D2                                   xor     edx, edx
.std:000000014FDD1C77 E8 FD B0 D8 02                          call    sub_152B5CD79
.std:000000014FDD1C7C 41 80 BC 24 C6 01 00 00                 cmp     byte ptr [r12+1C6h], 0
.std:000000014FDD1C7C 00
.std:000000014FDD1C85 0F 85 CA 01 00 00                       jnz     loc_14FDD1E55
.std:000000014FDD1C8B 80 BD 16 03 00 00 00                    cmp     byte ptr [rbp+316h], 0
.std:000000014FDD1C92 41 C6 84 24 C7 01 00 00                 mov     byte ptr [r12+1C7h], 1
.std:000000014FDD1C92 01
.std:000000014FDD1C9B 74 33                                   jz      short loc_14FDD1CD0
.std:000000014FDD1C9D 80 3D B4 F8 81 0A 03                    cmp     cs:byte_15A5F1558, 3
.std:000000014FDD1CA4 72 2A                                   jb      short loc_14FDD1CD0
.std:000000014FDD1CA6 48 8D 05 03 E0 8D 03                    lea     rax, aRenderpassSHas ; "RenderPass %s has too many UAVs"
.std:000000014FDD1CAD 41 B9 03 00 00 00                       mov     r9d, 3
.std:000000014FDD1CB3 4C 8D 05 A2 F8 81 0A                    lea     r8, unk_15A5F155C
.std:000000014FDD1CBA 48 89 44 24 20                          mov     [rsp+20h], rax
.std:000000014FDD1CBF BA 65 0F 00 00                          mov     edx, 0F65h
.std:000000014FDD1CC4 48 8D 0D D5 01 31 03                    lea     rcx, aUnknown_0 ; "Unknown"
.std:000000014FDD1CCB E8 E0 86 1F FF                          call    sub_14EFCA3B0
.std:000000014FDD1CD0
.std:000000014FDD1CD0                         loc_14FDD1CD0:                          ; CODE XREF: sub_14FDD11F0+AAB↑j
.std:000000014FDD1CD0                                                                 ; sub_14FDD11F0+AB4↑j
.std:000000014FDD1CD0 80 3D 41 E9 81 0A 00                    cmp     cs:byte_15A5F0618, 0
.std:000000014FDD1CD7 74 21                                   jz      short loc_14FDD1CFA
.std:000000014FDD1CD9 49 8B 4C 24 20                          mov     rcx, [r12+20h]
.std:000000014FDD1CDE 4C 8D 05 13 90 67 07                    lea     r8, aOcclusionqueri ; "OcclusionQueries"
.std:000000014FDD1CE5 48 8D 95 D0 01 00 00                    lea     rdx, [rbp+1D0h]
.std:000000014FDD1CEC 48 8B 01                                mov     rax, [rcx]
.std:000000014FDD1CEF FF 90 70 03 00 00                       call    qword ptr [rax+370h]
.std:000000014FDD1CF5 E9 E6 00 00 00                          jmp     loc_14FDD1DE0
.std:000000014FDD1CFA                         ; ---------------------------------------------------------------------------
.std:000000014FDD1CFA
.std:000000014FDD1CFA                         loc_14FDD1CFA:                          ; CODE XREF: sub_14FDD11F0+AE7↑j
.std:000000014FDD1CFA 49 8B 7C 24 38                          mov     rdi, [r12+38h]
.std:000000014FDD1CFF 48 FF C7                                inc     rdi
.std:000000014FDD1D02 48 83 E7 FE                             and     rdi, 0FFFFFFFFFFFFFFFEh
.std:000000014FDD1D06 48 8D 47 22                             lea     rax, [rdi+22h]
.std:000000014FDD1D0A 49 3B 44 24 40                          cmp     rax, [r12+40h]
.std:000000014FDD1D0F 76 1F                                   jbe     short loc_14FDD1D30
.std:000000014FDD1D11 BA 24 00 00 00                          mov     edx, 24h ; '$'
.std:000000014FDD1D16 49 8D 4C 24 38                          lea     rcx, [r12+38h]
.std:000000014FDD1D1B E8 50 7B 25 FF                          call    sub_14F029870
.std:000000014FDD1D20 49 8B 7C 24 38                          mov     rdi, [r12+38h]
.std:000000014FDD1D25 48 FF C7                                inc     rdi
.std:000000014FDD1D28 48 83 E7 FE                             and     rdi, 0FFFFFFFFFFFFFFFEh
.std:000000014FDD1D2C 48 8D 47 22                             lea     rax, [rdi+22h]
.std:000000014FDD1D30
.std:000000014FDD1D30                         loc_14FDD1D30:                          ; CODE XREF: sub_14FDD11F0+B1F↑j
.std:000000014FDD1D30 48 8D 15 C1 8F 67 07                    lea     rdx, aOcclusionqueri ; "OcclusionQueries"
.std:000000014FDD1D37 49 89 44 24 38                          mov     [r12+38h], rax
.std:000000014FDD1D3C 48 8B CF                                mov     rcx, rdi
.std:000000014FDD1D3F 48 2B CA                                sub     rcx, rdx
.std:000000014FDD1D42 0F 1F 40 00                             nop     dword ptr [rax+00h]
.std:000000014FDD1D46                                         db      66h, 66h
.std:000000014FDD1D46 66 66 0F 1F 84 00 00 00                 nop     word ptr [rax+rax+00000000h]
.std:000000014FDD1D46 00 00
.std:000000014FDD1D50
.std:000000014FDD1D50                         loc_14FDD1D50:                          ; CODE XREF: sub_14FDD11F0+B6E↓j
.std:000000014FDD1D50 0F B7 02                                movzx   eax, word ptr [rdx]
.std:000000014FDD1D53 66 89 04 11                             mov     [rcx+rdx], ax
.std:000000014FDD1D57 48 8D 52 02                             lea     rdx, [rdx+2]
.std:000000014FDD1D5B 66 85 C0                                test    ax, ax
.std:000000014FDD1D5E 75 F0                                   jnz     short loc_14FDD1D50
.std:000000014FDD1D60 49 8B 5C 24 38                          mov     rbx, [r12+38h]
.std:000000014FDD1D65 48 83 C3 07                             add     rbx, 7
.std:000000014FDD1D69 48 83 E3 F8                             and     rbx, 0FFFFFFFFFFFFFFF8h
.std:000000014FDD1D6D 48 8D 83 B0 01 00 00                    lea     rax, [rbx+1B0h]
.std:000000014FDD1D74 49 3B 44 24 40                          cmp     rax, [r12+40h]
.std:000000014FDD1D79 76 23                                   jbe     short loc_14FDD1D9E
.std:000000014FDD1D7B BA B8 01 00 00                          mov     edx, 1B8h
.std:000000014FDD1D80 49 8D 4C 24 38                          lea     rcx, [r12+38h]
.std:000000014FDD1D85 E8 E6 7A 25 FF                          call    sub_14F029870
.std:000000014FDD1D8A 49 8B 5C 24 38                          mov     rbx, [r12+38h]
.std:000000014FDD1D8F 48 83 C3 07                             add     rbx, 7
.std:000000014FDD1D93 48 83 E3 F8                             and     rbx, 0FFFFFFFFFFFFFFF8h
.std:000000014FDD1D97 48 8D 83 B0 01 00 00                    lea     rax, [rbx+1B0h]
.std:000000014FDD1D9E
.std:000000014FDD1D9E                         loc_14FDD1D9E:                          ; CODE XREF: sub_14FDD11F0+B89↑j
.std:000000014FDD1D9E 49 89 44 24 38                          mov     [r12+38h], rax
.std:000000014FDD1DA3 48 8D 4B 10                             lea     rcx, [rbx+10h]
.std:000000014FDD1DA7 49 8B 44 24 08                          mov     rax, [r12+8]
.std:000000014FDD1DAC 48 8D 95 D0 01 00 00                    lea     rdx, [rbp+1D0h]
.std:000000014FDD1DB3 41 FF 44 24 14                          inc     dword ptr [r12+14h]
.std:000000014FDD1DB8 45 33 F6                                xor     r14d, r14d
.std:000000014FDD1DBB 48 89 18                                mov     [rax], rbx
.std:000000014FDD1DBE 48 8D 43 08                             lea     rax, [rbx+8]
.std:000000014FDD1DC2 49 89 44 24 08                          mov     [r12+8], rax
.std:000000014FDD1DC7 4C 89 30                                mov     [rax], r14
.std:000000014FDD1DCA 48 8D 05 B7 DE 8D 03                    lea     rax, off_1536AFC88
.std:000000014FDD1DD1 48 89 03                                mov     [rbx], rax
.std:000000014FDD1DD4 E8 A7 E6 62 F1                          call    sub_141400480
.std:000000014FDD1DD9 48 89 BB A8 01 00 00                    mov     [rbx+1A8h], rdi
.std:000000014FDD1DE0
.std:000000014FDD1DE0                         loc_14FDD1DE0:                          ; CODE XREF: sub_14FDD11F0+B05↑j
.std:000000014FDD1DE0 48 8D 95 D0 01 00 00                    lea     rdx, [rbp+1D0h]
.std:000000014FDD1DE7 49 8B CC                                mov     rcx, r12
.std:000000014FDD1DEA E8 51 2B 63 F1                          call    sub_141404940
.std:000000014FDD1DEF 0F B6 85 14 03 00 00                    movzx   eax, byte ptr [rbp+314h]
.std:000000014FDD1DF6 49 8D 8C 24 8C 01 00 00                 lea     rcx, [r12+18Ch]
.std:000000014FDD1DFE 41 C6 84 24 88 01 00 00                 mov     byte ptr [r12+188h], 0
.std:000000014FDD1DFE 00
.std:000000014FDD1E07 44 89 31                                mov     [rcx], r14d
.std:000000014FDD1E0A 49 C7 84 24 90 01 00 00                 mov     qword ptr [r12+190h], 0
.std:000000014FDD1E0A 00 00 00 00
.std:000000014FDD1E16 49 C7 84 24 98 01 00 00                 mov     qword ptr [r12+198h], 0
.std:000000014FDD1E16 00 00 00 00
.std:000000014FDD1E22 49 C7 84 24 A0 01 00 00                 mov     qword ptr [r12+1A0h], 0
.std:000000014FDD1E22 00 00 00 00
.std:000000014FDD1E2E 45 89 B4 24 A8 01 00 00                 mov     [r12+1A8h], r14d
.std:000000014FDD1E36 41 88 84 24 89 01 00 00                 mov     [r12+189h], al
.std:000000014FDD1E3E 84 C0                                   test    al, al
.std:000000014FDD1E40 74 13                                   jz      short loc_14FDD1E55
.std:000000014FDD1E42 44 8B C0                                mov     r8d, eax
.std:000000014FDD1E45 48 8D 95 F4 02 00 00                    lea     rdx, [rbp+2F4h]
.std:000000014FDD1E4C 49 C1 E0 02                             shl     r8, 2
.std:000000014FDD1E50 E8 18 AF D8 02                          call    sub_152B5CD6D
.std:000000014FDD1E55
.std:000000014FDD1E55                         loc_14FDD1E55:                          ; CODE XREF: sub_14FDD11F0+A95↑j
.std:000000014FDD1E55                                                                 ; sub_14FDD11F0+C50↑j
.std:000000014FDD1E55 49 8D 8C 24 C8 01 00 00                 lea     rcx, [r12+1C8h]
.std:000000014FDD1E5D 41 C6 84 24 C4 01 00 00                 mov     byte ptr [r12+1C4h], 1
.std:000000014FDD1E5D 01
.std:000000014FDD1E66 48 8D 95 D0 01 00 00                    lea     rdx, [rbp+1D0h]
.std:000000014FDD1E6D E8 1E FF 62 F1                          call    sub_141401D90
.std:000000014FDD1E72 48 8D 8D D0 01 00 00                    lea     rcx, [rbp+1D0h]
.std:000000014FDD1E79 E8 E2 F9 62 F1                          call    sub_141401860
.std:000000014FDD1E7E
.std:000000014FDD1E7E                         loc_14FDD1E7E:                          ; CODE XREF: sub_14FDD11F0+96B↑j
.std:000000014FDD1E7E 33 C0                                   xor     eax, eax
.std:000000014FDD1E80 4C 89 B5 B0 00 00 00                    mov     [rbp+0B0h], r14
.std:000000014FDD1E87 0F 57 C0                                xorps   xmm0, xmm0
.std:000000014FDD1E8A 89 85 D8 00 00 00                       mov     [rbp+0D8h], eax
.std:000000014FDD1E90 0F 57 C9                                xorps   xmm1, xmm1
.std:000000014FDD1E93 89 85 EC 00 00 00                       mov     [rbp+0ECh], eax
.std:000000014FDD1E99 48 8D 55 60                             lea     rdx, [rbp+60h]
.std:000000014FDD1E9D 89 85 00 01 00 00                       mov     [rbp+100h], eax
.std:000000014FDD1EA3 49 8B CC                                mov     rcx, r12
.std:000000014FDD1EA6 89 85 14 01 00 00                       mov     [rbp+114h], eax
.std:000000014FDD1EAC F3 0F 7F 45 60                          movdqu  xmmword ptr [rbp+60h], xmm0
.std:000000014FDD1EB1 48 89 85 28 01 00 00                    mov     [rbp+128h], rax
.std:000000014FDD1EB8 F3 0F 7F 4D 70                          movdqu  xmmword ptr [rbp+70h], xmm1
.std:000000014FDD1EBD 48 89 85 30 01 00 00                    mov     [rbp+130h], rax
.std:000000014FDD1EC4 F3 0F 7F 85 80 00 00 00                 movdqu  xmmword ptr [rbp+80h], xmm0
.std:000000014FDD1ECC 48 89 85 38 01 00 00                    mov     [rbp+138h], rax
.std:000000014FDD1ED3 F3 0F 7F 8D 90 00 00 00                 movdqu  xmmword ptr [rbp+90h], xmm1
.std:000000014FDD1EDB 48 89 85 40 01 00 00                    mov     [rbp+140h], rax
.std:000000014FDD1EE2 F3 0F 7F 85 A0 00 00 00                 movdqu  xmmword ptr [rbp+0A0h], xmm0
.std:000000014FDD1EEA 48 89 85 48 01 00 00                    mov     [rbp+148h], rax
.std:000000014FDD1EF1 0F 11 85 C8 00 00 00                    movups  xmmword ptr [rbp+0C8h], xmm0
.std:000000014FDD1EF8 48 89 85 50 01 00 00                    mov     [rbp+150h], rax
.std:000000014FDD1EFF 0F 11 8D DC 00 00 00                    movups  xmmword ptr [rbp+0DCh], xmm1
.std:000000014FDD1F06 48 89 85 58 01 00 00                    mov     [rbp+158h], rax
.std:000000014FDD1F0D 0F 11 85 F0 00 00 00                    movups  xmmword ptr [rbp+0F0h], xmm0
.std:000000014FDD1F14 48 89 85 60 01 00 00                    mov     [rbp+160h], rax
.std:000000014FDD1F1B 0F 11 8D 04 01 00 00                    movups  xmmword ptr [rbp+104h], xmm1
.std:000000014FDD1F22 48 89 85 6C 01 00 00                    mov     [rbp+16Ch], rax
.std:000000014FDD1F29 0F 11 85 18 01 00 00                    movups  xmmword ptr [rbp+118h], xmm0
.std:000000014FDD1F30 48 89 85 74 01 00 00                    mov     [rbp+174h], rax
.std:000000014FDD1F37 48 89 85 7C 01 00 00                    mov     [rbp+17Ch], rax
.std:000000014FDD1F3E 48 89 85 84 01 00 00                    mov     [rbp+184h], rax
.std:000000014FDD1F45 C7 85 B8 00 00 00 00 00                 mov     dword ptr [rbp+0B8h], 0
.std:000000014FDD1F45 00 00
.std:000000014FDD1F4F 66 C7 85 BC 00 00 00 00                 mov     word ptr [rbp+0BCh], 0
.std:000000014FDD1F4F 00
.std:000000014FDD1F58 C6 85 BE 00 00 00 03                    mov     byte ptr [rbp+0BEh], 3
.std:000000014FDD1F5F C7 85 C0 00 00 00 26 00                 mov     dword ptr [rbp+0C0h], 26h ; '&'
.std:000000014FDD1F5F 00 00
.std:000000014FDD1F69 66 44 89 B5 68 01 00 00                 mov     [rbp+168h], r14w
.std:000000014FDD1F71 C7 85 8C 01 00 00 01 00                 mov     dword ptr [rbp+18Ch], 1
.std:000000014FDD1F71 00 00
.std:000000014FDD1F7B E8 A0 23 63 F2                          call    sub_142404320
.std:000000014FDD1F80 44 89 B5 C0 00 00 00                    mov     [rbp+0C0h], r14d
.std:000000014FDD1F87 E8 54 70 A2 FF                          call    sub_14F7F8FE0
.std:000000014FDD1F8C 48 89 85 90 00 00 00                    mov     [rbp+90h], rax
.std:000000014FDD1F93 E8 88 99 A2 FF                          call    sub_14F7FB920
.std:000000014FDD1F98 41 83 BD D8 00 00 00 00                 cmp     dword ptr [r13+0D8h], 0
.std:000000014FDD1FA0 41 8B FE                                mov     edi, r14d
.std:000000014FDD1FA3 48 89 85 A0 00 00 00                    mov     [rbp+0A0h], rax
.std:000000014FDD1FAA 44 89 74 24 78                          mov     [rsp+78h], r14d
.std:000000014FDD1FAF 0F 8E D6 12 00 00                       jle     loc_14FDD328B
.std:000000014FDD1FAF                         ; } // starts at 14FDD1354
.std:000000014FDD1FB5                         ; __unwind { // sub_152B5621C
.std:000000014FDD1FB5 0F 29 B4 24 C0 04 00 00                 movaps  xmmword ptr [rsp+4C0h], xmm6
.std:000000014FDD1FBD 49 8D B5 D0 00 00 00                    lea     rsi, [r13+0D0h]
.std:000000014FDD1FC4 0F 29 BC 24 B0 04 00 00                 movaps  xmmword ptr [rsp+4B0h], xmm7
.std:000000014FDD1FCC 49 8B DE                                mov     rbx, r14
.std:000000014FDD1FCF 44 0F 29 84 24 A0 04 00                 movaps  xmmword ptr [rsp+4A0h], xmm8
.std:000000014FDD1FCF 00
.std:000000014FDD1FD8 44 0F 29 8C 24 90 04 00                 movaps  xmmword ptr [rsp+490h], xmm9
.std:000000014FDD1FD8 00
.std:000000014FDD1FE1 F3 44 0F 10 0D 2E 4A 31                 movss   xmm9, dword ptr cs:ymmword_1530E6A04+14h
.std:000000014FDD1FE1 03
.std:000000014FDD1FEA 44 0F 29 94 24 80 04 00                 movaps  xmmword ptr [rsp+480h], xmm10
.std:000000014FDD1FEA 00
.std:000000014FDD1FF3 66 44 0F 6F 15 F4 EC 30                 movdqa  xmm10, cs:xmmword_1530E0CF0
.std:000000014FDD1FF3 03
.std:000000014FDD1FFC 48 89 5D E0                             mov     [rbp-20h], rbx
.std:000000014FDD2000 48 89 75 28                             mov     [rbp+28h], rsi
.std:000000014FDD2004
.std:000000014FDD2004                         loc_14FDD2004:                          ; CODE XREF: sub_14FDD11F0+206A↓j
.std:000000014FDD2004 4C 89 75 C0                             mov     [rbp-40h], r14
.std:000000014FDD2008 E8 53 B3 23 FF                          call    sub_14F00D360
.std:000000014FDD200D 84 C0                                   test    al, al
.std:000000014FDD200F 74 1A                                   jz      short loc_14FDD202B
.std:000000014FDD2011 4C 8D 0D 08 8D 67 07                    lea     r9, aViewocclusiont ; "ViewOcclusionTests %d"
.std:000000014FDD2018 89 7C 24 20                             mov     [rsp+20h], edi
.std:000000014FDD201C 45 8B C6                                mov     r8d, r14d
.std:000000014FDD201F 48 8D 4D C0                             lea     rcx, [rbp-40h]
.std:000000014FDD2023 49 8B D4                                mov     rdx, r12
.std:000000014FDD2026 E8 F5 44 4C 00                          call    sub_150296520
.std:000000014FDD202B
.std:000000014FDD202B                         loc_14FDD202B:                          ; CODE XREF: sub_14FDD11F0+E1F↑j
.std:000000014FDD202B 48 8B CE                                mov     rcx, rsi
.std:000000014FDD202E FF 15 4C BA 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD2034 4C 69 EB 80 C0 00 00                    imul    r13, rbx, 0C080h
.std:000000014FDD203B 48 8D 4D E8                             lea     rcx, [rbp-18h]
.std:000000014FDD203F 4C 03 E8                                add     r13, rax
.std:000000014FDD2042 FF 15 38 BA 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD2048 41 8B BC 24 98 00 00 00                 mov     edi, [r12+98h]
.std:000000014FDD2050 48 8D 0C 9B                             lea     rcx, [rbx+rbx*4]
.std:000000014FDD2054 48 C1 E1 05                             shl     rcx, 5
.std:000000014FDD2058 48 03 C1                                add     rax, rcx
.std:000000014FDD205B 89 7C 24 58                             mov     [rsp+58h], edi
.std:000000014FDD205F 41 8B 8D 58 20 00 00                    mov     ecx, [r13+2058h]
.std:000000014FDD2066 48 89 45 80                             mov     [rbp-80h], rax
.std:000000014FDD206A 3B F9                                   cmp     edi, ecx
.std:000000014FDD206C 74 2B                                   jz      short loc_14FDD2099
.std:000000014FDD206E 41 83 7C 24 14 00                       cmp     dword ptr [r12+14h], 0
.std:000000014FDD2074 41 89 8C 24 98 00 00 00                 mov     [r12+98h], ecx
.std:000000014FDD207C 77 13                                   ja      short loc_14FDD2091
.std:000000014FDD207E 80 3D 93 E5 81 0A 00                    cmp     cs:byte_15A5F0618, 0
.std:000000014FDD2085 75 0A                                   jnz     short loc_14FDD2091
.std:000000014FDD2087 41 89 8C 24 9C 00 00 00                 mov     [r12+9Ch], ecx
.std:000000014FDD208F EB 08                                   jmp     short loc_14FDD2099
.std:000000014FDD2091                         ; ---------------------------------------------------------------------------
.std:000000014FDD2091
.std:000000014FDD2091                         loc_14FDD2091:                          ; CODE XREF: sub_14FDD11F0+E8C↑j
.std:000000014FDD2091                                                                 ; sub_14FDD11F0+E95↑j
.std:000000014FDD2091 49 8B CC                                mov     rcx, r12
.std:000000014FDD2094 E8 07 13 49 00                          call    sub_1502633A0
.std:000000014FDD2099
.std:000000014FDD2099                         loc_14FDD2099:                          ; CODE XREF: sub_14FDD11F0+E7C↑j
.std:000000014FDD2099                                                                 ; sub_14FDD11F0+E9F↑j
.std:000000014FDD2099 41 80 BD B4 22 00 00 00                 cmp     byte ptr [r13+22B4h], 0
.std:000000014FDD20A1 0F 84 44 01 00 00                       jz      loc_14FDD21EB
.std:000000014FDD20A7 48 83 3D 89 E8 E9 09 00                 cmp     cs:qword_159C70938, 0
.std:000000014FDD20AF 0F 85 2A 01 00 00                       jnz     loc_14FDD21DF
.std:000000014FDD20B5 80 3D BC 0C 82 0A 00                    cmp     cs:byte_15A5F2D78, 0
.std:000000014FDD20BC 74 54                                   jz      short loc_14FDD2112
.std:000000014FDD20BE 80 3D 9A 0D 82 0A 00                    cmp     cs:byte_15A5F2E5F, 0
.std:000000014FDD20C5 74 4B                                   jz      short loc_14FDD2112
.std:000000014FDD20C7 B9 18 00 00 00                          mov     ecx, 18h
.std:000000014FDD20CC E8 2F 3A 04 F3                          call    sub_142E15B00
.std:000000014FDD20D1 48 85 C0                                test    rax, rax
.std:000000014FDD20D4 74 22                                   jz      short loc_14FDD20F8
.std:000000014FDD20D6 48 8B C8                                mov     rcx, rax
.std:000000014FDD20D9 E8 62 12 63 F2                          call    sub_142403340
.std:000000014FDD20DE 48 8B C8                                mov     rcx, rax
.std:000000014FDD20E1 33 C0                                   xor     eax, eax
.std:000000014FDD20E3 F0 48 0F B1 0D 4C E8 E9                 lock cmpxchg cs:qword_159C70938, rcx
.std:000000014FDD20E3 09
.std:000000014FDD20EC 48 8B 05 45 E8 E9 09                    mov     rax, cs:qword_159C70938
.std:000000014FDD20F3 E9 0D 02 00 00                          jmp     loc_14FDD2305
.std:000000014FDD20F8                         ; ---------------------------------------------------------------------------
.std:000000014FDD20F8
.std:000000014FDD20F8                         loc_14FDD20F8:                          ; CODE XREF: sub_14FDD11F0+EE4↑j
.std:000000014FDD20F8 49 8B CE                                mov     rcx, r14
.std:000000014FDD20FB 33 C0                                   xor     eax, eax
.std:000000014FDD20FD F0 48 0F B1 0D 32 E8 E9                 lock cmpxchg cs:qword_159C70938, rcx
.std:000000014FDD20FD 09
.std:000000014FDD2106 48 8B 05 2B E8 E9 09                    mov     rax, cs:qword_159C70938
.std:000000014FDD210D E9 F3 01 00 00                          jmp     loc_14FDD2305
.std:000000014FDD2112                         ; ---------------------------------------------------------------------------
.std:000000014FDD2112
.std:000000014FDD2112                         loc_14FDD2112:                          ; CODE XREF: sub_14FDD11F0+ECC↑j
.std:000000014FDD2112                                                                 ; sub_14FDD11F0+ED5↑j
.std:000000014FDD2112 E8 29 86 19 FF                          call    sub_14EF6A740
.std:000000014FDD2117 84 C0                                   test    al, al
.std:000000014FDD2119 0F 85 96 00 00 00                       jnz     loc_14FDD21B5
.std:000000014FDD211F 48 8D 4D D0                             lea     rcx, [rbp-30h]
.std:000000014FDD2123 E8 28 FB 17 FF                          call    sub_14EF51C50
.std:000000014FDD2128 33 D2                                   xor     edx, edx
.std:000000014FDD212A 48 8D 4D 90                             lea     rcx, [rbp-70h]
.std:000000014FDD212E 41 B8 FF 00 00 00                       mov     r8d, 0FFh
.std:000000014FDD2134 E8 77 63 58 F1                          call    sub_1413584B0
.std:000000014FDD2139 48 8D 15 50 2D 63 F2                    lea     rdx, sub_142404E90
.std:000000014FDD2140 41 B1 01                                mov     r9b, 1
.std:000000014FDD2143 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD2146 48 89 51 10                             mov     [rcx+10h], rdx
.std:000000014FDD214A 48 8D 55 D0                             lea     rdx, [rbp-30h]
.std:000000014FDD214E 48 89 51 18                             mov     [rcx+18h], rdx
.std:000000014FDD2152 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD2155 44 8B 40 10                             mov     r8d, [rax+10h]
.std:000000014FDD2159 48 8B 50 08                             mov     rdx, [rax+8]
.std:000000014FDD215D 48 8B 59 28                             mov     rbx, [rcx+28h]
.std:000000014FDD2161 48 85 DB                                test    rbx, rbx
.std:000000014FDD2164 74 35                                   jz      short loc_14FDD219B
.std:000000014FDD2166 F0 FF 43 48                             lock inc dword ptr [rbx+48h]
.std:000000014FDD216A E8 B1 0F 59 F1                          call    sub_141363120
.std:000000014FDD216F B8 FF FF FF FF                          mov     eax, 0FFFFFFFFh
.std:000000014FDD2174 F0 0F C1 43 48                          lock xadd [rbx+48h], eax
.std:000000014FDD2179 83 F8 01                                cmp     eax, 1
.std:000000014FDD217C 75 22                                   jnz     short loc_14FDD21A0
.std:000000014FDD217E 48 8B CB                                mov     rcx, rbx
.std:000000014FDD2181 E8 6A 4F 15 FF                          call    sub_14EF270F0
.std:000000014FDD2186 48 8D 4D D0                             lea     rcx, [rbp-30h]
.std:000000014FDD218A E8 81 0B 18 FF                          call    sub_14EF52D10
.std:000000014FDD218F 48 8B 05 A2 E7 E9 09                    mov     rax, cs:qword_159C70938
.std:000000014FDD2196 E9 6A 01 00 00                          jmp     loc_14FDD2305
.std:000000014FDD219B                         ; ---------------------------------------------------------------------------
.std:000000014FDD219B
.std:000000014FDD219B                         loc_14FDD219B:                          ; CODE XREF: sub_14FDD11F0+F74↑j
.std:000000014FDD219B E8 80 0F 59 F1                          call    sub_141363120
.std:000000014FDD21A0
.std:000000014FDD21A0                         loc_14FDD21A0:                          ; CODE XREF: sub_14FDD11F0+F8C↑j
.std:000000014FDD21A0 48 8D 4D D0                             lea     rcx, [rbp-30h]
.std:000000014FDD21A4 E8 67 0B 18 FF                          call    sub_14EF52D10
.std:000000014FDD21A9 48 8B 05 88 E7 E9 09                    mov     rax, cs:qword_159C70938
.std:000000014FDD21B0 E9 50 01 00 00                          jmp     loc_14FDD2305
.std:000000014FDD21B5                         ; ---------------------------------------------------------------------------
.std:000000014FDD21B5
.std:000000014FDD21B5                         loc_14FDD21B5:                          ; CODE XREF: sub_14FDD11F0+F29↑j
.std:000000014FDD21B5 B9 18 00 00 00                          mov     ecx, 18h
.std:000000014FDD21BA E8 41 39 04 F3                          call    sub_142E15B00
.std:000000014FDD21BF 48 85 C0                                test    rax, rax
.std:000000014FDD21C2 74 14                                   jz      short loc_14FDD21D8
.std:000000014FDD21C4 48 8B C8                                mov     rcx, rax
.std:000000014FDD21C7 E8 74 11 63 F2                          call    sub_142403340
.std:000000014FDD21CC 48 89 05 65 E7 E9 09                    mov     cs:qword_159C70938, rax
.std:000000014FDD21D3 E9 2D 01 00 00                          jmp     loc_14FDD2305
.std:000000014FDD21D8                         ; ---------------------------------------------------------------------------
.std:000000014FDD21D8
.std:000000014FDD21D8                         loc_14FDD21D8:                          ; CODE XREF: sub_14FDD11F0+FD2↑j
.std:000000014FDD21D8 4C 89 35 59 E7 E9 09                    mov     cs:qword_159C70938, r14
.std:000000014FDD21DF
.std:000000014FDD21DF                         loc_14FDD21DF:                          ; CODE XREF: sub_14FDD11F0+EBF↑j
.std:000000014FDD21DF 48 8B 05 52 E7 E9 09                    mov     rax, cs:qword_159C70938
.std:000000014FDD21E6 E9 1A 01 00 00                          jmp     loc_14FDD2305
.std:000000014FDD21EB                         ; ---------------------------------------------------------------------------
.std:000000014FDD21EB
.std:000000014FDD21EB                         loc_14FDD21EB:                          ; CODE XREF: sub_14FDD11F0+EB1↑j
.std:000000014FDD21EB 48 83 3D 2D CC 73 0A 00                 cmp     cs:qword_15A50EE20, 0
.std:000000014FDD21F3 0F 85 05 01 00 00                       jnz     loc_14FDD22FE
.std:000000014FDD21F9 80 3D 78 0B 82 0A 00                    cmp     cs:byte_15A5F2D78, 0
.std:000000014FDD2200 74 46                                   jz      short loc_14FDD2248
.std:000000014FDD2202 80 3D 56 0C 82 0A 00                    cmp     cs:byte_15A5F2E5F, 0
.std:000000014FDD2209 74 3D                                   jz      short loc_14FDD2248
.std:000000014FDD220B B9 18 00 00 00                          mov     ecx, 18h
.std:000000014FDD2210 E8 EB 38 04 F3                          call    sub_142E15B00
.std:000000014FDD2215 48 85 C0                                test    rax, rax
.std:000000014FDD2218 74 1B                                   jz      short loc_14FDD2235
.std:000000014FDD221A 48 8B C8                                mov     rcx, rax
.std:000000014FDD221D E8 BE 0D A1 FF                          call    sub_14F7E2FE0
.std:000000014FDD2222 48 8B C8                                mov     rcx, rax
.std:000000014FDD2225 33 C0                                   xor     eax, eax
.std:000000014FDD2227 F0 48 0F B1 0D F0 CB 73                 lock cmpxchg cs:qword_15A50EE20, rcx
.std:000000014FDD2227 0A
.std:000000014FDD2230 E9 C9 00 00 00                          jmp     loc_14FDD22FE
.std:000000014FDD2235                         ; ---------------------------------------------------------------------------
.std:000000014FDD2235
.std:000000014FDD2235                         loc_14FDD2235:                          ; CODE XREF: sub_14FDD11F0+1028↑j
.std:000000014FDD2235 49 8B CE                                mov     rcx, r14
.std:000000014FDD2238 33 C0                                   xor     eax, eax
.std:000000014FDD223A F0 48 0F B1 0D DD CB 73                 lock cmpxchg cs:qword_15A50EE20, rcx
.std:000000014FDD223A 0A
.std:000000014FDD2243 E9 B6 00 00 00                          jmp     loc_14FDD22FE
.std:000000014FDD2248                         ; ---------------------------------------------------------------------------
.std:000000014FDD2248
.std:000000014FDD2248                         loc_14FDD2248:                          ; CODE XREF: sub_14FDD11F0+1010↑j
.std:000000014FDD2248                                                                 ; sub_14FDD11F0+1019↑j
.std:000000014FDD2248 E8 F3 84 19 FF                          call    sub_14EF6A740
.std:000000014FDD224D 84 C0                                   test    al, al
.std:000000014FDD224F 0F 85 82 00 00 00                       jnz     loc_14FDD22D7
.std:000000014FDD2255 48 8D 4D D8                             lea     rcx, [rbp-28h]
.std:000000014FDD2259 E8 F2 F9 17 FF                          call    sub_14EF51C50
.std:000000014FDD225E 33 D2                                   xor     edx, edx
.std:000000014FDD2260 48 8D 4D 90                             lea     rcx, [rbp-70h]
.std:000000014FDD2264 41 B8 FF 00 00 00                       mov     r8d, 0FFh
.std:000000014FDD226A E8 41 62 58 F1                          call    sub_1413584B0
.std:000000014FDD226F 48 8D 15 3A A7 A2 FF                    lea     rdx, sub_14F7FC9B0
.std:000000014FDD2276 41 B1 01                                mov     r9b, 1
.std:000000014FDD2279 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD227C 48 89 51 10                             mov     [rcx+10h], rdx
.std:000000014FDD2280 48 8D 55 D8                             lea     rdx, [rbp-28h]
.std:000000014FDD2284 48 89 51 18                             mov     [rcx+18h], rdx
.std:000000014FDD2288 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD228B 44 8B 40 10                             mov     r8d, [rax+10h]
.std:000000014FDD228F 48 8B 50 08                             mov     rdx, [rax+8]
.std:000000014FDD2293 48 8B 59 28                             mov     rbx, [rcx+28h]
.std:000000014FDD2297 48 85 DB                                test    rbx, rbx
.std:000000014FDD229A 74 2B                                   jz      short loc_14FDD22C7
.std:000000014FDD229C F0 FF 43 48                             lock inc dword ptr [rbx+48h]
.std:000000014FDD22A0 E8 7B 0E 59 F1                          call    sub_141363120
.std:000000014FDD22A5 B8 FF FF FF FF                          mov     eax, 0FFFFFFFFh
.std:000000014FDD22AA F0 0F C1 43 48                          lock xadd [rbx+48h], eax
.std:000000014FDD22AF 83 F8 01                                cmp     eax, 1
.std:000000014FDD22B2 75 18                                   jnz     short loc_14FDD22CC
.std:000000014FDD22B4 48 8B CB                                mov     rcx, rbx
.std:000000014FDD22B7 E8 34 4E 15 FF                          call    sub_14EF270F0
.std:000000014FDD22BC 48 8D 4D D8                             lea     rcx, [rbp-28h]
.std:000000014FDD22C0 E8 4B 0A 18 FF                          call    sub_14EF52D10
.std:000000014FDD22C5 EB 37                                   jmp     short loc_14FDD22FE
.std:000000014FDD22C7                         ; ---------------------------------------------------------------------------
.std:000000014FDD22C7
.std:000000014FDD22C7                         loc_14FDD22C7:                          ; CODE XREF: sub_14FDD11F0+10AA↑j
.std:000000014FDD22C7 E8 54 0E 59 F1                          call    sub_141363120
.std:000000014FDD22CC
.std:000000014FDD22CC                         loc_14FDD22CC:                          ; CODE XREF: sub_14FDD11F0+10C2↑j
.std:000000014FDD22CC 48 8D 4D D8                             lea     rcx, [rbp-28h]
.std:000000014FDD22D0 E8 3B 0A 18 FF                          call    sub_14EF52D10
.std:000000014FDD22D5 EB 27                                   jmp     short loc_14FDD22FE
.std:000000014FDD22D7                         ; ---------------------------------------------------------------------------
.std:000000014FDD22D7
.std:000000014FDD22D7                         loc_14FDD22D7:                          ; CODE XREF: sub_14FDD11F0+105F↑j
.std:000000014FDD22D7 B9 18 00 00 00                          mov     ecx, 18h
.std:000000014FDD22DC E8 1F 38 04 F3                          call    sub_142E15B00
.std:000000014FDD22E1 48 85 C0                                test    rax, rax
.std:000000014FDD22E4 74 11                                   jz      short loc_14FDD22F7
.std:000000014FDD22E6 48 8B C8                                mov     rcx, rax
.std:000000014FDD22E9 E8 F2 0C A1 FF                          call    sub_14F7E2FE0
.std:000000014FDD22EE 48 89 05 2B CB 73 0A                    mov     cs:qword_15A50EE20, rax
.std:000000014FDD22F5 EB 07                                   jmp     short loc_14FDD22FE
.std:000000014FDD22F7                         ; ---------------------------------------------------------------------------
.std:000000014FDD22F7
.std:000000014FDD22F7                         loc_14FDD22F7:                          ; CODE XREF: sub_14FDD11F0+10F4↑j
.std:000000014FDD22F7 4C 89 35 22 CB 73 0A                    mov     cs:qword_15A50EE20, r14
.std:000000014FDD22FE
.std:000000014FDD22FE                         loc_14FDD22FE:                          ; CODE XREF: sub_14FDD11F0+1003↑j
.std:000000014FDD22FE                                                                 ; sub_14FDD11F0+1040↑j ...
.std:000000014FDD22FE 48 8B 05 1B CB 73 0A                    mov     rax, cs:qword_15A50EE20
.std:000000014FDD2305
.std:000000014FDD2305                         loc_14FDD2305:                          ; CODE XREF: sub_14FDD11F0+F03↑j
.std:000000014FDD2305                                                                 ; sub_14FDD11F0+F1D↑j ...
.std:000000014FDD2305 48 8B 48 10                             mov     rcx, [rax+10h]
.std:000000014FDD2309 48 89 8D 98 00 00 00                    mov     [rbp+98h], rcx
.std:000000014FDD2310 45 84 FF                                test    r15b, r15b
.std:000000014FDD2313 0F 84 26 01 00 00                       jz      loc_14FDD243F
.std:000000014FDD2319 48 8B 45 C8                             mov     rax, [rbp-38h]
.std:000000014FDD231D 33 D2                                   xor     edx, edx
.std:000000014FDD231F 45 8B 8D 48 2F 00 00                    mov     r9d, [r13+2F48h]
.std:000000014FDD2326 0F 57 C0                                xorps   xmm0, xmm0
.std:000000014FDD2329 45 8B 85 4C 2F 00 00                    mov     r8d, [r13+2F4Ch]
.std:000000014FDD2330 44 8B 90 E0 04 00 00                    mov     r10d, [rax+4E0h]
.std:000000014FDD2337 41 8B C1                                mov     eax, r9d
.std:000000014FDD233A 41 F7 F2                                div     r10d
.std:000000014FDD233D 33 D2                                   xor     edx, edx
.std:000000014FDD233F 8B C8                                   mov     ecx, eax
.std:000000014FDD2341 41 8B C0                                mov     eax, r8d
.std:000000014FDD2344 41 F7 F2                                div     r10d
.std:000000014FDD2347 F3 48 0F 2A C1                          cvtsi2ss xmm0, rcx
.std:000000014FDD234C 8B C8                                   mov     ecx, eax
.std:000000014FDD234E 33 D2                                   xor     edx, edx
.std:000000014FDD2350 41 8B 85 54 2F 00 00                    mov     eax, [r13+2F54h]
.std:000000014FDD2357 41 2B C0                                sub     eax, r8d
.std:000000014FDD235A 41 F7 F2                                div     r10d
.std:000000014FDD235D F3 44 0F 2C F8                          cvttss2si r15d, xmm0
.std:000000014FDD2362 33 D2                                   xor     edx, edx
.std:000000014FDD2364 0F 57 C0                                xorps   xmm0, xmm0
.std:000000014FDD2367 F3 48 0F 2A C1                          cvtsi2ss xmm0, rcx
.std:000000014FDD236C 8B C8                                   mov     ecx, eax
.std:000000014FDD236E 41 8B 85 50 2F 00 00                    mov     eax, [r13+2F50h]
.std:000000014FDD2375 41 2B C1                                sub     eax, r9d
.std:000000014FDD2378 41 F7 F2                                div     r10d
.std:000000014FDD237B F3 44 0F 2C E0                          cvttss2si r12d, xmm0
.std:000000014FDD2380 0F 57 C0                                xorps   xmm0, xmm0
.std:000000014FDD2383 F3 48 0F 2A C1                          cvtsi2ss xmm0, rcx
.std:000000014FDD2388 8B C8                                   mov     ecx, eax
.std:000000014FDD238A F3 0F 2C F0                             cvttss2si esi, xmm0
.std:000000014FDD238E 0F 57 C0                                xorps   xmm0, xmm0
.std:000000014FDD2391 F3 48 0F 2A C1                          cvtsi2ss xmm0, rcx
.std:000000014FDD2396 41 03 F4                                add     esi, r12d
.std:000000014FDD2399 F3 44 0F 2C F0                          cvttss2si r14d, xmm0
.std:000000014FDD239E 45 03 F7                                add     r14d, r15d
.std:000000014FDD23A1 80 3D 70 E2 81 0A 00                    cmp     cs:byte_15A5F0618, 0
.std:000000014FDD23A8 74 33                                   jz      short loc_14FDD23DD
.std:000000014FDD23AA 48 8B 44 24 60                          mov     rax, [rsp+60h]
.std:000000014FDD23AF 0F 57 DB                                xorps   xmm3, xmm3
.std:000000014FDD23B2 F3 44 0F 11 4C 24 30                    movss   dword ptr [rsp+30h], xmm9
.std:000000014FDD23B9 45 8B C4                                mov     r8d, r12d
.std:000000014FDD23BC 89 74 24 28                             mov     [rsp+28h], esi
.std:000000014FDD23C0 41 8B D7                                mov     edx, r15d
.std:000000014FDD23C3 44 89 74 24 20                          mov     [rsp+20h], r14d
.std:000000014FDD23C8 48 8B 48 20                             mov     rcx, [rax+20h]
.std:000000014FDD23CC 48 8B 01                                mov     rax, [rcx]
.std:000000014FDD23CF FF 90 08 02 00 00                       call    qword ptr [rax+208h]
.std:000000014FDD23D5 45 33 E4                                xor     r12d, r12d
.std:000000014FDD23D8 E9 3D 01 00 00                          jmp     loc_14FDD251A
.std:000000014FDD23DD                         ; ---------------------------------------------------------------------------
.std:000000014FDD23DD
.std:000000014FDD23DD                         loc_14FDD23DD:                          ; CODE XREF: sub_14FDD11F0+11B8↑j
.std:000000014FDD23DD 48 8B 54 24 60                          mov     rdx, [rsp+60h]
.std:000000014FDD23E2 48 8B 4A 38                             mov     rcx, [rdx+38h]
.std:000000014FDD23E6 48 8D 5A 38                             lea     rbx, [rdx+38h]
.std:000000014FDD23EA 48 83 C1 07                             add     rcx, 7
.std:000000014FDD23EE 48 83 E1 F8                             and     rcx, 0FFFFFFFFFFFFFFF8h
.std:000000014FDD23F2 48 8D 41 28                             lea     rax, [rcx+28h]
.std:000000014FDD23F6 48 3B 43 08                             cmp     rax, [rbx+8]
.std:000000014FDD23FA 76 21                                   jbe     short loc_14FDD241D
.std:000000014FDD23FC BA 30 00 00 00                          mov     edx, 30h ; '0'
.std:000000014FDD2401 48 8B CB                                mov     rcx, rbx
.std:000000014FDD2404 E8 67 74 25 FF                          call    sub_14F029870
.std:000000014FDD2409 48 8B 0B                                mov     rcx, [rbx]
.std:000000014FDD240C 48 8B 54 24 60                          mov     rdx, [rsp+60h]
.std:000000014FDD2411 48 83 C1 07                             add     rcx, 7
.std:000000014FDD2415 48 83 E1 F8                             and     rcx, 0FFFFFFFFFFFFFFF8h
.std:000000014FDD2419 48 8D 41 28                             lea     rax, [rcx+28h]
.std:000000014FDD241D
.std:000000014FDD241D                         loc_14FDD241D:                          ; CODE XREF: sub_14FDD11F0+120A↑j
.std:000000014FDD241D 48 89 03                                mov     [rbx], rax
.std:000000014FDD2420 48 8B 42 08                             mov     rax, [rdx+8]
.std:000000014FDD2424 FF 42 14                                inc     dword ptr [rdx+14h]
.std:000000014FDD2427 48 89 08                                mov     [rax], rcx
.std:000000014FDD242A 48 8D 41 08                             lea     rax, [rcx+8]
.std:000000014FDD242E 48 89 42 08                             mov     [rdx+8], rax
.std:000000014FDD2432 44 89 79 10                             mov     [rcx+10h], r15d
.std:000000014FDD2436 44 89 61 14                             mov     [rcx+14h], r12d
.std:000000014FDD243A E9 B5 00 00 00                          jmp     loc_14FDD24F4
.std:000000014FDD243F                         ; ---------------------------------------------------------------------------
.std:000000014FDD243F
.std:000000014FDD243F                         loc_14FDD243F:                          ; CODE XREF: sub_14FDD11F0+1123↑j
.std:000000014FDD243F 80 3D D2 E1 81 0A 00                    cmp     cs:byte_15A5F0618, 0
.std:000000014FDD2446 41 8B B5 54 2F 00 00                    mov     esi, [r13+2F54h]
.std:000000014FDD244D 45 8B B5 50 2F 00 00                    mov     r14d, [r13+2F50h]
.std:000000014FDD2454 45 8B BD 4C 2F 00 00                    mov     r15d, [r13+2F4Ch]
.std:000000014FDD245B 45 8B A5 48 2F 00 00                    mov     r12d, [r13+2F48h]
.std:000000014FDD2462 74 33                                   jz      short loc_14FDD2497
.std:000000014FDD2464 48 8B 44 24 60                          mov     rax, [rsp+60h]
.std:000000014FDD2469 0F 57 DB                                xorps   xmm3, xmm3
.std:000000014FDD246C F3 44 0F 11 4C 24 30                    movss   dword ptr [rsp+30h], xmm9
.std:000000014FDD2473 45 8B C7                                mov     r8d, r15d
.std:000000014FDD2476 89 74 24 28                             mov     [rsp+28h], esi
.std:000000014FDD247A 41 8B D4                                mov     edx, r12d
.std:000000014FDD247D 44 89 74 24 20                          mov     [rsp+20h], r14d
.std:000000014FDD2482 48 8B 48 20                             mov     rcx, [rax+20h]
.std:000000014FDD2486 48 8B 01                                mov     rax, [rcx]
.std:000000014FDD2489 FF 90 08 02 00 00                       call    qword ptr [rax+208h]
.std:000000014FDD248F 45 33 E4                                xor     r12d, r12d
.std:000000014FDD2492 E9 83 00 00 00                          jmp     loc_14FDD251A
.std:000000014FDD2497                         ; ---------------------------------------------------------------------------
.std:000000014FDD2497
.std:000000014FDD2497                         loc_14FDD2497:                          ; CODE XREF: sub_14FDD11F0+1272↑j
.std:000000014FDD2497 48 8B 54 24 60                          mov     rdx, [rsp+60h]
.std:000000014FDD249C 48 8B 4A 38                             mov     rcx, [rdx+38h]
.std:000000014FDD24A0 48 8D 5A 38                             lea     rbx, [rdx+38h]
.std:000000014FDD24A4 48 83 C1 07                             add     rcx, 7
.std:000000014FDD24A8 48 83 E1 F8                             and     rcx, 0FFFFFFFFFFFFFFF8h
.std:000000014FDD24AC 48 8D 41 28                             lea     rax, [rcx+28h]
.std:000000014FDD24B0 48 3B 43 08                             cmp     rax, [rbx+8]
.std:000000014FDD24B4 76 21                                   jbe     short loc_14FDD24D7
.std:000000014FDD24B6 BA 30 00 00 00                          mov     edx, 30h ; '0'
.std:000000014FDD24BB 48 8B CB                                mov     rcx, rbx
.std:000000014FDD24BE E8 AD 73 25 FF                          call    sub_14F029870
.std:000000014FDD24C3 48 8B 0B                                mov     rcx, [rbx]
.std:000000014FDD24C6 48 8B 54 24 60                          mov     rdx, [rsp+60h]
.std:000000014FDD24CB 48 83 C1 07                             add     rcx, 7
.std:000000014FDD24CF 48 83 E1 F8                             and     rcx, 0FFFFFFFFFFFFFFF8h
.std:000000014FDD24D3 48 8D 41 28                             lea     rax, [rcx+28h]
.std:000000014FDD24D7
.std:000000014FDD24D7                         loc_14FDD24D7:                          ; CODE XREF: sub_14FDD11F0+12C4↑j
.std:000000014FDD24D7 48 89 03                                mov     [rbx], rax
.std:000000014FDD24DA 48 8B 42 08                             mov     rax, [rdx+8]
.std:000000014FDD24DE FF 42 14                                inc     dword ptr [rdx+14h]
.std:000000014FDD24E1 48 89 08                                mov     [rax], rcx
.std:000000014FDD24E4 48 8D 41 08                             lea     rax, [rcx+8]
.std:000000014FDD24E8 48 89 42 08                             mov     [rdx+8], rax
.std:000000014FDD24EC 44 89 61 10                             mov     [rcx+10h], r12d
.std:000000014FDD24F0 44 89 79 14                             mov     [rcx+14h], r15d
.std:000000014FDD24F4
.std:000000014FDD24F4                         loc_14FDD24F4:                          ; CODE XREF: sub_14FDD11F0+124A↑j
.std:000000014FDD24F4 48 C7 00 00 00 00 00                    mov     qword ptr [rax], 0
.std:000000014FDD24FB 45 33 E4                                xor     r12d, r12d
.std:000000014FDD24FE C7 41 24 00 00 80 3F                    mov     dword ptr [rcx+24h], 3F800000h
.std:000000014FDD2505 48 8D 05 8C 68 8C 03                    lea     rax, off_153698D98
.std:000000014FDD250C 89 71 20                                mov     [rcx+20h], esi
.std:000000014FDD250F 44 89 71 1C                             mov     [rcx+1Ch], r14d
.std:000000014FDD2513 44 89 61 18                             mov     [rcx+18h], r12d
.std:000000014FDD2517 48 89 01                                mov     [rcx], rax
.std:000000014FDD251A
.std:000000014FDD251A                         loc_14FDD251A:                          ; CODE XREF: sub_14FDD11F0+11E8↑j
.std:000000014FDD251A                                                                 ; sub_14FDD11F0+12A2↑j
.std:000000014FDD251A 4C 8B 74 24 70                          mov     r14, [rsp+70h]
.std:000000014FDD251F 41 80 BE 34 04 00 00 00                 cmp     byte ptr [r14+434h], 0
.std:000000014FDD2527 0F 85 94 01 00 00                       jnz     loc_14FDD26C1
.std:000000014FDD252D 41 83 BE 08 04 00 00 03                 cmp     dword ptr [r14+408h], 3
.std:000000014FDD2535 0F 8C 86 01 00 00                       jl      loc_14FDD26C1
.std:000000014FDD253B 80 3D E6 CC 6D 0A 00                    cmp     cs:byte_15A4AF228, 0
.std:000000014FDD2542 48 8B 1D 07 2E 7D 0A                    mov     rbx, cs:qword_15A5A5350
.std:000000014FDD2549 74 14                                   jz      short loc_14FDD255F
.std:000000014FDD254B FF 15 F7 3F 0A 03                       call    cs:qword_152E76548
.std:000000014FDD2551 3B 05 C1 CC 6D 0A                       cmp     eax, cs:dword_15A4AF218
.std:000000014FDD2557 49 8B CC                                mov     rcx, r12
.std:000000014FDD255A 0F 95 C1                                setnz   cl
.std:000000014FDD255D EB 03                                   jmp     short loc_14FDD2562
.std:000000014FDD255F                         ; ---------------------------------------------------------------------------
.std:000000014FDD255F
.std:000000014FDD255F                         loc_14FDD255F:                          ; CODE XREF: sub_14FDD11F0+1359↑j
.std:000000014FDD255F 49 8B CC                                mov     rcx, r12
.std:000000014FDD2562
.std:000000014FDD2562                         loc_14FDD2562:                          ; CODE XREF: sub_14FDD11F0+136D↑j
.std:000000014FDD2562 83 3C 8B 00                             cmp     dword ptr [rbx+rcx*4], 0
.std:000000014FDD2566 0F 8E 55 01 00 00                       jle     loc_14FDD26C1
.std:000000014FDD256C 4C 89 64 24 50                          mov     [rsp+50h], r12
.std:000000014FDD2571 E8 EA AD 23 FF                          call    sub_14F00D360
.std:000000014FDD2576 4C 8B 74 24 60                          mov     r14, [rsp+60h]
.std:000000014FDD257B 84 C0                                   test    al, al
.std:000000014FDD257D 74 17                                   jz      short loc_14FDD2596
.std:000000014FDD257F 4C 8D 0D CA 87 67 07                    lea     r9, aLightocclusion ; "LightOcclusionQueries"
.std:000000014FDD2586 45 8B C4                                mov     r8d, r12d
.std:000000014FDD2589 49 8B D6                                mov     rdx, r14
.std:000000014FDD258C 48 8D 4C 24 50                          lea     rcx, [rsp+50h]
.std:000000014FDD2591 E8 8A 3F 4C 00                          call    sub_150296520
.std:000000014FDD2596
.std:000000014FDD2596                         loc_14FDD2596:                          ; CODE XREF: sub_14FDD11F0+138D↑j
.std:000000014FDD2596 49 8B B5 D0 BD 00 00                    mov     rsi, [r13+0BDD0h]
.std:000000014FDD259D 48 8D 05 AC 76 7D 0A                    lea     rax, off_15A5A9C50
.std:000000014FDD25A4 4C 8D 45 30                             lea     r8, [rbp+30h]
.std:000000014FDD25A8 48 89 45 30                             mov     [rbp+30h], rax
.std:000000014FDD25AC 48 8D 55 F8                             lea     rdx, [rbp-8]
.std:000000014FDD25B0 44 89 65 38                             mov     [rbp+38h], r12d
.std:000000014FDD25B4 48 8D 4E 30                             lea     rcx, [rsi+30h]
.std:000000014FDD25B8 E8 A3 A8 3D F1                          call    sub_1411ACE60
.std:000000014FDD25BD 48 63 5D F8                             movsxd  rbx, dword ptr [rbp-8]
.std:000000014FDD25C1 83 FB FF                                cmp     ebx, 0FFFFFFFFh
.std:000000014FDD25C4 74 16                                   jz      short loc_14FDD25DC
.std:000000014FDD25C6 48 8D 4E 30                             lea     rcx, [rsi+30h]
.std:000000014FDD25CA FF 15 B0 B4 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD25D0 48 8B CB                                mov     rcx, rbx
.std:000000014FDD25D3 48 C1 E1 05                             shl     rcx, 5
.std:000000014FDD25D7 48 03 C1                                add     rax, rcx
.std:000000014FDD25DA EB 03                                   jmp     short loc_14FDD25DF
.std:000000014FDD25DC                         ; ---------------------------------------------------------------------------
.std:000000014FDD25DC
.std:000000014FDD25DC                         loc_14FDD25DC:                          ; CODE XREF: sub_14FDD11F0+13D4↑j
.std:000000014FDD25DC 49 8B C4                                mov     rax, r12
.std:000000014FDD25DF
.std:000000014FDD25DF                         loc_14FDD25DF:                          ; CODE XREF: sub_14FDD11F0+13EA↑j
.std:000000014FDD25DF 48 85 C0                                test    rax, rax
.std:000000014FDD25E2 48 8D 58 10                             lea     rbx, [rax+10h]
.std:000000014FDD25E6 49 0F 44 DC                             cmovz   rbx, r12
.std:000000014FDD25EA 48 8B 1B                                mov     rbx, [rbx]
.std:000000014FDD25ED E8 FE DF 4D 00                          call    sub_1502B05F0
.std:000000014FDD25F2 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD25F5 48 89 4D 60                             mov     [rbp+60h], rcx
.std:000000014FDD25F9 48 85 DB                                test    rbx, rbx
.std:000000014FDD25FC 74 1C                                   jz      short loc_14FDD261A
.std:000000014FDD25FE 48 8B 73 40                             mov     rsi, [rbx+40h]
.std:000000014FDD2602 83 7E 08 FF                             cmp     dword ptr [rsi+8], 0FFFFFFFFh
.std:000000014FDD2606 75 08                                   jnz     short loc_14FDD2610
.std:000000014FDD2608 48 8B CE                                mov     rcx, rsi
.std:000000014FDD260B E8 00 F8 4D 00                          call    sub_1502B1E10
.std:000000014FDD2610
.std:000000014FDD2610                         loc_14FDD2610:                          ; CODE XREF: sub_14FDD11F0+1416↑j
.std:000000014FDD2610 48 8B 46 48                             mov     rax, [rsi+48h]
.std:000000014FDD2614 48 89 45 68                             mov     [rbp+68h], rax
.std:000000014FDD2618 EB 04                                   jmp     short loc_14FDD261E
.std:000000014FDD261A                         ; ---------------------------------------------------------------------------
.std:000000014FDD261A
.std:000000014FDD261A                         loc_14FDD261A:                          ; CODE XREF: sub_14FDD11F0+140C↑j
.std:000000014FDD261A 4C 89 65 68                             mov     [rbp+68h], r12
.std:000000014FDD261E
.std:000000014FDD261E                         loc_14FDD261E:                          ; CODE XREF: sub_14FDD11F0+1428↑j
.std:000000014FDD261E 41 B9 02 00 00 00                       mov     r9d, 2
.std:000000014FDD2624 4C 8D 45 60                             lea     r8, [rbp+60h]
.std:000000014FDD2628 49 8B D6                                mov     rdx, r14
.std:000000014FDD262B 48 8D 4D 50                             lea     rcx, [rbp+50h]
.std:000000014FDD262F E8 8C 0E 49 00                          call    sub_1502634C0
.std:000000014FDD2634 48 8B 45 80                             mov     rax, [rbp-80h]
.std:000000014FDD2638 45 8B FC                                mov     r15d, r12d
.std:000000014FDD263B 83 78 78 00                             cmp     dword ptr [rax+78h], 0
.std:000000014FDD263F 7E 69                                   jle     short loc_14FDD26AA
.std:000000014FDD2641 4C 8D 60 70                             lea     r12, [rax+70h]
.std:000000014FDD2645 48 83 C0 20                             add     rax, 20h ; ' '
.std:000000014FDD2649 48 89 44 24 48                          mov     [rsp+48h], rax
.std:000000014FDD264E 33 C0                                   xor     eax, eax
.std:000000014FDD2650 48 8B 7C 24 48                          mov     rdi, [rsp+48h]
.std:000000014FDD2655 44 8B F0                                mov     r14d, eax
.std:000000014FDD2658 0F 1F 84 00 00 00 00 00                 nop     dword ptr [rax+rax+00000000h]
.std:000000014FDD2660
.std:000000014FDD2660                         loc_14FDD2660:                          ; CODE XREF: sub_14FDD11F0+14B1↓j
.std:000000014FDD2660 49 8B CC                                mov     rcx, r12
.std:000000014FDD2663 FF 15 17 B4 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD2669 48 8B CF                                mov     rcx, rdi
.std:000000014FDD266C 48 8B F0                                mov     rsi, rax
.std:000000014FDD266F FF 15 0B B4 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD2675 4A 8B 0C 36                             mov     rcx, [rsi+r14]
.std:000000014FDD2679 4C 8B CB                                mov     r9, rbx
.std:000000014FDD267C 48 89 4C 24 20                          mov     [rsp+20h], rcx
.std:000000014FDD2681 49 8B D5                                mov     rdx, r13
.std:000000014FDD2684 48 8B 4C 24 60                          mov     rcx, [rsp+60h]
.std:000000014FDD2689 4E 8B 04 30                             mov     r8, [rax+r14]
.std:000000014FDD268D E8 6E 48 00 00                          call    sub_14FDD6F00
.std:000000014FDD2692 48 8B 45 80                             mov     rax, [rbp-80h]
.std:000000014FDD2696 4D 8D 76 08                             lea     r14, [r14+8]
.std:000000014FDD269A 41 FF C7                                inc     r15d
.std:000000014FDD269D 44 3B 78 78                             cmp     r15d, [rax+78h]
.std:000000014FDD26A1 7C BD                                   jl      short loc_14FDD2660
.std:000000014FDD26A3 8B 7C 24 58                             mov     edi, [rsp+58h]
.std:000000014FDD26A7 45 33 E4                                xor     r12d, r12d
.std:000000014FDD26AA
.std:000000014FDD26AA                         loc_14FDD26AA:                          ; CODE XREF: sub_14FDD11F0+144F↑j
.std:000000014FDD26AA 48 83 7C 24 50 00                       cmp     qword ptr [rsp+50h], 0
.std:000000014FDD26B0 74 0A                                   jz      short loc_14FDD26BC
.std:000000014FDD26B2 48 8D 4C 24 50                          lea     rcx, [rsp+50h]
.std:000000014FDD26B7 E8 B4 4A 4C 00                          call    sub_150297170
.std:000000014FDD26BC
.std:000000014FDD26BC                         loc_14FDD26BC:                          ; CODE XREF: sub_14FDD11F0+14C0↑j
.std:000000014FDD26BC 4C 8B 74 24 70                          mov     r14, [rsp+70h]
.std:000000014FDD26C1
.std:000000014FDD26C1                         loc_14FDD26C1:                          ; CODE XREF: sub_14FDD11F0+1337↑j
.std:000000014FDD26C1                                                                 ; sub_14FDD11F0+1345↑j ...
.std:000000014FDD26C1 49 8B B5 D0 BD 00 00                    mov     rsi, [r13+0BDD0h]
.std:000000014FDD26C8 48 8D 05 E1 76 7D 0A                    lea     rax, off_15A5A9DB0
.std:000000014FDD26CF 4C 8D 45 40                             lea     r8, [rbp+40h]
.std:000000014FDD26D3 48 89 45 40                             mov     [rbp+40h], rax
.std:000000014FDD26D7 48 8D 55 FC                             lea     rdx, [rbp-4]
.std:000000014FDD26DB 44 89 65 48                             mov     [rbp+48h], r12d
.std:000000014FDD26DF 48 8D 4E 30                             lea     rcx, [rsi+30h]
.std:000000014FDD26E3 E8 78 A7 3D F1                          call    sub_1411ACE60
.std:000000014FDD26E8 48 63 5D FC                             movsxd  rbx, dword ptr [rbp-4]
.std:000000014FDD26EC 83 FB FF                                cmp     ebx, 0FFFFFFFFh
.std:000000014FDD26EF 74 16                                   jz      short loc_14FDD2707
.std:000000014FDD26F1 48 8D 4E 30                             lea     rcx, [rsi+30h]
.std:000000014FDD26F5 FF 15 85 B3 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD26FB 48 8B CB                                mov     rcx, rbx
.std:000000014FDD26FE 48 C1 E1 05                             shl     rcx, 5
.std:000000014FDD2702 48 03 C1                                add     rax, rcx
.std:000000014FDD2705 EB 03                                   jmp     short loc_14FDD270A
.std:000000014FDD2707                         ; ---------------------------------------------------------------------------
.std:000000014FDD2707
.std:000000014FDD2707                         loc_14FDD2707:                          ; CODE XREF: sub_14FDD11F0+14FF↑j
.std:000000014FDD2707 49 8B C4                                mov     rax, r12
.std:000000014FDD270A
.std:000000014FDD270A                         loc_14FDD270A:                          ; CODE XREF: sub_14FDD11F0+1515↑j
.std:000000014FDD270A 48 85 C0                                test    rax, rax
.std:000000014FDD270D 48 8D 58 10                             lea     rbx, [rax+10h]
.std:000000014FDD2711 49 0F 44 DC                             cmovz   rbx, r12
.std:000000014FDD2715 48 8B 1B                                mov     rbx, [rbx]
.std:000000014FDD2718 48 89 5D 90                             mov     [rbp-70h], rbx
.std:000000014FDD271C E8 BF DE 4D 00                          call    sub_1502B05E0
.std:000000014FDD2721 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD2724 48 89 4D 60                             mov     [rbp+60h], rcx
.std:000000014FDD2728 48 85 DB                                test    rbx, rbx
.std:000000014FDD272B 74 1C                                   jz      short loc_14FDD2749
.std:000000014FDD272D 48 8B 73 40                             mov     rsi, [rbx+40h]
.std:000000014FDD2731 83 7E 08 FF                             cmp     dword ptr [rsi+8], 0FFFFFFFFh
.std:000000014FDD2735 75 08                                   jnz     short loc_14FDD273F
.std:000000014FDD2737 48 8B CE                                mov     rcx, rsi
.std:000000014FDD273A E8 D1 F6 4D 00                          call    sub_1502B1E10
.std:000000014FDD273F
.std:000000014FDD273F                         loc_14FDD273F:                          ; CODE XREF: sub_14FDD11F0+1545↑j
.std:000000014FDD273F 48 8B 46 48                             mov     rax, [rsi+48h]
.std:000000014FDD2743 48 89 45 68                             mov     [rbp+68h], rax
.std:000000014FDD2747 EB 04                                   jmp     short loc_14FDD274D
.std:000000014FDD2749                         ; ---------------------------------------------------------------------------
.std:000000014FDD2749
.std:000000014FDD2749                         loc_14FDD2749:                          ; CODE XREF: sub_14FDD11F0+153B↑j
.std:000000014FDD2749 4C 89 65 68                             mov     [rbp+68h], r12
.std:000000014FDD274D
.std:000000014FDD274D                         loc_14FDD274D:                          ; CODE XREF: sub_14FDD11F0+1557↑j
.std:000000014FDD274D 4C 8B 64 24 60                          mov     r12, [rsp+60h]
.std:000000014FDD2752 4C 8D 45 60                             lea     r8, [rbp+60h]
.std:000000014FDD2756 49 8B D4                                mov     rdx, r12
.std:000000014FDD2759 48 8D 4D 58                             lea     rcx, [rbp+58h]
.std:000000014FDD275D 41 B9 02 00 00 00                       mov     r9d, 2
.std:000000014FDD2763 E8 58 0D 49 00                          call    sub_1502634C0
.std:000000014FDD2768 41 83 BE 08 04 00 00 01                 cmp     dword ptr [r14+408h], 1
.std:000000014FDD2770 0F 8E 8E 00 00 00                       jle     loc_14FDD2804
.std:000000014FDD2776 33 F6                                   xor     esi, esi
.std:000000014FDD2778 48 89 74 24 50                          mov     [rsp+50h], rsi
.std:000000014FDD277D E8 DE AB 23 FF                          call    sub_14F00D360
.std:000000014FDD2782 84 C0                                   test    al, al
.std:000000014FDD2784 74 17                                   jz      short loc_14FDD279D
.std:000000014FDD2786 4C 8D 0D F3 85 67 07                    lea     r9, aPointlightshad ; "PointLightShadowFrustumQueries"
.std:000000014FDD278D 44 8B C6                                mov     r8d, esi
.std:000000014FDD2790 49 8B D4                                mov     rdx, r12
.std:000000014FDD2793 48 8D 4C 24 50                          lea     rcx, [rsp+50h]
.std:000000014FDD2798 E8 83 3D 4C 00                          call    sub_150296520
.std:000000014FDD279D
.std:000000014FDD279D                         loc_14FDD279D:                          ; CODE XREF: sub_14FDD11F0+1594↑j
.std:000000014FDD279D 48 8B 45 80                             mov     rax, [rbp-80h]
.std:000000014FDD27A1 44 8B FE                                mov     r15d, esi
.std:000000014FDD27A4 39 70 58                                cmp     [rax+58h], esi
.std:000000014FDD27A7 7E 49                                   jle     short loc_14FDD27F2
.std:000000014FDD27A9 48 8B F8                                mov     rdi, rax
.std:000000014FDD27AC 4C 8B F6                                mov     r14, rsi
.std:000000014FDD27AF 90                                      nop
.std:000000014FDD27B0
.std:000000014FDD27B0                         loc_14FDD27B0:                          ; CODE XREF: sub_14FDD11F0+15FC↓j
.std:000000014FDD27B0 48 8B CF                                mov     rcx, rdi
.std:000000014FDD27B3 FF 15 C7 B2 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD27B9 48 8D 4F 50                             lea     rcx, [rdi+50h]
.std:000000014FDD27BD 48 8B F0                                mov     rsi, rax
.std:000000014FDD27C0 FF 15 BA B2 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD27C6 4D 8B 04 36                             mov     r8, [r14+rsi]
.std:000000014FDD27CA 4C 8B CB                                mov     r9, rbx
.std:000000014FDD27CD 49 8B D5                                mov     rdx, r13
.std:000000014FDD27D0 4A 8B 0C 30                             mov     rcx, [rax+r14]
.std:000000014FDD27D4 48 89 4C 24 20                          mov     [rsp+20h], rcx
.std:000000014FDD27D9 49 8B CC                                mov     rcx, r12
.std:000000014FDD27DC E8 DF 4B 00 00                          call    sub_14FDD73C0
.std:000000014FDD27E1 41 FF C7                                inc     r15d
.std:000000014FDD27E4 4D 8D 76 08                             lea     r14, [r14+8]
.std:000000014FDD27E8 44 3B 7F 58                             cmp     r15d, [rdi+58h]
.std:000000014FDD27EC 7C C2                                   jl      short loc_14FDD27B0
.std:000000014FDD27EE 8B 7C 24 58                             mov     edi, [rsp+58h]
.std:000000014FDD27F2
.std:000000014FDD27F2                         loc_14FDD27F2:                          ; CODE XREF: sub_14FDD11F0+15B7↑j
.std:000000014FDD27F2 48 83 7C 24 50 00                       cmp     qword ptr [rsp+50h], 0
.std:000000014FDD27F8 74 0A                                   jz      short loc_14FDD2804
.std:000000014FDD27FA 48 8D 4C 24 50                          lea     rcx, [rsp+50h]
.std:000000014FDD27FF E8 6C 49 4C 00                          call    sub_150297170
.std:000000014FDD2804
.std:000000014FDD2804                         loc_14FDD2804:                          ; CODE XREF: sub_14FDD11F0+1580↑j
.std:000000014FDD2804                                                                 ; sub_14FDD11F0+1608↑j
.std:000000014FDD2804 4C 8B 7D 80                             mov     r15, [rbp-80h]
.std:000000014FDD2808 41 8B 47 68                             mov     eax, [r15+68h]
.std:000000014FDD280C 41 8B 97 98 00 00 00                    mov     edx, [r15+98h]
.std:000000014FDD2813 41 03 97 88 00 00 00                    add     edx, [r15+88h]
.std:000000014FDD281A 8D 0C 40                                lea     ecx, [rax+rax*2]
.std:000000014FDD281D 03 C9                                   add     ecx, ecx
.std:000000014FDD281F 44 8D 04 D1                             lea     r8d, [rcx+rdx*8]
.std:000000014FDD2823 45 85 C0                                test    r8d, r8d
.std:000000014FDD2826 0F 84 D7 07 00 00                       jz      loc_14FDD3003
.std:000000014FDD282C 8B 0D BE 42 9D 09                       mov     ecx, cs:dword_1597A6AF0
.std:000000014FDD2832 43 8D 34 40                             lea     esi, [r8+r8*2]
.std:000000014FDD2836 33 D2                                   xor     edx, edx
.std:000000014FDD2838 C1 E6 02                                shl     esi, 2
.std:000000014FDD283B 88 95 B8 01 00 00                       mov     [rbp+1B8h], dl
.std:000000014FDD2841 4C 8D 05 E0 DD 81 0A                    lea     r8, unk_15A5F0628
.std:000000014FDD2848 89 95 BC 01 00 00                       mov     [rbp+1BCh], edx
.std:000000014FDD284E 0F 57 C0                                xorps   xmm0, xmm0
.std:000000014FDD2851 66 89 95 C0 01 00 00                    mov     [rbp+1C0h], dx
.std:000000014FDD2858 44 8B E2                                mov     r12d, edx
.std:000000014FDD285B 88 95 C2 01 00 00                       mov     [rbp+1C2h], dl
.std:000000014FDD2861 41 BE 01 00 00 00                       mov     r14d, 1
.std:000000014FDD2867 F3 0F 7F 85 90 01 00 00                 movdqu  xmmword ptr [rbp+190h], xmm0
.std:000000014FDD286F 89 54 24 50                             mov     [rsp+50h], edx
.std:000000014FDD2873 41 8B C6                                mov     eax, r14d
.std:000000014FDD2876 0F 10 05 C3 3D 4C 07                    movups  xmm0, cs:xmmword_157296640
.std:000000014FDD287D D3 E0                                   shl     eax, cl
.std:000000014FDD287F 48 8D 95 90 01 00 00                    lea     rdx, [rbp+190h]
.std:000000014FDD2886 48 8B 0D 6B 46 82 0A                    mov     rcx, cs:qword_15A5F6EF8
.std:000000014FDD288D FF C8                                   dec     eax
.std:000000014FDD288F 48 89 54 24 28                          mov     [rsp+28h], rdx
.std:000000014FDD2894 44 8B CE                                mov     r9d, esi
.std:000000014FDD2897 44 89 B5 A0 01 00 00                    mov     [rbp+1A0h], r14d
.std:000000014FDD289E 48 8D 54 24 68                          lea     rdx, [rsp+68h]
.std:000000014FDD28A3 0F 11 85 A4 01 00 00                    movups  xmmword ptr [rbp+1A4h], xmm0
.std:000000014FDD28AA 89 85 B4 01 00 00                       mov     [rbp+1B4h], eax
.std:000000014FDD28B0 48 8B 01                                mov     rax, [rcx]
.std:000000014FDD28B3 C7 44 24 20 04 00 00 00                 mov     dword ptr [rsp+20h], 4
.std:000000014FDD28BB FF 90 68 05 00 00                       call    qword ptr [rax+568h]
.std:000000014FDD28C1 48 8B 0D 30 46 82 0A                    mov     rcx, cs:qword_15A5F6EF8
.std:000000014FDD28C8 48 8D 15 59 DD 81 0A                    lea     rdx, unk_15A5F0628
.std:000000014FDD28CF 4C 8B 44 24 68                          mov     r8, [rsp+68h]
.std:000000014FDD28D4 45 33 C9                                xor     r9d, r9d
.std:000000014FDD28D7 44 89 74 24 28                          mov     [rsp+28h], r14d
.std:000000014FDD28DC 89 74 24 20                             mov     [rsp+20h], esi
.std:000000014FDD28E0 48 8B 01                                mov     rax, [rcx]
.std:000000014FDD28E3 FF 90 98 01 00 00                       call    qword ptr [rax+198h]
.std:000000014FDD28E9 49 8D 77 10                             lea     rsi, [r15+10h]
.std:000000014FDD28ED 4C 8B F0                                mov     r14, rax
.std:000000014FDD28F0 48 8B CE                                mov     rcx, rsi
.std:000000014FDD28F3 FF 15 87 B1 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD28F9 48 8B CE                                mov     rcx, rsi
.std:000000014FDD28FC 4C 8B F8                                mov     r15, rax
.std:000000014FDD28FF FF 15 7B B1 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD2905 48 63 4E 08                             movsxd  rcx, dword ptr [rsi+8]
.std:000000014FDD2909 48 8D 34 C8                             lea     rsi, [rax+rcx*8]
.std:000000014FDD290D 4C 3B FE                                cmp     r15, rsi
.std:000000014FDD2910 74 21                                   jz      short loc_14FDD2933
.std:000000014FDD2912
.std:000000014FDD2912                         loc_14FDD2912:                          ; CODE XREF: sub_14FDD11F0+173C↓j
.std:000000014FDD2912 4D 8B 0F                                mov     r9, [r15]
.std:000000014FDD2915 48 8D 4C 24 50                          lea     rcx, [rsp+50h]
.std:000000014FDD291A 4D 8B C5                                mov     r8, r13
.std:000000014FDD291D 49 8B D6                                mov     rdx, r14
.std:000000014FDD2920 E8 FB 90 00 00                          call    sub_14FDDBA20
.std:000000014FDD2925 49 83 C7 08                             add     r15, 8
.std:000000014FDD2929 4C 3B FE                                cmp     r15, rsi
.std:000000014FDD292C 75 E4                                   jnz     short loc_14FDD2912
.std:000000014FDD292E 44 8B 64 24 50                          mov     r12d, [rsp+50h]
.std:000000014FDD2933
.std:000000014FDD2933                         loc_14FDD2933:                          ; CODE XREF: sub_14FDD11F0+1720↑j
.std:000000014FDD2933 48 8B 75 80                             mov     rsi, [rbp-80h]
.std:000000014FDD2937 48 8D 4E 30                             lea     rcx, [rsi+30h]
.std:000000014FDD293B FF 15 3F B1 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD2941 48 8D 4E 30                             lea     rcx, [rsi+30h]
.std:000000014FDD2945 4C 8B F8                                mov     r15, rax
.std:000000014FDD2948 FF 15 32 B1 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD294E 48 63 4E 38                             movsxd  rcx, dword ptr [rsi+38h]
.std:000000014FDD2952 48 8D 34 C8                             lea     rsi, [rax+rcx*8]
.std:000000014FDD2956 4C 3B FE                                cmp     r15, rsi
.std:000000014FDD2959 74 26                                   jz      short loc_14FDD2981
.std:000000014FDD295B 0F 1F 44 00 00                          nop     dword ptr [rax+rax+00h]
.std:000000014FDD2960
.std:000000014FDD2960                         loc_14FDD2960:                          ; CODE XREF: sub_14FDD11F0+178A↓j
.std:000000014FDD2960 4D 8B 0F                                mov     r9, [r15]
.std:000000014FDD2963 48 8D 4C 24 50                          lea     rcx, [rsp+50h]
.std:000000014FDD2968 4D 8B C5                                mov     r8, r13
.std:000000014FDD296B 49 8B D6                                mov     rdx, r14
.std:000000014FDD296E E8 FD 95 00 00                          call    sub_14FDDBF70
.std:000000014FDD2973 49 83 C7 08                             add     r15, 8
.std:000000014FDD2977 4C 3B FE                                cmp     r15, rsi
.std:000000014FDD297A 75 E4                                   jnz     short loc_14FDD2960
.std:000000014FDD297C 44 8B 64 24 50                          mov     r12d, [rsp+50h]
.std:000000014FDD2981
.std:000000014FDD2981                         loc_14FDD2981:                          ; CODE XREF: sub_14FDD11F0+1769↑j
.std:000000014FDD2981 48 8B 75 80                             mov     rsi, [rbp-80h]
.std:000000014FDD2985 48 8D 4E 40                             lea     rcx, [rsi+40h]
.std:000000014FDD2989 FF 15 F1 B0 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD298F 48 8D 4E 40                             lea     rcx, [rsi+40h]
.std:000000014FDD2993 4C 8B F8                                mov     r15, rax
.std:000000014FDD2996 FF 15 E4 B0 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD299C 48 63 4E 48                             movsxd  rcx, dword ptr [rsi+48h]
.std:000000014FDD29A0 48 8D 04 C8                             lea     rax, [rax+rcx*8]
.std:000000014FDD29A4 4C 3B F8                                cmp     r15, rax
.std:000000014FDD29A7 0F 84 88 01 00 00                       jz      loc_14FDD2B35
.std:000000014FDD29AD 49 8B FF                                mov     rdi, r15
.std:000000014FDD29B0 48 8B D8                                mov     rbx, rax
.std:000000014FDD29B3
.std:000000014FDD29B3                         loc_14FDD29B3:                          ; CODE XREF: sub_14FDD11F0+1937↓j
.std:000000014FDD29B3 0F B6 05 66 72 7D 0A                    movzx   eax, cs:byte_15A5A9C20
.std:000000014FDD29BA 4C 8B 3F                                mov     r15, [rdi]
.std:000000014FDD29BD 41 8B CC                                mov     ecx, r12d
.std:000000014FDD29C0 48 8D 34 49                             lea     rsi, [rcx+rcx*2]
.std:000000014FDD29C4 84 C0                                   test    al, al
.std:000000014FDD29C6 74 1B                                   jz      short loc_14FDD29E3
.std:000000014FDD29C8 4C 8D 45 18                             lea     r8, [rbp+18h]
.std:000000014FDD29CC 49 8B D5                                mov     rdx, r13
.std:000000014FDD29CF 48 8D 0D 42 42 E5 08                    lea     rcx, off_158C26C18
.std:000000014FDD29D6 E8 95 95 58 F1                          call    sub_14135BF70
.std:000000014FDD29DB 84 C0                                   test    al, al
.std:000000014FDD29DD 48 8B 45 18                             mov     rax, [rbp+18h]
.std:000000014FDD29E1 75 07                                   jnz     short loc_14FDD29EA
.std:000000014FDD29E3
.std:000000014FDD29E3                         loc_14FDD29E3:                          ; CODE XREF: sub_14FDD11F0+17D6↑j
.std:000000014FDD29E3 49 8D 85 10 03 00 00                    lea     rax, [r13+310h]
.std:000000014FDD29EA
.std:000000014FDD29EA                         loc_14FDD29EA:                          ; CODE XREF: sub_14FDD11F0+17F1↑j
.std:000000014FDD29EA F3 0F 10 B0 90 0D 00 00                 movss   xmm6, dword ptr [rax+0D90h]
.std:000000014FDD29F2 F3 0F 10 B8 94 0D 00 00                 movss   xmm7, dword ptr [rax+0D94h]
.std:000000014FDD29FA F3 44 0F 10 80 98 0D 00                 movss   xmm8, dword ptr [rax+0D98h]
.std:000000014FDD29FA 00
.std:000000014FDD2A03 0F B6 05 16 72 7D 0A                    movzx   eax, cs:byte_15A5A9C20
.std:000000014FDD2A0A F3 41 0F 58 37                          addss   xmm6, dword ptr [r15]
.std:000000014FDD2A0F F3 41 0F 58 7F 04                       addss   xmm7, dword ptr [r15+4]
.std:000000014FDD2A15 F3 45 0F 58 47 08                       addss   xmm8, dword ptr [r15+8]
.std:000000014FDD2A1B 84 C0                                   test    al, al
.std:000000014FDD2A1D 74 1B                                   jz      short loc_14FDD2A3A
.std:000000014FDD2A1F 4C 8D 45 20                             lea     r8, [rbp+20h]
.std:000000014FDD2A23 49 8B D5                                mov     rdx, r13
.std:000000014FDD2A26 48 8D 0D EB 41 E5 08                    lea     rcx, off_158C26C18
.std:000000014FDD2A2D E8 3E 95 58 F1                          call    sub_14135BF70
.std:000000014FDD2A32 84 C0                                   test    al, al
.std:000000014FDD2A34 48 8B 45 20                             mov     rax, [rbp+20h]
.std:000000014FDD2A38 75 07                                   jnz     short loc_14FDD2A41
.std:000000014FDD2A3A
.std:000000014FDD2A3A                         loc_14FDD2A3A:                          ; CODE XREF: sub_14FDD11F0+182D↑j
.std:000000014FDD2A3A 49 8D 85 10 03 00 00                    lea     rax, [r13+310h]
.std:000000014FDD2A41
.std:000000014FDD2A41                         loc_14FDD2A41:                          ; CODE XREF: sub_14FDD11F0+1848↑j
.std:000000014FDD2A41 F3 0F 10 90 90 0D 00 00                 movss   xmm2, dword ptr [rax+0D90h]
.std:000000014FDD2A49 48 83 C7 08                             add     rdi, 8
.std:000000014FDD2A4D F3 0F 10 88 94 0D 00 00                 movss   xmm1, dword ptr [rax+0D94h]
.std:000000014FDD2A55 F3 0F 10 80 98 0D 00 00                 movss   xmm0, dword ptr [rax+0D98h]
.std:000000014FDD2A5D F3 41 0F 58 57 0C                       addss   xmm2, dword ptr [r15+0Ch]
.std:000000014FDD2A63 F3 41 0F 58 4F 10                       addss   xmm1, dword ptr [r15+10h]
.std:000000014FDD2A69 F3 41 0F 58 47 14                       addss   xmm0, dword ptr [r15+14h]
.std:000000014FDD2A6F 44 8B 64 24 50                          mov     r12d, [rsp+50h]
.std:000000014FDD2A74 41 83 C4 08                             add     r12d, 8
.std:000000014FDD2A78 F3 41 0F 11 34 B6                       movss   dword ptr [r14+rsi*4], xmm6
.std:000000014FDD2A7E F3 41 0F 11 54 B6 30                    movss   dword ptr [r14+rsi*4+30h], xmm2
.std:000000014FDD2A85 F3 41 0F 11 4C B6 1C                    movss   dword ptr [r14+rsi*4+1Ch], xmm1
.std:000000014FDD2A8C F3 41 0F 11 44 B6 14                    movss   dword ptr [r14+rsi*4+14h], xmm0
.std:000000014FDD2A93 F3 41 0F 11 4C B6 28                    movss   dword ptr [r14+rsi*4+28h], xmm1
.std:000000014FDD2A9A F3 41 0F 11 44 B6 2C                    movss   dword ptr [r14+rsi*4+2Ch], xmm0
.std:000000014FDD2AA1 F3 41 0F 11 54 B6 3C                    movss   dword ptr [r14+rsi*4+3Ch], xmm2
.std:000000014FDD2AA8 F3 41 0F 11 44 B6 44                    movss   dword ptr [r14+rsi*4+44h], xmm0
.std:000000014FDD2AAF F3 41 0F 11 54 B6 48                    movss   dword ptr [r14+rsi*4+48h], xmm2
.std:000000014FDD2AB6 F3 41 0F 11 4C B6 4C                    movss   dword ptr [r14+rsi*4+4Ch], xmm1
.std:000000014FDD2ABD F3 41 0F 11 54 B6 54                    movss   dword ptr [r14+rsi*4+54h], xmm2
.std:000000014FDD2AC4 F3 41 0F 11 4C B6 58                    movss   dword ptr [r14+rsi*4+58h], xmm1
.std:000000014FDD2ACB F3 41 0F 11 44 B6 5C                    movss   dword ptr [r14+rsi*4+5Ch], xmm0
.std:000000014FDD2AD2 F3 41 0F 11 7C B6 04                    movss   dword ptr [r14+rsi*4+4], xmm7
.std:000000014FDD2AD9 F3 45 0F 11 44 B6 08                    movss   dword ptr [r14+rsi*4+8], xmm8
.std:000000014FDD2AE0 F3 41 0F 11 74 B6 0C                    movss   dword ptr [r14+rsi*4+0Ch], xmm6
.std:000000014FDD2AE7 F3 41 0F 11 7C B6 10                    movss   dword ptr [r14+rsi*4+10h], xmm7
.std:000000014FDD2AEE F3 41 0F 11 74 B6 18                    movss   dword ptr [r14+rsi*4+18h], xmm6
.std:000000014FDD2AF5 F3 45 0F 11 44 B6 20                    movss   dword ptr [r14+rsi*4+20h], xmm8
.std:000000014FDD2AFC F3 41 0F 11 74 B6 24                    movss   dword ptr [r14+rsi*4+24h], xmm6
.std:000000014FDD2B03 F3 41 0F 11 7C B6 34                    movss   dword ptr [r14+rsi*4+34h], xmm7
.std:000000014FDD2B0A F3 45 0F 11 44 B6 38                    movss   dword ptr [r14+rsi*4+38h], xmm8
.std:000000014FDD2B11 F3 41 0F 11 7C B6 40                    movss   dword ptr [r14+rsi*4+40h], xmm7
.std:000000014FDD2B18 F3 45 0F 11 44 B6 50                    movss   dword ptr [r14+rsi*4+50h], xmm8
.std:000000014FDD2B1F 44 89 64 24 50                          mov     [rsp+50h], r12d
.std:000000014FDD2B24 48 3B FB                                cmp     rdi, rbx
.std:000000014FDD2B27 0F 85 86 FE FF FF                       jnz     loc_14FDD29B3
.std:000000014FDD2B2D 48 8B 5D 90                             mov     rbx, [rbp-70h]
.std:000000014FDD2B31 8B 7C 24 58                             mov     edi, [rsp+58h]
.std:000000014FDD2B35
.std:000000014FDD2B35                         loc_14FDD2B35:                          ; CODE XREF: sub_14FDD11F0+17B7↑j
.std:000000014FDD2B35 48 8B 0D BC 43 82 0A                    mov     rcx, cs:qword_15A5F6EF8
.std:000000014FDD2B3C 48 8D 15 E5 DA 81 0A                    lea     rdx, unk_15A5F0628
.std:000000014FDD2B43 4C 8B 44 24 68                          mov     r8, [rsp+68h]
.std:000000014FDD2B48 48 8B 01                                mov     rax, [rcx]
.std:000000014FDD2B4B FF 90 A0 01 00 00                       call    qword ptr [rax+1A0h]
.std:000000014FDD2B51 45 33 FF                                xor     r15d, r15d
.std:000000014FDD2B54 4C 89 7C 24 48                          mov     [rsp+48h], r15
.std:000000014FDD2B59 E8 02 A8 23 FF                          call    sub_14F00D360
.std:000000014FDD2B5E 4C 8B 64 24 60                          mov     r12, [rsp+60h]
.std:000000014FDD2B63 84 C0                                   test    al, al
.std:000000014FDD2B65 74 17                                   jz      short loc_14FDD2B7E
.std:000000014FDD2B67 4C 8D 0D 32 81 67 07                    lea     r9, aShadowfrustumq ; "ShadowFrustumQueries"
.std:000000014FDD2B6E 45 8B C7                                mov     r8d, r15d
.std:000000014FDD2B71 49 8B D4                                mov     rdx, r12
.std:000000014FDD2B74 48 8D 4C 24 48                          lea     rcx, [rsp+48h]
.std:000000014FDD2B79 E8 A2 39 4C 00                          call    sub_150296520
.std:000000014FDD2B7E
.std:000000014FDD2B7E                         loc_14FDD2B7E:                          ; CODE XREF: sub_14FDD11F0+1975↑j
.std:000000014FDD2B7E 48 8B 73 40                             mov     rsi, [rbx+40h]
.std:000000014FDD2B82 83 7E 08 FF                             cmp     dword ptr [rsi+8], 0FFFFFFFFh
.std:000000014FDD2B86 75 08                                   jnz     short loc_14FDD2B90
.std:000000014FDD2B88 48 8B CE                                mov     rcx, rsi
.std:000000014FDD2B8B E8 80 F2 4D 00                          call    sub_1502B1E10
.std:000000014FDD2B90
.std:000000014FDD2B90                         loc_14FDD2B90:                          ; CODE XREF: sub_14FDD11F0+1996↑j
.std:000000014FDD2B90 4D 8B 4D 20                             mov     r9, [r13+20h]
.std:000000014FDD2B94 49 8B D4                                mov     rdx, r12
.std:000000014FDD2B97 4C 8B 46 48                             mov     r8, [rsi+48h]
.std:000000014FDD2B9B 48 8B CB                                mov     rcx, rbx
.std:000000014FDD2B9E E8 2D 83 A0 FF                          call    sub_14F7DAED0
.std:000000014FDD2BA3 48 8D 8B 08 01 00 00                    lea     rcx, [rbx+108h]
.std:000000014FDD2BAA 44 0F 29 55 90                          movaps  xmmword ptr [rbp-70h], xmm10
.std:000000014FDD2BAF 4C 8D 4D 90                             lea     r9, [rbp-70h]
.std:000000014FDD2BB3 4C 8B C3                                mov     r8, rbx
.std:000000014FDD2BB6 49 8B D4                                mov     rdx, r12
.std:000000014FDD2BB9 E8 B2 E2 00 00                          call    sub_14FDE0E70
.std:000000014FDD2BBE FF 15 FC A8 A0 09                       call    cs:off_1597DD4C0 ; AK::WriteBytesCount::Reserve(long) ...
.std:000000014FDD2BC4 84 C0                                   test    al, al
.std:000000014FDD2BC6 75 09                                   jnz     short loc_14FDD2BD1
.std:000000014FDD2BC8 48 8B 05 F9 B8 A0 09                    mov     rax, cs:qword_1597DE4C8
.std:000000014FDD2BCF EB 29                                   jmp     short loc_14FDD2BFA
.std:000000014FDD2BD1                         ; ---------------------------------------------------------------------------
.std:000000014FDD2BD1
.std:000000014FDD2BD1                         loc_14FDD2BD1:                          ; CODE XREF: sub_14FDD11F0+19D6↑j
.std:000000014FDD2BD1 48 8B 0D F0 D8 A0 09                    mov     rcx, cs:qword_1597E04C8
.std:000000014FDD2BD8 0F B6 05 EF D8 A0 09                    movzx   eax, byte ptr cs:qword_1597E04C8+6
.std:000000014FDD2BDF 48 89 4C 24 58                          mov     [rsp+58h], rcx
.std:000000014FDD2BE4 34 37                                   xor     al, 37h
.std:000000014FDD2BE6 48 C1 E9 08                             shr     rcx, 8
.std:000000014FDD2BEA 80 F1 37                                xor     cl, 37h
.std:000000014FDD2BED 88 44 24 59                             mov     [rsp+59h], al
.std:000000014FDD2BF1 88 4C 24 5E                             mov     [rsp+5Eh], cl
.std:000000014FDD2BF5 48 8B 44 24 58                          mov     rax, [rsp+58h]
.std:000000014FDD2BFA
.std:000000014FDD2BFA                         loc_14FDD2BFA:                          ; CODE XREF: sub_14FDD11F0+19DF↑j
.std:000000014FDD2BFA 48 85 C0                                test    rax, rax
.std:000000014FDD2BFD 0F 84 D2 00 00 00                       jz      loc_14FDD2CD5
.std:000000014FDD2C03 FF 15 B7 A8 A0 09                       call    cs:off_1597DD4C0 ; AK::WriteBytesCount::Reserve(long) ...
.std:000000014FDD2C09 84 C0                                   test    al, al
.std:000000014FDD2C0B 75 09                                   jnz     short loc_14FDD2C16
.std:000000014FDD2C0D 48 8B 05 B4 B8 A0 09                    mov     rax, cs:qword_1597DE4C8
.std:000000014FDD2C14 EB 29                                   jmp     short loc_14FDD2C3F
.std:000000014FDD2C16                         ; ---------------------------------------------------------------------------
.std:000000014FDD2C16
.std:000000014FDD2C16                         loc_14FDD2C16:                          ; CODE XREF: sub_14FDD11F0+1A1B↑j
.std:000000014FDD2C16 48 8B 0D AB D8 A0 09                    mov     rcx, cs:qword_1597E04C8
.std:000000014FDD2C1D 0F B6 05 AA D8 A0 09                    movzx   eax, byte ptr cs:qword_1597E04C8+6
.std:000000014FDD2C24 48 89 4C 24 58                          mov     [rsp+58h], rcx
.std:000000014FDD2C29 34 37                                   xor     al, 37h
.std:000000014FDD2C2B 48 C1 E9 08                             shr     rcx, 8
.std:000000014FDD2C2F 80 F1 37                                xor     cl, 37h
.std:000000014FDD2C32 88 44 24 59                             mov     [rsp+59h], al
.std:000000014FDD2C36 88 4C 24 5E                             mov     [rsp+5Eh], cl
.std:000000014FDD2C3A 48 8B 44 24 58                          mov     rax, [rsp+58h]
.std:000000014FDD2C3F
.std:000000014FDD2C3F                         loc_14FDD2C3F:                          ; CODE XREF: sub_14FDD11F0+1A24↑j
.std:000000014FDD2C3F 4C 39 B8 B0 0C 00 00                    cmp     [rax+0CB0h], r15
.std:000000014FDD2C46 0F 84 89 00 00 00                       jz      loc_14FDD2CD5
.std:000000014FDD2C4C FF 15 6E A8 A0 09                       call    cs:off_1597DD4C0 ; AK::WriteBytesCount::Reserve(long) ...
.std:000000014FDD2C52 84 C0                                   test    al, al
.std:000000014FDD2C54 75 09                                   jnz     short loc_14FDD2C5F
.std:000000014FDD2C56 48 8B 0D 6B B8 A0 09                    mov     rcx, cs:qword_1597DE4C8
.std:000000014FDD2C5D EB 29                                   jmp     short loc_14FDD2C88
.std:000000014FDD2C5F                         ; ---------------------------------------------------------------------------
.std:000000014FDD2C5F
.std:000000014FDD2C5F                         loc_14FDD2C5F:                          ; CODE XREF: sub_14FDD11F0+1A64↑j
.std:000000014FDD2C5F 48 8B 0D 62 D8 A0 09                    mov     rcx, cs:qword_1597E04C8
.std:000000014FDD2C66 0F B6 05 61 D8 A0 09                    movzx   eax, byte ptr cs:qword_1597E04C8+6
.std:000000014FDD2C6D 48 89 4C 24 58                          mov     [rsp+58h], rcx
.std:000000014FDD2C72 34 37                                   xor     al, 37h
.std:000000014FDD2C74 48 C1 E9 08                             shr     rcx, 8
.std:000000014FDD2C78 80 F1 37                                xor     cl, 37h
.std:000000014FDD2C7B 88 44 24 59                             mov     [rsp+59h], al
.std:000000014FDD2C7F 88 4C 24 5E                             mov     [rsp+5Eh], cl
.std:000000014FDD2C83 48 8B 4C 24 58                          mov     rcx, [rsp+58h]
.std:000000014FDD2C88
.std:000000014FDD2C88                         loc_14FDD2C88:                          ; CODE XREF: sub_14FDD11F0+1A6D↑j
.std:000000014FDD2C88 48 8B 89 B0 0C 00 00                    mov     rcx, [rcx+0CB0h]
.std:000000014FDD2C8F 41 8B 95 50 20 00 00                    mov     edx, [r13+2050h]
.std:000000014FDD2C96 48 8B 01                                mov     rax, [rcx]
.std:000000014FDD2C99 FF 50 30                                call    qword ptr [rax+30h]
.std:000000014FDD2C9C 48 8B 73 40                             mov     rsi, [rbx+40h]
.std:000000014FDD2CA0 89 45 00                                mov     [rbp+0], eax
.std:000000014FDD2CA3 83 7E 08 FF                             cmp     dword ptr [rsi+8], 0FFFFFFFFh
.std:000000014FDD2CA7 75 08                                   jnz     short loc_14FDD2CB1
.std:000000014FDD2CA9 48 8B CE                                mov     rcx, rsi
.std:000000014FDD2CAC E8 5F F1 4D 00                          call    sub_1502B1E10
.std:000000014FDD2CB1
.std:000000014FDD2CB1                         loc_14FDD2CB1:                          ; CODE XREF: sub_14FDD11F0+1AB7↑j
.std:000000014FDD2CB1 48 8B 46 48                             mov     rax, [rsi+48h]
.std:000000014FDD2CB5 4C 8D 83 20 01 00 00                    lea     r8, [rbx+120h]
.std:000000014FDD2CBC 4C 8D 4D 00                             lea     r9, [rbp+0]
.std:000000014FDD2CC0 48 89 45 90                             mov     [rbp-70h], rax
.std:000000014FDD2CC4 48 8D 55 90                             lea     rdx, [rbp-70h]
.std:000000014FDD2CC8 44 89 7C 24 20                          mov     [rsp+20h], r15d
.std:000000014FDD2CCD 49 8B CC                                mov     rcx, r12
.std:000000014FDD2CD0 E8 BB E1 B8 F2                          call    sub_142960E90
.std:000000014FDD2CD5
.std:000000014FDD2CD5                         loc_14FDD2CD5:                          ; CODE XREF: sub_14FDD11F0+1A0D↑j
.std:000000014FDD2CD5                                                                 ; sub_14FDD11F0+1A56↑j
.std:000000014FDD2CD5 44 38 3D 3C D9 81 0A                    cmp     cs:byte_15A5F0618, r15b
.std:000000014FDD2CDC 4C 8B 74 24 68                          mov     r14, [rsp+68h]
.std:000000014FDD2CE1 74 18                                   jz      short loc_14FDD2CFB
.std:000000014FDD2CE3 49 8B 4C 24 20                          mov     rcx, [r12+20h]
.std:000000014FDD2CE8 45 33 C9                                xor     r9d, r9d
.std:000000014FDD2CEB 4D 8B C6                                mov     r8, r14
.std:000000014FDD2CEE 33 D2                                   xor     edx, edx
.std:000000014FDD2CF0 48 8B 01                                mov     rax, [rcx]
.std:000000014FDD2CF3 FF 90 00 02 00 00                       call    qword ptr [rax+200h]
.std:000000014FDD2CF9 EB 6C                                   jmp     short loc_14FDD2D67
.std:000000014FDD2CFB                         ; ---------------------------------------------------------------------------
.std:000000014FDD2CFB
.std:000000014FDD2CFB                         loc_14FDD2CFB:                          ; CODE XREF: sub_14FDD11F0+1AF1↑j
.std:000000014FDD2CFB 49 8B 4C 24 38                          mov     rcx, [r12+38h]
.std:000000014FDD2D00 48 83 C1 07                             add     rcx, 7
.std:000000014FDD2D04 48 83 E1 F8                             and     rcx, 0FFFFFFFFFFFFFFF8h
.std:000000014FDD2D08 48 8D 41 28                             lea     rax, [rcx+28h]
.std:000000014FDD2D0C 49 3B 44 24 40                          cmp     rax, [r12+40h]
.std:000000014FDD2D11 76 20                                   jbe     short loc_14FDD2D33
.std:000000014FDD2D13 BA 30 00 00 00                          mov     edx, 30h ; '0'
.std:000000014FDD2D18 49 8D 4C 24 38                          lea     rcx, [r12+38h]
.std:000000014FDD2D1D E8 4E 6B 25 FF                          call    sub_14F029870
.std:000000014FDD2D22 49 8B 4C 24 38                          mov     rcx, [r12+38h]
.std:000000014FDD2D27 48 83 C1 07                             add     rcx, 7
.std:000000014FDD2D2B 48 83 E1 F8                             and     rcx, 0FFFFFFFFFFFFFFF8h
.std:000000014FDD2D2F 48 8D 41 28                             lea     rax, [rcx+28h]
.std:000000014FDD2D33
.std:000000014FDD2D33                         loc_14FDD2D33:                          ; CODE XREF: sub_14FDD11F0+1B21↑j
.std:000000014FDD2D33 49 89 44 24 38                          mov     [r12+38h], rax
.std:000000014FDD2D38 49 8B 44 24 08                          mov     rax, [r12+8]
.std:000000014FDD2D3D 41 FF 44 24 14                          inc     dword ptr [r12+14h]
.std:000000014FDD2D42 48 89 08                                mov     [rax], rcx
.std:000000014FDD2D45 48 8D 41 08                             lea     rax, [rcx+8]
.std:000000014FDD2D49 49 89 44 24 08                          mov     [r12+8], rax
.std:000000014FDD2D4E 4C 89 38                                mov     [rax], r15
.std:000000014FDD2D51 48 8D 05 70 BE DE 03                    lea     rax, off_153BBEBC8
.std:000000014FDD2D58 48 89 01                                mov     [rcx], rax
.std:000000014FDD2D5B 44 89 79 10                             mov     [rcx+10h], r15d
.std:000000014FDD2D5F 4C 89 71 18                             mov     [rcx+18h], r14
.std:000000014FDD2D63 44 89 79 20                             mov     [rcx+20h], r15d
.std:000000014FDD2D67
.std:000000014FDD2D67                         loc_14FDD2D67:                          ; CODE XREF: sub_14FDD11F0+1B09↑j
.std:000000014FDD2D67 44 89 7C 24 50                          mov     [rsp+50h], r15d
.std:000000014FDD2D6C 4C 8B 7D 80                             mov     r15, [rbp-80h]
.std:000000014FDD2D70 49 8D 4F 60                             lea     rcx, [r15+60h]
.std:000000014FDD2D74 FF 15 06 AD 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD2D7A 49 8D 4F 60                             lea     rcx, [r15+60h]
.std:000000014FDD2D7E 4C 8B F0                                mov     r14, rax
.std:000000014FDD2D81 FF 15 F9 AC 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD2D87 49 63 4F 68                             movsxd  rcx, dword ptr [r15+68h]
.std:000000014FDD2D8B 48 8D 34 C8                             lea     rsi, [rax+rcx*8]
.std:000000014FDD2D8F 4C 3B F6                                cmp     r14, rsi
.std:000000014FDD2D92 74 25                                   jz      short loc_14FDD2DB9
.std:000000014FDD2D94 0F 1F 40 00                             nop     dword ptr [rax+00h]
.std:000000014FDD2D98 0F 1F 84 00 00 00 00 00                 nop     dword ptr [rax+rax+00000000h]
.std:000000014FDD2DA0
.std:000000014FDD2DA0                         loc_14FDD2DA0:                          ; CODE XREF: sub_14FDD11F0+1BC7↓j
.std:000000014FDD2DA0 4D 8B 06                                mov     r8, [r14]
.std:000000014FDD2DA3 48 8D 54 24 50                          lea     rdx, [rsp+50h]
.std:000000014FDD2DA8 49 8B CC                                mov     rcx, r12
.std:000000014FDD2DAB E8 70 3F 00 00                          call    sub_14FDD6D20
.std:000000014FDD2DB0 49 83 C6 08                             add     r14, 8
.std:000000014FDD2DB4 4C 3B F6                                cmp     r14, rsi
.std:000000014FDD2DB7 75 E7                                   jnz     short loc_14FDD2DA0
.std:000000014FDD2DB9
.std:000000014FDD2DB9                         loc_14FDD2DB9:                          ; CODE XREF: sub_14FDD11F0+1BA2↑j
.std:000000014FDD2DB9 49 8D 8F 80 00 00 00                    lea     rcx, [r15+80h]
.std:000000014FDD2DC0 FF 15 BA AC 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD2DC6 49 8D 8F 80 00 00 00                    lea     rcx, [r15+80h]
.std:000000014FDD2DCD 4C 8B F0                                mov     r14, rax
.std:000000014FDD2DD0 FF 15 AA AC 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD2DD6 49 63 8F 88 00 00 00                    movsxd  rcx, dword ptr [r15+88h]
.std:000000014FDD2DDD 48 8D 34 C8                             lea     rsi, [rax+rcx*8]
.std:000000014FDD2DE1 4C 3B F6                                cmp     r14, rsi
.std:000000014FDD2DE4 74 23                                   jz      short loc_14FDD2E09
.std:000000014FDD2DE6                                         db      66h, 66h
.std:000000014FDD2DE6 66 66 0F 1F 84 00 00 00                 nop     word ptr [rax+rax+00000000h]
.std:000000014FDD2DE6 00 00
.std:000000014FDD2DF0
.std:000000014FDD2DF0                         loc_14FDD2DF0:                          ; CODE XREF: sub_14FDD11F0+1C17↓j
.std:000000014FDD2DF0 4D 8B 06                                mov     r8, [r14]
.std:000000014FDD2DF3 48 8D 54 24 50                          lea     rdx, [rsp+50h]
.std:000000014FDD2DF8 49 8B CC                                mov     rcx, r12
.std:000000014FDD2DFB E8 80 43 00 00                          call    sub_14FDD7180
.std:000000014FDD2E00 49 83 C6 08                             add     r14, 8
.std:000000014FDD2E04 4C 3B F6                                cmp     r14, rsi
.std:000000014FDD2E07 75 E7                                   jnz     short loc_14FDD2DF0
.std:000000014FDD2E09
.std:000000014FDD2E09                         loc_14FDD2E09:                          ; CODE XREF: sub_14FDD11F0+1BF4↑j
.std:000000014FDD2E09 48 83 7C 24 48 00                       cmp     qword ptr [rsp+48h], 0
.std:000000014FDD2E0F 74 0A                                   jz      short loc_14FDD2E1B
.std:000000014FDD2E11 48 8D 4C 24 48                          lea     rcx, [rsp+48h]
.std:000000014FDD2E16 E8 55 43 4C 00                          call    sub_150297170
.std:000000014FDD2E1B
.std:000000014FDD2E1B                         loc_14FDD2E1B:                          ; CODE XREF: sub_14FDD11F0+1C1F↑j
.std:000000014FDD2E1B 48 8B 44 24 70                          mov     rax, [rsp+70h]
.std:000000014FDD2E20 83 B8 08 04 00 00 01                    cmp     dword ptr [rax+408h], 1
.std:000000014FDD2E27 0F 8E 8E 00 00 00                       jle     loc_14FDD2EBB
.std:000000014FDD2E2D 33 F6                                   xor     esi, esi
.std:000000014FDD2E2F 48 89 74 24 48                          mov     [rsp+48h], rsi
.std:000000014FDD2E34 E8 27 A5 23 FF                          call    sub_14F00D360
.std:000000014FDD2E39 84 C0                                   test    al, al
.std:000000014FDD2E3B 74 17                                   jz      short loc_14FDD2E54
.std:000000014FDD2E3D 4C 8D 0D 7C 7F 67 07                    lea     r9, aPlanarreflecti_13 ; "PlanarReflectionQueries"
.std:000000014FDD2E44 44 8B C6                                mov     r8d, esi
.std:000000014FDD2E47 49 8B D4                                mov     rdx, r12
.std:000000014FDD2E4A 48 8D 4C 24 48                          lea     rcx, [rsp+48h]
.std:000000014FDD2E4F E8 CC 36 4C 00                          call    sub_150296520
.std:000000014FDD2E54
.std:000000014FDD2E54                         loc_14FDD2E54:                          ; CODE XREF: sub_14FDD11F0+1C4B↑j
.std:000000014FDD2E54 49 8D 8F 90 00 00 00                    lea     rcx, [r15+90h]
.std:000000014FDD2E5B FF 15 1F AC 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD2E61 49 8D 8F 90 00 00 00                    lea     rcx, [r15+90h]
.std:000000014FDD2E68 4C 8B F0                                mov     r14, rax
.std:000000014FDD2E6B FF 15 0F AC 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD2E71 49 63 8F 98 00 00 00                    movsxd  rcx, dword ptr [r15+98h]
.std:000000014FDD2E78 48 8D 34 C8                             lea     rsi, [rax+rcx*8]
.std:000000014FDD2E7C 4C 3B F6                                cmp     r14, rsi
.std:000000014FDD2E7F 74 28                                   jz      short loc_14FDD2EA9
.std:000000014FDD2E81 0F 1F 40 00                             nop     dword ptr [rax+00h]
.std:000000014FDD2E85                                         db      66h, 66h
.std:000000014FDD2E85 66 66 66 0F 1F 84 00 00                 nop     word ptr [rax+rax+00000000h]
.std:000000014FDD2E85 00 00 00
.std:000000014FDD2E90
.std:000000014FDD2E90                         loc_14FDD2E90:                          ; CODE XREF: sub_14FDD11F0+1CB7↓j
.std:000000014FDD2E90 4D 8B 06                                mov     r8, [r14]
.std:000000014FDD2E93 48 8D 54 24 50                          lea     rdx, [rsp+50h]
.std:000000014FDD2E98 49 8B CC                                mov     rcx, r12
.std:000000014FDD2E9B E8 E0 42 00 00                          call    sub_14FDD7180
.std:000000014FDD2EA0 49 83 C6 08                             add     r14, 8
.std:000000014FDD2EA4 4C 3B F6                                cmp     r14, rsi
.std:000000014FDD2EA7 75 E7                                   jnz     short loc_14FDD2E90
.std:000000014FDD2EA9
.std:000000014FDD2EA9                         loc_14FDD2EA9:                          ; CODE XREF: sub_14FDD11F0+1C8F↑j
.std:000000014FDD2EA9 48 83 7C 24 48 00                       cmp     qword ptr [rsp+48h], 0
.std:000000014FDD2EAF 74 0A                                   jz      short loc_14FDD2EBB
.std:000000014FDD2EB1 48 8D 4C 24 48                          lea     rcx, [rsp+48h]
.std:000000014FDD2EB6 E8 B5 42 4C 00                          call    sub_150297170
.std:000000014FDD2EBB
.std:000000014FDD2EBB                         loc_14FDD2EBB:                          ; CODE XREF: sub_14FDD11F0+1C37↑j
.std:000000014FDD2EBB                                                                 ; sub_14FDD11F0+1CBF↑j
.std:000000014FDD2EBB 48 8B 74 24 68                          mov     rsi, [rsp+68h]
.std:000000014FDD2EC0 45 33 F6                                xor     r14d, r14d
.std:000000014FDD2EC3 4C 89 74 24 68                          mov     [rsp+68h], r14
.std:000000014FDD2EC8 48 85 F6                                test    rsi, rsi
.std:000000014FDD2ECB 0F 84 35 01 00 00                       jz      loc_14FDD3006
.std:000000014FDD2ED1 B8 FF FF FF FF                          mov     eax, 0FFFFFFFFh
.std:000000014FDD2ED6 F0 0F C1 46 08                          lock xadd [rsi+8], eax
.std:000000014FDD2EDB 83 F8 01                                cmp     eax, 1
.std:000000014FDD2EDE 0F 85 84 00 00 00                       jnz     loc_14FDD2F68
.std:000000014FDD2EE4 44 38 76 10                             cmp     [rsi+10h], r14b
.std:000000014FDD2EE8 75 6B                                   jnz     short loc_14FDD2F55
.std:000000014FDD2EEA 44 38 35 D7 FE 81 0A                    cmp     cs:byte_15A5F2DC8, r14b
.std:000000014FDD2EF1 75 09                                   jnz     short loc_14FDD2EFC
.std:000000014FDD2EF3 E8 38 36 46 00                          call    sub_150236530
.std:000000014FDD2EF8 84 C0                                   test    al, al
.std:000000014FDD2EFA 75 59                                   jnz     short loc_14FDD2F55
.std:000000014FDD2EFC
.std:000000014FDD2EFC                         loc_14FDD2EFC:                          ; CODE XREF: sub_14FDD11F0+1D01↑j
.std:000000014FDD2EFC 33 C0                                   xor     eax, eax
.std:000000014FDD2EFE 41 BF 01 00 00 00                       mov     r15d, 1
.std:000000014FDD2F04 F0 44 0F B1 7E 0C                       lock cmpxchg [rsi+0Ch], r15d
.std:000000014FDD2F0A 75 62                                   jnz     short loc_14FDD2F6E
.std:000000014FDD2F0C E8 0F BF 14 FF                          call    sub_14EF1EE20
.std:000000014FDD2F11 8B D0                                   mov     edx, eax
.std:000000014FDD2F13 85 C0                                   test    eax, eax
.std:000000014FDD2F15 75 05                                   jnz     short loc_14FDD2F1C
.std:000000014FDD2F17 49 8B C6                                mov     rax, r14
.std:000000014FDD2F1A EB 27                                   jmp     short loc_14FDD2F43
.std:000000014FDD2F1C                         ; ---------------------------------------------------------------------------
.std:000000014FDD2F1C
.std:000000014FDD2F1C                         loc_14FDD2F1C:                          ; CODE XREF: sub_14FDD11F0+1D25↑j
.std:000000014FDD2F1C 48 8B CA                                mov     rcx, rdx
.std:000000014FDD2F1F 4C 8D 05 6A 13 62 0A                    lea     r8, unk_15A3F4290
.std:000000014FDD2F26 48 8B C2                                mov     rax, rdx
.std:000000014FDD2F29 48 C1 E8 0E                             shr     rax, 0Eh
.std:000000014FDD2F2D 81 E1 FF 3F 00 00                       and     ecx, 3FFFh
.std:000000014FDD2F33 49 8B 84 C0 88 00 00 00                 mov     rax, [r8+rax*8+88h]
.std:000000014FDD2F3B 48 8D 0C 49                             lea     rcx, [rcx+rcx*2]
.std:000000014FDD2F3F 48 8D 04 C8                             lea     rax, [rax+rcx*8]
.std:000000014FDD2F43
.std:000000014FDD2F43                         loc_14FDD2F43:                          ; CODE XREF: sub_14FDD11F0+1D2A↑j
.std:000000014FDD2F43 48 8D 0D AE F7 81 0A                    lea     rcx, unk_15A5F26F8
.std:000000014FDD2F4A 48 89 70 08                             mov     [rax+8], rsi
.std:000000014FDD2F4E E8 FD 3B 05 F1                          call    sub_140E26B50
.std:000000014FDD2F53 EB 19                                   jmp     short loc_14FDD2F6E
.std:000000014FDD2F55                         ; ---------------------------------------------------------------------------
.std:000000014FDD2F55
.std:000000014FDD2F55                         loc_14FDD2F55:                          ; CODE XREF: sub_14FDD11F0+1CF8↑j
.std:000000014FDD2F55                                                                 ; sub_14FDD11F0+1D0A↑j
.std:000000014FDD2F55 48 8B 06                                mov     rax, [rsi]
.std:000000014FDD2F58 41 BF 01 00 00 00                       mov     r15d, 1
.std:000000014FDD2F5E 41 8B D7                                mov     edx, r15d
.std:000000014FDD2F61 48 8B CE                                mov     rcx, rsi
.std:000000014FDD2F64 FF 10                                   call    qword ptr [rax]
.std:000000014FDD2F66 EB 06                                   jmp     short loc_14FDD2F6E
.std:000000014FDD2F68                         ; ---------------------------------------------------------------------------
.std:000000014FDD2F68
.std:000000014FDD2F68                         loc_14FDD2F68:                          ; CODE XREF: sub_14FDD11F0+1CEE↑j
.std:000000014FDD2F68 41 BF 01 00 00 00                       mov     r15d, 1
.std:000000014FDD2F6E
.std:000000014FDD2F6E                         loc_14FDD2F6E:                          ; CODE XREF: sub_14FDD11F0+1D1A↑j
.std:000000014FDD2F6E                                                                 ; sub_14FDD11F0+1D63↑j ...
.std:000000014FDD2F6E 48 8B 74 24 68                          mov     rsi, [rsp+68h]
.std:000000014FDD2F73 48 85 F6                                test    rsi, rsi
.std:000000014FDD2F76 0F 84 8A 00 00 00                       jz      loc_14FDD3006
.std:000000014FDD2F7C B8 FF FF FF FF                          mov     eax, 0FFFFFFFFh
.std:000000014FDD2F81 F0 0F C1 46 08                          lock xadd [rsi+8], eax
.std:000000014FDD2F86 83 F8 01                                cmp     eax, 1
.std:000000014FDD2F89 75 7B                                   jnz     short loc_14FDD3006
.std:000000014FDD2F8B 44 38 76 10                             cmp     [rsi+10h], r14b
.std:000000014FDD2F8F 75 65                                   jnz     short loc_14FDD2FF6
.std:000000014FDD2F91 44 38 35 30 FE 81 0A                    cmp     cs:byte_15A5F2DC8, r14b
.std:000000014FDD2F98 75 09                                   jnz     short loc_14FDD2FA3
.std:000000014FDD2F9A E8 91 35 46 00                          call    sub_150236530
.std:000000014FDD2F9F 84 C0                                   test    al, al
.std:000000014FDD2FA1 75 53                                   jnz     short loc_14FDD2FF6
.std:000000014FDD2FA3
.std:000000014FDD2FA3                         loc_14FDD2FA3:                          ; CODE XREF: sub_14FDD11F0+1DA8↑j
.std:000000014FDD2FA3 33 C0                                   xor     eax, eax
.std:000000014FDD2FA5 F0 44 0F B1 7E 0C                       lock cmpxchg [rsi+0Ch], r15d
.std:000000014FDD2FAB 75 59                                   jnz     short loc_14FDD3006
.std:000000014FDD2FAD E8 6E BE 14 FF                          call    sub_14EF1EE20
.std:000000014FDD2FB2 8B D0                                   mov     edx, eax
.std:000000014FDD2FB4 85 C0                                   test    eax, eax
.std:000000014FDD2FB6 75 05                                   jnz     short loc_14FDD2FBD
.std:000000014FDD2FB8 49 8B C6                                mov     rax, r14
.std:000000014FDD2FBB EB 27                                   jmp     short loc_14FDD2FE4
.std:000000014FDD2FBD                         ; ---------------------------------------------------------------------------
.std:000000014FDD2FBD
.std:000000014FDD2FBD                         loc_14FDD2FBD:                          ; CODE XREF: sub_14FDD11F0+1DC6↑j
.std:000000014FDD2FBD 48 8B CA                                mov     rcx, rdx
.std:000000014FDD2FC0 4C 8D 05 C9 12 62 0A                    lea     r8, unk_15A3F4290
.std:000000014FDD2FC7 48 8B C2                                mov     rax, rdx
.std:000000014FDD2FCA 48 C1 E8 0E                             shr     rax, 0Eh
.std:000000014FDD2FCE 81 E1 FF 3F 00 00                       and     ecx, 3FFFh
.std:000000014FDD2FD4 49 8B 84 C0 88 00 00 00                 mov     rax, [r8+rax*8+88h]
.std:000000014FDD2FDC 48 8D 0C 49                             lea     rcx, [rcx+rcx*2]
.std:000000014FDD2FE0 48 8D 04 C8                             lea     rax, [rax+rcx*8]
.std:000000014FDD2FE4
.std:000000014FDD2FE4                         loc_14FDD2FE4:                          ; CODE XREF: sub_14FDD11F0+1DCB↑j
.std:000000014FDD2FE4 48 8D 0D 0D F7 81 0A                    lea     rcx, unk_15A5F26F8
.std:000000014FDD2FEB 48 89 70 08                             mov     [rax+8], rsi
.std:000000014FDD2FEF E8 5C 3B 05 F1                          call    sub_140E26B50
.std:000000014FDD2FF4 EB 10                                   jmp     short loc_14FDD3006
.std:000000014FDD2FF6                         ; ---------------------------------------------------------------------------
.std:000000014FDD2FF6
.std:000000014FDD2FF6                         loc_14FDD2FF6:                          ; CODE XREF: sub_14FDD11F0+1D9F↑j
.std:000000014FDD2FF6                                                                 ; sub_14FDD11F0+1DB1↑j
.std:000000014FDD2FF6 48 8B 06                                mov     rax, [rsi]
.std:000000014FDD2FF9 41 8B D7                                mov     edx, r15d
.std:000000014FDD2FFC 48 8B CE                                mov     rcx, rsi
.std:000000014FDD2FFF FF 10                                   call    qword ptr [rax]
.std:000000014FDD3001 EB 03                                   jmp     short loc_14FDD3006
.std:000000014FDD3003                         ; ---------------------------------------------------------------------------
.std:000000014FDD3003
.std:000000014FDD3003                         loc_14FDD3003:                          ; CODE XREF: sub_14FDD11F0+1636↑j
.std:000000014FDD3003 45 33 F6                                xor     r14d, r14d
.std:000000014FDD3006
.std:000000014FDD3006                         loc_14FDD3006:                          ; CODE XREF: sub_14FDD11F0+1CDB↑j
.std:000000014FDD3006                                                                 ; sub_14FDD11F0+1D86↑j ...
.std:000000014FDD3006 48 8B 73 40                             mov     rsi, [rbx+40h]
.std:000000014FDD300A 83 7E 08 FF                             cmp     dword ptr [rsi+8], 0FFFFFFFFh
.std:000000014FDD300E 75 08                                   jnz     short loc_14FDD3018
.std:000000014FDD3010 48 8B CE                                mov     rcx, rsi
.std:000000014FDD3013 E8 F8 ED 4D 00                          call    sub_1502B1E10
.std:000000014FDD3018
.std:000000014FDD3018                         loc_14FDD3018:                          ; CODE XREF: sub_14FDD11F0+1E1E↑j
.std:000000014FDD3018 4D 8B 4D 20                             mov     r9, [r13+20h]
.std:000000014FDD301C 49 8B D4                                mov     rdx, r12
.std:000000014FDD301F 4C 8B 46 48                             mov     r8, [rsi+48h]
.std:000000014FDD3023 48 8B CB                                mov     rcx, rbx
.std:000000014FDD3026 E8 A5 7E A0 FF                          call    sub_14F7DAED0
.std:000000014FDD302B 48 8D 8B 08 01 00 00                    lea     rcx, [rbx+108h]
.std:000000014FDD3032 44 0F 29 55 90                          movaps  xmmword ptr [rbp-70h], xmm10
.std:000000014FDD3037 4C 8D 4D 90                             lea     r9, [rbp-70h]
.std:000000014FDD303B 4C 8B C3                                mov     r8, rbx
.std:000000014FDD303E 49 8B D4                                mov     rdx, r12
.std:000000014FDD3041 E8 2A DE 00 00                          call    sub_14FDE0E70
.std:000000014FDD3046 FF 15 74 A4 A0 09                       call    cs:off_1597DD4C0 ; AK::WriteBytesCount::Reserve(long) ...
.std:000000014FDD304C 84 C0                                   test    al, al
.std:000000014FDD304E 75 09                                   jnz     short loc_14FDD3059
.std:000000014FDD3050 48 8B 05 71 B4 A0 09                    mov     rax, cs:qword_1597DE4C8
.std:000000014FDD3057 EB 29                                   jmp     short loc_14FDD3082
.std:000000014FDD3059                         ; ---------------------------------------------------------------------------
.std:000000014FDD3059
.std:000000014FDD3059                         loc_14FDD3059:                          ; CODE XREF: sub_14FDD11F0+1E5E↑j
.std:000000014FDD3059 48 8B 0D 68 D4 A0 09                    mov     rcx, cs:qword_1597E04C8
.std:000000014FDD3060 0F B6 05 67 D4 A0 09                    movzx   eax, byte ptr cs:qword_1597E04C8+6
.std:000000014FDD3067 48 89 4C 24 48                          mov     [rsp+48h], rcx
.std:000000014FDD306C 34 37                                   xor     al, 37h
.std:000000014FDD306E 48 C1 E9 08                             shr     rcx, 8
.std:000000014FDD3072 80 F1 37                                xor     cl, 37h
.std:000000014FDD3075 88 44 24 49                             mov     [rsp+49h], al
.std:000000014FDD3079 88 4C 24 4E                             mov     [rsp+4Eh], cl
.std:000000014FDD307D 48 8B 44 24 48                          mov     rax, [rsp+48h]
.std:000000014FDD3082
.std:000000014FDD3082                         loc_14FDD3082:                          ; CODE XREF: sub_14FDD11F0+1E67↑j
.std:000000014FDD3082 48 85 C0                                test    rax, rax
.std:000000014FDD3085 0F 84 D3 00 00 00                       jz      loc_14FDD315E
.std:000000014FDD308B FF 15 2F A4 A0 09                       call    cs:off_1597DD4C0 ; AK::WriteBytesCount::Reserve(long) ...
.std:000000014FDD3091 84 C0                                   test    al, al
.std:000000014FDD3093 75 09                                   jnz     short loc_14FDD309E
.std:000000014FDD3095 48 8B 05 2C B4 A0 09                    mov     rax, cs:qword_1597DE4C8
.std:000000014FDD309C EB 29                                   jmp     short loc_14FDD30C7
.std:000000014FDD309E                         ; ---------------------------------------------------------------------------
.std:000000014FDD309E
.std:000000014FDD309E                         loc_14FDD309E:                          ; CODE XREF: sub_14FDD11F0+1EA3↑j
.std:000000014FDD309E 48 8B 0D 23 D4 A0 09                    mov     rcx, cs:qword_1597E04C8
.std:000000014FDD30A5 0F B6 05 22 D4 A0 09                    movzx   eax, byte ptr cs:qword_1597E04C8+6
.std:000000014FDD30AC 48 89 4C 24 48                          mov     [rsp+48h], rcx
.std:000000014FDD30B1 34 37                                   xor     al, 37h
.std:000000014FDD30B3 48 C1 E9 08                             shr     rcx, 8
.std:000000014FDD30B7 80 F1 37                                xor     cl, 37h
.std:000000014FDD30BA 88 44 24 49                             mov     [rsp+49h], al
.std:000000014FDD30BE 88 4C 24 4E                             mov     [rsp+4Eh], cl
.std:000000014FDD30C2 48 8B 44 24 48                          mov     rax, [rsp+48h]
.std:000000014FDD30C7
.std:000000014FDD30C7                         loc_14FDD30C7:                          ; CODE XREF: sub_14FDD11F0+1EAC↑j
.std:000000014FDD30C7 48 83 B8 B0 0C 00 00 00                 cmp     qword ptr [rax+0CB0h], 0
.std:000000014FDD30CF 0F 84 89 00 00 00                       jz      loc_14FDD315E
.std:000000014FDD30D5 FF 15 E5 A3 A0 09                       call    cs:off_1597DD4C0 ; AK::WriteBytesCount::Reserve(long) ...
.std:000000014FDD30DB 84 C0                                   test    al, al
.std:000000014FDD30DD 75 09                                   jnz     short loc_14FDD30E8
.std:000000014FDD30DF 48 8B 0D E2 B3 A0 09                    mov     rcx, cs:qword_1597DE4C8
.std:000000014FDD30E6 EB 29                                   jmp     short loc_14FDD3111
.std:000000014FDD30E8                         ; ---------------------------------------------------------------------------
.std:000000014FDD30E8
.std:000000014FDD30E8                         loc_14FDD30E8:                          ; CODE XREF: sub_14FDD11F0+1EED↑j
.std:000000014FDD30E8 48 8B 0D D9 D3 A0 09                    mov     rcx, cs:qword_1597E04C8
.std:000000014FDD30EF 0F B6 05 D8 D3 A0 09                    movzx   eax, byte ptr cs:qword_1597E04C8+6
.std:000000014FDD30F6 48 89 4C 24 48                          mov     [rsp+48h], rcx
.std:000000014FDD30FB 34 37                                   xor     al, 37h
.std:000000014FDD30FD 48 C1 E9 08                             shr     rcx, 8
.std:000000014FDD3101 80 F1 37                                xor     cl, 37h
.std:000000014FDD3104 88 44 24 49                             mov     [rsp+49h], al
.std:000000014FDD3108 88 4C 24 4E                             mov     [rsp+4Eh], cl
.std:000000014FDD310C 48 8B 4C 24 48                          mov     rcx, [rsp+48h]
.std:000000014FDD3111
.std:000000014FDD3111                         loc_14FDD3111:                          ; CODE XREF: sub_14FDD11F0+1EF6↑j
.std:000000014FDD3111 48 8B 89 B0 0C 00 00                    mov     rcx, [rcx+0CB0h]
.std:000000014FDD3118 41 8B 95 50 20 00 00                    mov     edx, [r13+2050h]
.std:000000014FDD311F 48 8B 01                                mov     rax, [rcx]
.std:000000014FDD3122 FF 50 30                                call    qword ptr [rax+30h]
.std:000000014FDD3125 48 8B 73 40                             mov     rsi, [rbx+40h]
.std:000000014FDD3129 89 45 08                                mov     [rbp+8], eax
.std:000000014FDD312C 83 7E 08 FF                             cmp     dword ptr [rsi+8], 0FFFFFFFFh
.std:000000014FDD3130 75 08                                   jnz     short loc_14FDD313A
.std:000000014FDD3132 48 8B CE                                mov     rcx, rsi
.std:000000014FDD3135 E8 D6 EC 4D 00                          call    sub_1502B1E10
.std:000000014FDD313A
.std:000000014FDD313A                         loc_14FDD313A:                          ; CODE XREF: sub_14FDD11F0+1F40↑j
.std:000000014FDD313A 48 8B 46 48                             mov     rax, [rsi+48h]
.std:000000014FDD313E 4C 8D 83 20 01 00 00                    lea     r8, [rbx+120h]
.std:000000014FDD3145 4C 8D 4D 08                             lea     r9, [rbp+8]
.std:000000014FDD3149 48 89 45 90                             mov     [rbp-70h], rax
.std:000000014FDD314D 48 8D 55 90                             lea     rdx, [rbp-70h]
.std:000000014FDD3151 44 89 74 24 20                          mov     [rsp+20h], r14d
.std:000000014FDD3156 49 8B CC                                mov     rcx, r12
.std:000000014FDD3159 E8 32 DD B8 F2                          call    sub_142960E90
.std:000000014FDD315E
.std:000000014FDD315E                         loc_14FDD315E:                          ; CODE XREF: sub_14FDD11F0+1E95↑j
.std:000000014FDD315E                                                                 ; sub_14FDD11F0+1EDF↑j
.std:000000014FDD315E 4C 89 74 24 48                          mov     [rsp+48h], r14
.std:000000014FDD3163 E8 F8 A1 23 FF                          call    sub_14F00D360
.std:000000014FDD3168 84 C0                                   test    al, al
.std:000000014FDD316A 74 17                                   jz      short loc_14FDD3183
.std:000000014FDD316C 4C 8D 0D 7D 7C 67 07                    lea     r9, aGroupedqueries ; "GroupedQueries"
.std:000000014FDD3173 45 8B C6                                mov     r8d, r14d
.std:000000014FDD3176 49 8B D4                                mov     rdx, r12
.std:000000014FDD3179 48 8D 4C 24 48                          lea     rcx, [rsp+48h]
.std:000000014FDD317E E8 9D 33 4C 00                          call    sub_150296520
.std:000000014FDD3183
.std:000000014FDD3183                         loc_14FDD3183:                          ; CODE XREF: sub_14FDD11F0+1F7A↑j
.std:000000014FDD3183 49 8D 8D 00 BC 00 00                    lea     rcx, [r13+0BC00h]
.std:000000014FDD318A 49 8B D4                                mov     rdx, r12
.std:000000014FDD318D E8 FE 4F 00 00                          call    sub_14FDD8190
.std:000000014FDD3192 48 83 7C 24 48 00                       cmp     qword ptr [rsp+48h], 0
.std:000000014FDD3198 74 0A                                   jz      short loc_14FDD31A4
.std:000000014FDD319A 48 8D 4C 24 48                          lea     rcx, [rsp+48h]
.std:000000014FDD319F E8 CC 3F 4C 00                          call    sub_150297170
.std:000000014FDD31A4
.std:000000014FDD31A4                         loc_14FDD31A4:                          ; CODE XREF: sub_14FDD11F0+1FA8↑j
.std:000000014FDD31A4 4C 89 74 24 48                          mov     [rsp+48h], r14
.std:000000014FDD31A9 E8 B2 A1 23 FF                          call    sub_14F00D360
.std:000000014FDD31AE 84 C0                                   test    al, al
.std:000000014FDD31B0 74 17                                   jz      short loc_14FDD31C9
.std:000000014FDD31B2 4C 8D 0D 57 7C 67 07                    lea     r9, aIndividualquer ; "IndividualQueries"
.std:000000014FDD31B9 45 8B C6                                mov     r8d, r14d
.std:000000014FDD31BC 49 8B D4                                mov     rdx, r12
.std:000000014FDD31BF 48 8D 4C 24 48                          lea     rcx, [rsp+48h]
.std:000000014FDD31C4 E8 57 33 4C 00                          call    sub_150296520
.std:000000014FDD31C9
.std:000000014FDD31C9                         loc_14FDD31C9:                          ; CODE XREF: sub_14FDD11F0+1FC0↑j
.std:000000014FDD31C9 49 8D 8D D8 BB 00 00                    lea     rcx, [r13+0BBD8h]
.std:000000014FDD31D0 49 8B D4                                mov     rdx, r12
.std:000000014FDD31D3 E8 B8 4F 00 00                          call    sub_14FDD8190
.std:000000014FDD31D8 48 83 7C 24 48 00                       cmp     qword ptr [rsp+48h], 0
.std:000000014FDD31DE 74 0A                                   jz      short loc_14FDD31EA
.std:000000014FDD31E0 48 8D 4C 24 48                          lea     rcx, [rsp+48h]
.std:000000014FDD31E5 E8 86 3F 4C 00                          call    sub_150297170
.std:000000014FDD31EA
.std:000000014FDD31EA                         loc_14FDD31EA:                          ; CODE XREF: sub_14FDD11F0+1FEE↑j
.std:000000014FDD31EA 41 39 BC 24 98 00 00 00                 cmp     [r12+98h], edi
.std:000000014FDD31F2 74 2B                                   jz      short loc_14FDD321F
.std:000000014FDD31F4 41 83 7C 24 14 00                       cmp     dword ptr [r12+14h], 0
.std:000000014FDD31FA 41 89 BC 24 98 00 00 00                 mov     [r12+98h], edi
.std:000000014FDD3202 77 13                                   ja      short loc_14FDD3217
.std:000000014FDD3204 80 3D 0D D4 81 0A 00                    cmp     cs:byte_15A5F0618, 0
.std:000000014FDD320B 75 0A                                   jnz     short loc_14FDD3217
.std:000000014FDD320D 41 89 BC 24 9C 00 00 00                 mov     [r12+9Ch], edi
.std:000000014FDD3215 EB 08                                   jmp     short loc_14FDD321F
.std:000000014FDD3217                         ; ---------------------------------------------------------------------------
.std:000000014FDD3217
.std:000000014FDD3217                         loc_14FDD3217:                          ; CODE XREF: sub_14FDD11F0+2012↑j
.std:000000014FDD3217                                                                 ; sub_14FDD11F0+201B↑j
.std:000000014FDD3217 49 8B CC                                mov     rcx, r12
.std:000000014FDD321A E8 81 01 49 00                          call    sub_1502633A0
.std:000000014FDD321F
.std:000000014FDD321F                         loc_14FDD321F:                          ; CODE XREF: sub_14FDD11F0+2002↑j
.std:000000014FDD321F                                                                 ; sub_14FDD11F0+2025↑j
.std:000000014FDD321F 48 83 7D C0 00                          cmp     qword ptr [rbp-40h], 0
.std:000000014FDD3224 74 09                                   jz      short loc_14FDD322F
.std:000000014FDD3226 48 8D 4D C0                             lea     rcx, [rbp-40h]
.std:000000014FDD322A E8 41 3F 4C 00                          call    sub_150297170
.std:000000014FDD322F
.std:000000014FDD322F                         loc_14FDD322F:                          ; CODE XREF: sub_14FDD11F0+2034↑j
.std:000000014FDD322F 8B 7C 24 78                             mov     edi, [rsp+78h]
.std:000000014FDD3233 48 8B 5D E0                             mov     rbx, [rbp-20h]
.std:000000014FDD3237 FF C7                                   inc     edi
.std:000000014FDD3239 4C 8B 6C 24 70                          mov     r13, [rsp+70h]
.std:000000014FDD323E 48 FF C3                                inc     rbx
.std:000000014FDD3241 48 8B 75 28                             mov     rsi, [rbp+28h]
.std:000000014FDD3245 44 0F B6 7C 24 40                       movzx   r15d, byte ptr [rsp+40h]
.std:000000014FDD324B 89 7C 24 78                             mov     [rsp+78h], edi
.std:000000014FDD324F 48 89 5D E0                             mov     [rbp-20h], rbx
.std:000000014FDD3253 41 3B BD D8 00 00 00                    cmp     edi, [r13+0D8h]
.std:000000014FDD325A 0F 8C A4 ED FF FF                       jl      loc_14FDD2004
.std:000000014FDD3260 44 0F 28 94 24 80 04 00                 movaps  xmm10, xmmword ptr [rsp+480h]
.std:000000014FDD3260 00
.std:000000014FDD3269 44 0F 28 8C 24 90 04 00                 movaps  xmm9, xmmword ptr [rsp+490h]
.std:000000014FDD3269 00
.std:000000014FDD3272 44 0F 28 84 24 A0 04 00                 movaps  xmm8, xmmword ptr [rsp+4A0h]
.std:000000014FDD3272 00
.std:000000014FDD327B 0F 28 BC 24 B0 04 00 00                 movaps  xmm7, xmmword ptr [rsp+4B0h]
.std:000000014FDD3283 0F 28 B4 24 C0 04 00 00                 movaps  xmm6, xmmword ptr [rsp+4C0h]
.std:000000014FDD3283                         ; } // starts at 14FDD1FB5
.std:000000014FDD328B
.std:000000014FDD328B                         loc_14FDD328B:                          ; CODE XREF: sub_14FDD11F0+DBF↑j
.std:000000014FDD328B                         ; __unwind { // sub_152B5621C
.std:000000014FDD328B 41 83 BD 08 04 00 00 01                 cmp     dword ptr [r13+408h], 1
.std:000000014FDD3293 7E 08                                   jle     short loc_14FDD329D
.std:000000014FDD3295 49 8B CC                                mov     rcx, r12
.std:000000014FDD3298 E8 A3 75 63 F1                          call    sub_14140A840
.std:000000014FDD329D
.std:000000014FDD329D                         loc_14FDD329D:                          ; CODE XREF: sub_14FDD11F0+20A3↑j
.std:000000014FDD329D 80 7C 24 40 00                          cmp     byte ptr [rsp+40h], 0
.std:000000014FDD32A2 74 22                                   jz      short loc_14FDD32C6
.std:000000014FDD32A4 48 8B 4D C8                             mov     rcx, [rbp-38h]
.std:000000014FDD32A8 41 B9 21 00 00 00                       mov     r9d, 21h ; '!'
.std:000000014FDD32AE C6 44 24 28 00                          mov     byte ptr [rsp+28h], 0
.std:000000014FDD32B3 41 B8 02 00 00 00                       mov     r8d, 2
.std:000000014FDD32B9 49 8B D4                                mov     rdx, r12
.std:000000014FDD32BC C6 44 24 20 01                          mov     byte ptr [rsp+20h], 1
.std:000000014FDD32C1 E8 BA E5 E7 FF                          call    sub_14FC51880
.std:000000014FDD32C6
.std:000000014FDD32C6                         loc_14FDD32C6:                          ; CODE XREF: sub_14FDD11F0+20B2↑j
.std:000000014FDD32C6 48 83 7D 88 00                          cmp     qword ptr [rbp-78h], 0
.std:000000014FDD32CB 74 09                                   jz      short loc_14FDD32D6
.std:000000014FDD32CD 48 8D 4D 88                             lea     rcx, [rbp-78h]
.std:000000014FDD32D1 E8 9A 3E 4C 00                          call    sub_150297170
.std:000000014FDD32D6
.std:000000014FDD32D6                         loc_14FDD32D6:                          ; CODE XREF: sub_14FDD11F0+8B7↑j
.std:000000014FDD32D6                                                                 ; sub_14FDD11F0+20DB↑j
.std:000000014FDD32D6 4C 8B A4 24 E8 04 00 00                 mov     r12, [rsp+4E8h]
.std:000000014FDD32D6                         ; } // starts at 14FDD328B
.std:000000014FDD32DE
.std:000000014FDD32DE                         loc_14FDD32DE:                          ; CODE XREF: sub_14FDD11F0+15B↑j
.std:000000014FDD32DE                         ; __unwind { // sub_152B5621C
.std:000000014FDD32DE 48 8D 4D E8                             lea     rcx, [rbp-18h]
.std:000000014FDD32E2 E8 29 A6 FF FF                          call    sub_14FDCD910
.std:000000014FDD32E7 4C 8B BC 24 D0 04 00 00                 mov     r15, [rsp+4D0h]
.std:000000014FDD32EF 4C 8B B4 24 D8 04 00 00                 mov     r14, [rsp+4D8h]
.std:000000014FDD32F7 4C 8B AC 24 E0 04 00 00                 mov     r13, [rsp+4E0h]
.std:000000014FDD32FF 48 8B B4 24 20 05 00 00                 mov     rsi, [rsp+520h]
.std:000000014FDD32FF                         ; } // starts at 14FDD32DE
.std:000000014FDD3307
.std:000000014FDD3307                         loc_14FDD3307:                          ; CODE XREF: sub_14FDD11F0+6C↑j
.std:000000014FDD3307                         ; __unwind { // sub_152B5621C
.std:000000014FDD3307 48 8B 8D 70 03 00 00                    mov     rcx, [rbp+370h]
.std:000000014FDD330E 48 33 CC                                xor     rcx, rsp
.std:000000014FDD3311 E8 7A 30 D8 02                          call    sub_152B56390
.std:000000014FDD3316 48 81 C4 F0 04 00 00                    add     rsp, 4F0h
.std:000000014FDD331D 5F                                      pop     rdi
.std:000000014FDD331E 5B                                      pop     rbx
.std:000000014FDD331F 5D                                      pop     rbp
.std:000000014FDD3320 C3                                      retn
.std:000000014FDD3320                         ; } // starts at 14FDD3307
.std:000000014FDD3320                         sub_14FDD11F0   endp
.std:000000014FDD3320
.std:000000014FDD3320                         ; ---------------------------------------------------------------------------
.std:000000014FDD3321 CC CC CC CC CC CC CC CC…                align 10h
.std:000000014FDD3330
.std:000000014FDD3330                         ; =============== S U B R O U T I N E =======================================
.std:000000014FDD3330
.std:000000014FDD3330
.std:000000014FDD3330                         sub_14FDD3330   proc near
.std:000000014FDD3330 44 88 4C 24 20                          mov     [rsp+20h], r9b
.std:000000014FDD3335 56                                      push    rsi
.std:000000014FDD3336 57                                      push    rdi
.std:000000014FDD3337 41 54                                   push    r12
.std:000000014FDD3339 41 55                                   push    r13
.std:000000014FDD333B 41 56                                   push    r14
.std:000000014FDD333D 41 57                                   push    r15
.std:000000014FDD333F 48 83 EC 58                             sub     rsp, 58h
.std:000000014FDD3343 49 8B 48 20                             mov     rcx, [r8+20h]
.std:000000014FDD3347 45 0F B6 E1                             movzx   r12d, r9b
.std:000000014FDD334B 48 89 6C 24 50                          mov     [rsp+50h], rbp
.std:000000014FDD3350 49 8B F8                                mov     rdi, r8
.std:000000014FDD3353 4C 8B EA                                mov     r13, rdx
.std:000000014FDD3356 45 33 FF                                xor     r15d, r15d
.std:000000014FDD3359 48 8B 01                                mov     rax, [rcx]
.std:000000014FDD335C FF 90 08 04 00 00                       call    qword ptr [rax+408h]
.std:000000014FDD3362 48 8B F0                                mov     rsi, rax
.std:000000014FDD3365 48 85 C0                                test    rax, rax
.std:000000014FDD3368 74 1C                                   jz      short loc_14FDD3386
.std:000000014FDD336A 48 8B 00                                mov     rax, [rax]
.std:000000014FDD336D 48 8B CE                                mov     rcx, rsi
.std:000000014FDD3370 FF 90 00 04 00 00                       call    qword ptr [rax+400h]
.std:000000014FDD3376 4C 8B F8                                mov     r15, rax
.std:000000014FDD3379 48 85 C0                                test    rax, rax
.std:000000014FDD337C 74 08                                   jz      short loc_14FDD3386
.std:000000014FDD337E 48 8B C8                                mov     rcx, rax
.std:000000014FDD3381 E8 5A 41 F0 00                          call    sub_150CD74E0
.std:000000014FDD3386
.std:000000014FDD3386                         loc_14FDD3386:                          ; CODE XREF: sub_14FDD3330+38↑j
.std:000000014FDD3386                                                                 ; sub_14FDD3330+4C↑j
.std:000000014FDD3386 48 89 9C 24 90 00 00 00                 mov     [rsp+90h], rbx
.std:000000014FDD338E E8 AD 73 19 FF                          call    sub_14EF6A740
.std:000000014FDD3393 41 BE FF FF FF FF                       mov     r14d, 0FFFFFFFFh
.std:000000014FDD3399 84 C0                                   test    al, al
.std:000000014FDD339B 0F 85 B6 00 00 00                       jnz     loc_14FDD3457
.std:000000014FDD33A1 38 05 A2 8B 82 0A                       cmp     cs:byte_15A5FBF49, al
.std:000000014FDD33A7 75 23                                   jnz     short loc_14FDD33CC
.std:000000014FDD33A9 38 05 79 BE 6D 0A                       cmp     cs:byte_15A4AF228, al
.std:000000014FDD33AF 0F 84 A2 00 00 00                       jz      loc_14FDD3457
.std:000000014FDD33B5 FF 15 8D 31 0A 03                       call    cs:qword_152E76548
.std:000000014FDD33BB 3B 05 57 BE 6D 0A                       cmp     eax, cs:dword_15A4AF218
.std:000000014FDD33C1 0F 94 C0                                setz    al
.std:000000014FDD33C4 84 C0                                   test    al, al
.std:000000014FDD33C6 0F 85 8B 00 00 00                       jnz     loc_14FDD3457
.std:000000014FDD33CC
.std:000000014FDD33CC                         loc_14FDD33CC:                          ; CODE XREF: sub_14FDD3330+77↑j
.std:000000014FDD33CC 33 D2                                   xor     edx, edx
.std:000000014FDD33CE 48 8D 4C 24 30                          lea     rcx, [rsp+30h]
.std:000000014FDD33D3 39 15 47 3D 9D 09                       cmp     cs:dword_1597A7120, edx
.std:000000014FDD33D9 41 B8 FF 00 00 00                       mov     r8d, 0FFh
.std:000000014FDD33DF 75 43                                   jnz     short loc_14FDD3424
.std:000000014FDD33E1 E8 8A 21 00 00                          call    sub_14FDD5570
.std:000000014FDD33E6 41 B1 01                                mov     r9b, 1
.std:000000014FDD33E9 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD33EC 44 8B 40 10                             mov     r8d, [rax+10h]
.std:000000014FDD33F0 48 8B 50 08                             mov     rdx, [rax+8]
.std:000000014FDD33F4 48 8B 59 18                             mov     rbx, [rcx+18h]
.std:000000014FDD33F8 48 85 DB                                test    rbx, rbx
.std:000000014FDD33FB 74 20                                   jz      short loc_14FDD341D
.std:000000014FDD33FD F0 FF 43 48                             lock inc dword ptr [rbx+48h]
.std:000000014FDD3401 E8 AA 5C 05 F1                          call    sub_140E290B0
.std:000000014FDD3406 41 8B C6                                mov     eax, r14d
.std:000000014FDD3409 F0 0F C1 43 48                          lock xadd [rbx+48h], eax
.std:000000014FDD340E 83 F8 01                                cmp     eax, 1
.std:000000014FDD3411 75 4E                                   jnz     short loc_14FDD3461
.std:000000014FDD3413 48 8B CB                                mov     rcx, rbx
.std:000000014FDD3416 E8 D5 3C 15 FF                          call    sub_14EF270F0
.std:000000014FDD341B EB 44                                   jmp     short loc_14FDD3461
.std:000000014FDD341D                         ; ---------------------------------------------------------------------------
.std:000000014FDD341D
.std:000000014FDD341D                         loc_14FDD341D:                          ; CODE XREF: sub_14FDD3330+CB↑j
.std:000000014FDD341D E8 8E 5C 05 F1                          call    sub_140E290B0
.std:000000014FDD3422 EB 3D                                   jmp     short loc_14FDD3461
.std:000000014FDD3424                         ; ---------------------------------------------------------------------------
.std:000000014FDD3424
.std:000000014FDD3424                         loc_14FDD3424:                          ; CODE XREF: sub_14FDD3330+AF↑j
.std:000000014FDD3424 E8 47 21 00 00                          call    sub_14FDD5570
.std:000000014FDD3429 45 33 C9                                xor     r9d, r9d
.std:000000014FDD342C 48 8B 18                                mov     rbx, [rax]
.std:000000014FDD342F 44 8B 40 10                             mov     r8d, [rax+10h]
.std:000000014FDD3433 48 8B CB                                mov     rcx, rbx
.std:000000014FDD3436 48 8B 50 08                             mov     rdx, [rax+8]
.std:000000014FDD343A E8 71 5C 05 F1                          call    sub_140E290B0
.std:000000014FDD343F E8 FC FC 14 FF                          call    sub_14EF23140
.std:000000014FDD3444 44 8B 43 08                             mov     r8d, [rbx+8]
.std:000000014FDD3448 48 8B D3                                mov     rdx, rbx
.std:000000014FDD344B 48 8B C8                                mov     rcx, rax
.std:000000014FDD344E 4C 8B 08                                mov     r9, [rax]
.std:000000014FDD3451 41 FF 51 08                             call    qword ptr [r9+8]
.std:000000014FDD3455 EB 0A                                   jmp     short loc_14FDD3461
.std:000000014FDD3457                         ; ---------------------------------------------------------------------------
.std:000000014FDD3457
.std:000000014FDD3457                         loc_14FDD3457:                          ; CODE XREF: sub_14FDD3330+6B↑j
.std:000000014FDD3457                                                                 ; sub_14FDD3330+7F↑j ...
.std:000000014FDD3457 E8 64 57 4B 00                          call    sub_150288BC0
.std:000000014FDD345C E8 8F 35 FA 00                          call    sub_150D769F0
.std:000000014FDD3461
.std:000000014FDD3461                         loc_14FDD3461:                          ; CODE XREF: sub_14FDD3330+E1↑j
.std:000000014FDD3461                                                                 ; sub_14FDD3330+EB↑j ...
.std:000000014FDD3461 E8 DA 72 19 FF                          call    sub_14EF6A740
.std:000000014FDD3466 84 C0                                   test    al, al
.std:000000014FDD3468 0F 85 B6 00 00 00                       jnz     loc_14FDD3524
.std:000000014FDD346E 38 05 D5 8A 82 0A                       cmp     cs:byte_15A5FBF49, al
.std:000000014FDD3474 75 23                                   jnz     short loc_14FDD3499
.std:000000014FDD3476 38 05 AC BD 6D 0A                       cmp     cs:byte_15A4AF228, al
.std:000000014FDD347C 0F 84 A2 00 00 00                       jz      loc_14FDD3524
.std:000000014FDD3482 FF 15 C0 30 0A 03                       call    cs:qword_152E76548
.std:000000014FDD3488 3B 05 8A BD 6D 0A                       cmp     eax, cs:dword_15A4AF218
.std:000000014FDD348E 0F 94 C0                                setz    al
.std:000000014FDD3491 84 C0                                   test    al, al
.std:000000014FDD3493 0F 85 8B 00 00 00                       jnz     loc_14FDD3524
.std:000000014FDD3499
.std:000000014FDD3499                         loc_14FDD3499:                          ; CODE XREF: sub_14FDD3330+144↑j
.std:000000014FDD3499 33 D2                                   xor     edx, edx
.std:000000014FDD349B 48 8D 4C 24 30                          lea     rcx, [rsp+30h]
.std:000000014FDD34A0 39 15 7A 3C 9D 09                       cmp     cs:dword_1597A7120, edx
.std:000000014FDD34A6 41 B8 FF 00 00 00                       mov     r8d, 0FFh
.std:000000014FDD34AC 75 43                                   jnz     short loc_14FDD34F1
.std:000000014FDD34AE E8 FD 21 00 00                          call    sub_14FDD56B0
.std:000000014FDD34B3 41 B1 01                                mov     r9b, 1
.std:000000014FDD34B6 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD34B9 44 8B 40 10                             mov     r8d, [rax+10h]
.std:000000014FDD34BD 48 8B 50 08                             mov     rdx, [rax+8]
.std:000000014FDD34C1 48 8B 59 18                             mov     rbx, [rcx+18h]
.std:000000014FDD34C5 48 85 DB                                test    rbx, rbx
.std:000000014FDD34C8 74 20                                   jz      short loc_14FDD34EA
.std:000000014FDD34CA F0 FF 43 48                             lock inc dword ptr [rbx+48h]
.std:000000014FDD34CE E8 DD 5B 05 F1                          call    sub_140E290B0
.std:000000014FDD34D3 41 8B C6                                mov     eax, r14d
.std:000000014FDD34D6 F0 0F C1 43 48                          lock xadd [rbx+48h], eax
.std:000000014FDD34DB 83 F8 01                                cmp     eax, 1
.std:000000014FDD34DE 75 55                                   jnz     short loc_14FDD3535
.std:000000014FDD34E0 48 8B CB                                mov     rcx, rbx
.std:000000014FDD34E3 E8 08 3C 15 FF                          call    sub_14EF270F0
.std:000000014FDD34E8 EB 4B                                   jmp     short loc_14FDD3535
.std:000000014FDD34EA                         ; ---------------------------------------------------------------------------
.std:000000014FDD34EA
.std:000000014FDD34EA                         loc_14FDD34EA:                          ; CODE XREF: sub_14FDD3330+198↑j
.std:000000014FDD34EA E8 C1 5B 05 F1                          call    sub_140E290B0
.std:000000014FDD34EF EB 44                                   jmp     short loc_14FDD3535
.std:000000014FDD34F1                         ; ---------------------------------------------------------------------------
.std:000000014FDD34F1
.std:000000014FDD34F1                         loc_14FDD34F1:                          ; CODE XREF: sub_14FDD3330+17C↑j
.std:000000014FDD34F1 E8 BA 21 00 00                          call    sub_14FDD56B0
.std:000000014FDD34F6 45 33 C9                                xor     r9d, r9d
.std:000000014FDD34F9 48 8B 18                                mov     rbx, [rax]
.std:000000014FDD34FC 44 8B 40 10                             mov     r8d, [rax+10h]
.std:000000014FDD3500 48 8B CB                                mov     rcx, rbx
.std:000000014FDD3503 48 8B 50 08                             mov     rdx, [rax+8]
.std:000000014FDD3507 E8 A4 5B 05 F1                          call    sub_140E290B0
.std:000000014FDD350C E8 2F FC 14 FF                          call    sub_14EF23140
.std:000000014FDD3511 44 8B 43 08                             mov     r8d, [rbx+8]
.std:000000014FDD3515 48 8B D3                                mov     rdx, rbx
.std:000000014FDD3518 48 8B C8                                mov     rcx, rax
.std:000000014FDD351B 4C 8B 08                                mov     r9, [rax]
.std:000000014FDD351E 41 FF 51 08                             call    qword ptr [r9+8]
.std:000000014FDD3522 EB 11                                   jmp     short loc_14FDD3535
.std:000000014FDD3524                         ; ---------------------------------------------------------------------------
.std:000000014FDD3524
.std:000000014FDD3524                         loc_14FDD3524:                          ; CODE XREF: sub_14FDD3330+138↑j
.std:000000014FDD3524                                                                 ; sub_14FDD3330+14C↑j ...
.std:000000014FDD3524 E8 97 56 4B 00                          call    sub_150288BC0
.std:000000014FDD3529 48 8D 0D E0 17 7D 0A                    lea     rcx, dword_15A5A4D10
.std:000000014FDD3530 E8 9B 41 01 00                          call    sub_14FDE76D0
.std:000000014FDD3535
.std:000000014FDD3535                         loc_14FDD3535:                          ; CODE XREF: sub_14FDD3330+1AE↑j
.std:000000014FDD3535                                                                 ; sub_14FDD3330+1B8↑j ...
.std:000000014FDD3535 33 D2                                   xor     edx, edx
.std:000000014FDD3537 49 8B CD                                mov     rcx, r13
.std:000000014FDD353A E8 11 27 49 01                          call    sub_151265C50
.std:000000014FDD353F 48 85 F6                                test    rsi, rsi
.std:000000014FDD3542 74 1A                                   jz      short loc_14FDD355E
.std:000000014FDD3544 48 8B 06                                mov     rax, [rsi]
.std:000000014FDD3547 48 8B CE                                mov     rcx, rsi
.std:000000014FDD354A FF 90 88 04 00 00                       call    qword ptr [rax+488h]
.std:000000014FDD3550 48 8B 06                                mov     rax, [rsi]
.std:000000014FDD3553 48 8B CE                                mov     rcx, rsi
.std:000000014FDD3556 FF 90 80 04 00 00                       call    qword ptr [rax+480h]
.std:000000014FDD355C EB 06                                   jmp     short loc_14FDD3564
.std:000000014FDD355E                         ; ---------------------------------------------------------------------------
.std:000000014FDD355E
.std:000000014FDD355E                         loc_14FDD355E:                          ; CODE XREF: sub_14FDD3330+212↑j
.std:000000014FDD355E 8B 05 84 A5 83 09                       mov     eax, cs:dword_15960DAE8
.std:000000014FDD3564
.std:000000014FDD3564                         loc_14FDD3564:                          ; CODE XREF: sub_14FDD3330+22C↑j
.std:000000014FDD3564 33 ED                                   xor     ebp, ebp
.std:000000014FDD3566 89 47 40                                mov     [rdi+40h], eax
.std:000000014FDD3569 39 6F 78                                cmp     [rdi+78h], ebp
.std:000000014FDD356C 7E 2D                                   jle     short loc_14FDD359B
.std:000000014FDD356E 33 DB                                   xor     ebx, ebx
.std:000000014FDD3570
.std:000000014FDD3570                         loc_14FDD3570:                          ; CODE XREF: sub_14FDD3330+260↓j
.std:000000014FDD3570 48 8D 4F 70                             lea     rcx, [rdi+70h]
.std:000000014FDD3574 FF 15 06 A5 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD357A 48 8B D7                                mov     rdx, rdi
.std:000000014FDD357D 48 8B 0C 03                             mov     rcx, [rbx+rax]
.std:000000014FDD3581 48 8B 01                                mov     rax, [rcx]
.std:000000014FDD3584 FF 50 28                                call    qword ptr [rax+28h]
.std:000000014FDD3587 FF C5                                   inc     ebp
.std:000000014FDD3589 48 8D 5B 10                             lea     rbx, [rbx+10h]
.std:000000014FDD358D 3B 6F 78                                cmp     ebp, [rdi+78h]
.std:000000014FDD3590 7C DE                                   jl      short loc_14FDD3570
.std:000000014FDD3592 44 0F B6 A4 24 A8 00 00                 movzx   r12d, byte ptr [rsp+0A8h]
.std:000000014FDD3592 00
.std:000000014FDD359B
.std:000000014FDD359B                         loc_14FDD359B:                          ; CODE XREF: sub_14FDD3330+23C↑j
.std:000000014FDD359B 48 8B 6C 24 50                          mov     rbp, [rsp+50h]
.std:000000014FDD35A0 48 85 F6                                test    rsi, rsi
.std:000000014FDD35A3 0F 84 E6 02 00 00                       jz      loc_14FDD388F
.std:000000014FDD35A9 4D 85 FF                                test    r15, r15
.std:000000014FDD35AC 74 15                                   jz      short loc_14FDD35C3
.std:000000014FDD35AE 44 8B 86 78 37 00 00                    mov     r8d, [rsi+3778h]
.std:000000014FDD35B5 49 8B CF                                mov     rcx, r15
.std:000000014FDD35B8 8B 96 74 37 00 00                       mov     edx, [rsi+3774h]
.std:000000014FDD35BE E8 3D F2 02 F1                          call    lua_setprotopageout
.std:000000014FDD35C3
.std:000000014FDD35C3                         loc_14FDD35C3:                          ; CODE XREF: sub_14FDD3330+27C↑j
.std:000000014FDD35C3 49 8B 55 60                             mov     rdx, [r13+60h]
.std:000000014FDD35C7 45 33 C9                                xor     r9d, r9d
.std:000000014FDD35CA C6 44 24 28 00                          mov     byte ptr [rsp+28h], 0
.std:000000014FDD35CF 45 0F B6 C4                             movzx   r8d, r12b
.std:000000014FDD35D3 48 8B CF                                mov     rcx, rdi
.std:000000014FDD35D6 C6 44 24 20 00                          mov     byte ptr [rsp+20h], 0
.std:000000014FDD35DB E8 50 10 00 00                          call    sub_14FDD4630
.std:000000014FDD35E0 48 8B CE                                mov     rcx, rsi
.std:000000014FDD35E3 48 8B F8                                mov     rdi, rax
.std:000000014FDD35E6 E8 25 44 C7 00                          call    sub_150A47A10
.std:000000014FDD35EB 48 89 BC 24 A0 00 00 00                 mov     [rsp+0A0h], rdi
.std:000000014FDD35F3 E8 48 71 19 FF                          call    sub_14EF6A740
.std:000000014FDD35F8 84 C0                                   test    al, al
.std:000000014FDD35FA 75 2B                                   jnz     short loc_14FDD3627
.std:000000014FDD35FC 38 05 47 89 82 0A                       cmp     cs:byte_15A5FBF49, al
.std:000000014FDD3602 75 3D                                   jnz     short loc_14FDD3641
.std:000000014FDD3604 38 05 1E BC 6D 0A                       cmp     cs:byte_15A4AF228, al
.std:000000014FDD360A 74 13                                   jz      short loc_14FDD361F
.std:000000014FDD360C FF 15 36 2F 0A 03                       call    cs:qword_152E76548
.std:000000014FDD3612 3B 05 00 BC 6D 0A                       cmp     eax, cs:dword_15A4AF218
.std:000000014FDD3618 0F 94 C0                                setz    al
.std:000000014FDD361B 84 C0                                   test    al, al
.std:000000014FDD361D 74 22                                   jz      short loc_14FDD3641
.std:000000014FDD361F
.std:000000014FDD361F                         loc_14FDD361F:                          ; CODE XREF: sub_14FDD3330+2DA↑j
.std:000000014FDD361F 48 89 BC 24 A0 00 00 00                 mov     [rsp+0A0h], rdi
.std:000000014FDD3627
.std:000000014FDD3627                         loc_14FDD3627:                          ; CODE XREF: sub_14FDD3330+2CA↑j
.std:000000014FDD3627 E8 94 55 4B 00                          call    sub_150288BC0
.std:000000014FDD362C 48 8B D0                                mov     rdx, rax
.std:000000014FDD362F 48 8D 8C 24 A0 00 00 00                 lea     rcx, [rsp+0A0h]
.std:000000014FDD3637 E8 F4 B7 FF FF                          call    sub_14FDCEE30
.std:000000014FDD363C E9 97 00 00 00                          jmp     loc_14FDD36D8
.std:000000014FDD3641                         ; ---------------------------------------------------------------------------
.std:000000014FDD3641
.std:000000014FDD3641                         loc_14FDD3641:                          ; CODE XREF: sub_14FDD3330+2D2↑j
.std:000000014FDD3641                                                                 ; sub_14FDD3330+2ED↑j
.std:000000014FDD3641 33 D2                                   xor     edx, edx
.std:000000014FDD3643 48 8D 4C 24 30                          lea     rcx, [rsp+30h]
.std:000000014FDD3648 39 15 D2 3A 9D 09                       cmp     cs:dword_1597A7120, edx
.std:000000014FDD364E 41 B8 FF 00 00 00                       mov     r8d, 0FFh
.std:000000014FDD3654 75 4A                                   jnz     short loc_14FDD36A0
.std:000000014FDD3656 E8 95 1C 00 00                          call    sub_14FDD52F0
.std:000000014FDD365B 41 B1 01                                mov     r9b, 1
.std:000000014FDD365E 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD3661 48 89 79 10                             mov     [rcx+10h], rdi
.std:000000014FDD3665 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD3668 44 8B 40 10                             mov     r8d, [rax+10h]
.std:000000014FDD366C 48 8B 50 08                             mov     rdx, [rax+8]
.std:000000014FDD3670 48 8B 59 20                             mov     rbx, [rcx+20h]
.std:000000014FDD3674 48 85 DB                                test    rbx, rbx
.std:000000014FDD3677 74 20                                   jz      short loc_14FDD3699
.std:000000014FDD3679 F0 FF 43 48                             lock inc dword ptr [rbx+48h]
.std:000000014FDD367D E8 CE 57 05 F1                          call    sub_140E28E50
.std:000000014FDD3682 41 8B C6                                mov     eax, r14d
.std:000000014FDD3685 F0 0F C1 43 48                          lock xadd [rbx+48h], eax
.std:000000014FDD368A 83 F8 01                                cmp     eax, 1
.std:000000014FDD368D 75 49                                   jnz     short loc_14FDD36D8
.std:000000014FDD368F 48 8B CB                                mov     rcx, rbx
.std:000000014FDD3692 E8 59 3A 15 FF                          call    sub_14EF270F0
.std:000000014FDD3697 EB 3F                                   jmp     short loc_14FDD36D8
.std:000000014FDD3699                         ; ---------------------------------------------------------------------------
.std:000000014FDD3699
.std:000000014FDD3699                         loc_14FDD3699:                          ; CODE XREF: sub_14FDD3330+347↑j
.std:000000014FDD3699 E8 B2 57 05 F1                          call    sub_140E28E50
.std:000000014FDD369E EB 38                                   jmp     short loc_14FDD36D8
.std:000000014FDD36A0                         ; ---------------------------------------------------------------------------
.std:000000014FDD36A0
.std:000000014FDD36A0                         loc_14FDD36A0:                          ; CODE XREF: sub_14FDD3330+324↑j
.std:000000014FDD36A0 E8 4B 1C 00 00                          call    sub_14FDD52F0
.std:000000014FDD36A5 45 33 C9                                xor     r9d, r9d
.std:000000014FDD36A8 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD36AB 48 89 79 10                             mov     [rcx+10h], rdi
.std:000000014FDD36AF 48 8B 18                                mov     rbx, [rax]
.std:000000014FDD36B2 44 8B 40 10                             mov     r8d, [rax+10h]
.std:000000014FDD36B6 48 8B CB                                mov     rcx, rbx
.std:000000014FDD36B9 48 8B 50 08                             mov     rdx, [rax+8]
.std:000000014FDD36BD E8 8E 57 05 F1                          call    sub_140E28E50
.std:000000014FDD36C2 E8 79 FA 14 FF                          call    sub_14EF23140
.std:000000014FDD36C7 44 8B 43 08                             mov     r8d, [rbx+8]
.std:000000014FDD36CB 48 8B D3                                mov     rdx, rbx
.std:000000014FDD36CE 48 8B C8                                mov     rcx, rax
.std:000000014FDD36D1 4C 8B 08                                mov     r9, [rax]
.std:000000014FDD36D4 41 FF 51 08                             call    qword ptr [r9+8]
.std:000000014FDD36D8
.std:000000014FDD36D8                         loc_14FDD36D8:                          ; CODE XREF: sub_14FDD3330+30C↑j
.std:000000014FDD36D8                                                                 ; sub_14FDD3330+35D↑j ...
.std:000000014FDD36D8 48 8B 47 10                             mov     rax, [rdi+10h]
.std:000000014FDD36DC 33 F6                                   xor     esi, esi
.std:000000014FDD36DE 39 B0 30 21 00 00                       cmp     [rax+2130h], esi
.std:000000014FDD36E4 7E 3E                                   jle     short loc_14FDD3724
.std:000000014FDD36E6 33 DB                                   xor     ebx, ebx
.std:000000014FDD36E8 0F 1F 84 00 00 00 00 00                 nop     dword ptr [rax+rax+00000000h]
.std:000000014FDD36F0
.std:000000014FDD36F0                         loc_14FDD36F0:                          ; CODE XREF: sub_14FDD3330+3F2↓j
.std:000000014FDD36F0 48 8D 88 28 21 00 00                    lea     rcx, [rax+2128h]
.std:000000014FDD36F7 FF 15 83 A3 83 09                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014FDD36FD 48 8B 4F 10                             mov     rcx, [rdi+10h]
.std:000000014FDD3701 4C 8B C7                                mov     r8, rdi
.std:000000014FDD3704 48 8B 14 03                             mov     rdx, [rbx+rax]
.std:000000014FDD3708 4C 8B 09                                mov     r9, [rcx]
.std:000000014FDD370B 41 FF 91 18 02 00 00                    call    qword ptr [r9+218h]
.std:000000014FDD3712 48 8B 47 10                             mov     rax, [rdi+10h]
.std:000000014FDD3716 48 8D 5B 08                             lea     rbx, [rbx+8]
.std:000000014FDD371A FF C6                                   inc     esi
.std:000000014FDD371C 3B B0 30 21 00 00                       cmp     esi, [rax+2130h]
.std:000000014FDD3722 7C CC                                   jl      short loc_14FDD36F0
.std:000000014FDD3724
.std:000000014FDD3724                         loc_14FDD3724:                          ; CODE XREF: sub_14FDD3330+3B4↑j
.std:000000014FDD3724 C7 87 98 00 00 00 00 00                 mov     dword ptr [rdi+98h], 0
.std:000000014FDD3724 00 00
.std:000000014FDD372E 83 3D EB 39 9D 09 01                    cmp     cs:dword_1597A7120, 1
.std:000000014FDD3735 75 7C                                   jnz     short loc_14FDD37B3
.std:000000014FDD3737 E8 04 70 19 FF                          call    sub_14EF6A740
.std:000000014FDD373C 84 C0                                   test    al, al
.std:000000014FDD373E 0F 85 9B 00 00 00                       jnz     loc_14FDD37DF
.std:000000014FDD3744 38 05 FF 87 82 0A                       cmp     cs:byte_15A5FBF49, al
.std:000000014FDD374A 75 1F                                   jnz     short loc_14FDD376B
.std:000000014FDD374C 38 05 D6 BA 6D 0A                       cmp     cs:byte_15A4AF228, al
.std:000000014FDD3752 0F 84 87 00 00 00                       jz      loc_14FDD37DF
.std:000000014FDD3758 FF 15 EA 2D 0A 03                       call    cs:qword_152E76548
.std:000000014FDD375E 3B 05 B4 BA 6D 0A                       cmp     eax, cs:dword_15A4AF218
.std:000000014FDD3764 0F 94 C0                                setz    al
.std:000000014FDD3767 84 C0                                   test    al, al
.std:000000014FDD3769 75 74                                   jnz     short loc_14FDD37DF
.std:000000014FDD376B
.std:000000014FDD376B                         loc_14FDD376B:                          ; CODE XREF: sub_14FDD3330+41A↑j
.std:000000014FDD376B 33 D2                                   xor     edx, edx
.std:000000014FDD376D 48 8D 4C 24 30                          lea     rcx, [rsp+30h]
.std:000000014FDD3772 41 B8 FF 00 00 00                       mov     r8d, 0FFh
.std:000000014FDD3778 E8 F3 18 00 00                          call    sub_14FDD5070
.std:000000014FDD377D 41 B1 01                                mov     r9b, 1
.std:000000014FDD3780 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD3783 48 89 79 10                             mov     [rcx+10h], rdi
.std:000000014FDD3787 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD378A 44 8B 40 10                             mov     r8d, [rax+10h]
.std:000000014FDD378E 48 8B 50 08                             mov     rdx, [rax+8]
.std:000000014FDD3792 48 8B 59 20                             mov     rbx, [rcx+20h]
.std:000000014FDD3796 48 85 DB                                test    rbx, rbx
.std:000000014FDD3799 74 0E                                   jz      short loc_14FDD37A9
.std:000000014FDD379B F0 FF 43 48                             lock inc dword ptr [rbx+48h]
.std:000000014FDD379F E8 AC 56 05 F1                          call    sub_140E28E50
.std:000000014FDD37A4 E9 91 00 00 00                          jmp     loc_14FDD383A
.std:000000014FDD37A9                         ; ---------------------------------------------------------------------------
.std:000000014FDD37A9
.std:000000014FDD37A9                         loc_14FDD37A9:                          ; CODE XREF: sub_14FDD3330+469↑j
.std:000000014FDD37A9 E8 A2 56 05 F1                          call    sub_140E28E50
.std:000000014FDD37AE E9 DC 00 00 00                          jmp     loc_14FDD388F
.std:000000014FDD37B3                         ; ---------------------------------------------------------------------------
.std:000000014FDD37B3
.std:000000014FDD37B3                         loc_14FDD37B3:                          ; CODE XREF: sub_14FDD3330+405↑j
.std:000000014FDD37B3 E8 88 6F 19 FF                          call    sub_14EF6A740
.std:000000014FDD37B8 84 C0                                   test    al, al
.std:000000014FDD37BA 75 23                                   jnz     short loc_14FDD37DF
.std:000000014FDD37BC 38 05 87 87 82 0A                       cmp     cs:byte_15A5FBF49, al
.std:000000014FDD37C2 75 35                                   jnz     short loc_14FDD37F9
.std:000000014FDD37C4 38 05 5E BA 6D 0A                       cmp     cs:byte_15A4AF228, al
.std:000000014FDD37CA 74 13                                   jz      short loc_14FDD37DF
.std:000000014FDD37CC FF 15 76 2D 0A 03                       call    cs:qword_152E76548
.std:000000014FDD37D2 3B 05 40 BA 6D 0A                       cmp     eax, cs:dword_15A4AF218
.std:000000014FDD37D8 0F 94 C0                                setz    al
.std:000000014FDD37DB 84 C0                                   test    al, al
.std:000000014FDD37DD 74 1A                                   jz      short loc_14FDD37F9
.std:000000014FDD37DF
.std:000000014FDD37DF                         loc_14FDD37DF:                          ; CODE XREF: sub_14FDD3330+40E↑j
.std:000000014FDD37DF                                                                 ; sub_14FDD3330+422↑j ...
.std:000000014FDD37DF E8 DC 53 4B 00                          call    sub_150288BC0
.std:000000014FDD37E4 48 8B D7                                mov     rdx, rdi
.std:000000014FDD37E7 48 8B C8                                mov     rcx, rax
.std:000000014FDD37EA E8 81 BB 00 00                          call    sub_14FDDF370
.std:000000014FDD37EF E8 AC 41 4B 00                          call    sub_1502879A0
.std:000000014FDD37F4 E9 96 00 00 00                          jmp     loc_14FDD388F
.std:000000014FDD37F9                         ; ---------------------------------------------------------------------------
.std:000000014FDD37F9
.std:000000014FDD37F9                         loc_14FDD37F9:                          ; CODE XREF: sub_14FDD3330+492↑j
.std:000000014FDD37F9                                                                 ; sub_14FDD3330+4AD↑j
.std:000000014FDD37F9 33 D2                                   xor     edx, edx
.std:000000014FDD37FB 48 8D 4C 24 30                          lea     rcx, [rsp+30h]
.std:000000014FDD3800 39 15 1A 39 9D 09                       cmp     cs:dword_1597A7120, edx
.std:000000014FDD3806 41 B8 FF 00 00 00                       mov     r8d, 0FFh
.std:000000014FDD380C 75 49                                   jnz     short loc_14FDD3857
.std:000000014FDD380E E8 5D 18 00 00                          call    sub_14FDD5070
.std:000000014FDD3813 41 B1 01                                mov     r9b, 1
.std:000000014FDD3816 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD3819 48 89 79 10                             mov     [rcx+10h], rdi
.std:000000014FDD381D 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD3820 44 8B 40 10                             mov     r8d, [rax+10h]
.std:000000014FDD3824 48 8B 50 08                             mov     rdx, [rax+8]
.std:000000014FDD3828 48 8B 59 20                             mov     rbx, [rcx+20h]
.std:000000014FDD382C 48 85 DB                                test    rbx, rbx
.std:000000014FDD382F 74 1F                                   jz      short loc_14FDD3850
.std:000000014FDD3831 F0 FF 43 48                             lock inc dword ptr [rbx+48h]
.std:000000014FDD3835 E8 16 56 05 F1                          call    sub_140E28E50
.std:000000014FDD383A
.std:000000014FDD383A                         loc_14FDD383A:                          ; CODE XREF: sub_14FDD3330+474↑j
.std:000000014FDD383A F0 44 0F C1 73 48                       lock xadd [rbx+48h], r14d
.std:000000014FDD3840 41 83 FE 01                             cmp     r14d, 1
.std:000000014FDD3844 75 49                                   jnz     short loc_14FDD388F
.std:000000014FDD3846 48 8B CB                                mov     rcx, rbx
.std:000000014FDD3849 E8 A2 38 15 FF                          call    sub_14EF270F0
.std:000000014FDD384E EB 3F                                   jmp     short loc_14FDD388F
.std:000000014FDD3850                         ; ---------------------------------------------------------------------------
.std:000000014FDD3850
.std:000000014FDD3850                         loc_14FDD3850:                          ; CODE XREF: sub_14FDD3330+4FF↑j
.std:000000014FDD3850 E8 FB 55 05 F1                          call    sub_140E28E50
.std:000000014FDD3855 EB 38                                   jmp     short loc_14FDD388F
.std:000000014FDD3857                         ; ---------------------------------------------------------------------------
.std:000000014FDD3857
.std:000000014FDD3857                         loc_14FDD3857:                          ; CODE XREF: sub_14FDD3330+4DC↑j
.std:000000014FDD3857 E8 14 18 00 00                          call    sub_14FDD5070
.std:000000014FDD385C 45 33 C9                                xor     r9d, r9d
.std:000000014FDD385F 48 8B 08                                mov     rcx, [rax]
.std:000000014FDD3862 48 89 79 10                             mov     [rcx+10h], rdi
.std:000000014FDD3866 48 8B 18                                mov     rbx, [rax]
.std:000000014FDD3869 44 8B 40 10                             mov     r8d, [rax+10h]
.std:000000014FDD386D 48 8B CB                                mov     rcx, rbx
.std:000000014FDD3870 48 8B 50 08                             mov     rdx, [rax+8]
.std:000000014FDD3874 E8 D7 55 05 F1                          call    sub_140E28E50
.std:000000014FDD3879 E8 C2 F8 14 FF                          call    sub_14EF23140
.std:000000014FDD387E 44 8B 43 08                             mov     r8d, [rbx+8]
.std:000000014FDD3882 48 8B D3                                mov     rdx, rbx
.std:000000014FDD3885 48 8B C8                                mov     rcx, rax
.std:000000014FDD3888 4C 8B 08                                mov     r9, [rax]
.std:000000014FDD388B 41 FF 51 08                             call    qword ptr [r9+8]
.std:000000014FDD388F
.std:000000014FDD388F                         loc_14FDD388F:                          ; CODE XREF: sub_14FDD3330+273↑j
.std:000000014FDD388F                                                                 ; sub_14FDD3330+47E↑j ...
.std:000000014FDD388F 48 8B 9C 24 90 00 00 00                 mov     rbx, [rsp+90h]
.std:000000014FDD3897 48 83 C4 58                             add     rsp, 58h
.std:000000014FDD389B 41 5F                                   pop     r15
.std:000000014FDD389D 41 5E                                   pop     r14
.std:000000014FDD389F 41 5D                                   pop     r13
.std:000000014FDD38A1 41 5C                                   pop     r12
.std:000000014FDD38A3 5F                                      pop     rdi
.std:000000014FDD38A4 5E                                      pop     rsi
.std:000000014FDD38A5 C3                                      retn
.std:000000014FDD38A5                         sub_14FDD3330   endp
.std:000000014FDD38A5
.std:000000014FDD38A5                         ; ---------------------------------------------------------------------------
.std:000000014FDD38A6 CC CC CC CC CC CC CC CC…                align 10h
.std:000000014FDD38B0
.std:000000014FDD38B0                         ; =============== S U B R O U T I N E =======================================
.std:000000014FDD38B0
.std:000000014FDD38B0
.std:000000014FDD38B0                         sub_14FDD38B0   proc near
.std:000000014FDD38B0 48 89 5C 24 08                          mov     [rsp+8], rbx
.std:000000014FDD38B5 57                                      push    rdi
.std:000000014FDD38B6 48 83 EC 20                             sub     rsp, 20h
.std:000000014FDD38BA 49 8B D8                                mov     rbx, r8
.std:000000014FDD38BD 48 8B FA                                mov     rdi, rdx
.std:000000014FDD38C0 E8 0B 43 A2 FF                          call    sub_14F7F7BD0
.std:000000014FDD38C5 48 8B C8                                mov     rcx, rax
.std:000000014FDD38C8 4C 8B C3                                mov     r8, rbx
.std:000000014FDD38CB 48 8B D7                                mov     rdx, rdi
.std:000000014FDD38CE 48 8B 5C 24 30                          mov     rbx, [rsp+30h]
.std:000000014FDD38D3 48 83 C4 20                             add     rsp, 20h
.std:000000014FDD38D7 5F                                      pop     rdi
.std:000000014FDD38D8 E9 03 AA A1 FF                          jmp     sub_14F7EE2E0
.std:000000014FDD38D8                         sub_14FDD38B0   endp
.std:000000014FDD38D8
.std:000000014FDD38D8                         ; ---------------------------------------------------------------------------
.std:000000014FDD38DD CC CC CC                                align 20h
.std:000000014FDD38E0
.std:000000014FDD38E0                         ; =============== S U B R O U T I N E =======================================
.std:000000014FDD38E0
.std:000000014FDD38E0
.std:000000014FDD38E0                         sub_14FDD38E0   proc near               ; CODE XREF: sub_14FC0FB40+115↑p
.std:000000014FDD38E0                                                                 ; sub_14FC12BC0+1E3↑p
.std:000000014FDD38E0 48 89 5C 24 10                          mov     [rsp+10h], rbx
.std:000000014FDD38E5 56                                      push    rsi
.std:000000014FDD38E6 48 83 EC 20                             sub     rsp, 20h
.std:000000014FDD38EA 48 8B 99 40 2F 00 00                    mov     rbx, [rcx+2F40h]
.std:000000014FDD38F1 48 8B F2                                mov     rsi, rdx
.std:000000014FDD38F4 48 85 DB                                test    rbx, rbx
.std:000000014FDD38F7 74 53                                   jz      short loc_14FDD394C
.std:000000014FDD38F9 48 8B 0A                                mov     rcx, [rdx]
.std:000000014FDD38FC 48 89 7C 24 30                          mov     [rsp+30h], rdi
.std:000000014FDD3901 48 8B BB 60 05 00 00                    mov     rdi, [rbx+560h]
.std:000000014FDD3908 48 89 8B 60 05 00 00                    mov     [rbx+560h], rcx
.std:000000014FDD390F 48 85 C9                                test    rcx, rcx
.std:000000014FDD3912 74 06                                   jz      short loc_14FDD391A
.std:000000014FDD3914 48 8B 01                                mov     rax, [rcx]
.std:000000014FDD3917 FF 50 30                                call    qword ptr [rax+30h]
.std:000000014FDD391A
.std:000000014FDD391A                         loc_14FDD391A:                          ; CODE XREF: sub_14FDD38E0+32↑j
.std:000000014FDD391A 48 85 FF                                test    rdi, rdi
.std:000000014FDD391D 74 09                                   jz      short loc_14FDD3928
.std:000000014FDD391F 48 8B 07                                mov     rax, [rdi]
.std:000000014FDD3922 48 8B CF                                mov     rcx, rdi
.std:000000014FDD3925 FF 50 38                                call    qword ptr [rax+38h]
.std:000000014FDD3928
.std:000000014FDD3928                         loc_14FDD3928:                          ; CODE XREF: sub_14FDD38E0+3D↑j
.std:000000014FDD3928 48 83 BB 68 05 00 00 00                 cmp     qword ptr [rbx+568h], 0
.std:000000014FDD3930 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.std:000000014FDD3935 75 15                                   jnz     short loc_14FDD394C
.std:000000014FDD3937 48 8B 0E                                mov     rcx, [rsi]
.std:000000014FDD393A 48 89 8B 68 05 00 00                    mov     [rbx+568h], rcx
.std:000000014FDD3941 48 85 C9                                test    rcx, rcx
.std:000000014FDD3944 74 06                                   jz      short loc_14FDD394C
.std:000000014FDD3946 48 8B 01                                mov     rax, [rcx]
.std:000000014FDD3949 FF 50 30                                call    qword ptr [rax+30h]
.std:000000014FDD394C
.std:000000014FDD394C                         loc_14FDD394C:                          ; CODE XREF: sub_14FDD38E0+17↑j
.std:000000014FDD394C                                                                 ; sub_14FDD38E0+55↑j ...
.std:000000014FDD394C 48 8B 5C 24 38                          mov     rbx, [rsp+38h]
.std:000000014FDD3951 48 83 C4 20                             add     rsp, 20h
.std:000000014FDD3955 5E                                      pop     rsi
.std:000000014FDD3956 C3                                      retn
.std:000000014FDD3956                         sub_14FDD38E0   endp
.std:000000014FDD3956
.std:000000014FDD3956                         ; ---------------------------------------------------------------------------
.std:000000014FDD3957 CC CC CC CC CC CC CC CC…                align 20h
.std:000000014FDD3960
.std:000000014FDD3960                         ; =============== S U B R O U T I N E =======================================
.std:000000014FDD3960
.std:000000014FDD3960
.std:000000014FDD3960                         sub_14FDD3960   proc near               ; DATA XREF: sub_14FDDEF10+2F8↓o
.std:000000014FDD3960 48 8B 09                                mov     rcx, [rcx]
.std:000000014FDD3963 BA 02 00 00 00                          mov     edx, 2
.std:000000014FDD3968 E9 63 71 01 00                          jmp     sub_14FDEAAD0
.std:000000014FDD3968                         sub_14FDD3960   endp
.std:000000014FDD3968
.std:000000014FDD3968                         ; ---------------------------------------------------------------------------
.std:000000014FDD396D CC                                      db 0CCh
.std:000000014FDD396E CC                                      db 0CCh
.std:000000014FDD396F CC                                      db 0CCh



```


---
XmmSimd Token Encore Prointer class Bone , Root , C2W
---
```asm


.std:000000015A483D00 00 00 00 00 00 00 00 00 xmmword_15A483D00 xmmword 0             ; DATA XREF: sub_14EFC4340+62↑o
.std:000000015A483D00 00 00 00 00 00 00 00 00                                         ; sub_14EFC4340+69↑w
.std:000000015A483D10 00 00 00 00 00 00 00 00…xmmword_15A483D10 xmmword 0             ; DATA XREF: sub_14EFC4340+74↑w
.std:000000015A483D20 00 00 00 00 00 00 00 00 qword_15A483D20 dq 0                    ; DATA XREF: sub_14EFC4340+80↑w
.std:000000015A483D28 00 00 00 00 00 00 00 00 qword_15A483D28 dq 0                    ; DATA XREF: sub_14EFC4340+89↑w
.std:000000015A483D28                                                                 ; sub_14EFD0310↑r
.std:000000015A483D30 00                      byte_15A483D30  db 0                    ; DATA XREF: sub_140E25ED0:loc_140E26443↑r
.std:000000015A483D30                                                                 ; sub_140E6FE40:loc_140E6FEDE↑r ...
.std:000000015A483D31 00                      byte_15A483D31  db 0                    ; DATA XREF: sub_14EFC4340+50↑r
.std:000000015A483D31                                                                 ; sub_14EFC4340+90↑w
.std:000000015A483D32 00                                      db    0
.std:000000015A483D33 00                                      db    0
.std:000000015A483D34 00                                      db    0
.std:000000015A483D35 00                                      db    0
.std:000000015A483D36 00                                      db    0
.std:000000015A483D37 00                                      db    0
.std:000000015A483D38 70 7D FF 42 01 00 00 00 off_15A483D38   dq offset sub_142FF7D70 ; DATA XREF: sub_140E444D0+5C9↑r
.std:000000015A483D38                                                                 ; sub_14185B110+F9↑r ...
.std:000000015A483D40                         ; __int64 (__fastcall *off_15A483D40)(_QWORD, _QWORD, _QWORD)
.std:000000015A483D40 10 7A FF 42 01 00 00 00 off_15A483D40   dq offset sub_142FF7A10 ; DATA XREF: sub_140E444D0+354↑r
.std:000000015A483D40                                                                 ; sub_140E444D0+1CE8↑r ...
.std:000000015A483D48 F0 B4 FF 42 01 00 00 00 off_15A483D48   dq offset sub_142FFB4F0 ; DATA XREF: sub_142FFEFA0+86↑w
.std:000000015A483D48                                                                 ; sub_14EFD2FC0+F↑r ...
.std:000000015A483D50 30 66 FF 42 01 00 00 00 off_15A483D50   dq offset sub_142FF6630 ; DATA XREF: sub_140E3D440+34↑r
.std:000000015A483D50                                                                 ; sub_140EE0700+199↑r ...
.std:000000015A483D58 00 9F FF 42 01 00 00 00 off_15A483D58   dq offset sub_142FF9F00 ; DATA XREF: sub_142FFEFA0+B0↑w
.std:000000015A483D58                                                                 ; sub_14EFD5140+6↑r
.std:000000015A483D60 00 00 00 00 00 00 00 00 qword_15A483D60 dq 0                    ; DATA XREF: sub_142FFE570+16↑w
.std:000000015A483D60                                                                 ; sub_142FFE570:loc_142FFE5CC↑r ...
.std:000000015A483D68 00 00 00 00 00 00 00 00 qword_15A483D68 dq 0                    ; DATA XREF: sub_142FFE570+32↑w
.std:000000015A483D68                                                                 ; sub_142FFEFA0+16B↑w ...
.std:000000015A483D70 00                      byte_15A483D70  db 0                    ; DATA XREF: sub_140411D50+EB↑o
.std:000000015A483D70                                                                 ; sub_142FFB3B0+47↑r ...
.std:000000015A483D71 00                      byte_15A483D71  db 0                    ; DATA XREF: sub_14EFD51E0+57F↑w
.std:000000015A483D72 00                                      db    0
.std:000000015A483D73 00                                      db    0
.std:000000015A483D74 85 01 00 80             dword_15A483D74 dd 80000185h            ; DATA XREF: sub_14EFD51E0+4E↑r
.std:000000015A483D74                                                                 ; sub_14EFD51E0:loc_14EFD572B↑o ...
.std:000000015A483D78 1C 00 00 80             dword_15A483D78 dd 8000001Ch            ; DATA XREF: sub_14EFC4510+1F↑r
.std:000000015A483D78                                                                 ; sub_14EFC4510+D1↑o ...
.std:000000015A483D7C 00                                      db    0
.std:000000015A483D7D 00                                      db    0
.std:000000015A483D7E 00                                      db    0
.std:000000015A483D7F 00                                      db    0
.std:000000015A483D80 0A E8 52 00             dword_15A483D80 dd 52E80Ah              ; DATA XREF: sub_14EFCF3E0+AD↑r
.std:000000015A483D80                                                                 ; sub_14EFCF3E0+6D5↑o
.std:000000015A483D84 00 00 00 00             dword_15A483D84 dd 0                    ; DATA XREF: sub_14EFCF3E0+A2↑r
.std:000000015A483D88 80 08 00 80             dword_15A483D88 dd 80000880h            ; DATA XREF: sub_14EFCF3E0+5F↑r
.std:000000015A483D88                                                                 ; sub_14EFCF3E0:loc_14EFCFA8F↑o ...
.std:000000015A483D8C 00                                      db    0
.std:000000015A483D8D 00                                      db    0
.std:000000015A483D8E 00                                      db    0
.std:000000015A483D8F 00                                      db    0
.std:000000015A483D90 00 00 00 00 00 00 00 00 qword_15A483D90 dq 0                    ; DATA XREF: sub_14EFCF3E0+4DF↑o
.std:000000015A483D90                                                                 ; sub_14EFCF3E0+55D↑o ...
.std:000000015A483D98 00 00 00 00 00 00 00 00 qword_15A483D98 dq 0                    ; DATA XREF: sub_14EFCF3E0+4F5↑r
.std:000000015A483D98                                                                 ; sub_14EFCF3E0:loc_14EFCF920↑r ...
.std:000000015A483DA0 00 00 00 00             dword_15A483DA0 dd 0                    ; DATA XREF: sub_14EFCF3E0+118↑r
.std:000000015A483DA0                                                                 ; sub_14EFCF3E0:loc_14EFCFAD2↑o ...
.std:000000015A483DA4 00                                      db    0
.std:000000015A483DA5 00                                      db    0
.std:000000015A483DA6 00                                      db    0
.std:000000015A483DA7 00                                      db    0
.std:000000015A483DA8 00 00 00 00 00 00 00 00 qword_15A483DA8 dq 0                    ; DATA XREF: sub_14EFCF3E0+33C↑o
.std:000000015A483DA8                                                                 ; sub_14EFCF3E0+3BB↑o ...
.std:000000015A483DB0 00 00 00 00 00 00 00 00 qword_15A483DB0 dq 0                    ; DATA XREF: sub_14EFCF3E0+352↑r
.std:000000015A483DB0                                                                 ; sub_14EFCF3E0:loc_14EFCF77D↑r ...
.std:000000015A483DB8 00 00 00 00             dword_15A483DB8 dd 0                    ; DATA XREF: sub_14EFCF3E0+126↑r
.std:000000015A483DB8                                                                 ; sub_14EFCF3E0+69E↑o ...
.std:000000015A483DBC 00                                      db    0
.std:000000015A483DBD 00                                      db    0
.std:000000015A483DBE 00                                      db    0
.std:000000015A483DBF 00                                      db    0
.std:000000015A483DC0 A5 A4 1A 00 00 00 00 00 qword_15A483DC0 dq 1AA4A5h              ; DATA XREF: sub_14EFCD8A0+3A7↑r
.std:000000015A483DC0                                                                 ; sub_14EFCD8A0:loc_14EFCDCD1↑r ...
.std:000000015A483DC8 E5 00 00 80             dword_15A483DC8 dd 800000E5h            ; DATA XREF: sub_14EFCD8A0+4F↑r
.std:000000015A483DC8                                                                 ; sub_14EFCD8A0:loc_14EFCE827↑o ...
.std:000000015A483DCC 00                                      db    0
.std:000000015A483DCD 00                                      db    0
.std:000000015A483DCE 00                                      db    0
.std:000000015A483DCF 00                                      db    0
.std:000000015A483DD0 2A 11 10 00             dword_15A483DD0 dd 10112Ah              ; DATA XREF: sub_14EFCD8A0+724↑r
.std:000000015A483DD0                                                                 ; sub_14EFCD8A0+CB8↑r ...
.std:000000015A483DD4 00 00 00 00             dword_15A483DD4 dd 0                    ; DATA XREF: sub_14EFCD8A0+71A↑r
.std:000000015A483DD4                                                                 ; sub_14EFCD8A0+CAA↑r
.std:000000015A483DD8 E6 00 00 80             dword_15A483DD8 dd 800000E6h            ; DATA XREF: sub_14EFCD8A0+5F↑r
.std:000000015A483DD8                                                                 ; sub_14EFCD8A0:loc_14EFCE86A↑o ...
.std:000000015A483DDC 00                                      db    0
.std:000000015A483DDD 00                                      db    0
.std:000000015A483DDE 00                                      db    0
.std:000000015A483DDF 00                                      db    0
.std:000000015A483DE0 AB A4 1A 00             dword_15A483DE0 dd 1AA4ABh              ; DATA XREF: sub_14EFCD8A0+B2E↑r
.std:000000015A483DE0                                                                 ; sub_14EFCD8A0+1033↑o
.std:000000015A483DE4 00 00 00 00             dword_15A483DE4 dd 0                    ; DATA XREF: sub_14EFCD8A0:loc_14EFCE3C4↑r
.std:000000015A483DE8 E7 00 00 80             dword_15A483DE8 dd 800000E7h            ; DATA XREF: sub_14EFCD8A0+98C↑r
.std:000000015A483DE8                                                                 ; sub_14EFCD8A0:loc_14EFCE8AD↑o ...
.std:000000015A483DEC 00                                      db    0
.std:000000015A483DED 00                                      db    0
.std:000000015A483DEE 00                                      db    0
.std:000000015A483DEF 00                                      db    0
.std:000000015A483DF0 B0 A4 1A 00             dword_15A483DF0 dd 1AA4B0h              ; DATA XREF: sub_14EFCD8A0+B52↑r
.std:000000015A483DF0                                                                 ; sub_14EFCD8A0+1076↑o
.std:000000015A483DF4 00 00 00 00             dword_15A483DF4 dd 0                    ; DATA XREF: sub_14EFCD8A0:loc_14EFCE3E8↑r
.std:000000015A483DF8 E8 00 00 80             dword_15A483DF8 dd 800000E8h            ; DATA XREF: sub_14EFCD8A0+99C↑r
.std:000000015A483DF8                                                                 ; sub_14EFCD8A0:loc_14EFCE8F0↑o ...
.std:000000015A483DFC 00                                      db    0
.std:000000015A483DFD 00                                      db    0
.std:000000015A483DFE 00                                      db    0
.std:000000015A483DFF 00                                      db    0
.std:000000015A483E00 A3 01 00 00             dword_15A483E00 dd 1A3h                 ; DATA XREF: sub_14EFCD8A0+B6D↑r
.std:000000015A483E00                                                                 ; sub_14EFCD8A0+10B9↑o
.std:000000015A483E04 00 00 00 00             dword_15A483E04 dd 0                    ; DATA XREF: sub_14EFCD8A0+B63↑r
.std:000000015A483E08 E9 00 00 80             dword_15A483E08 dd 800000E9h            ; DATA XREF: sub_14EFCD8A0+9AC↑r
.std:000000015A483E08                                                                 ; sub_14EFCD8A0:loc_14EFCE933↑o ...
.std:000000015A483E0C 00                                      db    0
.std:000000015A483E0D 00                                      db    0
.std:000000015A483E0E 00                                      db    0
.std:000000015A483E0F 00                                      db    0
.std:000000015A483E10 EC 00 00 00             dword_15A483E10 dd 0ECh                 ; DATA XREF: sub_14EFCD8A0+B88↑r
.std:000000015A483E10                                                                 ; sub_14EFCD8A0+10FC↑o
.std:000000015A483E14 00 00 00 00             dword_15A483E14 dd 0                    ; DATA XREF: sub_14EFCD8A0+B7E↑r
.std:000000015A483E18 EA 00 00 80             dword_15A483E18 dd 800000EAh            ; DATA XREF: sub_14EFCD8A0+9BC↑r
.std:000000015A483E18                                                                 ; sub_14EFCD8A0:loc_14EFCE976↑o ...
.std:000000015A483E1C 00                                      db    0
.std:000000015A483E1D 00                                      db    0
.std:000000015A483E1E 00                                      db    0
.std:000000015A483E1F 00                                      db    0
.std:000000015A483E20 B7 A4 1A 00             dword_15A483E20 dd 1AA4B7h              ; DATA XREF: sub_14EFCD8A0+BF3↑r
.std:000000015A483E20                                                                 ; sub_14EFCD8A0+113F↑o
.std:000000015A483E24 00 00 00 00             dword_15A483E24 dd 0                    ; DATA XREF: sub_14EFCD8A0:loc_14EFCE489↑r
.std:000000015A483E28 EB 00 00 80             dword_15A483E28 dd 800000EBh            ; DATA XREF: sub_14EFCD8A0+9CC↑r
.std:000000015A483E28                                                                 ; sub_14EFCD8A0:loc_14EFCE9B9↑o ...
.std:000000015A483E2C 00                                      db    0
.std:000000015A483E2D 00                                      db    0
.std:000000015A483E2E 00                                      db    0
.std:000000015A483E2F 00                                      db    0
.std:000000015A483E30 B9 A4 1A 00             dword_15A483E30 dd 1AA4B9h              ; DATA XREF: sub_14EFCD8A0+BCF↑r
.std:000000015A483E30                                                                 ; sub_14EFCD8A0+1182↑o
.std:000000015A483E34 00 00 00 00             dword_15A483E34 dd 0                    ; DATA XREF: sub_14EFCD8A0:loc_14EFCE465↑r
.std:000000015A483E38 EC 00 00 80             dword_15A483E38 dd 800000ECh            ; DATA XREF: sub_14EFCD8A0+9DC↑r
.std:000000015A483E38                                                                 ; sub_14EFCD8A0:loc_14EFCE9FC↑o ...
.std:000000015A483E3C 00                                      db    0
.std:000000015A483E3D 00                                      db    0
.std:000000015A483E3E 00                                      db    0
.std:000000015A483E3F 00                                      db    0
.std:000000015A483E40 B2 9A 13 00             dword_15A483E40 dd 139AB2h              ; DATA XREF: sub_14EFCD8A0+C64↑r
.std:000000015A483E40                                                                 ; sub_14EFCD8A0+11C5↑o
.std:000000015A483E44 00 00 00 00             dword_15A483E44 dd 0                    ; DATA XREF: sub_14EFCD8A0:loc_14EFCE4F3↑r
.std:000000015A483E48 ED 00 00 80             dword_15A483E48 dd 800000EDh            ; DATA XREF: sub_14EFCD8A0+9EC↑r
.std:000000015A483E48                                                                 ; sub_14EFCD8A0:loc_14EFCEA3F↑o ...
.std:000000015A483E4C 00                                      db    0
.std:000000015A483E4D 00                                      db    0
.std:000000015A483E4E 00                                      db    0
.std:000000015A483E4F 00                                      db    0
.std:000000015A483E50 BC A4 1A 00             dword_15A483E50 dd 1AA4BCh              ; DATA XREF: sub_14EFCD8A0+A66↑r
.std:000000015A483E50                                                                 ; sub_14EFCD8A0+1208↑o
.std:000000015A483E54 00 00 00 00             dword_15A483E54 dd 0                    ; DATA XREF: sub_14EFCD8A0+A58↑r
.std:000000015A483E58 EE 00 00 80             dword_15A483E58 dd 800000EEh            ; DATA XREF: sub_14EFCD8A0+9FC↑r
.std:000000015A483E58                                                                 ; sub_14EFCD8A0:loc_14EFCEA82↑o ...
.std:000000015A483E5C 00                                      db    0
.std:000000015A483E5D 00                                      db    0
.std:000000015A483E5E 00                                      db    0
.std:000000015A483E5F 00                                      db    0
.std:000000015A483E60 B5 D5 14 00             dword_15A483E60 dd 14D5B5h              ; DATA XREF: sub_14EFCD8A0+AE6↑r
.std:000000015A483E60                                                                 ; sub_14EFCD8A0+124B↑o
.std:000000015A483E64 00 00 00 00             dword_15A483E64 dd 0                    ; DATA XREF: sub_14EFCD8A0+AD7↑r
.std:000000015A483E68 EF 00 00 80             dword_15A483E68 dd 800000EFh            ; DATA XREF: sub_14EFCD8A0+A0C↑r
.std:000000015A483E68                                                                 ; sub_14EFCD8A0:loc_14EFCEAC5↑o ...
.std:000000015A483E6C 00                                      db    0
.std:000000015A483E6D 00                                      db    0
.std:000000015A483E6E 00                                      db    0
.std:000000015A483E6F 00                                      db    0
.std:000000015A483E70 C0 A4 1A 00             dword_15A483E70 dd 1AA4C0h              ; DATA XREF: sub_14EFCD8A0+B0A↑r
.std:000000015A483E70                                                                 ; sub_14EFCD8A0+F6A↑o
.std:000000015A483E74 00 00 00 00             dword_15A483E74 dd 0                    ; DATA XREF: sub_14EFCD8A0:loc_14EFCE3A0↑r
.std:000000015A483E78 F0 00 00 80             dword_15A483E78 dd 800000F0h            ; DATA XREF: sub_14EFCD8A0+A1C↑r
.std:000000015A483E78                                                                 ; sub_14EFCD8A0:loc_14EFCE7E4↑o ...
.std:000000015A483E7C 00                      byte_15A483E7C  db 0                    ; DATA XREF: sub_14EFB9400+73↑r
.std:000000015A483E7C                                                                 ; sub_14EFB9400+79↑w
.std:000000015A483E7D 00                                      db    0
.std:000000015A483E7E 00                                      db    0
.std:000000015A483E7F 00                                      db    0
.std:000000015A483E80 A5 A4 1A 00 00 00 00 00 qword_15A483E80 dq 1AA4A5h              ; DATA XREF: sub_14EFCEB10:loc_14EFCF1F5↑r
.std:000000015A483E80                                                                 ; sub_14EFCEB10+8AE↑o ...
.std:000000015A483E88 E4 00 00 80             dword_15A483E88 dd 800000E4h            ; DATA XREF: sub_14EFCEB10+6D9↑r
.std:000000015A483E88                                                                 ; sub_14EFCEB10:loc_14EFCF39B↑o ...
.std:000000015A483E8C 00                                      db    0
.std:000000015A483E8D 00                                      db    0
.std:000000015A483E8E 00                                      db    0
.std:000000015A483E8F 00                                      db    0
.std:000000015A483E90 A3 A8 44 84             dword_15A483E90 dd 8444A8A3h            ; DATA XREF: sub_14EFC6E60:loc_14EFC6E87↑o
.std:000000015A483E90                                                                 ; sub_14EFC6E60+4F↑w
.std:000000015A483E94 13 4E AE 19             dword_15A483E94 dd 19AE4E13h            ; DATA XREF: sub_14EFC6E60+59↑w
.std:000000015A483E98 EE 75 FA BC             dword_15A483E98 dd 0BCFA75EEh           ; DATA XREF: sub_14EFC6E60+63↑w
.std:000000015A483E9C D6 2B 98 39             dword_15A483E9C dd 39982BD6h            ; DATA XREF: sub_14EFC6E60+6D↑w
.std:000000015A483EA0 82 08 00 80             dword_15A483EA0 dd 80000882h            ; DATA XREF: sub_14EFC6E60+1F↑r
.std:000000015A483EA0                                                                 ; sub_14EFC6E60:loc_14EFC6E93↑o ...
.std:000000015A483EA4 00                                      db    0
.std:000000015A483EA5 00                                      db    0
.std:000000015A483EA6 00                                      db    0
.std:000000015A483EA7 00                                      db    0
.std:000000015A483EA8 00 00 00 00             dword_15A483EA8 dd 0                    ; DATA XREF: sub_14EFC74E0:loc_14EFC7507↑o
.std:000000015A483EA8                                                                 ; sub_14EFC74E0+4F↑w
.std:000000015A483EAC 00 00 00 00             dword_15A483EAC dd 0                    ; DATA XREF: sub_14EFC74E0+59↑w
.std:000000015A483EB0 00 00 00 00             dword_15A483EB0 dd 0                    ; DATA XREF: sub_14EFC74E0+63↑w
.std:000000015A483EB4 00 00 00 00             dword_15A483EB4 dd 0                    ; DATA XREF: sub_14EFC74E0+6D↑w
.std:000000015A483EB8 00 00 00 00             dword_15A483EB8 dd 0                    ; DATA XREF: sub_14EFC74E0+1F↑r
.std:000000015A483EB8                                                                 ; sub_14EFC74E0:loc_14EFC7513↑o ...
.std:000000015A483EBC 00                                      db    0
.std:000000015A483EBD 00                                      db    0
.std:000000015A483EBE 00                                      db    0
.std:000000015A483EBF 00                                      db    0
.std:000000015A483EC0 00 00 00 00             dword_15A483EC0 dd 0                    ; DATA XREF: sub_14EFC7460:loc_14EFC7487↑o
.std:000000015A483EC0                                                                 ; sub_14EFC7460+4F↑w
.std:000000015A483EC4 00 00 00 00             dword_15A483EC4 dd 0                    ; DATA XREF: sub_14EFC7460+59↑w
.std:000000015A483EC8 00 00 00 00             dword_15A483EC8 dd 0                    ; DATA XREF: sub_14EFC7460+63↑w
.std:000000015A483ECC 00 00 00 00             dword_15A483ECC dd 0                    ; DATA XREF: sub_14EFC7460+6D↑w
.std:000000015A483ED0 00 00 00 00             dword_15A483ED0 dd 0                    ; DATA XREF: sub_14EFC7460+1F↑r
.std:000000015A483ED0                                                                 ; sub_14EFC7460:loc_14EFC7493↑o ...
.std:000000015A483ED4 00                                      db    0
.std:000000015A483ED5 00                                      db    0
.std:000000015A483ED6 00                                      db    0
.std:000000015A483ED7 00                                      db    0
.std:000000015A483ED8 00 00 00 00             dword_15A483ED8 dd 0                    ; DATA XREF: sub_14EFC7160:loc_14EFC7187↑o
.std:000000015A483ED8                                                                 ; sub_14EFC7160+4F↑w
.std:000000015A483EDC 00 00 00 00             dword_15A483EDC dd 0                    ; DATA XREF: sub_14EFC7160+59↑w
.std:000000015A483EE0 00 00 00 00             dword_15A483EE0 dd 0                    ; DATA XREF: sub_14EFC7160+63↑w
.std:000000015A483EE4 00 00 00 00             dword_15A483EE4 dd 0                    ; DATA XREF: sub_14EFC7160+6D↑w
.std:000000015A483EE8 00 00 00 00             dword_15A483EE8 dd 0                    ; DATA XREF: sub_14EFC7160+1F↑r
.std:000000015A483EE8                                                                 ; sub_14EFC7160:loc_14EFC7193↑o ...
.std:000000015A483EEC 00                                      db    0
.std:000000015A483EED 00                                      db    0
.std:000000015A483EEE 00                                      db    0
.std:000000015A483EEF 00                                      db    0
.std:000000015A483EF0 00 00 00 00             dword_15A483EF0 dd 0                    ; DATA XREF: sub_14EFC71E0:loc_14EFC7207↑o
.std:000000015A483EF0                                                                 ; sub_14EFC71E0+4F↑w
.std:000000015A483EF4 00 00 00 00             dword_15A483EF4 dd 0                    ; DATA XREF: sub_14EFC71E0+59↑w
.std:000000015A483EF8 00 00 00 00             dword_15A483EF8 dd 0                    ; DATA XREF: sub_14EFC71E0+63↑w
.std:000000015A483EFC 00 00 00 00             dword_15A483EFC dd 0                    ; DATA XREF: sub_14EFC71E0+6D↑w
.std:000000015A483F00 00 00 00 00             dword_15A483F00 dd 0                    ; DATA XREF: sub_14EFC71E0+1F↑r
.std:000000015A483F00                                                                 ; sub_14EFC71E0:loc_14EFC7213↑o ...
.std:000000015A483F04 00                                      db    0
.std:000000015A483F05 00                                      db    0
.std:000000015A483F06 00                                      db    0
.std:000000015A483F07 00                                      db    0
.std:000000015A483F08 00 00 00 00             dword_15A483F08 dd 0                    ; DATA XREF: sub_14EFC6FE0:loc_14EFC7007↑o
.std:000000015A483F08                                                                 ; sub_14EFC6FE0+4F↑w
.std:000000015A483F0C 00 00 00 00             dword_15A483F0C dd 0                    ; DATA XREF: sub_14EFC6FE0+59↑w
.std:000000015A483F10 00 00 00 00             dword_15A483F10 dd 0                    ; DATA XREF: sub_14EFC6FE0+63↑w
.std:000000015A483F14 00 00 00 00             dword_15A483F14 dd 0                    ; DATA XREF: sub_14EFC6FE0+6D↑w
.std:000000015A483F18 00 00 00 00             dword_15A483F18 dd 0                    ; DATA XREF: sub_14EFC6FE0+1F↑r
.std:000000015A483F18                                                                 ; sub_14EFC6FE0:loc_14EFC7013↑o ...
.std:000000015A483F1C 00                                      db    0
.std:000000015A483F1D 00                                      db    0
.std:000000015A483F1E 00                                      db    0
.std:000000015A483F1F 00                                      db    0
.std:000000015A483F20 00 00 00 00             dword_15A483F20 dd 0                    ; DATA XREF: sub_14EFC7060:loc_14EFC7087↑o
.std:000000015A483F20                                                                 ; sub_14EFC7060+4F↑w
.std:000000015A483F24 00 00 00 00             dword_15A483F24 dd 0                    ; DATA XREF: sub_14EFC7060+59↑w
.std:000000015A483F28 00 00 00 00             dword_15A483F28 dd 0                    ; DATA XREF: sub_14EFC7060+63↑w
.std:000000015A483F2C 00 00 00 00             dword_15A483F2C dd 0                    ; DATA XREF: sub_14EFC7060+6D↑w
.std:000000015A483F30 00 00 00 00             dword_15A483F30 dd 0                    ; DATA XREF: sub_14EFC7060+1F↑r
.std:000000015A483F30                                                                 ; sub_14EFC7060:loc_14EFC7093↑o ...
.std:000000015A483F34 00                                      db    0
.std:000000015A483F35 00                                      db    0
.std:000000015A483F36 00                                      db    0
.std:000000015A483F37 00                                      db    0
.std:000000015A483F38 00 00 00 00             dword_15A483F38 dd 0                    ; DATA XREF: sub_14EFC7360:loc_14EFC7387↑o
.std:000000015A483F38                                                                 ; sub_14EFC7360+4F↑w
.std:000000015A483F3C 00 00 00 00             dword_15A483F3C dd 0                    ; DATA XREF: sub_14EFC7360+59↑w
.std:000000015A483F40 00 00 00 00             dword_15A483F40 dd 0                    ; DATA XREF: sub_14EFC7360+63↑w
.std:000000015A483F44 00 00 00 00             dword_15A483F44 dd 0                    ; DATA XREF: sub_14EFC7360+6D↑w
.std:000000015A483F48 00 00 00 00             dword_15A483F48 dd 0                    ; DATA XREF: sub_14EFC7360+1F↑r
.std:000000015A483F48                                                                 ; sub_14EFC7360:loc_14EFC7393↑o ...
.std:000000015A483F4C 00                                      db    0
.std:000000015A483F4D 00                                      db    0
.std:000000015A483F4E 00                                      db    0
.std:000000015A483F4F 00                                      db    0
.std:000000015A483F50 00 00 00 00             dword_15A483F50 dd 0                    ; DATA XREF: sub_14EFC73E0:loc_14EFC7407↑o
.std:000000015A483F50                                                                 ; sub_14EFC73E0+4F↑w
.std:000000015A483F54 00 00 00 00             dword_15A483F54 dd 0                    ; DATA XREF: sub_14EFC73E0+59↑w
.std:000000015A483F58 00 00 00 00             dword_15A483F58 dd 0                    ; DATA XREF: sub_14EFC73E0+63↑w
.std:000000015A483F5C 00 00 00 00             dword_15A483F5C dd 0                    ; DATA XREF: sub_14EFC73E0+6D↑w
.std:000000015A483F60 00 00 00 00             dword_15A483F60 dd 0                    ; DATA XREF: sub_14EFC73E0+1F↑r
.std:000000015A483F60                                                                 ; sub_14EFC73E0:loc_14EFC7413↑o ...
.std:000000015A483F64 00                                      db    0
.std:000000015A483F65 00                                      db    0
.std:000000015A483F66 00                                      db    0
.std:000000015A483F67 00                                      db    0
.std:000000015A483F68 F8 70 96 F9             dword_15A483F68 dd 0F99670F8h           ; DATA XREF: sub_14EFC6EE0:loc_14EFC6F07↑o
.std:000000015A483F68                                                                 ; sub_14EFC6EE0+4F↑w
.std:000000015A483F6C 56 42 79 74             dword_15A483F6C dd 74794256h            ; DATA XREF: sub_14EFC6EE0+59↑w
.std:000000015A483F70 6D AE 0C BB             dword_15A483F70 dd 0BB0CAE6Dh           ; DATA XREF: sub_14EFC6EE0+63↑w
.std:000000015A483F74 B6 D5 7C C6             dword_15A483F74 dd 0C67CD5B6h           ; DATA XREF: sub_14EFC6EE0+6D↑w
.std:000000015A483F78 81 08 00 80             dword_15A483F78 dd 80000881h            ; DATA XREF: sub_14EFC6EE0+1F↑r
.std:000000015A483F78                                                                 ; sub_14EFC6EE0:loc_14EFC6F13↑o ...
.std:000000015A483F7C 00                                      db    0
.std:000000015A483F7D 00                                      db    0
.std:000000015A483F7E 00                                      db    0
.std:000000015A483F7F 00                                      db    0
.std:000000015A483F80 00 00 00 00             dword_15A483F80 dd 0                    ; DATA XREF: sub_14EFC6F60:loc_14EFC6F87↑o
.std:000000015A483F80                                                                 ; sub_14EFC6F60+4F↑w
.std:000000015A483F84 00 00 00 00             dword_15A483F84 dd 0                    ; DATA XREF: sub_14EFC6F60+59↑w
.std:000000015A483F88 00 00 00 00             dword_15A483F88 dd 0                    ; DATA XREF: sub_14EFC6F60+63↑w
.std:000000015A483F8C 00 00 00 00             dword_15A483F8C dd 0                    ; DATA XREF: sub_14EFC6F60+6D↑w
.std:000000015A483F90 00 00 00 00             dword_15A483F90 dd 0                    ; DATA XREF: sub_14EFC6F60+1F↑r
.std:000000015A483F90                                                                 ; sub_14EFC6F60:loc_14EFC6F93↑o ...
.std:000000015A483F94 00                                      db    0
.std:000000015A483F95 00                                      db    0
.std:000000015A483F96 00                                      db    0
.std:000000015A483F97 00                                      db    0
.std:000000015A483F98 00 00 00 00             dword_15A483F98 dd 0                    ; DATA XREF: sub_14EFC70E0:loc_14EFC7107↑o
.std:000000015A483F98                                                                 ; sub_14EFC70E0+4F↑w
.std:000000015A483F9C 00 00 00 00             dword_15A483F9C dd 0                    ; DATA XREF: sub_14EFC70E0+59↑w
.std:000000015A483FA0 00 00 00 00             dword_15A483FA0 dd 0                    ; DATA XREF: sub_14EFC70E0+63↑w
.std:000000015A483FA4 00 00 00 00             dword_15A483FA4 dd 0                    ; DATA XREF: sub_14EFC70E0+6D↑w
.std:000000015A483FA8 00 00 00 00             dword_15A483FA8 dd 0                    ; DATA XREF: sub_14EFC70E0+1F↑r
.std:000000015A483FA8                                                                 ; sub_14EFC70E0:loc_14EFC7113↑o ...
.std:000000015A483FAC 00                                      db    0
.std:000000015A483FAD 00                                      db    0
.std:000000015A483FAE 00                                      db    0
.std:000000015A483FAF 00                                      db    0
.std:000000015A483FB0 00 00 00 00             dword_15A483FB0 dd 0                    ; DATA XREF: sub_14EFC72E0:loc_14EFC7307↑o
.std:000000015A483FB0                                                                 ; sub_14EFC72E0+4F↑w
.std:000000015A483FB4 00 00 00 00             dword_15A483FB4 dd 0                    ; DATA XREF: sub_14EFC72E0+59↑w
.std:000000015A483FB8 00 00 00 00             dword_15A483FB8 dd 0                    ; DATA XREF: sub_14EFC72E0+63↑w
.std:000000015A483FBC 00 00 00 00             dword_15A483FBC dd 0                    ; DATA XREF: sub_14EFC72E0+6D↑w
.std:000000015A483FC0 00 00 00 00             dword_15A483FC0 dd 0                    ; DATA XREF: sub_14EFC72E0+1F↑r
.std:000000015A483FC0                                                                 ; sub_14EFC72E0:loc_14EFC7313↑o ...
.std:000000015A483FC4 00                                      db    0
.std:000000015A483FC5 00                                      db    0
.std:000000015A483FC6 00                                      db    0
.std:000000015A483FC7 00                                      db    0
.std:000000015A483FC8 00 00 00 00             dword_15A483FC8 dd 0                    ; DATA XREF: sub_14EFC7260:loc_14EFC7287↑o
.std:000000015A483FC8                                                                 ; sub_14EFC7260+4F↑w
.std:000000015A483FCC 00 00 00 00             dword_15A483FCC dd 0                    ; DATA XREF: sub_14EFC7260+59↑w
.std:000000015A483FD0 00 00 00 00             dword_15A483FD0 dd 0                    ; DATA XREF: sub_14EFC7260+63↑w
.std:000000015A483FD4 00 00 00 00             dword_15A483FD4 dd 0                    ; DATA XREF: sub_14EFC7260+6D↑w
.std:000000015A483FD8 00 00 00 00             dword_15A483FD8 dd 0                    ; DATA XREF: sub_14EFC7260+1F↑r
.std:000000015A483FD8                                                                 ; sub_14EFC7260:loc_14EFC7293↑o ...
.std:000000015A483FDC 00                                      db    0
.std:000000015A483FDD 00                                      db    0
.std:000000015A483FDE 00                                      db    0
.std:000000015A483FDF 00                                      db    0
.std:000000015A483FE0 00 00 00 00 00 00 00 00 xmmword_15A483FE0 xmmword 0             ; DATA XREF: sub_14EFCD490:loc_14EFCD58C↑r
.std:000000015A483FE0 00 00 00 00 00 00 00 00                                         ; sub_14EFCD490+17C↑w ...
.std:000000015A483FF0 00 00 00 00 00 00 00 00 qword_15A483FF0 dq 0                    ; DATA XREF: sub_14EFCD490+109↑r
.std:000000015A483FF0                                                                 ; sub_14EFCD490+184↑w
.std:000000015A483FF8 00 00 00 00             dword_15A483FF8 dd 0                    ; DATA XREF: sub_14EFCD490+103↑r
.std:000000015A483FFC 00 00 00 00             dword_15A483FFC dd 0                    ; DATA XREF: sub_14EFCD490+F4↑r
.std:000000015A483FFC                                                                 ; sub_14EFCD490:loc_14EFCD5DA↑o ...
.std:000000015A484000 00                      unk_15A484000   db    0                 ; DATA XREF: sub_14EFC4800:loc_14EFC4A05↑o
.std:000000015A484000                                                                 ; sub_14EFC4800:loc_14EFC4A17↑o ...

```
