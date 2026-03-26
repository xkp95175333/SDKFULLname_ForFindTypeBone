---
UworldArray
---

```c

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall sub_141333989()
{
	__int64 v0; // rbx
	__int64 v1; // rcx
	__int64 v2; // rbx
	__int64 v3; // rax
	void* v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rbx
	__int64* v7; // rbp
	_QWORD* v8; // rdi
	__int64 v10; // r12
	__int64 v11; // r13
	int v12; // r14d
	__int64 v13; // r15
	void*** v14; // rbx
	__int64 v15; // rax
	void* v16; // rax
	void* v17; // r8
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // rax
	int v21; // edi
	__int64 i; // rbx
	__int64 v23; // rax
	__int64 v24; // rax
	void(__fastcall * **v25)(_QWORD, __int64); // rcx
	__int64 v26; // rax
	int v27; // edi
	__int64 j; // rbx
	__int64 v29; // rax
	__int64 v30; // rax
	_DWORD* v31; // rbx
	bool v32; // zf
	_DWORD* v33; // rbx
	__int64 v34; // rax
	__int64 v35; // rax
	__int64 v36; // rax
	__int64 v37; // rax
	__int64 v38; // rax
	__int64 result; // rax
	__int64 v40; // rax
	_DWORD v41[4]; // [rsp-158h] [rbp-158h] BYREF
	__int64 v42; // [rsp-148h] [rbp-148h] BYREF
	__int64 v43; // [rsp-140h] [rbp-140h]
	_BYTE v44[16]; // [rsp-138h] [rbp-138h] BYREF
	_BYTE v45[16]; // [rsp-128h] [rbp-128h] BYREF
	_BYTE v46[280]; // [rsp-118h] [rbp-118h] BYREF

	__asm { outsb }
	v14 = off_156A19278 + 5;
	v15 = ((__int64(__fastcall*)(_QWORD, _BYTE*))unk_14CA10670)(*v8, v46);
	if (*(_DWORD*)(v15 + 8))
		v16 = (void*)((__int64(__fastcall*)(__int64))off_156849D70)(v15);
	else
		v16 = &unk_1506C7758;
	((void (*)(_DWORD*, const __int16*, ...))unk_14C76C180)(v41, L"obj list class=%s", v16);
	if (v41[2])
		v17 = (void*)((__int64(__fastcall*)(_DWORD*))off_156849D70)(v41);
	else
		v17 = &unk_1506C7758;
	((void(__fastcall*)(void***, _QWORD, void*, __int64))(*v14)[1])(v14, 0LL, v17, v10);
	((void(__fastcall*)(_DWORD*))off_156849D70)(v41);
	((void(__fastcall*)(_DWORD*, _QWORD))unk_140A81CE0)(v41, 0LL);
	if (((__int64(__fastcall*)(_DWORD*))off_156849D70)(v41))
	{
		v18 = ((__int64(__fastcall*)(_DWORD*))off_156849D70)(v41);
		((void(__fastcall*)(__int64))unk_14C7AA5D0)(v18);
	}
	((void(__fastcall*)(_BYTE*))off_156849D70)(v46);
	((void(__fastcall*)(_BYTE*, _QWORD))unk_140A81CE0)(v46, 0LL);
	if (((__int64(__fastcall*)(_BYTE*))off_156849D70)(v46))
	{
		v19 = ((__int64(__fastcall*)(_BYTE*))off_156849D70)(v46);
		((void(__fastcall*)(__int64))unk_14C7AA5D0)(v19);
	}
	while (1)
	{
		v8 += 2;
		if (v8 == (_QWORD*)_RSI)
			break;
	LABEL_58:
		if (*v8)
		{
			if (*(_DWORD*)(*v8 + 8LL) == 2)
				JUMPOUT(0x141333986LL);
		}
	}
LABEL_12:
	v20 = ((__int64(__fastcall*)(__int64*))off_156849D70)(&v42);
	v21 = v43;
	for (i = v20; v21; --v21)
	{
		((void(__fastcall*)(__int64))off_156849D70)(i);
		((void(__fastcall*)(__int64, _QWORD))unk_140A81CE0)(i, 0LL);
		if (((__int64(__fastcall*)(__int64))off_156849D70)(i))
		{
			v23 = ((__int64(__fastcall*)(__int64))off_156849D70)(i);
			((void(__fastcall*)(__int64))unk_14C7AA5D0)(v23);
		}
		i += 0x10LL;
	}
	((void(__fastcall*)(__int64*, _QWORD))unk_140A8CE60)(&v42, 0LL);
	if (((__int64(__fastcall*)(__int64*))off_156849D70)(&v42))
	{
		v24 = ((__int64(__fastcall*)(__int64*))off_156849D70)(&v42);
		((void(__fastcall*)(__int64))unk_14C7AA5D0)(v24);
	}
	while (1)
	{
		*((_DWORD*)v7 + 6) &= ~*((_DWORD*)v7 + 3);
		((void(__fastcall*)(__int64*))unk_140AAC180)(v7 + 1);
		v0 = *((int*)v7 + 7);
		v1 = *v7;
		if ((_DWORD)v0 == v12 && v7[2] == v13 && v1 == v11)
			break;
		v2 = ((__int64(__fastcall*)(__int64))off_156849D70)(v1) + 0x28 * v0;
		v3 = *(_QWORD*)(v2 + 0x10);
		if (v3 && *(_DWORD*)(v3 + 8) == 5)
		{
			if (*(_DWORD*)(v2 + 8))
				v4 = (void*)((__int64(__fastcall*)(__int64))off_156849D70)(v2);
			else
				v4 = &unk_1506C7758;
			((void (*)(__int64, const __int16*, ...))unk_14C8808C0)(v10, L"Class:%s", v4);
			v5 = *(_QWORD*)(v2 + 0x10);
			v42 = 0LL;
			v43 = 0LL;
			v6 = ((__int64(__fastcall*)(__int64))unk_14CA0FEF0)(v5);
			v8 = (_QWORD*)((__int64(__fastcall*)(__int64))off_156849D70)(v6);
			_RSI = ((__int64(__fastcall*)(__int64))off_156849D70)(v6) + 0x10LL * *(int*)(v6 + 8);
			if (v8 == (_QWORD*)_RSI)
				goto LABEL_12;
			goto LABEL_58;
		}
	}
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 0x20LL))(v10);
		(**(void(__fastcall***)(__int64, __int64))v10)(v10, 1LL);
		v25 = (void(__fastcall***)(_QWORD, __int64))v7[0x13];
		if (v25)
			(**v25)(v25, 1LL);
	}
	v26 = ((__int64(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFF8);
	v27 = *((_DWORD*)v7 + 0xFFFFFFF2);
	for (j = v26; v27; --v27)
	{
		((void(__fastcall*)(__int64))off_156849D70)(j);
		((void(__fastcall*)(__int64, _QWORD))unk_140A81CE0)(j, 0LL);
		if (((__int64(__fastcall*)(__int64))off_156849D70)(j))
		{
			v29 = ((__int64(__fastcall*)(__int64))off_156849D70)(j);
			((void(__fastcall*)(__int64))unk_14C7AA5D0)(v29);
		}
		j += 0x10LL;
	}
	((void(__fastcall*)(__int64*, _QWORD))unk_140A8CE60)(v7 + 0xFFFFFFF8, 0LL);
	if (((__int64(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFF8))
	{
		v30 = ((__int64(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFF8);
		((void(__fastcall*)(__int64))unk_14C7AA5D0)(v30);
	}
	v31 = (_DWORD*)v7[0xFFFFFFFF];
	if (v31)
	{
		v32 = v31[2]-- == 1;
		if (v32)
		{
			(**(void(__fastcall***)(_DWORD*))v31)(v31);
			v32 = v31[3]-- == 1;
			if (v32)
				(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v31 + 8LL))(v31, 1LL);
		}
	}
	v33 = (_DWORD*)v7[0xFFFFFFFD];
	if (v33)
	{
		v32 = v33[2]-- == 1;
		if (v32)
		{
			(**(void(__fastcall***)(_DWORD*))v33)(v33);
			v32 = v33[3]-- == 1;
			if (v32)
				(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v33 + 8LL))(v33, 1LL);
		}
	}
	((void(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFF2);
	((void(__fastcall*)(__int64*, _QWORD))unk_140A81CE0)(v7 + 0xFFFFFFF2, 0LL);
	if (((__int64(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFF2))
	{
		v34 = ((__int64(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFF2);
		((void(__fastcall*)(__int64))unk_14C7AA5D0)(v34);
	}
	((void(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFFA);
	((void(__fastcall*)(__int64*, _QWORD))unk_140A81CE0)(v7 + 0xFFFFFFFA, 0LL);
	if (((__int64(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFFA))
	{
		v35 = ((__int64(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFFA);
		((void(__fastcall*)(__int64))unk_14C7AA5D0)(v35);
	}
	((void(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFF4);
	((void(__fastcall*)(__int64*, _QWORD))unk_140A81CE0)(v7 + 0xFFFFFFF4, 0LL);
	if (((__int64(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFF4))
	{
		v36 = ((__int64(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFF4);
		((void(__fastcall*)(__int64))unk_14C7AA5D0)(v36);
	}
	((void(__fastcall*)(_BYTE*))off_156849D70)(v45);
	((void(__fastcall*)(_BYTE*, _QWORD))unk_140A81CE0)(v45, 0LL);
	if (((__int64(__fastcall*)(_BYTE*))off_156849D70)(v45))
	{
		v37 = ((__int64(__fastcall*)(_BYTE*))off_156849D70)(v45);
		((void(__fastcall*)(__int64))unk_14C7AA5D0)(v37);
	}
	((void(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFF6);
	((void(__fastcall*)(__int64*, _QWORD))unk_140A81CE0)(v7 + 0xFFFFFFF6, 0LL);
	if (((__int64(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFF6))
	{
		v38 = ((__int64(__fastcall*)(__int64*))off_156849D70)(v7 + 0xFFFFFFF6);
		((void(__fastcall*)(__int64))unk_14C7AA5D0)(v38);
	}
	((void(__fastcall*)(_BYTE*))off_156849D70)(v44);
	((void(__fastcall*)(_BYTE*, _QWORD))unk_140A81CE0)(v44, 0LL);
	result = ((__int64(__fastcall*)(_BYTE*))off_156849D70)(v44);
	if (result)
	{
		v40 = ((__int64(__fastcall*)(_BYTE*))off_156849D70)(v44);
		return ((__int64(__fastcall*)(__int64))unk_14C7AA5D0)(v40);
	}
	return result;
}



```
```asm

DeltaForceClient_Win64_Shipping.exe:00000001413338C0 ; ---------------------------------------------------------------------------
DeltaForceClient_Win64_Shipping.exe:00000001413338C0 ; START OF FUNCTION CHUNK FOR sub_141333989
DeltaForceClient_Win64_Shipping.exe:00000001413338C0
DeltaForceClient_Win64_Shipping.exe:00000001413338C0 loc_1413338C0:                          ; CODE XREF: sub_141333989+1C2↓j
DeltaForceClient_Win64_Shipping.exe:00000001413338C0 movsxd  rbx, dword ptr [rbp+1Ch]
DeltaForceClient_Win64_Shipping.exe:00000001413338C4 mov     rcx, [rbp+0]
DeltaForceClient_Win64_Shipping.exe:00000001413338C8 cmp     ebx, r14d
DeltaForceClient_Win64_Shipping.exe:00000001413338CB jnz     short loc_1413338DC
DeltaForceClient_Win64_Shipping.exe:00000001413338CD cmp     [rbp+10h], r15
DeltaForceClient_Win64_Shipping.exe:00000001413338D1 jnz     short loc_1413338DC
DeltaForceClient_Win64_Shipping.exe:00000001413338D3 cmp     rcx, r13
DeltaForceClient_Win64_Shipping.exe:00000001413338D6 jz      loc_141333B50
DeltaForceClient_Win64_Shipping.exe:00000001413338DC
DeltaForceClient_Win64_Shipping.exe:00000001413338DC loc_1413338DC:                          ; CODE XREF: sub_141333989-BE↑j
DeltaForceClient_Win64_Shipping.exe:00000001413338DC                                         ; sub_141333989-B8↑j
DeltaForceClient_Win64_Shipping.exe:00000001413338DC call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:00000001413338E2 lea     rdx, [rbx+rbx*4]
DeltaForceClient_Win64_Shipping.exe:00000001413338E6 lea     rbx, [rax+rdx*8]
DeltaForceClient_Win64_Shipping.exe:00000001413338EA mov     rax, [rax+rdx*8+10h]
DeltaForceClient_Win64_Shipping.exe:00000001413338EF test    rax, rax
DeltaForceClient_Win64_Shipping.exe:00000001413338F2 jz      loc_141333B3A
DeltaForceClient_Win64_Shipping.exe:00000001413338F8 cmp     dword ptr [rax+8], 5
DeltaForceClient_Win64_Shipping.exe:00000001413338FC jnz     loc_141333B3A
DeltaForceClient_Win64_Shipping.exe:0000000141333902 cmp     dword ptr [rbx+8], 0
DeltaForceClient_Win64_Shipping.exe:0000000141333906 jz      short loc_141333913
DeltaForceClient_Win64_Shipping.exe:0000000141333908 mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:000000014133390B call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333911 jmp     short loc_14133391A
DeltaForceClient_Win64_Shipping.exe:0000000141333913 ; ---------------------------------------------------------------------------
DeltaForceClient_Win64_Shipping.exe:0000000141333913
DeltaForceClient_Win64_Shipping.exe:0000000141333913 loc_141333913:                          ; CODE XREF: sub_141333989-83↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333913 lea     rax, unk_1506C7758
DeltaForceClient_Win64_Shipping.exe:000000014133391A
DeltaForceClient_Win64_Shipping.exe:000000014133391A loc_14133391A:                          ; CODE XREF: sub_141333989-78↑j
DeltaForceClient_Win64_Shipping.exe:000000014133391A mov     r8, rax
DeltaForceClient_Win64_Shipping.exe:000000014133391D lea     rdx, aClassS                    ; "Class:%s"
DeltaForceClient_Win64_Shipping.exe:0000000141333924 mov     rcx, r12
DeltaForceClient_Win64_Shipping.exe:0000000141333927 call    near ptr unk_14C8808C0
DeltaForceClient_Win64_Shipping.exe:000000014133392C mov     rcx, [rbx+10h]
DeltaForceClient_Win64_Shipping.exe:0000000141333930 xor     eax, eax
DeltaForceClient_Win64_Shipping.exe:0000000141333932 mov     [rsp+arg_38], rax
DeltaForceClient_Win64_Shipping.exe:0000000141333937 mov     [rsp+arg_40], rax
DeltaForceClient_Win64_Shipping.exe:000000014133393C call    near ptr unk_14CA0FEF0
DeltaForceClient_Win64_Shipping.exe:0000000141333941 mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333944 mov     rbx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333947 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:000000014133394D mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333950 mov     rdi, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333953 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333959 movsxd  rsi, dword ptr [rbx+8]
DeltaForceClient_Win64_Shipping.exe:000000014133395D shl     rsi, 4
DeltaForceClient_Win64_Shipping.exe:0000000141333961 add     rsi, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333964 cmp     rdi, rsi
DeltaForceClient_Win64_Shipping.exe:0000000141333967 jz      loc_141333AB4
DeltaForceClient_Win64_Shipping.exe:000000014133396D nop     dword ptr [rax]
DeltaForceClient_Win64_Shipping.exe:0000000141333970
DeltaForceClient_Win64_Shipping.exe:0000000141333970 loc_141333970:                          ; CODE XREF: sub_141333989+125↓j
DeltaForceClient_Win64_Shipping.exe:0000000141333970 mov     rax, [rdi]
DeltaForceClient_Win64_Shipping.exe:0000000141333973 test    rax, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333976 jz      loc_141333AA7
DeltaForceClient_Win64_Shipping.exe:000000014133397C cmp     dword ptr [rax+8], 2
DeltaForceClient_Win64_Shipping.exe:0000000141333980 jnz     loc_141333AA7
DeltaForceClient_Win64_Shipping.exe:0000000141333980 ; END OF FUNCTION CHUNK FOR sub_141333989
DeltaForceClient_Win64_Shipping.exe:0000000141333980 ; ---------------------------------------------------------------------------
DeltaForceClient_Win64_Shipping.exe:0000000141333986 db 0FFh
DeltaForceClient_Win64_Shipping.exe:0000000141333987 db  15h
DeltaForceClient_Win64_Shipping.exe:0000000141333988 db 0E4h
DeltaForceClient_Win64_Shipping.exe:0000000141333989
DeltaForceClient_Win64_Shipping.exe:0000000141333989 ; =============== S U B R O U T I N E =======================================
DeltaForceClient_Win64_Shipping.exe:0000000141333989
DeltaForceClient_Win64_Shipping.exe:0000000141333989
DeltaForceClient_Win64_Shipping.exe:0000000141333989 ; __int64 __fastcall sub_141333989()
DeltaForceClient_Win64_Shipping.exe:0000000141333989 sub_141333989 proc near
DeltaForceClient_Win64_Shipping.exe:0000000141333989
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_28= byte ptr  30h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_30= dword ptr  38h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_38= qword ptr  40h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_40= qword ptr  48h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_48= byte ptr  50h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_58= byte ptr  60h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_68= byte ptr  70h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_148= qword ptr  150h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_150= qword ptr  158h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_158= qword ptr  160h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_160= qword ptr  168h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_168= qword ptr  170h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_170= qword ptr  178h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 arg_198= qword ptr  1A0h
DeltaForceClient_Win64_Shipping.exe:0000000141333989
DeltaForceClient_Win64_Shipping.exe:0000000141333989 ; FUNCTION CHUNK AT DeltaForceClient_Win64_Shipping.exe:00000001413338C0 SIZE 000000C6 BYTES
DeltaForceClient_Win64_Shipping.exe:0000000141333989
DeltaForceClient_Win64_Shipping.exe:0000000141333989 db      48h
DeltaForceClient_Win64_Shipping.exe:0000000141333989 outsb
DeltaForceClient_Win64_Shipping.exe:000000014133398B adc     eax, offset unk_975C084
DeltaForceClient_Win64_Shipping.exe:0000000141333990 mov     rax, cs:off_156A19278
DeltaForceClient_Win64_Shipping.exe:0000000141333997 jmp     short loc_1413339CA
DeltaForceClient_Win64_Shipping.exe:0000000141333999 ; ---------------------------------------------------------------------------
DeltaForceClient_Win64_Shipping.exe:0000000141333999 mov     rcx, cs:qword_156A1B278
DeltaForceClient_Win64_Shipping.exe:00000001413339A0 movzx   eax, byte ptr cs:qword_156A1B278+6
DeltaForceClient_Win64_Shipping.exe:00000001413339A7 mov     [rbp+90h], rcx
DeltaForceClient_Win64_Shipping.exe:00000001413339AE xor     al, 37h
DeltaForceClient_Win64_Shipping.exe:00000001413339B0 shr     rcx, 8
DeltaForceClient_Win64_Shipping.exe:00000001413339B4 xor     cl, 37h
DeltaForceClient_Win64_Shipping.exe:00000001413339B7 mov     [rbp+91h], al
DeltaForceClient_Win64_Shipping.exe:00000001413339BD mov     [rbp+96h], cl
DeltaForceClient_Win64_Shipping.exe:00000001413339C3 mov     rax, [rbp+90h]
DeltaForceClient_Win64_Shipping.exe:00000001413339CA
DeltaForceClient_Win64_Shipping.exe:00000001413339CA loc_1413339CA:                          ; CODE XREF: sub_141333989+E↑j
DeltaForceClient_Win64_Shipping.exe:00000001413339CA mov     rcx, [rdi]
DeltaForceClient_Win64_Shipping.exe:00000001413339CD lea     rdx, [rsp+arg_68]
DeltaForceClient_Win64_Shipping.exe:00000001413339D2 lea     rbx, [rax+28h]
DeltaForceClient_Win64_Shipping.exe:00000001413339D6 call    near ptr unk_14CA10670
DeltaForceClient_Win64_Shipping.exe:00000001413339DB cmp     dword ptr [rax+8], 0
DeltaForceClient_Win64_Shipping.exe:00000001413339DF jz      short loc_1413339EC
DeltaForceClient_Win64_Shipping.exe:00000001413339E1 mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:00000001413339E4 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:00000001413339EA jmp     short loc_1413339F3
DeltaForceClient_Win64_Shipping.exe:00000001413339EC ; ---------------------------------------------------------------------------
DeltaForceClient_Win64_Shipping.exe:00000001413339EC
DeltaForceClient_Win64_Shipping.exe:00000001413339EC loc_1413339EC:                          ; CODE XREF: sub_141333989+56↑j
DeltaForceClient_Win64_Shipping.exe:00000001413339EC lea     rax, unk_1506C7758
DeltaForceClient_Win64_Shipping.exe:00000001413339F3
DeltaForceClient_Win64_Shipping.exe:00000001413339F3 loc_1413339F3:                          ; CODE XREF: sub_141333989+61↑j
DeltaForceClient_Win64_Shipping.exe:00000001413339F3 mov     r8, rax
DeltaForceClient_Win64_Shipping.exe:00000001413339F6 lea     rdx, aObjListClassS             ; "obj list class=%s"
DeltaForceClient_Win64_Shipping.exe:00000001413339FD lea     rcx, [rsp+30h]
DeltaForceClient_Win64_Shipping.exe:0000000141333A02 call    near ptr unk_14C76C180
DeltaForceClient_Win64_Shipping.exe:0000000141333A07 cmp     dword ptr [rsp+38h], 0
DeltaForceClient_Win64_Shipping.exe:0000000141333A0C jz      short loc_141333A1E
DeltaForceClient_Win64_Shipping.exe:0000000141333A0E lea     rcx, [rsp+30h]
DeltaForceClient_Win64_Shipping.exe:0000000141333A13 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333A19 mov     r8, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333A1C jmp     short loc_141333A25
DeltaForceClient_Win64_Shipping.exe:0000000141333A1E ; ---------------------------------------------------------------------------
DeltaForceClient_Win64_Shipping.exe:0000000141333A1E
DeltaForceClient_Win64_Shipping.exe:0000000141333A1E loc_141333A1E:                          ; CODE XREF: sub_141333989+83↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333A1E lea     r8, unk_1506C7758
DeltaForceClient_Win64_Shipping.exe:0000000141333A25
DeltaForceClient_Win64_Shipping.exe:0000000141333A25 loc_141333A25:                          ; CODE XREF: sub_141333989+93↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333A25 mov     rax, [rbx]
DeltaForceClient_Win64_Shipping.exe:0000000141333A28 mov     r9, r12
DeltaForceClient_Win64_Shipping.exe:0000000141333A2B xor     edx, edx
DeltaForceClient_Win64_Shipping.exe:0000000141333A2D mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333A30 call    qword ptr [rax+8]
DeltaForceClient_Win64_Shipping.exe:0000000141333A33 lea     rcx, [rsp+30h]
DeltaForceClient_Win64_Shipping.exe:0000000141333A38 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333A3E xor     edx, edx
DeltaForceClient_Win64_Shipping.exe:0000000141333A40 lea     rcx, [rsp+30h]
DeltaForceClient_Win64_Shipping.exe:0000000141333A45 call    near ptr unk_140A81CE0
DeltaForceClient_Win64_Shipping.exe:0000000141333A4A lea     rcx, [rsp+30h]
DeltaForceClient_Win64_Shipping.exe:0000000141333A4F call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333A55 test    rax, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333A58 jz      short loc_141333A6D
DeltaForceClient_Win64_Shipping.exe:0000000141333A5A lea     rcx, [rsp+30h]
DeltaForceClient_Win64_Shipping.exe:0000000141333A5F call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333A65 mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333A68 call    near ptr unk_14C7AA5D0
DeltaForceClient_Win64_Shipping.exe:0000000141333A6D
DeltaForceClient_Win64_Shipping.exe:0000000141333A6D loc_141333A6D:                          ; CODE XREF: sub_141333989+CF↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333A6D lea     rcx, [rsp+70h]
DeltaForceClient_Win64_Shipping.exe:0000000141333A72 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333A78 xor     edx, edx
DeltaForceClient_Win64_Shipping.exe:0000000141333A7A lea     rcx, [rsp+70h]
DeltaForceClient_Win64_Shipping.exe:0000000141333A7F call    near ptr unk_140A81CE0
DeltaForceClient_Win64_Shipping.exe:0000000141333A84 lea     rcx, [rsp+70h]
DeltaForceClient_Win64_Shipping.exe:0000000141333A89 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333A8F test    rax, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333A92 jz      short loc_141333AA7
DeltaForceClient_Win64_Shipping.exe:0000000141333A94 lea     rcx, [rsp+70h]
DeltaForceClient_Win64_Shipping.exe:0000000141333A99 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333A9F mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333AA2 call    near ptr unk_14C7AA5D0
DeltaForceClient_Win64_Shipping.exe:0000000141333AA7
DeltaForceClient_Win64_Shipping.exe:0000000141333AA7 loc_141333AA7:                          ; CODE XREF: sub_141333989-13↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333AA7                                         ; sub_141333989-9↑j ...
DeltaForceClient_Win64_Shipping.exe:0000000141333AA7 add     rdi, 10h
DeltaForceClient_Win64_Shipping.exe:0000000141333AAB cmp     rdi, rsi
DeltaForceClient_Win64_Shipping.exe:0000000141333AAE jnz     loc_141333970
DeltaForceClient_Win64_Shipping.exe:0000000141333AB4
DeltaForceClient_Win64_Shipping.exe:0000000141333AB4 loc_141333AB4:                          ; CODE XREF: sub_141333989-22↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333AB4 lea     rcx, [rsp+40h]
DeltaForceClient_Win64_Shipping.exe:0000000141333AB9 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333ABF mov     edi, [rsp+48h]
DeltaForceClient_Win64_Shipping.exe:0000000141333AC3 mov     rbx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333AC6 test    edi, edi
DeltaForceClient_Win64_Shipping.exe:0000000141333AC8 jz      short loc_141333B0B
DeltaForceClient_Win64_Shipping.exe:0000000141333ACA nop     word ptr [rax+rax+00h]
DeltaForceClient_Win64_Shipping.exe:0000000141333AD0
DeltaForceClient_Win64_Shipping.exe:0000000141333AD0 loc_141333AD0:                          ; CODE XREF: sub_141333989+180↓j
DeltaForceClient_Win64_Shipping.exe:0000000141333AD0 mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333AD3 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333AD9 xor     edx, edx
DeltaForceClient_Win64_Shipping.exe:0000000141333ADB mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333ADE call    near ptr unk_140A81CE0
DeltaForceClient_Win64_Shipping.exe:0000000141333AE3 mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333AE6 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333AEC test    rax, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333AEF jz      short loc_141333B02
DeltaForceClient_Win64_Shipping.exe:0000000141333AF1 mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333AF4 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333AFA mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333AFD call    near ptr unk_14C7AA5D0
DeltaForceClient_Win64_Shipping.exe:0000000141333B02
DeltaForceClient_Win64_Shipping.exe:0000000141333B02 loc_141333B02:                          ; CODE XREF: sub_141333989+166↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333B02 add     rbx, 10h
DeltaForceClient_Win64_Shipping.exe:0000000141333B06 sub     edi, 1
DeltaForceClient_Win64_Shipping.exe:0000000141333B09 jnz     short loc_141333AD0
DeltaForceClient_Win64_Shipping.exe:0000000141333B0B
DeltaForceClient_Win64_Shipping.exe:0000000141333B0B loc_141333B0B:                          ; CODE XREF: sub_141333989+13F↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333B0B xor     edx, edx
DeltaForceClient_Win64_Shipping.exe:0000000141333B0D lea     rcx, [rsp+40h]
DeltaForceClient_Win64_Shipping.exe:0000000141333B12 call    near ptr unk_140A8CE60
DeltaForceClient_Win64_Shipping.exe:0000000141333B17 lea     rcx, [rsp+40h]
DeltaForceClient_Win64_Shipping.exe:0000000141333B1C call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333B22 test    rax, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333B25 jz      short loc_141333B3A
DeltaForceClient_Win64_Shipping.exe:0000000141333B27 lea     rcx, [rsp+40h]
DeltaForceClient_Win64_Shipping.exe:0000000141333B2C call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333B32 mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333B35 call    near ptr unk_14C7AA5D0
DeltaForceClient_Win64_Shipping.exe:0000000141333B3A
DeltaForceClient_Win64_Shipping.exe:0000000141333B3A loc_141333B3A:                          ; CODE XREF: sub_141333989-97↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333B3A                                         ; sub_141333989-8D↑j ...
DeltaForceClient_Win64_Shipping.exe:0000000141333B3A mov     eax, [rbp+0Ch]
DeltaForceClient_Win64_Shipping.exe:0000000141333B3D lea     rcx, [rbp+8]
DeltaForceClient_Win64_Shipping.exe:0000000141333B41 not     eax
DeltaForceClient_Win64_Shipping.exe:0000000141333B43 and     [rbp+18h], eax
DeltaForceClient_Win64_Shipping.exe:0000000141333B46 call    near ptr unk_140AAC180
DeltaForceClient_Win64_Shipping.exe:0000000141333B4B jmp     loc_1413338C0
DeltaForceClient_Win64_Shipping.exe:0000000141333B50 ; ---------------------------------------------------------------------------
DeltaForceClient_Win64_Shipping.exe:0000000141333B50
DeltaForceClient_Win64_Shipping.exe:0000000141333B50 loc_141333B50:                          ; CODE XREF: sub_141333989-B3↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333B50 mov     r15, [rsp+arg_148]
DeltaForceClient_Win64_Shipping.exe:0000000141333B58 mov     r13, [rsp+arg_158]
DeltaForceClient_Win64_Shipping.exe:0000000141333B60 test    r12, r12
DeltaForceClient_Win64_Shipping.exe:0000000141333B63 jz      short loc_141333B93
DeltaForceClient_Win64_Shipping.exe:0000000141333B65 mov     rax, [r12]
DeltaForceClient_Win64_Shipping.exe:0000000141333B69 mov     rcx, r12
DeltaForceClient_Win64_Shipping.exe:0000000141333B6C call    qword ptr [rax+20h]
DeltaForceClient_Win64_Shipping.exe:0000000141333B6F mov     rax, [r12]
DeltaForceClient_Win64_Shipping.exe:0000000141333B73 mov     edx, 1
DeltaForceClient_Win64_Shipping.exe:0000000141333B78 mov     rcx, r12
DeltaForceClient_Win64_Shipping.exe:0000000141333B7B call    qword ptr [rax]
DeltaForceClient_Win64_Shipping.exe:0000000141333B7D mov     rcx, [rbp+98h]
DeltaForceClient_Win64_Shipping.exe:0000000141333B84 test    rcx, rcx
DeltaForceClient_Win64_Shipping.exe:0000000141333B87 jz      short loc_141333B93
DeltaForceClient_Win64_Shipping.exe:0000000141333B89 mov     rax, [rcx]
DeltaForceClient_Win64_Shipping.exe:0000000141333B8C mov     edx, 1
DeltaForceClient_Win64_Shipping.exe:0000000141333B91 call    qword ptr [rax]
DeltaForceClient_Win64_Shipping.exe:0000000141333B93
DeltaForceClient_Win64_Shipping.exe:0000000141333B93 loc_141333B93:                          ; CODE XREF: sub_141333989+1DA↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333B93                                         ; sub_141333989+1FE↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333B93 lea     rcx, [rbp-40h]
DeltaForceClient_Win64_Shipping.exe:0000000141333B97 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333B9D mov     edi, [rbp-38h]
DeltaForceClient_Win64_Shipping.exe:0000000141333BA0 mov     rbx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333BA3 test    edi, edi
DeltaForceClient_Win64_Shipping.exe:0000000141333BA5 jz      short loc_141333BE2
DeltaForceClient_Win64_Shipping.exe:0000000141333BA7
DeltaForceClient_Win64_Shipping.exe:0000000141333BA7 loc_141333BA7:                          ; CODE XREF: sub_141333989+257↓j
DeltaForceClient_Win64_Shipping.exe:0000000141333BA7 mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333BAA call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333BB0 xor     edx, edx
DeltaForceClient_Win64_Shipping.exe:0000000141333BB2 mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333BB5 call    near ptr unk_140A81CE0
DeltaForceClient_Win64_Shipping.exe:0000000141333BBA mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333BBD call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333BC3 test    rax, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333BC6 jz      short loc_141333BD9
DeltaForceClient_Win64_Shipping.exe:0000000141333BC8 mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333BCB call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333BD1 mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333BD4 call    near ptr unk_14C7AA5D0
DeltaForceClient_Win64_Shipping.exe:0000000141333BD9
DeltaForceClient_Win64_Shipping.exe:0000000141333BD9 loc_141333BD9:                          ; CODE XREF: sub_141333989+23D↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333BD9 add     rbx, 10h
DeltaForceClient_Win64_Shipping.exe:0000000141333BDD sub     edi, 1
DeltaForceClient_Win64_Shipping.exe:0000000141333BE0 jnz     short loc_141333BA7
DeltaForceClient_Win64_Shipping.exe:0000000141333BE2
DeltaForceClient_Win64_Shipping.exe:0000000141333BE2 loc_141333BE2:                          ; CODE XREF: sub_141333989+21C↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333BE2 xor     edx, edx
DeltaForceClient_Win64_Shipping.exe:0000000141333BE4 lea     rcx, [rbp-40h]
DeltaForceClient_Win64_Shipping.exe:0000000141333BE8 call    near ptr unk_140A8CE60
DeltaForceClient_Win64_Shipping.exe:0000000141333BED lea     rcx, [rbp-40h]
DeltaForceClient_Win64_Shipping.exe:0000000141333BF1 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333BF7 test    rax, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333BFA jz      short loc_141333C0E
DeltaForceClient_Win64_Shipping.exe:0000000141333BFC lea     rcx, [rbp-40h]
DeltaForceClient_Win64_Shipping.exe:0000000141333C00 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333C06 mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333C09 call    near ptr unk_14C7AA5D0
DeltaForceClient_Win64_Shipping.exe:0000000141333C0E
DeltaForceClient_Win64_Shipping.exe:0000000141333C0E loc_141333C0E:                          ; CODE XREF: sub_141333989+271↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333C0E mov     rbx, [rbp-8]
DeltaForceClient_Win64_Shipping.exe:0000000141333C12 test    rbx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333C15 jz      short loc_141333C39
DeltaForceClient_Win64_Shipping.exe:0000000141333C17 sub     dword ptr [rbx+8], 1
DeltaForceClient_Win64_Shipping.exe:0000000141333C1B jnz     short loc_141333C39
DeltaForceClient_Win64_Shipping.exe:0000000141333C1D mov     rax, [rbx]
DeltaForceClient_Win64_Shipping.exe:0000000141333C20 mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333C23 call    qword ptr [rax]
DeltaForceClient_Win64_Shipping.exe:0000000141333C25 sub     dword ptr [rbx+0Ch], 1
DeltaForceClient_Win64_Shipping.exe:0000000141333C29 jnz     short loc_141333C39
DeltaForceClient_Win64_Shipping.exe:0000000141333C2B mov     rax, [rbx]
DeltaForceClient_Win64_Shipping.exe:0000000141333C2E mov     edx, 1
DeltaForceClient_Win64_Shipping.exe:0000000141333C33 mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333C36 call    qword ptr [rax+8]
DeltaForceClient_Win64_Shipping.exe:0000000141333C39
DeltaForceClient_Win64_Shipping.exe:0000000141333C39 loc_141333C39:                          ; CODE XREF: sub_141333989+28C↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333C39                                         ; sub_141333989+292↑j ...
DeltaForceClient_Win64_Shipping.exe:0000000141333C39 mov     rbx, [rbp-18h]
DeltaForceClient_Win64_Shipping.exe:0000000141333C3D test    rbx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333C40 jz      short loc_141333C64
DeltaForceClient_Win64_Shipping.exe:0000000141333C42 sub     dword ptr [rbx+8], 1
DeltaForceClient_Win64_Shipping.exe:0000000141333C46 jnz     short loc_141333C64
DeltaForceClient_Win64_Shipping.exe:0000000141333C48 mov     rax, [rbx]
DeltaForceClient_Win64_Shipping.exe:0000000141333C4B mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333C4E call    qword ptr [rax]
DeltaForceClient_Win64_Shipping.exe:0000000141333C50 sub     dword ptr [rbx+0Ch], 1
DeltaForceClient_Win64_Shipping.exe:0000000141333C54 jnz     short loc_141333C64
DeltaForceClient_Win64_Shipping.exe:0000000141333C56 mov     rax, [rbx]
DeltaForceClient_Win64_Shipping.exe:0000000141333C59 mov     edx, 1
DeltaForceClient_Win64_Shipping.exe:0000000141333C5E mov     rcx, rbx
DeltaForceClient_Win64_Shipping.exe:0000000141333C61 call    qword ptr [rax+8]
DeltaForceClient_Win64_Shipping.exe:0000000141333C64
DeltaForceClient_Win64_Shipping.exe:0000000141333C64 loc_141333C64:                          ; CODE XREF: sub_141333989+2B7↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333C64                                         ; sub_141333989+2BD↑j ...
DeltaForceClient_Win64_Shipping.exe:0000000141333C64 lea     rcx, [rbp-70h]
DeltaForceClient_Win64_Shipping.exe:0000000141333C68 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333C6E xor     edx, edx
DeltaForceClient_Win64_Shipping.exe:0000000141333C70 lea     rcx, [rbp-70h]
DeltaForceClient_Win64_Shipping.exe:0000000141333C74 call    near ptr unk_140A81CE0
DeltaForceClient_Win64_Shipping.exe:0000000141333C79 lea     rcx, [rbp-70h]
DeltaForceClient_Win64_Shipping.exe:0000000141333C7D call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333C83 mov     r14, [rsp+158h]
DeltaForceClient_Win64_Shipping.exe:0000000141333C8B mov     r12, [rsp+168h]
DeltaForceClient_Win64_Shipping.exe:0000000141333C93 mov     rdi, [rsp+170h]
DeltaForceClient_Win64_Shipping.exe:0000000141333C9B mov     rsi, [rsp+178h]
DeltaForceClient_Win64_Shipping.exe:0000000141333CA3 mov     rbx, [rsp+1A0h]
DeltaForceClient_Win64_Shipping.exe:0000000141333CAB test    rax, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333CAE jz      short loc_141333CC2
DeltaForceClient_Win64_Shipping.exe:0000000141333CB0 lea     rcx, [rbp-70h]
DeltaForceClient_Win64_Shipping.exe:0000000141333CB4 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333CBA mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333CBD call    near ptr unk_14C7AA5D0
DeltaForceClient_Win64_Shipping.exe:0000000141333CC2
DeltaForceClient_Win64_Shipping.exe:0000000141333CC2 loc_141333CC2:                          ; CODE XREF: sub_141333989+325↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333CC2 lea     rcx, [rbp-30h]
DeltaForceClient_Win64_Shipping.exe:0000000141333CC6 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333CCC xor     edx, edx
DeltaForceClient_Win64_Shipping.exe:0000000141333CCE lea     rcx, [rbp-30h]
DeltaForceClient_Win64_Shipping.exe:0000000141333CD2 call    near ptr unk_140A81CE0
DeltaForceClient_Win64_Shipping.exe:0000000141333CD7 lea     rcx, [rbp-30h]
DeltaForceClient_Win64_Shipping.exe:0000000141333CDB call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333CE1 test    rax, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333CE4 jz      short loc_141333CF8
DeltaForceClient_Win64_Shipping.exe:0000000141333CE6 lea     rcx, [rbp-30h]
DeltaForceClient_Win64_Shipping.exe:0000000141333CEA call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333CF0 mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333CF3 call    near ptr unk_14C7AA5D0
DeltaForceClient_Win64_Shipping.exe:0000000141333CF8
DeltaForceClient_Win64_Shipping.exe:0000000141333CF8 loc_141333CF8:                          ; CODE XREF: sub_141333989+35B↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333CF8 lea     rcx, [rbp-60h]
DeltaForceClient_Win64_Shipping.exe:0000000141333CFC call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333D02 xor     edx, edx
DeltaForceClient_Win64_Shipping.exe:0000000141333D04 lea     rcx, [rbp-60h]
DeltaForceClient_Win64_Shipping.exe:0000000141333D08 call    near ptr unk_140A81CE0
DeltaForceClient_Win64_Shipping.exe:0000000141333D0D lea     rcx, [rbp-60h]
DeltaForceClient_Win64_Shipping.exe:0000000141333D11 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333D17 test    rax, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333D1A jz      short loc_141333D2E
DeltaForceClient_Win64_Shipping.exe:0000000141333D1C lea     rcx, [rbp-60h]
DeltaForceClient_Win64_Shipping.exe:0000000141333D20 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333D26 mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333D29 call    near ptr unk_14C7AA5D0
DeltaForceClient_Win64_Shipping.exe:0000000141333D2E
DeltaForceClient_Win64_Shipping.exe:0000000141333D2E loc_141333D2E:                          ; CODE XREF: sub_141333989+391↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333D2E lea     rcx, [rsp+60h]
DeltaForceClient_Win64_Shipping.exe:0000000141333D33 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333D39 xor     edx, edx
DeltaForceClient_Win64_Shipping.exe:0000000141333D3B lea     rcx, [rsp+60h]
DeltaForceClient_Win64_Shipping.exe:0000000141333D40 call    near ptr unk_140A81CE0
DeltaForceClient_Win64_Shipping.exe:0000000141333D45 lea     rcx, [rsp+60h]
DeltaForceClient_Win64_Shipping.exe:0000000141333D4A call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333D50 test    rax, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333D53 jz      short loc_141333D68
DeltaForceClient_Win64_Shipping.exe:0000000141333D55 lea     rcx, [rsp+60h]
DeltaForceClient_Win64_Shipping.exe:0000000141333D5A call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333D60 mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333D63 call    near ptr unk_14C7AA5D0
DeltaForceClient_Win64_Shipping.exe:0000000141333D68
DeltaForceClient_Win64_Shipping.exe:0000000141333D68 loc_141333D68:                          ; CODE XREF: sub_141333989+3CA↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333D68 lea     rcx, [rbp-50h]
DeltaForceClient_Win64_Shipping.exe:0000000141333D6C call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333D72 xor     edx, edx
DeltaForceClient_Win64_Shipping.exe:0000000141333D74 lea     rcx, [rbp-50h]
DeltaForceClient_Win64_Shipping.exe:0000000141333D78 call    near ptr unk_140A81CE0
DeltaForceClient_Win64_Shipping.exe:0000000141333D7D lea     rcx, [rbp-50h]
DeltaForceClient_Win64_Shipping.exe:0000000141333D81 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333D87 test    rax, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333D8A jz      short loc_141333D9E
DeltaForceClient_Win64_Shipping.exe:0000000141333D8C lea     rcx, [rbp-50h]
DeltaForceClient_Win64_Shipping.exe:0000000141333D90 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333D96 mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333D99 call    near ptr unk_14C7AA5D0
DeltaForceClient_Win64_Shipping.exe:0000000141333D9E
DeltaForceClient_Win64_Shipping.exe:0000000141333D9E loc_141333D9E:                          ; CODE XREF: sub_141333989+401↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333D9E lea     rcx, [rsp+50h]
DeltaForceClient_Win64_Shipping.exe:0000000141333DA3 call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333DA9 xor     edx, edx
DeltaForceClient_Win64_Shipping.exe:0000000141333DAB lea     rcx, [rsp+50h]
DeltaForceClient_Win64_Shipping.exe:0000000141333DB0 call    near ptr unk_140A81CE0
DeltaForceClient_Win64_Shipping.exe:0000000141333DB5 lea     rcx, [rsp+50h]
DeltaForceClient_Win64_Shipping.exe:0000000141333DBA call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333DC0 test    rax, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333DC3 jz      short loc_141333DD8
DeltaForceClient_Win64_Shipping.exe:0000000141333DC5 lea     rcx, [rsp+50h]
DeltaForceClient_Win64_Shipping.exe:0000000141333DCA call    cs:off_156849D70                ; v8_qjs::String::Utf8Value::operator*(void) ...
DeltaForceClient_Win64_Shipping.exe:0000000141333DD0 mov     rcx, rax
DeltaForceClient_Win64_Shipping.exe:0000000141333DD3 call    near ptr unk_14C7AA5D0
DeltaForceClient_Win64_Shipping.exe:0000000141333DD8
DeltaForceClient_Win64_Shipping.exe:0000000141333DD8 loc_141333DD8:                          ; CODE XREF: sub_141333989+43A↑j
DeltaForceClient_Win64_Shipping.exe:0000000141333DD8 add     rsp, 180h
DeltaForceClient_Win64_Shipping.exe:0000000141333DDF pop     rbp
DeltaForceClient_Win64_Shipping.exe:0000000141333DE0 retn
DeltaForceClient_Win64_Shipping.exe:0000000141333DE0 sub_141333989 endp ; sp-analysis failed
DeltaForceClient_Win64_Shipping.exe:0000000141333DE0
DeltaForceClient_Win64_Shipping.exe:0000000141333DE0 ; ---------------------------------------------------------------------------

```

