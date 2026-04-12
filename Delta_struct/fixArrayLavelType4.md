
---
core
---
```cpp

 struct Lavel4Array
 { 
	 uintptr_t newBaselow; // -8
	 uintptr_t newBaseEncore; // +0
	 uintptr_t newBasehigh; // +8
	 uintptr_t newBaseSuperhigh; // +16 
 }; 

struct AddressParts
{
	uintptr_t original;      // เต็ม 0x400200028A12AD20   

	uintptr_t tagA;          // 0x400
	uintptr_t tagB;          // 0x2000

	uintptr_t prefix;        // 0x4002000
	uintptr_t core;          // 0x28A12AD20

	uintptr_t variant0;      // 0x28A12AD20
	uintptr_t variant4;      // 0x48A12AD20
	uintptr_t variant8;      // 0x8A12AD20
};
uintptr_t DepointDef(uintptr_t fieldAddr)
{
	fieldAddr = (ChackPtrEncore(fieldAddr) == true) ? TrimTrailingNibble(fieldAddr) : fieldAddr;

	AddressParts pfieldAddr = SplitAddressPrecise(fieldAddr);



	fieldAddr = (fieldAddr != 0 && fieldAddr > (int)0x1000000000 || isBadPtr(fieldAddr)) ? pfieldAddr.core : fieldAddr;
	return fieldAddr;

}
	auto LavelArrayS4 = driver.read<Lavel4Array>(Uworld + 0xF0);

	auto PersistentLevel = DepointDef(LavelArrayS4.newBaseEncore);


	std::string FPersistentLevel = GetAutoChack(PersistentLevel);
	std::string FPersistentLevelLow = GetAutoChack(LavelArrayS4.newBaselow);
	std::string FPersistentLevelhigh = GetAutoChack(LavelArrayS4.newBasehigh);
	std::string FPersistentLevelSuperhigh = GetAutoChack(LavelArrayS4.newBaseSuperhigh);

	printf(xorstr_("PersistentLevel Def{0x%llX [%s]} low{0x%llX [%s]} high{0x%llX [%s]} Vhigh{0x%llX [%s]} \n")
		, PersistentLevel, FPersistentLevel.c_str()
		, LavelArrayS4.newBaselow, FPersistentLevelLow.c_str()
		, LavelArrayS4.newBasehigh, FPersistentLevelhigh.c_str()
		, LavelArrayS4.newBaseSuperhigh, FPersistentLevelSuperhigh.c_str());
```
---
log test auto GetOffset  Actor +Offset; 

