```c

-0000000000000200 ; D/A/*   : change type (data/ascii/array)
-0000000000000200 ; N       : rename
-0000000000000200 ; U       : undefine
-0000000000000200 ; Use data definition commands to create local variables and function arguments.
-0000000000000200 ; Two special fields " r" and " s" represent return address and saved registers.
-0000000000000200 ; Frame size: 200; Saved regs: 8; Purge: 0
-0000000000000200 ;
-0000000000000200

-00000000000001E0 var_1E0         db ?

-00000000000001D8 var_1D8         db ?

-00000000000001D0 var_1D0         db ?

-00000000000001C8 var_1C8         dd ?

-00000000000001C0 var_1C0         dq ?

-00000000000001B0 var_1B0         xmmword ?
-00000000000001A0 var_1A0         xmmword ?
-0000000000000190 var_190         xmmword ?
-0000000000000180 var_180         xmmword ?
-0000000000000170 var_170         dd ?

-0000000000000168 var_168         dq ?
-0000000000000160 var_160         xmmword ?
-0000000000000150 var_150         xmmword ?
-0000000000000140 var_140         xmmword ?
-0000000000000130 var_130         xmmword ?
-0000000000000120 var_120         dq ?
-0000000000000118 var_118         dd ?
-0000000000000110 var_110         dq ?
-0000000000000108 var_108         dd ?
-0000000000000100 var_100         xmmword ?
-00000000000000F0 var_F0          db 4 dup(?)
-00000000000000EC var_EC          db 4 dup(?)
-00000000000000E8 var_E8          db 8 dup(?)
-00000000000000E0 var_E0          xmmword ?
-00000000000000D0 var_D0          xmmword ?
-00000000000000C0 var_C0          db 16 dup(?)
-00000000000000B0 var_B0          xmmword ?
-00000000000000A0 var_A0          xmmword ?
-0000000000000090 var_90          xmmword ?
-0000000000000080 var_80          dq ?
-0000000000000070 var_70          xmmword ?
-0000000000000060 var_60          xmmword ?
-0000000000000050 var_50          xmmword ?
-0000000000000040 var_40          xmmword ?
-0000000000000030 var_30          dq ?
-0000000000000028 var_28          dq ?
+0000000000000000  s              db 8 dup(?)
+0000000000000008  r              db 8 dup(?)
+0000000000000020 arg_10          dq ?
+0000000000000030 arg_20          dq ?
+0000000000000038
+0000000000000038 ; end of stack variables

//C F5


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
  result = sub_1502A5EC0(a1, a2, a3);
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
asm .std:000000015095C0D3 F3 0F 10 3D 35 4D 78 02                 movss   xmm7, dword ptr cs:xmmword_1530E0E10
aob .2026-04-27 00:13:35.858 IDA: "F3 0F 10 3D ?? ?? ?? ?? 44 0F 29 84 24 A0 01 00 00 45 0F 57 C0"
---



```asm




```




