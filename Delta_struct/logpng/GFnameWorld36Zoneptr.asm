
.std:0000000156A1D488 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00…                dq 200h dup(0)
.std:0000000156A1E488 60 D2 B7 83 01 00 00 00      qword_156A1E488 dq 183B7D260h           ; DATA XREF: sub_140A82A80+DB9↑r
.std:0000000156A1E488                                                                                         ; sub_140AE6790+61↑r ...
.std:0000000156A1E490 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00…                dq 3FFh dup(0)
.std:0000000156A20488 36 D2 B7 83 01 00 00 56                         qword_156A20488 dq 5600000183B7D236h    ; DATA XREF: sub_140A82A80:loc_140A8384C↑r
.std:0000000156A20488                                                                                         ; sub_140AE6790:loc_140AE67FA↑r ...
.std:0000000156A20490 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00…                dq 200h dup(0)
.std:0000000156A21490 60 1C A8 40 01 00 00 00                                         dq offset ?Reserve@WriteBytesCount@AK@@UEAA_NJ@Z ; AK::WriteBytesCount::Reserve(long)
.std:0000000156A21498                                                 ; v8_qjs::External qword_156A21498





0x173DC400+140000000  1573DC400

word_36
0x1452CCFBF: 48 8B 35 F2 05 75 11       		mov      		rsi, qword ptr [0x156A1D5B8]  			// [rip] 0x156A1D5B8 |0x16A1D5B8   UworldDef
0x1452CCFC6: EB 31                      				jmp      		0x1452ccff9
0x1452CCFC8: 48 8B 0D E9 25 75 11      	 	mov      		rcx, qword ptr [0x156A1F5B8]   			// [rip] 0x156A1F5B8 |0x16A1F5B8   UworldEncore
0x1452CCFCF: 0F B6 05 E9 25 75 11       		movzx    		eax, byte ptr [0x156A1F5BF]  				// [rip] 0x156A1F5BF |0x16A1F5BF    (0x16A1F5BF-0x16A1F5B8=7)
0x1452CCFD6: 48 89 8C 24 98 00 00 00    	mov      		qword ptr [rsp + 0x98], rcx  				// ptr@0x98: <no ascii>
0x1452CCFDE: 34 36                      				xor      			al, 0x36
0x1452CCFE0: 80 F1 36                   				xor      			cl, 0x36
0x1452CCFE3: 88 84 24 98 00 00 00       		mov      		byte ptr [rsp + 0x98], al  						// ptr@0x98: <no ascii>      
0x1452CCFEA: 88 8C 24 9F 00 00 00       		mov      		byte ptr [rsp + 0x9f], cl  						// ptr@0x9F: <no ascii>
0x1452CCFF1: 48 8B B4 24 98 00 00 00    	mov      		rsi, qword ptr [rsp + 0x98]  					// ptr@0x98: <no ascii>       (0x9f-0x98= 7)
0x1452CCFF9: 49 8B AE A0 02 00 00       	mov      		rbp, qword ptr [r14 + 0x2a0]  				// ptr@0x2A0: <no ascii>
0x1452CD000: 48 85 ED                   				test     			rbp, rbp
0x1452CD003: 0F 84 D4 01 00 00          		je       			0x1452cd1dd
0x1452CD009: 41 83 7F 18 00             			cmp      		dword ptr [r15 + 0x18], 0  					// ptr@0x18: <no ascii>
0x1452CD00E: 49 8D 4F 10                			lea      			rcx, [r15 + 0x10]  									// ptr@0x10: <no ascii>
0x1452CD012: 4C 89 A4 24 A0 00 00 00    	mov      		qword ptr [rsp + 0xa0], r12  				// ptr@0xA0: <no ascii>
0x1452CD01A: 74 0B                      				je       			0x1452cd027
0x1452CD01C: FF 15 4E CD 57 11          		call     			qword ptr [0x156849D70]  					// [rip] 0x156849D70 |0x16849D70
0x1452CD022: 4C 8B E0                   				mov      		r12, rax
0x1452CD025: EB 07                      				jmp      		0x1452cd02e
0x1452CD027: 4C 8D 25 2A A7 3F 0B       	lea      			r12, [0x1506C7758]  								// [rip] 0x1506C7758 |0x106C7758
0x1452CD02E: 49 8B 45 08                			mov      		rax, qword ptr [r13 + 8]
0x1452CD032: 48 8D 15 57 A6 10 12       	lea      			rdx, [0x1573D7690] 			 					// [rip] 0x1573D7690 |0x173D7690
0x1452CD039: 48 89 84 24 A8 00 00 00    	mov      		qword ptr [rsp + 0xa8], rax  				// ptr@0xA8: <no ascii>
0x1452CD041: 33 FF                      				xor      		edi, edi
0x1452CD043: 48 8B 86 F8 00 00 00       	mov      		rax, qword ptr [rsi + 0xf8]  					// ptr@0xF8: <no ascii>
0x1452CD04A: 48 B9 FF FF FF FF FF FF 00 00  movabs 	rcx, 0xffffffffffff
0x1452CD054: 90                         					nop      



//fun to 1 


