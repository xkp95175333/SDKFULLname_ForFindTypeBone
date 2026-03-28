```c

__int64 __fastcall sub_14D9038C0(__int64 a1)
{
  _OWORD *v2; // rax
  __int64 result; // rax
  __m128 v4; // xmm0
  char v5[48]; // [rsp+20h] [rbp-48h] BYREF

  sub_14E289760();
  v2 = (_OWORD *)sub_14E2CB510(a1, (__int64)v5);
  *(_OWORD *)(a1 + 0x5D0) = *v2;
  *(_OWORD *)(a1 + 0x5E0) = v2[1];
  *(_OWORD *)(a1 + 0x5F0) = v2[2];
  result = sub_140B0BE60(a1);
  v4 = *(__m128 *)(result + 0x20);
  *(_QWORD *)(a1 + 0x600) = _mm_unpacklo_ps(v4, _mm_shuffle_ps(v4, v4, 0x55)).m128_u64[0];
  *(_DWORD *)(a1 + 0x608) = _mm_shuffle_ps(v4, v4, 0xAA).m128_u32[0];
  return result;
} 
__int64 __fastcall sub_14E289760(__int64 a1)
{
  float v2; // xmm0_4
  __int64 v3; // rax
  __int64 result; // rax

  _InterlockedIncrement(&dword_15752F7F8);
  if ( *(float *)(a1 + 0x260) == 0.0 )
  {
    v2 = *(float *)(a1 + 0x25C);
    if ( v2 > 0.0 )
    {
      if ( (*(_BYTE *)(a1 + 0x268) & 0x40) != 0 || *(_QWORD *)(a1 + 0x480) )
        v2 = 0.0;
      *(float *)(a1 + 0x260) = v2;
    }
  }
  sub_14E202CD0();
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 0x4D8LL))(a1);
  if ( (unsigned __int8)sub_14E2E0CD0(a1)
    && ((unsigned __int8)sub_14E2E0DA0(a1) || (*(_BYTE *)(a1 + 0x294) & 0x20) != 0) )
  {
    v3 = *(_QWORD *)(a1 + 0xF0);
    if ( !v3 )
      v3 = sub_14E20AAF0(a1);
    (***(void (__fastcall ****)(_QWORD, __int64))(v3 + 0x1B8))(*(_QWORD *)(v3 + 0x1B8), a1);
  }
  result = *(unsigned __int8 *)(a1 + 0x269);
  if ( (result & 4) == 0
    && (*(_BYTE *)(a1 + 0x19F)
     || (result & 2) != 0
     || *(char *)(a1 + 0x268) >= 0
     && *(_QWORD *)(a1 + 0xE8)
     && (result = sub_14E078810()) != 0
     && (*(_BYTE *)(result + 0x1E4) & 0x10) != 0) )
  {
    result = sub_14E33E460();
    if ( result )
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)result + 0x78LL))(result, a1);
  }
  return result;
}

__int64 __fastcall sub_14E2CB510(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v5; // xmm0_8
  __int64 v6; // rcx
  __m128 v7; // xmm5
  __m128 v8; // xmm2
  __m128 v9; // xmm3
  __m128 v10; // xmm5
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __int128 v14; // xmm6
  unsigned __int64 *v15; // rax
  __m128 v16; // xmm2
  __m128 v17; // xmm3
  __int64 result; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+2Ch] [rbp-3Ch] BYREF
  char v21[16]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 0x18C);
  v19 = *(_QWORD *)(a1 + 0x184);
  v5 = *(_QWORD *)(a1 + 0x178);
  v6 = a1 + 0x200;
  v20 = v5;
  if ( *(float *)&v5 != *(float *)v6
    || *((float *)&v20 + 1) != *(float *)(v6 + 4)
    || *(float *)(a1 + 0x180) != *(float *)(v6 + 8) )
  {
    v7 = _mm_movelh_ps(
           _mm_unpacklo_ps(
             (__m128)*(unsigned __int64 *)(a1 + 0x178),
             _mm_shuffle_ps((__m128)*(unsigned __int64 *)(a1 + 0x178), (__m128)*(unsigned __int64 *)(a1 + 0x178), 0x55)),
           (__m128)*(unsigned int *)(a1 + 0x180));
    v20 = *(_QWORD *)(a1 + 0x178);
    v8 = _mm_div_ps(v7, (__m128)xmmword_1575300A0);
    v9 = _mm_cvtepi32_ps(_mm_cvttps_epi32(v8));
    v10 = _mm_sub_ps(
            v7,
            _mm_mul_ps(
              _mm_xor_ps(
                _mm_and_ps(
                  _mm_cmple_ps((__m128)xmmword_1575300B0, _mm_and_ps(v8, (__m128)xmmword_15752FDE0)),
                  _mm_xor_ps(v9, v8)),
                v9),
              (__m128)xmmword_1575300A0));
    v11 = _mm_add_ps((__m128)xmmword_1575300A0, v10);
    v12 = _mm_xor_ps(_mm_and_ps(_mm_xor_ps(v11, v10), _mm_cmple_ps((__m128)0LL, v10)), v11);
    v13 = _mm_xor_ps(
            _mm_and_ps(
              _mm_xor_ps(_mm_sub_ps(v12, (__m128)xmmword_1575300A0), v12),
              _mm_cmplt_ps((__m128)xmmword_157530090, v12)),
            v12);
    *(_QWORD *)v6 = _mm_unpacklo_ps(v13, _mm_shuffle_ps(v13, v13, 0x55)).m128_u64[0];
    *(_DWORD *)(v6 + 8) = _mm_shuffle_ps(v13, v13, 0xAA).m128_u32[0];
    *(_OWORD *)(a1 + 0x1F0) = *(_OWORD *)sub_14C8337D0(v6, v21);
  }
  v14 = *(_OWORD *)(a1 + 0x1F0);
  v15 = (unsigned __int64 *)sub_140EC15A0(a1, &v20);
  v16 = (__m128)*((unsigned int *)v15 + 2);
  v17 = (__m128)*v15;
  result = a2;
  *(__m128 *)(a2 + 0x10) = _mm_movelh_ps(v17, v16);
  *(_OWORD *)a2 = v14;
  *(__m128 *)(a2 + 0x20) = _mm_movelh_ps((__m128)v19, (__m128)_mm_cvtsi32_si128(v3));
  return result;
}
__int64 __fastcall sub_140B0BE60(__int64 a1)
{
  return a1 + 0x210;
}
```


