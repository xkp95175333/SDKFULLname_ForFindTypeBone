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
    v8 = (__m128i *)sub_14C8D4670(v16, v2, (unsigned int)v4);
  }
  else
  {
    v7 = (volatile signed __int32 *)(v6 + 0x10020);
    v8 = (__m128i *)sub_14C8D4580(v13, v2, (unsigned int)v4);
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

__int64 __fastcall sub_14C8D4670(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  __int16 v4; // bx
  char *v6; // r9
  __int64 v7; // rax
  __int16 v8; // cx
  int v9; // edx
  __int64 result; // rax
  char v11[2048]; // [rsp+20h] [rbp-818h] BYREF

  v3 = 0;
  v4 = a3;
  if ( a3 )
  {
    v6 = v11;
    do
    {
      if ( v3 >= 0x400 )
        break;
      ++v3;
      *(_WORD *)v6 = *(_WORD *)&v6[a2 - (_QWORD)v11]
                   + ((unsigned int)*(unsigned __int16 *)&v6[a2 - (_QWORD)v11] - 0x41 < 0x1A ? 0x20 : 0);
      v6 += 2;
    }
    while ( v3 < a3 );
  }
  v7 = sub_14C7A33B0(v11, 2 * a3);
  *(_DWORD *)(a1 + 4) = v7;
  v8 = (v4 << 6) | *(_WORD *)(a1 + 0xC) & 0x3E | 1;
  *(_DWORD *)a1 = BYTE4(v7) & 0xF;
  v9 = HIDWORD(v7) >> 4;
  *(_DWORD *)(a1 + 8) = HIDWORD(v7) & 0x80000000;
  result = a1;
  *(_WORD *)(a1 + 0xC) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(2 * v9)) & 0x3E;
  return result;
}
__int64 __fastcall sub_14C8D4580(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // edi
  unsigned int v6; // r9d
  __int64 v7; // rdx
  int *v8; // r10
  __int64 v9; // rax
  int v11[256]; // [rsp+20h] [rbp-418h] BYREF

  v3 = 0;
  v6 = 0;
  if ( a3 )
  {
    v7 = a2 - (_QWORD)v11;
    v8 = v11;
    do
    {
      if ( v6 >= 0x400 )
        break;
      ++v6;
      *(_BYTE *)v8 = *((_BYTE *)v8 + v7) + ((unsigned int)(*((char *)v8 + v7) - 0x41) < 0x1A ? 0x20 : 0);
      v8 = (int *)((char *)v8 + 1);
    }
    while ( v6 < a3 );
  }
  v9 = sub_14C7A33B0(v11, a3);
  if ( a3 == 4 )
    LOBYTE(v3) = (v11[0] & 0xDFDFDFDF) == 0x454E4F4E;
  *(_DWORD *)(a1 + 4) = v9;
  *(_DWORD *)a1 = BYTE4(v9) & 0xF;
  *(_DWORD *)(a1 + 8) = HIDWORD(v9) & 0x80000000 | (v3 << 0x1F);
  *(_WORD *)(a1 + 0xC) = 2 * ((0x20 * a3) | (HIDWORD(v9) >> 4) & 0x1F);
  return a1;
}

