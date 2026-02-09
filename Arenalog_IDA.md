---
F5 Debug Fun GetGname_Encode
---
```c
unsigned int *__fastcall sub_140BF1220(unsigned int *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // r13d
  int v6; // r12d
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rcx
  char v11; // al
  _QWORD *v12; // r14
  char *v13; // rsi
  int v14; // r14d
  __int32 i; // ebx
  __int64 v16; // rbx
  unsigned __int32 *v17; // rdi
  unsigned __int32 v18; // eax
  _WORD *v19; // rcx
  unsigned int v20; // ebx
  char *v22; // rdi
  int v23; // r14d
  __int32 j; // ebx
  __int64 v25; // rbx
  int *v26; // rsi
  int v27; // eax
  _WORD *v28; // rcx
  __int64 v29; // rcx
  _DWORD *v30; // rax
  unsigned __int8 v31; // cl
  __int128 v32; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-C0h] BYREF
  int v34; // [rsp+4Ch] [rbp-BCh]
  __int128 v35; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v37[3]; // [rsp+70h] [rbp-98h]
  __m128i v38; // [rsp+88h] [rbp-80h] BYREF
  char v39; // [rsp+9Ch] [rbp-6Ch]
  char v40[1024]; // [rsp+A8h] [rbp-60h] BYREF

  v4 = *((_DWORD *)a2 + 2);
  v5 = a4;
  v6 = a3;
  if ( v4 )
  {
    if ( *((_BYTE *)a2 + 0xC) )
    {
      *(_QWORD *)&v32 = *a2;
      DWORD2(v32) = v4;
      BYTE12(v32) = 1;
      v35 = v32;
      sub_140BF0F28(a1, &v35, a3, a4);
    }
    else
    {
      v8 = 0x400;
      if ( (int)v4 <= 0x400 )
        v8 = *((_DWORD *)a2 + 2);
      v9 = v8;
      if ( v8 > 0 )
      {
        a2 = (__int64 *)*a2;
        v10 = 0LL;
        do
        {
          v11 = *(_BYTE *)a2;
          a2 = (__int64 *)((char *)a2 + 2);
          v40[v10++] = v11;
        }
        while ( v10 < v9 );
      }
      *(_QWORD *)&v32 = v40;
      DWORD2(v32) = v4;
      BYTE12(v32) = 0;
      if ( v4 >= 0x400 )
      {
        sub_140BF01B0(a1, "ERROR_NAME_SIZE_EXCEEDED", 1LL);
      }
      else
      {
        if ( byte_14A302E68 )
        {
          v12 = &unk_14A574D80;
        }
        else
        {
          MEMORY[0x5BACEA0](&v33, a2, v9);
          v31 = (2 * ((v33 ^ 0xB ^ ((unsigned __int8)(v33 ^ 0xB) >> 1) & 8) & 8)) ^ v33 ^ 0xB ^ ((unsigned __int8)(v33 ^ 0xB) >> 1) & 8;
          byte_14A52D2DC = v31 ^ (v31 >> 1) & 8;
          v12 = (_QWORD *)sub_14139BEFC(&unk_14A574D80);
          byte_14A302E68 = 1;
        }
        if ( v6 == 1 )
        {
          DWORD2(v32) = v4;
          *(_QWORD *)&v32 = v40;
          BYTE12(v32) = 0;
          *(_OWORD *)&v37[1] = v32;
          v38 = *(__m128i *)sub_140BF1830(&v36, v40, v4);
          v13 = (char *)&v12[8 * (unsigned int)_mm_cvtsi128_si32(v38) + 0x2008];
          MEMORY[0x7FFA6FD07CF0](v13);
          v14 = *((_DWORD *)v13 + 3);
          for ( i = v38.m128i_i32[1]; ; i = v16 + 1 )
          {
            v16 = v14 & (unsigned int)i;
            v17 = (unsigned __int32 *)(*((_QWORD *)v13 + 2) + 4 * v16);
            v18 = *v17;
            if ( !*v17 )
              break;
            if ( (v18 & 0xE0000000) == v38.m128i_i32[2] )
            {
              v19 = (_WORD *)(*(_QWORD *)(*((_QWORD *)v13 + 3)
                                        + 8 * ((unsigned __int64)(v18 & 0x1FFFFFFF) >> 0x10)
                                        + 0x10)
                            + 2 * (unsigned int)(unsigned __int16)v18);
              if ( *v19 == v38.m128i_i16[6] )
              {
                v32 = *(_OWORD *)&v37[1];
                if ( (unsigned __int8)sub_140BF169C(v19, &v32) )
                  break;
              }
            }
          }
          if ( *v17 )
          {
            v20 = *v17 & 0x1FFFFFFF;
            MEMORY[0x7FFA6FD03BB0](v13);
          }
          else
          {
            v29 = *((_QWORD *)v13 + 3);
            v35 = *(_OWORD *)&v37[1];
            LOBYTE(v34) = 0;
            v30 = (_DWORD *)sub_14139BB18(
                              v29,
                              (unsigned int)&v32,
                              (unsigned int)&v35,
                              (unsigned int)&v33,
                              v38.m128i_i16[6]);
            v20 = v30[1] | (*v30 << 0x10);
            *v17 = v20 | v38.m128i_i32[2];
            ++*((_DWORD *)v13 + 2);
            if ( 0xA * *((_DWORD *)v13 + 2) >= (unsigned int)(9 * (*((_DWORD *)v13 + 3) + 1)) )
              sub_14139B2EC(v13);
            *((_DWORD *)v13 + 9) += BYTE4(v37[2]);
            ++*((_DWORD *)v13 + 8);
            MEMORY[0x7FFA6FD03BB0](v13);
          }
        }
        else if ( v6 )
        {
          v35 = v32;
          v20 = *(_DWORD *)sub_14139B97C(v12, &v33, &v35);
          v33 = HIWORD(v20);
          v34 = (unsigned __int16)v20;
          sub_146073A94(v12[HIWORD(v20) + 2] + 2 * (unsigned int)(unsigned __int16)v20, v40, v4);
        }
        else
        {
          DWORD2(v32) = v4;
          *(_QWORD *)&v32 = v40;
          BYTE12(v32) = 0;
          v37[1] = v40;
          v35 = v32;
          LODWORD(v37[2]) = v4;
          BYTE4(v37[2]) = 0;
          *(_WORD *)((char *)&v37[2] + 5) = *(_WORD *)((char *)&v32 + 0xD);
          HIBYTE(v37[2]) = HIBYTE(v32);
          sub_140BEF2D8(&v38, &v35, v9);
          v39 = 0;
          v22 = (char *)&v12[8 * v38.m128i_u32[0] + 0x2008];
          MEMORY[0x7FFA6FCF6D20](v22);
          v23 = *((_DWORD *)v22 + 3);
          for ( j = v38.m128i_i32[1]; ; j = v25 + 1 )
          {
            v25 = v23 & (unsigned int)j;
            v26 = (int *)(*((_QWORD *)v22 + 2) + 4 * v25);
            v27 = *v26;
            if ( !*v26 )
              break;
            if ( (v27 & 0xE0000000) == v38.m128i_i32[2] )
            {
              v28 = (_WORD *)(*(_QWORD *)(*((_QWORD *)v22 + 3)
                                        + 8 * ((unsigned __int64)(v27 & 0x1FFFFFFF) >> 0x10)
                                        + 0x10)
                            + 2 * (unsigned int)(unsigned __int16)v27);
              if ( *v28 == v38.m128i_i16[6] )
              {
                v35 = *(_OWORD *)&v37[1];
                if ( (unsigned __int8)sub_140BF169C(v28, &v35) )
                  break;
              }
            }
          }
          v20 = *v26 & 0x1FFFFFFF;
          MEMORY[0x7FFA6FCF6C60](v22);
        }
        *a1 = v20;
        a1[1] = v5;
      }
    }
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
  }
  return a1;
}

```
---
ASM Vive Fun GetGname_Encode
---
 

```asm

.std:0000000140BF15BB ; ---------------------------------------------------------------------------
.std:0000000140BF15BB
.std:0000000140BF15BB loc_140BF15BB:                          ; CODE XREF: sub_140BF1220+C4↑j
.std:0000000140BF15BB                                         ; DATA XREF: .std:000000014A6DE438↓o ...
.std:0000000140BF15BB ; __unwind { // __GSHandlerCheck
.std:0000000140BF15BB                 lea     rcx, [rsp+4D0h+anonymous_0]
.std:0000000140BF15C0                 call    cs:qword_1474BB568
.std:0000000140BF15C6                 movzx   eax, byte ptr [rsp+4D0h+anonymous_0]
.std:0000000140BF15CB                 xor     al, 0Bh
.std:0000000140BF15CD                 movzx   ecx, al
.std:0000000140BF15D0                 shr     cl, 1
.std:0000000140BF15D2                 and     cl, 8
.std:0000000140BF15D5                 xor     cl, al
.std:0000000140BF15D7                 movzx   eax, cl
.std:0000000140BF15DA                 and     al, 8
.std:0000000140BF15DC                 add     al, al
.std:0000000140BF15DE                 xor     cl, al
.std:0000000140BF15E0                 movzx   eax, cl
.std:0000000140BF15E3                 shr     al, 1
.std:0000000140BF15E5                 and     al, 8
.std:0000000140BF15E7                 xor     al, cl
.std:0000000140BF15E9                 lea     rcx, unk_14A574D80
.std:0000000140BF15F0                 mov     cs:byte_14A52D2DC, al
.std:0000000140BF15F6                 call    sub_14139BEFC
.std:0000000140BF15FB                 mov     r14, rax
.std:0000000140BF15FE                 mov     cs:byte_14A302E68, 1
.std:0000000140BF1605                 jmp     loc_140BF12F1
.std:0000000140BF1605 ; } // starts at 140BF15BB
.std:0000000140BF1605 sub_140BF1220   endp
.std:0000000140BF1605
.std:0000000140BF1605 ; ---------------------------------------------------------------------------

```

---
F5 debug ida 
---

