
---
Call fun Bone and C2w
---
```lua

Address	Function	Instruction
.text:000000014D9038E5	sub_14D9038C0	call    sub_14E2CB510; Call Procedure'






	.text:000000014D9038E5 E8 26 7C 9C 00                          call    sub_14E2CB510   ; Call Procedure
	.text:000000014D9038C0                         sub_14D9038C0   proc near
	.text:000000014D9038C0
	.text:000000014D9038C0                         var_48          = byte ptr -48h
	.text:000000014D9038C0                         var_18          = qword ptr -18h
	.text:000000014D9038C0
	.text:000000014D9038C0 40 53                                   push    rbx
	.text:000000014D9038C2 48 83 EC 60                             sub     rsp, 60h        ; Integer Subtraction
	.text:000000014D9038C6 48 8B 05 73 1A 4C 09                    mov     rax, cs:off_156DC5340
	.text:000000014D9038CD 48 33 C4                                xor     rax, rsp        ; Logical Exclusive OR
	.text:000000014D9038D0 48 89 44 24 50                          mov     [rsp+50h], rax
	.text:000000014D9038D5 48 8B D9                                mov     rbx, rcx
	.text:000000014D9038D8 E8 83 5E 98 00                          call    sub_14E289760   ; Call Procedure
	.text:000000014D9038DD 48 8D 54 24 20                          lea     rdx, [rsp+20h]  ; Load Effective Address
	.text:000000014D9038E2 48 8B CB                                mov     rcx, rbx
	.text:000000014D9038E5 E8 26 7C 9C 00                          call    sub_14E2CB510   ; Call Procedure
	.text:000000014D9038EA 48 8B CB                                mov     rcx, rbx
	.text:000000014D9038ED 0F 10 00                                movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
	.text:000000014D9038F0 0F 11 83 D0 05 00 00                    movups  xmmword ptr [rbx+5D0h], xmm0 ; Move Unaligned Four Packed Single-FP
	.text:000000014D9038F7 0F 10 48 10                             movups  xmm1, xmmword ptr [rax+10h] ; Move Unaligned Four Packed Single-FP
	.text:000000014D9038FB 0F 11 8B E0 05 00 00                    movups  xmmword ptr [rbx+5E0h], xmm1 ; Move Unaligned Four Packed Single-FP
	.text:000000014D903902 0F 10 40 20                             movups  xmm0, xmmword ptr [rax+20h] ; Move Unaligned Four Packed Single-FP
	.text:000000014D903906 0F 11 83 F0 05 00 00                    movups  xmmword ptr [rbx+5F0h], xmm0 ; Move Unaligned Four Packed Single-FP
	.text:000000014D90390D E8 4E 85 20 F3                          call    sub_140B0BE60   ; Call Procedure
	.text:000000014D903912 0F 10 40 20                             movups  xmm0, xmmword ptr [rax+20h] ; Move Unaligned Four Packed Single-FP
	.text:000000014D903916 0F 28 C8                                movaps  xmm1, xmm0      ; Move Aligned Four Packed Single-FP
	.text:000000014D903919 0F 28 D0                                movaps  xmm2, xmm0      ; Move Aligned Four Packed Single-FP
	.text:000000014D90391C 0F C6 D0 AA                             shufps  xmm2, xmm0, 0AAh ; Shuffle Single-FP
	.text:000000014D903920 0F C6 C8 55                             shufps  xmm1, xmm0, 55h ; 'U' ; Shuffle Single-FP
	.text:000000014D903924 0F 14 C1                                unpcklps xmm0, xmm1     ; Unpack Low Packed Single-FP Data
	.text:000000014D903927 F2 0F 11 83 00 06 00 00                 movsd   qword ptr [rbx+600h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
	.text:000000014D90392F F3 0F 11 93 08 06 00 00                 movss   dword ptr [rbx+608h], xmm2 ; Move Scalar Single-FP
	.text:000000014D903937 48 8B 4C 24 50                          mov     rcx, [rsp+50h]
	.text:000000014D90393C 48 33 CC                                xor     rcx, rsp        ; StackCookie
	.text:000000014D90393F E8 1C C5 95 02                          call    __security_check_cookie ; Call Procedure
	.text:000000014D903944 48 83 C4 60                             add     rsp, 60h        ; Add
	.text:000000014D903948 5B                                      pop     rbx
	.text:000000014D903949 C3                                      retn                    ; Return Near from Procedure
	.text:000000014D903949                         sub_14D9038C0   endp
	
	//follow   call    sub_14E2CB510
	
	
	.text:000000014E2CB510                         ; __int64 __fastcall sub_14E2CB510(_QWORD, _QWORD)
.text:000000014E2CB510                         sub_14E2CB510   proc near               ; CODE XREF: .text:0000000141CEB251↑p
.text:000000014E2CB510                                                                 ; sub_141D52270+2B28↑p ...
.text:000000014E2CB510
.text:000000014E2CB510                         var_48          = qword ptr -48h
.text:000000014E2CB510                         var_3C          = qword ptr -3Ch
.text:000000014E2CB510                         var_28          = byte ptr -28h
.text:000000014E2CB510                         var_18          = xmmword ptr -18h
.text:000000014E2CB510                         arg_0           = qword ptr  8
.text:000000014E2CB510                         arg_8           = qword ptr  10h
.text:000000014E2CB510
.text:000000014E2CB510 48 89 5C 24 08                          mov     [rsp+8], rbx
.text:000000014E2CB515 48 89 74 24 10                          mov     [rsp+10h], rsi
.text:000000014E2CB51A 57                                      push    rdi
.text:000000014E2CB51B 48 83 EC 60                             sub     rsp, 60h        ; Integer Subtraction
.text:000000014E2CB51F F2 0F 10 81 84 01 00 00                 movsd   xmm0, qword ptr [rcx+184h] ; Move Scalar Double-Precision Floating-Point Values
.text:000000014E2CB527 48 8B D9                                mov     rbx, rcx
.text:000000014E2CB52A 8B B1 8C 01 00 00                       mov     esi, [rcx+18Ch]
.text:000000014E2CB530 48 8B FA                                mov     rdi, rdx
.text:000000014E2CB533 F2 0F 11 44 24 20                       movsd   qword ptr [rsp+20h], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.text:000000014E2CB539 F2 0F 10 81 78 01 00 00                 movsd   xmm0, qword ptr [rcx+178h] ; Move Scalar Double-Precision Floating-Point Values
.text:000000014E2CB541 48 81 C1 00 02 00 00                    add     rcx, 200h       ; Add
.text:000000014E2CB548 0F 29 74 24 50                          movaps  xmmword ptr [rsp+50h], xmm6 ; Move Aligned Four Packed Single-FP
.text:000000014E2CB54D F2 0F 11 44 24 2C                       movsd   qword ptr [rsp+2Ch], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.text:000000014E2CB553 0F 2E 01                                ucomiss xmm0, dword ptr [rcx] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.text:000000014E2CB556 75 1E                                   jnz     short loc_14E2CB576 ; Jump if Not Zero (ZF=0)
.text:000000014E2CB558 F3 0F 10 44 24 30                       movss   xmm0, dword ptr [rsp+30h] ; Move Scalar Single-FP
.text:000000014E2CB55E 0F 2E 41 04                             ucomiss xmm0, dword ptr [rcx+4] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.text:000000014E2CB562 75 12                                   jnz     short loc_14E2CB576 ; Jump if Not Zero (ZF=0)
.text:000000014E2CB564 F3 0F 10 83 80 01 00 00                 movss   xmm0, dword ptr [rbx+180h] ; Move Scalar Single-FP
.text:000000014E2CB56C 0F 2E 41 08                             ucomiss xmm0, dword ptr [rcx+8] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.text:000000014E2CB570 0F 84 C5 00 00 00                       jz      loc_14E2CB63B   ; Jump if Zero (ZF=1)
.text:000000014E2CB576
.text:000000014E2CB576                         loc_14E2CB576:                          ; CODE XREF: sub_14E2CB510+46↑j
.text:000000014E2CB576                                                                 ; sub_14E2CB510+52↑j
.text:000000014E2CB576 F2 0F 10 9B 78 01 00 00                 movsd   xmm3, qword ptr [rbx+178h] ; Move Scalar Double-Precision Floating-Point Values
.text:000000014E2CB57E 48 8D 54 24 40                          lea     rdx, [rsp+40h]  ; Load Effective Address
.text:000000014E2CB583 0F 28 35 16 4B 26 09                    movaps  xmm6, cs:xmmword_1575300A0 ; Move Aligned Four Packed Single-FP
.text:000000014E2CB58A 0F 28 CB                                movaps  xmm1, xmm3      ; Move Aligned Four Packed Single-FP
.text:000000014E2CB58D F3 0F 10 83 80 01 00 00                 movss   xmm0, dword ptr [rbx+180h] ; Move Scalar Single-FP
.text:000000014E2CB595 0F 28 EB                                movaps  xmm5, xmm3      ; Move Aligned Four Packed Single-FP
.text:000000014E2CB598 0F 28 25 11 4B 26 09                    movaps  xmm4, cs:xmmword_1575300B0 ; Move Aligned Four Packed Single-FP
.text:000000014E2CB59F 0F C6 C9 55                             shufps  xmm1, xmm1, 55h ; 'U' ; Shuffle Single-FP
.text:000000014E2CB5A3 0F 14 E9                                unpcklps xmm5, xmm1     ; Unpack Low Packed Single-FP Data
.text:000000014E2CB5A6 0F 16 E8                                movlhps xmm5, xmm0      ; Move Low to High Packed Single-FP
.text:000000014E2CB5A9 F2 0F 11 5C 24 2C                       movsd   qword ptr [rsp+2Ch], xmm3 ; Move Scalar Double-Precision Floating-Point Values
.text:000000014E2CB5AF 0F 28 D5                                movaps  xmm2, xmm5      ; Move Aligned Four Packed Single-FP
.text:000000014E2CB5B2 0F 5E D6                                divps   xmm2, xmm6      ; Packed Single-FP Divide
.text:000000014E2CB5B5 F3 0F 5B C2                             cvttps2dq xmm0, xmm2    ; Convert With Truncation Packed Single-Precision Floating-Point Values to Packed Doubleword Integers
.text:000000014E2CB5B9 0F 28 CA                                movaps  xmm1, xmm2      ; Move Aligned Four Packed Single-FP
.text:000000014E2CB5BC 0F 54 0D 1D 48 26 09                    andps   xmm1, cs:xmmword_15752FDE0 ; Bitwise Logical And for Single-FP
.text:000000014E2CB5C3 0F 5B D8                                cvtdq2ps xmm3, xmm0     ; Convert Packed Doubleword Integers to Packed Double-Precision Floating-Point Values
.text:000000014E2CB5C6 0F C2 E1 02                             cmpleps xmm4, xmm1      ; Packed Single-FP Compare LE
.text:000000014E2CB5CA 0F 28 C3                                movaps  xmm0, xmm3      ; Move Aligned Four Packed Single-FP
.text:000000014E2CB5CD 0F 28 CE                                movaps  xmm1, xmm6      ; Move Aligned Four Packed Single-FP
.text:000000014E2CB5D0 0F 57 C2                                xorps   xmm0, xmm2      ; Bitwise Logical XOR for Single-FP Data
.text:000000014E2CB5D3 0F 54 E0                                andps   xmm4, xmm0      ; Bitwise Logical And for Single-FP
.text:000000014E2CB5D6 0F 57 C0                                xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.text:000000014E2CB5D9 0F 57 E3                                xorps   xmm4, xmm3      ; Bitwise Logical XOR for Single-FP Data
.text:000000014E2CB5DC 0F 59 E6                                mulps   xmm4, xmm6      ; Packed Single-FP Multiply
.text:000000014E2CB5DF 0F 5C EC                                subps   xmm5, xmm4      ; Packed Single-FP Subtract
.text:000000014E2CB5E2 0F C2 C5 02                             cmpleps xmm0, xmm5      ; Packed Single-FP Compare LE
.text:000000014E2CB5E6 0F 58 CD                                addps   xmm1, xmm5      ; Packed Single-FP Add
.text:000000014E2CB5E9 0F 28 D1                                movaps  xmm2, xmm1      ; Move Aligned Four Packed Single-FP
.text:000000014E2CB5EC 0F 57 D5                                xorps   xmm2, xmm5      ; Bitwise Logical XOR for Single-FP Data
.text:000000014E2CB5EF 0F 54 D0                                andps   xmm2, xmm0      ; Bitwise Logical And for Single-FP
.text:000000014E2CB5F2 0F 28 05 97 4A 26 09                    movaps  xmm0, cs:xmmword_157530090 ; Move Aligned Four Packed Single-FP
.text:000000014E2CB5F9 0F 57 D1                                xorps   xmm2, xmm1      ; Bitwise Logical XOR for Single-FP Data
.text:000000014E2CB5FC 0F C2 C2 01                             cmpltps xmm0, xmm2      ; Packed Single-FP Compare LT
.text:000000014E2CB600 0F 28 DA                                movaps  xmm3, xmm2      ; Move Aligned Four Packed Single-FP
.text:000000014E2CB603 0F 5C DE                                subps   xmm3, xmm6      ; Packed Single-FP Subtract
.text:000000014E2CB606 0F 57 DA                                xorps   xmm3, xmm2      ; Bitwise Logical XOR for Single-FP Data
.text:000000014E2CB609 0F 54 D8                                andps   xmm3, xmm0      ; Bitwise Logical And for Single-FP
.text:000000014E2CB60C 0F 57 DA                                xorps   xmm3, xmm2      ; Bitwise Logical XOR for Single-FP Data
.text:000000014E2CB60F 0F 28 CB                                movaps  xmm1, xmm3      ; Move Aligned Four Packed Single-FP
.text:000000014E2CB612 0F 28 C3                                movaps  xmm0, xmm3      ; Move Aligned Four Packed Single-FP
.text:000000014E2CB615 0F C6 CB 55                             shufps  xmm1, xmm3, 55h ; 'U' ; Shuffle Single-FP
.text:000000014E2CB619 0F 28 D3                                movaps  xmm2, xmm3      ; Move Aligned Four Packed Single-FP
.text:000000014E2CB61C 0F 14 C1                                unpcklps xmm0, xmm1     ; Unpack Low Packed Single-FP Data
.text:000000014E2CB61F 0F C6 D3 AA                             shufps  xmm2, xmm3, 0AAh ; Shuffle Single-FP
.text:000000014E2CB623 F2 0F 11 01                             movsd   qword ptr [rcx], xmm0 ; Move Scalar Double-Precision Floating-Point Values
.text:000000014E2CB627 F3 0F 11 51 08                          movss   dword ptr [rcx+8], xmm2 ; Move Scalar Single-FP
.text:000000014E2CB62C E8 9F 81 56 FE                          call    sub_14C8337D0   ; Call Procedure
.text:000000014E2CB631 0F 10 00                                movups  xmm0, xmmword ptr [rax] ; Move Unaligned Four Packed Single-FP
.text:000000014E2CB634 0F 11 83 F0 01 00 00                    movups  xmmword ptr [rbx+1F0h], xmm0 ; Move Unaligned Four Packed Single-FP
.text:000000014E2CB63B
.text:000000014E2CB63B                         loc_14E2CB63B:                          ; CODE XREF: sub_14E2CB510+60↑j
.text:000000014E2CB63B 0F 10 B3 F0 01 00 00                    movups  xmm6, xmmword ptr [rbx+1F0h] ; Move Unaligned Four Packed Single-FP
.text:000000014E2CB642 48 8D 54 24 2C                          lea     rdx, [rsp+2Ch]  ; Load Effective Address
.text:000000014E2CB647 48 8B CB                                mov     rcx, rbx
.text:000000014E2CB64A E8 51 5F BF F2                          call    sub_140EC15A0   ; Call Procedure
.text:000000014E2CB64F 48 8B 5C 24 70                          mov     rbx, [rsp+70h]
.text:000000014E2CB654 66 0F 6E C6                             movd    xmm0, esi       ; Move 32 bits
.text:000000014E2CB658 48 8B 74 24 78                          mov     rsi, [rsp+78h]
.text:000000014E2CB65D F3 0F 10 50 08                          movss   xmm2, dword ptr [rax+8] ; Move Scalar Single-FP
.text:000000014E2CB662 F2 0F 10 18                             movsd   xmm3, qword ptr [rax] ; Move Scalar Double-Precision Floating-Point Values
.text:000000014E2CB666 48 8B C7                                mov     rax, rdi
.text:000000014E2CB669 0F 16 DA                                movlhps xmm3, xmm2      ; Move Low to High Packed Single-FP
.text:000000014E2CB66C 0F 11 5F 10                             movups  xmmword ptr [rdi+10h], xmm3 ; Move Unaligned Four Packed Single-FP
.text:000000014E2CB670 F2 0F 10 5C 24 20                       movsd   xmm3, qword ptr [rsp+20h] ; Move Scalar Double-Precision Floating-Point Values
.text:000000014E2CB676 0F 16 D8                                movlhps xmm3, xmm0      ; Move Low to High Packed Single-FP
.text:000000014E2CB679 0F 11 37                                movups  xmmword ptr [rdi], xmm6 ; Move Unaligned Four Packed Single-FP
.text:000000014E2CB67C 0F 28 74 24 50                          movaps  xmm6, xmmword ptr [rsp+50h] ; Move Aligned Four Packed Single-FP
.text:000000014E2CB681 0F 11 5F 20                             movups  xmmword ptr [rdi+20h], xmm3 ; Move Unaligned Four Packed Single-FP
.text:000000014E2CB685 48 83 C4 60                             add     rsp, 60h        ; Add
.text:000000014E2CB689 5F                                      pop     rdi
.text:000000014E2CB68A C3                                      retn                    ; Return Near from Procedure
.text:000000014E2CB68A                         sub_14E2CB510   endp
.text:000000014E2CB68A
.text:000000014E2CB68A                         ; ---------------------------------------------------------------------------
.text:000000014E2CB68B CC CC CC CC CC                          align 10h


//Follow  call    sub_14E289760

.text:000000014E289760
.text:000000014E289760                         ; __int64 sub_14E289760(void)
.text:000000014E289760                         sub_14E289760   proc near               ; CODE XREF: sub_142A15100+9↑p
.text:000000014E289760                                                                 ; sub_145E8EC00+A3↑p ...
.text:000000014E289760 40 53                                   push    rbx
.text:000000014E289762 48 83 EC 20                             sub     rsp, 20h        ; Integer Subtraction
.text:000000014E289766 48 8B D9                                mov     rbx, rcx
.text:000000014E289769 F0 FF 05 88 60 2A 09                    lock inc cs:dword_15752F7F8 ; Increment by 1
.text:000000014E289770 0F 57 C9                                xorps   xmm1, xmm1      ; Bitwise Logical XOR for Single-FP Data
.text:000000014E289773 0F 2E 89 60 02 00 00                    ucomiss xmm1, dword ptr [rcx+260h] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.text:000000014E28977A 75 2B                                   jnz     short loc_14E2897A7 ; Jump if Not Zero (ZF=0)
.text:000000014E28977C F3 0F 10 81 5C 02 00 00                 movss   xmm0, dword ptr [rcx+25Ch] ; Move Scalar Single-FP
.text:000000014E289784 0F 2F C1                                comiss  xmm0, xmm1      ; Scalar Ordered Single-FP Compare and Set EFLAGS
.text:000000014E289787 76 1E                                   jbe     short loc_14E2897A7 ; Jump if Below or Equal (CF=1 | ZF=1)
.text:000000014E289789 F6 81 68 02 00 00 40                    test    byte ptr [rcx+268h], 40h ; Logical Compare
.text:000000014E289790 75 0A                                   jnz     short loc_14E28979C ; Jump if Not Zero (ZF=0)
.text:000000014E289792 48 83 B9 80 04 00 00 00                 cmp     qword ptr [rcx+480h], 0 ; Compare Two Operands
.text:000000014E28979A 74 03                                   jz      short loc_14E28979F ; Jump if Zero (ZF=1)
.text:000000014E28979C
.text:000000014E28979C                         loc_14E28979C:                          ; CODE XREF: sub_14E289760+30↑j
.text:000000014E28979C 0F 57 C0                                xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.text:000000014E28979F
.text:000000014E28979F                         loc_14E28979F:                          ; CODE XREF: sub_14E289760+3A↑j
.text:000000014E28979F F3 0F 11 81 60 02 00 00                 movss   dword ptr [rcx+260h], xmm0 ; Move Scalar Single-FP
.text:000000014E2897A7
.text:000000014E2897A7                         loc_14E2897A7:                          ; CODE XREF: sub_14E289760+1A↑j
.text:000000014E2897A7                                                                 ; sub_14E289760+27↑j
.text:000000014E2897A7 E8 24 95 F7 FF                          call    sub_14E202CD0   ; Call Procedure
.text:000000014E2897AC 48 8B 03                                mov     rax, [rbx]
.text:000000014E2897AF 48 8B CB                                mov     rcx, rbx
.text:000000014E2897B2 FF 90 D8 04 00 00                       call    qword ptr [rax+4D8h] ; Indirect Call Near Procedure
.text:000000014E2897B8 48 8B CB                                mov     rcx, rbx
.text:000000014E2897BB E8 10 75 05 00                          call    sub_14E2E0CD0   ; Call Procedure
.text:000000014E2897C0 84 C0                                   test    al, al          ; Logical Compare
.text:000000014E2897C2 74 38                                   jz      short loc_14E2897FC ; Jump if Zero (ZF=1)
.text:000000014E2897C4 48 8B CB                                mov     rcx, rbx
.text:000000014E2897C7 E8 D4 75 05 00                          call    sub_14E2E0DA0   ; Call Procedure
.text:000000014E2897CC 84 C0                                   test    al, al          ; Logical Compare
.text:000000014E2897CE 75 09                                   jnz     short loc_14E2897D9 ; Jump if Not Zero (ZF=0)
.text:000000014E2897D0 F6 83 94 02 00 00 20                    test    byte ptr [rbx+294h], 20h ; Logical Compare
.text:000000014E2897D7 74 23                                   jz      short loc_14E2897FC ; Jump if Zero (ZF=1)
.text:000000014E2897D9
.text:000000014E2897D9                         loc_14E2897D9:                          ; CODE XREF: sub_14E289760+6E↑j
.text:000000014E2897D9 48 8B 83 F0 00 00 00                    mov     rax, [rbx+0F0h]
.text:000000014E2897E0 48 85 C0                                test    rax, rax        ; Logical Compare
.text:000000014E2897E3 75 08                                   jnz     short loc_14E2897ED ; Jump if Not Zero (ZF=0)
.text:000000014E2897E5 48 8B CB                                mov     rcx, rbx
.text:000000014E2897E8 E8 03 13 F8 FF                          call    sub_14E20AAF0   ; Call Procedure
.text:000000014E2897ED
.text:000000014E2897ED                         loc_14E2897ED:                          ; CODE XREF: sub_14E289760+83↑j
.text:000000014E2897ED 48 8B 88 B8 01 00 00                    mov     rcx, [rax+1B8h]
.text:000000014E2897F4 48 8B D3                                mov     rdx, rbx
.text:000000014E2897F7 48 8B 01                                mov     rax, [rcx]
.text:000000014E2897FA FF 10                                   call    qword ptr [rax] ; Indirect Call Near Procedure
.text:000000014E2897FC
.text:000000014E2897FC                         loc_14E2897FC:                          ; CODE XREF: sub_14E289760+62↑j
.text:000000014E2897FC                                                                 ; sub_14E289760+77↑j
.text:000000014E2897FC 0F B6 83 69 02 00 00                    movzx   eax, byte ptr [rbx+269h] ; Move with Zero-Extend
.text:000000014E289803 A8 04                                   test    al, 4           ; Logical Compare
.text:000000014E289805 75 51                                   jnz     short loc_14E289858 ; Jump if Not Zero (ZF=0)
.text:000000014E289807 80 BB 9F 01 00 00 00                    cmp     byte ptr [rbx+19Fh], 0 ; Compare Two Operands
.text:000000014E28980E 75 2C                                   jnz     short loc_14E28983C ; Jump if Not Zero (ZF=0)
.text:000000014E289810 A8 02                                   test    al, 2           ; Logical Compare
.text:000000014E289812 75 28                                   jnz     short loc_14E28983C ; Jump if Not Zero (ZF=0)
.text:000000014E289814 80 BB 68 02 00 00 00                    cmp     byte ptr [rbx+268h], 0 ; Compare Two Operands
.text:000000014E28981B 7C 3B                                   jl      short loc_14E289858 ; Jump if Less (SF!=OF)
.text:000000014E28981D 48 8B 8B E8 00 00 00                    mov     rcx, [rbx+0E8h]
.text:000000014E289824 48 85 C9                                test    rcx, rcx        ; Logical Compare
.text:000000014E289827 74 2F                                   jz      short loc_14E289858 ; Jump if Zero (ZF=1)
.text:000000014E289829 E8 E2 EF DE FF                          call    sub_14E078810   ; Call Procedure
.text:000000014E28982E 48 85 C0                                test    rax, rax        ; Logical Compare
.text:000000014E289831 74 25                                   jz      short loc_14E289858 ; Jump if Zero (ZF=1)
.text:000000014E289833 F6 80 E4 01 00 00 10                    test    byte ptr [rax+1E4h], 10h ; Logical Compare
.text:000000014E28983A 74 1C                                   jz      short loc_14E289858 ; Jump if Zero (ZF=1)
.text:000000014E28983C
.text:000000014E28983C                         loc_14E28983C:                          ; CODE XREF: sub_14E289760+AE↑j
.text:000000014E28983C                                                                 ; sub_14E289760+B2↑j
.text:000000014E28983C E8 1F 4C 0B 00                          call    sub_14E33E460   ; Call Procedure
.text:000000014E289841 48 85 C0                                test    rax, rax        ; Logical Compare
.text:000000014E289844 74 12                                   jz      short loc_14E289858 ; Jump if Zero (ZF=1)
.text:000000014E289846 4C 8B 00                                mov     r8, [rax]
.text:000000014E289849 48 8B D3                                mov     rdx, rbx
.text:000000014E28984C 48 8B C8                                mov     rcx, rax
.text:000000014E28984F 48 83 C4 20                             add     rsp, 20h        ; Add
.text:000000014E289853 5B                                      pop     rbx
.text:000000014E289854 49 FF 60 78                             jmp     qword ptr [r8+78h] ; Indirect Near Jump
.text:000000014E289858                         ; ---------------------------------------------------------------------------
.text:000000014E289858
.text:000000014E289858                         loc_14E289858:                          ; CODE XREF: sub_14E289760+A5↑j
.text:000000014E289858                                                                 ; sub_14E289760+BB↑j ...
.text:000000014E289858 48 83 C4 20                             add     rsp, 20h        ; Add
.text:000000014E28985C 5B                                      pop     rbx
.text:000000014E28985D C3                                      retn                    ; Return Near from Procedure
.text:000000014E28985D                         sub_14E289760   endp
.text:000000014E28985D
.text:000000014E28985D                         ; ---------------------------------------------------------------------------
.text:000000014E28985E CC CC                                   align 20h
.text:000000014E289860

// Follow  call    sub_140B0BE60 


text:0000000140B0BE60
.text:0000000140B0BE60
.text:0000000140B0BE60                         ; __int64 __fastcall sub_140B0BE60(_QWORD)
.text:0000000140B0BE60                         sub_140B0BE60   proc near               ; CODE XREF: sub_140AE7640+20F↑p
.text:0000000140B0BE60                                                                 ; sub_140AE7640+6D0↑p ...
.text:0000000140B0BE60
.text:0000000140B0BE60                         arg_0           = dword ptr  8
.text:0000000140B0BE60
.text:0000000140B0BE60 C7 44 24 08 00 00 00 00                 mov     dword ptr [rsp+8], 0
.text:0000000140B0BE68 8B 44 24 08                             mov     eax, [rsp+8]
.text:0000000140B0BE6C FF C0                                   inc     eax             ; Increment by 1
.text:0000000140B0BE6E 89 44 24 08                             mov     [rsp+8], eax
.text:0000000140B0BE72 8B 44 24 08                             mov     eax, [rsp+8]
.text:0000000140B0BE76 FF C8                                   dec     eax             ; Decrement by 1
.text:0000000140B0BE78 89 44 24 08                             mov     [rsp+8], eax
.text:0000000140B0BE7C 48 8D 81 10 02 00 00                    lea     rax, [rcx+210h] ; Load Effective Address
.text:0000000140B0BE83 C3                                      retn                    ; Return Near from Procedure
.text:0000000140B0BE83                         sub_140B0BE60   endp
.text:0000000140B0BE83
.text:0000000140B0BE83                         ; ---------------------------------------------------------------------------
.text:0000000140B0BE84 CC CC CC CC CC CC CC CC…                align 10h
.text:0000000140B0BE90


//Go to .text:000000014D9038C6 48 8B 05 73 1A 4C 09                    mov     rax, cs:off_156DC5340

.data:0000000156DC5340 8C 40 4C 55 01 00 00 00 off_156DC5340   dq offset unk_1554C408C ; DATA XREF: sub_1400CF1A0+15↑r
.data:0000000156DC5340                                                                 ; sub_1400CF2B0+12↑r ...

asm start fun 

.data:0000000156DC5308 01 00 00 00             dword_156DC5308 dd 1                    ; DATA XREF: sub_15025FC08+16↑r
.data:0000000156DC5308                                                                 ; sub_15025FC08+2B↑w ...
.data:0000000156DC530C 00 00 00 00                             align 10h
.data:0000000156DC5310 B4 EE 51 55 01 00 00 00                 dq offset unk_15551EEB4
.data:0000000156DC5318 BC EE 51 55 01 00 00 00                 dq offset unk_15551EEBC
.data:0000000156DC5320 C0 EE 51 55 01 00 00 00                 dq offset unk_15551EEC0
.data:0000000156DC5328 C4 EE 51 55 01 00 00 00                 dq offset unk_15551EEC4
.data:0000000156DC5330 C8 EE 51 55 01 00 00 00                 dq offset unk_15551EEC8
.data:0000000156DC5338 08 32 50 55 01 00 00 00                 dq offset unk_155503208
.data:0000000156DC5340 8C 40 4C 55 01 00 00 00 off_156DC5340   dq offset unk_1554C408C ; DATA XREF: sub_1400CF1A0+15↑r
.data:0000000156DC5340                                                                 ; sub_1400CF2B0+12↑r ...
.data:0000000156DC5348 04 40 4C 55 01 00 00 00                 dq offset unk_1554C4004
.data:0000000156DC5350 30 11 52 55 01 00 00 00                 dq offset unk_155521130
.data:0000000156DC5358 3C 11 52 55 01 00 00 00                 dq offset unk_15552113C
.data:0000000156DC5360 48 11 52 55 01 00 00 00                 dq offset unk_155521148
.data:0000000156DC5368 58 11 52 55 01 00 00 00                 dq offset unk_155521158
.data:0000000156DC5370 68 11 52 55 01 00 00 00                 dq offset unk_155521168
.data:0000000156DC5378 74 11 52 55 01 00 00 00                 dq offset unk_155521174
.data:0000000156DC5380 80 11 52 55 01 00 00 00 off_156DC5380   dq offset unk_155521180 ; DATA XREF: __report_gsfailure+B5↑r
.data:0000000156DC5380                                                                 ; sub_15026566C+9F↑w
.data:0000000156DC5388 90 11 52 55 01 00 00 00                 dq offset unk_155521190
.data:0000000156DC5390 A0 11 52 55 01 00 00 00 off_156DC5390   dq offset unk_1555211A0 ; DATA XREF: sub_1502604C0:loc_1502605F4↑r
.data:0000000156DC5390                                                                 ; sub_1502604C0+158↑w ...
.data:0000000156DC5398 AC 11 52 55             dword_156DC5398 dd 555211ACh            ; DATA XREF: sub_1412334C0+1D↑r
.data:0000000156DC5398                                                                 ; sub_14269CD70+45↑r ...
.data:0000000156DC539C 01 00 00 00             dword_156DC539C dd 1                    ; DATA XREF: sub_15025F340+31↑r
.data:0000000156DC539C                                                                 ; sub_15025F5A0↑r ...
.data:0000000156DC53A0 00 EA 52 55 01 00 00 00 off_156DC53A0   dq offset unk_15552EA00 ; DATA XREF: sub_1502604C0+68↑w
.data:0000000156DC53A8 00 00 00 00 00 00 00 00 qword_156DC53A8 dq 0                    ; DATA XREF: sub_1502604C0+5B↑w
.data:0000000156DC53B0 00 00 00 00             dword_156DC53B0 dd 0                    ; DATA XREF: sub_150265734+2↑r
.data:0000000156DC53B4 00 00 00 00 00 00 00 00…                align 20h
.data:0000000156DC53C0 00                      byte_156DC53C0  db 0                    ; DATA XREF: sub_150269D54+42↑r
.data:0000000156DC53C0                                                                 ; sub_150269EFC+93↑r
.data:0000000156DC53C1 00 00 00 00 00 00 00 00…                align 10h
.data:0000000156DC53D0 00 00 00 00 00 00 00 00 qword_156DC53D0 dq 0                    ; DATA XREF: sub_150267CFC+9D↑r
.data:0000000156DC53D0                                                                 ; sub_150268A44:loc_150268BFC↑o
.data:0000000156DC53D8 00 00 00 00             dword_156DC53D8 dd 0                    ; DATA XREF: sub_150267CFC:loc_150267D92↑r
.data:0000000156DC53DC E8                                      db 0E8h
.data:0000000156DC53DD 03                                      db    3
.data:0000000156DC53DE 00                                      db    0
.data:0000000156DC53DF 00                                      db    0
.data:0000000156DC53E0 00 00 00 00 00 00 00 00 qword_156DC53E0 dq 0                    ; DATA XREF: sub_150267CFC+B4↑r
.data:0000000156DC53E8 00 00 00 00             dword_156DC53E8 dd 0                    ; DATA XREF: sub_150267CFC+AD↑r
.data:0000000156DC53EC 00 00 00 00                             align 10h
.data:0000000156DC53F0 00 00 00 00 00 00 00 00 qword_156DC53F0 dq 0                    ; DATA XREF: sub_150267CFC+CB↑r
.data:0000000156DC53F8 00 00 00 00             dword_156DC53F8 dd 0                    ; DATA XREF: sub_150267CFC+C4↑r
.data:0000000156DC53FC 00 00 00 00                             align 20h
.data:0000000156DC5400 00 00 00 00 00 00 00 00 qword_156DC5400 dq 0                    ; DATA XREF: sub_150267CFC+DF↑r
.data:0000000156DC5408 00 00 00 00             dword_156DC5408 dd 0                    ; DATA XREF: sub_150267CFC:loc_150267DD4↑r
.data:0000000156DC540C 00 00 00 00                             align 10h
.data:0000000156DC5410 00 00 00 00 00 00 00 00 qword_156DC5410 dq 0                    ; DATA XREF: sub_150267CFC+F3↑r
.data:0000000156DC5418 00 00 00 00             dword_156DC5418 dd 0                    ; DATA XREF: sub_150267CFC+EC↑r
.data:0000000156DC541C 00 00 00 00                             align 20h
.data:0000000156DC5420 00                      unk_156DC5420   db    0                 ; DATA XREF: sub_150268A44+1DC↑o
.data:0000000156DC5420                                                                 ; sub_15026A05C+28↑o
.data:0000000156DC5421 00                                      db    0

```
---
camcall
---
Address								Function						  Instruction
.text:0000000143BA4664	sub_143BA4650	call    sub_143BAAA30; Call Procedure
	.text:0000000143BA4664 E8 C7 63 00 00                          call    sub_143BAAA30   ; Call Procedure