unsigned __int64 __fastcall sub_14C7A33B0(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // rbp
  __int64 v25; // r11
  __int64 v26; // r14
  __int64 v27; // rdi
  __int64 v28; // rsi
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int64 v37; // rbx
  __int64 v38; // r11
  __int64 v39; // r10
  __int64 v40; // r9
  unsigned __int64 v41; // r12
  unsigned __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rbp
  __int64 v45; // rsi
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r14
  __int64 v48; // rax
  _QWORD *v49; // rcx
  __int64 v50; // r11
  __int64 v51; // r15
  unsigned __int64 v52; // r10
  unsigned __int64 v53; // r14
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 v56; // rdi
  __int64 v57; // r11
  __int64 v58; // rax
  __int64 v59; // r10
  __int64 v60; // rdx
  __int64 v61; // rsi
  unsigned __int64 v62; // rdi
  __int64 v63; // rdx
  unsigned __int64 v64; // r8
  unsigned __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // r11
  unsigned __int64 v68; // r8
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // rdx
  unsigned int v71; // [rsp+88h] [rbp+10h]
  _QWORD *v72; // [rsp+90h] [rbp+18h]
  unsigned __int64 v73; // [rsp+98h] [rbp+20h]
  unsigned __int64 v74; // [rsp+98h] [rbp+20h]

  v2 = a2;
  if ( a2 > 0x20 )
  {
    if ( a2 > 0x40 )
    {
      v38 = *(__int64 *)((char *)a1 + a2 - 0x28);
      v39 = *(__int64 *)((char *)a1 + a2 - 8);
      v40 = a2 + *(__int64 *)((char *)a1 + a2 - 0x40);
      v41 = *(__int64 *)((char *)a1 + a2 - 0x10) + *(__int64 *)((char *)a1 + a2 - 0x38);
      v42 = 0x9DDFEA08EB382D69uLL * (*(__int64 *)((char *)a1 + a2 - 0x18) ^ (a2 + *(__int64 *)((char *)a1 + a2 - 0x30)));
      v43 = *(__int64 *)((char *)a1 + a2 - 0x30) + *(__int64 *)((char *)a1 + a2 - 0x38) + v40;
      v44 = v43 + v38;
      v73 = 0x9DDFEA08EB382D69uLL
          * ((0x9DDFEA08EB382D69uLL * (*(__int64 *)((char *)a1 + a2 - 0x18) ^ v42 ^ (v42 >> 0x2F))) ^ ((0x9DDFEA08EB382D69uLL * (*(__int64 *)((char *)a1 + a2 - 0x18) ^ v42 ^ (v42 >> 0x2F))) >> 0x2F));
      v45 = v40
          + __ROR8__(
              v40
            + v38
            - 0x622015F714C7D297LL
            * ((0x9DDFEA08EB382D69uLL * (*(__int64 *)((char *)a1 + a2 - 0x18) ^ v42 ^ (v42 >> 0x2F))) ^ ((0x9DDFEA08EB382D69uLL * (*(__int64 *)((char *)a1 + a2 - 0x18) ^ v42 ^ (v42 >> 0x2F))) >> 0x2F)),
              0x15)
          + __ROR8__(v43, 0x2C);
      v46 = v41 + *(__int64 *)((char *)a1 + a2 - 0x20) - 0x4B6D499041670D8DLL;
      v47 = *(__int64 *)((char *)a1 + a2 - 0x10) + *(__int64 *)((char *)a1 + a2 - 0x18) + v46;
      v48 = __ROR8__(v46 + v39 + v38, 0x15);
      v49 = a1 + 6;
      v50 = *a1 - 0x4B6D499041670D8DLL * v38;
      v51 = v47 + v39;
      v52 = v73;
      v53 = v46 + v48 + __ROR8__(v47, 0x2C);
      v72 = a1 + 6;
      v71 = (a2 - 1) & 0xFFFFFFC0;
      while ( 1 )
      {
        v54 = v49[0xFFFFFFFB];
        v55 = v49[0xFFFFFFFD];
        v56 = v50 + v41 + v54 + v44;
        v57 = v49[0xFFFFFFFF];
        v58 = v51 + v52;
        v59 = v49[0xFFFFFFFC];
        v74 = 0xB492B66FBE98F273uLL * __ROR8__(v58, 0x21);
        v60 = v49[0xFFFFFFFA] - 0x4B6D499041670D8DLL * v45;
        v41 = v44 + v57 - 0x4B6D499041670D8DLL * __ROR8__(*v49 + v45 + v41, 0x2A);
        v61 = v54 + v59 + v60;
        v62 = v53 ^ (0xB492B66FBE98F273uLL * __ROR8__(v56, 0x25));
        v44 = v61 + v55;
        v45 = v60 + __ROR8__(v62 + v60 + v55 + v51, 0x15) + __ROR8__(v61, 0x2C);
        v63 = v72[1];
        v64 = v74 + v53 + v72[0xFFFFFFFE];
        v65 = v57 + *v49 + v64;
        v66 = v64 + v63 + v59;
        v52 = v62;
        v49 = v72 + 8;
        v72 += 8;
        v68 = __ROR8__(v65, 0x2C) + __ROR8__(v41 + v66, 0x15) + v64;
        v71 -= 0x40;
        if ( !v71 )
          break;
        v53 = v68;
        v51 = v65 + v63;
        v50 = v74;
      }
      v69 = v74
          - 0x622015F714C7D297LL
          * ((0x9DDFEA08EB382D69uLL
            * ((0x9DDFEA08EB382D69uLL * (v68 ^ v45)) ^ v68 ^ ((0x9DDFEA08EB382D69uLL * (v68 ^ v45)) >> 0x2F))) ^ ((0x9DDFEA08EB382D69uLL * ((0x9DDFEA08EB382D69uLL * (v68 ^ v45)) ^ v68 ^ ((0x9DDFEA08EB382D69uLL * (v68 ^ v45)) >> 0x2F))) >> 0x2F));
      v67 = v65 + v63;
      v70 = 0x9DDFEA08EB382D69uLL
          * (v69 ^ (v62
                  - 0x622015F714C7D297LL
                  * ((0x9DDFEA08EB382D69uLL
                    * ((0x9DDFEA08EB382D69uLL * (v67 ^ v44)) ^ v67 ^ ((0x9DDFEA08EB382D69uLL * (v67 ^ v44)) >> 0x2F))) ^ ((0x9DDFEA08EB382D69uLL * ((0x9DDFEA08EB382D69uLL * (v67 ^ v44)) ^ v67 ^ ((0x9DDFEA08EB382D69uLL * (v67 ^ v44)) >> 0x2F))) >> 0x2F))
                  - 0x4B6D499041670D8DLL * (v41 ^ (v41 >> 0x2F))));
      return 0x9DDFEA08EB382D69uLL
           * ((0x9DDFEA08EB382D69uLL * (v70 ^ v69 ^ (v70 >> 0x2F))) ^ ((0x9DDFEA08EB382D69uLL
                                                                      * (v70 ^ v69 ^ (v70 >> 0x2F))) >> 0x2F));
    }
    else
    {
      v23 = *(__int64 *)((char *)a1 + a2 - 0x18);
      v24 = *(__int64 *)((char *)a1 + a2 - 0x20);
      v25 = *(__int64 *)((char *)a1 + a2 - 8);
      v26 = 2 * a2 - 0x651E95C4D06FBFB1LL;
      v27 = *(__int64 *)((char *)a1 + a2 - 0x10);
      v28 = a1[1];
      v29 = 0x9AE16A3B2F90404FuLL * *a1;
      v30 = 0x9AE16A3B2F90404FuLL * a1[2];
      v31 = 9 * a1[3];
      v32 = (v24 ^ (v25 - 0x651E95C4D06FBFB1LL * *a1)) + v31 + 1;
      v33 = v23 + __ROR8__(v28, 0x1E);
      v34 = v30 + v31;
      v35 = v30 + v31 + v23;
      v36 = v23 + __ROR8__(v34, 0x2A);
      v37 = v24
          + v26 * v27
          + v26
          * (v28
           + v35
           + _byteswap_uint64(
               v26
             * (v25
              + v36
              + v35
              + _byteswap_uint64(v26 * (v26 * v27
                                      + v32
                                      + _byteswap_uint64(v26 * (v32 + v33 + 8 * v33 + __ROR8__(v25 + v29, 0x2B))))))));
      return v36 + v26 * (v37 ^ (v37 >> 0x2F));
    }
  }
  else if ( a2 > 0x10 )
  {
    v14 = *a1;
    v15 = a1[1];
    v16 = 2 * a2 - 0x651E95C4D06FBFB1LL;
    v17 = v16 * *(__int64 *)((char *)a1 + a2 - 8);
    v18 = 0x9AE16A3B2F90404FuLL * *(__int64 *)((char *)a1 + v2 - 0x10);
    v14 *= 0xB492B66FBE98F273uLL;
    v19 = v17 + __ROR8__(v15 - 0x651E95C4D06FBFB1LL, 0x12);
    v20 = __ROR8__(v17, 0x1E);
    v21 = v14 + v19;
    v22 = __ROR8__(v15 + v14, 0x2B);
    return v16
         * ((v16 * (v21 ^ (v16 * (v21 ^ (v18 + v20 + v22))) ^ ((v16 * (v21 ^ (v18 + v20 + v22))) >> 0x2F))) ^ ((v16 * (v21 ^ (v16 * (v21 ^ (v18 + v20 + v22))) ^ ((v16 * (v21 ^ (v18 + v20 + v22))) >> 0x2F))) >> 0x2F));
  }
  else if ( a2 < 8 )
  {
    if ( a2 < 4 )
    {
      if ( a2 )
      {
        v13 = (0xC3A5C85C97CB3127uLL * (a2 + 4 * *((unsigned __int8 *)a1 + a2 - 1))) ^ (0x9AE16A3B2F90404FuLL
                                                                                      * *(unsigned __int8 *)a1
                                                                                      - 0x1E95C4D06FBFB100LL
                                                                                      * *((unsigned __int8 *)a1
                                                                                        + ((unsigned __int64)a2 >> 1)));
        return 0x9AE16A3B2F90404FuLL * (v13 ^ (v13 >> 0x2F));
      }
      else
      {
        return 0x9AE16A3B2F90404FuLL;
      }
    }
    else
    {
      v10 = *(unsigned int *)((char *)a1 + a2 - 4);
      v11 = 2 * a2 - 0x651E95C4D06FBFB1LL;
      v12 = v11
          * (v10 ^ (v11 * (v10 ^ (a2 + 8LL * *(unsigned int *)a1))) ^ ((v11
                                                                      * (v10 ^ (a2
                                                                              + 8
                                                                              * (unsigned __int64)*(unsigned int *)a1))) >> 0x2F));
      return v11 * (v12 ^ (v12 >> 0x2F));
    }
  }
  else
  {
    v4 = *(__int64 *)((char *)a1 + a2 - 8);
    v5 = (unsigned int)(2 * v2) - 0x651E95C4D06FBFB1LL;
    v6 = *a1 - 0x651E95C4D06FBFB1LL;
    v7 = v5 * (v4 + __ROR8__(v6, 0x19));
    v8 = v5 * (v7 ^ (v6 + v5 * __ROR8__(v4, 0x25)));
    return v5 * ((v5 * (v7 ^ v8 ^ (v8 >> 0x2F))) ^ ((v5 * (v7 ^ v8 ^ (v8 >> 0x2F))) >> 0x2F));
  }
}