---
PlayerController
---

```c
BOffset->0x0|Type_UE|||0x0 VaFname >0x4393C320-> ->GFName[PlayerController]|APtr: 0x154C07690 Adr 0xDA1A7910 |TypePoint*->491286272 |On::0
Offset->0x8|Type_UE|||0x1C VaFname >0x11EC1A-> ->GFName[PlayerController]|APtr: 0x1D486F00 Adr 0xDA1A7918 |Count->-569221488|0
Offset->0x48|Type_UE|||0x1C VaFname >0x11EC1A-> ->GFName[PlayerController]|APtr: 0x1D486F00 Adr 0xDA1A7958 |Count->-569221488|0
Offset->0x72|int:262144|||0x1C VaFname >0x2D0073-> ->GFName[mmanderMapSignStruct_Camp1CxCommanderMapSignStruct_Camp0zBigMap]|APtr: 0x40000 Adr 0xDA1A7982 |Count->0|75497472
BOffset->0x72|int:262144|||0x20 VaFname >0x6E0069-> ->GFName[/Script/GPGameplay/Default__GPPathWayPointInterface]|APtr: 0x40000 Adr 0xDA1A7982 |Count->0|75497472
BOffset->0x72|int:262144|||0x28 VaFname >0x6E0072-> ->GFName[/Script/GPGameplay/Default__GPPathWayPointInterface]|APtr: 0x40000 Adr 0xDA1A7982 |Count->0|75497472
Offset->0x72|int:262144|||0x2C VaFname >0x6C0061-> ->GFName[ұ�����߰���������������������ͭ�����ұ�����߰�������������������ɮ����ͭ�����ұ�����߰��������������������q�/Game/Models/Weapons/Parts/Muz/Muz_M-F_HK437_098/Muz_M-F_HK437_098_1P.Muz_M-F_HK437_098_1P�/G]|APtr: 0x40000 Adr 0xDA1A7982 |Count->0|75497472
Offset->0x88|Type_UE|||0x1C VaFname >0x11EC1A-> ->GFName[PlayerController]|APtr: 0xDA1A7910 Adr 0xDA1A7998 |Count->-1601775323|33558806
Offset->0x138|Type_UE|||0x1C VaFname >0x38B0BD-> ->GFName[PC_InputComponent0]|APtr: 0x128824F00 Adr 0xDA1A7A48 |Count->1297519524|1297519524
Offset->0x378|Type_UE|||0x1C VaFname >0x132845-> ->GFName[PlayerState]|APtr: 0x1285195C0 Adr 0xDA1A7C88 |TypePoint*->88953 |On::2459
Offset->0x378|Type_UE|||0x24 VaFname >0x158AA-> ->GFName[AMergedStaticMeshStreamer]|APtr: 0x1285195C0 Adr 0xDA1A7C88 |TypePoint*->88953 |On::2459
Offset->0x3A0|float:99803.500000|||0x1C VaFname >0x126BBD-> ->GFName[DefaultPawn]|APtr: 0x47C2EDC0 Adr 0xDA1A7CB0 |Count->-1|0
Offset->0x3B8|float:0.012028|||0x1C VaFname >0x2F62DD-> ->GFName[TransformComponent0]|APtr: 0x13C451280 Adr 0xDA1A7CC8 |Count->0|0
Offset->0x3B8|float:0.012028|||0x0 VaFname >0x50FDE748-> ->GFName[M]|APtr: 0x13C451280 Adr 0xDA1A7CC8 |Count->0|0
Offset->0x3B8|float:0.012028|||0x0 VaFname >0x50FDE748-> ->GFName[M]|APtr: 0x13C451280 Adr 0xDA1A7CC8 |Count->0|0
Offset->0x3B8|float:0.012028|||0x0 VaFname >0x50FDE748-> ->GFName[M]|APtr: 0x13C451280 Adr 0xDA1A7CC8 |Count->0|0
Offset->0x3B8|float:0.012028|||0x0 VaFname >0x50FDE748-> ->GFName[M]|APtr: 0x13C451280 Adr 0xDA1A7CC8 |Count->0|0
Offset->0x3E8|float:0.013961|||0x1C VaFname >0x13A7CE-> ->GFName[GPLocalPlayer]|APtr: 0x13C64BC80 Adr 0xDA1A7CF8 |TypePoint*->1203957184 |On::1073807360
Offset->0x400|Type_UE|||0x1C VaFname >0x11EF2B-> ->GFName[HUD]|APtr: 0x130560080 Adr 0xDA1A7D10 |Count->670957568|1074200577
Offset->0x488|Type_UE|||0x1C VaFname >0x136F61-> ->GFName[CheatManager]|APtr: 0x294C2300 Adr 0xDA1A7D98 |TypePoint*->493116160 |On::0
Offset->0x490|Type_UE|||0x1C VaFname >0x136F61-> ->GFName[CheatManager]|APtr: 0x1D645B00 Adr 0xDA1A7DA0 |TypePoint*->306965584 |On::0
Offset->0x498|Type_UE|||0x1C VaFname >0x131A7B-> ->GFName[PlayerInput]|APtr: 0x124BEC50 Adr 0xDA1A7DA8 |Count->0|0
Offset->0x590|Type_UE|||0x0 VaFname >0xDCE09-> ->GFName[LeftMouseButton]|APtr: 0x2B932860 Adr 0xDA1A7EA0 |Count->1|4
Offset->0x590|Type_UE|||0x0 VaFname >0xDCE09-> ->GFName[LeftMouseButton]|APtr: 0x2B932860 Adr 0xDA1A7EA0 |Count->1|4
Offset->0x590|Type_UE|||0x0 VaFname >0xDCE09-> ->GFName[LeftMouseButton]|APtr: 0x2B932860 Adr 0xDA1A7EA0 |Count->1|4
Offset->0x590|Type_UE|||0x0 VaFname >0xDCE09-> ->GFName[LeftMouseButton]|APtr: 0x2B932860 Adr 0xDA1A7EA0 |Count->1|4
Offset->0x590|Type_UE|||0x0 VaFname >0xDCE09-> ->GFName[LeftMouseButton]|APtr: 0x2B932860 Adr 0xDA1A7EA0 |Count->1|4
Offset->0x590|Type_UE|||0x0 VaFname >0xDCE09-> ->GFName[LeftMouseButton]|APtr: 0x2B932860 Adr 0xDA1A7EA0 |Count->1|4
BOffset->0x606|int:65535|||0x20 VaFname >0x1012000-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0xFFFF Adr 0xDA1A7F16 |Count->0|0
Offset->0x626|int:524288|||0x1C VaFname >0x730065-> ->GFName[�������Ӳ߲��Ͳ�����������������Ͳ��߰����������Ӳ߲�������Я�����߱���Ͳ��߰����������Ӳ߲������������߷�׮�����߱���Ͳ��߰����������Ӳ߲������������߷���iܯ���������������������������ᱯ�������Ӳ߲��Ͳ�����������������Ͳ��߰����������Ӳ߲�������Я�����߱���Ͳ��߰����������Ӳ߲��������������%ѯ��������������]|APtr: 0x80000 Adr 0xDA1A7F36 |Count->0|0
Offset->0x626|int:524288|||0x20 VaFname >0x280020-> ->GFName[ySetting�y������������������]|APtr: 0x80000 Adr 0xDA1A7F36 |Count->0|0
Offset->0x626|int:524288|||0x10 VaFname >0x6D0061-> ->GFName[���/Game/Models/Weapons/Parts/other/Other_mlok-rail-11_036_8D8B8_80/Other_mlok-rail-11_036_8D8B8_80_1P.Other_mlok-rail-11_036_8D8B8_80_1Pc�/Game/Models/Weapons/Parts/o]|APtr: 0x80000 Adr 0xDA1A7F36 |Count->0|0
Offset->0x626|int:524288|||0x24 VaFname >0x380078-> ->GFName[������������������������������������������ò����β��������������ò����β������������ò����β��������]|APtr: 0x80000 Adr 0xDA1A7F36 |Count->0|0
BOffset->0x626|int:524288|||0x28 VaFname >0x290036-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0x80000 Adr 0xDA1A7F36 |Count->0|0
Offset->0x626|int:524288|||0x2C VaFname >0x53005C-> ->GFName[UI/UIAtlas/System/HeroBadge/BakedSprite/Badge_Kill_01/m/Game/UI/UIAtlas/System/HeroBadge/BakedSprite/Badge_Kill_01.Badge_Kill_01�o������ɯ���������������������������������������������������߰�i/Game/UI/UIAtlas/System/HeroBadge/BakedSprite/Badge_LightMachine_01.Badge_LightMachine_01�o������ɯ���������������]|APtr: 0x80000 Adr 0xDA1A7F36 |Count->0|0
Offset->0x6C0|Type_UE|||0x1C VaFname >0x244595-> ->GFName[EEnvQueryRunMode]|APtr: 0x22B9F540 Adr 0xDA1A7FD0 |TypePoint*->582612384 |On::0
Offset->0x6C8|Type_UE|||0x1C VaFname >0x24460C-> ->GFName[EEnvTestScoreOperator]|APtr: 0x22B9F5A0 Adr 0xDA1A7FD8 |TypePoint*->582612480 |On::0
Offset->0x6D0|Type_UE|||0x1C VaFname >0x244693-> ->GFName[EEnvTestFilterOperator]|APtr: 0x22B9F600 Adr 0xDA1A7FE0 |TypePoint*->582612576 |On::0
Offset->0x6D8|Type_UE|||0x1C VaFname >0x2446F8-> ->GFName[EEnvTestCost]|APtr: 0x22B9F660 Adr 0xDA1A7FE8 |TypePoint*->582612672 |On::0
Offset->0x6E0|Type_UE|||0x1C VaFname >0x244741-> ->GFName[EEnvTestWeight]|APtr: 0x22B9F6C0 Adr 0xDA1A7FF0 |TypePoint*->582612768 |On::0
Offset->0x6E8|Type_UE|||0x1C VaFname >0x2447B8-> ->GFName[EEnvTestScoreEquation]|APtr: 0x22B9F720 Adr 0xDA1A7FF8 |TypePoint*->582612864 |On::0
Offset->0x6F0|Type_UE|||0x1C VaFname >0x24484F-> ->GFName[EEnvTestFilterType]|APtr: 0x22B9F780 Adr 0xDA1A8000 |TypePoint*->582612960 |On::0
Offset->0x6F8|Type_UE|||0x1C VaFname >0x2448C2-> ->GFName[EEnvTestPurpose]|APtr: 0x22B9F7E0 Adr 0xDA1A8008 |TypePoint*->582613056 |On::0
Offset->0x700|Type_UE|||0x1C VaFname >0x24491E-> ->GFName[EEnvQueryHightlightMode]|APtr: 0x22B9F840 Adr 0xDA1A8010 |TypePoint*->582613152 |On::0
BOffset->0x700|Type_UE|||0x0 VaFname >0x545BDD10-> ->GFName[L]|APtr: 0x22B9F840 Adr 0xDA1A8010 |TypePoint*->582613152 |On::0
BOffset->0x700|Type_UE|||0x0 VaFname >0x545BDD10-> ->GFName[L]|APtr: 0x22B9F840 Adr 0xDA1A8010 |TypePoint*->582613152 |On::0
BOffset->0x700|Type_UE|||0x24 VaFname >0x4F0B-> ->GFName[L]|APtr: 0x22B9F840 Adr 0xDA1A8010 |TypePoint*->582613152 |On::0
BOffset->0x700|Type_UE|||0x0 VaFname >0x545BDD10-> ->GFName[L]|APtr: 0x22B9F840 Adr 0xDA1A8010 |TypePoint*->582613152 |On::0
BOffset->0x700|Type_UE|||0x0 VaFname >0x545BDD10-> ->GFName[L]|APtr: 0x22B9F840 Adr 0xDA1A8010 |TypePoint*->582613152 |On::0
Offset->0x708|Type_UE|||0x1C VaFname >0x244997-> ->GFName[ETeamAttitude]|APtr: 0x22B9F8A0 Adr 0xDA1A8018 |TypePoint*->582613248 |On::0
Offset->0x710|Type_UE|||0x1C VaFname >0x2449E9-> ->GFName[EPathFollowingRequestResult]|APtr: 0x22B9F900 Adr 0xDA1A8020 |TypePoint*->582613344 |On::0
Offset->0x718|Type_UE|||0x1C VaFname >0x244A7A-> ->GFName[EPathFollowingAction]|APtr: 0x22B9F960 Adr 0xDA1A8028 |TypePoint*->582613440 |On::0
Offset->0x720|Type_UE|||0x1C VaFname >0x244B0A-> ->GFName[EPathFollowingStatus]|APtr: 0x22B9F9C0 Adr 0xDA1A8030 |TypePoint*->582613536 |On::0
Offset->0x728|Type_UE|||0x1C VaFname >0x244B84-> ->GFName[EPawnActionFailHandling]|APtr: 0x22B9FA20 Adr 0xDA1A8038 |TypePoint*->582613632 |On::0
Offset->0x730|Type_UE|||0x1C VaFname >0x244BF3-> ->GFName[EPawnSubActionTriggeringPolicy]|APtr: 0x22B9FA80 Adr 0xDA1A8040 |TypePoint*->582613728 |On::0
BOffset->0x730|Type_UE|||0x0 VaFname >0x545BDD10-> ->GFName[Q]|APtr: 0x22B9FA80 Adr 0xDA1A8040 |TypePoint*->582613728 |On::0
BOffset->0x730|Type_UE|||0x0 VaFname >0x545BDD10-> ->GFName[Q]|APtr: 0x22B9FA80 Adr 0xDA1A8040 |TypePoint*->582613728 |On::0
BOffset->0x730|Type_UE|||0x24 VaFname >0x4F11-> ->GFName[Q]|APtr: 0x22B9FA80 Adr 0xDA1A8040 |TypePoint*->582613728 |On::0
BOffset->0x730|Type_UE|||0x0 VaFname >0x545BDD10-> ->GFName[Q]|APtr: 0x22B9FA80 Adr 0xDA1A8040 |TypePoint*->582613728 |On::0
BOffset->0x730|Type_UE|||0x0 VaFname >0x545BDD10-> ->GFName[Q]|APtr: 0x22B9FA80 Adr 0xDA1A8040 |TypePoint*->582613728 |On::0
Offset->0x738|Type_UE|||0x1C VaFname >0x244C7D-> ->GFName[EPawnActionMoveMode]|APtr: 0x22B9FAE0 Adr 0xDA1A8048 |TypePoint*->582710832 |On::0
Offset->0x740|Type_UE|||0x1C VaFname >0x115809-> ->GFName[EQSParametrizedQueryExecutionRequest]|APtr: 0x22BB7630 Adr 0xDA1A8050 |TypePoint*->582711040 |On::0
Offset->0x748|Type_UE|||0x1C VaFname >0x113BDF-> ->GFName[BlackboardKeySelector]|APtr: 0x22BB7700 Adr 0xDA1A8058 |TypePoint*->582711248 |On::0
Offset->0x750|Type_UE|||0x1C VaFname >0x11582D-> ->GFName[AIDynamicParam]|APtr: 0x22BB77D0 Adr 0xDA1A8060 |TypePoint*->583425888 |On::0
Offset->0x758|Type_UE|||0x1C VaFname >0x1140FE-> ->GFName[BTCompositeChild]|APtr: 0x22C65F60 Adr 0xDA1A8068 |TypePoint*->583426096 |On::0
Offset->0x760|Type_UE|||0x1C VaFname >0x114119-> ->GFName[BTDecoratorLogic]|APtr: 0x22C66030 Adr 0xDA1A8070 |TypePoint*->584060592 |On::0
Offset->0x768|Type_UE|||0x1C VaFname >0x1130EB-> ->GFName[AIDataProviderValue]|APtr: 0x22D00EB0 Adr 0xDA1A8078 |TypePoint*->584060800 |On::0
Offset->0x770|Type_UE|||0x1C VaFname >0x1130CB-> ->GFName[AIDataProviderTypedValue]|APtr: 0x22D00F80 Adr 0xDA1A8080 |TypePoint*->584061008 |On::0
Offset->0x778|Type_UE|||0x1C VaFname >0x113040-> ->GFName[AIDataProviderBoolValue]|APtr: 0x22D01050 Adr 0xDA1A8088 |TypePoint*->584061216 |On::0
Offset->0x780|Type_UE|||0x1C VaFname >0x113063-> ->GFName[AIDataProviderFloatValue]|APtr: 0x22D01120 Adr 0xDA1A8090 |TypePoint*->584061424 |On::0
Offset->0x788|Type_UE|||0x1C VaFname >0x113085-> ->GFName[AIDataProviderIntValue]|APtr: 0x22D011F0 Adr 0xDA1A8098 |TypePoint*->584061632 |On::0
Offset->0x790|Type_UE|||0x1C VaFname >0x1130A7-> ->GFName[AIDataProviderStructValue]|APtr: 0x22D012C0 Adr 0xDA1A80A0 |TypePoint*->584061840 |On::0
Offset->0x798|Type_UE|||0x1C VaFname >0x1131E9-> ->GFName[ActorPerceptionBlueprintInfo]|APtr: 0x22D01390 Adr 0xDA1A80A8 |TypePoint*->584062048 |On::0
Offset->0x7A0|Type_UE|||0x1C VaFname >0x1132D7-> ->GFName[SenseIDToClassMapping]|APtr: 0x22D01460 Adr 0xDA1A80B0 |TypePoint*->584062256 |On::0
Offset->0x7A8|Type_UE|||0x1C VaFname >0x113341-> ->GFName[AISenseAffiliationFilter]|APtr: 0x22D01530 Adr 0xDA1A80B8 |TypePoint*->584062464 |On::0
Offset->0x7B0|Type_UE|||0x1C VaFname >0x113495-> ->GFName[AIDamageEvent]|APtr: 0x22D01600 Adr 0xDA1A80C0 |TypePoint*->584062672 |On::0
Offset->0x7B8|Type_UE|||0x1C VaFname >0x1134DC-> ->GFName[AINoiseEvent]|APtr: 0x22D016D0 Adr 0xDA1A80C8 |TypePoint*->584062880 |On::0
Offset->0x7C0|Type_UE|||0x1C VaFname >0x113525-> ->GFName[AIPredictionEvent]|APtr: 0x22D017A0 Adr 0xDA1A80D0 |TypePoint*->584063088 |On::0
Offset->0x7C8|Type_UE|||0x1C VaFname >0x113574-> ->GFName[AISightEvent]|APtr: 0x22D01870 Adr 0xDA1A80D8 |TypePoint*->584063296 |On::0
Offset->0x7D0|Type_UE|||0x1C VaFname >0x1135BB-> ->GFName[AITeamStimulusEvent]|APtr: 0x22D01940 Adr 0xDA1A80E0 |TypePoint*->584063504 |On::0
Offset->0x7D0|Type_UE|||0x24 VaFname >0x6A3E-> ->GFName[/Script/GeneBatch/GeneBatchResultDrawSectionIndex]|APtr: 0x22D01940 Adr 0xDA1A80E0 |TypePoint*->584063504 |On::0
Offset->0x7D8|Type_UE|||0x1C VaFname >0x113602-> ->GFName[AITouchEvent]|APtr: 0x22D01A10 Adr 0xDA1A80E8 |TypePoint*->584063712 |On::0
Offset->0x7E0|Type_UE|||0x1C VaFname >0x113AB3-> ->GFName[IntervalCountdown]|APtr: 0x22D01AE0 Adr 0xDA1A80F0 |TypePoint*->584063920 |On::0
Offset->0x7E8|Type_UE|||0x1C VaFname >0x113ACD-> ->GFName[AIMoveRequest]|APtr: 0x22D01BB0 Adr 0xDA1A80F8 |Count->1|4
BOffset->0x7F2|int:262144|||0x20 VaFname >0x6E0069-> ->GFName[/Script/GPGameplay/Default__GPPathWayPointInterface]|APtr: 0x40000 Adr 0xDA1A8102 |Count->0|0
Offset->0x7F2|int:262144|||0x10 VaFname >0x680074-> ->GFName[������������߳Ю�����ҭ�����ǵ������߰������������߳���ܯ������������������������������ҭ�����ǵ������߰�����������������ҭ�����ǵ������߰��������������ɮ�����ҭ�����ǵ������߰����������������ۯ������������������������������ҭ�����ǵ������߰�������������������ҭ�����ǵ������߰��������������߱Ю�����ҭ�]|APtr: 0x40000 Adr 0xDA1A8102 |Count->0|0
BOffset->0x7F2|int:262144|||0x24 VaFname >0x650074-> ->GFName[/Script/GPGameplay/Default__GPPathWayPointInterface]|APtr: 0x40000 Adr 0xDA1A8102 |Count->0|0
BOffset->0x7F2|int:262144|||0x28 VaFname >0x6E0072-> ->GFName[/Script/GPGameplay/Default__GPPathWayPointInterface]|APtr: 0x40000 Adr 0xDA1A8102 |Count->0|0
Offset->0x7F2|int:262144|||0x2C VaFname >0x6C0061-> ->GFName[ұ�����߰���������������������ͭ�����ұ�����߰�������������������ɮ����ͭ�����ұ�����߰��������������������q�/Game/Models/Weapons/Parts/Muz/Muz_M-F_HK437_098/Muz_M-F_HK437_098_1P.Muz_M-F_HK437_098_1P�/G]|APtr: 0x40000 Adr 0xDA1A8102 |Count->0|0
BOffset->0x92C|Type_UE|||0x0 VaFname >0x1C55D00-> ->GFName[UnderlyingType]|APtr: 0x1A71AF Adr 0xDA1A823C |Count->-1|130
BOffset->0x92C|Type_UE|||0x0 VaFname >0x1C55D00-> ->GFName[UnderlyingType]|APtr: 0x1A71AF Adr 0xDA1A823C |Count->-1|130
BOffset->0x92C|Type_UE|||0x0 VaFname >0x1C55D00-> ->GFName[UnderlyingType]|APtr: 0x1A71AF Adr 0xDA1A823C |Count->-1|130
Offset->0x92C|Type_UE|||0x28 VaFname >0x3600-> ->GFName[LuaMCollection]|APtr: 0x1A71AF Adr 0xDA1A823C |Count->-1|130
BOffset->0x92C|Type_UE|||0x0 VaFname >0x1C55D00-> ->GFName[UnderlyingType]|APtr: 0x1A71AF Adr 0xDA1A823C |Count->-1|130
BOffset->0xA10|int:158|||0x0 VaFname >0xF9500000-> ->GFName[mmon/PopWindows/WBP_CommonVideoComponent.WBP_CommonVideoComponen]|APtr: 0xE0000009E Adr 0xDA1A8320 |TypePoint*->198 |On::78
Offset->0x18FA|int:262144|||0x1C VaFname >0x2D0073-> ->GFName[mmanderMapSignStruct_Camp1CxCommanderMapSignStruct_Camp0zBigMap]|APtr: 0x40000 Adr 0xDA1A920A |Count->0|0
BOffset->0x18FA|int:262144|||0x20 VaFname >0x6E0069-> ->GFName[/Script/GPGameplay/Default__GPPathWayPointInterface]|APtr: 0x40000 Adr 0xDA1A920A |Count->0|0
Offset->0x18FA|int:262144|||0x10 VaFname >0x680074-> ->GFName[������������߳Ю�����ҭ�����ǵ������߰������������߳���ܯ������������������������������ҭ�����ǵ������߰�����������������ҭ�����ǵ������߰��������������ɮ�����ҭ�����ǵ������߰����������������ۯ������������������������������ҭ�����ǵ������߰�������������������ҭ�����ǵ������߰��������������߱Ю�����ҭ�]|APtr: 0x40000 Adr 0xDA1A920A |Count->0|0
BOffset->0x18FA|int:262144|||0x24 VaFname >0x650074-> ->GFName[/Script/GPGameplay/Default__GPPathWayPointInterface]|APtr: 0x40000 Adr 0xDA1A920A |Count->0|0
BOffset->0x18FA|int:262144|||0x28 VaFname >0x6E0072-> ->GFName[/Script/GPGameplay/Default__GPPathWayPointInterface]|APtr: 0x40000 Adr 0xDA1A920A |Count->0|0
Offset->0x18FA|int:262144|||0x2C VaFname >0x6C0061-> ->GFName[ұ�����߰���������������������ͭ�����ұ�����߰�������������������ɮ����ͭ�����ұ�����߰��������������������q�/Game/Models/Weapons/Parts/Muz/Muz_M-F_HK437_098/Muz_M-F_HK437_098_1P.Muz_M-F_HK437_098_1P�/G]|APtr: 0x40000 Adr 0xDA1A920A |Count->0|0
BOffset->0x19B6|Type_UE|||0x0 VaFname >0x100-> ->GFName[/Script/DFMGameplay/Default__TacticalPoint]|APtr: 0xD4990000 Adr 0xDA1A92C6 |TypePoint*->1512046592 |On::18347
BOffset->0x19DE|int:720896|||0x20 VaFname >0xFD580-> ->GFName[/Script/DFMGameplay/Default__TacticalPoint]|APtr: 0xB0000 Adr 0xDA1A92EE |TypePoint*->1338834944 |On::5
BOffset->0x19DE|int:720896|||0x28 VaFname >0xFE000-> ->GFName[/Script/DFMGameplay/Default__TacticalPoint]|APtr: 0xB0000 Adr 0xDA1A92EE |TypePoint*->1338834944 |On::5
Offset->0x1BF0|int:140000|||0x24 VaFname >0x100000-> ->GFName[/Script/Engine/ExponentialHeightFogData]|APtr: 0x222E0 Adr 0xDA1A9500 |TypePoint*->3 |On::0
Offset->0x1FC8|float:0.001576|||0x0 VaFname >0x571788-> ->GFName[[Mask0]TintColor]|APtr: 0x13ACE9F50 Adr 0xDA1A98D8 |Count->1|2
Offset->0x1FC8|float:0.001576|||0x20 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACE9F50 Adr 0xDA1A98D8 |Count->1|2
Offset->0x1FC8|float:0.001576|||0x10 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACE9F50 Adr 0xDA1A98D8 |Count->1|2
Offset->0x1FC8|float:0.001576|||0x0 VaFname >0x571788-> ->GFName[[Mask0]TintColor]|APtr: 0x13ACE9F50 Adr 0xDA1A98D8 |Count->1|2
Offset->0x1FC8|float:0.001576|||0x0 VaFname >0x571788-> ->GFName[[Mask0]TintColor]|APtr: 0x13ACE9F50 Adr 0xDA1A98D8 |Count->1|2
Offset->0x1FC8|float:0.001576|||0x0 VaFname >0x571788-> ->GFName[[Mask0]TintColor]|APtr: 0x13ACE9F50 Adr 0xDA1A98D8 |Count->1|2
Offset->0x2038|float:0.001576|||0x0 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACE9F60 Adr 0xDA1A9948 |Count->1|2
Offset->0x2038|float:0.001576|||0x20 VaFname >0x571776-> ->GFName[[Mask0]Metallic]|APtr: 0x13ACE9F60 Adr 0xDA1A9948 |Count->1|2
Offset->0x2038|float:0.001576|||0x10 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACE9F60 Adr 0xDA1A9948 |Count->1|2
Offset->0x2038|float:0.001576|||0x0 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACE9F60 Adr 0xDA1A9948 |Count->1|2
Offset->0x2038|float:0.001576|||0x0 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACE9F60 Adr 0xDA1A9948 |Count->1|2
Offset->0x2038|float:0.001576|||0x0 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACE9F60 Adr 0xDA1A9948 |Count->1|2
Offset->0x20A8|float:0.001573|||0x0 VaFname >0x5717BE-> ->GFName[[Mask2]TintColor]|APtr: 0x13ACE3CF0 Adr 0xDA1A99B8 |Count->1|2
Offset->0x20A8|float:0.001573|||0x20 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACE3CF0 Adr 0xDA1A99B8 |Count->1|2
Offset->0x20A8|float:0.001573|||0x10 VaFname >0x57177F-> ->GFName[[Mask0]Roughness]|APtr: 0x13ACE3CF0 Adr 0xDA1A99B8 |Count->1|2
Offset->0x20A8|float:0.001573|||0x0 VaFname >0x5717BE-> ->GFName[[Mask2]TintColor]|APtr: 0x13ACE3CF0 Adr 0xDA1A99B8 |Count->1|2
Offset->0x20A8|float:0.001573|||0x0 VaFname >0x5717BE-> ->GFName[[Mask2]TintColor]|APtr: 0x13ACE3CF0 Adr 0xDA1A99B8 |Count->1|2
Offset->0x20A8|float:0.001573|||0x0 VaFname >0x5717BE-> ->GFName[[Mask2]TintColor]|APtr: 0x13ACE3CF0 Adr 0xDA1A99B8 |Count->1|2
Offset->0x2118|float:0.001576|||0x0 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACE9F70 Adr 0xDA1A9A28 |Count->1|2
Offset->0x2118|float:0.001576|||0x20 VaFname >0x5717AC-> ->GFName[[Mask2]Metallic]|APtr: 0x13ACE9F70 Adr 0xDA1A9A28 |Count->1|2
Offset->0x2118|float:0.001576|||0x10 VaFname >0x571776-> ->GFName[[Mask0]Metallic]|APtr: 0x13ACE9F70 Adr 0xDA1A9A28 |Count->1|2
Offset->0x2118|float:0.001576|||0x0 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACE9F70 Adr 0xDA1A9A28 |Count->1|2
Offset->0x2118|float:0.001576|||0x0 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACE9F70 Adr 0xDA1A9A28 |Count->1|2
Offset->0x2118|float:0.001576|||0x0 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACE9F70 Adr 0xDA1A9A28 |Count->1|2
Offset->0x2188|float:0.001576|||0x0 VaFname >0x571776-> ->GFName[[Mask0]Metallic]|APtr: 0x13ACE9F80 Adr 0xDA1A9A98 |Count->1|2
Offset->0x2188|float:0.001576|||0x20 VaFname >0x57179A-> ->GFName[[Mask1]Roughness]|APtr: 0x13ACE9F80 Adr 0xDA1A9A98 |Count->1|2
Offset->0x2188|float:0.001576|||0x10 VaFname >0x5717AC-> ->GFName[[Mask2]Metallic]|APtr: 0x13ACE9F80 Adr 0xDA1A9A98 |Count->1|2
Offset->0x2188|float:0.001576|||0x0 VaFname >0x571776-> ->GFName[[Mask0]Metallic]|APtr: 0x13ACE9F80 Adr 0xDA1A9A98 |Count->1|2
Offset->0x2188|float:0.001576|||0x0 VaFname >0x571776-> ->GFName[[Mask0]Metallic]|APtr: 0x13ACE9F80 Adr 0xDA1A9A98 |Count->1|2
Offset->0x2188|float:0.001576|||0x0 VaFname >0x571776-> ->GFName[[Mask0]Metallic]|APtr: 0x13ACE9F80 Adr 0xDA1A9A98 |Count->1|2
Offset->0x21F8|float:0.001577|||0x0 VaFname >0x571791-> ->GFName[[Mask1]Metallic]|APtr: 0x13ACEA660 Adr 0xDA1A9B08 |Count->1|2
Offset->0x21F8|float:0.001577|||0x20 VaFname >0x5717B5-> ->GFName[[Mask2]Roughness]|APtr: 0x13ACEA660 Adr 0xDA1A9B08 |Count->1|2
Offset->0x21F8|float:0.001577|||0x10 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA660 Adr 0xDA1A9B08 |Count->1|2
Offset->0x21F8|float:0.001577|||0x0 VaFname >0x571791-> ->GFName[[Mask1]Metallic]|APtr: 0x13ACEA660 Adr 0xDA1A9B08 |Count->1|2
Offset->0x21F8|float:0.001577|||0x0 VaFname >0x571791-> ->GFName[[Mask1]Metallic]|APtr: 0x13ACEA660 Adr 0xDA1A9B08 |Count->1|2
Offset->0x21F8|float:0.001577|||0x0 VaFname >0x571791-> ->GFName[[Mask1]Metallic]|APtr: 0x13ACEA660 Adr 0xDA1A9B08 |Count->1|2
Offset->0x2268|float:0.001576|||0x0 VaFname >0x5717AC-> ->GFName[[Mask2]Metallic]|APtr: 0x13ACE9F90 Adr 0xDA1A9B78 |Count->1|2
Offset->0x2268|float:0.001576|||0x20 VaFname >0x5717B5-> ->GFName[[Mask2]Roughness]|APtr: 0x13ACE9F90 Adr 0xDA1A9B78 |Count->1|2
Offset->0x2268|float:0.001576|||0x10 VaFname >0x57179A-> ->GFName[[Mask1]Roughness]|APtr: 0x13ACE9F90 Adr 0xDA1A9B78 |Count->1|2
Offset->0x2268|float:0.001576|||0x0 VaFname >0x5717AC-> ->GFName[[Mask2]Metallic]|APtr: 0x13ACE9F90 Adr 0xDA1A9B78 |Count->1|2
Offset->0x2268|float:0.001576|||0x0 VaFname >0x5717AC-> ->GFName[[Mask2]Metallic]|APtr: 0x13ACE9F90 Adr 0xDA1A9B78 |Count->1|2
Offset->0x2268|float:0.001576|||0x0 VaFname >0x5717AC-> ->GFName[[Mask2]Metallic]|APtr: 0x13ACE9F90 Adr 0xDA1A9B78 |Count->1|2
Offset->0x22D8|float:0.001576|||0x0 VaFname >0x5717C7-> ->GFName[[Mask3]Metallic]|APtr: 0x13ACE9D30 Adr 0xDA1A9BE8 |Count->1|2
Offset->0x22D8|float:0.001576|||0x20 VaFname >0x571791-> ->GFName[[Mask1]Metallic]|APtr: 0x13ACE9D30 Adr 0xDA1A9BE8 |Count->1|2
Offset->0x22D8|float:0.001576|||0x10 VaFname >0x571791-> ->GFName[[Mask1]Metallic]|APtr: 0x13ACE9D30 Adr 0xDA1A9BE8 |Count->1|2
Offset->0x22D8|float:0.001576|||0x0 VaFname >0x5717C7-> ->GFName[[Mask3]Metallic]|APtr: 0x13ACE9D30 Adr 0xDA1A9BE8 |Count->1|2
Offset->0x22D8|float:0.001576|||0x0 VaFname >0x5717C7-> ->GFName[[Mask3]Metallic]|APtr: 0x13ACE9D30 Adr 0xDA1A9BE8 |Count->1|2
Offset->0x22D8|float:0.001576|||0x0 VaFname >0x5717C7-> ->GFName[[Mask3]Metallic]|APtr: 0x13ACE9D30 Adr 0xDA1A9BE8 |Count->1|2
Offset->0x2348|float:0.001573|||0x0 VaFname >0x57177F-> ->GFName[[Mask0]Roughness]|APtr: 0x13ACE3A30 Adr 0xDA1A9C58 |Count->1|2
Offset->0x2348|float:0.001573|||0x20 VaFname >0x24DF73-> ->GFName[EmissiveColor]|APtr: 0x13ACE3A30 Adr 0xDA1A9C58 |Count->1|2
Offset->0x2348|float:0.001573|||0x10 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACE3A30 Adr 0xDA1A9C58 |Count->1|2
Offset->0x2348|float:0.001573|||0x0 VaFname >0x57177F-> ->GFName[[Mask0]Roughness]|APtr: 0x13ACE3A30 Adr 0xDA1A9C58 |Count->1|2
Offset->0x2348|float:0.001573|||0x0 VaFname >0x57177F-> ->GFName[[Mask0]Roughness]|APtr: 0x13ACE3A30 Adr 0xDA1A9C58 |Count->1|2
Offset->0x2348|float:0.001573|||0x0 VaFname >0x57177F-> ->GFName[[Mask0]Roughness]|APtr: 0x13ACE3A30 Adr 0xDA1A9C58 |Count->1|2
Offset->0x23B8|float:0.001576|||0x0 VaFname >0x57179A-> ->GFName[[Mask1]Roughness]|APtr: 0x13ACE9D20 Adr 0xDA1A9CC8 |Count->1|2
Offset->0x23B8|float:0.001576|||0x20 VaFname >0x571791-> ->GFName[[Mask1]Metallic]|APtr: 0x13ACE9D20 Adr 0xDA1A9CC8 |Count->1|2
Offset->0x23B8|float:0.001576|||0x10 VaFname >0x5717C7-> ->GFName[[Mask3]Metallic]|APtr: 0x13ACE9D20 Adr 0xDA1A9CC8 |Count->1|2
Offset->0x23B8|float:0.001576|||0x0 VaFname >0x57179A-> ->GFName[[Mask1]Roughness]|APtr: 0x13ACE9D20 Adr 0xDA1A9CC8 |Count->1|2
Offset->0x23B8|float:0.001576|||0x0 VaFname >0x57179A-> ->GFName[[Mask1]Roughness]|APtr: 0x13ACE9D20 Adr 0xDA1A9CC8 |Count->1|2
Offset->0x23B8|float:0.001576|||0x0 VaFname >0x57179A-> ->GFName[[Mask1]Roughness]|APtr: 0x13ACE9D20 Adr 0xDA1A9CC8 |Count->1|2
Offset->0x2428|float:0.001573|||0x0 VaFname >0x5717B5-> ->GFName[[Mask2]Roughness]|APtr: 0x13ACE2370 Adr 0xDA1A9D38 |Count->1|2
Offset->0x2428|float:0.001573|||0x20 VaFname >0x571791-> ->GFName[[Mask1]Metallic]|APtr: 0x13ACE2370 Adr 0xDA1A9D38 |Count->1|2
Offset->0x2428|float:0.001573|||0x10 VaFname >0x571788-> ->GFName[[Mask0]TintColor]|APtr: 0x13ACE2370 Adr 0xDA1A9D38 |Count->1|2
Offset->0x2428|float:0.001573|||0x0 VaFname >0x5717B5-> ->GFName[[Mask2]Roughness]|APtr: 0x13ACE2370 Adr 0xDA1A9D38 |Count->1|2
Offset->0x2428|float:0.001573|||0x0 VaFname >0x5717B5-> ->GFName[[Mask2]Roughness]|APtr: 0x13ACE2370 Adr 0xDA1A9D38 |Count->1|2
Offset->0x2428|float:0.001573|||0x0 VaFname >0x5717B5-> ->GFName[[Mask2]Roughness]|APtr: 0x13ACE2370 Adr 0xDA1A9D38 |Count->1|2
Offset->0x2498|float:0.001577|||0x0 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA2D0 Adr 0xDA1A9DA8 |Count->1|2
Offset->0x2498|float:0.001577|||0x20 VaFname >0x3173A5-> ->GFName[[Iridescence]Color]|APtr: 0x13ACEA2D0 Adr 0xDA1A9DA8 |Count->1|2
Offset->0x2498|float:0.001577|||0x10 VaFname >0x571769-> ->GFName[[Iridescence]MaskSwitch]|APtr: 0x13ACEA2D0 Adr 0xDA1A9DA8 |Count->1|2
Offset->0x2498|float:0.001577|||0x0 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA2D0 Adr 0xDA1A9DA8 |Count->1|2
Offset->0x2498|float:0.001577|||0x0 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA2D0 Adr 0xDA1A9DA8 |Count->1|2
Offset->0x2498|float:0.001577|||0x0 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA2D0 Adr 0xDA1A9DA8 |Count->1|2
Offset->0x2508|float:0.001577|||0x0 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACEA440 Adr 0xDA1A9E18 |Count->1|2
Offset->0x2508|float:0.001577|||0x20 VaFname >0x5717AC-> ->GFName[[Mask2]Metallic]|APtr: 0x13ACEA440 Adr 0xDA1A9E18 |Count->1|2
Offset->0x2508|float:0.001577|||0x10 VaFname >0x571776-> ->GFName[[Mask0]Metallic]|APtr: 0x13ACEA440 Adr 0xDA1A9E18 |Count->1|2
Offset->0x2508|float:0.001577|||0x0 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACEA440 Adr 0xDA1A9E18 |Count->1|2
Offset->0x2508|float:0.001577|||0x0 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACEA440 Adr 0xDA1A9E18 |Count->1|2
Offset->0x2508|float:0.001577|||0x0 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACEA440 Adr 0xDA1A9E18 |Count->1|2
Offset->0x2578|float:0.001573|||0x0 VaFname >0x24DF73-> ->GFName[EmissiveColor]|APtr: 0x13ACE3CC0 Adr 0xDA1A9E88 |Count->1|2
Offset->0x2578|float:0.001573|||0x20 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACE3CC0 Adr 0xDA1A9E88 |Count->1|2
Offset->0x2578|float:0.001573|||0x10 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACE3CC0 Adr 0xDA1A9E88 |Count->1|2
Offset->0x2578|float:0.001573|||0x0 VaFname >0x24DF73-> ->GFName[EmissiveColor]|APtr: 0x13ACE3CC0 Adr 0xDA1A9E88 |Count->1|2
Offset->0x2578|float:0.001573|||0x0 VaFname >0x24DF73-> ->GFName[EmissiveColor]|APtr: 0x13ACE3CC0 Adr 0xDA1A9E88 |Count->1|2
Offset->0x2578|float:0.001573|||0x0 VaFname >0x24DF73-> ->GFName[EmissiveColor]|APtr: 0x13ACE3CC0 Adr 0xDA1A9E88 |Count->1|2
Offset->0x25E8|float:0.001576|||0x0 VaFname >0x5717E8-> ->GFName[GlobalEmissiveIntensity]|APtr: 0x13ACE9EE0 Adr 0xDA1A9EF8 |Count->1|2
Offset->0x25E8|float:0.001576|||0x20 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACE9EE0 Adr 0xDA1A9EF8 |Count->1|2
Offset->0x25E8|float:0.001576|||0x10 VaFname >0x5717BE-> ->GFName[[Mask2]TintColor]|APtr: 0x13ACE9EE0 Adr 0xDA1A9EF8 |Count->1|2
Offset->0x25E8|float:0.001576|||0x0 VaFname >0x5717E8-> ->GFName[GlobalEmissiveIntensity]|APtr: 0x13ACE9EE0 Adr 0xDA1A9EF8 |Count->1|2
Offset->0x25E8|float:0.001576|||0x0 VaFname >0x5717E8-> ->GFName[GlobalEmissiveIntensity]|APtr: 0x13ACE9EE0 Adr 0xDA1A9EF8 |Count->1|2
Offset->0x25E8|float:0.001576|||0x0 VaFname >0x5717E8-> ->GFName[GlobalEmissiveIntensity]|APtr: 0x13ACE9EE0 Adr 0xDA1A9EF8 |Count->1|2
Offset->0x2658|float:0.001577|||0x0 VaFname >0x571769-> ->GFName[[Iridescence]MaskSwitch]|APtr: 0x13ACEA2E0 Adr 0xDA1A9F68 |Count->1|2
Offset->0x2658|float:0.001577|||0x20 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACEA2E0 Adr 0xDA1A9F68 |Count->1|2
Offset->0x2658|float:0.001577|||0x10 VaFname >0x3173A5-> ->GFName[[Iridescence]Color]|APtr: 0x13ACEA2E0 Adr 0xDA1A9F68 |Count->1|2
Offset->0x2658|float:0.001577|||0x0 VaFname >0x571769-> ->GFName[[Iridescence]MaskSwitch]|APtr: 0x13ACEA2E0 Adr 0xDA1A9F68 |Count->1|2
Offset->0x2658|float:0.001577|||0x0 VaFname >0x571769-> ->GFName[[Iridescence]MaskSwitch]|APtr: 0x13ACEA2E0 Adr 0xDA1A9F68 |Count->1|2
Offset->0x2658|float:0.001577|||0x0 VaFname >0x571769-> ->GFName[[Iridescence]MaskSwitch]|APtr: 0x13ACEA2E0 Adr 0xDA1A9F68 |Count->1|2
Offset->0x26C8|float:0.001577|||0x0 VaFname >0x3173A5-> ->GFName[[Iridescence]Color]|APtr: 0x13ACEA2F0 Adr 0xDA1A9FD8 |Count->1|2
Offset->0x26C8|float:0.001577|||0x20 VaFname >0x571788-> ->GFName[[Mask0]TintColor]|APtr: 0x13ACEA2F0 Adr 0xDA1A9FD8 |Count->1|2
Offset->0x26C8|float:0.001577|||0x10 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACEA2F0 Adr 0xDA1A9FD8 |Count->1|2
Offset->0x26C8|float:0.001577|||0x0 VaFname >0x3173A5-> ->GFName[[Iridescence]Color]|APtr: 0x13ACEA2F0 Adr 0xDA1A9FD8 |Count->1|2
Offset->0x26C8|float:0.001577|||0x0 VaFname >0x3173A5-> ->GFName[[Iridescence]Color]|APtr: 0x13ACEA2F0 Adr 0xDA1A9FD8 |Count->1|2
Offset->0x26C8|float:0.001577|||0x0 VaFname >0x3173A5-> ->GFName[[Iridescence]Color]|APtr: 0x13ACEA2F0 Adr 0xDA1A9FD8 |Count->1|2
Offset->0x27B8|float:0.001577|||0x0 VaFname >0x571788-> ->GFName[[Mask0]TintColor]|APtr: 0x13ACEA7F0 Adr 0xDA1AA0C8 |Count->1|2
Offset->0x27B8|float:0.001577|||0x20 VaFname >0x571776-> ->GFName[[Mask0]Metallic]|APtr: 0x13ACEA7F0 Adr 0xDA1AA0C8 |Count->1|2
Offset->0x27B8|float:0.001577|||0x10 VaFname >0x5717E8-> ->GFName[GlobalEmissiveIntensity]|APtr: 0x13ACEA7F0 Adr 0xDA1AA0C8 |Count->1|2
Offset->0x27B8|float:0.001577|||0x0 VaFname >0x571788-> ->GFName[[Mask0]TintColor]|APtr: 0x13ACEA7F0 Adr 0xDA1AA0C8 |Count->1|2
Offset->0x27B8|float:0.001577|||0x0 VaFname >0x571788-> ->GFName[[Mask0]TintColor]|APtr: 0x13ACEA7F0 Adr 0xDA1AA0C8 |Count->1|2
Offset->0x27B8|float:0.001577|||0x0 VaFname >0x571788-> ->GFName[[Mask0]TintColor]|APtr: 0x13ACEA7F0 Adr 0xDA1AA0C8 |Count->1|2
Offset->0x2828|float:0.001577|||0x0 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACEA7E0 Adr 0xDA1AA138 |Count->1|2
Offset->0x2828|float:0.001577|||0x20 VaFname >0x5717E8-> ->GFName[GlobalEmissiveIntensity]|APtr: 0x13ACEA7E0 Adr 0xDA1AA138 |Count->1|2
Offset->0x2828|float:0.001577|||0x10 VaFname >0x571788-> ->GFName[[Mask0]TintColor]|APtr: 0x13ACEA7E0 Adr 0xDA1AA138 |Count->1|2
Offset->0x2828|float:0.001577|||0x0 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACEA7E0 Adr 0xDA1AA138 |Count->1|2
Offset->0x2828|float:0.001577|||0x0 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACEA7E0 Adr 0xDA1AA138 |Count->1|2
Offset->0x2828|float:0.001577|||0x0 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACEA7E0 Adr 0xDA1AA138 |Count->1|2
Offset->0x2898|float:0.001577|||0x0 VaFname >0x5717BE-> ->GFName[[Mask2]TintColor]|APtr: 0x13ACEA360 Adr 0xDA1AA1A8 |Count->1|2
Offset->0x2898|float:0.001577|||0x20 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA360 Adr 0xDA1AA1A8 |Count->1|2
Offset->0x2898|float:0.001577|||0x10 VaFname >0x5717B5-> ->GFName[[Mask2]Roughness]|APtr: 0x13ACEA360 Adr 0xDA1AA1A8 |Count->1|2
Offset->0x2898|float:0.001577|||0x0 VaFname >0x5717BE-> ->GFName[[Mask2]TintColor]|APtr: 0x13ACEA360 Adr 0xDA1AA1A8 |Count->1|2
Offset->0x2898|float:0.001577|||0x0 VaFname >0x5717BE-> ->GFName[[Mask2]TintColor]|APtr: 0x13ACEA360 Adr 0xDA1AA1A8 |Count->1|2
Offset->0x2898|float:0.001577|||0x0 VaFname >0x5717BE-> ->GFName[[Mask2]TintColor]|APtr: 0x13ACEA360 Adr 0xDA1AA1A8 |Count->1|2
Offset->0x2908|float:0.001573|||0x0 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACE1E20 Adr 0xDA1AA218 |Count->1|2
Offset->0x2908|float:0.001573|||0x20 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACE1E20 Adr 0xDA1AA218 |Count->1|2
Offset->0x2908|float:0.001573|||0x10 VaFname >0x571769-> ->GFName[[Iridescence]MaskSwitch]|APtr: 0x13ACE1E20 Adr 0xDA1AA218 |Count->1|2
Offset->0x2908|float:0.001573|||0x0 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACE1E20 Adr 0xDA1AA218 |Count->1|2
Offset->0x2908|float:0.001573|||0x0 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACE1E20 Adr 0xDA1AA218 |Count->1|2
Offset->0x2908|float:0.001573|||0x0 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACE1E20 Adr 0xDA1AA218 |Count->1|2
Offset->0x2978|float:0.001577|||0x0 VaFname >0x571776-> ->GFName[[Mask0]Metallic]|APtr: 0x13ACEA810 Adr 0xDA1AA288 |Count->1|2
Offset->0x2978|float:0.001577|||0x20 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACEA810 Adr 0xDA1AA288 |Count->1|2
Offset->0x2978|float:0.001577|||0x10 VaFname >0x571788-> ->GFName[[Mask0]TintColor]|APtr: 0x13ACEA810 Adr 0xDA1AA288 |Count->1|2
Offset->0x2978|float:0.001577|||0x0 VaFname >0x571776-> ->GFName[[Mask0]Metallic]|APtr: 0x13ACEA810 Adr 0xDA1AA288 |Count->1|2
Offset->0x2978|float:0.001577|||0x0 VaFname >0x571776-> ->GFName[[Mask0]Metallic]|APtr: 0x13ACEA810 Adr 0xDA1AA288 |Count->1|2
Offset->0x2978|float:0.001577|||0x0 VaFname >0x571776-> ->GFName[[Mask0]Metallic]|APtr: 0x13ACEA810 Adr 0xDA1AA288 |Count->1|2
Offset->0x29E8|float:0.001577|||0x0 VaFname >0x571791-> ->GFName[[Mask1]Metallic]|APtr: 0x13ACEA750 Adr 0xDA1AA2F8 |Count->1|2
Offset->0x29E8|float:0.001577|||0x20 VaFname >0x57177F-> ->GFName[[Mask0]Roughness]|APtr: 0x13ACEA750 Adr 0xDA1AA2F8 |Count->1|2
Offset->0x29E8|float:0.001577|||0x10 VaFname >0x57179A-> ->GFName[[Mask1]Roughness]|APtr: 0x13ACEA750 Adr 0xDA1AA2F8 |Count->1|2
Offset->0x29E8|float:0.001577|||0x0 VaFname >0x571791-> ->GFName[[Mask1]Metallic]|APtr: 0x13ACEA750 Adr 0xDA1AA2F8 |Count->1|2
Offset->0x29E8|float:0.001577|||0x0 VaFname >0x571791-> ->GFName[[Mask1]Metallic]|APtr: 0x13ACEA750 Adr 0xDA1AA2F8 |Count->1|2
Offset->0x29E8|float:0.001577|||0x0 VaFname >0x571791-> ->GFName[[Mask1]Metallic]|APtr: 0x13ACEA750 Adr 0xDA1AA2F8 |Count->1|2
Offset->0x2A58|float:0.001577|||0x0 VaFname >0x5717AC-> ->GFName[[Mask2]Metallic]|APtr: 0x13ACEA740 Adr 0xDA1AA368 |Count->1|2
Offset->0x2A58|float:0.001577|||0x20 VaFname >0x57179A-> ->GFName[[Mask1]Roughness]|APtr: 0x13ACEA740 Adr 0xDA1AA368 |Count->1|2
Offset->0x2A58|float:0.001577|||0x10 VaFname >0x571791-> ->GFName[[Mask1]Metallic]|APtr: 0x13ACEA740 Adr 0xDA1AA368 |Count->1|2
Offset->0x2A58|float:0.001577|||0x0 VaFname >0x5717AC-> ->GFName[[Mask2]Metallic]|APtr: 0x13ACEA740 Adr 0xDA1AA368 |Count->1|2
Offset->0x2A58|float:0.001577|||0x0 VaFname >0x5717AC-> ->GFName[[Mask2]Metallic]|APtr: 0x13ACEA740 Adr 0xDA1AA368 |Count->1|2
Offset->0x2A58|float:0.001577|||0x0 VaFname >0x5717AC-> ->GFName[[Mask2]Metallic]|APtr: 0x13ACEA740 Adr 0xDA1AA368 |Count->1|2
Offset->0x2AC8|float:0.001574|||0x0 VaFname >0x5717C7-> ->GFName[[Mask3]Metallic]|APtr: 0x13ACE3F30 Adr 0xDA1AA3D8 |Count->1|2
Offset->0x2AC8|float:0.001574|||0x20 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACE3F30 Adr 0xDA1AA3D8 |Count->1|2
Offset->0x2AC8|float:0.001574|||0x10 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACE3F30 Adr 0xDA1AA3D8 |Count->1|2
Offset->0x2AC8|float:0.001574|||0x0 VaFname >0x5717C7-> ->GFName[[Mask3]Metallic]|APtr: 0x13ACE3F30 Adr 0xDA1AA3D8 |Count->1|2
Offset->0x2AC8|float:0.001574|||0x0 VaFname >0x5717C7-> ->GFName[[Mask3]Metallic]|APtr: 0x13ACE3F30 Adr 0xDA1AA3D8 |Count->1|2
Offset->0x2AC8|float:0.001574|||0x0 VaFname >0x5717C7-> ->GFName[[Mask3]Metallic]|APtr: 0x13ACE3F30 Adr 0xDA1AA3D8 |Count->1|2
Offset->0x2B38|float:0.001577|||0x0 VaFname >0x57177F-> ->GFName[[Mask0]Roughness]|APtr: 0x13ACEA770 Adr 0xDA1AA448 |Count->1|2
Offset->0x2B38|float:0.001577|||0x20 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA770 Adr 0xDA1AA448 |Count->1|2
Offset->0x2B38|float:0.001577|||0x10 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACEA770 Adr 0xDA1AA448 |Count->1|2
Offset->0x2B38|float:0.001577|||0x0 VaFname >0x57177F-> ->GFName[[Mask0]Roughness]|APtr: 0x13ACEA770 Adr 0xDA1AA448 |Count->1|2
Offset->0x2B38|float:0.001577|||0x0 VaFname >0x57177F-> ->GFName[[Mask0]Roughness]|APtr: 0x13ACEA770 Adr 0xDA1AA448 |Count->1|2
Offset->0x2B38|float:0.001577|||0x0 VaFname >0x57177F-> ->GFName[[Mask0]Roughness]|APtr: 0x13ACEA770 Adr 0xDA1AA448 |Count->1|2
Offset->0x2BA8|float:0.001577|||0x0 VaFname >0x57179A-> ->GFName[[Mask1]Roughness]|APtr: 0x13ACEA760 Adr 0xDA1AA4B8 |Count->1|2
Offset->0x2BA8|float:0.001577|||0x20 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACEA760 Adr 0xDA1AA4B8 |Count->1|2
Offset->0x2BA8|float:0.001577|||0x10 VaFname >0x57177F-> ->GFName[[Mask0]Roughness]|APtr: 0x13ACEA760 Adr 0xDA1AA4B8 |Count->1|2
Offset->0x2BA8|float:0.001577|||0x0 VaFname >0x57179A-> ->GFName[[Mask1]Roughness]|APtr: 0x13ACEA760 Adr 0xDA1AA4B8 |Count->1|2
Offset->0x2BA8|float:0.001577|||0x0 VaFname >0x57179A-> ->GFName[[Mask1]Roughness]|APtr: 0x13ACEA760 Adr 0xDA1AA4B8 |Count->1|2
Offset->0x2BA8|float:0.001577|||0x0 VaFname >0x57179A-> ->GFName[[Mask1]Roughness]|APtr: 0x13ACEA760 Adr 0xDA1AA4B8 |Count->1|2
Offset->0x2C18|float:0.001577|||0x0 VaFname >0x5717B5-> ->GFName[[Mask2]Roughness]|APtr: 0x13ACEA370 Adr 0xDA1AA528 |Count->1|2
Offset->0x2C18|float:0.001577|||0x20 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA370 Adr 0xDA1AA528 |Count->1|2
Offset->0x2C18|float:0.001577|||0x10 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA370 Adr 0xDA1AA528 |Count->1|2
Offset->0x2C18|float:0.001577|||0x0 VaFname >0x5717B5-> ->GFName[[Mask2]Roughness]|APtr: 0x13ACEA370 Adr 0xDA1AA528 |Count->1|2
Offset->0x2C18|float:0.001577|||0x0 VaFname >0x5717B5-> ->GFName[[Mask2]Roughness]|APtr: 0x13ACEA370 Adr 0xDA1AA528 |Count->1|2
Offset->0x2C18|float:0.001577|||0x0 VaFname >0x5717B5-> ->GFName[[Mask2]Roughness]|APtr: 0x13ACEA370 Adr 0xDA1AA528 |Count->1|2
Offset->0x2C88|float:0.001577|||0x0 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA380 Adr 0xDA1AA598 |Count->1|2
Offset->0x2C88|float:0.001577|||0x20 VaFname >0x5717D9-> ->GFName[[Mask3]TintColor]|APtr: 0x13ACEA380 Adr 0xDA1AA598 |Count->1|2
Offset->0x2C88|float:0.001577|||0x10 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA380 Adr 0xDA1AA598 |Count->1|2
Offset->0x2C88|float:0.001577|||0x0 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA380 Adr 0xDA1AA598 |Count->1|2
Offset->0x2C88|float:0.001577|||0x0 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA380 Adr 0xDA1AA598 |Count->1|2
Offset->0x2C88|float:0.001577|||0x0 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACEA380 Adr 0xDA1AA598 |Count->1|2
Offset->0x2CF8|float:0.001574|||0x0 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACE3F40 Adr 0xDA1AA608 |Count->1|2
Offset->0x2CF8|float:0.001574|||0x20 VaFname >0x5717C7-> ->GFName[[Mask3]Metallic]|APtr: 0x13ACE3F40 Adr 0xDA1AA608 |Count->1|2
Offset->0x2CF8|float:0.001574|||0x10 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACE3F40 Adr 0xDA1AA608 |Count->1|2
Offset->0x2CF8|float:0.001574|||0x0 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACE3F40 Adr 0xDA1AA608 |Count->1|2
Offset->0x2CF8|float:0.001574|||0x0 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACE3F40 Adr 0xDA1AA608 |Count->1|2
Offset->0x2CF8|float:0.001574|||0x0 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACE3F40 Adr 0xDA1AA608 |Count->1|2
Offset->0x2D68|float:0.001577|||0x0 VaFname >0x24DF73-> ->GFName[EmissiveColor]|APtr: 0x13ACEA420 Adr 0xDA1AA678 |Count->1|2
Offset->0x2D68|float:0.001577|||0x20 VaFname >0x272BE-> ->GFName[Random]|APtr: 0x13ACEA420 Adr 0xDA1AA678 |Count->1|2
Offset->0x2D68|float:0.001577|||0x10 VaFname >0x57177F-> ->GFName[[Mask0]Roughness]|APtr: 0x13ACEA420 Adr 0xDA1AA678 |Count->1|2
Offset->0x2D68|float:0.001577|||0x0 VaFname >0x24DF73-> ->GFName[EmissiveColor]|APtr: 0x13ACEA420 Adr 0xDA1AA678 |Count->1|2
Offset->0x2D68|float:0.001577|||0x0 VaFname >0x24DF73-> ->GFName[EmissiveColor]|APtr: 0x13ACEA420 Adr 0xDA1AA678 |Count->1|2
Offset->0x2D68|float:0.001577|||0x0 VaFname >0x24DF73-> ->GFName[EmissiveColor]|APtr: 0x13ACEA420 Adr 0xDA1AA678 |Count->1|2
Offset->0x2DD8|float:0.001573|||0x0 VaFname >0x5717E8-> ->GFName[GlobalEmissiveIntensity]|APtr: 0x13ACE23B0 Adr 0xDA1AA6E8 |Count->1|2
Offset->0x2DD8|float:0.001573|||0x20 VaFname >0x571769-> ->GFName[[Iridescence]MaskSwitch]|APtr: 0x13ACE23B0 Adr 0xDA1AA6E8 |Count->1|2
Offset->0x2DD8|float:0.001573|||0x10 VaFname >0x5717D0-> ->GFName[[Mask3]Roughness]|APtr: 0x13ACE23B0 Adr 0xDA1AA6E8 |Count->1|2
Offset->0x2DD8|float:0.001573|||0x0 VaFname >0x5717E8-> ->GFName[GlobalEmissiveIntensity]|APtr: 0x13ACE23B0 Adr 0xDA1AA6E8 |Count->1|2
Offset->0x2DD8|float:0.001573|||0x0 VaFname >0x5717E8-> ->GFName[GlobalEmissiveIntensity]|APtr: 0x13ACE23B0 Adr 0xDA1AA6E8 |Count->1|2
Offset->0x2DD8|float:0.001573|||0x0 VaFname >0x5717E8-> ->GFName[GlobalEmissiveIntensity]|APtr: 0x13ACE23B0 Adr 0xDA1AA6E8 |Count->1|2
Offset->0x2E48|float:0.001576|||0x0 VaFname >0x571769-> ->GFName[[Iridescence]MaskSwitch]|APtr: 0x13ACE9F20 Adr 0xDA1AA758 |Count->1|2
Offset->0x2E48|float:0.001576|||0x20 VaFname >0x3173A5-> ->GFName[[Iridescence]Color]|APtr: 0x13ACE9F20 Adr 0xDA1AA758 |Count->1|2
Offset->0x2E48|float:0.001576|||0x10 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACE9F20 Adr 0xDA1AA758 |Count->1|2
Offset->0x2E48|float:0.001576|||0x0 VaFname >0x571769-> ->GFName[[Iridescence]MaskSwitch]|APtr: 0x13ACE9F20 Adr 0xDA1AA758 |Count->1|2
Offset->0x2E48|float:0.001576|||0x0 VaFname >0x571769-> ->GFName[[Iridescence]MaskSwitch]|APtr: 0x13ACE9F20 Adr 0xDA1AA758 |Count->1|2
Offset->0x2E48|float:0.001576|||0x0 VaFname >0x571769-> ->GFName[[Iridescence]MaskSwitch]|APtr: 0x13ACE9F20 Adr 0xDA1AA758 |Count->1|2
Offset->0x2EB8|float:0.001576|||0x0 VaFname >0x3173A5-> ->GFName[[Iridescence]Color]|APtr: 0x13ACE9F40 Adr 0xDA1AA7C8 |Count->1|2
Offset->0x2EB8|float:0.001576|||0x20 VaFname >0x5717A3-> ->GFName[[Mask1]TintColor]|APtr: 0x13ACE9F40 Adr 0xDA1AA7C8 |Count->1|2
Offset->0x2EB8|float:0.001576|||0x10 VaFname >0x571788-> ->GFName[[Mask0]TintColor]|APtr: 0x13ACE9F40 Adr 0xDA1AA7C8 |Count->1|2
Offset->0x2EB8|float:0.001576|||0x0 VaFname >0x3173A5-> ->GFName[[Iridescence]Color]|APtr: 0x13ACE9F40 Adr 0xDA1AA7C8 |Count->1|2
Offset->0x2EB8|float:0.001576|||0x0 VaFname >0x3173A5-> ->GFName[[Iridescence]Color]|APtr: 0x13ACE9F40 Adr 0xDA1AA7C8 |Count->1|2
Offset->0x2EB8|float:0.001576|||0x0 VaFname >0x3173A5-> ->GFName[[Iridescence]Color]|APtr: 0x13ACE9F40 Adr 0xDA1AA7C8 |Count->1|2
BOffset->0x3FAE|int:131188|||0x20 VaFname >0x1000100-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0x20074 Adr 0xDA1AB8BE |Count->-1772093440|55201
Offset->0x3FB8|Type_UE|||0x28 VaFname >0x262747-> ->GFName[CPUThreads]|APtr: 0xD7A19660 Adr 0xDA1AB8C8 |TypePoint*->10 |On::0
BOffset->0x3FBE|int:655360|||0x10 VaFname >0x1000100-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0xA0000 Adr 0xDA1AB8CE |Count->-65536|196607

```
