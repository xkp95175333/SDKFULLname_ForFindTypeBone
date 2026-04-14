---
เก็บ ระยุ  size ต่างๆ ที่ ต้อง อ่าน และ ไว้ดูระบะแต่ละ จุด 
---
Address	Function	Instruction
.text:000000014D9038E5	sub_14D9038C0	call    sub_14E2CB510

เตรีอมด้าน imm Mem
Aob ได้ .text:000000014D9038E5 E8 26 7C 9C 00   call sub_14E2CB510  
0x14D9038E5 -baseprcess = offset 0xD9038E5 
น่าจะเริ่มแค่ .text:000000014D9038C0                         sub_14D9038C0   proc near
 0xD9038E5- 0xD9038C0  = ลบAddress ไป 0x25
จบฟังชั้  text:000000014D903949 C3   retn  

0xD903949 - 0xD9038C0  อ่าน0x89 พอ 




```asm

.text:000000014D9038C0                         ; =============== S U B R O U T I N E =======================================
.text:000000014D9038C0
.text:000000014D9038C0
.text:000000014D9038C0                         sub_14D9038C0   proc near
.text:000000014D9038C0
.text:000000014D9038C0                         var_48          = byte ptr -48h
.text:000000014D9038C0                         var_18          = qword ptr -18h
.text:000000014D9038C0
.text:000000014D9038C0 40 53                                   push    rbx
.text:000000014D9038C2 48 83 EC 60                             sub     rsp, 60h
.text:000000014D9038C6 48 8B 05 73 1A 4C 09                    mov     rax, cs:off_156DC5340
.text:000000014D9038CD 48 33 C4                                xor     rax, rsp
.text:000000014D9038D0 48 89 44 24 50                          mov     [rsp+50h], rax
.text:000000014D9038D5 48 8B D9                                mov     rbx, rcx
.text:000000014D9038D8 E8 83 5E 98 00                          call    sub_14E289760
.text:000000014D9038DD 48 8D 54 24 20                          lea     rdx, [rsp+20h]
.text:000000014D9038E2 48 8B CB                                mov     rcx, rbx
.text:000000014D9038E5 E8 26 7C 9C 00                          call    sub_14E2CB510
.text:000000014D9038EA 48 8B CB                                mov     rcx, rbx
.text:000000014D9038ED 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.text:000000014D9038F0 0F 11 83 D0 05 00 00                    movups  xmmword ptr [rbx+5D0h], xmm0
.text:000000014D9038F7 0F 10 48 10                             movups  xmm1, xmmword ptr [rax+10h]
.text:000000014D9038FB 0F 11 8B E0 05 00 00                    movups  xmmword ptr [rbx+5E0h], xmm1
.text:000000014D903902 0F 10 40 20                             movups  xmm0, xmmword ptr [rax+20h]
.text:000000014D903906 0F 11 83 F0 05 00 00                    movups  xmmword ptr [rbx+5F0h], xmm0
.text:000000014D90390D E8 4E 85 20 F3                          call    sub_140B0BE60
.text:000000014D903912 0F 10 40 20                             movups  xmm0, xmmword ptr [rax+20h]
.text:000000014D903916 0F 28 C8                                movaps  xmm1, xmm0
.text:000000014D903919 0F 28 D0                                movaps  xmm2, xmm0
.text:000000014D90391C 0F C6 D0 AA                             shufps  xmm2, xmm0, 0AAh
.text:000000014D903920 0F C6 C8 55                             shufps  xmm1, xmm0, 55h ; 'U'
.text:000000014D903924 0F 14 C1                                unpcklps xmm0, xmm1
.text:000000014D903927 F2 0F 11 83 00 06 00 00                 movsd   qword ptr [rbx+600h], xmm0
.text:000000014D90392F F3 0F 11 93 08 06 00 00                 movss   dword ptr [rbx+608h], xmm2
.text:000000014D903937 48 8B 4C 24 50                          mov     rcx, [rsp+50h]
.text:000000014D90393C 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014D90393F E8 1C C5 95 02                          call    __security_check_cookie
.text:000000014D903944 48 83 C4 60                             add     rsp, 60h
.text:000000014D903948 5B                                      pop     rbx
.text:000000014D903949 C3                                      retn
.text:000000014D903949                         sub_14D9038C0   endp
.text:000000014D903949

```
---
debug ดู 
---
```c


__int64 __fastcall sub_14D9038C0(__int64 a1)
{
  _OWORD *v2; // rax
  __int64 result; // rax
  __m128 v4; // xmm0
  char v5[48]; // [rsp+20h] [rbp-48h] BYREF

  sub_14E289760();
  v2 = (_OWORD *)sub_14E2CB510(a1, v5);
  *(_OWORD *)(a1 + 0x5D0) = *v2;
  *(_OWORD *)(a1 + 0x5E0) = v2[1];
  *(_OWORD *)(a1 + 0x5F0) = v2[2];
  result = sub_140B0BE60(a1);
  v4 = *(__m128 *)(result + 0x20);
  *(_QWORD *)(a1 + 0x600) = _mm_unpacklo_ps(v4, _mm_shuffle_ps(v4, v4, 0x55)).m128_u64[0];
  *(_DWORD *)(a1 + 0x608) = _mm_shuffle_ps(v4, v4, 0xAA).m128_u32[0];
  return result;
}
```
 

--- 
อันนี้เดาว่า ตรง mov     rax, cs:off_156DC5340  น่า จะ มี อะไร ตรวจสอบช่วย
---
```asm
.data:0000000156DC5340 8C 40 4C 55 01 00 00 00 off_156DC5340   dq offset unk_1554C408C ; DATA XREF: sub_1400CF1A0+15↑r
.data:0000000156DC5340                                                                 ; sub_1400CF2B0+12↑r ...


//-- ตรวจรอลข้าง



.data:0000000156DC5307 00                                      db    0
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
.data:0000000156DC5422 00                                      db    0
```


--- 
ส่วนการทำงาน ที่ 2 คือboneกับ C2w   ทำงานร่วมกัน  call    sub_14E2CB510  

---
เดวค่อบบวกSize ขุดสำหรับ ของ อันนี้ พวก cs:xmmword_ ต่างๆ 
```asm
.text:000000014E2CB508 CC CC CC CC CC CC CC CC                 align 10h
.text:000000014E2CB510
.text:000000014E2CB510                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CB510
.text:000000014E2CB510
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
.text:000000014E2CB51B 48 83 EC 60                             sub     rsp, 60h
.text:000000014E2CB51F F2 0F 10 81 84 01 00 00                 movsd   xmm0, qword ptr [rcx+184h]
.text:000000014E2CB527 48 8B D9                                mov     rbx, rcx
.text:000000014E2CB52A 8B B1 8C 01 00 00                       mov     esi, [rcx+18Ch]
.text:000000014E2CB530 48 8B FA                                mov     rdi, rdx
.text:000000014E2CB533 F2 0F 11 44 24 20                       movsd   qword ptr [rsp+20h], xmm0
.text:000000014E2CB539 F2 0F 10 81 78 01 00 00                 movsd   xmm0, qword ptr [rcx+178h]
.text:000000014E2CB541 48 81 C1 00 02 00 00                    add     rcx, 200h
.text:000000014E2CB548 0F 29 74 24 50                          movaps  xmmword ptr [rsp+50h], xmm6
.text:000000014E2CB54D F2 0F 11 44 24 2C                       movsd   qword ptr [rsp+2Ch], xmm0
.text:000000014E2CB553 0F 2E 01                                ucomiss xmm0, dword ptr [rcx]
.text:000000014E2CB556 75 1E                                   jnz     short loc_14E2CB576
.text:000000014E2CB558 F3 0F 10 44 24 30                       movss   xmm0, dword ptr [rsp+30h]
.text:000000014E2CB55E 0F 2E 41 04                             ucomiss xmm0, dword ptr [rcx+4]
.text:000000014E2CB562 75 12                                   jnz     short loc_14E2CB576
.text:000000014E2CB564 F3 0F 10 83 80 01 00 00                 movss   xmm0, dword ptr [rbx+180h]
.text:000000014E2CB56C 0F 2E 41 08                             ucomiss xmm0, dword ptr [rcx+8]
.text:000000014E2CB570 0F 84 C5 00 00 00                       jz      loc_14E2CB63B
.text:000000014E2CB576
.text:000000014E2CB576                         loc_14E2CB576:                          ; CODE XREF: sub_14E2CB510+46↑j
.text:000000014E2CB576                                                                 ; sub_14E2CB510+52↑j
.text:000000014E2CB576 F2 0F 10 9B 78 01 00 00                 movsd   xmm3, qword ptr [rbx+178h]
.text:000000014E2CB57E 48 8D 54 24 40                          lea     rdx, [rsp+40h]
.text:000000014E2CB583 0F 28 35 16 4B 26 09                    movaps  xmm6, cs:xmmword_1575300A0
.text:000000014E2CB58A 0F 28 CB                                movaps  xmm1, xmm3
.text:000000014E2CB58D F3 0F 10 83 80 01 00 00                 movss   xmm0, dword ptr [rbx+180h]
.text:000000014E2CB595 0F 28 EB                                movaps  xmm5, xmm3
.text:000000014E2CB598 0F 28 25 11 4B 26 09                    movaps  xmm4, cs:xmmword_1575300B0
.text:000000014E2CB59F 0F C6 C9 55                             shufps  xmm1, xmm1, 55h ; 'U'
.text:000000014E2CB5A3 0F 14 E9                                unpcklps xmm5, xmm1
.text:000000014E2CB5A6 0F 16 E8                                movlhps xmm5, xmm0
.text:000000014E2CB5A9 F2 0F 11 5C 24 2C                       movsd   qword ptr [rsp+2Ch], xmm3
.text:000000014E2CB5AF 0F 28 D5                                movaps  xmm2, xmm5
.text:000000014E2CB5B2 0F 5E D6                                divps   xmm2, xmm6
.text:000000014E2CB5B5 F3 0F 5B C2                             cvttps2dq xmm0, xmm2
.text:000000014E2CB5B9 0F 28 CA                                movaps  xmm1, xmm2
.text:000000014E2CB5BC 0F 54 0D 1D 48 26 09                    andps   xmm1, cs:xmmword_15752FDE0
.text:000000014E2CB5C3 0F 5B D8                                cvtdq2ps xmm3, xmm0
.text:000000014E2CB5C6 0F C2 E1 02                             cmpleps xmm4, xmm1
.text:000000014E2CB5CA 0F 28 C3                                movaps  xmm0, xmm3
.text:000000014E2CB5CD 0F 28 CE                                movaps  xmm1, xmm6
.text:000000014E2CB5D0 0F 57 C2                                xorps   xmm0, xmm2
.text:000000014E2CB5D3 0F 54 E0                                andps   xmm4, xmm0
.text:000000014E2CB5D6 0F 57 C0                                xorps   xmm0, xmm0
.text:000000014E2CB5D9 0F 57 E3                                xorps   xmm4, xmm3
.text:000000014E2CB5DC 0F 59 E6                                mulps   xmm4, xmm6
.text:000000014E2CB5DF 0F 5C EC                                subps   xmm5, xmm4
.text:000000014E2CB5E2 0F C2 C5 02                             cmpleps xmm0, xmm5
.text:000000014E2CB5E6 0F 58 CD                                addps   xmm1, xmm5
.text:000000014E2CB5E9 0F 28 D1                                movaps  xmm2, xmm1
.text:000000014E2CB5EC 0F 57 D5                                xorps   xmm2, xmm5
.text:000000014E2CB5EF 0F 54 D0                                andps   xmm2, xmm0
.text:000000014E2CB5F2 0F 28 05 97 4A 26 09                    movaps  xmm0, cs:xmmword_157530090
.text:000000014E2CB5F9 0F 57 D1                                xorps   xmm2, xmm1
.text:000000014E2CB5FC 0F C2 C2 01                             cmpltps xmm0, xmm2
.text:000000014E2CB600 0F 28 DA                                movaps  xmm3, xmm2
.text:000000014E2CB603 0F 5C DE                                subps   xmm3, xmm6
.text:000000014E2CB606 0F 57 DA                                xorps   xmm3, xmm2
.text:000000014E2CB609 0F 54 D8                                andps   xmm3, xmm0
.text:000000014E2CB60C 0F 57 DA                                xorps   xmm3, xmm2
.text:000000014E2CB60F 0F 28 CB                                movaps  xmm1, xmm3
.text:000000014E2CB612 0F 28 C3                                movaps  xmm0, xmm3
.text:000000014E2CB615 0F C6 CB 55                             shufps  xmm1, xmm3, 55h ; 'U'
.text:000000014E2CB619 0F 28 D3                                movaps  xmm2, xmm3
.text:000000014E2CB61C 0F 14 C1                                unpcklps xmm0, xmm1
.text:000000014E2CB61F 0F C6 D3 AA                             shufps  xmm2, xmm3, 0AAh
.text:000000014E2CB623 F2 0F 11 01                             movsd   qword ptr [rcx], xmm0
.text:000000014E2CB627 F3 0F 11 51 08                          movss   dword ptr [rcx+8], xmm2
.text:000000014E2CB62C E8 9F 81 56 FE                          call    sub_14C8337D0
.text:000000014E2CB631 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.text:000000014E2CB634 0F 11 83 F0 01 00 00                    movups  xmmword ptr [rbx+1F0h], xmm0
.text:000000014E2CB63B
.text:000000014E2CB63B                         loc_14E2CB63B:                          ; CODE XREF: sub_14E2CB510+60↑j
.text:000000014E2CB63B 0F 10 B3 F0 01 00 00                    movups  xmm6, xmmword ptr [rbx+1F0h]
.text:000000014E2CB642 48 8D 54 24 2C                          lea     rdx, [rsp+2Ch]
.text:000000014E2CB647 48 8B CB                                mov     rcx, rbx
.text:000000014E2CB64A E8 51 5F BF F2                          call    sub_140EC15A0
.text:000000014E2CB64F 48 8B 5C 24 70                          mov     rbx, [rsp+70h]
.text:000000014E2CB654 66 0F 6E C6                             movd    xmm0, esi
.text:000000014E2CB658 48 8B 74 24 78                          mov     rsi, [rsp+78h]
.text:000000014E2CB65D F3 0F 10 50 08                          movss   xmm2, dword ptr [rax+8]
.text:000000014E2CB662 F2 0F 10 18                             movsd   xmm3, qword ptr [rax]
.text:000000014E2CB666 48 8B C7                                mov     rax, rdi
.text:000000014E2CB669 0F 16 DA                                movlhps xmm3, xmm2
.text:000000014E2CB66C 0F 11 5F 10                             movups  xmmword ptr [rdi+10h], xmm3
.text:000000014E2CB670 F2 0F 10 5C 24 20                       movsd   xmm3, qword ptr [rsp+20h]
.text:000000014E2CB676 0F 16 D8                                movlhps xmm3, xmm0
.text:000000014E2CB679 0F 11 37                                movups  xmmword ptr [rdi], xmm6
.text:000000014E2CB67C 0F 28 74 24 50                          movaps  xmm6, xmmword ptr [rsp+50h]
.text:000000014E2CB681 0F 11 5F 20                             movups  xmmword ptr [rdi+20h], xmm3
.text:000000014E2CB685 48 83 C4 60                             add     rsp, 60h
.text:000000014E2CB689 5F                                      pop     rdi
.text:000000014E2CB68A C3                                      retn

```
 



--- 
ตรวจ ตรง .text:000000014E2CB5BC 0F 54 0D 1D 48 26 09                    andps   xmm1, cs:xmmword_15752FDE0  ละ กัน มัน ค่า น้อย สุกจะได้ ไม่ - กลับเยอะ  
ได้ ตรง  