int *__fastcall sub_14C8ED220(__int64 a1, int *a2, __int64 a3, _BYTE *a4)
{
  int *v8; // rsi
  bool v10; // zf
  _DWORD *v11; // rax
  int v12; // ebx
  int v13; // r14d
  int v14; // edx
  unsigned int v15; // r14d
  _DWORD *v16; // r12
  __int64 v17; // rax
  _DWORD *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r9
  _DWORD *i; // rdx
  char v24; // [rsp+30h] [rbp-48h] BYREF
  __int128 v25[3]; // [rsp+40h] [rbp-38h] BYREF
  int v26; // [rsp+80h] [rbp+8h] BYREF
  char v27; // [rsp+84h] [rbp+Ch]

  MEMORY[0x7FFBE2E27CF0]();
  v8 = (int *)sub_14C8F3610(a1, a3);
  if ( *v8 )
  {
    *a2 = *v8 & 0x7FFFFFFF;
    MEMORY[0x7FFBE2E23BB0](a1);
    return a2;
  }
  else
  {
    v10 = *(_BYTE *)(a3 + 0x24) == 0;
    v25[0] = *(_OWORD *)a3;
    v27 = 0;
    if ( !v10 )
    {
      v26 = *(_DWORD *)(a3 + 0x20);
      v27 = 1;
    }
    v11 = (_DWORD *)sub_14C8DF870(
                      *(_QWORD *)(a1 + 0x18),
                      (unsigned int)&v24,
                      (unsigned int)v25,
                      (unsigned int)&v26,
                      *(_WORD *)(a3 + 0x1C));
    v12 = v11[1] | (*v11 << 0x12);
    *v8 = *(_DWORD *)(a3 + 0x18) | v12;
    v13 = *(_DWORD *)(a1 + 0xC);
    v14 = *(_DWORD *)(a1 + 8) + 1;
    *(_DWORD *)(a1 + 8) = v14;
    if ( 0xA * v14 >= (unsigned int)(9 * (v13 + 1)) )
    {
      v15 = v13 + 1;
      v16 = *(_DWORD **)(a1 + 0x10);
      v17 = sub_14C7B7F30(8LL * v15, 4LL);
      *(_QWORD *)(a1 + 0x10) = v17;
      sub_150266849(v17, 0LL, 8LL * v15);
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 0xC) = 2 * v15 - 1;
      if ( v15 )
      {
        v18 = v16;
        v19 = v15;
        do
        {
          v20 = (unsigned int)*v18;
          if ( (_DWORD)v20 )
          {
            LODWORD(v20) = v20 & 0x7FFFFFFF;
            sub_14C8F45B0(a1, v25, v20);
            v21 = (unsigned int)(DWORD1(v25[0]) & *(_DWORD *)(a1 + 0xC));
            v22 = *(_QWORD *)(a1 + 0x10);
            for ( i = (_DWORD *)(v22 + 4 * v21); *i; i = (_DWORD *)(v22 + 4 * v21) )
              v21 = *(_DWORD *)(a1 + 0xC) & (unsigned int)(v21 + 1);
            *i = *v18;
            ++*(_DWORD *)(a1 + 8);
          }
          ++v18;
          --v19;
        }
        while ( v19 );
      }
      sub_14C7AAFD0(v16);
    }
    *a4 = 1;
    *a2 = v12;
    MEMORY[0x7FFBE2E23BB0](a1);
    return a2;
  }
}

