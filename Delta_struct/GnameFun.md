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


```

---
ASm BaseProcessAddr 0x140000000
---


```asm
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
.text:000000014C8D51B1 C6 45 A0 00                             mov     [rbp+var_60], 0
.text:000000014C8D51B5 44 8B C3                                mov     r8d, ebx
.text:000000014C8D51B8 48 89 7D C8                             mov     [rbp+var_38], rdi
.text:000000014C8D51BC 48 8B D7                                mov     rdx, rdi
.text:000000014C8D51BF 89 5D D0                                mov     [rbp+var_30], ebx
.text:000000014C8D51C2 44 88 75 D4                             mov     [rbp+var_2C], r14b
.text:000000014C8D51C6 66 44 89 7D D5                          mov     [rbp+var_2B], r15w
.text:000000014C8D51CB 44 88 65 D7                             mov     [rbp+var_29], r12b
.text:000000014C8D51CF 45 84 F6                                test    r14b, r14b      ; Logical Compare
.text:000000014C8D51D2 75 12                                   jnz     short loc_14C8D51E6 ; Jump if Not Zero (ZF=0)
.text:000000014C8D51D4 48 8D 4D A8                             lea     rcx, [rbp+var_58] ; Load Effective Address
.text:000000014C8D51D8 4C 8D B6 20 00 01 00                    lea     r14, [rsi+10020h] ; Load Effective Address
.text:000000014C8D51DF E8 9C F3 FF FF                          call    sub_14C8D4580   ; Call Procedure
.text:000000014C8D51E4 EB 10                                   jmp     short loc_14C8D51F6 ; Jump
.text:000000014C8D51E6                         ; ---------------------------------------------------------------------------
.text:000000014C8D51E6
.text:000000014C8D51E6                         loc_14C8D51E6:                          ; CODE XREF: sub_14C8D5120+B2↑j
.text:000000014C8D51E6 48 8D 4D B8                             lea     rcx, [rbp+var_48] ; Load Effective Address
.text:000000014C8D51EA 4C 8D B6 24 00 01 00                    lea     r14, [rsi+10024h] ; Load Effective Address
.text:000000014C8D51F1 E8 7A F4 FF FF                          call    sub_14C8D4670   ; Call Procedure
.text:000000014C8D51F6
.text:000000014C8D51F6                         loc_14C8D51F6:                          ; CODE XREF: sub_14C8D5120+C4↑j
.text:000000014C8D51F6 0F 10 00                                movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.text:000000014C8D51F9 4C 8D 4D A0                             lea     r9, [rbp+var_60] ; Load Effective Address
.text:000000014C8D51FD C6 45 EC 00                             mov     [rbp+var_14], 0
.text:000000014C8D5201 4C 8D 45 C8                             lea     r8, [rbp+var_38] ; Load Effective Address
.text:000000014C8D5205 66 0F 7E C1                             movd    ecx, xmm0       ; Move 32 bits
.text:000000014C8D5209 48 8D 55 A4                             lea     rdx, [rbp+var_5C] ; Load Effective Address
.text:000000014C8D520D 0F 11 45 D8                             movups  [rbp+var_28], xmm0 ; Move Unaligned Four Packed Single-FP
.text:000000014C8D5211 48 81 C1 01 04 00 00                    add     rcx, 401h       ; Add
.text:000000014C8D5218 48 C1 E1 06                             shl     rcx, 6          ; Shift Logical Left
.text:000000014C8D521C 48 03 CE                                add     rcx, rsi        ; Add
.text:000000014C8D521F E8 FC 7F 01 00                          call    sub_14C8ED220   ; Call Procedure
.text:000000014C8D5224 0F B6 4D A0                             movzx   ecx, [rbp+var_60] ; Move with Zero-Extend
.text:000000014C8D5228 F0 41 01 0E                             lock add [r14], ecx     ; Add
.text:000000014C8D522C 8B 4D A4                                mov     ecx, [rbp+var_5C]
.text:000000014C8D522F 49 8B C5                                mov     rax, r13
.text:000000014C8D5232 41 89 4D 00                             mov     [r13+0], ecx
.text:000000014C8D5236 41 C7 45 04 00 00 00 00                 mov     dword ptr [r13+4], 0
.text:000000014C8D523E 48 8B 4D F0                             mov     rcx, [rbp+var_10]
.text:000000014C8D5242 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014C8D5245 E8 16 AC 98 03                          call    __security_check_cookie ; Call Procedure
.text:000000014C8D524A 4C 8D 9C 24 80 00 00 00                 lea     r11, [rsp+80h+var_s0] ; Load Effective Address
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


```