---
```asm


data:000000015752FDE0 ?? ?? ?? ?? ?? ?? ?? ?? xmmword_15752FDE0 xmmword ?             ; DATA XREF: sub_14E2B1C90+E7↑r
.data:000000015752FDE0 ?? ?? ?? ?? ?? ?? ?? ??                                         ; sub_14E2B8300+CF↑r ...
// ตรวจสอบจุดที่ค่อย เริ่ม อ่าน

.data:000000015752FC68 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FC68 dq ?                    ; DATA XREF: sub_14E29A6A0+6AE↑r
.data:000000015752FC68                                                                 ; sub_14E29A6A0+15BB↑o
.data:000000015752FC70 ?? ?? ?? ??             dword_15752FC70 dd ?                    ; DATA XREF: sub_14E29A6A0+595↑r
.data:000000015752FC70                                                                 ; sub_14E29A6A0:loc_14E29BC35↑o ...
.data:000000015752FC74 ?? ?? ?? ??                             align 8
.data:000000015752FC78 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FC78 dq ?                    ; DATA XREF: sub_14E29A6A0+600↑r
.data:000000015752FC78                                                                 ; sub_14E29A6A0+1578↑o
.data:000000015752FC80 ?? ?? ?? ??             dword_15752FC80 dd ?                    ; DATA XREF: sub_14E29A6A0+5EB↑r
.data:000000015752FC80                                                                 ; sub_14E29A6A0:loc_14E29BBF2↑o ...
.data:000000015752FC84 ?? ?? ?? ??                             align 8
.data:000000015752FC88 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FC88 dq ?                    ; DATA XREF: sub_14E280CC0:loc_14E280CEC↑r
.data:000000015752FC88                                                                 ; sub_14E280CC0+61↑o
.data:000000015752FC90 ?? ?? ?? ??             dword_15752FC90 dd ?                    ; DATA XREF: sub_14E280CC0+24↑r
.data:000000015752FC90                                                                 ; sub_14E280CC0:loc_14E280CFF↑o ...
.data:000000015752FC94 ?? ?? ?? ??                             align 8
.data:000000015752FC98 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FC98 dq ?                    ; DATA XREF: sub_14E279F00:loc_14E279F40↑r
.data:000000015752FC98                                                                 ; sub_14E279F00+A1↑o
.data:000000015752FCA0 ?? ?? ?? ??             dword_15752FCA0 dd ?                    ; DATA XREF: sub_14E279F00+38↑r
.data:000000015752FCA0                                                                 ; sub_14E279F00:loc_14E279F7F↑o ...
.data:000000015752FCA4 ?? ?? ?? ??                             align 8
.data:000000015752FCA8 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FCA8 dq ?                    ; DATA XREF: sub_14E28D470:loc_14E28D64E↑r
.data:000000015752FCA8                                                                 ; sub_14E28D470+336↑o
.data:000000015752FCB0 ?? ?? ?? ??             dword_15752FCB0 dd ?                    ; DATA XREF: sub_14E28D470+1D2↑r
.data:000000015752FCB0                                                                 ; sub_14E28D470:loc_14E28D780↑o ...
.data:000000015752FCB4 ?? ?? ?? ??                             align 8
.data:000000015752FCB8 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FCB8 dq ?                    ; DATA XREF: sub_14E28CF50:loc_14E28D07A↑r
.data:000000015752FCB8                                                                 ; sub_14E28CF50+1CF↑o
.data:000000015752FCC0 ?? ?? ?? ??             dword_15752FCC0 dd ?                    ; DATA XREF: sub_14E28CF50+122↑r
.data:000000015752FCC0                                                                 ; sub_14E28CF50:loc_14E28D0F9↑o ...
.data:000000015752FCC4 ?? ?? ?? ??                             align 8
.data:000000015752FCC8 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FCC8 dq ?                    ; DATA XREF: sub_14E28CD60:loc_14E28CE8A↑r
.data:000000015752FCC8                                                                 ; sub_14E28CD60+1CF↑o
.data:000000015752FCD0 ?? ?? ?? ??             dword_15752FCD0 dd ?                    ; DATA XREF: sub_14E28CD60+122↑r
.data:000000015752FCD0                                                                 ; sub_14E28CD60:loc_14E28CF09↑o ...
.data:000000015752FCD4 ?? ?? ?? ??                             align 8
.data:000000015752FCD8 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FCD8 dq ?                    ; DATA XREF: sub_14E28D140:loc_14E28D312↑r
.data:000000015752FCD8                                                                 ; sub_14E28D140+2B2↑o
.data:000000015752FCE0 ?? ?? ?? ??             dword_15752FCE0 dd ?                    ; DATA XREF: sub_14E28D140+1C6↑r
.data:000000015752FCE0                                                                 ; sub_14E28D140:loc_14E28D3CC↑o ...
.data:000000015752FCE4 ?? ?? ?? ??                             align 8
.data:000000015752FCE8 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FCE8 dq ?                    ; DATA XREF: sub_14E28CA30:loc_14E28CC02↑r
.data:000000015752FCE8                                                                 ; sub_14E28CA30+2B2↑o
.data:000000015752FCF0 ?? ?? ?? ??             dword_15752FCF0 dd ?                    ; DATA XREF: sub_14E28CA30+1C6↑r
.data:000000015752FCF0                                                                 ; sub_14E28CA30:loc_14E28CCBC↑o ...
.data:000000015752FCF4 ?? ?? ?? ??                             align 8
.data:000000015752FCF8 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FCF8 dq ?                    ; DATA XREF: sub_14E279D90:loc_14E279DC9↑r
.data:000000015752FCF8                                                                 ; sub_14E279D90+90↑o
.data:000000015752FD00 ?? ?? ?? ??             dword_15752FD00 dd ?                    ; DATA XREF: sub_14E279D90+31↑r
.data:000000015752FD00                                                                 ; sub_14E279D90:loc_14E279DFE↑o ...
.data:000000015752FD04 ?? ?? ?? ??                             align 8
.data:000000015752FD08 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FD08 dq ?                    ; DATA XREF: sub_14E28C700:loc_14E28C8C9↑r
.data:000000015752FD08                                                                 ; sub_14E28C700+305↑o
.data:000000015752FD10 ?? ?? ?? ??             dword_15752FD10 dd ?                    ; DATA XREF: sub_14E28C700+1BD↑r
.data:000000015752FD10                                                                 ; sub_14E28C700:loc_14E28C9DF↑o ...
.data:000000015752FD14 ?? ?? ?? ??                             align 8
.data:000000015752FD18 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FD18 dq ?                    ; DATA XREF: sub_14E28D7D0:loc_14E28D889↑r
.data:000000015752FD18                                                                 ; sub_14E28D7D0+1F6↑o
.data:000000015752FD20 ?? ?? ?? ??             dword_15752FD20 dd ?                    ; DATA XREF: sub_14E28D7D0+AD↑r
.data:000000015752FD20                                                                 ; sub_14E28D7D0:loc_14E28D9A0↑o ...
.data:000000015752FD24 ?? ?? ?? ??                             align 8
.data:000000015752FD28 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FD28 dq ?                    ; DATA XREF: sub_14E28D7D0:loc_14E28D850↑r
.data:000000015752FD28                                                                 ; sub_14E28D7D0+1B3↑o
.data:000000015752FD30 ?? ?? ?? ??             dword_15752FD30 dd ?                    ; DATA XREF: sub_14E28D7D0+74↑r
.data:000000015752FD30                                                                 ; sub_14E28D7D0:loc_14E28D95D↑o ...
.data:000000015752FD34 ?? ?? ?? ??                             align 8
.data:000000015752FD38 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FD38 dq ?                    ; DATA XREF: sub_14E279E40:loc_14E279E80↑r
.data:000000015752FD38                                                                 ; sub_14E279E40+A1↑o
.data:000000015752FD40 ?? ?? ?? ??             dword_15752FD40 dd ?                    ; DATA XREF: sub_14E279E40+38↑r
.data:000000015752FD40                                                                 ; sub_14E279E40:loc_14E279EBF↑o ...
.data:000000015752FD44 ?? ?? ?? ??                             align 8
.data:000000015752FD48 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FD48 dq ?                    ; DATA XREF: sub_14E28D470:loc_14E28D5B5↑r
.data:000000015752FD48                                                                 ; sub_14E28D470+2F3↑o
.data:000000015752FD50 ?? ?? ?? ??             dword_15752FD50 dd ?                    ; DATA XREF: sub_14E28D470+139↑r
.data:000000015752FD50                                                                 ; sub_14E28D470:loc_14E28D73D↑o ...
.data:000000015752FD54 ?? ?? ?? ??                             align 8
.data:000000015752FD58 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FD58 dq ?                    ; DATA XREF: sub_14E28CF50:loc_14E28CFDE↑r
.data:000000015752FD58                                                                 ; sub_14E28CF50+18C↑o
.data:000000015752FD60 ?? ?? ?? ??             dword_15752FD60 dd ?                    ; DATA XREF: sub_14E28CF50+82↑r
.data:000000015752FD60                                                                 ; sub_14E28CF50:loc_14E28D0B6↑o ...
.data:000000015752FD64 ?? ?? ?? ??                             align 8
.data:000000015752FD68 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FD68 dq ?                    ; DATA XREF: sub_14E28CD60:loc_14E28CDEE↑r
.data:000000015752FD68                                                                 ; sub_14E28CD60+18C↑o
.data:000000015752FD70 ?? ?? ?? ??             dword_15752FD70 dd ?                    ; DATA XREF: sub_14E28CD60+82↑r
.data:000000015752FD70                                                                 ; sub_14E28CD60:loc_14E28CEC6↑o ...
.data:000000015752FD74 ?? ?? ?? ??                             align 8
.data:000000015752FD78 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FD78 dq ?                    ; DATA XREF: sub_14E28D140:loc_14E28D21B↑r
.data:000000015752FD78                                                                 ; sub_14E28D140+2F5↑o ...
.data:000000015752FD80 ?? ?? ?? ??             dword_15752FD80 dd ?                    ; DATA XREF: sub_14E28D140+CF↑r
.data:000000015752FD80                                                                 ; sub_14E28D140:loc_14E28D40F↑o ...
.data:000000015752FD84 ?? ?? ?? ??                             align 8
.data:000000015752FD88 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FD88 dq ?                    ; DATA XREF: sub_14E28CA30:loc_14E28CB0B↑r
.data:000000015752FD88                                                                 ; sub_14E28CA30+2F5↑o ...
.data:000000015752FD90 ?? ?? ?? ??             dword_15752FD90 dd ?                    ; DATA XREF: sub_14E28CA30+CF↑r
.data:000000015752FD90                                                                 ; sub_14E28CA30:loc_14E28CCFF↑o ...
.data:000000015752FD94 ?? ?? ?? ??                             align 8
.data:000000015752FD98 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FD98 dq ?                    ; DATA XREF: sub_14E279B60:loc_14E279B99↑r
.data:000000015752FD98                                                                 ; sub_14E279B60+90↑o
.data:000000015752FDA0 ?? ?? ?? ??             dword_15752FDA0 dd ?                    ; DATA XREF: sub_14E279B60+31↑r
.data:000000015752FDA0                                                                 ; sub_14E279B60:loc_14E279BCE↑o ...
.data:000000015752FDA4 ?? ?? ?? ??                             align 8
.data:000000015752FDA8 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FDA8 dq ?                    ; DATA XREF: sub_14E28C700:loc_14E28C838↑r
.data:000000015752FDA8                                                                 ; sub_14E28C700+2C2↑o
.data:000000015752FDB0 ?? ?? ?? ??             dword_15752FDB0 dd ?                    ; DATA XREF: sub_14E28C700+12C↑r
.data:000000015752FDB0                                                                 ; sub_14E28C700:loc_14E28C99C↑o ...
.data:000000015752FDB4 ?? ?? ?? ??                             align 8
.data:000000015752FDB8 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FDB8 dq ?                    ; DATA XREF: sub_14E2A3FA0:loc_14E2A40D3↑r
.data:000000015752FDB8                                                                 ; sub_14E2A3FA0:loc_14E2A42D0↑r ...
.data:000000015752FDC0 ?? ?? ?? ??             dword_15752FDC0 dd ?                    ; DATA XREF: sub_14E2A3FA0+127↑r
.data:000000015752FDC0                                                                 ; sub_14E2A3FA0+324↑r ...
.data:000000015752FDC4 ?? ?? ?? ??             dword_15752FDC4 dd ?                    ; DATA XREF: sub_14E2B5890+16F↑r
.data:000000015752FDC4                                                                 ; sub_14E2B5890+177↑w
.data:000000015752FDC8 ?? ?? ?? ??             dword_15752FDC8 dd ?                    ; DATA XREF: sub_14E2D23B0:loc_14E2D2469↑r
.data:000000015752FDC8                                                                 ; sub_14E2D2600:loc_14E2D26B9↑r
.data:000000015752FDCC ??                                      db    ? ;
.data:000000015752FDCD ??                      byte_15752FDCD  db ?                    ; DATA XREF: sub_14E2E2440:loc_14E2E25AB↑r
.data:000000015752FDCE ??                      byte_15752FDCE  db ?                    ; DATA XREF: sub_14E0F2460:loc_14E0F27A2↑r
.data:000000015752FDCE                                                                 ; sub_14E14DC10+3D↑r ...
.data:000000015752FDCF ??                      byte_15752FDCF  db ?                    ; DATA XREF: sub_14E2D6CA0+AB1↑r
.data:000000015752FDD0 ?? ?? ?? ??             dword_15752FDD0 dd ?                    ; DATA XREF: sub_14E143440+D↑r
.data:000000015752FDD0                                                                 ; sub_14E143440+156↑r ...
.data:000000015752FDD4 ?? ?? ?? ?? ?? ?? ?? ??…                align 20h
.data:000000015752FDE0 ?? ?? ?? ?? ?? ?? ?? ?? xmmword_15752FDE0 xmmword ?             ; DATA XREF: sub_14E2B1C90+E7↑r
.data:000000015752FDE0 ?? ?? ?? ?? ?? ?? ?? ??                                         ; sub_14E2B8300+CF↑r ...
.data:000000015752FDF0 ?? ?? ?? ?? ?? ?? ?? ?? xmmword_15752FDF0 xmmword ?             ; DATA XREF: sub_14E2B6F10+1AF↑r
.data:000000015752FDF0 ?? ?? ?? ?? ?? ?? ?? ??                                         ; sub_14E2B89E0+4CF↑r ...
.data:000000015752FE00 ?? ?? ?? ?? ?? ?? ?? ?? xmmword_15752FE00 xmmword ?             ; DATA XREF: sub_14E2B4490+85E↑r
.data:000000015752FE00 ?? ?? ?? ?? ?? ?? ?? ??                                         ; sub_14E2B4490+8F5↑r ...
.data:000000015752FE10 ?? ?? ?? ?? ?? ?? ?? ??…                align 20h
.data:000000015752FE20 ?? ?? ?? ?? ?? ?? ?? ?? xmmword_15752FE20 xmmword ?             ; DATA XREF: sub_14E2B89E0+16D↑r
.data:000000015752FE20 ?? ?? ?? ?? ?? ?? ?? ??                                         ; sub_14E2BA9F0+DA↑r ...
.data:000000015752FE30 ??                      byte_15752FE30  db ?                    ; DATA XREF: sub_14E2D23B0+16↑r
.data:000000015752FE30                                                                 ; sub_14E2D2600+16↑r ...
.data:000000015752FE31 ?? ?? ??                                align 4
.data:000000015752FE34 ??                      unk_15752FE34   db    ? ;               ; DATA XREF: sub_14E2D23B0+55↑o
.data:000000015752FE34                                                                 ; sub_14E2D2600+55↑o ...
.data:000000015752FE35 ??                                      db    ? ;
.data:000000015752FE36 ??                                      db    ? ;
.data:000000015752FE37 ??                                      db    ? ;
.data:000000015752FE38 ??                                      db    ? ;
.data:000000015752FE39 ??                                      db    ? ;
.data:000000015752FE3A ??                                      db    ? ;
.data:000000015752FE3B ??                                      db    ? ;
.data:000000015752FE3C ?? ?? ?? ??             dword_15752FE3C dd ?                    ; DATA XREF: sub_14E2E2640+163↑w
.data:000000015752FE3C                                                                 ; sub_14E2E2640+191↑w ...
.data:000000015752FE40 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FE40 dq ?                    ; DATA XREF: sub_15054CA20+12↑w
.data:000000015752FE48 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FE48 dq ?                    ; DATA XREF: sub_15054CA20+30↑r
.data:000000015752FE50 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FE50 dq ?                    ; DATA XREF: sub_14E2C9540+E5↑r
.data:000000015752FE50                                                                 ; sub_14E2CB280+D↑r
.data:000000015752FE58 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FE58 dq ?                    ; DATA XREF: sub_15054C750+12↑w
.data:000000015752FE60 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FE60 dq ?                    ; DATA XREF: sub_15054C750+30↑r
.data:000000015752FE68 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FE68 dq ?                    ; DATA XREF: sub_14E2CAE10+D↑r
.data:000000015752FE70 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FE70 dq ?                    ; DATA XREF: sub_15054CA70+12↑w
.data:000000015752FE78 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FE78 dq ?                    ; DATA XREF: sub_15054CA70+30↑r
.data:000000015752FE80 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FE80 dq ?                    ; DATA XREF: sub_14E2E5B60:loc_14E2E5BDA↑r
.data:000000015752FE88 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FE88 dq ?                    ; DATA XREF: sub_15054C9D0+12↑w
.data:000000015752FE90 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FE90 dq ?                    ; DATA XREF: sub_15054C9D0+30↑r
.data:000000015752FE98 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FE98 dq ?                    ; DATA XREF: sub_14E2CB270↑r
.data:000000015752FEA0 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FEA0 dq ?                    ; DATA XREF: sub_15054C840+12↑w
.data:000000015752FEA8 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FEA8 dq ?                    ; DATA XREF: sub_15054C840+30↑r
.data:000000015752FEB0 ??                                      db    ? ;
.data:000000015752FEB1 ??                                      db    ? ;
.data:000000015752FEB2 ??                                      db    ? ;
.data:000000015752FEB3 ??                                      db    ? ;
.data:000000015752FEB4 ??                                      db    ? ;
.data:000000015752FEB5 ??                                      db    ? ;
.data:000000015752FEB6 ??                                      db    ? ;
.data:000000015752FEB7 ??                                      db    ? ;
.data:000000015752FEB8 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FEB8 dq ?                    ; DATA XREF: sub_15054C570+12↑w
.data:000000015752FEC0 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FEC0 dq ?                    ; DATA XREF: sub_15054C570+30↑r
.data:000000015752FEC8 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FEC8 dq ?                    ; DATA XREF: sub_15054C390+12↑w
.data:000000015752FED0 ?? ?? ?? ?? ?? ?? ?? ?? qword_15752FED0 dq ?                    ; DATA XREF: sub_15054C390+30↑r
.data:000000015752FED8 ??                      unk_15752FED8   db    ? ;               ; DATA XREF: sub_14E2BD940+3A↑o
.data:000000015752FED8                                                                 ; sub_14E2D23B0+186↑o ...
.data:000000015752FED9 ??                                      db    ? ;
.data:000000015752FEDA ??                                      db    ? ;
.data:000000015752FEDB ??                                      db    ? ;
.data:000000015752FEDC ??                                      db    ? ;
.data:000000015752FEDD ??                                      db    ? ;
.data:000000015752FEDE ??                                      db    ? ;
.data:000000015752FEDF ??                                      db    ? ;
.data:000000015752FEE0 ?? ?? ?? ??             dword_15752FEE0 dd ?                    ; DATA XREF: sub_14E2D23B0+1D0↑r
.data:000000015752FEE0                                                                 ; sub_14E2D23B0+208↑w ...
.data:000000015752FEE4 ?? ?? ?? ??             dword_15752FEE4 dd ?                    ; DATA XREF: sub_14E2D23B0+202↑r
.data:000000015752FEE4                                                                 ; sub_14E2D2600+165↑r
.data:000000015752FEE8 ??                      unk_15752FEE8   db    ? ;               ; DATA XREF: sub_14E2BD940+4E↑o
.data:000000015752FEE8                                                                 ; sub_14E2D77B0+D4↑o ...
.data:000000015752FEE9 ??                                      db    ? ;
.data:000000015752FEEA ??                                      db    ? ;
.data:000000015752FEEB ??                                      db    ? ;
.data:000000015752FEEC ??                                      db    ? ;
.data:000000015752FEED ??                                      db    ? ;
.data:000000015752FEEE ??                                      db    ? ;
.data:000000015752FEEF ??                                      db    ? ;
.data:000000015752FEF0 ?? ?? ?? ??             dword_15752FEF0 dd ?                    ; DATA XREF: sub_14E2D77B0+E1↑r
.data:000000015752FEF0                                                                 ; sub_14E2D77B0+119↑w ...
.data:000000015752FEF4 ?? ?? ?? ??             dword_15752FEF4 dd ?                    ; DATA XREF: sub_14E2D77B0+113↑r
.data:000000015752FEF8 ??                      unk_15752FEF8   db    ? ;               ; DATA XREF: sub_14E2BD940+25↑o
.data:000000015752FEF8                                                                 ; sub_14E2BD940+5A↑o ...
.data:000000015752FEF9 ??                                      db    ? ;


```
--- 
ส่วนไว้ตรวจสอบเล่น น่าจะ เยอะ เกิน   สร้างเผื่อ มีจุดที่ ต้อง ใช้ เผื่อ   สำหรับ  .text:000000014D9038C0    
---
```asm
.text:000000014D9031E4                         ; ---------------------------------------------------------------------------
.text:000000014D9031E4
.text:000000014D9031E4                         loc_14D9031E4:                          ; CODE XREF: sub_14D902EC0+28E↑j
.text:000000014D9031E4                                                                 ; sub_14D902EC0+31D↑j
.text:000000014D9031E4 40 B7 01                                mov     dil, 1
.text:000000014D9031E7 40 F6 C6 02                             test    sil, 2
.text:000000014D9031EB 74 36                                   jz      short loc_14D903223
.text:000000014D9031ED
.text:000000014D9031ED                         loc_14D9031ED:                          ; CODE XREF: sub_14D902EC0+322↑j
.text:000000014D9031ED 48 8D 4D F7                             lea     rcx, [rbp-9]
.text:000000014D9031F1 FF 15 79 75 F4 08                       call    cs:qword_15684A770
.text:000000014D9031F7 33 D2                                   xor     edx, edx
.text:000000014D9031F9 48 8D 4D F7                             lea     rcx, [rbp-9]
.text:000000014D9031FD E8 DE F4 17 F3                          call    sub_140A826E0
.text:000000014D903202 48 8D 4D F7                             lea     rcx, [rbp-9]
.text:000000014D903206 FF 15 64 75 F4 08                       call    cs:qword_15684A770
.text:000000014D90320C 48 85 C0                                test    rax, rax
.text:000000014D90320F 74 12                                   jz      short loc_14D903223
.text:000000014D903211 48 8D 4D F7                             lea     rcx, [rbp-9]
.text:000000014D903215 FF 15 55 75 F4 08                       call    cs:qword_15684A770
.text:000000014D90321B 48 8B C8                                mov     rcx, rax
.text:000000014D90321E E8 AD 7D EA FE                          call    sub_14C7AAFD0
.text:000000014D903223
.text:000000014D903223                         loc_14D903223:                          ; CODE XREF: sub_14D902EC0+32B↑j
.text:000000014D903223                                                                 ; sub_14D902EC0+34F↑j
.text:000000014D903223 48 8D 4D 07                             lea     rcx, [rbp+7]
.text:000000014D903227 FF 15 43 75 F4 08                       call    cs:qword_15684A770
.text:000000014D90322D 33 D2                                   xor     edx, edx
.text:000000014D90322F 48 8D 4D 07                             lea     rcx, [rbp+7]
.text:000000014D903233 E8 A8 F4 17 F3                          call    sub_140A826E0
.text:000000014D903238 48 8D 4D 07                             lea     rcx, [rbp+7]
.text:000000014D90323C FF 15 2E 75 F4 08                       call    cs:qword_15684A770
.text:000000014D903242 48 8B B4 24 B0 00 00 00                 mov     rsi, [rsp+0B0h]
.text:000000014D90324A 48 85 C0                                test    rax, rax
.text:000000014D90324D 74 12                                   jz      short loc_14D903261
.text:000000014D90324F 48 8D 4D 07                             lea     rcx, [rbp+7]
.text:000000014D903253 FF 15 17 75 F4 08                       call    cs:qword_15684A770
.text:000000014D903259 48 8B C8                                mov     rcx, rax
.text:000000014D90325C E8 6F 7D EA FE                          call    sub_14C7AAFD0
.text:000000014D903261
.text:000000014D903261                         loc_14D903261:                          ; CODE XREF: sub_14D902EC0+38D↑j
.text:000000014D903261 40 84 FF                                test    dil, dil
.text:000000014D903264 48 8B BC 24 90 00 00 00                 mov     rdi, [rsp+90h]
.text:000000014D90326C 0F 84 56 04 00 00                       jz      loc_14D9036C8
.text:000000014D903272 39 5D 1F                                cmp     [rbp+1Fh], ebx
.text:000000014D903275 74 0C                                   jz      short loc_14D903283
.text:000000014D903277 48 8D 4D 17                             lea     rcx, [rbp+17h]
.text:000000014D90327B FF 15 EF 74 F4 08                       call    cs:qword_15684A770
.text:000000014D903281 EB 03                                   jmp     short loc_14D903286
.text:000000014D903283                         ; ---------------------------------------------------------------------------
.text:000000014D903283
.text:000000014D903283                         loc_14D903283:                          ; CODE XREF: sub_14D902EC0+3B5↑j
.text:000000014D903283 49 8B C6                                mov     rax, r14
.text:000000014D903286
.text:000000014D903286                         loc_14D903286:                          ; CODE XREF: sub_14D902EC0+3C1↑j
.text:000000014D903286 4C 8B C0                                mov     r8, rax
.text:000000014D903289 48 8D 15 00 AB EA 06                    lea     rdx, aVrTrackingorig ; "vr.TrackingOrigin %s"
.text:000000014D903290 48 8D 4D 07                             lea     rcx, [rbp+7]
.text:000000014D903294 E8 E7 98 E6 FE                          call    sub_14C76CB80
.text:000000014D903299 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D90329D FF 15 CD 74 F4 08                       call    cs:qword_15684A770
.text:000000014D9032A3 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D9032A7 FF 15 C3 74 F4 08                       call    cs:qword_15684A770
.text:000000014D9032AD 48 85 C0                                test    rax, rax
.text:000000014D9032B0 74 12                                   jz      short loc_14D9032C4
.text:000000014D9032B2 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D9032B6 FF 15 B4 74 F4 08                       call    cs:qword_15684A770
.text:000000014D9032BC 48 8B C8                                mov     rcx, rax
.text:000000014D9032BF E8 0C 7D EA FE                          call    sub_14C7AAFD0
.text:000000014D9032C4
.text:000000014D9032C4                         loc_14D9032C4:                          ; CODE XREF: sub_14D902EC0+3F0↑j
.text:000000014D9032C4 48 8B 45 07                             mov     rax, [rbp+7]
.text:000000014D9032C8 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D9032CC 48 89 45 E7                             mov     [rbp-19h], rax
.text:000000014D9032D0 FF 15 9A 74 F4 08                       call    cs:qword_15684A770
.text:000000014D9032D6 48 8D 4D 07                             lea     rcx, [rbp+7]
.text:000000014D9032DA 48 89 5D 07                             mov     [rbp+7], rbx
.text:000000014D9032DE FF 15 8C 74 F4 08                       call    cs:qword_15684A770
.text:000000014D9032E4 8B 45 0F                                mov     eax, [rbp+0Fh]
.text:000000014D9032E7 89 45 EF                                mov     [rbp-11h], eax
.text:000000014D9032EA 8B 45 13                                mov     eax, [rbp+13h]
.text:000000014D9032ED 89 45 F3                                mov     [rbp-0Dh], eax
.text:000000014D9032F0 48 89 5D 0F                             mov     [rbp+0Fh], rbx
.text:000000014D9032F4 E9 6A 02 00 00                          jmp     loc_14D903563
.text:000000014D9032F9                         ; ---------------------------------------------------------------------------
.text:000000014D9032F9
.text:000000014D9032F9                         loc_14D9032F9:                          ; CODE XREF: sub_14D902EC0+1DF↑j
.text:000000014D9032F9 41 B0 01                                mov     r8b, 1
.text:000000014D9032FC 48 8D 15 55 5A DC 02                    lea     rdx, aHmd_0     ; "HMD"
.text:000000014D903303 48 8D 4D 6F                             lea     rcx, [rbp+6Fh]
.text:000000014D903307 E8 34 3D F9 FE                          call    sub_14C897040
.text:000000014D90330C 48 8D 4D 6F                             lea     rcx, [rbp+6Fh]
.text:000000014D903310 41 B0 01                                mov     r8b, 1
.text:000000014D903313 84 C0                                   test    al, al
.text:000000014D903315 0F 84 6D 01 00 00                       jz      loc_14D903488
.text:000000014D90331B 48 8D 15 1A AB EA 06                    lea     rdx, aOn_4      ; "ON"
.text:000000014D903322 E8 19 3D F9 FE                          call    sub_14C897040
.text:000000014D903327 84 C0                                   test    al, al
.text:000000014D903329 75 1B                                   jnz     short loc_14D903346
.text:000000014D90332B 41 B0 01                                mov     r8b, 1
.text:000000014D90332E 48 8D 15 13 AB EA 06                    lea     rdx, aEnable_2  ; "ENABLE"
.text:000000014D903335 48 8D 4D 6F                             lea     rcx, [rbp+6Fh]
.text:000000014D903339 E8 02 3D F9 FE                          call    sub_14C897040
.text:000000014D90333E 84 C0                                   test    al, al
.text:000000014D903340 0F 84 87 00 00 00                       jz      loc_14D9033CD
.text:000000014D903346
.text:000000014D903346                         loc_14D903346:                          ; CODE XREF: sub_14D902EC0+469↑j
.text:000000014D903346 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D90334A FF 15 20 74 F4 08                       call    cs:qword_15684A770
.text:000000014D903350 48 8D 0D 01 AB EA 06                    lea     rcx, aVrBenablehmdTr ; "vr.bEnableHMD True"
.text:000000014D903357 48 3B C1                                cmp     rax, rcx
.text:000000014D90335A 74 71                                   jz      short loc_14D9033CD
.text:000000014D90335C 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903360 FF 15 0A 74 F4 08                       call    cs:qword_15684A770
.text:000000014D903366 8B 4D F3                                mov     ecx, [rbp-0Dh]
.text:000000014D903369 8B D3                                   mov     edx, ebx
.text:000000014D90336B 89 5D EF                                mov     [rbp-11h], ebx
.text:000000014D90336E 83 F9 13                                cmp     ecx, 13h
.text:000000014D903371 74 14                                   jz      short loc_14D903387
.text:000000014D903373 BA 13 00 00 00                          mov     edx, 13h
.text:000000014D903378 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D90337C E8 5F F4 17 F3                          call    sub_140A827E0
.text:000000014D903381 8B 4D F3                                mov     ecx, [rbp-0Dh]
.text:000000014D903384 8B 55 EF                                mov     edx, [rbp-11h]
.text:000000014D903387
.text:000000014D903387                         loc_14D903387:                          ; CODE XREF: sub_14D902EC0+4B1↑j
.text:000000014D903387 8D 42 13                                lea     eax, [rdx+13h]
.text:000000014D90338A 89 45 EF                                mov     [rbp-11h], eax
.text:000000014D90338D 3B C1                                   cmp     eax, ecx
.text:000000014D90338F 7E 09                                   jle     short loc_14D90339A
.text:000000014D903391 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903395 E8 66 F3 17 F3                          call    sub_140A82700
.text:000000014D90339A
.text:000000014D90339A                         loc_14D90339A:                          ; CODE XREF: sub_14D902EC0+4CF↑j
.text:000000014D90339A 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D90339E FF 15 CC 73 F4 08                       call    cs:qword_15684A770
.text:000000014D9033A4 0F 10 05 AD AA EA 06                    movups  xmm0, xmmword ptr cs:aVrBenablehmdTr ; "vr.bEnableHMD True"
.text:000000014D9033AB 0F 11 00                                movups  xmmword ptr [rax], xmm0
.text:000000014D9033AE 0F 10 0D B3 AA EA 06                    movups  xmm1, xmmword ptr cs:aVrBenablehmdTr+10h ; "leHMD True"
.text:000000014D9033B5 0F 11 48 10                             movups  xmmword ptr [rax+10h], xmm1
.text:000000014D9033B9 8B 0D B9 AA EA 06                       mov     ecx, dword ptr cs:aVrBenablehmdTr+20h ; "ue"
.text:000000014D9033BF 89 48 20                                mov     [rax+20h], ecx
.text:000000014D9033C2 0F B7 0D B3 AA EA 06                    movzx   ecx, word ptr cs:aVrBenablehmdTr+24h ; ""
.text:000000014D9033C9 66 89 48 24                             mov     [rax+24h], cx
.text:000000014D9033CD
.text:000000014D9033CD                         loc_14D9033CD:                          ; CODE XREF: sub_14D902EC0+480↑j
.text:000000014D9033CD                                                                 ; sub_14D902EC0+49A↑j
.text:000000014D9033CD 41 B0 01                                mov     r8b, 1
.text:000000014D9033D0 48 8D 15 A9 AA EA 06                    lea     rdx, aOff_3     ; "OFF"
.text:000000014D9033D7 48 8D 4D 6F                             lea     rcx, [rbp+6Fh]
.text:000000014D9033DB E8 60 3C F9 FE                          call    sub_14C897040
.text:000000014D9033E0 84 C0                                   test    al, al
.text:000000014D9033E2 75 1B                                   jnz     short loc_14D9033FF
.text:000000014D9033E4 41 B0 01                                mov     r8b, 1
.text:000000014D9033E7 48 8D 15 9A AA EA 06                    lea     rdx, aDisable_1 ; "DISABLE"
.text:000000014D9033EE 48 8D 4D 6F                             lea     rcx, [rbp+6Fh]
.text:000000014D9033F2 E8 49 3C F9 FE                          call    sub_14C897040
.text:000000014D9033F7 84 C0                                   test    al, al
.text:000000014D9033F9 0F 84 96 03 00 00                       jz      loc_14D903795
.text:000000014D9033FF
.text:000000014D9033FF                         loc_14D9033FF:                          ; CODE XREF: sub_14D902EC0+522↑j
.text:000000014D9033FF 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903403 FF 15 67 73 F4 08                       call    cs:qword_15684A770
.text:000000014D903409 48 8D 0D 88 AA EA 06                    lea     rcx, aVrBenablehmdFa ; "vr.bEnableHMD False"
.text:000000014D903410 48 3B C1                                cmp     rax, rcx
.text:000000014D903413 0F 84 7C 03 00 00                       jz      loc_14D903795
.text:000000014D903419 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D90341D FF 15 4D 73 F4 08                       call    cs:qword_15684A770
.text:000000014D903423 8B 4D F3                                mov     ecx, [rbp-0Dh]
.text:000000014D903426 89 5D EF                                mov     [rbp-11h], ebx
.text:000000014D903429 83 F9 14                                cmp     ecx, 14h
.text:000000014D90342C 74 14                                   jz      short loc_14D903442
.text:000000014D90342E BA 14 00 00 00                          mov     edx, 14h
.text:000000014D903433 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903437 E8 A4 F3 17 F3                          call    sub_140A827E0
.text:000000014D90343C 8B 4D F3                                mov     ecx, [rbp-0Dh]
.text:000000014D90343F 8B 5D EF                                mov     ebx, [rbp-11h]
.text:000000014D903442
.text:000000014D903442                         loc_14D903442:                          ; CODE XREF: sub_14D902EC0+56C↑j
.text:000000014D903442 8D 43 14                                lea     eax, [rbx+14h]
.text:000000014D903445 89 45 EF                                mov     [rbp-11h], eax
.text:000000014D903448 3B C1                                   cmp     eax, ecx
.text:000000014D90344A 7E 0B                                   jle     short loc_14D903457
.text:000000014D90344C 8B D3                                   mov     edx, ebx
.text:000000014D90344E 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903452 E8 A9 F2 17 F3                          call    sub_140A82700
.text:000000014D903457
.text:000000014D903457                         loc_14D903457:                          ; CODE XREF: sub_14D902EC0+58A↑j
.text:000000014D903457 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D90345B FF 15 0F 73 F4 08                       call    cs:qword_15684A770
.text:000000014D903461 0F 10 05 30 AA EA 06                    movups  xmm0, xmmword ptr cs:aVrBenablehmdFa ; "vr.bEnableHMD False"
.text:000000014D903468 0F 11 00                                movups  xmmword ptr [rax], xmm0
.text:000000014D90346B 0F 10 0D 36 AA EA 06                    movups  xmm1, xmmword ptr cs:aVrBenablehmdFa+10h ; "leHMD False"
.text:000000014D903472 0F 11 48 10                             movups  xmmword ptr [rax+10h], xmm1
.text:000000014D903476 F2 0F 10 05 3A AA EA 06                 movsd   xmm0, qword ptr cs:aVrBenablehmdFa+20h ; "lse"
.text:000000014D90347E F2 0F 11 40 20                          movsd   qword ptr [rax+20h], xmm0
.text:000000014D903483 E9 0D 03 00 00                          jmp     loc_14D903795
.text:000000014D903488                         ; ---------------------------------------------------------------------------
.text:000000014D903488
.text:000000014D903488                         loc_14D903488:                          ; CODE XREF: sub_14D902EC0+455↑j
.text:000000014D903488 48 8D 15 31 AA EA 06                    lea     rdx, aStereo_0  ; "STEREO"
.text:000000014D90348F E8 AC 3B F9 FE                          call    sub_14C897040
.text:000000014D903494 48 8D 4D 6F                             lea     rcx, [rbp+6Fh]
.text:000000014D903498 41 B0 01                                mov     r8b, 1
.text:000000014D90349B 84 C0                                   test    al, al
.text:000000014D90349D 0F 84 64 02 00 00                       jz      loc_14D903707
.text:000000014D9034A3 48 8D 15 92 A9 EA 06                    lea     rdx, aOn_4      ; "ON"
.text:000000014D9034AA 48 89 5D 17                             mov     [rbp+17h], rbx
.text:000000014D9034AE 48 89 5D 1F                             mov     [rbp+1Fh], rbx
.text:000000014D9034B2 E8 89 3B F9 FE                          call    sub_14C897040
.text:000000014D9034B7 84 C0                                   test    al, al
.text:000000014D9034B9 0F 85 80 01 00 00                       jnz     loc_14D90363F
.text:000000014D9034BF 41 B0 01                                mov     r8b, 1
.text:000000014D9034C2 48 8D 15 7F A9 EA 06                    lea     rdx, aEnable_2  ; "ENABLE"
.text:000000014D9034C9 48 8D 4D 6F                             lea     rcx, [rbp+6Fh]
.text:000000014D9034CD E8 6E 3B F9 FE                          call    sub_14C897040
.text:000000014D9034D2 84 C0                                   test    al, al
.text:000000014D9034D4 0F 85 65 01 00 00                       jnz     loc_14D90363F
.text:000000014D9034DA 41 B0 01                                mov     r8b, 1
.text:000000014D9034DD 48 8D 15 9C A9 EA 06                    lea     rdx, aOff_3     ; "OFF"
.text:000000014D9034E4 48 8D 4D 6F                             lea     rcx, [rbp+6Fh]
.text:000000014D9034E8 E8 53 3B F9 FE                          call    sub_14C897040
.text:000000014D9034ED 84 C0                                   test    al, al
.text:000000014D9034EF 0F 85 AD 00 00 00                       jnz     loc_14D9035A2
.text:000000014D9034F5 41 B0 01                                mov     r8b, 1
.text:000000014D9034F8 48 8D 15 89 A9 EA 06                    lea     rdx, aDisable_1 ; "DISABLE"
.text:000000014D9034FF 48 8D 4D 6F                             lea     rcx, [rbp+6Fh]
.text:000000014D903503 E8 38 3B F9 FE                          call    sub_14C897040
.text:000000014D903508 84 C0                                   test    al, al
.text:000000014D90350A 0F 85 92 00 00 00                       jnz     loc_14D9035A2
.text:000000014D903510 48 8B 4D 6F                             mov     rcx, [rbp+6Fh]
.text:000000014D903514 4C 8D 45 17                             lea     r8, [rbp+17h]
.text:000000014D903518 41 B1 01                                mov     r9b, 1
.text:000000014D90351B 48 8D 15 0E AA EA 06                    lea     rdx, aW2m       ; "W2M="
.text:000000014D903522 E8 59 5B FB FE                          call    sub_14C8B9080
.text:000000014D903527 84 C0                                   test    al, al
.text:000000014D903529 0F 84 99 01 00 00                       jz      loc_14D9036C8
.text:000000014D90352F 39 5D 1F                                cmp     [rbp+1Fh], ebx
.text:000000014D903532 74 0C                                   jz      short loc_14D903540
.text:000000014D903534 48 8D 4D 17                             lea     rcx, [rbp+17h]
.text:000000014D903538 FF 15 32 72 F4 08                       call    cs:qword_15684A770
.text:000000014D90353E EB 03                                   jmp     short loc_14D903543
.text:000000014D903540                         ; ---------------------------------------------------------------------------
.text:000000014D903540
.text:000000014D903540                         loc_14D903540:                          ; CODE XREF: sub_14D902EC0+672↑j
.text:000000014D903540 49 8B C6                                mov     rax, r14
.text:000000014D903543
.text:000000014D903543                         loc_14D903543:                          ; CODE XREF: sub_14D902EC0+67E↑j
.text:000000014D903543 4C 8B C0                                mov     r8, rax
.text:000000014D903546 48 8D 15 F3 A9 EA 06                    lea     rdx, aVrWorldtometer ; "vr.WorldToMetersScale %s"
.text:000000014D90354D 48 8D 4D 07                             lea     rcx, [rbp+7]
.text:000000014D903551 E8 2A 96 E6 FE                          call    sub_14C76CB80
.text:000000014D903556 48 8D 55 07                             lea     rdx, [rbp+7]
.text:000000014D90355A 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D90355E E8 8D 61 18 F3                          call    sub_140A896F0
.text:000000014D903563
.text:000000014D903563                         loc_14D903563:                          ; CODE XREF: sub_14D902EC0+434↑j
.text:000000014D903563 48 8D 4D 07                             lea     rcx, [rbp+7]
.text:000000014D903567 FF 15 03 72 F4 08                       call    cs:qword_15684A770
.text:000000014D90356D 33 D2                                   xor     edx, edx
.text:000000014D90356F 48 8D 4D 07                             lea     rcx, [rbp+7]
.text:000000014D903573 E8 68 F1 17 F3                          call    sub_140A826E0
.text:000000014D903578 48 8D 4D 07                             lea     rcx, [rbp+7]
.text:000000014D90357C FF 15 EE 71 F4 08                       call    cs:qword_15684A770
.text:000000014D903582 48 85 C0                                test    rax, rax
.text:000000014D903585 0F 84 3D 01 00 00                       jz      loc_14D9036C8
.text:000000014D90358B 48 8D 4D 07                             lea     rcx, [rbp+7]
.text:000000014D90358F FF 15 DB 71 F4 08                       call    cs:qword_15684A770
.text:000000014D903595 48 8B C8                                mov     rcx, rax
.text:000000014D903598 E8 33 7A EA FE                          call    sub_14C7AAFD0
.text:000000014D90359D E9 26 01 00 00                          jmp     loc_14D9036C8
.text:000000014D9035A2                         ; ---------------------------------------------------------------------------
.text:000000014D9035A2
.text:000000014D9035A2                         loc_14D9035A2:                          ; CODE XREF: sub_14D902EC0+62F↑j
.text:000000014D9035A2                                                                 ; sub_14D902EC0+64A↑j
.text:000000014D9035A2 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D9035A6 FF 15 C4 71 F4 08                       call    cs:qword_15684A770
.text:000000014D9035AC 48 8D 0D 4D A9 EA 06                    lea     rcx, aVrBenablestere ; "vr.bEnableStereo False"
.text:000000014D9035B3 48 3B C1                                cmp     rax, rcx
.text:000000014D9035B6 0F 84 0C 01 00 00                       jz      loc_14D9036C8
.text:000000014D9035BC 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D9035C0 FF 15 AA 71 F4 08                       call    cs:qword_15684A770
.text:000000014D9035C6 8B 4D F3                                mov     ecx, [rbp-0Dh]
.text:000000014D9035C9 89 5D EF                                mov     [rbp-11h], ebx
.text:000000014D9035CC 83 F9 17                                cmp     ecx, 17h
.text:000000014D9035CF 74 14                                   jz      short loc_14D9035E5
.text:000000014D9035D1 BA 17 00 00 00                          mov     edx, 17h
.text:000000014D9035D6 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D9035DA E8 01 F2 17 F3                          call    sub_140A827E0
.text:000000014D9035DF 8B 4D F3                                mov     ecx, [rbp-0Dh]
.text:000000014D9035E2 8B 5D EF                                mov     ebx, [rbp-11h]
.text:000000014D9035E5
.text:000000014D9035E5                         loc_14D9035E5:                          ; CODE XREF: sub_14D902EC0+70F↑j
.text:000000014D9035E5 8D 43 17                                lea     eax, [rbx+17h]
.text:000000014D9035E8 89 45 EF                                mov     [rbp-11h], eax
.text:000000014D9035EB 3B C1                                   cmp     eax, ecx
.text:000000014D9035ED 7E 0B                                   jle     short loc_14D9035FA
.text:000000014D9035EF 8B D3                                   mov     edx, ebx
.text:000000014D9035F1 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D9035F5 E8 06 F1 17 F3                          call    sub_140A82700
.text:000000014D9035FA
.text:000000014D9035FA                         loc_14D9035FA:                          ; CODE XREF: sub_14D902EC0+72D↑j
.text:000000014D9035FA 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D9035FE FF 15 6C 71 F4 08                       call    cs:qword_15684A770
.text:000000014D903604 0F 10 05 F5 A8 EA 06                    movups  xmm0, xmmword ptr cs:aVrBenablestere ; "vr.bEnableStereo False"
.text:000000014D90360B 0F 11 00                                movups  xmmword ptr [rax], xmm0
.text:000000014D90360E 0F 10 0D FB A8 EA 06                    movups  xmm1, xmmword ptr cs:aVrBenablestere+10h ; "leStereo False"
.text:000000014D903615 0F 11 48 10                             movups  xmmword ptr [rax+10h], xmm1
.text:000000014D903619 F2 0F 10 05 FF A8 EA 06                 movsd   xmm0, qword ptr cs:aVrBenablestere+20h ; " False"
.text:000000014D903621 F2 0F 11 40 20                          movsd   qword ptr [rax+20h], xmm0
.text:000000014D903626 8B 0D FC A8 EA 06                       mov     ecx, dword ptr cs:aVrBenablestere+28h ; "se"
.text:000000014D90362C 89 48 28                                mov     [rax+28h], ecx
.text:000000014D90362F 0F B7 0D F6 A8 EA 06                    movzx   ecx, word ptr cs:aVrBenablestere+2Ch ; ""
.text:000000014D903636 66 89 48 2C                             mov     [rax+2Ch], cx
.text:000000014D90363A E9 89 00 00 00                          jmp     loc_14D9036C8
.text:000000014D90363F                         ; ---------------------------------------------------------------------------
.text:000000014D90363F
.text:000000014D90363F                         loc_14D90363F:                          ; CODE XREF: sub_14D902EC0+5F9↑j
.text:000000014D90363F                                                                 ; sub_14D902EC0+614↑j
.text:000000014D90363F 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903643 FF 15 27 71 F4 08                       call    cs:qword_15684A770
.text:000000014D903649 48 8D 0D 80 A8 EA 06                    lea     rcx, aVrBenablestere_0 ; "vr.bEnableStereo True"
.text:000000014D903650 48 3B C1                                cmp     rax, rcx
.text:000000014D903653 74 73                                   jz      short loc_14D9036C8
.text:000000014D903655 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903659 FF 15 11 71 F4 08                       call    cs:qword_15684A770
.text:000000014D90365F 8B 4D F3                                mov     ecx, [rbp-0Dh]
.text:000000014D903662 89 5D EF                                mov     [rbp-11h], ebx
.text:000000014D903665 83 F9 16                                cmp     ecx, 16h
.text:000000014D903668 74 14                                   jz      short loc_14D90367E
.text:000000014D90366A BA 16 00 00 00                          mov     edx, 16h
.text:000000014D90366F 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903673 E8 68 F1 17 F3                          call    sub_140A827E0
.text:000000014D903678 8B 4D F3                                mov     ecx, [rbp-0Dh]
.text:000000014D90367B 8B 5D EF                                mov     ebx, [rbp-11h]
.text:000000014D90367E
.text:000000014D90367E                         loc_14D90367E:                          ; CODE XREF: sub_14D902EC0+7A8↑j
.text:000000014D90367E 8D 43 16                                lea     eax, [rbx+16h]
.text:000000014D903681 89 45 EF                                mov     [rbp-11h], eax
.text:000000014D903684 3B C1                                   cmp     eax, ecx
.text:000000014D903686 7E 0B                                   jle     short loc_14D903693
.text:000000014D903688 8B D3                                   mov     edx, ebx
.text:000000014D90368A 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D90368E E8 6D F0 17 F3                          call    sub_140A82700
.text:000000014D903693
.text:000000014D903693                         loc_14D903693:                          ; CODE XREF: sub_14D902EC0+7C6↑j
.text:000000014D903693 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903697 FF 15 D3 70 F4 08                       call    cs:qword_15684A770
.text:000000014D90369D 0F 10 05 2C A8 EA 06                    movups  xmm0, xmmword ptr cs:aVrBenablestere_0 ; "vr.bEnableStereo True"
.text:000000014D9036A4 0F 11 00                                movups  xmmword ptr [rax], xmm0
.text:000000014D9036A7 0F 10 0D 32 A8 EA 06                    movups  xmm1, xmmword ptr cs:aVrBenablestere_0+10h ; "leStereo True"
.text:000000014D9036AE 0F 11 48 10                             movups  xmmword ptr [rax+10h], xmm1
.text:000000014D9036B2 F2 0F 10 05 36 A8 EA 06                 movsd   xmm0, qword ptr cs:aVrBenablestere_0+20h ; " True"
.text:000000014D9036BA F2 0F 11 40 20                          movsd   qword ptr [rax+20h], xmm0
.text:000000014D9036BF 8B 0D 33 A8 EA 06                       mov     ecx, dword ptr cs:aVrBenablestere_0+28h ; "e"
.text:000000014D9036C5 89 48 28                                mov     [rax+28h], ecx
.text:000000014D9036C8
.text:000000014D9036C8                         loc_14D9036C8:                          ; CODE XREF: sub_14D902EC0+3AC↑j
.text:000000014D9036C8                                                                 ; sub_14D902EC0+669↑j ...
.text:000000014D9036C8 48 8D 4D 17                             lea     rcx, [rbp+17h]
.text:000000014D9036CC FF 15 9E 70 F4 08                       call    cs:qword_15684A770
.text:000000014D9036D2 33 D2                                   xor     edx, edx
.text:000000014D9036D4 48 8D 4D 17                             lea     rcx, [rbp+17h]
.text:000000014D9036D8 E8 03 F0 17 F3                          call    sub_140A826E0
.text:000000014D9036DD 48 8D 4D 17                             lea     rcx, [rbp+17h]
.text:000000014D9036E1 FF 15 89 70 F4 08                       call    cs:qword_15684A770
.text:000000014D9036E7 48 85 C0                                test    rax, rax
.text:000000014D9036EA 0F 84 A5 00 00 00                       jz      loc_14D903795
.text:000000014D9036F0 48 8D 4D 17                             lea     rcx, [rbp+17h]
.text:000000014D9036F4 FF 15 76 70 F4 08                       call    cs:qword_15684A770
.text:000000014D9036FA 48 8B C8                                mov     rcx, rax
.text:000000014D9036FD E8 CE 78 EA FE                          call    sub_14C7AAFD0
.text:000000014D903702 E9 8E 00 00 00                          jmp     loc_14D903795
.text:000000014D903707                         ; ---------------------------------------------------------------------------
.text:000000014D903707
.text:000000014D903707                         loc_14D903707:                          ; CODE XREF: sub_14D902EC0+5DD↑j
.text:000000014D903707 48 8D 15 6A A8 EA 06                    lea     rdx, aHmdversion ; "HMDVERSION"
.text:000000014D90370E E8 2D 39 F9 FE                          call    sub_14C897040
.text:000000014D903713 84 C0                                   test    al, al
.text:000000014D903715 74 7E                                   jz      short loc_14D903795
.text:000000014D903717 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D90371B FF 15 4F 70 F4 08                       call    cs:qword_15684A770
.text:000000014D903721 48 8D 0D 88 A4 EA 06                    lea     rcx, aVrHmdversion ; "vr.HMDVersion"
.text:000000014D903728 48 3B C1                                cmp     rax, rcx
.text:000000014D90372B 74 68                                   jz      short loc_14D903795
.text:000000014D90372D 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903731 FF 15 39 70 F4 08                       call    cs:qword_15684A770
.text:000000014D903737 8B 4D F3                                mov     ecx, [rbp-0Dh]
.text:000000014D90373A 89 5D EF                                mov     [rbp-11h], ebx
.text:000000014D90373D 83 F9 0E                                cmp     ecx, 0Eh
.text:000000014D903740 74 14                                   jz      short loc_14D903756
.text:000000014D903742 BA 0E 00 00 00                          mov     edx, 0Eh
.text:000000014D903747 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D90374B E8 90 F0 17 F3                          call    sub_140A827E0
.text:000000014D903750 8B 4D F3                                mov     ecx, [rbp-0Dh]
.text:000000014D903753 8B 5D EF                                mov     ebx, [rbp-11h]
.text:000000014D903756
.text:000000014D903756                         loc_14D903756:                          ; CODE XREF: sub_14D902EC0+880↑j
.text:000000014D903756 8D 43 0E                                lea     eax, [rbx+0Eh]
.text:000000014D903759 89 45 EF                                mov     [rbp-11h], eax
.text:000000014D90375C 3B C1                                   cmp     eax, ecx
.text:000000014D90375E 7E 0B                                   jle     short loc_14D90376B
.text:000000014D903760 8B D3                                   mov     edx, ebx
.text:000000014D903762 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903766 E8 95 EF 17 F3                          call    sub_140A82700
.text:000000014D90376B
.text:000000014D90376B                         loc_14D90376B:                          ; CODE XREF: sub_14D902EC0+89E↑j
.text:000000014D90376B 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D90376F FF 15 FB 6F F4 08                       call    cs:qword_15684A770
.text:000000014D903775 0F 10 05 34 A4 EA 06                    movups  xmm0, xmmword ptr cs:aVrHmdversion ; "vr.HMDVersion"
.text:000000014D90377C 0F 11 00                                movups  xmmword ptr [rax], xmm0
.text:000000014D90377F F2 0F 10 05 39 A4 EA 06                 movsd   xmm0, qword ptr cs:aVrHmdversion+10h ; "rsion"
.text:000000014D903787 F2 0F 11 40 10                          movsd   qword ptr [rax+10h], xmm0
.text:000000014D90378C 8B 0D 36 A4 EA 06                       mov     ecx, dword ptr cs:aVrHmdversion+18h ; "n"
.text:000000014D903792 89 48 18                                mov     [rax+18h], ecx
.text:000000014D903795
.text:000000014D903795                         loc_14D903795:                          ; CODE XREF: sub_14D902EC0+1AD↑j
.text:000000014D903795                                                                 ; sub_14D902EC0+1C5↑j ...
.text:000000014D903795 8B 45 EF                                mov     eax, [rbp-11h]
.text:000000014D903798 83 F8 01                                cmp     eax, 1
.text:000000014D90379B 7E 74                                   jle     short loc_14D903811
.text:000000014D90379D 85 C0                                   test    eax, eax
.text:000000014D90379F 74 0C                                   jz      short loc_14D9037AD
.text:000000014D9037A1 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D9037A5 FF 15 C5 6F F4 08                       call    cs:qword_15684A770
.text:000000014D9037AB EB 03                                   jmp     short loc_14D9037B0
.text:000000014D9037AD                         ; ---------------------------------------------------------------------------
.text:000000014D9037AD
.text:000000014D9037AD                         loc_14D9037AD:                          ; CODE XREF: sub_14D902EC0+8DF↑j
.text:000000014D9037AD 49 8B C6                                mov     rax, r14
.text:000000014D9037B0
.text:000000014D9037B0                         loc_14D9037B0:                          ; CODE XREF: sub_14D902EC0+8EB↑j
.text:000000014D9037B0 4D 8B CC                                mov     r9, r12
.text:000000014D9037B3 48 89 44 24 20                          mov     [rsp+20h], rax
.text:000000014D9037B8 4C 8D 05 D1 A7 EA 06                    lea     r8, aSIsDeprecatedU ; "%s is deprecated. Use %s instead"
.text:000000014D9037BF BA 03 00 00 00                          mov     edx, 3
.text:000000014D9037C4 49 8B CF                                mov     rcx, r15
.text:000000014D9037C7 E8 44 DC F7 FE                          call    sub_14C881410
.text:000000014D9037CC 48 8B 1D 1D 9A A5 09                    mov     rbx, cs:qword_15735D1F0
.text:000000014D9037D3 48 85 DB                                test    rbx, rbx
.text:000000014D9037D6 75 0C                                   jnz     short loc_14D9037E4
.text:000000014D9037D8 E8 43 AE E8 FE                          call    sub_14C78E620
.text:000000014D9037DD 48 8B 1D 0C 9A A5 09                    mov     rbx, cs:qword_15735D1F0
.text:000000014D9037E4
.text:000000014D9037E4                         loc_14D9037E4:                          ; CODE XREF: sub_14D902EC0+916↑j
.text:000000014D9037E4 83 7D EF 00                             cmp     dword ptr [rbp-11h], 0
.text:000000014D9037E8 74 0D                                   jz      short loc_14D9037F7
.text:000000014D9037EA 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D9037EE FF 15 7C 6F F4 08                       call    cs:qword_15684A770
.text:000000014D9037F4 4C 8B F0                                mov     r14, rax
.text:000000014D9037F7
.text:000000014D9037F7                         loc_14D9037F7:                          ; CODE XREF: sub_14D902EC0+928↑j
.text:000000014D9037F7 48 8B 03                                mov     rax, [rbx]
.text:000000014D9037FA 4D 8B CD                                mov     r9, r13
.text:000000014D9037FD 4D 8B C7                                mov     r8, r15
.text:000000014D903800 49 8B D6                                mov     rdx, r14
.text:000000014D903803 48 8B CB                                mov     rcx, rbx
.text:000000014D903806 FF 90 18 01 00 00                       call    qword ptr [rax+118h]
.text:000000014D90380C 0F B6 D8                                movzx   ebx, al
.text:000000014D90380F EB 02                                   jmp     short loc_14D903813
.text:000000014D903811                         ; ---------------------------------------------------------------------------
.text:000000014D903811
.text:000000014D903811                         loc_14D903811:                          ; CODE XREF: sub_14D902EC0+8DB↑j
.text:000000014D903811 32 DB                                   xor     bl, bl
.text:000000014D903813
.text:000000014D903813                         loc_14D903813:                          ; CODE XREF: sub_14D902EC0+94F↑j
.text:000000014D903813 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903817 FF 15 53 6F F4 08                       call    cs:qword_15684A770
.text:000000014D90381D 33 D2                                   xor     edx, edx
.text:000000014D90381F 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903823 E8 B8 EE 17 F3                          call    sub_140A826E0
.text:000000014D903828 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D90382C FF 15 3E 6F F4 08                       call    cs:qword_15684A770
.text:000000014D903832 4C 8B 7C 24 70                          mov     r15, [rsp+70h]
.text:000000014D903837 4C 8B 74 24 78                          mov     r14, [rsp+78h]
.text:000000014D90383C 4C 8B AC 24 80 00 00 00                 mov     r13, [rsp+80h]
.text:000000014D903844 4C 8B A4 24 88 00 00 00                 mov     r12, [rsp+88h]
.text:000000014D90384C 48 85 C0                                test    rax, rax
.text:000000014D90384F 74 12                                   jz      short loc_14D903863
.text:000000014D903851 48 8D 4D E7                             lea     rcx, [rbp-19h]
.text:000000014D903855 FF 15 15 6F F4 08                       call    cs:qword_15684A770
.text:000000014D90385B 48 8B C8                                mov     rcx, rax
.text:000000014D90385E E8 6D 77 EA FE                          call    sub_14C7AAFD0
.text:000000014D903863
.text:000000014D903863                         loc_14D903863:                          ; CODE XREF: sub_14D902EC0+98F↑j
.text:000000014D903863 0F B6 C3                                movzx   eax, bl
.text:000000014D903866 48 81 C4 98 00 00 00                    add     rsp, 98h
.text:000000014D90386D 5B                                      pop     rbx
.text:000000014D90386E 5D                                      pop     rbp
.text:000000014D90386F C3                                      retn
.text:000000014D90386F                         sub_14D902EC0   endp
.text:000000014D90386F
.text:000000014D903870
.text:000000014D903870                         ; =============== S U B R O U T I N E =======================================
.text:000000014D903870
.text:000000014D903870
.text:000000014D903870                         sub_14D903870   proc near
.text:000000014D903870 40 53                                   push    rbx
.text:000000014D903872 48 83 EC 20                             sub     rsp, 20h
.text:000000014D903876 48 8B D9                                mov     rbx, rcx
.text:000000014D903879 B9 20 00 00 00                          mov     ecx, 20h ; ' '
.text:000000014D90387E E8 1D 57 18 F3                          call    sub_140A88FA0
.text:000000014D903883 48 85 C0                                test    rax, rax
.text:000000014D903886 74 24                                   jz      short loc_14D9038AC
.text:000000014D903888 48 8D 0D 51 C3 EA 06                    lea     rcx, unk_1547AFBE0
.text:000000014D90388F 48 89 08                                mov     [rax], rcx
.text:000000014D903892 48 8B 53 08                             mov     rdx, [rbx+8]
.text:000000014D903896 48 89 50 08                             mov     [rax+8], rdx
.text:000000014D90389A 48 8B 4B 18                             mov     rcx, [rbx+18h]
.text:000000014D90389E 48 89 48 18                             mov     [rax+18h], rcx
.text:000000014D9038A2 48 8D 0D 8F C3 EA 06                    lea     rcx, unk_1547AFC38
.text:000000014D9038A9 48 89 08                                mov     [rax], rcx
.text:000000014D9038AC
.text:000000014D9038AC                         loc_14D9038AC:                          ; CODE XREF: sub_14D903870+16↑j
.text:000000014D9038AC 48 83 C4 20                             add     rsp, 20h
.text:000000014D9038B0 5B                                      pop     rbx
.text:000000014D9038B1 C3                                      retn
.text:000000014D9038B1                         sub_14D903870   endp
.text:000000014D9038B1
.text:000000014D9038B1                         ; ---------------------------------------------------------------------------
.text:000000014D9038B2 CC CC CC CC CC CC CC CC…                align 20h
.text:000000014D9038C0
.text:000000014D9038C0                         ; =============== S U B R O U T I N E =======================================
.text:000000014D9038C0
.text:000000014D9038C0
.text:000000014D9038C0                         sub_14D9038C0   proc near
.text:000000014D9038C0
.text:000000014D9038C0                         var_48          = byte ptr -48h
.text:000000014D9038C0                         var_18          = qword ptr -18h
.text:000000014D9038C0
.text:000000014D9038C0 40 53                                   push    rbx
.text:000000014D9038C2 48 83 EC 60                             sub     rsp, 60h
.text:000000014D9038C6 48 8B 05 73 1A 4C 09                    mov     rax, cs:off_156DC5340
.text:000000014D9038CD 48 33 C4                                xor     rax, rsp
.text:000000014D9038D0 48 89 44 24 50                          mov     [rsp+50h], rax
.text:000000014D9038D5 48 8B D9                                mov     rbx, rcx
.text:000000014D9038D8 E8 83 5E 98 00                          call    sub_14E289760
.text:000000014D9038DD 48 8D 54 24 20                          lea     rdx, [rsp+20h]
.text:000000014D9038E2 48 8B CB                                mov     rcx, rbx

.text:000000014D9038E5 E8 26 7C 9C 00                          call    sub_14E2CB510     //***** ตรงนี้

.text:000000014D9038EA 48 8B CB                                mov     rcx, rbx
.text:000000014D9038ED 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.text:000000014D9038F0 0F 11 83 D0 05 00 00                    movups  xmmword ptr [rbx+5D0h], xmm0
.text:000000014D9038F7 0F 10 48 10                             movups  xmm1, xmmword ptr [rax+10h]
.text:000000014D9038FB 0F 11 8B E0 05 00 00                    movups  xmmword ptr [rbx+5E0h], xmm1
.text:000000014D903902 0F 10 40 20                             movups  xmm0, xmmword ptr [rax+20h]
.text:000000014D903906 0F 11 83 F0 05 00 00                    movups  xmmword ptr [rbx+5F0h], xmm0
.text:000000014D90390D E8 4E 85 20 F3                          call    sub_140B0BE60
.text:000000014D903912 0F 10 40 20                             movups  xmm0, xmmword ptr [rax+20h]
.text:000000014D903916 0F 28 C8                                movaps  xmm1, xmm0
.text:000000014D903919 0F 28 D0                                movaps  xmm2, xmm0
.text:000000014D90391C 0F C6 D0 AA                             shufps  xmm2, xmm0, 0AAh
.text:000000014D903920 0F C6 C8 55                             shufps  xmm1, xmm0, 55h ; 'U'
.text:000000014D903924 0F 14 C1                                unpcklps xmm0, xmm1
.text:000000014D903927 F2 0F 11 83 00 06 00 00                 movsd   qword ptr [rbx+600h], xmm0
.text:000000014D90392F F3 0F 11 93 08 06 00 00                 movss   dword ptr [rbx+608h], xmm2
.text:000000014D903937 48 8B 4C 24 50                          mov     rcx, [rsp+50h]
.text:000000014D90393C 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014D90393F E8 1C C5 95 02                          call    __security_check_cookie
.text:000000014D903944 48 83 C4 60                             add     rsp, 60h
.text:000000014D903948 5B                                      pop     rbx
.text:000000014D903949 C3                                      retn
.text:000000014D903949                         sub_14D9038C0   endp
.text:000000014D903949
.text:000000014D903949                         ; ---------------------------------------------------------------------------
.text:000000014D90394A CC CC CC CC CC CC                       align 10h
.text:000000014D903950
.text:000000014D903950                         ; =============== S U B R O U T I N E =======================================
.text:000000014D903950
.text:000000014D903950
.text:000000014D903950                         sub_14D903950   proc near               ; CODE XREF: sub_14D90C000+19F↓p
.text:000000014D903950                                                                 ; sub_14D90C000:loc_14D90C1F0↓p
.text:000000014D903950
.text:000000014D903950                         arg_0           = qword ptr  8
.text:000000014D903950                         arg_8           = qword ptr  10h
.text:000000014D903950
.text:000000014D903950 48 89 5C 24 08                          mov     [rsp+8], rbx
.text:000000014D903955 48 89 6C 24 10                          mov     [rsp+10h], rbp
.text:000000014D90395A 56                                      push    rsi
.text:000000014D90395B 57                                      push    rdi
.text:000000014D90395C 41 54                                   push    r12
.text:000000014D90395E 41 56                                   push    r14
.text:000000014D903960 41 57                                   push    r15
.text:000000014D903962 48 83 EC 20                             sub     rsp, 20h
.text:000000014D903966 45 33 E4                                xor     r12d, r12d
.text:000000014D903969 45 8B F8                                mov     r15d, r8d
.text:000000014D90396C 48 8B F2                                mov     rsi, rdx
.text:000000014D90396F 4C 8B F1                                mov     r14, rcx
.text:000000014D903972 48 85 D2                                test    rdx, rdx
.text:000000014D903975 74 05                                   jz      short loc_14D90397C
.text:000000014D903977 8B 6A 28                                mov     ebp, [rdx+28h]
.text:000000014D90397A EB 03                                   jmp     short loc_14D90397F
.text:000000014D90397C                         ; ---------------------------------------------------------------------------
.text:000000014D90397C
.text:000000014D90397C                         loc_14D90397C:                          ; CODE XREF: sub_14D903950+25↑j
.text:000000014D90397C 41 8B EC                                mov     ebp, r12d
.text:000000014D90397F
.text:000000014D90397F                         loc_14D90397F:                          ; CODE XREF: sub_14D903950+2A↑j
.text:000000014D90397F E8 9C 6E E6 FE                          call    sub_14C76A820
.text:000000014D903984 48 8B F8                                mov     rdi, rax
.text:000000014D903987 8B 08                                   mov     ecx, [rax]
.text:000000014D903989 FF 15 51 75 C7 02                       call    cs:qword_15057AEE0
.text:000000014D90398F 48 8B D8                                mov     rbx, rax
.text:000000014D903992 48 85 C0                                test    rax, rax
.text:000000014D903995 75 2D                                   jnz     short loc_14D9039C4
.text:000000014D903997 B9 18 00 00 00                          mov     ecx, 18h
.text:000000014D90399C E8 2F 94 1B F5                          call    sub_142ABCDD0
.text:000000014D9039A1 48 8B D8                                mov     rbx, rax
.text:000000014D9039A4 48 85 C0                                test    rax, rax
.text:000000014D9039A7 74 0D                                   jz      short loc_14D9039B6
.text:000000014D9039A9 4C 89 20                                mov     [rax], r12
.text:000000014D9039AC 4C 89 60 08                             mov     [rax+8], r12
.text:000000014D9039B0 44 89 60 10                             mov     [rax+10h], r12d
.text:000000014D9039B4 EB 03                                   jmp     short loc_14D9039B9
.text:000000014D9039B6                         ; ---------------------------------------------------------------------------
.text:000000014D9039B6
.text:000000014D9039B6                         loc_14D9039B6:                          ; CODE XREF: sub_14D903950+57↑j
.text:000000014D9039B6 49 8B DC                                mov     rbx, r12
.text:000000014D9039B9
.text:000000014D9039B9                         loc_14D9039B9:                          ; CODE XREF: sub_14D903950+64↑j
.text:000000014D9039B9 8B 0F                                   mov     ecx, [rdi]
.text:000000014D9039BB 48 8B D3                                mov     rdx, rbx
.text:000000014D9039BE FF 15 24 75 C7 02                       call    cs:qword_15057AEE8
.text:000000014D9039C4
.text:000000014D9039C4                         loc_14D9039C4:                          ; CODE XREF: sub_14D903950+45↑j
.text:000000014D9039C4 48 8B 4B 08                             mov     rcx, [rbx+8]
.text:000000014D9039C8 48 85 C9                                test    rcx, rcx
.text:000000014D9039CB 75 64                                   jnz     short loc_14D903A31
.text:000000014D9039CD 48 8B 0B                                mov     rcx, [rbx]
.text:000000014D9039D0 48 85 C9                                test    rcx, rcx
.text:000000014D9039D3 74 09                                   jz      short loc_14D9039DE
.text:000000014D9039D5 48 89 4B 08                             mov     [rbx+8], rcx
.text:000000014D9039D9 4C 89 23                                mov     [rbx], r12
.text:000000014D9039DC EB 4C                                   jmp     short loc_14D903A2A
.text:000000014D9039DE                         ; ---------------------------------------------------------------------------
.text:000000014D9039DE
.text:000000014D9039DE                         loc_14D9039DE:                          ; CODE XREF: sub_14D903950+83↑j
.text:000000014D9039DE 48 8D 4F 08                             lea     rcx, [rdi+8]
.text:000000014D9039E2 E8 39 C5 1A F3                          call    sub_140AAFF20
.text:000000014D9039E7 48 89 43 08                             mov     [rbx+8], rax
.text:000000014D9039EB 48 8B C8                                mov     rcx, rax
.text:000000014D9039EE 48 85 C0                                test    rax, rax
.text:000000014D9039F1 75 37                                   jnz     short loc_14D903A2A
.text:000000014D9039F3 33 D2                                   xor     edx, edx
.text:000000014D9039F5 B9 00 20 00 00                          mov     ecx, 2000h
.text:000000014D9039FA E8 31 45 EB FE                          call    sub_14C7B7F30
.text:000000014D9039FF 48 89 43 08                             mov     [rbx+8], rax
.text:000000014D903A03 BA 1F 00 00 00                          mov     edx, 1Fh
.text:000000014D903A08 0F 1F 84 00 00 00 00 00                 nop     dword ptr [rax+rax+00000000h]
.text:000000014D903A10
.text:000000014D903A10                         loc_14D903A10:                          ; CODE XREF: sub_14D903950+D1↓j
.text:000000014D903A10 48 8D 88 00 01 00 00                    lea     rcx, [rax+100h]
.text:000000014D903A17 48 89 08                                mov     [rax], rcx
.text:000000014D903A1A 48 8B C1                                mov     rax, rcx
.text:000000014D903A1D 48 83 EA 01                             sub     rdx, 1
.text:000000014D903A21 75 ED                                   jnz     short loc_14D903A10
.text:000000014D903A23 4C 89 21                                mov     [rcx], r12
.text:000000014D903A26 48 8B 4B 08                             mov     rcx, [rbx+8]
.text:000000014D903A2A
.text:000000014D903A2A                         loc_14D903A2A:                          ; CODE XREF: sub_14D903950+8C↑j
.text:000000014D903A2A                                                                 ; sub_14D903950+A1↑j
.text:000000014D903A2A C7 43 10 20 00 00 00                    mov     dword ptr [rbx+10h], 20h ; ' '
.text:000000014D903A31
.text:000000014D903A31                         loc_14D903A31:                          ; CODE XREF: sub_14D903950+7B↑j
.text:000000014D903A31 48 8B 01                                mov     rax, [rcx]
.text:000000014D903A34 FF 4B 10                                dec     dword ptr [rbx+10h]
.text:000000014D903A37 48 89 43 08                             mov     [rbx+8], rax
.text:000000014D903A3B 48 8D 05 3E 4D DC 02                    lea     rax, off_1506C8780
.text:000000014D903A42 48 8B 5C 24 50                          mov     rbx, [rsp+50h]
.text:000000014D903A47 48 89 01                                mov     [rcx], rax
.text:000000014D903A4A 8D 45 01                                lea     eax, [rbp+1]
.text:000000014D903A4D 48 8B 6C 24 58                          mov     rbp, [rsp+58h]
.text:000000014D903A52 C7 41 08 FF 00 00 00                    mov     dword ptr [rcx+8], 0FFh
.text:000000014D903A59 89 41 0C                                mov     [rcx+0Ch], eax
.text:000000014D903A5C 48 8D 05 5D C1 EA 06                    lea     rax, off_1547AFBC0
.text:000000014D903A63 48 89 01                                mov     [rcx], rax
.text:000000014D903A66 49 8B C6                                mov     rax, r14
.text:000000014D903A69 44 88 61 20                             mov     [rcx+20h], r12b
.text:000000014D903A6D 4C 89 61 28                             mov     [rcx+28h], r12
.text:000000014D903A71 49 89 0E                                mov     [r14], rcx
.text:000000014D903A74 49 89 76 08                             mov     [r14+8], rsi
.text:000000014D903A78 45 89 7E 10                             mov     [r14+10h], r15d
.text:000000014D903A7C 48 83 C4 20                             add     rsp, 20h
.text:000000014D903A80 41 5F                                   pop     r15
.text:000000014D903A82 41 5E                                   pop     r14
.text:000000014D903A84 41 5C                                   pop     r12
.text:000000014D903A86 5F                                      pop     rdi
.text:000000014D903A87 5E                                      pop     rsi
.text:000000014D903A88 C3                                      retn
.text:000000014D903A88                         sub_14D903950   endp
.text:000000014D903A88
.text:000000014D903A88                         ; ---------------------------------------------------------------------------
.text:000000014D903A89 CC CC CC CC CC CC CC                    align 10h
.text:000000014D903A90
.text:000000014D903A90                         ; =============== S U B R O U T I N E =======================================
.text:000000014D903A90
.text:000000014D903A90
.text:000000014D903A90                         sub_14D903A90   proc near               ; CODE XREF: sub_14D90B280+151↓p
.text:000000014D903A90                                                                 ; sub_14D90B280:loc_14D90B437↓p
.text:000000014D903A90
.text:000000014D903A90                         arg_0           = qword ptr  8
.text:000000014D903A90                         arg_8           = qword ptr  10h
.text:000000014D903A90
.text:000000014D903A90 48 89 5C 24 08                          mov     [rsp+8], rbx
.text:000000014D903A95 48 89 6C 24 10                          mov     [rsp+10h], rbp
.text:000000014D903A9A 56                                      push    rsi
.text:000000014D903A9B 57                                      push    rdi
.text:000000014D903A9C 41 54                                   push    r12
.text:000000014D903A9E 41 56                                   push    r14
.text:000000014D903AA0 41 57                                   push    r15
.text:000000014D903AA2 48 83 EC 20                             sub     rsp, 20h
.text:000000014D903AA6 45 33 E4                                xor     r12d, r12d
.text:000000014D903AA9 45 8B F8                                mov     r15d, r8d
.text:000000014D903AAC 48 8B F2                                mov     rsi, rdx
.text:000000014D903AAF 4C 8B F1                                mov     r14, rcx
.text:000000014D903AB2 48 85 D2                                test    rdx, rdx
.text:000000014D903AB5 74 05                                   jz      short loc_14D903ABC
.text:000000014D903AB7 8B 6A 28                                mov     ebp, [rdx+28h]
.text:000000014D903ABA EB 03                                   jmp     short loc_14D903ABF
.text:000000014D903ABC                         ; ---------------------------------------------------------------------------
.text:000000014D903ABC
.text:000000014D903ABC                         loc_14D903ABC:                          ; CODE XREF: sub_14D903A90+25↑j
.text:000000014D903ABC 41 8B EC                                mov     ebp, r12d
.text:000000014D903ABF
.text:000000014D903ABF                         loc_14D903ABF:                          ; CODE XREF: sub_14D903A90+2A↑j
.text:000000014D903ABF E8 5C 6D E6 FE                          call    sub_14C76A820
.text:000000014D903AC4 48 8B F8                                mov     rdi, rax
.text:000000014D903AC7 8B 08                                   mov     ecx, [rax]
.text:000000014D903AC9 FF 15 11 74 C7 02                       call    cs:qword_15057AEE0
.text:000000014D903ACF 48 8B D8                                mov     rbx, rax
.text:000000014D903AD2 48 85 C0                                test    rax, rax
.text:000000014D903AD5 75 2D                                   jnz     short loc_14D903B04
.text:000000014D903AD7 B9 18 00 00 00                          mov     ecx, 18h
.text:000000014D903ADC E8 EF 92 1B F5                          call    sub_142ABCDD0
.text:000000014D903AE1 48 8B D8                                mov     rbx, rax
.text:000000014D903AE4 48 85 C0                                test    rax, rax
.text:000000014D903AE7 74 0D                                   jz      short loc_14D903AF6
.text:000000014D903AE9 4C 89 20                                mov     [rax], r12
.text:000000014D903AEC 4C 89 60 08                             mov     [rax+8], r12
.text:000000014D903AF0 44 89 60 10                             mov     [rax+10h], r12d
.text:000000014D903AF4 EB 03                                   jmp     short loc_14D903AF9
.text:000000014D903AF6                         ; ---------------------------------------------------------------------------
.text:000000014D903AF6
.text:000000014D903AF6                         loc_14D903AF6:                          ; CODE XREF: sub_14D903A90+57↑j
.text:000000014D903AF6 49 8B DC                                mov     rbx, r12
.text:000000014D903AF9
.text:000000014D903AF9                         loc_14D903AF9:                          ; CODE XREF: sub_14D903A90+64↑j
.text:000000014D903AF9 8B 0F                                   mov     ecx, [rdi]
.text:000000014D903AFB 48 8B D3                                mov     rdx, rbx
.text:000000014D903AFE FF 15 E4 73 C7 02                       call    cs:qword_15057AEE8
.text:000000014D903B04
.text:000000014D903B04                         loc_14D903B04:                          ; CODE XREF: sub_14D903A90+45↑j
.text:000000014D903B04 48 8B 4B 08                             mov     rcx, [rbx+8]
.text:000000014D903B08 48 85 C9                                test    rcx, rcx
.text:000000014D903B0B 75 64                                   jnz     short loc_14D903B71
.text:000000014D903B0D 48 8B 0B                                mov     rcx, [rbx]
.text:000000014D903B10 48 85 C9                                test    rcx, rcx
.text:000000014D903B13 74 09                                   jz      short loc_14D903B1E
.text:000000014D903B15 48 89 4B 08                             mov     [rbx+8], rcx
.text:000000014D903B19 4C 89 23                                mov     [rbx], r12
.text:000000014D903B1C EB 4C                                   jmp     short loc_14D903B6A
.text:000000014D903B1E                         ; ---------------------------------------------------------------------------
.text:000000014D903B1E
.text:000000014D903B1E                         loc_14D903B1E:                          ; CODE XREF: sub_14D903A90+83↑j
.text:000000014D903B1E 48 8D 4F 08                             lea     rcx, [rdi+8]
.text:000000014D903B22 E8 F9 C3 1A F3                          call    sub_140AAFF20
.text:000000014D903B27 48 89 43 08                             mov     [rbx+8], rax
.text:000000014D903B2B 48 8B C8                                mov     rcx, rax
.text:000000014D903B2E 48 85 C0                                test    rax, rax
.text:000000014D903B31 75 37                                   jnz     short loc_14D903B6A
.text:000000014D903B33 33 D2                                   xor     edx, edx
.text:000000014D903B35 B9 00 20 00 00                          mov     ecx, 2000h
.text:000000014D903B3A E8 F1 43 EB FE                          call    sub_14C7B7F30
.text:000000014D903B3F 48 89 43 08                             mov     [rbx+8], rax
.text:000000014D903B43 BA 1F 00 00 00                          mov     edx, 1Fh
.text:000000014D903B48 0F 1F 84 00 00 00 00 00                 nop     dword ptr [rax+rax+00000000h]
.text:000000014D903B50
.text:000000014D903B50                         loc_14D903B50:                          ; CODE XREF: sub_14D903A90+D1↓j
.text:000000014D903B50 48 8D 88 00 01 00 00                    lea     rcx, [rax+100h]
.text:000000014D903B57 48 89 08                                mov     [rax], rcx
.text:000000014D903B5A 48 8B C1                                mov     rax, rcx
.text:000000014D903B5D 48 83 EA 01                             sub     rdx, 1
.text:000000014D903B61 75 ED                                   jnz     short loc_14D903B50
.text:000000014D903B63 4C 89 21                                mov     [rcx], r12
.text:000000014D903B66 48 8B 4B 08                             mov     rcx, [rbx+8]
.text:000000014D903B6A
.text:000000014D903B6A                         loc_14D903B6A:                          ; CODE XREF: sub_14D903A90+8C↑j
.text:000000014D903B6A                                                                 ; sub_14D903A90+A1↑j
.text:000000014D903B6A C7 43 10 20 00 00 00                    mov     dword ptr [rbx+10h], 20h ; ' '
.text:000000014D903B71
.text:000000014D903B71                         loc_14D903B71:                          ; CODE XREF: sub_14D903A90+7B↑j
.text:000000014D903B71 48 8B 01                                mov     rax, [rcx]
.text:000000014D903B74 FF 4B 10                                dec     dword ptr [rbx+10h]
.text:000000014D903B77 48 89 43 08                             mov     [rbx+8], rax
.text:000000014D903B7B 48 8D 05 FE 4B DC 02                    lea     rax, off_1506C8780
.text:000000014D903B82 48 8B 5C 24 50                          mov     rbx, [rsp+50h]
.text:000000014D903B87 48 89 01                                mov     [rcx], rax
.text:000000014D903B8A 8D 45 01                                lea     eax, [rbp+1]
.text:000000014D903B8D 48 8B 6C 24 58                          mov     rbp, [rsp+58h]
.text:000000014D903B92 C7 41 08 FF 00 00 00                    mov     dword ptr [rcx+8], 0FFh
.text:000000014D903B99 89 41 0C                                mov     [rcx+0Ch], eax
.text:000000014D903B9C 48 8D 05 2D C0 EA 06                    lea     rax, off_1547AFBD0
.text:000000014D903BA3 48 89 01                                mov     [rcx], rax
.text:000000014D903BA6 49 8B C6                                mov     rax, r14
.text:000000014D903BA9 44 88 61 60                             mov     [rcx+60h], r12b
.text:000000014D903BAD 4C 89 61 68                             mov     [rcx+68h], r12
.text:000000014D903BB1 49 89 0E                                mov     [r14], rcx
.text:000000014D903BB4 49 89 76 08                             mov     [r14+8], rsi
.text:000000014D903BB8 45 89 7E 10                             mov     [r14+10h], r15d
.text:000000014D903BBC 48 83 C4 20                             add     rsp, 20h
.text:000000014D903BC0 41 5F                                   pop     r15
.text:000000014D903BC2 41 5E                                   pop     r14
.text:000000014D903BC4 41 5C                                   pop     r12
.text:000000014D903BC6 5F                                      pop     rdi
.text:000000014D903BC7 5E                                      pop     rsi
.text:000000014D903BC8 C3                                      retn
.text:000000014D903BC8                         sub_14D903A90   endp
.text:000000014D903BC8
.text:000000014D903BC8                         ; ---------------------------------------------------------------------------
.text:000000014D903BC9 CC CC CC CC CC CC CC                    align 10h
.text:000000014D903BD0 48 8B 49 10                             mov     rcx, [rcx+10h]
.text:000000014D903BD4 48 85 C9                                test    rcx, rcx
.text:000000014D903BD7 74 0A                                   jz      short locret_14D903BE3
.text:000000014D903BD9 BA 01 00 00 00                          mov     edx, 1
.text:000000014D903BDE E9 BD C2 FF FF                          jmp     sub_14D8FFEA0
.text:000000014D903BE3                         ; ---------------------------------------------------------------------------
.text:000000014D903BE3
.text:000000014D903BE3                         locret_14D903BE3:                       ; CODE XREF: .text:000000014D903BD7↑j
.text:000000014D903BE3 C3                                      retn
.text:000000014D903BE3                         ; ---------------------------------------------------------------------------
.text:000000014D903BE4 CC CC CC CC CC CC CC CC…                align 10h
.text:000000014D903BF0
.text:000000014D903BF0                         ; =============== S U B R O U T I N E =======================================
.text:000000014D903BF0
.text:000000014D903BF0
.text:000000014D903BF0                         sub_14D903BF0   proc near
.text:000000014D903BF0 48 83 EC 28                             sub     rsp, 28h
.text:000000014D903BF4 48 8B 01                                mov     rax, [rcx]
.text:000000014D903BF7 FF 50 48                                call    qword ptr [rax+48h]
.text:000000014D903BFA 84 C0                                   test    al, al
.text:000000014D903BFC 0F 94 C0                                setz    al
.text:000000014D903BFF 48 83 C4 28                             add     rsp, 28h
.text:000000014D903C03 C3                                      retn
.text:000000014D903C03                         sub_14D903BF0   endp
.text:000000014D903C03
.text:000000014D903C03                         ; ---------------------------------------------------------------------------
.text:000000014D903C04 CC CC CC CC CC CC CC CC…                align 10h
.text:000000014D903C10 83 FA 02                                cmp     edx, 2
.text:000000014D903C13 0F 9F C0                                setnle  al
.text:000000014D903C16 C3                                      retn
.text:000000014D903C16                         ; ---------------------------------------------------------------------------
.text:000000014D903C17 CC CC CC CC CC CC CC CC…                align 20h
.text:000000014D903C20 85 D2                                   test    edx, edx
.text:000000014D903C22 0F 95 C0                                setnz   al
.text:000000014D903C25 C3                                      retn
.text:000000014D903C25                         ; ---------------------------------------------------------------------------
.text:000000014D903C26 CC CC CC CC CC CC CC CC…                align 10h
.text:000000014D903C30
.text:000000014D903C30                         ; =============== S U B R O U T I N E =======================================
.text:000000014D903C30
.text:000000014D903C30
.text:000000014D903C30                         sub_14D903C30   proc near               ; CODE XREF: sub_14D90F950+60↓p
.text:000000014D903C30
.text:000000014D903C30                         var_18          = qword ptr -18h
.text:000000014D903C30                         var_10          = qword ptr -10h
.text:000000014D903C30                         var_8           = qword ptr -8
.text:000000014D903C30                         arg_0           = qword ptr  8
.text:000000014D903C30                         arg_8           = qword ptr  10h
.text:000000014D903C30                         arg_10          = qword ptr  18h
.text:000000014D903C30
.text:000000014D903C30 48 83 EC 38                             sub     rsp, 38h
.text:000000014D903C34 48 85 C9                                test    rcx, rcx
.text:000000014D903C37 0F 84 2D 01 00 00                       jz      loc_14D903D6A
.text:000000014D903C3D 48 8B 81 90 05 00 00                    mov     rax, [rcx+590h]
.text:000000014D903C44 48 89 5C 24 48                          mov     [rsp+48h], rbx
.text:000000014D903C49 48 8D 1D B0 56 BE 09                    lea     rbx, unk_1574E9300
.text:000000014D903C50 48 89 6C 24 50                          mov     [rsp+50h], rbp
.text:000000014D903C55 8B A9 88 05 00 00                       mov     ebp, [rcx+588h]
.text:000000014D903C5B 48 89 74 24 30                          mov     [rsp+30h], rsi
.text:000000014D903C60 40 B6 10                                mov     sil, 10h
.text:000000014D903C63 48 89 7C 24 28                          mov     [rsp+28h], rdi
.text:000000014D903C68 40 32 FF                                xor     dil, dil
.text:000000014D903C6B 4C 89 74 24 20                          mov     [rsp+20h], r14
.text:000000014D903C70 45 33 F6                                xor     r14d, r14d
.text:000000014D903C73 48 89 44 24 40                          mov     [rsp+40h], rax
.text:000000014D903C78 45 8B D6                                mov     r10d, r14d
.text:000000014D903C7B 44 8B 5C 24 44                          mov     r11d, [rsp+44h]
.text:000000014D903C80
.text:000000014D903C80                         loc_14D903C80:                          ; CODE XREF: sub_14D903C30+93↓j
.text:000000014D903C80 45 8B CE                                mov     r9d, r14d
.text:000000014D903C83 48 8B CB                                mov     rcx, rbx
.text:000000014D903C86                                         db      66h, 66h
.text:000000014D903C86 66 66 0F 1F 84 00 00 00                 nop     word ptr [rax+rax+00000000h]
.text:000000014D903C86 00 00
.text:000000014D903C90
.text:000000014D903C90                         loc_14D903C90:                          ; CODE XREF: sub_14D903C30+7D↓j
.text:000000014D903C90 44 39 59 04                             cmp     [rcx+4], r11d
.text:000000014D903C94 41 0F 94 C0                             setz    r8b
.text:000000014D903C98 39 01                                   cmp     [rcx], eax
.text:000000014D903C9A 0F 94 C2                                setz    dl
.text:000000014D903C9D 44 84 C2                                test    dl, r8b
.text:000000014D903CA0 75 0F                                   jnz     short loc_14D903CB1
.text:000000014D903CA2 41 FF C1                                inc     r9d
.text:000000014D903CA5 48 83 C1 08                             add     rcx, 8
.text:000000014D903CA9 41 83 F9 02                             cmp     r9d, 2
.text:000000014D903CAD 72 E1                                   jb      short loc_14D903C90
.text:000000014D903CAF EB 07                                   jmp     short loc_14D903CB8
.text:000000014D903CB1                         ; ---------------------------------------------------------------------------
.text:000000014D903CB1
.text:000000014D903CB1                         loc_14D903CB1:                          ; CODE XREF: sub_14D903C30+70↑j
.text:000000014D903CB1 41 0F B6 F2                             movzx   esi, r10b
.text:000000014D903CB5 40 B7 01                                mov     dil, 1
.text:000000014D903CB8
.text:000000014D903CB8                         loc_14D903CB8:                          ; CODE XREF: sub_14D903C30+7F↑j
.text:000000014D903CB8 41 FF C2                                inc     r10d
.text:000000014D903CBB 48 83 C3 10                             add     rbx, 10h
.text:000000014D903CBF 41 83 FA 11                             cmp     r10d, 11h
.text:000000014D903CC3 7C BB                                   jl      short loc_14D903C80
.text:000000014D903CC5 40 84 FF                                test    dil, dil
.text:000000014D903CC8 0F 84 83 00 00 00                       jz      loc_14D903D51
.text:000000014D903CCE 65 48 8B 04 25 58 00 00                 mov     rax, gs:58h
.text:000000014D903CCE 00
.text:000000014D903CD7 8B 0D 0B 19 D1 09                       mov     ecx, cs:dword_1576155E8
.text:000000014D903CDD BA 04 02 00 00                          mov     edx, 204h
.text:000000014D903CE2 48 8B 3C C8                             mov     rdi, [rax+rcx*8]
.text:000000014D903CE6 48 03 FA                                add     rdi, rdx
.text:000000014D903CE9 8B 07                                   mov     eax, [rdi]
.text:000000014D903CEB 39 05 EF 57 BE 09                       cmp     cs:dword_1574E94E0, eax
.text:000000014D903CF1 7F 7C                                   jg      short loc_14D903D6F
.text:000000014D903CF3
.text:000000014D903CF3                         loc_14D903CF3:                          ; CODE XREF: sub_14D903C30+152↓j
.text:000000014D903CF3                                                                 ; sub_14D903C30+17D↓j
.text:000000014D903CF3 48 8B 1D DE 57 BE 09                    mov     rbx, cs:qword_1574E94D8
.text:000000014D903CFA E8 F1 65 E6 FE                          call    sub_14C76A2F0
.text:000000014D903CFF 48 8B D3                                mov     rdx, rbx
.text:000000014D903D02 48 8B C8                                mov     rcx, rax
.text:000000014D903D05 4C 8B 00                                mov     r8, [rax]
.text:000000014D903D08 41 FF 50 08                             call    qword ptr [r8+8]
.text:000000014D903D0C 85 C0                                   test    eax, eax
.text:000000014D903D0E 7E 41                                   jle     short loc_14D903D51
.text:000000014D903D10 8B 07                                   mov     eax, [rdi]
.text:000000014D903D12 39 05 C8 57 BE 09                       cmp     cs:dword_1574E94E0, eax
.text:000000014D903D18 0F 8F 94 00 00 00                       jg      loc_14D903DB2
.text:000000014D903D1E
.text:000000014D903D1E                         loc_14D903D1E:                          ; CODE XREF: sub_14D903C30+195↓j
.text:000000014D903D1E                                                                 ; sub_14D903C30+1C0↓j
.text:000000014D903D1E 48 8B 1D B3 57 BE 09                    mov     rbx, cs:qword_1574E94D8
.text:000000014D903D25 E8 C6 65 E6 FE                          call    sub_14C76A2F0
.text:000000014D903D2A 45 33 C0                                xor     r8d, r8d
.text:000000014D903D2D 48 8B D3                                mov     rdx, rbx
.text:000000014D903D30 48 8B C8                                mov     rcx, rax
.text:000000014D903D33 4C 8B 08                                mov     r9, [rax]
.text:000000014D903D36 41 FF 51 10                             call    qword ptr [r9+10h]
.text:000000014D903D3A 44 0F B6 C6                             movzx   r8d, sil
.text:000000014D903D3E 8B D5                                   mov     edx, ebp
.text:000000014D903D40 48 85 C0                                test    rax, rax
.text:000000014D903D43 48 8D 48 F8                             lea     rcx, [rax-8]
.text:000000014D903D47 49 0F 44 CE                             cmovz   rcx, r14
.text:000000014D903D4B 48 8B 01                                mov     rax, [rcx]
.text:000000014D903D4E FF 50 28                                call    qword ptr [rax+28h]
.text:000000014D903D51
.text:000000014D903D51                         loc_14D903D51:                          ; CODE XREF: sub_14D903C30+98↑j
.text:000000014D903D51                                                                 ; sub_14D903C30+DE↑j
.text:000000014D903D51 48 8B 7C 24 28                          mov     rdi, [rsp+38h+var_10]
.text:000000014D903D56 48 8B 74 24 30                          mov     rsi, [rsp+38h+var_8]
.text:000000014D903D5B 48 8B 6C 24 50                          mov     rbp, [rsp+38h+arg_10]
.text:000000014D903D60 48 8B 5C 24 48                          mov     rbx, [rsp+38h+arg_8]
.text:000000014D903D65 4C 8B 74 24 20                          mov     r14, [rsp+38h+var_18]
.text:000000014D903D6A
.text:000000014D903D6A                         loc_14D903D6A:                          ; CODE XREF: sub_14D903C30+7↑j
.text:000000014D903D6A 48 83 C4 38                             add     rsp, 38h
.text:000000014D903D6E C3                                      retn
.text:000000014D903D6F                         ; ---------------------------------------------------------------------------
.text:000000014D903D6F
.text:000000014D903D6F                         loc_14D903D6F:                          ; CODE XREF: sub_14D903C30+C1↑j
.text:000000014D903D6F 48 8D 0D 6A 57 BE 09                    lea     rcx, dword_1574E94E0
.text:000000014D903D76 E8 F9 BE 95 02                          call    sub_15025FC74
.text:000000014D903D7B 83 3D 5E 57 BE 09 FF                    cmp     cs:dword_1574E94E0, 0FFFFFFFFh
.text:000000014D903D82 0F 85 6B FF FF FF                       jnz     loc_14D903CF3
.text:000000014D903D88 41 B8 01 00 00 00                       mov     r8d, 1
.text:000000014D903D8E 48 8D 15 9B B4 EA 06                    lea     rdx, aMotiontracking ; "MotionTrackingSystemManagement"
.text:000000014D903D95 48 8D 0D 3C 57 BE 09                    lea     rcx, qword_1574E94D8
.text:000000014D903D9C E8 8F 16 FD FE                          call    sub_14C8D5430
.text:000000014D903DA1 48 8D 0D 38 57 BE 09                    lea     rcx, dword_1574E94E0
.text:000000014D903DA8 E8 5B BE 95 02                          call    sub_15025FC08
.text:000000014D903DAD E9 41 FF FF FF                          jmp     loc_14D903CF3
.text:000000014D903DB2                         ; ---------------------------------------------------------------------------
.text:000000014D903DB2
.text:000000014D903DB2                         loc_14D903DB2:                          ; CODE XREF: sub_14D903C30+E8↑j
.text:000000014D903DB2 48 8D 0D 27 57 BE 09                    lea     rcx, dword_1574E94E0
.text:000000014D903DB9 E8 B6 BE 95 02                          call    sub_15025FC74
.text:000000014D903DBE 83 3D 1B 57 BE 09 FF                    cmp     cs:dword_1574E94E0, 0FFFFFFFFh
.text:000000014D903DC5 0F 85 53 FF FF FF                       jnz     loc_14D903D1E
.text:000000014D903DCB 41 B8 01 00 00 00                       mov     r8d, 1
.text:000000014D903DD1 48 8D 15 58 B4 EA 06                    lea     rdx, aMotiontracking ; "MotionTrackingSystemManagement"
.text:000000014D903DD8 48 8D 0D F9 56 BE 09                    lea     rcx, qword_1574E94D8
.text:000000014D903DDF E8 4C 16 FD FE                          call    sub_14C8D5430
.text:000000014D903DE4 48 8D 0D F5 56 BE 09                    lea     rcx, dword_1574E94E0
.text:000000014D903DEB E8 18 BE 95 02                          call    sub_15025FC08
.text:000000014D903DF0 E9 29 FF FF FF                          jmp     loc_14D903D1E
.text:000000014D903DF0                         sub_14D903C30   endp
.text:000000014D903DF0
//-- ส่วน Sig เผื่อ

.text:000000015025FC74
.text:000000015025FC74                         ; =============== S U B R O U T I N E =======================================
.text:000000015025FC74
.text:000000015025FC74
.text:000000015025FC74                         sub_15025FC74   proc near               ; CODE XREF: sub_140A83840+1C94↑p
.text:000000015025FC74                                                                 ; sub_140A83840+1D03↑p ...
.text:000000015025FC74 40 53                                   push    rbx
.text:000000015025FC76 48 83 EC 20                             sub     rsp, 20h
.text:000000015025FC7A 48 8B D9                                mov     rbx, rcx
.text:000000015025FC7D 48 8D 0D 5C 59 3B 07                    lea     rcx, unk_1576155E0
.text:000000015025FC84 FF 15 F6 B7 31 00                       call    cs:qword_15057B480
.text:000000015025FC8A
.text:000000015025FC8A                         loc_15025FC8A:                          ; CODE XREF: sub_15025FC74+3B↓j
.text:000000015025FC8A 83 3B 00                                cmp     dword ptr [rbx], 0
.text:000000015025FC8D 75 22                                   jnz     short loc_15025FCB1
.text:000000015025FC8F 83 0B FF                                or      dword ptr [rbx], 0FFFFFFFFh
.text:000000015025FC92 EB 45                                   jmp     short loc_15025FCD9
.text:000000015025FC94                         ; ---------------------------------------------------------------------------
.text:000000015025FC94
.text:000000015025FC94                         loc_15025FC94:                          ; CODE XREF: sub_15025FC74+40↓j
.text:000000015025FC94 45 33 C9                                xor     r9d, r9d
.text:000000015025FC97 48 8D 15 42 59 3B 07                    lea     rdx, unk_1576155E0
.text:000000015025FC9E 41 83 C8 FF                             or      r8d, 0FFFFFFFFh
.text:000000015025FCA2 48 8D 0D 2F 59 3B 07                    lea     rcx, unk_1576155D8
.text:000000015025FCA9 FF 15 19 B1 31 00                       call    cs:qword_15057ADC8
.text:000000015025FCAF EB D9                                   jmp     short loc_15025FC8A
.text:000000015025FCB1                         ; ---------------------------------------------------------------------------
.text:000000015025FCB1
.text:000000015025FCB1                         loc_15025FCB1:                          ; CODE XREF: sub_15025FC74+19↑j
.text:000000015025FCB1 83 3B FF                                cmp     dword ptr [rbx], 0FFFFFFFFh
.text:000000015025FCB4 74 DE                                   jz      short loc_15025FC94
.text:000000015025FCB6 65 48 8B 04 25 58 00 00                 mov     rax, gs:58h
.text:000000015025FCB6 00
.text:000000015025FCBF 8B 0D 23 59 3B 07                       mov     ecx, cs:dword_1576155E8
.text:000000015025FCC5 41 B8 04 02 00 00                       mov     r8d, 204h
.text:000000015025FCCB 48 8B 14 C8                             mov     rdx, [rax+rcx*8]
.text:000000015025FCCF 8B 05 33 56 B6 06                       mov     eax, cs:dword_156DC5308
.text:000000015025FCD5 41 89 04 10                             mov     [r8+rdx], eax
.text:000000015025FCD9
.text:000000015025FCD9                         loc_15025FCD9:                          ; CODE XREF: sub_15025FC74+1E↑j
.text:000000015025FCD9 48 8D 0D 00 59 3B 07                    lea     rcx, unk_1576155E0
.text:000000015025FCE0 48 83 C4 20                             add     rsp, 20h
.text:000000015025FCE4 5B                                      pop     rbx
.text:000000015025FCE5 48 FF 25 8C B7 31 00                    jmp     cs:qword_15057B478
.text:000000015025FCE5                         sub_15025FC74   endp
.text:000000015025FCE5
.text:000000015025FCEC                         ; [0000001D BYTES: COLLAPSED FUNCTION __GSHandlerCheck. PRESS CTRL-NUMPAD+ TO EXPAND]
.text:000000015025FD09 CC CC CC                                align 4
.text:000000015025FD0C                         ; [0000005B BYTES: COLLAPSED FUNCTION __GSHandlerCheckCommon. PRESS CTRL-NUMPAD+ TO EXPAND]
.text:000000015025FD67 CC                                      align 8
.text:000000015025FD68                         ; [00000085 BYTES: COLLAPSED FUNCTION __GSHandlerCheck_SEH. PRESS CTRL-NUMPAD+ TO EXPAND]
.text:000000015025FDED CC CC CC CC CC CC CC CC…                align 20h
.text:000000015025FE00                         ; [0000004E BYTES: COLLAPSED FUNCTION __alloca_probe. PRESS CTRL-NUMPAD+ TO EXPAND]
.text:000000015025FE4E CC CC CC CC CC CC CC CC…                align 20h
.text:000000015025FE60
.text:000000015025FE60                         ; =============== S U B R O U T I N E =======================================
.text:000000015025FE60
.text:000000015025FE60                         ; Attributes: library function
.text:000000015025FE60
.text:000000015025FE60                         ; void __cdecl _security_check_cookie(uintptr_t StackCookie)
.text:000000015025FE60                         __security_check_cookie proc near       ; CODE XREF: sub_1400CF1A0+F0↑p
.text:000000015025FE60                                                                 ; sub_1400CF2B0+129↑p ...
.text:000000015025FE60 48 3B 0D D9 54 B6 06                    cmp     rcx, cs:off_156DC5340
.text:000000015025FE67 75 10                                   jnz     short loc_15025FE79
.text:000000015025FE69 48 C1 C1 10                             rol     rcx, 10h
.text:000000015025FE6D 66 F7 C1 FF FF                          test    cx, 0FFFFh
.text:000000015025FE72 75 01                                   jnz     short loc_15025FE75
.text:000000015025FE74 C3                                      retn
.text:000000015025FE75                         ; ---------------------------------------------------------------------------
.text:000000015025FE75
.text:000000015025FE75                         loc_15025FE75:                          ; CODE XREF: __security_check_cookie+12↑j
.text:000000015025FE75 48 C1 C9 10                             ror     rcx, 10h        ; StackCookie
.text:000000015025FE79
.text:000000015025FE79                         loc_15025FE79:                          ; CODE XREF: __security_check_cookie+7↑j
.text:000000015025FE79 E9 22 02 00 00                          jmp     __report_gsfailure
.text:000000015025FE79                         __security_check_cookie endp
.text:000000015025FE79
.text:000000015025FE79                         ; ---------------------------------------------------------------------------
.text:000000015025FE7E CC CC                                   align 20h
.text:000000015025FE80
.text:000000015025FE80                         ; =============== S U B R O U T I N E =======================================
.text:000000015025FE80
.text:000000015025FE80
.text:000000015025FE80                         sub_15025FE80   proc near               ; CODE XREF: sub_14DECB230+132↑p
.text:000000015025FE80                                                                 ; sub_15025FEA0+28↓j ...
.text:000000015025FE80 83 3D 11 55 B6 06 02                    cmp     cs:dword_156DC5398, 2
.text:000000015025FE87 0F 8D 13 19 00 00                       jge     sub_1502617A0
.text:000000015025FE8D E9 CE 0F 00 00                          jmp     sub_150260E60
.text:000000015025FE8D                         sub_15025FE80   endp
.text:000000015025FE8D
.text:000000015025FE8D                         ; ---------------------------------------------------------------------------
.text:000000015025FE92 66 66 66 66 66 66 0F 1F…                align 20h
.text:000000015025FEA0
.text:000000015025FEA0                         ; =============== S U B R O U T I N E =======================================
.text:000000015025FEA0
.text:000000015025FEA0
.text:000000015025FEA0                         sub_15025FEA0   proc near               ; CODE XREF: sub_140BE0CA0+3D8↑p
.text:000000015025FEA0                                                                 ; sub_140D74F30+77C↑p ...
.text:000000015025FEA0 F3 0F 10 D0                             movss   xmm2, xmm0
.text:000000015025FEA4 66 0F DB 15 84 46 31 05                 pand    xmm2, cs:xmmword_155574530
.text:000000015025FEAC 0F 2F 15 AD 46 31 05                    comiss  xmm2, cs:dword_155574560
.text:000000015025FEB3 72 15                                   jb      short loc_15025FECA
.text:000000015025FEB5 66 0F EF C9                             pxor    xmm1, xmm1
.text:000000015025FEB9 F3 0F 10 CA                             movss   xmm1, xmm2
.text:000000015025FEBD F3 0F 58 0D AB 46 31 05                 addss   xmm1, cs:dword_155574570
.text:000000015025FEC5 0F 14 C1                                unpcklps xmm0, xmm1
.text:000000015025FEC8 EB B6                                   jmp     short sub_15025FE80
.text:000000015025FECA                         ; ---------------------------------------------------------------------------
.text:000000015025FECA
.text:000000015025FECA                         loc_15025FECA:                          ; CODE XREF: sub_15025FEA0+13↑j
.text:000000015025FECA 0F 59 D2                                mulps   xmm2, xmm2
.text:000000015025FECD 0F 59 15 7C 46 31 05                    mulps   xmm2, cs:xmmword_155574550
.text:000000015025FED4 F3 0F 10 0D 64 46 31 05                 movss   xmm1, cs:dword_155574540
.text:000000015025FEDC 0F 5C CA                                subps   xmm1, xmm2
.text:000000015025FEDF 0F 14 C1                                unpcklps xmm0, xmm1
.text:000000015025FEE2 C3                                      retn
.text:000000015025FEE2                         sub_15025FEA0   endp
.text:000000015025FEE2
.text:000000015025FEE3
.text:000000015025FEE3                         ; =============== S U B R O U T I N E =======================================
.text:000000015025FEE3
.text:000000015025FEE3
.text:000000015025FEE3                         sub_15025FEE3   proc near               ; CODE XREF: sub_140D6F450+87↑p
.text:000000015025FEE3                                                                 ; .text:0000000140FB4891↑p ...
.text:000000015025FEE3 0F C6 C1 00                             shufps  xmm0, xmm1, 0
.text:000000015025FEE7 0F 58 05 92 46 31 05                    addps   xmm0, cs:xmmword_155574580
.text:000000015025FEEE EB 90                                   jmp     short sub_15025FE80
.text:000000015025FEEE                         sub_15025FEE3   endp
.text:000000015025FEEE
.text:000000015025FEF0
.text:000000015025FEF0                         ; =============== S U B R O U T I N E =======================================
.text:000000015025FEF0
.text:000000015025FEF0
.text:000000015025FEF0                         sub_15025FEF0   proc near
.text:000000015025FEF0 40 53                                   push    rbx
.text:000000015025FEF2 48 83 EC 20                             sub     rsp, 20h
.text:000000015025FEF6 48 8D 05 9B 46 31 05                    lea     rax, unk_155574598
.text:000000015025FEFD 48 8B D9                                mov     rbx, rcx
.text:000000015025FF00 48 89 01                                mov     [rcx], rax
.text:000000015025FF03 F6 C2 01                                test    dl, 1
.text:000000015025FF06 74 0A                                   jz      short loc_15025FF12
.text:000000015025FF08 BA 18 00 00 00                          mov     edx, 18h
.text:000000015025FF0D E8 2E 02 E9 F0                          call    sub_1410F0140
.text:000000015025FF12
.text:000000015025FF12                         loc_15025FF12:                          ; CODE XREF: sub_15025FEF0+16↑j
.text:000000015025FF12 48 8B C3                                mov     rax, rbx
.text:000000015025FF15 48 83 C4 20                             add     rsp, 20h
.text:000000015025FF19 5B                                      pop     rbx
.text:000000015025FF1A C3                                      retn
.text:000000015025FF1A                         sub_15025FEF0   endp
.text:000000015025FF1A
.text:000000015025FF1A                         ; ---------------------------------------------------------------------------
.text:000000015025FF1B CC                                      align 4
.text:000000015025FF1C
.text:000000015025FF1C                         ; =============== S U B R O U T I N E =======================================
.text:000000015025FF1C
.text:000000015025FF1C
.text:000000015025FF1C                         sub_15025FF1C   proc near               ; CODE XREF: sub_140A815E0+BD↑p
.text:000000015025FF1C                                                                 ; .text:0000000140A818CD↑p ...
.text:000000015025FF1C
.text:000000015025FF1C                         var_38          = byte ptr -38h
.text:000000015025FF1C                         arg_0           = qword ptr  8
.text:000000015025FF1C                         arg_10          = qword ptr  18h
.text:000000015025FF1C
.text:000000015025FF1C 48 8B C4                                mov     rax, rsp
.text:000000015025FF1F 4C 89 48 20                             mov     [rax+20h], r9
.text:000000015025FF23 4C 89 40 18                             mov     [rax+18h], r8
.text:000000015025FF27 48 89 50 10                             mov     [rax+10h], rdx
.text:000000015025FF2B 53                                      push    rbx
.text:000000015025FF2C 56                                      push    rsi
.text:000000015025FF2D 57                                      push    rdi
.text:000000015025FF2E 41 56                                   push    r14
.text:000000015025FF30 48 83 EC 38                             sub     rsp, 38h
.text:000000015025FF34 4D 8B F1                                mov     r14, r9
.text:000000015025FF37 49 8B D8                                mov     rbx, r8
.text:000000015025FF3A 48 8B F2                                mov     rsi, rdx
.text:000000015025FF3D C6 40 C8 00                             mov     byte ptr [rax-38h], 0
.text:000000015025FF41 48 8B FA                                mov     rdi, rdx
.text:000000015025FF44 49 0F AF F8                             imul    rdi, r8
.text:000000015025FF48 48 03 F9                                add     rdi, rcx
.text:000000015025FF4B 48 89 78 08                             mov     [rax+8], rdi
```