__int64 __fastcall sub_14C7B7F30(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi

  ((void (*)(void))nullsub_1)();
  v4 = qword_1573D81D8;
  if ( !qword_1573D81D8 )
  {
    sub_14C7AB0A0();
    v4 = qword_1573D81D8;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 0x10LL))(v4, a1, a2);
  nullsub_1(v5, (unsigned int)a1);
  return v5;
}

```

---
ASm BaseProcessAddr 0x140000000
---


```asm
.data:00000001573DC1C0 ??                      unk_1573DC1C0   db    ? ;               ; DATA XREF: sub_14C8D4230+5B↑o
.data:00000001573DC1C0                                                                 ; sub_14C8D4230:loc_14C8D4294↑o ...




.text:000000014C8D5120
.text:000000014C8D5120                         ; =============== S U B R O U T I N E =======================================
.text:000000014C8D5120
.text:000000014C8D5120                         ; Attributes: bp-based frame
.text:000000014C8D5120
.text:000000014C8D5120                         ; _QWORD *__fastcall sub_14C8D5120(_QWORD *, __int64)
.text:000000014C8D5120                         sub_14C8D5120   proc near               ; CODE XREF: sub_14CBCDEE0+10E↓p
.text:000000014C8D5120                                                                 ; sub_14E5DFE90+D1↓p ...
.text:000000014C8D5120
.text:000000014C8D5120                         var_60          = byte ptr -60h
.text:000000014C8D5120                         var_5C          = dword ptr -5Ch
.text:000000014C8D5120                         var_58          = byte ptr -58h
.text:000000014C8D5120                         var_4B          = word ptr -4Bh
.text:000000014C8D5120                         var_49          = byte ptr -49h
.text:000000014C8D5120                         var_48          = byte ptr -48h
.text:000000014C8D5120                         var_38          = qword ptr -38h
.text:000000014C8D5120                         var_30          = dword ptr -30h
.text:000000014C8D5120                         var_2C          = byte ptr -2Ch
.text:000000014C8D5120                         var_2B          = word ptr -2Bh
.text:000000014C8D5120                         var_29          = byte ptr -29h
.text:000000014C8D5120                         var_28          = xmmword ptr -28h
.text:000000014C8D5120                         var_14          = byte ptr -14h
.text:000000014C8D5120                         var_10          = qword ptr -10h
.text:000000014C8D5120                         var_s0          = byte ptr  0
.text:000000014C8D5120                         arg_8           = qword ptr  38h
.text:000000014C8D5120                         arg_10          = qword ptr  40h
.text:000000014C8D5120                         arg_18          = qword ptr  48h
.text:000000014C8D5120
.text:000000014C8D5120 48 89 5C 24 10                          mov     [rsp+10h], rbx
.text:000000014C8D5125 48 89 74 24 18                          mov     [rsp+18h], rsi
.text:000000014C8D512A 48 89 7C 24 20                          mov     [rsp+20h], rdi
.text:000000014C8D512F 55                                      push    rbp
.text:000000014C8D5130 41 54                                   push    r12
.text:000000014C8D5132 41 55                                   push    r13
.text:000000014C8D5134 41 56                                   push    r14
.text:000000014C8D5136 41 57                                   push    r15
.text:000000014C8D5138 48 8B EC                                mov     rbp, rsp
.text:000000014C8D513B 48 81 EC 80 00 00 00                    sub     rsp, 80h        ; Integer Subtraction
.text:000000014C8D5142 48 8B 05 F7 01 4F 0A                    mov     rax, cs:off_156DC5340
.text:000000014C8D5149 48 33 C4                                xor     rax, rsp        ; Logical Exclusive OR
.text:000000014C8D514C 48 89 45 F0                             mov     [rbp-10h], rax
.text:000000014C8D5150 80 7A 04 00                             cmp     byte ptr [rdx+4], 0 ; Compare Two Operands
.text:000000014C8D5154 48 8D 7A 06                             lea     rdi, [rdx+6]    ; Load Effective Address
.text:000000014C8D5158 44 0F B7 7D B5                          movzx   r15d, word ptr [rbp-4Bh] ; Move with Zero-Extend
.text:000000014C8D515D 4C 8B E9                                mov     r13, rcx
.text:000000014C8D5160 44 0F B6 65 B7                          movzx   r12d, byte ptr [rbp-49h] ; Move with Zero-Extend
.text:000000014C8D5165 48 C7 C3 FF FF FF FF                    mov     rbx, 0FFFFFFFFFFFFFFFFh
.text:000000014C8D516C 74 0F                                   jz      short loc_14C8D517D ; Jump if Zero (ZF=1)
.text:000000014C8D516E 41 B6 01                                mov     r14b, 1
.text:000000014C8D5171
.text:000000014C8D5171                         loc_14C8D5171:                          ; CODE XREF: sub_14C8D5120+59↓j
.text:000000014C8D5171 48 FF C3                                inc     rbx             ; Increment by 1
.text:000000014C8D5174 66 83 3C 5F 00                          cmp     word ptr [rdi+rbx*2], 0 ; Compare Two Operands
.text:000000014C8D5179 75 F6                                   jnz     short loc_14C8D5171 ; Jump if Not Zero (ZF=0)
.text:000000014C8D517B EB 0C                                   jmp     short loc_14C8D5189 ; Jump
.text:000000014C8D517D                         ; ---------------------------------------------------------------------------
.text:000000014C8D517D
.text:000000014C8D517D                         loc_14C8D517D:                          ; CODE XREF: sub_14C8D5120+4C↑j
.text:000000014C8D517D 45 32 F6                                xor     r14b, r14b      ; Logical Exclusive OR
.text:000000014C8D5180
.text:000000014C8D5180                         loc_14C8D5180:                          ; CODE XREF: sub_14C8D5120+67↓j
.text:000000014C8D5180 48 FF C3                                inc     rbx             ; Increment by 1
.text:000000014C8D5183 44 38 34 1F                             cmp     [rdi+rbx], r14b ; Compare Two Operands
.text:000000014C8D5187 75 F7                                   jnz     short loc_14C8D5180 ; Jump if Not Zero (ZF=0)
.text:000000014C8D5189
.text:000000014C8D5189                         loc_14C8D5189:                          ; CODE XREF: sub_14C8D5120+5B↑j
.text:000000014C8D5189 80 3D 5C 6D B0 0A 00                    cmp     cs:byte_1573DBEEC, 0 ; Compare Two Operands
.text:000000014C8D5190 74 09                                   jz      short loc_14C8D519B ; Jump if Zero (ZF=1)
.text:000000014C8D5192 48 8D 35 27 70 B0 0A                    lea     rsi, unk_1573DC1C0 ; Load Effective Address
.text:000000014C8D5199 EB 16                                   jmp     short loc_14C8D51B1 ; Jump
.text:000000014C8D519B                         ; ---------------------------------------------------------------------------
.text:000000014C8D519B
.text:000000014C8D519B                         loc_14C8D519B:                          ; CODE XREF: sub_14C8D5120+70↑j
.text:000000014C8D519B 48 8D 0D 1E 70 B0 0A                    lea     rcx, unk_1573DC1C0 ; Load Effective Address
.text:000000014C8D51A2 E8 E9 04 00 00                          call    sub_14C8D5690   ; Call Procedure
.text:000000014C8D51A7 48 8B F0                                mov     rsi, rax
.text:000000014C8D51AA C6 05 3B 6D B0 0A 01                    mov     cs:byte_1573DBEEC, 1
.text:000000014C8D51B1
.text:000000014C8D51B1                         loc_14C8D51B1:                          ; CODE XREF: sub_14C8D5120+79↑j
.text:000000014C8D51B1 C6 45 A0 00                             mov     byte ptr [rbp-60h], 0
.text:000000014C8D51B5 44 8B C3                                mov     r8d, ebx
.text:000000014C8D51B8 48 89 7D C8                             mov     [rbp-38h], rdi
.text:000000014C8D51BC 48 8B D7                                mov     rdx, rdi
.text:000000014C8D51BF 89 5D D0                                mov     [rbp-30h], ebx
.text:000000014C8D51C2 44 88 75 D4                             mov     [rbp-2Ch], r14b
.text:000000014C8D51C6 66 44 89 7D D5                          mov     [rbp-2Bh], r15w
.text:000000014C8D51CB 44 88 65 D7                             mov     [rbp-29h], r12b
.text:000000014C8D51CF 45 84 F6                                test    r14b, r14b      ; Logical Compare
.text:000000014C8D51D2 75 12                                   jnz     short loc_14C8D51E6 ; Jump if Not Zero (ZF=0)
.text:000000014C8D51D4 48 8D 4D A8                             lea     rcx, [rbp-58h]  ; Load Effective Address
.text:000000014C8D51D8 4C 8D B6 20 00 01 00                    lea     r14, [rsi+10020h] ; Load Effective Address
.text:000000014C8D51DF E8 9C F3 FF FF                          call    sub_14C8D4580   ; Call Procedure
.text:000000014C8D51E4 EB 10                                   jmp     short loc_14C8D51F6 ; Jump
.text:000000014C8D51E6                         ; ---------------------------------------------------------------------------
.text:000000014C8D51E6
.text:000000014C8D51E6                         loc_14C8D51E6:                          ; CODE XREF: sub_14C8D5120+B2↑j
.text:000000014C8D51E6 48 8D 4D B8                             lea     rcx, [rbp-48h]  ; Load Effective Address
.text:000000014C8D51EA 4C 8D B6 24 00 01 00                    lea     r14, [rsi+10024h] ; Load Effective Address
.text:000000014C8D51F1 E8 7A F4 FF FF                          call    sub_14C8D4670   ; Call Procedure
.text:000000014C8D51F6
.text:000000014C8D51F6                         loc_14C8D51F6:                          ; CODE XREF: sub_14C8D5120+C4↑j
.text:000000014C8D51F6 0F 10 00                                movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.text:000000014C8D51F9 4C 8D 4D A0                             lea     r9, [rbp-60h]   ; Load Effective Address
.text:000000014C8D51FD C6 45 EC 00                             mov     byte ptr [rbp-14h], 0
.text:000000014C8D5201 4C 8D 45 C8                             lea     r8, [rbp-38h]   ; Load Effective Address
.text:000000014C8D5205 66 0F 7E C1                             movd    ecx, xmm0       ; Move 32 bits
.text:000000014C8D5209 48 8D 55 A4                             lea     rdx, [rbp-5Ch]  ; Load Effective Address
.text:000000014C8D520D 0F 11 45 D8                             movups  xmmword ptr [rbp-28h], xmm0 ; Move Unaligned Four Packed Single-FP
.text:000000014C8D5211 48 81 C1 01 04 00 00                    add     rcx, 401h       ; Add
.text:000000014C8D5218 48 C1 E1 06                             shl     rcx, 6          ; Shift Logical Left
.text:000000014C8D521C 48 03 CE                                add     rcx, rsi        ; Add
.text:000000014C8D521F E8 FC 7F 01 00                          call    sub_14C8ED220   ; Call Procedure
.text:000000014C8D5224 0F B6 4D A0                             movzx   ecx, byte ptr [rbp-60h] ; Move with Zero-Extend
.text:000000014C8D5228 F0 41 01 0E                             lock add [r14], ecx     ; Add
.text:000000014C8D522C 8B 4D A4                                mov     ecx, [rbp-5Ch]
.text:000000014C8D522F 49 8B C5                                mov     rax, r13
.text:000000014C8D5232 41 89 4D 00                             mov     [r13+0], ecx
.text:000000014C8D5236 41 C7 45 04 00 00 00 00                 mov     dword ptr [r13+4], 0
.text:000000014C8D523E 48 8B 4D F0                             mov     rcx, [rbp-10h]
.text:000000014C8D5242 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014C8D5245 E8 16 AC 98 03                          call    __security_check_cookie ; Call Procedure
.text:000000014C8D524A 4C 8D 9C 24 80 00 00 00                 lea     r11, [rsp+80h]  ; Load Effective Address
.text:000000014C8D5252 49 8B 5B 38                             mov     rbx, [r11+38h]
.text:000000014C8D5256 49 8B 73 40                             mov     rsi, [r11+40h]
.text:000000014C8D525A 49 8B 7B 48                             mov     rdi, [r11+48h]
.text:000000014C8D525E 49 8B E3                                mov     rsp, r11
.text:000000014C8D5261 41 5F                                   pop     r15
.text:000000014C8D5263 41 5E                                   pop     r14
.text:000000014C8D5265 41 5D                                   pop     r13
.text:000000014C8D5267 41 5C                                   pop     r12
.text:000000014C8D5269 5D                                      pop     rbp
.text:000000014C8D526A C3                                      retn                    ; Return Near from Procedure
.text:000000014C8D526A                         sub_14C8D5120   endp
.text:000000014C8D526A
.text:000000014C8D526A                         ; ---------------------------------------------------------------------------
.text:000000014C8D526B CC                                      db 0CCh
.text:000000014C8D526C CC                                      db 0CCh
.text:000000014C8D526D CC                                      db 0CCh
.text:000000014C8D526E CC                                      db 0CCh
.text:000000014C8D526F CC                                      db 0CCh
.text:000000014C8D5270


