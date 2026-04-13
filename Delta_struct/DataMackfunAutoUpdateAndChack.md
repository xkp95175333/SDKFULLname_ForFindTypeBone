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
สร้างเผื่อ มีจุดที่ ต้อง ใช้ เผื่อ   สำหรับ  .text:000000014D9038C0    
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