```asm

.text:0000000143BA4650                         sub_143BA4650   proc near               ; CODE XREF: sub_143BB0CC0+1C↓p
.text:0000000143BA4650                                                                 ; sub_143BBEB20+18↓p ...
.text:0000000143BA4650
.text:0000000143BA4650                         var_158         = dword ptr -158h
.text:0000000143BA4650                         var_150         = qword ptr -150h
.text:0000000143BA4650                         var_148         = qword ptr -148h
.text:0000000143BA4650                         var_140         = qword ptr -140h
.text:0000000143BA4650                         var_138         = byte ptr -138h
.text:0000000143BA4650                         var_F8          = byte ptr -0F8h
.text:0000000143BA4650                         arg_0           = qword ptr  8
.text:0000000143BA4650
.text:0000000143BA4650 48 89 4C 24 08                          mov     [rsp+8], rcx
.text:0000000143BA4655 48 81 EC 78 01 00 00                    sub     rsp, 178h       ; Integer Subtraction
.text:0000000143BA465C 48 8B 8C 24 80 01 00 00                 mov     rcx, [rsp+180h]
.text:0000000143BA4664 E8 C7 63 00 00                          call    sub_143BAAA30   ; Call Procedure
.text:0000000143BA4669 F3 0F 11 44 24 20                       movss   dword ptr [rsp+20h], xmm0 ; Move Scalar Single-FP
.text:0000000143BA466F 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA4677 F3 0F 10 44 24 20                       movss   xmm0, dword ptr [rsp+20h] ; Move Scalar Single-FP
.text:0000000143BA467D 0F 2E 80 10 DD 05 00                    ucomiss xmm0, dword ptr [rax+5DD10h] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.text:0000000143BA4684 75 13                                   jnz     short loc_143BA4699 ; Jump if Not Zero (ZF=0)
.text:0000000143BA4686 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA468E 48 05 20 DD 05 00                       add     rax, 5DD20h     ; Add
.text:0000000143BA4694 E9 F6 00 00 00                          jmp     loc_143BA478F   ; Jump

	call    sub_143BAAA30 
			.text:0000000143BAAA30                         sub_143BAAA30   proc near               ; CODE XREF: sub_143BA4650+14↑p
			.text:0000000143BAAA30                                                                 ; sub_1446CD930+14A↓p
			.text:0000000143BAAA30 F3 0F 10 81 E0 F2 02 00                 movss   xmm0, dword ptr [rcx+2F2E0h] ; Move Scalar Single-FP
			.text:0000000143BAAA38 C3                                      retn                    ; Return Near from Procedure
			.text:0000000143BAAA38                         sub_143BAAA30   endp
			.text:0000000143BAAA38


```
---
full Asm ArrayCam_call_follow
---
```c
float *__fastcall sub_143BA4650(float *a1)
{
  __int64 v2; // r8
  float v3; // [rsp+20h] [rbp-158h]
  _QWORD *v4; // [rsp+28h] [rbp-150h]
  __int64 v5; // [rsp+30h] [rbp-148h]
  char v6[64]; // [rsp+40h] [rbp-138h] BYREF
  char v7[248]; // [rsp+80h] [rbp-F8h] BYREF

  v3 = sub_143BAAA30(a1);
  if ( v3 == a1[0x17744] )
    return a1 + 0x17748;
  v5 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 0x6F0LL))(a1);
  if ( v5 )
  {
    v4 = (_QWORD *)sub_14E7D2260(v5);
    if ( v4 )
    {
      if ( v4[0xE] )
      {
        sub_140ADBF30(v7);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, _QWORD, char *))(*v4 + 0x2B0LL))(
               v4,
               *(_QWORD *)(v4[0xE] + 0xA0LL),
               0LL,
               v7) )
        {
          sub_140AEE980(v7, v6);
          LOBYTE(v2) = 1;
          sub_14E33E2D0(a1 + 0x17748, v6, v2);
          a1[0x17744] = v3;
        }
      }
    }
  }
  return a1 + 0x17748;
}
//Base Enc Cam
int *__fastcall sub_143BA47A0(__int64 a1, int *a2, __int64 *a3, __int64 a4, char a5)
{
  int v5; // r8d
  int v6; // r9d
  int v7; // r8d
  int v8; // r9d
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r8d
  int v15; // r9d
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r9
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r9
  int v35; // [rsp+28h] [rbp-800h]
  int v36; // [rsp+28h] [rbp-800h]
  _QWORD *v37; // [rsp+40h] [rbp-7E8h]
  int v38[4]; // [rsp+50h] [rbp-7D8h] BYREF
  char v39; // [rsp+60h] [rbp-7C8h]
  bool v40; // [rsp+61h] [rbp-7C7h]
  bool v41; // [rsp+62h] [rbp-7C6h]
  bool v42; // [rsp+63h] [rbp-7C5h]
  bool v43; // [rsp+64h] [rbp-7C4h]
  int v44[4]; // [rsp+68h] [rbp-7C0h] BYREF
  bool v45; // [rsp+78h] [rbp-7B0h]
  char v46; // [rsp+79h] [rbp-7AFh]
  char v47; // [rsp+7Ah] [rbp-7AEh]
  bool v48; // [rsp+7Bh] [rbp-7ADh]
  bool v49; // [rsp+7Eh] [rbp-7AAh]
  bool v50; // [rsp+7Fh] [rbp-7A9h]
  bool v51; // [rsp+80h] [rbp-7A8h]
  char v52; // [rsp+84h] [rbp-7A4h]
  int v53; // [rsp+88h] [rbp-7A0h]
  float v54; // [rsp+90h] [rbp-798h]
  float v55; // [rsp+98h] [rbp-790h]
  BOOL v56; // [rsp+A0h] [rbp-788h]
  float *v57; // [rsp+A8h] [rbp-780h]
  __int64 v58; // [rsp+B0h] [rbp-778h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-770h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-768h]
  __int64 v61; // [rsp+C8h] [rbp-760h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-758h] BYREF
  unsigned __int64 v63; // [rsp+D8h] [rbp-750h]
  __int64 v64; // [rsp+E0h] [rbp-748h]
  unsigned __int64 v65; // [rsp+E8h] [rbp-740h]
  __int64 v66; // [rsp+F0h] [rbp-738h]
  unsigned __int64 v67; // [rsp+F8h] [rbp-730h]
  unsigned __int64 v68; // [rsp+100h] [rbp-728h]
  unsigned __int64 v69; // [rsp+108h] [rbp-720h]
  __int64 v70; // [rsp+110h] [rbp-718h]
  __int64 v71; // [rsp+118h] [rbp-710h]
  float v72; // [rsp+120h] [rbp-708h]
  float v73; // [rsp+128h] [rbp-700h]
  float v74; // [rsp+130h] [rbp-6F8h]
  float v75; // [rsp+138h] [rbp-6F0h]
  float v76; // [rsp+140h] [rbp-6E8h]
  float v77; // [rsp+148h] [rbp-6E0h]
  float v78; // [rsp+150h] [rbp-6D8h]
  float v79; // [rsp+158h] [rbp-6D0h]
  float v80; // [rsp+160h] [rbp-6C8h]
  float v81; // [rsp+168h] [rbp-6C0h]
  float v82; // [rsp+170h] [rbp-6B8h]
  float v83; // [rsp+178h] [rbp-6B0h]
  float v84; // [rsp+180h] [rbp-6A8h]
  float v85; // [rsp+188h] [rbp-6A0h]
  float v86; // [rsp+190h] [rbp-698h]
  float v87; // [rsp+198h] [rbp-690h]
  int v88; // [rsp+1A0h] [rbp-688h]
  float v89; // [rsp+1A8h] [rbp-680h]
  int v90; // [rsp+1B0h] [rbp-678h]
  float v91; // [rsp+1B8h] [rbp-670h]
  float v92; // [rsp+1C0h] [rbp-668h]
  float v93; // [rsp+1C8h] [rbp-660h]
  float v94; // [rsp+1D0h] [rbp-658h]
  int v95; // [rsp+1D8h] [rbp-650h]
  int v96; // [rsp+1DCh] [rbp-64Ch]
  int v97; // [rsp+1E0h] [rbp-648h]
  int v98; // [rsp+1E4h] [rbp-644h]
  int v99; // [rsp+1E8h] [rbp-640h]
  int v100; // [rsp+1ECh] [rbp-63Ch]
  float v101; // [rsp+1F0h] [rbp-638h]
  int v102; // [rsp+1F8h] [rbp-630h]
  int v103; // [rsp+1FCh] [rbp-62Ch]
  _QWORD *v104; // [rsp+200h] [rbp-628h]
  __int64 v105; // [rsp+208h] [rbp-620h]
  __int64 *v106; // [rsp+210h] [rbp-618h]
  __int64 v107; // [rsp+218h] [rbp-610h]
  float *v108; // [rsp+220h] [rbp-608h]
  int *v109; // [rsp+228h] [rbp-600h]
  float *v110; // [rsp+230h] [rbp-5F8h]
  float *v111; // [rsp+238h] [rbp-5F0h]
  float v112; // [rsp+240h] [rbp-5E8h]
  float *v113; // [rsp+248h] [rbp-5E0h]
  float *v114; // [rsp+250h] [rbp-5D8h]
  int *v115; // [rsp+258h] [rbp-5D0h]
  float *v116; // [rsp+260h] [rbp-5C8h]
  float *v117; // [rsp+268h] [rbp-5C0h]
  int *v118; // [rsp+270h] [rbp-5B8h]
  float *v119; // [rsp+278h] [rbp-5B0h]
  __int64 v120; // [rsp+280h] [rbp-5A8h]
  __int64 v121; // [rsp+288h] [rbp-5A0h]
  float v122; // [rsp+290h] [rbp-598h]
  int *v123; // [rsp+298h] [rbp-590h]
  unsigned __int64 v124; // [rsp+2A0h] [rbp-588h]
  unsigned __int64 v125; // [rsp+2A8h] [rbp-580h]
  unsigned __int64 v126; // [rsp+2B0h] [rbp-578h]
  __int64 v127; // [rsp+2B8h] [rbp-570h]
  char *v128; // [rsp+2C8h] [rbp-560h]
  unsigned __int64 v129; // [rsp+2D0h] [rbp-558h]
  float *v130; // [rsp+2D8h] [rbp-550h]
  float *v131; // [rsp+2E0h] [rbp-548h]
  unsigned __int64 v132; // [rsp+2E8h] [rbp-540h]
  unsigned __int64 v133; // [rsp+2F0h] [rbp-538h]
  unsigned __int64 v134; // [rsp+2F8h] [rbp-530h]
  unsigned __int64 v135; // [rsp+300h] [rbp-528h]
  unsigned __int64 v136; // [rsp+308h] [rbp-520h]
  unsigned __int64 v137; // [rsp+310h] [rbp-518h]
  unsigned __int64 v138; // [rsp+318h] [rbp-510h]
  char *v139; // [rsp+320h] [rbp-508h]
  const _QWORD *v140; // [rsp+328h] [rbp-500h]
  char *v141; // [rsp+330h] [rbp-4F8h]
  const _QWORD *v142; // [rsp+338h] [rbp-4F0h]
  const _QWORD *v143; // [rsp+340h] [rbp-4E8h]
  char *v144; // [rsp+348h] [rbp-4E0h]
  const _QWORD *v145; // [rsp+350h] [rbp-4D8h]
  char *v146; // [rsp+358h] [rbp-4D0h]
  const _QWORD *v147; // [rsp+360h] [rbp-4C8h]
  const _QWORD *v148; // [rsp+368h] [rbp-4C0h]
  char *v149; // [rsp+370h] [rbp-4B8h]
  const _QWORD *v150; // [rsp+378h] [rbp-4B0h]
  const _QWORD *v151; // [rsp+380h] [rbp-4A8h]
  char *v152; // [rsp+388h] [rbp-4A0h]
  const _QWORD *v153; // [rsp+390h] [rbp-498h]
  const _QWORD *v154; // [rsp+398h] [rbp-490h]
  _QWORD *v155; // [rsp+3A0h] [rbp-488h]
  unsigned __int64 v156; // [rsp+3A8h] [rbp-480h]
  int v157[3]; // [rsp+3B0h] [rbp-478h] BYREF
  int v158[3]; // [rsp+3BCh] [rbp-46Ch] BYREF
  int v159[3]; // [rsp+3C8h] [rbp-460h] BYREF
  int v160[3]; // [rsp+3D4h] [rbp-454h] BYREF
  int v161[3]; // [rsp+3E0h] [rbp-448h] BYREF
  int v162[3]; // [rsp+3ECh] [rbp-43Ch] BYREF
  int v163[3]; // [rsp+3F8h] [rbp-430h] BYREF
  int v164[3]; // [rsp+404h] [rbp-424h] BYREF
  __int64 v165; // [rsp+410h] [rbp-418h] BYREF
  int v166; // [rsp+418h] [rbp-410h]
  __int64 v167; // [rsp+420h] [rbp-408h] BYREF
  int v168; // [rsp+428h] [rbp-400h]
  __int64 v169; // [rsp+430h] [rbp-3F8h] BYREF
  int v170; // [rsp+438h] [rbp-3F0h]
  __int64 v171; // [rsp+440h] [rbp-3E8h] BYREF
  int v172; // [rsp+448h] [rbp-3E0h]
  float *v173; // [rsp+450h] [rbp-3D8h]
  int *v174; // [rsp+458h] [rbp-3D0h]
  int *v175; // [rsp+460h] [rbp-3C8h]
  int *v176; // [rsp+468h] [rbp-3C0h]
  int *v177; // [rsp+470h] [rbp-3B8h]
  int *v178; // [rsp+478h] [rbp-3B0h]
  int *v179; // [rsp+480h] [rbp-3A8h]
  int *v180; // [rsp+488h] [rbp-3A0h]
  int *v181; // [rsp+490h] [rbp-398h]
  __int64 v182; // [rsp+498h] [rbp-390h]
  __int64 v183; // [rsp+4A0h] [rbp-388h]
  unsigned __int64 v184; // [rsp+4A8h] [rbp-380h]
  unsigned __int64 v185; // [rsp+4B0h] [rbp-378h]
  unsigned __int64 v186; // [rsp+4B8h] [rbp-370h]
  __int64 v187; // [rsp+4C0h] [rbp-368h]
  __int64 v188; // [rsp+4C8h] [rbp-360h]
  unsigned __int64 v189; // [rsp+4D0h] [rbp-358h]
  unsigned __int64 v190; // [rsp+4D8h] [rbp-350h]
  unsigned __int64 v191; // [rsp+4E0h] [rbp-348h]
  char *v192; // [rsp+4E8h] [rbp-340h]
  const _QWORD *v193; // [rsp+4F0h] [rbp-338h]
  const _QWORD *v194; // [rsp+4F8h] [rbp-330h]
  char *v195; // [rsp+500h] [rbp-328h]
  const _QWORD *v196; // [rsp+508h] [rbp-320h]
  const _QWORD *v197; // [rsp+510h] [rbp-318h]
  const _QWORD *v198; // [rsp+518h] [rbp-310h]
  const _QWORD *v199; // [rsp+520h] [rbp-308h]
  const _QWORD *v200; // [rsp+528h] [rbp-300h]
  const _QWORD *v201; // [rsp+530h] [rbp-2F8h]
  const _QWORD *v202; // [rsp+538h] [rbp-2F0h]
  const _QWORD *v203; // [rsp+540h] [rbp-2E8h]
  char *v204; // [rsp+548h] [rbp-2E0h]
  const _QWORD *v205; // [rsp+550h] [rbp-2D8h]
  const _QWORD *v206; // [rsp+558h] [rbp-2D0h]
  char *v207; // [rsp+560h] [rbp-2C8h]
  const _QWORD *v208; // [rsp+568h] [rbp-2C0h]
  const _QWORD *v209; // [rsp+570h] [rbp-2B8h]
  const _QWORD *v210; // [rsp+578h] [rbp-2B0h]
  const _QWORD *v211; // [rsp+580h] [rbp-2A8h]
  const _QWORD *v212; // [rsp+588h] [rbp-2A0h]
  const _QWORD *v213; // [rsp+590h] [rbp-298h]
  const _QWORD *v214; // [rsp+598h] [rbp-290h]
  char *v215; // [rsp+5A0h] [rbp-288h]
  const _QWORD *v216; // [rsp+5A8h] [rbp-280h]
  const _QWORD *v217; // [rsp+5B0h] [rbp-278h]
  const _QWORD *v218; // [rsp+5B8h] [rbp-270h]
  const _QWORD *v219; // [rsp+5C0h] [rbp-268h]
  const _QWORD *v220; // [rsp+5C8h] [rbp-260h]
  const _QWORD *v221; // [rsp+5D0h] [rbp-258h]
  const _QWORD *v222; // [rsp+5D8h] [rbp-250h]
  char *v223; // [rsp+5E0h] [rbp-248h]
  const _QWORD *v224; // [rsp+5E8h] [rbp-240h]
  const _QWORD *v225; // [rsp+5F0h] [rbp-238h]
  const _QWORD *v226; // [rsp+5F8h] [rbp-230h]
  const _QWORD *v227; // [rsp+600h] [rbp-228h]
  const _QWORD *v228; // [rsp+608h] [rbp-220h]
  const _QWORD *v229; // [rsp+610h] [rbp-218h]
  const _QWORD *v230; // [rsp+618h] [rbp-210h]
  _QWORD *v231; // [rsp+620h] [rbp-208h]
  _QWORD *v232; // [rsp+628h] [rbp-200h]
  __int64 v233; // [rsp+630h] [rbp-1F8h]
  unsigned __int64 v234; // [rsp+638h] [rbp-1F0h]
  unsigned __int64 v235; // [rsp+640h] [rbp-1E8h]
  __int128 *v236; // [rsp+648h] [rbp-1E0h]
  char *v237; // [rsp+650h] [rbp-1D8h]
  const _QWORD *v238; // [rsp+658h] [rbp-1D0h]
  char *v239; // [rsp+660h] [rbp-1C8h]
  char *v240; // [rsp+668h] [rbp-1C0h]
  __int64 v241; // [rsp+670h] [rbp-1B8h]
  __int64 v242; // [rsp+678h] [rbp-1B0h]
  unsigned __int64 v243; // [rsp+680h] [rbp-1A8h]
  float *v244; // [rsp+688h] [rbp-1A0h]
  __int128 v245; // [rsp+690h] [rbp-198h] BYREF
  char v246[8]; // [rsp+6A0h] [rbp-188h] BYREF
  int v247; // [rsp+6A8h] [rbp-180h]
  char v248[8]; // [rsp+6B0h] [rbp-178h] BYREF
  int v249; // [rsp+6B8h] [rbp-170h]
  char v250[8]; // [rsp+6C0h] [rbp-168h] BYREF
  int v251; // [rsp+6C8h] [rbp-160h]
  char v252[8]; // [rsp+6D0h] [rbp-158h] BYREF
  int v253; // [rsp+6D8h] [rbp-150h]
  char v254[8]; // [rsp+6E0h] [rbp-148h] BYREF
  int v255; // [rsp+6E8h] [rbp-140h]
  char v256[8]; // [rsp+6F0h] [rbp-138h] BYREF
  int v257; // [rsp+6F8h] [rbp-130h]
  __int64 v258[2]; // [rsp+700h] [rbp-128h] BYREF
  char v259[12]; // [rsp+710h] [rbp-118h] BYREF
  char v260[12]; // [rsp+71Ch] [rbp-10Ch] BYREF
  char v261[24]; // [rsp+728h] [rbp-100h] BYREF
  __int128 v262; // [rsp+740h] [rbp-E8h] BYREF
  __int64 v263; // [rsp+750h] [rbp-D8h]
  __int64 v264; // [rsp+758h] [rbp-D0h]
  __int64 v265; // [rsp+760h] [rbp-C8h]
  __int64 v266; // [rsp+768h] [rbp-C0h]
  char v267[12]; // [rsp+770h] [rbp-B8h] BYREF
  char v268[12]; // [rsp+77Ch] [rbp-ACh] BYREF
  char v269[12]; // [rsp+788h] [rbp-A0h] BYREF
  char v270[12]; // [rsp+794h] [rbp-94h] BYREF
  char v271[12]; // [rsp+7A0h] [rbp-88h] BYREF
  char v272[12]; // [rsp+7ACh] [rbp-7Ch] BYREF
  char v273[12]; // [rsp+7B8h] [rbp-70h] BYREF
  char v274[12]; // [rsp+7C4h] [rbp-64h] BYREF
  char v275[12]; // [rsp+7D0h] [rbp-58h] BYREF
  char v276[20]; // [rsp+7DCh] [rbp-4Ch] BYREF
  __int128 v277; // [rsp+7F0h] [rbp-38h]

  qmemcpy(v38, (char *)&xmmword_1573ACC88 + 8, 0xCuLL);
  v104 = (_QWORD *)*a3;
  if ( v104 && (unsigned __int8)sub_142D48910(v104) )
    v155 = v104;
  else
    v155 = 0LL;
  v231 = v155;
  v232 = v155;
  v37 = v155;
  if ( !v155 && *(_QWORD *)(a1 + 0x5DA00) )
    v37 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 0x5DA00) + 0x1220LL))(*(_QWORD *)(a1 + 0x5DA00));
  if ( v37 && v37[0x1FE] )
  {
    v71 = sub_1412638A0(v37 + 0x30, 2LL);
    if ( v71 )
    {
      v233 = v71 & 0xFFFFFFFFFFFFLL;
      v63 = HIWORD(v71) & 0x3FFF;
      v45 = v71 < 0;
      v62 = v71 & 0xFFFFFFFFFFFFLL;
      if ( v71 >= 0 )
      {
        v124 = v62;
      }
      else
      {
        v265 = 4LL;
        switch ( dword_15684A794 )
        {
          case 1:
            sub_140A8D910(qword_1573D8080, &v62, 4LL, (unsigned int)v63);
            break;
          case 2:
            sub_140A8D8E0(qword_1573D8088, &v62, 4LL, (unsigned int)v63);
            break;
          case 3:
            sub_140A8D8E0(*(&qword_1573D8090 + (unsigned int)v63), &v62, 4LL, (unsigned int)v63);
            break;
        }
        v105 = v62 & 0xFFFFFFFFFFFFLL;
        if ( (v62 & 0xFFFFFFFFFFFFLL) >> 0x2F )
          v156 = v105 | 0xFFFF000000000000uLL;
        else
          v156 = v105;
        v234 = v156;
        v124 = v156;
      }
      v125 = v124;
    }
    else
    {
      v125 = 0LL;
    }
    v235 = v125;
    v126 = v125;
    if ( v125 )
    {
      v127 = sub_140B0BE60(v126);
      v245 = *(_OWORD *)(v127 + 0x10);
      v60 = v127 + 0x30;
      v46 = 0;
      v47 = 1;
      v39 = 1;
      v56 = *(unsigned __int16 *)(v127 + 0x30) != 0xFFFF;
      v48 = v56;
      if ( v56 )
      {
        if ( !*(_BYTE *)(v60 + 2) )
          sub_14C835390(L"double decryption in EEncHandlerPolicy::None");
        qword_1573ACC58(&v245, 0xCLL, v60);
      }
      v262 = v245;
      v236 = &v262;
      v277 = v245;
      v106 = v258;
      v258[0] = v245;
      LODWORD(v258[1]) = DWORD2(v245);
      qmemcpy(v259, v258, sizeof(v259));
      v237 = v259;
      v128 = v259;
    }
    else
    {
      qmemcpy(v260, (char *)&xmmword_1573ACC88 + 8, sizeof(v260));
      v128 = v260;
    }
    v239 = v128;
    qmemcpy(v261, v128, 0xCuLL);
    v240 = v261;
    qmemcpy(v38, v261, 0xCuLL);
    if ( !*(_BYTE *)(v37[0x1FE] + 0x102LL) || *(_BYTE *)(v37[0x1FE] + 0x101LL) )
    {
      v182 = v37[0x1FE] + 0x178LL;
      v66 = sub_1412638A0(v182, 2LL);
      if ( v66 )
      {
        v183 = v66 & 0xFFFFFFFFFFFFLL;
        v67 = HIWORD(v66) & 0x3FFF;
        v50 = v66 < 0;
        v59 = v66 & 0xFFFFFFFFFFFFLL;
        if ( v66 >= 0 )
        {
          v133 = v59;
        }
        else
        {
          v263 = 4LL;
          switch ( dword_15684A794 )
          {
            case 1:
              sub_140A8D910(qword_1573D8080, &v59, 4LL, (unsigned int)v67);
              break;
            case 2:
              sub_140A8D8E0(qword_1573D8088, &v59, 4LL, (unsigned int)v67);
              break;
            case 3:
              sub_140A8D8E0(*(&qword_1573D8090 + (unsigned int)v67), &v59, 4LL, (unsigned int)v67);
              break;
          }
          v120 = v59 & 0xFFFFFFFFFFFFLL;
          if ( (v59 & 0xFFFFFFFFFFFFLL) >> 0x2F )
            v132 = v120 | 0xFFFF000000000000uLL;
          else
            v132 = v120;
          v184 = v132;
          v133 = v132;
        }
        v134 = v133;
      }
      else
      {
        v134 = 0LL;
      }
      v185 = v134;
      v186 = v134;
      v135 = v134;
      if ( v134 && *(_BYTE *)(v135 + 0x1F4) )
      {
        v187 = v37[0x1FE] + 0x170LL;
        v70 = sub_1412638A0(v187, 2LL);
        if ( v70 )
        {
          v188 = v70 & 0xFFFFFFFFFFFFLL;
          v68 = HIWORD(v70) & 0x3FFF;
          v51 = v70 < 0;
          v58 = v70 & 0xFFFFFFFFFFFFLL;
          if ( v70 >= 0 )
          {
            v137 = v58;
          }
          else
          {
            v264 = 4LL;
            switch ( dword_15684A794 )
            {
              case 1:
                sub_140A8D910(qword_1573D8080, &v58, 4LL, (unsigned int)v68);
                break;
              case 2:
                sub_140A8D8E0(qword_1573D8088, &v58, 4LL, (unsigned int)v68);
                break;
              case 3:
                sub_140A8D8E0(*(&qword_1573D8090 + (unsigned int)v68), &v58, 4LL, (unsigned int)v68);
                break;
            }
            v121 = v58 & 0xFFFFFFFFFFFFLL;
            if ( (v58 & 0xFFFFFFFFFFFFLL) >> 0x2F )
              v136 = v121 | 0xFFFF000000000000uLL;
            else
              v136 = v121;
            v189 = v136;
            v137 = v136;
          }
          v138 = v137;
        }
        else
        {
          v138 = 0LL;
        }
        v190 = v138;
        v191 = v138;
        v69 = v138;
        if ( v138 )
        {
          if ( a5 )
          {
            if ( *(_BYTE *)(v37[0x1FE] + 0x5CALL) || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v37 + 0x9F0LL))(v37) )
            {
              qmemcpy(v38, (char *)&xmmword_1573ACC88 + 8, 0xCuLL);
              qmemcpy(v44, (char *)&xmmword_1573ACC88 + 8, 0xCuLL);
              sub_14312FFC0(v69, v38, v44);
              v53 = dword_156072CB8;
              *(float *)v44 = *(float *)v44 * *(float *)&dword_156072CB8;
              *(float *)&v44[1] = *(float *)&v44[1] * *(float *)&dword_156072CB8;
              *(float *)&v44[2] = *(float *)&v44[2] * *(float *)&dword_156072CB8;
              qmemcpy(v271, v44, sizeof(v271));
              if ( byte_1573D81C0 )
              {
                v54 = *(float *)(a1 + 0x5DC5C);
                *(float *)v44 = *(float *)v44 * v54;
                *(float *)&v44[1] = *(float *)&v44[1] * v54;
                *(float *)&v44[2] = *(float *)&v44[2] * v54;
                qmemcpy(v272, v44, sizeof(v272));
              }
              else
              {
                v55 = *(float *)(a1 + 0x5DC60);
                *(float *)v44 = *(float *)v44 * v55;
                *(float *)&v44[1] = *(float *)&v44[1] * v55;
                *(float *)&v44[2] = *(float *)&v44[2] * v55;
                qmemcpy(v273, v44, sizeof(v273));
              }
              if ( (unsigned __int8)sub_143A61A80(v37) )
              {
                sub_1416334C0((unsigned int)v248, (unsigned int)L"X=%3.3f Y=%3.3f Z=%3.3f", v5, v6, v44[2]);
                v192 = v248;
                v139 = v248;
                v88 = v249;
                if ( v249 )
                {
                  v193 = (const _QWORD *)sub_140AE0220(v139);
                  v194 = v193;
                  v140 = v193;
                }
                else
                {
                  v140 = &word_1506C8158;
                }
                v198 = v140;
                sub_1416334C0((unsigned int)v246, (unsigned int)L"X=%3.3f Y=%3.3f Z=%3.3f", v7, v8, v38[2]);
                v195 = v246;
                v141 = v246;
                v90 = v247;
                if ( v247 )
                {
                  v196 = (const _QWORD *)sub_140AE0220(v141);
                  v197 = v196;
                  v142 = v196;
                }
                else
                {
                  v142 = &word_1506C8158;
                }
                v199 = v142;
                v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v37 + 0x9F0LL))(v37);
                sub_143B79250(
                  (unsigned int)&v165,
                  (unsigned int)L"JLFPP:GetCameraBaseLocation_FPP 0-0: CameraBaseLocation:%s CameraLocationOffset:%s bIsSt"
                                 "andRun:%d IsSprint:%d",
                  (_DWORD)v199,
                  (_DWORD)v198,
                  *(_BYTE *)(v37[0x1FE] + 0x5CALL),
                  v9);
                sub_140A887D0(v246);
                sub_140A887D0(v248);
                v10 = sub_140A89850(&qword_156A18C70);
                LOBYTE(v36) = 1;
                nullsub_1(v10, 0xFFFFFFFFLL, v11, 0xFF00FF00LL, &v165, v36, &qword_15684A130);
                v40 = byte_156FCCAF0[0] < 6u;
                if ( byte_156FCCAF0[0] >= 6u )
                {
                  v95 = v166;
                  if ( v166 )
                  {
                    v200 = (const _QWORD *)sub_140AE0220(&v165);
                    v201 = v200;
                    v143 = v200;
                  }
                  else
                  {
                    v143 = &word_1506C8158;
                  }
                  v202 = v143;
                  v203 = v143;
                  v12 = sub_140B0A090(byte_156FCCAF0);
                  LOBYTE(v13) = 6;
                  sub_140ADA300("Unknown", 0xB53LL, v12, v13, L"%s", v203);
                }
                sub_140A887D0(&v165);
              }
              *(float *)v38 = *(float *)v38 + *(float *)v44;
              *(float *)&v38[1] = *(float *)&v38[1] + *(float *)&v44[1];
              *(float *)&v38[2] = *(float *)&v38[2] + *(float *)&v44[2];
              qmemcpy(v274, v38, sizeof(v274));
              if ( (unsigned __int8)sub_143A61A80(v37) )
              {
                sub_1416334C0((unsigned int)v252, (unsigned int)L"X=%3.3f Y=%3.3f Z=%3.3f", v14, v15, v44[2]);
                v204 = v252;
                v144 = v252;
                v96 = v253;
                if ( v253 )
                {
                  v205 = (const _QWORD *)sub_140AE0220(v144);
                  v206 = v205;
                  v145 = v205;
                }
                else
                {
                  v145 = &word_1506C8158;
                }
                v210 = v145;
                sub_1416334C0((unsigned int)v250, (unsigned int)L"X=%3.3f Y=%3.3f Z=%3.3f", v16, v17, v38[2]);
                v207 = v250;
                v146 = v250;
                v97 = v251;
                if ( v251 )
                {
                  v208 = (const _QWORD *)sub_140AE0220(v146);
                  v209 = v208;
                  v147 = v208;
                }
                else
                {
                  v147 = &word_1506C8158;
                }
                v211 = v147;
                sub_140ADA470(
                  &v167,
                  L"JLFPP:GetCameraBaseLocation_FPP 0-1: CameraBaseLocation:%s CameraLocationOffset:%s",
                  v147,
                  v210);
                sub_140A887D0(v250);
                sub_140A887D0(v252);
                v18 = sub_140A89850(&qword_156A18C70);
                LOBYTE(v35) = 1;
                nullsub_1(v18, 0xFFFFFFFFLL, v19, 0xFF00FF00LL, &v167, v35, &qword_15684A130);
                v41 = byte_156FCCAF0[0] < 6u;
                if ( byte_156FCCAF0[0] >= 6u )
                {
                  v98 = v168;
                  if ( v168 )
                  {
                    v212 = (const _QWORD *)sub_140AE0220(&v167);
                    v213 = v212;
                    v148 = v212;
                  }
                  else
                  {
                    v148 = &word_1506C8158;
                  }
                  v238 = v148;
                  v214 = v148;
                  v20 = sub_140B0A090(byte_156FCCAF0);
                  LOBYTE(v21) = 6;
                  sub_140ADA300("Unknown", 0xB5ALL, v20, v21, L"%s", v214);
                }
                sub_140A887D0(&v167);
              }
            }
            else
            {
              qmemcpy(v38, (const void *)sub_143130B00(v69, v275), 0xCuLL);
              if ( (unsigned __int8)sub_143A61A80(v37) )
              {
                sub_1416334C0((unsigned int)v254, (unsigned int)L"X=%3.3f Y=%3.3f Z=%3.3f", v22, v23, v38[2]);
                v215 = v254;
                v149 = v254;
                v99 = v255;
                if ( v255 )
                {
                  v216 = (const _QWORD *)sub_140AE0220(v149);
                  v217 = v216;
                  v150 = v216;
                }
                else
                {
                  v150 = &word_1506C8158;
                }
                v218 = v150;
                sub_140ADA470(&v169, L"JLFPP:GetCameraBaseLocation_FPP 1-0: CameraBaseLocation:%s ", v150);
                sub_140A887D0(v254);
                v24 = sub_140A89850(&qword_156A18C70);
                nullsub_1(v24, 0xFFFFFFFFLL, v25, 0xFF00FF00LL, &v169, 1, &qword_15684A130);
                v42 = byte_156FCCAF0[0] < 6u;
                if ( byte_156FCCAF0[0] >= 6u )
                {
                  v100 = v170;
                  if ( v170 )
                  {
                    v219 = (const _QWORD *)sub_140AE0220(&v169);
                    v220 = v219;
                    v151 = v219;
                  }
                  else
                  {
                    v151 = &word_1506C8158;
                  }
                  v221 = v151;
                  v222 = v151;
                  v26 = sub_140B0A090(byte_156FCCAF0);
                  LOBYTE(v27) = 6;
                  sub_140ADA300("Unknown", 0xB64LL, v26, v27, L"%s", v222);
                }
                sub_140A887D0(&v169);
              }
            }
          }
          else
          {
            qmemcpy(v38, (const void *)sub_143130B00(v69, v276), 0xCuLL);
            if ( (unsigned __int8)sub_143A61A80(v37) )
            {
              sub_1416334C0((unsigned int)v256, (unsigned int)L"X=%3.3f Y=%3.3f Z=%3.3f", v28, v29, v38[2]);
              v223 = v256;
              v152 = v256;
              v102 = v257;
              if ( v257 )
              {
                v224 = (const _QWORD *)sub_140AE0220(v152);
                v225 = v224;
                v153 = v224;
              }
              else
              {
                v153 = &word_1506C8158;
              }
              v226 = v153;
              sub_140ADA470(&v171, L"JLFPP:GetCameraBaseLocation_FPP 2-0: CameraBaseLocation:%s ", v153);
              sub_140A887D0(v256);
              v30 = sub_140A89850(&qword_156A18C70);
              nullsub_1(v30, 0xFFFFFFFFLL, v31, 0xFF00FF00LL, &v171, 1, &qword_15684A130);
              v43 = byte_156FCCAF0[0] < 6u;
              if ( byte_156FCCAF0[0] >= 6u )
              {
                v103 = v172;
                if ( v172 )
                {
                  v227 = (const _QWORD *)sub_140AE0220(&v171);
                  v228 = v227;
                  v154 = v227;
                }
                else
                {
                  v154 = &word_1506C8158;
                }
                v229 = v154;
                v230 = v154;
                v32 = sub_140B0A090(byte_156FCCAF0);
                LOBYTE(v33) = 6;
                sub_140ADA300("Unknown", 0xB6FLL, v32, v33, L"%s", v230);
              }
              sub_140A887D0(&v171);
            }
          }
        }
      }
    }
    else
    {
      v241 = v37[0x1FE] + 0x170LL;
      v64 = sub_1412638A0(v241, 2LL);
      if ( v64 )
      {
        v242 = v64 & 0xFFFFFFFFFFFFLL;
        v65 = HIWORD(v64) & 0x3FFF;
        v49 = v64 < 0;
        v61 = v64 & 0xFFFFFFFFFFFFLL;
        if ( v64 >= 0 )
        {
          v130 = (float *)v61;
        }
        else
        {
          v266 = 4LL;
          switch ( dword_15684A794 )
          {
            case 1:
              sub_140A8D910(qword_1573D8080, &v61, 4LL, (unsigned int)v65);
              break;
            case 2:
              sub_140A8D8E0(qword_1573D8088, &v61, 4LL, (unsigned int)v65);
              break;
            case 3:
              sub_140A8D8E0(*(&qword_1573D8090 + (unsigned int)v65), &v61, 4LL, (unsigned int)v65);
              break;
          }
          v107 = v61 & 0xFFFFFFFFFFFFLL;
          if ( (v61 & 0xFFFFFFFFFFFFLL) >> 0x2F )
            v129 = v107 | 0xFFFF000000000000uLL;
          else
            v129 = v107;
          v243 = v129;
          v130 = (float *)v129;
        }
        v131 = v130;
      }
      else
      {
        v131 = 0LL;
      }
      v244 = v131;
      v173 = v131;
      v57 = v131;
      if ( v131 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v37 + 0x928LL))(v37)
          || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v37 + 0x988LL))(v37) )
        {
          v108 = (float *)sub_1432CDA70(v37, v267);
          v74 = *(float *)&v38[2] + v108[2];
          v73 = *(float *)&v38[1] + v108[1];
          v72 = *(float *)v38 + *v108;
          *(float *)v158 = v72;
          *(float *)&v158[1] = v73;
          *(float *)&v158[2] = v74;
          v174 = v158;
          v110 = v57 + 0x1D9;
          v109 = v158;
          v77 = v74 + v57[0x1DB];
          v76 = v73 + v57[0x1DA];
          v75 = v72 + v57[0x1D9];
          *(float *)v159 = v75;
          *(float *)&v159[1] = v76;
          *(float *)&v159[2] = v77;
          v175 = v159;
          qmemcpy(v38, v159, 0xCuLL);
        }
        else
        {
          v52 = *(_BYTE *)(v37[0x1FE] + 0x2B3LL);
          switch ( v52 )
          {
            case 1:
              v111 = (float *)sub_1432CDA70(v37, v268);
              v80 = *(float *)&v38[2] + v111[2];
              v79 = *(float *)&v38[1] + v111[1];
              v78 = *(float *)v38 + *v111;
              *(float *)v160 = v78;
              *(float *)&v160[1] = v79;
              *(float *)&v160[2] = v80;
              v176 = v160;
              v113 = v57 + 0x1D0;
              v123 = v160;
              v82 = v80 + v57[0x1D2];
              v81 = v79 + v57[0x1D1];
              v92 = v78 + v57[0x1D0];
              *(float *)v161 = v92;
              *(float *)&v161[1] = v81;
              *(float *)&v161[2] = v82;
              v177 = v161;
              qmemcpy(v38, v161, 0xCuLL);
              break;
            case 2:
              v114 = (float *)sub_1432CDA70(v37, v269);
              v112 = *(float *)&v38[2] + v114[2];
              v84 = *(float *)&v38[1] + v114[1];
              v83 = *(float *)v38 + *v114;
              *(float *)v162 = v83;
              *(float *)&v162[1] = v84;
              *(float *)&v162[2] = v112;
              v178 = v162;
              v116 = v57 + 0x1D3;
              v115 = v162;
              v87 = v112 + v57[0x1D5];
              v86 = v84 + v57[0x1D4];
              v85 = v83 + v57[0x1D3];
              *(float *)v157 = v85;
              *(float *)&v157[1] = v86;
              *(float *)&v157[2] = v87;
              v179 = v157;
              qmemcpy(v38, v157, 0xCuLL);
              break;
            case 3:
              v117 = (float *)sub_1432CDA70(v37, v270);
              v94 = *(float *)&v38[2] + v117[2];
              v101 = *(float *)&v38[1] + v117[1];
              v122 = *(float *)v38 + *v117;
              *(float *)v163 = v122;
              *(float *)&v163[1] = v101;
              *(float *)&v163[2] = v94;
              v180 = v163;
              v119 = v57 + 0x1D9;
              v118 = v163;
              v89 = v94 + v57[0x1DB];
              v91 = v101 + v57[0x1DA];
              v93 = v122 + v57[0x1D9];
              *(float *)v164 = v93;
              *(float *)&v164[1] = v91;
              *(float *)&v164[2] = v89;
              v181 = v164;
              qmemcpy(v38, v164, 0xCuLL);
              break;
          }
        }
      }
    }
  }
  qmemcpy(a2, v38, 0xCuLL);
  return a2;
}

unsigned __int64 __fastcall sub_14E7D2260(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rax
  bool v3; // bp
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v18; // [rsp+50h] [rbp+8h]
  unsigned __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 0x3E8) >> 0x3E;
  v2 = *(_QWORD *)(a1 + 0x3E8);
  v3 = (v2 & 0x4000000000000000LL) != 0;
  v4 = HIWORD(v2) & 0x3FFF;
  if ( !v2 )
    goto LABEL_15;
  v5 = v2 & 0xFFFFFFFFFFFFLL;
  v6 = HIWORD(v2) & 0x3FFF;
  v19 = v2 & 0xFFFFFFFFFFFFLL;
  if ( (v2 & 0x8000000000000000uLL) == 0LL )
    goto LABEL_12;
  switch ( dword_15684A794 )
  {
    case 1:
      sub_140A8D910(qword_1573D8080, &v19, 4LL, HIWORD(v2) & 0x3FFF);
      goto LABEL_10;
    case 2:
      v7 = qword_1573D8088;
      v8 = (unsigned int)v6;
      break;
    case 3:
      v7 = *(&qword_1573D8090 + v6);
      v8 = (unsigned int)v6;
      break;
    default:
      goto LABEL_10;
  }
  (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64, _QWORD))(v7 + 0x40))(&v19, 4LL, v8, *(_QWORD *)(v7 + 8));
LABEL_10:
  v5 = v19 & 0xFFFFFFFFFFFFLL;
  if ( (v19 & 0x800000000000LL) != 0 )
    v5 = v19 & 0xFFFFFFFFFFFFLL | 0xFFFF000000000000uLL;
LABEL_12:
  if ( !v5
    || (v9 = sub_14EDD0B80(v6),
        v10 = *(_QWORD *)(v5 + 8),
        v11 = v9 + 0x30,
        v12 = *(int *)(v9 + 0x38),
        (int)v12 > *(_DWORD *)(v10 + 0x38))
    || *(_QWORD *)(*(_QWORD *)(v10 + 0x30) + 8 * v12) != v11 )
  {
LABEL_15:
    v5 = 0LL;
  }
  v13 = 0LL;
  if ( v5 )
  {
    if ( v3 && byte_1573D801B )
    {
      v19 = v5;
      switch ( dword_15684A794 )
      {
        case 1:
          sub_140A9C980(qword_1573D8080, &v19, 4LL, (unsigned int)v4);
          break;
        case 2:
          (*(void (__fastcall **)(unsigned __int64 *, __int64, _QWORD, _QWORD))(qword_1573D8088 + 0x38LL))(
            &v19,
            4LL,
            (unsigned int)v4,
            *(_QWORD *)(qword_1573D8088 + 8LL));
          break;
        case 3:
          (*(void (__fastcall **)(unsigned __int64 *, __int64, _QWORD, _QWORD))(*(&qword_1573D8090 + v4) + 0x38LL))(
            &v19,
            4LL,
            (unsigned int)v4,
            *(_QWORD *)(*(&qword_1573D8090 + v4) + 8LL));
          break;
      }
      v5 = v19;
      v13 = 2LL;
    }
    v18 = v5 | (((unsigned int)v4 | ((v13 | v1 & 1) << 0xE)) << 0x30);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
    return 0LL;
  v14 = v18 & 0xFFFFFFFFFFFFLL;
  v19 = v18 & 0xFFFFFFFFFFFFLL;
  if ( (v18 & 0x8000000000000000uLL) == 0LL )
    return v14;
  switch ( dword_15684A794 )
  {
    case 1:
      sub_140A8D910(qword_1573D8080, &v19, 4LL, HIWORD(v18) & 0x3FFF);
      goto LABEL_38;
    case 2:
      v15 = qword_1573D8088;
      v16 = HIWORD(v18) & 0x3FFF;
      break;
    case 3:
      v15 = *(&qword_1573D8090 + (HIWORD(v18) & 0x3FFF));
      v16 = HIWORD(v18) & 0x3FFF;
      break;
    default:
      goto LABEL_38;
  }
  (*(void (__fastcall **)(unsigned __int64 *, __int64, __int64, _QWORD))(v15 + 0x40))(
    &v19,
    4LL,
    v16,
    *(_QWORD *)(v15 + 8));
LABEL_38:
  v14 = v19 & 0xFFFFFFFFFFFFLL;
  if ( (v19 & 0x800000000000LL) != 0 )
    return v19 & 0xFFFFFFFFFFFFLL | 0xFFFF000000000000uLL;
  return v14;
}

```
```asm

.text:0000000143BA4650
.text:0000000143BA4650                         ; =============== S U B R O U T I N E =======================================
.text:0000000143BA4650
.text:0000000143BA4650
.text:0000000143BA4650                         sub_143BA4650   proc near               ; CODE XREF: sub_143BB0CC0+1C↓p
.text:0000000143BA4650                                                                 ; sub_143BBEB20+18↓p ...
.text:0000000143BA4650
.text:0000000143BA4650                         var_158         = dword ptr -158h
.text:0000000143BA4650                         var_150         = qword ptr -150h
.text:0000000143BA4650                         var_148         = qword ptr -148h
.text:0000000143BA4650                         var_140         = qword ptr -140h
.text:0000000143BA4650                         var_138         = byte ptr -138h
.text:0000000143BA4650                         var_F8          = byte ptr -0F8h
.text:0000000143BA4650                         arg_0           = qword ptr  8
.text:0000000143BA4650
.text:0000000143BA4650 48 89 4C 24 08                          mov     [rsp+8], rcx
.text:0000000143BA4655 48 81 EC 78 01 00 00                    sub     rsp, 178h       ; Integer Subtraction
.text:0000000143BA465C 48 8B 8C 24 80 01 00 00                 mov     rcx, [rsp+180h]
.text:0000000143BA4664 E8 C7 63 00 00                          call    sub_143BAAA30   ; Call Procedure
.text:0000000143BA4669 F3 0F 11 44 24 20                       movss   dword ptr [rsp+20h], xmm0 ; Move Scalar Single-FP
.text:0000000143BA466F 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA4677 F3 0F 10 44 24 20                       movss   xmm0, dword ptr [rsp+20h] ; Move Scalar Single-FP
.text:0000000143BA467D 0F 2E 80 10 DD 05 00                    ucomiss xmm0, dword ptr [rax+5DD10h] ; Scalar Unordered Single-FP Compare and Set EFLAGS
.text:0000000143BA4684 75 13                                   jnz     short loc_143BA4699 ; Jump if Not Zero (ZF=0)
.text:0000000143BA4686 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA468E 48 05 20 DD 05 00                       add     rax, 5DD20h     ; Add
.text:0000000143BA4694 E9 F6 00 00 00                          jmp     loc_143BA478F   ; Jump
.text:0000000143BA4699                         ; ---------------------------------------------------------------------------
.text:0000000143BA4699
.text:0000000143BA4699                         loc_143BA4699:                          ; CODE XREF: sub_143BA4650+34↑j
.text:0000000143BA4699 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA46A1 48 8B 00                                mov     rax, [rax]
.text:0000000143BA46A4 48 8B 8C 24 80 01 00 00                 mov     rcx, [rsp+180h]
.text:0000000143BA46AC FF 90 F0 06 00 00                       call    qword ptr [rax+6F0h] ; Indirect Call Near Procedure
.text:0000000143BA46B2 48 89 44 24 30                          mov     [rsp+30h], rax
.text:0000000143BA46B7 48 83 7C 24 30 00                       cmp     qword ptr [rsp+30h], 0 ; Compare Two Operands
.text:0000000143BA46BD 0F 84 BE 00 00 00                       jz      loc_143BA4781   ; Jump if Zero (ZF=1)
.text:0000000143BA46C3 48 8B 4C 24 30                          mov     rcx, [rsp+30h]
.text:0000000143BA46C8 E8 93 DB C2 0A                          call    sub_14E7D2260   ; Call Procedure
.text:0000000143BA46CD 48 89 44 24 28                          mov     [rsp+28h], rax
.text:0000000143BA46D2 48 83 7C 24 28 00                       cmp     qword ptr [rsp+28h], 0 ; Compare Two Operands
.text:0000000143BA46D8 0F 84 A3 00 00 00                       jz      loc_143BA4781   ; Jump if Zero (ZF=1)
.text:0000000143BA46DE 48 8B 44 24 28                          mov     rax, [rsp+28h]
.text:0000000143BA46E3 48 83 78 70 00                          cmp     qword ptr [rax+70h], 0 ; Compare Two Operands
.text:0000000143BA46E8 0F 84 93 00 00 00                       jz      loc_143BA4781   ; Jump if Zero (ZF=1)
.text:0000000143BA46EE 48 8D 8C 24 80 00 00 00                 lea     rcx, [rsp+80h]  ; Load Effective Address
.text:0000000143BA46F6 E8 35 78 F3 FC                          call    sub_140ADBF30   ; Call Procedure
.text:0000000143BA46FB 90                                      nop                     ; No Operation
.text:0000000143BA46FC 48 8B 44 24 28                          mov     rax, [rsp+28h]
.text:0000000143BA4701 48 8B 40 70                             mov     rax, [rax+70h]
.text:0000000143BA4705 48 8B 4C 24 28                          mov     rcx, [rsp+28h]
.text:0000000143BA470A 48 8B 09                                mov     rcx, [rcx]
.text:0000000143BA470D 48 89 4C 24 38                          mov     [rsp+38h], rcx
.text:0000000143BA4712 4C 8D 8C 24 80 00 00 00                 lea     r9, [rsp+80h]   ; Load Effective Address
.text:0000000143BA471A 45 33 C0                                xor     r8d, r8d        ; Logical Exclusive OR
.text:0000000143BA471D 48 8B 90 A0 00 00 00                    mov     rdx, [rax+0A0h]
.text:0000000143BA4724 48 8B 4C 24 28                          mov     rcx, [rsp+28h]
.text:0000000143BA4729 48 8B 44 24 38                          mov     rax, [rsp+38h]
.text:0000000143BA472E FF 90 B0 02 00 00                       call    qword ptr [rax+2B0h] ; Indirect Call Near Procedure
.text:0000000143BA4734 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA4737 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA4739 74 46                                   jz      short loc_143BA4781 ; Jump if Zero (ZF=1)
.text:0000000143BA473B 48 8D 54 24 40                          lea     rdx, [rsp+40h]  ; Load Effective Address
.text:0000000143BA4740 48 8D 8C 24 80 00 00 00                 lea     rcx, [rsp+80h]  ; Load Effective Address
.text:0000000143BA4748 E8 33 A2 F4 FC                          call    sub_140AEE980   ; Call Procedure
.text:0000000143BA474D 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA4755 48 05 20 DD 05 00                       add     rax, 5DD20h     ; Add
.text:0000000143BA475B 41 B0 01                                mov     r8b, 1
.text:0000000143BA475E 48 8D 54 24 40                          lea     rdx, [rsp+40h]  ; Load Effective Address
.text:0000000143BA4763 48 8B C8                                mov     rcx, rax
.text:0000000143BA4766 E8 65 9B 79 0A                          call    sub_14E33E2D0   ; Call Procedure
.text:0000000143BA476B 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA4773 F3 0F 10 44 24 20                       movss   xmm0, dword ptr [rsp+20h] ; Move Scalar Single-FP
.text:0000000143BA4779 F3 0F 11 80 10 DD 05 00                 movss   dword ptr [rax+5DD10h], xmm0 ; Move Scalar Single-FP
.text:0000000143BA4781
.text:0000000143BA4781                         loc_143BA4781:                          ; CODE XREF: sub_143BA4650+6D↑j
.text:0000000143BA4781                                                                 ; sub_143BA4650+88↑j ...
.text:0000000143BA4781 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BA4789 48 05 20 DD 05 00                       add     rax, 5DD20h     ; Add
.text:0000000143BA478F
.text:0000000143BA478F                         loc_143BA478F:                          ; CODE XREF: sub_143BA4650+44↑j
.text:0000000143BA478F 48 81 C4 78 01 00 00                    add     rsp, 178h       ; Add
.text:0000000143BA4796 C3                                      retn                    ; Return Near from Procedure
.text:0000000143BA4796                         sub_143BA4650   endp
.text:0000000143BA4796
.text:0000000143BA4796                         ; ---------------------------------------------------------------------------
.text:0000000143BA4797 CC CC CC CC CC CC CC CC…                align 20h
.text:0000000143BA47A0

//in call 


.text:0000000143BA95D0
.text:0000000143BA95D0                         ; =============== S U B R O U T I N E =======================================
.text:0000000143BA95D0
.text:0000000143BA95D0
.text:0000000143BA95D0                         sub_143BA95D0   proc near
.text:0000000143BA95D0
.text:0000000143BA95D0                         var_758         = dword ptr -758h
.text:0000000143BA95D0                         var_748         = qword ptr -748h
.text:0000000143BA95D0                         var_740         = qword ptr -740h
.text:0000000143BA95D0                         var_738         = byte ptr -738h
.text:0000000143BA95D0                         var_737         = byte ptr -737h
.text:0000000143BA95D0                         var_736         = byte ptr -736h
.text:0000000143BA95D0                         var_735         = byte ptr -735h
.text:0000000143BA95D0                         var_734         = byte ptr -734h
.text:0000000143BA95D0                         var_733         = byte ptr -733h
.text:0000000143BA95D0                         var_728         = xmmword ptr -728h
.text:0000000143BA95D0                         var_718         = qword ptr -718h
.text:0000000143BA95D0                         var_710         = dword ptr -710h
.text:0000000143BA95D0                         var_708         = qword ptr -708h
.text:0000000143BA95D0                         var_700         = qword ptr -700h
.text:0000000143BA95D0                         var_6F8         = qword ptr -6F8h
.text:0000000143BA95D0                         var_6F0         = qword ptr -6F0h
.text:0000000143BA95D0                         var_6E8         = qword ptr -6E8h
.text:0000000143BA95D0                         var_6E0         = byte ptr -6E0h
.text:0000000143BA95D0                         var_6DC         = dword ptr -6DCh
.text:0000000143BA95D0                         var_6D0         = qword ptr -6D0h
.text:0000000143BA95D0                         var_6C8         = qword ptr -6C8h
.text:0000000143BA95D0                         var_6C0         = qword ptr -6C0h
.text:0000000143BA95D0                         var_6B8         = qword ptr -6B8h
.text:0000000143BA95D0                         var_6B0         = qword ptr -6B0h
.text:0000000143BA95D0                         var_6A8         = qword ptr -6A8h
.text:0000000143BA95D0                         var_6A0         = qword ptr -6A0h
.text:0000000143BA95D0                         var_698         = qword ptr -698h
.text:0000000143BA95D0                         var_690         = qword ptr -690h
.text:0000000143BA95D0                         var_688         = dword ptr -688h
.text:0000000143BA95D0                         var_680         = dword ptr -680h
.text:0000000143BA95D0                         var_678         = dword ptr -678h
.text:0000000143BA95D0                         var_670         = qword ptr -670h
.text:0000000143BA95D0                         var_668         = qword ptr -668h
.text:0000000143BA95D0                         var_660         = qword ptr -660h
.text:0000000143BA95D0                         var_658         = qword ptr -658h
.text:0000000143BA95D0                         var_650         = qword ptr -650h
.text:0000000143BA95D0                         var_648         = dword ptr -648h
.text:0000000143BA95D0                         var_640         = dword ptr -640h
.text:0000000143BA95D0                         var_638         = qword ptr -638h
.text:0000000143BA95D0                         var_630         = qword ptr -630h
.text:0000000143BA95D0                         var_628         = qword ptr -628h
.text:0000000143BA95D0                         var_620         = qword ptr -620h
.text:0000000143BA95D0                         var_618         = qword ptr -618h
.text:0000000143BA95D0                         var_610         = qword ptr -610h
.text:0000000143BA95D0                         var_608         = qword ptr -608h
.text:0000000143BA95D0                         var_600         = qword ptr -600h
.text:0000000143BA95D0                         var_5F8         = qword ptr -5F8h
.text:0000000143BA95D0                         var_5F0         = qword ptr -5F0h
.text:0000000143BA95D0                         var_5E8         = qword ptr -5E8h
.text:0000000143BA95D0                         var_5E0         = qword ptr -5E0h
.text:0000000143BA95D0                         var_5D8         = qword ptr -5D8h
.text:0000000143BA95D0                         var_5D0         = dword ptr -5D0h
.text:0000000143BA95D0                         var_5CC         = dword ptr -5CCh
.text:0000000143BA95D0                         var_5C8         = dword ptr -5C8h
.text:0000000143BA95D0                         var_5C0         = dword ptr -5C0h
.text:0000000143BA95D0                         var_5BC         = dword ptr -5BCh
.text:0000000143BA95D0                         var_5B8         = dword ptr -5B8h
.text:0000000143BA95D0                         var_5B0         = dword ptr -5B0h
.text:0000000143BA95D0                         var_5AC         = dword ptr -5ACh
.text:0000000143BA95D0                         var_5A8         = dword ptr -5A8h
.text:0000000143BA95D0                         var_5A0         = qword ptr -5A0h
.text:0000000143BA95D0                         var_598         = qword ptr -598h
.text:0000000143BA95D0                         var_590         = qword ptr -590h
.text:0000000143BA95D0                         var_588         = qword ptr -588h
.text:0000000143BA95D0                         var_580         = qword ptr -580h
.text:0000000143BA95D0                         var_578         = qword ptr -578h
.text:0000000143BA95D0                         var_570         = qword ptr -570h
.text:0000000143BA95D0                         var_568         = qword ptr -568h
.text:0000000143BA95D0                         var_560         = qword ptr -560h
.text:0000000143BA95D0                         var_558         = qword ptr -558h
.text:0000000143BA95D0                         var_550         = qword ptr -550h
.text:0000000143BA95D0                         var_548         = qword ptr -548h
.text:0000000143BA95D0                         var_540         = qword ptr -540h
.text:0000000143BA95D0                         var_538         = qword ptr -538h
.text:0000000143BA95D0                         var_530         = qword ptr -530h
.text:0000000143BA95D0                         var_528         = qword ptr -528h
.text:0000000143BA95D0                         var_520         = qword ptr -520h
.text:0000000143BA95D0                         var_518         = qword ptr -518h
.text:0000000143BA95D0                         var_510         = qword ptr -510h
.text:0000000143BA95D0                         var_508         = qword ptr -508h
.text:0000000143BA95D0                         var_500         = byte ptr -500h
.text:0000000143BA95D0                         var_4FC         = dword ptr -4FCh
.text:0000000143BA95D0                         var_4F0         = qword ptr -4F0h
.text:0000000143BA95D0                         var_4E8         = qword ptr -4E8h
.text:0000000143BA95D0                         var_4E0         = qword ptr -4E0h
.text:0000000143BA95D0                         var_4D8         = qword ptr -4D8h
.text:0000000143BA95D0                         var_4D0         = qword ptr -4D0h
.text:0000000143BA95D0                         var_4C8         = xmmword ptr -4C8h
.text:0000000143BA95D0                         var_4B8         = xmmword ptr -4B8h
.text:0000000143BA95D0                         var_4A8         = xmmword ptr -4A8h
.text:0000000143BA95D0                         var_498         = xmmword ptr -498h
.text:0000000143BA95D0                         var_488         = xmmword ptr -488h
.text:0000000143BA95D0                         var_478         = xmmword ptr -478h
.text:0000000143BA95D0                         var_468         = xmmword ptr -468h
.text:0000000143BA95D0                         var_458         = xmmword ptr -458h
.text:0000000143BA95D0                         var_448         = xmmword ptr -448h
.text:0000000143BA95D0                         var_438         = xmmword ptr -438h
.text:0000000143BA95D0                         var_428         = xmmword ptr -428h
.text:0000000143BA95D0                         var_418         = xmmword ptr -418h
.text:0000000143BA95D0                         var_408         = xmmword ptr -408h
.text:0000000143BA95D0                         var_3F8         = xmmword ptr -3F8h
.text:0000000143BA95D0                         var_3E8         = xmmword ptr -3E8h
.text:0000000143BA95D0                         var_3D8         = xmmword ptr -3D8h
.text:0000000143BA95D0                         var_3C8         = xmmword ptr -3C8h
.text:0000000143BA95D0                         var_3B8         = xmmword ptr -3B8h
.text:0000000143BA95D0                         var_3A8         = xmmword ptr -3A8h
.text:0000000143BA95D0                         var_398         = xmmword ptr -398h
.text:0000000143BA95D0                         var_388         = xmmword ptr -388h
.text:0000000143BA95D0                         var_378         = xmmword ptr -378h
.text:0000000143BA95D0                         var_368         = xmmword ptr -368h
.text:0000000143BA95D0                         var_358         = xmmword ptr -358h
.text:0000000143BA95D0                         var_348         = xmmword ptr -348h
.text:0000000143BA95D0                         var_338         = xmmword ptr -338h
.text:0000000143BA95D0                         var_328         = xmmword ptr -328h
.text:0000000143BA95D0                         var_318         = xmmword ptr -318h
.text:0000000143BA95D0                         var_308         = xmmword ptr -308h
.text:0000000143BA95D0                         var_2F8         = xmmword ptr -2F8h
.text:0000000143BA95D0                         var_2E8         = xmmword ptr -2E8h
.text:0000000143BA95D0                         var_2D8         = xmmword ptr -2D8h
.text:0000000143BA95D0                         var_2C8         = xmmword ptr -2C8h
.text:0000000143BA95D0                         var_2B8         = xmmword ptr -2B8h
.text:0000000143BA95D0                         var_2A8         = xmmword ptr -2A8h
.text:0000000143BA95D0                         var_298         = xmmword ptr -298h
.text:0000000143BA95D0                         var_288         = xmmword ptr -288h
.text:0000000143BA95D0                         var_278         = xmmword ptr -278h
.text:0000000143BA95D0                         var_268         = xmmword ptr -268h
.text:0000000143BA95D0                         var_258         = xmmword ptr -258h
.text:0000000143BA95D0                         var_248         = xmmword ptr -248h
.text:0000000143BA95D0                         var_238         = xmmword ptr -238h
.text:0000000143BA95D0                         var_228         = xmmword ptr -228h
.text:0000000143BA95D0                         var_218         = xmmword ptr -218h
.text:0000000143BA95D0                         var_208         = xmmword ptr -208h
.text:0000000143BA95D0                         var_1F8         = xmmword ptr -1F8h
.text:0000000143BA95D0                         var_1E8         = xmmword ptr -1E8h
.text:0000000143BA95D0                         var_1D8         = xmmword ptr -1D8h
.text:0000000143BA95D0                         var_1C8         = xmmword ptr -1C8h
.text:0000000143BA95D0                         var_1B8         = xmmword ptr -1B8h
.text:0000000143BA95D0                         var_1A8         = xmmword ptr -1A8h
.text:0000000143BA95D0                         var_198         = xmmword ptr -198h
.text:0000000143BA95D0                         var_188         = xmmword ptr -188h
.text:0000000143BA95D0                         var_178         = xmmword ptr -178h
.text:0000000143BA95D0                         var_168         = xmmword ptr -168h
.text:0000000143BA95D0                         var_158         = xmmword ptr -158h
.text:0000000143BA95D0                         var_148         = byte ptr -148h
.text:0000000143BA95D0                         var_13C         = byte ptr -13Ch
.text:0000000143BA95D0                         var_130         = byte ptr -130h
.text:0000000143BA95D0                         var_118         = byte ptr -118h
.text:0000000143BA95D0                         var_D8          = byte ptr -0D8h
.text:0000000143BA95D0                         var_98          = byte ptr -98h
.text:0000000143BA95D0                         var_58          = byte ptr -58h
.text:0000000143BA95D0                         arg_0           = qword ptr  8
.text:0000000143BA95D0                         arg_8           = qword ptr  10h
.text:0000000143BA95D0                         arg_10          = qword ptr  18h
.text:0000000143BA95D0                         arg_18          = dword ptr  20h
.text:0000000143BA95D0
.text:0000000143BA95D0 F3 0F 11 5C 24 20                       movss   dword ptr [rsp+20h], xmm3 ; Move Scalar Single-FP
.text:0000000143BA95D6 4C 89 44 24 18                          mov     [rsp+18h], r8
.text:0000000143BA95DB 48 89 54 24 10                          mov     [rsp+10h], rdx
.text:0000000143BA95E0 48 89 4C 24 08                          mov     [rsp+8], rcx
.text:0000000143BA95E5 56                                      push    rsi
.text:0000000143BA95E6 57                                      push    rdi
.text:0000000143BA95E7 48 81 EC 68 07 00 00                    sub     rsp, 768h       ; Integer Subtraction
.text:0000000143BA95EE 48 8D 84 24 98 00 00 00                 lea     rax, [rsp+98h]  ; Load Effective Address
.text:0000000143BA95F6 48 8D 0D A3 36 80 13                    lea     rcx, xmmword_1573ACC98+8 ; Load Effective Address
.text:0000000143BA95FD 48 8B F8                                mov     rdi, rax
.text:0000000143BA9600 48 8B F1                                mov     rsi, rcx
.text:0000000143BA9603 B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA9608 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA960A 48 8B 84 24 90 07 00 00                 mov     rax, [rsp+790h]
.text:0000000143BA9612 48 8B 00                                mov     rax, [rax]
.text:0000000143BA9615 48 89 84 24 08 01 00 00                 mov     [rsp+108h], rax
.text:0000000143BA961D 48 83 BC 24 08 01 00 00                 cmp     qword ptr [rsp+108h], 0 ; Compare Two Operands
.text:0000000143BA961D 00
.text:0000000143BA9626 74 26                                   jz      short loc_143BA964E ; Jump if Zero (ZF=1)
.text:0000000143BA9628 48 8B 8C 24 08 01 00 00                 mov     rcx, [rsp+108h]
.text:0000000143BA9630 E8 DB F2 19 FF                          call    sub_142D48910   ; Call Procedure
.text:0000000143BA9635 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA9638 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA963A 74 12                                   jz      short loc_143BA964E ; Jump if Zero (ZF=1)
.text:0000000143BA963C 48 8B 84 24 08 01 00 00                 mov     rax, [rsp+108h]
.text:0000000143BA9644 48 89 84 24 98 01 00 00                 mov     [rsp+198h], rax
.text:0000000143BA964C EB 0C                                   jmp     short loc_143BA965A ; Jump
.text:0000000143BA964E                         ; ---------------------------------------------------------------------------
.text:0000000143BA964E
.text:0000000143BA964E                         loc_143BA964E:                          ; CODE XREF: sub_143BA95D0+56↑j
.text:0000000143BA964E                                                                 ; sub_143BA95D0+6A↑j
.text:0000000143BA964E 48 C7 84 24 98 01 00 00                 mov     qword ptr [rsp+198h], 0
.text:0000000143BA964E 00 00 00 00
.text:0000000143BA965A
.text:0000000143BA965A                         loc_143BA965A:                          ; CODE XREF: sub_143BA95D0+7C↑j
.text:0000000143BA965A 48 8B 84 24 98 01 00 00                 mov     rax, [rsp+198h]
.text:0000000143BA9662 48 89 84 24 08 02 00 00                 mov     [rsp+208h], rax
.text:0000000143BA966A 48 8B 84 24 08 02 00 00                 mov     rax, [rsp+208h]
.text:0000000143BA9672 48 89 84 24 70 02 00 00                 mov     [rsp+270h], rax
.text:0000000143BA967A 48 8B 84 24 70 02 00 00                 mov     rax, [rsp+270h]
.text:0000000143BA9682 48 89 44 24 60                          mov     [rsp+60h], rax
.text:0000000143BA9687 48 83 7C 24 60 00                       cmp     qword ptr [rsp+60h], 0 ; Compare Two Operands
.text:0000000143BA968D 0F 84 71 13 00 00                       jz      loc_143BAAA04   ; Jump if Zero (ZF=1)
.text:0000000143BA9693 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA9698 48 83 B8 F0 0F 00 00 00                 cmp     qword ptr [rax+0FF0h], 0 ; Compare Two Operands
.text:0000000143BA96A0 0F 84 5E 13 00 00                       jz      loc_143BAAA04   ; Jump if Zero (ZF=1)
.text:0000000143BA96A6 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA96AB 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA96B2 48 05 78 01 00 00                       add     rax, 178h       ; Add
.text:0000000143BA96B8 48 89 84 24 D8 01 00 00                 mov     [rsp+1D8h], rax
.text:0000000143BA96C0 48 8B 84 24 D8 01 00 00                 mov     rax, [rsp+1D8h]
.text:0000000143BA96C8 BA 02 00 00 00                          mov     edx, 2
.text:0000000143BA96CD 48 8B C8                                mov     rcx, rax
.text:0000000143BA96D0 E8 CB A1 6B FD                          call    sub_1412638A0   ; Call Procedure
.text:0000000143BA96D5 48 89 84 24 A8 00 00 00                 mov     [rsp+0A8h], rax
.text:0000000143BA96DD 48 83 BC 24 A8 00 00 00                 cmp     qword ptr [rsp+0A8h], 0 ; Compare Two Operands
.text:0000000143BA96DD 00
.text:0000000143BA96E6 75 11                                   jnz     short loc_143BA96F9 ; Jump if Not Zero (ZF=0)
.text:0000000143BA96E8 48 C7 84 24 48 01 00 00                 mov     qword ptr [rsp+148h], 0
.text:0000000143BA96E8 00 00 00 00
.text:0000000143BA96F4 E9 AF 01 00 00                          jmp     loc_143BA98A8   ; Jump
.text:0000000143BA96F9                         ; ---------------------------------------------------------------------------
.text:0000000143BA96F9
.text:0000000143BA96F9                         loc_143BA96F9:                          ; CODE XREF: sub_143BA95D0+116↑j
.text:0000000143BA96F9 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA96F9 00 00
.text:0000000143BA9703 48 8B 8C 24 A8 00 00 00                 mov     rcx, [rsp+0A8h]
.text:0000000143BA970B 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA970E 48 8B C1                                mov     rax, rcx
.text:0000000143BA9711 48 89 84 24 E0 01 00 00                 mov     [rsp+1E0h], rax
.text:0000000143BA9719 48 8B 84 24 A8 00 00 00                 mov     rax, [rsp+0A8h]
.text:0000000143BA9721 48 C1 E8 30                             shr     rax, 30h ; '0'  ; Shift Logical Right
.text:0000000143BA9725 48 25 FF 3F 00 00                       and     rax, 3FFFh      ; Logical AND
.text:0000000143BA972B 48 89 84 24 B0 00 00 00                 mov     [rsp+0B0h], rax
.text:0000000143BA9733 48 8B 84 24 A8 00 00 00                 mov     rax, [rsp+0A8h]
.text:0000000143BA973B 48 C1 E8 3F                             shr     rax, 3Fh        ; Shift Logical Right
.text:0000000143BA973F 48 83 E0 01                             and     rax, 1          ; Logical AND
.text:0000000143BA9743 88 44 24 40                             mov     [rsp+40h], al
.text:0000000143BA9747 48 8B 84 24 E0 01 00 00                 mov     rax, [rsp+1E0h]
.text:0000000143BA974F 48 89 84 24 90 00 00 00                 mov     [rsp+90h], rax
.text:0000000143BA9757 0F B6 44 24 40                          movzx   eax, byte ptr [rsp+40h] ; Move with Zero-Extend
.text:0000000143BA975C 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA975E 0F 84 24 01 00 00                       jz      loc_143BA9888   ; Jump if Zero (ZF=1)
.text:0000000143BA9764 48 C7 84 24 A0 02 00 00                 mov     qword ptr [rsp+2A0h], 4
.text:0000000143BA9764 04 00 00 00
.text:0000000143BA9770 83 3D 1D 10 CA 12 01                    cmp     cs:dword_15684A794, 1 ; Compare Two Operands
.text:0000000143BA9777 75 25                                   jnz     short loc_143BA979E ; Jump if Not Zero (ZF=0)
.text:0000000143BA9779 44 8B 8C 24 B0 00 00 00                 mov     r9d, [rsp+0B0h]
.text:0000000143BA9781 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9787 48 8D 94 24 90 00 00 00                 lea     rdx, [rsp+90h]  ; Load Effective Address
.text:0000000143BA978F 48 8B 0D EA E8 82 13                    mov     rcx, cs:qword_1573D8080
.text:0000000143BA9796 E8 75 41 EE FC                          call    sub_140A8D910   ; Call Procedure
.text:0000000143BA979B 90                                      nop                     ; No Operation
.text:0000000143BA979C EB 65                                   jmp     short loc_143BA9803 ; Jump
.text:0000000143BA979E                         ; ---------------------------------------------------------------------------
.text:0000000143BA979E
.text:0000000143BA979E                         loc_143BA979E:                          ; CODE XREF: sub_143BA95D0+1A7↑j
.text:0000000143BA979E 83 3D EF 0F CA 12 02                    cmp     cs:dword_15684A794, 2 ; Compare Two Operands
.text:0000000143BA97A5 75 25                                   jnz     short loc_143BA97CC ; Jump if Not Zero (ZF=0)
.text:0000000143BA97A7 44 8B 8C 24 B0 00 00 00                 mov     r9d, [rsp+0B0h]
.text:0000000143BA97AF 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA97B5 48 8D 94 24 90 00 00 00                 lea     rdx, [rsp+90h]  ; Load Effective Address
.text:0000000143BA97BD 48 8B 0D C4 E8 82 13                    mov     rcx, cs:qword_1573D8088
.text:0000000143BA97C4 E8 17 41 EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA97C9 90                                      nop                     ; No Operation
.text:0000000143BA97CA EB 37                                   jmp     short loc_143BA9803 ; Jump
.text:0000000143BA97CC                         ; ---------------------------------------------------------------------------
.text:0000000143BA97CC
.text:0000000143BA97CC                         loc_143BA97CC:                          ; CODE XREF: sub_143BA95D0+1D5↑j
.text:0000000143BA97CC 83 3D C1 0F CA 12 03                    cmp     cs:dword_15684A794, 3 ; Compare Two Operands
.text:0000000143BA97D3 75 2E                                   jnz     short loc_143BA9803 ; Jump if Not Zero (ZF=0)
.text:0000000143BA97D5 8B 84 24 B0 00 00 00                    mov     eax, [rsp+0B0h]
.text:0000000143BA97DC 48 8D 0D AD E8 82 13                    lea     rcx, qword_1573D8090 ; Load Effective Address
.text:0000000143BA97E3 44 8B 8C 24 B0 00 00 00                 mov     r9d, [rsp+0B0h]
.text:0000000143BA97EB 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA97F1 48 8D 94 24 90 00 00 00                 lea     rdx, [rsp+90h]  ; Load Effective Address
.text:0000000143BA97F9 48 8B 0C C1                             mov     rcx, [rcx+rax*8]
.text:0000000143BA97FD E8 DE 40 EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9802 90                                      nop                     ; No Operation
.text:0000000143BA9803
.text:0000000143BA9803                         loc_143BA9803:                          ; CODE XREF: sub_143BA95D0+1CC↑j
.text:0000000143BA9803                                                                 ; sub_143BA95D0+1FA↑j ...
.text:0000000143BA9803 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA9803 00 00
.text:0000000143BA980D 48 8B 8C 24 90 00 00 00                 mov     rcx, [rsp+90h]
.text:0000000143BA9815 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9818 48 8B C1                                mov     rax, rcx
.text:0000000143BA981B 48 89 84 24 10 01 00 00                 mov     [rsp+110h], rax
.text:0000000143BA9823 48 8B 84 24 10 01 00 00                 mov     rax, [rsp+110h]
.text:0000000143BA982B 48 C1 F8 2F                             sar     rax, 2Fh ; '/'  ; Shift Arithmetic Right
.text:0000000143BA982F 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA9832 75 12                                   jnz     short loc_143BA9846 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9834 48 8B 84 24 10 01 00 00                 mov     rax, [rsp+110h]
.text:0000000143BA983C 48 89 84 24 A0 01 00 00                 mov     [rsp+1A0h], rax
.text:0000000143BA9844 EB 20                                   jmp     short loc_143BA9866 ; Jump
.text:0000000143BA9846                         ; ---------------------------------------------------------------------------
.text:0000000143BA9846
.text:0000000143BA9846                         loc_143BA9846:                          ; CODE XREF: sub_143BA95D0+262↑j
.text:0000000143BA9846 48 B8 00 00 00 00 00 00                 mov     rax, 0FFFF000000000000h
.text:0000000143BA9846 FF FF
.text:0000000143BA9850 48 8B 8C 24 10 01 00 00                 mov     rcx, [rsp+110h]
.text:0000000143BA9858 48 0B C8                                or      rcx, rax        ; Logical Inclusive OR
.text:0000000143BA985B 48 8B C1                                mov     rax, rcx
.text:0000000143BA985E 48 89 84 24 A0 01 00 00                 mov     [rsp+1A0h], rax
.text:0000000143BA9866
.text:0000000143BA9866                         loc_143BA9866:                          ; CODE XREF: sub_143BA95D0+274↑j
.text:0000000143BA9866 48 8B 84 24 A0 01 00 00                 mov     rax, [rsp+1A0h]
.text:0000000143BA986E 48 89 84 24 E8 01 00 00                 mov     [rsp+1E8h], rax
.text:0000000143BA9876 48 8B 84 24 E8 01 00 00                 mov     rax, [rsp+1E8h]
.text:0000000143BA987E 48 89 84 24 40 01 00 00                 mov     [rsp+140h], rax
.text:0000000143BA9886 EB 10                                   jmp     short loc_143BA9898 ; Jump
.text:0000000143BA9888                         ; ---------------------------------------------------------------------------
.text:0000000143BA9888
.text:0000000143BA9888                         loc_143BA9888:                          ; CODE XREF: sub_143BA95D0+18E↑j
.text:0000000143BA9888 48 8B 84 24 90 00 00 00                 mov     rax, [rsp+90h]
.text:0000000143BA9890 48 89 84 24 40 01 00 00                 mov     [rsp+140h], rax
.text:0000000143BA9898
.text:0000000143BA9898                         loc_143BA9898:                          ; CODE XREF: sub_143BA95D0+2B6↑j
.text:0000000143BA9898 48 8B 84 24 40 01 00 00                 mov     rax, [rsp+140h]
.text:0000000143BA98A0 48 89 84 24 48 01 00 00                 mov     [rsp+148h], rax
.text:0000000143BA98A8
.text:0000000143BA98A8                         loc_143BA98A8:                          ; CODE XREF: sub_143BA95D0+124↑j
.text:0000000143BA98A8 48 8B 84 24 48 01 00 00                 mov     rax, [rsp+148h]
.text:0000000143BA98B0 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA98B3 74 0A                                   jz      short loc_143BA98BF ; Jump if Zero (ZF=1)
.text:0000000143BA98B5 C7 44 24 68 01 00 00 00                 mov     dword ptr [rsp+68h], 1
.text:0000000143BA98BD EB 08                                   jmp     short loc_143BA98C7 ; Jump
.text:0000000143BA98BF                         ; ---------------------------------------------------------------------------
.text:0000000143BA98BF
.text:0000000143BA98BF                         loc_143BA98BF:                          ; CODE XREF: sub_143BA95D0+2E3↑j
.text:0000000143BA98BF C7 44 24 68 00 00 00 00                 mov     dword ptr [rsp+68h], 0
.text:0000000143BA98C7
.text:0000000143BA98C7                         loc_143BA98C7:                          ; CODE XREF: sub_143BA95D0+2ED↑j
.text:0000000143BA98C7 0F B6 44 24 68                          movzx   eax, byte ptr [rsp+68h] ; Move with Zero-Extend
.text:0000000143BA98CC 88 44 24 41                             mov     [rsp+41h], al
.text:0000000143BA98D0 0F B6 44 24 41                          movzx   eax, byte ptr [rsp+41h] ; Move with Zero-Extend
.text:0000000143BA98D5 88 44 24 42                             mov     [rsp+42h], al
.text:0000000143BA98D9 0F B6 44 24 42                          movzx   eax, byte ptr [rsp+42h] ; Move with Zero-Extend
.text:0000000143BA98DE 0F B6 C0                                movzx   eax, al         ; Move with Zero-Extend
.text:0000000143BA98E1 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA98E3 0F 84 1B 11 00 00                       jz      loc_143BAAA04   ; Jump if Zero (ZF=1)
.text:0000000143BA98E9 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA98EE 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA98F5 48 05 70 01 00 00                       add     rax, 170h       ; Add
.text:0000000143BA98FB 48 89 84 24 F0 01 00 00                 mov     [rsp+1F0h], rax
.text:0000000143BA9903 48 8B 84 24 F0 01 00 00                 mov     rax, [rsp+1F0h]
.text:0000000143BA990B BA 02 00 00 00                          mov     edx, 2
.text:0000000143BA9910 48 8B C8                                mov     rcx, rax
.text:0000000143BA9913 E8 88 9F 6B FD                          call    sub_1412638A0   ; Call Procedure
.text:0000000143BA9918 48 89 84 24 B8 00 00 00                 mov     [rsp+0B8h], rax
.text:0000000143BA9920 48 83 BC 24 B8 00 00 00                 cmp     qword ptr [rsp+0B8h], 0 ; Compare Two Operands
.text:0000000143BA9920 00
.text:0000000143BA9929 75 11                                   jnz     short loc_143BA993C ; Jump if Not Zero (ZF=0)
.text:0000000143BA992B 48 C7 84 24 60 01 00 00                 mov     qword ptr [rsp+160h], 0
.text:0000000143BA992B 00 00 00 00
.text:0000000143BA9937 E9 9D 01 00 00                          jmp     loc_143BA9AD9   ; Jump
.text:0000000143BA993C                         ; ---------------------------------------------------------------------------
.text:0000000143BA993C
.text:0000000143BA993C                         loc_143BA993C:                          ; CODE XREF: sub_143BA95D0+359↑j
.text:0000000143BA993C 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA993C 00 00
.text:0000000143BA9946 48 8B 8C 24 B8 00 00 00                 mov     rcx, [rsp+0B8h]
.text:0000000143BA994E 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9951 48 8B C1                                mov     rax, rcx
.text:0000000143BA9954 48 89 84 24 F8 01 00 00                 mov     [rsp+1F8h], rax
.text:0000000143BA995C 48 8B 84 24 B8 00 00 00                 mov     rax, [rsp+0B8h]
.text:0000000143BA9964 48 C1 E8 30                             shr     rax, 30h        ; Shift Logical Right
.text:0000000143BA9968 48 25 FF 3F 00 00                       and     rax, 3FFFh      ; Logical AND
.text:0000000143BA996E 48 89 84 24 C0 00 00 00                 mov     [rsp+0C0h], rax
.text:0000000143BA9976 48 8B 84 24 B8 00 00 00                 mov     rax, [rsp+0B8h]
.text:0000000143BA997E 48 C1 E8 3F                             shr     rax, 3Fh        ; Shift Logical Right
.text:0000000143BA9982 48 83 E0 01                             and     rax, 1          ; Logical AND
.text:0000000143BA9986 88 44 24 43                             mov     [rsp+43h], al
.text:0000000143BA998A 48 8B 84 24 F8 01 00 00                 mov     rax, [rsp+1F8h]
.text:0000000143BA9992 48 89 44 24 70                          mov     [rsp+70h], rax
.text:0000000143BA9997 0F B6 44 24 43                          movzx   eax, byte ptr [rsp+43h] ; Move with Zero-Extend
.text:0000000143BA999C 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA999E 0F 84 18 01 00 00                       jz      loc_143BA9ABC   ; Jump if Zero (ZF=1)
.text:0000000143BA99A4 48 C7 84 24 A8 02 00 00                 mov     qword ptr [rsp+2A8h], 4
.text:0000000143BA99A4 04 00 00 00
.text:0000000143BA99B0 83 3D DD 0D CA 12 01                    cmp     cs:dword_15684A794, 1 ; Compare Two Operands
.text:0000000143BA99B7 75 22                                   jnz     short loc_143BA99DB ; Jump if Not Zero (ZF=0)
.text:0000000143BA99B9 44 8B 8C 24 C0 00 00 00                 mov     r9d, [rsp+0C0h]
.text:0000000143BA99C1 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA99C7 48 8D 54 24 70                          lea     rdx, [rsp+70h]  ; Load Effective Address
.text:0000000143BA99CC 48 8B 0D AD E6 82 13                    mov     rcx, cs:qword_1573D8080
.text:0000000143BA99D3 E8 38 3F EE FC                          call    sub_140A8D910   ; Call Procedure
.text:0000000143BA99D8 90                                      nop                     ; No Operation
.text:0000000143BA99D9 EB 5F                                   jmp     short loc_143BA9A3A ; Jump
.text:0000000143BA99DB                         ; ---------------------------------------------------------------------------
.text:0000000143BA99DB
.text:0000000143BA99DB                         loc_143BA99DB:                          ; CODE XREF: sub_143BA95D0+3E7↑j
.text:0000000143BA99DB 83 3D B2 0D CA 12 02                    cmp     cs:dword_15684A794, 2 ; Compare Two Operands
.text:0000000143BA99E2 75 22                                   jnz     short loc_143BA9A06 ; Jump if Not Zero (ZF=0)
.text:0000000143BA99E4 44 8B 8C 24 C0 00 00 00                 mov     r9d, [rsp+0C0h]
.text:0000000143BA99EC 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA99F2 48 8D 54 24 70                          lea     rdx, [rsp+70h]  ; Load Effective Address
.text:0000000143BA99F7 48 8B 0D 8A E6 82 13                    mov     rcx, cs:qword_1573D8088
.text:0000000143BA99FE E8 DD 3E EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9A03 90                                      nop                     ; No Operation
.text:0000000143BA9A04 EB 34                                   jmp     short loc_143BA9A3A ; Jump
.text:0000000143BA9A06                         ; ---------------------------------------------------------------------------
.text:0000000143BA9A06
.text:0000000143BA9A06                         loc_143BA9A06:                          ; CODE XREF: sub_143BA95D0+412↑j
.text:0000000143BA9A06 83 3D 87 0D CA 12 03                    cmp     cs:dword_15684A794, 3 ; Compare Two Operands
.text:0000000143BA9A0D 75 2B                                   jnz     short loc_143BA9A3A ; Jump if Not Zero (ZF=0)
.text:0000000143BA9A0F 8B 84 24 C0 00 00 00                    mov     eax, [rsp+0C0h]
.text:0000000143BA9A16 48 8D 0D 73 E6 82 13                    lea     rcx, qword_1573D8090 ; Load Effective Address
.text:0000000143BA9A1D 44 8B 8C 24 C0 00 00 00                 mov     r9d, [rsp+0C0h]
.text:0000000143BA9A25 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9A2B 48 8D 54 24 70                          lea     rdx, [rsp+70h]  ; Load Effective Address
.text:0000000143BA9A30 48 8B 0C C1                             mov     rcx, [rcx+rax*8]
.text:0000000143BA9A34 E8 A7 3E EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9A39 90                                      nop                     ; No Operation
.text:0000000143BA9A3A
.text:0000000143BA9A3A                         loc_143BA9A3A:                          ; CODE XREF: sub_143BA95D0+409↑j
.text:0000000143BA9A3A                                                                 ; sub_143BA95D0+434↑j ...
.text:0000000143BA9A3A 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA9A3A 00 00
.text:0000000143BA9A44 48 8B 4C 24 70                          mov     rcx, [rsp+70h]
.text:0000000143BA9A49 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9A4C 48 8B C1                                mov     rax, rcx
.text:0000000143BA9A4F 48 89 84 24 18 01 00 00                 mov     [rsp+118h], rax
.text:0000000143BA9A57 48 8B 84 24 18 01 00 00                 mov     rax, [rsp+118h]
.text:0000000143BA9A5F 48 C1 F8 2F                             sar     rax, 2Fh ; '/'  ; Shift Arithmetic Right
.text:0000000143BA9A63 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA9A66 75 12                                   jnz     short loc_143BA9A7A ; Jump if Not Zero (ZF=0)
.text:0000000143BA9A68 48 8B 84 24 18 01 00 00                 mov     rax, [rsp+118h]
.text:0000000143BA9A70 48 89 84 24 50 01 00 00                 mov     [rsp+150h], rax
.text:0000000143BA9A78 EB 20                                   jmp     short loc_143BA9A9A ; Jump
.text:0000000143BA9A7A                         ; ---------------------------------------------------------------------------
.text:0000000143BA9A7A
.text:0000000143BA9A7A                         loc_143BA9A7A:                          ; CODE XREF: sub_143BA95D0+496↑j
.text:0000000143BA9A7A 48 B8 00 00 00 00 00 00                 mov     rax, 0FFFF000000000000h
.text:0000000143BA9A7A FF FF
.text:0000000143BA9A84 48 8B 8C 24 18 01 00 00                 mov     rcx, [rsp+118h]
.text:0000000143BA9A8C 48 0B C8                                or      rcx, rax        ; Logical Inclusive OR
.text:0000000143BA9A8F 48 8B C1                                mov     rax, rcx
.text:0000000143BA9A92 48 89 84 24 50 01 00 00                 mov     [rsp+150h], rax
.text:0000000143BA9A9A
.text:0000000143BA9A9A                         loc_143BA9A9A:                          ; CODE XREF: sub_143BA95D0+4A8↑j
.text:0000000143BA9A9A 48 8B 84 24 50 01 00 00                 mov     rax, [rsp+150h]
.text:0000000143BA9AA2 48 89 84 24 00 02 00 00                 mov     [rsp+200h], rax
.text:0000000143BA9AAA 48 8B 84 24 00 02 00 00                 mov     rax, [rsp+200h]
.text:0000000143BA9AB2 48 89 84 24 58 01 00 00                 mov     [rsp+158h], rax
.text:0000000143BA9ABA EB 0D                                   jmp     short loc_143BA9AC9 ; Jump
.text:0000000143BA9ABC                         ; ---------------------------------------------------------------------------
.text:0000000143BA9ABC
.text:0000000143BA9ABC                         loc_143BA9ABC:                          ; CODE XREF: sub_143BA95D0+3CE↑j
.text:0000000143BA9ABC 48 8B 44 24 70                          mov     rax, [rsp+70h]
.text:0000000143BA9AC1 48 89 84 24 58 01 00 00                 mov     [rsp+158h], rax
.text:0000000143BA9AC9
.text:0000000143BA9AC9                         loc_143BA9AC9:                          ; CODE XREF: sub_143BA95D0+4EA↑j
.text:0000000143BA9AC9 48 8B 84 24 58 01 00 00                 mov     rax, [rsp+158h]
.text:0000000143BA9AD1 48 89 84 24 60 01 00 00                 mov     [rsp+160h], rax
.text:0000000143BA9AD9
.text:0000000143BA9AD9                         loc_143BA9AD9:                          ; CODE XREF: sub_143BA95D0+367↑j
.text:0000000143BA9AD9 48 8B 84 24 60 01 00 00                 mov     rax, [rsp+160h]
.text:0000000143BA9AE1 48 89 84 24 50 02 00 00                 mov     [rsp+250h], rax
.text:0000000143BA9AE9 48 8B 84 24 50 02 00 00                 mov     rax, [rsp+250h]
.text:0000000143BA9AF1 48 89 84 24 10 02 00 00                 mov     [rsp+210h], rax
.text:0000000143BA9AF9 48 8B 84 24 10 02 00 00                 mov     rax, [rsp+210h]
.text:0000000143BA9B01 48 89 84 24 88 00 00 00                 mov     [rsp+88h], rax
.text:0000000143BA9B09 48 83 BC 24 88 00 00 00                 cmp     qword ptr [rsp+88h], 0 ; Compare Two Operands
.text:0000000143BA9B09 00
.text:0000000143BA9B12 0F 84 EC 0E 00 00                       jz      loc_143BAAA04   ; Jump if Zero (ZF=1)
.text:0000000143BA9B18 48 8B 84 24 88 00 00 00                 mov     rax, [rsp+88h]
.text:0000000143BA9B20 80 B8 F0 0B 00 00 01                    cmp     byte ptr [rax+0BF0h], 1 ; Compare Two Operands
.text:0000000143BA9B27 0F 85 AF 00 00 00                       jnz     loc_143BA9BDC   ; Jump if Not Zero (ZF=0)
.text:0000000143BA9B2D 45 33 C9                                xor     r9d, r9d        ; Logical Exclusive OR
.text:0000000143BA9B30 48 8B 84 24 80 07 00 00                 mov     rax, [rsp+780h]
.text:0000000143BA9B38 4C 8B 80 50 D9 05 00                    mov     r8, [rax+5D950h]
.text:0000000143BA9B3F 48 8D 94 24 78 02 00 00                 lea     rdx, [rsp+278h] ; Load Effective Address
.text:0000000143BA9B47 48 8B 8C 24 88 00 00 00                 mov     rcx, [rsp+88h]
.text:0000000143BA9B4F E8 DC 77 58 FF                          call    sub_143131330   ; Call Procedure
.text:0000000143BA9B54 90                                      nop                     ; No Operation
.text:0000000143BA9B55 48 8B 84 24 90 07 00 00                 mov     rax, [rsp+790h]
.text:0000000143BA9B5D 48 83 C0 20                             add     rax, 20h        ; Add
.text:0000000143BA9B61 F3 0F 10 05 E7 DA 35 0D                 movss   xmm0, cs:dword_150F07650 ; Move Scalar Single-FP
.text:0000000143BA9B69 F3 0F 11 44 24 20                       movss   dword ptr [rsp+20h], xmm0 ; Move Scalar Single-FP
.text:0000000143BA9B6F F3 0F 10 9C 24 98 07 00                 movss   xmm3, dword ptr [rsp+798h] ; Move Scalar Single-FP
.text:0000000143BA9B6F 00
.text:0000000143BA9B78 4C 8D 84 24 78 02 00 00                 lea     r8, [rsp+278h]  ; Load Effective Address
.text:0000000143BA9B80 48 8B D0                                mov     rdx, rax
.text:0000000143BA9B83 48 8D 8C 24 30 06 00 00                 lea     rcx, [rsp+630h] ; Load Effective Address
.text:0000000143BA9B8B E8 D0 9F C8 08                          call    sub_14C833B60   ; Call Procedure
.text:0000000143BA9B90 48 8D 8C 24 98 00 00 00                 lea     rcx, [rsp+98h]  ; Load Effective Address
.text:0000000143BA9B98 48 8B F9                                mov     rdi, rcx
.text:0000000143BA9B9B 48 8B F0                                mov     rsi, rax
.text:0000000143BA9B9E B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA9BA3 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA9BA5 F3 0F 10 84 24 7C 02 00                 movss   xmm0, dword ptr [rsp+27Ch] ; Move Scalar Single-FP
.text:0000000143BA9BA5 00
.text:0000000143BA9BAE F3 0F 11 84 24 9C 00 00                 movss   dword ptr [rsp+9Ch], xmm0 ; Move Scalar Single-FP
.text:0000000143BA9BAE 00
.text:0000000143BA9BB7 48 8B 84 24 80 07 00 00                 mov     rax, [rsp+780h]
.text:0000000143BA9BBF 48 8B 8C 24 80 07 00 00                 mov     rcx, [rsp+780h]
.text:0000000143BA9BC7 F3 0F 10 81 AC D8 05 00                 movss   xmm0, dword ptr [rcx+5D8ACh] ; Move Scalar Single-FP
.text:0000000143BA9BCF F3 0F 11 80 B0 D8 05 00                 movss   dword ptr [rax+5D8B0h], xmm0 ; Move Scalar Single-FP
.text:0000000143BA9BD7 E9 28 0E 00 00                          jmp     loc_143BAAA04   ; Jump
.text:0000000143BA9BDC                         ; ---------------------------------------------------------------------------
.text:0000000143BA9BDC
.text:0000000143BA9BDC                         loc_143BA9BDC:                          ; CODE XREF: sub_143BA95D0+557↑j
.text:0000000143BA9BDC 0F B6 05 86 2B 42 13                    movzx   eax, cs:byte_156FCC769 ; Move with Zero-Extend
.text:0000000143BA9BE3 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA9BE5 75 2E                                   jnz     short loc_143BA9C15 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9BE7 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA9BEC 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA9BF3 0F B6 80 18 03 00 00                    movzx   eax, byte ptr [rax+318h] ; Move with Zero-Extend
.text:0000000143BA9BFA 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA9BFC 75 17                                   jnz     short loc_143BA9C15 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9BFE 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA9C03 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA9C0A 0F B6 80 21 04 00 00                    movzx   eax, byte ptr [rax+421h] ; Move with Zero-Extend
.text:0000000143BA9C11 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA9C13 74 41                                   jz      short loc_143BA9C56 ; Jump if Zero (ZF=1)
.text:0000000143BA9C15
.text:0000000143BA9C15                         loc_143BA9C15:                          ; CODE XREF: sub_143BA95D0+615↑j
.text:0000000143BA9C15                                                                 ; sub_143BA95D0+62C↑j
.text:0000000143BA9C15 45 33 C9                                xor     r9d, r9d        ; Logical Exclusive OR
.text:0000000143BA9C18 48 8B 84 24 80 07 00 00                 mov     rax, [rsp+780h]
.text:0000000143BA9C20 4C 8B 80 50 D9 05 00                    mov     r8, [rax+5D950h]
.text:0000000143BA9C27 48 8D 94 24 3C 06 00 00                 lea     rdx, [rsp+63Ch] ; Load Effective Address
.text:0000000143BA9C2F 48 8B 8C 24 88 00 00 00                 mov     rcx, [rsp+88h]
.text:0000000143BA9C37 E8 F4 76 58 FF                          call    sub_143131330   ; Call Procedure
.text:0000000143BA9C3C 48 8D 8C 24 98 00 00 00                 lea     rcx, [rsp+98h]  ; Load Effective Address
.text:0000000143BA9C44 48 8B F9                                mov     rdi, rcx
.text:0000000143BA9C47 48 8B F0                                mov     rsi, rax
.text:0000000143BA9C4A B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BA9C4F F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BA9C51 E9 AE 0D 00 00                          jmp     loc_143BAAA04   ; Jump
.text:0000000143BA9C56                         ; ---------------------------------------------------------------------------
.text:0000000143BA9C56
.text:0000000143BA9C56                         loc_143BA9C56:                          ; CODE XREF: sub_143BA95D0+643↑j
.text:0000000143BA9C56 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA9C5B 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA9C62 48 05 78 01 00 00                       add     rax, 178h       ; Add
.text:0000000143BA9C68 48 89 84 24 18 02 00 00                 mov     [rsp+218h], rax
.text:0000000143BA9C70 48 8B 84 24 18 02 00 00                 mov     rax, [rsp+218h]
.text:0000000143BA9C78 BA 02 00 00 00                          mov     edx, 2
.text:0000000143BA9C7D 48 8B C8                                mov     rcx, rax
.text:0000000143BA9C80 E8 1B 9C 6B FD                          call    sub_1412638A0   ; Call Procedure
.text:0000000143BA9C85 48 89 84 24 C8 00 00 00                 mov     [rsp+0C8h], rax
.text:0000000143BA9C8D 48 83 BC 24 C8 00 00 00                 cmp     qword ptr [rsp+0C8h], 0 ; Compare Two Operands
.text:0000000143BA9C8D 00
.text:0000000143BA9C96 75 11                                   jnz     short loc_143BA9CA9 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9C98 48 C7 84 24 78 01 00 00                 mov     qword ptr [rsp+178h], 0
.text:0000000143BA9C98 00 00 00 00
.text:0000000143BA9CA4 E9 9D 01 00 00                          jmp     loc_143BA9E46   ; Jump
.text:0000000143BA9CA9                         ; ---------------------------------------------------------------------------
.text:0000000143BA9CA9
.text:0000000143BA9CA9                         loc_143BA9CA9:                          ; CODE XREF: sub_143BA95D0+6C6↑j
.text:0000000143BA9CA9 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA9CA9 00 00
.text:0000000143BA9CB3 48 8B 8C 24 C8 00 00 00                 mov     rcx, [rsp+0C8h]
.text:0000000143BA9CBB 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9CBE 48 8B C1                                mov     rax, rcx
.text:0000000143BA9CC1 48 89 84 24 20 02 00 00                 mov     [rsp+220h], rax
.text:0000000143BA9CC9 48 8B 84 24 C8 00 00 00                 mov     rax, [rsp+0C8h]
.text:0000000143BA9CD1 48 C1 E8 30                             shr     rax, 30h ; '0'  ; Shift Logical Right
.text:0000000143BA9CD5 48 25 FF 3F 00 00                       and     rax, 3FFFh      ; Logical AND
.text:0000000143BA9CDB 48 89 84 24 D0 00 00 00                 mov     [rsp+0D0h], rax
.text:0000000143BA9CE3 48 8B 84 24 C8 00 00 00                 mov     rax, [rsp+0C8h]
.text:0000000143BA9CEB 48 C1 E8 3F                             shr     rax, 3Fh        ; Shift Logical Right
.text:0000000143BA9CEF 48 83 E0 01                             and     rax, 1          ; Logical AND
.text:0000000143BA9CF3 88 44 24 44                             mov     [rsp+44h], al
.text:0000000143BA9CF7 48 8B 84 24 20 02 00 00                 mov     rax, [rsp+220h]
.text:0000000143BA9CFF 48 89 44 24 78                          mov     [rsp+78h], rax
.text:0000000143BA9D04 0F B6 44 24 44                          movzx   eax, byte ptr [rsp+44h] ; Move with Zero-Extend
.text:0000000143BA9D09 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA9D0B 0F 84 18 01 00 00                       jz      loc_143BA9E29   ; Jump if Zero (ZF=1)
.text:0000000143BA9D11 48 C7 84 24 90 02 00 00                 mov     qword ptr [rsp+290h], 4
.text:0000000143BA9D11 04 00 00 00
.text:0000000143BA9D1D 83 3D 70 0A CA 12 01                    cmp     cs:dword_15684A794, 1 ; Compare Two Operands
.text:0000000143BA9D24 75 22                                   jnz     short loc_143BA9D48 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9D26 44 8B 8C 24 D0 00 00 00                 mov     r9d, [rsp+0D0h]
.text:0000000143BA9D2E 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9D34 48 8D 54 24 78                          lea     rdx, [rsp+78h]  ; Load Effective Address
.text:0000000143BA9D39 48 8B 0D 40 E3 82 13                    mov     rcx, cs:qword_1573D8080
.text:0000000143BA9D40 E8 CB 3B EE FC                          call    sub_140A8D910   ; Call Procedure
.text:0000000143BA9D45 90                                      nop                     ; No Operation
.text:0000000143BA9D46 EB 5F                                   jmp     short loc_143BA9DA7 ; Jump
.text:0000000143BA9D48                         ; ---------------------------------------------------------------------------
.text:0000000143BA9D48
.text:0000000143BA9D48                         loc_143BA9D48:                          ; CODE XREF: sub_143BA95D0+754↑j
.text:0000000143BA9D48 83 3D 45 0A CA 12 02                    cmp     cs:dword_15684A794, 2 ; Compare Two Operands
.text:0000000143BA9D4F 75 22                                   jnz     short loc_143BA9D73 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9D51 44 8B 8C 24 D0 00 00 00                 mov     r9d, [rsp+0D0h]
.text:0000000143BA9D59 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9D5F 48 8D 54 24 78                          lea     rdx, [rsp+78h]  ; Load Effective Address
.text:0000000143BA9D64 48 8B 0D 1D E3 82 13                    mov     rcx, cs:qword_1573D8088
.text:0000000143BA9D6B E8 70 3B EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9D70 90                                      nop                     ; No Operation
.text:0000000143BA9D71 EB 34                                   jmp     short loc_143BA9DA7 ; Jump
.text:0000000143BA9D73                         ; ---------------------------------------------------------------------------
.text:0000000143BA9D73
.text:0000000143BA9D73                         loc_143BA9D73:                          ; CODE XREF: sub_143BA95D0+77F↑j
.text:0000000143BA9D73 83 3D 1A 0A CA 12 03                    cmp     cs:dword_15684A794, 3 ; Compare Two Operands
.text:0000000143BA9D7A 75 2B                                   jnz     short loc_143BA9DA7 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9D7C 8B 84 24 D0 00 00 00                    mov     eax, [rsp+0D0h]
.text:0000000143BA9D83 48 8D 0D 06 E3 82 13                    lea     rcx, qword_1573D8090 ; Load Effective Address
.text:0000000143BA9D8A 44 8B 8C 24 D0 00 00 00                 mov     r9d, [rsp+0D0h]
.text:0000000143BA9D92 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9D98 48 8D 54 24 78                          lea     rdx, [rsp+78h]  ; Load Effective Address
.text:0000000143BA9D9D 48 8B 0C C1                             mov     rcx, [rcx+rax*8]
.text:0000000143BA9DA1 E8 3A 3B EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9DA6 90                                      nop                     ; No Operation
.text:0000000143BA9DA7
.text:0000000143BA9DA7                         loc_143BA9DA7:                          ; CODE XREF: sub_143BA95D0+776↑j
.text:0000000143BA9DA7                                                                 ; sub_143BA95D0+7A1↑j ...
.text:0000000143BA9DA7 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA9DA7 00 00
.text:0000000143BA9DB1 48 8B 4C 24 78                          mov     rcx, [rsp+78h]
.text:0000000143BA9DB6 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9DB9 48 8B C1                                mov     rax, rcx
.text:0000000143BA9DBC 48 89 84 24 20 01 00 00                 mov     [rsp+120h], rax
.text:0000000143BA9DC4 48 8B 84 24 20 01 00 00                 mov     rax, [rsp+120h]
.text:0000000143BA9DCC 48 C1 F8 2F                             sar     rax, 2Fh        ; Shift Arithmetic Right
.text:0000000143BA9DD0 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA9DD3 75 12                                   jnz     short loc_143BA9DE7 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9DD5 48 8B 84 24 20 01 00 00                 mov     rax, [rsp+120h]
.text:0000000143BA9DDD 48 89 84 24 68 01 00 00                 mov     [rsp+168h], rax
.text:0000000143BA9DE5 EB 20                                   jmp     short loc_143BA9E07 ; Jump
.text:0000000143BA9DE7                         ; ---------------------------------------------------------------------------
.text:0000000143BA9DE7
.text:0000000143BA9DE7                         loc_143BA9DE7:                          ; CODE XREF: sub_143BA95D0+803↑j
.text:0000000143BA9DE7 48 B8 00 00 00 00 00 00                 mov     rax, 0FFFF000000000000h
.text:0000000143BA9DE7 FF FF
.text:0000000143BA9DF1 48 8B 8C 24 20 01 00 00                 mov     rcx, [rsp+120h]
.text:0000000143BA9DF9 48 0B C8                                or      rcx, rax        ; Logical Inclusive OR
.text:0000000143BA9DFC 48 8B C1                                mov     rax, rcx
.text:0000000143BA9DFF 48 89 84 24 68 01 00 00                 mov     [rsp+168h], rax
.text:0000000143BA9E07
.text:0000000143BA9E07                         loc_143BA9E07:                          ; CODE XREF: sub_143BA95D0+815↑j
.text:0000000143BA9E07 48 8B 84 24 68 01 00 00                 mov     rax, [rsp+168h]
.text:0000000143BA9E0F 48 89 84 24 28 02 00 00                 mov     [rsp+228h], rax
.text:0000000143BA9E17 48 8B 84 24 28 02 00 00                 mov     rax, [rsp+228h]
.text:0000000143BA9E1F 48 89 84 24 70 01 00 00                 mov     [rsp+170h], rax
.text:0000000143BA9E27 EB 0D                                   jmp     short loc_143BA9E36 ; Jump
.text:0000000143BA9E29                         ; ---------------------------------------------------------------------------
.text:0000000143BA9E29
.text:0000000143BA9E29                         loc_143BA9E29:                          ; CODE XREF: sub_143BA95D0+73B↑j
.text:0000000143BA9E29 48 8B 44 24 78                          mov     rax, [rsp+78h]
.text:0000000143BA9E2E 48 89 84 24 70 01 00 00                 mov     [rsp+170h], rax
.text:0000000143BA9E36
.text:0000000143BA9E36                         loc_143BA9E36:                          ; CODE XREF: sub_143BA95D0+857↑j
.text:0000000143BA9E36 48 8B 84 24 70 01 00 00                 mov     rax, [rsp+170h]
.text:0000000143BA9E3E 48 89 84 24 78 01 00 00                 mov     [rsp+178h], rax
.text:0000000143BA9E46
.text:0000000143BA9E46                         loc_143BA9E46:                          ; CODE XREF: sub_143BA95D0+6D4↑j
.text:0000000143BA9E46 48 8B 84 24 78 01 00 00                 mov     rax, [rsp+178h]
.text:0000000143BA9E4E 48 89 84 24 48 02 00 00                 mov     [rsp+248h], rax
.text:0000000143BA9E56 48 8B 44 24 60                          mov     rax, [rsp+60h]
.text:0000000143BA9E5B 48 8B 80 F0 0F 00 00                    mov     rax, [rax+0FF0h]
.text:0000000143BA9E62 48 05 78 01 00 00                       add     rax, 178h       ; Add
.text:0000000143BA9E68 48 89 84 24 30 02 00 00                 mov     [rsp+230h], rax
.text:0000000143BA9E70 48 8B 84 24 30 02 00 00                 mov     rax, [rsp+230h]
.text:0000000143BA9E78 BA 02 00 00 00                          mov     edx, 2
.text:0000000143BA9E7D 48 8B C8                                mov     rcx, rax
.text:0000000143BA9E80 E8 1B 9A 6B FD                          call    sub_1412638A0   ; Call Procedure
.text:0000000143BA9E85 48 89 84 24 D8 00 00 00                 mov     [rsp+0D8h], rax
.text:0000000143BA9E8D 48 83 BC 24 D8 00 00 00                 cmp     qword ptr [rsp+0D8h], 0 ; Compare Two Operands
.text:0000000143BA9E8D 00
.text:0000000143BA9E96 75 11                                   jnz     short loc_143BA9EA9 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9E98 48 C7 84 24 90 01 00 00                 mov     qword ptr [rsp+190h], 0
.text:0000000143BA9E98 00 00 00 00
.text:0000000143BA9EA4 E9 AF 01 00 00                          jmp     loc_143BAA058   ; Jump
.text:0000000143BA9EA9                         ; ---------------------------------------------------------------------------
.text:0000000143BA9EA9
.text:0000000143BA9EA9                         loc_143BA9EA9:                          ; CODE XREF: sub_143BA95D0+8C6↑j
.text:0000000143BA9EA9 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA9EA9 00 00
.text:0000000143BA9EB3 48 8B 8C 24 D8 00 00 00                 mov     rcx, [rsp+0D8h]
.text:0000000143BA9EBB 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9EBE 48 8B C1                                mov     rax, rcx
.text:0000000143BA9EC1 48 89 84 24 38 02 00 00                 mov     [rsp+238h], rax
.text:0000000143BA9EC9 48 8B 84 24 D8 00 00 00                 mov     rax, [rsp+0D8h]
.text:0000000143BA9ED1 48 C1 E8 30                             shr     rax, 30h        ; Shift Logical Right
.text:0000000143BA9ED5 48 25 FF 3F 00 00                       and     rax, 3FFFh      ; Logical AND
.text:0000000143BA9EDB 48 89 84 24 E0 00 00 00                 mov     [rsp+0E0h], rax
.text:0000000143BA9EE3 48 8B 84 24 D8 00 00 00                 mov     rax, [rsp+0D8h]
.text:0000000143BA9EEB 48 C1 E8 3F                             shr     rax, 3Fh ; '?'  ; Shift Logical Right
.text:0000000143BA9EEF 48 83 E0 01                             and     rax, 1          ; Logical AND
.text:0000000143BA9EF3 88 44 24 45                             mov     [rsp+45h], al
.text:0000000143BA9EF7 48 8B 84 24 38 02 00 00                 mov     rax, [rsp+238h]
.text:0000000143BA9EFF 48 89 84 24 80 00 00 00                 mov     [rsp+80h], rax
.text:0000000143BA9F07 0F B6 44 24 45                          movzx   eax, byte ptr [rsp+45h] ; Move with Zero-Extend
.text:0000000143BA9F0C 85 C0                                   test    eax, eax        ; Logical Compare
.text:0000000143BA9F0E 0F 84 24 01 00 00                       jz      loc_143BAA038   ; Jump if Zero (ZF=1)
.text:0000000143BA9F14 48 C7 84 24 98 02 00 00                 mov     qword ptr [rsp+298h], 4
.text:0000000143BA9F14 04 00 00 00
.text:0000000143BA9F20 83 3D 6D 08 CA 12 01                    cmp     cs:dword_15684A794, 1 ; Compare Two Operands
.text:0000000143BA9F27 75 25                                   jnz     short loc_143BA9F4E ; Jump if Not Zero (ZF=0)
.text:0000000143BA9F29 44 8B 8C 24 E0 00 00 00                 mov     r9d, [rsp+0E0h]
.text:0000000143BA9F31 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9F37 48 8D 94 24 80 00 00 00                 lea     rdx, [rsp+80h]  ; Load Effective Address
.text:0000000143BA9F3F 48 8B 0D 3A E1 82 13                    mov     rcx, cs:qword_1573D8080
.text:0000000143BA9F46 E8 C5 39 EE FC                          call    sub_140A8D910   ; Call Procedure
.text:0000000143BA9F4B 90                                      nop                     ; No Operation
.text:0000000143BA9F4C EB 65                                   jmp     short loc_143BA9FB3 ; Jump
.text:0000000143BA9F4E                         ; ---------------------------------------------------------------------------
.text:0000000143BA9F4E
.text:0000000143BA9F4E                         loc_143BA9F4E:                          ; CODE XREF: sub_143BA95D0+957↑j
.text:0000000143BA9F4E 83 3D 3F 08 CA 12 02                    cmp     cs:dword_15684A794, 2 ; Compare Two Operands
.text:0000000143BA9F55 75 25                                   jnz     short loc_143BA9F7C ; Jump if Not Zero (ZF=0)
.text:0000000143BA9F57 44 8B 8C 24 E0 00 00 00                 mov     r9d, [rsp+0E0h]
.text:0000000143BA9F5F 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9F65 48 8D 94 24 80 00 00 00                 lea     rdx, [rsp+80h]  ; Load Effective Address
.text:0000000143BA9F6D 48 8B 0D 14 E1 82 13                    mov     rcx, cs:qword_1573D8088
.text:0000000143BA9F74 E8 67 39 EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9F79 90                                      nop                     ; No Operation
.text:0000000143BA9F7A EB 37                                   jmp     short loc_143BA9FB3 ; Jump
.text:0000000143BA9F7C                         ; ---------------------------------------------------------------------------
.text:0000000143BA9F7C
.text:0000000143BA9F7C                         loc_143BA9F7C:                          ; CODE XREF: sub_143BA95D0+985↑j
.text:0000000143BA9F7C 83 3D 11 08 CA 12 03                    cmp     cs:dword_15684A794, 3 ; Compare Two Operands
.text:0000000143BA9F83 75 2E                                   jnz     short loc_143BA9FB3 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9F85 8B 84 24 E0 00 00 00                    mov     eax, [rsp+0E0h]
.text:0000000143BA9F8C 48 8D 0D FD E0 82 13                    lea     rcx, qword_1573D8090 ; Load Effective Address
.text:0000000143BA9F93 44 8B 8C 24 E0 00 00 00                 mov     r9d, [rsp+0E0h]
.text:0000000143BA9F9B 41 B8 04 00 00 00                       mov     r8d, 4
.text:0000000143BA9FA1 48 8D 94 24 80 00 00 00                 lea     rdx, [rsp+80h]  ; Load Effective Address
.text:0000000143BA9FA9 48 8B 0C C1                             mov     rcx, [rcx+rax*8]
.text:0000000143BA9FAD E8 2E 39 EE FC                          call    sub_140A8D8E0   ; Call Procedure
.text:0000000143BA9FB2 90                                      nop                     ; No Operation
.text:0000000143BA9FB3
.text:0000000143BA9FB3                         loc_143BA9FB3:                          ; CODE XREF: sub_143BA95D0+97C↑j
.text:0000000143BA9FB3                                                                 ; sub_143BA95D0+9AA↑j ...
.text:0000000143BA9FB3 48 B8 FF FF FF FF FF FF                 mov     rax, 0FFFFFFFFFFFFh
.text:0000000143BA9FB3 00 00
.text:0000000143BA9FBD 48 8B 8C 24 80 00 00 00                 mov     rcx, [rsp+80h]
.text:0000000143BA9FC5 48 23 C8                                and     rcx, rax        ; Logical AND
.text:0000000143BA9FC8 48 8B C1                                mov     rax, rcx
.text:0000000143BA9FCB 48 89 84 24 28 01 00 00                 mov     [rsp+128h], rax
.text:0000000143BA9FD3 48 8B 84 24 28 01 00 00                 mov     rax, [rsp+128h]
.text:0000000143BA9FDB 48 C1 F8 2F                             sar     rax, 2Fh ; '/'  ; Shift Arithmetic Right
.text:0000000143BA9FDF 48 85 C0                                test    rax, rax        ; Logical Compare
.text:0000000143BA9FE2 75 12                                   jnz     short loc_143BA9FF6 ; Jump if Not Zero (ZF=0)
.text:0000000143BA9FE4 48 8B 84 24 28 01 00 00                 mov     rax, [rsp+128h]
.text:0000000143BA9FEC 48 89 84 24 80 01 00 00                 mov     [rsp+180h], rax
.text:0000000143BA9FF4 EB 20                                   jmp     short loc_143BAA016 ; Jump
.text:0000000143BA9FF6                         ; ---------------------------------------------------------------------------
.text:0000000143BA9FF6
.text:0000000143BA9FF6                         loc_143BA9FF6:                          ; CODE XREF: sub_143BA95D0+A12↑j
.text:0000000143BA9FF6 48 B8 00 00 00 00 00 00                 mov     rax, 0FFFF000000000000h
.text:0000000143BA9FF6 FF FF
.text:0000000143BAA000 48 8B 8C 24 28 01 00 00                 mov     rcx, [rsp+128h]
.text:0000000143BAA008 48 0B C8                                or      rcx, rax        ; Logical Inclusive OR
.text:0000000143BAA00B 48 8B C1                                mov     rax, rcx
.text:0000000143BAA00E 48 89 84 24 80 01 00 00                 mov     [rsp+180h], rax
.text:0000000143BAA016
.text:0000000143BAA016                         loc_143BAA016:                          ; CODE XREF: sub_143BA95D0+A24↑j
.text:0000000143BAA016 48 8B 84 24 80 01 00 00                 mov     rax, [rsp+180h]
.text:0000000143BAA01E 48 89 84 24 40 02 00 00                 mov     [rsp+240h], rax
.text:0000000143BAA026 48 8B 84 24 40 02 00 00                 mov     rax, [rsp+240h]
.text:0000000143BAA02E 48 89 84 24 88 01 00 00                 mov     [rsp+188h], rax
.text:0000000143BAA036 EB 10                                   jmp     short loc_143BAA048 ; Jump
.text:0000000143BAA038                         ; ---------------------------------------------------------------------------
.text:0000000143BAA038
.text:0000000143BAA038                         loc_143BAA038:                          ; CODE XREF: sub_143BA95D0+93E↑j
.text:0000000143BAA038 48 8B 84 24 80 00 00 00                 mov     rax, [rsp+80h]
.text:0000000143BAA040 48 89 84 24 88 01 00 00                 mov     [rsp+188h], rax
.text:0000000143BAA048
.text:0000000143BAA048                         loc_143BAA048:                          ; CODE XREF: sub_143BA95D0+A66↑j
.text:0000000143BAA048 48 8B 84 24 88 01 00 00                 mov     rax, [rsp+188h]
.text:0000000143BAA050 48 89 84 24 90 01 00 00                 mov     [rsp+190h], rax
.text:0000000143BAA058
.text:0000000143BAA058                         loc_143BAA058:                          ; CODE XREF: sub_143BA95D0+8D4↑j
.text:0000000143BAA058 48 8B 84 24 90 01 00 00                 mov     rax, [rsp+190h]
.text:0000000143BAA060 48 89 84 24 88 02 00 00                 mov     [rsp+288h], rax
.text:0000000143BAA068 48 8B 84 24 48 02 00 00                 mov     rax, [rsp+248h]
.text:0000000143BAA070 F3 0F 10 80 E8 01 00 00                 movss   xmm0, dword ptr [rax+1E8h] ; Move Scalar Single-FP
.text:0000000143BAA078 F3 0F 11 84 24 F8 00 00                 movss   dword ptr [rsp+0F8h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA078 00
.text:0000000143BAA081 48 8B 84 24 88 02 00 00                 mov     rax, [rsp+288h]
.text:0000000143BAA089 F3 0F 10 80 E4 01 00 00                 movss   xmm0, dword ptr [rax+1E4h] ; Move Scalar Single-FP
.text:0000000143BAA091 F3 0F 11 84 24 F0 00 00                 movss   dword ptr [rsp+0F0h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA091 00
.text:0000000143BAA09A F3 0F 10 84 24 F0 00 00                 movss   xmm0, dword ptr [rsp+0F0h] ; Move Scalar Single-FP
.text:0000000143BAA09A 00
.text:0000000143BAA0A3 F3 0F 11 84 24 A8 01 00                 movss   dword ptr [rsp+1A8h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA0A3 00
.text:0000000143BAA0AC F3 0F 10 84 24 F8 00 00                 movss   xmm0, dword ptr [rsp+0F8h] ; Move Scalar Single-FP
.text:0000000143BAA0AC 00
.text:0000000143BAA0B5 F3 0F 11 84 24 AC 01 00                 movss   dword ptr [rsp+1ACh], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA0B5 00
.text:0000000143BAA0BE 0F 57 C0                                xorps   xmm0, xmm0      ; Bitwise Logical XOR for Single-FP Data
.text:0000000143BAA0C1 F3 0F 11 84 24 B0 01 00                 movss   dword ptr [rsp+1B0h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA0C1 00
.text:0000000143BAA0CA 48 8D 84 24 A8 01 00 00                 lea     rax, [rsp+1A8h] ; Load Effective Address
.text:0000000143BAA0D2 48 89 84 24 58 02 00 00                 mov     [rsp+258h], rax
.text:0000000143BAA0DA 48 8D 84 24 98 00 00 00                 lea     rax, [rsp+98h]  ; Load Effective Address
.text:0000000143BAA0E2 48 8B F8                                mov     rdi, rax
.text:0000000143BAA0E5 48 8B B4 24 58 02 00 00                 mov     rsi, [rsp+258h]
.text:0000000143BAA0ED B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BAA0F2 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BAA0F4 41 B9 03 00 00 00                       mov     r9d, 3
.text:0000000143BAA0FA 48 8B 84 24 80 07 00 00                 mov     rax, [rsp+780h]
.text:0000000143BAA102 4C 8B 80 48 D9 05 00                    mov     r8, [rax+5D948h]
.text:0000000143BAA109 48 8D 94 24 B8 01 00 00                 lea     rdx, [rsp+1B8h] ; Load Effective Address
.text:0000000143BAA111 48 8B 8C 24 88 00 00 00                 mov     rcx, [rsp+88h]
.text:0000000143BAA119 E8 12 72 58 FF                          call    sub_143131330   ; Call Procedure
.text:0000000143BAA11E F3 0F 10 84 24 B8 01 00                 movss   xmm0, dword ptr [rsp+1B8h] ; Move Scalar Single-FP
.text:0000000143BAA11E 00
.text:0000000143BAA127 F3 0F 11 84 24 00 01 00                 movss   dword ptr [rsp+100h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA127 00
.text:0000000143BAA130 F3 0F 10 84 24 BC 01 00                 movss   xmm0, dword ptr [rsp+1BCh] ; Move Scalar Single-FP
.text:0000000143BAA130 00
.text:0000000143BAA139 F3 0F 11 84 24 30 01 00                 movss   dword ptr [rsp+130h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA139 00
.text:0000000143BAA142 F3 0F 10 84 24 C0 01 00                 movss   xmm0, dword ptr [rsp+1C0h] ; Move Scalar Single-FP
.text:0000000143BAA142 00
.text:0000000143BAA14B 0F 57 05 BE D5 B1 0C                    xorps   xmm0, cs:xmmword_1506C7710 ; Bitwise Logical XOR for Single-FP Data
.text:0000000143BAA152 F3 0F 11 84 24 38 01 00                 movss   dword ptr [rsp+138h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA152 00
.text:0000000143BAA15B F3 0F 10 84 24 38 01 00                 movss   xmm0, dword ptr [rsp+138h] ; Move Scalar Single-FP
.text:0000000143BAA15B 00
.text:0000000143BAA164 F3 0F 11 84 24 C8 01 00                 movss   dword ptr [rsp+1C8h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA164 00
.text:0000000143BAA16D F3 0F 10 84 24 30 01 00                 movss   xmm0, dword ptr [rsp+130h] ; Move Scalar Single-FP
.text:0000000143BAA16D 00
.text:0000000143BAA176 F3 0F 11 84 24 CC 01 00                 movss   dword ptr [rsp+1CCh], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA176 00
.text:0000000143BAA17F F3 0F 10 84 24 00 01 00                 movss   xmm0, dword ptr [rsp+100h] ; Move Scalar Single-FP
.text:0000000143BAA17F 00
.text:0000000143BAA188 F3 0F 11 84 24 D0 01 00                 movss   dword ptr [rsp+1D0h], xmm0 ; Move Scalar Single-FP
.text:0000000143BAA188 00
.text:0000000143BAA191 48 8D 94 24 C8 01 00 00                 lea     rdx, [rsp+1C8h] ; Load Effective Address
.text:0000000143BAA199 48 8D 8C 24 60 06 00 00                 lea     rcx, [rsp+660h] ; Load Effective Address
.text:0000000143BAA1A1 E8 BA 50 19 FD                          call    sub_140D3F260   ; Call Procedure
.text:0000000143BAA1A6 90                                      nop                     ; No Operation
.text:0000000143BAA1A7 48 8D 94 24 98 00 00 00                 lea     rdx, [rsp+98h]  ; Load Effective Address
.text:0000000143BAA1AF 48 8D 8C 24 20 07 00 00                 lea     rcx, [rsp+720h] ; Load Effective Address
.text:0000000143BAA1B7 E8 A4 50 19 FD                          call    sub_140D3F260   ; Call Procedure
.text:0000000143BAA1BC 48 89 84 24 60 02 00 00                 mov     [rsp+260h], rax
.text:0000000143BAA1C4 48 8D 84 24 60 06 00 00                 lea     rax, [rsp+660h] ; Load Effective Address
.text:0000000143BAA1CC 48 89 44 24 30                          mov     [rsp+30h], rax
.text:0000000143BAA1D1 48 8B 84 24 60 02 00 00                 mov     rax, [rsp+260h]
.text:0000000143BAA1D9 48 89 44 24 38                          mov     [rsp+38h], rax
.text:0000000143BAA1DE 48 8D 84 24 A0 06 00 00                 lea     rax, [rsp+6A0h] ; Load Effective Address
.text:0000000143BAA1E6 48 89 84 24 E8 00 00 00                 mov     [rsp+0E8h], rax
.text:0000000143BAA1EE B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA1F3 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA1F7 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA1FC 48 6B C9 00                             imul    rcx, 0          ; Signed Multiply
.text:0000000143BAA200 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA205 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA20A 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA20E 0F C6 04 07 00                          shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.text:0000000143BAA213 0F 29 84 24 B0 02 00 00                 movaps  xmmword ptr [rsp+2B0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA21B B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA220 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA224 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA229 0F 28 84 24 B0 02 00 00                 movaps  xmm0, xmmword ptr [rsp+2B0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA231 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA235 0F 29 84 24 C0 02 00 00                 movaps  xmmword ptr [rsp+2C0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA23D 0F 28 84 24 C0 02 00 00                 movaps  xmm0, xmmword ptr [rsp+2C0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA245 0F 29 84 24 D0 02 00 00                 movaps  xmmword ptr [rsp+2D0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA24D 0F 28 84 24 D0 02 00 00                 movaps  xmm0, xmmword ptr [rsp+2D0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA255 0F 29 84 24 E0 02 00 00                 movaps  xmmword ptr [rsp+2E0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA25D 0F 28 84 24 E0 02 00 00                 movaps  xmm0, xmmword ptr [rsp+2E0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA265 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA26A B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA26F 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA273 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA278 48 6B C9 00                             imul    rcx, 0          ; Signed Multiply
.text:0000000143BAA27C 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA281 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA286 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA28A 0F C6 04 07 55                          shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.text:0000000143BAA28F 0F 29 84 24 F0 02 00 00                 movaps  xmmword ptr [rsp+2F0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA297 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA29C 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA2A0 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA2A5 0F 28 84 24 F0 02 00 00                 movaps  xmm0, xmmword ptr [rsp+2F0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA2AD 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA2B1 0F 29 84 24 00 03 00 00                 movaps  xmmword ptr [rsp+300h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA2B9 0F 28 84 24 00 03 00 00                 movaps  xmm0, xmmword ptr [rsp+300h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA2C1 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA2C6 0F 29 84 24 10 03 00 00                 movaps  xmmword ptr [rsp+310h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA2CE 0F 28 84 24 10 03 00 00                 movaps  xmm0, xmmword ptr [rsp+310h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA2D6 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA2DB B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA2E0 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA2E4 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA2E9 48 6B C9 00                             imul    rcx, 0          ; Signed Multiply
.text:0000000143BAA2ED 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA2F2 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA2F7 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA2FB 0F C6 04 07 AA                          shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.text:0000000143BAA300 0F 29 84 24 20 03 00 00                 movaps  xmmword ptr [rsp+320h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA308 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA30D 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA311 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA316 0F 28 84 24 20 03 00 00                 movaps  xmm0, xmmword ptr [rsp+320h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA31E 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA322 0F 29 84 24 30 03 00 00                 movaps  xmmword ptr [rsp+330h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA32A 0F 28 84 24 30 03 00 00                 movaps  xmm0, xmmword ptr [rsp+330h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA332 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA337 0F 29 84 24 40 03 00 00                 movaps  xmmword ptr [rsp+340h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA33F 0F 28 84 24 40 03 00 00                 movaps  xmm0, xmmword ptr [rsp+340h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA347 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA34C B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA351 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA355 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA35A 48 6B C9 00                             imul    rcx, 0          ; Signed Multiply
.text:0000000143BAA35E 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA363 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA368 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA36C 0F C6 04 07 FF                          shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.text:0000000143BAA371 0F 29 84 24 50 03 00 00                 movaps  xmmword ptr [rsp+350h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA379 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA37E 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA382 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA387 0F 28 84 24 50 03 00 00                 movaps  xmm0, xmmword ptr [rsp+350h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA38F 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA393 0F 29 84 24 60 03 00 00                 movaps  xmmword ptr [rsp+360h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA39B 0F 28 84 24 60 03 00 00                 movaps  xmm0, xmmword ptr [rsp+360h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA3A3 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA3A8 0F 29 84 24 70 03 00 00                 movaps  xmmword ptr [rsp+370h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA3B0 0F 28 84 24 70 03 00 00                 movaps  xmm0, xmmword ptr [rsp+370h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA3B8 0F 29 84 24 F0 05 00 00                 movaps  xmmword ptr [rsp+5F0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA3C0 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA3C5 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA3C9 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA3CE 48 6B C9 01                             imul    rcx, 1          ; Signed Multiply
.text:0000000143BAA3D2 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA3D7 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA3DC 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA3E0 0F C6 04 07 00                          shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.text:0000000143BAA3E5 0F 29 84 24 80 03 00 00                 movaps  xmmword ptr [rsp+380h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA3ED B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA3F2 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA3F6 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA3FB 0F 28 84 24 80 03 00 00                 movaps  xmm0, xmmword ptr [rsp+380h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA403 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA407 0F 29 84 24 90 03 00 00                 movaps  xmmword ptr [rsp+390h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA40F 0F 28 84 24 90 03 00 00                 movaps  xmm0, xmmword ptr [rsp+390h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA417 0F 29 84 24 A0 03 00 00                 movaps  xmmword ptr [rsp+3A0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA41F 0F 28 84 24 A0 03 00 00                 movaps  xmm0, xmmword ptr [rsp+3A0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA427 0F 29 84 24 B0 03 00 00                 movaps  xmmword ptr [rsp+3B0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA42F 0F 28 84 24 B0 03 00 00                 movaps  xmm0, xmmword ptr [rsp+3B0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA437 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA43C B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA441 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA445 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA44A 48 6B C9 01                             imul    rcx, 1          ; Signed Multiply
.text:0000000143BAA44E 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA453 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA458 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA45C 0F C6 04 07 55                          shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.text:0000000143BAA461 0F 29 84 24 C0 03 00 00                 movaps  xmmword ptr [rsp+3C0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA469 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA46E 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA472 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA477 0F 28 84 24 C0 03 00 00                 movaps  xmm0, xmmword ptr [rsp+3C0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA47F 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA483 0F 29 84 24 D0 03 00 00                 movaps  xmmword ptr [rsp+3D0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA48B 0F 28 84 24 D0 03 00 00                 movaps  xmm0, xmmword ptr [rsp+3D0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA493 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA498 0F 29 84 24 E0 03 00 00                 movaps  xmmword ptr [rsp+3E0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA4A0 0F 28 84 24 E0 03 00 00                 movaps  xmm0, xmmword ptr [rsp+3E0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA4A8 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA4AD B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA4B2 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA4B6 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA4BB 48 6B C9 01                             imul    rcx, 1          ; Signed Multiply
.text:0000000143BAA4BF 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA4C4 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA4C9 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA4CD 0F C6 04 07 AA                          shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.text:0000000143BAA4D2 0F 29 84 24 F0 03 00 00                 movaps  xmmword ptr [rsp+3F0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA4DA B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA4DF 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA4E3 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA4E8 0F 28 84 24 F0 03 00 00                 movaps  xmm0, xmmword ptr [rsp+3F0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA4F0 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA4F4 0F 29 84 24 00 04 00 00                 movaps  xmmword ptr [rsp+400h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA4FC 0F 28 84 24 00 04 00 00                 movaps  xmm0, xmmword ptr [rsp+400h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA504 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA509 0F 29 84 24 10 04 00 00                 movaps  xmmword ptr [rsp+410h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA511 0F 28 84 24 10 04 00 00                 movaps  xmm0, xmmword ptr [rsp+410h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA519 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA51E B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA523 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA527 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA52C 48 6B C9 01                             imul    rcx, 1          ; Signed Multiply
.text:0000000143BAA530 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA535 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA53A 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA53E 0F C6 04 07 FF                          shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.text:0000000143BAA543 0F 29 84 24 20 04 00 00                 movaps  xmmword ptr [rsp+420h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA54B B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA550 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA554 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA559 0F 28 84 24 20 04 00 00                 movaps  xmm0, xmmword ptr [rsp+420h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA561 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA565 0F 29 84 24 30 04 00 00                 movaps  xmmword ptr [rsp+430h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA56D 0F 28 84 24 30 04 00 00                 movaps  xmm0, xmmword ptr [rsp+430h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA575 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA57A 0F 29 84 24 40 04 00 00                 movaps  xmmword ptr [rsp+440h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA582 0F 28 84 24 40 04 00 00                 movaps  xmm0, xmmword ptr [rsp+440h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA58A 0F 29 84 24 00 06 00 00                 movaps  xmmword ptr [rsp+600h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA592 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA597 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA59B B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA5A0 48 6B C9 02                             imul    rcx, 2          ; Signed Multiply
.text:0000000143BAA5A4 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA5A9 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA5AE 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA5B2 0F C6 04 07 00                          shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.text:0000000143BAA5B7 0F 29 84 24 50 04 00 00                 movaps  xmmword ptr [rsp+450h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA5BF B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA5C4 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA5C8 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA5CD 0F 28 84 24 50 04 00 00                 movaps  xmm0, xmmword ptr [rsp+450h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA5D5 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA5D9 0F 29 84 24 60 04 00 00                 movaps  xmmword ptr [rsp+460h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA5E1 0F 28 84 24 60 04 00 00                 movaps  xmm0, xmmword ptr [rsp+460h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA5E9 0F 29 84 24 70 04 00 00                 movaps  xmmword ptr [rsp+470h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA5F1 0F 28 84 24 70 04 00 00                 movaps  xmm0, xmmword ptr [rsp+470h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA5F9 0F 29 84 24 80 04 00 00                 movaps  xmmword ptr [rsp+480h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA601 0F 28 84 24 80 04 00 00                 movaps  xmm0, xmmword ptr [rsp+480h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA609 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA60E B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA613 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA617 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA61C 48 6B C9 02                             imul    rcx, 2          ; Signed Multiply
.text:0000000143BAA620 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA625 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA62A 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA62E 0F C6 04 07 55                          shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.text:0000000143BAA633 0F 29 84 24 90 04 00 00                 movaps  xmmword ptr [rsp+490h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA63B B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA640 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA644 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA649 0F 28 84 24 90 04 00 00                 movaps  xmm0, xmmword ptr [rsp+490h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA651 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA655 0F 29 84 24 A0 04 00 00                 movaps  xmmword ptr [rsp+4A0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA65D 0F 28 84 24 A0 04 00 00                 movaps  xmm0, xmmword ptr [rsp+4A0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA665 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA66A 0F 29 84 24 B0 04 00 00                 movaps  xmmword ptr [rsp+4B0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA672 0F 28 84 24 B0 04 00 00                 movaps  xmm0, xmmword ptr [rsp+4B0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA67A 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA67F B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA684 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA688 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA68D 48 6B C9 02                             imul    rcx, 2          ; Signed Multiply
.text:0000000143BAA691 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA696 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA69B 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA69F 0F C6 04 07 AA                          shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.text:0000000143BAA6A4 0F 29 84 24 C0 04 00 00                 movaps  xmmword ptr [rsp+4C0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6AC B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA6B1 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA6B5 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA6BA 0F 28 84 24 C0 04 00 00                 movaps  xmm0, xmmword ptr [rsp+4C0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6C2 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA6C6 0F 29 84 24 D0 04 00 00                 movaps  xmmword ptr [rsp+4D0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6CE 0F 28 84 24 D0 04 00 00                 movaps  xmm0, xmmword ptr [rsp+4D0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6D6 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA6DB 0F 29 84 24 E0 04 00 00                 movaps  xmmword ptr [rsp+4E0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6E3 0F 28 84 24 E0 04 00 00                 movaps  xmm0, xmmword ptr [rsp+4E0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6EB 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA6F0 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA6F5 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA6F9 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA6FE 48 6B C9 02                             imul    rcx, 2          ; Signed Multiply
.text:0000000143BAA702 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA707 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA70C 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA710 0F C6 04 07 FF                          shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.text:0000000143BAA715 0F 29 84 24 F0 04 00 00                 movaps  xmmword ptr [rsp+4F0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA71D B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA722 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA726 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA72B 0F 28 84 24 F0 04 00 00                 movaps  xmm0, xmmword ptr [rsp+4F0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA733 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA737 0F 29 84 24 00 05 00 00                 movaps  xmmword ptr [rsp+500h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA73F 0F 28 84 24 00 05 00 00                 movaps  xmm0, xmmword ptr [rsp+500h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA747 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA74C 0F 29 84 24 10 05 00 00                 movaps  xmmword ptr [rsp+510h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA754 0F 28 84 24 10 05 00 00                 movaps  xmm0, xmmword ptr [rsp+510h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA75C 0F 29 84 24 10 06 00 00                 movaps  xmmword ptr [rsp+610h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA764 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA769 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA76D B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA772 48 6B C9 03                             imul    rcx, 3          ; Signed Multiply
.text:0000000143BAA776 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA77B 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA780 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA784 0F C6 04 07 00                          shufps  xmm0, xmmword ptr [rdi+rax], 0 ; Shuffle Single-FP
.text:0000000143BAA789 0F 29 84 24 20 05 00 00                 movaps  xmmword ptr [rsp+520h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA791 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA796 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA79A 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA79F 0F 28 84 24 20 05 00 00                 movaps  xmm0, xmmword ptr [rsp+520h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7A7 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA7AB 0F 29 84 24 30 05 00 00                 movaps  xmmword ptr [rsp+530h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7B3 0F 28 84 24 30 05 00 00                 movaps  xmm0, xmmword ptr [rsp+530h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7BB 0F 29 84 24 40 05 00 00                 movaps  xmmword ptr [rsp+540h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7C3 0F 28 84 24 40 05 00 00                 movaps  xmm0, xmmword ptr [rsp+540h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7CB 0F 29 84 24 50 05 00 00                 movaps  xmmword ptr [rsp+550h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7D3 0F 28 84 24 50 05 00 00                 movaps  xmm0, xmmword ptr [rsp+550h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7DB 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA7E0 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA7E5 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA7E9 B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA7EE 48 6B C9 03                             imul    rcx, 3          ; Signed Multiply
.text:0000000143BAA7F2 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA7F7 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA7FC 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA800 0F C6 04 07 55                          shufps  xmm0, xmmword ptr [rdi+rax], 55h ; 'U' ; Shuffle Single-FP
.text:0000000143BAA805 0F 29 84 24 60 05 00 00                 movaps  xmmword ptr [rsp+560h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA80D B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA812 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA816 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA81B 0F 28 84 24 60 05 00 00                 movaps  xmm0, xmmword ptr [rsp+560h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA823 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA827 0F 29 84 24 70 05 00 00                 movaps  xmmword ptr [rsp+570h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA82F 0F 28 84 24 70 05 00 00                 movaps  xmm0, xmmword ptr [rsp+570h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA837 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA83C 0F 29 84 24 80 05 00 00                 movaps  xmmword ptr [rsp+580h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA844 0F 28 84 24 80 05 00 00                 movaps  xmm0, xmmword ptr [rsp+580h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA84C 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA851 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA856 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA85A B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA85F 48 6B C9 03                             imul    rcx, 3          ; Signed Multiply
.text:0000000143BAA863 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA868 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA86D 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA871 0F C6 04 07 AA                          shufps  xmm0, xmmword ptr [rdi+rax], 0AAh ; Shuffle Single-FP
.text:0000000143BAA876 0F 29 84 24 90 05 00 00                 movaps  xmmword ptr [rsp+590h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA87E B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA883 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA887 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA88C 0F 28 84 24 90 05 00 00                 movaps  xmm0, xmmword ptr [rsp+590h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA894 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA898 0F 29 84 24 A0 05 00 00                 movaps  xmmword ptr [rsp+5A0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA8A0 0F 28 84 24 A0 05 00 00                 movaps  xmm0, xmmword ptr [rsp+5A0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA8A8 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA8AD 0F 29 84 24 B0 05 00 00                 movaps  xmmword ptr [rsp+5B0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA8B5 0F 28 84 24 B0 05 00 00                 movaps  xmm0, xmmword ptr [rsp+5B0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA8BD 0F 29 44 24 50                          movaps  xmmword ptr [rsp+50h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA8C2 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA8C7 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA8CB B9 10 00 00 00                          mov     ecx, 10h
.text:0000000143BAA8D0 48 6B C9 03                             imul    rcx, 3          ; Signed Multiply
.text:0000000143BAA8D4 48 8B 54 24 30                          mov     rdx, [rsp+30h]
.text:0000000143BAA8D9 48 8B 7C 24 30                          mov     rdi, [rsp+30h]
.text:0000000143BAA8DE 0F 10 04 0A                             movups  xmm0, xmmword ptr [rdx+rcx] ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA8E2 0F C6 04 07 FF                          shufps  xmm0, xmmword ptr [rdi+rax], 0FFh ; Shuffle Single-FP
.text:0000000143BAA8E7 0F 29 84 24 C0 05 00 00                 movaps  xmmword ptr [rsp+5C0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA8EF B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA8F4 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA8F8 48 8B 4C 24 38                          mov     rcx, [rsp+38h]
.text:0000000143BAA8FD 0F 28 84 24 C0 05 00 00                 movaps  xmm0, xmmword ptr [rsp+5C0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA905 0F 59 04 01                             mulps   xmm0, xmmword ptr [rcx+rax] ; Packed Single-FP Multiply
.text:0000000143BAA909 0F 29 84 24 D0 05 00 00                 movaps  xmmword ptr [rsp+5D0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA911 0F 28 84 24 D0 05 00 00                 movaps  xmm0, xmmword ptr [rsp+5D0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA919 0F 58 44 24 50                          addps   xmm0, xmmword ptr [rsp+50h] ; Packed Single-FP Add
.text:0000000143BAA91E 0F 29 84 24 E0 05 00 00                 movaps  xmmword ptr [rsp+5E0h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA926 0F 28 84 24 E0 05 00 00                 movaps  xmm0, xmmword ptr [rsp+5E0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA92E 0F 29 84 24 20 06 00 00                 movaps  xmmword ptr [rsp+620h], xmm0 ; Move Aligned Four Packed Single-FP
.text:0000000143BAA936 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA93B 48 6B C0 00                             imul    rax, 0          ; Signed Multiply
.text:0000000143BAA93F 48 8B 8C 24 E8 00 00 00                 mov     rcx, [rsp+0E8h]
.text:0000000143BAA947 0F 28 84 24 F0 05 00 00                 movaps  xmm0, xmmword ptr [rsp+5F0h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA94F 0F 11 04 01                             movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA953 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA958 48 6B C0 01                             imul    rax, 1          ; Signed Multiply
.text:0000000143BAA95C 48 8B 8C 24 E8 00 00 00                 mov     rcx, [rsp+0E8h]
.text:0000000143BAA964 0F 28 84 24 00 06 00 00                 movaps  xmm0, xmmword ptr [rsp+600h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA96C 0F 11 04 01                             movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA970 B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA975 48 6B C0 02                             imul    rax, 2          ; Signed Multiply
.text:0000000143BAA979 48 8B 8C 24 E8 00 00 00                 mov     rcx, [rsp+0E8h]
.text:0000000143BAA981 0F 28 84 24 10 06 00 00                 movaps  xmm0, xmmword ptr [rsp+610h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA989 0F 11 04 01                             movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA98D B8 10 00 00 00                          mov     eax, 10h
.text:0000000143BAA992 48 6B C0 03                             imul    rax, 3          ; Signed Multiply
.text:0000000143BAA996 48 8B 8C 24 E8 00 00 00                 mov     rcx, [rsp+0E8h]
.text:0000000143BAA99E 0F 28 84 24 20 06 00 00                 movaps  xmm0, xmmword ptr [rsp+620h] ; Move Aligned Four Packed Single-FP
.text:0000000143BAA9A6 0F 11 04 01                             movups  xmmword ptr [rcx+rax], xmm0 ; Move Unaligned Four Packed Single-FP
.text:0000000143BAA9AA 48 8D 84 24 E0 06 00 00                 lea     rax, [rsp+6E0h] ; Load Effective Address
.text:0000000143BAA9B2 48 8D 8C 24 A0 06 00 00                 lea     rcx, [rsp+6A0h] ; Load Effective Address
.text:0000000143BAA9BA 48 8B F8                                mov     rdi, rax
.text:0000000143BAA9BD 48 8B F1                                mov     rsi, rcx
.text:0000000143BAA9C0 B9 40 00 00 00                          mov     ecx, 40h ; '@'
.text:0000000143BAA9C5 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BAA9C7 48 8D 84 24 E0 06 00 00                 lea     rax, [rsp+6E0h] ; Load Effective Address
.text:0000000143BAA9CF 48 89 84 24 68 02 00 00                 mov     [rsp+268h], rax
.text:0000000143BAA9D7 48 8B 84 24 68 02 00 00                 mov     rax, [rsp+268h]
.text:0000000143BAA9DF 48 8D 94 24 48 06 00 00                 lea     rdx, [rsp+648h] ; Load Effective Address
.text:0000000143BAA9E7 48 8B C8                                mov     rcx, rax
.text:0000000143BAA9EA E8 61 B8 C8 08                          call    sub_14C836250   ; Call Procedure
.text:0000000143BAA9EF 48 8D 8C 24 98 00 00 00                 lea     rcx, [rsp+98h]  ; Load Effective Address
.text:0000000143BAA9F7 48 8B F9                                mov     rdi, rcx
.text:0000000143BAA9FA 48 8B F0                                mov     rsi, rax
.text:0000000143BAA9FD B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BAAA02 F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BAAA04
.text:0000000143BAAA04                         loc_143BAAA04:                          ; CODE XREF: sub_143BA95D0+BD↑j
.text:0000000143BAAA04                                                                 ; sub_143BA95D0+D0↑j ...
.text:0000000143BAAA04 48 8D 84 24 98 00 00 00                 lea     rax, [rsp+98h]  ; Load Effective Address
.text:0000000143BAAA0C 48 8B BC 24 88 07 00 00                 mov     rdi, [rsp+788h]
.text:0000000143BAAA14 48 8B F0                                mov     rsi, rax
.text:0000000143BAAA17 B9 0C 00 00 00                          mov     ecx, 0Ch
.text:0000000143BAAA1C F3 A4                                   rep movsb               ; Move Byte(s) from String to String
.text:0000000143BAAA1E 48 8B 84 24 88 07 00 00                 mov     rax, [rsp+788h]
.text:0000000143BAAA26 48 81 C4 68 07 00 00                    add     rsp, 768h       ; Add
.text:0000000143BAAA2D 5F                                      pop     rdi
.text:0000000143BAAA2E 5E                                      pop     rsi
.text:0000000143BAAA2F C3                                      retn                    ; Return Near from Procedure
.text:0000000143BAAA2F                         sub_143BA95D0   endp
.text:0000000143BAAA2F
.text:0000000143BAAA30
.text:0000000143BAAA30                         ; =============== S U B R O U T I N E =======================================
.text:0000000143BAAA30
.text:0000000143BAAA30
.text:0000000143BAAA30                         sub_143BAAA30   proc near               ; CODE XREF: sub_143BA4650+14↑p
.text:0000000143BAAA30                                                                 ; sub_1446CD930+14A↓p
.text:0000000143BAAA30 F3 0F 10 81 E0 F2 02 00                 movss   xmm0, dword ptr [rcx+2F2E0h] ; Move Scalar Single-FP
.text:0000000143BAAA38 C3                                      retn                    ; Return Near from Procedure
.text:0000000143BAAA38                         sub_143BAAA30   endp
.text:0000000143BAAA38
.text:0000000143BAAA38                         ; ---------------------------------------------------------------------------
.text:0000000143BAAA39 CC CC CC CC CC CC CC                    align 20h
.text:0000000143BAAA40
```