```


---
EncFunGname
---
```c


__int64 __fastcall sub_14C8D5270(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  signed __int64 v4; // r10
  int v6; // r11d
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128i v9; // xmm1
  __m128 v10; // xmm2
  __m128 v11; // xmm2
  __int64 v12; // rax
  int v13; // ecx
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  int v16; // [rsp+28h] [rbp-10h]
  bool v17; // [rsp+2Ch] [rbp-Ch]

  v4 = 0LL;
  v15 = a3;
  v16 = a2;
  v6 = 0;
  if ( a2 >= 8 )
  {
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      v6 += 8;
      v7 = _mm_or_ps(v7, (__m128)_mm_unpacklo_epi16(_mm_loadl_epi64((const __m128i *)(a3 + 2 * v4)), (__m128i)0LL));
      v9 = _mm_loadl_epi64((const __m128i *)(a3 + 2 * v4 + 8));
      v4 += 8LL;
      v8 = _mm_or_ps(v8, (__m128)_mm_unpacklo_epi16(v9, (__m128i)0LL));
    }
    while ( v4 < (__int64)(a2 & 0xFFFFFFFFFFFFFFF8uLL) );
    v10 = _mm_or_ps(v8, v7);
    v11 = _mm_or_ps(v10, (__m128)_mm_srli_si128((__m128i)v10, 8));
    LODWORD(v4) = _mm_cvtsi128_si32((__m128i)_mm_or_ps(v11, (__m128)_mm_srli_si128((__m128i)v11, 4)));
  }
  v12 = v6;
  if ( v6 < (__int64)a2 )
  {
    do
    {
      v13 = *(unsigned __int16 *)(a3 + 2 * v12++);
      LODWORD(v4) = v13 | v4;
    }
    while ( v12 < a2 );
  }
  v17 = (v4 & 0xFFFFFF80) != 0;
  sub_14C8D4870(a1, &v15, a4);
  return a1;
}
```
---
ASm
---
```asm

