---
Addrress Gname unk_15A4B4840 มี การ ใช้ งาน 3 จุดหลัก  

Address	Function	Instruction
.std:000000014F07B782	sub_14F07B710	lea     rsi, unk_15A4B4840
.std:000000014F080F70	sub_14F080F20	lea     rsi, unk_15A4B4840
.std:000000014F085C49	sub_14F085C10	lea     rsi, unk_15A4B4840


ที่ยังไม่มี ก็ ตัว sub_14F07B710    เริ่มฟังชั้นที่ _QWORD *__fastcall sub_14F07B710(_QWORD *a1, __int64 a2) 

---
ตรวจสอบ โครงสร้าง เพื่อ หา array.max และ Array.Offset 
```asm

//r ขั้นกลางที่ offset  0x28  มี   arg 3 กลุ่มแยก

+0000000000000027                 db ? ; undefined
+0000000000000028  r              db 8 dup(?)
+0000000000000030                 db ? ; undefined 
+0000000000000038 arg_8           dq ?
+0000000000000040 arg_10          dq ?
+0000000000000048 arg_18          dq ?
//info รายการ 
-0x80 ; D/A/*   : change type (data/ascii/array)
-0x80 ; N       : rename
-0x80 ; U       : undefine
-0x80 ; Use data definition commands to create local variables and function arguments.
-0x80 ; Two special fields " r" and " s" represent return address and saved registers.
-0x80 ; Frame size: 80; Saved regs: 28; Purge: 0
 


///full list offset

-0x80 ; D/A/*   : change type (data/ascii/array)
-0x80 ; N       : rename
-0x80 ; U       : undefine
-0x80 ; Use data definition commands to create local variables and function arguments.
-0x80 ; Two special fields " r" and " s" represent return address and saved registers.
-0x80 ; Frame size: 80; Saved regs: 28; Purge: 0
-0x80 ;
-0x80
-0x80                 db ? ; undefined
-0x7F                 db ? ; undefined
-0x7E                 db ? ; undefined
-0x7D                 db ? ; undefined
-0x7C                 db ? ; undefined
-0x7B                 db ? ; undefined
-0x7A                 db ? ; undefined
-0x79                 db ? ; undefined
-0x78                 db ? ; undefined
-0x77                 db ? ; undefined
-0x76                 db ? ; undefined
-0x75                 db ? ; undefined
-0x74                 db ? ; undefined
-0x73                 db ? ; undefined
-0x72                 db ? ; undefined
-0x71                 db ? ; undefined
-0x70                 db ? ; undefined
-0x6F                 db ? ; undefined
-0x6E                 db ? ; undefined
-0x6D                 db ? ; undefined
-0x6C                 db ? ; undefined
-0x6B                 db ? ; undefined
-0x6A                 db ? ; undefined
-0x69                 db ? ; undefined
-0x68                 db ? ; undefined
-0x67                 db ? ; undefined
-0x66                 db ? ; undefined
-0x65                 db ? ; undefined
-0x64                 db ? ; undefined
-0x63                 db ? ; undefined
-0x62                 db ? ; undefined
-0x61                 db ? ; undefined
-0x60 var_60          db 4 dup(?)
-0x5C var_5C          dd ?
-0x58 var_58          db 13 dup(?)
-0x4B var_4B          dw ?
-0x49 var_49          db ?
-0x48 var_48          db 16 dup(?)
-0x38 var_38          dq ?
-0x30 var_30          dd ?
-0x2C var_2C          db ?
-0x2B var_2B          dw ?
-0x29 var_29          db ?
-0x28 var_28          xmmword ?
-0x18                 db ? ; undefined
-0x17                 db ? ; undefined
-0x16                 db ? ; undefined
-0x15                 db ? ; undefined
-0x14 var_14          db ?
-0x13                 db ? ; undefined
-0x12                 db ? ; undefined
-0x11                 db ? ; undefined
-0x10 var_10          dq ?
-0x08                 db ? ; undefined
-0x07                 db ? ; undefined
-0x06                 db ? ; undefined
-0x05                 db ? ; undefined
-0x04                 db ? ; undefined
-0x03                 db ? ; undefined
-0x02                 db ? ; undefined
-0x01                 db ? ; undefined
+0x00 var_s0          db ?
+0x01                 db ? ; undefined
+0x02                 db ? ; undefined
+0x03                 db ? ; undefined
+0x04                 db ? ; undefined
+0x05                 db ? ; undefined
+0x06                 db ? ; undefined
+0x07                 db ? ; undefined
+0x08                 db ? ; undefined
+0x09                 db ? ; undefined
+0x0A                 db ? ; undefined
+0x0B                 db ? ; undefined
+0x0C                 db ? ; undefined
+0x0D                 db ? ; undefined
+0x0E                 db ? ; undefined
+0x0F                 db ? ; undefined
+0x10                 db ? ; undefined
+0x11                 db ? ; undefined
+0x12                 db ? ; undefined
+0x13                 db ? ; undefined
+0x14                 db ? ; undefined
+0x15                 db ? ; undefined
+0x16                 db ? ; undefined
+0x17                 db ? ; undefined
+0x18                 db ? ; undefined
+0x19                 db ? ; undefined
+0x1A                 db ? ; undefined
+0x1B                 db ? ; undefined
+0x1C                 db ? ; undefined
+0x1D                 db ? ; undefined
+0x1E                 db ? ; undefined
+0x1F                 db ? ; undefined
+0x20                 db ? ; undefined
+0x21                 db ? ; undefined
+0x22                 db ? ; undefined
+0x23                 db ? ; undefined
+0x24                 db ? ; undefined
+0x25                 db ? ; undefined
+0x26                 db ? ; undefined
+0x27                 db ? ; undefined
+0x28  r              db 8 dup(?)
+0x30                 db ? ; undefined
+0x31                 db ? ; undefined
+0x32                 db ? ; undefined
+0x33                 db ? ; undefined
+0x34                 db ? ; undefined
+0x35                 db ? ; undefined
+0x36                 db ? ; undefined
+0x37                 db ? ; undefined
+0x38 arg_8           dq ?
+0x40 arg_10          dq ?
+0x48 arg_18          dq ?
+0x50
+0x50 ; end of stack variables






```
---
ดับัคตัว _QWORD *__fastcall sub_14F07B710(_QWORD *a1, __int64 a2) 
 sub_14F07B710  NewLogic {
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
}
 

  
      แล้ว ต่อ ฟังชั้น ที่ สอง
      sub_14F07AB70 NewLogic =  __int64 v11[128]; // [rsp+20h] [rbp-418h] BYREF
      sub_14F07AC60 NewLogic =    char v11[2048]; // [rsp+20h] [rbp-818h] BYREF
   
```c


_QWORD *__fastcall sub_14F07B710(_QWORD *a1, __int64 a2)
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
  if ( byte_15A4B467C )
  {
    v6 = (char *)&unk_15A4B4840;
  }
  else
  {
    v6 = (char *)sub_14F07BC80(&unk_15A4B4840);
    byte_15A4B467C = 1;
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
    v8 = (__m128i *)sub_14F07AC60(v16);
  }
  else
  {
    v7 = (volatile signed __int32 *)(v6 + 0x10020);
    v8 = (__m128i *)sub_14F07AB70(v13);
  }
  v9 = *v8;
  v23 = 0;
  v22 = v9;
  sub_14F084650(&v6[0x40 * _mm_cvtsi128_si32(v9) + 0x10040], &v12, &v17, v11);
  _InterlockedAdd(v7, (unsigned __int8)v11[0]);
  result = a1;
  *a1 = v12;
  return result;
}
 
//DUGNewAddressOFfset __int64 v11[128]; // [rsp+20h] [rbp-418h] BYREF
//GetCoreFun sub_14F07AB70
// Ex   v8 = (__m128i *)sub_14F07AB70(v13);  

__int64 __fastcall sub_14F07AB70(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // edi
  unsigned int v6; // r9d
  __int64 v7; // rdx
  __int64 *v8; // r10
  unsigned __int64 v9; // rax
  __int64 v11[128]; // [rsp+20h] [rbp-418h] BYREF

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
      v8 = (__int64 *)((char *)v8 + 1);
    }
    while ( v6 < a3 );
  }
  v9 = sub_14EF57030(v11, a3);
  if ( a3 == 4 )
    LOBYTE(v3) = (v11[0] & 0xDFDFDFDF) == 0x454E4F4E;
  *(_DWORD *)(a1 + 4) = v9;
  *(_DWORD *)a1 = BYTE4(v9) & 0xF;
  *(_DWORD *)(a1 + 8) = HIDWORD(v9) & 0x80000000 | (v3 << 0x1F);
  *(_WORD *)(a1 + 0xC) = 2 * ((0x20 * a3) | (HIDWORD(v9) >> 4) & 0x1F);
  return a1;
}
//DUGNewAddressOFfset  char v11[2048]; // [rsp+20h] [rbp-818h] BYREF
//GetCoreFun  sub_14F07AC60
// Ex v8 = (__m128i *)sub_14F07AC60(v16);   

__int64 __fastcall sub_14F07AC60(__int64 a1, __int64 a2, unsigned int a3)
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
  v7 = sub_14EF57030(v11, 2 * a3);
  *(_DWORD *)(a1 + 4) = v7;
  v8 = (v4 << 6) | *(_WORD *)(a1 + 0xC) & 0x3E | 1;
  *(_DWORD *)a1 = BYTE4(v7) & 0xF;
  v9 = HIDWORD(v7) >> 4;
  *(_DWORD *)(a1 + 8) = HIDWORD(v7) & 0x80000000;
  result = a1;
  *(_WORD *)(a1 + 0xC) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(2 * v9)) & 0x3E;
  return result;
}


```



---

ฟังชั้นโครงพ่อแม่เช้าหรัส แต่ ก็ยังดีที่มัน เอา ทั้ง 2 ด้านมา ใช้ฟังชั้นเดียว   sub_14EF57030()
unsigned __int64 __fastcall sub_14EF57030(__int64 *a1, unsigned int a2)
ต้องแสกน aob แล้ว อ่าน ReadBlack  ตามขนาดฟังชั้น ไว้ทำ เป็น logloacl ละ 

---

```c



unsigned __int64 __fastcall sub_14EF57030(__int64 *a1, unsigned int a2)
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

```