```c
char __fastcall sub_140AD7190(
        __int64 (__fastcall ****a1)(),
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 (__fastcall ***v11)(); // rcx
  __int64 v12; // rbx
  v8_qjs::Boolean *v13; // r13
  void *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // r8
  v8_qjs::External *v17; // rax
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  void *v21; // rax
  v8_qjs::External *v22; // rax
  v8_qjs::External *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 *v29; // rbx
  __int64 v30; // rdi
  double v31; // xmm0_8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 (__fastcall ***v34)(); // rbx
  int v35; // r14d
  _DWORD *v36; // rdi
  _DWORD *v37; // rax
  __int64 v38; // rax
  v8_qjs::Boolean *v39; // r13
  unsigned __int16 *v40; // rbx
  int v41; // ecx
  unsigned __int16 *v42; // rdx
  char v43; // r11
  __int64 v44; // rbx
  int v45; // r8d
  unsigned __int16 *i; // rcx
  __int64 v47; // r10
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int16 *v50; // r9
  __int64 v51; // rax
  unsigned int v52; // r15d
  v8_qjs::Boolean *v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rdi
  char *v56; // rax
  unsigned __int16 v57; // ax
  int v58; // eax
  __int64 j; // rcx
  v8_qjs::Boolean *v60; // rax
  unsigned __int8 v61; // cl
  __m128i v62; // xmm0
  char *v63; // rdi
  int v64; // r9d
  unsigned int v65; // ebx
  __int64 v66; // rbx
  v8_qjs::Boolean *v67; // rcx
  int v68; // eax
  _WORD *v69; // rcx
  _DWORD *v70; // rcx
  int v71; // ebx
  int v72; // eax
  _DWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  v8_qjs::External *v76; // rax
  int v77; // edx
  int v78; // r8d
  int v79; // r9d
  void *v80; // rax
  v8_qjs::External *v81; // rax
  v8_qjs::External *v82; // rcx
  __int64 v83; // rax
  __int64 (__fastcall ***v84)(); // rbx
  _DWORD *v85; // rax
  __int64 v86; // rax
  __int64 (__fastcall *v87)(); // r8
  __int64 (__fastcall ***v88)(); // rbx
  v8_qjs::External *v89; // rax
  void *v90; // r13
  __int64 v91; // rax
  __m128i *v92; // rcx
  __int64 v93; // rax
  __int64 (__fastcall **v94)(); // rax
  _DWORD *v95; // rax
  __int64 v96; // rax
  v8_qjs::External *v97; // rax
  v8_qjs::External *v98; // r13
  void *v99; // rax
  __int64 v100; // rcx
  int v101; // edx
  int v102; // ecx
  int v103; // r8d
  int v104; // r9d
  __int64 v105; // rax
  __int64 v106; // rax
  char v107; // al
  __int64 v108; // rcx
  v8_qjs::External *v109; // rbx
  unsigned int v110; // eax
  v8_qjs::External *v111; // rbx
  char *v112; // rax
  unsigned int v113; // ebx
  char *v114; // rdi
  char *v115; // rax
  __int64 *v116; // rdx
  char *v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rdx
  _DWORD *v120; // rbx
  int v121; // eax
  int v122; // r15d
  __int64 v123; // r13
  int v124; // edi
  __int64 v125; // r15
  __int64 v126; // rcx
  int v127; // r8d
  __int64 v128; // rdi
  __int64 v129; // rax
  int v130; // ebx
  int v131; // r12d
  char *v132; // rax
  __int64 v133; // rdi
  int v134; // ebx
  char *v135; // rdi
  int v136; // r8d
  int v137; // eax
  char *v138; // rax
  int v139; // esi
  _DWORD **v140; // rdi
  _DWORD *v141; // rbx
  v8_qjs::External *v142; // rax
  int v143; // edx
  int v144; // ecx
  int v145; // r8d
  int v146; // r9d
  void *v147; // r13
  __int64 v148; // rax
  v8_qjs::External *v149; // rax
  int v150; // edx
  int v151; // ecx
  int v152; // r8d
  int v153; // r9d
  void *v154; // r13
  __int64 (__fastcall ***v155)(); // rcx
  __int64 v156; // rax
  _DWORD *v157; // r12
  __int128 *v158; // rdi
  int v159; // ecx
  __int128 v160; // xmm0
  __int64 v161; // xmm1_8
  _OWORD *v162; // rax
  __int64 v163; // r8
  __m128d v164; // xmm2
  __int64 v165; // rax
  __int128 v166; // xmm0
  unsigned __int64 v167; // rax
  char *v168; // rax
  v8_qjs::External *v169; // rbx
  __int64 v170; // rax
  unsigned int v171; // eax
  unsigned int v172; // r13d
  _DWORD *v173; // rdi
  _DWORD *v174; // rbx
  __int64 v175; // r15
  __int64 v176; // rax
  int v177; // eax
  int v178; // r8d
  int v179; // eax
  char v180; // al
  _DWORD *v181; // rdi
  int v182; // eax
  v8_qjs::External *v183; // rdi
  char v184; // al
  v8_qjs::External *v185; // rax
  int v186; // edx
  int v187; // ecx
  int v188; // r8d
  int v189; // r9d
  v8_qjs::External *v190; // r13
  void *v191; // rax
  __int64 v192; // rax
  v8_qjs::External *v193; // rax
  int v194; // edx
  int v195; // ecx
  int v196; // r8d
  int v197; // r9d
  void *v198; // r13
  unsigned int *v199; // rbx
  void *v200; // rax
  int v201; // ecx
  int v202; // edi
  int v203; // ebx
  char *v204; // rbx
  unsigned int v205; // eax
  int v206; // eax
  v8_qjs::External *v207; // rax
  int v208; // edx
  int v209; // ecx
  int v210; // r8d
  int v211; // r9d
  void *v212; // r13
  v8_qjs::External *v213; // rax
  int v214; // edx
  int v215; // ecx
  int v216; // r8d
  int v217; // r9d
  void *v218; // r13
  __int64 (__fastcall ***v219)(); // rcx
  int v220; // eax
  __int64 v221; // rax
  __int64 v222; // rdi
  unsigned __int64 v223; // rcx
  __int128 v224; // xmm1
  __int64 v225; // rbx
  __int64 v226; // rbx
  unsigned __int64 *v227; // rax
  _DWORD *v228; // rdi
  unsigned __int64 v229; // rbx
  char v230; // al
  char v231; // bl
  v8_qjs::External *v232; // rax
  int v233; // edx
  int v234; // ecx
  int v235; // r8d
  int v236; // r9d
  _QWORD *v237; // r13
  __int64 v238; // rax
  __int64 v239; // rbx
  __int64 v240; // rcx
  __int64 v241; // rdx
  __int128 v242; // xmm1
  __int64 v243; // rbx
  __int64 v244; // rbx
  v8_qjs::External *v245; // rax
  int v246; // edx
  int v247; // ecx
  int v248; // r8d
  int v249; // r9d
  void *v250; // r13
  __int64 *ThreadLocalStoragePointer; // rax
  __int64 v252; // r15
  __int64 (__fastcall ***v253)(); // rdi
  int v254; // eax
  __int64 (__fastcall **v255)(); // r8
  __int64 (__fastcall *v256)(); // rax
  __int64 (__fastcall ***v257)(); // rcx
  _DWORD *v258; // rax
  __int64 v259; // rax
  __int128 *v260; // rax
  v8_qjs::Boolean *v261; // r15
  __int64 m; // rdi
  __int64 v263; // rbx
  __int64 v264; // rax
  __int64 v265; // rax
  _DWORD *v266; // rbx
  __int64 v267; // rax
  _DWORD *v268; // rsi
  __int64 v269; // r12
  __int64 k; // rsi
  __int64 v271; // rax
  _QWORD *v272; // r13
  int v273; // eax
  unsigned __int16 *v274; // r8
  int v275; // ecx
  int v276; // r15d
  __int64 v277; // r9
  int v278; // ecx
  unsigned int v279; // eax
  _DWORD *v280; // rdi
  _DWORD *v281; // rax
  unsigned int v282; // ebx
  v8_qjs::External *v283; // r15
  int v284; // ecx
  bool v285; // zf
  void *v286; // rdi
  void *v287; // rax
  int v288; // eax
  __int64 v289; // rax
  __int64 v290; // rbx
  __int64 v291; // rax
  __int64 v292; // rax
  v8_qjs::External *v293; // rax
  int v294; // edx
  int v295; // ecx
  int v296; // r8d
  int v297; // r9d
  void *v298; // rax
  __int64 v299; // rax
  __int64 v300; // rax
  v8_qjs::External *v301; // rax
  int v302; // edx
  int v303; // ecx
  int v304; // r8d
  int v305; // r9d
  __int64 v306; // rax
  v8_qjs::Boolean *v307; // rbx
  __int64 v308; // rcx
  __int64 v309; // rax
  _DWORD *v310; // rax
  int v311; // xmm1_4
  int v312; // xmm0_4
  int v313; // edx
  int v314; // edi
  _QWORD *v315; // r13
  _BYTE *v316; // rax
  _BYTE *v317; // r10
  __int64 *v318; // r9
  signed __int64 v319; // r10
  __int64 v320; // rdx
  __int64 v321; // r8
  _BYTE *v322; // rax
  _BYTE *v323; // r10
  __int64 *v324; // r9
  signed __int64 v325; // r10
  __int64 v326; // rdx
  __int64 v327; // r8
  _BYTE *v328; // rax
  _BYTE *v329; // r10
  __int64 v330; // rax
  const wchar_t *v331; // r9
  signed __int64 v332; // r10
  __int64 v333; // rdx
  __int64 v334; // r8
  void *v335; // rax
  v8_qjs::External *v336; // rax
  int v337; // edx
  int v338; // ecx
  int v339; // r8d
  int v340; // r9d
  __int64 v341; // rax
  __int64 v342; // rax
  __int64 v343; // rcx
  __int64 v344; // rdi
  void *v345; // r13
  int v346; // edx
  void *v347; // r13
  v8_qjs::External *v348; // rax
  int v349; // edx
  int v350; // ecx
  int v351; // r8d
  int v352; // r9d
  _QWORD *v353; // r13
  __int64 (__fastcall ***v354)(); // rcx
  int v355; // eax
  __int64 v356; // rdi
  char v357; // al
  __int64 (__fastcall ***v358)(); // rcx
  __int64 v359; // rax
  v8_qjs::External *v360; // rbx
  __int64 v361; // r15
  _QWORD *v362; // r13
  void *v363; // rax
  __int64 v364; // rbx
  __int64 v365; // rax
  v8_qjs::External *v366; // rax
  int v367; // edx
  int v368; // ecx
  int v369; // r8d
  int v370; // r9d
  __int64 v371; // rax
  __int64 v372; // rax
  __int64 v373; // rax
  v8_qjs::External *v374; // rax
  void *v375; // r13
  void *v376; // rdx
  __int64 v377; // rbx
  __int64 v378; // rax
  v8_qjs::External *v379; // rax
  _QWORD *v380; // rax
  int *v381; // rcx
  int v382; // eax
  __int64 v383; // rbx
  __int64 v384; // rax
  int v385; // edx
  int v386; // ecx
  int v387; // r8d
  int v388; // r9d
  __int64 (__fastcall ***v389)(); // rbx
  _DWORD *v390; // rax
  __int64 v391; // rax
  void *v392; // r13
  void *v393; // rax
  __int64 (__fastcall ***v394)(); // rcx
  void *v395; // rdx
  __int64 v396; // rbx
  __int64 v397; // rax
  v8_qjs::External *v398; // rax
  _QWORD *v399; // rax
  unsigned int *v400; // rdi
  unsigned int v401; // edi
  _BYTE *v402; // rbx
  int v403; // edx
  int v404; // ecx
  int v405; // r8d
  int v406; // r9d
  unsigned int v407; // ebx
  void *v408; // rax
  unsigned int v409; // ebx
  void *v410; // rax
  _WORD *v411; // rax
  unsigned __int16 *v412; // rsi
  __int64 v413; // rdx
  unsigned int v414; // ebx
  __int64 v415; // rax
  unsigned int v416; // ebx
  __int64 v417; // rax
  int v418; // ebx
  int v419; // ecx
  _WORD *v420; // rax
  __int64 v421; // rsi
  bool v422; // sf
  int v423; // ebx
  __int64 v424; // rax
  __int64 v425; // rax
  int v426; // r8d
  const wchar_t *v427; // rdx
  unsigned __int16 v428; // cx
  unsigned __int64 v429; // xmm0_8
  _DWORD *v430; // rbx
  int v431; // [rsp+20h] [rbp-E0h]
  __int64 *v432; // [rsp+80h] [rbp-80h] BYREF
  __int64 v433; // [rsp+88h] [rbp-78h]
  __int128 *v434; // [rsp+90h] [rbp-70h] BYREF
  __int128 v435; // [rsp+98h] [rbp-68h] BYREF
  __int128 v436; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v437; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v438; // [rsp+C8h] [rbp-38h]
  unsigned __int128 v439; // [rsp+D0h] [rbp-30h] BYREF
  v8_qjs::Boolean *v440; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v441; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v442; // [rsp+F0h] [rbp-10h]
  _DWORD *v443; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v444; // [rsp+100h] [rbp+0h]
  v8_qjs::External *v445; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v446; // [rsp+110h] [rbp+10h] BYREF
  _QWORD *v447; // [rsp+118h] [rbp+18h] BYREF
  __int64 v448; // [rsp+120h] [rbp+20h]
  char v449; // [rsp+128h] [rbp+28h]
  __int64 v450[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v451; // [rsp+140h] [rbp+40h] BYREF
  int v452; // [rsp+148h] [rbp+48h]
  __m128i v453; // [rsp+150h] [rbp+50h] BYREF
  int v454; // [rsp+160h] [rbp+60h]
  int v455; // [rsp+164h] [rbp+64h]
  _QWORD *v456; // [rsp+170h] [rbp+70h] BYREF
  __int128 v457; // [rsp+178h] [rbp+78h] BYREF
  __m128i v458; // [rsp+188h] [rbp+88h] BYREF
  _DWORD *v459; // [rsp+198h] [rbp+98h] BYREF
  _DWORD *v460; // [rsp+1A0h] [rbp+A0h] BYREF
  char v461[16]; // [rsp+1A8h] [rbp+A8h] BYREF
  char v462[16]; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v463[40]; // [rsp+1C8h] [rbp+C8h] BYREF
  v8_qjs::External *v464[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  __m128i v465; // [rsp+200h] [rbp+100h] BYREF
  __int64 v466; // [rsp+210h] [rbp+110h] BYREF
  __int64 v467[2]; // [rsp+218h] [rbp+118h] BYREF
  v8_qjs::External *v468; // [rsp+228h] [rbp+128h]
  __int128 v469; // [rsp+230h] [rbp+130h] BYREF
  __int64 v470; // [rsp+240h] [rbp+140h]
  int v471; // [rsp+248h] [rbp+148h]
  __int128 v472; // [rsp+250h] [rbp+150h]
  __int128 v473; // [rsp+260h] [rbp+160h]
  __int16 v474[1024]; // [rsp+270h] [rbp+170h] BYREF
  char v475[2048]; // [rsp+A70h] [rbp+970h] BYREF
  char v476[2048]; // [rsp+1270h] [rbp+1170h] BYREF

  v451 = a5;
  v450[0] = a4;
  v445 = (v8_qjs::External *)a3;
  v447 = a2;
  if ( a2 && (*(_QWORD *)(a2[1] + 0x10LL) & 0x1000000000000LL) != 0 )
  {
    v11 = *a1;
    if ( *((_DWORD *)v11 + 2) == 2 )
    {
      v12 = a2[0x10];
      sub_140C352EC(v11, &v432);
      v13 = (v8_qjs::Boolean *)&dword_1475961C4;
      if ( (_DWORD)v433 )
        v14 = (void *)sub_14290E140(&v432);
      else
        v14 = &dword_1475961C4;
      v15 = (_QWORD *)sub_140BF1150(&v447, v14, 1LL);
      v16 = sub_140E8DB78(v12, *v15);
      if ( v16 == 0xFFFFFFFFFFFFFFFFuLL )
      {
        if ( (unsigned __int8)byte_149E0B200 >= 2u && (unsigned __int8)byte_14A291A60 >= 2u )
        {
          v17 = (v8_qjs::External *)sub_1419F1200(a2, &v436);
          if ( *((_DWORD *)v17 + 2) )
            v21 = off_14A10DAE8(v17);
          else
            v21 = &dword_1475961C4;
          v437 = (unsigned __int64)v21;
          if ( (_DWORD)v433 )
            v22 = (v8_qjs::External *)off_14A10DAE8((v8_qjs::External *)&v432);
          else
            v22 = (v8_qjs::External *)&dword_1475961C4;
          v285 = *(_DWORD *)(v12 + 0x38) == 0;
          v23 = (v8_qjs::External *)(v12 + 0x30);
          v445 = v22;
          if ( !v285 )
            v13 = (v8_qjs::Boolean *)off_14A10DAE8(v23);
          v440 = v13;
          sub_143B58250((_DWORD)v23, v18, v19, v20, (__int64)&v440, (__int64)&v445, (__int64)&v437);
          off_14A10DAE8((v8_qjs::External *)&v436);
          sub_14290E14C(&v436);
          if ( sub_14290E140(&v436) )
          {
            v24 = sub_14290E140(&v436);
            sub_140AD6BE0(v24);
          }
        }
        off_14A10DAE8((v8_qjs::External *)&v432);
        sub_14290E14C(&v432);
        if ( !sub_14290E140(&v432) )
          return 0;
LABEL_21:
        v25 = sub_14290E140(&v432);
        sub_140AD6BE0(v25);
        return 0;
      }
      v27 = (__int64 *)a2[0xF];
      v28 = *v27;
LABEL_23:
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v28 + 0x148))(v27, a3, v16);
      off_14A10DAE8((v8_qjs::External *)&v432);
      sub_14290E14C(&v432);
LABEL_215:
      if ( !sub_14290E140(&v432) )
        return 1;
      v92 = (__m128i *)&v432;
      goto LABEL_134;
    }
    v29 = (__int64 *)a2[0xF];
    v30 = *v29;
    v31 = sub_141147614();
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(v30 + 0x148))(v29, a3, (unsigned int)(int)v31);
    return 1;
  }
  if ( !a2 )
    goto LABEL_615;
  v32 = a2[1];
  if ( (*(_QWORD *)(v32 + 0x10) & 0x1000000LL) != 0 )
  {
    if ( (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 0x140LL))(a2) && *((_DWORD *)*a1 + 2) == 2 )
    {
      v33 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 0x140LL))(a2);
      v34 = *a1;
      v35 = 0;
      v450[0] = v33;
      v432 = 0LL;
      v433 = 0LL;
      v36 = (_DWORD *)v33;
      if ( !((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), __int64 **))(*v34)[0xB])(v34, &v432) )
      {
        v447 = 0LL;
        v448 = 0LL;
        sub_140AD3CD0(&v447, 7LL);
        LODWORD(v448) = v448 + 7;
        if ( (int)v448 > SHIDWORD(v448) )
          sub_140DBCD80(&v447);
        v37 = off_14A10DAE8((v8_qjs::External *)&v447);
        *(_QWORD *)v37 = 0x69007200740053LL;
        v37[2] = 0x67006E;
        *((_WORD *)v37 + 6) = 0;
        sub_141F7F7CC(v34, &v447);
        off_14A10DAE8((v8_qjs::External *)&v447);
        sub_14290E14C(&v447);
        if ( sub_14290E140(&v447) )
        {
          v38 = sub_14290E140(&v447);
          sub_140AD6BE0(v38);
        }
      }
      v39 = (v8_qjs::Boolean *)&dword_1475961C4;
      if ( (_DWORD)v433 )
      {
        v40 = (unsigned __int16 *)off_14A10DAE8((v8_qjs::External *)&v432);
        v41 = 0;
        v42 = v40;
        if ( !v40 )
          goto LABEL_36;
      }
      else
      {
        v42 = (unsigned __int16 *)&dword_1475961C4;
        v41 = 0;
        v40 = (unsigned __int16 *)&dword_1475961C4;
      }
      v57 = *v42;
      if ( *v42 )
      {
        do
        {
          ++v40;
          v41 |= v57;
          v57 = *v40;
        }
        while ( *v40 );
        if ( (v41 & 0xFFFFFF80) != 0 )
        {
          v43 = 1;
LABEL_37:
          v44 = v40 - v42;
          if ( (_DWORD)v44 )
          {
            v45 = 0;
            for ( i = &v42[(int)v44 - 1]; i >= v42; i += 0xFFFFFFFF )
            {
              if ( (unsigned __int16)(*i - 0x30) > 9u )
                break;
              ++v45;
            }
            v47 = v45;
            v48 = (int)v44 - (__int64)v45;
            if ( !v45 || v45 >= (int)v44 || v42[v48 - 1] != 0x5F || v45 > 0xA || v45 != 1 && v42[v48] == 0x30 )
              goto LABEL_67;
            v49 = 0LL;
            if ( v45 <= 0 )
              goto LABEL_51;
            v50 = &v42[(int)v44 - (__int64)v45];
            do
            {
              v51 = *v50++;
              v49 = v51 + 2 * (5 * v49 - 0x18);
              --v47;
            }
            while ( v47 );
            if ( v49 < 0x7FFFFFFF )
            {
LABEL_51:
              v52 = v49 + 1;
              LODWORD(v44) = v44 - v45 - 1;
              if ( !(_DWORD)v44 )
                goto LABEL_52;
            }
            else
            {
LABEL_67:
              v52 = 0;
            }
            if ( v43 )
            {
              *(_QWORD *)&v439 = v42;
              DWORD2(v439) = v44;
              BYTE12(v439) = 1;
              sub_140BF0F28(&v446, &v439, 1LL, v52);
            }
            else
            {
              v58 = 0x400;
              if ( (int)v44 <= 0x400 )
                v58 = v44;
              if ( v58 > 0 )
              {
                for ( j = 0LL; j < v58; ++j )
                  *((_BYTE *)v474 + j) = v42[j];
              }
              if ( (unsigned int)v44 < 0x400 )
              {
                if ( byte_14A302E68 )
                {
                  v60 = (v8_qjs::Boolean *)&unk_14A574D80;
                }
                else
                {
                  MEMORY[0x5BACEA0](&v437, v42, v58);
                  v61 = (2 * ((v437 ^ 0xB ^ ((unsigned __int8)(v437 ^ 0xB) >> 1) & 8) & 8)) ^ v437 ^ 0xB ^ ((unsigned __int8)(v437 ^ 0xB) >> 1) & 8;
                  byte_14A52D2DC = v61 ^ (v61 >> 1) & 8;
                  v60 = (v8_qjs::Boolean *)sub_14139BEFC(&unk_14A574D80);
                  byte_14A302E68 = 1;
                }
                v440 = v60;
                DWORD2(v436) = v44;
                *(_QWORD *)&v436 = v474;
                *(_WORD *)((char *)&v436 + 0xD) = *(_WORD *)((char *)&v439 + 0xD);
                HIBYTE(v436) = HIBYTE(v439);
                BYTE12(v436) = 0;
                *(_OWORD *)v464 = v436;
                v62 = *(__m128i *)sub_140BF1830(&v453, v474, (unsigned int)v44);
                BYTE4(v466) = 0;
                v465 = v62;
                v63 = (char *)v440 + 0x40 * (unsigned int)_mm_cvtsi128_si32(v62) + 0x10040;
                sub_144384A34(&v451, v63);
                v64 = *((_DWORD *)v63 + 3);
                v65 = v465.m128i_u32[1];
                LODWORD(v434) = v64;
                while ( 1 )
                {
                  v66 = v64 & v65;
                  v67 = (v8_qjs::Boolean *)(*((_QWORD *)v63 + 2) + 4 * v66);
                  v68 = *(_DWORD *)v67;
                  v440 = v67;
                  if ( !v68 )
                    break;
                  if ( (v68 & 0xE0000000) == v465.m128i_i32[2] )
                  {
                    v69 = (_WORD *)(*(_QWORD *)(*((_QWORD *)v63 + 3)
                                              + 8 * ((unsigned __int64)(v68 & 0x1FFFFFFF) >> 0x10)
                                              + 0x10)
                                  + 2 * (unsigned int)(unsigned __int16)v68);
                    if ( *v69 == v465.m128i_i16[6] )
                    {
                      v439 = *(_OWORD *)v464;
                      if ( (unsigned __int8)sub_140BF169C(v69, &v439) )
                      {
                        v67 = v440;
                        break;
                      }
                      v64 = (int)v434;
                    }
                  }
                  v65 = v66 + 1;
                }
                if ( v8_qjs::Boolean::Value(v67) )
                {
                  v71 = *v70 & 0x1FFFFFFF;
                }
                else
                {
                  v439 = *(_OWORD *)v464;
                  v72 = sub_14139BB04(&v443, &v466);
                  v73 = (_DWORD *)sub_14139BB18(
                                    *((_QWORD *)v63 + 3),
                                    (unsigned int)&v441,
                                    (unsigned int)&v439,
                                    v72,
                                    v465.m128i_i16[6]);
                  v71 = v73[1] | (*v73 << 0x10);
                  sub_14139B2C8(v63, v440, (unsigned int)v71 | v465.m128i_i32[2]);
                  ++*((_DWORD *)v63 + 8);
                  *((_DWORD *)v63 + 9) += BYTE4(v464[1]);
                }
                sub_140BF160C(&v451);
                if ( BYTE4(v466) )
                  BYTE4(v466) = 0;
                v36 = (_DWORD *)v450[0];
                v446 = __PAIR64__(v52, v71);
              }
              else
              {
                sub_140BF01B0(&v446, "ERROR_NAME_SIZE_EXCEEDED", 1LL);
              }
            }
            goto LABEL_53;
          }
LABEL_52:
          v446 = 0LL;
LABEL_53:
          v451 = v446;
          v445 = (v8_qjs::External *)(int)v36[0x12];
          if ( (__int64)v445 > 0 )
          {
            v53 = (v8_qjs::Boolean *)(v36 + 0x10);
            v54 = 0LL;
            v440 = (v8_qjs::Boolean *)(v36 + 0x10);
            v55 = 0LL;
            while ( 1 )
            {
              if ( v54 < 0 || v35 >= *((_DWORD *)v53 + 2) )
                MEMORY[0x10] = 0x5474736172434155LL;
              v56 = (char *)off_14A10DAE8(v53);
              if ( *(_QWORD *)&v56[v55] == v451 )
              {
                v36 = (_DWORD *)v450[0];
                goto LABEL_97;
              }
              ++v35;
              ++v54;
              v55 += 0x10LL;
              if ( v54 >= (__int64)v445 )
                break;
              v53 = v440;
            }
            v36 = (_DWORD *)v450[0];
          }
          v74 = sub_140C36AA4(&v451, v450);
          v35 = sub_140DFA314(v36, v74, 0LL);
          off_14A10DAE8((v8_qjs::External *)v450);
          sub_14290E14C(v450);
          if ( sub_14290E140(v450) )
          {
            v75 = sub_14290E140(v450);
            sub_140AD6BE0(v75);
          }
LABEL_97:
          if ( v35 == 0xFFFFFFFF )
            goto LABEL_104;
          if ( v35 < 0 || v35 >= v36[0x12] )
            MEMORY[0x10] = 0x5474736172434155LL;
          v16 = *((_QWORD *)off_14A10DAE8((v8_qjs::External *)(v36 + 0x10)) + 2 * v35 + 1);
          if ( v16 == 0xFFFFFFFFFFFFFFFFuLL )
          {
LABEL_104:
            if ( (unsigned __int8)byte_149E0B200 >= 2u && (unsigned __int8)byte_14A291A60 >= 2u )
            {
              v76 = (v8_qjs::External *)sub_1419F1200(a2, &v435);
              if ( *((_DWORD *)v76 + 2) )
                v80 = off_14A10DAE8(v76);
              else
                v80 = &dword_1475961C4;
              v437 = (unsigned __int64)v80;
              if ( (_DWORD)v433 )
                v81 = (v8_qjs::External *)off_14A10DAE8((v8_qjs::External *)&v432);
              else
                v81 = (v8_qjs::External *)&dword_1475961C4;
              v285 = v36[0xE] == 0;
              v82 = (v8_qjs::External *)(v36 + 0xC);
              v445 = v81;
              if ( !v285 )
                v39 = (v8_qjs::Boolean *)off_14A10DAE8(v82);
              v440 = v39;
              sub_143B58420((_DWORD)v82, v77, v78, v79, (__int64)&v440, (__int64)&v445, (__int64)&v437);
              off_14A10DAE8((v8_qjs::External *)&v435);
              sub_14290E14C(&v435);
              if ( sub_14290E140(&v435) )
              {
                v83 = sub_14290E140(&v435);
                sub_140AD6BE0(v83);
              }
            }
            off_14A10DAE8((v8_qjs::External *)&v432);
            sub_14290E14C(&v432);
            if ( !sub_14290E140(&v432) )
              return 0;
            goto LABEL_21;
          }
          v28 = *a2;
          v27 = a2;
          goto LABEL_23;
        }
      }
LABEL_36:
      v43 = 0;
      goto LABEL_37;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a2 + 0x130LL))(a2) )
    {
      v84 = *a1;
      v450[0] = 0LL;
      if ( !((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), __int64 *))(*v84)[0xA])(v84, v450) )
      {
        v432 = 0LL;
        v433 = 0LL;
        sub_140AD3CD0(&v432, 7LL);
        LODWORD(v433) = v433 + 7;
        if ( (int)v433 > SHIDWORD(v433) )
          sub_140DBCD80(&v432);
        v85 = off_14A10DAE8((v8_qjs::External *)&v432);
        *(_QWORD *)v85 = 0x62006D0075004ELL;
        v85[2] = 0x720065;
        *((_WORD *)v85 + 6) = 0;
        sub_141F7F7CC(v84, &v432);
        off_14A10DAE8((v8_qjs::External *)&v432);
        sub_14290E14C(&v432);
        if ( sub_14290E140(&v432) )
        {
          v86 = sub_14290E140(&v432);
          sub_140AD6BE0(v86);
        }
      }
      v87 = *(__int64 (__fastcall **)())(*a2 + 0x158LL);
      if ( v87 == sub_140C174C0 )
        *(float *)a3 = *(double *)v450;
      else
        ((void (__fastcall *)(_QWORD *, __int64))v87)(a2, a3);
      return 1;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a2 + 0x138LL))(a2) )
    {
      v88 = *a1;
      if ( *((_DWORD *)v88 + 2) != 2 )
      {
        v94 = *v88;
        *(double *)&v440 = 0.0;
        if ( !((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), v8_qjs::Boolean **))v94[0xA])(v88, &v440) )
        {
          v432 = 0LL;
          v433 = 0LL;
          sub_140AD3CD0(&v432, 7LL);
          LODWORD(v433) = v433 + 7;
          if ( (int)v433 > SHIDWORD(v433) )
            sub_140DBCD80(&v432);
          v95 = off_14A10DAE8((v8_qjs::External *)&v432);
          *(_QWORD *)v95 = 0x62006D0075004ELL;
          v95[2] = 0x720065;
          *((_WORD *)v95 + 6) = 0;
          sub_141F7F7CC(v88, &v432);
          off_14A10DAE8((v8_qjs::External *)&v432);
          sub_14290E14C(&v432);
          if ( sub_14290E140(&v432) )
          {
            v96 = sub_14290E140(&v432);
            sub_140AD6BE0(v96);
          }
        }
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a2 + 0x148LL))(a2, a3, (unsigned int)(int)*(double *)&v440);
        return 1;
      }
      v89 = (v8_qjs::External *)sub_140C352EC(v88, &v435);
      if ( *((_DWORD *)v89 + 2) )
        v90 = off_14A10DAE8(v89);
      else
        v90 = &dword_1475961C4;
      v91 = MEMORY[0x7FFA6D8EFF70](v90);
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a2 + 0x148LL))(a2, a3, v91);
      goto LABEL_132;
    }
    if ( (unsigned __int8)byte_149E0B200 < 2u || (unsigned __int8)byte_14A291A60 < 2u )
      return 0;
    v97 = (v8_qjs::External *)sub_1419F1200(a2, &v435);
    v98 = (v8_qjs::External *)&dword_1475961C4;
    if ( *((_DWORD *)v97 + 2) )
      v99 = off_14A10DAE8(v97);
    else
      v99 = &dword_1475961C4;
    v100 = a2[1];
    v437 = (unsigned __int64)v99;
    sub_140C36AA4(v100, &v432);
    if ( (_DWORD)v433 )
      v98 = (v8_qjs::External *)off_14A10DAE8((v8_qjs::External *)&v432);
    v445 = v98;
    sub_143B57EF0(v102, v101, v103, v104, (__int64)&v445, (__int64)&v437);
    goto LABEL_150;
  }
  if ( (*(_QWORD *)(v32 + 0x10) & 0x20000LL) != 0 )
  {
    v107 = sub_140F02D10(*a1);
    v108 = *((unsigned __int8 *)a2 + 0x79);
    if ( v107 )
      *(_BYTE *)(v108 + a3) = *((_BYTE *)a2 + 0x7A) | *(_BYTE *)(v108 + a3) & ~*((_BYTE *)a2 + 0x7B);
    else
      *(_BYTE *)(v108 + a3) &= ~*((_BYTE *)a2 + 0x7B);
    return 1;
  }
  if ( (*(_QWORD *)(a2[1] + 0x10LL) & 0x4000LL) != 0 )
  {
    v109 = (v8_qjs::External *)sub_140C352EC(*a1, &v435);
    if ( (v8_qjs::External *)a3 != v109 )
    {
      off_14A10DAE8((v8_qjs::External *)a3);
      v110 = (unsigned int)off_14A10DAE8(v109);
      sub_140BA1DE8(a3, v110, *((_DWORD *)v109 + 2), *(_DWORD *)(a3 + 0xC), 0);
    }
LABEL_132:
    off_14A10DAE8((v8_qjs::External *)&v435);
    sub_14290E14C(&v435);
    if ( !sub_14290E140(&v435) )
      return 1;
    v92 = (__m128i *)&v435;
LABEL_134:
    v93 = sub_14290E140(v92);
    sub_140AD6BE0(v93);
    return 1;
  }
  if ( (*(_QWORD *)(a2[1] + 0x10LL) & 0x200000LL) != 0 )
  {
    if ( *((_DWORD *)*a1 + 2) != 5 )
    {
      if ( (unsigned __int8)byte_149E0B200 < 2u || (unsigned __int8)byte_14A291A60 < 2u )
        return 0;
      v149 = (v8_qjs::External *)sub_1419F1200(a2, &v435);
      if ( *((_DWORD *)v149 + 2) )
        v154 = off_14A10DAE8(v149);
      else
        v154 = &dword_1475961C4;
      v437 = (unsigned __int64)v154;
      sub_143B59140(v151, v150, v152, v153, (__int64)&v437);
      goto LABEL_152;
    }
    v432 = 0LL;
    v111 = (v8_qjs::External *)sub_141113814();
    v112 = (char *)off_14A10DAE8(v111);
    v113 = *((_DWORD *)v111 + 2);
    v114 = v112;
    LODWORD(v433) = v113;
    if ( v113 )
    {
      sub_140B86500(&v432, v113, 0LL);
      v115 = (char *)off_14A10DAE8((v8_qjs::External *)&v432);
      v116 = (__int64 *)(v114 + 8);
      v117 = (char *)(v115 - v114);
      do
      {
        *(__int64 *)((char *)v116 + (_QWORD)v117 - 8) = v116[0xFFFFFFFF];
        v118 = *v116;
        *(_QWORD *)&v117[(_QWORD)v116] = *v116;
        if ( v118 )
          ++*(_DWORD *)(v118 + 8);
        v116 += 2;
        --v113;
      }
      while ( v113 );
    }
    else
    {
      v433 = 0LL;
    }
    v119 = *((unsigned int *)a2 + 0x20);
    v120 = (_DWORD *)a2[0xF];
    v121 = a2[0x10] & 1;
    v122 = v433;
    LODWORD(v446) = v433;
    LODWORD(v434) = v119;
    v123 = (int)v120[0xF];
    v454 = v120[0xF];
    v453.m128i_i64[0] = (__int64)v120;
    v455 = v119;
    v453.m128i_i64[1] = a3;
    v124 = *(_DWORD *)(a3 + 8);
    if ( (int)v433 <= v124 )
    {
      if ( (int)v433 < v124 )
        sub_1413C0B14(&v453, (unsigned int)v433, (unsigned int)(v124 - v433));
LABEL_192:
      LODWORD(v434) = 0;
      if ( v122 <= 0 )
      {
LABEL_207:
        v138 = (char *)off_14A10DAE8((v8_qjs::External *)&v432);
        v139 = v433;
        if ( (_DWORD)v433 )
        {
          v140 = (_DWORD **)(v138 + 8);
          do
          {
            v141 = *v140;
            if ( *v140 )
            {
              v285 = v141[2]-- == 1;
              if ( v285 )
              {
                (**(void (__fastcall ***)(_DWORD *))v141)(v141);
                v285 = v141[3]-- == 1;
                if ( v285 )
                  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v141 + 8LL))(v141, 1LL);
              }
            }
            v140 += 2;
            --v139;
          }
          while ( v139 );
        }
        sub_14290E14C(&v432);
        goto LABEL_215;
      }
      v130 = 0;
      v131 = v446;
      while ( 1 )
      {
        if ( v130 < 0 || v130 >= (int)v433 )
          MEMORY[0x10] = 0x5474736172434155LL;
        v132 = (char *)off_14A10DAE8((v8_qjs::External *)&v432);
        v133 = v130;
        v134 = (int)v434;
        v135 = &v132[0x10 * v133];
        if ( *(_QWORD *)v135 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v135 + 8LL) > 1u )
          {
            if ( *(_DWORD *)(v453.m128i_i64[1] + 8) )
            {
              v137 = (v455 & 1) != 0
                   ? sub_141168034(v453.m128i_i64[1])
                   : sub_144CDCEC8(v453.m128i_i64[1], v453.m128i_i64[1]);
              v136 = v137 + v134 * v454;
            }
            else
            {
              v136 = 0;
            }
            if ( !(unsigned __int8)sub_140CB99C4(
                                     (_DWORD)v135,
                                     a2[0xF],
                                     v136,
                                     v450[0],
                                     v451,
                                     a6 & 0xFFFFFFFFF7FFFA7DuLL,
                                     a7) )
              break;
          }
        }
        v130 = v134 + 1;
        LODWORD(v434) = v130;
        if ( v130 >= v131 )
          goto LABEL_207;
      }
      if ( (unsigned __int8)byte_149E0B200 >= 2u && (unsigned __int8)byte_14A291A60 >= 2u )
      {
        v142 = (v8_qjs::External *)sub_1419F1200(a2, &v435);
        if ( *((_DWORD *)v142 + 2) )
          v147 = off_14A10DAE8(v142);
        else
          v147 = &dword_1475961C4;
        v437 = (unsigned __int64)v147;
        sub_143B580A0(v144, v143, v145, v146, (__int64)&v434, (__int64)&v437);
        goto LABEL_223;
      }
      goto LABEL_225;
    }
    v125 = (unsigned int)(v433 - v124);
    v126 = (unsigned int)v433;
    *(_DWORD *)(a3 + 8) = v433;
    v127 = *(_DWORD *)(a3 + 0xC);
    if ( (unsigned __int8)v121 != 1 )
    {
      if ( (int)v126 <= v127 )
        goto LABEL_176;
      sub_14110F748(a3, v119, (unsigned int)v123);
    }
    else
    {
      if ( (int)v126 <= v127 )
        goto LABEL_176;
      sub_144CDE6A0(a3, v119, (unsigned int)v123);
    }
    LOBYTE(v119) = (_BYTE)v434;
LABEL_176:
    if ( *(_DWORD *)(a3 + 8) )
    {
      if ( (v119 & 1) != 0 )
        v129 = sub_141168034(a3);
      else
        v129 = sub_144CDCEC8(v126, a3);
      v128 = v129 + (int)v123 * v124;
    }
    else
    {
      v128 = 0LL;
    }
    if ( (v120[0x10] & 0x200LL) != 0 )
    {
      sub_143114C69(v128, 0LL, (int)v123 * (int)v125);
      v122 = v446;
    }
    else
    {
      if ( (int)v125 > 0 )
      {
        do
        {
          if ( (v120[0x10] & 0x200LL) != 0 )
            sub_143114C69(v128, 0LL, v120[0xE] * v120[0xF]);
          else
            (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v120 + 0xF8LL))(v120, v128);
          v128 += v123;
          --v125;
        }
        while ( v125 );
      }
      v122 = v446;
    }
    goto LABEL_192;
  }
  if ( (*(_QWORD *)(a2[1] + 0x10LL) & 0x400000000000LL) != 0 )
  {
    v155 = *a1;
    if ( *((_DWORD *)*a1 + 2) == 6 )
    {
      v156 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)()))**v155)(v155);
      v157 = *(_DWORD **)(v156 + 8);
      v158 = *(__int128 **)v156;
      v434 = *(__int128 **)v156;
      if ( v157 )
        ++v157[2];
      v159 = *((_DWORD *)a2 + 0x28);
      v160 = *(_OWORD *)(a2 + 0x11);
      v467[0] = a2[0xF];
      v161 = a2[0x13];
      v467[1] = a2[0x10];
      v471 = v159;
      v468 = v445;
      v469 = v160;
      v470 = v161;
      sub_14110F6E8(v467, (unsigned int)(*((_DWORD *)v158 + 2) - *((_DWORD *)v158 + 0xD)));
      v162 = (_OWORD *)sub_140AE6640(&v453, v158 + 1, 0LL);
      v163 = *((unsigned int *)v158 + 0xA);
      *(_QWORD *)v463 = v158;
      v164 = (__m128d)v162[1];
      *(_OWORD *)&v463[8] = *v162;
      *(__m128d *)&v463[0x18] = v164;
      *(_OWORD *)v464 = *(_OWORD *)v463;
      v465 = *(__m128i *)&v463[0x10];
      v466 = *(_OWORD *)&_mm_unpackhi_pd(v164, v164);
      v165 = sub_140AE6640(&v453, v158 + 1, v163);
      v166 = *(_OWORD *)v165;
      v167 = HIDWORD(*(_QWORD *)(v165 + 0x10));
      v446 = v167;
      *(_OWORD *)&v463[8] = v166;
      while ( 1 )
      {
        if ( v465.m128i_i32[3] == (_DWORD)v167
          && v465.m128i_i64[0] == *(_QWORD *)&v463[0x10]
          && (__int128 *)v464[0] == v158 )
        {
          *(double *)&v440 = COERCE_DOUBLE(v467);
          if ( (v471 & 1) != 0 )
            sub_1460CBC40(&v440, v468);
          else
            sub_14110D9C4(&v440, v468);
          if ( v157 )
          {
            v285 = v157[2]-- == 1;
            if ( v285 )
            {
              (**(void (__fastcall ***)(_DWORD *))v157)(v157);
              v285 = v157[3]-- == 1;
              if ( v285 )
                (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v157 + 8LL))(v157, 1LL);
            }
          }
          return 1;
        }
        v168 = (char *)off_14A10DAE8(v464[0]);
        v169 = (v8_qjs::External *)&v168[0x28 * v465.m128i_i32[3]];
        v170 = *((_QWORD *)v169 + 2);
        v445 = v169;
        if ( v170 && *(_DWORD *)(v170 + 8) > 1u )
        {
          *(double *)&v440 = COERCE_DOUBLE(v467);
          if ( (v471 & 1) != 0 )
            v171 = sub_144CDCE90(&v440, v468);
          else
            v171 = sub_14110F208(&v440, v468);
          v172 = v171;
          *((_QWORD *)&v436 + 1) = sub_140BA1B9C(v169);
          *(_QWORD *)&v436 = *((_QWORD *)&v436 + 1) + 0x10LL;
          sub_140AE67C0(&v436, *((_QWORD *)&v436 + 1) + 0x10LL, *((_QWORD *)&v436 + 1) + 0x10LL);
          v173 = (_DWORD *)*((_QWORD *)&v436 + 1);
          v174 = (_DWORD *)*((_QWORD *)&v436 + 1);
          v175 = *((_QWORD *)&v436 + 1);
          v437 = v436;
          if ( *((_QWORD *)&v436 + 1) )
          {
            ++*(_DWORD *)(*((_QWORD *)&v436 + 1) + 8LL);
            v173 = (_DWORD *)*((_QWORD *)&v436 + 1);
          }
          v176 = v175;
          if ( v173 )
          {
            v285 = v173[2]-- == 1;
            if ( v285 )
            {
              (**(void (__fastcall ***)(_DWORD *))v173)(v173);
              v285 = v173[3]-- == 1;
              v176 = v175;
              if ( v285 )
              {
                (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v173 + 8LL))(v173, 1LL);
                v176 = v175;
              }
            }
          }
          v439 = __PAIR128__((unsigned __int64)v174, v437);
          if ( v176 )
            ++*(_DWORD *)(v176 + 8);
          v177 = *((_DWORD *)v468 + 2);
          if ( (v471 & 1) != 0 )
          {
            if ( v177 == *((_DWORD *)v468 + 9) )
            {
              v178 = 0;
            }
            else
            {
              v179 = sub_141168034(v468);
              v178 = v172 * HIDWORD(v470) + v179;
            }
          }
          else if ( v177 == *((_DWORD *)v468 + 0xD) )
          {
            v178 = 0;
          }
          else
          {
            v178 = sub_144CDE4C8(v468, v172, &v469);
          }
          v180 = sub_140CB99C4((unsigned int)&v439, a2[0xF], v178, v450[0], v451, a6 & 0xFFFFFFFFF7FFFA7DuLL, a7);
          v181 = (_DWORD *)*((_QWORD *)&v439 + 1);
          v449 = v180;
          if ( *((_QWORD *)&v439 + 1) )
          {
            v285 = (*(_DWORD *)(*((_QWORD *)&v439 + 1) + 8LL))-- == 1;
            if ( v285 )
            {
              (**(void (__fastcall ***)(_DWORD *))v181)(v181);
              v285 = v181[3]-- == 1;
              if ( v285 )
                (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v181 + 8LL))(v181, 1LL);
            }
          }
          LODWORD(v433) = v172;
          v432 = v467;
          v182 = sub_1413BF278(v467, &v432);
          v183 = v445;
          v184 = sub_140CB99C4((int)v445 + 0x10, a2[0x10], v182, v450[0], v451, a6 & 0xFFFFFFFFF7FFFA7DuLL, a7);
          if ( !v449 || !v184 )
          {
            if ( (unsigned __int8)byte_149E0B200 >= 2u && (unsigned __int8)byte_14A291A60 >= 2u )
            {
              v185 = (v8_qjs::External *)sub_1419F1200(a2, &v435);
              v190 = (v8_qjs::External *)&dword_1475961C4;
              if ( *((_DWORD *)v185 + 2) )
                v191 = off_14A10DAE8(v185);
              else
                v191 = &dword_1475961C4;
              v437 = (unsigned __int64)v191;
              if ( *((_DWORD *)v183 + 2) )
                v190 = (v8_qjs::External *)off_14A10DAE8(v183);
              v445 = v190;
              sub_143B585F0(v187, v186, v188, v189, (__int64)&v445, (__int64)&v437);
              off_14A10DAE8((v8_qjs::External *)&v435);
              sub_14290E14C(&v435);
              if ( sub_14290E140(&v435) )
              {
                v192 = sub_14290E140(&v435);
                sub_140AD6BE0(v192);
              }
            }
            if ( v174 )
            {
              v285 = v174[2]-- == 1;
              if ( v285 )
              {
                (**(void (__fastcall ***)(_DWORD *))v174)(v174);
                v285 = v174[3]-- == 1;
                if ( v285 )
                  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v174 + 8LL))(v174, 1LL);
              }
            }
            if ( v157 )
            {
              v285 = v157[2]-- == 1;
              if ( v285 )
              {
                (**(void (__fastcall ***)(_DWORD *))v157)(v157);
                v285 = v157[3]-- == 1;
                if ( v285 )
                {
                  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v157 + 8LL))(v157, 1LL);
                  return 0;
                }
              }
            }
            return 0;
          }
          if ( v174 )
          {
            v285 = v174[2]-- == 1;
            if ( v285 )
            {
              (**(void (__fastcall ***)(_DWORD *))v174)(v174);
              v285 = v174[3]-- == 1;
              if ( v285 )
                (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v174 + 8LL))(v174, 1LL);
            }
          }
          v158 = v434;
        }
        v465.m128i_i32[2] &= ~HIDWORD(v464[1]);
        sub_140AD2310(&v464[1]);
        LODWORD(v167) = v446;
      }
    }
    if ( (unsigned __int8)byte_149E0B200 < 2u || (unsigned __int8)byte_14A291A60 < 2u )
      return 0;
    v193 = (v8_qjs::External *)sub_1419F1200(a2, &v435);
    if ( *((_DWORD *)v193 + 2) )
      v198 = off_14A10DAE8(v193);
    else
      v198 = &dword_1475961C4;
    v437 = (unsigned __int64)v198;
    sub_143B58FB0(v195, v194, v196, v197, (__int64)&v437);
LABEL_152:
    off_14A10DAE8((v8_qjs::External *)&v435);
    sub_14290E14C(&v435);
    if ( !sub_14290E140(&v435) )
      return 0;
    v106 = sub_14290E140(&v435);
    sub_140AD6BE0(v106);
    return 0;
  }
  if ( (*(_QWORD *)(a2[1] + 0x10LL) & 0x800000000000LL) != 0 )
  {
    if ( *((_DWORD *)*a1 + 2) != 5 )
    {
      if ( (unsigned __int8)byte_149E0B200 < 2u || (unsigned __int8)byte_14A291A60 < 2u )
        return 0;
      v213 = (v8_qjs::External *)sub_1419F1200(a2, &v435);
      if ( *((_DWORD *)v213 + 2) )
        v218 = off_14A10DAE8(v213);
      else
        v218 = &dword_1475961C4;
      v437 = (unsigned __int64)v218;
      sub_143B58930(v215, v214, v216, v217, (__int64)&v437);
      goto LABEL_152;
    }
    v432 = 0LL;
    v199 = (unsigned int *)sub_141113814();
    v200 = off_14A10DAE8((v8_qjs::External *)v199);
    sub_140D39654(&v432, v200, v199[2], 0LL);
    v201 = v433;
    v202 = v433;
    v464[0] = *((v8_qjs::External **)a2 + 0xF);
    LODWORD(v466) = *((_DWORD *)a2 + 0x24);
    v464[1] = (v8_qjs::External *)a3;
    LODWORD(v434) = 0;
    v465 = *((__m128i *)a2 + 8);
    if ( (int)v433 <= 0 )
    {
LABEL_324:
      sub_14110B348(v464);
      sub_140B3DAB8(&v432);
      return 1;
    }
    v203 = 0;
    while ( 1 )
    {
      if ( v203 < 0 || v203 >= v201 )
        MEMORY[0x10] = 0x5474736172434155LL;
      v204 = (char *)off_14A10DAE8((v8_qjs::External *)&v432) + 0x10 * v203;
      if ( *(_QWORD *)v204 && *(_DWORD *)(*(_QWORD *)v204 + 8LL) > 1u )
      {
        v205 = sub_14110B2B4(v464);
        v206 = *((_DWORD *)v464[1] + 2) == *((_DWORD *)v464[1] + 0xD) ? 0 : sub_144CDE4D4(v464[1], v205, &v465);
        if ( !(unsigned __int8)sub_140CB99C4((_DWORD)v204, a2[0xF], v206, v450[0], v451, a6 & 0xFFFFFFFFF7FFFA7DuLL, a7) )
          break;
      }
      v203 = (_DWORD)v434 + 1;
      LODWORD(v434) = v203;
      if ( v203 >= v202 )
        goto LABEL_324;
      v201 = v433;
    }
    if ( (unsigned __int8)byte_149E0B200 >= 2u && (unsigned __int8)byte_14A291A60 >= 2u )
    {
      v207 = (v8_qjs::External *)sub_1419F1200(a2, &v435);
      if ( *((_DWORD *)v207 + 2) )
        v212 = off_14A10DAE8(v207);
      else
        v212 = &dword_1475961C4;
      v437 = (unsigned __int64)v212;
      sub_143B57D40(v209, v208, v210, v211, (__int64)&v434, (__int64)&v437);
LABEL_223:
      off_14A10DAE8((v8_qjs::External *)&v435);
      sub_14290E14C(&v435);
      if ( sub_14290E140(&v435) )
      {
        v148 = sub_14290E140(&v435);
        sub_140AD6BE0(v148);
      }
    }
LABEL_225:
    sub_140B3DAB8(&v432);
    return 0;
  }
  if ( (*(_QWORD *)(a2[1] + 0x10LL) & 0x40000000LL) != 0 )
  {
    v219 = *a1;
    v220 = *((_DWORD *)*a1 + 2);
    if ( v220 == 2 )
    {
      v221 = sub_140C352EC(v219, v461);
      v222 = sub_1410D75F4(v463, v221);
      *(_QWORD *)&v457 = *(_QWORD *)v222;
      v223 = *(_QWORD *)(v222 + 8);
      *((_QWORD *)&v457 + 1) = v223;
      if ( v223 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v223 + 8));
        v223 = *((_QWORD *)&v457 + 1);
      }
      if ( &v457 != (__int128 *)a3 )
      {
        v224 = v457;
        v457 = *(_OWORD *)a3;
        v223 = _mm_srli_si128((__m128i)v457, 8).m128i_u64[0];
        v472 = v224;
        *(_OWORD *)a3 = v224;
      }
      if ( v223 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v223 + 8), 0xFFFFFFFF) == 1 )
        {
          v225 = *((_QWORD *)&v457 + 1);
          (***((void (__fastcall ****)(__int64))&v457 + 1))(*((_QWORD *)&v457 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v225 + 0xC), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(__int64, __int64))(**((_QWORD **)&v457 + 1) + 8LL))(*((_QWORD *)&v457 + 1), 1LL);
        }
      }
      v226 = *(_QWORD *)&v463[8];
      *(_DWORD *)(a3 + 0x10) = *(_DWORD *)(v222 + 0x10);
      if ( v226 && _InterlockedExchangeAdd((volatile signed __int32 *)(v226 + 8), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(__int64))v226)(v226);
        sub_1410D7440(v226);
      }
      off_14A10DAE8((v8_qjs::External *)v461);
      sub_14290E14C(v461);
      if ( !sub_14290E140(v461) )
        return 1;
      v92 = (__m128i *)v461;
      goto LABEL_134;
    }
    if ( v220 != 6 )
    {
      if ( (unsigned __int8)byte_149E0B200 < 2u || (unsigned __int8)byte_14A291A60 < 2u )
        return 0;
      v245 = (v8_qjs::External *)sub_1419F1200(a2, &v435);
      if ( *((_DWORD *)v245 + 2) )
        v250 = off_14A10DAE8(v245);
      else
        v250 = &dword_1475961C4;
      v437 = (unsigned __int64)v250;
      sub_143B595F0(v247, v246, v248, v249, (__int64)&v437);
      goto LABEL_152;
    }
    v227 = (unsigned __int64 *)((__int64 (__fastcall *)(__int64 (__fastcall ***)()))**v219)(v219);
    v228 = (_DWORD *)v227[1];
    v229 = *v227;
    if ( v228 )
    {
      ++v228[2];
      sub_140DC8EE4(&v453);
      ++v228[2];
      *(_QWORD *)&v436 = v229;
      *((_QWORD *)&v436 + 1) = v228;
      v230 = sub_146D36B88(&v436, &v453);
      v285 = v228[2]-- == 1;
      v231 = v230;
      if ( v285 )
      {
        (**(void (__fastcall ***)(_DWORD *))v228)(v228);
        v285 = v228[3]-- == 1;
        v230 = v231;
        if ( v285 )
        {
          (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v228 + 8LL))(v228, 1LL);
          v230 = v231;
        }
      }
    }
    else
    {
      sub_140DC8EE4(&v453);
      v436 = v229;
      v230 = sub_146D36B88(&v436, &v453);
    }
    if ( !v230 )
    {
      if ( (unsigned __int8)byte_149E0B200 >= 2u && (unsigned __int8)byte_14A291A60 >= 2u )
      {
        v232 = (v8_qjs::External *)sub_1419F1200(a2, v462);
        v237 = *((_DWORD *)v232 + 2) ? off_14A10DAE8(v232) : &dword_1475961C4;
        v456 = v237;
        sub_143B59460(v234, v233, v235, v236, (__int64)&v456);
        off_14A10DAE8((v8_qjs::External *)v462);
        sub_14290E14C(v462);
        if ( sub_14290E140(v462) )
        {
          v238 = sub_14290E140(v462);
          sub_140AD6BE0(v238);
        }
      }
      if ( v453.m128i_i64[1]
        && _InterlockedExchangeAdd((volatile signed __int32 *)(v453.m128i_i64[1] + 8), 0xFFFFFFFF) == 1 )
      {
        v239 = v453.m128i_i64[1];
        (**(void (__fastcall ***)(__int64))v453.m128i_i64[1])(v453.m128i_i64[1]);
        sub_1410D7440(v239);
      }
LABEL_591:
      if ( !v228 )
        return 0;
      v285 = v228[2]-- == 1;
      if ( !v285 )
        return 0;
      (**(void (__fastcall ***)(_DWORD *))v228)(v228);
      v285 = v228[3]-- == 1;
      if ( !v285 )
        return 0;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v228 + 8LL))(v228, 1LL);
      return 0;
    }
    v240 = v453.m128i_i64[1];
    v241 = v453.m128i_i64[1];
    v458 = v453;
    if ( v453.m128i_i64[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v453.m128i_i64[1] + 8));
      v240 = v453.m128i_i64[1];
      v241 = v458.m128i_i64[1];
    }
    if ( &v458 != (__m128i *)a3 )
    {
      v242 = (__int128)v458;
      v458 = *(__m128i *)a3;
      v241 = _mm_srli_si128(v458, 8).m128i_u64[0];
      v473 = v242;
      *(_OWORD *)a3 = v242;
    }
    if ( v241 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v241 + 8), 0xFFFFFFFF) == 1 )
      {
        v243 = v458.m128i_i64[1];
        (**(void (__fastcall ***)(__int64))v458.m128i_i64[1])(v458.m128i_i64[1]);
        sub_1410D7440(v243);
      }
      v240 = v453.m128i_i64[1];
    }
    *(_DWORD *)(a3 + 0x10) = v454;
    if ( v240 && _InterlockedExchangeAdd((volatile signed __int32 *)(v240 + 8), 0xFFFFFFFF) == 1 )
    {
      v244 = v453.m128i_i64[1];
      (**(void (__fastcall ***)(__int64))v453.m128i_i64[1])(v453.m128i_i64[1]);
      sub_1410D7440(v244);
    }
    goto LABEL_374;
  }
  if ( (*(_QWORD *)(a2[1] + 0x10LL) & 0x100000LL) == 0 )
  {
    if ( (*(_DWORD *)(a2[1] + 0x10LL) & 0x10000) != 0 )
    {
      v354 = *a1;
      v355 = *((_DWORD *)*a1 + 2);
      if ( v355 != 6 )
      {
        if ( v355 != 2 )
          return 1;
        v374 = (v8_qjs::External *)sub_140C352EC(v354, &v439);
        v375 = &dword_1475961C4;
        if ( *((_DWORD *)v374 + 2) )
          LODWORD(v376) = (unsigned int)off_14A10DAE8(v374);
        else
          v376 = &dword_1475961C4;
        v377 = sub_140CB8944((_DWORD)a2, (_DWORD)v376, a3, 0, 0LL, (__int64)off_14A348AB0);
        off_14A10DAE8((v8_qjs::External *)&v439);
        sub_14290E14C(&v439);
        if ( sub_14290E140(&v439) )
        {
          v378 = sub_14290E140(&v439);
          sub_140AD6BE0(v378);
        }
        if ( v377 )
          return 1;
        if ( (unsigned __int8)byte_149E0B200 < 2u || (unsigned __int8)byte_14A291A60 < 2u )
          return 0;
        v379 = (v8_qjs::External *)sub_1419F1200(a2, &v435);
        if ( *((_DWORD *)v379 + 2) )
          v380 = off_14A10DAE8(v379);
        else
          v380 = &dword_1475961C4;
        v381 = (int *)a2[1];
        v447 = v380;
        if ( v381[1] )
        {
          v436 = 0uLL;
          sub_140C35718(v381, &v436);
          sub_140CDF0DC(&v432, &v436);
          sub_140AB1EA4(&v436);
        }
        else
        {
          v382 = *v381;
          LODWORD(v437) = HIWORD(*v381);
          v383 = (unsigned int)v437;
          HIDWORD(v437) = (unsigned __int16)v382;
          v384 = sub_140C36CA8();
          sub_140C36950(*(_QWORD *)(v384 + 8 * v383 + 0x10) + (unsigned int)(2 * HIDWORD(v437)), &v432);
        }
        if ( (_DWORD)v433 )
          v375 = off_14A10DAE8((v8_qjs::External *)&v432);
        v437 = (unsigned __int64)v375;
        sub_143B58C50(v386, v385, v387, v388, (__int64)&v437, (__int64)&v447);
LABEL_150:
        off_14A10DAE8((v8_qjs::External *)&v432);
        sub_14290E14C(&v432);
        if ( sub_14290E140(&v432) )
        {
          v105 = sub_14290E140(&v432);
          sub_140AD6BE0(v105);
        }
        goto LABEL_152;
      }
      v356 = qword_14A352468;
      if ( !qword_14A5CB0D0 )
        sub_14140CB6C(
          (unsigned int)L"/Script/CoreUObject",
          (unsigned int)L"Object",
          (unsigned int)&qword_14A5CB0D0,
          (unsigned int)ABase::_tagApolloBufferBuffer::WriteTo,
          0x28,
          8,
          0x10000121,
          0LL,
          (__int64)L"Engine",
          (__int64)sub_142200268,
          (__int64)sub_1460F4618,
          (__int64)ABase::_tagApolloBufferBuffer::WriteTo,
          (__int64)sub_140AF4EC8,
          (__int64)sub_140AF4EC8);
      v357 = sub_140B4C170(a4);
      v358 = *a1;
      if ( v357 )
        v356 = a5;
      v456 = (_QWORD *)v356;
      v359 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)()))**v358)(v358);
      v228 = *(_DWORD **)(v359 + 8);
      v360 = *(v8_qjs::External **)v359;
      v445 = *(v8_qjs::External **)v359;
      if ( v228 )
        ++v228[2];
      v361 = a2[0xF];
      v447 = (_QWORD *)v361;
      sub_140F00C44(v360, &v432, &unk_14A5563A0);
      sub_146076904(v360);
      v362 = &dword_1475961C4;
      if ( (int)v433 > 1 )
      {
        v363 = off_14A10DAE8((v8_qjs::External *)&v432);
        v361 = sub_141797AD0(0xFFFFFFFFFFFFFFFFuLL, v363);
        if ( !v361 )
          v361 = (__int64)v447;
      }
      v437 = 0LL;
      v364 = sub_140AEE5D0(v361, (_DWORD)v456, 0, 0, 0, 0, 0LL, 0LL);
      v365 = sub_14140DDFC((unsigned int)v474, v364, *(_QWORD *)(v361 + 0x118), 0, 0, 0LL);
      (*(void (__fastcall **)(__int64))(v361 + 0xB0))(v365);
      sub_140C2D828(v474);
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a2 + 0x148LL))(a2, a3, v364);
      if ( !(unsigned __int8)sub_140CB93B8((_DWORD)v445, v361, v364, v361, v364, a6 & 0xFFFFFFFFF7FFFA7DuLL, a7) )
      {
        if ( (unsigned __int8)byte_149E0B200 >= 2u && (unsigned __int8)byte_14A291A60 >= 2u )
        {
          v366 = (v8_qjs::External *)sub_1419F1200(a2, &v439);
          if ( *((_DWORD *)v366 + 2) )
            v362 = off_14A10DAE8(v366);
          v447 = v362;
          sub_143B587A0(v368, v367, v369, v370, (__int64)&v447);
          off_14A10DAE8((v8_qjs::External *)&v439);
          sub_14290E14C(&v439);
          if ( sub_14290E140(&v439) )
          {
            v371 = sub_14290E140(&v439);
            sub_140AD6BE0(v371);
          }
        }
        off_14A10DAE8((v8_qjs::External *)&v432);
        sub_14290E14C(&v432);
        if ( sub_14290E140(&v432) )
        {
          v372 = sub_14290E140(&v432);
          sub_140AD6BE0(v372);
        }
        goto LABEL_591;
      }
      off_14A10DAE8((v8_qjs::External *)&v432);
      sub_14290E14C(&v432);
      if ( sub_14290E140(&v432) )
      {
        v373 = sub_14290E140(&v432);
        sub_140AD6BE0(v373);
      }
LABEL_374:
      if ( v228 )
      {
        v285 = v228[2]-- == 1;
        if ( v285 )
        {
          (**(void (__fastcall ***)(_DWORD *))v228)(v228);
          v285 = v228[3]-- == 1;
          if ( v285 )
            (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v228 + 8LL))(v228, 1LL);
        }
      }
      return 1;
    }
LABEL_615:
    v389 = *a1;
    v441 = 0LL;
    v442 = 0LL;
    if ( !((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), __int64 *))(*v389)[0xB])(v389, &v441) )
    {
      v432 = 0LL;
      v433 = 0LL;
      sub_140AD3CD0(&v432, 7LL);
      LODWORD(v433) = v433 + 7;
      if ( (int)v433 > SHIDWORD(v433) )
        sub_140DBCD80(&v432);
      v390 = off_14A10DAE8((v8_qjs::External *)&v432);
      *(_QWORD *)v390 = 0x69007200740053LL;
      v390[2] = 0x67006E;
      *((_WORD *)v390 + 6) = 0;
      sub_141F7F7CC(v389, &v432);
      off_14A10DAE8((v8_qjs::External *)&v432);
      sub_14290E14C(&v432);
      if ( sub_14290E140(&v432) )
      {
        v391 = sub_14290E140(&v432);
        sub_140AD6BE0(v391);
      }
    }
    v392 = &dword_1475961C4;
    if ( (_DWORD)v442 )
    {
      v393 = off_14A10DAE8((v8_qjs::External *)&v441);
      v394 = off_14A348AB0;
      v395 = v393;
      if ( !v393 )
      {
        v396 = 0LL;
        goto LABEL_625;
      }
    }
    else
    {
      v394 = off_14A348AB0;
      v395 = &dword_1475961C4;
    }
    v396 = (*(__int64 (__fastcall **)(_QWORD *, void *, __int64, __int64, _QWORD, __int64 (__fastcall ***)()))(*a2 + 0xB0LL))(
             a2,
             v395,
             a3,
             0x8000000LL,
             0LL,
             v394);
LABEL_625:
    off_14A10DAE8((v8_qjs::External *)&v441);
    sub_14290E14C(&v441);
    if ( sub_14290E140(&v441) )
    {
      v397 = sub_14290E140(&v441);
      sub_140AD6BE0(v397);
    }
    if ( v396 )
      return 1;
    if ( (unsigned __int8)byte_149E0B200 < 2u || (unsigned __int8)byte_14A291A60 < 2u )
      return 0;
    v398 = (v8_qjs::External *)sub_1419F1200(a2, &v439);
    if ( *((_DWORD *)v398 + 2) )
      v399 = off_14A10DAE8(v398);
    else
      v399 = &dword_1475961C4;
    v400 = (unsigned int *)a2[1];
    v447 = v399;
    if ( v400[1] )
    {
      v437 = 0LL;
      v438 = 0LL;
      v412 = (unsigned __int16 *)sub_140C35A10(v400);
      v413 = *v412 >> 6;
      if ( v400[1] )
      {
        sub_140EC5534(&v437, (unsigned int)(v413 + 6));
        v416 = *v412 >> 6;
        v417 = sub_140C356D4(v412, v476);
        sub_140DBC630(&v437, v417, v416);
        v418 = v438 - 1;
        if ( (int)v438 <= 0 )
          v418 = 0;
        v419 = ((int)v438 <= 0) + 1 + v438;
        LODWORD(v438) = v419;
        if ( v419 > SHIDWORD(v438) )
        {
          sub_140DBCD80(&v437);
          v419 = v438;
        }
        if ( v418 < 0 || v418 >= v419 )
          MEMORY[0x10] = 0x5474736172434155LL;
        v420 = off_14A10DAE8((v8_qjs::External *)&v437);
        v421 = v418;
        v422 = v418 + 1 < 0;
        v423 = v418 + 1;
        v420[v421] = 0x5F;
        if ( v422 || v423 >= (int)v438 )
          MEMORY[0x10] = 0x5474736172434155LL;
        *((_WORD *)off_14A10DAE8((v8_qjs::External *)&v437) + v421 + 1) = 0;
        sub_140C34A28(&v437, v400[1] - 1);
      }
      else
      {
        sub_140EC5534(&v437, v413);
        v414 = *v412 >> 6;
        v415 = sub_140C356D4(v412, v475);
        sub_140DBC630(&v437, v415, v414);
      }
      sub_140CDF0DC(&v443, &v437);
      sub_140AB1EA4(&v437);
      goto LABEL_660;
    }
    v401 = *v400;
    v402 = (_BYTE *)(*(_QWORD *)(sub_140C36CA8() + 8LL * HIWORD(v401) + 0x10) + 2 * (unsigned int)(unsigned __int16)v401);
    if ( (*v402 & 1) != 0 )
    {
      sub_14606DF9C(v402, v474);
      v407 = *(unsigned __int16 *)v402 >> 6;
      v443 = 0LL;
      v444 = 0LL;
      if ( v407 && v474[0] )
      {
        sub_140AD3CD0(&v443, v407 + 1);
        LODWORD(v444) = v407 + (_DWORD)v444 + 1;
        if ( (int)v444 > SHIDWORD(v444) )
          sub_140DBCD80(&v443);
        v408 = off_14A10DAE8((v8_qjs::External *)&v443);
        sub_143114C63(v408, v474, 2LL * v407);
LABEL_645:
        v411 = off_14A10DAE8((v8_qjs::External *)&v443);
        v404 = (int)v444;
        v411[(int)v444 - 1] = 0;
LABEL_660:
        if ( (_DWORD)v444 )
          v392 = off_14A10DAE8((v8_qjs::External *)&v443);
      }
    }
    else
    {
      sub_14606DF60(v402, v474);
      v409 = *(unsigned __int16 *)v402 >> 6;
      v443 = 0LL;
      v444 = 0LL;
      if ( v409 && LOBYTE(v474[0]) )
      {
        sub_140AD3CD0(&v443, v409 + 1);
        LODWORD(v444) = v409 + (_DWORD)v444 + 1;
        if ( (int)v444 > SHIDWORD(v444) )
          sub_140DBCD80(&v443);
        v410 = off_14A10DAE8((v8_qjs::External *)&v443);
        LOWORD(v431) = 0x3F;
        sub_140C36CD0(v410, v409, v474, v409, v431);
        goto LABEL_645;
      }
    }
    v437 = (unsigned __int64)v392;
    sub_143B58E00(v404, v403, v405, v406, (__int64)&v437, (__int64)&v447);
    off_14A10DAE8((v8_qjs::External *)&v443);
    sub_14290E14C(&v443);
    if ( sub_14290E140(&v443) )
    {
      v424 = sub_14290E140(&v443);
      sub_140AD6BE0(v424);
    }
    goto LABEL_664;
  }
  ThreadLocalStoragePointer = (__int64 *)NtCurrentTeb()->ThreadLocalStoragePointer;
  v252 = *ThreadLocalStoragePointer;
  if ( dword_14A6629CC > *(_DWORD *)(*ThreadLocalStoragePointer + 0x8B9C) )
  {
    sub_1431119A8(&dword_14A6629CC);
    if ( dword_14A6629CC == 0xFFFFFFFF )
    {
      sub_140BF1150(&qword_14A6629D0, L"DateTime", 1LL);
      sub_14311193C(&dword_14A6629CC);
    }
  }
  if ( dword_14A6629D8 > *(_DWORD *)(v252 + 0x8B9C) )
  {
    sub_1431119A8(&dword_14A6629D8);
    if ( dword_14A6629D8 == 0xFFFFFFFF )
    {
      sub_140BF1150(&qword_14A6629E0, L"Color", 1LL);
      sub_14311193C(&dword_14A6629D8);
    }
  }
  if ( dword_14A6629E8 > *(_DWORD *)(v252 + 0x8B9C) )
  {
    sub_1431119A8(&dword_14A6629E8);
    if ( dword_14A6629E8 == 0xFFFFFFFF )
    {
      v426 = 0;
      *(_QWORD *)&v439 = L"LinearColor";
      v427 = L"LinearColor";
      v428 = 0x4C;
      do
      {
        ++v427;
        v426 |= v428;
        v428 = *v427;
      }
      while ( *v427 );
      BYTE12(v439) = (v426 & 0xFFFFFF80) != 0;
      DWORD2(v439) = v427 - L"LinearColor";
      sub_140BF00A8(&qword_14A6629F0, &v439, 1LL);
      sub_14311193C(&dword_14A6629E8);
    }
  }
  v253 = *a1;
  v254 = *((_DWORD *)*a1 + 2);
  if ( v254 == 6 )
  {
    v255 = *v253;
    v256 = **v253;
    v257 = *a1;
    if ( v256 == sub_140F03394 )
    {
      v434 = 0LL;
      if ( !((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), __int128 **))v255[0xE])(v257, &v434) )
      {
        if ( dword_14A64B500 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 0x8B9CLL) )
        {
          sub_1431119A8(&dword_14A64B500);
          if ( dword_14A64B500 == 0xFFFFFFFF )
          {
            *((_QWORD *)&v435 + 1) = sub_140AE3B90();
            *(_QWORD *)&v435 = *((_QWORD *)&v435 + 1) + 0x10LL;
            sub_140AE67C0(&v435, *((_QWORD *)&v435 + 1) + 0x10LL, *((_QWORD *)&v435 + 1) + 0x10LL);
            xmmword_14A3C8560 = v435;
            v429 = _mm_srli_si128((__m128i)v435, 8).m128i_u64[0];
            if ( v429 )
            {
              ++*(_DWORD *)(v429 + 8);
              v430 = (_DWORD *)*((_QWORD *)&v435 + 1);
              if ( *((_QWORD *)&v435 + 1) )
              {
                v285 = (*(_DWORD *)(*((_QWORD *)&v435 + 1) + 8LL))-- == 1;
                if ( v285 )
                {
                  (**(void (__fastcall ***)(_DWORD *))v430)(v430);
                  v285 = v430[3]-- == 1;
                  if ( v285 )
                    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v430 + 8LL))(v430, 1LL);
                }
              }
            }
            sub_1431118E8(sub_1441D6780);
            sub_14311193C(&dword_14A64B500);
          }
        }
        v432 = 0LL;
        v434 = &xmmword_14A3C8560;
        v433 = 0LL;
        sub_140AD3CD0(&v432, 7LL);
        LODWORD(v433) = v433 + 7;
        if ( (int)v433 > SHIDWORD(v433) )
          sub_140DBCD80(&v432);
        v258 = off_14A10DAE8((v8_qjs::External *)&v432);
        *(_QWORD *)v258 = 0x65006A0062004FLL;
        v258[2] = 0x740063;
        *((_WORD *)v258 + 6) = 0;
        sub_141F7F7CC(v253, &v432);
        off_14A10DAE8((v8_qjs::External *)&v432);
        sub_14290E14C(&v432);
        if ( sub_14290E140(&v432) )
        {
          v259 = sub_14290E140(&v432);
          sub_140AD6BE0(v259);
        }
      }
      v260 = v434;
    }
    else
    {
      v260 = (__int128 *)((__int64 (__fastcall *)(__int64 (__fastcall ***)()))v256)(v257);
    }
    v261 = (v8_qjs::Boolean *)*((_QWORD *)v260 + 1);
    m = *(_QWORD *)v260;
    v446 = *(_QWORD *)v260;
    v440 = v261;
    if ( v261 )
      ++*((_DWORD *)v261 + 2);
    v263 = a2[0xF];
    v437 = a6 & 0xFFFFFFFFF7FFFA7DuLL;
    v264 = qword_14A37E538;
    v456 = (_QWORD *)v263;
    if ( !qword_14A37E538 )
    {
      v265 = sub_1426BCF10();
      v264 = sub_1419C7994(sub_142794A50, v265, L"JsonObjectWrapper", 0x20LL, 0xAE471B34);
      qword_14A37E538 = v264;
    }
    if ( v263 == v264 )
    {
      v444 = (_DWORD *)sub_140AE3B90();
      v443 = v444 + 4;
      sub_140AE67C0(&v443, v444 + 4, v444 + 4);
      v266 = v444;
      v267 = (__int64)v443;
      v268 = v444;
      v459 = v443;
      v460 = v444;
      if ( v444 )
      {
        ++v444[2];
        v266 = v444;
      }
      if ( (_DWORD **)(a3 + 0x10) != &v459 )
      {
        *(_QWORD *)(a3 + 0x10) = v267;
        v459 = 0LL;
        sub_140AD6374(a3 + 0x18, &v460);
        v268 = v460;
        v266 = v444;
      }
      if ( v268 )
      {
        v285 = v268[2]-- == 1;
        if ( v285 )
        {
          (**(void (__fastcall ***)(_DWORD *))v268)(v268);
          v285 = v268[3]-- == 1;
          if ( v285 )
            (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v268 + 8LL))(v268, 1LL);
        }
        v266 = v444;
      }
      if ( v266 )
      {
        v285 = v266[2]-- == 1;
        if ( v285 )
        {
          (**(void (__fastcall ***)(_DWORD *))v266)(v266);
          v285 = v266[3]-- == 1;
          if ( v285 )
            (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v266 + 8LL))(v266, 1LL);
        }
      }
      sub_144CDD140(*(_QWORD *)(a3 + 0x10), m);
    }
    else
    {
      LODWORD(v434) = *(_DWORD *)(m + 8) - *(_DWORD *)(m + 0x34);
      if ( (int)v434 > 0 )
      {
        v269 = v263;
        if ( v263 )
        {
          for ( k = *(_QWORD *)(v263 + 0x50); !k; k = *(_QWORD *)(v271 + 0x50) )
          {
LABEL_423:
            v271 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v269 + 0x2F0LL))(v269);
            v269 = v271;
            if ( !v271 )
              goto LABEL_426;
          }
          while ( (*(_DWORD *)(*(_QWORD *)(k + 8) + 0x10LL) & 0x8001) != 0x8001LL )
          {
            k = *(_QWORD *)(k + 0x20);
            if ( !k )
              goto LABEL_423;
          }
        }
        else
        {
          k = 0LL;
        }
LABEL_426:
        v272 = &dword_1475961C4;
LABEL_427:
        while ( k )
        {
          if ( (!v437 || (v437 & *(_QWORD *)(k + 0x40)) != 0)
            && (a7 & *(_QWORD *)(k + 0x40)) == 0
            && a7 != 0xFFFFFFFFFFFFFFFFuLL )
          {
            sub_140C36AA4(k + 0x28, &v441);
            if ( *(_DWORD *)(m + 8) == *(_DWORD *)(m + 0x34) )
            {
LABEL_452:
              v289 = 0LL;
            }
            else
            {
              v273 = v442;
              if ( (_DWORD)v442 )
              {
                v274 = (unsigned __int16 *)off_14A10DAE8((v8_qjs::External *)&v441);
                v273 = v442;
              }
              else
              {
                v274 = (unsigned __int16 *)&dword_1475961C4;
              }
              v275 = v273 - 1;
              v276 = 0;
              if ( !v273 )
                v275 = 0;
              if ( v275 > 0 )
              {
                v277 = (unsigned int)v275;
                do
                {
                  v278 = *v274++;
                  v279 = dword_148ECBA70[(unsigned __int8)((v278 - ((unsigned int)(v278 - 0x61) < 0x1A ? 0x20 : 0)) ^ v276)] ^ ((unsigned int)v276 >> 8);
                  v276 = dword_148ECBA70[(unsigned __int8)(v279 ^ ((unsigned __int16)(v278
                                                                                    - ((unsigned int)(v278 - 0x61) < 0x1A
                                                                                     ? 0x20
                                                                                     : 0)) >> 8))] ^ (v279 >> 8);
                  --v277;
                }
                while ( v277 );
              }
              v280 = (_DWORD *)(m + 0x38);
              v281 = off_14A10DAE8((v8_qjs::External *)(v280 + 2));
              if ( v281 )
                v280 = v281;
              v282 = v280[v276 & (unsigned __int64)(*(int *)(v446 + 0x48) - 1LL)];
              for ( m = v446; ; v282 = *(_DWORD *)(sub_14438D274(m, v282) + 0x20) )
              {
                if ( v282 == 0xFFFFFFFF )
                  goto LABEL_452;
                v283 = (v8_qjs::External *)sub_14438D274(m, v282);
                v284 = *((_DWORD *)v283 + 2);
                if ( v284 == (_DWORD)v442 )
                {
                  if ( v284 <= 1 )
                    break;
                  v286 = off_14A10DAE8((v8_qjs::External *)&v441);
                  v287 = off_14A10DAE8(v283);
                  v288 = sub_140BA25F8(v287, v286);
                  m = v446;
                  v285 = v288 == 0;
                }
                else
                {
                  v285 = (_DWORD)v442 + v284 == 1;
                }
                if ( v285 )
                  break;
              }
              v289 = sub_14438D274(m, v282);
            }
            v290 = v289 + 0x10;
            if ( !v289 )
              v290 = 0LL;
            off_14A10DAE8((v8_qjs::External *)&v441);
            sub_14290E14C(&v441);
            if ( sub_14290E140(&v441) )
            {
              v291 = sub_14290E140(&v441);
              sub_140AD6BE0(v291);
            }
            if ( v290 )
            {
              if ( *(_QWORD *)v290
                && *(_DWORD *)(*(_QWORD *)v290 + 8LL) > 1u
                && !(unsigned __int8)sub_140CB99C4(v290, k, (int)v445 + *(_DWORD *)(k + 0x4C), v450[0], v451, v437, a7) )
              {
                if ( (unsigned __int8)byte_149E0B200 >= 2u )
                {
                  if ( (unsigned __int8)byte_14A291A60 >= 2u )
                  {
                    sub_140C36AA4(k + 0x28, &v436);
                    if ( DWORD2(v436) )
                      v293 = (v8_qjs::External *)off_14A10DAE8((v8_qjs::External *)&v436);
                    else
                      v293 = (v8_qjs::External *)&dword_1475961C4;
                    v445 = v293;
                    v437 = v456[3];
                    sub_140C36AA4(&v437, &v451);
                    if ( v452 )
                      v298 = off_14A10DAE8((v8_qjs::External *)&v451);
                    else
                      v298 = &dword_1475961C4;
                    v450[0] = (__int64)v298;
                    sub_143B576D0(v295, v294, v296, v297, (__int64)v450, (__int64)&v445);
                    off_14A10DAE8((v8_qjs::External *)&v451);
                    sub_14290E14C(&v451);
                    if ( sub_14290E140(&v451) )
                    {
                      v299 = sub_14290E140(&v451);
                      sub_140AD6BE0(v299);
                    }
                    off_14A10DAE8((v8_qjs::External *)&v436);
                    sub_14290E14C(&v436);
                    if ( sub_14290E140(&v436) )
                    {
                      v300 = sub_14290E140(&v436);
                      sub_140AD6BE0(v300);
                    }
                  }
                  if ( (unsigned __int8)byte_149E0B200 >= 2u && (unsigned __int8)byte_14A291A60 >= 2u )
                  {
                    v301 = (v8_qjs::External *)sub_1419F1200(v447, &v439);
                    if ( *((_DWORD *)v301 + 2) )
                      v272 = off_14A10DAE8(v301);
                    v447 = v272;
                    sub_143B58AC0(v303, v302, v304, v305, (__int64)&v447);
                    off_14A10DAE8((v8_qjs::External *)&v439);
                    sub_14290E14C(&v439);
                    if ( sub_14290E140(&v439) )
                    {
                      v306 = sub_14290E140(&v439);
                      sub_140AD6BE0(v306);
                    }
                  }
                }
                v307 = v440;
                if ( *(double *)&v440 == 0.0 )
                  return 0;
                v285 = (*((_DWORD *)v440 + 2))-- == 1;
                if ( !v285 )
                  return 0;
                (**(void (__fastcall ***)(v8_qjs::Boolean *))v307)(v307);
                v285 = (*((_DWORD *)v307 + 3))-- == 1;
                if ( !v285 )
                  return 0;
                (*(void (__fastcall **)(v8_qjs::Boolean *, __int64))(*(_QWORD *)v307 + 8LL))(v307, 1LL);
                return 0;
              }
              LODWORD(v434) = (_DWORD)v434 - 1;
              if ( (int)v434 <= 0 )
                break;
            }
          }
          k = *(_QWORD *)(k + 0x20);
          if ( v269 )
          {
            while ( !k )
            {
LABEL_466:
              v292 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v269 + 0x2F0LL))(v269);
              v269 = v292;
              if ( !v292 )
                goto LABEL_427;
              k = *(_QWORD *)(v292 + 0x50);
            }
            while ( (*(_DWORD *)(*(_QWORD *)(k + 8) + 0x10LL) & 0x8001) != 0x8001LL )
            {
              k = *(_QWORD *)(k + 0x20);
              if ( !k )
                goto LABEL_466;
            }
          }
        }
        v261 = v440;
      }
    }
    if ( v261 )
    {
      v285 = (*((_DWORD *)v261 + 2))-- == 1;
      if ( v285 )
      {
        (**(void (__fastcall ***)(v8_qjs::Boolean *))v261)(v261);
        v285 = (*((_DWORD *)v261 + 3))-- == 1;
        if ( v285 )
          (*(void (__fastcall **)(v8_qjs::Boolean *, __int64))(*(_QWORD *)v261 + 8LL))(v261, 1LL);
      }
    }
    return 1;
  }
  if ( v254 != 2 )
  {
LABEL_557:
    if ( *((_DWORD *)*a1 + 2) == 2 )
    {
      sub_140C352EC(*a1, &v436);
      if ( DWORD2(v436) )
        LODWORD(v347) = (unsigned int)off_14A10DAE8((v8_qjs::External *)&v436);
      else
        v347 = &dword_1475961C4;
      v346 = (int)v347;
LABEL_562:
      sub_140CB8944((_DWORD)a2, v346, a3, 0, 0LL, (__int64)off_14A348AB0);
      goto LABEL_563;
    }
    if ( (unsigned __int8)byte_149E0B200 < 2u || (unsigned __int8)byte_14A291A60 < 2u )
      return 0;
    v348 = (v8_qjs::External *)sub_1419F1200(a2, &v439);
    if ( *((_DWORD *)v348 + 2) )
      v353 = off_14A10DAE8(v348);
    else
      v353 = &dword_1475961C4;
    v447 = v353;
    sub_143B592D0(v350, v349, v351, v352, (__int64)&v447);
LABEL_664:
    off_14A10DAE8((v8_qjs::External *)&v439);
    sub_14290E14C(&v439);
    if ( !sub_14290E140(&v439) )
      return 0;
    v425 = sub_14290E140(&v439);
    sub_140AD6BE0(v425);
    return 0;
  }
  v308 = a2[0xF];
  v309 = *(_QWORD *)(v308 + 0x18);
  if ( v309 == qword_14A6629F0 )
  {
    sub_140C352EC(*a1, &v436);
    v310 = (_DWORD *)sub_141DCFBD0(&v434, &v436);
    v311 = dword_148EC81B0[(unsigned __int8)BYTE1(*v310)];
    v312 = dword_148EC81B0[(unsigned __int8)*v310];
    v313 = HIBYTE(*v310);
    *(_DWORD *)a3 = dword_148EC81B0[(unsigned __int8)BYTE2(*v310)];
    *(_DWORD *)(a3 + 4) = v311;
    *(_DWORD *)(a3 + 8) = v312;
    *(float *)(a3 + 0xC) = (float)v313 * 0.0039215689;
LABEL_563:
    off_14A10DAE8((v8_qjs::External *)&v436);
    sub_14290E14C(&v436);
    if ( !sub_14290E140(&v436) )
      return 1;
    v92 = (__m128i *)&v436;
    goto LABEL_134;
  }
  if ( v309 == qword_14A6629E0 )
  {
    sub_140C352EC(*a1, &v436);
    *(_DWORD *)a3 = *(_DWORD *)sub_141DCFBD0(&v434, &v436);
    goto LABEL_563;
  }
  if ( v309 != qword_14A6629D0 )
  {
    v343 = *(_QWORD *)(v308 + 0xB8);
    if ( v343 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v343 + 0xD0LL))(v343) )
    {
      v344 = *(_QWORD *)(a2[0xF] + 0xB8LL);
      sub_140C352EC(*a1, &v436);
      if ( DWORD2(v436) )
        v345 = off_14A10DAE8((v8_qjs::External *)&v436);
      else
        v345 = &dword_1475961C4;
      v437 = (unsigned __int64)v345;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64 *, __int64, _QWORD, _QWORD, __int64 (__fastcall ***)()))(*(_QWORD *)v344 + 0xD8LL))(
             v344,
             &v437,
             a3,
             0LL,
             0LL,
             off_14A348AB0) )
      {
        goto LABEL_563;
      }
      v346 = v437;
      goto LABEL_562;
    }
    goto LABEL_557;
  }
  sub_140C352EC(*a1, &v441);
  v314 = v442;
  v315 = &dword_1475961C4;
  if ( (_DWORD)v442 )
  {
    v316 = off_14A10DAE8((v8_qjs::External *)&v441);
    v314 = v442;
    v317 = v316;
  }
  else
  {
    v317 = &dword_1475961C4;
  }
  v318 = &qword_148075A10;
  v319 = v317 - (_BYTE *)&qword_148075A10;
  while ( 1 )
  {
    while ( 1 )
    {
      v320 = *(unsigned __int16 *)((char *)v318 + v319);
      v321 = *(unsigned __int16 *)v318;
      v318 = (__int64 *)((char *)v318 + 2);
      if ( (_WORD)v320 != (_WORD)v321 )
        break;
      if ( !(_WORD)v320 )
      {
        *(_QWORD *)a3 = 0LL;
        goto LABEL_526;
      }
    }
    if ( (((unsigned int)v321 | (unsigned int)v320) & 0xFFFFFF80) != 0 )
      break;
    if ( byte_148787460[v320] != byte_148787460[v321] )
      goto LABEL_510;
  }
  if ( (_DWORD)v320 == (_DWORD)v321 )
  {
    *(_QWORD *)a3 = 0LL;
LABEL_526:
    off_14A10DAE8((v8_qjs::External *)&v441);
    sub_14290E14C(&v441);
    if ( !sub_14290E140(&v441) )
      return 1;
    v92 = (__m128i *)&v441;
    goto LABEL_134;
  }
LABEL_510:
  if ( v314 )
  {
    v322 = off_14A10DAE8((v8_qjs::External *)&v441);
    v314 = v442;
    v323 = v322;
  }
  else
  {
    v323 = &dword_1475961C4;
  }
  v324 = &qword_1480759A8;
  v325 = v323 - (_BYTE *)&qword_1480759A8;
  while ( 1 )
  {
    while ( 1 )
    {
      v326 = *(unsigned __int16 *)((char *)v324 + v325);
      v327 = *(unsigned __int16 *)v324;
      v324 = (__int64 *)((char *)v324 + 2);
      if ( (_WORD)v326 != (_WORD)v327 )
        break;
      if ( !(_WORD)v326 )
        goto LABEL_524;
    }
    if ( (((unsigned int)v327 | (unsigned int)v326) & 0xFFFFFF80) != 0 )
      break;
    if ( byte_148787460[v326] != byte_148787460[v327] )
      goto LABEL_521;
  }
  if ( (_DWORD)v326 == (_DWORD)v327 )
  {
LABEL_524:
    v330 = 0x2BCA2875F4373FFFLL;
LABEL_525:
    *(_QWORD *)a3 = v330;
    goto LABEL_526;
  }
LABEL_521:
  if ( v314 )
  {
    v328 = off_14A10DAE8((v8_qjs::External *)&v441);
    v314 = v442;
    v329 = v328;
  }
  else
  {
    v329 = &dword_1475961C4;
  }
  v331 = L"now";
  v332 = v329 - (_BYTE *)L"now";
  while ( 1 )
  {
    while ( 1 )
    {
      v333 = *(const wchar_t *)((char *)v331 + v332);
      v334 = *v331++;
      if ( (_WORD)v333 != (_WORD)v334 )
        break;
      if ( !(_WORD)v333 )
        goto LABEL_532;
    }
    if ( (((unsigned int)v333 | (unsigned int)v334) & 0xFFFFFF80) != 0 )
      break;
    if ( byte_148787460[v333] != byte_148787460[v334] )
      goto LABEL_535;
  }
  if ( (_DWORD)v333 == (_DWORD)v334 )
  {
LABEL_532:
    sub_141E7EE30(&v447, v333, v334, v331);
    v330 = (__int64)v447;
    goto LABEL_525;
  }
LABEL_535:
  if ( v314 )
    v335 = off_14A10DAE8((v8_qjs::External *)&v441);
  else
    v335 = &dword_1475961C4;
  if ( (unsigned __int8)sub_146048684(v335, a3) || (unsigned __int8)sub_14604729C(&v441, a3) )
    goto LABEL_526;
  if ( (unsigned __int8)byte_149E0B200 >= 2u && (unsigned __int8)byte_14A291A60 >= 2u )
  {
    v336 = (v8_qjs::External *)sub_1419F1200(a2, &v439);
    if ( *((_DWORD *)v336 + 2) )
      v315 = off_14A10DAE8(v336);
    v447 = v315;
    sub_143B57A30(v338, v337, v339, v340, (__int64)&v447);
    off_14A10DAE8((v8_qjs::External *)&v439);
    sub_14290E14C(&v439);
    if ( sub_14290E140(&v439) )
    {
      v341 = sub_14290E140(&v439);
      sub_140AD6BE0(v341);
    }
  }
  off_14A10DAE8((v8_qjs::External *)&v441);
  sub_14290E14C(&v441);
  if ( !sub_14290E140(&v441) )
    return 0;
  v342 = sub_14290E140(&v441);
  sub_140AD6BE0(v342);
  return 0;
}

```
---
ASM Vive All 
---
```asm
.std:0000000140AD7190
.std:0000000140AD7190                         ; =============== S U B R O U T I N E =======================================
.std:0000000140AD7190
.std:0000000140AD7190                         ; Attributes: bp-based frame fpd=19C0h
.std:0000000140AD7190
.std:0000000140AD7190                         ; char __fastcall sub_140AD7190(__int64 (__fastcall ****)(), _QWORD *, __int64, __int64, __int64, __int64, __int64)
.std:0000000140AD7190                         sub_140AD7190   proc near               ; CODE XREF: sub_140CB99C4+205↓p
.std:0000000140AD7190                                                                 ; sub_140CB99C4+3A6↓p
.std:0000000140AD7190                                                                 ; DATA XREF: ...
.std:0000000140AD7190
.std:0000000140AD7190                         var_1AA0        = qword ptr -1AA0h
.std:0000000140AD7190                         var_1A98        = qword ptr -1A98h
.std:0000000140AD7190                         var_1A90        = qword ptr -1A90h
.std:0000000140AD7190                         var_1A88        = qword ptr -1A88h
.std:0000000140AD7190                         var_1A80        = qword ptr -1A80h
.std:0000000140AD7190                         var_1A78        = qword ptr -1A78h
.std:0000000140AD7190                         var_1A70        = qword ptr -1A70h
.std:0000000140AD7190                         var_1A68        = qword ptr -1A68h
.std:0000000140AD7190                         var_1A60        = qword ptr -1A60h
.std:0000000140AD7190                         var_1A58        = qword ptr -1A58h
.std:0000000140AD7190                         var_1A50        = byte ptr -1A50h
.std:0000000140AD7190                         var_1A48        = qword ptr -1A48h
.std:0000000140AD7190                         var_1A40        = qword ptr -1A40h
.std:0000000140AD7190                         var_1A38        = qword ptr -1A38h
.std:0000000140AD7190                         var_1A30        = qword ptr -1A30h
.std:0000000140AD7190                         var_1A28        = xmmword ptr -1A28h
.std:0000000140AD7190                         var_1A10        = xmmword ptr -1A10h
.std:0000000140AD7190                         var_1A00        = qword ptr -1A00h
.std:0000000140AD7190                         var_19F8        = qword ptr -19F8h
.std:0000000140AD7190                         var_19F0        = xmmword ptr -19F0h
.std:0000000140AD7190                         var_19E0        = qword ptr -19E0h
.std:0000000140AD7190                         var_19D8        = qword ptr -19D8h
.std:0000000140AD7190                         var_19D0        = qword ptr -19D0h
.std:0000000140AD7190                         var_19C8        = qword ptr -19C8h
.std:0000000140AD7190                         var_19C0        = qword ptr -19C0h
.std:0000000140AD7190                         var_19B8        = qword ptr -19B8h
.std:0000000140AD7190                         var_19B0        = qword ptr -19B0h
.std:0000000140AD7190                         var_19A8        = qword ptr -19A8h
.std:0000000140AD7190                         var_19A0        = qword ptr -19A0h
.std:0000000140AD7190                         var_1998        = byte ptr -1998h
.std:0000000140AD7190                         var_1990        = qword ptr -1990h
.std:0000000140AD7190                         var_1980        = qword ptr -1980h
.std:0000000140AD7190                         var_1978        = dword ptr -1978h
.std:0000000140AD7190                         var_1970        = xmmword ptr -1970h
.std:0000000140AD7190                         var_1960        = dword ptr -1960h
.std:0000000140AD7190                         var_195C        = dword ptr -195Ch
.std:0000000140AD7190                         var_1950        = qword ptr -1950h
.std:0000000140AD7190                         var_1948        = xmmword ptr -1948h
.std:0000000140AD7190                         var_1938        = xmmword ptr -1938h
.std:0000000140AD7190                         var_1928        = qword ptr -1928h
.std:0000000140AD7190                         var_1920        = qword ptr -1920h
.std:0000000140AD7190                         var_1918        = byte ptr -1918h
.std:0000000140AD7190                         var_1908        = byte ptr -1908h
.std:0000000140AD7190                         var_18F8        = xmmword ptr -18F8h
.std:0000000140AD7190                         var_18E8        = qword ptr -18E8h
.std:0000000140AD7190                         var_18E0        = xmmword ptr -18E0h
.std:0000000140AD7190                         var_18D0        = qword ptr -18D0h
.std:0000000140AD7190                         var_18C0        = xmmword ptr -18C0h
.std:0000000140AD7190                         var_18B0        = qword ptr -18B0h
.std:0000000140AD7190                         var_18A8        = qword ptr -18A8h
.std:0000000140AD7190                         var_18A0        = qword ptr -18A0h
.std:0000000140AD7190                         var_1898        = qword ptr -1898h
.std:0000000140AD7190                         var_1890        = xmmword ptr -1890h
.std:0000000140AD7190                         var_1880        = qword ptr -1880h
.std:0000000140AD7190                         var_1878        = dword ptr -1878h
.std:0000000140AD7190                         var_1870        = xmmword ptr -1870h
.std:0000000140AD7190                         var_1860        = xmmword ptr -1860h
.std:0000000140AD7190                         var_1850        = word ptr -1850h
.std:0000000140AD7190                         var_1050        = byte ptr -1050h
.std:0000000140AD7190                         var_850         = byte ptr -850h
.std:0000000140AD7190                         var_50          = qword ptr -50h
.std:0000000140AD7190                         arg_20          = qword ptr  30h
.std:0000000140AD7190                         arg_28          = qword ptr  38h
.std:0000000140AD7190                         arg_30          = qword ptr  40h
.std:0000000140AD7190
.std:0000000140AD7190                         ; __unwind { // __GSHandlerCheck
.std:0000000140AD7190 40 55                                   push    rbp
.std:0000000140AD7192 53                                      push    rbx
.std:0000000140AD7193 56                                      push    rsi
.std:0000000140AD7194 57                                      push    rdi
.std:0000000140AD7195 41 54                                   push    r12
.std:0000000140AD7197 41 55                                   push    r13
.std:0000000140AD7199 41 56                                   push    r14
.std:0000000140AD719B 41 57                                   push    r15
.std:0000000140AD719D 48 8D AC 24 78 E6 FF FF                 lea     rbp, [rsp-1988h]
.std:0000000140AD71A5 B8 88 1A 00 00                          mov     eax, 1A88h
.std:0000000140AD71AA E8 41 AE 63 02                          call    __alloca_probe
.std:0000000140AD71AF 48 2B E0                                sub     rsp, rax
.std:0000000140AD71B2 48 8B 05 C7 1B 32 09                    mov     rax, cs:__security_cookie
.std:0000000140AD71B9 48 33 C4                                xor     rax, rsp
.std:0000000140AD71BC 48 89 85 70 19 00 00                    mov     [rbp+1970h], rax
.std:0000000140AD71C3 4C 8B AD F0 19 00 00                    mov     r13, [rbp+19F0h]
.std:0000000140AD71CA 4D 8B F9                                mov     r15, r9
.std:0000000140AD71CD 4C 89 6D 40                             mov     [rbp+40h], r13
.std:0000000140AD71D1 4D 8B E0                                mov     r12, r8
.std:0000000140AD71D4 4C 89 4D 30                             mov     [rbp+30h], r9
.std:0000000140AD71D8 48 8B F2                                mov     rsi, rdx
.std:0000000140AD71DB 4C 89 45 08                             mov     [rbp+8], r8
.std:0000000140AD71DF 48 8B D9                                mov     rbx, rcx
.std:0000000140AD71E2 48 89 55 18                             mov     [rbp+18h], rdx
.std:0000000140AD71E6 48 85 D2                                test    rdx, rdx
.std:0000000140AD71E9 0F 84 D3 01 00 00                       jz      loc_140AD73C2
.std:0000000140AD71EF 48 8B 42 08                             mov     rax, [rdx+8]
.std:0000000140AD71F3 48 BA 00 00 00 00 00 00                 mov     rdx, 1000000000000h
.std:0000000140AD71F3 01 00
.std:0000000140AD71FD 48 85 50 10                             test    [rax+10h], rdx
.std:0000000140AD7201 0F 84 BB 01 00 00                       jz      loc_140AD73C2
.std:0000000140AD7207 48 8B 09                                mov     rcx, [rcx]
.std:0000000140AD720A 83 79 08 02                             cmp     dword ptr [rcx+8], 2
.std:0000000140AD720E 0F 85 8C 01 00 00                       jnz     loc_140AD73A0
.std:0000000140AD7214 48 8B 9E 80 00 00 00                    mov     rbx, [rsi+80h]
.std:0000000140AD721B 48 8D 55 80                             lea     rdx, [rbp-80h]
.std:0000000140AD721F E8 C8 E0 15 00                          call    sub_140C352EC
.std:0000000140AD7224 83 7D 88 00                             cmp     dword ptr [rbp-78h], 0
.std:0000000140AD7228 4C 8D 2D 95 EF AB 06                    lea     r13, dword_1475961C4
.std:0000000140AD722F 74 0B                                   jz      short loc_140AD723C
.std:0000000140AD7231 48 8D 4D 80                             lea     rcx, [rbp-80h]
.std:0000000140AD7235 E8 06 6F E3 01                          call    sub_14290E140
.std:0000000140AD723A EB 03                                   jmp     short loc_140AD723F
.std:0000000140AD723C                         ; ---------------------------------------------------------------------------
.std:0000000140AD723C
.std:0000000140AD723C                         loc_140AD723C:                          ; CODE XREF: sub_140AD7190+9F↑j
.std:0000000140AD723C 49 8B C5                                mov     rax, r13
.std:0000000140AD723F
.std:0000000140AD723F                         loc_140AD723F:                          ; CODE XREF: sub_140AD7190+AA↑j
.std:0000000140AD723F 41 B8 01 00 00 00                       mov     r8d, 1
.std:0000000140AD7245 48 8D 4D 18                             lea     rcx, [rbp+18h]
.std:0000000140AD7249 48 8B D0                                mov     rdx, rax
.std:0000000140AD724C E8 FF 9E 11 00                          call    sub_140BF1150
.std:0000000140AD7251 48 8B CB                                mov     rcx, rbx
.std:0000000140AD7254 48 8B 10                                mov     rdx, [rax]
.std:0000000140AD7257 E8 1C 69 3B 00                          call    sub_140E8DB78
.std:0000000140AD725C 4C 8B C0                                mov     r8, rax
.std:0000000140AD725F 48 83 F8 FF                             cmp     rax, 0FFFFFFFFFFFFFFFFh
.std:0000000140AD7263 0F 85 0C 01 00 00                       jnz     loc_140AD7375
.std:0000000140AD7269 80 3D 90 3F 33 09 02                    cmp     cs:byte_149E0B200, 2
.std:0000000140AD7270 0F 82 BF 00 00 00                       jb      loc_140AD7335
.std:0000000140AD7276 80 3D E3 A7 7B 09 02                    cmp     cs:byte_14A291A60, 2
.std:0000000140AD727D 0F 82 B2 00 00 00                       jb      loc_140AD7335
.std:0000000140AD7283 48 8D 55 B0                             lea     rdx, [rbp-50h]
.std:0000000140AD7287 48 8B CE                                mov     rcx, rsi
.std:0000000140AD728A E8 71 9F F1 00                          call    sub_1419F1200
.std:0000000140AD728F 83 78 08 00                             cmp     dword ptr [rax+8], 0
.std:0000000140AD7293 74 0E                                   jz      short loc_140AD72A3
.std:0000000140AD7295 48 8B 15 4C 68 63 09                    mov     rdx, cs:off_14A10DAE8
.std:0000000140AD729C 48 8B C8                                mov     rcx, rax        ; this
.std:0000000140AD729F FF D2                                   call    rdx ; v8_qjs::External::Value(void) ; v8_qjs::External::Value(void)
.std:0000000140AD72A1 EB 03                                   jmp     short loc_140AD72A6
.std:0000000140AD72A3                         ; ---------------------------------------------------------------------------
.std:0000000140AD72A3
.std:0000000140AD72A3                         loc_140AD72A3:                          ; CODE XREF: sub_140AD7190+103↑j
.std:0000000140AD72A3 49 8B C5                                mov     rax, r13
.std:0000000140AD72A6
.std:0000000140AD72A6                         loc_140AD72A6:                          ; CODE XREF: sub_140AD7190+111↑j
.std:0000000140AD72A6 83 7D 88 00                             cmp     dword ptr [rbp-78h], 0
.std:0000000140AD72AA 48 89 45 C0                             mov     [rbp-40h], rax
.std:0000000140AD72AE 74 0F                                   jz      short loc_140AD72BF
.std:0000000140AD72B0 48 8B 05 31 68 63 09                    mov     rax, cs:off_14A10DAE8
.std:0000000140AD72B7 48 8D 4D 80                             lea     rcx, [rbp-80h]  ; this
.std:0000000140AD72BB FF D0                                   call    rax ; v8_qjs::External::Value(void) ; v8_qjs::External::Value(void)
.std:0000000140AD72BD EB 03                                   jmp     short loc_140AD72C2
.std:0000000140AD72BF                         ; ---------------------------------------------------------------------------
.std:0000000140AD72BF
.std:0000000140AD72BF                         loc_140AD72BF:                          ; CODE XREF: sub_140AD7190+11E↑j
.std:0000000140AD72BF 49 8B C5                                mov     rax, r13
.std:0000000140AD72C2
.std:0000000140AD72C2                         loc_140AD72C2:                          ; CODE XREF: sub_140AD7190+12D↑j
.std:0000000140AD72C2 83 7B 38 00                             cmp     dword ptr [rbx+38h], 0
.std:0000000140AD72C6 48 8D 4B 30                             lea     rcx, [rbx+30h]  ; this
.std:0000000140AD72CA 48 89 45 08                             mov     [rbp+8], rax
.std:0000000140AD72CE 74 0C                                   jz      short loc_140AD72DC
.std:0000000140AD72D0 48 8B 05 11 68 63 09                    mov     rax, cs:off_14A10DAE8
.std:0000000140AD72D7 FF D0                                   call    rax ; v8_qjs::External::Value(void) ; v8_qjs::External::Value(void)
.std:0000000140AD72D9 4C 8B E8                                mov     r13, rax
.std:0000000140AD72DC
.std:0000000140AD72DC                         loc_140AD72DC:                          ; CODE XREF: sub_140AD7190+13E↑j
.std:0000000140AD72DC 48 8D 45 C0                             lea     rax, [rbp-40h]
.std:0000000140AD72E0 4C 89 6D E0                             mov     [rbp-20h], r13
.std:0000000140AD72E4 48 89 44 24 30                          mov     [rsp+30h], rax
.std:0000000140AD72E9 48 8D 45 08                             lea     rax, [rbp+8]
.std:0000000140AD72ED 48 89 44 24 28                          mov     [rsp+28h], rax
.std:0000000140AD72F2 48 8D 45 E0                             lea     rax, [rbp-20h]
.std:0000000140AD72F6 48 89 44 24 20                          mov     [rsp+20h], rax
.std:0000000140AD72FB E8 50 0F 08 03                          call    sub_143B58250
.std:0000000140AD7300 48 8B 05 E1 67 63 09                    mov     rax, cs:off_14A10DAE8
.std:0000000140AD7307 48 8D 4D B0                             lea     rcx, [rbp-50h]  ; this
.std:0000000140AD730B FF D0                                   call    rax ; v8_qjs::External::Value(void) ; v8_qjs::External::Value(void)
.std:0000000140AD730D 48 8D 4D B0                             lea     rcx, [rbp-50h]
.std:0000000140AD7311 E8 36 6E E3 01                          call    sub_14290E14C
.std:0000000140AD7316 48 8D 4D B0                             lea     rcx, [rbp-50h]
.std:0000000140AD731A E8 21 6E E3 01                          call    sub_14290E140
.std:0000000140AD731F 48 85 C0                                test    rax, rax
.std:0000000140AD7322 74 11                                   jz      short loc_140AD7335
.std:0000000140AD7324 48 8D 4D B0                             lea     rcx, [rbp-50h]
.std:0000000140AD7328 E8 13 6E E3 01                          call    sub_14290E140
.std:0000000140AD732D 48 8B C8                                mov     rcx, rax
.std:0000000140AD7330 E8 AB F8 FF FF                          call    sub_140AD6BE0
.std:0000000140AD7335
.std:0000000140AD7335                         loc_140AD7335:                          ; CODE XREF: sub_140AD7190+E0↑j
.std:0000000140AD7335                                                                 ; sub_140AD7190+ED↑j ...
.std:0000000140AD7335 48 8B 05 AC 67 63 09                    mov     rax, cs:off_14A10DAE8
.std:0000000140AD733C 48 8D 4D 80                             lea     rcx, [rbp-80h]  ; this
.std:0000000140AD7340 FF D0                                   call    rax ; v8_qjs::External::Value(void) ; v8_qjs::External::Value(void)
.std:0000000140AD7342 48 8D 4D 80                             lea     rcx, [rbp-80h]
.std:0000000140AD7346 E8 01 6E E3 01                          call    sub_14290E14C
.std:0000000140AD734B 48 8D 4D 80                             lea     rcx, [rbp-80h]
.std:0000000140AD734F E8 EC 6D E3 01                          call    sub_14290E140
.std:0000000140AD7354 48 85 C0                                test    rax, rax
.std:0000000140AD7357 0F 84 28 0F 00 00                       jz      loc_140AD8285
.std:0000000140AD735D 48 8D 4D 80                             lea     rcx, [rbp-80h]
.std:0000000140AD7361 E8 DA 6D E3 01                          call    sub_14290E140
.std:0000000140AD7366 48 8B C8                                mov     rcx, rax
.std:0000000140AD7369 E8 72 F8 FF FF                          call    sub_140AD6BE0
.std:0000000140AD736E 32 C0                                   xor     al, al
.std:0000000140AD7370 E9 E1 08 00 00                          jmp     loc_140AD7C56
.std:0000000140AD7375                         ; ---------------------------------------------------------------------------
.std:0000000140AD7375
.std:0000000140AD7375                         loc_140AD7375:                          ; CODE XREF: sub_140AD7190+D3↑j
.std:0000000140AD7375 48 8B 4E 78                             mov     rcx, [rsi+78h]
.std:0000000140AD7379 48 8B 01                                mov     rax, [rcx]
.std:0000000140AD737C
.std:0000000140AD737C                         loc_140AD737C:                          ; CODE XREF: sub_140AD7190+809↓j
.std:0000000140AD737C 49 8B D4                                mov     rdx, r12
.std:0000000140AD737F FF 90 48 01 00 00                       call    qword ptr [rax+148h]
.std:0000000140AD7385 48 8B 05 5C 67 63 09                    mov     rax, cs:off_14A10DAE8
.std:0000000140AD738C 48 8D 4D 80                             lea     rcx, [rbp-80h]  ; this
.std:0000000140AD7390 FF D0                                   call    rax ; v8_qjs::External::Value(void) ; v8_qjs::External::Value(void)
.std:0000000140AD7392 48 8D 4D 80                             lea     rcx, [rbp-80h]
.std:0000000140AD7396 E8 B1 6D E3 01                          call    sub_14290E14C
.std:0000000140AD739B E9 2D 0E 00 00                          jmp     loc_140AD81CD
.std:0000000140AD73A0                         ; ---------------------------------------------------------------------------
.std:0000000140AD73A0
.std:0000000140AD73A0                         loc_140AD73A0:                          ; CODE XREF: sub_140AD7190+7E↑j
.std:0000000140AD73A0 48 8B 5E 78                             mov     rbx, [rsi+78h]
.std:0000000140AD73A4 48 8B 3B                                mov     rdi, [rbx]
.std:0000000140AD73A7 E8 68 02 67 00                          call    sub_141147614
.std:0000000140AD73AC F2 4C 0F 2C C0                          cvttsd2si r8, xmm0
.std:0000000140AD73B1 49 8B D4                                mov     rdx, r12
.std:0000000140AD73B4 48 8B CB                                mov     rcx, rbx
.std:0000000140AD73B7 FF 97 48 01 00 00                       call    qword ptr [rdi+148h]
.std:0000000140AD73BD E9 92 08 00 00                          jmp     loc_140AD7C54
.std:0000000140AD73C2                         ; ---------------------------------------------------------------------------
.std:0000000140AD73C2
.std:0000000140AD73C2                         loc_140AD73C2:                          ; CODE XREF: sub_140AD7190+59↑j
.std:0000000140AD73C2                                                                 ; sub_140AD7190+71↑j
.std:0000000140AD73C2 48 85 F6                                test    rsi, rsi
.std:0000000140AD73C5 0F 84 06 2C 00 00                       jz      loc_140AD9FD1
.std:0000000140AD73CB 48 8B 46 08                             mov     rax, [rsi+8]
.std:0000000140AD73CF 48 F7 40 10 00 00 00 01                 test    qword ptr [rax+10h], 1000000h
.std:0000000140AD73D7 0F 84 68 0A 00 00                       jz      loc_140AD7E45
.std:0000000140AD73DD 48 8B 06                                mov     rax, [rsi]
.std:0000000140AD73E0 48 8B CE                                mov     rcx, rsi
.std:0000000140AD73E3 FF 90 40 01 00 00                       call    qword ptr [rax+140h]
.std:0000000140AD73E9 48 85 C0                                test    rax, rax
.std:0000000140AD73EC 0F 84 B8 06 00 00                       jz      loc_140AD7AAA
.std:0000000140AD73F2 48 8B 03                                mov     rax, [rbx]
.std:0000000140AD73F5 83 78 08 02                             cmp     dword ptr [rax+8], 2
.std:0000000140AD73F9 0F 85 AB 06 00 00                       jnz     loc_140AD7AAA
.std:0000000140AD73FF 48 8B 06                                mov     rax, [rsi]
.std:0000000140AD7402 48 8B CE                                mov     rcx, rsi
.std:0000000140AD7405 FF 90 40 01 00 00                       call    qword ptr [rax+140h]
.std:0000000140AD740B 48 8B 1B                                mov     rbx, [rbx]
.std:0000000140AD740E 48 8D 55 80                             lea     rdx, [rbp-80h]
.std:0000000140AD7412 45 33 F6                                xor     r14d, r14d
.std:0000000140AD7415 48 89 45 30                             mov     [rbp+30h], rax
.std:0000000140AD7419 4C 89 75 80                             mov     [rbp-80h], r14
.std:0000000140AD741D 48 8B CB                                mov     rcx, rbx
.std:0000000140AD7420 4C 89 75 88                             mov     [rbp-78h], r14
.std:0000000140AD7424 48 8B F8                                mov     rdi, rax
.std:0000000140AD7427 4C 8B 03                                mov     r8, [rbx]
.std:0000000140AD742A 41 FF 50 58                             call    qword ptr [r8+58h]
.std:0000000140AD742E 84 C0                                   test    al, al
.std:0000000140AD7430 0F 85 9A 00 00 00                       jnz     loc_140AD74D0
.std:0000000140AD7436 41 8D 56 07                             lea     edx, [r14+7]
.std:0000000140AD743A 4C 89 75 18                             mov     [rbp+18h], r14
.std:0000000140AD743E 48 8D 4D 18                             lea     rcx, [rbp+18h]
.std:0000000140AD7442 4C 89 75 20                             mov     [rbp+20h], r14
.std:0000000140AD7446 E8 85 C8 FF FF                          call    sub_140AD3CD0
.std:0000000140AD744B 8B 45 20                                mov     eax, [rbp+20h]
.std:0000000140AD744E 83 C0 07                                add     eax, 7
.std:0000000140AD7451 89 45 20                                mov     [rbp+20h], eax
.std:0000000140AD7454 3B 45 24                                cmp     eax, [rbp+24h]
.std:0000000140AD7457 7E 09                                   jle     short loc_140AD7462
.std:0000000140AD7459 48 8D 4D 18                             lea     rcx, [rbp+18h]
.std:0000000140AD745D E8 1E 59 2E 00                          call    sub_140DBCD80
.std:0000000140AD7462
.std:0000000140AD7462                         loc_140AD7462:                          ; CODE XREF: sub_140AD7190+2C7↑j
.std:0000000140AD7462 48 8B 05 7F 66 63 09                    mov     rax, cs:off_14A10DAE8
.std:0000000140AD7469 48 8D 4D 18                             lea     rcx, [rbp+18h]  ; this
.std:0000000140AD746D FF D0                                   call    rax ; v8_qjs::External::Value(void) ; v8_qjs::External::Value(void)
.std:0000000140AD746F F2 0F 10 05 91 93 59 07                 movsd   xmm0, cs:qword_148070808
.std:0000000140AD7477 48 8D 55 18                             lea     rdx, [rbp+18h]
.std:0000000140AD747B F2 0F 11 00                             movsd   qword ptr [rax], xmm0
.std:0000000140AD747F 8B 0D 8B 93 59 07                       mov     ecx, cs:dword_148070810
.std:0000000140AD7485 89 48 08                                mov     [rax+8], ecx
.std:0000000140AD7488 0F B7 0D 85 93 59 07                    movzx   ecx, cs:word_148070814
.std:0000000140AD748F 66 89 48 0C                             mov     [rax+0Ch], cx
.std:0000000140AD7493 48 8B CB                                mov     rcx, rbx
.std:0000000140AD7496 E8 31 83 4A 01                          call    sub_141F7F7CC
.std:0000000140AD749B 48 8B 05 46 66 63 09                    mov     rax, cs:off_14A10DAE8
.std:0000000140AD74A2 48 8D 4D 18                             lea     rcx, [rbp+18h]  ; this
.std:0000000140AD74A6 FF D0                                   call    rax ; v8_qjs::External::Value(void) ; v8_qjs::External::Value(void)
.std:0000000140AD74A8 48 8D 4D 18                             lea     rcx, [rbp+18h]
.std:0000000140AD74AC E8 9B 6C E3 01                          call    sub_14290E14C
.std:0000000140AD74B1 48 8D 4D 18                             lea     rcx, [rbp+18h]
.std:0000000140AD74B5 E8 86 6C E3 01                          call    sub_14290E140
.std:0000000140AD74BA 48 85 C0                                test    rax, rax
.std:0000000140AD74BD 74 11                                   jz      short loc_140AD74D0
.std:0000000140AD74BF 48 8D 4D 18                             lea     rcx, [rbp+18h]
.std:0000000140AD74C3 E8 78 6C E3 01                          call    sub_14290E140
.std:0000000140AD74C8 48 8B C8                                mov     rcx, rax
.std:0000000140AD74CB E8 10 F7 FF FF                          call    sub_140AD6BE0
.std:0000000140AD74D0
.std:0000000140AD74D0                         loc_140AD74D0:                          ; CODE XREF: sub_140AD7190+2A0↑j
.std:0000000140AD74D0                                                                 ; sub_140AD7190+32D↑j
.std:0000000140AD74D0 4C 8D 2D ED EC AB 06                    lea     r13, dword_1475961C4
.std:0000000140AD74D7 44 39 75 88                             cmp     [rbp-78h], r14d
.std:0000000140AD74DB 0F 84 6A 01 00 00                       jz      loc_140AD764B
.std:0000000140AD74E1 48 8B 05 00 66 63 09                    mov     rax, cs:off_14A10DAE8
.std:0000000140AD74E8 48 8D 4D 80                             lea     rcx, [rbp-80h]  ; this
.std:0000000140AD74EC FF D0                                   call    rax ; v8_qjs::External::Value(void) ; v8_qjs::External::Value(void)
.std:0000000140AD74EE 48 8B D8                                mov     rbx, rax
.std:0000000140AD74F1 41 8B CE                                mov     ecx, r14d
.std:0000000140AD74F4 48 8B D0                                mov     rdx, rax
.std:0000000140AD74F7 48 85 C0                                test    rax, rax
.std:0000000140AD74FA 0F 85 54 01 00 00                       jnz     loc_140AD7654
.std:0000000140AD7500
.std:0000000140AD7500                         loc_140AD7500:                          ; CODE XREF: sub_140AD7190+4CA↓j
.std:0000000140AD7500                                                                 ; sub_140AD7190+4E7↓j
.std:0000000140AD7500 45 32 DB                                xor     r11b, r11b
.std:0000000140AD7503
.std:0000000140AD7503                         loc_140AD7503:                          ; CODE XREF: sub_140AD7190+4F0↓j
.std:0000000140AD7503 48 2B DA                                sub     rbx, rdx
.std:0000000140AD7506 48 D1 FB                                sar     rbx, 1
.std:0000000140AD7509 85 DB                                   test    ebx, ebx
.std:0000000140AD750B 0F 84 B8 00 00 00                       jz      loc_140AD75C9
.std:0000000140AD7511 48 63 CB                                movsxd  rcx, ebx
.std:0000000140AD7514 45 8B C6                                mov     r8d, r14d
.std:0000000140AD7517 48 FF C9                                dec     rcx
.std:0000000140AD751A 48 8D 0C 4A                             lea     rcx, [rdx+rcx*2]
.std:0000000140AD751E 48 3B CA                                cmp     rcx, rdx
.std:0000000140AD7521 72 19                                   jb      short loc_140AD753C
.std:0000000140AD7523
.std:0000000140AD7523                         loc_140AD7523:                          ; CODE XREF: sub_140AD7190+3AA↓j
.std:0000000140AD7523 0F B7 01                                movzx   eax, word ptr [rcx]
.std:0000000140AD7526 66 83 E8 30                             sub     ax, 30h ; '0'
.std:0000000140AD752A 66 83 F8 09                             cmp     ax, 9
.std:0000000140AD752E 77 0C                                   ja      short loc_140AD753C
.std:0000000140AD7530 41 FF C0                                inc     r8d
.std:0000000140AD7533 48 83 E9 02                             sub     rcx, 2
.std:0000000140AD7537 48 3B CA                                cmp     rcx, rdx
.std:0000000140AD753A 73 E7                                   jnb     short loc_140AD7523
.std:0000000140AD753C
.std:0000000140AD753C                         loc_140AD753C:                          ; CODE XREF: sub_140AD7190+391↑j
.std:0000000140AD753C                                                                 ; sub_140AD7190+39E↑j
.std:0000000140AD753C 4D 63 D0                                movsxd  r10, r8d
.std:0000000140AD753F 48 63 C3                                movsxd  rax, ebx
.std:0000000140AD7542 49 2B C2                                sub     rax, r10
.std:0000000140AD7545 45 85 C0                                test    r8d, r8d
.std:0000000140AD7548 0F 84 37 01 00 00                       jz      loc_140AD7685
.std:0000000140AD754E 44 3B C3                                cmp     r8d, ebx
.std:0000000140AD7551 0F 8D 2E 01 00 00                       jge     loc_140AD7685
.std:0000000140AD7557 66 83 7C 42 FE 5F                       cmp     word ptr [rdx+rax*2-2], 5Fh ; '_'
.std:0000000140AD755D 0F 85 22 01 00 00                       jnz     loc_140AD7685
.std:0000000140AD7563 41 83 F8 0A                             cmp     r8d, 0Ah
.std:0000000140AD7567 0F 8F 18 01 00 00                       jg      loc_140AD7685
.std:0000000140AD756D 41 83 F8 01                             cmp     r8d, 1
.std:0000000140AD7571 74 0B                                   jz      short loc_140AD757E
.std:0000000140AD7573 66 83 3C 42 30                          cmp     word ptr [rdx+rax*2], 30h ; '0'
.std:0000000140AD7578 0F 84 07 01 00 00                       jz      loc_140AD7685
.std:0000000140AD757E
.std:0000000140AD757E                         loc_140AD757E:                          ; CODE XREF: sub_140AD7190+3E1↑j
.std:0000000140AD757E 49 8B CE                                mov     rcx, r14
.std:0000000140AD7581 45 85 C0                                test    r8d, r8d
.std:0000000140AD7584 7E 33                                   jle     short loc_140AD75B9
.std:0000000140AD7586 48 63 C3                                movsxd  rax, ebx
.std:0000000140AD7589 49 2B C2                                sub     rax, r10
.std:0000000140AD758C 4C 8D 0C 42                             lea     r9, [rdx+rax*2]
.std:0000000140AD7590
.std:0000000140AD7590                         loc_140AD7590:                          ; CODE XREF: sub_140AD7190+41B↓j
.std:0000000140AD7590 41 0F B7 01                             movzx   eax, word ptr [r9]
.std:0000000140AD7594 48 8D 0C 89                             lea     rcx, [rcx+rcx*4]
.std:0000000140AD7598 48 8D 49 E8                             lea     rcx, [rcx-18h]
.std:0000000140AD759C 4D 8D 49 02                             lea     r9, [r9+2]
.std:0000000140AD75A0 48 8D 0C 48                             lea     rcx, [rax+rcx*2]
.std:0000000140AD75A4 48 8B C1                                mov     rax, rcx
.std:0000000140AD75A7 49 83 EA 01                             sub     r10, 1
.std:0000000140AD75AB 75 E3                                   jnz     short loc_140AD7590
.std:0000000140AD75AD 48 3D FF FF FF 7F                       cmp     rax, 7FFFFFFFh
.std:0000000140AD75B3 0F 8D CC 00 00 00                       jge     loc_140AD7685
.std:0000000140AD75B9
.std:0000000140AD75B9                         loc_140AD75B9:                          ; CODE XREF: sub_140AD7190+3F4↑j
.std:0000000140AD75B9 41 2B D8                                sub     ebx, r8d
.std:0000000140AD75BC 44 8D 79 01                             lea     r15d, [rcx+1]
.std:0000000140AD75C0 83 EB 01                                sub     ebx, 1
.std:0000000140AD75C3 0F 85 BF 00 00 00                       jnz     loc_140AD7688
.std:0000000140AD75C9
.std:0000000140AD75C9                         loc_140AD75C9:                          ; CODE XREF: sub_140AD7190+37B↑j
.std:0000000140AD75C9 4C 89 75 10                             mov     [rbp+10h], r14
.std:0000000140AD75CD
.std:0000000140AD75CD                         loc_140AD75CD:                          ; CODE XREF: sub_140AD7190+551↓j
.std:0000000140AD75CD                                                                 ; sub_140AD7190+73B↓j ...
.std:0000000140AD75CD 48 8B 45 10                             mov     rax, [rbp+10h]
.std:0000000140AD75D1 49 BF 55 41 43 72 61 73                 mov     r15, 5474736172434155h
.std:0000000140AD75D1 74 54
.std:0000000140AD75DB 48 89 45 40                             mov     [rbp+40h], rax
.std:0000000140AD75DF 48 63 47 48                             movsxd  rax, dword ptr [rdi+48h]
.std:0000000140AD75E3 48 89 45 08                             mov     [rbp+8], rax
.std:0000000140AD75E7 48 85 C0                                test    rax, rax
.std:0000000140AD75EA 0F 8E 19 03 00 00                       jle     loc_140AD7909
.std:0000000140AD75F0 48 8D 4F 40                             lea     rcx, [rdi+40h]  ; this
.std:0000000140AD75F4 49 8B DE                                mov     rbx, r14
.std:0000000140AD75F7 48 89 4D E0                             mov     [rbp-20h], rcx
.std:0000000140AD75FB 49 8B FE                                mov     rdi, r14
.std:0000000140AD75FE 66 90                                   xchg    ax, ax
.std:0000000140AD7600
.std:0000000140AD7600                         loc_140AD7600:                          ; CODE XREF: sub_140AD7190+4B9↓j
.std:0000000140AD7600 48 85 DB                                test    rbx, rbx
.std:0000000140AD7603 78 06                                   js      short loc_140AD760B
.std:0000000140AD7605 44 3B 71 08                             cmp     r14d, [rcx+8]
.std:0000000140AD7609 7C 08                                   jl      short loc_140AD7613
.std:0000000140AD760B
.std:0000000140AD760B                         loc_140AD760B:                          ; CODE XREF: sub_140AD7190+473↑j
.std:0000000140AD760B 4C 89 3C 25 10 00 00 00                 mov     ds:10h, r15
.std:0000000140AD7613
.std:0000000140AD7613                         loc_140AD7613:                          ; CODE XREF: sub_140AD7190+479↑j
.std:0000000140AD7613 48 8B 05 CE 64 63 09                    mov     rax, cs:off_14A10DAE8
.std:0000000140AD761A FF D0                                   call    rax ; v8_qjs::External::Value(void) ; v8_qjs::External::Value(void)
.std:0000000140AD761C 8B 4D 40                                mov     ecx, [rbp+40h]
.std:0000000140AD761F 39 0C 38                                cmp     [rax+rdi], ecx
.std:0000000140AD7622 75 0D                                   jnz     short loc_140AD7631
.std:0000000140AD7624 8B 4D 44                                mov     ecx, [rbp+44h]
.std:0000000140AD7627 39 4C 38 04                             cmp     [rax+rdi+4], ecx
.std:0000000140AD762B 0F 84 CE 02 00 00                       jz      loc_140AD78FF
.std:0000000140AD7631
.std:0000000140AD7631                         loc_140AD7631:                          ; CODE XREF: sub_140AD7190+492↑j
.std:0000000140AD7631 41 FF C6                                inc     r14d
.std:0000000140AD7634 48 FF C3                                inc     rbx
.std:0000000140AD7637 48 83 C7 10                             add     rdi, 10h
.std:0000000140AD763B 48 3B 5D 08                             cmp     rbx, [rbp+8]
.std:0000000140AD763F 0F 8D C0 02 00 00                       jge     loc_140AD7905
.std:0000000140AD7645 48 8B 4D E0                             mov     rcx, [rbp-20h]
.std:0000000140AD7649 EB B5                                   jmp     short loc_140AD7600
.std:0000000140AD764B                         ; ---------------------------------------------------------------------------
.std:0000000140AD764B
.std:0000000140AD764B                         loc_140AD764B:                          ; CODE XREF: sub_140AD7190+34B↑j
.std:0000000140AD764B 49 8B D5                                mov     rdx, r13
.std:0000000140AD764E 41 8B CE                                mov     ecx, r14d
.std:0000000140AD7651 49 8B DD                                mov     rbx, r13
.std:0000000140AD7654
.std:0000000140AD7654                         loc_140AD7654:                          ; CODE XREF: sub_140AD7190+36A↑j
.std:0000000140AD7654 0F B7 02                                movzx   eax, word ptr [rdx]
.std:0000000140AD7657 66 85 C0                                test    ax, ax
.std:0000000140AD765A 0F 84 A0 FE FF FF                       jz      loc_140AD7500
.std:0000000140AD7660
.std:0000000140AD7660                         loc_140AD7660:                          ; CODE XREF: sub_140AD7190+4DF↓j
.std:0000000140AD7660 48 83 C3 02                             add     rbx, 2
.std:0000000140AD7664 0F B7 C0                                movzx   eax, ax
.std:0000000140AD7667 0B C8                                   or      ecx, eax
.std:0000000140AD7669 0F B7 03                                movzx   eax, word ptr [rbx]
.std:0000000140AD766C 66 85 C0                                test    ax, ax
.std:0000000140AD766F 75 EF                                   jnz     short loc_140AD7660
.std:0000000140AD7671 F7 C1 80 FF FF FF                       test    ecx, 0FFFFFF80h
.std:0000000140AD7677 0F 84 83 FE FF FF                       jz      loc_140AD7500
.std:0000000140AD767D 41 B3 01                                mov     r11b, 1
.std:0000000140AD7680 E9 7E FE FF FF                          jmp     loc_140AD7503
.std:0000000140AD7685                         ; ---------------------------------------------------------------------------
.std:0000000140AD7685
.std:0000000140AD7685                         loc_140AD7685:                          ; CODE XREF: sub_140AD7190+3B8↑j
.std:0000000140AD7685                                                                 ; sub_140AD7190+3C1↑j ...
.std:0000000140AD7685 45 8B FE                                mov     r15d, r14d
.std:0000000140AD7688
.std:0000000140AD7688                         loc_140AD7688:                          ; CODE XREF: sub_140AD7190+433↑j
.std:0000000140AD7688 45 84 DB                                test    r11b, r11b
.std:0000000140AD768B 0F 85 3F 02 00 00                       jnz     loc_140AD78D0
.std:0000000140AD7691 B8 00 04 00 00                          mov     eax, 400h
.std:0000000140AD7696 3B D8                                   cmp     ebx, eax
.std:0000000140AD7698 0F 4E C3                                cmovle  eax, ebx
.std:0000000140AD769B 4C 63 C0                                movsxd  r8, eax
.std:0000000140AD769E 85 C0                                   test    eax, eax
.std:0000000140AD76A0 7E 21                                   jle     short loc_140AD76C3
.std:0000000140AD76A2 49 8B CE                                mov     rcx, r14
.std:0000000140AD76A5                                         db      66h, 66h
.std:0000000140AD76A5 66 66 66 0F 1F 84 00 00                 nop     word ptr [rax+rax+00000000h]
.std:0000000140AD76A5 00 00 00
.std:0000000140AD76B0
.std:0000000140AD76B0                         loc_140AD76B0:                          ; CODE XREF: sub_140AD7190+531↓j
.std:0000000140AD76B0 0F B6 04 4A                             movzx   eax, byte ptr [rdx+rcx*2]
.std:0000000140AD76B4 88 84 0D 70 01 00 00                    mov     [rbp+rcx+170h], al
.std:0000000140AD76BB 48 FF C1                                inc     rcx
.std:0000000140AD76BE 49 3B C8                                cmp     rcx, r8
.std:0000000140AD76C1 7C ED                                   jl      short loc_140AD76B0
.std:0000000140AD76C3
.std:0000000140AD76C3                         loc_140AD76C3:                          ; CODE XREF: sub_140AD7190+510↑j
.std:0000000140AD76C3 81 FB 00 04 00 00                       cmp     ebx, 400h
.std:0000000140AD76C9 72 1B                                   jb      short loc_140AD76E6
.std:0000000140AD76CB 41 B8 01 00 00 00                       mov     r8d, 1
.std:0000000140AD76D1 48 8D 15 E0 5A 99 07                    lea     rdx, aErrorNameSizeE ; "ERROR_NAME_SIZE_EXCEEDED"
.std:0000000140AD76D8 48 8D 4D 10                             lea     rcx, [rbp+10h]
.std:0000000140AD76DC E8 CF 8A 11 00                          call    sub_140BF01B0
.std:0000000140AD76E1 E9 E7 FE FF FF                          jmp     loc_140AD75CD
.std:0000000140AD76E6                         ; ---------------------------------------------------------------------------
.std:0000000140AD76E6
.std:0000000140AD76E6                         loc_140AD76E6:                          ; CODE XREF: sub_140AD7190+539↑j
.std:0000000140AD76E6 44 38 35 7B B7 82 09                    cmp     cs:byte_14A302E68, r14b
.std:0000000140AD76ED 74 09                                   jz      short loc_140AD76F8
.std:0000000140AD76EF 48 8D 05 8A D6 A9 09                    lea     rax, unk_14A574D80
.std:0000000140AD76F6 EB 45                                   jmp     short loc_140AD773D
.std:0000000140AD76F8                         ; ---------------------------------------------------------------------------
.std:0000000140AD76F8
.std:0000000140AD76F8                         loc_140AD76F8:                          ; CODE XREF: sub_140AD7190+55D↑j
.std:0000000140AD76F8 48 8D 4D C0                             lea     rcx, [rbp-40h]
.std:0000000140AD76FC FF 15 66 3E 9E 06                       call    cs:qword_1474BB568
.std:0000000140AD7702 0F B6 45 C0                             movzx   eax, byte ptr [rbp-40h]
.std:0000000140AD7706 34 0B                                   xor     al, 0Bh
.std:0000000140AD7708 0F B6 C8                                movzx   ecx, al
.std:0000000140AD770B D0 E9                                   shr     cl, 1
.std:0000000140AD770D 80 E1 08                                and     cl, 8
.std:0000000140AD7710 32 C8                                   xor     cl, al
.std:0000000140AD7712 0F B6 C1                                movzx   eax, cl
.std:0000000140AD7715 24 08                                   and     al, 8
.std:0000000140AD7717 02 C0                                   add     al, al
.std:0000000140AD7719 32 C8                                   xor     cl, al
.std:0000000140AD771B 0F B6 C1                                movzx   eax, cl
.std:0000000140AD771E D0 E8                                   shr     al, 1
.std:0000000140AD7720 24 08                                   and     al, 8
.std:0000000140AD7722 32 C1                                   xor     al, cl
.std:0000000140AD7724 48 8D 0D 55 D6 A9 09                    lea     rcx, unk_14A574D80
.std:0000000140AD772B 88 05 AB 5B A5 09                       mov     cs:byte_14A52D2DC, al
.std:0000000140AD7731 E8 C6 47 8C 00                          call    sub_14139BEFC
.std:0000000140AD7736 C6 05 2B B7 82 09 01                    mov     cs:byte_14A302E68, 1
.std:0000000140AD773D
.std:0000000140AD773D                         loc_140AD773D:                          ; CODE XREF: sub_140AD7190+566↑j
.std:0000000140AD773D 48 89 45 E0                             mov     [rbp-20h], rax
.std:0000000140AD7741 48 8D 95 70 01 00 00                    lea     rdx, [rbp+170h]
.std:0000000140AD7748 48 8D 85 70 01 00 00                    lea     rax, [rbp+170h]
.std:0000000140AD774F 89 5D B8                                mov     [rbp-48h], ebx
.std:0000000140AD7752 48 89 45 B0                             mov     [rbp-50h], rax
.std:0000000140AD7756 48 8D 4D 50                             lea     rcx, [rbp+50h]
.std:0000000140AD775A 0F B7 45 DD                             movzx   eax, word ptr [rbp-23h]
.std:0000000140AD775E 44 8B C3                                mov     r8d, ebx
.std:0000000140AD7761 66 89 45 BD                             mov     [rbp-43h], ax
.std:0000000140AD7765 0F B6 45 DF                             movzx   eax, byte ptr [rbp-21h]
.std:0000000140AD7769 88 45 BF                                mov     [rbp-41h], al
.std:0000000140AD776C 44 88 75 BC                             mov     [rbp-44h], r14b
.std:0000000140AD7770 0F 28 45 B0                             movaps  xmm0, xmmword ptr [rbp-50h]
.std:0000000140AD7774 0F 11 85 F0 00 00 00                    movups  xmmword ptr [rbp+0F0h], xmm0
.std:0000000140AD777B E8 B0 A0 11 00                          call    sub_140BF1830
.std:0000000140AD7780 48 8D 4D 40                             lea     rcx, [rbp+40h]
.std:0000000140AD7784 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:0000000140AD7787 44 88 B5 14 01 00 00                    mov     [rbp+114h], r14b
.std:0000000140AD778E 66 0F 7E C7                             movd    edi, xmm0
.std:0000000140AD7792 0F 11 85 00 01 00 00                    movups  xmmword ptr [rbp+100h], xmm0
.std:0000000140AD7799 48 81 C7 01 04 00 00                    add     rdi, 401h
.std:0000000140AD77A0 48 C1 E7 06                             shl     rdi, 6
.std:0000000140AD77A4 48 03 7D E0                             add     rdi, [rbp-20h]
.std:0000000140AD77A8 48 8B D7                                mov     rdx, rdi
.std:0000000140AD77AB E8 84 D2 8A 03                          call    sub_144384A34
.std:0000000140AD77B0 44 8B 4F 0C                             mov     r9d, [rdi+0Ch]
.std:0000000140AD77B4 8B 9D 04 01 00 00                       mov     ebx, [rbp+104h]
.std:0000000140AD77BA 44 89 4D 90                             mov     [rbp-70h], r9d
.std:0000000140AD77BE
.std:0000000140AD77BE                         loc_140AD77BE:                          ; CODE XREF: sub_140AD7190+698↓j
.std:0000000140AD77BE 48 8B 47 10                             mov     rax, [rdi+10h]
.std:0000000140AD77C2 41 23 D9                                and     ebx, r9d
.std:0000000140AD77C5 48 8D 0C 98                             lea     rcx, [rax+rbx*4]
.std:0000000140AD77C9 8B 04 98                                mov     eax, [rax+rbx*4]
.std:0000000140AD77CC 48 89 4D E0                             mov     [rbp-20h], rcx
.std:0000000140AD77D0 85 C0                                   test    eax, eax
.std:0000000140AD77D2 74 5A                                   jz      short loc_140AD782E
.std:0000000140AD77D4 8B C8                                   mov     ecx, eax
.std:0000000140AD77D6 81 E1 00 00 00 E0                       and     ecx, 0E0000000h
.std:0000000140AD77DC 3B 8D 08 01 00 00                       cmp     ecx, [rbp+108h]
.std:0000000140AD77E2 75 42                                   jnz     short loc_140AD7826
.std:0000000140AD77E4 48 8B 57 18                             mov     rdx, [rdi+18h]
.std:0000000140AD77E8 25 FF FF FF 1F                          and     eax, 1FFFFFFFh
.std:0000000140AD77ED 0F B7 C8                                movzx   ecx, ax
.std:0000000140AD77F0 44 8B C0                                mov     r8d, eax
.std:0000000140AD77F3 03 C9                                   add     ecx, ecx
.std:0000000140AD77F5 0F B7 85 0C 01 00 00                    movzx   eax, word ptr [rbp+10Ch]
.std:0000000140AD77FC 49 C1 E8 10                             shr     r8, 10h
.std:0000000140AD7800 4A 03 4C C2 10                          add     rcx, [rdx+r8*8+10h]
.std:0000000140AD7805 66 39 01                                cmp     [rcx], ax
.std:0000000140AD7808 75 1C                                   jnz     short loc_140AD7826
.std:0000000140AD780A 0F 10 85 F0 00 00 00                    movups  xmm0, xmmword ptr [rbp+0F0h]
.std:0000000140AD7811 48 8D 55 D0                             lea     rdx, [rbp-30h]
.std:0000000140AD7815 0F 29 45 D0                             movaps  xmmword ptr [rbp-30h], xmm0
.std:0000000140AD7819 E8 7E 9E 11 00                          call    sub_140BF169C
.std:0000000140AD781E 84 C0                                   test    al, al
.std:0000000140AD7820 75 08                                   jnz     short loc_140AD782A
.std:0000000140AD7822 44 8B 4D 90                             mov     r9d, [rbp-70h]
.std:0000000140AD7826
.std:0000000140AD7826                         loc_140AD7826:                          ; CODE XREF: sub_140AD7190+652↑j
.std:0000000140AD7826                                                                 ; sub_140AD7190+678↑j
.std:0000000140AD7826 FF C3                                   inc     ebx
.std:0000000140AD7828 EB 94                                   jmp     short loc_140AD77BE

```
