namespace Pointencore {
	//================================================================
	// SECTION 1 — POINTER REGION VALIDATOR
	//================================================================
	inline bool IsUEOffsetGroup(uintptr_t p)
	{
		if (!p) return false;

		uint64_t top = p >> 60;
		if (top == 0x4 || top == 0x7) return true;      // typical UE pointer region

		if (p > 0x100000000ULL && p < 0x7FFFFFFFFFFFULL)
			return true;

		return false;
	}

	//================================================================
	// SECTION 2 — BASIC DECODE (STRIP00, SWAP, NIBBLE)
	//================================================================

   //  --- strip 00 bytes ---
	inline uint64_t DecodeStrip00(uint64_t p) {
		uint8_t* b = (uint8_t*)&p;
		uint8_t o[8] = { 0 }; int j = 0;
		for (int i = 0; i < 8; i++)
			if (b[i] != 0)
				o[j++] = b[i];

		uint64_t r = 0;
		memcpy(&r, o, 8);
		return r;
	}

	// --- strip 00 bytes ---
	uintptr_t Chack_DecodeStrip00(uint64_t p) {
		auto ChackAddressXoR = DecodeStrip00(p);
		return ChackAddressXoR;
	}

	// --- byte swap (endian reverse) ---
	inline uint64_t Swap64(uint64_t v) {
		return _byteswap_uint64(v);
	}

	// --- nibble swap ---
	inline uint64_t SwapNibbles(uint64_t x) {
		return ((x & 0x0F0F0F0F0F0F0F0FULL) << 4) |
			((x & 0xF0F0F0F0F0F0F0F0ULL) >> 4);
	}

	// --- bit reverse ---
	inline uint64_t ReverseBits(uint64_t v) {
		v = ((v >> 1) & 0x5555555555555555ULL) | ((v & 0x5555555555555555ULL) << 1);
		v = ((v >> 2) & 0x3333333333333333ULL) | ((v & 0x3333333333333333ULL) << 2);
		v = ((v >> 4) & 0x0F0F0F0F0F0F0F0FULL) | ((v & 0x0F0F0F0F0F0F0F0FULL) << 4);
		v = ((v >> 8) & 0x00FF00FF00FF00FFULL) | ((v & 0x00FF00FF00FF00FFULL) << 8);
		v = (v >> 16) | (v << 16);
		return (v << 32) | (v >> 32);
	}

	//================================================================
	 //  SECTION 3 — TRIM NIBBLE
	 // ================================================================

	inline uintptr_t TrimTrailingNibbleEp2(uintptr_t addr) {
		uint8_t lowByte = (uint8_t)(addr & 0xFFu);
		uint8_t hi = (lowByte & 0xF0u) >> 4;
		uint8_t lo = (lowByte & 0x0Fu);

		if (hi == 0x0 && lo >= 1 && lo <= 0xF)
			return (addr >> 4);

		return addr;
	}

	inline uintptr_t TrimTrailingNibble(uintptr_t addr)
	{
		addr = TrimTrailingNibbleEp2(addr);

		unsigned long msb = 0;
		if (_BitScanReverse64(&msb, addr))
		{
			int msNib = msb >> 2; // nibble index
			if (msNib >= 3)
			{
				WORD group16 = (WORD)((addr >> ((msNib - 3) * 4)) & 0xFFFF);

				BYTE nib0 = HIBYTE(group16);
				BYTE nib1 = HIBYTE(group16) & 0x0F;
				BYTE nib2 = LOBYTE(group16) >> 4;
				BYTE nib3 = LOBYTE(group16) & 0xF;

				if (nib0 != 0 && nib1 == 0 && nib2 == 0 && nib3 == 0)
				{
					uintptr_t mask = ~(uintptr_t(0xFULL) << (msNib * 4));
					addr &= mask;
				}
			}
		}
		return addr;
	}

	//================================================================
	//  SECTION 4 — BITFIELD 9-BIT SPLIT + REORDER
	// ================================================================
	inline uint64_t DecodePageXor(uint64_t p) {
		uint64_t tail = p & 0xFFF;
		if (tail == 0x101) return p ^ 0x101ULL;
		if (tail == 0x001) return p ^ 0x001ULL;
		if (tail == 0xF01) return p ^ 0xF01ULL;
		if (tail == 0xE01) return p ^ 0xE01ULL;
		return p;
	}
	inline void ExtractBlocks9(uint64_t v, uint64_t out[4])
	{
		out[0] = (v >> 0x0C) & 0x1FF;
		out[1] = (v >> 0x15) & 0x1FF;
		out[2] = (v >> 0x1E) & 0x1FF;
		out[3] = (v >> 0x27) & 0x1FF;
	}

	inline uint64_t MergeBlocks9(uint64_t b0, uint64_t b1, uint64_t b2, uint64_t b3)
	{
		return ((b3 & 0x1FFULL) << 0x27) |
			((b2 & 0x1FFULL) << 0x1E) |
			((b1 & 0x1FFULL) << 0x15) |
			((b0 & 0x1FFULL) << 0x0C);
	}

	inline uintptr_t TryDecodeBlocks9(uint64_t v)
	{
		uint64_t b[4];
		ExtractBlocks9(v, b);

		int perm[24][4] = {
			{0,1,2,3},{0,1,3,2},{0,2,1,3},{0,2,3,1},{0,3,1,2},{0,3,2,1},
			{1,0,2,3},{1,0,3,2},{1,2,0,3},{1,2,3,0},{1,3,0,2},{1,3,2,0},
			{2,0,1,3},{2,0,3,1},{2,1,0,3},{2,1,3,0},{2,3,0,1},{2,3,1,0},
			{3,0,1,2},{3,0,2,1},{3,1,0,2},{3,1,2,0},{3,2,0,1},{3,2,1,0}
		};

		for (int i = 0; i < 24; i++)
		{
			uint64_t x = MergeBlocks9(
				b[perm[i][0]], b[perm[i][1]],
				b[perm[i][2]], b[perm[i][3]]
			);

			if (IsUEOffsetGroup(x))
				return x;
		}

		return v;
	}
	//====================================================================
	// Fix every type of encoded pointer (external-safe)
	 //====================================================================
	inline uint64_t FixBonePtr(uint64_t p)
	{
		uint64_t v = p;

		//	  1) Strip 00-FF-00- pattern
		v = DecodeStrip00(v);

		//	  2) trailing nibble case (0x..xF)
		v = TrimTrailingNibble(v);
		// v = DecodeNibble(v);

		//  3) page-xor tails (101/F01/E01)
		v = DecodePageXor(v);

		//  4) masked bottom bits (FEF8-aligned)
	   //   v = isBadBValue(v);

		//  5) leading nibble (X000 shift)
		v = SwapNibbles(v);

		//  alignment
		if (v & 0xF)
			v &= ~0xFULL;

		if (v < 0x1000 || v > 0x7FFFFFFFFFFF)
			return 0;

		return v;
	}
};//namespace Pointencore