---
เก็บ อีกรอบ ไว้ตรวจ  เป็น  ชุด Call มา แล้ว ของมูล รอบๆ นั้น 
.text:000000014E2CB510                         sub_14E2CB510   proc near               ; CODE XREF: .text:0000000141CEB251↑p
.text:000000014E2CB510                                                                 ; sub_141D52270+2B28↑p ...    



เก็บโครงสร้าง อื่นด้วย เช่นตัว size 0x40 มี encoreในโครงสร้าง 

```asm

.text:000000014E2CB2D0
.text:000000014E2CB2D0                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CB2D0
.text:000000014E2CB2D0
.text:000000014E2CB2D0                         sub_14E2CB2D0   proc near               ; CODE XREF: sub_14DEBA350+26A↑p
.text:000000014E2CB2D0                                                                 ; sub_14E2B9700+93↑p ...
.text:000000014E2CB2D0
.text:000000014E2CB2D0                         var_D8          = xmmword ptr -0D8h
.text:000000014E2CB2D0                         var_C8          = dword ptr -0C8h
.text:000000014E2CB2D0                         var_C4          = dword ptr -0C4h
.text:000000014E2CB2D0                         var_C0          = dword ptr -0C0h
.text:000000014E2CB2D0                         var_BC          = dword ptr -0BCh
.text:000000014E2CB2D0                         var_A8          = xmmword ptr -0A8h
.text:000000014E2CB2D0                         var_98          = xmmword ptr -98h
.text:000000014E2CB2D0                         var_88          = xmmword ptr -88h
.text:000000014E2CB2D0                         var_78          = xmmword ptr -78h
.text:000000014E2CB2D0                         var_68          = byte ptr -68h
.text:000000014E2CB2D0                         var_38          = qword ptr -38h
.text:000000014E2CB2D0                         var_28          = xmmword ptr -28h
.text:000000014E2CB2D0                         arg_18          = qword ptr  20h
.text:000000014E2CB2D0
.text:000000014E2CB2D0 40 53                                   push    rbx
.text:000000014E2CB2D2 55                                      push    rbp
.text:000000014E2CB2D3 57                                      push    rdi
.text:000000014E2CB2D4 48 81 EC E0 00 00 00                    sub     rsp, 0E0h
.text:000000014E2CB2DB 48 8B 05 5E A0 AF 08                    mov     rax, cs:off_156DC5340
.text:000000014E2CB2E2 48 33 C4                                xor     rax, rsp
.text:000000014E2CB2E5 48 89 84 24 C0 00 00 00                 mov     [rsp+0F8h+var_38], rax
.text:000000014E2CB2ED 41 0F 10 00                             movups  xmm0, xmmword ptr [r8]
.text:000000014E2CB2F1 48 8B F9                                mov     rdi, rcx
.text:000000014E2CB2F4 F3 0F 7F 02                             movdqu  xmmword ptr [rdx], xmm0
.text:000000014E2CB2F8 49 8B E8                                mov     rbp, r8
.text:000000014E2CB2FB 48 8B 89 08 01 00 00                    mov     rcx, [rcx+108h]
.text:000000014E2CB302 48 8B DA                                mov     rbx, rdx
.text:000000014E2CB305 48 85 C9                                test    rcx, rcx
.text:000000014E2CB308 0F 84 CA 01 00 00                       jz      loc_14E2CB4D8
.text:000000014E2CB30E F6 87 9C 01 00 00 08                    test    byte ptr [rdi+19Ch], 8
.text:000000014E2CB315 0F 85 BD 01 00 00                       jnz     loc_14E2CB4D8
.text:000000014E2CB31B 48 8B 01                                mov     rax, [rcx]
.text:000000014E2CB31E 48 8D 54 24 30                          lea     rdx, [rsp+0F8h+var_C8]
.text:000000014E2CB323 4C 8B 87 10 01 00 00                    mov     r8, [rdi+110h]
.text:000000014E2CB32A 45 33 C9                                xor     r9d, r9d
.text:000000014E2CB32D FF 90 30 04 00 00                       call    qword ptr [rax+430h]
.text:000000014E2CB333 0F 28 6C 24 50                          movaps  xmm5, [rsp+0F8h+var_A8]
.text:000000014E2CB338 F2 0F 10 9F 84 01 00 00                 movsd   xmm3, qword ptr [rdi+184h]
.text:000000014E2CB340 0F 28 D5                                movaps  xmm2, xmm5
.text:000000014E2CB343 F3 0F 10 87 8C 01 00 00                 movss   xmm0, dword ptr [rdi+18Ch]
.text:000000014E2CB34B 0F 28 CB                                movaps  xmm1, xmm3
.text:000000014E2CB34E 0F C6 C9 55                             shufps  xmm1, xmm1, 55h ; 'U'
.text:000000014E2CB352 0F 28 E3                                movaps  xmm4, xmm3
.text:000000014E2CB355 0F 14 E1                                unpcklps xmm4, xmm1
.text:000000014E2CB358 0F 28 CD                                movaps  xmm1, xmm5
.text:000000014E2CB35B 0F 16 E0                                movlhps xmm4, xmm0
.text:000000014E2CB35E 0F 28 C5                                movaps  xmm0, xmm5
.text:000000014E2CB361 F2 0F 11 5C 24 20                       movsd   qword ptr [rsp+0F8h+var_D8], xmm3
.text:000000014E2CB367 0F 57 DB                                xorps   xmm3, xmm3
.text:000000014E2CB36A 0F C6 CD 55                             shufps  xmm1, xmm5, 55h ; 'U'
.text:000000014E2CB36E 0F C6 D5 AA                             shufps  xmm2, xmm5, 0AAh
.text:000000014E2CB372 0F 14 C1                                unpcklps xmm0, xmm1
.text:000000014E2CB375 0F 14 D3                                unpcklps xmm2, xmm3
.text:000000014E2CB378 0F 16 C2                                movlhps xmm0, xmm2
.text:000000014E2CB37B 0F 5D E0                                minps   xmm4, xmm0
.text:000000014E2CB37E 0F C2 25 9A 4A 26 09 01                 cmpltps xmm4, cs:xmmword_15752FE20
.text:000000014E2CB386 0F 50 C4                                movmskps eax, xmm4
.text:000000014E2CB389 85 C0                                   test    eax, eax
.text:000000014E2CB38B 0F 84 96 00 00 00                       jz      loc_14E2CB427
.text:000000014E2CB391 48 8B CF                                mov     rcx, rdi
.text:000000014E2CB394 48 89 B4 24 18 01 00 00                 mov     [rsp+0F8h+arg_18], rsi
.text:000000014E2CB39C E8 BF 0A 84 F2                          call    sub_140B0BE60
.text:000000014E2CB3A1 48 8B F0                                mov     rsi, rax
.text:000000014E2CB3A4 0F 10 48 10                             movups  xmm1, xmmword ptr [rax+10h]
.text:000000014E2CB3A8 B8 FF FF 00 00                          mov     eax, 0FFFFh
.text:000000014E2CB3AD 0F 29 4C 24 20                          movaps  [rsp+0F8h+var_D8], xmm1
.text:000000014E2CB3B2 66 39 46 30                             cmp     [rsi+30h], ax
.text:000000014E2CB3B6 74 2B                                   jz      short loc_14E2CB3E3
.text:000000014E2CB3B8 80 7E 32 00                             cmp     byte ptr [rsi+32h], 0
.text:000000014E2CB3BC 75 0C                                   jnz     short loc_14E2CB3CA
.text:000000014E2CB3BE 48 8D 0D 8B 76 40 02                    lea     rcx, aDoubleDecrypti ; "double decryption in EEncHandlerPolicy:"...
.text:000000014E2CB3C5 E8 C6 9F 56 FE                          call    sub_14C835390
.text:000000014E2CB3CA
.text:000000014E2CB3CA                         loc_14E2CB3CA:                          ; CODE XREF: sub_14E2CB2D0+EC↑j
.text:000000014E2CB3CA 4C 8D 46 30                             lea     r8, [rsi+30h]
.text:000000014E2CB3CE BA 0C 00 00 00                          mov     edx, 0Ch
.text:000000014E2CB3D3 48 8D 4C 24 20                          lea     rcx, [rsp+0F8h+var_D8]
.text:000000014E2CB3D8 FF 15 7A 18 0E 09                       call    cs:qword_1573ACC58
.text:000000014E2CB3DE 0F 28 4C 24 20                          movaps  xmm1, [rsp+0F8h+var_D8]
.text:000000014E2CB3E3
.text:000000014E2CB3E3                         loc_14E2CB3E3:                          ; CODE XREF: sub_14E2CB2D0+E6↑j
.text:000000014E2CB3E3 0F 10 46 20                             movups  xmm0, xmmword ptr [rsi+20h]
.text:000000014E2CB3E7 4C 8D 44 24 30                          lea     r8, [rsp+0F8h+var_C8]
.text:000000014E2CB3EC 0F 29 84 24 80 00 00 00                 movaps  [rsp+0F8h+var_78], xmm0
.text:000000014E2CB3F4 48 8D 94 24 90 00 00 00                 lea     rdx, [rsp+0F8h+var_68]
.text:000000014E2CB3FC 0F 10 45 00                             movups  xmm0, xmmword ptr [rbp+0]
.text:000000014E2CB400 48 8D 4C 24 60                          lea     rcx, [rsp+0F8h+var_98]
.text:000000014E2CB405 0F 29 44 24 60                          movaps  [rsp+0F8h+var_98], xmm0
.text:000000014E2CB40A 0F 29 4C 24 70                          movaps  [rsp+0F8h+var_88], xmm1
.text:000000014E2CB40F E8 8C 92 55 FE                          call    sub_14C8246A0
.text:000000014E2CB414 48 8B B4 24 18 01 00 00                 mov     rsi, [rsp+0F8h+arg_18]
.text:000000014E2CB41C 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.text:000000014E2CB41F 0F 11 03                                movups  xmmword ptr [rbx], xmm0
.text:000000014E2CB422 E9 B1 00 00 00                          jmp     loc_14E2CB4D8
.text:000000014E2CB427                         ; ---------------------------------------------------------------------------
.text:000000014E2CB427
.text:000000014E2CB427                         loc_14E2CB427:                          ; CODE XREF: sub_14E2CB2D0+BB↑j
.text:000000014E2CB427 0F 10 65 00                             movups  xmm4, xmmword ptr [rbp+0]
.text:000000014E2CB42B F3 0F 10 05 DD C2 3F 02                 movss   xmm0, dword ptr cs:xmmword_1506C7710
.text:000000014E2CB433 0F 28 EC                                movaps  xmm5, xmm4
.text:000000014E2CB436 F3 0F 10 4C 24 34                       movss   xmm1, dword ptr [rsp+34h]
.text:000000014E2CB43C F3 0F 10 54 24 38                       movss   xmm2, dword ptr [rsp+38h]
.text:000000014E2CB442 0F 57 C8                                xorps   xmm1, xmm0
.text:000000014E2CB445 F3 0F 10 5C 24 3C                       movss   xmm3, dword ptr [rsp+3Ch]
.text:000000014E2CB44B 0F 57 D0                                xorps   xmm2, xmm0
.text:000000014E2CB44E 0F 29 B4 24 D0 00 00 00                 movaps  xmmword ptr [rsp+0D0h], xmm6
.text:000000014E2CB456 F3 0F 10 74 24 30                       movss   xmm6, dword ptr [rsp+30h]
.text:000000014E2CB45C 0F 57 F0                                xorps   xmm6, xmm0
.text:000000014E2CB45F 0F C6 EC 1B                             shufps  xmm5, xmm4, 1Bh
.text:000000014E2CB463 0F C6 F6 E1                             shufps  xmm6, xmm6, 0E1h
.text:000000014E2CB467 F3 0F 10 F1                             movss   xmm6, xmm1
.text:000000014E2CB46B 0F 28 CC                                movaps  xmm1, xmm4
.text:000000014E2CB46E 0F C6 F6 C6                             shufps  xmm6, xmm6, 0C6h
.text:000000014E2CB472 F3 0F 10 F2                             movss   xmm6, xmm2
.text:000000014E2CB476 0F C6 CC 4E                             shufps  xmm1, xmm4, 4Eh ; 'N'
.text:000000014E2CB47A 0F C6 F6 27                             shufps  xmm6, xmm6, 27h ; '''
.text:000000014E2CB47E F3 0F 10 F3                             movss   xmm6, xmm3
.text:000000014E2CB482 0F C6 F6 39                             shufps  xmm6, xmm6, 39h ; '9'
.text:000000014E2CB486 0F 28 C6                                movaps  xmm0, xmm6
.text:000000014E2CB489 0F C6 C6 00                             shufps  xmm0, xmm6, 0
.text:000000014E2CB48D 0F 59 E8                                mulps   xmm5, xmm0
.text:000000014E2CB490 0F 28 C6                                movaps  xmm0, xmm6
.text:000000014E2CB493 0F C6 C6 FF                             shufps  xmm0, xmm6, 0FFh
.text:000000014E2CB497 0F 59 C4                                mulps   xmm0, xmm4
.text:000000014E2CB49A 0F 59 2D EF 4A 26 09                    mulps   xmm5, cs:xmmword_15752FF90
.text:000000014E2CB4A1 0F C6 E4 B1                             shufps  xmm4, xmm4, 0B1h
.text:000000014E2CB4A5 0F 58 E8                                addps   xmm5, xmm0
.text:000000014E2CB4A8 0F 28 C6                                movaps  xmm0, xmm6
.text:000000014E2CB4AB 0F C6 C6 55                             shufps  xmm0, xmm6, 55h ; 'U'
.text:000000014E2CB4AF 0F C6 F6 AA                             shufps  xmm6, xmm6, 0AAh
.text:000000014E2CB4B3 0F 59 E6                                mulps   xmm4, xmm6
.text:000000014E2CB4B6 0F 28 B4 24 D0 00 00 00                 movaps  xmm6, xmmword ptr [rsp+0D0h]
.text:000000014E2CB4BE 0F 59 C8                                mulps   xmm1, xmm0
.text:000000014E2CB4C1 0F 59 25 A8 4A 26 09                    mulps   xmm4, cs:xmmword_15752FF70
.text:000000014E2CB4C8 0F 59 0D B1 4A 26 09                    mulps   xmm1, cs:xmmword_15752FF80
.text:000000014E2CB4CF 0F 58 E9                                addps   xmm5, xmm1
.text:000000014E2CB4D2 0F 58 EC                                addps   xmm5, xmm4
.text:000000014E2CB4D5 0F 11 2B                                movups  xmmword ptr [rbx], xmm5
.text:000000014E2CB4D8
.text:000000014E2CB4D8                         loc_14E2CB4D8:                          ; CODE XREF: sub_14E2CB2D0+38↑j
.text:000000014E2CB4D8                                                                 ; sub_14E2CB2D0+45↑j ...
.text:000000014E2CB4D8 48 8B C3                                mov     rax, rbx
.text:000000014E2CB4DB 48 8B 8C 24 C0 00 00 00                 mov     rcx, [rsp+0C0h]
.text:000000014E2CB4E3 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014E2CB4E6 E8 75 49 F9 01                          call    __security_check_cookie
.text:000000014E2CB4EB 48 81 C4 E0 00 00 00                    add     rsp, 0E0h
.text:000000014E2CB4F2 5F                                      pop     rdi
.text:000000014E2CB4F3 5D                                      pop     rbp
.text:000000014E2CB4F4 5B                                      pop     rbx
.text:000000014E2CB4F5 C3                                      retn
.text:000000014E2CB4F5                         sub_14E2CB2D0   endp
.text:000000014E2CB4F5
.text:000000014E2CB4F5                         ; ---------------------------------------------------------------------------
.text:000000014E2CB4F6 CC CC CC CC CC CC CC CC…                align 20h
.text:000000014E2CB500
.text:000000014E2CB500                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CB500
.text:000000014E2CB500
.text:000000014E2CB500                         sub_14E2CB500   proc near
.text:000000014E2CB500 48 8D 81 84 01 00 00                    lea     rax, [rcx+184h]
.text:000000014E2CB507 C3                                      retn
.text:000000014E2CB507                         sub_14E2CB500   endp
.text:000000014E2CB507
.text:000000014E2CB507                         ; ---------------------------------------------------------------------------
.text:000000014E2CB508 CC CC CC CC CC CC CC CC                 align 10h
.text:000000014E2CB510
.text:000000014E2CB510                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CB510
.text:000000014E2CB510
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
.text:000000014E2CB51B 48 83 EC 60                             sub     rsp, 60h
.text:000000014E2CB51F F2 0F 10 81 84 01 00 00                 movsd   xmm0, qword ptr [rcx+184h]
.text:000000014E2CB527 48 8B D9                                mov     rbx, rcx
.text:000000014E2CB52A 8B B1 8C 01 00 00                       mov     esi, [rcx+18Ch]
.text:000000014E2CB530 48 8B FA                                mov     rdi, rdx
.text:000000014E2CB533 F2 0F 11 44 24 20                       movsd   qword ptr [rsp+20h], xmm0
.text:000000014E2CB539 F2 0F 10 81 78 01 00 00                 movsd   xmm0, qword ptr [rcx+178h]
.text:000000014E2CB541 48 81 C1 00 02 00 00                    add     rcx, 200h
.text:000000014E2CB548 0F 29 74 24 50                          movaps  xmmword ptr [rsp+50h], xmm6
.text:000000014E2CB54D F2 0F 11 44 24 2C                       movsd   qword ptr [rsp+2Ch], xmm0
.text:000000014E2CB553 0F 2E 01                                ucomiss xmm0, dword ptr [rcx]
.text:000000014E2CB556 75 1E                                   jnz     short loc_14E2CB576
.text:000000014E2CB558 F3 0F 10 44 24 30                       movss   xmm0, dword ptr [rsp+30h]
.text:000000014E2CB55E 0F 2E 41 04                             ucomiss xmm0, dword ptr [rcx+4]
.text:000000014E2CB562 75 12                                   jnz     short loc_14E2CB576
.text:000000014E2CB564 F3 0F 10 83 80 01 00 00                 movss   xmm0, dword ptr [rbx+180h]
.text:000000014E2CB56C 0F 2E 41 08                             ucomiss xmm0, dword ptr [rcx+8]
.text:000000014E2CB570 0F 84 C5 00 00 00                       jz      loc_14E2CB63B
.text:000000014E2CB576
.text:000000014E2CB576                         loc_14E2CB576:                          ; CODE XREF: sub_14E2CB510+46↑j
.text:000000014E2CB576                                                                 ; sub_14E2CB510+52↑j
.text:000000014E2CB576 F2 0F 10 9B 78 01 00 00                 movsd   xmm3, qword ptr [rbx+178h]
.text:000000014E2CB57E 48 8D 54 24 40                          lea     rdx, [rsp+40h]
.text:000000014E2CB583 0F 28 35 16 4B 26 09                    movaps  xmm6, cs:xmmword_1575300A0
.text:000000014E2CB58A 0F 28 CB                                movaps  xmm1, xmm3
.text:000000014E2CB58D F3 0F 10 83 80 01 00 00                 movss   xmm0, dword ptr [rbx+180h]
.text:000000014E2CB595 0F 28 EB                                movaps  xmm5, xmm3
.text:000000014E2CB598 0F 28 25 11 4B 26 09                    movaps  xmm4, cs:xmmword_1575300B0
.text:000000014E2CB59F 0F C6 C9 55                             shufps  xmm1, xmm1, 55h ; 'U'
.text:000000014E2CB5A3 0F 14 E9                                unpcklps xmm5, xmm1
.text:000000014E2CB5A6 0F 16 E8                                movlhps xmm5, xmm0
.text:000000014E2CB5A9 F2 0F 11 5C 24 2C                       movsd   qword ptr [rsp+2Ch], xmm3
.text:000000014E2CB5AF 0F 28 D5                                movaps  xmm2, xmm5
.text:000000014E2CB5B2 0F 5E D6                                divps   xmm2, xmm6
.text:000000014E2CB5B5 F3 0F 5B C2                             cvttps2dq xmm0, xmm2
.text:000000014E2CB5B9 0F 28 CA                                movaps  xmm1, xmm2
.text:000000014E2CB5BC 0F 54 0D 1D 48 26 09                    andps   xmm1, cs:xmmword_15752FDE0
.text:000000014E2CB5C3 0F 5B D8                                cvtdq2ps xmm3, xmm0
.text:000000014E2CB5C6 0F C2 E1 02                             cmpleps xmm4, xmm1
.text:000000014E2CB5CA 0F 28 C3                                movaps  xmm0, xmm3
.text:000000014E2CB5CD 0F 28 CE                                movaps  xmm1, xmm6
.text:000000014E2CB5D0 0F 57 C2                                xorps   xmm0, xmm2
.text:000000014E2CB5D3 0F 54 E0                                andps   xmm4, xmm0
.text:000000014E2CB5D6 0F 57 C0                                xorps   xmm0, xmm0
.text:000000014E2CB5D9 0F 57 E3                                xorps   xmm4, xmm3
.text:000000014E2CB5DC 0F 59 E6                                mulps   xmm4, xmm6
.text:000000014E2CB5DF 0F 5C EC                                subps   xmm5, xmm4
.text:000000014E2CB5E2 0F C2 C5 02                             cmpleps xmm0, xmm5
.text:000000014E2CB5E6 0F 58 CD                                addps   xmm1, xmm5
.text:000000014E2CB5E9 0F 28 D1                                movaps  xmm2, xmm1
.text:000000014E2CB5EC 0F 57 D5                                xorps   xmm2, xmm5
.text:000000014E2CB5EF 0F 54 D0                                andps   xmm2, xmm0
.text:000000014E2CB5F2 0F 28 05 97 4A 26 09                    movaps  xmm0, cs:xmmword_157530090
.text:000000014E2CB5F9 0F 57 D1                                xorps   xmm2, xmm1
.text:000000014E2CB5FC 0F C2 C2 01                             cmpltps xmm0, xmm2
.text:000000014E2CB600 0F 28 DA                                movaps  xmm3, xmm2
.text:000000014E2CB603 0F 5C DE                                subps   xmm3, xmm6
.text:000000014E2CB606 0F 57 DA                                xorps   xmm3, xmm2
.text:000000014E2CB609 0F 54 D8                                andps   xmm3, xmm0
.text:000000014E2CB60C 0F 57 DA                                xorps   xmm3, xmm2
.text:000000014E2CB60F 0F 28 CB                                movaps  xmm1, xmm3
.text:000000014E2CB612 0F 28 C3                                movaps  xmm0, xmm3
.text:000000014E2CB615 0F C6 CB 55                             shufps  xmm1, xmm3, 55h ; 'U'
.text:000000014E2CB619 0F 28 D3                                movaps  xmm2, xmm3
.text:000000014E2CB61C 0F 14 C1                                unpcklps xmm0, xmm1
.text:000000014E2CB61F 0F C6 D3 AA                             shufps  xmm2, xmm3, 0AAh
.text:000000014E2CB623 F2 0F 11 01                             movsd   qword ptr [rcx], xmm0
.text:000000014E2CB627 F3 0F 11 51 08                          movss   dword ptr [rcx+8], xmm2
.text:000000014E2CB62C E8 9F 81 56 FE                          call    sub_14C8337D0
.text:000000014E2CB631 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.text:000000014E2CB634 0F 11 83 F0 01 00 00                    movups  xmmword ptr [rbx+1F0h], xmm0
.text:000000014E2CB63B
.text:000000014E2CB63B                         loc_14E2CB63B:                          ; CODE XREF: sub_14E2CB510+60↑j
.text:000000014E2CB63B 0F 10 B3 F0 01 00 00                    movups  xmm6, xmmword ptr [rbx+1F0h]
.text:000000014E2CB642 48 8D 54 24 2C                          lea     rdx, [rsp+2Ch]
.text:000000014E2CB647 48 8B CB                                mov     rcx, rbx
.text:000000014E2CB64A E8 51 5F BF F2                          call    sub_140EC15A0
.text:000000014E2CB64F 48 8B 5C 24 70                          mov     rbx, [rsp+70h]
.text:000000014E2CB654 66 0F 6E C6                             movd    xmm0, esi
.text:000000014E2CB658 48 8B 74 24 78                          mov     rsi, [rsp+78h]
.text:000000014E2CB65D F3 0F 10 50 08                          movss   xmm2, dword ptr [rax+8]
.text:000000014E2CB662 F2 0F 10 18                             movsd   xmm3, qword ptr [rax]
.text:000000014E2CB666 48 8B C7                                mov     rax, rdi
.text:000000014E2CB669 0F 16 DA                                movlhps xmm3, xmm2
.text:000000014E2CB66C 0F 11 5F 10                             movups  xmmword ptr [rdi+10h], xmm3
.text:000000014E2CB670 F2 0F 10 5C 24 20                       movsd   xmm3, qword ptr [rsp+20h]
.text:000000014E2CB676 0F 16 D8                                movlhps xmm3, xmm0
.text:000000014E2CB679 0F 11 37                                movups  xmmword ptr [rdi], xmm6
.text:000000014E2CB67C 0F 28 74 24 50                          movaps  xmm6, xmmword ptr [rsp+50h]
.text:000000014E2CB681 0F 11 5F 20                             movups  xmmword ptr [rdi+20h], xmm3
.text:000000014E2CB685 48 83 C4 60                             add     rsp, 60h
.text:000000014E2CB689 5F                                      pop     rdi
.text:000000014E2CB68A C3                                      retn
.text:000000014E2CB68A                         sub_14E2CB510   endp
.text:000000014E2CB68A
.text:000000014E2CB68A                         ; ---------------------------------------------------------------------------
.text:000000014E2CB68B CC CC CC CC CC                          align 10h
.text:000000014E2CB690
.text:000000014E2CB690                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CB690
.text:000000014E2CB690
.text:000000014E2CB690                         sub_14E2CB690   proc near
.text:000000014E2CB690
.text:000000014E2CB690                         arg_0           = qword ptr  8
.text:000000014E2CB690                         arg_8           = qword ptr  10h
.text:000000014E2CB690                         arg_10          = qword ptr  18h
.text:000000014E2CB690                         arg_18          = qword ptr  20h
.text:000000014E2CB690
.text:000000014E2CB690 48 89 6C 24 18                          mov     [rsp+18h], rbp
.text:000000014E2CB695 48 89 7C 24 20                          mov     [rsp+20h], rdi
.text:000000014E2CB69A 41 56                                   push    r14
.text:000000014E2CB69C 48 83 EC 20                             sub     rsp, 20h
.text:000000014E2CB6A0 4C 8B F2                                mov     r14, rdx
.text:000000014E2CB6A3 48 8B E9                                mov     rbp, rcx
.text:000000014E2CB6A6 E8 45 94 03 00                          call    sub_14E304AF0
.text:000000014E2CB6AB 33 FF                                   xor     edi, edi
.text:000000014E2CB6AD 39 BD 18 0B 00 00                       cmp     [rbp+0B18h], edi
.text:000000014E2CB6B3 7E 6B                                   jle     short loc_14E2CB720
.text:000000014E2CB6B5 48 89 5C 24 30                          mov     [rsp+30h], rbx
.text:000000014E2CB6BA 8B DF                                   mov     ebx, edi
.text:000000014E2CB6BC 48 89 74 24 38                          mov     [rsp+38h], rsi
.text:000000014E2CB6C1
.text:000000014E2CB6C1                         loc_14E2CB6C1:                          ; CODE XREF: sub_14E2CB690+84↓j
.text:000000014E2CB6C1 48 8D 8D 10 0B 00 00                    lea     rcx, [rbp+0B10h]
.text:000000014E2CB6C8 FF 15 A2 F0 57 08                       call    cs:qword_15684A770
.text:000000014E2CB6CE 48 83 3C 03 00                          cmp     qword ptr [rbx+rax], 0
.text:000000014E2CB6D3 74 33                                   jz      short loc_14E2CB708
.text:000000014E2CB6D5 48 8D 8D 10 0B 00 00                    lea     rcx, [rbp+0B10h]
.text:000000014E2CB6DC FF 15 8E F0 57 08                       call    cs:qword_15684A770
.text:000000014E2CB6E2 48 8B 0C 03                             mov     rcx, [rbx+rax]
.text:000000014E2CB6E6 E8 45 21 46 00                          call    sub_14E72D830
.text:000000014E2CB6EB 84 C0                                   test    al, al
.text:000000014E2CB6ED 74 19                                   jz      short loc_14E2CB708
.text:000000014E2CB6EF 48 8D 8D 10 0B 00 00                    lea     rcx, [rbp+0B10h]
.text:000000014E2CB6F6 FF 15 74 F0 57 08                       call    cs:qword_15684A770
.text:000000014E2CB6FC 49 8B D6                                mov     rdx, r14
.text:000000014E2CB6FF 48 8B 0C 03                             mov     rcx, [rbx+rax]
.text:000000014E2CB703 E8 48 B9 45 00                          call    sub_14E727050
.text:000000014E2CB708
.text:000000014E2CB708                         loc_14E2CB708:                          ; CODE XREF: sub_14E2CB690+43↑j
.text:000000014E2CB708                                                                 ; sub_14E2CB690+5D↑j
.text:000000014E2CB708 FF C7                                   inc     edi
.text:000000014E2CB70A 48 83 C3 08                             add     rbx, 8
.text:000000014E2CB70E 3B BD 18 0B 00 00                       cmp     edi, [rbp+0B18h]
.text:000000014E2CB714 7C AB                                   jl      short loc_14E2CB6C1
.text:000000014E2CB716 48 8B 74 24 38                          mov     rsi, [rsp+38h]
.text:000000014E2CB71B 48 8B 5C 24 30                          mov     rbx, [rsp+30h]
.text:000000014E2CB720
.text:000000014E2CB720                         loc_14E2CB720:                          ; CODE XREF: sub_14E2CB690+23↑j
.text:000000014E2CB720 48 8B 6C 24 40                          mov     rbp, [rsp+40h]
.text:000000014E2CB725 48 8B 7C 24 48                          mov     rdi, [rsp+48h]
.text:000000014E2CB72A 48 83 C4 20                             add     rsp, 20h
.text:000000014E2CB72E 41 5E                                   pop     r14
.text:000000014E2CB730 C3                                      retn
.text:000000014E2CB730                         sub_14E2CB690   endp
.text:000000014E2CB730
.text:000000014E2CB730                         ; ---------------------------------------------------------------------------
.text:000000014E2CB731 CC CC CC CC CC CC CC CC…                align 20h
.text:000000014E2CB740
.text:000000014E2CB740                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CB740
.text:000000014E2CB740
.text:000000014E2CB740                         sub_14E2CB740   proc near               ; CODE XREF: sub_141E5B670+6B1↑p
.text:000000014E2CB740                                                                 ; sub_141E60DE0+534↑p ...
.text:000000014E2CB740
.text:000000014E2CB740                         var_18          = xmmword ptr -18h
.text:000000014E2CB740
.text:000000014E2CB740 40 53                                   push    rbx
.text:000000014E2CB742 48 83 EC 30                             sub     rsp, 30h
.text:000000014E2CB746 0F 29 74 24 20                          movaps  xmmword ptr [rsp+20h], xmm6
.text:000000014E2CB74B 48 8B DA                                mov     rbx, rdx
.text:000000014E2CB74E 66 0F 6F 35 0A 1C 41 02                 movdqa  xmm6, cs:xmmword_1506DD360
.text:000000014E2CB756 E8 05 07 84 F2                          call    sub_140B0BE60
.text:000000014E2CB75B 0F 28 C6                                movaps  xmm0, xmm6
.text:000000014E2CB75E 0F 28 DE                                movaps  xmm3, xmm6
.text:000000014E2CB761 0F C6 C6 C9                             shufps  xmm0, xmm6, 0C9h
.text:000000014E2CB765 0F C6 DE D2                             shufps  xmm3, xmm6, 0D2h
.text:000000014E2CB769 0F 10 28                                movups  xmm5, xmmword ptr [rax]
.text:000000014E2CB76C 48 8B C3                                mov     rax, rbx
.text:000000014E2CB76F 0F 28 E5                                movaps  xmm4, xmm5
.text:000000014E2CB772 0F 28 CD                                movaps  xmm1, xmm5
.text:000000014E2CB775 0F C6 E5 C9                             shufps  xmm4, xmm5, 0C9h
.text:000000014E2CB779 0F C6 CD D2                             shufps  xmm1, xmm5, 0D2h
.text:000000014E2CB77D 0F 59 C1                                mulps   xmm0, xmm1
.text:000000014E2CB780 0F 59 DC                                mulps   xmm3, xmm4
.text:000000014E2CB783 0F C6 ED FF                             shufps  xmm5, xmm5, 0FFh
.text:000000014E2CB787 0F 5C D8                                subps   xmm3, xmm0
.text:000000014E2CB78A 0F 58 DB                                addps   xmm3, xmm3
.text:000000014E2CB78D 0F 28 C3                                movaps  xmm0, xmm3
.text:000000014E2CB790 0F 59 EB                                mulps   xmm5, xmm3
.text:000000014E2CB793 0F C6 C3 C9                             shufps  xmm0, xmm3, 0C9h
.text:000000014E2CB797 0F 28 D3                                movaps  xmm2, xmm3
.text:000000014E2CB79A 0F C6 D3 D2                             shufps  xmm2, xmm3, 0D2h
.text:000000014E2CB79E 0F 59 C1                                mulps   xmm0, xmm1
.text:000000014E2CB7A1 0F 59 D4                                mulps   xmm2, xmm4
.text:000000014E2CB7A4 0F 58 EE                                addps   xmm5, xmm6
.text:000000014E2CB7A7 0F 28 74 24 20                          movaps  xmm6, xmmword ptr [rsp+20h]
.text:000000014E2CB7AC 0F 5C D0                                subps   xmm2, xmm0
.text:000000014E2CB7AF 0F 58 D5                                addps   xmm2, xmm5
.text:000000014E2CB7B2 0F 28 C2                                movaps  xmm0, xmm2
.text:000000014E2CB7B5 F3 0F 11 13                             movss   dword ptr [rbx], xmm2
.text:000000014E2CB7B9 0F C6 C2 55                             shufps  xmm0, xmm2, 55h ; 'U'
.text:000000014E2CB7BD 0F C6 D2 AA                             shufps  xmm2, xmm2, 0AAh
.text:000000014E2CB7C1 F3 0F 11 53 08                          movss   dword ptr [rbx+8], xmm2
.text:000000014E2CB7C6 F3 0F 11 43 04                          movss   dword ptr [rbx+4], xmm0
.text:000000014E2CB7CB 48 83 C4 30                             add     rsp, 30h
.text:000000014E2CB7CF 5B                                      pop     rbx
.text:000000014E2CB7D0 C3                                      retn
.text:000000014E2CB7D0                         sub_14E2CB740   endp
.text:000000014E2CB7D0
.text:000000014E2CB7D0                         ; ---------------------------------------------------------------------------
.text:000000014E2CB7D1 CC CC CC CC CC CC CC CC…                align 20h
.text:000000014E2CB7E0
.text:000000014E2CB7E0                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CB7E0
.text:000000014E2CB7E0
.text:000000014E2CB7E0                         sub_14E2CB7E0   proc near               ; CODE XREF: sub_142FED2F0+144↑p
.text:000000014E2CB7E0                                                                 ; sub_1452CCBF0+C6↑p ...
.text:000000014E2CB7E0
.text:000000014E2CB7E0                         arg_0           = qword ptr  8
.text:000000014E2CB7E0                         arg_8           = qword ptr  10h
.text:000000014E2CB7E0                         arg_10          = qword ptr  18h
.text:000000014E2CB7E0                         arg_18          = qword ptr  20h
.text:000000014E2CB7E0
.text:000000014E2CB7E0 48 89 5C 24 18                          mov     [rsp+18h], rbx
.text:000000014E2CB7E5 48 89 6C 24 20                          mov     [rsp+20h], rbp
.text:000000014E2CB7EA 56                                      push    rsi
.text:000000014E2CB7EB 57                                      push    rdi
.text:000000014E2CB7EC 41 54                                   push    r12
.text:000000014E2CB7EE 41 55                                   push    r13
.text:000000014E2CB7F0 41 57                                   push    r15
.text:000000014E2CB7F2 48 83 EC 20                             sub     rsp, 20h
.text:000000014E2CB7F6 48 8B 81 58 09 00 00                    mov     rax, [rcx+958h]
.text:000000014E2CB7FD 4C 8D 25 8C C8 10 09                    lea     r12, qword_1573D8090
.text:000000014E2CB804 90                                      nop
.text:000000014E2CB805 49 BF FF FF FF FF FF FF                 mov     r15, 0FFFFFFFFFFFFh
.text:000000014E2CB805 00 00
.text:000000014E2CB80F 48 8B B9 58 09 00 00                    mov     rdi, [rcx+958h]
.text:000000014E2CB816 49 BD 00 00 00 00 00 80                 mov     r13, 0FFFF800000000000h
.text:000000014E2CB816 FF FF
.text:000000014E2CB820 90                                      nop
.text:000000014E2CB821 48 C1 EF 3E                             shr     rdi, 3Eh
.text:000000014E2CB825 48 8B B1 58 09 00 00                    mov     rsi, [rcx+958h]
.text:000000014E2CB82C 40 0F B6 EF                             movzx   ebp, dil
.text:000000014E2CB830 48 C1 EE 30                             shr     rsi, 30h
.text:000000014E2CB834 90                                      nop
.text:000000014E2CB835 48 8B 81 58 09 00 00                    mov     rax, [rcx+958h]
.text:000000014E2CB83C 40 80 E5 01                             and     bpl, 1
.text:000000014E2CB840 81 E6 FF 3F 00 00                       and     esi, 3FFFh
.text:000000014E2CB846 90                                      nop
.text:000000014E2CB847 48 85 C0                                test    rax, rax
.text:000000014E2CB84A 0F 84 C2 00 00 00                       jz      loc_14E2CB912
.text:000000014E2CB850 48 8B C8                                mov     rcx, rax
.text:000000014E2CB853 48 8B D8                                mov     rbx, rax
.text:000000014E2CB856 48 C1 E9 30                             shr     rcx, 30h
.text:000000014E2CB85A 49 23 DF                                and     rbx, r15
.text:000000014E2CB85D 81 E1 FF 3F 00 00                       and     ecx, 3FFFh
.text:000000014E2CB863 48 C1 E8 3F                             shr     rax, 3Fh
.text:000000014E2CB867 48 89 5C 24 58                          mov     [rsp+58h], rbx
.text:000000014E2CB86C 84 C0                                   test    al, al
.text:000000014E2CB86E 74 7A                                   jz      short loc_14E2CB8EA
.text:000000014E2CB870 83 3D 1D EF 57 08 01                    cmp     cs:dword_15684A794, 1
.text:000000014E2CB877 75 1C                                   jnz     short loc_14E2CB895
.text:000000014E2CB879 44 8B C9                                mov     r9d, ecx
.text:000000014E2CB87C 48 8D 54 24 58                          lea     rdx, [rsp+58h]
.text:000000014E2CB881 48 8B 0D F8 C7 10 09                    mov     rcx, cs:qword_1573D8080
.text:000000014E2CB888 41 B8 04 00 00 00                       mov     r8d, 4
.text:000000014E2CB88E E8 7D 20 7C F2                          call    sub_140A8D910
.text:000000014E2CB893 EB 36                                   jmp     short loc_14E2CB8CB
.text:000000014E2CB895                         ; ---------------------------------------------------------------------------
.text:000000014E2CB895
.text:000000014E2CB895                         loc_14E2CB895:                          ; CODE XREF: sub_14E2CB7E0+97↑j
.text:000000014E2CB895 83 3D F8 EE 57 08 02                    cmp     cs:dword_15684A794, 2
.text:000000014E2CB89C 75 0C                                   jnz     short loc_14E2CB8AA
.text:000000014E2CB89E 48 8B 05 E3 C7 10 09                    mov     rax, cs:qword_1573D8088
.text:000000014E2CB8A5 44 8B C1                                mov     r8d, ecx
.text:000000014E2CB8A8 EB 10                                   jmp     short loc_14E2CB8BA
.text:000000014E2CB8AA                         ; ---------------------------------------------------------------------------
.text:000000014E2CB8AA
.text:000000014E2CB8AA                         loc_14E2CB8AA:                          ; CODE XREF: sub_14E2CB7E0+BC↑j
.text:000000014E2CB8AA 83 3D E3 EE 57 08 03                    cmp     cs:dword_15684A794, 3
.text:000000014E2CB8B1 75 18                                   jnz     short loc_14E2CB8CB
.text:000000014E2CB8B3 49 8B 04 CC                             mov     rax, [r12+rcx*8]
.text:000000014E2CB8B7 44 8B C1                                mov     r8d, ecx
.text:000000014E2CB8BA
.text:000000014E2CB8BA                         loc_14E2CB8BA:                          ; CODE XREF: sub_14E2CB7E0+C8↑j
.text:000000014E2CB8BA 4C 8B 48 08                             mov     r9, [rax+8]
.text:000000014E2CB8BE 48 8D 4C 24 58                          lea     rcx, [rsp+58h]
.text:000000014E2CB8C3 BA 04 00 00 00                          mov     edx, 4
.text:000000014E2CB8C8 FF 50 40                                call    qword ptr [rax+40h]
.text:000000014E2CB8CB
.text:000000014E2CB8CB                         loc_14E2CB8CB:                          ; CODE XREF: sub_14E2CB7E0+B3↑j
.text:000000014E2CB8CB                                                                 ; sub_14E2CB7E0+D1↑j
.text:000000014E2CB8CB 48 8B 5C 24 58                          mov     rbx, [rsp+58h]
.text:000000014E2CB8D0 48 BA 00 00 00 00 00 00                 mov     rdx, 0FFFF000000000000h
.text:000000014E2CB8D0 FF FF
.text:000000014E2CB8DA 49 23 DF                                and     rbx, r15
.text:000000014E2CB8DD 48 8B C3                                mov     rax, rbx
.text:000000014E2CB8E0 48 0B C2                                or      rax, rdx
.text:000000014E2CB8E3 49 85 DD                                test    r13, rbx
.text:000000014E2CB8E6 48 0F 45 D8                             cmovnz  rbx, rax
.text:000000014E2CB8EA
.text:000000014E2CB8EA                         loc_14E2CB8EA:                          ; CODE XREF: sub_14E2CB7E0+8E↑j
.text:000000014E2CB8EA 48 85 DB                                test    rbx, rbx
.text:000000014E2CB8ED 74 23                                   jz      short loc_14E2CB912
.text:000000014E2CB8EF E8 EC 6C A3 00                          call    sub_14ED025E0
.text:000000014E2CB8F4 48 8B 53 08                             mov     rdx, [rbx+8]
.text:000000014E2CB8F8 4C 8D 40 30                             lea     r8, [rax+30h]
.text:000000014E2CB8FC 48 63 40 38                             movsxd  rax, dword ptr [rax+38h]
.text:000000014E2CB900 3B 42 38                                cmp     eax, [rdx+38h]
.text:000000014E2CB903 7F 0D                                   jg      short loc_14E2CB912
.text:000000014E2CB905 48 8B C8                                mov     rcx, rax
.text:000000014E2CB908 48 8B 42 30                             mov     rax, [rdx+30h]
.text:000000014E2CB90C 4C 39 04 C8                             cmp     [rax+rcx*8], r8
.text:000000014E2CB910 74 02                                   jz      short loc_14E2CB914
.text:000000014E2CB912
.text:000000014E2CB912                         loc_14E2CB912:                          ; CODE XREF: sub_14E2CB7E0+6A↑j
.text:000000014E2CB912                                                                 ; sub_14E2CB7E0+10D↑j ...
.text:000000014E2CB912 33 DB                                   xor     ebx, ebx
.text:000000014E2CB914
.text:000000014E2CB914                         loc_14E2CB914:                          ; CODE XREF: sub_14E2CB7E0+130↑j
.text:000000014E2CB914 33 C0                                   xor     eax, eax
.text:000000014E2CB916 48 89 44 24 50                          mov     [rsp+50h], rax
.text:000000014E2CB91B 48 85 DB                                test    rbx, rbx
.text:000000014E2CB91E 0F 84 AB 00 00 00                       jz      loc_14E2CB9CF
.text:000000014E2CB924 40 84 ED                                test    bpl, bpl
.text:000000014E2CB927 0F 84 84 00 00 00                       jz      loc_14E2CB9B1
.text:000000014E2CB92D 38 05 E8 C6 10 09                       cmp     cs:byte_1573D801B, al
.text:000000014E2CB933 74 7C                                   jz      short loc_14E2CB9B1
.text:000000014E2CB935 83 3D 58 EE 57 08 01                    cmp     cs:dword_15684A794, 1
.text:000000014E2CB93C 48 89 5C 24 58                          mov     [rsp+58h], rbx
.text:000000014E2CB941 75 1C                                   jnz     short loc_14E2CB95F
.text:000000014E2CB943 48 8B 0D 36 C7 10 09                    mov     rcx, cs:qword_1573D8080
.text:000000014E2CB94A 48 8D 54 24 58                          lea     rdx, [rsp+58h]
.text:000000014E2CB94F 44 8B CE                                mov     r9d, esi
.text:000000014E2CB952 41 B8 04 00 00 00                       mov     r8d, 4
.text:000000014E2CB958 E8 23 10 7D F2                          call    sub_140A9C980
.text:000000014E2CB95D EB 48                                   jmp     short loc_14E2CB9A7
.text:000000014E2CB95F                         ; ---------------------------------------------------------------------------
.text:000000014E2CB95F
.text:000000014E2CB95F                         loc_14E2CB95F:                          ; CODE XREF: sub_14E2CB7E0+161↑j
.text:000000014E2CB95F 83 3D 2E EE 57 08 02                    cmp     cs:dword_15684A794, 2
.text:000000014E2CB966 75 1D                                   jnz     short loc_14E2CB985
.text:000000014E2CB968 48 8B 05 19 C7 10 09                    mov     rax, cs:qword_1573D8088
.text:000000014E2CB96F 48 8D 4C 24 58                          lea     rcx, [rsp+58h]
.text:000000014E2CB974 44 8B C6                                mov     r8d, esi
.text:000000014E2CB977 BA 04 00 00 00                          mov     edx, 4
.text:000000014E2CB97C 4C 8B 48 08                             mov     r9, [rax+8]
.text:000000014E2CB980 FF 50 38                                call    qword ptr [rax+38h]
.text:000000014E2CB983 EB 22                                   jmp     short loc_14E2CB9A7
.text:000000014E2CB985                         ; ---------------------------------------------------------------------------
.text:000000014E2CB985
.text:000000014E2CB985                         loc_14E2CB985:                          ; CODE XREF: sub_14E2CB7E0+186↑j
.text:000000014E2CB985 83 3D 08 EE 57 08 03                    cmp     cs:dword_15684A794, 3
.text:000000014E2CB98C 75 19                                   jnz     short loc_14E2CB9A7
.text:000000014E2CB98E 4D 8B 14 F4                             mov     r10, [r12+rsi*8]
.text:000000014E2CB992 48 8D 4C 24 58                          lea     rcx, [rsp+58h]
.text:000000014E2CB997 44 8B C6                                mov     r8d, esi
.text:000000014E2CB99A BA 04 00 00 00                          mov     edx, 4
.text:000000014E2CB99F 4D 8B 4A 08                             mov     r9, [r10+8]
.text:000000014E2CB9A3 41 FF 52 38                             call    qword ptr [r10+38h]
.text:000000014E2CB9A7
.text:000000014E2CB9A7                         loc_14E2CB9A7:                          ; CODE XREF: sub_14E2CB7E0+17D↑j
.text:000000014E2CB9A7                                                                 ; sub_14E2CB7E0+1A3↑j ...
.text:000000014E2CB9A7 48 8B 5C 24 58                          mov     rbx, [rsp+58h]
.text:000000014E2CB9AC B8 02 00 00 00                          mov     eax, 2
.text:000000014E2CB9B1
.text:000000014E2CB9B1                         loc_14E2CB9B1:                          ; CODE XREF: sub_14E2CB7E0+147↑j
.text:000000014E2CB9B1                                                                 ; sub_14E2CB7E0+153↑j
.text:000000014E2CB9B1 83 E7 01                                and     edi, 1
.text:000000014E2CB9B4 90                                      nop
.text:000000014E2CB9B5 48 0B F8                                or      rdi, rax
.text:000000014E2CB9B8 8B C6                                   mov     eax, esi
.text:000000014E2CB9BA 48 C1 E7 0E                             shl     rdi, 0Eh
.text:000000014E2CB9BE 48 0B F8                                or      rdi, rax
.text:000000014E2CB9C1 48 C1 E7 30                             shl     rdi, 30h
.text:000000014E2CB9C5 48 0B FB                                or      rdi, rbx
.text:000000014E2CB9C8 48 89 7C 24 50                          mov     [rsp+50h], rdi
.text:000000014E2CB9CD EB 06                                   jmp     short loc_14E2CB9D5
.text:000000014E2CB9CF                         ; ---------------------------------------------------------------------------
.text:000000014E2CB9CF
.text:000000014E2CB9CF                         loc_14E2CB9CF:                          ; CODE XREF: sub_14E2CB7E0+13E↑j
.text:000000014E2CB9CF 90                                      nop
.text:000000014E2CB9D0 48 89 44 24 50                          mov     [rsp+50h], rax
.text:000000014E2CB9D5
.text:000000014E2CB9D5                         loc_14E2CB9D5:                          ; CODE XREF: sub_14E2CB7E0+1ED↑j
.text:000000014E2CB9D5 48 8B 44 24 50                          mov     rax, [rsp+50h]
.text:000000014E2CB9DA 90                                      nop
.text:000000014E2CB9DB 48 85 C0                                test    rax, rax
.text:000000014E2CB9DE 75 07                                   jnz     short loc_14E2CB9E7
.text:000000014E2CB9E0 33 D2                                   xor     edx, edx
.text:000000014E2CB9E2 E9 94 00 00 00                          jmp     loc_14E2CBA7B
.text:000000014E2CB9E7                         ; ---------------------------------------------------------------------------
.text:000000014E2CB9E7
.text:000000014E2CB9E7                         loc_14E2CB9E7:                          ; CODE XREF: sub_14E2CB7E0+1FE↑j
.text:000000014E2CB9E7 48 8B C8                                mov     rcx, rax
.text:000000014E2CB9EA 48 8B D0                                mov     rdx, rax
.text:000000014E2CB9ED 48 C1 E9 30                             shr     rcx, 30h
.text:000000014E2CB9F1 49 23 D7                                and     rdx, r15
.text:000000014E2CB9F4 81 E1 FF 3F 00 00                       and     ecx, 3FFFh
.text:000000014E2CB9FA 48 C1 E8 3F                             shr     rax, 3Fh
.text:000000014E2CB9FE 48 89 54 24 58                          mov     [rsp+58h], rdx
.text:000000014E2CBA03 84 C0                                   test    al, al
.text:000000014E2CBA05 74 74                                   jz      short loc_14E2CBA7B
.text:000000014E2CBA07 8B 05 87 ED 57 08                       mov     eax, cs:dword_15684A794
.text:000000014E2CBA0D 83 F8 01                                cmp     eax, 1
.text:000000014E2CBA10 75 1C                                   jnz     short loc_14E2CBA2E
.text:000000014E2CBA12 44 8B C9                                mov     r9d, ecx
.text:000000014E2CBA15 48 8D 54 24 58                          lea     rdx, [rsp+58h]
.text:000000014E2CBA1A 48 8B 0D 5F C6 10 09                    mov     rcx, cs:qword_1573D8080
.text:000000014E2CBA21 41 B8 04 00 00 00                       mov     r8d, 4
.text:000000014E2CBA27 E8 E4 1E 7C F2                          call    sub_140A8D910
.text:000000014E2CBA2C EB 2E                                   jmp     short loc_14E2CBA5C
.text:000000014E2CBA2E                         ; ---------------------------------------------------------------------------
.text:000000014E2CBA2E
.text:000000014E2CBA2E                         loc_14E2CBA2E:                          ; CODE XREF: sub_14E2CB7E0+230↑j
.text:000000014E2CBA2E 83 F8 02                                cmp     eax, 2
.text:000000014E2CBA31 75 0C                                   jnz     short loc_14E2CBA3F
.text:000000014E2CBA33 48 8B 05 4E C6 10 09                    mov     rax, cs:qword_1573D8088
.text:000000014E2CBA3A 44 8B C1                                mov     r8d, ecx
.text:000000014E2CBA3D EB 0C                                   jmp     short loc_14E2CBA4B
.text:000000014E2CBA3F                         ; ---------------------------------------------------------------------------
.text:000000014E2CBA3F
.text:000000014E2CBA3F                         loc_14E2CBA3F:                          ; CODE XREF: sub_14E2CB7E0+251↑j
.text:000000014E2CBA3F 83 F8 03                                cmp     eax, 3
.text:000000014E2CBA42 75 18                                   jnz     short loc_14E2CBA5C
.text:000000014E2CBA44 49 8B 04 CC                             mov     rax, [r12+rcx*8]
.text:000000014E2CBA48 44 8B C1                                mov     r8d, ecx
.text:000000014E2CBA4B
.text:000000014E2CBA4B                         loc_14E2CBA4B:                          ; CODE XREF: sub_14E2CB7E0+25D↑j
.text:000000014E2CBA4B 4C 8B 48 08                             mov     r9, [rax+8]
.text:000000014E2CBA4F 48 8D 4C 24 58                          lea     rcx, [rsp+58h]
.text:000000014E2CBA54 BA 04 00 00 00                          mov     edx, 4
.text:000000014E2CBA59 FF 50 40                                call    qword ptr [rax+40h]
.text:000000014E2CBA5C
.text:000000014E2CBA5C                         loc_14E2CBA5C:                          ; CODE XREF: sub_14E2CB7E0+24C↑j
.text:000000014E2CBA5C                                                                 ; sub_14E2CB7E0+262↑j
.text:000000014E2CBA5C 48 8B 54 24 58                          mov     rdx, [rsp+58h]
.text:000000014E2CBA61 49 B8 00 00 00 00 00 00                 mov     r8, 0FFFF000000000000h
.text:000000014E2CBA61 FF FF
.text:000000014E2CBA6B 49 23 D7                                and     rdx, r15
.text:000000014E2CBA6E 48 8B C2                                mov     rax, rdx
.text:000000014E2CBA71 49 0B C0                                or      rax, r8
.text:000000014E2CBA74 49 85 D5                                test    r13, rdx
.text:000000014E2CBA77 48 0F 45 D0                             cmovnz  rdx, rax
.text:000000014E2CBA7B
.text:000000014E2CBA7B                         loc_14E2CBA7B:                          ; CODE XREF: sub_14E2CB7E0+202↑j
.text:000000014E2CBA7B                                                                 ; sub_14E2CB7E0+225↑j
.text:000000014E2CBA7B 48 8B 4C 24 50                          mov     rcx, [rsp+50h]
.text:000000014E2CBA80 48 8B C2                                mov     rax, rdx
.text:000000014E2CBA83 48 8B 5C 24 60                          mov     rbx, [rsp+60h]
.text:000000014E2CBA88 90                                      nop
.text:000000014E2CBA89 48 8B 4C 24 50                          mov     rcx, [rsp+50h]
.text:000000014E2CBA8E 90                                      nop
.text:000000014E2CBA8F 48 8B 6C 24 68                          mov     rbp, [rsp+68h]
.text:000000014E2CBA94 90                                      nop
.text:000000014E2CBA95 48 C7 44 24 50 00 00 00                 mov     qword ptr [rsp+50h], 0
.text:000000014E2CBA95 00
.text:000000014E2CBA9E 48 83 C4 20                             add     rsp, 20h
.text:000000014E2CBAA2 41 5F                                   pop     r15
.text:000000014E2CBAA4 41 5D                                   pop     r13
.text:000000014E2CBAA6 41 5C                                   pop     r12
.text:000000014E2CBAA8 5F                                      pop     rdi
.text:000000014E2CBAA9 5E                                      pop     rsi
.text:000000014E2CBAAA C3                                      retn
.text:000000014E2CBAAA                         sub_14E2CB7E0   endp
.text:000000014E2CBAAA
.text:000000014E2CBAAA                         ; ---------------------------------------------------------------------------
.text:000000014E2CBAAB CC CC CC CC CC                          align 10h
.text:000000014E2CBAB0
.text:000000014E2CBAB0                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CBAB0
.text:000000014E2CBAB0
.text:000000014E2CBAB0                         sub_14E2CBAB0   proc near
.text:000000014E2CBAB0
.text:000000014E2CBAB0                         var_48          = byte ptr -48h
.text:000000014E2CBAB0                         var_18          = qword ptr -18h
.text:000000014E2CBAB0
.text:000000014E2CBAB0 40 53                                   push    rbx
.text:000000014E2CBAB2 48 83 EC 60                             sub     rsp, 60h
.text:000000014E2CBAB6 48 8B 05 83 98 AF 08                    mov     rax, cs:off_156DC5340
.text:000000014E2CBABD 48 33 C4                                xor     rax, rsp
.text:000000014E2CBAC0 48 89 44 24 50                          mov     [rsp+50h], rax
.text:000000014E2CBAC5 4C 8B 11                                mov     r10, [rcx]
.text:000000014E2CBAC8 48 8B DA                                mov     rbx, rdx
.text:000000014E2CBACB 45 33 C9                                xor     r9d, r9d
.text:000000014E2CBACE 48 8D 54 24 20                          lea     rdx, [rsp+20h]
.text:000000014E2CBAD3 41 FF 92 30 04 00 00                    call    qword ptr [r10+430h]
.text:000000014E2CBADA 0F 10 48 10                             movups  xmm1, xmmword ptr [rax+10h]
.text:000000014E2CBADE 48 8B C3                                mov     rax, rbx
.text:000000014E2CBAE1 0F 28 C1                                movaps  xmm0, xmm1
.text:000000014E2CBAE4 F3 0F 11 0B                             movss   dword ptr [rbx], xmm1
.text:000000014E2CBAE8 0F C6 C1 55                             shufps  xmm0, xmm1, 55h ; 'U'
.text:000000014E2CBAEC 0F C6 C9 AA                             shufps  xmm1, xmm1, 0AAh
.text:000000014E2CBAF0 F3 0F 11 4B 08                          movss   dword ptr [rbx+8], xmm1
.text:000000014E2CBAF5 F3 0F 11 43 04                          movss   dword ptr [rbx+4], xmm0
.text:000000014E2CBAFA 48 8B 4C 24 50                          mov     rcx, [rsp+50h]
.text:000000014E2CBAFF 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014E2CBB02 E8 59 43 F9 01                          call    __security_check_cookie
.text:000000014E2CBB07 48 83 C4 60                             add     rsp, 60h
.text:000000014E2CBB0B 5B                                      pop     rbx
.text:000000014E2CBB0C C3                                      retn
.text:000000014E2CBB0C                         sub_14E2CBAB0   endp
.text:000000014E2CBB0C
.text:000000014E2CBB0C                         ; ---------------------------------------------------------------------------
.text:000000014E2CBB0D CC CC CC                                align 10h
.text:000000014E2CBB10
.text:000000014E2CBB10                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CBB10
.text:000000014E2CBB10
.text:000000014E2CBB10                         sub_14E2CBB10   proc near
.text:000000014E2CBB10
.text:000000014E2CBB10                         var_48          = byte ptr -48h
.text:000000014E2CBB10                         var_18          = qword ptr -18h
.text:000000014E2CBB10
.text:000000014E2CBB10 40 53                                   push    rbx
.text:000000014E2CBB12 48 83 EC 60                             sub     rsp, 60h
.text:000000014E2CBB16 48 8B 05 23 98 AF 08                    mov     rax, cs:off_156DC5340
.text:000000014E2CBB1D 48 33 C4                                xor     rax, rsp
.text:000000014E2CBB20 48 89 44 24 50                          mov     [rsp+50h], rax
.text:000000014E2CBB25 4C 8B 11                                mov     r10, [rcx]
.text:000000014E2CBB28 48 8B DA                                mov     rbx, rdx
.text:000000014E2CBB2B 45 33 C9                                xor     r9d, r9d
.text:000000014E2CBB2E 48 8D 54 24 20                          lea     rdx, [rsp+20h]
.text:000000014E2CBB33 41 FF 92 30 04 00 00                    call    qword ptr [r10+430h]
.text:000000014E2CBB3A 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.text:000000014E2CBB3D 48 8B C3                                mov     rax, rbx
.text:000000014E2CBB40 0F 11 03                                movups  xmmword ptr [rbx], xmm0
.text:000000014E2CBB43 48 8B 4C 24 50                          mov     rcx, [rsp+50h]
.text:000000014E2CBB48 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014E2CBB4B E8 10 43 F9 01                          call    __security_check_cookie
.text:000000014E2CBB50 48 83 C4 60                             add     rsp, 60h
.text:000000014E2CBB54 5B                                      pop     rbx
.text:000000014E2CBB55 C3                                      retn
.text:000000014E2CBB55                         sub_14E2CBB10   endp
.text:000000014E2CBB55
.text:000000014E2CBB55                         ; ---------------------------------------------------------------------------
.text:000000014E2CBB56 CC CC CC CC CC CC CC CC…                align 20h
.text:000000014E2CBB60
.text:000000014E2CBB60                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CBB60
.text:000000014E2CBB60
.text:000000014E2CBB60                         sub_14E2CBB60   proc near
.text:000000014E2CBB60
.text:000000014E2CBB60                         var_58          = xmmword ptr -58h
.text:000000014E2CBB60                         var_48          = byte ptr -48h
.text:000000014E2CBB60                         var_18          = qword ptr -18h
.text:000000014E2CBB60
.text:000000014E2CBB60 40 53                                   push    rbx
.text:000000014E2CBB62 48 83 EC 70                             sub     rsp, 70h
.text:000000014E2CBB66 48 8B 05 D3 97 AF 08                    mov     rax, cs:off_156DC5340
.text:000000014E2CBB6D 48 33 C4                                xor     rax, rsp
.text:000000014E2CBB70 48 89 44 24 60                          mov     [rsp+60h], rax
.text:000000014E2CBB75 4C 8B 11                                mov     r10, [rcx]
.text:000000014E2CBB78 48 8B DA                                mov     rbx, rdx
.text:000000014E2CBB7B 45 33 C9                                xor     r9d, r9d
.text:000000014E2CBB7E 48 8D 54 24 30                          lea     rdx, [rsp+30h]
.text:000000014E2CBB83 41 FF 92 30 04 00 00                    call    qword ptr [r10+430h]
.text:000000014E2CBB8A 48 8B D3                                mov     rdx, rbx
.text:000000014E2CBB8D 48 8D 4C 24 20                          lea     rcx, [rsp+20h]
.text:000000014E2CBB92 0F 10 00                                movups  xmm0, xmmword ptr [rax]
.text:000000014E2CBB95 0F 29 44 24 20                          movaps  xmmword ptr [rsp+20h], xmm0
.text:000000014E2CBB9A E8 31 A8 56 FE                          call    sub_14C8363D0
.text:000000014E2CBB9F 48 8B C3                                mov     rax, rbx
.text:000000014E2CBBA2 48 8B 4C 24 60                          mov     rcx, [rsp+60h]
.text:000000014E2CBBA7 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014E2CBBAA E8 B1 42 F9 01                          call    __security_check_cookie
.text:000000014E2CBBAF 48 83 C4 70                             add     rsp, 70h
.text:000000014E2CBBB3 5B                                      pop     rbx
.text:000000014E2CBBB4 C3                                      retn
.text:000000014E2CBBB4                         sub_14E2CBB60   endp
.text:000000014E2CBBB4
.text:000000014E2CBBB4                         ; ---------------------------------------------------------------------------
.text:000000014E2CBBB5 CC CC CC CC CC CC CC CC…                align 20h
.text:000000014E2CBBC0
.text:000000014E2CBBC0                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CBBC0
.text:000000014E2CBBC0
.text:000000014E2CBBC0                         sub_14E2CBBC0   proc near               ; CODE XREF: sub_141499F80+B93↑p
.text:000000014E2CBBC0                                                                 ; sub_14149AB80+B08↑p ...
.text:000000014E2CBBC0
.text:000000014E2CBBC0                         var_98          = xmmword ptr -98h
.text:000000014E2CBBC0                         var_88          = xmmword ptr -88h
.text:000000014E2CBBC0                         var_78          = xmmword ptr -78h
.text:000000014E2CBBC0                         var_68          = xmmword ptr -68h
.text:000000014E2CBBC0                         var_58          = byte ptr -58h
.text:000000014E2CBBC0                         var_28          = qword ptr -28h
.text:000000014E2CBBC0                         arg_10          = qword ptr  18h
.text:000000014E2CBBC0
.text:000000014E2CBBC0 48 89 5C 24 18                          mov     [rsp+arg_10], rbx
.text:000000014E2CBBC5 55                                      push    rbp
.text:000000014E2CBBC6 56                                      push    rsi
.text:000000014E2CBBC7 57                                      push    rdi
.text:000000014E2CBBC8 48 81 EC A0 00 00 00                    sub     rsp, 0A0h
.text:000000014E2CBBCF 48 8B 05 6A 97 AF 08                    mov     rax, cs:off_156DC5340
.text:000000014E2CBBD6 48 33 C4                                xor     rax, rsp
.text:000000014E2CBBD9 48 89 84 24 90 00 00 00                 mov     [rsp+0B8h+var_28], rax
.text:000000014E2CBBE1 48 8B DA                                mov     rbx, rdx
.text:000000014E2CBBE4 48 8B E9                                mov     rbp, rcx
.text:000000014E2CBBE7 41 83 E9 01                             sub     r9d, 1
.text:000000014E2CBBEB 0F 84 8C 00 00 00                       jz      loc_14E2CBC7D
.text:000000014E2CBBF1 41 83 E9 01                             sub     r9d, 1
.text:000000014E2CBBF5 74 64                                   jz      short loc_14E2CBC5B
.text:000000014E2CBBF7 41 83 F9 01                             cmp     r9d, 1
.text:000000014E2CBBFB 74 5E                                   jz      short loc_14E2CBC5B
.text:000000014E2CBBFD E8 5E 02 84 F2                          call    sub_140B0BE60
.text:000000014E2CBC02 48 8B F8                                mov     rdi, rax
.text:000000014E2CBC05 0F 10 50 10                             movups  xmm2, xmmword ptr [rax+10h]
.text:000000014E2CBC09 B8 FF FF 00 00                          mov     eax, 0FFFFh
.text:000000014E2CBC0E 0F 29 54 24 20                          movaps  [rsp+0B8h+var_98], xmm2
.text:000000014E2CBC13 66 39 47 30                             cmp     [rdi+30h], ax
.text:000000014E2CBC17 74 2B                                   jz      short loc_14E2CBC44
.text:000000014E2CBC19 80 7F 32 00                             cmp     byte ptr [rdi+32h], 0
.text:000000014E2CBC1D 75 0C                                   jnz     short loc_14E2CBC2B
.text:000000014E2CBC1F 48 8D 0D 2A 6E 40 02                    lea     rcx, aDoubleDecrypti ; "double decryption in EEncHandlerPolicy:"...
.text:000000014E2CBC26 E8 65 97 56 FE                          call    sub_14C835390
.text:000000014E2CBC2B
.text:000000014E2CBC2B                         loc_14E2CBC2B:                          ; CODE XREF: sub_14E2CBBC0+5D↑j
.text:000000014E2CBC2B 4C 8D 47 30                             lea     r8, [rdi+30h]
.text:000000014E2CBC2F BA 0C 00 00 00                          mov     edx, 0Ch
.text:000000014E2CBC34 48 8D 4C 24 20                          lea     rcx, [rsp+0B8h+var_98]
.text:000000014E2CBC39 FF 15 19 10 0E 09                       call    cs:qword_1573ACC58
.text:000000014E2CBC3F 0F 28 54 24 20                          movaps  xmm2, [rsp+0B8h+var_98]
.text:000000014E2CBC44
.text:000000014E2CBC44                         loc_14E2CBC44:                          ; CODE XREF: sub_14E2CBBC0+57↑j
.text:000000014E2CBC44 0F 10 07                                movups  xmm0, xmmword ptr [rdi]
.text:000000014E2CBC47 0F 10 4F 20                             movups  xmm1, xmmword ptr [rdi+20h]
.text:000000014E2CBC4B 0F 11 03                                movups  xmmword ptr [rbx], xmm0
.text:000000014E2CBC4E 0F 11 53 10                             movups  xmmword ptr [rbx+10h], xmm2
.text:000000014E2CBC52 0F 11 4B 20                             movups  xmmword ptr [rbx+20h], xmm1
.text:000000014E2CBC56 E9 A0 00 00 00                          jmp     loc_14E2CBCFB
.text:000000014E2CBC5B                         ; ---------------------------------------------------------------------------
.text:000000014E2CBC5B
.text:000000014E2CBC5B                         loc_14E2CBC5B:                          ; CODE XREF: sub_14E2CBBC0+35↑j
.text:000000014E2CBC5B                                                                 ; sub_14E2CBBC0+3B↑j
.text:000000014E2CBC5B 0F 28 05 4E CF 0D 09                    movaps  xmm0, cs:xmmword_1573A8BB0
.text:000000014E2CBC62 0F 11 02                                movups  xmmword ptr [rdx], xmm0
.text:000000014E2CBC65 0F 28 0D 54 CF 0D 09                    movaps  xmm1, cs:xmmword_1573A8BC0
.text:000000014E2CBC6C 0F 11 4A 10                             movups  xmmword ptr [rdx+10h], xmm1
.text:000000014E2CBC70 0F 28 05 59 CF 0D 09                    movaps  xmm0, cs:xmmword_1573A8BD0
.text:000000014E2CBC77 0F 11 42 20                             movups  xmmword ptr [rdx+20h], xmm0
.text:000000014E2CBC7B EB 7E                                   jmp     short loc_14E2CBCFB
.text:000000014E2CBC7D                         ; ---------------------------------------------------------------------------
.text:000000014E2CBC7D
.text:000000014E2CBC7D                         loc_14E2CBC7D:                          ; CODE XREF: sub_14E2CBBC0+2B↑j
.text:000000014E2CBC7D E8 DE 01 84 F2                          call    sub_140B0BE60
.text:000000014E2CBC82 48 8B F0                                mov     rsi, rax
.text:000000014E2CBC85 0F 10 50 10                             movups  xmm2, xmmword ptr [rax+10h]
.text:000000014E2CBC89 B8 FF FF 00 00                          mov     eax, 0FFFFh
.text:000000014E2CBC8E 0F 29 54 24 20                          movaps  [rsp+0B8h+var_98], xmm2
.text:000000014E2CBC93 66 39 46 30                             cmp     [rsi+30h], ax
.text:000000014E2CBC97 74 2B                                   jz      short loc_14E2CBCC4
.text:000000014E2CBC99 80 7E 32 00                             cmp     byte ptr [rsi+32h], 0
.text:000000014E2CBC9D 75 0C                                   jnz     short loc_14E2CBCAB
.text:000000014E2CBC9F 48 8D 0D AA 6D 40 02                    lea     rcx, aDoubleDecrypti ; "double decryption in EEncHandlerPolicy:"...
.text:000000014E2CBCA6 E8 E5 96 56 FE                          call    sub_14C835390
.text:000000014E2CBCAB
.text:000000014E2CBCAB                         loc_14E2CBCAB:                          ; CODE XREF: sub_14E2CBBC0+DD↑j
.text:000000014E2CBCAB 4C 8D 46 30                             lea     r8, [rsi+30h]
.text:000000014E2CBCAF BA 0C 00 00 00                          mov     edx, 0Ch
.text:000000014E2CBCB4 48 8D 4C 24 20                          lea     rcx, [rsp+0B8h+var_98]
.text:000000014E2CBCB9 FF 15 99 0F 0E 09                       call    cs:qword_1573ACC58
.text:000000014E2CBCBF 0F 28 54 24 20                          movaps  xmm2, [rsp+0B8h+var_98]
.text:000000014E2CBCC4
.text:000000014E2CBCC4                         loc_14E2CBCC4:                          ; CODE XREF: sub_14E2CBBC0+D7↑j
.text:000000014E2CBCC4 0F 10 06                                movups  xmm0, xmmword ptr [rsi]
.text:000000014E2CBCC7 48 8D 54 24 60                          lea     rdx, [rsp+0B8h+var_58]
.text:000000014E2CBCCC 0F 10 4E 20                             movups  xmm1, xmmword ptr [rsi+20h]
.text:000000014E2CBCD0 48 8B 8D E8 00 00 00                    mov     rcx, [rbp+0E8h]
.text:000000014E2CBCD7 0F 29 44 24 30                          movaps  [rsp+0B8h+var_88], xmm0
.text:000000014E2CBCDC 0F 29 4C 24 50                          movaps  [rsp+0B8h+var_68], xmm1
.text:000000014E2CBCE1 0F 29 54 24 40                          movaps  [rsp+0B8h+var_78], xmm2
.text:000000014E2CBCE6 E8 05 A0 B5 F2                          call    sub_140E25CF0
.text:000000014E2CBCEB 4C 8B C0                                mov     r8, rax
.text:000000014E2CBCEE 48 8D 4C 24 30                          lea     rcx, [rsp+0B8h+var_88]
.text:000000014E2CBCF3 48 8B D3                                mov     rdx, rbx
.text:000000014E2CBCF6 E8 A5 89 55 FE                          call    sub_14C8246A0
.text:000000014E2CBCFB
.text:000000014E2CBCFB                         loc_14E2CBCFB:                          ; CODE XREF: sub_14E2CBBC0+96↑j
.text:000000014E2CBCFB                                                                 ; sub_14E2CBBC0+BB↑j
.text:000000014E2CBCFB 48 8B C3                                mov     rax, rbx
.text:000000014E2CBCFE 48 8B 8C 24 90 00 00 00                 mov     rcx, [rsp+0B8h+var_28]
.text:000000014E2CBD06 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014E2CBD09 E8 52 41 F9 01                          call    __security_check_cookie
.text:000000014E2CBD0E 48 8B 9C 24 D0 00 00 00                 mov     rbx, [rsp+0B8h+arg_10]
.text:000000014E2CBD16 48 81 C4 A0 00 00 00                    add     rsp, 0A0h
.text:000000014E2CBD1D 5F                                      pop     rdi
.text:000000014E2CBD1E 5E                                      pop     rsi
.text:000000014E2CBD1F 5D                                      pop     rbp
.text:000000014E2CBD20 C3                                      retn
.text:000000014E2CBD20                         sub_14E2CBBC0   endp
.text:000000014E2CBD20
.text:000000014E2CBD20                         ; ---------------------------------------------------------------------------
.text:000000014E2CBD21 CC CC CC CC CC CC CC CC…                align 10h
.text:000000014E2CBD30
.text:000000014E2CBD30                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CBD30
.text:000000014E2CBD30
.text:000000014E2CBD30                         sub_14E2CBD30   proc near               ; CODE XREF: sub_145FDF5E0+3C0↑p
.text:000000014E2CBD30                                                                 ; sub_14E1DA440+84↑p
.text:000000014E2CBD30
.text:000000014E2CBD30                         var_48          = xmmword ptr -48h
.text:000000014E2CBD30                         var_38          = xmmword ptr -38h
.text:000000014E2CBD30                         var_18          = qword ptr -18h
.text:000000014E2CBD30                         arg_8           = qword ptr  10h
.text:000000014E2CBD30
.text:000000014E2CBD30 48 89 5C 24 10                          mov     [rsp+arg_8], rbx
.text:000000014E2CBD35 57                                      push    rdi
.text:000000014E2CBD36 48 83 EC 60                             sub     rsp, 60h
.text:000000014E2CBD3A 48 8B 05 FF 95 AF 08                    mov     rax, cs:off_156DC5340
.text:000000014E2CBD41 48 33 C4                                xor     rax, rsp
.text:000000014E2CBD44 48 89 44 24 50                          mov     [rsp+68h+var_18], rax
.text:000000014E2CBD49 48 8B 01                                mov     rax, [rcx]
.text:000000014E2CBD4C 49 8B D8                                mov     rbx, r8
.text:000000014E2CBD4F 49 8B F9                                mov     rdi, r9
.text:000000014E2CBD52 4C 8B C2                                mov     r8, rdx
.text:000000014E2CBD55 45 33 C9                                xor     r9d, r9d
.text:000000014E2CBD58 48 8D 54 24 20                          lea     rdx, [rsp+68h+var_48]
.text:000000014E2CBD5D FF 90 30 04 00 00                       call    qword ptr [rax+430h]
.text:000000014E2CBD63 0F 28 44 24 30                          movaps  xmm0, [rsp+68h+var_38]
.text:000000014E2CBD68 0F 28 C8                                movaps  xmm1, xmm0
.text:000000014E2CBD6B 0F 28 D0                                movaps  xmm2, xmm0
.text:000000014E2CBD6E 0F C6 D0 AA                             shufps  xmm2, xmm0, 0AAh
.text:000000014E2CBD72 0F C6 C8 55                             shufps  xmm1, xmm0, 55h ; 'U'
.text:000000014E2CBD76 0F 14 C1                                unpcklps xmm0, xmm1
.text:000000014E2CBD79 F2 0F 11 03                             movsd   qword ptr [rbx], xmm0
.text:000000014E2CBD7D 0F 28 44 24 20                          movaps  xmm0, [rsp+68h+var_48]
.text:000000014E2CBD82 F3 0F 11 53 08                          movss   dword ptr [rbx+8], xmm2
.text:000000014E2CBD87 0F 11 07                                movups  xmmword ptr [rdi], xmm0
.text:000000014E2CBD8A 48 8B 4C 24 50                          mov     rcx, [rsp+68h+var_18]
.text:000000014E2CBD8F 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014E2CBD92 E8 C9 40 F9 01                          call    __security_check_cookie
.text:000000014E2CBD97 48 8B 5C 24 78                          mov     rbx, [rsp+68h+arg_8]
.text:000000014E2CBD9C 48 83 C4 60                             add     rsp, 60h
.text:000000014E2CBDA0 5F                                      pop     rdi
.text:000000014E2CBDA1 C3                                      retn
.text:000000014E2CBDA1                         sub_14E2CBD30   endp
.text:000000014E2CBDA1
.text:000000014E2CBDA1                         ; ---------------------------------------------------------------------------
.text:000000014E2CBDA2 CC CC CC CC CC CC CC CC…                align 10h
.text:000000014E2CBDB0
.text:000000014E2CBDB0                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CBDB0
.text:000000014E2CBDB0
.text:000000014E2CBDB0                         sub_14E2CBDB0   proc near               ; CODE XREF: sub_147CB6840+476↑p
.text:000000014E2CBDB0                                                                 ; sub_147CD2980+68A↑p
.text:000000014E2CBDB0
.text:000000014E2CBDB0                         var_68          = qword ptr -68h
.text:000000014E2CBDB0                         var_60          = dword ptr -60h
.text:000000014E2CBDB0                         var_58          = xmmword ptr -58h
.text:000000014E2CBDB0                         var_48          = xmmword ptr -48h
.text:000000014E2CBDB0                         var_38          = xmmword ptr -38h
.text:000000014E2CBDB0                         var_18          = qword ptr -18h
.text:000000014E2CBDB0                         arg_8           = qword ptr  10h
.text:000000014E2CBDB0
.text:000000014E2CBDB0 48 89 5C 24 10                          mov     [rsp+arg_8], rbx
.text:000000014E2CBDB5 57                                      push    rdi
.text:000000014E2CBDB6 48 81 EC 80 00 00 00                    sub     rsp, 80h
.text:000000014E2CBDBD 48 8B 05 7C 95 AF 08                    mov     rax, cs:off_156DC5340
.text:000000014E2CBDC4 48 33 C4                                xor     rax, rsp
.text:000000014E2CBDC7 48 89 44 24 70                          mov     [rsp+88h+var_18], rax
.text:000000014E2CBDCC 48 8B 01                                mov     rax, [rcx]
.text:000000014E2CBDCF 49 8B D8                                mov     rbx, r8
.text:000000014E2CBDD2 49 8B F9                                mov     rdi, r9
.text:000000014E2CBDD5 4C 8B C2                                mov     r8, rdx
.text:000000014E2CBDD8 45 33 C9                                xor     r9d, r9d
.text:000000014E2CBDDB 48 8D 54 24 40                          lea     rdx, [rsp+88h+var_48]
.text:000000014E2CBDE0 FF 90 30 04 00 00                       call    qword ptr [rax+430h]
.text:000000014E2CBDE6 0F 28 44 24 50                          movaps  xmm0, [rsp+88h+var_38]
.text:000000014E2CBDEB 48 8D 54 24 20                          lea     rdx, [rsp+88h+var_68]
.text:000000014E2CBDF0 0F 28 C8                                movaps  xmm1, xmm0
.text:000000014E2CBDF3 48 8D 4C 24 30                          lea     rcx, [rsp+88h+var_58]
.text:000000014E2CBDF8 0F 28 D0                                movaps  xmm2, xmm0
.text:000000014E2CBDFB 0F C6 C8 55                             shufps  xmm1, xmm0, 55h ; 'U'
.text:000000014E2CBDFF 0F C6 D0 AA                             shufps  xmm2, xmm0, 0AAh
.text:000000014E2CBE03 0F 14 C1                                unpcklps xmm0, xmm1
.text:000000014E2CBE06 F2 0F 11 03                             movsd   qword ptr [rbx], xmm0
.text:000000014E2CBE0A 0F 28 44 24 40                          movaps  xmm0, [rsp+88h+var_48]
.text:000000014E2CBE0F 0F 29 44 24 30                          movaps  [rsp+88h+var_58], xmm0
.text:000000014E2CBE14 F3 0F 11 53 08                          movss   dword ptr [rbx+8], xmm2
.text:000000014E2CBE19 E8 B2 A5 56 FE                          call    sub_14C8363D0
.text:000000014E2CBE1E F2 0F 10 44 24 20                       movsd   xmm0, [rsp+88h+var_68]
.text:000000014E2CBE24 8B 44 24 28                             mov     eax, [rsp+88h+var_60]
.text:000000014E2CBE28 F2 0F 11 07                             movsd   qword ptr [rdi], xmm0
.text:000000014E2CBE2C 89 47 08                                mov     [rdi+8], eax
.text:000000014E2CBE2F 48 8B 4C 24 70                          mov     rcx, [rsp+88h+var_18]
.text:000000014E2CBE34 48 33 CC                                xor     rcx, rsp        ; StackCookie
.text:000000014E2CBE37 E8 24 40 F9 01                          call    __security_check_cookie
.text:000000014E2CBE3C 48 8B 9C 24 98 00 00 00                 mov     rbx, [rsp+88h+arg_8]
.text:000000014E2CBE44 48 81 C4 80 00 00 00                    add     rsp, 80h
.text:000000014E2CBE4B 5F                                      pop     rdi
.text:000000014E2CBE4C C3                                      retn
.text:000000014E2CBE4C                         sub_14E2CBDB0   endp
.text:000000014E2CBE4C
.text:000000014E2CBE4C                         ; ---------------------------------------------------------------------------
.text:000000014E2CBE4D CC CC CC                                align 10h
.text:000000014E2CBE50 48 89 5C 24 08 48 89 74…                dq 74894808245C8948h, 8B20EC8348571024h, 0F98B480934978315h
.text:000000014E2CBE68 65 48 8B 04 25 58 00 00…                dq 5825048B4865h, 204B9DB3300h, 3901048BD0048B48h, 0B78F0F0926449305h
.text:000000014E2CBE88 00 00 00 38 1D 07 C3 10…                dq 10C3071D38000000h, 9264478358B4809h, 22AF03815FF0F74h
.text:000000014E2CBEA0 3B 05 E2 C2 10 09 0F 95…                dq 950F0910C2E2053Bh, 807B75009E3C83C3h, 72750000000424BFh
.text:000000014E2CBEB8 F3 0F 10 87 34 04 00 00…                dq 43487100FF3h, 3087590FF3D2570Fh, 0FF3C9570F000004h
.text:000000014E2CBED0 51 D0 0F 2E D1 75 23 F3…                dq 0F32375D12E0FD051h, 0F0246253115100Fh, 1126055D0FF3C228h
.text:000000014E2CBEE8 40 02 48 8B 5C 24 30 48…                dq 4830245C8B480240h, 20C483483824748Bh, 792E15590FF3C35Fh
.text:000000014E2CBF00 01 03 F3 0F 10 05 D6 24…                dq 24D605100FF30301h, 0F2372D02F0F0246h, 10F6055D0FF3C228h
.text:000000014E2CBF18 40 02 48 8B 5C 24 30 48…                dq 4830245C8B480240h, 20C483483824748Bh, 10DE05100FF3C35Fh
.text:000000014E2CBF30 40 02 48 8B 5C 24 30 48…                dq 4830245C8B480240h, 20C483483824748Bh, 2643CF0D8D48C35Fh
.text:000000014E2CBF48 09 E8 26 3D F9 01 83 3D…                dq 3D8301F93D26E809h, 30850FFF092643C3h, 128E0D8B48FFFFFFh
.text:000000014E2CBF60 09 09 48 85 C9 75 0C E8…                dq 0E80C75C985480909h, 7D0D8B48FE4C26B4h, 8D48018B48090912h
.text:000000014E2CBF78 15 B3 08 85 06 41 B0 01…                dq 1B041068508B315h, 8548000000F890FFh, 8B48108B480B74C0h
.text:000000014E2CBF90 C8 FF 52 58 EB 03 48 8B…                dq 8B4803EB5852FFC8h, 92643780D8D48C3h, 0E809264369058948h
.text:000000014E2CBFA8 5C 3C F9 01 E9 DA FE FF…                dq 0FFFEDAE901F93C5Ch, 0CCCCCCCCCCCCCCFFh, 0CCCCCCCCCCCCCCCCh
.text:000000014E2CBFC0
.text:000000014E2CBFC0                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CBFC0
.text:000000014E2CBFC0
.text:000000014E2CBFC0                         sub_14E2CBFC0   proc near               ; CODE XREF: sub_141D8D500+6E2↑p
.text:000000014E2CBFC0                                                                 ; sub_141E5B670+D0E↑p ...
.text:000000014E2CBFC0
.text:000000014E2CBFC0                         var_18          = xmmword ptr -18h
.text:000000014E2CBFC0
.text:000000014E2CBFC0 40 53                                   push    rbx
.text:000000014E2CBFC2 48 83 EC 30                             sub     rsp, 30h
.text:000000014E2CBFC6 0F 29 74 24 20                          movaps  [rsp+38h+var_18], xmm6
.text:000000014E2CBFCB 48 8B DA                                mov     rbx, rdx
.text:000000014E2CBFCE 66 0F 6F 35 9A 13 41 02                 movdqa  xmm6, cs:xmmword_1506DD370
.text:000000014E2CBFD6 E8 85 FE 83 F2                          call    sub_140B0BE60
.text:000000014E2CBFDB 0F 28 C6                                movaps  xmm0, xmm6
.text:000000014E2CBFDE 0F 28 DE                                movaps  xmm3, xmm6
.text:000000014E2CBFE1 0F C6 C6 C9                             shufps  xmm0, xmm6, 0C9h
.text:000000014E2CBFE5 0F C6 DE D2                             shufps  xmm3, xmm6, 0D2h
.text:000000014E2CBFE9 0F 10 28                                movups  xmm5, xmmword ptr [rax]
.text:000000014E2CBFEC 48 8B C3                                mov     rax, rbx
.text:000000014E2CBFEF 0F 28 E5                                movaps  xmm4, xmm5
.text:000000014E2CBFF2 0F 28 CD                                movaps  xmm1, xmm5
.text:000000014E2CBFF5 0F C6 E5 C9                             shufps  xmm4, xmm5, 0C9h
.text:000000014E2CBFF9 0F C6 CD D2                             shufps  xmm1, xmm5, 0D2h
.text:000000014E2CBFFD 0F 59 C1                                mulps   xmm0, xmm1
.text:000000014E2CC000 0F 59 DC                                mulps   xmm3, xmm4
.text:000000014E2CC003 0F C6 ED FF                             shufps  xmm5, xmm5, 0FFh
.text:000000014E2CC007 0F 5C D8                                subps   xmm3, xmm0
.text:000000014E2CC00A 0F 58 DB                                addps   xmm3, xmm3
.text:000000014E2CC00D 0F 28 C3                                movaps  xmm0, xmm3
.text:000000014E2CC010 0F 59 EB                                mulps   xmm5, xmm3
.text:000000014E2CC013 0F C6 C3 C9                             shufps  xmm0, xmm3, 0C9h
.text:000000014E2CC017 0F 28 D3                                movaps  xmm2, xmm3
.text:000000014E2CC01A 0F C6 D3 D2                             shufps  xmm2, xmm3, 0D2h
.text:000000014E2CC01E 0F 59 C1                                mulps   xmm0, xmm1
.text:000000014E2CC021 0F 59 D4                                mulps   xmm2, xmm4
.text:000000014E2CC024 0F 58 EE                                addps   xmm5, xmm6
.text:000000014E2CC027 0F 28 74 24 20                          movaps  xmm6, [rsp+38h+var_18]
.text:000000014E2CC02C 0F 5C D0                                subps   xmm2, xmm0
.text:000000014E2CC02F 0F 58 D5                                addps   xmm2, xmm5
.text:000000014E2CC032 0F 28 C2                                movaps  xmm0, xmm2
.text:000000014E2CC035 F3 0F 11 13                             movss   dword ptr [rbx], xmm2
.text:000000014E2CC039 0F C6 C2 55                             shufps  xmm0, xmm2, 55h ; 'U'
.text:000000014E2CC03D 0F C6 D2 AA                             shufps  xmm2, xmm2, 0AAh
.text:000000014E2CC041 F3 0F 11 53 08                          movss   dword ptr [rbx+8], xmm2
.text:000000014E2CC046 F3 0F 11 43 04                          movss   dword ptr [rbx+4], xmm0
.text:000000014E2CC04B 48 83 C4 30                             add     rsp, 30h
.text:000000014E2CC04F 5B                                      pop     rbx
.text:000000014E2CC050 C3                                      retn
.text:000000014E2CC050                         sub_14E2CBFC0   endp
.text:000000014E2CC050
.text:000000014E2CC050                         ; ---------------------------------------------------------------------------
.text:000000014E2CC051 CC CC CC CC CC CC CC CC…                align 20h
.text:000000014E2CC060
.text:000000014E2CC060                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CC060
.text:000000014E2CC060
.text:000000014E2CC060                         sub_14E2CC060   proc near               ; CODE XREF: sub_14D632510+2BC↑p
.text:000000014E2CC060
.text:000000014E2CC060                         arg_0           = qword ptr  8
.text:000000014E2CC060                         arg_8           = qword ptr  10h
.text:000000014E2CC060                         arg_10          = qword ptr  18h
.text:000000014E2CC060                         arg_18          = qword ptr  20h
.text:000000014E2CC060
.text:000000014E2CC060 48 89 5C 24 18                          mov     [rsp+arg_10], rbx
.text:000000014E2CC065 48 89 6C 24 20                          mov     [rsp+arg_18], rbp
.text:000000014E2CC06A 56                                      push    rsi
.text:000000014E2CC06B 57                                      push    rdi
.text:000000014E2CC06C 41 57                                   push    r15
.text:000000014E2CC06E 48 83 EC 20                             sub     rsp, 20h
.text:000000014E2CC072 4C 89 74 24 48                          mov     [rsp+38h+arg_8], r14
.text:000000014E2CC077 48 8D B9 F0 02 00 00                    lea     rdi, [rcx+2F0h]
.text:000000014E2CC07E 4C 63 F2                                movsxd  r14, edx
.text:000000014E2CC081 45 33 FF                                xor     r15d, r15d
.text:000000014E2CC084 48 8B E9                                mov     rbp, rcx
.text:000000014E2CC087 44 3B B1 F8 02 00 00                    cmp     r14d, [rcx+2F8h]
.text:000000014E2CC08E 7C 6A                                   jl      short loc_14E2CC0FA
.text:000000014E2CC090 4C 89 64 24 40                          mov     [rsp+38h+arg_0], r12
.text:000000014E2CC095 4C 8D 25 C4 80 5E 06                    lea     r12, off_1548B4160
.text:000000014E2CC09C 0F 1F 40 00                             nop     dword ptr [rax+00h]
.text:000000014E2CC0A0
.text:000000014E2CC0A0                         loc_14E2CC0A0:                          ; CODE XREF: sub_14E2CC060+93↓j
.text:000000014E2CC0A0 B9 28 00 00 00                          mov     ecx, 28h ; '('
.text:000000014E2CC0A5 E8 26 0D 7F F4                          call    sub_142ABCDD0
.text:000000014E2CC0AA 48 8B D8                                mov     rbx, rax
.text:000000014E2CC0AD 48 85 C0                                test    rax, rax
.text:000000014E2CC0B0 74 11                                   jz      short loc_14E2CC0C3
.text:000000014E2CC0B2 4C 89 20                                mov     [rax], r12
.text:000000014E2CC0B5 4C 89 78 08                             mov     [rax+8], r15
.text:000000014E2CC0B9 4C 89 78 10                             mov     [rax+10h], r15
.text:000000014E2CC0BD 4C 89 78 18                             mov     [rax+18h], r15
.text:000000014E2CC0C1 EB 03                                   jmp     short loc_14E2CC0C6
.text:000000014E2CC0C3                         ; ---------------------------------------------------------------------------
.text:000000014E2CC0C3
.text:000000014E2CC0C3                         loc_14E2CC0C3:                          ; CODE XREF: sub_14E2CC060+50↑j
.text:000000014E2CC0C3 49 8B DF                                mov     rbx, r15
.text:000000014E2CC0C6
.text:000000014E2CC0C6                         loc_14E2CC0C6:                          ; CODE XREF: sub_14E2CC060+61↑j
.text:000000014E2CC0C6 48 63 77 08                             movsxd  rsi, dword ptr [rdi+8]
.text:000000014E2CC0CA 8D 46 01                                lea     eax, [rsi+1]
.text:000000014E2CC0CD 89 47 08                                mov     [rdi+8], eax
.text:000000014E2CC0D0 3B 47 0C                                cmp     eax, [rdi+0Ch]
.text:000000014E2CC0D3 7E 0A                                   jle     short loc_14E2CC0DF
.text:000000014E2CC0D5 8B D6                                   mov     edx, esi
.text:000000014E2CC0D7 48 8B CF                                mov     rcx, rdi
.text:000000014E2CC0DA E8 01 BF 7F F2                          call    sub_140AC7FE0
.text:000000014E2CC0DF
.text:000000014E2CC0DF                         loc_14E2CC0DF:                          ; CODE XREF: sub_14E2CC060+73↑j
.text:000000014E2CC0DF 48 8B CF                                mov     rcx, rdi
.text:000000014E2CC0E2 FF 15 88 E6 57 08                       call    cs:qword_15684A770
.text:000000014E2CC0E8 48 89 1C F0                             mov     [rax+rsi*8], rbx
.text:000000014E2CC0EC 44 3B B5 F8 02 00 00                    cmp     r14d, [rbp+2F8h]
.text:000000014E2CC0F3 7D AB                                   jge     short loc_14E2CC0A0
.text:000000014E2CC0F5 4C 8B 64 24 40                          mov     r12, [rsp+38h+arg_0]
.text:000000014E2CC0FA
.text:000000014E2CC0FA                         loc_14E2CC0FA:                          ; CODE XREF: sub_14E2CC060+2E↑j
.text:000000014E2CC0FA 48 8B CF                                mov     rcx, rdi
.text:000000014E2CC0FD FF 15 6D E6 57 08                       call    cs:qword_15684A770
.text:000000014E2CC103 0F B6 95 98 02 00 00                    movzx   edx, byte ptr [rbp+298h]
.text:000000014E2CC10A 4A 8D 34 F5 00 00 00 00                 lea     rsi, ds:0[r14*8]
.text:000000014E2CC112 48 8D 8D 9A 02 00 00                    lea     rcx, [rbp+29Ah]
.text:000000014E2CC119 49 8B DE                                mov     rbx, r14
.text:000000014E2CC11C 4C 8B 74 24 48                          mov     r14, [rsp+38h+arg_8]
.text:000000014E2CC121 48 8B 04 06                             mov     rax, [rsi+rax]
.text:000000014E2CC125 48 8B 40 08                             mov     rax, [rax+8]
.text:000000014E2CC129 84 D2                                   test    dl, dl
.text:000000014E2CC12B 75 0C                                   jnz     short loc_14E2CC139
.text:000000014E2CC12D 44 38 39                                cmp     [rcx], r15b
.text:000000014E2CC130 75 07                                   jnz     short loc_14E2CC139
.text:000000014E2CC132 48 85 C0                                test    rax, rax
.text:000000014E2CC135 75 37                                   jnz     short loc_14E2CC16E
.text:000000014E2CC137 EB 4F                                   jmp     short loc_14E2CC188
.text:000000014E2CC139                         ; ---------------------------------------------------------------------------
.text:000000014E2CC139
.text:000000014E2CC139                         loc_14E2CC139:                          ; CODE XREF: sub_14E2CC060+CB↑j
.text:000000014E2CC139                                                                 ; sub_14E2CC060+D0↑j
.text:000000014E2CC139 48 85 C0                                test    rax, rax
.text:000000014E2CC13C 75 25                                   jnz     short loc_14E2CC163
.text:000000014E2CC13E 48 8B CF                                mov     rcx, rdi
.text:000000014E2CC141 FF 15 29 E6 57 08                       call    cs:qword_15684A770
.text:000000014E2CC147 48 8B 0C 06                             mov     rcx, [rsi+rax]
.text:000000014E2CC14B E8 60 2D 5A 00                          call    sub_14E86EEB0
.text:000000014E2CC150 48 8B CF                                mov     rcx, rdi
.text:000000014E2CC153 FF 15 17 E6 57 08                       call    cs:qword_15684A770
.text:000000014E2CC159 48 8B 0C 06                             mov     rcx, [rsi+rax]
.text:000000014E2CC15D 48 8B 41 08                             mov     rax, [rcx+8]
.text:000000014E2CC161 EB 25                                   jmp     short loc_14E2CC188
.text:000000014E2CC163                         ; ---------------------------------------------------------------------------
.text:000000014E2CC163
.text:000000014E2CC163                         loc_14E2CC163:                          ; CODE XREF: sub_14E2CC060+DC↑j
.text:000000014E2CC163 84 D2                                   test    dl, dl
.text:000000014E2CC165 75 21                                   jnz     short loc_14E2CC188
.text:000000014E2CC167 48 8D BD F0 02 00 00                    lea     rdi, [rbp+2F0h]
.text:000000014E2CC16E
.text:000000014E2CC16E                         loc_14E2CC16E:                          ; CODE XREF: sub_14E2CC060+D5↑j
.text:000000014E2CC16E 44 38 39                                cmp     [rcx], r15b
.text:000000014E2CC171 75 15                                   jnz     short loc_14E2CC188
.text:000000014E2CC173 48 8B CF                                mov     rcx, rdi
.text:000000014E2CC176 FF 15 F4 E5 57 08                       call    cs:qword_15684A770
.text:000000014E2CC17C 48 8B 0C D8                             mov     rcx, [rax+rbx*8]
.text:000000014E2CC180 E8 1B 09 5B 00                          call    sub_14E87CAA0
.text:000000014E2CC185 49 8B C7                                mov     rax, r15
.text:000000014E2CC188
.text:000000014E2CC188                         loc_14E2CC188:                          ; CODE XREF: sub_14E2CC060+D7↑j
.text:000000014E2CC188                                                                 ; sub_14E2CC060+101↑j ...
.text:000000014E2CC188 48 8B 5C 24 50                          mov     rbx, [rsp+38h+arg_10]
.text:000000014E2CC18D 48 8B 6C 24 58                          mov     rbp, [rsp+38h+arg_18]
.text:000000014E2CC192 48 83 C4 20                             add     rsp, 20h
.text:000000014E2CC196 41 5F                                   pop     r15
.text:000000014E2CC198 5F                                      pop     rdi
.text:000000014E2CC199 5E                                      pop     rsi
.text:000000014E2CC19A C3                                      retn
.text:000000014E2CC19A                         sub_14E2CC060   endp
.text:000000014E2CC19A
.text:000000014E2CC19A                         ; ---------------------------------------------------------------------------
.text:000000014E2CC19B CC CC CC CC CC                          align 20h
.text:000000014E2CC1A0
.text:000000014E2CC1A0                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CC1A0
.text:000000014E2CC1A0                         ; Attributes: bp-based frame fpd=10h
.text:000000014E2CC1A0
.text:000000014E2CC1A0                         sub_14E2CC1A0   proc near
.text:000000014E2CC1A0
.text:000000014E2CC1A0                         var_F0          = xmmword ptr -0F0h
.text:000000014E2CC1A0                         var_E0          = xmmword ptr -0E0h
.text:000000014E2CC1A0                         var_D0          = xmmword ptr -0D0h
.text:000000014E2CC1A0                         var_C0          = xmmword ptr -0C0h
.text:000000014E2CC1A0                         var_B0          = xmmword ptr -0B0h
.text:000000014E2CC1A0                         var_A0          = xmmword ptr -0A0h
.text:000000014E2CC1A0                         var_50          = xmmword ptr -50h
.text:000000014E2CC1A0                         var_40          = xmmword ptr -40h
.text:000000014E2CC1A0                         var_s0          = byte ptr  0
.text:000000014E2CC1A0                         arg_0           = qword ptr  10h
.text:000000014E2CC1A0                         arg_8           = qword ptr  18h
.text:000000014E2CC1A0
.text:000000014E2CC1A0 48 8B C4                                mov     rax, rsp
.text:000000014E2CC1A3 48 89 58 18                             mov     [rax+18h], rbx
.text:000000014E2CC1A7 55                                      push    rbp
.text:000000014E2CC1A8 48 8D 68 E8                             lea     rbp, [rax-18h]
.text:000000014E2CC1AC 48 81 EC 10 01 00 00                    sub     rsp, 110h
.text:000000014E2CC1B3 0F 29 70 E8                             movaps  xmmword ptr [rax-18h], xmm6
.text:000000014E2CC1B7 48 8B DA                                mov     rbx, rdx
.text:000000014E2CC1BA 0F 29 78 D8                             movaps  xmmword ptr [rax-28h], xmm7
.text:000000014E2CC1BE 44 0F 29 40 C8                          movaps  xmmword ptr [rax-38h], xmm8
.text:000000014E2CC1C3 44 0F 29 58 98                          movaps  xmmword ptr [rax-68h], xmm11
.text:000000014E2CC1C8 44 0F 29 60 88                          movaps  xmmword ptr [rax-78h], xmm12
.text:000000014E2CC1CD 44 0F 29 A8 78 FF FF FF                 movaps  xmmword ptr [rax-88h], xmm13
.text:000000014E2CC1D5 44 0F 29 B0 68 FF FF FF                 movaps  xmmword ptr [rax-98h], xmm14
.text:000000014E2CC1DD 44 0F 29 7C 24 70                       movaps  [rsp+110h+var_A0], xmm15
.text:000000014E2CC1E3 48 89 70 08                             mov     [rax+8], rsi
.text:000000014E2CC1E7 48 89 78 10                             mov     [rax+10h], rdi
.text:000000014E2CC1EB E8 70 FC 83 F2                          call    sub_140B0BE60
.text:000000014E2CC1F0 48 8B F8                                mov     rdi, rax
.text:000000014E2CC1F3 44 0F 10 68 10                          movups  xmm13, xmmword ptr [rax+10h]
.text:000000014E2CC1F8 B8 FF FF 00 00                          mov     eax, 0FFFFh
.text:000000014E2CC1FD 44 0F 29 6C 24 20                       movaps  [rsp+110h+var_F0], xmm13
.text:000000014E2CC203 66 39 47 30                             cmp     [rdi+30h], ax
.text:000000014E2CC207 74 2C                                   jz      short loc_14E2CC235
.text:000000014E2CC209 80 7F 32 00                             cmp     byte ptr [rdi+32h], 0
.text:000000014E2CC20D 75 0C                                   jnz     short loc_14E2CC21B
.text:000000014E2CC20F 48 8D 0D 3A 68 40 02                    lea     rcx, aDoubleDecrypti ; "double decryption in EEncHandlerPolicy:"...
.text:000000014E2CC216 E8 75 91 56 FE                          call    sub_14C835390
.text:000000014E2CC21B
.text:000000014E2CC21B                         loc_14E2CC21B:                          ; CODE XREF: sub_14E2CC1A0+6D↑j
.text:000000014E2CC21B 4C 8D 47 30                             lea     r8, [rdi+30h]
.text:000000014E2CC21F BA 0C 00 00 00                          mov     edx, 0Ch
.text:000000014E2CC224 48 8D 4C 24 20                          lea     rcx, [rsp+110h+var_F0]
.text:000000014E2CC229 FF 15 29 0A 0E 09                       call    cs:qword_1573ACC58
.text:000000014E2CC22F 44 0F 28 6C 24 20                       movaps  xmm13, [rsp+110h+var_F0]
.text:000000014E2CC235
.text:000000014E2CC235                         loc_14E2CC235:                          ; CODE XREF: sub_14E2CC1A0+67↑j
.text:000000014E2CC235 44 0F 28 35 C3 3B 26 09                 movaps  xmm14, cs:xmmword_15752FE00
.text:000000014E2CC23D 0F 57 C9                                xorps   xmm1, xmm1
.text:000000014E2CC240 0F 10 7F 20                             movups  xmm7, xmmword ptr [rdi+20h]
.text:000000014E2CC244 41 0F 28 C6                             movaps  xmm0, xmm14
.text:000000014E2CC248 0F 10 37                                movups  xmm6, xmmword ptr [rdi]
.text:000000014E2CC24B 45 0F 28 DE                             movaps  xmm11, xmm14
.text:000000014E2CC24F 44 0F 28 05 E9 3C 26 09                 movaps  xmm8, cs:xmmword_15752FF40
.text:000000014E2CC257 0F 57 ED                                xorps   xmm5, xmm5
.text:000000014E2CC25A 44 0F 28 3D BE 3B 26 09                 movaps  xmm15, cs:xmmword_15752FE20
.text:000000014E2CC262 45 0F 54 D8                             andps   xmm11, xmm8
.text:000000014E2CC266 66 44 0F 6F 25 B1 E5 85                 movdqa  xmm12, cs:xmmword_154B2A820
.text:000000014E2CC266 06
.text:000000014E2CC26F 48 8B BC 24 28 01 00 00                 mov     rdi, [rsp+110h+arg_8]
.text:000000014E2CC277 48 8B B4 24 20 01 00 00                 mov     rsi, [rsp+110h+arg_0]
.text:000000014E2CC27F 0F 12 C1                                movhlps xmm0, xmm1
.text:000000014E2CC282 0F C6 E8 C4                             shufps  xmm5, xmm0, 0C4h
.text:000000014E2CC286 41 0F 28 C3                             movaps  xmm0, xmm11
.text:000000014E2CC28A 0F 5D C7                                minps   xmm0, xmm7
.text:000000014E2CC28D 0F 11 2B                                movups  xmmword ptr [rbx], xmm5
.text:000000014E2CC290 41 0F C2 C7 01                          cmpltps xmm0, xmm15
.text:000000014E2CC295 0F 50 C0                                movmskps eax, xmm0
.text:000000014E2CC298 0F 28 C6                                movaps  xmm0, xmm6
.text:000000014E2CC29B 0F 11 4B 10                             movups  xmmword ptr [rbx+10h], xmm1
.text:000000014E2CC29F 44 0F 11 5B 20                          movups  xmmword ptr [rbx+20h], xmm11
.text:000000014E2CC2A4 85 C0                                   test    eax, eax
.text:000000014E2CC2A6 0F 84 B6 03 00 00                       jz      loc_14E2CC662
.text:000000014E2CC2AC 0F C6 C6 04                             shufps  xmm0, xmm6, 4
.text:000000014E2CC2B0 0F 28 D6                                movaps  xmm2, xmm6
.text:000000014E2CC2B3 0F 58 D6                                addps   xmm2, xmm6
.text:000000014E2CC2B6 44 0F 29 8C 24 D0 00 00                 movaps  [rsp+110h+var_40], xmm9
.text:000000014E2CC2B6 00
.text:000000014E2CC2BF 0F 28 E7                                movaps  xmm4, xmm7
.text:000000014E2CC2C2 44 0F 29 94 24 C0 00 00                 movaps  [rsp+110h+var_50], xmm10
.text:000000014E2CC2C2 00
.text:000000014E2CC2CB 0F C6 E7 C9                             shufps  xmm4, xmm7, 0C9h
.text:000000014E2CC2CF 45 0F 28 D3                             movaps  xmm10, xmm11
.text:000000014E2CC2D3 44 0F 59 D7                             mulps   xmm10, xmm7
.text:000000014E2CC2D7 0F 28 DA                                movaps  xmm3, xmm2
.text:000000014E2CC2DA 0F 28 CA                                movaps  xmm1, xmm2
.text:000000014E2CC2DD 0F C6 CA 29                             shufps  xmm1, xmm2, 29h ; ')'
.text:000000014E2CC2E1 0F 59 C8                                mulps   xmm1, xmm0
.text:000000014E2CC2E4 0F 59 DE                                mulps   xmm3, xmm6
.text:000000014E2CC2E7 0F C6 D2 12                             shufps  xmm2, xmm2, 12h
.text:000000014E2CC2EB 0F C6 F6 FF                             shufps  xmm6, xmm6, 0FFh
.text:000000014E2CC2EF 0F 59 D6                                mulps   xmm2, xmm6
.text:000000014E2CC2F2 0F 28 C3                                movaps  xmm0, xmm3
.text:000000014E2CC2F5 0F C6 C3 1A                             shufps  xmm0, xmm3, 1Ah
.text:000000014E2CC2F9 0F C6 DB 01                             shufps  xmm3, xmm3, 1
.text:000000014E2CC2FD 0F 58 C3                                addps   xmm0, xmm3
.text:000000014E2CC300 44 0F 28 CA                             movaps  xmm9, xmm2
.text:000000014E2CC304 44 0F 58 C9                             addps   xmm9, xmm1
.text:000000014E2CC308 0F 28 DD                                movaps  xmm3, xmm5
.text:000000014E2CC30B 0F 5C CA                                subps   xmm1, xmm2
.text:000000014E2CC30E 0F 28 D5                                movaps  xmm2, xmm5
.text:000000014E2CC311 0F 58 D5                                addps   xmm2, xmm5
.text:000000014E2CC314 44 0F 59 CF                             mulps   xmm9, xmm7
.text:000000014E2CC318 0F 59 E1                                mulps   xmm4, xmm1
.text:000000014E2CC31B 41 0F 28 CE                             movaps  xmm1, xmm14
.text:000000014E2CC31F 0F 5C C8                                subps   xmm1, xmm0
.text:000000014E2CC322 0F 59 DA                                mulps   xmm3, xmm2
.text:000000014E2CC325 0F 28 C4                                movaps  xmm0, xmm4
.text:000000014E2CC328 0F 59 CF                                mulps   xmm1, xmm7
.text:000000014E2CC32B 0F 28 FC                                movaps  xmm7, xmm4
.text:000000014E2CC32E 41 0F 54 C8                             andps   xmm1, xmm8
.text:000000014E2CC332 45 0F 28 C1                             movaps  xmm8, xmm9
.text:000000014E2CC336 0F C6 C1 32                             shufps  xmm0, xmm1, 32h ; '2'
.text:000000014E2CC33A 44 0F C6 C1 00                          shufps  xmm8, xmm1, 0
.text:000000014E2CC33F 44 0F C6 C0 82                          shufps  xmm8, xmm0, 82h
.text:000000014E2CC344 41 0F 28 C1                             movaps  xmm0, xmm9
.text:000000014E2CC348 0F C6 C1 31                             shufps  xmm0, xmm1, 31h ; '1'
.text:000000014E2CC34C 0F C6 F9 10                             shufps  xmm7, xmm1, 10h
.text:000000014E2CC350 0F C6 F8 88                             shufps  xmm7, xmm0, 88h
.text:000000014E2CC354 41 0F 28 C6                             movaps  xmm0, xmm14
.text:000000014E2CC358 41 0F 12 C5                             movhlps xmm0, xmm13
.text:000000014E2CC35C 44 0F C6 E8 C4                          shufps  xmm13, xmm0, 0C4h
.text:000000014E2CC361 0F 28 C5                                movaps  xmm0, xmm5
.text:000000014E2CC364 0F C6 C5 04                             shufps  xmm0, xmm5, 4
.text:000000014E2CC368 44 0F C6 CC 12                          shufps  xmm9, xmm4, 12h
.text:000000014E2CC36D 41 0F 28 E3                             movaps  xmm4, xmm11
.text:000000014E2CC371 44 0F C6 C9 E8                          shufps  xmm9, xmm1, 0E8h
.text:000000014E2CC376 0F 28 CA                                movaps  xmm1, xmm2
.text:000000014E2CC379 0F C6 CA 29                             shufps  xmm1, xmm2, 29h ; ')'
.text:000000014E2CC37D 0F 59 C8                                mulps   xmm1, xmm0
.text:000000014E2CC380 0F 28 C3                                movaps  xmm0, xmm3
.text:000000014E2CC383 0F C6 C3 1A                             shufps  xmm0, xmm3, 1Ah
.text:000000014E2CC387 0F C6 DB 01                             shufps  xmm3, xmm3, 1
.text:000000014E2CC38B 0F 58 C3                                addps   xmm0, xmm3
.text:000000014E2CC38E 0F C6 ED FF                             shufps  xmm5, xmm5, 0FFh
.text:000000014E2CC392 0F C6 D2 12                             shufps  xmm2, xmm2, 12h
.text:000000014E2CC396 0F 59 D5                                mulps   xmm2, xmm5
.text:000000014E2CC399 41 0F C6 E3 C9                          shufps  xmm4, xmm11, 0C9h
.text:000000014E2CC39E 0F 28 F2                                movaps  xmm6, xmm2
.text:000000014E2CC3A1 0F 58 F1                                addps   xmm6, xmm1
.text:000000014E2CC3A4 0F 5C CA                                subps   xmm1, xmm2
.text:000000014E2CC3A7 41 0F 59 F3                             mulps   xmm6, xmm11
.text:000000014E2CC3AB 0F 59 E1                                mulps   xmm4, xmm1
.text:000000014E2CC3AE 41 0F 28 CE                             movaps  xmm1, xmm14
.text:000000014E2CC3B2 0F 5C C8                                subps   xmm1, xmm0
.text:000000014E2CC3B5 0F 28 DE                                movaps  xmm3, xmm6
.text:000000014E2CC3B8 0F 28 C4                                movaps  xmm0, xmm4
.text:000000014E2CC3BB 0F 28 EC                                movaps  xmm5, xmm4
.text:000000014E2CC3BE 41 0F 59 CB                             mulps   xmm1, xmm11
.text:000000014E2CC3C2 0F 54 0D 77 3B 26 09                    andps   xmm1, cs:xmmword_15752FF40
.text:000000014E2CC3C9 0F C6 C1 32                             shufps  xmm0, xmm1, 32h ; '2'
.text:000000014E2CC3CD 0F C6 D9 00                             shufps  xmm3, xmm1, 0
.text:000000014E2CC3D1 0F C6 D8 82                             shufps  xmm3, xmm0, 82h
.text:000000014E2CC3D5 0F 28 C6                                movaps  xmm0, xmm6
.text:000000014E2CC3D8 0F C6 C1 31                             shufps  xmm0, xmm1, 31h ; '1'
.text:000000014E2CC3DC 0F C6 E9 10                             shufps  xmm5, xmm1, 10h
.text:000000014E2CC3E0 0F C6 E8 88                             shufps  xmm5, xmm0, 88h
.text:000000014E2CC3E4 48 8D 4C 24 30                          lea     rcx, [rsp+110h+var_E0]
.text:000000014E2CC3E9 0F 28 D3                                movaps  xmm2, xmm3
.text:000000014E2CC3EC 0F C6 F4 12                             shufps  xmm6, xmm4, 12h
.text:000000014E2CC3F0 0F C6 D3 55                             shufps  xmm2, xmm3, 55h ; 'U'
.text:000000014E2CC3F4 41 0F 28 C6                             movaps  xmm0, xmm14
.text:000000014E2CC3F8 0F C6 F1 E8                             shufps  xmm6, xmm1, 0E8h
.text:000000014E2CC3FC 0F 28 CB                                movaps  xmm1, xmm3
.text:000000014E2CC3FF 0F C6 CB AA                             shufps  xmm1, xmm3, 0AAh
.text:000000014E2CC403 41 0F 12 C4                             movhlps xmm0, xmm12
.text:000000014E2CC407 44 0F C6 E0 C4                          shufps  xmm12, xmm0, 0C4h
.text:000000014E2CC40C 0F 28 C3                                movaps  xmm0, xmm3
.text:000000014E2CC40F 0F C6 C3 00                             shufps  xmm0, xmm3, 0
.text:000000014E2CC413 0F C6 DB FF                             shufps  xmm3, xmm3, 0FFh
.text:000000014E2CC417 41 0F 59 DD                             mulps   xmm3, xmm13
.text:000000014E2CC41B 41 0F 59 C9                             mulps   xmm1, xmm9
.text:000000014E2CC41F 41 0F 59 C0                             mulps   xmm0, xmm8
.text:000000014E2CC423 0F 59 D7                                mulps   xmm2, xmm7
.text:000000014E2CC426 0F 58 D0                                addps   xmm2, xmm0
.text:000000014E2CC429 0F 28 C5                                movaps  xmm0, xmm5
.text:000000014E2CC42C 0F C6 C5 00                             shufps  xmm0, xmm5, 0
.text:000000014E2CC430 41 0F 59 C0                             mulps   xmm0, xmm8
.text:000000014E2CC434 0F 58 D1                                addps   xmm2, xmm1
.text:000000014E2CC437 0F 28 CD                                movaps  xmm1, xmm5
.text:000000014E2CC43A 0F C6 CD AA                             shufps  xmm1, xmm5, 0AAh
.text:000000014E2CC43E 41 0F 59 C9                             mulps   xmm1, xmm9
.text:000000014E2CC442 0F 58 D3                                addps   xmm2, xmm3
.text:000000014E2CC445 0F 28 DD                                movaps  xmm3, xmm5
.text:000000014E2CC448 0F C6 DD 55                             shufps  xmm3, xmm5, 55h ; 'U'
.text:000000014E2CC44C 0F 59 DF                                mulps   xmm3, xmm7
.text:000000014E2CC44F 0F C6 ED FF                             shufps  xmm5, xmm5, 0FFh
.text:000000014E2CC453 0F 29 54 24 30                          movaps  [rsp+110h+var_E0], xmm2
.text:000000014E2CC458 0F 28 D6                                movaps  xmm2, xmm6
.text:000000014E2CC45B 0F C6 D6 55                             shufps  xmm2, xmm6, 55h ; 'U'
.text:000000014E2CC45F 0F 58 D8                                addps   xmm3, xmm0
.text:000000014E2CC462 0F 59 D7                                mulps   xmm2, xmm7
.text:000000014E2CC465 0F 28 C6                                movaps  xmm0, xmm6
.text:000000014E2CC468 41 0F 59 ED                             mulps   xmm5, xmm13
.text:000000014E2CC46C 0F C6 C6 00                             shufps  xmm0, xmm6, 0
.text:000000014E2CC470 0F 58 D9                                addps   xmm3, xmm1
.text:000000014E2CC473 41 0F 59 C0                             mulps   xmm0, xmm8
.text:000000014E2CC477 0F 28 CE                                movaps  xmm1, xmm6
.text:000000014E2CC47A 0F C6 CE AA                             shufps  xmm1, xmm6, 0AAh
.text:000000014E2CC47E 41 0F 59 C9                             mulps   xmm1, xmm9
.text:000000014E2CC482 0F 58 DD                                addps   xmm3, xmm5
.text:000000014E2CC485 0F C6 F6 FF                             shufps  xmm6, xmm6, 0FFh
.text:000000014E2CC489 0F 58 D0                                addps   xmm2, xmm0
.text:000000014E2CC48C 41 0F 59 F5                             mulps   xmm6, xmm13
.text:000000014E2CC490 41 0F 28 C4                             movaps  xmm0, xmm12
.text:000000014E2CC494 41 0F C6 C4 00                          shufps  xmm0, xmm12, 0
.text:000000014E2CC499 0F 29 5C 24 40                          movaps  [rsp+110h+var_D0], xmm3
.text:000000014E2CC49E 41 0F 28 DC                             movaps  xmm3, xmm12
.text:000000014E2CC4A2 41 0F C6 DC 55                          shufps  xmm3, xmm12, 55h ; 'U'
.text:000000014E2CC4A7 0F 58 D1                                addps   xmm2, xmm1
.text:000000014E2CC4AA 0F 59 DF                                mulps   xmm3, xmm7
.text:000000014E2CC4AD 41 0F 28 CC                             movaps  xmm1, xmm12
.text:000000014E2CC4B1 41 0F C6 CC AA                          shufps  xmm1, xmm12, 0AAh
.text:000000014E2CC4B6 41 0F 59 C9                             mulps   xmm1, xmm9
.text:000000014E2CC4BA 41 0F 59 C0                             mulps   xmm0, xmm8
.text:000000014E2CC4BE 0F 58 D6                                addps   xmm2, xmm6
.text:000000014E2CC4C1 45 0F C6 E4 FF                          shufps  xmm12, xmm12, 0FFh
.text:000000014E2CC4C6 45 0F 59 E5                             mulps   xmm12, xmm13
.text:000000014E2CC4CA 0F 58 D8                                addps   xmm3, xmm0
.text:000000014E2CC4CD 0F 29 54 24 50                          movaps  [rsp+110h+var_C0], xmm2
.text:000000014E2CC4D2 0F 58 D9                                addps   xmm3, xmm1
.text:000000014E2CC4D5 F3 0F 10 0D 5B 0E 41 02                 movss   xmm1, cs:dword_1506DD338
.text:000000014E2CC4DD 41 0F 58 DC                             addps   xmm3, xmm12
.text:000000014E2CC4E1 0F 29 5C 24 60                          movaps  [rsp+110h+var_B0], xmm3
.text:000000014E2CC4E6 E8 B5 DD A9 F2                          call    sub_140D6A2A0
.text:000000014E2CC4EB F3 0F 10 4C 24 34                       movss   xmm1, dword ptr [rsp+110h+var_E0+4]
.text:000000014E2CC4F1 0F 28 05 08 3B 26 09                    movaps  xmm0, cs:xmmword_157530000
.text:000000014E2CC4F8 41 0F 57 C6                             xorps   xmm0, xmm14
.text:000000014E2CC4FC 45 0F C2 FA 02                          cmpleps xmm15, xmm10
.text:000000014E2CC501 44 0F 54 F8                             andps   xmm15, xmm0
.text:000000014E2CC505 F3 0F 10 44 24 30                       movss   xmm0, dword ptr [rsp+110h+var_E0]
.text:000000014E2CC50B 44 0F 57 3D ED 3A 26 09                 xorps   xmm15, cs:xmmword_157530000
.text:000000014E2CC513 F3 41 0F 59 C7                          mulss   xmm0, xmm15
.text:000000014E2CC518 F3 41 0F 59 CF                          mulss   xmm1, xmm15
.text:000000014E2CC51D F3 0F 11 44 24 30                       movss   dword ptr [rsp+110h+var_E0], xmm0
.text:000000014E2CC523 F3 0F 10 44 24 38                       movss   xmm0, dword ptr [rsp+110h+var_E0+8]
.text:000000014E2CC529 F3 0F 11 4C 24 34                       movss   dword ptr [rsp+110h+var_E0+4], xmm1
.text:000000014E2CC52F F3 0F 10 4C 24 44                       movss   xmm1, dword ptr [rsp+110h+var_D0+4]
.text:000000014E2CC535 48 8D 54 24 30                          lea     rdx, [rsp+110h+var_E0]
.text:000000014E2CC53A F3 41 0F 59 C7                          mulss   xmm0, xmm15
.text:000000014E2CC53F 48 8D 4C 24 20                          lea     rcx, [rsp+110h+var_F0]
.text:000000014E2CC544 41 0F 28 D7                             movaps  xmm2, xmm15
.text:000000014E2CC548 41 0F C6 D7 55                          shufps  xmm2, xmm15, 55h ; 'U'
.text:000000014E2CC54D F3 0F 11 44 24 38                       movss   dword ptr [rsp+110h+var_E0+8], xmm0
.text:000000014E2CC553 F3 0F 10 44 24 40                       movss   xmm0, dword ptr [rsp+110h+var_D0]
.text:000000014E2CC559 F3 0F 59 C2                             mulss   xmm0, xmm2
.text:000000014E2CC55D 45 0F C6 FF AA                          shufps  xmm15, xmm15, 0AAh
.text:000000014E2CC562 F3 0F 59 CA                             mulss   xmm1, xmm2
.text:000000014E2CC566 F3 0F 11 44 24 40                       movss   dword ptr [rsp+110h+var_D0], xmm0
.text:000000014E2CC56C F3 0F 10 44 24 48                       movss   xmm0, dword ptr [rsp+110h+var_D0+8]
.text:000000014E2CC572 F3 0F 59 C2                             mulss   xmm0, xmm2
.text:000000014E2CC576 F3 0F 11 4C 24 44                       movss   dword ptr [rsp+110h+var_D0+4], xmm1
.text:000000014E2CC57C F3 0F 10 4C 24 54                       movss   xmm1, dword ptr [rsp+110h+var_C0+4]
.text:000000014E2CC582 F3 0F 11 44 24 48                       movss   dword ptr [rsp+110h+var_D0+8], xmm0
.text:000000014E2CC588 F3 0F 10 44 24 50                       movss   xmm0, dword ptr [rsp+110h+var_C0]
.text:000000014E2CC58E F3 41 0F 59 C7                          mulss   xmm0, xmm15
.text:000000014E2CC593 F3 41 0F 59 CF                          mulss   xmm1, xmm15
.text:000000014E2CC598 F3 0F 11 44 24 50                       movss   dword ptr [rsp+110h+var_C0], xmm0
.text:000000014E2CC59E F3 0F 10 44 24 58                       movss   xmm0, dword ptr [rsp+110h+var_C0+8]
.text:000000014E2CC5A4 F3 41 0F 59 C7                          mulss   xmm0, xmm15
.text:000000014E2CC5A9 F3 0F 11 4C 24 54                       movss   dword ptr [rsp+110h+var_C0+4], xmm1
.text:000000014E2CC5AF F3 0F 11 44 24 58                       movss   dword ptr [rsp+110h+var_C0+8], xmm0
.text:000000014E2CC5B5 E8 E6 29 A7 F2                          call    sub_140D3EFA0
.text:000000014E2CC5BA 0F 28 74 24 20                          movaps  xmm6, [rsp+110h+var_F0]
.text:000000014E2CC5BF 0F 28 2D 2A 38 26 09                    movaps  xmm5, cs:xmmword_15752FDF0
.text:000000014E2CC5C6 0F 28 CE                                movaps  xmm1, xmm6
.text:000000014E2CC5C9 44 0F 28 8C 24 D0 00 00                 movaps  xmm9, [rsp+110h+var_40]
.text:000000014E2CC5C9 00
.text:000000014E2CC5D2 0F 28 D5                                movaps  xmm2, xmm5
.text:000000014E2CC5D5 0F 59 CE                                mulps   xmm1, xmm6
.text:000000014E2CC5D8 44 0F 11 53 20                          movups  xmmword ptr [rbx+20h], xmm10
.text:000000014E2CC5DD 44 0F 28 94 24 C0 00 00                 movaps  xmm10, [rsp+110h+var_50]
.text:000000014E2CC5DD 00
.text:000000014E2CC5E6 0F 28 C1                                movaps  xmm0, xmm1
.text:000000014E2CC5E9 0F C6 C1 4E                             shufps  xmm0, xmm1, 4Eh ; 'N'
.text:000000014E2CC5ED 0F 58 C8                                addps   xmm1, xmm0
.text:000000014E2CC5F0 0F 28 E1                                movaps  xmm4, xmm1
.text:000000014E2CC5F3 0F C6 E1 39                             shufps  xmm4, xmm1, 39h ; '9'
.text:000000014E2CC5F7 0F 58 E1                                addps   xmm4, xmm1
.text:000000014E2CC5FA 0F 52 CC                                rsqrtps xmm1, xmm4
.text:000000014E2CC5FD 0F 28 DC                                movaps  xmm3, xmm4
.text:000000014E2CC600 0F 59 DD                                mulps   xmm3, xmm5
.text:000000014E2CC603 0F 28 C1                                movaps  xmm0, xmm1
.text:000000014E2CC606 0F 59 C1                                mulps   xmm0, xmm1
.text:000000014E2CC609 0F 59 C3                                mulps   xmm0, xmm3
.text:000000014E2CC60C 0F 5C D0                                subps   xmm2, xmm0
.text:000000014E2CC60F 0F 59 D1                                mulps   xmm2, xmm1
.text:000000014E2CC612 0F 58 D1                                addps   xmm2, xmm1
.text:000000014E2CC615 0F 28 C2                                movaps  xmm0, xmm2
.text:000000014E2CC618 0F 59 C2                                mulps   xmm0, xmm2
.text:000000014E2CC61B 0F 59 C3                                mulps   xmm0, xmm3
.text:000000014E2CC61E F2 0F 10 5C 24 60                       movsd   xmm3, qword ptr [rsp+110h+var_B0]
.text:000000014E2CC624 0F 5C E8                                subps   xmm5, xmm0
.text:000000014E2CC627 66 0F 6F 05 21 AF 3F 02                 movdqa  xmm0, cs:xmmword_1506C7550
.text:000000014E2CC62F 0F C2 C4 02                             cmpleps xmm0, xmm4
.text:000000014E2CC633 0F 59 EA                                mulps   xmm5, xmm2
.text:000000014E2CC636 0F 58 EA                                addps   xmm5, xmm2
.text:000000014E2CC639 F3 0F 10 54 24 68                       movss   xmm2, dword ptr [rsp+110h+var_B0+8]
.text:000000014E2CC63F 0F 16 DA                                movlhps xmm3, xmm2
.text:000000014E2CC642 0F 11 5B 10                             movups  xmmword ptr [rbx+10h], xmm3
.text:000000014E2CC646 0F 59 EE                                mulps   xmm5, xmm6
.text:000000014E2CC649 0F 57 2D A0 39 26 09                    xorps   xmm5, cs:xmmword_15752FFF0
.text:000000014E2CC650 0F 54 E8                                andps   xmm5, xmm0
.text:000000014E2CC653 0F 57 2D 96 39 26 09                    xorps   xmm5, cs:xmmword_15752FFF0
.text:000000014E2CC65A 0F 11 2B                                movups  xmmword ptr [rbx], xmm5
.text:000000014E2CC65D E9 BA 00 00 00                          jmp     loc_14E2CC71C
.text:000000014E2CC662                         ; ---------------------------------------------------------------------------
.text:000000014E2CC662
.text:000000014E2CC662                         loc_14E2CC662:                          ; CODE XREF: sub_14E2CC1A0+106↑j
.text:000000014E2CC662 0F C6 C6 00                             shufps  xmm0, xmm6, 0
.text:000000014E2CC666 0F 28 D5                                movaps  xmm2, xmm5
.text:000000014E2CC669 0F C6 D5 1B                             shufps  xmm2, xmm5, 1Bh
.text:000000014E2CC66D 0F 28 CD                                movaps  xmm1, xmm5
.text:000000014E2CC670 0F 59 D0                                mulps   xmm2, xmm0
.text:000000014E2CC673 0F 28 E6                                movaps  xmm4, xmm6
.text:000000014E2CC676 0F C6 CD 4E                             shufps  xmm1, xmm5, 4Eh ; 'N'
.text:000000014E2CC67A 44 0F 59 E7                             mulps   xmm12, xmm7
.text:000000014E2CC67E 0F 59 15 0B 39 26 09                    mulps   xmm2, cs:xmmword_15752FF90
.text:000000014E2CC685 0F C6 E6 FF                             shufps  xmm4, xmm6, 0FFh
.text:000000014E2CC689 0F 28 C4                                movaps  xmm0, xmm4
.text:000000014E2CC68C 44 0F 59 DF                             mulps   xmm11, xmm7
.text:000000014E2CC690 0F 59 C5                                mulps   xmm0, xmm5
.text:000000014E2CC693 41 0F 28 DC                             movaps  xmm3, xmm12
.text:000000014E2CC697 41 0F C6 DC D2                          shufps  xmm3, xmm12, 0D2h
.text:000000014E2CC69C 0F C6 ED B1                             shufps  xmm5, xmm5, 0B1h
.text:000000014E2CC6A0 44 0F 11 5B 20                          movups  xmmword ptr [rbx+20h], xmm11
.text:000000014E2CC6A5 0F 58 D0                                addps   xmm2, xmm0
.text:000000014E2CC6A8 0F 28 C6                                movaps  xmm0, xmm6
.text:000000014E2CC6AB 0F C6 C6 55                             shufps  xmm0, xmm6, 55h ; 'U'
.text:000000014E2CC6AF 0F 59 C8                                mulps   xmm1, xmm0
.text:000000014E2CC6B2 0F 28 C6                                movaps  xmm0, xmm6
.text:000000014E2CC6B5 0F C6 C6 AA                             shufps  xmm0, xmm6, 0AAh
.text:000000014E2CC6B9 0F 59 E8                                mulps   xmm5, xmm0
.text:000000014E2CC6BC 41 0F 28 C4                             movaps  xmm0, xmm12
.text:000000014E2CC6C0 0F 59 0D B9 38 26 09                    mulps   xmm1, cs:xmmword_15752FF80
.text:000000014E2CC6C7 41 0F C6 C4 C9                          shufps  xmm0, xmm12, 0C9h
.text:000000014E2CC6CC 0F 59 2D 9D 38 26 09                    mulps   xmm5, cs:xmmword_15752FF70
.text:000000014E2CC6D3 0F 58 D1                                addps   xmm2, xmm1
.text:000000014E2CC6D6 0F 58 D5                                addps   xmm2, xmm5
.text:000000014E2CC6D9 0F 11 13                                movups  xmmword ptr [rbx], xmm2
.text:000000014E2CC6DC 0F 28 D6                                movaps  xmm2, xmm6
.text:000000014E2CC6DF 0F C6 D6 D2                             shufps  xmm2, xmm6, 0D2h
.text:000000014E2CC6E3 0F 59 C2                                mulps   xmm0, xmm2
.text:000000014E2CC6E6 0F C6 F6 C9                             shufps  xmm6, xmm6, 0C9h
.text:000000014E2CC6EA 0F 59 DE                                mulps   xmm3, xmm6
.text:000000014E2CC6ED 0F 5C D8                                subps   xmm3, xmm0
.text:000000014E2CC6F0 0F 58 DB                                addps   xmm3, xmm3
.text:000000014E2CC6F3 0F 28 CB                                movaps  xmm1, xmm3
.text:000000014E2CC6F6 0F 28 C3                                movaps  xmm0, xmm3
.text:000000014E2CC6F9 0F C6 CB D2                             shufps  xmm1, xmm3, 0D2h
.text:000000014E2CC6FD 0F C6 C3 C9                             shufps  xmm0, xmm3, 0C9h
.text:000000014E2CC701 0F 59 CE                                mulps   xmm1, xmm6
.text:000000014E2CC704 0F 59 C2                                mulps   xmm0, xmm2
.text:000000014E2CC707 0F 59 DC                                mulps   xmm3, xmm4
.text:000000014E2CC70A 0F 5C C8                                subps   xmm1, xmm0
.text:000000014E2CC70D 41 0F 58 DC                             addps   xmm3, xmm12
.text:000000014E2CC711 0F 58 CB                                addps   xmm1, xmm3
.text:000000014E2CC714 41 0F 58 CD                             addps   xmm1, xmm13
.text:000000014E2CC718 0F 11 4B 10                             movups  xmmword ptr [rbx+10h], xmm1
.text:000000014E2CC71C
.text:000000014E2CC71C                         loc_14E2CC71C:                          ; CODE XREF: sub_14E2CC1A0+4BD↑j
.text:000000014E2CC71C 44 0F 28 7C 24 70                       movaps  xmm15, [rsp+110h+var_A0]
.text:000000014E2CC722 4C 8D 9C 24 10 01 00 00                 lea     r11, [rsp+110h+var_s0]
.text:000000014E2CC72A 41 0F 28 73 F0                          movaps  xmm6, xmmword ptr [r11-10h]
.text:000000014E2CC72F 48 8B C3                                mov     rax, rbx
.text:000000014E2CC732 49 8B 5B 20                             mov     rbx, [r11+20h]
.text:000000014E2CC736 41 0F 28 7B E0                          movaps  xmm7, xmmword ptr [r11-20h]
.text:000000014E2CC73B 45 0F 28 43 D0                          movaps  xmm8, xmmword ptr [r11-30h]
.text:000000014E2CC740 45 0F 28 5B A0                          movaps  xmm11, xmmword ptr [r11-60h]
.text:000000014E2CC745 45 0F 28 63 90                          movaps  xmm12, xmmword ptr [r11-70h]
.text:000000014E2CC74A 45 0F 28 6B 80                          movaps  xmm13, xmmword ptr [r11-80h]
.text:000000014E2CC74F 45 0F 28 B3 70 FF FF FF                 movaps  xmm14, xmmword ptr [r11-90h]
.text:000000014E2CC757 49 8B E3                                mov     rsp, r11
.text:000000014E2CC75A 5D                                      pop     rbp
.text:000000014E2CC75B C3                                      retn
.text:000000014E2CC75B                         sub_14E2CC1A0   endp
.text:000000014E2CC75B
.text:000000014E2CC75B                         ; ---------------------------------------------------------------------------
.text:000000014E2CC75C CC CC CC CC                             align 20h
.text:000000014E2CC760
.text:000000014E2CC760                         ; =============== S U B R O U T I N E =======================================
.text:000000014E2CC760
.text:000000014E2CC760
.text:000000014E2CC760                         sub_14E2CC760   proc near
.text:000000014E2CC760
.text:000000014E2CC760                         var_60          = dword ptr -60h
.text:000000014E2CC760                         var_5C          = qword ptr -5Ch
.text:000000014E2CC760                         var_54          = dword ptr -54h
.text:000000014E2CC760                         var_18          = xmmword ptr -18h
.text:000000014E2CC760                         var_8           = byte ptr -8
.text:000000014E2CC760                         arg_0           = qword ptr  8
.text:000000014E2CC760                         arg_8           = qword ptr  10h
.text:000000014E2CC760                         arg_10          = qword ptr  18h
.text:000000014E2CC760
.text:000000014E2CC760 48 89 5C 24 10                          mov     [rsp+arg_8], rbx
.text:000000014E2CC765 48 89 6C 24 18                          mov     [rsp+arg_10], rbp
.text:000000014E2CC76A 56                                      push    rsi
.text:000000014E2CC76B 48 81 EC 80 00 00 00                    sub     rsp, 80h
.text:000000014E2CC772 48 8B E9                                mov     rbp, rcx
.text:000000014E2CC775 49 8B D8                                mov     rbx, r8
.text:000000014E2CC778 48 8B CA                                mov     rcx, rdx
.text:000000014E2CC77B 48 8B F2                                mov     rsi, rdx
.text:000000014E2CC77E E8 6D 4D 5B 00                          call    sub_14E8814F0
.text:000000014E2CC783 83 F8 03                                cmp     eax, 3
.text:000000014E2CC786 0F 8C F5 02 00 00                       jl      loc_14E2CCA81
.text:000000014E2CC78C 83 3D 9D 96 74 08 00                    cmp     cs:dword_156A15E30, 0
.text:000000014E2CC793 0F 84 E8 02 00 00                       jz      loc_14E2CCA81
.text:000000014E2CC799 48 89 BC 24 90 00 00 00                 mov     [rsp+88h+arg_0], rdi
.text:000000014E2CC7A1 48 63 BB 90 10 00 00                    movsxd  rdi, dword ptr [rbx+1090h]
.text:000000014E2CC7A8 8D 47 01                                lea     eax, [rdi+1]
.text:000000014E2CC7AB 89 83 90 10 00 00                       mov     [rbx+1090h], eax
.text:000000014E2CC7B1 3B 83 94 10 00 00                       cmp     eax, [rbx+1094h]
.text:000000014E2CC7B7 7E 0A                                   jle     short loc_14E2CC7C3
.text:000000014E2CC7B9 8B D7                                   mov     edx, edi
.text:000000014E2CC7BB 48 8B CB                                mov     rcx, rbx
.text:000000014E2CC7BE E8 5D 45 FD FF                          call    sub_14E2A0D20
.text:000000014E2CC7C3
.text:000000014E2CC7C3                         loc_14E2CC7C3:                          ; CODE XREF: sub_14E2CC760+57↑j
.text:000000014E2CC7C3 48 8D 8B 80 10 00 00                    lea     rcx, [rbx+1080h]
.text:000000014E2CC7CA FF 15 A0 DF 57 08                       call    cs:qword_15684A770
.text:000000014E2CC7D0 48 85 C0                                test    rax, rax
.text:000000014E2CC7D3 48 0F 45 D8                             cmovnz  rbx, rax
.text:000000014E2CC7D7 48 69 CF C0 02 00 00                    imul    rcx, rdi, 2C0h
.text:000000014E2CC7DE 48 8B BC 24 90 00 00 00                 mov     rdi, [rsp+88h+arg_0]
.text:000000014E2CC7E6 48 03 D9                                add     rbx, rcx
.text:000000014E2CC7E9 0F 84 A5 00 00 00                       jz      loc_14E2CC894
.text:000000014E2CC7EF 33 C0                                   xor     eax, eax
.text:000000014E2CC7F1 C7 83 9C 00 00 00 00 00                 mov     dword ptr [rbx+9Ch], 3F800000h
.text:000000014E2CC7F1 80 3F
.text:000000014E2CC7FB 48 89 83 90 00 00 00                    mov     [rbx+90h], rax
.text:000000014E2CC802 89 83 98 00 00 00                       mov     [rbx+98h], eax
.text:000000014E2CC808 48 89 83 A8 00 00 00                    mov     [rbx+0A8h], rax
.text:000000014E2CC80F 48 89 83 B0 00 00 00                    mov     [rbx+0B0h], rax
.text:000000014E2CC816 89 83 20 01 00 00                       mov     [rbx+120h], eax
.text:000000014E2CC81C 89 83 2C 01 00 00                       mov     [rbx+12Ch], eax
.text:000000014E2CC822 48 89 83 A0 01 00 00                    mov     [rbx+1A0h], rax
.text:000000014E2CC829 48 89 83 B0 01 00 00                    mov     [rbx+1B0h], rax
.text:000000014E2CC830 48 89 83 40 02 00 00                    mov     [rbx+240h], rax
.text:000000014E2CC837 48 89 83 50 02 00 00                    mov     [rbx+250h], rax
.text:000000014E2CC83E 66 89 83 80 02 00 00                    mov     [rbx+280h], ax
.text:000000014E2CC845 88 83 82 02 00 00                       mov     [rbx+282h], al
.text:000000014E2CC84B 48 89 83 90 02 00 00                    mov     [rbx+290h], rax
.text:000000014E2CC852 89 83 98 02 00 00                       mov     [rbx+298h], eax
.text:000000014E2CC858 89 83 B0 02 00 00                       mov     [rbx+2B0h], eax
.text:000000014E2CC85E 48 C7 83 24 01 00 00 00                 mov     qword ptr [rbx+124h], 4A000000h
.text:000000014E2CC85E 00 00 4A
.text:000000014E2CC869 48 C7 83 30 01 00 00 00                 mov     qword ptr [rbx+130h], 4A000000h
.text:000000014E2CC869 00 00 4A
.text:000000014E2CC874 C7 83 9C 02 00 00 00 00                 mov     dword ptr [rbx+29Ch], 3F800000h
.text:000000014E2CC874 80 3F
.text:000000014E2CC87E C7 83 A0 02 00 00 FF FF                 mov     dword ptr [rbx+2A0h], 0FFFFFFFFh
.text:000000014E2CC87E FF FF
.text:000000014E2CC888 C7 83 A4 02 00 00 00 00                 mov     dword ptr [rbx+2A4h], 3F800000h
.text:000000014E2CC888 80 3F
.text:000000014E2CC892 EB 04                                   jmp     short loc_14E2CC898
.text:000000014E2CC894                         ; ---------------------------------------------------------------------------
.text:000000014E2CC894
.text:000000014E2CC894                         loc_14E2CC894:                          ; CODE XREF: sub_14E2CC760+89↑j
.text:000000014E2CC894 33 C0                                   xor     eax, eax
.text:000000014E2CC896 8B D8                                   mov     ebx, eax
.text:000000014E2CC898
.text:000000014E2CC898                         loc_14E2CC898:                          ; CODE XREF: sub_14E2CC760+132↑j
.text:000000014E2CC898 F3 0F 10 9D C0 00 00 00                 movss   xmm3, dword ptr [rbp+0C0h]
.text:000000014E2CC8A0 0F 57 E4                                xorps   xmm4, xmm4
.text:000000014E2CC8A3 F3 0F 10 8D C4 00 00 00                 movss   xmm1, dword ptr [rbp+0C4h]
.text:000000014E2CC8AB F3 0F 10 95 C8 00 00 00                 movss   xmm2, dword ptr [rbp+0C8h]
.text:000000014E2CC8B3 F3 0F 10 05 55 AE 3F 02                 movss   xmm0, dword ptr cs:xmmword_1506C7710
.text:000000014E2CC8BB 0F 57 D0                                xorps   xmm2, xmm0
.text:000000014E2CC8BE F3 0F 11 64 24 28                       movss   [rsp+88h+var_60], xmm4
.text:000000014E2CC8C4 0F 57 D8                                xorps   xmm3, xmm0
.text:000000014E2CC8C7 0F 57 C8                                xorps   xmm1, xmm0
.text:000000014E2CC8CA 0F 14 D9                                unpcklps xmm3, xmm1
.text:000000014E2CC8CD F2 0F 11 1B                             movsd   qword ptr [rbx], xmm3
.text:000000014E2CC8D1 F3 0F 11 53 08                          movss   dword ptr [rbx+8], xmm2
.text:000000014E2CC8D6 0F 28 85 80 00 00 00                    movaps  xmm0, xmmword ptr [rbp+80h]
.text:000000014E2CC8DD 0F 28 4D 50                             movaps  xmm1, xmmword ptr [rbp+50h]
.text:000000014E2CC8E1 0F 28 55 60                             movaps  xmm2, xmmword ptr [rbp+60h]
.text:000000014E2CC8E5 0F 28 5D 70                             movaps  xmm3, xmmword ptr [rbp+70h]
.text:000000014E2CC8E9 0F 29 44 24 70                          movaps  [rsp+88h+var_18], xmm0
.text:000000014E2CC8EE 0F 11 4B 10                             movups  xmmword ptr [rbx+10h], xmm1
.text:000000014E2CC8F2 48 C7 44 24 70 00 00 00                 mov     qword ptr [rsp+88h+var_18], 0
.text:000000014E2CC8F2 00
.text:000000014E2CC8FB 0F 11 53 20                             movups  xmmword ptr [rbx+20h], xmm2
.text:000000014E2CC8FF C7 44 24 78 00 00 00 00                 mov     dword ptr [rsp+88h+var_18+8], 0
.text:000000014E2CC907 F3 0F 10 15 01 07 40 02                 movss   xmm2, dword ptr cs:xmmword_1506CD010
.text:000000014E2CC90F 0F 28 44 24 70                          movaps  xmm0, [rsp+88h+var_18]
.text:000000014E2CC914 0F 11 5B 30                             movups  xmmword ptr [rbx+30h], xmm3
.text:000000014E2CC918 0F 11 43 40                             movups  xmmword ptr [rbx+40h], xmm0
.text:000000014E2CC91C 0F 28 C2                                movaps  xmm0, xmm2
.text:000000014E2CC91F 0F 14 C2                                unpcklps xmm0, xmm2
.text:000000014E2CC922 F2 0F 11 43 50                          movsd   qword ptr [rbx+50h], xmm0
.text:000000014E2CC927 0F 57 C0                                xorps   xmm0, xmm0
.text:000000014E2CC92A 0F 14 C4                                unpcklps xmm0, xmm4
.text:000000014E2CC92D F2 0F 11 43 5C                          movsd   qword ptr [rbx+5Ch], xmm0
.text:000000014E2CC932 0F 57 C0                                xorps   xmm0, xmm0
.text:000000014E2CC935 0F 14 C4                                unpcklps xmm0, xmm4
.text:000000014E2CC938 0F 28 C8                                movaps  xmm1, xmm0
.text:000000014E2CC93B F3 0F 11 53 58                          movss   dword ptr [rbx+58h], xmm2
.text:000000014E2CC940 F3 0F 11 53 64                          movss   dword ptr [rbx+64h], xmm2
.text:000000014E2CC945 F3 0F 10 95 10 02 00 00                 movss   xmm2, dword ptr [rbp+210h]
.text:000000014E2CC94D C7 83 A0 00 00 00 CD CC                 mov     dword ptr [rbx+0A0h], 3DCCCCCDh
.text:000000014E2CC94D CC 3D
.text:000000014E2CC957 0F 28 C2                                movaps  xmm0, xmm2
.text:000000014E2CC95A 0F 14 C2                                unpcklps xmm0, xmm2
.text:000000014E2CC95D F2 0F 11 44 24 2C                       movsd   [rsp+88h+var_5C], xmm0
.text:000000014E2CC963 0F 10 44 24 20                          movups  xmm0, xmmword ptr [rsp+20h]
.text:000000014E2CC968 F3 0F 11 54 24 34                       movss   [rsp+88h+var_54], xmm2
.text:000000014E2CC96E F2 0F 10 C1                             movsd   xmm0, xmm1
.text:000000014E2CC972 0F 11 43 68                             movups  xmmword ptr [rbx+68h], xmm0
.text:000000014E2CC976 F2 0F 10 44 24 30                       movsd   xmm0, [rsp+88h+var_5C+4]
.text:000000014E2CC97C F2 0F 11 43 78                          movsd   qword ptr [rbx+78h], xmm0
.text:000000014E2CC981 66 0F 6F 05 E7 09 41 02                 movdqa  xmm0, cs:xmmword_1506DD370
.text:000000014E2CC989 0F 11 83 90 00 00 00                    movups  xmmword ptr [rbx+90h], xmm0
.text:000000014E2CC990 F3 0F 11 93 80 00 00 00                 movss   dword ptr [rbx+80h], xmm2
.text:000000014E2CC998 8B 85 10 02 00 00                       mov     eax, [rbp+210h]
.text:000000014E2CC99E 89 83 A4 00 00 00                       mov     [rbx+0A4h], eax
.text:000000014E2CC9A4 C6 83 B0 02 00 00 01                    mov     byte ptr [rbx+2B0h], 1
.text:000000014E2CC9AB 80 BD B2 01 00 00 00                    cmp     byte ptr [rbp+1B2h], 0
.text:000000014E2CC9B2 0F 8D BD 00 00 00                       jge     loc_14E2CCA75
.text:000000014E2CC9B8 48 8B CE                                mov     rcx, rsi
.text:000000014E2CC9BB E8 30 4B 5B 00                          call    sub_14E8814F0
.text:000000014E2CC9C0 48 63 C8                                movsxd  rcx, eax
.text:000000014E2CC9C3 4C 8D 1D 36 40 D3 F1                    lea     r11, word_140000A00
.text:000000014E2CC9CA 49 63 94 8B B0 24 9E 16                 movsxd  rdx, dword ptr [r11+rcx*4+169E24B0h]
.text:000000014E2CC9D2 83 FA 1F                                cmp     edx, 1Fh
.text:000000014E2CC9D5 77 0E                                   ja      short loc_14E2CC9E5
.text:000000014E2CC9D7 B8 05 10 05 88                          mov     eax, 88051005h
.text:000000014E2CC9DC 0F A3 D0                                bt      eax, edx
.text:000000014E2CC9DF 0F 82 86 00 00 00                       jb      loc_14E2CCA6B
.text:000000014E2CC9E5
.text:000000014E2CC9E5                         loc_14E2CC9E5:                          ; CODE XREF: sub_14E2CC760+275↑j
.text:000000014E2CC9E5 4C 8D 04 52                             lea     r8, [rdx+rdx*2]
.text:000000014E2CC9E9 4D 03 C0                                add     r8, r8
.text:000000014E2CC9EC 47 8B 8C C3 44 27 4F 17                 mov     r9d, [r11+r8*8+174F2744h]
.text:000000014E2CC9F4 44 3B 0D 19 67 22 09                    cmp     r9d, dword ptr cs:qword_1574F3110+4
.text:000000014E2CC9FB 47 8B 94 C3 40 27 4F 17                 mov     r10d, [r11+r8*8+174F2740h]
.text:000000014E2CCA03 0F 94 C1                                setz    cl
.text:000000014E2CCA06 44 3B 15 03 67 22 09                    cmp     r10d, dword ptr cs:qword_1574F3110
.text:000000014E2CCA0D 0F 94 C0                                setz    al
.text:000000014E2CCA10 84 C8                                   test    al, cl
.text:000000014E2CCA12 74 0B                                   jz      short loc_14E2CCA1F
.text:000000014E2CCA14 43 83 BC C3 48 27 4F 17                 cmp     dword ptr [r11+r8*8+174F2748h], 3
.text:000000014E2CCA14 03
.text:000000014E2CCA1D 74 4C                                   jz      short loc_14E2CCA6B
.text:000000014E2CCA1F
.text:000000014E2CCA1F                         loc_14E2CCA1F:                          ; CODE XREF: sub_14E2CC760+2B2↑j
.text:000000014E2CCA1F 8D 42 FC                                lea     eax, [rdx-4]
.text:000000014E2CCA22 A9 E7 FF FF FF                          test    eax, 0FFFFFFE7h
.text:000000014E2CCA27 75 05                                   jnz     short loc_14E2CCA2E
.text:000000014E2CCA29 83 FA 0C                                cmp     edx, 0Ch
.text:000000014E2CCA2C 75 3D                                   jnz     short loc_14E2CCA6B
.text:000000014E2CCA2E
.text:000000014E2CCA2E                         loc_14E2CCA2E:                          ; CODE XREF: sub_14E2CC760+2C7↑j
.text:000000014E2CCA2E 44 3B 15 EB 66 22 09                    cmp     r10d, dword ptr cs:qword_1574F3120
.text:000000014E2CCA35 0F 94 C1                                setz    cl
.text:000000014E2CCA38 44 3B 0D E5 66 22 09                    cmp     r9d, dword ptr cs:qword_1574F3120+4
.text:000000014E2CCA3F 0F 94 C0                                setz    al
.text:000000014E2CCA42 84 C8                                   test    al, cl
.text:000000014E2CCA44 74 0B                                   jz      short loc_14E2CCA51
.text:000000014E2CCA46 43 83 BC C3 48 27 4F 17                 cmp     dword ptr [r11+r8*8+174F2748h], 3
.text:000000014E2CCA46 03
.text:000000014E2CCA4F 74 1A                                   jz      short loc_14E2CCA6B
.text:000000014E2CCA51
.text:000000014E2CCA51                         loc_14E2CCA51:                          ; CODE XREF: sub_14E2CC760+2E4↑j
.text:000000014E2CCA51 8D 42 E7                                lea     eax, [rdx-19h]
.text:000000014E2CCA54 83 F8 01                                cmp     eax, 1
.text:000000014E2CCA57 76 12                                   jbe     short loc_14E2CCA6B
.text:000000014E2CCA59 48 8D 0C 52                             lea     rcx, [rdx+rdx*2]
.text:000000014E2CCA5D 48 03 C9                                add     rcx, rcx
.text:000000014E2CCA60 41 80 BC CB 55 27 4F 17                 cmp     byte ptr [r11+rcx*8+174F2755h], 0
.text:000000014E2CCA60 00
.text:000000014E2CCA69 74 0A                                   jz      short loc_14E2CCA75
.text:000000014E2CCA6B
.text:000000014E2CCA6B                         loc_14E2CCA6B:                          ; CODE XREF: sub_14E2CC760+27F↑j
.text:000000014E2CCA6B                                                                 ; sub_14E2CC760+2BD↑j ...
.text:000000014E2CCA6B B0 01                                   mov     al, 1
.text:000000014E2CCA6D 88 83 B1 02 00 00                       mov     [rbx+2B1h], al
.text:000000014E2CCA73 EB 0E                                   jmp     short loc_14E2CCA83
.text:000000014E2CCA75                         ; ---------------------------------------------------------------------------
.text:000000014E2CCA75
.text:000000014E2CCA75                         loc_14E2CCA75:                          ; CODE XREF: sub_14E2CC760+252↑j
.text:000000014E2CCA75                                                                 ; sub_14E2CC760+309↑j
.text:000000014E2CCA75 32 C0                                   xor     al, al
.text:000000014E2CCA77 88 83 B1 02 00 00                       mov     [rbx+2B1h], al
.text:000000014E2CCA7D B0 01                                   mov     al, 1
.text:000000014E2CCA7F EB 02                                   jmp     short loc_14E2CCA83
.text:000000014E2CCA81                         ; ---------------------------------------------------------------------------
.text:000000014E2CCA81
.text:000000014E2CCA81                         loc_14E2CCA81:                          ; CODE XREF: sub_14E2CC760+26↑j
.text:000000014E2CCA81                                                                 ; sub_14E2CC760+33↑j
.text:000000014E2CCA81 32 C0                                   xor     al, al
.text:000000014E2CCA83
.text:000000014E2CCA83                         loc_14E2CCA83:                          ; CODE XREF: sub_14E2CC760+313↑j
.text:000000014E2CCA83                                                                 ; sub_14E2CC760+31F↑j
.text:000000014E2CCA83 4C 8D 9C 24 80 00 00 00                 lea     r11, [rsp+88h+var_8]
.text:000000014E2CCA8B 49 8B 5B 18                             mov     rbx, [r11+18h]
.text:000000014E2CCA8F 49 8B 6B 20                             mov     rbp, [r11+20h]
.text:000000014E2CCA93 49 8B E3                                mov     rsp, r11
.text:000000014E2CCA96 5E                                      pop     rsi
.text:000000014E2CCA97 C3                                      retn
.text:000000014E2CCA97                         sub_14E2CC760   endp
.text:000000014E2CCA97
.text:000000014E2CCA97                         ; ---------------------------------------------------------------------------
.text:000000014E2CCA98 CC CC CC CC CC CC CC CC                 align 20h


```


