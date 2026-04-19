
struct GetC2wloc
{
	__m128 C2wEntity_A;//0x1F0
	__m128 C2wloaclPlayer;//0x200
	__m128 C2wTeamPlyer;//0x210
};
struct SSEConst
{
	__m128 A;
	__m128 B;
	__m128 C;
	__m128 D;
};
 
struct TransformResult
{
	__m128 row0;
	__m128 row1;
	__m128 row2;
}; 
 
SSEConst LoadConst()
{
	SSEConst c{};
	c.A = driver.read<__m128>(driver.base_address + 0x1752F6A0);
	c.B = driver.read<__m128>(driver.base_address + 0x1752F6B0);
	c.C = driver.read<__m128>(driver.base_address + 0x1752F3E0);
	c.D = driver.read<__m128>(driver.base_address + 0x1752F690);
	return c;
}

TransformResult  LoadC2w(uintptr_t Actor ,uintptr_t Mesh)
{
	return driver.read<TransformResult>(Actor + 0x1F0);
}

TransformResult sub_14E2CAB10_ext(uintptr_t a1)
{
	TransformResult out{};
	auto c = LoadConst();

	uint32_t v3 = driver.read<uint32_t>(a1 + 0x18C);
	uint64_t v16 = driver.read<uint64_t>(a1 + 0x184);
	uint64_t v5 = driver.read<uint64_t>(a1 + 0x178);
	float    f180 = driver.read<float>(a1 + 0x180);

	// ===== build vector =====
	__m128 base = _mm_castsi128_ps(_mm_set_epi64x(0, v5));

	__m128 v7 = _mm_movelh_ps(
		_mm_unpacklo_ps(
			base,
			_mm_shuffle_ps(base, base, 0x55)
		),
		_mm_set_ss(f180)
	);

	// ===== normalize =====
	__m128 v8 = _mm_div_ps(v7, c.A);
	__m128 v9 = _mm_cvtepi32_ps(_mm_cvttps_epi32(v8));

	__m128 v10 = _mm_sub_ps(
		v7,
		_mm_mul_ps(
			_mm_xor_ps(
				_mm_and_ps(
					_mm_cmple_ps(c.B, _mm_and_ps(v8, c.C)),
					_mm_xor_ps(v9, v8)
				),
				v9
			),
			c.A
		)
	);

	__m128 v11 = _mm_add_ps(c.A, v10);

	__m128 v12 = _mm_xor_ps(
		_mm_and_ps(
			_mm_xor_ps(v11, v10),
			_mm_cmple_ps(_mm_setzero_ps(), v10)
		),
		v11
	);

	__m128 v13 = _mm_xor_ps(
		_mm_and_ps(
			_mm_xor_ps(_mm_sub_ps(v12, c.A), v12),
			_mm_cmplt_ps(c.D, v12)
		),
		v12
	);

	// ===== output vector =====
	out.row0 = v13;

	// ===== matrix (อ่านจาก memory แทน call) =====
	out.row1 = driver.read<__m128>(a1 + 0x1F0);

	// ===== packed data =====
	out.row2 = _mm_movelh_ps(
		_mm_castsi128_ps(_mm_set_epi64x(0, v16)),
		_mm_castsi128_ps(_mm_cvtsi32_si128(v3))
	);

	return out;
}