0x14EAE08E7: 48 8B 35 CA CC F3 07       mov      rsi, qword ptr [0x156A1D5B8]  // [rip] 0x156A1D5B8 |0x16A1D5B8
0x14EAE08EE: EB 31                      jmp      0x14eae0921
0x14EAE08F0: 48 8B 0D C1 EC F3 07       mov      rcx, qword ptr [0x156A1F5B8]  // [rip] 0x156A1F5B8 |0x16A1F5B8
0x14EAE08F7: 0F B6 05 C1 EC F3 07       movzx    eax, byte ptr [0x156A1F5BF]  // [rip] 0x156A1F5BF |0x16A1F5BF
0x14EAE08FE: 48 89 8C 24 D0 00 00 00    mov      qword ptr [rsp + 0xd0], rcx  // ptr@0xD0: <no ascii>
0x14EAE0906: 34 36                      xor      al, 0x36
0x14EAE0908: 80 F1 36                   xor      cl, 0x36
0x14EAE090B: 88 84 24 D0 00 00 00       mov      byte ptr [rsp + 0xd0], al  // ptr@0xD0: <no ascii>
0x14EAE0912: 88 8C 24 D7 00 00 00       mov      byte ptr [rsp + 0xd7], cl  // ptr@0xD7: <no ascii>
0x14EAE0919: 48 8B B4 24 D0 00 00 00    mov      rsi, qword ptr [rsp + 0xd0]  // ptr@0xD0: <no ascii>
0x14EAE0921: 48 8B 9C 24 C0 00 00 00    mov      rbx, qword ptr [rsp + 0xc0]  // ptr@0xC0: <no ascii>
0x14EAE0929: 48 8B 7B 28                mov      rdi, qword ptr [rbx + 0x28]  // ptr@0x28: <no ascii>
0x14EAE092D: E8 8E 14 DC FD             call     0x14c8a1dc0
0x14EAE0932: 4C 8B C8                   mov      r9, rax
0x14EAE0935: 48 8D 4B 28                lea      rcx, [rbx + 0x28]  // ptr@0x28: <no ascii>
0x14EAE0939: 4D 8B C6                   mov      r8, r14
0x14EAE093C: 48 8B D6                   mov      rdx, rsi
0x14EAE093F: FF 57 08                   call     qword ptr [rdi + 8]
0x14EAE0942: 48 8B 74 24 40             mov      rsi, qword ptr [rsp + 0x40]  // ptr@0x40: <no ascii>
0x14EAE0947: 49 83 C4 10                add      r12, 0x10
0x14EAE094B: 48 83 AC 24 D8 00 00 00 01  sub      qword ptr [rsp + 0xd8], 1  // ptr@0xD8: <no ascii>
0x14EAE0954: 0F 85 86 FE FF FF          jne      0x14eae07e0
0x14EAE095A: 48 8B 5C 24 48             mov      rbx, qword ptr [rsp + 0x48]  // ptr@0x48: <no ascii>
0x14EAE095F: 4C 8B 7C 24 78             mov      r15, qword ptr [rsp + 0x78]  // ptr@0x78: <no ascii>
0x14EAE0964: 8B F3                      mov      esi, ebx
0x14EAE0966: 4C 8B B4 24 80 00 00 00    mov      r14, qword ptr [rsp + 0x80]  // ptr@0x80: <no ascii>
0x14EAE096E: 4C 8B A4 24 88 00 00 00    mov      r12, qword ptr [rsp + 0x88]  // ptr@0x88: <no ascii>
0x14EAE0976: 48 8B BC 24 C0 00 00 00    mov      rdi, qword ptr [rsp + 0xc0]  // ptr@0xC0: <no ascii>
0x14EAE097E: 48 8D 8C 24 C0 00 00 00    lea      rcx, [rsp + 0xc0]  // ptr@0xC0: <no ascii>
0x14EAE0986: FF 15 44 9B A9 01          call     qword ptr [0x15057A4D0]  // [rip] 0x15057A4D0 |0x1057A4D0
0x14EAE098C: 0F 57 F6                   xorps    xmm6, xmm6
0x14EAE098F: F2 48 0F 2A B4 24 C0 00 00 00  cvtsi2sd xmm6, qword ptr [rsp + 0xc0]  // ptr@0xC0: <no ascii>
0x14EAE0999: F2 0F 59 35 FF 33 84 08    mulsd    xmm6, qword ptr [0x157323DA0]  // [rip] 0x157323DA0 |0x17323DA0
0x14EAE09A1: F2 0F 5C F7                subsd    xmm6, xmm7
0x14EAE09A5: F2 0F 59 35 5B BC BE 01    mulsd    xmm6, qword ptr [0x1506CC608]  // [rip] 0x1506CC608 |0x106CC608
0x14EAE09AD: E8 CE 89 C4 FF             call     0x14e729380
0x14EAE09B2: 0F 28 7C 24 50             movaps   xmm7, xmmword ptr [rsp + 0x50]  // ptr@0x50: <no ascii>
0x14EAE09B7: 0F 57 C9                   xorps    xmm1, xmm1
0x14EAE09BA: F3 0F 5A C8                cvtss2sd xmm1, xmm0
0x14EAE09BE: 66 0F 2F F1                comisd   xmm6, xmm1
0x14EAE09C2: 0F 82 AC 00 00 00          jb       0x14eae0a74
0x14EAE09C8: 80 3D 59 48 A8 08 03       cmp      byte ptr [0x157565228], 3  // [rip] 0x157565228 |0x17565228
0x14EAE09CF: 72 34                      jb       0x14eae0a05
0x14EAE09D1: 89 74 24 30                mov      dword ptr [rsp + 0x30], esi  // ptr@0x30: <no ascii>
0x14EAE09D5: 48 8D 05 14 E9 17 06       lea      rax, [0x154C5F2F0]  // [rip] 0x154C5F2F0 |0x14C5F2F0
0x14EAE09DC: F2 0F 11 74 24 28          movsd    qword ptr [rsp + 0x28], xmm6  // ptr@0x28: <no ascii>
0x14EAE09E2: 4C 8D 05 43 48 A8 08       lea      r8, [0x15756522C]  // [rip] 0x15756522C |0x1756522C
0x14EAE09E9: 41 B9 03 00 00 00          mov      r9d, 3
0x14EAE09EF: 48 89 44 24 20             mov      qword ptr [rsp + 0x20], rax  // ptr@0x20: <no ascii>
0x14EAE09F4: BA C7 09 00 00             mov      edx, 0x9c7
0x14EAE09F9: 48 8D 0D 60 73 BE 01       lea      rcx, [0x1506C7D60]  // [rip] 0x1506C7D60 |0x106C7D60
0x14EAE0A00: E8 2B 7D D4 FD             call     0x14c828730
0x14EAE0A05: 48 85 DB                   test     rbx, rbx
0x14EAE0A08: 7E 6A                      jle      0x14eae0a74
0x14EAE0A0A: 48 8D 2D 6F A6 34 02       lea      rbp, [0x150E2B080]  // [rip] 0x150E2B080 |0x10E2B080
0x14EAE0A11: 80 3D 10 48 A8 08 03       cmp      byte ptr [0x157565228], 3  // [rip] 0x157565228 |0x17565228
0x14EAE0A18: 72 50                      jb       0x14eae0a6a
0x14EAE0A1A: 48 8D 8F 18 09 00 00       lea      rcx, [rdi + 0x918]  // ptr@0x918: <no ascii>
0x14EAE0A21: FF 15 49 93 D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0A27: 49 03 C5                   add      rax, r13
0x14EAE0A2A: 83 78 08 00                cmp      dword ptr [rax + 8], 0
0x14EAE0A2E: 74 0B                      je       0x14eae0a3b
0x14EAE0A30: 48 8B C8                   mov      rcx, rax
0x14EAE0A33: FF 15 37 93 D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0A39: EB 07                      jmp      0x14eae0a42
0x14EAE0A3B: 48 8D 05 16 6D BE 01       lea      rax, [0x1506C7758]  // [rip] 0x1506C7758 |0x106C7758
0x14EAE0A42: 48 89 44 24 28             mov      qword ptr [rsp + 0x28], rax  // ptr@0x28: <no ascii>
0x14EAE0A47: 4C 8D 05 DE 47 A8 08       lea      r8, [0x15756522C]  // [rip] 0x15756522C |0x1756522C
0x14EAE0A4E: 41 B9 03 00 00 00          mov      r9d, 3
0x14EAE0A54: 48 89 6C 24 20             mov      qword ptr [rsp + 0x20], rbp  // ptr@0x20: <no ascii>
0x14EAE0A59: BA CB 09 00 00             mov      edx, 0x9cb
0x14EAE0A5E: 48 8D 0D FB 72 BE 01       lea      rcx, [0x1506C7D60]  // [rip] 0x1506C7D60 |0x106C7D60
0x14EAE0A65: E8 C6 7C D4 FD             call     0x14c828730
0x14EAE0A6A: 49 83 C5 10                add      r13, 0x10
0x14EAE0A6E: 48 83 EB 01                sub      rbx, 1
0x14EAE0A72: 75 9D                      jne      0x14eae0a11
0x14EAE0A74: 48 8D 8F 18 09 00 00       lea      rcx, [rdi + 0x918]  // ptr@0x918: <no ascii>
0x14EAE0A7B: 41 B1 01                   mov      r9b, 1
0x14EAE0A7E: 44 8B C6                   mov      r8d, esi
0x14EAE0A81: 33 D2                      xor      edx, edx
0x14EAE0A83: 0F 28 74 24 60             movaps   xmm6, xmmword ptr [rsp + 0x60]  // ptr@0x60: <no ascii>
0x14EAE0A88: 48 81 C4 90 00 00 00       add      rsp, 0x90
0x14EAE0A8F: 41 5D                      pop      r13
0x14EAE0A91: 5F                         pop      rdi
0x14EAE0A92: 5E                         pop      rsi
0x14EAE0A93: 5D                         pop      rbp
0x14EAE0A94: 5B                         pop      rbx
0x14EAE0A95: E9 86 25 80 F2             jmp      0x1412e3020
0x14EAE0A9A: CC                         int3     
0x14EAE0A9B: CC                         int3     
0x14EAE0A9C: CC                         int3     
0x14EAE0A9D: CC                         int3     
0x14EAE0A9E: CC                         int3     
0x14EAE0A9F: CC                         int3     
0x14EAE0AA0: 40 55                      push     rbp
0x14EAE0AA2: 56                         push     rsi
0x14EAE0AA3: 41 56                      push     r14
0x14EAE0AA5: 48 8D 6C 24 B9             lea      rbp, [rsp - 0x47]  // ptr@0x47: <no ascii>
0x14EAE0AAA: 48 81 EC E0 00 00 00       sub      rsp, 0xe0
0x14EAE0AB1: 80 BA 98 00 00 00 00       cmp      byte ptr [rdx + 0x98], 0  // ptr@0x98: <no ascii>
0x14EAE0AB8: 48 8B F2                   mov      rsi, rdx
0x14EAE0ABB: 0F 29 B4 24 D0 00 00 00    movaps   xmmword ptr [rsp + 0xd0], xmm6  // ptr@0xD0: <no ascii>
0x14EAE0AC3: 4C 8B F1                   mov      r14, rcx
0x14EAE0AC6: 0F 28 F2                   movaps   xmm6, xmm2
0x14EAE0AC9: 74 09                      je       0x14eae0ad4
0x14EAE0ACB: 48 8D 4A 08                lea      rcx, [rdx + 8]
0x14EAE0ACF: E8 4C BA 06 00             call     0x14eb4c520
0x14EAE0AD4: 48 8B 86 78 02 00 00       mov      rax, qword ptr [rsi + 0x278]  // ptr@0x278: <no ascii>
0x14EAE0ADB: 48 89 9C 24 00 01 00 00    mov      qword ptr [rsp + 0x100], rbx  // ptr@0x100: <no ascii>
0x14EAE0AE3: 4C 89 BC 24 18 01 00 00    mov      qword ptr [rsp + 0x118], r15  // ptr@0x118: <no ascii>
0x14EAE0AEB: 48 85 C0                   test     rax, rax
0x14EAE0AEE: 0F 85 E1 00 00 00          jne      0x14eae0bd5
0x14EAE0AF4: 80 3D E5 71 8F 08 02       cmp      byte ptr [0x1573D7CE0], 2  // [rip] 0x1573D7CE0 |0x173D7CE0
0x14EAE0AFB: 48 8D 1D CE 10 18 06       lea      rbx, [0x154C61BD0]  // [rip] 0x154C61BD0 |0x14C61BD0
0x14EAE0B02: 72 23                      jb       0x14eae0b27
0x14EAE0B04: 41 B9 02 00 00 00          mov      r9d, 2
0x14EAE0B0A: 48 89 5C 24 20             mov      qword ptr [rsp + 0x20], rbx  // ptr@0x20: <no ascii>
0x14EAE0B0F: 4C 8D 05 CE 71 8F 08       lea      r8, [0x1573D7CE4]  // [rip] 0x1573D7CE4 |0x173D7CE4
0x14EAE0B16: BA 66 36 00 00             mov      edx, 0x3666
0x14EAE0B1B: 48 8D 0D 3E 72 BE 01       lea      rcx, [0x1506C7D60]  // [rip] 0x1506C7D60 |0x106C7D60
0x14EAE0B22: E8 09 7C D4 FD             call     0x14c828730
0x14EAE0B27: 48 8B D6                   mov      rdx, rsi
0x14EAE0B2A: 49 8B CE                   mov      rcx, r14
0x14EAE0B2D: E8 BE 44 FD FF             call     0x14eab4ff0
0x14EAE0B32: 45 33 FF                   xor      r15d, r15d
0x14EAE0B35: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0B39: BA 4D 00 00 00             mov      edx, 0x4d
0x14EAE0B3E: 4C 89 7D A7                mov      qword ptr [rbp - 0x59], r15  // ptr@0x59: <no ascii>
0x14EAE0B42: 4C 89 7D AF                mov      qword ptr [rbp - 0x51], r15  // ptr@0x51: <no ascii>
0x14EAE0B46: E8 95 12 FA F1             call     0x140a81de0
0x14EAE0B4B: 8B 55 AF                   mov      edx, dword ptr [rbp - 0x51]  // ptr@0x51: <no ascii>
0x14EAE0B4E: 8D 42 4D                   lea      eax, [rdx + 0x4d]  // ptr@0x4D: <no ascii>
0x14EAE0B51: 89 45 AF                   mov      dword ptr [rbp - 0x51], eax  // ptr@0x51: <no ascii>
0x14EAE0B54: 3B 45 B3                   cmp      eax, dword ptr [rbp - 0x4d]  // ptr@0x4D: <no ascii>
0x14EAE0B57: 7E 09                      jle      0x14eae0b62
0x14EAE0B59: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0B5D: E8 9E 11 FA F1             call     0x140a81d00
0x14EAE0B62: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0B66: FF 15 04 92 D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0B6C: 41 B8 9A 00 00 00          mov      r8d, 0x9a
0x14EAE0B72: 48 8B D3                   mov      rdx, rbx
0x14EAE0B75: 48 8B C8                   mov      rcx, rax
0x14EAE0B78: E8 B3 43 CA FD             call     0x14c784f30
0x14EAE0B7D: 48 8B 96 78 02 00 00       mov      rdx, qword ptr [rsi + 0x278]  // ptr@0x278: <no ascii>
0x14EAE0B84: 4C 8D 4D A7                lea      r9, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0B88: 41 B8 0A 00 00 00          mov      r8d, 0xa
0x14EAE0B8E: 49 8B CE                   mov      rcx, r14
0x14EAE0B91: E8 5A 2E FD FF             call     0x14eab39f0
0x14EAE0B96: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0B9A: FF 15 D0 91 D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0BA0: 33 D2                      xor      edx, edx
0x14EAE0BA2: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0BA6: E8 35 11 FA F1             call     0x140a81ce0
0x14EAE0BAB: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0BAF: FF 15 BB 91 D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0BB5: 48 85 C0                   test     rax, rax
0x14EAE0BB8: 0F 84 0E 05 00 00          je       0x14eae10cc
0x14EAE0BBE: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0BC2: FF 15 A8 91 D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0BC8: 48 8B C8                   mov      rcx, rax
0x14EAE0BCB: E8 00 9A CC FD             call     0x14c7aa5d0
0x14EAE0BD0: E9 F7 04 00 00             jmp      0x14eae10cc
0x14EAE0BD5: 83 B8 80 06 00 00 01       cmp      dword ptr [rax + 0x680], 1  // ptr@0x680: <no ascii>
0x14EAE0BDC: 48 89 BC 24 08 01 00 00    mov      qword ptr [rsp + 0x108], rdi  // ptr@0x108: <no ascii>
0x14EAE0BE4: 0F 8E 6B 02 00 00          jle      0x14eae0e55
0x14EAE0BEA: F3 0F 10 80 64 06 00 00    movss    xmm0, dword ptr [rax + 0x664]  // ptr@0x664: <no ascii>
0x14EAE0BF2: F3 0F 5C C6                subss    xmm0, xmm6
0x14EAE0BF6: F3 0F 11 80 64 06 00 00    movss    dword ptr [rax + 0x664], xmm0  // ptr@0x664: <no ascii>
0x14EAE0BFE: 0F 57 C0                   xorps    xmm0, xmm0
0x14EAE0C01: 48 8B 86 78 02 00 00       mov      rax, qword ptr [rsi + 0x278]  // ptr@0x278: <no ascii>
0x14EAE0C08: 0F 2F 80 64 06 00 00       comiss   xmm0, dword ptr [rax + 0x664]  // ptr@0x664: <no ascii>
0x14EAE0C0F: 0F 82 40 02 00 00          jb       0x14eae0e55
0x14EAE0C15: 80 3D 0C 46 A8 08 06       cmp      byte ptr [0x157565228], 6  // [rip] 0x157565228 |0x17565228
0x14EAE0C1C: 48 8D 3D 35 6B BE 01       lea      rdi, [0x1506C7758]  // [rip] 0x1506C7758 |0x106C7758
0x14EAE0C23: 72 47                      jb       0x14eae0c6c
0x14EAE0C25: 48 8D 88 78 06 00 00       lea      rcx, [rax + 0x678]  // ptr@0x678: <no ascii>
0x14EAE0C2C: 83 79 08 00                cmp      dword ptr [rcx + 8], 0
0x14EAE0C30: 74 08                      je       0x14eae0c3a
0x14EAE0C32: FF 15 38 91 D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0C38: EB 03                      jmp      0x14eae0c3d
0x14EAE0C3A: 48 8B C7                   mov      rax, rdi
0x14EAE0C3D: 48 89 44 24 28             mov      qword ptr [rsp + 0x28], rax  // ptr@0x28: <no ascii>
0x14EAE0C42: 4C 8D 05 E3 45 A8 08       lea      r8, [0x15756522C]  // [rip] 0x15756522C |0x1756522C
0x14EAE0C49: 48 8D 05 20 10 18 06       lea      rax, [0x154C61C70]  // [rip] 0x154C61C70 |0x14C61C70
0x14EAE0C50: 41 B9 06 00 00 00          mov      r9d, 6
0x14EAE0C56: BA 71 36 00 00             mov      edx, 0x3671
0x14EAE0C5B: 48 89 44 24 20             mov      qword ptr [rsp + 0x20], rax  // ptr@0x20: <no ascii>
0x14EAE0C60: 48 8D 0D F9 70 BE 01       lea      rcx, [0x1506C7D60]  // [rip] 0x1506C7D60 |0x106C7D60
0x14EAE0C67: E8 C4 7A D4 FD             call     0x14c828730
0x14EAE0C6C: 48 8B 86 78 02 00 00       mov      rax, qword ptr [rsi + 0x278]  // ptr@0x278: <no ascii>
0x14EAE0C73: 48 8B 88 38 01 00 00       mov      rcx, qword ptr [rax + 0x138]  // ptr@0x138: <no ascii>
0x14EAE0C7A: 48 85 C9                   test     rcx, rcx
0x14EAE0C7D: 74 09                      je       0x14eae0c88
0x14EAE0C7F: 48 8B 01                   mov      rax, qword ptr [rcx]
0x14EAE0C82: FF 90 A8 07 00 00          call     qword ptr [rax + 0x7a8]  // ptr@0x7A8: <no ascii>
0x14EAE0C88: 48 8B 96 78 02 00 00       mov      rdx, qword ptr [rsi + 0x278]  // ptr@0x278: <no ascii>
0x14EAE0C8F: 48 8D 4D B7                lea      rcx, [rbp - 0x49]  // ptr@0x49: <no ascii>
0x14EAE0C93: 45 33 FF                   xor      r15d, r15d
0x14EAE0C96: 48 81 C2 78 06 00 00       add      rdx, 0x678
0x14EAE0C9D: 4C 89 7D A7                mov      qword ptr [rbp - 0x59], r15  // ptr@0x59: <no ascii>
0x14EAE0CA1: 4C 89 7D AF                mov      qword ptr [rbp - 0x51], r15  // ptr@0x51: <no ascii>
0x14EAE0CA5: E8 76 6C FA F1             call     0x140a87920
0x14EAE0CAA: 44 39 7D BF                cmp      dword ptr [rbp - 0x41], r15d  // ptr@0x41: <no ascii>
0x14EAE0CAE: 74 0F                      je       0x14eae0cbf
0x14EAE0CB0: 48 8D 4D B7                lea      rcx, [rbp - 0x49]  // ptr@0x49: <no ascii>
0x14EAE0CB4: FF 15 B6 90 D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0CBA: 4C 8B C0                   mov      r8, rax
0x14EAE0CBD: EB 03                      jmp      0x14eae0cc2
0x14EAE0CBF: 4C 8B C7                   mov      r8, rdi
0x14EAE0CC2: 48 8B 86 78 02 00 00       mov      rax, qword ptr [rsi + 0x278]  // ptr@0x278: <no ascii>
0x14EAE0CC9: 48 8D 96 D0 00 00 00       lea      rdx, [rsi + 0xd0]  // ptr@0xD0: <no ascii>
0x14EAE0CD0: 49 8B 1E                   mov      rbx, qword ptr [r14]
0x14EAE0CD3: 48 8D 4D C7                lea      rcx, [rbp - 0x39]  // ptr@0x39: <no ascii>
0x14EAE0CD7: 44 0F B6 88 71 06 00 00    movzx    r9d, byte ptr [rax + 0x671]  // ptr@0x671: <no ascii>
0x14EAE0CDF: E8 CC 98 00 00             call     0x14eaea5b0
0x14EAE0CE4: 4C 8B C0                   mov      r8, rax
0x14EAE0CE7: 4C 8D 4D A7                lea      r9, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0CEB: 48 8B D6                   mov      rdx, rsi
0x14EAE0CEE: 49 8B CE                   mov      rcx, r14
0x14EAE0CF1: FF 93 38 04 00 00          call     qword ptr [rbx + 0x438]  // ptr@0x438: <no ascii>
0x14EAE0CF7: 85 C0                      test     eax, eax
0x14EAE0CF9: 0F 84 E1 00 00 00          je       0x14eae0de0
0x14EAE0CFF: 80 3D DA 6F 8F 08 03       cmp      byte ptr [0x1573D7CE0], 3  // [rip] 0x1573D7CE0 |0x173D7CE0
0x14EAE0D06: 72 61                      jb       0x14eae0d69
0x14EAE0D08: 44 39 7D AF                cmp      dword ptr [rbp - 0x51], r15d  // ptr@0x51: <no ascii>
0x14EAE0D0C: 74 0F                      je       0x14eae0d1d
0x14EAE0D0E: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0D12: FF 15 58 90 D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0D18: 48 8B D8                   mov      rbx, rax
0x14EAE0D1B: EB 03                      jmp      0x14eae0d20
0x14EAE0D1D: 48 8B DF                   mov      rbx, rdi
0x14EAE0D20: 44 39 7D BF                cmp      dword ptr [rbp - 0x41], r15d  // ptr@0x41: <no ascii>
0x14EAE0D24: 74 0C                      je       0x14eae0d32
0x14EAE0D26: 48 8D 4D B7                lea      rcx, [rbp - 0x49]  // ptr@0x49: <no ascii>
0x14EAE0D2A: FF 15 40 90 D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0D30: EB 03                      jmp      0x14eae0d35
0x14EAE0D32: 48 8B C7                   mov      rax, rdi
0x14EAE0D35: 48 89 5C 24 30             mov      qword ptr [rsp + 0x30], rbx  // ptr@0x30: <no ascii>
0x14EAE0D3A: 4C 8D 05 A3 6F 8F 08       lea      r8, [0x1573D7CE4]  // [rip] 0x1573D7CE4 |0x173D7CE4
0x14EAE0D41: 48 89 44 24 28             mov      qword ptr [rsp + 0x28], rax  // ptr@0x28: <no ascii>
0x14EAE0D46: 48 8D 0D 13 70 BE 01       lea      rcx, [0x1506C7D60]  // [rip] 0x1506C7D60 |0x106C7D60
0x14EAE0D4D: 48 8D 05 4C 0F 18 06       lea      rax, [0x154C61CA0]  // [rip] 0x154C61CA0 |0x14C61CA0
0x14EAE0D54: 41 B9 03 00 00 00          mov      r9d, 3
0x14EAE0D5A: BA 7B 36 00 00             mov      edx, 0x367b
0x14EAE0D5F: 48 89 44 24 20             mov      qword ptr [rsp + 0x20], rax  // ptr@0x20: <no ascii>
0x14EAE0D64: E8 C7 79 D4 FD             call     0x14c828730
0x14EAE0D69: 48 8B 9E 78 02 00 00       mov      rbx, qword ptr [rsi + 0x278]  // ptr@0x278: <no ascii>
0x14EAE0D70: 48 85 DB                   test     rbx, rbx
0x14EAE0D73: 74 47                      je       0x14eae0dbc
0x14EAE0D75: 48 81 C3 78 06 00 00       add      rbx, 0x678
0x14EAE0D7C: 48 8B CB                   mov      rcx, rbx
0x14EAE0D7F: FF 15 EB 8F D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0D85: 48 3B C7                   cmp      rax, rdi
0x14EAE0D88: 74 3D                      je       0x14eae0dc7
0x14EAE0D8A: 48 8B CB                   mov      rcx, rbx
0x14EAE0D8D: FF 15 DD 8F D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0D93: 44 89 7B 08                mov      dword ptr [rbx + 8], r15d
0x14EAE0D97: 44 39 7B 0C                cmp      dword ptr [rbx + 0xc], r15d  // ptr@0xC: <no ascii>
0x14EAE0D9B: 74 0A                      je       0x14eae0da7
0x14EAE0D9D: 33 D2                      xor      edx, edx
0x14EAE0D9F: 48 8B CB                   mov      rcx, rbx
0x14EAE0DA2: E8 39 10 FA F1             call     0x140a81de0
0x14EAE0DA7: 8B 53 08                   mov      edx, dword ptr [rbx + 8]
0x14EAE0DAA: 89 53 08                   mov      dword ptr [rbx + 8], edx
0x14EAE0DAD: 3B 53 0C                   cmp      edx, dword ptr [rbx + 0xc]  // ptr@0xC: <no ascii>
0x14EAE0DB0: 7E 15                      jle      0x14eae0dc7
0x14EAE0DB2: 48 8B CB                   mov      rcx, rbx
0x14EAE0DB5: E8 46 0F FA F1             call     0x140a81d00
0x14EAE0DBA: EB 0B                      jmp      0x14eae0dc7
0x14EAE0DBC: 48 8B D6                   mov      rdx, rsi
0x14EAE0DBF: 49 8B CE                   mov      rcx, r14
0x14EAE0DC2: E8 29 42 FD FF             call     0x14eab4ff0
0x14EAE0DC7: 48 8B 96 78 02 00 00       mov      rdx, qword ptr [rsi + 0x278]  // ptr@0x278: <no ascii>
0x14EAE0DCE: 4C 8D 4D A7                lea      r9, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0DD2: 41 B8 0A 00 00 00          mov      r8d, 0xa
0x14EAE0DD8: 49 8B CE                   mov      rcx, r14
0x14EAE0DDB: E8 10 2C FD FF             call     0x14eab39f0
0x14EAE0DE0: 48 8D 4D B7                lea      rcx, [rbp - 0x49]  // ptr@0x49: <no ascii>
0x14EAE0DE4: FF 15 86 8F D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0DEA: 33 D2                      xor      edx, edx
0x14EAE0DEC: 48 8D 4D B7                lea      rcx, [rbp - 0x49]  // ptr@0x49: <no ascii>
0x14EAE0DF0: E8 EB 0E FA F1             call     0x140a81ce0
0x14EAE0DF5: 48 8D 4D B7                lea      rcx, [rbp - 0x49]  // ptr@0x49: <no ascii>
0x14EAE0DF9: FF 15 71 8F D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0DFF: 48 85 C0                   test     rax, rax
0x14EAE0E02: 74 12                      je       0x14eae0e16
0x14EAE0E04: 48 8D 4D B7                lea      rcx, [rbp - 0x49]  // ptr@0x49: <no ascii>
0x14EAE0E08: FF 15 62 8F D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0E0E: 48 8B C8                   mov      rcx, rax
0x14EAE0E11: E8 BA 97 CC FD             call     0x14c7aa5d0
0x14EAE0E16: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0E1A: FF 15 50 8F D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0E20: 33 D2                      xor      edx, edx
0x14EAE0E22: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0E26: E8 B5 0E FA F1             call     0x140a81ce0
0x14EAE0E2B: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0E2F: FF 15 3B 8F D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0E35: 48 85 C0                   test     rax, rax
0x14EAE0E38: 0F 84 86 02 00 00          je       0x14eae10c4
0x14EAE0E3E: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0E42: FF 15 28 8F D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0E48: 48 8B C8                   mov      rcx, rax
0x14EAE0E4B: E8 80 97 CC FD             call     0x14c7aa5d0
0x14EAE0E50: E9 6F 02 00 00             jmp      0x14eae10c4
0x14EAE0E55: 83 BE C0 00 00 00 01       cmp      dword ptr [rsi + 0xc0], 1  // ptr@0xC0: <no ascii>
0x14EAE0E5C: 0F 8E 66 01 00 00          jle      0x14eae0fc8
0x14EAE0E62: 48 8B 88 38 01 00 00       mov      rcx, qword ptr [rax + 0x138]  // ptr@0x138: <no ascii>
0x14EAE0E69: 48 85 C9                   test     rcx, rcx
0x14EAE0E6C: 74 09                      je       0x14eae0e77
0x14EAE0E6E: 48 8B 01                   mov      rax, qword ptr [rcx]
0x14EAE0E71: FF 90 A8 07 00 00          call     qword ptr [rax + 0x7a8]  // ptr@0x7A8: <no ascii>
0x14EAE0E77: 45 33 FF                   xor      r15d, r15d
0x14EAE0E7A: 48 8D 8E B8 00 00 00       lea      rcx, [rsi + 0xb8]  // ptr@0xB8: <no ascii>
0x14EAE0E81: 4C 89 7D B7                mov      qword ptr [rbp - 0x49], r15  // ptr@0x49: <no ascii>
0x14EAE0E85: 4C 89 7D BF                mov      qword ptr [rbp - 0x41], r15  // ptr@0x41: <no ascii>
0x14EAE0E89: 4C 89 7D A7                mov      qword ptr [rbp - 0x59], r15  // ptr@0x59: <no ascii>
0x14EAE0E8D: FF 15 DD 8E D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0E93: 48 63 9E C0 00 00 00       movsxd   rbx, dword ptr [rsi + 0xc0]  // ptr@0xC0: <no ascii>
0x14EAE0E9A: 48 8B F8                   mov      rdi, rax
0x14EAE0E9D: 89 5D AF                   mov      dword ptr [rbp - 0x51], ebx  // ptr@0x51: <no ascii>
0x14EAE0EA0: 85 DB                      test     ebx, ebx
0x14EAE0EA2: 75 06                      jne      0x14eae0eaa
0x14EAE0EA4: 44 89 7D B3                mov      dword ptr [rbp - 0x4d], r15d  // ptr@0x4D: <no ascii>
0x14EAE0EA8: EB 2C                      jmp      0x14eae0ed6
0x14EAE0EAA: 45 33 C0                   xor      r8d, r8d
0x14EAE0EAD: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0EB1: 8B D3                      mov      edx, ebx
0x14EAE0EB3: E8 78 65 FE F1             call     0x140ac7430
0x14EAE0EB8: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0EBC: FF 15 AE 8E D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0EC2: 4C 8B C3                   mov      r8, rbx
0x14EAE0EC5: 48 8B D7                   mov      rdx, rdi
0x14EAE0EC8: 4D 03 C0                   add      r8, r8
0x14EAE0ECB: 48 8B C8                   mov      rcx, rax
0x14EAE0ECE: E8 6A 4F 78 01             call     0x150265e3d
0x14EAE0ED3: 8B 5D AF                   mov      ebx, dword ptr [rbp - 0x51]  // ptr@0x51: <no ascii>
0x14EAE0ED6: 85 DB                      test     ebx, ebx
0x14EAE0ED8: 74 0F                      je       0x14eae0ee9
0x14EAE0EDA: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0EDE: FF 15 8C 8E D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0EE4: 48 8B F8                   mov      rdi, rax
0x14EAE0EE7: EB 07                      jmp      0x14eae0ef0
0x14EAE0EE9: 48 8D 3D 68 68 BE 01       lea      rdi, [0x1506C7758]  // [rip] 0x1506C7758 |0x106C7758
0x14EAE0EF0: 44 0F B6 8E C8 00 00 00    movzx    r9d, byte ptr [rsi + 0xc8]  // ptr@0xC8: <no ascii>
0x14EAE0EF8: 48 8D 96 D0 00 00 00       lea      rdx, [rsi + 0xd0]  // ptr@0xD0: <no ascii>
0x14EAE0EFF: 49 8B 1E                   mov      rbx, qword ptr [r14]
0x14EAE0F02: 48 8D 4D C7                lea      rcx, [rbp - 0x39]  // ptr@0x39: <no ascii>
0x14EAE0F06: 4C 8B C7                   mov      r8, rdi
0x14EAE0F09: E8 A2 96 00 00             call     0x14eaea5b0
0x14EAE0F0E: 4C 8B C0                   mov      r8, rax
0x14EAE0F11: 4C 8D 4D B7                lea      r9, [rbp - 0x49]  // ptr@0x49: <no ascii>
0x14EAE0F15: 48 8B D6                   mov      rdx, rsi
0x14EAE0F18: 49 8B CE                   mov      rcx, r14
0x14EAE0F1B: FF 93 38 04 00 00          call     qword ptr [rbx + 0x438]  // ptr@0x438: <no ascii>
0x14EAE0F21: 83 F8 01                   cmp      eax, 1
0x14EAE0F24: 75 2D                      jne      0x14eae0f53
0x14EAE0F26: 4C 39 BE 78 02 00 00       cmp      qword ptr [rsi + 0x278], r15  // ptr@0x278: <no ascii>
0x14EAE0F2D: 75 0B                      jne      0x14eae0f3a
0x14EAE0F2F: 48 8B D6                   mov      rdx, rsi
0x14EAE0F32: 49 8B CE                   mov      rcx, r14
0x14EAE0F35: E8 B6 40 FD FF             call     0x14eab4ff0
0x14EAE0F3A: 48 8B 96 78 02 00 00       mov      rdx, qword ptr [rsi + 0x278]  // ptr@0x278: <no ascii>
0x14EAE0F41: 4C 8D 4D B7                lea      r9, [rbp - 0x49]  // ptr@0x49: <no ascii>
0x14EAE0F45: 41 B8 0B 00 00 00          mov      r8d, 0xb
0x14EAE0F4B: 49 8B CE                   mov      rcx, r14
0x14EAE0F4E: E8 9D 2A FD FF             call     0x14eab39f0
0x14EAE0F53: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0F57: FF 15 13 8E D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0F5D: 33 D2                      xor      edx, edx
0x14EAE0F5F: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0F63: E8 78 0D FA F1             call     0x140a81ce0
0x14EAE0F68: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0F6C: FF 15 FE 8D D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0F72: 48 85 C0                   test     rax, rax
0x14EAE0F75: 74 12                      je       0x14eae0f89
0x14EAE0F77: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE0F7B: FF 15 EF 8D D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0F81: 48 8B C8                   mov      rcx, rax
0x14EAE0F84: E8 47 96 CC FD             call     0x14c7aa5d0
0x14EAE0F89: 48 8D 4D B7                lea      rcx, [rbp - 0x49]  // ptr@0x49: <no ascii>
0x14EAE0F8D: FF 15 DD 8D D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0F93: 33 D2                      xor      edx, edx
0x14EAE0F95: 48 8D 4D B7                lea      rcx, [rbp - 0x49]  // ptr@0x49: <no ascii>
0x14EAE0F99: E8 42 0D FA F1             call     0x140a81ce0
0x14EAE0F9E: 48 8D 4D B7                lea      rcx, [rbp - 0x49]  // ptr@0x49: <no ascii>
0x14EAE0FA2: FF 15 C8 8D D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0FA8: 48 85 C0                   test     rax, rax
0x14EAE0FAB: 0F 84 13 01 00 00          je       0x14eae10c4
0x14EAE0FB1: 48 8D 4D B7                lea      rcx, [rbp - 0x49]  // ptr@0x49: <no ascii>
0x14EAE0FB5: FF 15 B5 8D D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE0FBB: 48 8B C8                   mov      rcx, rax
0x14EAE0FBE: E8 0D 96 CC FD             call     0x14c7aa5d0
0x14EAE0FC3: E9 FC 00 00 00             jmp      0x14eae10c4
0x14EAE0FC8: 48 8B 8E A0 01 00 00       mov      rcx, qword ptr [rsi + 0x1a0]  // ptr@0x1A0: <no ascii>
0x14EAE0FCF: 48 85 C9                   test     rcx, rcx
0x14EAE0FD2: 0F 84 DE 01 00 00          je       0x14eae11b6
0x14EAE0FD8: 48 8B 01                   mov      rax, qword ptr [rcx]
0x14EAE0FDB: 0F 28 CE                   movaps   xmm1, xmm6
0x14EAE0FDE: FF 90 58 02 00 00          call     qword ptr [rax + 0x258]  // ptr@0x258: <no ascii>
0x14EAE0FE4: 48 8B 96 A0 01 00 00       mov      rdx, qword ptr [rsi + 0x1a0]  // ptr@0x1A0: <no ascii>
0x14EAE0FEB: 48 85 D2                   test     rdx, rdx
0x14EAE0FEE: 0F 84 D0 00 00 00          je       0x14eae10c4
0x14EAE0FF4: 45 33 FF                   xor      r15d, r15d
0x14EAE0FF7: 4C 8D 82 B0 00 00 00       lea      r8, [rdx + 0xb0]  // ptr@0xB0: <no ascii>
0x14EAE0FFE: 41 8B 40 08                mov      eax, dword ptr [r8 + 8]
0x14EAE1002: 85 C0                      test     eax, eax
0x14EAE1004: 8D 48 FF                   lea      ecx, [rax - 1]
0x14EAE1007: 41 0F 44 CF                cmove    ecx, r15d
0x14EAE100B: 85 C9                      test     ecx, ecx
0x14EAE100D: 7E 2D                      jle      0x14eae103c
0x14EAE100F: 4C 89 44 24 20             mov      qword ptr [rsp + 0x20], r8  // ptr@0x20: <no ascii>
0x14EAE1014: 41 B9 08 00 00 00          mov      r9d, 8
0x14EAE101A: 4C 8B 42 30                mov      r8, qword ptr [rdx + 0x30]  // ptr@0x30: <no ascii>
0x14EAE101E: 49 8B CE                   mov      rcx, r14
0x14EAE1021: 33 D2                      xor      edx, edx
0x14EAE1023: E8 F8 25 FD FF             call     0x14eab3620
0x14EAE1028: 49 8B 06                   mov      rax, qword ptr [r14]
0x14EAE102B: 48 8B D6                   mov      rdx, rsi
0x14EAE102E: 49 8B CE                   mov      rcx, r14
0x14EAE1031: FF 90 78 04 00 00          call     qword ptr [rax + 0x478]  // ptr@0x478: <no ascii>
0x14EAE1037: E9 88 00 00 00             jmp      0x14eae10c4
0x14EAE103C: 44 38 BA A8 00 00 00       cmp      byte ptr [rdx + 0xa8], r15b  // ptr@0xA8: <no ascii>
0x14EAE1043: 74 7F                      je       0x14eae10c4
0x14EAE1045: 44 38 BA A9 00 00 00       cmp      byte ptr [rdx + 0xa9], r15b  // ptr@0xA9: <no ascii>
0x14EAE104C: 75 76                      jne      0x14eae10c4
0x14EAE104E: 48 8B 8E 18 02 00 00       mov      rcx, qword ptr [rsi + 0x218]  // ptr@0x218: <no ascii>
0x14EAE1055: 4C 89 A4 24 10 01 00 00    mov      qword ptr [rsp + 0x110], r12  // ptr@0x110: <no ascii>
0x14EAE105D: 4C 8D A6 A0 01 00 00       lea      r12, [rsi + 0x1a0]  // ptr@0x1A0: <no ascii>
0x14EAE1064: 48 85 C9                   test     rcx, rcx
0x14EAE1067: 74 14                      je       0x14eae107d
0x14EAE1069: 48 8B 01                   mov      rax, qword ptr [rcx]
0x14EAE106C: FF 90 38 03 00 00          call     qword ptr [rax + 0x338]  // ptr@0x338: <no ascii>
0x14EAE1072: 84 C0                      test     al, al
0x14EAE1074: 75 46                      jne      0x14eae10bc
0x14EAE1076: 4C 8D A6 A0 01 00 00       lea      r12, [rsi + 0x1a0]  // ptr@0x1A0: <no ascii>
0x14EAE107D: 48 8B 96 A0 01 00 00       mov      rdx, qword ptr [rsi + 0x1a0]  // ptr@0x1A0: <no ascii>
0x14EAE1084: 49 8B CE                   mov      rcx, r14
0x14EAE1087: 48 83 C2 68                add      rdx, 0x68
0x14EAE108B: E8 90 1B FF FF             call     0x14ead2c20
0x14EAE1090: 84 C0                      test     al, al
0x14EAE1092: 75 5C                      jne      0x14eae10f0
0x14EAE1094: 48 8B D6                   mov      rdx, rsi
0x14EAE1097: 49 8B CE                   mov      rcx, r14
0x14EAE109A: E8 51 3F FD FF             call     0x14eab4ff0
0x14EAE109F: 4D 8B 0C 24                mov      r9, qword ptr [r12]
0x14EAE10A3: 41 B8 03 00 00 00          mov      r8d, 3
0x14EAE10A9: 48 8B 96 78 02 00 00       mov      rdx, qword ptr [rsi + 0x278]  // ptr@0x278: <no ascii>
0x14EAE10B0: 49 83 C1 68                add      r9, 0x68
0x14EAE10B4: 49 8B CE                   mov      rcx, r14
0x14EAE10B7: E8 34 29 FD FF             call     0x14eab39f0
0x14EAE10BC: 4C 8B A4 24 10 01 00 00    mov      r12, qword ptr [rsp + 0x110]  // ptr@0x110: <no ascii>
0x14EAE10C4: 48 8B BC 24 08 01 00 00    mov      rdi, qword ptr [rsp + 0x108]  // ptr@0x108: <no ascii>
0x14EAE10CC: 4C 8B BC 24 18 01 00 00    mov      r15, qword ptr [rsp + 0x118]  // ptr@0x118: <no ascii>
0x14EAE10D4: 48 8B 9C 24 00 01 00 00    mov      rbx, qword ptr [rsp + 0x100]  // ptr@0x100: <no ascii>
0x14EAE10DC: 0F 28 B4 24 D0 00 00 00    movaps   xmm6, xmmword ptr [rsp + 0xd0]  // ptr@0xD0: <no ascii>
0x14EAE10E4: 48 81 C4 E0 00 00 00       add      rsp, 0xe0
0x14EAE10EB: 41 5E                      pop      r14
0x14EAE10ED: 5E                         pop      rsi
0x14EAE10EE: 5D                         pop      rbp
0x14EAE10EF: C3                         ret      
0x14EAE10F0: 49 8B 1C 24                mov      rbx, qword ptr [r12]
0x14EAE10F4: 48 8D 4D C7                lea      rcx, [rbp - 0x39]  // ptr@0x39: <no ascii>
0x14EAE10F8: 49 8B 3E                   mov      rdi, qword ptr [r14]
0x14EAE10FB: 4C 89 7D A7                mov      qword ptr [rbp - 0x59], r15  // ptr@0x59: <no ascii>
0x14EAE10FF: 4C 89 7D AF                mov      qword ptr [rbp - 0x51], r15  // ptr@0x51: <no ascii>
0x14EAE1103: 48 8D 53 40                lea      rdx, [rbx + 0x40]  // ptr@0x40: <no ascii>
0x14EAE1107: E8 24 FA 19 F3             call     0x141c80b30
0x14EAE110C: 4C 8B C0                   mov      r8, rax
0x14EAE110F: 4C 8B CB                   mov      r9, rbx
0x14EAE1112: 48 8D 45 A7                lea      rax, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE1116: 48 8B D6                   mov      rdx, rsi
0x14EAE1119: 49 8B CE                   mov      rcx, r14
0x14EAE111C: 48 89 44 24 20             mov      qword ptr [rsp + 0x20], rax  // ptr@0x20: <no ascii>
0x14EAE1121: FF 97 48 04 00 00          call     qword ptr [rdi + 0x448]  // ptr@0x448: <no ascii>
0x14EAE1127: 49 8B 0C 24                mov      rcx, qword ptr [r12]
0x14EAE112B: 48 85 C9                   test     rcx, rcx
0x14EAE112E: 74 23                      je       0x14eae1153
0x14EAE1130: 4C 8B 11                   mov      r10, qword ptr [rcx]
0x14EAE1133: 48 8D 55 A7                lea      rdx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE1137: 48 89 54 24 20             mov      qword ptr [rsp + 0x20], rdx  // ptr@0x20: <no ascii>
0x14EAE113C: 44 0F B6 C8                movzx    r9d, al
0x14EAE1140: 49 8B D6                   mov      rdx, r14
0x14EAE1143: 4C 8B C6                   mov      r8, rsi
0x14EAE1146: 41 FF 92 70 02 00 00       call     qword ptr [r10 + 0x270]  // ptr@0x270: <no ascii>
0x14EAE114D: 4D 89 3C 24                mov      qword ptr [r12], r15
0x14EAE1151: EB 24                      jmp      0x14eae1177
0x14EAE1153: 48 8B D6                   mov      rdx, rsi
0x14EAE1156: 49 8B CE                   mov      rcx, r14
0x14EAE1159: E8 92 3E FD FF             call     0x14eab4ff0
0x14EAE115E: 48 8B 96 78 02 00 00       mov      rdx, qword ptr [rsi + 0x278]  // ptr@0x278: <no ascii>
0x14EAE1165: 4C 8D 4D A7                lea      r9, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE1169: 41 B8 06 00 00 00          mov      r8d, 6
0x14EAE116F: 49 8B CE                   mov      rcx, r14
0x14EAE1172: E8 79 28 FD FF             call     0x14eab39f0
0x14EAE1177: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE117B: FF 15 EF 8B D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE1181: 33 D2                      xor      edx, edx
0x14EAE1183: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE1187: E8 54 0B FA F1             call     0x140a81ce0
0x14EAE118C: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE1190: FF 15 DA 8B D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE1196: 48 85 C0                   test     rax, rax
0x14EAE1199: 0F 84 1D FF FF FF          je       0x14eae10bc
0x14EAE119F: 48 8D 4D A7                lea      rcx, [rbp - 0x59]  // ptr@0x59: <no ascii>
0x14EAE11A3: FF 15 C7 8B D6 07          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14EAE11A9: 48 8B C8                   mov      rcx, rax
0x14EAE11AC: E8 1F 94 CC FD             call     0x14c7aa5d0
0x14EAE11B1: E9 06 FF FF FF             jmp      0x14eae10bc
0x14EAE11B6: 41 80 BE 20 0A 00 00 06    cmp      byte ptr [r14 + 0xa20], 6  // ptr@0xA20: <no ascii>
0x14EAE11BE: 0F 85 00 FF FF FF          jne      0x14eae10c4
0x14EAE11C4: 41 C6 86 20 0A 00 00 00    mov      byte ptr [r14 + 0xa20], 0  // ptr@0xA20: <no ascii>
0x14EAE11CC: E9 F3 FE FF FF             jmp      0x14eae10c4
0x14EAE11D1: CC                         int3     
0x14EAE11D2: CC                         int3     
0x14EAE11D3: CC                         int3     