.text:000000014C8D5270                         ; __int64 __fastcall sub_14C8D5270(__int64, int, __int64, unsigned int)
.text:000000014C8D5270                         sub_14C8D5270   proc near               ; CODE XREF: .text:00000001411F9883↑p
.text:000000014C8D5270                                                                 ; sub_14121EBD0+16C↑p ...
.text:000000014C8D5270
.text:000000014C8D5270                         var_18          = xmmword ptr -18h
.text:000000014C8D5270
.text:000000014C8D5270 40 53                                   push    rbx
.text:000000014C8D5272 48 83 EC 30                             sub     rsp, 30h        ; Integer Subtraction
.text:000000014C8D5276 45 33 D2                                xor     r10d, r10d      ; Logical Exclusive OR
.text:000000014C8D5279 4C 89 44 24 20                          mov     [rsp+20h], r8
.text:000000014C8D527E 89 54 24 28                             mov     [rsp+28h], edx
.text:000000014C8D5282 48 8B D9                                mov     rbx, rcx
.text:000000014C8D5285 45 8B DA                                mov     r11d, r10d
.text:000000014C8D5288 85 D2                                   test    edx, edx        ; Logical Compare
.text:000000014C8D528A 7E 5F                                   jle     short loc_14C8D52EB ; Jump if Less or Equal (ZF=1 | SF!=OF)
.text:000000014C8D528C 83 FA 08                                cmp     edx, 8          ; Compare Two Operands
.text:000000014C8D528F 72 5A                                   jb      short loc_14C8D52EB ; Jump if Below (CF=1)
.text:000000014C8D5291 48 63 C2                                movsxd  rax, edx        ; Move with Sign-Extend Doubleword
.text:000000014C8D5294 0F 57 DB                                xorps   xmm3, xmm3      ; Bitwise Logical XOR for Single-FP Data
.text:000000014C8D5297 48 83 E0 F8                             and     rax, 0FFFFFFFFFFFFFFF8h ; Logical AND
.text:000000014C8D529B 0F 57 D2                                xorps   xmm2, xmm2      ; Bitwise Logical XOR for Single-FP Data
.text:000000014C8D529E 66 90                                   xchg    ax, ax          ; Exchange Register/Memory with Register
.text:000000014C8D52A0
.text:000000014C8D52A0                         loc_14C8D52A0:                          ; CODE XREF: sub_14C8D5270+59↓j
.text:000000014C8D52A0 F3 43 0F 7E 0C 50                       movq    xmm1, qword ptr [r8+r10*2] ; Move 64 bits
.text:000000014C8D52A6 0F 57 C0                                xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.text:000000014C8D52A9 66 0F 61 C8                             punpcklwd xmm1, xmm0    ; Unpack Low Packed Data (Word->Dword)
.text:000000014C8D52AD 41 83 C3 08                             add     r11d, 8         ; Add
.text:000000014C8D52B1 0F 56 D9                                orps    xmm3, xmm1      ; Bitwise Logical OR for Single-FP Data
.text:000000014C8D52B4 F3 43 0F 7E 4C 50 08                    movq    xmm1, qword ptr [r8+r10*2+8] ; Move 64 bits
.text:000000014C8D52BB 49 83 C2 08                             add     r10, 8          ; Add
.text:000000014C8D52BF 66 0F 61 C8                             punpcklwd xmm1, xmm0    ; Unpack Low Packed Data (Word->Dword)
.text:000000014C8D52C3 0F 56 D1                                orps    xmm2, xmm1      ; Bitwise Logical OR for Single-FP Data
.text:000000014C8D52C6 4C 3B D0                                cmp     r10, rax        ; Compare Two Operands
.text:000000014C8D52C9 7C D5                                   jl      short loc_14C8D52A0 ; Jump if Less (SF!=OF)
.text:000000014C8D52CB 0F 56 D3                                orps    xmm2, xmm3      ; Bitwise Logical OR for Single-FP Data
.text:000000014C8D52CE 66 0F 6F C2                             movdqa  xmm0, xmm2      ; Move Aligned Double Quadword
.text:000000014C8D52D2 66 0F 73 D8 08                          psrldq  xmm0, 8         ; Shift Double Quadword Right Logical
.text:000000014C8D52D7 0F 56 D0                                orps    xmm2, xmm0      ; Bitwise Logical OR for Single-FP Data
.text:000000014C8D52DA 66 0F 6F C2                             movdqa  xmm0, xmm2      ; Move Aligned Double Quadword
.text:000000014C8D52DE 66 0F 73 D8 04                          psrldq  xmm0, 4         ; Shift Double Quadword Right Logical
.text:000000014C8D52E3 0F 56 D0                                orps    xmm2, xmm0      ; Bitwise Logical OR for Single-FP Data
.text:000000014C8D52E6 66 41 0F 7E D2                          movd    r10d, xmm2      ; Move 32 bits
.text:000000014C8D52EB
.text:000000014C8D52EB                         loc_14C8D52EB:                          ; CODE XREF: sub_14C8D5270+1A↑j
.text:000000014C8D52EB                                                                 ; sub_14C8D5270+1F↑j
.text:000000014C8D52EB 49 63 C3                                movsxd  rax, r11d       ; Move with Sign-Extend Doubleword
.text:000000014C8D52EE 48 63 D2                                movsxd  rdx, edx        ; Move with Sign-Extend Doubleword
.text:000000014C8D52F1 48 3B C2                                cmp     rax, rdx        ; Compare Two Operands
.text:000000014C8D52F4 7D 1A                                   jge     short loc_14C8D5310 ; Jump if Greater or Equal (SF=OF)
.text:000000014C8D52F6                                         db      66h, 66h
.text:000000014C8D52F6 66 66 0F 1F 84 00 00 00                 nop     word ptr [rax+rax+00000000h] ; No Operation
.text:000000014C8D52F6 00 00
.text:000000014C8D5300
.text:000000014C8D5300                         loc_14C8D5300:                          ; CODE XREF: sub_14C8D5270+9E↓j
.text:000000014C8D5300 41 0F B7 0C 40                          movzx   ecx, word ptr [r8+rax*2] ; Move with Zero-Extend
.text:000000014C8D5305 48 FF C0                                inc     rax             ; Increment by 1
.text:000000014C8D5308 44 0B D1                                or      r10d, ecx       ; Logical Inclusive OR
.text:000000014C8D530B 48 3B C2                                cmp     rax, rdx        ; Compare Two Operands
.text:000000014C8D530E 7C F0                                   jl      short loc_14C8D5300 ; Jump if Less (SF!=OF)
.text:000000014C8D5310
.text:000000014C8D5310                         loc_14C8D5310:                          ; CODE XREF: sub_14C8D5270+84↑j
.text:000000014C8D5310 41 F7 C2 80 FF FF FF                    test    r10d, 0FFFFFF80h ; Logical Compare
.text:000000014C8D5317 48 8D 54 24 20                          lea     rdx, [rsp+20h]  ; Load Effective Address
.text:000000014C8D531C 45 8B C1                                mov     r8d, r9d
.text:000000014C8D531F 48 8B CB                                mov     rcx, rbx
.text:000000014C8D5322 0F 95 44 24 2C                          setnz   byte ptr [rsp+2Ch] ; Set Byte if Not Zero (ZF=0)
.text:000000014C8D5327 0F 28 44 24 20                          movaps  xmm0, xmmword ptr [rsp+20h] ; Move Aligned Four Packed Single-FP
.text:000000014C8D532C 66 0F 7F 44 24 20                       movdqa  xmmword ptr [rsp+20h], xmm0 ; Move Aligned Double Quadword
.text:000000014C8D5332 E8 39 F5 FF FF                          call    sub_14C8D4870   ; Call Procedure
.text:000000014C8D5337 48 8B C3                                mov     rax, rbx
.text:000000014C8D533A 48 83 C4 30                             add     rsp, 30h        ; Add
.text:000000014C8D533E 5B                                      pop     rbx
.text:000000014C8D533F C3                                      retn                    ; Return Near from Procedure
.text:000000014C8D533F                         sub_14C8D5270   endp
.text:000000014C8D533F
.text:000000014C8D5340
```