```hex
  PersistentLevel Def{0x2D1CB3021 [None]} low{0x2BD91D600 [ParticleEventManager]} high{0x2BF634AE0 [DefaultPhysicsVolume]} Vhigh{0x27085ECB0 []}
      Ptr 0x00000002D1CB3021 Keystr->0x1C Str[None]
      Ptr 0x00000002BD91D600 Keystr->0x1C Str[ParticleEventManager]
      Ptr 0x00000002BF634AE0 Keystr->0x1C Str[DefaultPhysicsVolume]
      Ptr 0x000000027085ECB0 Keystr->0x1C Str[]
       Ptr 0x00000002D1CB3021 Keystr->0x1C Str[None]
 
  Ptr 0x00000002BD91D600 Keystr->0x1C Str[ParticleEventManager]  
				FName{None}AddrStart->[0x8-0x78||offsetActor::0xfffffff8] [fieldAddr->0x2bd91d990] offArray=+0x390 AdrArray->0x0 arr.DataPtr->0x0 Count = [15||23] count*8[0x78]
				FName{None}AddrStart->[0x8-0x48||offsetActor::0xfffffff8] [fieldAddr->0x2bd91d9a8] offArray=+0x3A8 AdrArray->0x0 arr.DataPtr->0x0 Count = [9||26] count*8[0x48]
				FName{None}AddrStart->[0x8-0x48||offsetActor::0xfffffff8] [fieldAddr->0x2bd91da08] offArray=+0x408 AdrArray->0x0 arr.DataPtr->0x0 Count = [9||23] count*8[0x48]
				FName{None}AddrStart->[0x3f800008-0x3f800070||offsetActor::0xc07ffff8] [fieldAddr->0x2bd91da50] offArray=+0x450 AdrArray->0x3F800000 arr.DataPtr->0x0 Count = [14||21] count*8[0x70]
				FName{None}AddrStart->[0x8-0x30||offsetActor::0xfffffff8] [fieldAddr->0x2bd91da68] offArray=+0x468 AdrArray->0x0 arr.DataPtr->0x0 Count = [6||7] count*8[0x30]
				FName{None}AddrStart->[0x3f800008-0x3f8000d8||offsetActor::0xc07ffff8] [fieldAddr->0x2bd91da80] offArray=+0x480 AdrArray->0x3F800000 arr.DataPtr->0x0 Count = [27||29] count*8[0xD8]
				FName{None}AddrStart->[0x8-0x38||offsetActor::0xfffffff8] [fieldAddr->0x2bd91dac8] offArray=+0x4C8 AdrArray->0x0 arr.DataPtr->0x0 Count = [7||21] count*8[0x38]
				FName{None}AddrStart->[0x8-0xd8||offsetActor::0xfffffff8] [fieldAddr->0x2bd91dae0] offArray=+0x4E0 AdrArray->0x0 arr.DataPtr->0x0 Count = [27||29] count*8[0xD8]
				FName{None}AddrStart->[0x8-0x10||offsetActor::0xfffffff8] [fieldAddr->0x2bd91db40] offArray=+0x540 AdrArray->0x0 arr.DataPtr->0x0 Count = [2||3] count*8[0x10]
				FName{None}AddrStart->[0x8-0x10||offsetActor::0xfffffff8] [fieldAddr->0x2bd91db88] offArray=+0x588 AdrArray->0x0 arr.DataPtr->0x0 Count = [2||20] count*8[0x10]
				FName{None}AddrStart->[0x8-0xc0||offsetActor::0xfffffff8] [fieldAddr->0x2bd91dba0] offArray=+0x5A0 AdrArray->0x0 arr.DataPtr->0x0 Count = [24||28] count*8[0xC0]
				FName{None}AddrStart->[0x3f800008-0x3f800060||offsetActor::0xc07ffff8] [fieldAddr->0x2bd91dbb8] offArray=+0x5B8 AdrArray->0x3F800000 arr.DataPtr->0x0 Count = [12||13] count*8[0x60]
				FName{None}AddrStart->[0x8-0x28||offsetActor::0xfffffff8] [fieldAddr->0x2bd91dc00] offArray=+0x600 AdrArray->0x0 arr.DataPtr->0x0 Count = [5||17] count*8[0x28]
				FName{None}AddrStart->[0x3f800008-0x3f800060||offsetActor::0xc07ffff8] [fieldAddr->0x2bd91dc18] offArray=+0x618 AdrArray->0x3F800000 arr.DataPtr->0x0 Count = [12||13] count*8[0x60]
				FName{None}AddrStart->[0x8-0x28||offsetActor::0xfffffff8] [fieldAddr->0x2bd91dc48] offArray=+0x648 AdrArray->0x0 arr.DataPtr->0x0 Count = [5||22] count*8[0x28]
				FName{None}AddrStart->[0x3f000008-0x3f000060||offsetActor::0xc0fffff8] [fieldAddr->0x2bd91dc78] offArray=+0x678 AdrArray->0x3F000000 arr.DataPtr->0x0 Count = [12||13] count*8[0x60]
				FName{None}AddrStart->[0x8-0x50||offsetActor::0xfffffff8] [fieldAddr->0x2bd91dca8] offArray=+0x6A8 AdrArray->0x0 arr.DataPtr->0x0 Count = [10||11] count*8[0x50]
				FName{None}AddrStart->[0x8-0x8||offsetActor::0xfffffff8] [fieldAddr->0x2bd91de90] offArray=+0x890 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||3] count*8[0x8]
				FName{None}AddrStart->[0x8-0x8||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e2b0] offArray=+0xCB0 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||3] count*8[0x8]
				FName{None}AddrStart->[0x8-0x8||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e300] offArray=+0xD00 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||3] count*8[0x8]
				FName{None}AddrStart->[0x8-0x10||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e350] offArray=+0xD50 AdrArray->0x0 arr.DataPtr->0x0 Count = [2||3] count*8[0x10]
				FName{}AddrStart->[0x2a46e5d08-0x2a46e5d20||offsetActor::0x5b91a30c] [fieldAddr->0x2bd91e408] offArray=+0xE08 AdrArray->0x2A46E5D00 arr.DataPtr->0x100000014 Count = [4||4] count*8[0x20]
				FName{}AddrStart->[0x2a46e5d88-0x2a46e5da0||offsetActor::0x5b91a282] [fieldAddr->0x2bd91e460] offArray=+0xE60 AdrArray->0x2A46E5D80 arr.DataPtr->0x10000000a Count = [4||4] count*8[0x20]
				FName{None}AddrStart->[0x2c0463518-0x2c0463518||offsetActor::0x3fb9cae8] [fieldAddr->0x2bd91e488] offArray=+0xE88 AdrArray->0x2C0463510 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
				FName{None}AddrStart->[0x2c0463468-0x2c0463468||offsetActor::0x3fb9cb98] [fieldAddr->0x2bd91e4e0] offArray=+0xEE0 AdrArray->0x2C0463460 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
				FName{}AddrStart->[0x2872e3408-0x2872e3418||offsetActor::0x78d1cbfb] [fieldAddr->0x2bd91e510] offArray=+0xF10 AdrArray->0x2872E3400 arr.DataPtr->0x100000003 Count = [3||3] count*8[0x18]
				FName{None}AddrStart->[0x2c04695d8-0x2c04695d8||offsetActor::0x3fb96a28] [fieldAddr->0x2bd91e538] offArray=+0xF38 AdrArray->0x2C04695D0 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
				FName{}AddrStart->[0x2b91c5a88-0x2b91c5a88||offsetActor::0x46e3a57d] [fieldAddr->0x2bd91e568] offArray=+0xF68 AdrArray->0x2B91C5A80 arr.DataPtr->0x100000005 Count = [1||1] count*8[0x8]
				FName{None}AddrStart->[0x2c0463478-0x2c0463488||offsetActor::0x3fb9ccf0] [fieldAddr->0x2bd91e590] offArray=+0xF90 AdrArray->0x2C0463470 arr.DataPtr->0x168 Count = [3||4] count*8[0x18]
				FName{}AddrStart->[0x2872e47e8-0x2872e47f8||offsetActor::0x78d1b827] [fieldAddr->0x2bd91e5c0] offArray=+0xFC0 AdrArray->0x2872E47E0 arr.DataPtr->0x10000000f Count = [3||3] count*8[0x18]
				FName{None}AddrStart->[0x2c046a1e8-0x2c046a1e8||offsetActor::0xffff7f58] [fieldAddr->0x2bd91e5e8] offArray=+0xFE8 AdrArray->0x2C046A1E0 arr.DataPtr->0x2c0462140 Count = [1||4] count*8[0x8]
				FName{}AddrStart->[0x29fb22cc8-0x29fb22cd0||offsetActor::0x604dd349] [fieldAddr->0x2bd91e618] offArray=+0x1018 AdrArray->0x29FB22CC0 arr.DataPtr->0x100000011 Count = [2||2] count*8[0x10]
				FName{None}AddrStart->[0x2c04695e8-0x2c04695e8||offsetActor::0x3fb96a18] [fieldAddr->0x2bd91e640] offArray=+0x1040 AdrArray->0x2C04695E0 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
				FName{}AddrStart->[0x29fb22a88-0x29fb22a90||offsetActor::0x604dd586] [fieldAddr->0x2bd91e670] offArray=+0x1070 AdrArray->0x29FB22A80 arr.DataPtr->0x10000000e Count = [2||2] count*8[0x10]
				FName{None}AddrStart->[0x2c0463428-0x2c0463428||offsetActor::0x3fb9cbd8] [fieldAddr->0x2bd91e698] offArray=+0x1098 AdrArray->0x2C0463420 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
				FName{}AddrStart->[0x29fb22208-0x29fb22210||offsetActor::0x604dde08] [fieldAddr->0x2bd91e6c8] offArray=+0x10C8 AdrArray->0x29FB22200 arr.DataPtr->0x100000010 Count = [2||2] count*8[0x10]
				FName{None}AddrStart->[0x2c0463498-0x2c0463498||offsetActor::0x3fb9cb68] [fieldAddr->0x2bd91e6f0] offArray=+0x10F0 AdrArray->0x2C0463490 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
				FName{None}AddrStart->[0x8-0x78||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e778] offArray=+0x1178 AdrArray->0x0 arr.DataPtr->0x0 Count = [15||27] count*8[0x78]
				FName{None}AddrStart->[0x8-0x40||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e790] offArray=+0x1190 AdrArray->0x0 arr.DataPtr->0x0 Count = [8||22] count*8[0x40]
				FName{None}AddrStart->[0x8-0xb0||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e7a8] offArray=+0x11A8 AdrArray->0x0 arr.DataPtr->0x0 Count = [22||23] count*8[0xB0]
				FName{None}AddrStart->[0x8-0xb8||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e7c0] offArray=+0x11C0 AdrArray->0x0 arr.DataPtr->0x0 Count = [23||29] count*8[0xB8]
				FName{None}AddrStart->[0x8-0x40||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e7f0] offArray=+0x11F0 AdrArray->0x0 arr.DataPtr->0x0 Count = [8||27] count*8[0x40]
				FName{None}AddrStart->[0x8-0xb0||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e808] offArray=+0x1208 AdrArray->0x0 arr.DataPtr->0x0 Count = [22||23] count*8[0xB0]
				FName{None}AddrStart->[0x3f800008-0x3f8000b8||offsetActor::0xc07ffff8] [fieldAddr->0x2bd91e820] offArray=+0x1220 AdrArray->0x3F800000 arr.DataPtr->0x0 Count = [23||29] count*8[0xB8]
				FName{None}AddrStart->[0x66823f11cccb-0x66823f11cd33||offsetActor::0xc0ee3335] [fieldAddr->0x2bd91e838] offArray=+0x1238 AdrArray->0x66823F11CCC3 arr.DataPtr->0x0 Count = [14||26] count*8[0x70]
				FName{None}AddrStart->[0x8-0x38||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e868] offArray=+0x1268 AdrArray->0x0 arr.DataPtr->0x0 Count = [7||29] count*8[0x38]
				FName{None}AddrStart->[0x8-0x38||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e880] offArray=+0x1280 AdrArray->0x0 arr.DataPtr->0x0 Count = [7||29] count*8[0x38]
				FName{None}AddrStart->[0x8-0x30||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e8b0] offArray=+0x12B0 AdrArray->0x0 arr.DataPtr->0x0 Count = [6||26] count*8[0x30]
				FName{None}AddrStart->[0x8-0x80||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e8c8] offArray=+0x12C8 AdrArray->0x0 arr.DataPtr->0x0 Count = [16||19] count*8[0x80]
				FName{None}AddrStart->[0x3f800008-0x3f800010||offsetActor::0xc07ffff8] [fieldAddr->0x2bd91e8e0] offArray=+0x12E0 AdrArray->0x3F800000 arr.DataPtr->0x0 Count = [2||3] count*8[0x10]
				FName{None}AddrStart->[0x8-0x10||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e940] offArray=+0x1340 AdrArray->0x0 arr.DataPtr->0x0 Count = [2||3] count*8[0x10]
				FName{None}AddrStart->[0x8-0x8||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e970] offArray=+0x1370 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||25] count*8[0x8]
				FName{None}AddrStart->[0x8-0x10||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e988] offArray=+0x1388 AdrArray->0x0 arr.DataPtr->0x0 Count = [2||17] count*8[0x10]
				FName{None}AddrStart->[0x8-0x90||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e9a0] offArray=+0x13A0 AdrArray->0x0 arr.DataPtr->0x0 Count = [18||28] count*8[0x90]
				FName{None}AddrStart->[0x3f800008-0x3f800060||offsetActor::0xc07ffff8] [fieldAddr->0x2bd91e9b8] offArray=+0x13B8 AdrArray->0x3F800000 arr.DataPtr->0x0 Count = [12||24] count*8[0x60]
				FName{None}AddrStart->[0x8-0x28||offsetActor::0xfffffff8] [fieldAddr->0x2bd91e9e8] offArray=+0x13E8 AdrArray->0x0 arr.DataPtr->0x0 Count = [5||21] count*8[0x28]
				FName{None}AddrStart->[0x8-0x28||offsetActor::0xfffffff8] [fieldAddr->0x2bd91ea00] offArray=+0x1400 AdrArray->0x0 arr.DataPtr->0x0 Count = [5||21] count*8[0x28]
				FName{None}AddrStart->[0x8-0x20||offsetActor::0xfffffff8] [fieldAddr->0x2bd91ea30] offArray=+0x1430 AdrArray->0x0 arr.DataPtr->0x0 Count = [4||24] count*8[0x20]
				FName{None}AddrStart->[0x8-0xa0||offsetActor::0xfffffff8] [fieldAddr->0x2bd91ea48] offArray=+0x1448 AdrArray->0x0 arr.DataPtr->0x0 Count = [20||21] count*8[0xA0]
				FName{None}AddrStart->[0x8-0x50||offsetActor::0xfffffff8] [fieldAddr->0x2bd91eaa8] offArray=+0x14A8 AdrArray->0x0 arr.DataPtr->0x0 Count = [10||11] count*8[0x50]
				FName{None}AddrStart->[0x200000008-0x200000048||offsetActor::0xfffffff8] [fieldAddr->0x2bd91eb00] offArray=+0x1500 AdrArray->0x200000000 arr.DataPtr->0x0 Count = [9||31] count*8[0x48]
				FName{None}AddrStart->[0x291a178c8-0x291a178c8||offsetActor::0x6e5e8738] [fieldAddr->0x2bd91eb18] offArray=+0x1518 AdrArray->0x291A178C0 arr.DataPtr->0x0 Count = [1||1] count*8[0x8]
				FName{None}AddrStart->[0x8-0x8||offsetActor::0xfffffff8] [fieldAddr->0x2bd91eb38] offArray=+0x1538 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||32] count*8[0x8]
				FName{None}AddrStart->[0x2bc3fe808-0x2bc3fe808||offsetActor::0x43c017f8] [fieldAddr->0x2bd91eb68] offArray=+0x1568 AdrArray->0x2BC3FE800 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
				FName{None}AddrStart->[0x8-0x8||offsetActor::0xfffffff8] [fieldAddr->0x2bd91eb88] offArray=+0x1588 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||128] count*8[0x8]
				FName{None}AddrStart->[0x291a176a8-0x291a176b0||offsetActor::0x6e5e8958] [fieldAddr->0x2bd91ebb8] offArray=+0x15B8 AdrArray->0x291A176A0 arr.DataPtr->0x0 Count = [2||16] count*8[0x10]
				FName{OpenWorldStreamingLevel}AddrStart->[0x139349d08-0x139349d38||offsetActor::0x696c7f8] [fieldAddr->0x2bd91ed40] offArray=+0x1740 AdrArray->0x139349D00 arr.DataPtr->0x3fcb6500 Count = [7||29] count*8[0x38]
				FName{OpenWorldStreamingLevel}AddrStart->[0x13934c348-0x13934c370||offsetActor::0x696a1b8] [fieldAddr->0x2bd91ed70] offArray=+0x1770 AdrArray->0x13934C340 arr.DataPtr->0x3fcb6500 Count = [6||18] count*8[0x30]
				FName{OpenWorldStreamingLevel}AddrStart->[0x1393488c8-0x1393489a0||offsetActor::0x696dc38] [fieldAddr->0x2bd91edb0] offArray=+0x17B0 AdrArray->0x1393488C0 arr.DataPtr->0x3fcb6500 Count = [28||53] count*8[0xE0]
				FName{OpenWorldStreamingLevel}AddrStart->[0x139346048-0x139346150||offsetActor::0x69704b8] [fieldAddr->0x2bd91edc0] offArray=+0x17C0 AdrArray->0x139346040 arr.DataPtr->0x3fcb6500 Count = [34||58] count*8[0x110]
				FName{OpenWorldStreamingLevel}AddrStart->[0x139342ec8-0x139343020||offsetActor::0x6973638] [fieldAddr->0x2bd91edd0] offArray=+0x17D0 AdrArray->0x139342EC0 arr.DataPtr->0x3fcb6500 Count = [44||58] count*8[0x160]
				FName{OpenWorldStreamingLevel}AddrStart->[0x28706ca08-0x28706caf8||offsetActor::0xb8c49af8] [fieldAddr->0x2bd91ee30] offArray=+0x1830 AdrArray->0x28706CA00 arr.DataPtr->0x3fcb6500 Count = [31||34] count*8[0xF8]
				FName{OpenWorldStreamingLevel}AddrStart->[0x287068688-0x2870686e8||offsetActor::0xb8c4de78] [fieldAddr->0x2bd91ee70] offArray=+0x1870 AdrArray->0x287068680 arr.DataPtr->0x3fcb6500 Count = [13||47] count*8[0x68]
				FName{None}AddrStart->[0x7b2900000008-0x7b2900000010||offsetActor::0xfffffff8] [fieldAddr->0x2bd91eee8] offArray=+0x18E8 AdrArray->0x7B2900000000 arr.DataPtr->0x0 Count = [2||7] count*8[0x10]
				FName{None}AddrStart->[0x79ab0000002b-0x79ab00000033||offsetActor::0xffffffd5] [fieldAddr->0x2bd91f038] offArray=+0x1A38 AdrArray->0x79AB00000023 arr.DataPtr->0x0 Count = [2||35] count*8[0x10]
				FName{None}AddrStart->[0x8-0x70||offsetActor::0xfffffff8] [fieldAddr->0x2bd91f5c0] offArray=+0x1FC0 AdrArray->0x0 arr.DataPtr->0x0 Count = [14||15] count*8[0x70]
				FName{None}AddrStart->[0x8-0x70||offsetActor::0xfffffff8] [fieldAddr->0x2bd91f620] offArray=+0x2020 AdrArray->0x0 arr.DataPtr->0x0 Count = [14||15] count*8[0x70]
				FName{None}AddrStart->[0x8-0x70||offsetActor::0xfffffff8] [fieldAddr->0x2bd91f680] offArray=+0x2080 AdrArray->0x0 arr.DataPtr->0x0 Count = [14||15] count*8[0x70]
				FName{None}AddrStart->[0x8-0x10||offsetActor::0xfffffff8] [fieldAddr->0x2bd91f6e0] offArray=+0x20E0 AdrArray->0x0 arr.DataPtr->0x0 Count = [2||3] count*8[0x10]
				FName{None}AddrStart->[0x8-0x10||offsetActor::0xfffffff8] [fieldAddr->0x2bd91f740] offArray=+0x2140 AdrArray->0x0 arr.DataPtr->0x0 Count = [2||3] count*8[0x10]
				FName{None}AddrStart->[0x3f000008-0x3f000008||offsetActor::0xc0fffff8] [fieldAddr->0x2bd91f770] offArray=+0x2170 AdrArray->0x3F000000 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
				FName{None}AddrStart->[0x8-0x10||offsetActor::0xfffffff8] [fieldAddr->0x2bd91f788] offArray=+0x2188 AdrArray->0x0 arr.DataPtr->0x0 Count = [2||7] count*8[0x10]
				FName{None}AddrStart->[0x8-0x48||offsetActor::0xfffffff8] [fieldAddr->0x2bd91f7a0] offArray=+0x21A0 AdrArray->0x0 arr.DataPtr->0x0 Count = [9||11] count*8[0x48]
				FName{None}AddrStart->[0x3f000008-0x3f000020||offsetActor::0xc0fffff8] [fieldAddr->0x2bd91f7b8] offArray=+0x21B8 AdrArray->0x3F000000 arr.DataPtr->0x0 Count = [4||5] count*8[0x20]
				FName{None}AddrStart->[0x8-0x8||offsetActor::0xfffffff8] [fieldAddr->0x2bd91f7d0] offArray=+0x21D0 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
				FName{None}AddrStart->[0x8-0x10||offsetActor::0xfffffff8] [fieldAddr->0x2bd91f7e8] offArray=+0x21E8 AdrArray->0x0 arr.DataPtr->0x0 Count = [2||7] count*8[0x10]
				FName{None}AddrStart->[0x8-0x48||offsetActor::0xfffffff8] [fieldAddr->0x2bd91f800] offArray=+0x2200 AdrArray->0x0 arr.DataPtr->0x0 Count = [9||11] count*8[0x48]
				FName{None}AddrStart->[0x3f800008-0x3f800020||offsetActor::0xc07ffff8] [fieldAddr->0x2bd91f818] offArray=+0x2218 AdrArray->0x3F800000 arr.DataPtr->0x0 Count = [4||5] count*8[0x20]
				FName{None}AddrStart->[0x8-0x40||offsetActor::0xfffffff8] [fieldAddr->0x2bd91f860] offArray=+0x2260 AdrArray->0x0 arr.DataPtr->0x0 Count = [8||10] count*8[0x40]
				FName{None}AddrStart->[0x3f000008-0x3f000020||offsetActor::0xc0fffff8] [fieldAddr->0x2bd91f878] offArray=+0x2278 AdrArray->0x3F000000 arr.DataPtr->0x0 Count = [4||5] count*8[0x20]
				FName{None}AddrStart->[0x8-0x40||offsetActor::0xfffffff8] [fieldAddr->0x2bd91f8c0] offArray=+0x22C0 AdrArray->0x0 arr.DataPtr->0x0 Count = [8||10] count*8[0x40]
				FName{}AddrStart->[0x150845838-0x150845840||offsetActor::0xf0780cd8] [fieldAddr->0x2bd91f900] offArray=+0x2300 AdrArray->0x150845830 arr.DataPtr->0x140fc6510 Count = [2||5] count*8[0x10]
				
  Ptr 0x00000002BF634AE0 Keystr->0x1C Str[DefaultPhysicsVolume]
				FName{}AddrStart->[0x18b0c4948-0x18b0c4948||offsetActor::0x74f3b6b7] [fieldAddr->0x2bf634d00] offArray=+0x220 AdrArray->0x18B0C4940 arr.DataPtr->0xffffffff Count = [1||4] count*8[0x8]
				FName{None}AddrStart->[0x8-0x8||offsetActor::0xfffffff8] [fieldAddr->0x2bf634d20] offArray=+0x240 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||128] count*8[0x8]
				FName{None}AddrStart->[0xce00d100d8-0xce00d10520||offsetActor::0xff2eff28] [fieldAddr->0x2bf635678] offArray=+0xB98 AdrArray->0xCE00D100D0 arr.DataPtr->0x0 Count = [138||142] count*8[0x450]
				FName{None}AddrStart->[0x8e00000092-0x8e00000502||offsetActor::0xffffff6e] [fieldAddr->0x2bf635680] offArray=+0xBA0 AdrArray->0x8E0000008A arr.DataPtr->0x0 Count = [143||144] count*8[0x478]
				FName{None}AddrStart->[0x8e00000097-0x8e00000507||offsetActor::0xffffff69] [fieldAddr->0x2bf635690] offArray=+0xBB0 AdrArray->0x8E0000008F arr.DataPtr->0x0 Count = [143||144] count*8[0x478]
				FName{None}AddrStart->[0x8-0x10||offsetActor::0xfffffff8] [fieldAddr->0x2bf635730] offArray=+0xC50 AdrArray->0x0 arr.DataPtr->0x0 Count = [2||3] count*8[0x10]
				FName{None}AddrStart->[0x1010108-0x1010908||offsetActor::0xeff052d] [fieldAddr->0x2bf635a08] offArray=+0xF28 AdrArray->0x1010100 arr.DataPtr->0x9000000010000635 Count = [257||257] count*8[0x808]
				FName{None}AddrStart->[0x100000007-0x100000007||offsetActor::0x5552514c] [fieldAddr->0x2bf635b18] offArray=+0x1038 AdrArray->0xFFFFFFFF arr.DataPtr->0x5041575655525153 Count = [1||1] count*8[0x8]
				FName{None}AddrStart->[0x2ba2b5508-0x2ba2b5518||offsetActor::0x45d4aaf7] [fieldAddr->0x2bf635b68] offArray=+0x1088 AdrArray->0x2BA2B5500 arr.DataPtr->0xffffffffffffffff Count = [3||4] count*8[0x18]
				FName{}AddrStart->[0x2951da648-0x2951da668||offsetActor::0xffffff98] [fieldAddr->0x2bf635b80] offArray=+0x10A0 AdrArray->0x2951DA640 arr.DataPtr->0x2951da5e0 Count = [5||8] count*8[0x28]
				FName{None}AddrStart->[0x80000000d-0x8000002bd||offsetActor::0xfffffff3] [fieldAddr->0x2bf635b88] offArray=+0x10A8 AdrArray->0x800000005 arr.DataPtr->0x0 Count = [87||261] count*8[0x2B8]
				FName{None}AddrStart->[0x8-0x20||offsetActor::0xfffffff8] [fieldAddr->0x2bf635ba8] offArray=+0x10C8 AdrArray->0x0 arr.DataPtr->0x0 Count = [4||3078] count*8[0x20]
				FName{None}AddrStart->[0xc060000000c-0xc060000007c||offsetActor::0xfffffff4] [fieldAddr->0x2bf635bb0] offArray=+0x10D0 AdrArray->0xC0600000004 arr.DataPtr->0x0 Count = [15||2658] count*8[0x78]
				FName{}AddrStart->[0x2951da3a8-0x2951da3a8||offsetActor::0x298] [fieldAddr->0x2bf635bf0] offArray=+0x1110 AdrArray->0x2951DA3A0 arr.DataPtr->0x2951da640 Count = [1||2] count*8[0x8]
				FName{None}AddrStart->[0x8-0x90||offsetActor::0xfffffff8] [fieldAddr->0x2bf635c68] offArray=+0x1188 AdrArray->0x0 arr.DataPtr->0x0 Count = [18||3514] count*8[0x90]
				FName{ParticleModuleAccelerationDrag}AddrStart->[0x4e5b247908-0x4e5b247bb8||offsetActor::0x16b89498] [fieldAddr->0x2bf635c98] offArray=+0x11B8 AdrArray->0x4E5B247900 arr.DataPtr->0x171dd0da0 Count = [87||96] count*8[0x2B8]
				FName{}AddrStart->[0x2eaa829a8-0x2eaa82a30||offsetActor::0xddf1b1f8] [fieldAddr->0x2bf635dc8] offArray=+0x12E8 AdrArray->0x2EAA829A0 arr.DataPtr->0x2c899dba0 Count = [18||40] count*8[0x90]
				FName{None}AddrStart->[0x1010108-0x1010908||offsetActor::0xeff052d] [fieldAddr->0x2bf635df8] offArray=+0x1318 AdrArray->0x1010100 arr.DataPtr->0x9000000010000635 Count = [257||257] count*8[0x808]
				FName{None}AddrStart->[0x508c9f7c9f3-0x508c9f7d1eb||offsetActor::0x3608360d] [fieldAddr->0x2bf635e10] offArray=+0x1330 AdrArray->0x508C9F7C9EB arr.DataPtr->0x0 Count = [256||36604] count*8[0x800]
				FName{None}AddrStart->[0x196d40e08-0x196d40ea0||offsetActor::0xdb8] [fieldAddr->0x2bf635ed0] offArray=+0x13F0 AdrArray->0x196D40E00 arr.DataPtr->0x196d41bc0 Count = [20||22] count*8[0xA0]
				FName{None}AddrStart->[0x8-0xa0||offsetActor::0xfffffff8] [fieldAddr->0x2bf635ef0] offArray=+0x1410 AdrArray->0x0 arr.DataPtr->0x0 Count = [20||128] count*8[0xA0]
				FName{None}AddrStart->[0x8-0x2f0||offsetActor::0xfffffff8] [fieldAddr->0x2bf635f78] offArray=+0x1498 AdrArray->0x0 arr.DataPtr->0x0 Count = [94||281] count*8[0x2F0]
				FName{None}AddrStart->[0x100000007-0x1000000e7||offsetActor::0x5552514c] [fieldAddr->0x2bf635fa0] offArray=+0x14C0 AdrArray->0xFFFFFFFF arr.DataPtr->0x5041575655525153 Count = [29||3104] count*8[0xE8]
				FName{None}AddrStart->[0x2f480fbe8-0x2f480fbe8||offsetActor::0x92d63cb8] [fieldAddr->0x2bf6360b8] offArray=+0x15D8 AdrArray->0x2F480FBE0 arr.DataPtr->0x2875738a0 Count = [1||4] count*8[0x8]
				FName{None}AddrStart->[0x8-0x8||offsetActor::0xfffffff8] [fieldAddr->0x2bf6360d8] offArray=+0x15F8 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||128] count*8[0x8]
				FName{None}AddrStart->[0x8-0x8||offsetActor::0xfffffff8] [fieldAddr->0x2bf6360f8] offArray=+0x1618 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
				FName{DFCanvasPanel}AddrStart->[0x4e325a6208-0x4e325a6470||offsetActor::0xd96f3f8] [fieldAddr->0x2bf6361b8] offArray=+0x16D8 AdrArray->0x4E325A6200 arr.DataPtr->0x3ff15600 Count = [78||128] count*8[0x270]
				FName{}AddrStart->[0x1d0529688-0x1d0529688||offsetActor::0x2fad6979] [fieldAddr->0x2bf636348] offArray=+0x1868 AdrArray->0x1D0529680 arr.DataPtr->0x100000001 Count = [1||4] count*8[0x8]
				FName{None}AddrStart->[0x287148f98-0x287148fb8||offsetActor::0x78eb7068] [fieldAddr->0x2bf636360] offArray=+0x1880 AdrArray->0x287148F90 arr.DataPtr->0x0 Count = [5||8] count*8[0x28]
				FName{None}AddrStart->[0x80000000d-0x8000000b5||offsetActor::0xfffffff3] [fieldAddr->0x2bf636368] offArray=+0x1888 AdrArray->0x800000005 arr.DataPtr->0x0 Count = [22||221] count*8[0xB0]
				FName{None}AddrStart->[0x8-0x8||offsetActor::0xfffffff8] [fieldAddr->0x2bf636388] offArray=+0x18A8 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||913] count*8[0x8]
				FName{None}AddrStart->[0x39100000009-0x39100000029||offsetActor::0xfffffff7] [fieldAddr->0x2bf636390] offArray=+0x18B0 AdrArray->0x39100000001 arr.DataPtr->0x0 Count = [5||773] count*8[0x28]
				FName{None}AddrStart->[0x287148fc8-0x287148fc8||offsetActor::0x78eb7038] [fieldAddr->0x2bf6363d0] offArray=+0x18F0 AdrArray->0x287148FC0 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
				FName{None}AddrStart->[0x8-0x18||offsetActor::0xfffffff8] [fieldAddr->0x2bf636448] offArray=+0x1968 AdrArray->0x0 arr.DataPtr->0x0 Count = [3||1025] count*8[0x18]
				FName{None}AddrStart->[0x2f5af1608-0x2f5af1890||offsetActor::0xa50e9f9] [fieldAddr->0x2bf636478] offArray=+0x1998 AdrArray->0x2F5AF1600 arr.DataPtr->0x1 Count = [82||96] count*8[0x290]
				FName{None}AddrStart->[0x287149028-0x287149038||offsetActor::0x78eb6fd8] [fieldAddr->0x2bf6365a8] offArray=+0x1AC8 AdrArray->0x287149020 arr.DataPtr->0x0 Count = [3||4] count*8[0x18]
				FName{None}AddrStart->[0x8efc00000008-0x8efc00000320||offsetActor::0xfffffff8] [fieldAddr->0x2bf6365f8] offArray=+0x1B18 AdrArray->0x8EFC00000000 arr.DataPtr->0x0 Count = [100||1792] count*8[0x320]
				FName{None}AddrStart->[0x2ebf43408-0x2ebf43690||offsetActor::0x140bcbf8] [fieldAddr->0x2bf636a10] offArray=+0x1F30 AdrArray->0x2EBF43400 arr.DataPtr->0x0 Count = [82||96] count*8[0x290]
				FName{None}AddrStart->[0x2b9491468-0x2b94914c0||offsetActor::0x46caebad] [fieldAddr->0x2bf636e78] offArray=+0x2398 AdrArray->0x2B9491460 arr.DataPtr->0x11000600140015 Count = [12||16] count*8[0x60]
				FName{None}AddrStart->[0x16e471638-0x16e471638||offsetActor::0x91b8e9c8] [fieldAddr->0x2bf636ee8] offArray=+0x2408 AdrArray->0x16E471630 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
				FName{None}AddrStart->[0x1a1910008-0x1a1918c70||offsetActor::0x5e6efff8] [fieldAddr->0x2bf636f10] offArray=+0x2430 AdrArray->0x1A1910000 arr.DataPtr->0x0 Count = [4494||4608] count*8[0x8C70]
  Ptr 0x000000027085ECB0 Keystr->0x1C Str[]
				 FName{None}AddrStart->[0x41400008-0x414001b0||offsetActor::0xbebffff8] [fieldAddr->0x27085ed08] offArray=+0x58 AdrArray->0x41400000 arr.DataPtr->0x0 Count = [54||75] count*8[0x1B0]
				FName{None}AddrStart->[0x4b0000003e-0x4b0000038e||offsetActor::0xffffffc2] [fieldAddr->0x27085ed10] offArray=+0x60 AdrArray->0x4B00000036 arr.DataPtr->0x0 Count = [107||111] count*8[0x358]
				FName{None}AddrStart->[0x6f00000073-0x6f000003f3||offsetActor::0xffffff8d] [fieldAddr->0x27085ed18] offArray=+0x68 AdrArray->0x6F0000006B arr.DataPtr->0x0 Count = [113||121] count*8[0x388]
				FName{None}AddrStart->[0x7900000079-0x7900000179||offsetActor::0xffffff87] [fieldAddr->0x27085ed20] offArray=+0x70 AdrArray->0x7900000071 arr.DataPtr->0x0 Count = [33||801] count*8[0x108]
				FName{None}AddrStart->[0x12e0000026c-0x12e000006b4||offsetActor::0xfffffd94] [fieldAddr->0x27085ed30] offArray=+0x80 AdrArray->0x12E00000264 arr.DataPtr->0x0 Count = [138||145] count*8[0x450]
				FName{None}AddrStart->[0x13d779648-0x13d7797f0||offsetActor::0xc28878d8] [fieldAddr->0x27085ef78] offArray=+0x2C8 AdrArray->0x13D779640 arr.DataPtr->0xf20 Count = [54||75] count*8[0x1B0]
				FName{None}AddrStart->[0x4b0000003e-0x4b0000038e||offsetActor::0xffffffc2] [fieldAddr->0x27085ef80] offArray=+0x2D0 AdrArray->0x4B00000036 arr.DataPtr->0x0 Count = [107||111] count*8[0x358]
				FName{None}AddrStart->[0x6f00000073-0x6f000003f3||offsetActor::0xffffff8d] [fieldAddr->0x27085ef88] offArray=+0x2D8 AdrArray->0x6F0000006B arr.DataPtr->0x0 Count = [113||121] count*8[0x388]
				FName{None}AddrStart->[0x7900000079-0x7900000179||offsetActor::0xffffff87] [fieldAddr->0x27085ef90] offArray=+0x2E0 AdrArray->0x7900000071 arr.DataPtr->0x0 Count = [33||801] count*8[0x108]
				FName{None}AddrStart->[0x32100000029-0x32100000991||offsetActor::0xffffffd7] [fieldAddr->0x27085ef98] offArray=+0x2E8 AdrArray->0x32100000021 arr.DataPtr->0x0 Count = [302||612] count*8[0x970]
				FName{None}AddrStart->[0x600000008-0x600001800||offsetActor::0xfffffff8] [fieldAddr->0x27085f018] offArray=+0x368 AdrArray->0x600000000 arr.DataPtr->0x0 Count = [768||3073] count*8[0x1800]
				FName{None}AddrStart->[0x500000031-0x5000001d9||offsetActor::0xffffffcf] [fieldAddr->0x27085f2a8] offArray=+0x5F8 AdrArray->0x500000029 arr.DataPtr->0x0 Count = [54||75] count*8[0x1B0]
				FName{None}AddrStart->[0x4b0000003e-0x4b0000038e||offsetActor::0xffffffc2] [fieldAddr->0x27085f2b0] offArray=+0x600 AdrArray->0x4B00000036 arr.DataPtr->0x0 Count = [107||111] count*8[0x358]
				FName{None}AddrStart->[0x6f00000073-0x6f000003f3||offsetActor::0xffffff8d] [fieldAddr->0x27085f2b8] offArray=+0x608 AdrArray->0x6F0000006B arr.DataPtr->0x0 Count = [113||121] count*8[0x388]
				FName{None}AddrStart->[0x7900000079-0x7900000179||offsetActor::0xffffff87] [fieldAddr->0x27085f2c0] offArray=+0x610 AdrArray->0x7900000071 arr.DataPtr->0x0 Count = [33||801] count*8[0x108]
				FName{None}AddrStart->[0x32100000029-0x32100000991||offsetActor::0xffffffd7] [fieldAddr->0x27085f2c8] offArray=+0x618 AdrArray->0x32100000021 arr.DataPtr->0x0 Count = [302||612] count*8[0x970]
				FName{None}AddrStart->[0x26400000136-0x2640000057e||offsetActor::0xfffffeca] [fieldAddr->0x27085f2d0] offArray=+0x620 AdrArray->0x2640000012E arr.DataPtr->0x0 Count = [138||145] count*8[0x450]
				FName{None}AddrStart->[0x2cf6c0018-0x2cf6c1010||offsetActor::0x6fe3b6c4] [fieldAddr->0x27085f350] offArray=+0x6A0 AdrArray->0x2CF6C0010 arr.DataPtr->0x3f30db6e3f4fb6dc Count = [512||546] count*8[0x1000]
				FName{None}AddrStart->[0x8-0x1b0||offsetActor::0xfffffff8] [fieldAddr->0x27085f398] offArray=+0x6E8 AdrArray->0x0 arr.DataPtr->0x0 Count = [54||75] count*8[0x1B0]
				FName{None}AddrStart->[0x4b0000003e-0x4b0000038e||offsetActor::0xffffffc2] [fieldAddr->0x27085f3a0] offArray=+0x6F0 AdrArray->0x4B00000036 arr.DataPtr->0x0 Count = [107||111] count*8[0x358]
				FName{None}AddrStart->[0x6f00000073-0x6f000003f3||offsetActor::0xffffff8d] [fieldAddr->0x27085f3a8] offArray=+0x6F8 AdrArray->0x6F0000006B arr.DataPtr->0x0 Count = [113||121] count*8[0x388]
				FName{None}AddrStart->[0x7900000079-0x7900000179||offsetActor::0xffffff87] [fieldAddr->0x27085f3b0] offArray=+0x700 AdrArray->0x7900000071 arr.DataPtr->0x0 Count = [33||801] count*8[0x108]
				FName{None}AddrStart->[0x32100000029-0x32100000991||offsetActor::0xffffffd7] [fieldAddr->0x27085f3b8] offArray=+0x708 AdrArray->0x32100000021 arr.DataPtr->0x0 Count = [302||612] count*8[0x970]
				FName{None}AddrStart->[0x7ff908aed2a0-0x7ff908aed448||offsetActor::0xf7512dcd] [fieldAddr->0x27085f608] offArray=+0x958 AdrArray->0x7FF908AED298 arr.DataPtr->0x6d Count = [54||75] count*8[0x1B0]
				FName{None}AddrStart->[0x4b0000003e-0x4b0000038e||offsetActor::0xffffffc2] [fieldAddr->0x27085f610] offArray=+0x960 AdrArray->0x4B00000036 arr.DataPtr->0x0 Count = [107||111] count*8[0x358]
				FName{None}AddrStart->[0x6f00000073-0x6f000003f3||offsetActor::0xffffff8d] [fieldAddr->0x27085f618] offArray=+0x968 AdrArray->0x6F0000006B arr.DataPtr->0x0 Count = [113||121] count*8[0x388]
				FName{None}AddrStart->[0x7900000079-0x7900000179||offsetActor::0xffffff87] [fieldAddr->0x27085f620] offArray=+0x970 AdrArray->0x7900000071 arr.DataPtr->0x0 Count = [33||801] count*8[0x108]
				FName{None}AddrStart->[0x8a0000009f-0x8a0000051f||offsetActor::0xffffff61] [fieldAddr->0x27085f630] offArray=+0x980 AdrArray->0x8A00000097 arr.DataPtr->0x0 Count = [145||32761] count*8[0x488]
				FName{None}AddrStart->[0x8-0x1b0||offsetActor::0xfffffff8] [fieldAddr->0x27085f6f8] offArray=+0xA48 AdrArray->0x0 arr.DataPtr->0x0 Count = [54||75] count*8[0x1B0]
				FName{None}AddrStart->[0x4b0000003e-0x4b0000038e||offsetActor::0xffffffc2] [fieldAddr->0x27085f700] offArray=+0xA50 AdrArray->0x4B00000036 arr.DataPtr->0x0 Count = [107||111] count*8[0x358]
				FName{None}AddrStart->[0x6f00000073-0x6f000003f3||offsetActor::0xffffff8d] [fieldAddr->0x27085f708] offArray=+0xA58 AdrArray->0x6F0000006B arr.DataPtr->0x0 Count = [113||121] count*8[0x388]
				FName{None}AddrStart->[0x7900000079-0x7900000179||offsetActor::0xffffff87] [fieldAddr->0x27085f710] offArray=+0xA60 AdrArray->0x7900000071 arr.DataPtr->0x0 Count = [33||801] count*8[0x108]
				FName{None}AddrStart->[0x8-0x1b0||offsetActor::0xfffffff8] [fieldAddr->0x27085f758] offArray=+0xAA8 AdrArray->0x0 arr.DataPtr->0x0 Count = [54||75] count*8[0x1B0]
				FName{None}AddrStart->[0x4b0000003e-0x4b0000038e||offsetActor::0xffffffc2] [fieldAddr->0x27085f760] offArray=+0xAB0 AdrArray->0x4B00000036 arr.DataPtr->0x0 Count = [107||111] count*8[0x358]
				FName{None}AddrStart->[0x6f00000073-0x6f000003f3||offsetActor::0xffffff8d] [fieldAddr->0x27085f768] offArray=+0xAB8 AdrArray->0x6F0000006B arr.DataPtr->0x0 Count = [113||121] count*8[0x388]
				FName{None}AddrStart->[0x7900000079-0x7900000179||offsetActor::0xffffff87] [fieldAddr->0x27085f770] offArray=+0xAC0 AdrArray->0x7900000071 arr.DataPtr->0x0 Count = [33||801] count*8[0x108]
				FName{None}AddrStart->[0x99-0x199||offsetActor::0xffffff67] [fieldAddr->0x27085f788] offArray=+0xAD8 AdrArray->0x91 arr.DataPtr->0x0 Count = [33||54] count*8[0x108]
				FName{None}AddrStart->[0x3600000029-0x3600000279||offsetActor::0xffffffd7] [fieldAddr->0x27085f790] offArray=+0xAE0 AdrArray->0x3600000021 arr.DataPtr->0x0 Count = [75||107] count*8[0x258]
				FName{None}AddrStart->[0x6b00000053-0x6b000003d3||offsetActor::0xffffffad] [fieldAddr->0x27085f798] offArray=+0xAE8 AdrArray->0x6B0000004B arr.DataPtr->0x0 Count = [113||121] count*8[0x388]
				FName{None}AddrStart->[0x7900000079-0x79000009e1||offsetActor::0xffffff87] [fieldAddr->0x27085f7a0] offArray=+0xAF0 AdrArray->0x7900000071 arr.DataPtr->0x0 Count = [302||801] count*8[0x970]
				FName{None}AddrStart->[0x99-0x199||offsetActor::0xffffff67] [fieldAddr->0x27085f7b8] offArray=+0xB08 AdrArray->0x91 arr.DataPtr->0x0 Count = [33||54] count*8[0x108]
				FName{None}AddrStart->[0x3600000029-0x3600000279||offsetActor::0xffffffd7] [fieldAddr->0x27085f7c0] offArray=+0xB10 AdrArray->0x3600000021 arr.DataPtr->0x0 Count = [75||107] count*8[0x258]
				FName{None}AddrStart->[0x6b00000053-0x6b000003d3||offsetActor::0xffffffad] [fieldAddr->0x27085f7c8] offArray=+0xB18 AdrArray->0x6B0000004B arr.DataPtr->0x0 Count = [113||121] count*8[0x388]
				FName{None}AddrStart->[0x7900000079-0x79000009e1||offsetActor::0xffffff87] [fieldAddr->0x27085f7d0] offArray=+0xB20 AdrArray->0x7900000071 arr.DataPtr->0x0 Count = [302||801] count*8[0x970]
				FName{None}AddrStart->[0x99-0x241||offsetActor::0xffffff67] [fieldAddr->0x27085f7e8] offArray=+0xB38 AdrArray->0x91 arr.DataPtr->0x0 Count = [54||75] count*8[0x1B0]
				FName{None}AddrStart->[0x4b0000003e-0x4b0000038e||offsetActor::0xffffffc2] [fieldAddr->0x27085f7f0] offArray=+0xB40 AdrArray->0x4B00000036 arr.DataPtr->0x0 Count = [107||111] count*8[0x358]
				FName{None}AddrStart->[0x6f00000073-0x6f000003f3||offsetActor::0xffffff8d] [fieldAddr->0x27085f7f8] offArray=+0xB48 AdrArray->0x6F0000006B arr.DataPtr->0x0 Count = [113||121] count*8[0x388]
				FName{None}AddrStart->[0x7900000079-0x7900000179||offsetActor::0xffffff87] [fieldAddr->0x27085f800] offArray=+0xB50 AdrArray->0x7900000071 arr.DataPtr->0x0 Count = [33||801] count*8[0x108]
				FName{None}AddrStart->[0x9700000136-0x970000057e||offsetActor::0xfffffeca] [fieldAddr->0x27085f810] offArray=+0xB60 AdrArray->0x970000012E arr.DataPtr->0x0 Count = [138||145] count*8[0x450]
				FName{None}AddrStart->[0x8-0x1b0||offsetActor::0xfffffff8] [fieldAddr->0x27085fe78] offArray=+0x11C8 AdrArray->0x0 arr.DataPtr->0x0 Count = [54||75] count*8[0x1B0]
				FName{None}AddrStart->[0x4b0000003e-0x4b0000038e||offsetActor::0xffffffc2] [fieldAddr->0x27085fe80] offArray=+0x11D0 AdrArray->0x4B00000036 arr.DataPtr->0x0 Count = [107||111] count*8[0x358]
				FName{None}AddrStart->[0x6f00000073-0x6f000003f3||offsetActor::0xffffff8d] [fieldAddr->0x27085fe88] offArray=+0x11D8 AdrArray->0x6F0000006B arr.DataPtr->0x0 Count = [113||121] count*8[0x388]
				FName{None}AddrStart->[0x7900000079-0x7900000179||offsetActor::0xffffff87] [fieldAddr->0x27085fe90] offArray=+0x11E0 AdrArray->0x7900000071 arr.DataPtr->0x0 Count = [33||801] count*8[0x108]
				FName{None}AddrStart->[0x32100000029-0x32100000991||offsetActor::0xffffffd7] [fieldAddr->0x27085fe98] offArray=+0x11E8 AdrArray->0x32100000021 arr.DataPtr->0x0 Count = [302||612] count*8[0x970]
				FName{None}AddrStart->[0x8-0x1b0||offsetActor::0xfffffff8] [fieldAddr->0x27085ff08] offArray=+0x1258 AdrArray->0x0 arr.DataPtr->0x0 Count = [54||75] count*8[0x1B0]
				FName{None}AddrStart->[0x4b0000003e-0x4b0000038e||offsetActor::0xffffffc2] [fieldAddr->0x27085ff10] offArray=+0x1260 AdrArray->0x4B00000036 arr.DataPtr->0x0 Count = [107||111] count*8[0x358]
				FName{None}AddrStart->[0x6f00000073-0x6f000003f3||offsetActor::0xffffff8d] [fieldAddr->0x27085ff18] offArray=+0x1268 AdrArray->0x6F0000006B arr.DataPtr->0x0 Count = [113||121] count*8[0x388]
				FName{None}AddrStart->[0x7900000079-0x7900000179||offsetActor::0xffffff87] [fieldAddr->0x27085ff20] offArray=+0x1270 AdrArray->0x7900000071 arr.DataPtr->0x0 Count = [33||801] count*8[0x108]
				FName{None}AddrStart->[0x9700000136-0x970000057e||offsetActor::0xfffffeca] [fieldAddr->0x27085ff30] offArray=+0x1280 AdrArray->0x970000012E arr.DataPtr->0x0 Count = [138||145] count*8[0x450]
				FName{None}AddrStart->[0x1f4000000008-0x1f4000027100||offsetActor::0xfffffff8] [fieldAddr->0x2708601e0] offArray=+0x1530 AdrArray->0x1F4000000000 arr.DataPtr->0x0 Count = [20000||44001] count*8[0x27100]
				FName{None}AddrStart->[0x1f4000000008-0x1f4000027100||offsetActor::0xfffffff8] [fieldAddr->0x270860200] offArray=+0x1550 AdrArray->0x1F4000000000 arr.DataPtr->0x0 Count = [20000||44001] count*8[0x27100]
				FName{None}AddrStart->[0x100000008-0x100000010||offsetActor::0x56555249] [fieldAddr->0x2708602c0] offArray=+0x1610 AdrArray->0x100000000 arr.DataPtr->0x4150415756555251 Count = [2||3] count*8[0x10]
				FName{None}AddrStart->[0x100000008-0x100000010||offsetActor::0x56555249] [fieldAddr->0x270860c30] offArray=+0x1F80 AdrArray->0x100000000 arr.DataPtr->0x4150415756555251 Count = [2||3] count*8[0x10]
				FName{None}AddrStart->[0x1f4000000008-0x1f4000032c80||offsetActor::0xfffffff8] [fieldAddr->0x270860f70] offArray=+0x22C0 AdrArray->0x1F4000000000 arr.DataPtr->0x0 Count = [26000||44000] count*8[0x32C80]
```