word_37
0x14DB9C7CE: 48 8B 15 A3 CA E7 08       mov      rdx, qword ptr [0x156A19278]  // [rip] 0x156A19278 |0x16A19278
0x14DB9C7D5: EB 35                      jmp      0x14db9c80c
0x14DB9C7D7: 48 8B 0D 9A EA E7 08       mov      rcx, qword ptr [0x156A1B278]  // [rip] 0x156A1B278 |0x16A1B278
0x14DB9C7DE: 0F B6 05 99 EA E7 08       movzx    eax, byte ptr [0x156A1B27E]  // [rip] 0x156A1B27E |0x16A1B27E
0x14DB9C7E5: 48 89 8C 24 50 01 00 00    mov      qword ptr [rsp + 0x150], rcx  // ptr@0x150: <no ascii>
0x14DB9C7ED: 34 37                      xor      al, 0x37
0x14DB9C7EF: 48 C1 E9 08                shr      rcx, 8
0x14DB9C7F3: 80 F1 37                   xor      cl, 0x37
0x14DB9C7F6: 88 84 24 51 01 00 00       mov      byte ptr [rsp + 0x151], al  // ptr@0x151: <no ascii>
0x14DB9C7FD: 88 8C 24 56 01 00 00       mov      byte ptr [rsp + 0x156], cl  // ptr@0x156: <no ascii>
0x14DB9C804: 48 8B 94 24 50 01 00 00    mov      rdx, qword ptr [rsp + 0x150]  // ptr@0x150: <no ascii>
0x14DB9C80C: 48 8B 86 F8 00 00 00       mov      rax, qword ptr [rsi + 0xf8]  // ptr@0xF8: <no ascii>
0x14DB9C813: 0F 57 F6                   xorps    xmm6, xmm6
0x14DB9C816: 48 8B 88 38 04 00 00       mov      rcx, qword ptr [rax + 0x438]  // ptr@0x438: <no ascii>
0x14DB9C81D: 48 89 8A 20 08 00 00       mov      qword ptr [rdx + 0x820], rcx  // ptr@0x820: <no ascii>
0x14DB9C824: 8B 86 FC 02 00 00          mov      eax, dword ptr [rsi + 0x2fc]  // ptr@0x2FC: <no ascii>
0x14DB9C82A: F3 48 0F 2A F0             cvtsi2ss xmm6, rax
0x14DB9C82F: F3 0F 59 B6 F0 02 00 00    mulss    xmm6, dword ptr [rsi + 0x2f0]  // ptr@0x2F0: <no ascii>
0x14DB9C837: FF 15 33 BA E7 08          call     qword ptr [0x156A18270]  // [rip] 0x156A18270 |0x16A18270
0x14DB9C83D: 84 C0                      test     al, al
0x14DB9C83F: 75 09                      jne      0x14db9c84a
0x14DB9C841: 48 8B 05 30 CA E7 08       mov      rax, qword ptr [0x156A19278]  // [rip] 0x156A19278 |0x16A19278
0x14DB9C848: EB 35                      jmp      0x14db9c87f
0x14DB9C84A: 48 8B 0D 27 EA E7 08       mov      rcx, qword ptr [0x156A1B278]  // [rip] 0x156A1B278 |0x16A1B278
0x14DB9C851: 0F B6 05 26 EA E7 08       movzx    eax, byte ptr [0x156A1B27E]  // [rip] 0x156A1B27E |0x16A1B27E
0x14DB9C858: 48 89 8C 24 50 01 00 00    mov      qword ptr [rsp + 0x150], rcx  // ptr@0x150: <no ascii>
0x14DB9C860: 34 37                      xor      al, 0x37
0x14DB9C862: 48 C1 E9 08                shr      rcx, 8
0x14DB9C866: 80 F1 37                   xor      cl, 0x37
0x14DB9C869: 88 84 24 51 01 00 00       mov      byte ptr [rsp + 0x151], al  // ptr@0x151: <no ascii>
0x14DB9C870: 88 8C 24 56 01 00 00       mov      byte ptr [rsp + 0x156], cl  // ptr@0x156: <no ascii>
0x14DB9C877: 48 8B 84 24 50 01 00 00    mov      rax, qword ptr [rsp + 0x150]  // ptr@0x150: <no ascii>
0x14DB9C87F: F3 0F 10 1D 89 FD B2 02    movss    xmm3, dword ptr [0x1506CC610]  // [rip] 0x1506CC610 |0x106CC610
0x14DB9C887: 45 0F 57 E4                xorps    xmm12, xmm12
0x14DB9C88B: F3 44 0F 10 3D 68 FD B2 02  movss    xmm15, dword ptr [0x1506CC5FC]  // [rip] 0x1506CC5FC |0x106CC5FC
0x14DB9C894: F3 0F 5E DE                divss    xmm3, xmm6
0x14DB9C898: 0F 57 F6                   xorps    xmm6, xmm6
0x14DB9C89B: F3 0F 11 98 30 08 00 00    movss    dword ptr [rax + 0x830], xmm3  // ptr@0x830: <no ascii>
0x14DB9C8A3: F3 0F 10 86 E0 02 00 00    movss    xmm0, dword ptr [rsi + 0x2e0]  // ptr@0x2E0: <no ascii>
0x14DB9C8AB: F3 0F 59 86 00 01 00 00    mulss    xmm0, dword ptr [rsi + 0x100]  // ptr@0x100: <no ascii>
0x14DB9C8B3: F3 0F 10 8E 80 01 00 00    movss    xmm1, dword ptr [rsi + 0x180]  // ptr@0x180: <no ascii>
0x14DB9C8BB: F3 0F 10 96 84 01 00 00    movss    xmm2, dword ptr [rsi + 0x184]  // ptr@0x184: <no ascii>
0x14DB9C8C3: F3 0F 58 86 30 01 00 00    addss    xmm0, dword ptr [rsi + 0x130]  // ptr@0x130: <no ascii>
0x14DB9C8CB: F3 0F 5C C8                subss    xmm1, xmm0
0x14DB9C8CF: F3 0F 10 86 14 01 00 00    movss    xmm0, dword ptr [rsi + 0x114]  // ptr@0x114: <no ascii>
0x14DB9C8D7: F3 0F 59 86 E4 02 00 00    mulss    xmm0, dword ptr [rsi + 0x2e4]  // ptr@0x2E4: <no ascii>
0x14DB9C8DF: F3 0F 58 86 34 01 00 00    addss    xmm0, dword ptr [rsi + 0x134]  // ptr@0x134: <no ascii>
0x14DB9C8E7: F3 0F 59 CB                mulss    xmm1, xmm3
0x14DB9C8EB: F3 0F 5C D0                subss    xmm2, xmm0
0x14DB9C8EF: F3 0F 58 C9                addss    xmm1, xmm1
0x14DB9C8F3: F3 0F 59 D3                mulss    xmm2, xmm3
0x14DB9C8F7: F3 41 0F 5C CF             subss    xmm1, xmm15
0x14DB9C8FC: F3 0F 58 D2                addss    xmm2, xmm2
0x14DB9C900: F3 0F 2D C1                cvtss2si eax, xmm1
0x14DB9C904: F3 41 0F 5C D7             subss    xmm2, xmm15
0x14DB9C909: D1 F8                      sar      eax, 1
0x14DB9C90B: F3 0F 2A F0                cvtsi2ss xmm6, eax
0x14DB9C90F: F3 0F 2D C2                cvtss2si eax, xmm2
0x14DB9C913: F3 0F 11 B4 24 50 01 00 00  movss    dword ptr [rsp + 0x150], xmm6  // ptr@0x150: <no ascii>
0x14DB9C91C: D1 F8                      sar      eax, 1
0x14DB9C91E: F3 44 0F 2A E0             cvtsi2ss xmm12, eax
0x14DB9C923: FF 15 47 B9 E7 08          call     qword ptr [0x156A18270]  // [rip] 0x156A18270 |0x16A18270
0x14DB9C929: 84 C0                      test     al, al
0x14DB9C92B: 75 09                      jne      0x14db9c936
0x14DB9C92D: 48 8B 1D 44 C9 E7 08       mov      rbx, qword ptr [0x156A19278]  // [rip] 0x156A19278 |0x16A19278
0x14DB9C934: EB 35                      jmp      0x14db9c96b
0x14DB9C936: 48 8B 0D 3B E9 E7 08       mov      rcx, qword ptr [0x156A1B278]  // [rip] 0x156A1B278 |0x16A1B278
0x14DB9C93D: 0F B6 05 3A E9 E7 08       movzx    eax, byte ptr [0x156A1B27E]  // [rip] 0x156A1B27E |0x16A1B27E
0x14DB9C944: 48 89 8C 24 58 01 00 00    mov      qword ptr [rsp + 0x158], rcx  // ptr@0x158: <no ascii>
0x14DB9C94C: 34 37                      xor      al, 0x37
0x14DB9C94E: 48 C1 E9 08                shr      rcx, 8
0x14DB9C952: 80 F1 37                   xor      cl, 0x37
0x14DB9C955: 88 84 24 59 01 00 00       mov      byte ptr [rsp + 0x159], al  // ptr@0x159: <no ascii>
0x14DB9C95C: 88 8C 24 5E 01 00 00       mov      byte ptr [rsp + 0x15e], cl  // ptr@0x15E: <no ascii>
0x14DB9C963: 48 8B 9C 24 58 01 00 00    mov      rbx, qword ptr [rsp + 0x158]  // ptr@0x158: <no ascii>
0x14DB9C96B: 48 8D 8B 38 08 00 00       lea      rcx, [rbx + 0x838]  // ptr@0x838: <no ascii>
0x14DB9C972: FF 15 F8 D3 CA 08          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14DB9C978: 83 BB 44 08 00 00 00       cmp      dword ptr [rbx + 0x844], 0  // ptr@0x844: <no ascii>
0x14DB9C97F: 44 89 A3 40 08 00 00       mov      dword ptr [rbx + 0x840], r12d  // ptr@0x840: <no ascii>
0x14DB9C986: 74 0E                      je       0x14db9c996
0x14DB9C988: 33 D2                      xor      edx, edx
0x14DB9C98A: 48 8D 8B 38 08 00 00       lea      rcx, [rbx + 0x838]  // ptr@0x838: <no ascii>
0x14DB9C991: E8 6A B4 F2 F2             call     0x140ac7e00
0x14DB9C996: FF 15 D4 B8 E7 08          call     qword ptr [0x156A18270]  // [rip] 0x156A18270 |0x16A18270
0x14DB9C99C: 84 C0                      test     al, al
0x14DB9C99E: 75 09                      jne      0x14db9c9a9
0x14DB9C9A0: 48 8B 1D D1 C8 E7 08       mov      rbx, qword ptr [0x156A19278]  // [rip] 0x156A19278 |0x16A19278
0x14DB9C9A7: EB 35                      jmp      0x14db9c9de
0x14DB9C9A9: 48 8B 0D C8 E8 E7 08       mov      rcx, qword ptr [0x156A1B278]  // [rip] 0x156A1B278 |0x16A1B278
0x14DB9C9B0: 0F B6 05 C7 E8 E7 08       movzx    eax, byte ptr [0x156A1B27E]  // [rip] 0x156A1B27E |0x16A1B27E
0x14DB9C9B7: 48 89 8C 24 58 01 00 00    mov      qword ptr [rsp + 0x158], rcx  // ptr@0x158: <no ascii>
0x14DB9C9BF: 34 37                      xor      al, 0x37
0x14DB9C9C1: 48 C1 E9 08                shr      rcx, 8
0x14DB9C9C5: 80 F1 37                   xor      cl, 0x37
0x14DB9C9C8: 88 84 24 59 01 00 00       mov      byte ptr [rsp + 0x159], al  // ptr@0x159: <no ascii>
0x14DB9C9CF: 88 8C 24 5E 01 00 00       mov      byte ptr [rsp + 0x15e], cl  // ptr@0x15E: <no ascii>
0x14DB9C9D6: 48 8B 9C 24 58 01 00 00    mov      rbx, qword ptr [rsp + 0x158]  // ptr@0x158: <no ascii>
0x14DB9C9DE: 48 63 BB 40 08 00 00       movsxd   rdi, dword ptr [rbx + 0x840]  // ptr@0x840: <no ascii>
0x14DB9C9E5: 8D 47 19                   lea      eax, [rdi + 0x19]  // ptr@0x19: <no ascii>
0x14DB9C9E8: 89 83 40 08 00 00          mov      dword ptr [rbx + 0x840], eax  // ptr@0x840: <no ascii>
0x14DB9C9EE: 3B 83 44 08 00 00          cmp      eax, dword ptr [rbx + 0x844]  // ptr@0x844: <no ascii>
0x14DB9C9F4: 7E 0E                      jle      0x14db9ca04
0x14DB9C9F6: 8B D7                      mov      edx, edi
0x14DB9C9F8: 48 8D 8B 38 08 00 00       lea      rcx, [rbx + 0x838]  // ptr@0x838: <no ascii>
0x14DB9C9FF: E8 CC AE F2 F2             call     0x140ac78d0
0x14DB9CA04: 48 8D 8B 38 08 00 00       lea      rcx, [rbx + 0x838]  // ptr@0x838: <no ascii>
0x14DB9CA0B: FF 15 5F D3 CA 08          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14DB9CA11: 48 8B CF                   mov      rcx, rdi
0x14DB9CA14: 33 D2                      xor      edx, edx
0x14DB9CA16: 48 C1 E1 04                shl      rcx, 4
0x14DB9CA1A: 41 B8 90 01 00 00          mov      r8d, 0x190
0x14DB9CA20: 48 03 C8                   add      rcx, rax
0x14DB9CA23: E8 21 94 6C 02             call     0x150265e49
0x14DB9CA28: 66 44 0F 6F 0D CF A2 B2 02  movdqa   xmm9, xmmword ptr [0x1506C6D00]  // [rip] 0x1506C6D00 |0x106C6D00
0x14DB9CA31: 45 8B FC                   mov      r15d, r12d
0x14DB9CA34: F3 44 0F 10 1D E3 F9 BF 02  movss    xmm11, dword ptr [0x15079C420]  // [rip] 0x15079C420 |0x1079C420
0x14DB9CA3D: 4D 8B EC                   mov      r13, r12
0x14DB9CA40: F3 44 0F 10 2D D7 FB B2 02  movss    xmm13, dword ptr [0x1506CC620]  // [rip] 0x1506CC620 |0x106CC620
0x14DB9CA49: F3 44 0F 10 35 BE EA 13 03  movss    xmm14, dword ptr [0x150CDB510]  // [rip] 0x150CDB510 |0x10CDB510
0x14DB9CA52: 0F 1F 40 00                nop      dword ptr [rax]
0x14DB9CA56: 66 66 0F 1F 84 00 00 00 00 00  nop      word ptr [rax + rax]
0x14DB9CA60: 66 41 0F 6E C7             movd     xmm0, r15d
0x14DB9CA65: 44 0F 28 D6                movaps   xmm10, xmm6
0x14DB9CA69: 0F 5B C0                   cvtdq2ps xmm0, xmm0
0x14DB9CA6C: 41 8B EC                   mov      ebp, r12d
0x14DB9CA6F: 4D 8B F5                   mov      r14, r13
0x14DB9CA72: F3 45 0F 5C D3             subss    xmm10, xmm11
0x14DB9CA77: F3 44 0F 58 D0             addss    xmm10, xmm0
0x14DB9CA7C: 0F 1F 40 00                nop      dword ptr [rax]
0x14DB9CA80: 8B 86 FC 02 00 00          mov      eax, dword ptr [rsi + 0x2fc]  // ptr@0x2FC: <no ascii>
0x14DB9CA86: 0F 57 C0                   xorps    xmm0, xmm0
0x14DB9CA89: 48 8B 9E 18 03 00 00       mov      rbx, qword ptr [rsi + 0x318]  // ptr@0x318: <no ascii>
0x14DB9CA90: 66 0F 6E D5                movd     xmm2, ebp
0x14DB9CA94: 0F 5B D2                   cvtdq2ps xmm2, xmm2
0x14DB9CA97: F3 48 0F 2A C0             cvtsi2ss xmm0, rax
0x14DB9CA9C: F3 41 0F 58 D4             addss    xmm2, xmm12
0x14DB9CAA1: 0F 28 D8                   movaps   xmm3, xmm0
0x14DB9CAA4: F3 41 0F 59 DA             mulss    xmm3, xmm10
0x14DB9CAA9: F3 41 0F 5C D3             subss    xmm2, xmm11
0x14DB9CAAE: F3 0F 58 9E E0 02 00 00    addss    xmm3, dword ptr [rsi + 0x2e0]  // ptr@0x2E0: <no ascii>
0x14DB9CAB6: F3 0F 59 D0                mulss    xmm2, xmm0
0x14DB9CABA: F3 0F 11 5C 24 20          movss    dword ptr [rsp + 0x20], xmm3  // ptr@0x20: <no ascii>
0x14DB9CAC0: F3 0F 58 96 E4 02 00 00    addss    xmm2, dword ptr [rsi + 0x2e4]  // ptr@0x2E4: <no ascii>
0x14DB9CAC8: F3 0F 11 54 24 24          movss    dword ptr [rsp + 0x24], xmm2  // ptr@0x24: <no ascii>
0x14DB9CACE: 83 7B 64 00                cmp      dword ptr [rbx + 0x64], 0  // ptr@0x64: <no ascii>
0x14DB9CAD2: 74 68                      je       0x14db9cb3c
0x14DB9CAD4: 48 8B 0B                   mov      rcx, qword ptr [rbx]
0x14DB9CAD7: 48 85 C9                   test     rcx, rcx
0x14DB9CADA: 75 12                      jne      0x14db9caee
0x14DB9CADC: 48 39 4B 08                cmp      qword ptr [rbx + 8], rcx
0x14DB9CAE0: 75 0C                      jne      0x14db9caee
0x14DB9CAE2: 48 39 4B 10                cmp      qword ptr [rbx + 0x10], rcx  // ptr@0x10: <no ascii>
0x14DB9CAE6: 75 06                      jne      0x14db9caee
0x14DB9CAE8: 48 39 4B 18                cmp      qword ptr [rbx + 0x18], rcx  // ptr@0x18: <no ascii>
0x14DB9CAEC: 74 4E                      je       0x14db9cb3c
0x14DB9CAEE: 41 8B D4                   mov      edx, r12d
0x14DB9CAF1: 48 8B C3                   mov      rax, rbx
0x14DB9CAF4: 48 85 C9                   test     rcx, rcx
0x14DB9CAF7: 74 26                      je       0x14db9cb1f
0x14DB9CAF9: F3 0F 10 41 28             movss    xmm0, dword ptr [rcx + 0x28]  // ptr@0x28: <no ascii>
0x14DB9CAFE: F3 0F 10 49 2C             movss    xmm1, dword ptr [rcx + 0x2c]  // ptr@0x2C: <no ascii>
0x14DB9CB03: F3 0F 5C C3                subss    xmm0, xmm3
0x14DB9CB07: F3 0F 5C CA                subss    xmm1, xmm2
0x14DB9CB0B: 41 0F 54 C1                andps    xmm0, xmm9
0x14DB9CB0F: 0F 2F 41 34                comiss   xmm0, dword ptr [rcx + 0x34]  // ptr@0x34: <no ascii>
0x14DB9CB13: 41 0F 54 C9                andps    xmm1, xmm9
0x14DB9CB17: 77 06                      ja       0x14db9cb1f
0x14DB9CB19: 0F 2F 49 38                comiss   xmm1, dword ptr [rcx + 0x38]  // ptr@0x38: <no ascii>
0x14DB9CB1D: 76 10                      jbe      0x14db9cb2f
0x14DB9CB1F: FF C2                      inc      edx
0x14DB9CB21: 48 83 C0 08                add      rax, 8
0x14DB9CB25: 83 FA 04                   cmp      edx, 4
0x14DB9CB28: 7D 12                      jge      0x14db9cb3c
0x14DB9CB2A: 48 8B 08                   mov      rcx, qword ptr [rax]
0x14DB9CB2D: EB C5                      jmp      0x14db9caf4
0x14DB9CB2F: 48 8D 54 24 20             lea      rdx, [rsp + 0x20]  // ptr@0x20: <no ascii>
0x14DB9CB34: E8 B7 6A FE FF             call     0x14db835f0
0x14DB9CB39: 48 8B D8                   mov      rbx, rax
0x14DB9CB3C: 45 85 FF                   test     r15d, r15d
0x14DB9CB3F: 0F 85 94 00 00 00          jne      0x14db9cbd9
0x14DB9CB45: 85 ED                      test     ebp, ebp
0x14DB9CB47: 0F 85 8C 00 00 00          jne      0x14db9cbd9
0x14DB9CB4D: F3 0F 10 73 28             movss    xmm6, dword ptr [rbx + 0x28]  // ptr@0x28: <no ascii>
0x14DB9CB52: F3 0F 5C 73 34             subss    xmm6, dword ptr [rbx + 0x34]  // ptr@0x34: <no ascii>
0x14DB9CB57: F3 0F 10 7B 2C             movss    xmm7, dword ptr [rbx + 0x2c]  // ptr@0x2C: <no ascii>
0x14DB9CB5C: F3 0F 5C 7B 38             subss    xmm7, dword ptr [rbx + 0x38]  // ptr@0x38: <no ascii>
0x14DB9CB61: F3 0F 59 B6 00 01 00 00    mulss    xmm6, dword ptr [rsi + 0x100]  // ptr@0x100: <no ascii>
0x14DB9CB69: F3 0F 59 BE 14 01 00 00    mulss    xmm7, dword ptr [rsi + 0x114]  // ptr@0x114: <no ascii>
0x14DB9CB71: F3 0F 58 B6 30 01 00 00    addss    xmm6, dword ptr [rsi + 0x130]  // ptr@0x130: <no ascii>
0x14DB9CB79: F3 0F 58 BE 34 01 00 00    addss    xmm7, dword ptr [rsi + 0x134]  // ptr@0x134: <no ascii>
0x14DB9CB81: FF 15 E9 B6 E7 08          call     qword ptr [0x156A18270]  // [rip] 0x156A18270 |0x16A18270
0x14DB9CB87: 84 C0                      test     al, al
0x14DB9CB89: 75 09                      jne      0x14db9cb94
0x14DB9CB8B: 48 8B 05 E6 C6 E7 08       mov      rax, qword ptr [0x156A19278]  // [rip] 0x156A19278 |0x16A19278
0x14DB9CB92: EB 35                      jmp      0x14db9cbc9
0x14DB9CB94: 48 8B 0D DD E6 E7 08       mov      rcx, qword ptr [0x156A1B278]  // [rip] 0x156A1B278 |0x16A1B278
0x14DB9CB9B: 0F B6 05 DC E6 E7 08       movzx    eax, byte ptr [0x156A1B27E]  // [rip] 0x156A1B27E |0x16A1B27E
0x14DB9CBA2: 48 89 8C 24 58 01 00 00    mov      qword ptr [rsp + 0x158], rcx  // ptr@0x158: <no ascii>
0x14DB9CBAA: 34 37                      xor      al, 0x37
0x14DB9CBAC: 48 C1 E9 08                shr      rcx, 8
0x14DB9CBB0: 80 F1 37                   xor      cl, 0x37
0x14DB9CBB3: 88 84 24 59 01 00 00       mov      byte ptr [rsp + 0x159], al  // ptr@0x159: <no ascii>
0x14DB9CBBA: 88 8C 24 5E 01 00 00       mov      byte ptr [rsp + 0x15e], cl  // ptr@0x15E: <no ascii>
0x14DB9CBC1: 48 8B 84 24 58 01 00 00    mov      rax, qword ptr [rsp + 0x158]  // ptr@0x158: <no ascii>
0x14DB9CBC9: F3 0F 11 B0 28 08 00 00    movss    dword ptr [rax + 0x828], xmm6  // ptr@0x828: <no ascii>
0x14DB9CBD1: F3 0F 11 B8 2C 08 00 00    movss    dword ptr [rax + 0x82c], xmm7  // ptr@0x82C: <no ascii>
0x14DB9CBD9: 48 8B BB 80 00 00 00       mov      rdi, qword ptr [rbx + 0x80]  // ptr@0x80: <no ascii>
0x14DB9CBE0: 48 85 FF                   test     rdi, rdi
0x14DB9CBE3: 0F 84 E1 00 00 00          je       0x14db9ccca
0x14DB9CBE9: 8B 43 64                   mov      eax, dword ptr [rbx + 0x64]  // ptr@0x64: <no ascii>
0x14DB9CBEC: 41 0F 28 C5                movaps   xmm0, xmm13
0x14DB9CBF0: F7 D8                      neg      eax
0x14DB9CBF2: 66 0F 6E C8                movd     xmm1, eax
0x14DB9CBF6: 0F 5B C9                   cvtdq2ps xmm1, xmm1
0x14DB9CBF9: E8 ED 92 6C 02             call     0x150265eeb
0x14DB9CBFE: 48 8B 86 E0 00 00 00       mov      rax, qword ptr [rsi + 0xe0]  // ptr@0xE0: <no ascii>
0x14DB9CC05: 0F 28 F0                   movaps   xmm6, xmm0
0x14DB9CC08: F3 41 0F 59 F6             mulss    xmm6, xmm14
0x14DB9CC0D: 66 0F 6E F8                movd     xmm7, eax
0x14DB9CC11: 48 C1 E8 20                shr      rax, 0x20
0x14DB9CC15: 0F 5B FF                   cvtdq2ps xmm7, xmm7
0x14DB9CC18: 66 44 0F 6E C0             movd     xmm8, eax
0x14DB9CC1D: 45 0F 5B C0                cvtdq2ps xmm8, xmm8
0x14DB9CC21: FF 15 49 B6 E7 08          call     qword ptr [0x156A18270]  // [rip] 0x156A18270 |0x16A18270
0x14DB9CC27: 84 C0                      test     al, al
0x14DB9CC29: 75 09                      jne      0x14db9cc34
0x14DB9CC2B: 48 8B 0D 46 C6 E7 08       mov      rcx, qword ptr [0x156A19278]  // [rip] 0x156A19278 |0x16A19278
0x14DB9CC32: EB 35                      jmp      0x14db9cc69
0x14DB9CC34: 48 8B 0D 3D E6 E7 08       mov      rcx, qword ptr [0x156A1B278]  // [rip] 0x156A1B278 |0x16A1B278
0x14DB9CC3B: 0F B6 05 3C E6 E7 08       movzx    eax, byte ptr [0x156A1B27E]  // [rip] 0x156A1B27E |0x16A1B27E
0x14DB9CC42: 48 89 8C 24 58 01 00 00    mov      qword ptr [rsp + 0x158], rcx  // ptr@0x158: <no ascii>
0x14DB9CC4A: 34 37                      xor      al, 0x37
0x14DB9CC4C: 48 C1 E9 08                shr      rcx, 8
0x14DB9CC50: 80 F1 37                   xor      cl, 0x37
0x14DB9CC53: 88 84 24 59 01 00 00       mov      byte ptr [rsp + 0x159], al  // ptr@0x159: <no ascii>
0x14DB9CC5A: 88 8C 24 5E 01 00 00       mov      byte ptr [rsp + 0x15e], cl  // ptr@0x15E: <no ascii>
0x14DB9CC61: 48 8B 8C 24 58 01 00 00    mov      rcx, qword ptr [rsp + 0x158]  // ptr@0x158: <no ascii>
0x14DB9CC69: 48 81 C1 38 08 00 00       add      rcx, 0x838
0x14DB9CC70: FF 15 FA D0 CA 08          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14DB9CC76: F3 0F 10 57 08             movss    xmm2, dword ptr [rdi + 8]
0x14DB9CC7B: 0F 28 CE                   movaps   xmm1, xmm6
0x14DB9CC7E: F3 0F 10 47 0C             movss    xmm0, dword ptr [rdi + 0xc]  // ptr@0xC: <no ascii>
0x14DB9CC83: F3 41 0F 58 D7             addss    xmm2, xmm15
0x14DB9CC88: F3 41 0F 58 C7             addss    xmm0, xmm15
0x14DB9CC8D: F3 0F 5E CF                divss    xmm1, xmm7
0x14DB9CC91: F3 0F 5E D7                divss    xmm2, xmm7
0x14DB9CC95: F3 41 0F 5E C0             divss    xmm0, xmm8
0x14DB9CC9A: 0F C6 D2 E1                shufps   xmm2, xmm2, 0xe1
0x14DB9CC9E: F3 0F 10 D0                movss    xmm2, xmm0
0x14DB9CCA2: 0F C6 D2 C6                shufps   xmm2, xmm2, 0xc6
0x14DB9CCA6: F3 0F 10 D1                movss    xmm2, xmm1
0x14DB9CCAA: F3 41 0F 5E F0             divss    xmm6, xmm8
0x14DB9CCAF: 0F C6 D2 27                shufps   xmm2, xmm2, 0x27
0x14DB9CCB3: F3 0F 10 D6                movss    xmm2, xmm6
0x14DB9CCB7: 0F C6 D2 39                shufps   xmm2, xmm2, 0x39
0x14DB9CCBB: 0F 29 54 24 40             movaps   xmmword ptr [rsp + 0x40], xmm2  // ptr@0x40: <no ascii>
0x14DB9CCC0: 41 0F 11 14 06             movups   xmmword ptr [r14 + rax], xmm2
0x14DB9CCC5: E9 9B 00 00 00             jmp      0x14db9cd65
0x14DB9CCCA: 4C 8B C3                   mov      r8, rbx
0x14DB9CCCD: 48 8D 54 24 40             lea      rdx, [rsp + 0x40]  // ptr@0x40: <no ascii>
0x14DB9CCD2: 48 8B CE                   mov      rcx, rsi
0x14DB9CCD5: E8 C6 53 FF FF             call     0x14db920a0
0x14DB9CCDA: F3 0F 10 44 24 48          movss    xmm0, dword ptr [rsp + 0x48]  // ptr@0x48: <no ascii>
0x14DB9CCE0: F3 0F 10 4C 24 4C          movss    xmm1, dword ptr [rsp + 0x4c]  // ptr@0x4C: <no ascii>
0x14DB9CCE6: F3 0F 11 44 24 30          movss    dword ptr [rsp + 0x30], xmm0  // ptr@0x30: <no ascii>
0x14DB9CCEC: F3 0F 10 44 24 58          movss    xmm0, dword ptr [rsp + 0x58]  // ptr@0x58: <no ascii>
0x14DB9CCF2: F3 0F 11 44 24 38          movss    dword ptr [rsp + 0x38], xmm0  // ptr@0x38: <no ascii>
0x14DB9CCF8: F3 0F 11 4C 24 34          movss    dword ptr [rsp + 0x34], xmm1  // ptr@0x34: <no ascii>
0x14DB9CCFE: C7 44 24 3C 00 00 80 3F    mov      dword ptr [rsp + 0x3c], 0x3f800000  // ptr@0x3C: <no ascii>
0x14DB9CD06: FF 15 64 B5 E7 08          call     qword ptr [0x156A18270]  // [rip] 0x156A18270 |0x16A18270
0x14DB9CD0C: 84 C0                      test     al, al
0x14DB9CD0E: 75 09                      jne      0x14db9cd19
0x14DB9CD10: 48 8B 0D 61 C5 E7 08       mov      rcx, qword ptr [0x156A19278]  // [rip] 0x156A19278 |0x16A19278
0x14DB9CD17: EB 35                      jmp      0x14db9cd4e
0x14DB9CD19: 48 8B 0D 58 E5 E7 08       mov      rcx, qword ptr [0x156A1B278]  // [rip] 0x156A1B278 |0x16A1B278
0x14DB9CD20: 0F B6 05 57 E5 E7 08       movzx    eax, byte ptr [0x156A1B27E]  // [rip] 0x156A1B27E |0x16A1B27E
0x14DB9CD27: 48 89 8C 24 58 01 00 00    mov      qword ptr [rsp + 0x158], rcx  // ptr@0x158: <no ascii>
0x14DB9CD2F: 34 37                      xor      al, 0x37
0x14DB9CD31: 48 C1 E9 08                shr      rcx, 8
0x14DB9CD35: 80 F1 37                   xor      cl, 0x37
0x14DB9CD38: 88 84 24 59 01 00 00       mov      byte ptr [rsp + 0x159], al  // ptr@0x159: <no ascii>
0x14DB9CD3F: 88 8C 24 5E 01 00 00       mov      byte ptr [rsp + 0x15e], cl  // ptr@0x15E: <no ascii>
0x14DB9CD46: 48 8B 8C 24 58 01 00 00    mov      rcx, qword ptr [rsp + 0x158]  // ptr@0x158: <no ascii>
0x14DB9CD4E: 48 81 C1 38 08 00 00       add      rcx, 0x838
0x14DB9CD55: FF 15 15 D0 CA 08          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14DB9CD5B: 0F 28 44 24 30             movaps   xmm0, xmmword ptr [rsp + 0x30]  // ptr@0x30: <no ascii>
0x14DB9CD60: 42 0F 11 04 30             movups   xmmword ptr [rax + r14], xmm0
0x14DB9CD65: FF C5                      inc      ebp
0x14DB9CD67: 49 83 C6 50                add      r14, 0x50
0x14DB9CD6B: 83 FD 05                   cmp      ebp, 5
0x14DB9CD6E: 0F 8C 0C FD FF FF          jl       0x14db9ca80
0x14DB9CD74: F3 0F 10 B4 24 50 01 00 00  movss    xmm6, dword ptr [rsp + 0x150]  // ptr@0x150: <no ascii>
0x14DB9CD7D: 41 FF C7                   inc      r15d
0x14DB9CD80: 49 83 C5 10                add      r13, 0x10
0x14DB9CD84: 41 83 FF 05                cmp      r15d, 5
0x14DB9CD88: 0F 8C D2 FC FF FF          jl       0x14db9ca60
0x14DB9CD8E: 44 0F 28 7C 24 60          movaps   xmm15, xmmword ptr [rsp + 0x60]  // ptr@0x60: <no ascii>
0x14DB9CD94: 44 0F 28 74 24 70          movaps   xmm14, xmmword ptr [rsp + 0x70]  // ptr@0x70: <no ascii>
0x14DB9CD9A: 44 0F 28 AC 24 80 00 00 00  movaps   xmm13, xmmword ptr [rsp + 0x80]  // ptr@0x80: <no ascii>
0x14DB9CDA3: 44 0F 28 A4 24 90 00 00 00  movaps   xmm12, xmmword ptr [rsp + 0x90]  // ptr@0x90: <no ascii>
0x14DB9CDAC: 44 0F 28 9C 24 A0 00 00 00  movaps   xmm11, xmmword ptr [rsp + 0xa0]  // ptr@0xA0: <no ascii>
0x14DB9CDB5: 44 0F 28 94 24 B0 00 00 00  movaps   xmm10, xmmword ptr [rsp + 0xb0]  // ptr@0xB0: <no ascii>
0x14DB9CDBE: 44 0F 28 8C 24 C0 00 00 00  movaps   xmm9, xmmword ptr [rsp + 0xc0]  // ptr@0xC0: <no ascii>
0x14DB9CDC7: 44 0F 28 84 24 D0 00 00 00  movaps   xmm8, xmmword ptr [rsp + 0xd0]  // ptr@0xD0: <no ascii>
0x14DB9CDD0: 0F 28 BC 24 E0 00 00 00    movaps   xmm7, xmmword ptr [rsp + 0xe0]  // ptr@0xE0: <no ascii>
0x14DB9CDD8: 4C 8B BC 24 00 01 00 00    mov      r15, qword ptr [rsp + 0x100]  // ptr@0x100: <no ascii>
0x14DB9CDE0: 4C 8B B4 24 08 01 00 00    mov      r14, qword ptr [rsp + 0x108]  // ptr@0x108: <no ascii>
0x14DB9CDE8: 4C 8B AC 24 10 01 00 00    mov      r13, qword ptr [rsp + 0x110]  // ptr@0x110: <no ascii>
0x14DB9CDF0: 48 8B BC 24 18 01 00 00    mov      rdi, qword ptr [rsp + 0x118]  // ptr@0x118: <no ascii>
0x14DB9CDF8: 48 8B AC 24 40 01 00 00    mov      rbp, qword ptr [rsp + 0x140]  // ptr@0x140: <no ascii>
0x14DB9CE00: FF 15 6A B4 E7 08          call     qword ptr [0x156A18270]  // [rip] 0x156A18270 |0x16A18270
0x14DB9CE06: 84 C0                      test     al, al
0x14DB9CE08: 75 09                      jne      0x14db9ce13
0x14DB9CE0A: 48 8B 0D 67 C4 E7 08       mov      rcx, qword ptr [0x156A19278]  // [rip] 0x156A19278 |0x16A19278
0x14DB9CE11: EB 35                      jmp      0x14db9ce48
0x14DB9CE13: 48 8B 0D 5E E4 E7 08       mov      rcx, qword ptr [0x156A1B278]  // [rip] 0x156A1B278 |0x16A1B278
0x14DB9CE1A: 0F B6 05 5D E4 E7 08       movzx    eax, byte ptr [0x156A1B27E]  // [rip] 0x156A1B27E |0x16A1B27E
0x14DB9CE21: 48 89 8C 24 50 01 00 00    mov      qword ptr [rsp + 0x150], rcx  // ptr@0x150: <no ascii>
0x14DB9CE29: 34 37                      xor      al, 0x37
0x14DB9CE2B: 48 C1 E9 08                shr      rcx, 8
0x14DB9CE2F: 80 F1 37                   xor      cl, 0x37
0x14DB9CE32: 88 84 24 51 01 00 00       mov      byte ptr [rsp + 0x151], al  // ptr@0x151: <no ascii>
0x14DB9CE39: 88 8C 24 56 01 00 00       mov      byte ptr [rsp + 0x156], cl  // ptr@0x156: <no ascii>
0x14DB9CE40: 48 8B 8C 24 50 01 00 00    mov      rcx, qword ptr [rsp + 0x150]  // ptr@0x150: <no ascii>
0x14DB9CE48: 48 81 C1 38 08 00 00       add      rcx, 0x838
0x14DB9CE4F: FF 15 1B CF CA 08          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14DB9CE55: 48 8B 9C 24 48 01 00 00    mov      rbx, qword ptr [rsp + 0x148]  // ptr@0x148: <no ascii>
0x14DB9CE5D: F3 0F 10 86 28 01 00 00    movss    xmm0, dword ptr [rsi + 0x128]  // ptr@0x128: <no ascii>
0x14DB9CE65: F3 0F 11 40 1C             movss    dword ptr [rax + 0x1c], xmm0  // ptr@0x1C: <no ascii>
0x14DB9CE6A: 48 8B 4B 10                mov      rcx, qword ptr [rbx + 0x10]  // ptr@0x10: <no ascii>
0x14DB9CE6E: 48 85 C9                   test     rcx, rcx
0x14DB9CE71: 74 2F                      je       0x14db9cea2
0x14DB9CE73: 48 8B 49 20                mov      rcx, qword ptr [rcx + 0x20]  // ptr@0x20: <no ascii>
0x14DB9CE77: 48 85 C9                   test     rcx, rcx
0x14DB9CE7A: 74 26                      je       0x14db9cea2
0x14DB9CE7C: 48 8B 01                   mov      rax, qword ptr [rcx]
0x14DB9CE7F: FF 90 00 04 00 00          call     qword ptr [rax + 0x400]  // ptr@0x400: <no ascii>
0x14DB9CE85: 48 85 C0                   test     rax, rax
0x14DB9CE88: 74 18                      je       0x14db9cea2
0x14DB9CE8A: 48 8B 43 10                mov      rax, qword ptr [rbx + 0x10]  // ptr@0x10: <no ascii>
0x14DB9CE8E: 48 8B 48 20                mov      rcx, qword ptr [rax + 0x20]  // ptr@0x20: <no ascii>
0x14DB9CE92: 48 8B 01                   mov      rax, qword ptr [rcx]
0x14DB9CE95: FF 90 00 04 00 00          call     qword ptr [rax + 0x400]  // ptr@0x400: <no ascii>
0x14DB9CE9B: 44 8B A0 48 06 00 00       mov      r12d, dword ptr [rax + 0x648]  // ptr@0x648: <no ascii>
0x14DB9CEA2: FF 15 C8 B3 E7 08          call     qword ptr [0x156A18270]  // [rip] 0x156A18270 |0x16A18270
0x14DB9CEA8: 84 C0                      test     al, al
0x14DB9CEAA: 75 09                      jne      0x14db9ceb5
0x14DB9CEAC: 48 8B 0D C5 C3 E7 08       mov      rcx, qword ptr [0x156A19278]  // [rip] 0x156A19278 |0x16A19278
0x14DB9CEB3: EB 35                      jmp      0x14db9ceea
0x14DB9CEB5: 48 8B 0D BC E3 E7 08       mov      rcx, qword ptr [0x156A1B278]  // [rip] 0x156A1B278 |0x16A1B278
0x14DB9CEBC: 0F B6 05 BB E3 E7 08       movzx    eax, byte ptr [0x156A1B27E]  // [rip] 0x156A1B27E |0x16A1B27E
0x14DB9CEC3: 48 89 8C 24 50 01 00 00    mov      qword ptr [rsp + 0x150], rcx  // ptr@0x150: <no ascii>
0x14DB9CECB: 34 37                      xor      al, 0x37
0x14DB9CECD: 48 C1 E9 08                shr      rcx, 8
0x14DB9CED1: 80 F1 37                   xor      cl, 0x37
0x14DB9CED4: 88 84 24 51 01 00 00       mov      byte ptr [rsp + 0x151], al  // ptr@0x151: <no ascii>
0x14DB9CEDB: 88 8C 24 56 01 00 00       mov      byte ptr [rsp + 0x156], cl  // ptr@0x156: <no ascii>
0x14DB9CEE2: 48 8B 8C 24 50 01 00 00    mov      rcx, qword ptr [rsp + 0x150]  // ptr@0x150: <no ascii>
0x14DB9CEEA: 66 41 0F 6E F4             movd     xmm6, r12d
0x14DB9CEEF: 48 81 C1 38 08 00 00       add      rcx, 0x838
0x14DB9CEF6: 0F 5B F6                   cvtdq2ps xmm6, xmm6
0x14DB9CEF9: FF 15 71 CE CA 08          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14DB9CEFF: F3 0F 11 70 2C             movss    dword ptr [rax + 0x2c], xmm6  // ptr@0x2C: <no ascii>
0x14DB9CF04: 0F 28 B4 24 F0 00 00 00    movaps   xmm6, xmmword ptr [rsp + 0xf0]  // ptr@0xF0: <no ascii>
0x14DB9CF0C: 48 81 C4 20 01 00 00       add      rsp, 0x120
0x14DB9CF13: 41 5C                      pop      r12
0x14DB9CF15: 5E                         pop      rsi
0x14DB9CF16: 5B                         pop      rbx
0x14DB9CF17: C3                         ret      
0x14DB9CF18: CC                         int3     
0x14DB9CF19: CC                         int3     
0x14DB9CF1A: CC                         int3     
0x14DB9CF1B: CC                         int3     
0x14DB9CF1C: CC                         int3     
0x14DB9CF1D: CC                         int3     
0x14DB9CF1E: CC                         int3     
0x14DB9CF1F: CC                         int3     
0x14DB9CF20: 48 89 5C 24 18             mov      qword ptr [rsp + 0x18], rbx  // ptr@0x18: <no ascii>
0x14DB9CF25: 55                         push     rbp
0x14DB9CF26: 57                         push     rdi
0x14DB9CF27: 41 54                      push     r12
0x14DB9CF29: 41 55                      push     r13
0x14DB9CF2B: 41 56                      push     r14
0x14DB9CF2D: 48 83 EC 30                sub      rsp, 0x30
0x14DB9CF31: 4C 8D A9 50 04 00 00       lea      r13, [rcx + 0x450]  // ptr@0x450: <no ascii>
0x14DB9CF38: 48 8B E9                   mov      rbp, rcx
0x14DB9CF3B: 49 8B CD                   mov      rcx, r13
0x14DB9CF3E: FF 15 2C CE CA 08          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14DB9CF44: 41 83 7D 0C 00             cmp      dword ptr [r13 + 0xc], 0  // ptr@0xC: <no ascii>
0x14DB9CF49: 41 C7 45 08 00 00 00 00    mov      dword ptr [r13 + 8], 0
0x14DB9CF51: 74 0A                      je       0x14db9cf5d
0x14DB9CF53: 33 D2                      xor      edx, edx
0x14DB9CF55: 49 8B CD                   mov      rcx, r13
0x14DB9CF58: E8 03 99 00 F3             call     0x140ba6860
0x14DB9CF5D: 48 8D 8D 60 04 00 00       lea      rcx, [rbp + 0x460]  // ptr@0x460: <no ascii>
0x14DB9CF64: 33 FF                      xor      edi, edi
0x14DB9CF66: FF 15 04 CE CA 08          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14DB9CF6C: 48 8D 8D 60 04 00 00       lea      rcx, [rbp + 0x460]  // ptr@0x460: <no ascii>