---
asm vive เพื่อ คิด offset บวก memnoryส่วนหลัก 
---
```asm

.std:000000014F07BC80                         ; __unwind { // sub_152B5621C
.std:000000014F07BC80 48 89 5C 24 10                          mov     [rsp+10h], rbx
.std:000000014F07BC85 48 89 74 24 18                          mov     [rsp+18h], rsi
.std:000000014F07BC8A 48 89 7C 24 20                          mov     [rsp+20h], rdi
.std:000000014F07BC8F 55                                      push    rbp
.std:000000014F07BC90 41 54                                   push    r12
.std:000000014F07BC92 41 55                                   push    r13
.std:000000014F07BC94 41 56                                   push    r14
.std:000000014F07BC96 41 57                                   push    r15
.std:000000014F07BC98 48 8D AC 24 70 FF FF FF                 lea     rbp, [rsp-90h]
.std:000000014F07BCA0 48 81 EC 90 01 00 00                    sub     rsp, 190h
.std:000000014F07BCA7 48 8B 05 92 F3 B0 0A                    mov     rax, cs:__security_cookie
.std:000000014F07BCAE 48 33 C4                                xor     rax, rsp
.std:000000014F07BCB1 48 89 85 88 00 00 00                    mov     [rbp+88h], rax
.std:000000014F07BCB8 48 8B D9                                mov     rbx, rcx
.std:000000014F07BCBB FF 15 5F AE DF 03                       call    cs:qword_152E76B20
.std:000000014F07BCC1 33 D2                                   xor     edx, edx
.std:000000014F07BCC3 48 8D 4B 08                             lea     rcx, [rbx+8]
.std:000000014F07BCC7 41 B8 00 00 01 00                       mov     r8d, 10000h
.std:000000014F07BCCD E8 A7 10 AE 03                          call    sub_152B5CD79
.std:000000014F07BCD2 45 33 E4                                xor     r12d, r12d
.std:000000014F07BCD5 4C 89 A3 08 00 01 00                    mov     [rbx+10008h], r12
.std:000000014F07BCDC 4C 89 A3 10 00 01 00                    mov     [rbx+10010h], r12
.std:000000014F07BCE3 4C 89 A3 18 00 01 00                    mov     [rbx+10018h], r12
.std:000000014F07BCEA E8 51 4D 01 00                          call    sub_14F090A40
.std:000000014F07BCEF B9 00 00 08 00                          mov     ecx, 80000h
.std:000000014F07BCF4 8B 50 10                                mov     edx, [rax+10h]
.std:000000014F07BCF7 E8 94 F6 EE FF                          call    sub_14EF6B390
.std:000000014F07BCFC 48 89 43 08                             mov     [rbx+8], rax
.std:000000014F07BD00 48 8D B3 20 00 01 00                    lea     rsi, [rbx+10020h]
.std:000000014F07BD07 4C 8D B3 24 00 01 00                    lea     r14, [rbx+10024h]
.std:000000014F07BD0E 44 89 26                                mov     [rsi], r12d
.std:000000014F07BD11 4C 8D AB 40 00 01 00                    lea     r13, [rbx+10040h]
.std:000000014F07BD18 45 89 26                                mov     [r14], r12d
.std:000000014F07BD1B 49 8B FD                                mov     rdi, r13
.std:000000014F07BD1E 41 BF 10 00 00 00                       mov     r15d, 10h
.std:000000014F07BD24
.std:000000014F07BD24                         loc_14F07BD24:                          ; CODE XREF: sub_14F07BC80+C1↓j
.std:000000014F07BD24 48 8B CF                                mov     rcx, rdi
.std:000000014F07BD27 FF 15 F3 AD DF 03                       call    cs:qword_152E76B20
.std:000000014F07BD2D 4C 89 67 08                             mov     [rdi+8], r12
.std:000000014F07BD31 4C 89 67 10                             mov     [rdi+10h], r12
.std:000000014F07BD35 4C 89 67 18                             mov     [rdi+18h], r12
.std:000000014F07BD39 48 83 C7 40                             add     rdi, 40h ; '@'
.std:000000014F07BD3D 49 83 EF 01                             sub     r15, 1
.std:000000014F07BD41 75 E1                                   jnz     short loc_14F07BD24
.std:000000014F07BD43 4C 8D BB 40 04 01 00                    lea     r15, [rbx+10440h]
.std:000000014F07BD4A 33 D2                                   xor     edx, edx
.std:000000014F07BD4C 49 8B CF                                mov     rcx, r15
.std:000000014F07BD4F 41 B8 74 09 00 00                       mov     r8d, 974h
.std:000000014F07BD55 E8 1F 10 AE 03                          call    sub_152B5CD79
.std:000000014F07BD5A 4C 89 A3 B8 2D 01 00                    mov     [rbx+12DB8h], r12
.std:000000014F07BD61 48 8D BB 40 00 01 00                    lea     rdi, [rbx+10040h]
.std:000000014F07BD68 4C 89 A3 C0 2D 01 00                    mov     [rbx+12DC0h], r12
.std:000000014F07BD6F 33 C0                                   xor     eax, eax
.std:000000014F07BD71 4C 89 A3 08 2E 01 00                    mov     [rbx+12E08h], r12
.std:000000014F07BD78 49 81 C5 00 04 00 00                    add     r13, 400h
.std:000000014F07BD7F 4C 89 A3 10 2E 01 00                    mov     [rbx+12E10h], r12
.std:000000014F07BD86 41 BC FF FF FF FF                       mov     r12d, 0FFFFFFFFh
.std:000000014F07BD8C 44 89 A3 18 2E 01 00                    mov     [rbx+12E18h], r12d
.std:000000014F07BD93 89 83 1C 2E 01 00                       mov     [rbx+12E1Ch], eax
.std:000000014F07BD99 48 89 83 20 32 01 00                    mov     [rbx+13220h], rax
.std:000000014F07BDA0 89 83 28 32 01 00                       mov     [rbx+13228h], eax
.std:000000014F07BDA6 49 3B FD                                cmp     rdi, r13
.std:000000014F07BDA9 74 3F                                   jz      short loc_14F07BDEA
.std:000000014F07BDAB 48 83 C7 10                             add     rdi, 10h
.std:000000014F07BDAF 90                                      nop
.std:000000014F07BDB0
.std:000000014F07BDB0                         loc_14F07BDB0:                          ; CODE XREF: sub_14F07BC80+168↓j
.std:000000014F07BDB0 BA 04 00 00 00                          mov     edx, 4
.std:000000014F07BDB5 48 89 5F 08                             mov     [rdi+8], rbx
.std:000000014F07BDB9 B9 00 04 00 00                          mov     ecx, 400h
.std:000000014F07BDBE E8 CD F5 EE FF                          call    sub_14EF6B390
.std:000000014F07BDC3 33 D2                                   xor     edx, edx
.std:000000014F07BDC5 48 89 07                                mov     [rdi], rax
.std:000000014F07BDC8 41 B8 00 04 00 00                       mov     r8d, 400h
.std:000000014F07BDCE 48 8B C8                                mov     rcx, rax
.std:000000014F07BDD1 E8 A3 0F AE 03                          call    sub_152B5CD79
.std:000000014F07BDD6 C7 47 FC FF 00 00 00                    mov     dword ptr [rdi-4], 0FFh
.std:000000014F07BDDD 48 8D 7F 40                             lea     rdi, [rdi+40h]
.std:000000014F07BDE1 48 8D 47 F0                             lea     rax, [rdi-10h]
.std:000000014F07BDE5 49 3B C5                                cmp     rax, r13
.std:000000014F07BDE8 75 C6                                   jnz     short loc_14F07BDB0
.std:000000014F07BDEA
.std:000000014F07BDEA                         loc_14F07BDEA:                          ; CODE XREF: sub_14F07BC80+129↑j
.std:000000014F07BDEA 48 8D 15 EF 80 1B 04                    lea     rdx, aNone_0    ; "None"
.std:000000014F07BDF1 C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07BDF9 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07BDFE 41 B8 04 00 00 00                       mov     r8d, 4
.std:000000014F07BE04 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07BE09 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07BE0D 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07BE10 84 C0                                   test    al, al
.std:000000014F07BE12 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07BE17 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07BE1B 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07BE20 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07BE23 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07BE28 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07BE2D 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07BE31 C7 45 68 04 00 00 00                    mov     [rbp+0B0h+var_48], 4
.std:000000014F07BE38 75 0F                                   jnz     short loc_14F07BE49
.std:000000014F07BE3A 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07BE3F 48 8B FE                                mov     rdi, rsi
.std:000000014F07BE42 E8 29 ED FF FF                          call    sub_14F07AB70
.std:000000014F07BE47 EB 0D                                   jmp     short loc_14F07BE56
.std:000000014F07BE49                         ; ---------------------------------------------------------------------------
.std:000000014F07BE49
.std:000000014F07BE49                         loc_14F07BE49:                          ; CODE XREF: sub_14F07BC80+1B8↑j
.std:000000014F07BE49 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07BE4E 49 8B FE                                mov     rdi, r14
.std:000000014F07BE51 E8 0A EE FF FF                          call    sub_14F07AC60
.std:000000014F07BE56
.std:000000014F07BE56                         loc_14F07BE56:                          ; CODE XREF: sub_14F07BC80+1C7↑j
.std:000000014F07BE56 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07BE59 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07BE5E C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07BE65 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07BE69 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07BE6D 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07BE72 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07BE76 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07BE7D 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07BE81 48 03 CB                                add     rcx, rbx
.std:000000014F07BE84 E8 C7 87 00 00                          call    sub_14F084650
.std:000000014F07BE89 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07BE8E F0 01 07                                lock add [rdi], eax
.std:000000014F07BE91 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07BE95 48 8D 15 30 1E 23 08                    lea     rdx, unk_1572ADCCC
.std:000000014F07BE9C 41 89 07                                mov     [r15], eax
.std:000000014F07BE9F 41 B8 04 00 00 00                       mov     r8d, 4
.std:000000014F07BEA5 C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07BEAD C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07BEB2 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07BEB7 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07BEBB 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07BEBE 84 C0                                   test    al, al
.std:000000014F07BEC0 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07BEC5 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07BEC9 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07BECE 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07BED1 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07BED6 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07BEDB 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07BEDF C7 45 68 04 00 00 00                    mov     [rbp+0B0h+var_48], 4
.std:000000014F07BEE6 75 0F                                   jnz     short loc_14F07BEF7
.std:000000014F07BEE8 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07BEED 48 8B FE                                mov     rdi, rsi
.std:000000014F07BEF0 E8 7B EC FF FF                          call    sub_14F07AB70
.std:000000014F07BEF5 EB 0D                                   jmp     short loc_14F07BF04
.std:000000014F07BEF7                         ; ---------------------------------------------------------------------------
.std:000000014F07BEF7
.std:000000014F07BEF7                         loc_14F07BEF7:                          ; CODE XREF: sub_14F07BC80+266↑j
.std:000000014F07BEF7 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07BEFC 49 8B FE                                mov     rdi, r14
.std:000000014F07BEFF E8 5C ED FF FF                          call    sub_14F07AC60
.std:000000014F07BF04
.std:000000014F07BF04                         loc_14F07BF04:                          ; CODE XREF: sub_14F07BC80+275↑j
.std:000000014F07BF04 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07BF07 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07BF0C C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07BF13 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07BF17 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07BF1B 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07BF20 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07BF24 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07BF2B 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07BF2F 48 03 CB                                add     rcx, rbx
.std:000000014F07BF32 E8 19 87 00 00                          call    sub_14F084650
.std:000000014F07BF37 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07BF3C F0 01 07                                lock add [rdi], eax
.std:000000014F07BF3F 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07BF43 48 8D 15 8A 1D 23 08                    lea     rdx, unk_1572ADCD4
.std:000000014F07BF4A 89 83 60 05 01 00                       mov     [rbx+10560h], eax
.std:000000014F07BF50 41 B8 04 00 00 00                       mov     r8d, 4
.std:000000014F07BF56 C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07BF5E C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07BF63 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07BF68 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07BF6C 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07BF6F 84 C0                                   test    al, al
.std:000000014F07BF71 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07BF76 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07BF7A 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07BF7F 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07BF82 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07BF87 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07BF8C 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07BF90 C7 45 68 04 00 00 00                    mov     [rbp+0B0h+var_48], 4
.std:000000014F07BF97 75 0F                                   jnz     short loc_14F07BFA8
.std:000000014F07BF99 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07BF9E 48 8B FE                                mov     rdi, rsi
.std:000000014F07BFA1 E8 CA EB FF FF                          call    sub_14F07AB70
.std:000000014F07BFA6 EB 0D                                   jmp     short loc_14F07BFB5
.std:000000014F07BFA8                         ; ---------------------------------------------------------------------------
.std:000000014F07BFA8
.std:000000014F07BFA8                         loc_14F07BFA8:                          ; CODE XREF: sub_14F07BC80+317↑j
.std:000000014F07BFA8 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07BFAD 49 8B FE                                mov     rdi, r14
.std:000000014F07BFB0 E8 AB EC FF FF                          call    sub_14F07AC60
.std:000000014F07BFB5
.std:000000014F07BFB5                         loc_14F07BFB5:                          ; CODE XREF: sub_14F07BC80+326↑j
.std:000000014F07BFB5 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07BFB8 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07BFBD C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07BFC4 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07BFC8 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07BFCC 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07BFD1 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07BFD5 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07BFDC 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07BFE0 48 03 CB                                add     rcx, rbx
.std:000000014F07BFE3 E8 68 86 00 00                          call    sub_14F084650
.std:000000014F07BFE8 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07BFED F0 01 07                                lock add [rdi], eax
.std:000000014F07BFF0 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07BFF4 48 8D 15 E5 1C 23 08                    lea     rdx, unk_1572ADCE0
.std:000000014F07BFFB 89 83 64 05 01 00                       mov     [rbx+10564h], eax
.std:000000014F07C001 41 B8 10 00 00 00                       mov     r8d, 10h
.std:000000014F07C007 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07C00F C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C014 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C019 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C01D 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C020 84 C0                                   test    al, al
.std:000000014F07C022 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C027 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C02B 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C030 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C033 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C038 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C03D 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C041 C7 45 68 10 00 00 00                    mov     [rbp+0B0h+var_48], 10h
.std:000000014F07C048 75 0F                                   jnz     short loc_14F07C059
.std:000000014F07C04A 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C04F 48 8B FE                                mov     rdi, rsi
.std:000000014F07C052 E8 19 EB FF FF                          call    sub_14F07AB70
.std:000000014F07C057 EB 0D                                   jmp     short loc_14F07C066
.std:000000014F07C059                         ; ---------------------------------------------------------------------------
.std:000000014F07C059
.std:000000014F07C059                         loc_14F07C059:                          ; CODE XREF: sub_14F07BC80+3C8↑j
.std:000000014F07C059 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C05E 49 8B FE                                mov     rdi, r14
.std:000000014F07C061 E8 FA EB FF FF                          call    sub_14F07AC60
.std:000000014F07C066
.std:000000014F07C066                         loc_14F07C066:                          ; CODE XREF: sub_14F07BC80+3D7↑j
.std:000000014F07C066 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C069 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C06E C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C075 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C079 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C07D 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C082 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C086 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C08D 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C091 48 03 CB                                add     rcx, rbx
.std:000000014F07C094 E8 B7 85 00 00                          call    sub_14F084650
.std:000000014F07C099 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C09E F0 01 07                                lock add [rdi], eax
.std:000000014F07C0A1 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C0A5 48 8D 15 4C 1C 23 08                    lea     rdx, unk_1572ADCF8
.std:000000014F07C0AC 89 83 48 04 01 00                       mov     [rbx+10448h], eax
.std:000000014F07C0B2 41 B8 08 00 00 00                       mov     r8d, 8
.std:000000014F07C0B8 C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07C0C0 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C0C5 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C0CA 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C0CE 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C0D1 84 C0                                   test    al, al
.std:000000014F07C0D3 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C0D8 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C0DC 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C0E1 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C0E4 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C0E9 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C0EE 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C0F2 C7 45 68 08 00 00 00                    mov     [rbp+0B0h+var_48], 8
.std:000000014F07C0F9 75 0F                                   jnz     short loc_14F07C10A
.std:000000014F07C0FB 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C100 48 8B FE                                mov     rdi, rsi
.std:000000014F07C103 E8 68 EA FF FF                          call    sub_14F07AB70
.std:000000014F07C108 EB 0D                                   jmp     short loc_14F07C117
.std:000000014F07C10A                         ; ---------------------------------------------------------------------------
.std:000000014F07C10A
.std:000000014F07C10A                         loc_14F07C10A:                          ; CODE XREF: sub_14F07BC80+479↑j
.std:000000014F07C10A 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C10F 49 8B FE                                mov     rdi, r14
.std:000000014F07C112 E8 49 EB FF FF                          call    sub_14F07AC60
.std:000000014F07C117
.std:000000014F07C117                         loc_14F07C117:                          ; CODE XREF: sub_14F07BC80+488↑j
.std:000000014F07C117 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C11A 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C11F C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C126 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C12A 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C12E 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C133 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C137 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C13E 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C142 48 03 CB                                add     rcx, rbx
.std:000000014F07C145 E8 06 85 00 00                          call    sub_14F084650
.std:000000014F07C14A 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C14F F0 01 07                                lock add [rdi], eax
.std:000000014F07C152 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C156 48 8D 15 AB 1B 23 08                    lea     rdx, unk_1572ADD08
.std:000000014F07C15D 89 83 34 05 01 00                       mov     [rbx+10534h], eax
.std:000000014F07C163 41 B8 10 00 00 00                       mov     r8d, 10h
.std:000000014F07C169 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07C171 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C176 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C17B 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C17F 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C182 84 C0                                   test    al, al
.std:000000014F07C184 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C189 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C18D 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C192 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C195 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C19A C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C19F 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C1A3 C7 45 68 10 00 00 00                    mov     [rbp+0B0h+var_48], 10h
.std:000000014F07C1AA 75 0F                                   jnz     short loc_14F07C1BB
.std:000000014F07C1AC 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C1B1 48 8B FE                                mov     rdi, rsi
.std:000000014F07C1B4 E8 B7 E9 FF FF                          call    sub_14F07AB70
.std:000000014F07C1B9 EB 0D                                   jmp     short loc_14F07C1C8
.std:000000014F07C1BB                         ; ---------------------------------------------------------------------------
.std:000000014F07C1BB
.std:000000014F07C1BB                         loc_14F07C1BB:                          ; CODE XREF: sub_14F07BC80+52A↑j
.std:000000014F07C1BB 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C1C0 49 8B FE                                mov     rdi, r14
.std:000000014F07C1C3 E8 98 EA FF FF                          call    sub_14F07AC60
.std:000000014F07C1C8
.std:000000014F07C1C8                         loc_14F07C1C8:                          ; CODE XREF: sub_14F07BC80+539↑j
.std:000000014F07C1C8 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C1CB 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C1D0 C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C1D7 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C1DB 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C1DF 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C1E4 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C1E8 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C1EF 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C1F3 48 03 CB                                add     rcx, rbx
.std:000000014F07C1F6 E8 55 84 00 00                          call    sub_14F084650
.std:000000014F07C1FB 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C200 F0 01 07                                lock add [rdi], eax
.std:000000014F07C203 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C207 48 8D 15 82 0C 14 04                    lea     rdx, aColor_0   ; "Color"
.std:000000014F07C20E 89 83 50 04 01 00                       mov     [rbx+10450h], eax
.std:000000014F07C214 41 B8 05 00 00 00                       mov     r8d, 5
.std:000000014F07C21A C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07C222 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C227 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C22C 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C230 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C233 84 C0                                   test    al, al
.std:000000014F07C235 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C23A 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C23E 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C243 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C246 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C24B C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C250 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C254 C7 45 68 05 00 00 00                    mov     [rbp+0B0h+var_48], 5
.std:000000014F07C25B 75 0F                                   jnz     short loc_14F07C26C
.std:000000014F07C25D 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C262 48 8B FE                                mov     rdi, rsi
.std:000000014F07C265 E8 06 E9 FF FF                          call    sub_14F07AB70
.std:000000014F07C26A EB 0D                                   jmp     short loc_14F07C279
.std:000000014F07C26C                         ; ---------------------------------------------------------------------------
.std:000000014F07C26C
.std:000000014F07C26C                         loc_14F07C26C:                          ; CODE XREF: sub_14F07BC80+5DB↑j
.std:000000014F07C26C 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C271 49 8B FE                                mov     rdi, r14
.std:000000014F07C274 E8 E7 E9 FF FF                          call    sub_14F07AC60
.std:000000014F07C279
.std:000000014F07C279                         loc_14F07C279:                          ; CODE XREF: sub_14F07BC80+5EA↑j
.std:000000014F07C279 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C27C 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C281 C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C288 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C28C 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C290 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C295 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C299 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C2A0 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C2A4 48 03 CB                                add     rcx, rbx
.std:000000014F07C2A7 E8 A4 83 00 00                          call    sub_14F084650
.std:000000014F07C2AC 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C2B1 F0 01 07                                lock add [rdi], eax
.std:000000014F07C2B4 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C2B8 48 8D 15 61 1A 23 08                    lea     rdx, unk_1572ADD20
.std:000000014F07C2BF 89 83 38 05 01 00                       mov     [rbx+10538h], eax
.std:000000014F07C2C5 41 B8 10 00 00 00                       mov     r8d, 10h
.std:000000014F07C2CB C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07C2D3 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C2D8 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C2DD 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C2E1 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C2E4 84 C0                                   test    al, al
.std:000000014F07C2E6 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C2EB 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C2EF 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C2F4 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C2F7 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C2FC C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C301 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C305 C7 45 68 10 00 00 00                    mov     [rbp+0B0h+var_48], 10h
.std:000000014F07C30C 75 0F                                   jnz     short loc_14F07C31D
.std:000000014F07C30E 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C313 48 8B FE                                mov     rdi, rsi
.std:000000014F07C316 E8 55 E8 FF FF                          call    sub_14F07AB70
.std:000000014F07C31B EB 0D                                   jmp     short loc_14F07C32A
.std:000000014F07C31D                         ; ---------------------------------------------------------------------------
.std:000000014F07C31D
.std:000000014F07C31D                         loc_14F07C31D:                          ; CODE XREF: sub_14F07BC80+68C↑j
.std:000000014F07C31D 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C322 49 8B FE                                mov     rdi, r14
.std:000000014F07C325 E8 36 E9 FF FF                          call    sub_14F07AC60
.std:000000014F07C32A
.std:000000014F07C32A                         loc_14F07C32A:                          ; CODE XREF: sub_14F07BC80+69B↑j
.std:000000014F07C32A 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C32D 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C332 C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C339 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C33D 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C341 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C346 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C34A 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C351 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C355 48 03 CB                                add     rcx, rbx
.std:000000014F07C358 E8 F3 82 00 00                          call    sub_14F084650
.std:000000014F07C35D 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C362 F0 01 07                                lock add [rdi], eax
.std:000000014F07C365 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C369 48 8D 15 D0 C8 1C 08                    lea     rdx, aPlane_1   ; "Plane"
.std:000000014F07C370 89 83 7C 04 01 00                       mov     [rbx+1047Ch], eax
.std:000000014F07C376 41 B8 05 00 00 00                       mov     r8d, 5
.std:000000014F07C37C C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07C384 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C389 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C38E 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C392 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C395 84 C0                                   test    al, al
.std:000000014F07C397 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C39C 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C3A0 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C3A5 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C3A8 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C3AD C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C3B2 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C3B6 C7 45 68 05 00 00 00                    mov     [rbp+0B0h+var_48], 5
.std:000000014F07C3BD 75 0F                                   jnz     short loc_14F07C3CE
.std:000000014F07C3BF 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C3C4 48 8B FE                                mov     rdi, rsi
.std:000000014F07C3C7 E8 A4 E7 FF FF                          call    sub_14F07AB70
.std:000000014F07C3CC EB 0D                                   jmp     short loc_14F07C3DB
.std:000000014F07C3CE                         ; ---------------------------------------------------------------------------
.std:000000014F07C3CE
.std:000000014F07C3CE                         loc_14F07C3CE:                          ; CODE XREF: sub_14F07BC80+73D↑j
.std:000000014F07C3CE 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C3D3 49 8B FE                                mov     rdi, r14
.std:000000014F07C3D6 E8 85 E8 FF FF                          call    sub_14F07AC60
.std:000000014F07C3DB
.std:000000014F07C3DB                         loc_14F07C3DB:                          ; CODE XREF: sub_14F07BC80+74C↑j
.std:000000014F07C3DB 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C3DE 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C3E3 C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C3EA 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C3EE 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C3F2 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C3F7 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C3FB 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C402 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C406 48 03 CB                                add     rcx, rbx
.std:000000014F07C409 E8 42 82 00 00                          call    sub_14F084650
.std:000000014F07C40E 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C413 F0 01 07                                lock add [rdi], eax
.std:000000014F07C416 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C41A 48 8D 15 17 19 23 08                    lea     rdx, unk_1572ADD38
.std:000000014F07C421 89 83 3C 05 01 00                       mov     [rbx+1053Ch], eax
.std:000000014F07C427 41 B8 10 00 00 00                       mov     r8d, 10h
.std:000000014F07C42D C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07C435 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C43A 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C43F 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C443 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C446 84 C0                                   test    al, al
.std:000000014F07C448 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C44D 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C451 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C456 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C459 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C45E C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C463 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C467 C7 45 68 10 00 00 00                    mov     [rbp+0B0h+var_48], 10h
.std:000000014F07C46E 75 0F                                   jnz     short loc_14F07C47F
.std:000000014F07C470 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C475 48 8B FE                                mov     rdi, rsi
.std:000000014F07C478 E8 F3 E6 FF FF                          call    sub_14F07AB70
.std:000000014F07C47D EB 0D                                   jmp     short loc_14F07C48C
.std:000000014F07C47F                         ; ---------------------------------------------------------------------------
.std:000000014F07C47F
.std:000000014F07C47F                         loc_14F07C47F:                          ; CODE XREF: sub_14F07BC80+7EE↑j
.std:000000014F07C47F 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C484 49 8B FE                                mov     rdi, r14
.std:000000014F07C487 E8 D4 E7 FF FF                          call    sub_14F07AC60
.std:000000014F07C48C
.std:000000014F07C48C                         loc_14F07C48C:                          ; CODE XREF: sub_14F07BC80+7FD↑j
.std:000000014F07C48C 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C48F 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C494 C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C49B 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C49F 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C4A3 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C4A8 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C4AC 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C4B3 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C4B7 48 03 CB                                add     rcx, rbx
.std:000000014F07C4BA E8 91 81 00 00                          call    sub_14F084650
.std:000000014F07C4BF 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C4C4 F0 01 07                                lock add [rdi], eax
.std:000000014F07C4C7 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C4CB 48 8D 15 7A 18 23 08                    lea     rdx, unk_1572ADD4C
.std:000000014F07C4D2 89 83 E0 04 01 00                       mov     [rbx+104E0h], eax
.std:000000014F07C4D8 41 B8 06 00 00 00                       mov     r8d, 6
.std:000000014F07C4DE C7 44 24 28 06 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 6
.std:000000014F07C4E6 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C4EB 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C4F0 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C4F4 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C4F7 84 C0                                   test    al, al
.std:000000014F07C4F9 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C4FE 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C502 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C507 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C50A 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C50F C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C514 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C518 C7 45 68 06 00 00 00                    mov     [rbp+0B0h+var_48], 6
.std:000000014F07C51F 75 0F                                   jnz     short loc_14F07C530
.std:000000014F07C521 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C526 48 8B FE                                mov     rdi, rsi
.std:000000014F07C529 E8 42 E6 FF FF                          call    sub_14F07AB70
.std:000000014F07C52E EB 0D                                   jmp     short loc_14F07C53D
.std:000000014F07C530                         ; ---------------------------------------------------------------------------
.std:000000014F07C530
.std:000000014F07C530                         loc_14F07C530:                          ; CODE XREF: sub_14F07BC80+89F↑j
.std:000000014F07C530 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C535 49 8B FE                                mov     rdi, r14
.std:000000014F07C538 E8 23 E7 FF FF                          call    sub_14F07AC60
.std:000000014F07C53D
.std:000000014F07C53D                         loc_14F07C53D:                          ; CODE XREF: sub_14F07BC80+8AE↑j
.std:000000014F07C53D 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C540 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C545 C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C54C 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C550 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C554 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C559 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C55D 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C564 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C568 48 03 CB                                add     rcx, rbx
.std:000000014F07C56B E8 E0 80 00 00                          call    sub_14F084650
.std:000000014F07C570 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C575 F0 01 07                                lock add [rdi], eax
.std:000000014F07C578 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C57C 48 8D 15 D5 17 23 08                    lea     rdx, unk_1572ADD58
.std:000000014F07C583 89 83 40 05 01 00                       mov     [rbx+10540h], eax
.std:000000014F07C589 41 B8 10 00 00 00                       mov     r8d, 10h
.std:000000014F07C58F C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07C597 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C59C 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C5A1 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C5A5 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C5A8 84 C0                                   test    al, al
.std:000000014F07C5AA 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C5AF 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C5B3 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C5B8 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C5BB 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C5C0 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C5C5 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C5C9 C7 45 68 10 00 00 00                    mov     [rbp+0B0h+var_48], 10h
.std:000000014F07C5D0 75 0F                                   jnz     short loc_14F07C5E1
.std:000000014F07C5D2 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C5D7 48 8B FE                                mov     rdi, rsi
.std:000000014F07C5DA E8 91 E5 FF FF                          call    sub_14F07AB70
.std:000000014F07C5DF EB 0D                                   jmp     short loc_14F07C5EE
.std:000000014F07C5E1                         ; ---------------------------------------------------------------------------
.std:000000014F07C5E1
.std:000000014F07C5E1                         loc_14F07C5E1:                          ; CODE XREF: sub_14F07BC80+950↑j
.std:000000014F07C5E1 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C5E6 49 8B FE                                mov     rdi, r14
.std:000000014F07C5E9 E8 72 E6 FF FF                          call    sub_14F07AC60
.std:000000014F07C5EE
.std:000000014F07C5EE                         loc_14F07C5EE:                          ; CODE XREF: sub_14F07BC80+95F↑j
.std:000000014F07C5EE 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C5F1 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C5F6 C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C5FD 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C601 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C605 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C60A 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C60E 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C615 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C619 48 03 CB                                add     rcx, rbx
.std:000000014F07C61C E8 2F 80 00 00                          call    sub_14F084650
.std:000000014F07C621 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C626 F0 01 07                                lock add [rdi], eax
.std:000000014F07C629 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C62D 48 8D 15 F8 D7 C7 06                    lea     rdx, unk_155CF9E2C
.std:000000014F07C634 89 83 E4 04 01 00                       mov     [rbx+104E4h], eax
.std:000000014F07C63A 41 B8 06 00 00 00                       mov     r8d, 6
.std:000000014F07C640 C7 44 24 28 06 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 6
.std:000000014F07C648 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C64D 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C652 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C656 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C659 84 C0                                   test    al, al
.std:000000014F07C65B 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C660 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C664 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C669 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C66C 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C671 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C676 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C67A C7 45 68 06 00 00 00                    mov     [rbp+0B0h+var_48], 6
.std:000000014F07C681 75 0F                                   jnz     short loc_14F07C692
.std:000000014F07C683 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C688 48 8B FE                                mov     rdi, rsi
.std:000000014F07C68B E8 E0 E4 FF FF                          call    sub_14F07AB70
.std:000000014F07C690 EB 0D                                   jmp     short loc_14F07C69F
.std:000000014F07C692                         ; ---------------------------------------------------------------------------
.std:000000014F07C692
.std:000000014F07C692                         loc_14F07C692:                          ; CODE XREF: sub_14F07BC80+A01↑j
.std:000000014F07C692 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C697 49 8B FE                                mov     rdi, r14
.std:000000014F07C69A E8 C1 E5 FF FF                          call    sub_14F07AC60
.std:000000014F07C69F
.std:000000014F07C69F                         loc_14F07C69F:                          ; CODE XREF: sub_14F07BC80+A10↑j
.std:000000014F07C69F 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C6A2 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C6A7 C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C6AE 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C6B2 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C6B6 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C6BB 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C6BF 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C6C6 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C6CA 48 03 CB                                add     rcx, rbx
.std:000000014F07C6CD E8 7E 7F 00 00                          call    sub_14F084650
.std:000000014F07C6D2 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C6D7 F0 01 07                                lock add [rdi], eax
.std:000000014F07C6DA 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C6DE 48 8D 15 8B 16 23 08                    lea     rdx, unk_1572ADD70
.std:000000014F07C6E5 89 83 10 05 01 00                       mov     [rbx+10510h], eax
.std:000000014F07C6EB 41 B8 10 00 00 00                       mov     r8d, 10h
.std:000000014F07C6F1 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07C6F9 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C6FE 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C703 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C707 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C70A 84 C0                                   test    al, al
.std:000000014F07C70C 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C711 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C715 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C71A 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C71D 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C722 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C727 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C72B C7 45 68 10 00 00 00                    mov     [rbp+0B0h+var_48], 10h
.std:000000014F07C732 75 0F                                   jnz     short loc_14F07C743
.std:000000014F07C734 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C739 48 8B FE                                mov     rdi, rsi
.std:000000014F07C73C E8 2F E4 FF FF                          call    sub_14F07AB70
.std:000000014F07C741 EB 0D                                   jmp     short loc_14F07C750
.std:000000014F07C743                         ; ---------------------------------------------------------------------------
.std:000000014F07C743
.std:000000014F07C743                         loc_14F07C743:                          ; CODE XREF: sub_14F07BC80+AB2↑j
.std:000000014F07C743 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C748 49 8B FE                                mov     rdi, r14
.std:000000014F07C74B E8 10 E5 FF FF                          call    sub_14F07AC60
.std:000000014F07C750
.std:000000014F07C750                         loc_14F07C750:                          ; CODE XREF: sub_14F07BC80+AC1↑j
.std:000000014F07C750 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C753 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C758 C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C75F 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C763 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C767 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C76C 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C770 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C777 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C77B 48 03 CB                                add     rcx, rbx
.std:000000014F07C77E E8 CD 7E 00 00                          call    sub_14F084650
.std:000000014F07C783 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C788 F0 01 07                                lock add [rdi], eax
.std:000000014F07C78B 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C78F 48 8D 15 72 4E 0E 04                    lea     rdx, dword_153161608
.std:000000014F07C796 89 83 E8 04 01 00                       mov     [rbx+104E8h], eax
.std:000000014F07C79C 41 B8 03 00 00 00                       mov     r8d, 3
.std:000000014F07C7A2 C7 44 24 28 03 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 3
.std:000000014F07C7AA C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C7AF 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C7B4 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C7B8 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C7BB 84 C0                                   test    al, al
.std:000000014F07C7BD 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C7C2 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C7C6 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C7CB 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C7CE 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C7D3 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C7D8 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C7DC C7 45 68 03 00 00 00                    mov     [rbp+0B0h+var_48], 3
.std:000000014F07C7E3 75 0F                                   jnz     short loc_14F07C7F4
.std:000000014F07C7E5 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C7EA 48 8B FE                                mov     rdi, rsi
.std:000000014F07C7ED E8 7E E3 FF FF                          call    sub_14F07AB70
.std:000000014F07C7F2 EB 0D                                   jmp     short loc_14F07C801
.std:000000014F07C7F4                         ; ---------------------------------------------------------------------------
.std:000000014F07C7F4
.std:000000014F07C7F4                         loc_14F07C7F4:                          ; CODE XREF: sub_14F07BC80+B63↑j
.std:000000014F07C7F4 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C7F9 49 8B FE                                mov     rdi, r14
.std:000000014F07C7FC E8 5F E4 FF FF                          call    sub_14F07AC60
.std:000000014F07C801
.std:000000014F07C801                         loc_14F07C801:                          ; CODE XREF: sub_14F07BC80+B72↑j
.std:000000014F07C801 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C804 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C809 C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C810 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C814 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C818 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C81D 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C821 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C828 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C82C 48 03 CB                                add     rcx, rbx
.std:000000014F07C82F E8 1C 7E 00 00                          call    sub_14F084650
.std:000000014F07C834 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C839 F0 01 07                                lock add [rdi], eax
.std:000000014F07C83C 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C840 48 8D 15 41 15 23 08                    lea     rdx, unk_1572ADD88
.std:000000014F07C847 89 83 14 05 01 00                       mov     [rbx+10514h], eax
.std:000000014F07C84D 41 B8 10 00 00 00                       mov     r8d, 10h
.std:000000014F07C853 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07C85B C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C860 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C865 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C869 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C86C 84 C0                                   test    al, al
.std:000000014F07C86E 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C873 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C877 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C87C 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C87F 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C884 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C889 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C88D C7 45 68 10 00 00 00                    mov     [rbp+0B0h+var_48], 10h
.std:000000014F07C894 75 0F                                   jnz     short loc_14F07C8A5
.std:000000014F07C896 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C89B 48 8B FE                                mov     rdi, rsi
.std:000000014F07C89E E8 CD E2 FF FF                          call    sub_14F07AB70
.std:000000014F07C8A3 EB 0D                                   jmp     short loc_14F07C8B2
.std:000000014F07C8A5                         ; ---------------------------------------------------------------------------
.std:000000014F07C8A5
.std:000000014F07C8A5                         loc_14F07C8A5:                          ; CODE XREF: sub_14F07BC80+C14↑j
.std:000000014F07C8A5 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C8AA 49 8B FE                                mov     rdi, r14
.std:000000014F07C8AD E8 AE E3 FF FF                          call    sub_14F07AC60
.std:000000014F07C8B2
.std:000000014F07C8B2                         loc_14F07C8B2:                          ; CODE XREF: sub_14F07BC80+C23↑j
.std:000000014F07C8B2 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C8B5 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C8BA C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C8C1 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C8C5 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C8C9 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C8CE 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C8D2 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C8D9 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C8DD 48 03 CB                                add     rcx, rbx
.std:000000014F07C8E0 E8 6B 7D 00 00                          call    sub_14F084650
.std:000000014F07C8E5 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C8EA F0 01 07                                lock add [rdi], eax
.std:000000014F07C8ED 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C8F1 48 8D 15 D0 DF 0E 04                    lea     rdx, aVector2d  ; "Vector2D"
.std:000000014F07C8F8 89 83 EC 04 01 00                       mov     [rbx+104ECh], eax
.std:000000014F07C8FE 41 B8 08 00 00 00                       mov     r8d, 8
.std:000000014F07C904 C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07C90C C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C911 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C916 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C91A 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C91D 84 C0                                   test    al, al
.std:000000014F07C91F 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C924 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C928 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C92D 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C930 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C935 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C93A 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C93E C7 45 68 08 00 00 00                    mov     [rbp+0B0h+var_48], 8
.std:000000014F07C945 75 0F                                   jnz     short loc_14F07C956
.std:000000014F07C947 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C94C 48 8B FE                                mov     rdi, rsi
.std:000000014F07C94F E8 1C E2 FF FF                          call    sub_14F07AB70
.std:000000014F07C954 EB 0D                                   jmp     short loc_14F07C963
.std:000000014F07C956                         ; ---------------------------------------------------------------------------
.std:000000014F07C956
.std:000000014F07C956                         loc_14F07C956:                          ; CODE XREF: sub_14F07BC80+CC5↑j
.std:000000014F07C956 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07C95B 49 8B FE                                mov     rdi, r14
.std:000000014F07C95E E8 FD E2 FF FF                          call    sub_14F07AC60
.std:000000014F07C963
.std:000000014F07C963                         loc_14F07C963:                          ; CODE XREF: sub_14F07BC80+CD4↑j
.std:000000014F07C963 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07C966 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07C96B C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07C972 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07C976 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07C97A 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07C97F 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07C983 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07C98A 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07C98E 48 03 CB                                add     rcx, rbx
.std:000000014F07C991 E8 BA 7C 00 00                          call    sub_14F084650
.std:000000014F07C996 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07C99B F0 01 07                                lock add [rdi], eax
.std:000000014F07C99E 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07C9A2 48 8D 15 F7 13 23 08                    lea     rdx, unk_1572ADDA0
.std:000000014F07C9A9 89 83 18 05 01 00                       mov     [rbx+10518h], eax
.std:000000014F07C9AF 41 B8 10 00 00 00                       mov     r8d, 10h
.std:000000014F07C9B5 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07C9BD C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07C9C2 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07C9C7 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07C9CB 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07C9CE 84 C0                                   test    al, al
.std:000000014F07C9D0 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07C9D5 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07C9D9 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07C9DE 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07C9E1 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07C9E6 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07C9EB 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07C9EF C7 45 68 10 00 00 00                    mov     [rbp+0B0h+var_48], 10h
.std:000000014F07C9F6 75 0F                                   jnz     short loc_14F07CA07
.std:000000014F07C9F8 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07C9FD 48 8B FE                                mov     rdi, rsi
.std:000000014F07CA00 E8 6B E1 FF FF                          call    sub_14F07AB70
.std:000000014F07CA05 EB 0D                                   jmp     short loc_14F07CA14
.std:000000014F07CA07                         ; ---------------------------------------------------------------------------
.std:000000014F07CA07
.std:000000014F07CA07                         loc_14F07CA07:                          ; CODE XREF: sub_14F07BC80+D76↑j
.std:000000014F07CA07 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07CA0C 49 8B FE                                mov     rdi, r14
.std:000000014F07CA0F E8 4C E2 FF FF                          call    sub_14F07AC60
.std:000000014F07CA14
.std:000000014F07CA14                         loc_14F07CA14:                          ; CODE XREF: sub_14F07BC80+D85↑j
.std:000000014F07CA14 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07CA17 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07CA1C C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07CA23 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07CA27 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07CA2B 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CA30 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07CA34 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07CA3B 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07CA3F 48 03 CB                                add     rcx, rbx
.std:000000014F07CA42 E8 09 7C 00 00                          call    sub_14F084650
.std:000000014F07CA47 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07CA4C F0 01 07                                lock add [rdi], eax
.std:000000014F07CA4F 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07CA53 48 8D 15 5E 13 23 08                    lea     rdx, aIntrect   ; "IntRect"
.std:000000014F07CA5A 89 83 F0 04 01 00                       mov     [rbx+104F0h], eax
.std:000000014F07CA60 41 B8 07 00 00 00                       mov     r8d, 7
.std:000000014F07CA66 C7 44 24 28 07 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 7
.std:000000014F07CA6E C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CA73 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07CA78 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07CA7C 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07CA7F 84 C0                                   test    al, al
.std:000000014F07CA81 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07CA86 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07CA8A 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07CA8F 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07CA92 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07CA97 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07CA9C 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07CAA0 C7 45 68 07 00 00 00                    mov     [rbp+0B0h+var_48], 7
.std:000000014F07CAA7 75 0F                                   jnz     short loc_14F07CAB8
.std:000000014F07CAA9 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07CAAE 48 8B FE                                mov     rdi, rsi
.std:000000014F07CAB1 E8 BA E0 FF FF                          call    sub_14F07AB70
.std:000000014F07CAB6 EB 0D                                   jmp     short loc_14F07CAC5
.std:000000014F07CAB8                         ; ---------------------------------------------------------------------------
.std:000000014F07CAB8
.std:000000014F07CAB8                         loc_14F07CAB8:                          ; CODE XREF: sub_14F07BC80+E27↑j
.std:000000014F07CAB8 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07CABD 49 8B FE                                mov     rdi, r14
.std:000000014F07CAC0 E8 9B E1 FF FF                          call    sub_14F07AC60
.std:000000014F07CAC5
.std:000000014F07CAC5                         loc_14F07CAC5:                          ; CODE XREF: sub_14F07BC80+E36↑j
.std:000000014F07CAC5 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07CAC8 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07CACD C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07CAD4 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07CAD8 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07CADC 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CAE1 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07CAE5 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07CAEC 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07CAF0 48 03 CB                                add     rcx, rbx
.std:000000014F07CAF3 E8 58 7B 00 00                          call    sub_14F084650
.std:000000014F07CAF8 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07CAFD F0 01 07                                lock add [rdi], eax
.std:000000014F07CB00 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07CB04 48 8D 15 B5 12 23 08                    lea     rdx, unk_1572ADDC0
.std:000000014F07CB0B 89 83 1C 05 01 00                       mov     [rbx+1051Ch], eax
.std:000000014F07CB11 41 B8 10 00 00 00                       mov     r8d, 10h
.std:000000014F07CB17 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07CB1F C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CB24 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07CB29 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07CB2D 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07CB30 84 C0                                   test    al, al
.std:000000014F07CB32 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07CB37 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07CB3B 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07CB40 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07CB43 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07CB48 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07CB4D 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07CB51 C7 45 68 10 00 00 00                    mov     [rbp+0B0h+var_48], 10h
.std:000000014F07CB58 75 0F                                   jnz     short loc_14F07CB69
.std:000000014F07CB5A 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07CB5F 48 8B FE                                mov     rdi, rsi
.std:000000014F07CB62 E8 09 E0 FF FF                          call    sub_14F07AB70
.std:000000014F07CB67 EB 0D                                   jmp     short loc_14F07CB76
.std:000000014F07CB69                         ; ---------------------------------------------------------------------------
.std:000000014F07CB69
.std:000000014F07CB69                         loc_14F07CB69:                          ; CODE XREF: sub_14F07BC80+ED8↑j
.std:000000014F07CB69 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07CB6E 49 8B FE                                mov     rdi, r14
.std:000000014F07CB71 E8 EA E0 FF FF                          call    sub_14F07AC60
.std:000000014F07CB76
.std:000000014F07CB76                         loc_14F07CB76:                          ; CODE XREF: sub_14F07BC80+EE7↑j
.std:000000014F07CB76 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07CB79 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07CB7E C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07CB85 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07CB89 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07CB8D 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CB92 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07CB96 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07CB9D 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07CBA1 48 03 CB                                add     rcx, rbx
.std:000000014F07CBA4 E8 A7 7A 00 00                          call    sub_14F084650
.std:000000014F07CBA9 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07CBAE F0 01 07                                lock add [rdi], eax
.std:000000014F07CBB1 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07CBB5 48 8D 15 CC 52 B6 04                    lea     rdx, aIntpoint  ; "IntPoint"
.std:000000014F07CBBC 89 83 F4 04 01 00                       mov     [rbx+104F4h], eax
.std:000000014F07CBC2 41 B8 08 00 00 00                       mov     r8d, 8
.std:000000014F07CBC8 C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07CBD0 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CBD5 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07CBDA 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07CBDE 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07CBE1 84 C0                                   test    al, al
.std:000000014F07CBE3 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07CBE8 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07CBEC 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07CBF1 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07CBF4 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07CBF9 C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07CBFE 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07CC02 C7 45 68 08 00 00 00                    mov     [rbp+0B0h+var_48], 8
.std:000000014F07CC09 75 0F                                   jnz     short loc_14F07CC1A
.std:000000014F07CC0B 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07CC10 48 8B FE                                mov     rdi, rsi
.std:000000014F07CC13 E8 58 DF FF FF                          call    sub_14F07AB70
.std:000000014F07CC18 EB 0D                                   jmp     short loc_14F07CC27
.std:000000014F07CC1A                         ; ---------------------------------------------------------------------------
.std:000000014F07CC1A
.std:000000014F07CC1A                         loc_14F07CC1A:                          ; CODE XREF: sub_14F07BC80+F89↑j
.std:000000014F07CC1A 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07CC1F 49 8B FE                                mov     rdi, r14
.std:000000014F07CC22 E8 39 E0 FF FF                          call    sub_14F07AC60
.std:000000014F07CC27
.std:000000014F07CC27                         loc_14F07CC27:                          ; CODE XREF: sub_14F07BC80+F98↑j
.std:000000014F07CC27 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07CC2A 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07CC2F C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07CC36 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07CC3A 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07CC3E 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CC43 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07CC47 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07CC4E 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07CC52 48 03 CB                                add     rcx, rbx
.std:000000014F07CC55 E8 F6 79 00 00                          call    sub_14F084650
.std:000000014F07CC5A 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07CC5F F0 01 07                                lock add [rdi], eax
.std:000000014F07CC62 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07CC66 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CC6B C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07CC73 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CC78 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CC7D 48 8B CB                                mov     rcx, rbx
.std:000000014F07CC80 89 83 20 05 01 00                       mov     [rbx+10520h], eax
.std:000000014F07CC86 48 8D 05 4B 11 23 08                    lea     rax, unk_1572ADDD8
.std:000000014F07CC8D 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CC92 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CC97 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CC9D E8 3E A6 00 00                          call    sub_14F0872E0
.std:000000014F07CCA2 C7 44 24 28 07 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 7
.std:000000014F07CCAA 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CCAF C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CCB4 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CCB9 8B 08                                   mov     ecx, [rax]
.std:000000014F07CCBB 48 8D 05 E6 29 B9 04                    lea     rax, aVector4   ; "Vector4"
.std:000000014F07CCC2 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CCC7 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CCCC 89 8B F8 04 01 00                       mov     [rbx+104F8h], ecx
.std:000000014F07CCD2 48 8B CB                                mov     rcx, rbx
.std:000000014F07CCD5 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CCDB E8 00 A6 00 00                          call    sub_14F0872E0
.std:000000014F07CCE0 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07CCE8 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CCED C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CCF2 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CCF7 8B 08                                   mov     ecx, [rax]
.std:000000014F07CCF9 48 8D 05 F0 10 23 08                    lea     rax, unk_1572ADDF0
.std:000000014F07CD00 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CD05 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CD0A 89 8B 24 05 01 00                       mov     [rbx+10524h], ecx
.std:000000014F07CD10 48 8B CB                                mov     rcx, rbx
.std:000000014F07CD13 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CD19 E8 C2 A5 00 00                          call    sub_14F0872E0
.std:000000014F07CD1E C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07CD26 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CD2B C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CD30 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CD35 8B 08                                   mov     ecx, [rax]
.std:000000014F07CD37 48 8D 05 7E 22 08 04                    lea     rax, aName_4    ; "Name"
.std:000000014F07CD3E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CD43 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CD48 89 8B FC 04 01 00                       mov     [rbx+104FCh], ecx
.std:000000014F07CD4E 48 8B CB                                mov     rcx, rbx
.std:000000014F07CD51 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CD57 E8 84 A5 00 00                          call    sub_14F0872E0
.std:000000014F07CD5C C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07CD64 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CD69 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CD6E 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CD73 8B 08                                   mov     ecx, [rax]
.std:000000014F07CD75 48 8D 05 8C 10 23 08                    lea     rax, unk_1572ADE08
.std:000000014F07CD7C 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CD81 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CD86 89 8B 28 05 01 00                       mov     [rbx+10528h], ecx
.std:000000014F07CD8C 48 8B CB                                mov     rcx, rbx
.std:000000014F07CD8F 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CD95 E8 46 A5 00 00                          call    sub_14F0872E0
.std:000000014F07CD9A C7 44 24 28 06 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 6
.std:000000014F07CDA2 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CDA7 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CDAC 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CDB1 8B 08                                   mov     ecx, [rax]
.std:000000014F07CDB3 48 8D 05 62 85 11 04                    lea     rax, aVector    ; "Vector"
.std:000000014F07CDBA 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CDBF 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CDC4 89 8B 00 05 01 00                       mov     [rbx+10500h], ecx
.std:000000014F07CDCA 48 8B CB                                mov     rcx, rbx
.std:000000014F07CDCD 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CDD3 E8 08 A5 00 00                          call    sub_14F0872E0
.std:000000014F07CDD8 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07CDE0 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CDE5 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CDEA 8B 08                                   mov     ecx, [rax]
.std:000000014F07CDEC 48 8D 05 2D 10 23 08                    lea     rax, unk_1572ADE20
.std:000000014F07CDF3 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CDF8 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CDFD 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CE03 89 8B 2C 05 01 00                       mov     [rbx+1052Ch], ecx
.std:000000014F07CE09 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CE0E 48 8B CB                                mov     rcx, rbx
.std:000000014F07CE11 E8 CA A4 00 00                          call    sub_14F0872E0
.std:000000014F07CE16 C7 44 24 28 07 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 7
.std:000000014F07CE1E 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CE23 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CE28 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CE2D 8B 08                                   mov     ecx, [rax]
.std:000000014F07CE2F 48 8D 05 F2 96 11 04                    lea     rax, aRotator   ; "Rotator"
.std:000000014F07CE36 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CE3B 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CE40 89 8B 04 05 01 00                       mov     [rbx+10504h], ecx
.std:000000014F07CE46 48 8B CB                                mov     rcx, rbx
.std:000000014F07CE49 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CE4F E8 8C A4 00 00                          call    sub_14F0872E0
.std:000000014F07CE54 C7 44 24 28 0B 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Bh
.std:000000014F07CE5C 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CE61 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CE66 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CE6B 8B 08                                   mov     ecx, [rax]
.std:000000014F07CE6D 48 8D 05 C4 0F 23 08                    lea     rax, aStrproperty ; "StrProperty"
.std:000000014F07CE74 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CE79 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CE7E 89 8B 30 05 01 00                       mov     [rbx+10530h], ecx
.std:000000014F07CE84 48 8B CB                                mov     rcx, rbx
.std:000000014F07CE87 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CE8D E8 4E A4 00 00                          call    sub_14F0872E0
.std:000000014F07CE92 C7 44 24 28 0F 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Fh
.std:000000014F07CE9A 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CE9F C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CEA4 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CEA9 8B 08                                   mov     ecx, [rax]
.std:000000014F07CEAB 48 8D 05 96 0F 23 08                    lea     rax, aObjectarchetyp ; "ObjectArchetype"
.std:000000014F07CEB2 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CEB7 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CEBC 89 8B 74 04 01 00                       mov     [rbx+10474h], ecx
.std:000000014F07CEC2 48 8B CB                                mov     rcx, rbx
.std:000000014F07CEC5 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CECB E8 10 A4 00 00                          call    sub_14F0872E0
.std:000000014F07CED0 C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07CED8 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CEDD C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CEE2 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CEE7 8B 08                                   mov     ecx, [rax]
.std:000000014F07CEE9 48 8D 05 E4 B9 06 04                    lea     rax, aClass_3   ; "Class"
.std:000000014F07CEF0 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CEF5 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CEFA 89 8B E0 05 01 00                       mov     [rbx+105E0h], ecx
.std:000000014F07CF00 48 8B CB                                mov     rcx, rbx
.std:000000014F07CF03 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CF09 E8 D2 A3 00 00                          call    sub_14F0872E0
.std:000000014F07CF0E C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07CF16 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CF1B C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CF20 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CF25 8B 08                                   mov     ecx, [rax]
.std:000000014F07CF27 48 8D 05 FA 13 BF 04                    lea     rax, unk_153C6E328
.std:000000014F07CF2E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CF33 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CF38 89 8B E4 05 01 00                       mov     [rbx+105E4h], ecx
.std:000000014F07CF3E 48 8B CB                                mov     rcx, rbx
.std:000000014F07CF41 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CF47 E8 94 A3 00 00                          call    sub_14F0872E0
.std:000000014F07CF4C C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07CF54 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CF59 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CF5E 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CF63 8B 08                                   mov     ecx, [rax]
.std:000000014F07CF65 48 8D 05 E4 3B 0F 04                    lea     rax, aFunction  ; "Function"
.std:000000014F07CF6C 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CF71 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CF76 89 8B E8 05 01 00                       mov     [rbx+105E8h], ecx
.std:000000014F07CF7C 48 8B CB                                mov     rcx, rbx
.std:000000014F07CF7F 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CF85 E8 56 A3 00 00                          call    sub_14F0872E0
.std:000000014F07CF8A C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07CF92 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CF97 8B 08                                   mov     ecx, [rax]
.std:000000014F07CF99 48 8D 05 18 02 0D 04                    lea     rax, aState_2   ; "State"
.std:000000014F07CFA0 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CFA5 89 8B EC 05 01 00                       mov     [rbx+105ECh], ecx
.std:000000014F07CFAB 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CFB0 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CFB5 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CFBA 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07CFC0 48 8B CB                                mov     rcx, rbx
.std:000000014F07CFC3 E8 18 A3 00 00                          call    sub_14F0872E0
.std:000000014F07CFC8 C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07CFD0 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07CFD5 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07CFDA 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07CFDF 8B 08                                   mov     ecx, [rax]
.std:000000014F07CFE1 48 8D 05 A4 22 7F 04                    lea     rax, aTrue_4    ; "TRUE"
.std:000000014F07CFE8 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07CFED 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07CFF2 89 8B 60 07 01 00                       mov     [rbx+10760h], ecx
.std:000000014F07CFF8 48 8B CB                                mov     rcx, rbx
.std:000000014F07CFFB 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D001 E8 DA A2 00 00                          call    sub_14F0872E0
.std:000000014F07D006 C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07D00E 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D013 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D018 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D01D 8B 08                                   mov     ecx, [rax]
.std:000000014F07D01F 48 8D 05 6E 22 7F 04                    lea     rax, aFalse_4   ; "FALSE"
.std:000000014F07D026 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D02B 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D030 89 8B 64 07 01 00                       mov     [rbx+10764h], ecx
.std:000000014F07D036 48 8B CB                                mov     rcx, rbx
.std:000000014F07D039 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D03F E8 9C A2 00 00                          call    sub_14F0872E0
.std:000000014F07D044 C7 44 24 28 0E 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Eh
.std:000000014F07D04C 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D051 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D056 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D05B 8B 08                                   mov     ecx, [rax]
.std:000000014F07D05D 48 8D 05 F4 0D 23 08                    lea     rax, unk_1572ADE58
.std:000000014F07D064 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D069 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D06E 89 8B 68 07 01 00                       mov     [rbx+10768h], ecx
.std:000000014F07D074 48 8B CB                                mov     rcx, rbx
.std:000000014F07D077 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D07D E8 5E A2 00 00                          call    sub_14F0872E0
.std:000000014F07D082 C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07D08A 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D08F C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D094 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D099 8B 08                                   mov     ecx, [rax]
.std:000000014F07D09B 48 8D 05 C6 0D 23 08                    lea     rax, unk_1572ADE68
.std:000000014F07D0A2 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D0A7 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D0AC 89 8B A8 04 01 00                       mov     [rbx+104A8h], ecx
.std:000000014F07D0B2 48 8B CB                                mov     rcx, rbx
.std:000000014F07D0B5 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D0BB E8 20 A2 00 00                          call    sub_14F0872E0
.std:000000014F07D0C0 C7 44 24 28 07 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 7
.std:000000014F07D0C8 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D0CD C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D0D2 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D0D7 8B 08                                   mov     ecx, [rax]
.std:000000014F07D0D9 48 8D 05 B0 89 1B 04                    lea     rax, aDefault_0 ; "Default"
.std:000000014F07D0E0 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D0E5 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D0EA 89 8B 6C 07 01 00                       mov     [rbx+1076Ch], ecx
.std:000000014F07D0F0 48 8B CB                                mov     rcx, rbx
.std:000000014F07D0F3 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D0F9 E8 E2 A1 00 00                          call    sub_14F0872E0
.std:000000014F07D0FE C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07D106 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D10B C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D110 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D115 8B 08                                   mov     ecx, [rax]
.std:000000014F07D117 48 8D 05 2E 14 17 08                    lea     rax, unk_1571EE54C
.std:000000014F07D11E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D123 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D128 89 8B 70 07 01 00                       mov     [rbx+10770h], ecx
.std:000000014F07D12E 48 8B CB                                mov     rcx, rbx
.std:000000014F07D131 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D137 E8 A4 A1 00 00                          call    sub_14F0872E0
.std:000000014F07D13C 8B 08                                   mov     ecx, [rax]
.std:000000014F07D13E 48 8D 05 1F C9 6B 04                    lea     rax, aInput_3   ; "Input"
.std:000000014F07D145 89 8B 74 07 01 00                       mov     [rbx+10774h], ecx
.std:000000014F07D14B 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D150 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D155 C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07D15D 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D162 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D167 48 8B CB                                mov     rcx, rbx
.std:000000014F07D16A 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D16F 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D175 E8 66 A1 00 00                          call    sub_14F0872E0
.std:000000014F07D17A C7 44 24 28 07 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 7
.std:000000014F07D182 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D187 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D18C 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D191 8B 08                                   mov     ecx, [rax]
.std:000000014F07D193 48 8D 05 D6 0C 23 08                    lea     rax, aPackage_1 ; "Package"
.std:000000014F07D19A 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D19F 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D1A4 89 8B 78 07 01 00                       mov     [rbx+10778h], ecx
.std:000000014F07D1AA 48 8B CB                                mov     rcx, rbx
.std:000000014F07D1AD 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D1B3 E8 28 A1 00 00                          call    sub_14F0872E0
.std:000000014F07D1B8 C7 44 24 28 06 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 6
.std:000000014F07D1C0 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D1C5 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D1CA 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D1CF 8B 08                                   mov     ecx, [rax]
.std:000000014F07D1D1 48 8D 05 18 3A 15 04                    lea     rax, unk_1531D0BF0
.std:000000014F07D1D8 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D1DD 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D1E2 89 8B 7C 07 01 00                       mov     [rbx+1077Ch], ecx
.std:000000014F07D1E8 48 8B CB                                mov     rcx, rbx
.std:000000014F07D1EB 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D1F1 E8 EA A0 00 00                          call    sub_14F0872E0
.std:000000014F07D1F6 C7 44 24 28 09 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 9
.std:000000014F07D1FE 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D203 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D208 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D20D 8B 08                                   mov     ecx, [rax]
.std:000000014F07D20F 48 8D 05 62 0C 23 08                    lea     rax, aInterface_0 ; "Interface"
.std:000000014F07D216 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D21B 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D220 89 8B 80 07 01 00                       mov     [rbx+10780h], ecx
.std:000000014F07D226 48 8B CB                                mov     rcx, rbx
.std:000000014F07D229 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D22F E8 AC A0 00 00                          call    sub_14F0872E0
.std:000000014F07D234 48 8D 15 4D 0C 23 08                    lea     rdx, unk_1572ADE88
.std:000000014F07D23B C7 44 24 28 0E 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Eh
.std:000000014F07D243 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D248 41 B8 0E 00 00 00                       mov     r8d, 0Eh
.std:000000014F07D24E 48 89 54 24 20                          mov     qword ptr [rsp+1B0h+var_190], rdx
.std:000000014F07D253 8B 08                                   mov     ecx, [rax]
.std:000000014F07D255 48 8B 44 24 28                          mov     rax, qword ptr [rsp+1B0h+var_190+8]
.std:000000014F07D25A 48 C1 E8 20                             shr     rax, 20h
.std:000000014F07D25E 88 45 6C                                mov     [rbp+0B0h+var_44], al
.std:000000014F07D261 84 C0                                   test    al, al
.std:000000014F07D263 0F B7 44 24 2D                          movzx   eax, word ptr [rsp+1B0h+var_190+0Dh]
.std:000000014F07D268 66 89 45 6D                             mov     [rbp+0B0h+var_43], ax
.std:000000014F07D26C 0F B6 44 24 2F                          movzx   eax, byte ptr [rsp+1B0h+var_190+0Fh]
.std:000000014F07D271 88 45 6F                                mov     [rbp+0B0h+var_41], al
.std:000000014F07D274 89 8B 84 07 01 00                       mov     [rbx+10784h], ecx
.std:000000014F07D27A C6 44 24 30 00                          mov     [rsp+1B0h+var_180], 0
.std:000000014F07D27F 48 89 55 60                             mov     [rbp+0B0h+var_50], rdx
.std:000000014F07D283 C7 45 68 0E 00 00 00                    mov     [rbp+0B0h+var_48], 0Eh
.std:000000014F07D28A 75 0C                                   jnz     short loc_14F07D298
.std:000000014F07D28C 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07D291 E8 DA D8 FF FF                          call    sub_14F07AB70
.std:000000014F07D296 EB 0D                                   jmp     short loc_14F07D2A5
.std:000000014F07D298                         ; ---------------------------------------------------------------------------
.std:000000014F07D298
.std:000000014F07D298                         loc_14F07D298:                          ; CODE XREF: sub_14F07BC80+160A↑j
.std:000000014F07D298 48 8D 4C 24 20                          lea     rcx, [rsp+1B0h+var_190]
.std:000000014F07D29D 49 8B F6                                mov     rsi, r14
.std:000000014F07D2A0 E8 BB D9 FF FF                          call    sub_14F07AC60
.std:000000014F07D2A5
.std:000000014F07D2A5                         loc_14F07D2A5:                          ; CODE XREF: sub_14F07BC80+1616↑j
.std:000000014F07D2A5 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.std:000000014F07D2A8 4C 8D 4C 24 30                          lea     r9, [rsp+1B0h+var_180]
.std:000000014F07D2AD C6 85 84 00 00 00 00                    mov     [rbp+0B0h+var_2C], 0
.std:000000014F07D2B4 4C 8D 45 60                             lea     r8, [rbp+0B0h+var_50]
.std:000000014F07D2B8 66 0F 7E C1                             movd    ecx, xmm0
.std:000000014F07D2BC 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D2C1 0F 11 45 70                             movups  [rbp+0B0h+var_40], xmm0
.std:000000014F07D2C5 48 81 C1 01 04 00 00                    add     rcx, 401h
.std:000000014F07D2CC 48 C1 E1 06                             shl     rcx, 6
.std:000000014F07D2D0 48 03 CB                                add     rcx, rbx
.std:000000014F07D2D3 E8 78 73 00 00                          call    sub_14F084650
.std:000000014F07D2D8 0F B6 44 24 30                          movzx   eax, [rsp+1B0h+var_180]
.std:000000014F07D2DD F0 01 06                                lock add [rsi], eax
.std:000000014F07D2E0 8B 44 24 34                             mov     eax, [rsp+1B0h+var_17C]
.std:000000014F07D2E4 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D2E9 C7 44 24 28 0A 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ah
.std:000000014F07D2F1 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D2F6 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D2FB 48 8B CB                                mov     rcx, rbx
.std:000000014F07D2FE 89 83 6C 04 01 00                       mov     [rbx+1046Ch], eax
.std:000000014F07D304 48 8D 05 FD C7 15 04                    lea     rax, unk_1531D9B08
.std:000000014F07D30B 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D310 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D315 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D31B E8 C0 9F 00 00                          call    sub_14F0872E0
.std:000000014F07D320 C7 44 24 28 06 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 6
.std:000000014F07D328 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D32D C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D332 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D337 8B 08                                   mov     ecx, [rax]
.std:000000014F07D339 48 8D 05 B0 8F 07 04                    lea     rax, aGlobal_1  ; "Global"
.std:000000014F07D340 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D345 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D34A 89 8B 88 07 01 00                       mov     [rbx+10788h], ecx
.std:000000014F07D350 48 8B CB                                mov     rcx, rbx
.std:000000014F07D353 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D359 E8 82 9F 00 00                          call    sub_14F0872E0
.std:000000014F07D35E C7 44 24 28 0F 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Fh
.std:000000014F07D366 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D36B C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D370 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D375 8B 08                                   mov     ecx, [rax]
.std:000000014F07D377 48 8D 05 1A 0B 23 08                    lea     rax, aPackagemetadat ; "PackageMetaData"
.std:000000014F07D37E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D383 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D388 89 8B 8C 07 01 00                       mov     [rbx+1078Ch], ecx
.std:000000014F07D38E 48 8B CB                                mov     rcx, rbx
.std:000000014F07D391 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D397 E8 44 9F 00 00                          call    sub_14F0872E0
.std:000000014F07D39C C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07D3A4 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D3A9 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D3AE 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D3B3 8B 08                                   mov     ecx, [rax]
.std:000000014F07D3B5 48 8D 05 CC BB 92 04                    lea     rax, unk_1539A8F88
.std:000000014F07D3BC 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D3C1 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D3C6 89 8B AC 07 01 00                       mov     [rbx+107ACh], ecx
.std:000000014F07D3CC 48 8B CB                                mov     rcx, rbx
.std:000000014F07D3CF 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D3D5 E8 06 9F 00 00                          call    sub_14F0872E0
.std:000000014F07D3DA C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07D3E2 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D3E7 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D3EC 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D3F1 8B 08                                   mov     ecx, [rax]
.std:000000014F07D3F3 48 8D 05 AE 78 09 04                    lea     rax, aGame_6    ; "Game"
.std:000000014F07D3FA 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D3FF 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D404 89 8B B0 07 01 00                       mov     [rbx+107B0h], ecx
.std:000000014F07D40A 48 8B CB                                mov     rcx, rbx
.std:000000014F07D40D 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D413 E8 C8 9E 00 00                          call    sub_14F0872E0
.std:000000014F07D418 C7 44 24 28 0B 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Bh
.std:000000014F07D420 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D425 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D42A 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D42F 8B 08                                   mov     ecx, [rax]
.std:000000014F07D431 48 8D 05 00 59 B6 04                    lea     rax, aLinearcolor ; "LinearColor"
.std:000000014F07D438 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D43D 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D442 89 8B B4 07 01 00                       mov     [rbx+107B4h], ecx
.std:000000014F07D448 48 8B CB                                mov     rcx, rbx
.std:000000014F07D44B 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D451 E8 8A 9E 00 00                          call    sub_14F0872E0
.std:000000014F07D456 C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07D45E 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D463 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D468 8B 08                                   mov     ecx, [rax]
.std:000000014F07D46A 48 8D 05 37 0A 23 08                    lea     rax, unk_1572ADEA8
.std:000000014F07D471 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D476 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D47B 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D481 89 8B 44 05 01 00                       mov     [rbx+10544h], ecx
.std:000000014F07D487 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D48C 48 8B CB                                mov     rcx, rbx
.std:000000014F07D48F E8 4C 9E 00 00                          call    sub_14F0872E0
.std:000000014F07D494 C7 44 24 28 07 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 7
.std:000000014F07D49C 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D4A1 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D4A6 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D4AB 8B 08                                   mov     ecx, [rax]
.std:000000014F07D4AD 48 8D 05 1C F9 D3 05                    lea     rax, aPointer   ; "Pointer"
.std:000000014F07D4B4 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D4B9 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D4BE 89 8B 48 05 01 00                       mov     [rbx+10548h], ecx
.std:000000014F07D4C4 48 8B CB                                mov     rcx, rbx
.std:000000014F07D4C7 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D4CD E8 0E 9E 00 00                          call    sub_14F0872E0
.std:000000014F07D4D2 C7 44 24 28 06 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 6
.std:000000014F07D4DA 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D4DF C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D4E4 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D4E9 8B 08                                   mov     ecx, [rax]
.std:000000014F07D4EB 48 8D 05 C6 09 23 08                    lea     rax, unk_1572ADEB8
.std:000000014F07D4F2 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D4F7 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D4FC 89 8B 4C 05 01 00                       mov     [rbx+1054Ch], ecx
.std:000000014F07D502 48 8B CB                                mov     rcx, rbx
.std:000000014F07D505 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D50B E8 D0 9D 00 00                          call    sub_14F0872E0
.std:000000014F07D510 C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07D518 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D51D C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D522 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D527 8B 08                                   mov     ecx, [rax]
.std:000000014F07D529 48 8D 05 C8 37 B6 04                    lea     rax, aQuat      ; "Quat"
.std:000000014F07D530 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D535 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D53A 89 8B 50 05 01 00                       mov     [rbx+10550h], ecx
.std:000000014F07D540 48 8B CB                                mov     rcx, rbx
.std:000000014F07D543 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D549 E8 92 9D 00 00                          call    sub_14F0872E0
.std:000000014F07D54E C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07D556 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D55B C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D560 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D565 8B 08                                   mov     ecx, [rax]
.std:000000014F07D567 48 8D 05 06 01 EC 05                    lea     rax, aSelf_0    ; "Self"
.std:000000014F07D56E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D573 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D578 89 8B 54 05 01 00                       mov     [rbx+10554h], ecx
.std:000000014F07D57E 48 8B CB                                mov     rcx, rbx
.std:000000014F07D581 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D587 E8 54 9D 00 00                          call    sub_14F0872E0
.std:000000014F07D58C C7 44 24 28 09 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 9
.std:000000014F07D594 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D599 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D59E 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D5A3 8B 08                                   mov     ecx, [rax]
.std:000000014F07D5A5 48 8D 05 FC ED 14 04                    lea     rax, aTransform_0 ; "Transform"
.std:000000014F07D5AC 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D5B1 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D5B6 89 8B 58 05 01 00                       mov     [rbx+10558h], ecx
.std:000000014F07D5BC 48 8B CB                                mov     rcx, rbx
.std:000000014F07D5BF 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D5C5 E8 16 9D 00 00                          call    sub_14F0872E0
.std:000000014F07D5CA C7 44 24 28 06 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 6
.std:000000014F07D5D2 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D5D7 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D5DC 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D5E1 8B 08                                   mov     ecx, [rax]
.std:000000014F07D5E3 48 8D 05 B2 AA 06 04                    lea     rax, unk_1530E809C
.std:000000014F07D5EA 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D5EF 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D5F4 89 8B 5C 05 01 00                       mov     [rbx+1055Ch], ecx
.std:000000014F07D5FA 48 8B CB                                mov     rcx, rbx
.std:000000014F07D5FD 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D603 E8 D8 9C 00 00                          call    sub_14F0872E0
.std:000000014F07D608 C7 44 24 28 06 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 6
.std:000000014F07D610 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D615 8B 08                                   mov     ecx, [rax]
.std:000000014F07D617 48 8D 05 0E B9 E0 04                    lea     rax, aCamera    ; "Camera"
.std:000000014F07D61E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D623 89 8B D0 05 01 00                       mov     [rbx+105D0h], ecx
.std:000000014F07D629 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D62E 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D633 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D638 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D63E 48 8B CB                                mov     rcx, rbx
.std:000000014F07D641 E8 9A 9C 00 00                          call    sub_14F0872E0
.std:000000014F07D646 C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07D64E 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D653 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D658 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D65D 8B 08                                   mov     ecx, [rax]
.std:000000014F07D65F 48 8D 05 1A 3C 0A 04                    lea     rax, aActor_0   ; "Actor"
.std:000000014F07D666 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D66B 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D670 89 8B D4 05 01 00                       mov     [rbx+105D4h], ecx
.std:000000014F07D676 48 8B CB                                mov     rcx, rbx
.std:000000014F07D679 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D67F E8 5C 9C 00 00                          call    sub_14F0872E0
.std:000000014F07D684 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07D68C 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D691 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D696 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D69B 8B 08                                   mov     ecx, [rax]
.std:000000014F07D69D 48 8D 05 1C 08 23 08                    lea     rax, unk_1572ADEC0
.std:000000014F07D6A4 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D6A9 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D6AE 89 8B D8 05 01 00                       mov     [rbx+105D8h], ecx
.std:000000014F07D6B4 48 8B CB                                mov     rcx, rbx
.std:000000014F07D6B7 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D6BD E8 1E 9C 00 00                          call    sub_14F0872E0
.std:000000014F07D6C2 C7 44 24 28 0B 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Bh
.std:000000014F07D6CA 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D6CF C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D6D4 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D6D9 8B 08                                   mov     ecx, [rax]
.std:000000014F07D6DB 48 8D 05 F6 07 23 08                    lea     rax, aMapproperty ; "MapProperty"
.std:000000014F07D6E2 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D6E7 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D6EC 89 8B DC 05 01 00                       mov     [rbx+105DCh], ecx
.std:000000014F07D6F2 48 8B CB                                mov     rcx, rbx
.std:000000014F07D6F5 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D6FB E8 E0 9B 00 00                          call    sub_14F0872E0
.std:000000014F07D700 C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07D708 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D70D C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D712 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D717 8B 08                                   mov     ecx, [rax]
.std:000000014F07D719 48 8D 05 30 5C 96 04                    lea     rax, unk_1539E3350
.std:000000014F07D720 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D725 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D72A 89 8B B0 04 01 00                       mov     [rbx+104B0h], ecx
.std:000000014F07D730 48 8B CB                                mov     rcx, rbx
.std:000000014F07D733 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D739 E8 A2 9B 00 00                          call    sub_14F0872E0
.std:000000014F07D73E C7 44 24 28 0F 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Fh
.std:000000014F07D746 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D74B C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D750 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D755 8B 08                                   mov     ecx, [rax]
.std:000000014F07D757 48 8D 05 4A BE 1D 08                    lea     rax, aBoxspherebound_0 ; "BoxSphereBounds"
.std:000000014F07D75E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D763 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D768 89 8B 08 05 01 00                       mov     [rbx+10508h], ecx
.std:000000014F07D76E 48 8B CB                                mov     rcx, rbx
.std:000000014F07D771 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D777 E8 64 9B 00 00                          call    sub_14F0872E0
.std:000000014F07D77C C7 44 24 28 0E 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Eh
.std:000000014F07D784 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D789 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D78E 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D793 8B 08                                   mov     ecx, [rax]
.std:000000014F07D795 48 8D 05 5C 29 78 04                    lea     rax, unk_1538000F8
.std:000000014F07D79C 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D7A1 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D7A6 89 8B 0C 05 01 00                       mov     [rbx+1050Ch], ecx
.std:000000014F07D7AC 48 8B CB                                mov     rcx, rbx
.std:000000014F07D7AF 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D7B5 E8 26 9B 00 00                          call    sub_14F0872E0
.std:000000014F07D7BA 8B 08                                   mov     ecx, [rax]
.std:000000014F07D7BC 48 8D 05 65 0E 8E 04                    lea     rax, aUi_0      ; "UI"
.std:000000014F07D7C3 89 8B B8 07 01 00                       mov     [rbx+107B8h], ecx
.std:000000014F07D7C9 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D7CE 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D7D3 C7 44 24 28 02 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 2
.std:000000014F07D7DB 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D7E0 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D7E5 48 8B CB                                mov     rcx, rbx
.std:000000014F07D7E8 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D7ED 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D7F3 E8 E8 9A 00 00                          call    sub_14F0872E0
.std:000000014F07D7F8 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07D800 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D805 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D80A 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D80F 8B 08                                   mov     ecx, [rax]
.std:000000014F07D811 48 8D 05 D0 06 23 08                    lea     rax, unk_1572ADEE8
.std:000000014F07D818 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D81D 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D822 89 8B BC 07 01 00                       mov     [rbx+107BCh], ecx
.std:000000014F07D828 48 8B CB                                mov     rcx, rbx
.std:000000014F07D82B 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D831 E8 AA 9A 00 00                          call    sub_14F0872E0
.std:000000014F07D836 C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07D83E 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D843 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D848 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D84D 8B 08                                   mov     ecx, [rax]
.std:000000014F07D84F 48 8D 05 4A EC 91 04                    lea     rax, aDeviceid_0 ; "DeviceID"
.std:000000014F07D856 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D85B 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D860 89 8B C0 07 01 00                       mov     [rbx+107C0h], ecx
.std:000000014F07D866 48 8B CB                                mov     rcx, rbx
.std:000000014F07D869 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D86F E8 6C 9A 00 00                          call    sub_14F0872E0
.std:000000014F07D874 C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07D87C 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D881 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D886 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D88B 8B 08                                   mov     ecx, [rax]
.std:000000014F07D88D 48 8D 05 6C 06 23 08                    lea     rax, unk_1572ADF00
.std:000000014F07D894 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D899 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D89E 89 8B C4 07 01 00                       mov     [rbx+107C4h], ecx
.std:000000014F07D8A4 48 8B CB                                mov     rcx, rbx
.std:000000014F07D8A7 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D8AD E8 2E 9A 00 00                          call    sub_14F0872E0
.std:000000014F07D8B2 C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07D8BA 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D8BF C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D8C4 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D8C9 8B 08                                   mov     ecx, [rax]
.std:000000014F07D8CB 48 8D 05 3E 06 23 08                    lea     rax, unk_1572ADF10
.std:000000014F07D8D2 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D8D7 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D8DC 89 8B C8 07 01 00                       mov     [rbx+107C8h], ecx
.std:000000014F07D8E2 48 8B CB                                mov     rcx, rbx
.std:000000014F07D8E5 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D8EB E8 F0 99 00 00                          call    sub_14F0872E0
.std:000000014F07D8F0 C7 44 24 28 09 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 9
.std:000000014F07D8F8 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D8FD C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D902 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D907 8B 08                                   mov     ecx, [rax]
.std:000000014F07D909 48 8D 05 88 CA AA 04                    lea     rax, aMoveactor ; "MoveActor"
.std:000000014F07D910 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D915 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D91A 89 8B 58 04 01 00                       mov     [rbx+10458h], ecx
.std:000000014F07D920 48 8B CB                                mov     rcx, rbx
.std:000000014F07D923 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D929 E8 B2 99 00 00                          call    sub_14F0872E0
.std:000000014F07D92E C7 44 24 28 03 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 3
.std:000000014F07D936 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D93B C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D940 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D945 8B 08                                   mov     ecx, [rax]
.std:000000014F07D947 48 8D 05 76 BF 11 04                    lea     rax, aAll_0     ; "All"
.std:000000014F07D94E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D953 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D958 89 8B CC 07 01 00                       mov     [rbx+107CCh], ecx
.std:000000014F07D95E 48 8B CB                                mov     rcx, rbx
.std:000000014F07D961 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D967 E8 74 99 00 00                          call    sub_14F0872E0
.std:000000014F07D96C 8B 08                                   mov     ecx, [rax]
.std:000000014F07D96E 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D973 C7 44 24 28 0F 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Fh
.std:000000014F07D97B 48 8D 05 9E 05 23 08                    lea     rax, aExpressioninpu_0 ; "ExpressionInput"
.std:000000014F07D982 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D987 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D98C C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D991 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D996 89 8B D8 07 01 00                       mov     [rbx+107D8h], ecx
.std:000000014F07D99C 48 8B CB                                mov     rcx, rbx
.std:000000014F07D99F 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D9A5 E8 36 99 00 00                          call    sub_14F0872E0
.std:000000014F07D9AA C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07D9B2 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D9B7 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D9BC 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D9C1 8B 08                                   mov     ecx, [rax]
.std:000000014F07D9C3 48 8D 05 26 39 93 05                    lea     rax, aUntitled_0 ; "Untitled"
.std:000000014F07D9CA 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07D9CF 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07D9D4 89 8B F8 07 01 00                       mov     [rbx+107F8h], ecx
.std:000000014F07D9DA 48 8B CB                                mov     rcx, rbx
.std:000000014F07D9DD 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07D9E3 E8 F8 98 00 00                          call    sub_14F0872E0
.std:000000014F07D9E8 C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07D9F0 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07D9F5 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07D9FA 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07D9FF 8B 08                                   mov     ecx, [rax]
.std:000000014F07DA01 48 8D 05 B4 12 A5 04                    lea     rax, aTimer     ; "Timer"
.std:000000014F07DA08 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DA0D 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DA12 89 8B FC 07 01 00                       mov     [rbx+107FCh], ecx
.std:000000014F07DA18 48 8B CB                                mov     rcx, rbx
.std:000000014F07DA1B 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DA21 E8 BA 98 00 00                          call    sub_14F0872E0
.std:000000014F07DA26 C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07DA2E 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DA33 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DA38 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DA3D 8B 08                                   mov     ecx, [rax]
.std:000000014F07DA3F 48 8D 05 02 82 65 04                    lea     rax, aTeam_0    ; "Team"
.std:000000014F07DA46 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DA4B 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DA50 89 8B 00 08 01 00                       mov     [rbx+10800h], ecx
.std:000000014F07DA56 48 8B CB                                mov     rcx, rbx
.std:000000014F07DA59 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DA5F E8 7C 98 00 00                          call    sub_14F0872E0
.std:000000014F07DA64 C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07DA6C 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DA71 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DA76 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DA7B 8B 08                                   mov     ecx, [rax]
.std:000000014F07DA7D 48 8D 05 E8 D5 11 04                    lea     rax, aSuper     ; "Super"
.std:000000014F07DA84 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DA89 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DA8E 89 8B 04 08 01 00                       mov     [rbx+10804h], ecx
.std:000000014F07DA94 48 8B CB                                mov     rcx, rbx
.std:000000014F07DA97 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DA9D E8 3E 98 00 00                          call    sub_14F0872E0
.std:000000014F07DAA2 C7 44 24 28 0E 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Eh
.std:000000014F07DAAA 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DAAF C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DAB4 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DAB9 8B 08                                   mov     ecx, [rax]
.std:000000014F07DABB 48 8D 05 6E 04 23 08                    lea     rax, unk_1572ADF30
.std:000000014F07DAC2 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DAC7 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DACC 89 8B 90 07 01 00                       mov     [rbx+10790h], ecx
.std:000000014F07DAD2 48 8B CB                                mov     rcx, rbx
.std:000000014F07DAD5 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DADB E8 00 98 00 00                          call    sub_14F0872E0
.std:000000014F07DAE0 C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07DAE8 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DAED C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DAF2 8B 08                                   mov     ecx, [rax]
.std:000000014F07DAF4 48 8D 05 4D FB 1D 04                    lea     rax, aOuter_1   ; "Outer"
.std:000000014F07DAFB 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DB00 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DB05 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DB0B 89 8B A4 04 01 00                       mov     [rbx+104A4h], ecx
.std:000000014F07DB11 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DB16 48 8B CB                                mov     rcx, rbx
.std:000000014F07DB19 E8 C2 97 00 00                          call    sub_14F0872E0
.std:000000014F07DB1E C7 44 24 28 03 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 3
.std:000000014F07DB26 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DB2B C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DB30 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DB35 8B 08                                   mov     ecx, [rax]
.std:000000014F07DB37 48 8D 05 56 EF 0F 04                    lea     rax, unk_15317CA94
.std:000000014F07DB3E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DB43 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DB48 89 8B 94 07 01 00                       mov     [rbx+10794h], ecx
.std:000000014F07DB4E 48 8B CB                                mov     rcx, rbx
.std:000000014F07DB51 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DB57 E8 84 97 00 00                          call    sub_14F0872E0
.std:000000014F07DB5C C7 44 24 28 0F 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Fh
.std:000000014F07DB64 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DB69 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DB6E 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DB73 8B 08                                   mov     ecx, [rax]
.std:000000014F07DB75 48 8D 05 C4 03 23 08                    lea     rax, aRotatorpropert ; "RotatorProperty"
.std:000000014F07DB7C 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DB81 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DB86 89 8B 98 07 01 00                       mov     [rbx+10798h], ecx
.std:000000014F07DB8C 48 8B CB                                mov     rcx, rbx
.std:000000014F07DB8F 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DB95 E8 46 97 00 00                          call    sub_14F0872E0
.std:000000014F07DB9A C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07DBA2 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DBA7 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DBAC 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DBB1 8B 08                                   mov     ecx, [rax]
.std:000000014F07DBB3 48 8D 05 22 0C 3D 05                    lea     rax, unk_15444E7DC
.std:000000014F07DBBA 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DBBF 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DBC4 89 8B 70 04 01 00                       mov     [rbx+10470h], ecx
.std:000000014F07DBCA 48 8B CB                                mov     rcx, rbx
.std:000000014F07DBCD 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DBD3 E8 08 97 00 00                          call    sub_14F0872E0
.std:000000014F07DBD8 C7 44 24 28 0A 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ah
.std:000000014F07DBE0 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DBE5 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DBEA 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DBEF 8B 08                                   mov     ecx, [rax]
.std:000000014F07DBF1 48 8D 05 58 03 23 08                    lea     rax, unk_1572ADF50
.std:000000014F07DBF8 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DBFD 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DC02 89 8B 9C 07 01 00                       mov     [rbx+1079Ch], ecx
.std:000000014F07DC08 48 8B CB                                mov     rcx, rbx
.std:000000014F07DC0B 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DC11 E8 CA 96 00 00                          call    sub_14F0872E0
.std:000000014F07DC16 C7 44 24 28 0F 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Fh
.std:000000014F07DC1E 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DC23 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DC28 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DC2D 8B 08                                   mov     ecx, [rax]
.std:000000014F07DC2F 48 8D 05 2A 03 23 08                    lea     rax, aPersistentleve ; "PersistentLevel"
.std:000000014F07DC36 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DC3B 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DC40 89 8B A0 07 01 00                       mov     [rbx+107A0h], ecx
.std:000000014F07DC46 48 8B CB                                mov     rcx, rbx
.std:000000014F07DC49 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DC4F E8 8C 96 00 00                          call    sub_14F0872E0
.std:000000014F07DC54 C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07DC5C 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DC61 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DC66 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DC6B 8B 08                                   mov     ecx, [rax]
.std:000000014F07DC6D 48 8D 05 FC 02 23 08                    lea     rax, unk_1572ADF70
.std:000000014F07DC74 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DC79 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DC7E 89 8B A4 07 01 00                       mov     [rbx+107A4h], ecx
.std:000000014F07DC84 48 8B CB                                mov     rcx, rbx
.std:000000014F07DC87 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DC8D E8 4E 96 00 00                          call    sub_14F0872E0
.std:000000014F07DC92 C7 44 24 28 03 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 3
.std:000000014F07DC9A C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DC9F 8B 08                                   mov     ecx, [rax]
.std:000000014F07DCA1 48 8D 05 00 A1 B3 04                    lea     rax, unk_153BB7DA8
.std:000000014F07DCA8 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DCAD 89 8B A8 07 01 00                       mov     [rbx+107A8h], ecx
.std:000000014F07DCB3 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DCB8 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DCBD 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DCC2 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DCC8 48 8B CB                                mov     rcx, rbx
.std:000000014F07DCCB E8 10 96 00 00                          call    sub_14F0872E0
.std:000000014F07DCD0 C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07DCD8 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DCDD C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DCE2 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DCE7 8B 08                                   mov     ecx, [rax]
.std:000000014F07DCE9 48 8D 05 AC A0 B3 04                    lea     rax, aHigh_1    ; "High"
.std:000000014F07DCF0 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DCF5 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DCFA 89 8B 08 08 01 00                       mov     [rbx+10808h], ecx
.std:000000014F07DD00 48 8B CB                                mov     rcx, rbx
.std:000000014F07DD03 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DD09 E8 D2 95 00 00                          call    sub_14F0872E0
.std:000000014F07DD0E C7 44 24 28 0B 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Bh
.std:000000014F07DD16 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DD1B C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DD20 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DD25 8B 08                                   mov     ecx, [rax]
.std:000000014F07DD27 48 8D 05 62 F5 36 05                    lea     rax, aNetworkguid ; "NetworkGUID"
.std:000000014F07DD2E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DD33 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DD38 89 8B 0C 08 01 00                       mov     [rbx+1080Ch], ecx
.std:000000014F07DD3E 48 8B CB                                mov     rcx, rbx
.std:000000014F07DD41 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DD47 E8 94 95 00 00                          call    sub_14F0872E0
.std:000000014F07DD4C C7 44 24 28 0A 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ah
.std:000000014F07DD54 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DD59 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DD5E 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DD63 8B 08                                   mov     ecx, [rax]
.std:000000014F07DD65 48 8D 05 14 02 23 08                    lea     rax, unk_1572ADF80
.std:000000014F07DD6C 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DD71 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DD76 89 8B 10 08 01 00                       mov     [rbx+10810h], ecx
.std:000000014F07DD7C 48 8B CB                                mov     rcx, rbx
.std:000000014F07DD7F 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DD85 E8 56 95 00 00                          call    sub_14F0872E0
.std:000000014F07DD8A C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07DD92 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DD97 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DD9C 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DDA1 8B 08                                   mov     ecx, [rax]
.std:000000014F07DDA3 48 8D 05 E6 01 23 08                    lea     rax, unk_1572ADF90
.std:000000014F07DDAA 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DDAF 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DDB4 89 8B 14 08 01 00                       mov     [rbx+10814h], ecx
.std:000000014F07DDBA 48 8B CB                                mov     rcx, rbx
.std:000000014F07DDBD 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DDC3 E8 18 95 00 00                          call    sub_14F0872E0
.std:000000014F07DDC8 C7 44 24 28 19 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 19h
.std:000000014F07DDD0 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DDD5 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DDDA 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DDDF 8B 08                                   mov     ecx, [rax]
.std:000000014F07DDE1 48 8D 05 B8 01 23 08                    lea     rax, aMulticastdeleg ; "MulticastDelegateProperty"
.std:000000014F07DDE8 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DDED 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DDF2 89 8B 18 08 01 00                       mov     [rbx+10818h], ecx
.std:000000014F07DDF8 48 8B CB                                mov     rcx, rbx
.std:000000014F07DDFB 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DE01 E8 DA 94 00 00                          call    sub_14F0872E0
.std:000000014F07DE06 C7 44 24 28 0D 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Dh
.std:000000014F07DE0E 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DE13 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DE18 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DE1D 8B 08                                   mov     ecx, [rax]
.std:000000014F07DE1F 48 8D 05 9A 01 23 08                    lea     rax, aOtherchildren ; "OtherChildren"
.std:000000014F07DE26 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DE2B 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DE30 89 8B 80 04 01 00                       mov     [rbx+10480h], ecx
.std:000000014F07DE36 48 8B CB                                mov     rcx, rbx
.std:000000014F07DE39 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DE3F E8 9C 94 00 00                          call    sub_14F0872E0
.std:000000014F07DE44 8B 08                                   mov     ecx, [rax]
.std:000000014F07DE46 48 8D 05 DB E2 0D 04                    lea     rax, unk_15315C128
.std:000000014F07DE4D 89 8B 1C 08 01 00                       mov     [rbx+1081Ch], ecx
.std:000000014F07DE53 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DE58 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DE5D C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07DE65 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DE6A C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DE6F 48 8B CB                                mov     rcx, rbx
.std:000000014F07DE72 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DE77 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DE7D E8 5E 94 00 00                          call    sub_14F0872E0
.std:000000014F07DE82 C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07DE8A 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DE8F C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DE94 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DE99 8B 08                                   mov     ecx, [rax]
.std:000000014F07DE9B 48 8D 05 C6 A5 11 04                    lea     rax, aRotation  ; "Rotation"
.std:000000014F07DEA2 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DEA7 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DEAC 89 8B 20 08 01 00                       mov     [rbx+10820h], ecx
.std:000000014F07DEB2 48 8B CB                                mov     rcx, rbx
.std:000000014F07DEB5 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DEBB E8 20 94 00 00                          call    sub_14F0872E0
.std:000000014F07DEC0 C7 44 24 28 0E 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Eh
.std:000000014F07DEC8 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DECD C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DED2 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DED7 8B 08                                   mov     ecx, [rax]
.std:000000014F07DED9 48 8D 05 F0 00 23 08                    lea     rax, unk_1572ADFD0
.std:000000014F07DEE0 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DEE5 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DEEA 89 8B 24 08 01 00                       mov     [rbx+10824h], ecx
.std:000000014F07DEF0 48 8B CB                                mov     rcx, rbx
.std:000000014F07DEF3 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DEF9 E8 E2 93 00 00                          call    sub_14F0872E0
.std:000000014F07DEFE C7 44 24 28 03 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 3
.std:000000014F07DF06 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DF0B C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DF10 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DF15 8B 08                                   mov     ecx, [rax]
.std:000000014F07DF17 48 8D 05 C2 00 23 08                    lea     rax, unk_1572ADFE0
.std:000000014F07DF1E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DF23 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DF28 89 8B A0 04 01 00                       mov     [rbx+104A0h], ecx
.std:000000014F07DF2E 48 8B CB                                mov     rcx, rbx
.std:000000014F07DF31 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DF37 E8 A4 93 00 00                          call    sub_14F0872E0
.std:000000014F07DF3C C7 44 24 28 0E 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Eh
.std:000000014F07DF44 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DF49 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DF4E 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DF53 8B 08                                   mov     ecx, [rax]
.std:000000014F07DF55 48 8D 05 5C A1 BA 05                    lea     rax, unk_154C280B8
.std:000000014F07DF5C 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DF61 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DF66 89 8B 28 08 01 00                       mov     [rbx+10828h], ecx
.std:000000014F07DF6C 48 8B CB                                mov     rcx, rbx
.std:000000014F07DF6F 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DF75 E8 66 93 00 00                          call    sub_14F0872E0
.std:000000014F07DF7A C7 44 24 28 0E 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Eh
.std:000000014F07DF82 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DF87 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DF8C 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DF91 8B 08                                   mov     ecx, [rax]
.std:000000014F07DF93 48 8D 05 4E 00 23 08                    lea     rax, unk_1572ADFE8
.std:000000014F07DF9A 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DF9F 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DFA4 89 8B 68 04 01 00                       mov     [rbx+10468h], ecx
.std:000000014F07DFAA 48 8B CB                                mov     rcx, rbx
.std:000000014F07DFAD 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DFB3 E8 28 93 00 00                          call    sub_14F0872E0
.std:000000014F07DFB8 C7 44 24 28 0B 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Bh
.std:000000014F07DFC0 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DFC5 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07DFCA 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07DFCF 8B 08                                   mov     ecx, [rax]
.std:000000014F07DFD1 48 8D 05 20 00 23 08                    lea     rax, aAudiothread ; "AudioThread"
.std:000000014F07DFD8 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07DFDD 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07DFE2 89 8B 2C 08 01 00                       mov     [rbx+1082Ch], ecx
.std:000000014F07DFE8 48 8B CB                                mov     rcx, rbx
.std:000000014F07DFEB 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07DFF1 E8 EA 92 00 00                          call    sub_14F0872E0
.std:000000014F07DFF6 8B 08                                   mov     ecx, [rax]
.std:000000014F07DFF8 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07DFFD C7 44 24 28 02 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 2
.std:000000014F07E005 48 8D 05 F0 89 6B 04                    lea     rax, aId_0      ; "ID"
.std:000000014F07E00C 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E011 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E016 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E01B 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E020 89 8B 30 08 01 00                       mov     [rbx+10830h], ecx
.std:000000014F07E026 48 8B CB                                mov     rcx, rbx
.std:000000014F07E029 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E02F E8 AC 92 00 00                          call    sub_14F0872E0
.std:000000014F07E034 C7 44 24 28 11 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 11h
.std:000000014F07E03C 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E041 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E046 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E04B 8B 08                                   mov     ecx, [rax]
.std:000000014F07E04D 48 8D 05 B4 FF 22 08                    lea     rax, aStructrefprope ; "StructRefProperty"
.std:000000014F07E054 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E059 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E05E 89 8B 34 08 01 00                       mov     [rbx+10834h], ecx
.std:000000014F07E064 48 8B CB                                mov     rcx, rbx
.std:000000014F07E067 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E06D E8 6E 92 00 00                          call    sub_14F0872E0
.std:000000014F07E072 C7 44 24 28 0F 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Fh
.std:000000014F07E07A 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E07F C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E084 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E089 8B 08                                   mov     ecx, [rax]
.std:000000014F07E08B 48 8D 05 8E FF 22 08                    lea     rax, aUserdefinedenu ; "UserDefinedEnum"
.std:000000014F07E092 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E097 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E09C 89 8B 84 04 01 00                       mov     [rbx+10484h], ecx
.std:000000014F07E0A2 48 8B CB                                mov     rcx, rbx
.std:000000014F07E0A5 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E0AB E8 30 92 00 00                          call    sub_14F0872E0
.std:000000014F07E0B0 C7 44 24 28 07 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 7
.std:000000014F07E0B8 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E0BD C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E0C2 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E0C7 8B 08                                   mov     ecx, [rax]
.std:000000014F07E0C9 48 8D 05 68 73 E0 05                    lea     rax, aControl_1 ; "Control"
.std:000000014F07E0D0 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E0D5 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E0DA 89 8B 38 08 01 00                       mov     [rbx+10838h], ecx
.std:000000014F07E0E0 48 8B CB                                mov     rcx, rbx
.std:000000014F07E0E3 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E0E9 E8 F2 91 00 00                          call    sub_14F0872E0
.std:000000014F07E0EE C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07E0F6 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E0FB C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E100 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E105 8B 08                                   mov     ecx, [rax]
.std:000000014F07E107 48 8D 05 1E 05 8E 04                    lea     rax, aVoice_0   ; "Voice"
.std:000000014F07E10E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E113 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E118 89 8B 3C 08 01 00                       mov     [rbx+1083Ch], ecx
.std:000000014F07E11E 48 8B CB                                mov     rcx, rbx
.std:000000014F07E121 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E127 E8 B4 91 00 00                          call    sub_14F0872E0
.std:000000014F07E12C C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07E134 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E139 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E13E 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E143 8B 08                                   mov     ecx, [rax]
.std:000000014F07E145 48 8D 05 E4 FE 22 08                    lea     rax, unk_1572AE030
.std:000000014F07E14C 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E151 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E156 89 8B 40 08 01 00                       mov     [rbx+10840h], ecx
.std:000000014F07E15C 48 8B CB                                mov     rcx, rbx
.std:000000014F07E15F 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E165 E8 76 91 00 00                          call    sub_14F0872E0
.std:000000014F07E16A C7 44 24 28 12 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 12h
.std:000000014F07E172 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E177 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E17C 8B 08                                   mov     ecx, [rax]
.std:000000014F07E17E 48 8D 05 B3 FE 22 08                    lea     rax, unk_1572AE038
.std:000000014F07E185 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E18A 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E18F 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E195 89 8B 44 08 01 00                       mov     [rbx+10844h], ecx
.std:000000014F07E19B 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E1A0 48 8B CB                                mov     rcx, rbx
.std:000000014F07E1A3 E8 38 91 00 00                          call    sub_14F0872E0
.std:000000014F07E1A8 C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07E1B0 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E1B5 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E1BA 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E1BF 8B 08                                   mov     ecx, [rax]
.std:000000014F07E1C1 48 8D 05 84 FE 22 08                    lea     rax, unk_1572AE04C
.std:000000014F07E1C8 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E1CD 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E1D2 89 8B 8C 04 01 00                       mov     [rbx+1048Ch], ecx
.std:000000014F07E1D8 48 8B CB                                mov     rcx, rbx
.std:000000014F07E1DB 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E1E1 E8 FA 90 00 00                          call    sub_14F0872E0
.std:000000014F07E1E6 C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07E1EE 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E1F3 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E1F8 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E1FD 8B 08                                   mov     ecx, [rax]
.std:000000014F07E1FF 48 8D 05 4E FE 22 08                    lea     rax, unk_1572AE054
.std:000000014F07E206 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E20B 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E210 89 8B 48 08 01 00                       mov     [rbx+10848h], ecx
.std:000000014F07E216 48 8B CB                                mov     rcx, rbx
.std:000000014F07E219 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E21F E8 BC 90 00 00                          call    sub_14F0872E0
.std:000000014F07E224 C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07E22C 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E231 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E236 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E23B 8B 08                                   mov     ecx, [rax]
.std:000000014F07E23D 48 8D 05 1C FE 22 08                    lea     rax, unk_1572AE060
.std:000000014F07E244 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E249 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E24E 89 8B 4C 08 01 00                       mov     [rbx+1084Ch], ecx
.std:000000014F07E254 48 8B CB                                mov     rcx, rbx
.std:000000014F07E257 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E25D E8 7E 90 00 00                          call    sub_14F0872E0
.std:000000014F07E262 C7 44 24 28 16 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 16h
.std:000000014F07E26A 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E26F C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E274 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E279 8B 08                                   mov     ecx, [rax]
.std:000000014F07E27B 48 8D 05 EE FD 22 08                    lea     rax, unk_1572AE070
.std:000000014F07E282 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E287 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E28C 89 8B 78 04 01 00                       mov     [rbx+10478h], ecx
.std:000000014F07E292 48 8B CB                                mov     rcx, rbx
.std:000000014F07E295 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E29B E8 40 90 00 00                          call    sub_14F0872E0
.std:000000014F07E2A0 C7 44 24 28 16 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 16h
.std:000000014F07E2A8 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E2AD C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E2B2 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E2B7 8B 08                                   mov     ecx, [rax]
.std:000000014F07E2B9 48 8D 05 C8 FD 22 08                    lea     rax, unk_1572AE088
.std:000000014F07E2C0 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E2C5 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E2CA 89 8B DC 07 01 00                       mov     [rbx+107DCh], ecx
.std:000000014F07E2D0 48 8B CB                                mov     rcx, rbx
.std:000000014F07E2D3 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E2D9 E8 02 90 00 00                          call    sub_14F0872E0
.std:000000014F07E2DE C7 44 24 28 15 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 15h
.std:000000014F07E2E6 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E2EB C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E2F0 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E2F5 8B 08                                   mov     ecx, [rax]
.std:000000014F07E2F7 48 8D 05 A2 FD 22 08                    lea     rax, aTexturescalepa ; "TextureScaleParameter"
.std:000000014F07E2FE 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E303 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E308 89 8B E0 07 01 00                       mov     [rbx+107E0h], ecx
.std:000000014F07E30E 48 8B CB                                mov     rcx, rbx
.std:000000014F07E311 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E317 E8 C4 8F 00 00                          call    sub_14F0872E0
.std:000000014F07E31C C7 44 24 28 09 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 9
.std:000000014F07E324 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E329 8B 08                                   mov     ecx, [rax]
.std:000000014F07E32B 48 8D 05 86 FD 22 08                    lea     rax, aImpactvel ; "ImpactVel"
.std:000000014F07E332 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E337 89 8B E4 07 01 00                       mov     [rbx+107E4h], ecx
.std:000000014F07E33D 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E342 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E347 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E34C 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E352 48 8B CB                                mov     rcx, rbx
.std:000000014F07E355 E8 86 8F 00 00                          call    sub_14F0872E0
.std:000000014F07E35A C7 44 24 28 0D 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Dh
.std:000000014F07E362 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E367 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E36C 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E371 8B 08                                   mov     ecx, [rax]
.std:000000014F07E373 48 8D 05 4E FD 22 08                    lea     rax, aInt32property ; "Int32Property"
.std:000000014F07E37A 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E37F 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E384 89 8B E8 07 01 00                       mov     [rbx+107E8h], ecx
.std:000000014F07E38A 48 8B CB                                mov     rcx, rbx
.std:000000014F07E38D 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E393 E8 48 8F 00 00                          call    sub_14F0872E0
.std:000000014F07E398 C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07E3A0 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E3A5 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E3AA 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E3AF 8B 08                                   mov     ecx, [rax]
.std:000000014F07E3B1 48 8D 05 20 FD 22 08                    lea     rax, unk_1572AE0D8
.std:000000014F07E3B8 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E3BD 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E3C2 89 8B 94 04 01 00                       mov     [rbx+10494h], ecx
.std:000000014F07E3C8 48 8B CB                                mov     rcx, rbx
.std:000000014F07E3CB 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E3D1 E8 0A 8F 00 00                          call    sub_14F0872E0
.std:000000014F07E3D6 C7 44 24 28 17 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 17h
.std:000000014F07E3DE 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E3E3 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E3E8 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E3ED 8B 08                                   mov     ecx, [rax]
.std:000000014F07E3EF 48 8D 05 F2 FC 22 08                    lea     rax, aTextureoffset1 ; "TextureOffset1Parameter"
.std:000000014F07E3F6 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E3FB 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E400 89 8B EC 07 01 00                       mov     [rbx+107ECh], ecx
.std:000000014F07E406 48 8B CB                                mov     rcx, rbx
.std:000000014F07E409 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E40F E8 CC 8E 00 00                          call    sub_14F0872E0
.std:000000014F07E414 C7 44 24 28 1B 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 1Bh
.std:000000014F07E41C 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E421 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E426 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E42B 8B 08                                   mov     ecx, [rax]
.std:000000014F07E42D 48 8D 05 CC FC 22 08                    lea     rax, aMeshemitterdyn ; "MeshEmitterDynamicParameter"
.std:000000014F07E434 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E439 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E43E 89 8B F0 07 01 00                       mov     [rbx+107F0h], ecx
.std:000000014F07E444 48 8B CB                                mov     rcx, rbx
.std:000000014F07E447 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E44D E8 8E 8E 00 00                          call    sub_14F0872E0
.std:000000014F07E452 C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07E45A 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E45F C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E464 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E469 8B 08                                   mov     ecx, [rax]
.std:000000014F07E46B 48 8D 05 3A 41 D0 04                    lea     rax, aDgram     ; "DGram"
.std:000000014F07E472 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E477 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E47C 89 8B F4 07 01 00                       mov     [rbx+107F4h], ecx
.std:000000014F07E482 48 8B CB                                mov     rcx, rbx
.std:000000014F07E485 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E48B E8 50 8E 00 00                          call    sub_14F0872E0
.std:000000014F07E490 C7 44 24 28 06 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 6
.std:000000014F07E498 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E49D C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E4A2 48 8D 54 24 34                          lea     rdx, [rsp+1B0h+var_17C]
.std:000000014F07E4A7 8B 08                                   mov     ecx, [rax]
.std:000000014F07E4A9 48 8D 05 6C FC 22 08                    lea     rax, unk_1572AE11C
.std:000000014F07E4B0 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E4B5 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E4BA 89 8B A0 08 01 00                       mov     [rbx+108A0h], ecx
.std:000000014F07E4C0 48 8B CB                                mov     rcx, rbx
.std:000000014F07E4C3 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E4C9 E8 12 8E 00 00                          call    sub_14F0872E0
.std:000000014F07E4CE 8B 08                                   mov     ecx, [rax]
.std:000000014F07E4D0 48 8D 05 51 FC 22 08                    lea     rax, aInt64property ; "Int64Property"
.std:000000014F07E4D7 89 8B A4 08 01 00                       mov     [rbx+108A4h], ecx
.std:000000014F07E4DD 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E4E2 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E4E7 C7 44 24 28 0D 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Dh
.std:000000014F07E4EF 48 8D 55 54                             lea     rdx, [rbp+0B0h+var_5C]
.std:000000014F07E4F3 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E4F8 48 8B CB                                mov     rcx, rbx
.std:000000014F07E4FB 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E500 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E506 E8 D5 8D 00 00                          call    sub_14F0872E0
.std:000000014F07E50B C7 44 24 28 0D 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Dh
.std:000000014F07E513 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E518 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E51D 48 8D 55 58                             lea     rdx, [rbp+0B0h+var_58]
.std:000000014F07E521 8B 08                                   mov     ecx, [rax]
.std:000000014F07E523 48 8D 05 0E FC 22 08                    lea     rax, aGamenetdriver_0 ; "GameNetDriver"
.std:000000014F07E52A 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E52F 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E534 89 8B 90 04 01 00                       mov     [rbx+10490h], ecx
.std:000000014F07E53A 48 8B CB                                mov     rcx, rbx
.std:000000014F07E53D 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E543 E8 98 8D 00 00                          call    sub_14F0872E0
.std:000000014F07E548 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07E550 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E555 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E55A 48 8D 55 5C                             lea     rdx, [rbp+0B0h+var_54]
.std:000000014F07E55E 8B 08                                   mov     ecx, [rax]
.std:000000014F07E560 48 8D 05 E1 FB 22 08                    lea     rax, unk_1572AE148
.std:000000014F07E567 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E56C 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E571 89 8B A8 08 01 00                       mov     [rbx+108A8h], ecx
.std:000000014F07E577 48 8B CB                                mov     rcx, rbx
.std:000000014F07E57A 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E580 E8 5B 8D 00 00                          call    sub_14F0872E0
.std:000000014F07E585 C7 44 24 28 0B 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Bh
.std:000000014F07E58D 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E592 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E597 48 8D 54 24 54                          lea     rdx, [rsp+1B0h+var_15C]
.std:000000014F07E59C 8B 08                                   mov     ecx, [rax]
.std:000000014F07E59E 48 8D 05 BB FB 22 08                    lea     rax, aSetproperty ; "SetProperty"
.std:000000014F07E5A5 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E5AA 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E5AF 89 8B AC 08 01 00                       mov     [rbx+108ACh], ecx
.std:000000014F07E5B5 48 8B CB                                mov     rcx, rbx
.std:000000014F07E5B8 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E5BE E8 1D 8D 00 00                          call    sub_14F0872E0
.std:000000014F07E5C3 C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07E5CB 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E5D0 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E5D5 48 8D 54 24 58                          lea     rdx, [rsp+1B0h+var_158]
.std:000000014F07E5DA 8B 08                                   mov     ecx, [rax]
.std:000000014F07E5DC 48 8D 05 8D FB 22 08                    lea     rax, unk_1572AE170
.std:000000014F07E5E3 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E5E8 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E5ED 89 8B B4 04 01 00                       mov     [rbx+104B4h], ecx
.std:000000014F07E5F3 48 8B CB                                mov     rcx, rbx
.std:000000014F07E5F6 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E5FC E8 DF 8C 00 00                          call    sub_14F0872E0
.std:000000014F07E601 C7 44 24 28 0D 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Dh
.std:000000014F07E609 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E60E C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E613 48 8D 54 24 5C                          lea     rdx, [rsp+1B0h+var_154]
.std:000000014F07E618 8B 08                                   mov     ecx, [rax]
.std:000000014F07E61A 48 8D 05 5F FB 22 08                    lea     rax, aMeshnetdriver ; "MeshNetDriver"
.std:000000014F07E621 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E626 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E62B 89 8B CC 08 01 00                       mov     [rbx+108CCh], ecx
.std:000000014F07E631 48 8B CB                                mov     rcx, rbx
.std:000000014F07E634 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E63A E8 A1 8C 00 00                          call    sub_14F0872E0
.std:000000014F07E63F C7 44 24 28 0F 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Fh
.std:000000014F07E647 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E64C C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E651 48 8D 54 24 60                          lea     rdx, [rsp+1B0h+var_150]
.std:000000014F07E656 8B 08                                   mov     ecx, [rax]
.std:000000014F07E658 48 8D 05 31 FB 22 08                    lea     rax, aLivestreamvoic ; "LiveStreamVoice"
.std:000000014F07E65F 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E664 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E669 89 8B D0 08 01 00                       mov     [rbx+108D0h], ecx
.std:000000014F07E66F 48 8B CB                                mov     rcx, rbx
.std:000000014F07E672 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E678 E8 63 8C 00 00                          call    sub_14F0872E0
.std:000000014F07E67D 8B 08                                   mov     ecx, [rax]
.std:000000014F07E67F 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E684 C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07E68C 48 8D 05 0D FB 22 08                    lea     rax, unk_1572AE1A0
.std:000000014F07E693 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E698 48 8D 54 24 64                          lea     rdx, [rsp+1B0h+var_14C]
.std:000000014F07E69D C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E6A2 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E6A7 89 8B D4 08 01 00                       mov     [rbx+108D4h], ecx
.std:000000014F07E6AD 48 8B CB                                mov     rcx, rbx
.std:000000014F07E6B0 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E6B6 E8 25 8C 00 00                          call    sub_14F0872E0
.std:000000014F07E6BB C7 44 24 28 06 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 6
.std:000000014F07E6C3 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E6C8 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E6CD 48 8D 54 24 68                          lea     rdx, [rsp+1B0h+var_148]
.std:000000014F07E6D2 8B 08                                   mov     ecx, [rax]
.std:000000014F07E6D4 48 8D 05 AD 87 0A 04                    lea     rax, aEngine_2  ; "Engine"
.std:000000014F07E6DB 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E6E0 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E6E5 89 8B B8 04 01 00                       mov     [rbx+104B8h], ecx
.std:000000014F07E6EB 48 8B CB                                mov     rcx, rbx
.std:000000014F07E6EE 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E6F4 E8 E7 8B 00 00                          call    sub_14F0872E0
.std:000000014F07E6F9 C7 44 24 28 06 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 6
.std:000000014F07E701 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E706 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E70B 48 8D 54 24 6C                          lea     rdx, [rsp+1B0h+var_144]
.std:000000014F07E710 8B 08                                   mov     ecx, [rax]
.std:000000014F07E712 48 8D 05 D7 EB 6B 04                    lea     rax, aEditor_0  ; "Editor"
.std:000000014F07E719 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E71E 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E723 89 8B BC 04 01 00                       mov     [rbx+104BCh], ecx
.std:000000014F07E729 48 8B CB                                mov     rcx, rbx
.std:000000014F07E72C 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E732 E8 A9 8B 00 00                          call    sub_14F0872E0
.std:000000014F07E737 C7 44 24 28 0B 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Bh
.std:000000014F07E73F 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E744 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E749 48 8D 54 24 70                          lea     rdx, [rsp+1B0h+var_140]
.std:000000014F07E74E 8B 08                                   mov     ecx, [rax]
.std:000000014F07E750 48 8D 05 51 FA 22 08                    lea     rax, aCoreuobject_0 ; "CoreUObject"
.std:000000014F07E757 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E75C 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E761 89 8B C0 04 01 00                       mov     [rbx+104C0h], ecx
.std:000000014F07E767 48 8B CB                                mov     rcx, rbx
.std:000000014F07E76A 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E770 E8 6B 8B 00 00                          call    sub_14F0872E0
.std:000000014F07E775 C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07E77D 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E782 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E787 48 8D 54 24 74                          lea     rdx, [rsp+1B0h+var_13C]
.std:000000014F07E78C 8B 08                                   mov     ecx, [rax]
.std:000000014F07E78E 48 8D 05 23 FA 22 08                    lea     rax, unk_1572AE1B8
.std:000000014F07E795 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E79A 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E79F 89 8B C4 04 01 00                       mov     [rbx+104C4h], ecx
.std:000000014F07E7A5 48 8B CB                                mov     rcx, rbx
.std:000000014F07E7A8 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E7AE E8 2D 8B 00 00                          call    sub_14F0872E0
.std:000000014F07E7B3 C7 44 24 28 06 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 6
.std:000000014F07E7BB 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E7C0 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E7C5 48 8D 54 24 78                          lea     rdx, [rsp+1B0h+var_138]
.std:000000014F07E7CA 8B 08                                   mov     ecx, [rax]
.std:000000014F07E7CC 48 8D 05 75 89 67 04                    lea     rax, unk_1536F7148
.std:000000014F07E7D3 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E7D8 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E7DD 89 8B C8 04 01 00                       mov     [rbx+104C8h], ecx
.std:000000014F07E7E3 48 8B CB                                mov     rcx, rbx
.std:000000014F07E7E6 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E7EC E8 EF 8A 00 00                          call    sub_14F0872E0
.std:000000014F07E7F1 C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07E7F9 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E7FE C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E803 8B 08                                   mov     ecx, [rax]
.std:000000014F07E805 48 8D 05 9C AC 13 04                    lea     rax, aPoint_0   ; "Point"
.std:000000014F07E80C 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E811 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E816 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E81C 89 8B F0 08 01 00                       mov     [rbx+108F0h], ecx
.std:000000014F07E822 48 8D 54 24 7C                          lea     rdx, [rsp+1B0h+var_134]
.std:000000014F07E827 48 8B CB                                mov     rcx, rbx
.std:000000014F07E82A E8 B1 8A 00 00                          call    sub_14F0872E0
.std:000000014F07E82F C7 44 24 28 12 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 12h
.std:000000014F07E837 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E83C C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E841 48 8D 55 80                             lea     rdx, [rbp+0B0h+var_130]
.std:000000014F07E845 8B 08                                   mov     ecx, [rax]
.std:000000014F07E847 48 8D 05 7A F9 22 08                    lea     rax, unk_1572AE1C8
.std:000000014F07E84E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E853 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E858 89 8B F4 08 01 00                       mov     [rbx+108F4h], ecx
.std:000000014F07E85E 48 8B CB                                mov     rcx, rbx
.std:000000014F07E861 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E867 E8 74 8A 00 00                          call    sub_14F0872E0
.std:000000014F07E86C C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07E874 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E879 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E87E 48 8D 55 84                             lea     rdx, [rbp+0B0h+var_12C]
.std:000000014F07E882 8B 08                                   mov     ecx, [rax]
.std:000000014F07E884 48 8D 05 51 F9 22 08                    lea     rax, aAniso     ; "Aniso"
.std:000000014F07E88B 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E890 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E895 89 8B 88 04 01 00                       mov     [rbx+10488h], ecx
.std:000000014F07E89B 48 8B CB                                mov     rcx, rbx
.std:000000014F07E89E 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E8A4 E8 37 8A 00 00                          call    sub_14F0872E0
.std:000000014F07E8A9 C7 44 24 28 12 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 12h
.std:000000014F07E8B1 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E8B6 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E8BB 48 8D 55 88                             lea     rdx, [rbp+0B0h+var_128]
.std:000000014F07E8BF 8B 08                                   mov     ecx, [rax]
.std:000000014F07E8C1 48 8D 05 20 F9 22 08                    lea     rax, unk_1572AE1E8
.std:000000014F07E8C8 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E8CD 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E8D2 89 8B F8 08 01 00                       mov     [rbx+108F8h], ecx
.std:000000014F07E8D8 48 8B CB                                mov     rcx, rbx
.std:000000014F07E8DB 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E8E1 E8 FA 89 00 00                          call    sub_14F0872E0
.std:000000014F07E8E6 C7 44 24 28 09 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 9
.std:000000014F07E8EE 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E8F3 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E8F8 48 8D 55 8C                             lea     rdx, [rbp+0B0h+var_124]
.std:000000014F07E8FC 8B 08                                   mov     ecx, [rax]
.std:000000014F07E8FE 48 8D 05 FB F8 22 08                    lea     rax, aUngrouped_0 ; "UnGrouped"
.std:000000014F07E905 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E90A 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E90F 89 8B FC 08 01 00                       mov     [rbx+108FCh], ecx
.std:000000014F07E915 48 8B CB                                mov     rcx, rbx
.std:000000014F07E918 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E91E E8 BD 89 00 00                          call    sub_14F0872E0
.std:000000014F07E923 C7 44 24 28 09 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 9
.std:000000014F07E92B 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E930 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E935 48 8D 55 90                             lea     rdx, [rbp+0B0h+var_120]
.std:000000014F07E939 8B 08                                   mov     ecx, [rax]
.std:000000014F07E93B 48 8D 05 CE F8 22 08                    lea     rax, aVoicechat ; "VoiceChat"
.std:000000014F07E942 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E947 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E94C 89 8B 1C 09 01 00                       mov     [rbx+1091Ch], ecx
.std:000000014F07E952 48 8B CB                                mov     rcx, rbx
.std:000000014F07E955 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E95B E8 80 89 00 00                          call    sub_14F0872E0
.std:000000014F07E960 C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07E968 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E96D C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E972 48 8D 55 94                             lea     rdx, [rbp+0B0h+var_11C]
.std:000000014F07E976 8B 08                                   mov     ecx, [rax]
.std:000000014F07E978 48 8D 05 A1 F8 22 08                    lea     rax, unk_1572AE220
.std:000000014F07E97F 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E984 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E989 89 8B 20 09 01 00                       mov     [rbx+10920h], ecx
.std:000000014F07E98F 48 8B CB                                mov     rcx, rbx
.std:000000014F07E992 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E998 E8 43 89 00 00                          call    sub_14F0872E0
.std:000000014F07E99D C7 44 24 28 07 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 7
.std:000000014F07E9A5 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E9AA 8B 08                                   mov     ecx, [rax]
.std:000000014F07E9AC 48 8D 05 DD C8 37 05                    lea     rax, aPlaying_2 ; "Playing"
.std:000000014F07E9B3 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E9B8 89 8B 9C 04 01 00                       mov     [rbx+1049Ch], ecx
.std:000000014F07E9BE 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07E9C3 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E9C8 48 8D 55 98                             lea     rdx, [rbp+0B0h+var_118]
.std:000000014F07E9CC 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07E9D2 48 8B CB                                mov     rcx, rbx
.std:000000014F07E9D5 E8 06 89 00 00                          call    sub_14F0872E0
.std:000000014F07E9DA C7 44 24 28 0A 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ah
.std:000000014F07E9E2 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07E9E7 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07E9EC 48 8D 55 9C                             lea     rdx, [rbp+0B0h+var_114]
.std:000000014F07E9F0 8B 08                                   mov     ecx, [rax]
.std:000000014F07E9F2 48 8D 05 37 F8 22 08                    lea     rax, unk_1572AE230
.std:000000014F07E9F9 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07E9FE 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EA03 89 8B 40 09 01 00                       mov     [rbx+10940h], ecx
.std:000000014F07EA09 48 8B CB                                mov     rcx, rbx
.std:000000014F07EA0C 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EA12 E8 C9 88 00 00                          call    sub_14F0872E0
.std:000000014F07EA17 C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07EA1F 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EA24 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EA29 48 8D 55 A0                             lea     rdx, [rbp+0B0h+var_110]
.std:000000014F07EA2D 8B 08                                   mov     ecx, [rax]
.std:000000014F07EA2F 48 8D 05 D2 30 50 05                    lea     rax, unk_154581B08
.std:000000014F07EA36 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EA3B 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EA40 89 8B 48 09 01 00                       mov     [rbx+10948h], ecx
.std:000000014F07EA46 48 8B CB                                mov     rcx, rbx
.std:000000014F07EA49 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EA4F E8 8C 88 00 00                          call    sub_14F0872E0
.std:000000014F07EA54 C7 44 24 28 0E 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Eh
.std:000000014F07EA5C 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EA61 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EA66 48 8D 55 A4                             lea     rdx, [rbp+0B0h+var_10C]
.std:000000014F07EA6A 8B 08                                   mov     ecx, [rax]
.std:000000014F07EA6C 48 8D 05 CD F7 22 08                    lea     rax, unk_1572AE240
.std:000000014F07EA73 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EA78 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EA7D 89 8B 54 09 01 00                       mov     [rbx+10954h], ecx
.std:000000014F07EA83 48 8B CB                                mov     rcx, rbx
.std:000000014F07EA86 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EA8C E8 4F 88 00 00                          call    sub_14F0872E0
.std:000000014F07EA91 C7 44 24 28 0B 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Bh
.std:000000014F07EA99 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EA9E C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EAA3 48 8D 55 A8                             lea     rdx, [rbp+0B0h+var_108]
.std:000000014F07EAA7 8B 08                                   mov     ecx, [rax]
.std:000000014F07EAA9 48 8D 05 A0 F7 22 08                    lea     rax, aPerfwarning_0 ; "PerfWarning"
.std:000000014F07EAB0 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EAB5 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EABA 89 8B 54 04 01 00                       mov     [rbx+10454h], ecx
.std:000000014F07EAC0 48 8B CB                                mov     rcx, rbx
.std:000000014F07EAC3 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EAC9 E8 12 88 00 00                          call    sub_14F0872E0
.std:000000014F07EACE C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07EAD6 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EADB C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EAE0 48 8D 55 AC                             lea     rdx, [rbp+0B0h+var_104]
.std:000000014F07EAE4 8B 08                                   mov     ecx, [rax]
.std:000000014F07EAE6 48 8D 05 53 A2 62 04                    lea     rax, aInfo_0    ; "Info"
.std:000000014F07EAED 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EAF2 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EAF7 89 8B B8 09 01 00                       mov     [rbx+109B8h], ecx
.std:000000014F07EAFD 48 8B CB                                mov     rcx, rbx
.std:000000014F07EB00 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EB06 E8 D5 87 00 00                          call    sub_14F0872E0
.std:000000014F07EB0B C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07EB13 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EB18 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EB1D 48 8D 55 B0                             lea     rdx, [rbp+0B0h+var_100]
.std:000000014F07EB21 8B 08                                   mov     ecx, [rax]
.std:000000014F07EB23 48 8D 05 02 83 08 04                    lea     rax, aInit_1    ; "Init"
.std:000000014F07EB2A 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EB2F 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EB34 89 8B BC 09 01 00                       mov     [rbx+109BCh], ecx
.std:000000014F07EB3A 48 8B CB                                mov     rcx, rbx
.std:000000014F07EB3D 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EB43 E8 98 87 00 00                          call    sub_14F0872E0
.std:000000014F07EB48 8B 08                                   mov     ecx, [rax]
.std:000000014F07EB4A 48 8D 05 8F DF 0C 04                    lea     rax, unk_15314CAE0
.std:000000014F07EB51 89 8B C0 09 01 00                       mov     [rbx+109C0h], ecx
.std:000000014F07EB57 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EB5C 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EB61 C7 44 24 28 04 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 4
.std:000000014F07EB69 48 8D 55 B4                             lea     rdx, [rbp+0B0h+var_FC]
.std:000000014F07EB6D C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EB72 48 8B CB                                mov     rcx, rbx
.std:000000014F07EB75 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EB7A 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EB80 E8 5B 87 00 00                          call    sub_14F0872E0
.std:000000014F07EB85 C7 44 24 28 0E 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Eh
.std:000000014F07EB8D 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EB92 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EB97 48 8D 55 B8                             lea     rdx, [rbp+0B0h+var_F8]
.std:000000014F07EB9B 8B 08                                   mov     ecx, [rax]
.std:000000014F07EB9D 48 8D 05 BC F6 22 08                    lea     rax, unk_1572AE260
.std:000000014F07EBA4 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EBA9 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EBAE 89 8B C4 09 01 00                       mov     [rbx+109C4h], ecx
.std:000000014F07EBB4 48 8B CB                                mov     rcx, rbx
.std:000000014F07EBB7 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EBBD E8 1E 87 00 00                          call    sub_14F0872E0
.std:000000014F07EBC2 C7 44 24 28 03 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 3
.std:000000014F07EBCA 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EBCF C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EBD4 48 8D 55 BC                             lea     rdx, [rbp+0B0h+var_F4]
.std:000000014F07EBD8 8B 08                                   mov     ecx, [rax]
.std:000000014F07EBDA 48 8D 05 17 9F 9E 04                    lea     rax, unk_153A68AF8
.std:000000014F07EBE1 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EBE6 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EBEB 89 8B 60 04 01 00                       mov     [rbx+10460h], ecx
.std:000000014F07EBF1 48 8B CB                                mov     rcx, rbx
.std:000000014F07EBF4 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EBFA E8 E1 86 00 00                          call    sub_14F0872E0
.std:000000014F07EBFF C7 44 24 28 07 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 7
.std:000000014F07EC07 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EC0C C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EC11 48 8D 55 C0                             lea     rdx, [rbp+0B0h+var_F0]
.std:000000014F07EC15 8B 08                                   mov     ecx, [rax]
.std:000000014F07EC17 48 8D 05 72 67 C4 04                    lea     rax, aWarning_2 ; "Warning"
.std:000000014F07EC1E 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EC23 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EC28 89 8B C8 09 01 00                       mov     [rbx+109C8h], ecx
.std:000000014F07EC2E 48 8B CB                                mov     rcx, rbx
.std:000000014F07EC31 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EC37 E8 A4 86 00 00                          call    sub_14F0872E0
.std:000000014F07EC3C C7 44 24 28 05 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 5
.std:000000014F07EC44 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EC49 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EC4E 48 8D 55 C4                             lea     rdx, [rbp+0B0h+var_EC]
.std:000000014F07EC52 8B 08                                   mov     ecx, [rax]
.std:000000014F07EC54 48 8D 05 99 BE 11 04                    lea     rax, aError     ; "Error"
.std:000000014F07EC5B 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EC60 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EC65 89 8B CC 09 01 00                       mov     [rbx+109CCh], ecx
.std:000000014F07EC6B 48 8B CB                                mov     rcx, rbx
.std:000000014F07EC6E 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EC74 E8 67 86 00 00                          call    sub_14F0872E0
.std:000000014F07EC79 C7 44 24 28 0D 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Dh
.std:000000014F07EC81 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EC86 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EC8B 48 8D 55 C8                             lea     rdx, [rbp+0B0h+var_E8]
.std:000000014F07EC8F 8B 08                                   mov     ecx, [rax]
.std:000000014F07EC91 48 8D 05 D8 F5 22 08                    lea     rax, aFontcharacter_0 ; "FontCharacter"
.std:000000014F07EC98 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EC9D 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07ECA2 89 8B D0 09 01 00                       mov     [rbx+109D0h], ecx
.std:000000014F07ECA8 48 8B CB                                mov     rcx, rbx
.std:000000014F07ECAB 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07ECB1 E8 2A 86 00 00                          call    sub_14F0872E0
.std:000000014F07ECB6 C7 44 24 28 13 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 13h
.std:000000014F07ECBE 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07ECC3 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07ECC8 48 8D 55 CC                             lea     rdx, [rbp+0B0h+var_E4]
.std:000000014F07ECCC 8B 08                                   mov     ecx, [rax]
.std:000000014F07ECCE 48 8D 05 AB F5 22 08                    lea     rax, aInitchild2star ; "InitChild2StartBone"
.std:000000014F07ECD5 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07ECDA 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07ECDF 89 8B 80 0A 01 00                       mov     [rbx+10A80h], ecx
.std:000000014F07ECE5 48 8B CB                                mov     rcx, rbx
.std:000000014F07ECE8 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07ECEE E8 ED 85 00 00                          call    sub_14F0872E0
.std:000000014F07ECF3 8B 08                                   mov     ecx, [rax]
.std:000000014F07ECF5 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07ECFA C7 44 24 28 11 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 11h
.std:000000014F07ED02 48 8D 05 8F F5 22 08                    lea     rax, aSoundcuelocali ; "SoundCueLocalized"
.std:000000014F07ED09 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07ED0E 48 8D 55 D0                             lea     rdx, [rbp+0B0h+var_E0]
.std:000000014F07ED12 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07ED17 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07ED1C 89 8B 84 0A 01 00                       mov     [rbx+10A84h], ecx
.std:000000014F07ED22 48 8B CB                                mov     rcx, rbx
.std:000000014F07ED25 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07ED2B E8 B0 85 00 00                          call    sub_14F0872E0
.std:000000014F07ED30 C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07ED38 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07ED3D C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07ED42 48 8D 55 D4                             lea     rdx, [rbp+0B0h+var_DC]
.std:000000014F07ED46 8B 08                                   mov     ecx, [rax]
.std:000000014F07ED48 48 8D 05 61 F5 22 08                    lea     rax, unk_1572AE2B0
.std:000000014F07ED4F 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07ED54 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07ED59 89 8B 88 0A 01 00                       mov     [rbx+10A88h], ecx
.std:000000014F07ED5F 48 8B CB                                mov     rcx, rbx
.std:000000014F07ED62 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07ED68 E8 73 85 00 00                          call    sub_14F0872E0
.std:000000014F07ED6D C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07ED75 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07ED7A C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07ED7F 48 8D 55 D8                             lea     rdx, [rbp+0B0h+var_D8]
.std:000000014F07ED83 8B 08                                   mov     ecx, [rax]
.std:000000014F07ED85 48 8D 05 34 F5 22 08                    lea     rax, unk_1572AE2C0
.std:000000014F07ED8C 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07ED91 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07ED96 89 8B 8C 0A 01 00                       mov     [rbx+10A8Ch], ecx
.std:000000014F07ED9C 48 8B CB                                mov     rcx, rbx
.std:000000014F07ED9F 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EDA5 E8 36 85 00 00                          call    sub_14F0872E0
.std:000000014F07EDAA C7 44 24 28 14 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 14h
.std:000000014F07EDB2 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EDB7 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EDBC 48 8D 55 DC                             lea     rdx, [rbp+0B0h+var_D4]
.std:000000014F07EDC0 8B 08                                   mov     ecx, [rax]
.std:000000014F07EDC2 48 8D 05 07 F5 22 08                    lea     rax, unk_1572AE2D0
.std:000000014F07EDC9 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EDCE 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EDD3 89 8B 4C 04 01 00                       mov     [rbx+1044Ch], ecx
.std:000000014F07EDD9 48 8B CB                                mov     rcx, rbx
.std:000000014F07EDDC 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EDE2 E8 F9 84 00 00                          call    sub_14F0872E0
.std:000000014F07EDE7 C7 44 24 28 15 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 15h
.std:000000014F07EDEF 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EDF4 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EDF9 48 8D 55 E0                             lea     rdx, [rbp+0B0h+var_D0]
.std:000000014F07EDFD 8B 08                                   mov     ecx, [rax]
.std:000000014F07EDFF 48 8D 05 E2 F4 22 08                    lea     rax, aRawdistributio_1 ; "RawDistributionVector"
.std:000000014F07EE06 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EE0B 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EE10 89 8B 90 0A 01 00                       mov     [rbx+10A90h], ecx
.std:000000014F07EE16 48 8B CB                                mov     rcx, rbx
.std:000000014F07EE19 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EE1F E8 BC 84 00 00                          call    sub_14F0872E0
.std:000000014F07EE24 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07EE2C 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EE31 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EE36 48 8D 55 E4                             lea     rdx, [rbp+0B0h+var_CC]
.std:000000014F07EE3A 8B 08                                   mov     ecx, [rax]
.std:000000014F07EE3C 48 8D 05 BD F4 22 08                    lea     rax, unk_1572AE300
.std:000000014F07EE43 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EE48 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EE4D 89 8B 94 0A 01 00                       mov     [rbx+10A94h], ecx
.std:000000014F07EE53 48 8B CB                                mov     rcx, rbx
.std:000000014F07EE56 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EE5C E8 7F 84 00 00                          call    sub_14F0872E0
.std:000000014F07EE61 C7 44 24 28 13 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 13h
.std:000000014F07EE69 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EE6E C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EE73 8B 08                                   mov     ecx, [rax]
.std:000000014F07EE75 48 8D 05 9C F4 22 08                    lea     rax, aInterpcurvevec ; "InterpCurveVector2D"
.std:000000014F07EE7C 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EE81 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EE86 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EE8C 89 8B 98 0A 01 00                       mov     [rbx+10A98h], ecx
.std:000000014F07EE92 48 8D 55 E8                             lea     rdx, [rbp+0B0h+var_C8]
.std:000000014F07EE96 48 8B CB                                mov     rcx, rbx
.std:000000014F07EE99 E8 42 84 00 00                          call    sub_14F0872E0
.std:000000014F07EE9E C7 44 24 28 11 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 11h
.std:000000014F07EEA6 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EEAB C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EEB0 48 8D 55 EC                             lea     rdx, [rbp+0B0h+var_C4]
.std:000000014F07EEB4 8B 08                                   mov     ecx, [rax]
.std:000000014F07EEB6 48 8D 05 73 F4 22 08                    lea     rax, aInterpcurvevec_0 ; "InterpCurveVector"
.std:000000014F07EEBD 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EEC2 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EEC7 89 8B 9C 0A 01 00                       mov     [rbx+10A9Ch], ecx
.std:000000014F07EECD 48 8B CB                                mov     rcx, rbx
.std:000000014F07EED0 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EED6 E8 05 84 00 00                          call    sub_14F0872E0
.std:000000014F07EEDB C7 44 24 28 0D 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Dh
.std:000000014F07EEE3 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EEE8 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EEED 48 8D 55 F0                             lea     rdx, [rbp+0B0h+var_C0]
.std:000000014F07EEF1 8B 08                                   mov     ecx, [rax]
.std:000000014F07EEF3 48 8D 05 4E F4 22 08                    lea     rax, aInt16property ; "Int16Property"
.std:000000014F07EEFA 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EEFF 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EF04 89 8B A0 0A 01 00                       mov     [rbx+10AA0h], ecx
.std:000000014F07EF0A 48 8B CB                                mov     rcx, rbx
.std:000000014F07EF0D 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EF13 E8 C8 83 00 00                          call    sub_14F0872E0
.std:000000014F07EF18 C7 44 24 28 0F 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Fh
.std:000000014F07EF20 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EF25 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EF2A 48 8D 55 F4                             lea     rdx, [rbp+0B0h+var_BC]
.std:000000014F07EF2E 8B 08                                   mov     ecx, [rax]
.std:000000014F07EF30 48 8D 05 21 F4 22 08                    lea     rax, aBeaconnetdrive ; "BeaconNetDriver"
.std:000000014F07EF37 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EF3C 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EF41 89 8B 98 04 01 00                       mov     [rbx+10498h], ecx
.std:000000014F07EF47 48 8B CB                                mov     rcx, rbx
.std:000000014F07EF4A 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EF50 E8 8B 83 00 00                          call    sub_14F0872E0
.std:000000014F07EF55 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07EF5D 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EF62 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EF67 48 8D 55 F8                             lea     rdx, [rbp+0B0h+var_B8]
.std:000000014F07EF6B 8B 08                                   mov     ecx, [rax]
.std:000000014F07EF6D 48 8D 05 64 12 1C 04                    lea     rax, unk_1532401D8
.std:000000014F07EF74 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EF79 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EF7E 89 8B B0 08 01 00                       mov     [rbx+108B0h], ecx
.std:000000014F07EF84 48 8B CB                                mov     rcx, rbx
.std:000000014F07EF87 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EF8D E8 4E 83 00 00                          call    sub_14F0872E0
.std:000000014F07EF92 C7 44 24 28 0D 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Dh
.std:000000014F07EF9A 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EF9F C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EFA4 48 8D 55 FC                             lea     rdx, [rbp+0B0h+var_B4]
.std:000000014F07EFA8 8B 08                                   mov     ecx, [rax]
.std:000000014F07EFAA 48 8D 05 B7 F3 22 08                    lea     rax, aDemonetdriver ; "DemoNetDriver"
.std:000000014F07EFB1 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EFB6 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EFBB 89 8B B4 08 01 00                       mov     [rbx+108B4h], ecx
.std:000000014F07EFC1 48 8B CB                                mov     rcx, rbx
.std:000000014F07EFC4 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07EFCA E8 11 83 00 00                          call    sub_14F0872E0
.std:000000014F07EFCF C7 44 24 28 0B 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Bh
.std:000000014F07EFD7 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07EFDC C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07EFE1 48 8D 55 00                             lea     rdx, [rbp+0B0h+var_B0]
.std:000000014F07EFE5 8B 08                                   mov     ecx, [rax]
.std:000000014F07EFE7 48 8D 05 8A F3 22 08                    lea     rax, aGamesession ; "GameSession"
.std:000000014F07EFEE 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07EFF3 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07EFF8 89 8B B8 08 01 00                       mov     [rbx+108B8h], ecx
.std:000000014F07EFFE 48 8B CB                                mov     rcx, rbx
.std:000000014F07F001 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F007 E8 D4 82 00 00                          call    sub_14F0872E0
.std:000000014F07F00C C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07F014 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F019 8B 08                                   mov     ecx, [rax]
.std:000000014F07F01B 48 8D 05 66 F3 22 08                    lea     rax, unk_1572AE388
.std:000000014F07F022 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F027 89 8B BC 08 01 00                       mov     [rbx+108BCh], ecx
.std:000000014F07F02D 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F032 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F037 48 8D 55 04                             lea     rdx, [rbp+0B0h+var_AC]
.std:000000014F07F03B 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F041 48 8B CB                                mov     rcx, rbx
.std:000000014F07F044 E8 97 82 00 00                          call    sub_14F0872E0
.std:000000014F07F049 C7 44 24 28 08 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 8
.std:000000014F07F051 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F056 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F05B 48 8D 55 08                             lea     rdx, [rbp+0B0h+var_A8]
.std:000000014F07F05F 8B 08                                   mov     ecx, [rax]
.std:000000014F07F061 48 8D 05 30 F3 22 08                    lea     rax, unk_1572AE398
.std:000000014F07F068 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F06D 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F072 89 8B C0 08 01 00                       mov     [rbx+108C0h], ecx
.std:000000014F07F078 48 8B CB                                mov     rcx, rbx
.std:000000014F07F07B 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F081 E8 5A 82 00 00                          call    sub_14F0872E0
.std:000000014F07F086 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07F08E 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F093 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F098 48 8D 55 0C                             lea     rdx, [rbp+0B0h+var_A4]
.std:000000014F07F09C 8B 08                                   mov     ecx, [rax]
.std:000000014F07F09E 48 8D 05 03 F3 22 08                    lea     rax, unk_1572AE3A8
.std:000000014F07F0A5 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F0AA 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F0AF 89 8B C4 08 01 00                       mov     [rbx+108C4h], ecx
.std:000000014F07F0B5 48 8B CB                                mov     rcx, rbx
.std:000000014F07F0B8 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F0BE E8 1D 82 00 00                          call    sub_14F0872E0
.std:000000014F07F0C3 C7 44 24 28 0A 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ah
.std:000000014F07F0CB 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F0D0 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F0D5 48 8D 55 10                             lea     rdx, [rbp+0B0h+var_A0]
.std:000000014F07F0D9 8B 08                                   mov     ecx, [rax]
.std:000000014F07F0DB 48 8D 05 DE F2 22 08                    lea     rax, unk_1572AE3C0
.std:000000014F07F0E2 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F0E7 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F0EC 89 8B 5C 04 01 00                       mov     [rbx+1045Ch], ecx
.std:000000014F07F0F2 48 8B CB                                mov     rcx, rbx
.std:000000014F07F0F5 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F0FB E8 E0 81 00 00                          call    sub_14F0872E0
.std:000000014F07F100 C7 44 24 28 15 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 15h
.std:000000014F07F108 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F10D C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F112 48 8D 55 14                             lea     rdx, [rbp+0B0h+var_9C]
.std:000000014F07F116 8B 08                                   mov     ecx, [rax]
.std:000000014F07F118 48 8D 05 B1 F2 22 08                    lea     rax, aInterpcurvetwo ; "InterpCurveTwoVectors"
.std:000000014F07F11F 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F124 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F129 89 8B C8 08 01 00                       mov     [rbx+108C8h], ecx
.std:000000014F07F12F 48 8B CB                                mov     rcx, rbx
.std:000000014F07F132 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F138 E8 A3 81 00 00                          call    sub_14F0872E0
.std:000000014F07F13D C7 44 24 28 0F 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Fh
.std:000000014F07F145 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F14A C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F14F 48 8D 55 18                             lea     rdx, [rbp+0B0h+var_98]
.std:000000014F07F153 8B 08                                   mov     ecx, [rax]
.std:000000014F07F155 48 8D 05 8C F2 22 08                    lea     rax, aInterpcurvequa ; "InterpCurveQuat"
.std:000000014F07F15C 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F161 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F166 89 8B A4 0A 01 00                       mov     [rbx+10AA4h], ecx
.std:000000014F07F16C 48 8B CB                                mov     rcx, rbx
.std:000000014F07F16F 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F175 E8 66 81 00 00                          call    sub_14F0872E0
.std:000000014F07F17A C7 44 24 28 02 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 2
.std:000000014F07F182 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F187 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F18C 48 8D 55 1C                             lea     rdx, [rbp+0B0h+var_94]
.std:000000014F07F190 8B 08                                   mov     ecx, [rax]
.std:000000014F07F192 48 8D 05 17 3B E9 04                    lea     rax, aAi        ; "AI"
.std:000000014F07F199 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F19E 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F1A3 89 8B A8 0A 01 00                       mov     [rbx+10AA8h], ecx
.std:000000014F07F1A9 48 8B CB                                mov     rcx, rbx
.std:000000014F07F1AC 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F1B2 E8 29 81 00 00                          call    sub_14F0872E0
.std:000000014F07F1B7 8B 08                                   mov     ecx, [rax]
.std:000000014F07F1B9 48 8D 05 18 1B 01 07                    lea     rax, aNavmesh_0 ; "NavMesh"
.std:000000014F07F1C0 89 8B 48 0B 01 00                       mov     [rbx+10B48h], ecx
.std:000000014F07F1C6 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F1CB 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F1D0 C7 44 24 28 07 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 7
.std:000000014F07F1D8 48 8D 55 20                             lea     rdx, [rbp+0B0h+var_90]
.std:000000014F07F1DC C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F1E1 48 8B CB                                mov     rcx, rbx
.std:000000014F07F1E4 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F1E9 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F1EF E8 EC 80 00 00                          call    sub_14F0872E0
.std:000000014F07F1F4 C7 44 24 28 12 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 12h
.std:000000014F07F1FC 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F201 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F206 48 8D 55 24                             lea     rdx, [rbp+0B0h+var_8C]
.std:000000014F07F20A 8B 08                                   mov     ecx, [rax]
.std:000000014F07F20C 48 8D 05 E5 F1 22 08                    lea     rax, unk_1572AE3F8
.std:000000014F07F213 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F218 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F21D 89 8B 4C 0B 01 00                       mov     [rbx+10B4Ch], ecx
.std:000000014F07F223 48 8B CB                                mov     rcx, rbx
.std:000000014F07F226 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F22C E8 AF 80 00 00                          call    sub_14F0872E0
.std:000000014F07F231 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07F239 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F23E C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F243 48 8D 55 28                             lea     rdx, [rbp+0B0h+var_88]
.std:000000014F07F247 8B 08                                   mov     ecx, [rax]
.std:000000014F07F249 48 8D 05 C0 F1 22 08                    lea     rax, unk_1572AE410
.std:000000014F07F250 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F255 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F25A 89 8B 10 0C 01 00                       mov     [rbx+10C10h], ecx
.std:000000014F07F260 48 8B CB                                mov     rcx, rbx
.std:000000014F07F263 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F269 E8 72 80 00 00                          call    sub_14F0872E0
.std:000000014F07F26E C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07F276 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F27B C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F280 48 8D 55 2C                             lea     rdx, [rbp+0B0h+var_84]
.std:000000014F07F284 8B 08                                   mov     ecx, [rax]
.std:000000014F07F286 48 8D 05 9B F1 22 08                    lea     rax, unk_1572AE428
.std:000000014F07F28D 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F292 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F297 89 8B D4 04 01 00                       mov     [rbx+104D4h], ecx
.std:000000014F07F29D 48 8B CB                                mov     rcx, rbx
.std:000000014F07F2A0 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F2A6 E8 35 80 00 00                          call    sub_14F0872E0
.std:000000014F07F2AB C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07F2B3 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F2B8 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F2BD 48 8D 55 30                             lea     rdx, [rbp+0B0h+var_80]
.std:000000014F07F2C1 8B 08                                   mov     ecx, [rax]
.std:000000014F07F2C3 48 8D 05 76 F1 22 08                    lea     rax, unk_1572AE440
.std:000000014F07F2CA 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F2CF 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F2D4 89 8B D8 04 01 00                       mov     [rbx+104D8h], ecx
.std:000000014F07F2DA 48 8B CB                                mov     rcx, rbx
.std:000000014F07F2DD 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F2E3 E8 F8 7F 00 00                          call    sub_14F0872E0
.std:000000014F07F2E8 C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07F2F0 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F2F5 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F2FA 48 8D 55 34                             lea     rdx, [rbp+0B0h+var_7C]
.std:000000014F07F2FE 8B 08                                   mov     ecx, [rax]
.std:000000014F07F300 48 8D 05 49 F1 22 08                    lea     rax, unk_1572AE450
.std:000000014F07F307 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F30C 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F311 89 8B CC 04 01 00                       mov     [rbx+104CCh], ecx
.std:000000014F07F317 48 8B CB                                mov     rcx, rbx
.std:000000014F07F31A 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F320 E8 BB 7F 00 00                          call    sub_14F0872E0
.std:000000014F07F325 C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07F32D 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F332 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F337 48 8D 55 38                             lea     rdx, [rbp+0B0h+var_78]
.std:000000014F07F33B 8B 08                                   mov     ecx, [rax]
.std:000000014F07F33D 48 8D 05 1C F1 22 08                    lea     rax, unk_1572AE460
.std:000000014F07F344 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F349 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F34E 89 8B 44 04 01 00                       mov     [rbx+10444h], ecx
.std:000000014F07F354 48 8B CB                                mov     rcx, rbx
.std:000000014F07F357 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F35D E8 7E 7F 00 00                          call    sub_14F0872E0
.std:000000014F07F362 8B 08                                   mov     ecx, [rax]
.std:000000014F07F364 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F369 C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07F371 48 8D 05 F8 F0 22 08                    lea     rax, unk_1572AE470
.std:000000014F07F378 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F37D 48 8D 55 3C                             lea     rdx, [rbp+0B0h+var_74]
.std:000000014F07F381 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F386 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F38B 89 8B D0 04 01 00                       mov     [rbx+104D0h], ecx
.std:000000014F07F391 48 8B CB                                mov     rcx, rbx
.std:000000014F07F394 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F39A E8 41 7F 00 00                          call    sub_14F0872E0
.std:000000014F07F39F C7 44 24 28 0C 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Ch
.std:000000014F07F3A7 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F3AC C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F3B1 48 8D 55 40                             lea     rdx, [rbp+0B0h+var_70]
.std:000000014F07F3B5 8B 08                                   mov     ecx, [rax]
.std:000000014F07F3B7 48 8D 05 C2 F0 22 08                    lea     rax, unk_1572AE480
.std:000000014F07F3BE 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F3C3 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F3C8 89 8B DC 04 01 00                       mov     [rbx+104DCh], ecx
.std:000000014F07F3CE 48 8B CB                                mov     rcx, rbx
.std:000000014F07F3D1 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F3D7 E8 04 7F 00 00                          call    sub_14F0872E0
.std:000000014F07F3DC C7 44 24 28 11 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 11h
.std:000000014F07F3E4 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F3E9 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F3EE 48 8D 55 44                             lea     rdx, [rbp+0B0h+var_6C]
.std:000000014F07F3F2 8B 08                                   mov     ecx, [rax]
.std:000000014F07F3F4 48 8D 05 95 F0 22 08                    lea     rax, aEditorkeybindi_0 ; "EditorKeyBindings"
.std:000000014F07F3FB 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F400 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F405 89 8B A0 0D 01 00                       mov     [rbx+10DA0h], ecx
.std:000000014F07F40B 48 8B CB                                mov     rcx, rbx
.std:000000014F07F40E 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F414 E8 C7 7E 00 00                          call    sub_14F0872E0
.std:000000014F07F419 C7 44 24 28 0D 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 0Dh
.std:000000014F07F421 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F426 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F42B 48 8D 55 48                             lea     rdx, [rbp+0B0h+var_68]
.std:000000014F07F42F 8B 08                                   mov     ecx, [rax]
.std:000000014F07F431 48 8D 05 70 F0 22 08                    lea     rax, aArrayproperty ; "ArrayProperty"
.std:000000014F07F438 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F43D 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F442 89 8B A4 0D 01 00                       mov     [rbx+10DA4h], ecx
.std:000000014F07F448 48 8B CB                                mov     rcx, rbx
.std:000000014F07F44B 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F451 E8 8A 7E 00 00                          call    sub_14F0872E0
.std:000000014F07F456 C7 44 24 28 10 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 10h
.std:000000014F07F45E 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F463 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F468 48 8D 55 4C                             lea     rdx, [rbp+0B0h+var_64]
.std:000000014F07F46C 8B 08                                   mov     ecx, [rax]
.std:000000014F07F46E 48 8D 05 A3 7B 70 04                    lea     rax, unk_153787018
.std:000000014F07F475 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F47A 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F47F 89 8B 64 04 01 00                       mov     [rbx+10464h], ecx
.std:000000014F07F485 48 8B CB                                mov     rcx, rbx
.std:000000014F07F488 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F48E E8 4D 7E 00 00                          call    sub_14F0872E0
.std:000000014F07F493 C7 44 24 28 17 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 17h
.std:000000014F07F49B 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F4A0 C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F4A5 48 8D 55 50                             lea     rdx, [rbp+0B0h+var_60]
.std:000000014F07F4A9 8B 08                                   mov     ecx, [rax]
.std:000000014F07F4AB 48 8D 05 06 F0 22 08                    lea     rax, aEncryptedobjec ; "EncryptedObjectProperty"
.std:000000014F07F4B2 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F4B7 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F4BC 89 8B A8 0D 01 00                       mov     [rbx+10DA8h], ecx
.std:000000014F07F4C2 48 8B CB                                mov     rcx, rbx
.std:000000014F07F4C5 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F4CB E8 10 7E 00 00                          call    sub_14F0872E0
.std:000000014F07F4D0 C7 44 24 28 09 00 00 00                 mov     dword ptr [rsp+1B0h+var_190+8], 9
.std:000000014F07F4D8 4C 8D 44 24 20                          lea     r8, [rsp+1B0h+var_190]
.std:000000014F07F4DD C6 44 24 2C 00                          mov     byte ptr [rsp+1B0h+var_190+0Ch], 0
.std:000000014F07F4E2 8B 08                                   mov     ecx, [rax]
.std:000000014F07F4E4 48 8D 05 E5 EF 22 08                    lea     rax, aEncvector_0 ; "EncVector"
.std:000000014F07F4EB 48 89 44 24 20                          mov     qword ptr [rsp+1B0h+var_190], rax
.std:000000014F07F4F0 0F 28 44 24 20                          movaps  xmm0, [rsp+1B0h+var_190]
.std:000000014F07F4F5 66 0F 7F 44 24 20                       movdqa  [rsp+1B0h+var_190], xmm0
.std:000000014F07F4FB 89 8B AC 0D 01 00                       mov     [rbx+10DACh], ecx
.std:000000014F07F501 48 8D 54 24 50                          lea     rdx, [rsp+1B0h+var_160]
.std:000000014F07F506 48 8B CB                                mov     rcx, rbx
.std:000000014F07F509 E8 D2 7D 00 00                          call    sub_14F0872E0
.std:000000014F07F50E 45 33 F6                                xor     r14d, r14d
.std:000000014F07F511 41 8B FE                                mov     edi, r14d
.std:000000014F07F514 8B 08                                   mov     ecx, [rax]
.std:000000014F07F516 89 8B B0 0D 01 00                       mov     [rbx+10DB0h], ecx
.std:000000014F07F51C 44 89 B3 B4 0D 01 00                    mov     [rbx+10DB4h], r14d
.std:000000014F07F523
.std:000000014F07F523                         loc_14F07F523:                          ; CODE XREF: sub_14F07BC80+38ED↓j
.std:000000014F07F523 85 FF                                   test    edi, edi
.std:000000014F07F525 74 05                                   jz      short loc_14F07F52C
.std:000000014F07F527 45 39 37                                cmp     [r15], r14d
.std:000000014F07F52A 74 35                                   jz      short loc_14F07F561
.std:000000014F07F52C
.std:000000014F07F52C                         loc_14F07F52C:                          ; CODE XREF: sub_14F07BC80+38A5↑j
.std:000000014F07F52C 8B C7                                   mov     eax, edi
.std:000000014F07F52E 4C 8D 44 24 34                          lea     r8, [rsp+1B0h+var_17C]
.std:000000014F07F533 48 05 10 41 00 00                       add     rax, 4110h
.std:000000014F07F539 89 7C 24 34                             mov     [rsp+1B0h+var_17C], edi
.std:000000014F07F53D 48 8D 8B B8 0D 01 00                    lea     rcx, [rbx+10DB8h]
.std:000000014F07F544 48 8D 14 83                             lea     rdx, [rbx+rax*4]
.std:000000014F07F548 E8 53 B1 FF FF                          call    sub_14F07A6A0
.std:000000014F07F54D 41 8B 0F                                mov     ecx, [r15]
.std:000000014F07F550 8B 83 B4 0D 01 00                       mov     eax, [rbx+10DB4h]
.std:000000014F07F556 3B C1                                   cmp     eax, ecx
.std:000000014F07F558 0F 43 C8                                cmovnb  ecx, eax
.std:000000014F07F55B 89 8B B4 0D 01 00                       mov     [rbx+10DB4h], ecx
.std:000000014F07F561
.std:000000014F07F561                         loc_14F07F561:                          ; CODE XREF: sub_14F07BC80+38AA↑j
.std:000000014F07F561 FF C7                                   inc     edi
.std:000000014F07F563 49 83 C7 04                             add     r15, 4
.std:000000014F07F567 81 FF 5D 02 00 00                       cmp     edi, 25Dh
.std:000000014F07F56D 72 B4                                   jb      short loc_14F07F523
.std:000000014F07F56F 33 C0                                   xor     eax, eax
.std:000000014F07F571 F0 44 0F B1 B3 20 00 01                 lock cmpxchg [rbx+10020h], r14d
.std:000000014F07F571 00
.std:000000014F07F57A 8B 8B C0 2D 01 00                       mov     ecx, [rbx+12DC0h]
.std:000000014F07F580 2B 8B 1C 2E 01 00                       sub     ecx, [rbx+12E1Ch]
.std:000000014F07F586 3B C1                                   cmp     eax, ecx
.std:000000014F07F588 74 6A                                   jz      short loc_14F07F5F4
.std:000000014F07F58A 4C 8D 0D 4F EF 22 08                    lea     r9, aDuplicatedhard ; "DuplicatedHardcodedName"
.std:000000014F07F591 4C 8D 05 50 11 22 08                    lea     r8, aUnrealed   ; "UnrealEd"
.std:000000014F07F598 48 8D 15 71 EF 22 08                    lea     rdx, aDuplicateHardc ; "Duplicate hardcoded name"
.std:000000014F07F59F 48 8D 4C 24 38                          lea     rcx, [rsp+1B0h+var_178]
.std:000000014F07F5A4 E8 A7 33 F1 FF                          call    sub_14EF92950
.std:000000014F07F5A9 48 8B D0                                mov     rdx, rax
.std:000000014F07F5AC 45 33 C0                                xor     r8d, r8d
.std:000000014F07F5AF 33 C9                                   xor     ecx, ecx
.std:000000014F07F5B1 E8 CA 05 FC FF                          call    sub_14F03FB80
.std:000000014F07F5B6 48 8B 7C 24 40                          mov     rdi, [rsp+1B0h+var_170]
.std:000000014F07F5BB 48 85 FF                                test    rdi, rdi
.std:000000014F07F5BE 74 2D                                   jz      short loc_14F07F5ED
.std:000000014F07F5C0 41 8B C4                                mov     eax, r12d
.std:000000014F07F5C3 F0 0F C1 47 08                          lock xadd [rdi+8], eax
.std:000000014F07F5C8 83 F8 01                                cmp     eax, 1
.std:000000014F07F5CB 75 20                                   jnz     short loc_14F07F5ED
.std:000000014F07F5CD 48 8B 07                                mov     rax, [rdi]
.std:000000014F07F5D0 48 8B CF                                mov     rcx, rdi
.std:000000014F07F5D3 FF 10                                   call    qword ptr [rax]
.std:000000014F07F5D5 F0 44 0F C1 67 0C                       lock xadd [rdi+0Ch], r12d
.std:000000014F07F5DB 41 83 FC 01                             cmp     r12d, 1
.std:000000014F07F5DF 75 0C                                   jnz     short loc_14F07F5ED
.std:000000014F07F5E1 48 8B 07                                mov     rax, [rdi]
.std:000000014F07F5E4 41 8B D4                                mov     edx, r12d
.std:000000014F07F5E7 48 8B CF                                mov     rcx, rdi
.std:000000014F07F5EA FF 50 08                                call    qword ptr [rax+8]
.std:000000014F07F5ED
.std:000000014F07F5ED                         loc_14F07F5ED:                          ; CODE XREF: sub_14F07BC80+393E↑j
.std:000000014F07F5ED                                                                 ; sub_14F07BC80+394B↑j ...
.std:000000014F07F5ED 33 C9                                   xor     ecx, ecx
.std:000000014F07F5EF E8 8C 0F 02 00                          call    sub_14F0A0580
.std:000000014F07F5F4
.std:000000014F07F5F4                         loc_14F07F5F4:                          ; CODE XREF: sub_14F07BC80+3908↑j
.std:000000014F07F5F4 48 8B C3                                mov     rax, rbx
.std:000000014F07F5F7 48 8B 8D 88 00 00 00                    mov     rcx, [rbp+0B0h+var_28]
.std:000000014F07F5FE 48 33 CC                                xor     rcx, rsp
.std:000000014F07F601 E8 8A 6D AD 03                          call    sub_152B56390
.std:000000014F07F606 4C 8D 9C 24 90 01 00 00                 lea     r11, [rsp+1B0h+var_20]
.std:000000014F07F60E 49 8B 5B 38                             mov     rbx, [r11+38h]
.std:000000014F07F612 49 8B 73 40                             mov     rsi, [r11+40h]
.std:000000014F07F616 49 8B 7B 48                             mov     rdi, [r11+48h]
.std:000000014F07F61A 49 8B E3                                mov     rsp, r11
.std:000000014F07F61D 41 5F                                   pop     r15
.std:000000014F07F61F 41 5E                                   pop     r14
.std:000000014F07F621 41 5D                                   pop     r13
.std:000000014F07F623 41 5C                                   pop     r12
.std:000000014F07F625 5D                                      pop     rbp
.std:000000014F07F626 C3                                      retn
.std:000000014F07F626                         ; } // starts at 14F07BC80
.std:000000014F07F626                         sub_14F07BC80   endp
.std:000000014F07F626
.std:000000014F07F626                         ; ---------------------------------------------------------------------------
.std:000000014F07F627 CC CC CC CC CC CC CC CC…                align 10h
.std:000000014F07F630
.std:000000014F07F630                         ; =============== S U B R O U T I N E =======================================
.std:000000014F07F630
.std:000000014F07F630
.std:000000014F07F630                         sub_14F07F630   proc near               ; CODE XREF: sub_14F43DCB0+55↓p
.std:000000014F07F630 48 8D 05 51 F1 22 08                    lea     rax, off_1572AE788
.std:000000014F07F637 66 C7 41 08 00 01                       mov     word ptr [rcx+8], 100h
.std:000000014F07F63D 48 89 01                                mov     [rcx], rax
.std:000000014F07F640 48 8B C1                                mov     rax, rcx
.std:000000014F07F643 C3                                      retn
.std:000000014F07F643                         sub_14F07F630   endp
.std:000000014F07F643
.std:000000014F07F643                         ; ---------------------------------------------------------------------------
.std:000000014F07F644 CC                                      db 0CCh
.std:000000014F07F645 CC                                      db 0CCh
.std:000000014F07F646 CC                                      db 0CCh
.std:000000014F07F647 CC                                      db 0CCh
.std:000000014F07F648 CC                                      db 0CCh
.std:000000014F07F649 CC                                      db 0CCh
.std:000000014F07F64A CC                                      db 0CCh
.std:000000014F07F64B CC                                      db 0CCh
.std:000000014F07F64C CC                                      db 0CCh
.std:000000014F07F64D CC                                      db 0CCh
.std:000000014F07F64E CC                                      db 0CCh
.std:000000014F07F64F CC                                      db 0CCh
.std:000000014F07F650
.std:000000014F07F650                         ; =============== S U B R O U T I N E =======================================
.std:000000014F07F650
.std:000000014F07F650
.std:000000014F07F650                         sub_14F07F650   proc near               ; CODE XREF: sub_150B33B60+50↓p
.std:000000014F07F650
.std:000000014F07F650                         var_248         = qword ptr -248h
.std:000000014F07F650                         var_240         = dword ptr -240h
.std:000000014F07F650                         var_23C         = dword ptr -23Ch
.std:000000014F07F650                         var_238         = word ptr -238h
.std:000000014F07F650                         var_236         = byte ptr -236h
.std:000000014F07F650                         var_28          = qword ptr -28h
.std:000000014F07F650                         var_18          = byte ptr -18h
.std:000000014F07F650                         arg_10          = qword ptr  18h
.std:000000014F07F650                         arg_18          = qword ptr  20h
.std:000000014F07F650
.std:000000014F07F650                         ; __unwind { // sub_152B5621C
.std:000000014F07F650 48 89 5C 24 18                          mov     [rsp+arg_10], rbx
.std:000000014F07F655 48 89 6C 24 20                          mov     [rsp+arg_18], rbp
.std:000000014F07F65A 56                                      push    rsi
.std:000000014F07F65B 57                                      push    rdi
.std:000000014F07F65C 41 56                                   push    r14
.std:000000014F07F65E 48 81 EC 50 02 00 00                    sub     rsp, 250h
.std:000000014F07F665 48 8B 05 D4 B9 B0 0A                    mov     rax, cs:__security_cookie
.std:000000014F07F66C 48 33 C4                                xor     rax, rsp
.std:000000014F07F66F 48 89 84 24 40 02 00 00                 mov     [rsp+268h+var_28], rax
.std:000000014F07F677 48 8B F1                                mov     rsi, rcx
.std:000000014F07F67A 45 33 F6                                xor     r14d, r14d
.std:000000014F07F67D 48 8B CA                                mov     rcx, rdx
.std:000000014F07F680 4C 89 74 24 20                          mov     [rsp+268h+var_248], r14
.std:000000014F07F685 49 8B D8                                mov     rbx, r8
.std:000000014F07F688 48 8B FA                                mov     rdi, rdx
.std:000000014F07F68B FF 15 EF E3 58 0A                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014F07F691 48 63 7F 08                             movsxd  rdi, dword ptr [rdi+8]
.std:000000014F07F695 48 8B E8                                mov     rbp, rax
.std:000000014F07F698 89 7C 24 28                             mov     [rsp+268h+var_240], edi
.std:000000014F07F69C 85 FF                                   test    edi, edi
.std:000000014F07F69E 75 07                                   jnz     short loc_14F07F6A7
.std:000000014F07F6A0 44 89 74 24 2C                          mov     [rsp+268h+var_23C], r14d
.std:000000014F07F6A5 EB 2B                                   jmp     short loc_14F07F6D2
.std:000000014F07F6A7                         ; ---------------------------------------------------------------------------
.std:000000014F07F6A7
.std:000000014F07F6A7                         loc_14F07F6A7:                          ; CODE XREF: sub_14F07F650+4E↑j
.std:000000014F07F6A7 45 33 C0                                xor     r8d, r8d
.std:000000014F07F6AA 48 8D 4C 24 20                          lea     rcx, [rsp+268h+var_248]
.std:000000014F07F6AF 8B D7                                   mov     edx, edi
.std:000000014F07F6B1 E8 3A 8A DA F1                          call    sub_140E280F0
.std:000000014F07F6B6 48 8D 4C 24 20                          lea     rcx, [rsp+268h+var_248]
.std:000000014F07F6BB FF 15 BF E3 58 0A                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014F07F6C1 4C 8B C7                                mov     r8, rdi
.std:000000014F07F6C4 48 8B D5                                mov     rdx, rbp
.std:000000014F07F6C7 4D 03 C0                                add     r8, r8
.std:000000014F07F6CA 48 8B C8                                mov     rcx, rax
.std:000000014F07F6CD E8 9B D6 AD 03                          call    sub_152B5CD6D
.std:000000014F07F6D2
.std:000000014F07F6D2                         loc_14F07F6D2:                          ; CODE XREF: sub_14F07F650+55↑j
.std:000000014F07F6D2 41 B9 01 00 00 00                       mov     r9d, 1
.std:000000014F07F6D8 4C 8D 05 B1 C9 06 04                    lea     r8, asc_1530EC090 ; "/"
.std:000000014F07F6DF 48 8D 15 72 CC 06 04                    lea     rdx, asc_1530EC358 ; "\\"
.std:000000014F07F6E6 48 8D 4C 24 20                          lea     rcx, [rsp+268h+var_248]
.std:000000014F07F6EB E8 00 90 EA FF                          call    sub_14EF286F0
.std:000000014F07F6F0 33 D2                                   xor     edx, edx
.std:000000014F07F6F2 66 44 89 74 24 30                       mov     [rsp+268h+var_238], r14w
.std:000000014F07F6F8 41 B8 06 02 00 00                       mov     r8d, 206h
.std:000000014F07F6FE 48 8D 4C 24 32                          lea     rcx, [rsp+268h+var_236]
.std:000000014F07F703 E8 71 D6 AD 03                          call    sub_152B5CD79
.std:000000014F07F708 44 39 74 24 28                          cmp     [rsp+268h+var_240], r14d
.std:000000014F07F70D 74 10                                   jz      short loc_14F07F71F
.std:000000014F07F70F 48 8D 4C 24 20                          lea     rcx, [rsp+268h+var_248]
.std:000000014F07F714 FF 15 66 E3 58 0A                       call    cs:off_15960DA80 ; v8_qjs::External::Value(void) ...
.std:000000014F07F71A 48 8B C8                                mov     rcx, rax
.std:000000014F07F71D EB 07                                   jmp     short loc_14F07F726
.std:000000014F07F71F                         ; ---------------------------------------------------------------------------
.std:000000014F07F71F
.std:000000014F07F71F                         loc_14F07F71F:                          ; CODE XREF: sub_14F07F650+BD↑j
.std:000000014F07F71F 48 8D 0D 22 21 06 04                    lea     rcx, word_1530E1848
.std:000000014F07F726
.std:000000014F07F726                         loc_14F07F726:                          ; CODE XREF: sub_14F07F650+CD↑j
.std:000000014F07F726 4C 8D 44 24 30                          lea     r8, [rsp+268h+var_238]
.std:000000014F07F72B 4C 2B C1                                sub     r8, rcx
.std:000000014F07F72E 66 90                                   xchg    ax, ax
.std:000000014F07F730
.std:000000014F07F730                         loc_14F07F730:                          ; CODE XREF: sub_14F07F650+EF↓j
.std:000000014F07F730 0F B7 01                                movzx   eax, word ptr [rcx]
.std:000000014F07F733 66 42 89 04 01                          mov     [rcx+r8], ax
.std:000000014F07F738 48 8D 49 02                             lea     rcx, [rcx+2]
.std:000000014F07F73C 66 85 C0                                test    ax, ax
.std:000000014F07F73F 75 EF                                   jnz     short loc_14F07F730
.std:000000014F07F741 4C 8D 44 24 30                          lea     r8, [rsp+268h+var_238]
.std:000000014F07F746 BA 01 00 00 00                          mov     edx, 1
.std:000000014F07F74B 33 C9                                   xor     ecx, ecx
.std:000000014F07F74D FF 15 3D 6E DF 03                       call    cs:qword_152E76590
.std:000000014F07F753 48 89 06                                mov     [rsi], rax
.std:000000014F07F756 48 85 C0                                test    rax, rax
.std:000000014F07F759 74 46                                   jz      short loc_14F07F7A1
.std:000000014F07F75B FF 15 17 6E DF 03                       call    cs:qword_152E76578
.std:000000014F07F761 3D B7 00 00 00                          cmp     eax, 0B7h
.std:000000014F07F766 75 39                                   jnz     short loc_14F07F7A1
.std:000000014F07F768 48 85 DB                                test    rbx, rbx
.std:000000014F07F76B 74 28                                   jz      short loc_14F07F795
.std:000000014F07F76D 48 8B 0E                                mov     rcx, [rsi]
.std:000000014F07F770 0F 57 C0                                xorps   xmm0, xmm0
.std:000000014F07F773 F2 48 0F 2A C3                          cvtsi2sd xmm0, rbx
.std:000000014F07F778 F2 0F 59 05 D8 99 0C 04                 mulsd   xmm0, cs:qword_153149158
.std:000000014F07F780 66 0F 5A C8                             cvtpd2ps xmm1, xmm0
.std:000000014F07F784 F3 0F 2C D1                             cvttss2si edx, xmm1
.std:000000014F07F788 FF 15 E2 73 DF 03                       call    cs:qword_152E76B70
.std:000000014F07F78E A9 7F FF FF FF                          test    eax, 0FFFFFF7Fh
.std:000000014F07F793 74 0C                                   jz      short loc_14F07F7A1
.std:000000014F07F795
.std:000000014F07F795                         loc_14F07F795:                          ; CODE XREF: sub_14F07F650+11B↑j
.std:000000014F07F795 48 8B 0E                                mov     rcx, [rsi]
.std:000000014F07F798 FF 15 5A 6E DF 03                       call    cs:qword_152E765F8
.std:000000014F07F79E 4C 89 36                                mov     [rsi], r14
.std:000000014F07F7A1
.std:000000014F07F7A1                         loc_14F07F7A1:                          ; CODE XREF: sub_14F07F650+109↑j
.std:000000014F07F7A1                                                                 ; sub_14F07F650+116↑j ...
.std:000000014F07F7A1 48 8D 4C 24 20                          lea     rcx, [rsp+268h+var_248]
.std:000000014F07F7A6 E8 25 01 D8 F1                          call    sub_140DFF8D0
.std:000000014F07F7AB 48 8B C6                                mov     rax, rsi
.std:000000014F07F7AE 48 8B 8C 24 40 02 00 00                 mov     rcx, [rsp+268h+var_28]
.std:000000014F07F7B6 48 33 CC                                xor     rcx, rsp
.std:000000014F07F7B9 E8 D2 6B AD 03                          call    sub_152B56390
.std:000000014F07F7BE 4C 8D 9C 24 50 02 00 00                 lea     r11, [rsp+268h+var_18]
.std:000000014F07F7C6 49 8B 5B 30                             mov     rbx, [r11+30h]
.std:000000014F07F7CA 49 8B 6B 38                             mov     rbp, [r11+38h]
.std:000000014F07F7CE 49 8B E3                                mov     rsp, r11
.std:000000014F07F7D1 41 5E                                   pop     r14
.std:000000014F07F7D3 5F                                      pop     rdi
.std:000000014F07F7D4 5E                                      pop     rsi
.std:000000014F07F7D5 C3                                      retn
.std:000000014F07F7D5                         ; } // starts at 14F07F650
.std:000000014F07F7D5                         sub_14F07F650   endp
.std:000000014F07F7D5
.std:000000014F07F7D5                         ; ---------------------------------------------------------------------------
.std:000000014F07F7D6 CC CC CC CC CC CC CC CC…                align 20h
.std:000000014F07F7E0
.std:000000014F07F7E0                         ; =============== S U B R O U T I N E =======================================
.std:000000014F07F7E0
.std:000000014F07F7E0
.std:000000014F07F7E0                         sub_14F07F7E0   proc near               ; CODE XREF: sub_152DEFE90+71↓p
.std:000000014F07F7E0 40 53                                   push    rbx
.std:000000014F07F7E2 48 83 EC 20                             sub     rsp, 20h
.std:000000014F07F7E6 48 8B D9                                mov     rbx, rcx
.std:000000014F07F7E9 48 8B 09                                mov     rcx, [rcx]
.std:000000014F07F7EC 48 85 C9                                test    rcx, rcx
.std:000000014F07F7EF 74 5D                                   jz      short loc_14F07F84E
.std:000000014F07F7F1 48 8B 53 10                             mov     rdx, [rbx+10h]
.std:000000014F07F7F5 48 B8 67 66 66 66 66 66                 mov     rax, 6666666666666667h
.std:000000014F07F7F5 66 66
.std:000000014F07F7FF 48 2B D1                                sub     rdx, rcx
.std:000000014F07F802 48 F7 EA                                imul    rdx
.std:000000014F07F805 48 C1 FA 04                             sar     rdx, 4
.std:000000014F07F809 48 8B C2                                mov     rax, rdx
.std:000000014F07F80C 48 C1 E8 3F                             shr     rax, 3Fh
.std:000000014F07F810 48 03 D0                                add     rdx, rax
.std:000000014F07F813 48 8D 14 92                             lea     rdx, [rdx+rdx*4]
.std:000000014F07F817 48 C1 E2 03                             shl     rdx, 3
.std:000000014F07F81B 48 81 FA 00 10 00 00                    cmp     rdx, 1000h
.std:000000014F07F822 72 18                                   jb      short loc_14F07F83C
.std:000000014F07F824 4C 8B 41 F8                             mov     r8, [rcx-8]
.std:000000014F07F828 48 83 C2 27                             add     rdx, 27h ; '''
.std:000000014F07F82C 49 2B C8                                sub     rcx, r8
.std:000000014F07F82F 48 8D 41 F8                             lea     rax, [rcx-8]
.std:000000014F07F833 48 83 F8 1F                             cmp     rax, 1Fh
.std:000000014F07F837 77 1B                                   ja      short loc_14F07F854
.std:000000014F07F839 49 8B C8                                mov     rcx, r8
.std:000000014F07F83C
.std:000000014F07F83C                         loc_14F07F83C:                          ; CODE XREF: sub_14F07F7E0+42↑j
.std:000000014F07F83C E8 CF 44 38 F2                          call    sub_141403D10
.std:000000014F07F841 33 C0                                   xor     eax, eax
.std:000000014F07F843 48 89 03                                mov     [rbx], rax
.std:000000014F07F846 48 89 43 08                             mov     [rbx+8], rax
.std:000000014F07F84A 48 89 43 10                             mov     [rbx+10h], rax
.std:000000014F07F84E
.std:000000014F07F84E                         loc_14F07F84E:                          ; CODE XREF: sub_14F07F7E0+F↑j
.std:000000014F07F84E 48 83 C4 20                             add     rsp, 20h
.std:000000014F07F852 5B                                      pop     rbx
.std:000000014F07F853 C3                                      retn
.std:000000014F07F854                         ; ---------------------------------------------------------------------------
.std:000000014F07F854
.std:000000014F07F854                         loc_14F07F854:                          ; CODE XREF: sub_14F07F7E0+57↑j
.std:000000014F07F854 FF 15 3E 87 DF 03                       call    cs:qword_152E77F98
.std:000000014F07F854                         ; ---------------------------------------------------------------------------
.std:000000014F07F85A CC                                      db 0CCh
.std:000000014F07F85A                         sub_14F07F7E0   endp
.std:000000014F07F85A
.std:000000014F07F85B CC CC CC CC CC                          align 20h
.std:000000014F07F860
.std:000000014F07F860                         ; =============== S U B R O U T I N E =======================================
.std:000000014F07F860
.std:000000014F07F860
.std:000000014F07F860                         sub_14F07F860   proc near               ; CODE XREF: sub_152DEFE90+65↓p
.std:000000014F07F860 40 53                                   push    rbx
.std:000000014F07F862 48 83 EC 20                             sub     rsp, 20h
.std:000000014F07F866 48 8B D9                                mov     rbx, rcx
.std:000000014F07F869 48 8B 09                                mov     rcx, [rcx]
.std:000000014F07F86C 48 85 C9                                test    rcx, rcx
.std:000000014F07F86F 74 59                                   jz      short loc_14F07F8CA
.std:000000014F07F871 48 8B 53 10                             mov     rdx, [rbx+10h]
.std:000000014F07F875 48 B8 C5 4E EC C4 4E EC                 mov     rax, 4EC4EC4EC4EC4EC5h
.std:000000014F07F875 C4 4E
.std:000000014F07F87F 48 2B D1                                sub     rdx, rcx
.std:000000014F07F882 48 F7 EA                                imul    rdx
.std:000000014F07F885 48 C1 FA 05                             sar     rdx, 5
.std:000000014F07F889 48 8B C2                                mov     rax, rdx
.std:000000014F07F88C 48 C1 E8 3F                             shr     rax, 3Fh
.std:000000014F07F890 48 03 D0                                add     rdx, rax
.std:000000014F07F893 48 6B D2 68                             imul    rdx, 68h ; 'h'
.std:000000014F07F897 48 81 FA 00 10 00 00                    cmp     rdx, 1000h
.std:000000014F07F89E 72 18                                   jb      short loc_14F07F8B8
.std:000000014F07F8A0 4C 8B 41 F8                             mov     r8, [rcx-8]
.std:000000014F07F8A4 48 83 C2 27                             add     rdx, 27h ; '''
.std:000000014F07F8A8 49 2B C8                                sub     rcx, r8
.std:000000014F07F8AB 48 8D 41 F8                             lea     rax, [rcx-8]
.std:000000014F07F8AF 48 83 F8 1F                             cmp     rax, 1Fh
.std:000000014F07F8B3 77 1B                                   ja      short loc_14F07F8D0
.std:000000014F07F8B5 49 8B C8                                mov     rcx, r8
.std:000000014F07F8B8
.std:000000014F07F8B8                         loc_14F07F8B8:                          ; CODE XREF: sub_14F07F860+3E↑j
.std:000000014F07F8B8 E8 53 44 38 F2                          call    sub_141403D10
.std:000000014F07F8BD 33 C0                                   xor     eax, eax
.std:000000014F07F8BF 48 89 03                                mov     [rbx], rax
.std:000000014F07F8C2 48 89 43 08                             mov     [rbx+8], rax
.std:000000014F07F8C6 48 89 43 10                             mov     [rbx+10h], rax
.std:000000014F07F8CA
.std:000000014F07F8CA                         loc_14F07F8CA:                          ; CODE XREF: sub_14F07F860+F↑j
.std:000000014F07F8CA 48 83 C4 20                             add     rsp, 20h
.std:000000014F07F8CE 5B                                      pop     rbx
.std:000000014F07F8CF C3                                      retn
.std:000000014F07F8D0                         ; ---------------------------------------------------------------------------
.std:000000014F07F8D0
.std:000000014F07F8D0                         loc_14F07F8D0:                          ; CODE XREF: sub_14F07F860+53↑j
.std:000000014F07F8D0 FF 15 C2 86 DF 03                       call    cs:qword_152E77F98
.std:000000014F07F8D0                         ; ---------------------------------------------------------------------------
.std:000000014F07F8D6 CC                                      db 0CCh
.std:000000014F07F8D6                         sub_14F07F860   endp
.std:000000014F07F8D6
.std:000000014F07F8D7 CC CC CC CC CC CC CC CC…                align 20h
.std:000000014F07F8E0
.std:000000014F07F8E0                         ; =============== S U B R O U T I N E =======================================
.std:000000014F07F8E0
.std:000000014F07F8E0
.std:000000014F07F8E0                         sub_14F07F8E0   proc near               ; CODE XREF: sub_150B33B60+32D↓p
.std:000000014F07F8E0 40 53                                   push    rbx
.std:000000014F07F8E2 48 83 EC 20                             sub     rsp, 20h
.std:000000014F07F8E6 48 8B D9                                mov     rbx, rcx
.std:000000014F07F8E9 48 8B 09                                mov     rcx, [rcx]
.std:000000014F07F8EC 48 85 C9                                test    rcx, rcx
.std:000000014F07F8EF 74 16                                   jz      short loc_14F07F907
.std:000000014F07F8F1 FF 15 91 6C DF 03                       call    cs:qword_152E76588
.std:000000014F07F8F7 48 8B 0B                                mov     rcx, [rbx]
.std:000000014F07F8FA FF 15 F8 6C DF 03                       call    cs:qword_152E765F8
.std:000000014F07F900 48 C7 03 00 00 00 00                    mov     qword ptr [rbx], 0
.std:000000014F07F907
.std:000000014F07F907                         loc_14F07F907:                          ; CODE XREF: sub_14F07F8E0+F↑j
.std:000000014F07F907 48 83 C4 20                             add     rsp, 20h
.std:000000014F07F90B 5B                                      pop     rbx
.std:000000014F07F90C C3                                      retn
.std:000000014F07F90C                         sub_14F07F8E0   endp
.std:000000014F07F90C
.std:000000014F07F90C                         ; ---------------------------------------------------------------------------
.std:000000014F07F90D CC CC CC                                align 10h
.std:000000014F07F910

```


