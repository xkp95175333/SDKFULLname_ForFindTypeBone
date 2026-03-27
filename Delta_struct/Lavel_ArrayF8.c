```md

#pragma pack(push, 1)
struct TLavelRaw
{
	uintptr_t Data; // 0x00
	int32_t   Count; // 0x08
	int32_t   Max;   // 0x0C
};
static_assert(sizeof(TLavelRaw) == 0x10);
#pragma pack(pop)

bool CountOn(uintptr_t PtrArray
	, int count, int max)
{
	if (PtrArray > 0x1000 && (count > 0 && max > 1 && (count <= max))) return true;
	else return false;

}

void PrintfLogArraycoujnt(TLavelRaw Datap, uint16_t Offsetstaru)
{
	if (CountOn(Datap.Data, Datap.Count, Datap.Max) == true)
	{
		size_t sizeCountArray = Datap.Count * 8;

		printf("Offset 0x%X[Array->0x%p Count %d Max %d Size->0xllx]\n"
			, Offsetstaru, Datap.Data, Datap.Count, Datap.Max, sizeCountArray);

	}
}
bool TArrayLavel = false;
bool GetLavelF8OneTime(uintptr_t Addr)
{
	/*
	
		FName{None} [fieldAddr->0x28df1eec8] offArray=+0x18 AdrArray->0x2E21D50 arr.DataPtr->0x450a62e2c6a40b03 Count = [1||4] count*8 0x8
		FName{None} [fieldAddr->0x28df1eed4] offArray=+0x24 AdrArray->0x225A08B00000000 arr.DataPtr->0x0 Count = [1||1] count*8 0x8
		FName{None} [fieldAddr->0x28df1eed8] offArray=+0x28 AdrArray->0x1225A08B0 arr.DataPtr->0x3d9af968bf414b69 Count = [1||4] count*8 0x8
		FName{None} [fieldAddr->0x28df1ef14] offArray=+0x64 AdrArray->0x9AD034000000000 arr.DataPtr->0x0 Count = [78||276] count*8 0x270
		FName{} [fieldAddr->0x28df1ef18] offArray=+0x68 AdrArray->0x4E9AD03400 arr.DataPtr->0x26d359d90 Count = [276||408] count*8 0x8A0
		FName{} [fieldAddr->0x28df1ef28] offArray=+0x78 AdrArray->0x3678C80 arr.DataPtr->0x3670100 Count = [2||3] count*8 0x10
		FName{None} [fieldAddr->0x28df1ef54] offArray=+0xA4 AdrArray->0x8DF3BF40C005000 arr.DataPtr->0x0 Count = [2||30] count*8 0x10
		FName{MaterialParameterCollectionInstance} [fieldAddr->0x28df1ef58] offArray=+0xA8 AdrArray->0x28DF3BF40 arr.DataPtr->0x11f8918c0 Count = [30||56] count*8 0xF0
		FName{None} [fieldAddr->0x28df1ef80] offArray=+0xD0 AdrArray->0x275B12300 arr.DataPtr->0xc5e80002d9dc Count = [1||4] count*8 0x8
		FName{None} [fieldAddr->0x28df1ef90] offArray=+0xE0 AdrArray->0x4FDF9E00 arr.DataPtr->0xc5e80002d9dc Count = [1||4] count*8 0x8
		FName{None} [fieldAddr->0x28df1efec] offArray=+0x13C AdrArray->0x80C31D4000000554 arr.DataPtr->0x0 Count = [1||1] count*8 0x8
		FName{} [fieldAddr->0x28df1eff0] offArray=+0x140 AdrArray->0x180C31D40 arr.DataPtr->0x4e951daab0 Count = [1||4] count*8 0x8
		FName{} [fieldAddr->0x28df1f050] offArray=+0x1A0 AdrArray->0x7276F760 arr.DataPtr->0x4fbb5560 Count = [1||4] count*8 0x8
		FName{None} [fieldAddr->0x28df1f0a0] offArray=+0x1F0 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||4] count*8 0x8
		FName{None} [fieldAddr->0x28df1f0a4] offArray=+0x1F4 AdrArray->0x0 arr.DataPtr->0x0 Count = [4||5084] count*8 0x20
		FName{None} [fieldAddr->0x28df1f0b4] offArray=+0x204 AdrArray->0x8E0F420000000000 arr.DataPtr->0x0 Count = [1||1] count*8 0x8
		FName{None} [fieldAddr->0x28df1f0b8] offArray=+0x208 AdrArray->0x18E0F4200 arr.DataPtr->0xffffffffffffffff Count = [1||4] count*8 0x8
		FName{None} [fieldAddr->0x28df1f0d8] offArray=+0x228 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||128] count*8 0x8
		FName{} [fieldAddr->0x28df1f120] offArray=+0x270 AdrArray->0x4E690F5480 arr.DataPtr->0x26cc4ca00 Count = [2||4] count*8 0x10
		FName{None} [fieldAddr->0x28df1f124] offArray=+0x274 AdrArray->0x4E arr.DataPtr->0x0 Count = [4||4] count*8 0x20
		FName{} [fieldAddr->0x28df1f1b0] offArray=+0x300 AdrArray->0x26F6A73C0 arr.DataPtr->0x26cc4c940 Count = [1||4] count*8 0x8
		FName{} [fieldAddr->0x28df1f1c8] offArray=+0x318 AdrArray->0x26F6A74C0 arr.DataPtr->0x26cc4d060 Count = [1||4] count*8 0x8
		FName{} [fieldAddr->0x28df1f1e0] offArray=+0x330 AdrArray->0x26F6A8340 arr.DataPtr->0x26cc4c3a0 Count = [1||4] count*8 0x8
		FName{} [fieldAddr->0x28df1f1f8] offArray=+0x348 AdrArray->0x26ED6FC00 arr.DataPtr->0x11f9dc9d0 Count = [1||4] count*8 0x8
		FName{23548} [fieldAddr->0x28df1f228] offArray=+0x378 AdrArray->0x4E59A07500 arr.DataPtr->0x344068b0 Count = [1||4] count*8 0x8
		FName{None} [fieldAddr->0x28df1f23c] offArray=+0x38C AdrArray->0x6517E1D000000000 arr.DataPtr->0x0 Count = [2||7] count*8 0x10
		FName{None} [fieldAddr->0x28df1f240] offArray=+0x390 AdrArray->0x26517E1D0 arr.DataPtr->0x650072006e0075 Count = [7||8] count*8 0x38
		FName{None} [fieldAddr->0x28df1f24c] offArray=+0x39C AdrArray->0x89D1AE800000000 arr.DataPtr->0x0 Count = [2||13] count*8 0x10
		FName{None} [fieldAddr->0x28df1f250] offArray=+0x3A0 AdrArray->0x289D1AE80 arr.DataPtr->0x31002e00330034 Count = [13||16] count*8 0x68
		FName{None} [fieldAddr->0x28df1f254] offArray=+0x3A4 AdrArray->0x0 arr.DataPtr->0x0 Count = [16||17950] count*8 0x80
		FName{None} [fieldAddr->0x28df1f264] offArray=+0x3B4 AdrArray->0x7523D5200000000 arr.DataPtr->0x0 Count = [2||53] count*8 0x10
		FName{None} [fieldAddr->0x28df1f268] offArray=+0x3B8 AdrArray->0x27523D520 arr.DataPtr->0x6d00610047002f Count = [53||56] count*8 0x1A8
		FName{None} [fieldAddr->0x28df1f274] offArray=+0x3C4 AdrArray->0x6F8425E000000038 arr.DataPtr->0x0 Count = [2||65] count*8 0x10
		FName{None} [fieldAddr->0x28df1f278] offArray=+0x3C8 AdrArray->0x26F8425E0 arr.DataPtr->0x6e00690061004d Count = [65||80] count*8 0x208
		FName{None} [fieldAddr->0x28df1f284] offArray=+0x3D4 AdrArray->0x1351E58000000050 arr.DataPtr->0x0 Count = [1||8] count*8 0x8
		FName{} [fieldAddr->0x28df1f288] offArray=+0x3D8 AdrArray->0x11351E580 arr.DataPtr->0x4e690f2c00 Count = [8||8] count*8 0x40
		FName{None} [fieldAddr->0x28df1f350] offArray=+0x4A0 AdrArray->0x2A62EDC80 arr.DataPtr->0xbe6e0002ffba Count = [1||4] count*8 0x8
		FName{None} [fieldAddr->0x28df1f3a4] offArray=+0x4F4 AdrArray->0x2B037E4000000000 arr.DataPtr->0x0 Count = [1||16] count*8 0x8
		FName{} [fieldAddr->0x28df1f3a8] offArray=+0x4F8 AdrArray->0x12B037E40 arr.DataPtr->0x2fdb3d3d8 Count = [16||24] count*8 0x80
		FName{None} [fieldAddr->0x28df1f424] offArray=+0x574 AdrArray->0x1E945A4000000000 arr.DataPtr->0x0 Count = [1||512] count*8 0x8
		FName{None} [fieldAddr->0x28df1f4f4] offArray=+0x644 AdrArray->0x51C6561000000000 arr.DataPtr->0x0 Count = [1||1] count*8 0x8
		FName{None} [fieldAddr->0x28df1f504] offArray=+0x654 AdrArray->0x1E8B10F000000000 arr.DataPtr->0x0 Count = [1||123] count*8 0x8
		FName{WorldSingletonCollection} [fieldAddr->0x28df1f508] offArray=+0x658 AdrArray->0x11E8B10F0 arr.DataPtr->0x1548b280 Count = [123||170] count*8 0x3D8
		FName{None} [fieldAddr->0x28df1f528] offArray=+0x678 AdrArray->0x0 arr.DataPtr->0x0 Count = [123||128] count*8 0x3D8
		FName{None} [fieldAddr->0x28df1f554] offArray=+0x6A4 AdrArray->0x8456FA8000000000 arr.DataPtr->0x0 Count = [1||9] count*8 0x8
		FName{DesBatchSubsystem} [fieldAddr->0x28df1f558] offArray=+0x6A8 AdrArray->0x18456FA80 arr.DataPtr->0x3e26fd80 Count = [9||22] count*8 0x48
		FName{None} [fieldAddr->0x28df1f55c] offArray=+0x6AC AdrArray->0x0 arr.DataPtr->0x0 Count = [22||511] count*8 0xB0
		FName{None} [fieldAddr->0x28df1f578] offArray=+0x6C8 AdrArray->0x0 arr.DataPtr->0x0 Count = [9||128] count*8 0x48
		FName{None} [fieldAddr->0x28df1f594] offArray=+0x6E4 AdrArray->0x6ED6570000000000 arr.DataPtr->0x0 Count = [2||16] count*8 0x10
		FName{None} [fieldAddr->0x28df1f5ec] offArray=+0x73C AdrArray->0xA464BE600000004B arr.DataPtr->0x0 Count = [2||109] count*8 0x10
		FName{} [fieldAddr->0x28df1f5f0] offArray=+0x740 AdrArray->0x2A464BE60 arr.DataPtr->0x154b9de80 Count = [109||187] count*8 0x368
		FName{None} [fieldAddr->0x28df1f63c] offArray=+0x78C AdrArray->0x5BC82770000000A4 arr.DataPtr->0x0 Count = [2||118] count*8 0x10
		FName{None} [fieldAddr->0x28df1f67c] offArray=+0x7CC AdrArray->0x5BC8F900000000C5 arr.DataPtr->0x0 Count = [2||116] count*8 0x10
		FName{} [fieldAddr->0x28df1f680] offArray=+0x7D0 AdrArray->0x25BC8F900 arr.DataPtr->0x154b9de80 Count = [116||161] count*8 0x3A0
		FName{None} [fieldAddr->0x28df1f6cc] offArray=+0x81C AdrArray->0x6108DD0000000023 arr.DataPtr->0x0 Count = [78||79] count*8 0x270
		FName{None} [fieldAddr->0x28df1faac] offArray=+0xBFC AdrArray->0xDA971000000004E arr.DataPtr->0x0 Count = [1||24] count*8 0x8
		FName{None} [fieldAddr->0x28df1fab0] offArray=+0xC00 AdrArray->0x10DA97100 arr.DataPtr->0x0 Count = [24||25] count*8 0xC0
		FName{None} [fieldAddr->0x28df1fab4] offArray=+0xC04 AdrArray->0x180000000 arr.DataPtr->0x451ba967451b792f Count = [25||26] count*8 0xC8
		FName{None} [fieldAddr->0x28df1fabc] offArray=+0xC0C AdrArray->0x1A00000019 arr.DataPtr->0x0 Count = [25||27] count*8 0xC8
		FName{None} [fieldAddr->0x28df1fac4] offArray=+0xC14 AdrArray->0x1B00000019 arr.DataPtr->0x0 Count = [26||28] count*8 0xD0
		FName{None} [fieldAddr->0x28df1fac8] offArray=+0xC18 AdrArray->0x1A0000001B arr.DataPtr->0x0 Count = [28||29] count*8 0xE0
		FName{None} [fieldAddr->0x28df1facc] offArray=+0xC1C AdrArray->0x1C0000001A arr.DataPtr->0x0 Count = [29||30] count*8 0xE8
		FName{None} [fieldAddr->0x28df1fad4] offArray=+0xC24 AdrArray->0x1E0000001D arr.DataPtr->0x0 Count = [29||31] count*8 0xE8
		FName{None} [fieldAddr->0x28df1fadc] offArray=+0xC2C AdrArray->0x1F0000001D arr.DataPtr->0x0 Count = [30||32] count*8 0xF0
		FName{None} [fieldAddr->0x28df1fae0] offArray=+0xC30 AdrArray->0x1E0000001F arr.DataPtr->0x0 Count = [32||33] count*8 0x100
		FName{None} [fieldAddr->0x28df1fae4] offArray=+0xC34 AdrArray->0x1E arr.DataPtr->0x0 Count = [33||34] count*8 0x108
		FName{None} [fieldAddr->0x28df1faec] offArray=+0xC3C AdrArray->0x2200000021 arr.DataPtr->0x0 Count = [33||35] count*8 0x108
		FName{None} [fieldAddr->0x28df1faf4] offArray=+0xC44 AdrArray->0x2300000021 arr.DataPtr->0x0 Count = [34||36] count*8 0x110
		FName{None} [fieldAddr->0x28df1faf8] offArray=+0xC48 AdrArray->0x2200000023 arr.DataPtr->0x0 Count = [36||37] count*8 0x120
		FName{None} [fieldAddr->0x28df1fafc] offArray=+0xC4C AdrArray->0x2400000022 arr.DataPtr->0x0 Count = [37||38] count*8 0x128
		FName{None} [fieldAddr->0x28df1fb04] offArray=+0xC54 AdrArray->0x2600000025 arr.DataPtr->0x0 Count = [37||39] count*8 0x128
		FName{None} [fieldAddr->0x28df1fb0c] offArray=+0xC5C AdrArray->0x2700000025 arr.DataPtr->0x0 Count = [38||40] count*8 0x130
		FName{None} [fieldAddr->0x28df1fb10] offArray=+0xC60 AdrArray->0x2600000027 arr.DataPtr->0x0 Count = [40||41] count*8 0x140
		FName{None} [fieldAddr->0x28df1fb14] offArray=+0xC64 AdrArray->0x2800000026 arr.DataPtr->0x0 Count = [41||42] count*8 0x148
		FName{None} [fieldAddr->0x28df1fb1c] offArray=+0xC6C AdrArray->0x2A00000029 arr.DataPtr->0x0 Count = [41||43] count*8 0x148
		FName{None} [fieldAddr->0x28df1fb24] offArray=+0xC74 AdrArray->0x2B00000029 arr.DataPtr->0x0 Count = [42||44] count*8 0x150
		FName{None} [fieldAddr->0x28df1fb28] offArray=+0xC78 AdrArray->0x2A0000002B arr.DataPtr->0x0 Count = [44||45] count*8 0x160
		FName{None} [fieldAddr->0x28df1fb2c] offArray=+0xC7C AdrArray->0x2C0000002A arr.DataPtr->0x0 Count = [45||46] count*8 0x168
		FName{None} [fieldAddr->0x28df1fb34] offArray=+0xC84 AdrArray->0x2E0000002D arr.DataPtr->0x0 Count = [45||47] count*8 0x168
		FName{None} [fieldAddr->0x28df1fb3c] offArray=+0xC8C AdrArray->0x2F0000002D arr.DataPtr->0x0 Count = [46||48] count*8 0x170
		FName{None} [fieldAddr->0x28df1fb40] offArray=+0xC90 AdrArray->0x2E0000002F arr.DataPtr->0x0 Count = [48||49] count*8 0x180
		FName{None} [fieldAddr->0x28df1fb44] offArray=+0xC94 AdrArray->0x2E arr.DataPtr->0x0 Count = [49||50] count*8 0x188
		FName{None} [fieldAddr->0x28df1fb4c] offArray=+0xC9C AdrArray->0x3200000031 arr.DataPtr->0x0 Count = [49||51] count*8 0x188
		FName{None} [fieldAddr->0x28df1fb54] offArray=+0xCA4 AdrArray->0x3300000031 arr.DataPtr->0x0 Count = [50||52] count*8 0x190
		FName{None} [fieldAddr->0x28df1fb58] offArray=+0xCA8 AdrArray->0x3200000033 arr.DataPtr->0x0 Count = [52||53] count*8 0x1A0
		FName{None} [fieldAddr->0x28df1fb5c] offArray=+0xCAC AdrArray->0x3400000032 arr.DataPtr->0x0 Count = [53||54] count*8 0x1A8
		FName{None} [fieldAddr->0x28df1fb64] offArray=+0xCB4 AdrArray->0x3600000035 arr.DataPtr->0x0 Count = [53||55] count*8 0x1A8
		FName{None} [fieldAddr->0x28df1fb6c] offArray=+0xCBC AdrArray->0x3700000035 arr.DataPtr->0x0 Count = [54||56] count*8 0x1B0
		FName{None} [fieldAddr->0x28df1fb70] offArray=+0xCC0 AdrArray->0x3600000037 arr.DataPtr->0x0 Count = [56||57] count*8 0x1C0
		FName{None} [fieldAddr->0x28df1fb74] offArray=+0xCC4 AdrArray->0x3800000036 arr.DataPtr->0x0 Count = [57||58] count*8 0x1C8
		FName{None} [fieldAddr->0x28df1fb7c] offArray=+0xCCC AdrArray->0x3A00000039 arr.DataPtr->0x0 Count = [57||59] count*8 0x1C8
		FName{None} [fieldAddr->0x28df1fb84] offArray=+0xCD4 AdrArray->0x3B00000039 arr.DataPtr->0x0 Count = [58||60] count*8 0x1D0
		FName{None} [fieldAddr->0x28df1fb88] offArray=+0xCD8 AdrArray->0x3A0000003B arr.DataPtr->0x0 Count = [60||61] count*8 0x1E0
		FName{None} [fieldAddr->0x28df1fb8c] offArray=+0xCDC AdrArray->0x3C0000003A arr.DataPtr->0x0 Count = [61||62] count*8 0x1E8
		FName{None} [fieldAddr->0x28df1fb94] offArray=+0xCE4 AdrArray->0x3E0000003D arr.DataPtr->0x0 Count = [61||63] count*8 0x1E8
		FName{None} [fieldAddr->0x28df1fb9c] offArray=+0xCEC AdrArray->0x3F0000003D arr.DataPtr->0x0 Count = [62||64] count*8 0x1F0
		FName{None} [fieldAddr->0x28df1fba0] offArray=+0xCF0 AdrArray->0x3E0000003F arr.DataPtr->0x0 Count = [64||65] count*8 0x200
		FName{None} [fieldAddr->0x28df1fba4] offArray=+0xCF4 AdrArray->0x3E arr.DataPtr->0x0 Count = [65||66] count*8 0x208
		FName{None} [fieldAddr->0x28df1fbac] offArray=+0xCFC AdrArray->0x4200000041 arr.DataPtr->0x0 Count = [65||67] count*8 0x208
		FName{None} [fieldAddr->0x28df1fbb4] offArray=+0xD04 AdrArray->0x4300000041 arr.DataPtr->0x0 Count = [66||68] count*8 0x210
		FName{None} [fieldAddr->0x28df1fbb8] offArray=+0xD08 AdrArray->0x4200000043 arr.DataPtr->0x0 Count = [68||69] count*8 0x220
		FName{None} [fieldAddr->0x28df1fbbc] offArray=+0xD0C AdrArray->0x4400000042 arr.DataPtr->0x0 Count = [69||70] count*8 0x228
		FName{None} [fieldAddr->0x28df1fbc4] offArray=+0xD14 AdrArray->0x4600000045 arr.DataPtr->0x0 Count = [69||71] count*8 0x228
		FName{None} [fieldAddr->0x28df1fbcc] offArray=+0xD1C AdrArray->0x4700000045 arr.DataPtr->0x0 Count = [70||72] count*8 0x230
		FName{None} [fieldAddr->0x28df1fbd0] offArray=+0xD20 AdrArray->0x4600000047 arr.DataPtr->0x0 Count = [72||73] count*8 0x240
		FName{None} [fieldAddr->0x28df1fbd4] offArray=+0xD24 AdrArray->0x4800000046 arr.DataPtr->0x0 Count = [73||74] count*8 0x248
		FName{None} [fieldAddr->0x28df1fbdc] offArray=+0xD2C AdrArray->0x4A00000049 arr.DataPtr->0x0 Count = [73||75] count*8 0x248
		FName{None} [fieldAddr->0x28df1fbe4] offArray=+0xD34 AdrArray->0x4B00000049 arr.DataPtr->0x0 Count = [74||76] count*8 0x250
		FName{None} [fieldAddr->0x28df1fbe8] offArray=+0xD38 AdrArray->0x4A0000004B arr.DataPtr->0x0 Count = [76||77] count*8 0x260
		FName{None} [fieldAddr->0x28df1fbec] offArray=+0xD3C AdrArray->0x4C0000004A arr.DataPtr->0x0 Count = [77||78] count*8 0x268
		FName{None} [fieldAddr->0x28df1fbf4] offArray=+0xD44 AdrArray->0x4E0000004D arr.DataPtr->0x29c100002a Count = [77||79] count*8 0x268
		FName{None} [fieldAddr->0x28df1fbfc] offArray=+0xD4C AdrArray->0x4F0000004D arr.DataPtr->0x0 Count = [78||80] count*8 0x270
		FName{None} [fieldAddr->0x28df1fc00] offArray=+0xD50 AdrArray->0x4E0000004F arr.DataPtr->0x29c100 Count = [80||81] count*8 0x280
		FName{None} [fieldAddr->0x28df1fc04] offArray=+0xD54 AdrArray->0x4E arr.DataPtr->0x0 Count = [81||82] count*8 0x288
		FName{None} [fieldAddr->0x28df1fc0c] offArray=+0xD5C AdrArray->0x5200000051 arr.DataPtr->0x0 Count = [81||83] count*8 0x288
		FName{None} [fieldAddr->0x28df1fc14] offArray=+0xD64 AdrArray->0x5300000051 arr.DataPtr->0x0 Count = [82||84] count*8 0x290
		FName{None} [fieldAddr->0x28df1fc18] offArray=+0xD68 AdrArray->0x5200000053 arr.DataPtr->0x0 Count = [84||85] count*8 0x2A0
		FName{None} [fieldAddr->0x28df1fc1c] offArray=+0xD6C AdrArray->0x5400000052 arr.DataPtr->0x0 Count = [85||86] count*8 0x2A8
		FName{None} [fieldAddr->0x28df1fc24] offArray=+0xD74 AdrArray->0x5600000055 arr.DataPtr->0x0 Count = [85||87] count*8 0x2A8
		FName{None} [fieldAddr->0x28df1fc2c] offArray=+0xD7C AdrArray->0x5700000055 arr.DataPtr->0x0 Count = [86||88] count*8 0x2B0
		FName{None} [fieldAddr->0x28df1fc30] offArray=+0xD80 AdrArray->0x5600000057 arr.DataPtr->0x0 Count = [88||89] count*8 0x2C0
		FName{None} [fieldAddr->0x28df1fc34] offArray=+0xD84 AdrArray->0x5800000056 arr.DataPtr->0x0 Count = [89||90] count*8 0x2C8
		FName{None} [fieldAddr->0x28df1fc3c] offArray=+0xD8C AdrArray->0x5A00000059 arr.DataPtr->0x0 Count = [89||91] count*8 0x2C8
		FName{None} [fieldAddr->0x28df1fc44] offArray=+0xD94 AdrArray->0x5B00000059 arr.DataPtr->0x0 Count = [90||92] count*8 0x2D0
		FName{None} [fieldAddr->0x28df1fc48] offArray=+0xD98 AdrArray->0x5A0000005B arr.DataPtr->0x0 Count = [92||93] count*8 0x2E0
		FName{None} [fieldAddr->0x28df1fc4c] offArray=+0xD9C AdrArray->0x5C0000005A arr.DataPtr->0x0 Count = [93||94] count*8 0x2E8
		FName{None} [fieldAddr->0x28df1fc54] offArray=+0xDA4 AdrArray->0x5E0000005D arr.DataPtr->0x0 Count = [93||95] count*8 0x2E8
		FName{None} [fieldAddr->0x28df1fc5c] offArray=+0xDAC AdrArray->0x5F0000005D arr.DataPtr->0x0 Count = [94||96] count*8 0x2F0
		FName{None} [fieldAddr->0x28df1fc60] offArray=+0xDB0 AdrArray->0x5E0000005F arr.DataPtr->0x0 Count = [96||97] count*8 0x300
		FName{None} [fieldAddr->0x28df1fc64] offArray=+0xDB4 AdrArray->0x5E arr.DataPtr->0x0 Count = [97||98] count*8 0x308
		FName{None} [fieldAddr->0x28df1fc6c] offArray=+0xDBC AdrArray->0x6200000061 arr.DataPtr->0x0 Count = [97||99] count*8 0x308
		FName{None} [fieldAddr->0x28df1fc74] offArray=+0xDC4 AdrArray->0x6300000061 arr.DataPtr->0x0 Count = [98||100] count*8 0x310
		FName{None} [fieldAddr->0x28df1fc78] offArray=+0xDC8 AdrArray->0x6200000063 arr.DataPtr->0x0 Count = [100||101] count*8 0x320
		FName{None} [fieldAddr->0x28df1fc7c] offArray=+0xDCC AdrArray->0x6400000062 arr.DataPtr->0x0 Count = [101||102] count*8 0x328
		FName{None} [fieldAddr->0x28df1fc84] offArray=+0xDD4 AdrArray->0x6600000065 arr.DataPtr->0x0 Count = [101||103] count*8 0x328
		FName{None} [fieldAddr->0x28df1fc8c] offArray=+0xDDC AdrArray->0x6700000065 arr.DataPtr->0x0 Count = [102||104] count*8 0x330
		FName{None} [fieldAddr->0x28df1fc90] offArray=+0xDE0 AdrArray->0x6600000067 arr.DataPtr->0x0 Count = [104||105] count*8 0x340
		FName{None} [fieldAddr->0x28df1fc94] offArray=+0xDE4 AdrArray->0x6800000066 arr.DataPtr->0x0 Count = [105||106] count*8 0x348
		FName{None} [fieldAddr->0x28df1fc9c] offArray=+0xDEC AdrArray->0x6A00000069 arr.DataPtr->0x0 Count = [105||107] count*8 0x348
		FName{None} [fieldAddr->0x28df1fca4] offArray=+0xDF4 AdrArray->0x6B00000069 arr.DataPtr->0x0 Count = [106||108] count*8 0x350
		FName{None} [fieldAddr->0x28df1fca8] offArray=+0xDF8 AdrArray->0x6A0000006B arr.DataPtr->0x0 Count = [108||109] count*8 0x360
		FName{None} [fieldAddr->0x28df1fcac] offArray=+0xDFC AdrArray->0x6C0000006A arr.DataPtr->0x0 Count = [109||110] count*8 0x368
		FName{None} [fieldAddr->0x28df1fcb4] offArray=+0xE04 AdrArray->0x6E0000006D arr.DataPtr->0x0 Count = [109||111] count*8 0x368
		FName{None} [fieldAddr->0x28df1fcbc] offArray=+0xE0C AdrArray->0x6F0000006D arr.DataPtr->0x0 Count = [110||112] count*8 0x370
		FName{None} [fieldAddr->0x28df1fcc0] offArray=+0xE10 AdrArray->0x6E0000006F arr.DataPtr->0x0 Count = [112||113] count*8 0x380
		FName{None} [fieldAddr->0x28df1fcc4] offArray=+0xE14 AdrArray->0x6E arr.DataPtr->0x0 Count = [113||114] count*8 0x388
		FName{None} [fieldAddr->0x28df1fccc] offArray=+0xE1C AdrArray->0x7200000071 arr.DataPtr->0x0 Count = [113||115] count*8 0x388
		FName{None} [fieldAddr->0x28df1fcd4] offArray=+0xE24 AdrArray->0x7300000071 arr.DataPtr->0x0 Count = [114||116] count*8 0x390
		FName{None} [fieldAddr->0x28df1fcd8] offArray=+0xE28 AdrArray->0x7200000073 arr.DataPtr->0x0 Count = [116||117] count*8 0x3A0
		FName{None} [fieldAddr->0x28df1fcdc] offArray=+0xE2C AdrArray->0x7400000072 arr.DataPtr->0x0 Count = [117||118] count*8 0x3A8
		FName{None} [fieldAddr->0x28df1fce4] offArray=+0xE34 AdrArray->0x7600000075 arr.DataPtr->0x0 Count = [117||119] count*8 0x3A8
		FName{None} [fieldAddr->0x28df1fcec] offArray=+0xE3C AdrArray->0x7700000075 arr.DataPtr->0x0 Count = [118||120] count*8 0x3B0
		FName{None} [fieldAddr->0x28df1fcf0] offArray=+0xE40 AdrArray->0x7600000077 arr.DataPtr->0x0 Count = [120||121] count*8 0x3C0
		FName{None} [fieldAddr->0x28df1fcf4] offArray=+0xE44 AdrArray->0x7800000076 arr.DataPtr->0x0 Count = [121||122] count*8 0x3C8
		FName{None} [fieldAddr->0x28df1fcfc] offArray=+0xE4C AdrArray->0x7A00000079 arr.DataPtr->0x0 Count = [121||123] count*8 0x3C8
		FName{None} [fieldAddr->0x28df1fd04] offArray=+0xE54 AdrArray->0x7B00000079 arr.DataPtr->0x0 Count = [122||124] count*8 0x3D0
		FName{None} [fieldAddr->0x28df1fd08] offArray=+0xE58 AdrArray->0x7A0000007B arr.DataPtr->0x0 Count = [124||125] count*8 0x3E0
		FName{None} [fieldAddr->0x28df1fd0c] offArray=+0xE5C AdrArray->0x7C0000007A arr.DataPtr->0x0 Count = [125||126] count*8 0x3E8
		FName{None} [fieldAddr->0x28df1fd14] offArray=+0xE64 AdrArray->0x7E0000007D arr.DataPtr->0x0 Count = [125||127] count*8 0x3E8
		FName{None} [fieldAddr->0x28df1fd1c] offArray=+0xE6C AdrArray->0x7F0000007D arr.DataPtr->0x0 Count = [126||128] count*8 0x3F0
		FName{None} [fieldAddr->0x28df1fd20] offArray=+0xE70 AdrArray->0x7E0000007F arr.DataPtr->0x0 Count = [128||129] count*8 0x400
		FName{None} [fieldAddr->0x28df1fd24] offArray=+0xE74 AdrArray->0x7E arr.DataPtr->0x0 Count = [129||130] count*8 0x408
		FName{None} [fieldAddr->0x28df1fd2c] offArray=+0xE7C AdrArray->0x8200000081 arr.DataPtr->0x0 Count = [129||131] count*8 0x408
		FName{None} [fieldAddr->0x28df1fd34] offArray=+0xE84 AdrArray->0x8300000081 arr.DataPtr->0x0 Count = [130||132] count*8 0x410
		FName{None} [fieldAddr->0x28df1fd38] offArray=+0xE88 AdrArray->0x8200000083 arr.DataPtr->0x0 Count = [132||133] count*8 0x420
		FName{None} [fieldAddr->0x28df1fd3c] offArray=+0xE8C AdrArray->0x8400000082 arr.DataPtr->0x0 Count = [133||134] count*8 0x428
		FName{None} [fieldAddr->0x28df1fd44] offArray=+0xE94 AdrArray->0x8600000085 arr.DataPtr->0x0 Count = [133||135] count*8 0x428
		FName{None} [fieldAddr->0x28df1fd4c] offArray=+0xE9C AdrArray->0x8700000085 arr.DataPtr->0x0 Count = [134||136] count*8 0x430
		FName{None} [fieldAddr->0x28df1fd50] offArray=+0xEA0 AdrArray->0x8600000087 arr.DataPtr->0x0 Count = [136||137] count*8 0x440
		FName{None} [fieldAddr->0x28df1fd54] offArray=+0xEA4 AdrArray->0x8800000086 arr.DataPtr->0x0 Count = [137||138] count*8 0x448
		FName{None} [fieldAddr->0x28df1fd5c] offArray=+0xEAC AdrArray->0x8A00000089 arr.DataPtr->0x0 Count = [137||139] count*8 0x448
		FName{None} [fieldAddr->0x28df1fd6c] offArray=+0xEBC AdrArray->0x8A arr.DataPtr->0x0 Count = [1||2] count*8 0x8
		FName{None} [fieldAddr->0x28df1fd74] offArray=+0xEC4 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||3] count*8 0x8
		FName{None} [fieldAddr->0x28df1fd7c] offArray=+0xECC AdrArray->0x0 arr.DataPtr->0x0 Count = [2||4] count*8 0x10
		FName{None} [fieldAddr->0x28df1fd80] offArray=+0xED0 AdrArray->0x0 arr.DataPtr->0x0 Count = [4||5] count*8 0x20
		FName{None} [fieldAddr->0x28df1fd84] offArray=+0xED4 AdrArray->0x0 arr.DataPtr->0x0 Count = [5||6] count*8 0x28
		FName{None} [fieldAddr->0x28df1fd8c] offArray=+0xEDC AdrArray->0x0 arr.DataPtr->0x0 Count = [5||7] count*8 0x28
		FName{None} [fieldAddr->0x28df1fd9c] offArray=+0xEEC AdrArray->0x0 arr.DataPtr->0x0 Count = [1||2] count*8 0x8
		FName{None} [fieldAddr->0x28df1fda4] offArray=+0xEF4 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||3] count*8 0x8
		FName{None} [fieldAddr->0x28df1fdac] offArray=+0xEFC AdrArray->0x0 arr.DataPtr->0x0 Count = [2||4] count*8 0x10
		FName{None} [fieldAddr->0x28df1fdb0] offArray=+0xF00 AdrArray->0x0 arr.DataPtr->0x0 Count = [4||5] count*8 0x20
		FName{None} [fieldAddr->0x28df1fdb4] offArray=+0xF04 AdrArray->0x0 arr.DataPtr->0x0 Count = [5||6] count*8 0x28
		FName{None} [fieldAddr->0x28df1fdbc] offArray=+0xF0C AdrArray->0x0 arr.DataPtr->0x0 Count = [5||7] count*8 0x28
		FName{None} [fieldAddr->0x28df1fdcc] offArray=+0xF1C AdrArray->0x0 arr.DataPtr->0x0 Count = [1||2] count*8 0x8
		FName{None} [fieldAddr->0x28df1fdd4] offArray=+0xF24 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||3] count*8 0x8
		FName{None} [fieldAddr->0x28df1fddc] offArray=+0xF2C AdrArray->0x0 arr.DataPtr->0x0 Count = [2||4] count*8 0x10
		FName{None} [fieldAddr->0x28df1fde0] offArray=+0xF30 AdrArray->0x0 arr.DataPtr->0x0 Count = [4||5] count*8 0x20
		FName{None} [fieldAddr->0x28df1fde4] offArray=+0xF34 AdrArray->0x0 arr.DataPtr->0x0 Count = [5||6] count*8 0x28
		FName{None} [fieldAddr->0x28df1fdec] offArray=+0xF3C AdrArray->0x0 arr.DataPtr->0x0 Count = [5||7] count*8 0x28
		FName{None} [fieldAddr->0x28df1fdf4] offArray=+0xF44 AdrArray->0x0 arr.DataPtr->0x0 Count = [6||8] count*8 0x30
		FName{None} [fieldAddr->0x28df1fdf8] offArray=+0xF48 AdrArray->0x0 arr.DataPtr->0x0 Count = [8||9] count*8 0x40
		FName{None} [fieldAddr->0x28df1fdfc] offArray=+0xF4C AdrArray->0x0 arr.DataPtr->0x0 Count = [9||10] count*8 0x48
		FName{None} [fieldAddr->0x28df1fe04] offArray=+0xF54 AdrArray->0x0 arr.DataPtr->0x0 Count = [9||11] count*8 0x48
		FName{None} [fieldAddr->0x28df1fe0c] offArray=+0xF5C AdrArray->0x0 arr.DataPtr->0x0 Count = [10||12] count*8 0x50
		FName{None} [fieldAddr->0x28df1fe10] offArray=+0xF60 AdrArray->0x0 arr.DataPtr->0x0 Count = [12||13] count*8 0x60
		FName{None} [fieldAddr->0x28df1fe14] offArray=+0xF64 AdrArray->0x0 arr.DataPtr->0x0 Count = [13||14] count*8 0x68
		FName{None} [fieldAddr->0x28df1fe1c] offArray=+0xF6C AdrArray->0x0 arr.DataPtr->0x0 Count = [13||15] count*8 0x68
		FName{None} [fieldAddr->0x28df1fe24] offArray=+0xF74 AdrArray->0x0 arr.DataPtr->0x0 Count = [14||16] count*8 0x70
		FName{None} [fieldAddr->0x28df1fe28] offArray=+0xF78 AdrArray->0x0 arr.DataPtr->0x0 Count = [16||17] count*8 0x80
		FName{None} [fieldAddr->0x28df1fe2c] offArray=+0xF7C AdrArray->0x0 arr.DataPtr->0x0 Count = [17||18] count*8 0x88
		FName{None} [fieldAddr->0x28df1fe34] offArray=+0xF84 AdrArray->0x1200000011 arr.DataPtr->0x0 Count = [17||19] count*8 0x88
		FName{None} [fieldAddr->0x28df1fe3c] offArray=+0xF8C AdrArray->0x1300000011 arr.DataPtr->0x0 Count = [18||20] count*8 0x90
		FName{None} [fieldAddr->0x28df1fe40] offArray=+0xF90 AdrArray->0x1200000013 arr.DataPtr->0x0 Count = [20||21] count*8 0xA0
		FName{None} [fieldAddr->0x28df1fe44] offArray=+0xF94 AdrArray->0x1400000012 arr.DataPtr->0x0 Count = [21||22] count*8 0xA8
		FName{None} [fieldAddr->0x28df1fe4c] offArray=+0xF9C AdrArray->0x1600000015 arr.DataPtr->0x0 Count = [21||23] count*8 0xA8
		FName{None} [fieldAddr->0x28df1fe54] offArray=+0xFA4 AdrArray->0x1700000015 arr.DataPtr->0x0 Count = [22||24] count*8 0xB0
		FName{None} [fieldAddr->0x28df1fe58] offArray=+0xFA8 AdrArray->0x1600000017 arr.DataPtr->0x0 Count = [24||25] count*8 0xC0
		FName{None} [fieldAddr->0x28df1fe5c] offArray=+0xFAC AdrArray->0x1800000016 arr.DataPtr->0x0 Count = [25||26] count*8 0xC8
		FName{None} [fieldAddr->0x28df1fe64] offArray=+0xFB4 AdrArray->0x1A00000019 arr.DataPtr->0x0 Count = [25||27] count*8 0xC8
		FName{None} [fieldAddr->0x28df1fe6c] offArray=+0xFBC AdrArray->0x1B00000019 arr.DataPtr->0x0 Count = [26||28] count*8 0xD0
		FName{None} [fieldAddr->0x28df1fe70] offArray=+0xFC0 AdrArray->0x1A0000001B arr.DataPtr->0x0 Count = [28||29] count*8 0xE0
		FName{None} [fieldAddr->0x28df1fe74] offArray=+0xFC4 AdrArray->0x1C0000001A arr.DataPtr->0x0 Count = [29||30] count*8 0xE8
		FName{None} [fieldAddr->0x28df1fe7c] offArray=+0xFCC AdrArray->0x1E0000001D arr.DataPtr->0x0 Count = [29||31] count*8 0xE8
		FName{None} [fieldAddr->0x28df1fe84] offArray=+0xFD4 AdrArray->0x1F0000001D arr.DataPtr->0x0 Count = [30||32] count*8 0xF0
		FName{None} [fieldAddr->0x28df1fe88] offArray=+0xFD8 AdrArray->0x1E0000001F arr.DataPtr->0x0 Count = [32||33] count*8 0x100
		FName{None} [fieldAddr->0x28df1fe8c] offArray=+0xFDC AdrArray->0x1E arr.DataPtr->0x0 Count = [33||34] count*8 0x108
		FName{None} [fieldAddr->0x28df1fe94] offArray=+0xFE4 AdrArray->0x2200000021 arr.DataPtr->0x0 Count = [33||35] count*8 0x108
		FName{None} [fieldAddr->0x28df1fe9c] offArray=+0xFEC AdrArray->0x2300000021 arr.DataPtr->0x0 Count = [34||36] count*8 0x110
		FName{None} [fieldAddr->0x28df1fea0] offArray=+0xFF0 AdrArray->0x2200000023 arr.DataPtr->0x0 Count = [36||37] count*8 0x120
		FName{None} [fieldAddr->0x28df1fea4] offArray=+0xFF4 AdrArray->0x2400000022 arr.DataPtr->0x0 Count = [37||38] count*8 0x128
		FName{None} [fieldAddr->0x28df1feac] offArray=+0xFFC AdrArray->0x2600000025 arr.DataPtr->0x0 Count = [37||39] count*8 0x128
		FName{None} [fieldAddr->0x28df1febc] offArray=+0x100C AdrArray->0x26 arr.DataPtr->0x0 Count = [1||2] count*8 0x8
		FName{None} [fieldAddr->0x28df1fec4] offArray=+0x1014 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||3] count*8 0x8
		FName{None} [fieldAddr->0x28df1fecc] offArray=+0x101C AdrArray->0x0 arr.DataPtr->0x0 Count = [2||4] count*8 0x10
		FName{None} [fieldAddr->0x28df1fed0] offArray=+0x1020 AdrArray->0x0 arr.DataPtr->0x0 Count = [4||5] count*8 0x20
		FName{None} [fieldAddr->0x28df1fed4] offArray=+0x1024 AdrArray->0x0 arr.DataPtr->0x0 Count = [5||6] count*8 0x28
		FName{None} [fieldAddr->0x28df1fedc] offArray=+0x102C AdrArray->0x0 arr.DataPtr->0x0 Count = [5||7] count*8 0x28
		FName{None} [fieldAddr->0x28df1fee4] offArray=+0x1034 AdrArray->0x0 arr.DataPtr->0x0 Count = [6||8] count*8 0x30
		FName{None} [fieldAddr->0x28df1fee8] offArray=+0x1038 AdrArray->0x0 arr.DataPtr->0x0 Count = [8||9] count*8 0x40
		FName{None} [fieldAddr->0x28df1feec] offArray=+0x103C AdrArray->0x0 arr.DataPtr->0x0 Count = [9||10] count*8 0x48
		FName{None} [fieldAddr->0x28df1fef4] offArray=+0x1044 AdrArray->0x0 arr.DataPtr->0x0 Count = [9||11] count*8 0x48
		FName{None} [fieldAddr->0x28df1fefc] offArray=+0x104C AdrArray->0x0 arr.DataPtr->0x0 Count = [10||12] count*8 0x50
		FName{None} [fieldAddr->0x28df1ff00] offArray=+0x1050 AdrArray->0x0 arr.DataPtr->0x0 Count = [12||13] count*8 0x60
		FName{None} [fieldAddr->0x28df1ff04] offArray=+0x1054 AdrArray->0x0 arr.DataPtr->0x0 Count = [13||14] count*8 0x68
		FName{None} [fieldAddr->0x28df1ff0c] offArray=+0x105C AdrArray->0x0 arr.DataPtr->0x0 Count = [13||15] count*8 0x68
		FName{None} [fieldAddr->0x28df1ff14] offArray=+0x1064 AdrArray->0x0 arr.DataPtr->0x0 Count = [14||16] count*8 0x70
		FName{None} [fieldAddr->0x28df1ff18] offArray=+0x1068 AdrArray->0x0 arr.DataPtr->0x0 Count = [16||17] count*8 0x80
		FName{None} [fieldAddr->0x28df1ff1c] offArray=+0x106C AdrArray->0x0 arr.DataPtr->0x0 Count = [17||18] count*8 0x88
		FName{None} [fieldAddr->0x28df1ff24] offArray=+0x1074 AdrArray->0x1200000011 arr.DataPtr->0x0 Count = [17||19] count*8 0x88
		FName{None} [fieldAddr->0x28df1ff2c] offArray=+0x107C AdrArray->0x1300000011 arr.DataPtr->0x0 Count = [18||20] count*8 0x90
		FName{None} [fieldAddr->0x28df1ff30] offArray=+0x1080 AdrArray->0x1200000013 arr.DataPtr->0x0 Count = [20||21] count*8 0xA0
		FName{None} [fieldAddr->0x28df1ff34] offArray=+0x1084 AdrArray->0x1400000012 arr.DataPtr->0x0 Count = [21||22] count*8 0xA8
		FName{None} [fieldAddr->0x28df1ff3c] offArray=+0x108C AdrArray->0x1600000015 arr.DataPtr->0x0 Count = [21||23] count*8 0xA8
		FName{None} [fieldAddr->0x28df1ff44] offArray=+0x1094 AdrArray->0x1700000015 arr.DataPtr->0x0 Count = [22||24] count*8 0xB0
		FName{None} [fieldAddr->0x28df1ff48] offArray=+0x1098 AdrArray->0x1600000017 arr.DataPtr->0x0 Count = [24||25] count*8 0xC0
		FName{None} [fieldAddr->0x28df1ff4c] offArray=+0x109C AdrArray->0x1800000016 arr.DataPtr->0x0 Count = [25||26] count*8 0xC8
		FName{None} [fieldAddr->0x28df1ff54] offArray=+0x10A4 AdrArray->0x1A00000019 arr.DataPtr->0x0 Count = [25||27] count*8 0xC8
		FName{None} [fieldAddr->0x28df1ff5c] offArray=+0x10AC AdrArray->0x1B00000019 arr.DataPtr->0x0 Count = [26||28] count*8 0xD0
		FName{None} [fieldAddr->0x28df1ff60] offArray=+0x10B0 AdrArray->0x1A0000001B arr.DataPtr->0x0 Count = [28||29] count*8 0xE0
		FName{None} [fieldAddr->0x28df1ff64] offArray=+0x10B4 AdrArray->0x1C0000001A arr.DataPtr->0x0 Count = [29||30] count*8 0xE8
		FName{None} [fieldAddr->0x28df1ff6c] offArray=+0x10BC AdrArray->0x1E0000001D arr.DataPtr->0x0 Count = [29||31] count*8 0xE8
		FName{None} [fieldAddr->0x28df1ff74] offArray=+0x10C4 AdrArray->0x1F0000001D arr.DataPtr->0x0 Count = [30||32] count*8 0xF0
		FName{None} [fieldAddr->0x28df1ff78] offArray=+0x10C8 AdrArray->0x1E0000001F arr.DataPtr->0x0 Count = [32||33] count*8 0x100
		FName{None} [fieldAddr->0x28df1ff7c] offArray=+0x10CC AdrArray->0x1E arr.DataPtr->0x0 Count = [33||34] count*8 0x108
		FName{None} [fieldAddr->0x28df1ff84] offArray=+0x10D4 AdrArray->0x2200000021 arr.DataPtr->0x0 Count = [33||35] count*8 0x108
		FName{None} [fieldAddr->0x28df1ff8c] offArray=+0x10DC AdrArray->0x2300000021 arr.DataPtr->0x0 Count = [34||36] count*8 0x110
		FName{None} [fieldAddr->0x28df1ff90] offArray=+0x10E0 AdrArray->0x2200000023 arr.DataPtr->0x0 Count = [36||37] count*8 0x120
		FName{None} [fieldAddr->0x28df1ff94] offArray=+0x10E4 AdrArray->0x2400000022 arr.DataPtr->0x0 Count = [37||38] count*8 0x128
		FName{None} [fieldAddr->0x28df1ff9c] offArray=+0x10EC AdrArray->0x2600000025 arr.DataPtr->0x0 Count = [37||39] count*8 0x128
		FName{None} [fieldAddr->0x28df200fc] offArray=+0x124C AdrArray->0x8E0F510000000000 arr.DataPtr->0x0 Count = [1||11] count*8 0x8
		FName{None} [fieldAddr->0x28df20100] offArray=+0x1250 AdrArray->0x18E0F5100 arr.DataPtr->0x0 Count = [11||32] count*8 0x58
		FName{None} [fieldAddr->0x28df20110] offArray=+0x1260 AdrArray->0x4E64103400 arr.DataPtr->0x7618f1 Count = [11||32] count*8 0x58
		FName{None} [fieldAddr->0x28df20120] offArray=+0x1270 AdrArray->0x4E5DD119E0 arr.DataPtr->0x0 Count = [11||32] count*8 0x58
		FName{None} [fieldAddr->0x28df2014c] offArray=+0x129C AdrArray->0x8304D58000000000 arr.DataPtr->0x0 Count = [1||220] count*8 0x8
		FName{None} [fieldAddr->0x28df20150] offArray=+0x12A0 AdrArray->0x18304D580 arr.DataPtr->0x0 Count = [220||340] count*8 0x6E0
		FName{None} [fieldAddr->0x28df2015c] offArray=+0x12AC AdrArray->0x5C41207000000154 arr.DataPtr->0x0 Count = [78||220] count*8 0x270
		FName{None} [fieldAddr->0x28df20160] offArray=+0x12B0 AdrArray->0x4E5C412070 arr.DataPtr->0x764019 Count = [220||340] count*8 0x6E0
		FName{None} [fieldAddr->0x28df2016c] offArray=+0x12BC AdrArray->0xA614038000000154 arr.DataPtr->0x0 Count = [2||220] count*8 0x10
		FName{None} [fieldAddr->0x28df20170] offArray=+0x12C0 AdrArray->0x2A6140380 arr.DataPtr->0x0 Count = [220||320] count*8 0x6E0
		FName{None} [fieldAddr->0x28df201b0] offArray=+0x1300 AdrArray->0x4E693AD940 arr.DataPtr->0x3000200010000 Count = [1||2] count*8 0x8
		FName{None} [fieldAddr->0x28df20218] offArray=+0x1368 AdrArray->0x4E693A45E0 arr.DataPtr->0x3000200010000 Count = [4||8] count*8 0x20

	*/
	//if (CountOn(Datap.Data, Datap.Count, Datap.Max) == true)
	unsigned char ArrayLevelOffset[sizeof(0x1500)]{};
	driver.readmemory((PVOID)Addr, &ArrayLevelOffset, sizeof(ArrayLevelOffset)); 
	TLavelRaw OffsetArrayType30 =*(TLavelRaw*)(ArrayLevelOffset + 0x30);
	PrintfLogArraycoujnt(OffsetArrayType30, 0x30);

	TLavelRaw OffsetArrayType58 =*(TLavelRaw*)(ArrayLevelOffset + 0x58);
	PrintfLogArraycoujnt(OffsetArrayType58, 0x58);
	TLavelRaw OffsetArrayType88 =*(TLavelRaw*)(ArrayLevelOffset + 0x88);
	PrintfLogArraycoujnt(OffsetArrayType88, 0x88);
    TLavelRaw OffsetArrayType98 =*(TLavelRaw*)(ArrayLevelOffset + 0x98);
	PrintfLogArraycoujnt(OffsetArrayType98, 0x98);

	TLavelRaw OffsetArrayTypeA8 =*(TLavelRaw*)(ArrayLevelOffset + 0xa8);
	PrintfLogArraycoujnt(OffsetArrayTypeA8, 0xA8);
	TLavelRaw OffsetArrayTypeB8 =*(TLavelRaw*)(ArrayLevelOffset + 0xb8); 
	PrintfLogArraycoujnt(OffsetArrayTypeB8, 0xB8); 
 
}



```