World37

0x14E208A14: 48 8B 15 5D 08 81 08       mov      rdx, qword ptr [0x156A19278]  // [rip] 0x156A19278 |0x16A19278
0x14E208A1B: EB 35                      jmp      0x14e208a52
0x14E208A1D: 48 8B 0D 54 28 81 08       mov      rcx, qword ptr [0x156A1B278]  // [rip] 0x156A1B278 |0x16A1B278
0x14E208A24: 0F B6 05 53 28 81 08       movzx    eax, byte ptr [0x156A1B27E]  // [rip] 0x156A1B27E |0x16A1B27E
0x14E208A2B: 48 89 8C 24 50 01 00 00    mov      qword ptr [rsp + 0x150], rcx  // ptr@0x150: <no ascii>
0x14E208A33: 34 37                      xor      al, 0x37
0x14E208A35: 48 C1 E9 08                shr      rcx, 8
0x14E208A39: 80 F1 37                   xor      cl, 0x37
0x14E208A3C: 88 84 24 51 01 00 00       mov      byte ptr [rsp + 0x151], al  // ptr@0x151: <no ascii>
0x14E208A43: 88 8C 24 56 01 00 00       mov      byte ptr [rsp + 0x156], cl  // ptr@0x156: <no ascii>
0x14E208A4A: 48 8B 94 24 50 01 00 00    mov      rdx, qword ptr [rsp + 0x150]  // ptr@0x150: <no ascii>
0x14E208A52: 48 8D 77 36                lea      rsi, [rdi + 0x36]  // ptr@0x36: <no ascii>
0x14E208A56: F3 0F 10 93 20 0B 00 00    movss    xmm2, dword ptr [rbx + 0xb20]  // ptr@0xB20: <no ascii>
0x14E208A5E: 41 B8 A0 0A 00 00          mov      r8d, 0xaa0
0x14E208A64: 0F B6 8A DC 0A 00 00       movzx    ecx, byte ptr [rdx + 0xadc]  // ptr@0xADC: <no ascii>
0x14E208A6B: 0F 28 DA                   movaps   xmm3, xmm2
0x14E208A6E: 84 C9                      test     cl, cl
0x14E208A70: 0F 28 CA                   movaps   xmm1, xmm2
0x14E208A73: 0F 28 C2                   movaps   xmm0, xmm2
0x14E208A76: B8 CC 0A 00 00             mov      eax, 0xacc
0x14E208A7B: 49 0F 44 C6                cmove    rax, r14
0x14E208A7F: B9 A8 0A 00 00             mov      ecx, 0xaa8
0x14E208A84: F3 0F 59 1C 10             mulss    xmm3, dword ptr [rax + rdx]
0x14E208A89: B8 D0 0A 00 00             mov      eax, 0xad0
0x14E208A8E: 41 0F 44 C0                cmove    eax, r8d
0x14E208A92: 41 B8 A4 0A 00 00          mov      r8d, 0xaa4
0x14E208A98: F3 41 0F 59 DA             mulss    xmm3, xmm10
0x14E208A9D: F3 0F 59 0C 10             mulss    xmm1, dword ptr [rax + rdx]
0x14E208AA2: B8 D4 0A 00 00             mov      eax, 0xad4
0x14E208AA7: 41 0F 44 C0                cmove    eax, r8d
0x14E208AAB: F3 0F 58 1D CD B9 37 06    addss    xmm3, dword ptr [0x154584480]  // [rip] 0x154584480 |0x14584480
0x14E208AB3: F3 41 0F 59 CA             mulss    xmm1, xmm10
0x14E208AB8: F3 0F 59 04 10             mulss    xmm0, dword ptr [rax + rdx]
0x14E208ABD: B8 D8 0A 00 00             mov      eax, 0xad8
0x14E208AC2: 0F 44 C1                   cmove    eax, ecx
0x14E208AC5: 0F C6 DB E1                shufps   xmm3, xmm3, 0xe1
0x14E208AC9: F3 0F 58 0D B3 B9 37 06    addss    xmm1, dword ptr [0x154584484]  // [rip] 0x154584484 |0x14584484
0x14E208AD1: F3 41 0F 59 C2             mulss    xmm0, xmm10
0x14E208AD6: F3 0F 59 14 10             mulss    xmm2, dword ptr [rax + rdx]
0x14E208ADB: F3 0F 58 05 A5 B9 37 06    addss    xmm0, dword ptr [0x154584488]  // [rip] 0x154584488 |0x14584488
0x14E208AE3: F3 0F 10 D9                movss    xmm3, xmm1
0x14E208AE7: 0F C6 DB C6                shufps   xmm3, xmm3, 0xc6
0x14E208AEB: F3 41 0F 59 D2             mulss    xmm2, xmm10
0x14E208AF0: F3 0F 10 D8                movss    xmm3, xmm0
0x14E208AF4: 0F C6 DB 27                shufps   xmm3, xmm3, 0x27
0x14E208AF8: F3 0F 58 15 8C B9 37 06    addss    xmm2, dword ptr [0x15458448C]  // [rip] 0x15458448C |0x1458448C
0x14E208B00: F3 0F 10 DA                movss    xmm3, xmm2
0x14E208B04: 0F C6 DB 39                shufps   xmm3, xmm3, 0x39
0x14E208B08: 0F 11 9C 24 80 00 00 00    movups   xmmword ptr [rsp + 0x80], xmm3  // ptr@0x80: <no ascii>
0x14E208B10: 0F 11 9C 24 80 00 00 00    movups   xmmword ptr [rsp + 0x80], xmm3  // ptr@0x80: <no ascii>
0x14E208B18: F6 87 58 04 00 00 02       test     byte ptr [rdi + 0x458], 2  // ptr@0x458: <no ascii>
0x14E208B1F: 74 24                      je       0x14e208b45
0x14E208B21: 48 8D 15 F8 B9 37 06       lea      rdx, [0x154584520]  // [rip] 0x154584520 |0x14584520
0x14E208B28: 48 8D 8C 24 90 00 00 00    lea      rcx, [rsp + 0x90]  // ptr@0x90: <no ascii>
0x14E208B30: E8 EB 50 60 FE             call     0x14c80dc20
0x14E208B35: 0F 10 84 24 90 00 00 00    movups   xmm0, xmmword ptr [rsp + 0x90]  // ptr@0x90: <no ascii>
0x14E208B3D: 0F 11 84 24 80 00 00 00    movups   xmmword ptr [rsp + 0x80], xmm0  // ptr@0x80: <no ascii>
0x14E208B45: 48 8B 9C 24 70 01 00 00    mov      rbx, qword ptr [rsp + 0x170]  // ptr@0x170: <no ascii>
0x14E208B4D: 48 83 C3 50                add      rbx, 0x50
0x14E208B51: 48 8D 4B 10                lea      rcx, [rbx + 0x10]  // ptr@0x10: <no ascii>
0x14E208B55: FF 15 15 12 64 08          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14E208B5B: 48 85 C0                   test     rax, rax
0x14E208B5E: 48 0F 45 D8                cmovne   rbx, rax
0x14E208B62: F6 06 08                   test     byte ptr [rsi], 8
0x14E208B65: 4E 8B 34 23                mov      r14, qword ptr [rbx + r12]
0x14E208B69: 74 39                      je       0x14e208ba4
0x14E208B6B: 48 8B B5 C8 02 00 00       mov      rsi, qword ptr [rbp + 0x2c8]  // ptr@0x2C8: <no ascii>
0x14E208B72: 48 8D 8F 30 01 00 00       lea      rcx, [rdi + 0x130]  // ptr@0x130: <no ascii>
0x14E208B79: FF 15 F1 11 64 08          call     qword ptr [0x156849D70]  // [rip] 0x156849D70 |0x16849D70
0x14E208B7F: 48 63 8F 38 01 00 00       movsxd   rcx, dword ptr [rdi + 0x138]  // ptr@0x138: <no ascii>
0x14E208B86: 48 8B D0                   mov      rdx, rax
0x14E208B89: 4C 8D 04 C8                lea      r8, [rax + rcx*8]
0x14E208B8D: 49 3B C0                   cmp      rax, r8
0x14E208B90: 74 12                      je       0x14e208ba4
0x14E208B92: 48 39 32                   cmp      qword ptr [rdx], rsi
0x14E208B95: 0F 84 1E 01 00 00          je       0x14e208cb9
0x14E208B9B: 48 83 C2 08                add      rdx, 8
0x14E208B9F: 49 3B D0                   cmp      rdx, r8
0x14E208BA2: 75 EE                      jne      0x14e208b92
0x14E208BA4: 0F B6 4F 36                movzx    ecx, byte ptr [rdi + 0x36]  // ptr@0x36: <no ascii>
0x14E208BA8: C0 E9 05                   shr      cl, 5
0x14E208BAB: F3 0F 10 87 44 04 00 00    movss    xmm0, dword ptr [rdi + 0x444]  // ptr@0x444: <no ascii>
0x14E208BB3: 48 8D 97 18 04 00 00       lea      rdx, [rdi + 0x418]  // ptr@0x418: <no ascii>
0x14E208BBA: F3 0F 10 8F 40 04 00 00    movss    xmm1, dword ptr [rdi + 0x440]  // ptr@0x440: <no ascii>
0x14E208BC2: 41 0F 28 D8                movaps   xmm3, xmm8
0x14E208BC6: 49 8B 06                   mov      rax, qword ptr [r14]
0x14E208BC9: 0F 28 D7                   movaps   xmm2, xmm7
0x14E208BCC: C6 44 24 58 01             mov      byte ptr [rsp + 0x58], 1  // ptr@0x58: <no ascii>
0x14E208BD1: F3 0F 11 44 24 50          movss    dword ptr [rsp + 0x50], xmm0  // ptr@0x50: <no ascii>
0x14E208BD7: F3 0F 10 87 3C 04 00 00    movss    xmm0, dword ptr [rdi + 0x43c]  // ptr@0x43C: <no ascii>
0x14E208BDF: F3 0F 11 4C 24 48          movss    dword ptr [rsp + 0x48], xmm1  // ptr@0x48: <no ascii>
0x14E208BE5: F3 0F 10 8F 38 04 00 00    movss    xmm1, dword ptr [rdi + 0x438]  // ptr@0x438: <no ascii>
0x14E208BED: F3 0F 11 44 24 40          movss    dword ptr [rsp + 0x40], xmm0  // ptr@0x40: <no ascii>
0x14E208BF3: F3 0F 11 4C 24 38          movss    dword ptr [rsp + 0x38], xmm1  // ptr@0x38: <no ascii>
0x14E208BF9: 88 4C 24 30                mov      byte ptr [rsp + 0x30], cl  // ptr@0x30: <no ascii>
0x14E208BFD: 48 8D 8C 24 80 00 00 00    lea      rcx, [rsp + 0x80]  // ptr@0x80: <no ascii>
0x14E208C05: 48 89 4C 24 28             mov      qword ptr [rsp + 0x28], rcx  // ptr@0x28: <no ascii>
0x14E208C0A: 48 8B 4C 24 78             mov      rcx, qword ptr [rsp + 0x78]  // ptr@0x78: <no ascii>
0x14E208C0F: 48 89 4C 24 20             mov      qword ptr [rsp + 0x20], rcx  // ptr@0x20: <no ascii>
0x14E208C14: 49 8B CE                   mov      rcx, r14
0x14E208C17: FF 50 28                   call     qword ptr [rax + 0x28]  // ptr@0x28: <no ascii>
0x14E208C1A: 48 8B 94 24 58 01 00 00    mov      rdx, qword ptr [rsp + 0x158]  // ptr@0x158: <no ascii>
0x14E208C22: 41 BE 9C 0A 00 00          mov      r14d, 0xa9c
0x14E208C28: 44 8B 8C 24 68 01 00 00    mov      r9d, dword ptr [rsp + 0x168]  // ptr@0x168: <no ascii>
0x14E208C30: 41 FF C5                   inc      r13d
0x14E208C33: 41 D1 C7                   rol      r15d, 1
0x14E208C36: 49 83 C4 08                add      r12, 8
0x14E208C3A: 44 3B 6A 08                cmp      r13d, dword ptr [rdx + 8]
0x14E208C3E: 0F 8C 7C FB FF FF          jl       0x14e2087c0
0x14E208C44: 44 0F 28 9C 24 B0 00 00 00  movaps   xmm11, xmmword ptr [rsp + 0xb0]  // ptr@0xB0: <no ascii>
0x14E208C4D: 44 0F 28 94 24 C0 00 00 00  movaps   xmm10, xmmword ptr [rsp + 0xc0]  // ptr@0xC0: <no ascii>
0x14E208C56: 44 0F 28 8C 24 D0 00 00 00  movaps   xmm9, xmmword ptr [rsp + 0xd0]  // ptr@0xD0: <no ascii>
0x14E208C5F: 44 0F 28 84 24 E0 00 00 00  movaps   xmm8, xmmword ptr [rsp + 0xe0]  // ptr@0xE0: <no ascii>
0x14E208C68: 0F 28 BC 24 F0 00 00 00    movaps   xmm7, xmmword ptr [rsp + 0xf0]  // ptr@0xF0: <no ascii>
0x14E208C70: 0F 28 B4 24 00 01 00 00    movaps   xmm6, xmmword ptr [rsp + 0x100]  // ptr@0x100: <no ascii>
0x14E208C78: 4C 8B BC 24 10 01 00 00    mov      r15, qword ptr [rsp + 0x110]  // ptr@0x110: <no ascii>
0x14E208C80: 4C 8B B4 24 18 01 00 00    mov      r14, qword ptr [rsp + 0x118]  // ptr@0x118: <no ascii>
0x14E208C88: 4C 8B A4 24 28 01 00 00    mov      r12, qword ptr [rsp + 0x128]  // ptr@0x128: <no ascii>
0x14E208C90: 48 8B B4 24 30 01 00 00    mov      rsi, qword ptr [rsp + 0x130]  // ptr@0x130: <no ascii>
0x14E208C98: 48 8B AC 24 38 01 00 00    mov      rbp, qword ptr [rsp + 0x138]  // ptr@0x138: <no ascii>
0x14E208CA0: 48 8B 9C 24 60 01 00 00    mov      rbx, qword ptr [rsp + 0x160]  // ptr@0x160: <no ascii>
0x14E208CA8: 4C 8B AC 24 20 01 00 00    mov      r13, qword ptr [rsp + 0x120]  // ptr@0x120: <no ascii>
0x14E208CB0: 48 81 C4 40 01 00 00       add      rsp, 0x140
0x14E208CB7: 5F                         pop      rdi
0x14E208CB8: C3                         ret      
0x14E208CB9: 48 2B D0                   sub      rdx, rax
0x14E208CBC: 48 C1 FA 03                sar      rdx, 3
0x14E208CC0: 83 FA FF                   cmp      edx, -1
0x14E208CC3: 0F 84 DB FE FF FF          je       0x14e208ba4
0x14E208CC9: 0F B6 4F 37                movzx    ecx, byte ptr [rdi + 0x37]  // ptr@0x37: <no ascii>
0x14E208CCD: 80 E1 07                   and      cl, 7
0x14E208CD0: E9 D6 FE FF FF             jmp      0x14e208bab
0x14E208CD5: CC                         int3     