---
testdecore
---
```cpp
#define RVA(addr) (addr - 0x140000000ULL)
#define GET_PTR(base, addr) ((void*)((uintptr_t)(base) + RVA(addr)))
// 🔥 REQUIRED CONSTANTS
#define OFF_A0 0x1575300A0
#define OFF_B0 0x1575300B0
#define OFF_DE0 0x15752FDE0
#define OFF_090 0x157530090

struct SimdConsts
{
	__m128 A0;
	__m128 B0;
	__m128 DE0;
	__m128 C090;
};

inline SimdConsts LoadConsts(uintptr_t base)
{
	SimdConsts c;

	c.A0 = _mm_loadu_ps((float*)GET_PTR(base, OFF_A0));
	c.B0 = _mm_loadu_ps((float*)GET_PTR(base, OFF_B0));
	c.DE0 = _mm_loadu_ps((float*)GET_PTR(base, OFF_DE0));
	c.C090 = _mm_loadu_ps((float*)GET_PTR(base, OFF_090));

	return c;
}
inline __m128 NormalizeRotationEx(__m128 v, const SimdConsts& c)
{
	__m128 div = _mm_div_ps(v, c.A0);

	__m128 i = _mm_cvtepi32_ps(_mm_cvttps_epi32(div));

	__m128 sub = _mm_sub_ps(
		v,
		_mm_mul_ps(
			_mm_xor_ps(
				_mm_and_ps(
					_mm_cmple_ps(c.B0,
						_mm_and_ps(div, c.DE0)),
					_mm_xor_ps(i, div)
				),
				i
			),
			c.A0
		)
	);

	__m128 add = _mm_add_ps(c.A0, sub);

	__m128 fix1 = _mm_xor_ps(
		_mm_and_ps(_mm_xor_ps(add, sub),
			_mm_cmple_ps(_mm_setzero_ps(), sub)),
		add
	);

	__m128 fix2 = _mm_xor_ps(
		_mm_and_ps(
			_mm_xor_ps(_mm_sub_ps(fix1, c.A0), fix1),
			_mm_cmplt_ps(c.C090, fix1)
		),
		fix1
	);

	return fix2;
}



```
