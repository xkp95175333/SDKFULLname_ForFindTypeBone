
---
Mack FunAutoUpdate
---

```c
word_37 -> 0x12f43eef0 FName[]
word_37_PtrEnc -> 0x12f4337f0 FName[]
word_36 -> 0x2b2729280 FName[]
word_36_PtrEnc -> 0x2b2729236 FName[]
```



```cpp

			auto word_37_rdx = read<uintptr_t >(Addr::processBasemodule.BaseAddress + 0x16A19278);
			word_37_rdx = (word_37_rdx > (uint64_t)0x10000000000000u || word_37_rdx > (uint64_t)0x1000u) ? AutodecodepointAddress(word_37_rdx) : word_37_rdx;

			auto word_37_rcx2000 = read<uintptr_t >(Addr::processBasemodule.BaseAddress + 0x16A1B278);
			word_37_rcx2000 = (word_37_rcx2000 > (uint64_t)0x10000000000000u || word_37_rcx2000 > (uint64_t)0x1000u) ? AutodecodepointAddress(word_37_rcx2000) : word_37_rcx2000;
			auto word_37_rcx2006 = read<uintptr_t >(Addr::processBasemodule.BaseAddress + 0x16A1B27E);
			word_37_rcx2006 = (word_37_rcx2006 > (uint64_t)0x10000000000000u || word_37_rcx2006 > (uint64_t)0x1000u) ? AutodecodepointAddress(word_37_rcx2006) : word_37_rcx2006;


			if (isRegionGood(word_37_rdx))
			{
				std::string objectName = GetNameBest(word_37_rdx);

				printf("word_37 -> 0x%llx FName[%s]\n", word_37_rdx, objectName.c_str());

			}
			if (isRegionGood(word_37_rcx2000))
			{
				std::string objectName = GetNameBest(word_37_rcx2000);

				printf("word_37_PtrEnc -> 0x%llx FName[%s]\n", word_37_rcx2000, objectName.c_str());

			}
			if (isRegionGood(word_37_rcx2006))
			{
				std::string objectName = GetNameBest(word_37_rcx2006);

				printf("word_37_PArray-> 0x%llx FName[%s]\n", word_37_rcx2006, objectName.c_str());

			} 

			auto word_36_rdx = read<uintptr_t >(Addr::processBasemodule.BaseAddress + 0x16A1D5B8);
			word_36_rdx = (word_36_rdx > (uint64_t)0x10000000000000u || word_36_rdx > (uint64_t)0x1000u) ? AutodecodepointAddress(word_36_rdx) : word_36_rdx;

			auto word_36_rcx2000 = read<uintptr_t >(Addr::processBasemodule.BaseAddress + 0x16A1F5B8);
			word_36_rcx2000 = (word_36_rcx2000 > (uint64_t)0x10000000000000u || word_36_rcx2000 > (uint64_t)0x1000u) ? AutodecodepointAddress(word_36_rcx2000) : word_36_rcx2000;

			auto word_36_rcx2006 = read<uintptr_t >(Addr::processBasemodule.BaseAddress + 0x16A1F5BF);
			word_36_rcx2006 = (word_36_rcx2006 > (uint64_t)0x10000000000000u || word_36_rcx2006 > (uint64_t)0x1000u) ? AutodecodepointAddress(word_36_rcx2006) : word_36_rcx2006;


			if (isRegionGood(word_36_rdx))
			{
				std::string objectName = GetNameBest(word_36_rdx);

				printf("word_36 -> 0x%llx FName[%s]\n", word_36_rdx, objectName.c_str());

			}
			if (isRegionGood(word_36_rcx2000))
			{
				std::string objectName = GetNameBest(word_36_rcx2000);

				printf("word_36_PtrEnc -> 0x%llx FName[%s]\n", word_36_rcx2000, objectName.c_str());

			}
			if (isRegionGood(word_36_rcx2006))
			{
				std::string objectName = GetNameBest(word_36_rcx2006);

				printf("word_36_PArray-> 0x%llx FName[%s]\n", word_36_rcx2006, objectName.c_str());

			}


```
---
log Get  word_37 -> 0x12f43eef0 FName[]
---
```lua
  
	
	BOffset->0x0|Type_UE|||0xFFFFFFFF VaFname >0x8CFCE000-> ->GFName[GPGameEngine]|APtr: 0x1514B9BD8 Adr 0x12F43EEF0 |TypePoint*->1072125440 |On::0
	Offset->0x8|float:1.807312|||0x1C VaFname >0x1380A2-> ->GFName[GPGameEngine]|APtr: 0x3FE75600 Adr 0x12F43EEF8 |TypePoint*->1157215856 |On::0
	Offset->0x10|float:1997.701172|||0x1C VaFname >0x1A143A-> ->GFName[/Engine/Transient]|APtr: 0x44F9B670 Adr 0x12F43EF00 |Count->64|1278114
	Offset->0x3C0|Type_UE|||0x1C VaFname >0x298ED9-> ->GFName[WIPMeshMaterial]|APtr: 0x12F4CCDD0 Adr 0x12F43F2B0 |TypePoint*->793557904 |On::1
	BOffset->0x3E0|float:371117056.000000|||0x1C VaFname >0x61004D-> ->GFName[/Engine/EngineDebugMaterials/DebugMeshMaterial.DebugMeshMaterial]|APtr: 0x4DB0F660 Adr 0x12F43F2D0 |Count->56|56
	BOffset->0x460|Type_UE|||0xC VaFname >0x2F0065-> ->GFName[Vector2D]|APtr: 0x12F0CA180 Adr 0x12F43F350 |Count->83|96
	BOffset->0x478|Type_UE|||0xC VaFname >0x2F0065-> ->GFName[Vector2D]|APtr: 0x12F0CA0C0 Adr 0x12F43F368 |Count->87|96
	BOffset->0x490|Type_UE|||0xC VaFname >0x2F0065-> ->GFName[Vector2D]|APtr: 0x12F0CA000 Adr 0x12F43F380 |Count->95|96
	BOffset->0x4A8|Type_UE|||0xC VaFname >0x2F0065-> ->GFName[/Engine/EngineMaterials/RemoveSurfaceMaterial.RemoveSurfaceMaterial]|APtr: 0x12F0C9F40 Adr 0x12F43F398 |Count->95|96
	BOffset->0x4C0|Type_UE|||0xC VaFname >0x2F0065-> ->GFName[Vector2D]|APtr: 0x12F0C9E80 Adr 0x12F43F3B0 |Count->95|96
	BOffset->0x4F0|Type_UE|||0xC VaFname >0x2F0065-> ->GFName[Vector2D]|APtr: 0x12F0C9DC0 Adr 0x12F43F3E0 |Count->83|96
	BOffset->0x540|Type_UE|||0xC VaFname >0x2F0065-> ->GFName[Vector2D]|APtr: 0x12F0C9D00 Adr 0x12F43F430 |Count->89|96
	BOffset->0x558|Type_UE|||0xC VaFname >0x2F0065-> ->GFName[Vector2D]|APtr: 0x12F0C9C40 Adr 0x12F43F448 |Count->95|96
	BOffset->0x570|Type_UE|||0xC VaFname >0x2F0065-> ->GFName[Vector2D]|APtr: 0x12F0C9B80 Adr 0x12F43F460 |Count->85|96
	BOffset->0x588|Type_UE|||0xC VaFname >0x2F0065-> ->GFName[Vector2D]|APtr: 0x12F0C9AC0 Adr 0x12F43F478 |Count->89|96
	BOffset->0x5A0|Type_UE|||0xC VaFname >0x2F0065-> ->GFName[Vector2D]|APtr: 0x12F0C9A00 Adr 0x12F43F490 |Count->87|96
	Offset->0x658|Type_UE|||0x1C VaFname >0x1E0000-> ->GFName[EGPWeaponInnerEvent::EStateEvent_SwitchToInactive]|APtr: 0x2F6003 Adr 0x12F43F548 |Count->0|0
	BOffset->0x680|Type_UE|||0x1C VaFname >0x3F800000-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0x12F283300 Adr 0x12F43F570 |Count->9|10
	BOffset->0x680|Type_UE|||0xC VaFname >0x3F800000-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0x12F283300 Adr 0x12F43F570 |Count->9|10
	BOffset->0x690|Type_UE|||0x1C VaFname >0x3F800000-> ->GFName[/Script/DFMQuest/DFMQuestAudioSubsystem]|APtr: 0x12F0C9940 Adr 0x12F43F580 |Count->11|12
	BOffset->0x690|Type_UE|||0xC VaFname >0x3F800000-> ->GFName[/Script/DFMQuest/DFMQuestAudioSubsystem]|APtr: 0x12F0C9940 Adr 0x12F43F580 |Count->11|12
	BOffset->0x6A0|Type_UE|||0xC VaFname >0x3F800000-> ->GFName[/Script/DFMQuest/DFMQuestAudioSubsystem]|APtr: 0x12F0C9880 Adr 0x12F43F590 |Count->11|12
	BOffset->0x6B0|float:371124224.000000|||0x1C VaFname >0x3F800000-> ->GFName[/Script/GPGameplay/Default__GPPathWayPointInterface]|APtr: 0x4DB0F740 Adr 0x12F43F5A0 |Count->7|7
	BOffset->0x6C0|Type_UE|||0xC VaFname >0x3F800000-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0x12F283260 Adr 0x12F43F5B0 |Count->9|10
	BOffset->0x6D0|Type_UE|||0xC VaFname >0x3F800000-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0x51957600 Adr 0x12F43F5C0 |Count->8|8
	BOffset->0x830|float:0.000312|||0xC VaFname >0xA3011D88-> ->GFName[LuaMDFDevops]|APtr: 0x39A3D70A Adr 0x12F43F720 |Count->-2125889024|2
	BOffset->0x9CA|int:131072|||0xC VaFname >0x1600150-> ->GFName[/Script/DFMLocalization/LocalizeCommonTextInGameConfigManager]|APtr: 0x20000 Adr 0x12F43F8BA |TypePoint*->2621440 |On::65280
	BOffset->0xA28|Type_UE|||0x1C VaFname >0x610072-> ->GFName[Vector2D]|APtr: 0x29C43BD80 Adr 0x12F43F918 |Count->57|64
	BOffset->0xA38|Type_UE|||0xC VaFname >0x6C0042-> ->GFName[Vector2D]|APtr: 0x167B14300 Adr 0x12F43F928 |Count->82|96
	BOffset->0xAE4|bool:0|||0x1C VaFname >0x83489C57-> ->GFName[e80c4d39f32503c7]|APtr: 0x100000000 Adr 0x12F43F9D4 |TypePoint*->1 |On::0
	Offset->0xAF8|Type_UE|||0xC VaFname >0x2F0074-> ->GFName[UpdateFlags]|APtr: 0x11907FB50 Adr 0x12F43F9E8 |Count->36|40
	Offset->0xCD0|Type_UE|||0x18 VaFname >0x1000-> ->GFName[/Script/GameCore/Default__EngineSingletonHelper]|APtr: 0x12F175B70 Adr 0x12F43FBC0 |TypePoint*->791755264 |On::1
	Offset->0xDC0|Type_UE|||0xC VaFname >0x30-> ->GFName[}{]|APtr: 0x12F175B40 Adr 0x12F43FCB0 |Count->1|1
	Offset->0xDFC|int:4|||0xC VaFname >0x41524151-> ->GFName[i]|APtr: 0x100000004 Adr 0x12F43FCEC |Count->0|1371952656
	Offset->0xE44|Type_UE|||0x1C VaFname >0x48EA1D8D-> ->GFName[n]|APtr: 0xFFFFFF7F Adr 0x12F43FD34 |Count->0|2
	Offset->0xE9E|int:131072|||0x1C VaFname >0x1000100-> ->GFName[�����������������������������������į��������������������������������������������������������������������������]|APtr: 0x20000 Adr 0x12F43FD8E |Count->0|0
	Offset->0xEAE|int:65536|||0xC VaFname >0x10091AF-> ->GFName[������߰�Ʈ�������ᮮ����������������������������������������������������������������]|APtr: 0x10000 Adr 0x12F43FD9E |Count->-796917760|13819
	Offset->0xEB8|Type_UE|||0x1C VaFname >0x11B838-> ->GFName[EngineSubsystem]|APtr: 0x35FBD080 Adr 0x12F43FDA8 |TypePoint*->792981232 |On::1
	Offset->0xEC0|Type_UE|||0x1C VaFname >0x1380A2-> ->GFName[GPGameEngine]|APtr: 0x12F43EEF0 Adr 0x12F43FDB0 |Count->0|0
	BOffset->0xEDA|Type_UE|||0xC VaFname >0x43804C0-> ->GFName[/Game/MaterialLib/Materials/Landscape/T_IceLand_Clipmap_HD/Mip1_x2_y3.Mip1_x2_y3]|APtr: 0x180000 Adr 0x12F43FDCA |Count->87237|16777216
	Offset->0xFA0|Type_UE|||0x1C VaFname >0x33FD08-> ->GFName[BP_DFMGameInstance_C]|APtr: 0x12A1A9280 Adr 0x12F43FE90 |TypePoint*->1787615328 |On::0
		
		
```
---
log Get  word_37_PtrEnc -> 0x12f4337f0 FName[]
---
```lua
   
		BOffset->0xC0|Type_UE|||0x1C VaFname >0x7070436B-> ->GFName[n]|APtr: 0x6A681000 Adr 0x12F4338B0 |TypePoint*->68 |On::0
		Offset->0xD4|Type_UE|||0x1C VaFname >0x833C-> ->GFName[/Script/SubstanceCore/SubstanceInstanceDesc]|APtr: 0x2C1306B Adr 0x12F4338C4 |Count->-78521792|1758836011
		BOffset->0xD4|Type_UE|||0xC VaFname >0x100-> ->GFName[o]|APtr: 0x2C1306B Adr 0x12F4338C4 |Count->-78521792|1758836011
		BOffset->0x1C4|Type_UE|||0x100 VaFname >0x1BFF-> ->GFName[o]|APtr: 0x2C1505B Adr 0x12F4339B4 |Count->0|1556951563
		Offset->0x204|Type_UE|||0x1C VaFname >0xE5BDB200-> ->GFName[R]|APtr: 0x7D5F77EB Adr 0x12F4339F4 |Count->0|1785204976
		BOffset->0x220|Type_UE|||0x1C VaFname >0x61766974-> ->GFName[s]|APtr: 0x19F809DC0 Adr 0x12F433A10 |TypePoint*->68 |On::60
		BOffset->0x300|Type_UE|||0xC VaFname >0xC0DBC93D-> ->GFName[SecondNoiseSpeedU]|APtr: 0x19F809C10 Adr 0x12F433AF0 |TypePoint*->68 |On::56
		BOffset->0x37A|Type_UE|||0x1C VaFname >0x98C0ADA-> ->GFName[SecondNoiseSpeedU]|APtr: 0x4F004C0000 Adr 0x12F433B6A |Count->-797746488|1345
		Offset->0x3E0|Type_UE|||0x1C VaFname >0x69725473-> ->GFName[R]|APtr: 0x193B85950 Adr 0x12F433BD0 |TypePoint*->68 |On::0
		Offset->0x460|Type_UE|||0x1C VaFname >0x61726570-> ->GFName[s]|APtr: 0x193B8EF20 Adr 0x12F433C50 |TypePoint*->68 |On::0
		BOffset->0x474|Type_UE|||0x1C VaFname >0x448808-> ->GFName[R]|APtr: 0x73FCCB32 Adr 0x12F433C64 |TypePoint*->-459276426 |On::-995218692
		BOffset->0x474|Type_UE|||0xC VaFname >0x338C08-> ->GFName[R]|APtr: 0x73FCCB32 Adr 0x12F433C64 |TypePoint*->-459276426 |On::-995218692
		BOffset->0x484|Type_UE|||0x1C VaFname >0x448808-> ->GFName[R]|APtr: 0x73FCCB32 Adr 0x12F433C74 |TypePoint*->0 |On::-995218692
		BOffset->0x484|Type_UE|||0xC VaFname >0x338C08-> ->GFName[R]|APtr: 0x73FCCB32 Adr 0x12F433C74 |TypePoint*->0 |On::-995218692
		BOffset->0x494|Type_UE|||0xC VaFname >0x338C08-> ->GFName[R]|APtr: 0x73FCCB32 Adr 0x12F433C84 |TypePoint*->-593494090 |On::-995218692
		BOffset->0x500|Type_UE|||0x1C VaFname >0x63656A6E-> ->GFName[s]|APtr: 0x6A6832E0 Adr 0x12F433CF0 |TypePoint*->68 |On::0
		BOffset->0x558|Type_UE|||0x1C VaFname >0x489C5741-> ->GFName[l]|APtr: 0xFFFFFFFF Adr 0x12F433D48 |TypePoint*->1398002830 |On::204670917
		BOffset->0x558|Type_UE|||0xC VaFname >0x50415756-> ->GFName[l]|APtr: 0xFFFFFFFF Adr 0x12F433D48 |TypePoint*->1398002830 |On::204670917
		Offset->0x5E0|Type_UE|||0x1C VaFname >0x646E5773-> ->GFName[i]|APtr: 0x193B8EF50 Adr 0x12F433DD0 |TypePoint*->68 |On::18
		BOffset->0x5E0|Type_UE|||0xC VaFname >0xAE726C54-> ->GFName[SHVector]|APtr: 0x193B8EF50 Adr 0x12F433DD0 |TypePoint*->68 |On::18
		BOffset->0x5F4|Type_UE|||0x1C VaFname >0xD8212D86-> ->GFName[n]|APtr: 0xE404FD45 Adr 0x12F433DE4 |Count->-1646258407|-1062327428
		BOffset->0x5F4|Type_UE|||0xC VaFname >0x11C37C40-> ->GFName[n]|APtr: 0xE404FD45 Adr 0x12F433DE4 |Count->-1646258407|-1062327428
		BOffset->0x680|Type_UE|||0xC VaFname >0x5D3F9D59-> ->GFName[Color]|APtr: 0x6A684150 Adr 0x12F433E70 |TypePoint*->68 |On::32
		Offset->0x760|Type_UE|||0xC VaFname >0x5EBF0AE0-> ->GFName[g]|APtr: 0x193B8EEF0 Adr 0x12F433F50 |TypePoint*->68 |On::13
		Offset->0x7CA|Type_UE|||0x1C VaFname >0x25B025B-> ->GFName[s]|APtr: 0x1B0000 Adr 0x12F433FBA |Count->74639|4587520
		BOffset->0x7CA|Type_UE|||0xC VaFname >0x331006F-> ->GFName[SecondNoiseSpeedU]|APtr: 0x1B0000 Adr 0x12F433FBA |Count->74639|4587520
		Offset->0x820|Type_UE|||0x1C VaFname >0x616E4573-> ->GFName[e]|APtr: 0x193B859E0 Adr 0x12F434010 |TypePoint*->68 |On::0
		BOffset->0x8CA|Type_UE|||0x1C VaFname >0xC9CC8-> ->GFName[SecondNoiseSpeedU]|APtr: 0x120000 Adr 0x12F4340BA |Count->74639|4587520
		Offset->0x8E0|Type_UE|||0x1C VaFname >0x61666544-> ->GFName[n]|APtr: 0x193B85980 Adr 0x12F4340D0 |TypePoint*->68 |On::0
		Offset->0x900|Type_UE|||0x1C VaFname >0x616E4573-> ->GFName[e]|APtr: 0x193B85AD0 Adr 0x12F4340F0 |TypePoint*->68 |On::0
		Offset->0x9E0|Type_UE|||0x1C VaFname >0x73-> ->GFName[e2528ce2528cc022]|APtr: 0x19EA113A0 Adr 0x12F4341D0 |TypePoint*->68 |On::0
		Offset->0xA40|Type_UE|||0x1C VaFname >0x6A6E496B-> ->GFName[e]|APtr: 0x6A680D60 Adr 0x12F434230 |TypePoint*->68 |On::-6
		Offset->0xB20|float:48993536.000000|||0x1C VaFname >0x65-> ->GFName[31e27a1e27a4a292]|APtr: 0x4C3AE540 Adr 0x12F434310 |TypePoint*->68 |On::0
		BOffset->0xB40|Type_UE|||0x1C VaFname >0x656D-> ->GFName[m]|APtr: 0x118FF3860 Adr 0x12F434330 |TypePoint*->68 |On::0
		BOffset->0xC6A|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[/Script/Engine/ExponentialHeightFogData]|APtr: 0x180000 Adr 0x12F43445A |Count->65536|1310720
		BOffset->0xC6A|Type_UE|||0xC VaFname >0x43804C0-> ->GFName[IsPistolWeapon]|APtr: 0x180000 Adr 0x12F43445A |Count->65536|1310720
		BOffset->0xC80|Type_UE|||0xC VaFname >0x740069-> ->GFName[/Script/Engine/ExponentialHeightFogData]|APtr: 0x2B81A12A0 Adr 0x12F434470 |Count->17|24
		BOffset->0xC8A|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[/Script/Engine/ExponentialHeightFogData]|APtr: 0x180000 Adr 0x12F43447A |Count->65536|63569920
		BOffset->0xCAA|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[IsPistolWeapon]|APtr: 0x180000 Adr 0x12F43449A |TypePoint*->0 |On::-701497344
		BOffset->0xCCA|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[IsPistolWeapon]|APtr: 0x180000 Adr 0x12F4344BA |TypePoint*->0 |On::-222494720
		Offset->0xCCE|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F4344BE |Count->-222494720|16589
		BOffset->0xCEA|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0x180000 Adr 0x12F4344DA |TypePoint*->0 |On::-563478528
		Offset->0xCEE|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F4344DE |Count->-563478528|16688
		BOffset->0xD4A|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[/Script/Engine/ExponentialHeightFogData]|APtr: 0x180000 Adr 0x12F43453A |TypePoint*->0 |On::-158793728
		Offset->0xD4E|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43453E |Count->-158793728|16586
		BOffset->0xD6A|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[/Script/DFMQuest/DFMQuestAudioSubsystem]|APtr: 0x180000 Adr 0x12F43455A |TypePoint*->0 |On::-541196288
		Offset->0xD6E|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43455E |Count->-541196288|16999
		Offset->0xD8E|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43457E |Count->-1524957184|16672
		Offset->0xD98|float:10.040309|||0xC VaFname >0x52624F06-> ->GFName[c]|APtr: 0x4120A51B Adr 0x12F434588 |Count->-1672786144|2
		Offset->0xDAE|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43459E |TypePoint*->1931018240 |On::16703
		BOffset->0xDCA|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[/Script/Engine/ExponentialHeightFogData]|APtr: 0x180000 Adr 0x12F4345BA |TypePoint*->0 |On::-1203568640
		Offset->0xDCE|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F4345BE |Count->-1203568640|16593
		BOffset->0xDCE|Type_UE|||0xC VaFname >0x51-> ->GFName[Gs]|APtr: 0x1E0000 Adr 0x12F4345BE |Count->-1203568640|16593
		BOffset->0xDEA|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[FindMinSpawnCountPlotPlayerStart]|APtr: 0x180000 Adr 0x12F4345DA |TypePoint*->0 |On::-2130313216
		Offset->0xDEE|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F4345DE |Count->-2130313216|16702
		Offset->0xE00|Type_UE|||0xC VaFname >0x640070-> ->GFName[Bar_M-605_Citori725Tac_168_RecordAction_6b/Bar_M-605_Citori725Tac_168_RecordAction_6b_1P.Bar_M-605_Citori725Tac_168_RecordAction_6b_1POM/Game/Commerical/WeaponAppear/Ma1/RecordAction_6b/Citori725/Model/Bar_M-605_Citori725Tac_168_RecordAction_6b/Bar_M-605_Citori725Tac_168_RecordAction_6b_3P.Bar_M-605_Citori725Tac_168_Re]|APtr: 0x169871AC0 Adr 0x12F4345F0 |Count->26|32
		BOffset->0xE20|Type_UE|||0xC VaFname >0x610072-> ->GFName[Color]|APtr: 0x1A06C0400 Adr 0x12F434610 |Count->27|32
		Offset->0xE26|Type_UE|||0x1C VaFname >0x25B025B-> ->GFName[s]|APtr: 0x1B0000 Adr 0x12F434616 |TypePoint*->2555904 |On::65536
		Offset->0xE4E|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43463E |Count->-419168256|15884
		Offset->0xE6E|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43465E |Count->-1487929344|16773
		Offset->0xE8E|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43467E |TypePoint*->1549598720 |On::16823
		Offset->0xEAE|Type_UE|||0x1C VaFname >0x4430434-> ->GFName[g]|APtr: 0x1D0000 Adr 0x12F43469E |TypePoint*->65536 |On::0
		Offset->0xEC0|float:-0.002077|||0xC VaFname >0x4C0067-> ->GFName[ginInterfaceINTLij/Game/BluePrints/UI/UMG/System/Login/WBP_Login]|APtr: 0x2BB081680 Adr 0x12F4346B0 |Count->13|16
		BOffset->0xF50|int:4|||0x1C VaFname >0x110F40EC-> ->GFName[/Script/GPGameplay/TacticalMarkingTypes]|APtr: 0x100000004 Adr 0x12F434740 |TypePoint*->255335 |On::0
		BOffset->0xF7A|int:65534|||0xC VaFname >0x91AF175E-> ->GFName[/Script/GPGameplay/Default__GPPathWayPointInterface]|APtr: 0xFFFE Adr 0x12F43476A |Count->81862|327680
		Offset->0xF9A|int:65535|||0xC VaFname >0x91AF17-> ->GFName[��������������������#�������������������������������ͭ������������߰��������������������ͭ������������߰����������������߱��1�������������������������������ͭ������������߰��������������������ͭ������������߰����������������߳���������������������������������ͭ������������߰��������������������ͭ]|APtr: 0xFFFF Adr 0x12F43478A |Count->162312|393216
		Offset->0xFBA|int:65535|||0xC VaFname >0x91AF17-> ->GFName[��������������������#�������������������������������ͭ������������߰��������������������ͭ������������߰����������������߱��1�������������������������������ͭ������������߰��������������������ͭ������������߰����������������߳���������������������������������ͭ������������߰��������������������ͭ]|APtr: 0xFFFF Adr 0x12F4347AA |Count->162312|524288
		BOffset->0xFC0|Type_UE|||0xC VaFname >0x58-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0x27A08C3A0 Adr 0x12F4347B0 |Count->8|8
		BOffset->0xFE0|Type_UE|||0xC VaFname >0x59-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0x68632BD0 Adr 0x12F4347D0 |Count->8|8


```
---
log Get  word_36 -> 0x2b2729280 FName[]  
 
		-------------------fun Get 0x12f4337f0 Asm Def------------------------
		Thread Count 287
		��{~�
		Asm: 0x12F4337F0retf  (groups_count: 0x2)
		Asm: 0x12F4337F1mov dh, 0xd7 (groups_count: 0x0)
				└─ [0x12f4337f3] (+0x37f3) = 0xb (u8)
				└─ [0x12f4337f3] (+0x37f3) = 0xb (u8)
		Asm: 0x12F4337F3bound esp, qword ptr [ebx + 0x50] (groups_count: 0x1)
				└─ [0x12f4337f6] (+0x37f6) = 0x441 (u32)
		Asm: 0x12F4337F6inc ecx (groups_count: 0x1)
				└─ [0x12f4337f7] (+0x37f7) = 0x4 (u32)
		Asm: 0x12F4337F7add al, 0x79 (groups_count: 0x0)
				└─ [0x12f4337f9] (+0x37f9) = 0x
---
```lua
   
 
		-------------------End debug------------------------
		BOffset->0xC0|Type_UE|||0x1C VaFname >0x7070436B-> ->GFName[n]|APtr: 0x6A681000 Adr 0x12F4338B0 |TypePoint*->68 |On::0
		Offset->0xD4|Type_UE|||0x1C VaFname >0x833C-> ->GFName[/Script/SubstanceCore/SubstanceInstanceDesc]|APtr: 0x2C1306B Adr 0x12F4338C4 |Count->-78521792|1758836011
		BOffset->0xD4|Type_UE|||0xC VaFname >0x100-> ->GFName[o]|APtr: 0x2C1306B Adr 0x12F4338C4 |Count->-78521792|1758836011
		BOffset->0x1C4|Type_UE|||0x100 VaFname >0x1BFF-> ->GFName[o]|APtr: 0x2C1505B Adr 0x12F4339B4 |Count->0|1556951563
		Offset->0x204|Type_UE|||0x1C VaFname >0xE5BDB200-> ->GFName[R]|APtr: 0x7D5F77EB Adr 0x12F4339F4 |Count->0|1785204976
		BOffset->0x220|Type_UE|||0x1C VaFname >0x61766974-> ->GFName[s]|APtr: 0x19F809DC0 Adr 0x12F433A10 |TypePoint*->68 |On::60
		BOffset->0x300|Type_UE|||0xC VaFname >0xC0DBC93D-> ->GFName[SecondNoiseSpeedU]|APtr: 0x19F809C10 Adr 0x12F433AF0 |TypePoint*->68 |On::56
		BOffset->0x37A|Type_UE|||0x1C VaFname >0x98C0ADA-> ->GFName[SecondNoiseSpeedU]|APtr: 0x4F004C0000 Adr 0x12F433B6A |Count->-797746488|1345
		Offset->0x3E0|Type_UE|||0x1C VaFname >0x69725473-> ->GFName[R]|APtr: 0x193B85950 Adr 0x12F433BD0 |TypePoint*->68 |On::0
		Offset->0x460|Type_UE|||0x1C VaFname >0x61726570-> ->GFName[s]|APtr: 0x193B8EF20 Adr 0x12F433C50 |TypePoint*->68 |On::0
		BOffset->0x474|Type_UE|||0x1C VaFname >0x448808-> ->GFName[R]|APtr: 0x73FCCB32 Adr 0x12F433C64 |TypePoint*->-459276426 |On::-995218692
		BOffset->0x474|Type_UE|||0xC VaFname >0x338C08-> ->GFName[R]|APtr: 0x73FCCB32 Adr 0x12F433C64 |TypePoint*->-459276426 |On::-995218692
		BOffset->0x484|Type_UE|||0x1C VaFname >0x448808-> ->GFName[R]|APtr: 0x73FCCB32 Adr 0x12F433C74 |TypePoint*->0 |On::-995218692
		BOffset->0x484|Type_UE|||0xC VaFname >0x338C08-> ->GFName[R]|APtr: 0x73FCCB32 Adr 0x12F433C74 |TypePoint*->0 |On::-995218692
		BOffset->0x494|Type_UE|||0xC VaFname >0x338C08-> ->GFName[R]|APtr: 0x73FCCB32 Adr 0x12F433C84 |TypePoint*->-593494090 |On::-995218692
		BOffset->0x500|Type_UE|||0x1C VaFname >0x63656A6E-> ->GFName[s]|APtr: 0x6A6832E0 Adr 0x12F433CF0 |TypePoint*->68 |On::0
		BOffset->0x558|Type_UE|||0x1C VaFname >0x489C5741-> ->GFName[l]|APtr: 0xFFFFFFFF Adr 0x12F433D48 |TypePoint*->1398002830 |On::204670917
		BOffset->0x558|Type_UE|||0xC VaFname >0x50415756-> ->GFName[l]|APtr: 0xFFFFFFFF Adr 0x12F433D48 |TypePoint*->1398002830 |On::204670917
		Offset->0x5E0|Type_UE|||0x1C VaFname >0x646E5773-> ->GFName[i]|APtr: 0x193B8EF50 Adr 0x12F433DD0 |TypePoint*->68 |On::18
		BOffset->0x5E0|Type_UE|||0xC VaFname >0xAE726C54-> ->GFName[SHVector]|APtr: 0x193B8EF50 Adr 0x12F433DD0 |TypePoint*->68 |On::18
		BOffset->0x5F4|Type_UE|||0x1C VaFname >0xD8212D86-> ->GFName[n]|APtr: 0xE404FD45 Adr 0x12F433DE4 |Count->-1646258407|-1062327428
		BOffset->0x5F4|Type_UE|||0xC VaFname >0x11C37C40-> ->GFName[n]|APtr: 0xE404FD45 Adr 0x12F433DE4 |Count->-1646258407|-1062327428
		BOffset->0x680|Type_UE|||0xC VaFname >0x5D3F9D59-> ->GFName[Color]|APtr: 0x6A684150 Adr 0x12F433E70 |TypePoint*->68 |On::32
		Offset->0x760|Type_UE|||0xC VaFname >0x5EBF0AE0-> ->GFName[g]|APtr: 0x193B8EEF0 Adr 0x12F433F50 |TypePoint*->68 |On::13
		Offset->0x7CA|Type_UE|||0x1C VaFname >0x25B025B-> ->GFName[s]|APtr: 0x1B0000 Adr 0x12F433FBA |Count->74639|4587520
		BOffset->0x7CA|Type_UE|||0xC VaFname >0x331006F-> ->GFName[SecondNoiseSpeedU]|APtr: 0x1B0000 Adr 0x12F433FBA |Count->74639|4587520
		Offset->0x820|Type_UE|||0x1C VaFname >0x616E4573-> ->GFName[e]|APtr: 0x193B859E0 Adr 0x12F434010 |TypePoint*->68 |On::0
		BOffset->0x8CA|Type_UE|||0x1C VaFname >0xC9CC8-> ->GFName[SecondNoiseSpeedU]|APtr: 0x120000 Adr 0x12F4340BA |Count->74639|4587520
		Offset->0x8E0|Type_UE|||0x1C VaFname >0x61666544-> ->GFName[n]|APtr: 0x193B85980 Adr 0x12F4340D0 |TypePoint*->68 |On::0
		Offset->0x900|Type_UE|||0x1C VaFname >0x616E4573-> ->GFName[e]|APtr: 0x193B85AD0 Adr 0x12F4340F0 |TypePoint*->68 |On::0
		Offset->0x9E0|Type_UE|||0x1C VaFname >0x73-> ->GFName[e2528ce2528cc022]|APtr: 0x19EA113A0 Adr 0x12F4341D0 |TypePoint*->68 |On::0
		Offset->0xA40|Type_UE|||0x1C VaFname >0x6A6E496B-> ->GFName[e]|APtr: 0x6A680D60 Adr 0x12F434230 |TypePoint*->68 |On::-6
		Offset->0xB20|float:48993536.000000|||0x1C VaFname >0x65-> ->GFName[31e27a1e27a4a292]|APtr: 0x4C3AE540 Adr 0x12F434310 |TypePoint*->68 |On::0
		BOffset->0xB40|Type_UE|||0x1C VaFname >0x656D-> ->GFName[m]|APtr: 0x118FF3860 Adr 0x12F434330 |TypePoint*->68 |On::0
		BOffset->0xC6A|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[/Script/Engine/ExponentialHeightFogData]|APtr: 0x180000 Adr 0x12F43445A |Count->65536|1310720
		BOffset->0xC6A|Type_UE|||0xC VaFname >0x43804C0-> ->GFName[IsPistolWeapon]|APtr: 0x180000 Adr 0x12F43445A |Count->65536|1310720
		BOffset->0xC80|Type_UE|||0xC VaFname >0x740069-> ->GFName[/Script/Engine/ExponentialHeightFogData]|APtr: 0x2B81A12A0 Adr 0x12F434470 |Count->17|24
		BOffset->0xC8A|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[/Script/Engine/ExponentialHeightFogData]|APtr: 0x180000 Adr 0x12F43447A |Count->65536|63569920
		BOffset->0xCAA|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[IsPistolWeapon]|APtr: 0x180000 Adr 0x12F43449A |TypePoint*->0 |On::-701497344
		BOffset->0xCCA|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[IsPistolWeapon]|APtr: 0x180000 Adr 0x12F4344BA |TypePoint*->0 |On::-222494720
		Offset->0xCCE|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F4344BE |Count->-222494720|16589
		BOffset->0xCEA|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0x180000 Adr 0x12F4344DA |TypePoint*->0 |On::-563478528
		Offset->0xCEE|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F4344DE |Count->-563478528|16688
		BOffset->0xD4A|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[/Script/Engine/ExponentialHeightFogData]|APtr: 0x180000 Adr 0x12F43453A |TypePoint*->0 |On::-158793728
		Offset->0xD4E|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43453E |Count->-158793728|16586
		BOffset->0xD6A|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[/Script/DFMQuest/DFMQuestAudioSubsystem]|APtr: 0x180000 Adr 0x12F43455A |TypePoint*->0 |On::-541196288
		Offset->0xD6E|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43455E |Count->-541196288|16999
		Offset->0xD8E|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43457E |Count->-1524957184|16672
		Offset->0xD98|float:10.040309|||0xC VaFname >0x52624F06-> ->GFName[c]|APtr: 0x4120A51B Adr 0x12F434588 |Count->-1672786144|2
		Offset->0xDAE|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43459E |TypePoint*->1931018240 |On::16703
		BOffset->0xDCA|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[/Script/Engine/ExponentialHeightFogData]|APtr: 0x180000 Adr 0x12F4345BA |TypePoint*->0 |On::-1203568640
		Offset->0xDCE|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F4345BE |Count->-1203568640|16593
		BOffset->0xDCE|Type_UE|||0xC VaFname >0x51-> ->GFName[Gs]|APtr: 0x1E0000 Adr 0x12F4345BE |Count->-1203568640|16593
		BOffset->0xDEA|Type_UE|||0x1C VaFname >0x43E0448-> ->GFName[FindMinSpawnCountPlotPlayerStart]|APtr: 0x180000 Adr 0x12F4345DA |TypePoint*->0 |On::-2130313216
		Offset->0xDEE|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F4345DE |Count->-2130313216|16702
		Offset->0xE00|Type_UE|||0xC VaFname >0x640070-> ->GFName[Bar_M-605_Citori725Tac_168_RecordAction_6b/Bar_M-605_Citori725Tac_168_RecordAction_6b_1P.Bar_M-605_Citori725Tac_168_RecordAction_6b_1POM/Game/Commerical/WeaponAppear/Ma1/RecordAction_6b/Citori725/Model/Bar_M-605_Citori725Tac_168_RecordAction_6b/Bar_M-605_Citori725Tac_168_RecordAction_6b_3P.Bar_M-605_Citori725Tac_168_Re]|APtr: 0x169871AC0 Adr 0x12F4345F0 |Count->26|32
		BOffset->0xE20|Type_UE|||0xC VaFname >0x610072-> ->GFName[Color]|APtr: 0x1A06C0400 Adr 0x12F434610 |Count->27|32
		Offset->0xE26|Type_UE|||0x1C VaFname >0x25B025B-> ->GFName[s]|APtr: 0x1B0000 Adr 0x12F434616 |TypePoint*->2555904 |On::65536
		Offset->0xE4E|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43463E |Count->-419168256|15884
		Offset->0xE6E|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43465E |Count->-1487929344|16773
		Offset->0xE8E|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x12F43467E |TypePoint*->1549598720 |On::16823
		Offset->0xEAE|Type_UE|||0x1C VaFname >0x4430434-> ->GFName[g]|APtr: 0x1D0000 Adr 0x12F43469E |TypePoint*->65536 |On::0
		Offset->0xEC0|float:-0.002077|||0xC VaFname >0x4C0067-> ->GFName[ginInterfaceINTLij/Game/BluePrints/UI/UMG/System/Login/WBP_Login]|APtr: 0x2BB081680 Adr 0x12F4346B0 |Count->13|16
		BOffset->0xF50|int:4|||0x1C VaFname >0x110F40EC-> ->GFName[/Script/GPGameplay/TacticalMarkingTypes]|APtr: 0x100000004 Adr 0x12F434740 |TypePoint*->255335 |On::0
		BOffset->0xF7A|int:65534|||0xC VaFname >0x91AF175E-> ->GFName[/Script/GPGameplay/Default__GPPathWayPointInterface]|APtr: 0xFFFE Adr 0x12F43476A |Count->81862|327680
		Offset->0xF9A|int:65535|||0xC VaFname >0x91AF17-> ->GFName[��������������������#�������������������������������ͭ������������߰��������������������ͭ������������߰����������������߱��1�������������������������������ͭ������������߰��������������������ͭ������������߰����������������߳���������������������������������ͭ������������߰��������������������ͭ]|APtr: 0xFFFF Adr 0x12F43478A |Count->162312|393216
		Offset->0xFBA|int:65535|||0xC VaFname >0x91AF17-> ->GFName[��������������������#�������������������������������ͭ������������߰��������������������ͭ������������߰����������������߱��1�������������������������������ͭ������������߰��������������������ͭ������������߰����������������߳���������������������������������ͭ������������߰��������������������ͭ]|APtr: 0xFFFF Adr 0x12F4347AA |Count->162312|524288
		BOffset->0xFC0|Type_UE|||0xC VaFname >0x58-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0x27A08C3A0 Adr 0x12F4347B0 |Count->8|8
		BOffset->0xFE0|Type_UE|||0xC VaFname >0x59-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0x68632BD0 Adr 0x12F4347D0 |Count->8|8

```
---
log Get  word_36_PtrEnc -> 0x2b2729236 FName[]
---
```lua 
 
		BOffset->0x4A|Type_UE|||0xFFFFFFFF VaFname >0xB2246000-> ->GFName[Gibraltar_Breakthrough]|APtr: 0x154C69C48 Adr 0x2B2729280 |TypePoint*->1070752384 |On::0
		Offset->0x52|float:1.643631|||0x1C VaFname >0xDC9F3-> ->GFName[World]|APtr: 0x3FD26280 Adr 0x2B2729288 |TypePoint*->295318432 |On::0
		Offset->0x5A|Type_UE|||0x1C VaFname >0xEC0926-> ->GFName[/Game/Maps/Gibraltar_Breakthrough/Gibraltar_Breakthrough]|APtr: 0x119A33A0 Adr 0x2B2729290 |Count->2621451|3169611
		Offset->0x7A|Type_UE|||0x1C VaFname >0x13B7A2-> ->GFName[GPNetDriver]|APtr: 0x2B53F12C0 Adr 0x2B27292B0 |Count->-1248210080|2
		Offset->0x8A|Type_UE|||0x1C VaFname >0x18EE05-> ->GFName[LineBatchComponent]|APtr: 0x2965F0760 Adr 0x2B27292C0 |Count->-1772096704|2
		Offset->0xA2|Type_UE|||0x1C VaFname >0x190919-> ->GFName[PhysicsCollisionHandler]|APtr: 0x282EE1B80 Adr 0x2B27292D8 |Count->0|0
		Offset->0x13A|Type_UE|||0x1C VaFname >0x1900F1-> ->GFName[ParticleEventManager]|APtr: 0x16A38DD00 Adr 0x2B2729370 |TypePoint*->2046144832 |On::1074069504
		Offset->0x142|Type_UE|||0x1C VaFname >0x1E0-> ->GFName[PersistentLevel]|APtr: 0x79F5B140 Adr 0x2B2729378 |Count->-970200992|1
		Offset->0x14A|float:-11002.093750|||0x1C VaFname >0x18B2A5-> ->GFName[DefaultPhysicsVolume]|APtr: 0x1C62BE860 Adr 0x2B2729380 |Count->-2004963392|2
		Offset->0x152|Type_UE|||0x1C VaFname >0x720065-> ->GFName[25641]|APtr: 0x2887EAFC0 Adr 0x2B2729388 |Count->1|4
		Offset->0x18A|Type_UE|||0x1C VaFname >0xEC44B3-> ->GFName[BP_GameState_Breakthrough_C]|APtr: 0x29251D560 Adr 0x2B27293C0 |Count->0|0
		Offset->0x19A|float:-136.265137|||0x1C VaFname >0x18AADE-> ->GFName[AvoidanceManager]|APtr: 0x2C30843E0 Adr 0x2B27293D0 |TypePoint*->1762977408 |On::1
		Offset->0x1A2|Type_UE|||0x2 VaFname >0x79F5-> ->GFName[GPQuestObjectiveNoticeInfo]|APtr: 0x16914E680 Adr 0x2B27293D8 |Count->313|408
		BOffset->0x1CE|Type_UE|||0x1C VaFname >0x9C574156-> ->GFName[/Game/WwiseAudio/GPEvents/Classes/Classes_Ability/Classes_Ability_C202/C202_Ability_Skill/C202_Ability_Skill_Objects/C202_Skill_ThrowingKnife_Obj_Impact_Wood.C202_Skill_ThrowingKnife_Obj_Impact_Wood]|APtr: 0xFFFFFFFE Adr 0x2B2729404 |Count->0|706384512
		Offset->0x1DA|Type_UE|||0x1C VaFname >0x33FD08-> ->GFName[BP_DFMGameInstance_C]|APtr: 0x12A1A9280 Adr 0x2B2729410 |Count->-1291877440|1
		Offset->0x1E8|Type_UE|||0x1C VaFname >0x4D004C-> ->GFName[���������ɯ��ǯ��������������������������������������������������������]|APtr: 0x1E0000 Adr 0x2B272941E |Count->-1862270976|179577
		Offset->0x1F2|float:-0.060929|||0x1C VaFname >0x18B003-> ->GFName[Canvas]|APtr: 0x2BD799100 Adr 0x2B2729428 |Count->0|0
		Offset->0x202|float:-74.166748|||0x2 VaFname >0x15472-> ->GFName[kLayerExpand�|���������������%u/Script/OpenWorldStreaming/MapRe]|APtr: 0x2C2945560 Adr 0x2B2729438 |Count->-1270387168|2
		Offset->0x252|float:-0.000336|||0x1C VaFname >0x190BB7-> ->GFName[PhysicsSimulationTree]|APtr: 0x2B9B03990 Adr 0x2B2729488 |Count->-1400198464|2
		BOffset->0x32E|bool:0|||0xC VaFname >0x41504157-> ->GFName[/Script/GameCore/GameResVersion]|APtr: 0x100000000 Adr 0x2B2729564 |Count->4|3594
		BOffset->0x386|bool:0|||0x1C VaFname >0x83489C57-> ->GFName[NOLOKKNOHNN]|APtr: 0x100000000 Adr 0x2B27295BC |Count->0|0
		BOffset->0x43E|int:2|||0x1C VaFname >0x40EC8348-> ->GFName[SlideVel]|APtr: 0x100000002 Adr 0x2B2729674 |TypePoint*->4 |On::1
		BOffset->0x43E|int:2|||0xC VaFname >0x41514150-> ->GFName[SlideVel]|APtr: 0x100000002 Adr 0x2B2729674 |TypePoint*->4 |On::1
		Offset->0x446|int:4|||0xC VaFname >0x41524151-> ->GFName[i]|APtr: 0x100000004 Adr 0x2B272967C |TypePoint*->0 |On::-1271743808
		Offset->0x448|int:65536|||0xC VaFname >0x10091AF-> ->GFName[������߰�Ʈ�������ᮮ����������������������������������������������������������������]|APtr: 0x10000 Adr 0x2B272967E |Count->-1161822208|177202
		BOffset->0x452|Type_UE|||0x2 VaFname >0x13F65-> ->GFName[ChangeVertexInstancesForPolygon]|APtr: 0x2B432BAC0 Adr 0x2B2729688 |Count->1|4
		BOffset->0x456|int:2|||0x1C VaFname >0x40EC8348-> ->GFName[SlideVel]|APtr: 0x100000002 Adr 0x2B272968C |TypePoint*->4 |On::1
		BOffset->0x456|int:2|||0xC VaFname >0x41514150-> ->GFName[SlideVel]|APtr: 0x100000002 Adr 0x2B272968C |TypePoint*->4 |On::1
		Offset->0x45E|int:4|||0xC VaFname >0x41524151-> ->GFName[i]|APtr: 0x100000004 Adr 0x2B2729694 |TypePoint*->0 |On::-1271732992
		Offset->0x460|int:65536|||0xC VaFname >0x10091AF-> ->GFName[������߰�Ʈ�������ᮮ����������������������������������������������������������������]|APtr: 0x10000 Adr 0x2B2729696 |Count->-452984832|177202
		BOffset->0x46A|Type_UE|||0x2 VaFname >0x13F65-> ->GFName[ChangeVertexInstancesForPolygon]|APtr: 0x2B432E500 Adr 0x2B27296A0 |Count->1|4
		BOffset->0x46E|int:2|||0x1C VaFname >0x40EC8348-> ->GFName[SlideVel]|APtr: 0x100000002 Adr 0x2B27296A4 |TypePoint*->4 |On::1
		BOffset->0x46E|int:2|||0xC VaFname >0x41514150-> ->GFName[SlideVel]|APtr: 0x100000002 Adr 0x2B27296A4 |TypePoint*->4 |On::1
		Offset->0x476|int:4|||0xC VaFname >0x41524151-> ->GFName[i]|APtr: 0x100000004 Adr 0x2B27296AC |TypePoint*->0 |On::-1271743040
		Offset->0x478|int:65536|||0xC VaFname >0x10091AF-> ->GFName[������߰�Ʈ�������ᮮ����������������������������������������������������������������]|APtr: 0x10000 Adr 0x2B27296AE |Count->-1111490560|177202
		BOffset->0x486|int:2|||0xC VaFname >0x41514150-> ->GFName[SlideVel]|APtr: 0x100000002 Adr 0x2B27296BC |TypePoint*->4 |On::1
		Offset->0x4BE|int:4|||0xC VaFname >0x41524151-> ->GFName[i]|APtr: 0x100000004 Adr 0x2B27296F4 |Count->0|1745973008
		Offset->0x512|float:-8244.250000|||0xC VaFname >0x20-> ->GFName[Color]|APtr: 0x1C600D100 Adr 0x2B2729748 |Count->8|8
		BOffset->0x628|int:131072|||0xC VaFname >0x1600150-> ->GFName[/Script/PhysXVehicles/Default__SimpleWheeledVehicleMovementComponent]|APtr: 0x20000 Adr 0x2B272985E |TypePoint*->394264576 |On::178678
		Offset->0x69E|Type_UE|||0x1C VaFname >0x90B1AEDE-> ->GFName[o]|APtr: 0xFFFFDE55 Adr 0x2B27298D4 |Count->0|0
		BOffset->0x7AE|Type_UE|||0xC VaFname >0x4B2C9A-> ->GFName[/Script/GameCore/Default__EngineSingletonHelper]|APtr: 0x7FFFFFF Adr 0x2B27299E4 |Count->0|123
		Offset->0x7BE|Type_UE|||0x1C VaFname >0x48EA1D8D-> ->GFName[n]|APtr: 0xFFFFFF7F Adr 0x2B27299F4 |Count->0|2
		Offset->0x7D2|Type_UE|||0x62 VaFname >0x6A0000-> ->GFName[/Game/Models/Weapons/Parts/FroG/FroG_Pic_SF900A_027_TheArtOfWar/FroG_Pic_SF900A_027_TheArtOfWar_3P.FroG_Pic_SF900A_027_TheArtOfWar_3P]|APtr: 0x2795AF600 Adr 0x2B2729A08 |TypePoint*->128 |On::0
		Offset->0x7E2|Type_UE|||0x2 VaFname >0x35FB-> ->GFName[LuaMChat]|APtr: 0x2E37EA540 Adr 0x2B2729A18 |Count->9|22
		BOffset->0x7EC|Type_UE|||0x1C VaFname >0x3ADB-> ->GFName[UCharacterLODFeatureLevel]|APtr: 0x160000 Adr 0x2B2729A22 |Count->0|0
		Offset->0x80E|Type_UE|||0x1C VaFname >0x48EA1D8D-> ->GFName[n]|APtr: 0xFFFFFF7F Adr 0x2B2729A44 |Count->0|2
		Offset->0x818|int:131072|||0x1C VaFname >0x1000100-> ->GFName[�����������������������������������į��������������������������������������������������������������������������]|APtr: 0x20000 Adr 0x2B2729A4E |Count->-1665138688|116191
		Offset->0x83A|Type_UE|||0x1C VaFname >0x305D4B-> ->GFName[Gibraltar_Breakthrough]|APtr: 0x2B2729280 Adr 0x2B2729A70 |Count->0|0
		BOffset->0x940|None|0xC VaFname >0xDC-> ->GFName[f]|APtr: 0x1FFFFFF Adr 0x2B2729B76 |TypePoint*->599721921 |On::199897074
		BOffset->0x96A|Type_UE|||0xFFFFFFFF VaFname >0x6CAC4000-> ->GFName[DFMWorldSettings]|APtr: 0x1537A7C98 Adr 0x2B2729BA0 |TypePoint*->1076305024 |On::0
		Offset->0x972|float:2.611115|||0x1C VaFname >0x164E05-> ->GFName[DFMWorldSettings]|APtr: 0x40271C80 Adr 0x2B2729BA8 |Count->-942961200|1
		Offset->0x97A|float:-104219.625000|||0x1C VaFname >0x1E0-> ->GFName[PersistentLevel]|APtr: 0x1C7CB8DD0 Adr 0x2B2729BB0 |TypePoint*->2621448 |On::1461765
		Offset->0xA90|Type_UE|||0x1C VaFname >0xEC45B9-> ->GFName[DFMCharacterFSM_Main_BattleField_C]|APtr: 0x2E50000 Adr 0x2B2729CC6 |TypePoint*->16842752 |On::1
		Offset->0xD02|float:1.641800|||0x1C VaFname >0x1257AC-> ->GFName[WorldComposition]|APtr: 0x3FD22680 Adr 0x2B2729F38 |Count->0|32
		Offset->0xD5A|float:3.486267|||0x1C VaFname >0x18BBA3-> ->GFName[GameNetworkManager]|APtr: 0x405F1F00 Adr 0x2B2729F90 |Count->1024|1065353216
		Offset->0xD60|Type_UE|||0x1C VaFname >0xC5FB8B-> ->GFName[AtomFSM_Vehicle_C]|APtr: 0x4000000 Adr 0x2B2729F96 |Count->16256|16256
		Offset->0xE88|int:655360|||0x1C VaFname >0x1000100-> ->GFName[�����������������������������������į��������������������������������������������������������������������������]|APtr: 0xA0000 Adr 0x2B272A0BE |TypePoint*->897581056 |On::16478
		BOffset->0xE88|int:655360|||0xC VaFname >0x1600150-> ->GFName[USluaEnvBridge]|APtr: 0xA0000 Adr 0x2B272A0BE |TypePoint*->897581056 |On::16478
		Offset->0xF54|int:327680|||0xC VaFname >0x3054-> ->GFName[/Script/GPAIBase/EAIVisibilityRatingType]|APtr: 0x50000 Adr 0x2B272A18A |TypePoint*->1797783552 |On::20078
```
---
word_36_PtrEnc GoodFname Getlavel new class Offset->0x142|
---
```c

NewBase  GetLavelwill liip Actor 
			Offset->0x142|Type_UE|||0x1C VaFname >0x1E0-> ->GFName[PersistentLevel]|APtr: 0x79F5B140 Adr 0x2B2729378 |Count->-970200992|1
			DBGAdd
			ENC: 0x2b2729378
				 -> [0] 0x2b2729378
				 -> [1] 0x6b2729378
				 -> [2] 0xab2729378
				 -> [3] 0x2b272937
				 -> [4] 0x2b27293780
```
	AddrLevel  : 0x2B2729378 PAddrLevel : 0x4005000079F5B140  **  Encoreptr offset Lavel= 0x1E00> Array=+ 0x9C0
```lua
	  
  
		 
				FName{����������������������������������������������%�/Game/DataTables/POI/MapPOIData_SpaceCenter�O�����������������ɯ�����}||offsetActor::0x0] [fieldAddr->0x2b2729388]  ActorOffset =+0x10 PAdrArray->0x2887EAFC0 arr.dePtr->0xc46bbe72 Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x5f
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b2729398]  ActorOffset =+0x20 PAdrArray->0x13F6568E0 arr.dePtr->0xbd343172 Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x288f8f520
				FName{PersistentLevel}||offsetActor::0x9c0] [fieldAddr->0x2b27293d8]  ActorOffset =+0x60 PAdrArray->0x16914E680 arr.dePtr->0x279e6d8a0 Count = [313||408] id*sizeof(uintptr_t) = sizeMenMove[0x9c8] NewPaddrBase->0x1c1767e10
				FName{BP_GameState_Breakthrough_C}||offsetActor::0x8] [fieldAddr->0x2b27293e8]  ActorOffset =+0x70 PAdrArray->0x16326C100 arr.dePtr->0x29251d560 Count = [2||3] id*sizeof(uintptr_t) = sizeMenMove[0x10] NewPaddrBase->0x4e22e5db70
				FName{MaterialParameterCollectionInstance}||offsetActor::0xe8] [fieldAddr->0x2b2729418]  ActorOffset =+0xa0 PAdrArray->0x1B2FF83C0 arr.dePtr->0x294bd31c0 Count = [30||56] id*sizeof(uintptr_t) = sizeMenMove[0xf0] NewPaddrBase->0x2bd74edc0
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b2729440]  ActorOffset =+0xc8 PAdrArray->0x2B4476E20 arr.dePtr->0xc0fc0002705a Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x100000000
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b2729450]  ActorOffset =+0xd8 PAdrArray->0x279C2C240 arr.dePtr->0xc0fc0002705a Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x6f006300650044
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b27294b0]  ActorOffset =+0x138 PAdrArray->0x1C82877E0 arr.dePtr->0x0 Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x157552270
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b2729510]  ActorOffset =+0x198 PAdrArray->0x1C819A140 arr.dePtr->0x0 Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x330031002c0031
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b2729560]  ActorOffset =+0x1e8 PAdrArray->0x0 arr.dePtr->0x0 Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x0
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b2729578]  ActorOffset =+0x200 PAdrArray->0x287FEF300 arr.dePtr->0x1 Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x0
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b2729598]  ActorOffset =+0x220 PAdrArray->0x0 arr.dePtr->0x0 Count = [1||128] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x0
				FName{None}||offsetActor::0x8] [fieldAddr->0x2b27295e0]  ActorOffset =+0x268 PAdrArray->0x2B432C280 arr.dePtr->0x3 Count = [2||4] id*sizeof(uintptr_t) = sizeMenMove[0x10] NewPaddrBase->0x100000000
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b2729670]  ActorOffset =+0x2f8 PAdrArray->0x2B432BD00 arr.dePtr->0x3 Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x279b60100
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b2729688]  ActorOffset =+0x310 PAdrArray->0x2B432BAC0 arr.dePtr->0x3 Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x2b2bae680
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b27296a0]  ActorOffset =+0x328 PAdrArray->0x2B432E500 arr.dePtr->0x3 Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x2c396d000
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b27296b8]  ActorOffset =+0x340 PAdrArray->0x2B432BDC0 arr.dePtr->0x3 Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x0
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b27296e8]  ActorOffset =+0x370 PAdrArray->0x2847DA440 arr.dePtr->0x3 Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0xf0000000b
				FName{None}||offsetActor::0x30] [fieldAddr->0x2b2729700]  ActorOffset =+0x388 PAdrArray->0x68116F10 arr.dePtr->0x6c0061 Count = [7||8] id*sizeof(uintptr_t) = sizeMenMove[0x38] NewPaddrBase->0x65006e006f004e
				FName{None}||offsetActor::0x60] [fieldAddr->0x2b2729710]  ActorOffset =+0x398 PAdrArray->0x28106C180 arr.dePtr->0x34002e00330033 Count = [13||16] id*sizeof(uintptr_t) = sizeMenMove[0x68] NewPaddrBase->0x154bb0858
				FName{None}||offsetActor::0x1c0] [fieldAddr->0x2b2729728]  ActorOffset =+0x3b0 PAdrArray->0xF12EB00 arr.dePtr->0x61004d002f0065 Count = [57||64] id*sizeof(uintptr_t) = sizeMenMove[0x1c8] NewPaddrBase->0x0
				FName{None}||offsetActor::0x200] [fieldAddr->0x2b2729738]  ActorOffset =+0x3c0 PAdrArray->0x2CEE4ACE0 arr.dePtr->0x650064006f004d Count = [65||80] id*sizeof(uintptr_t) = sizeMenMove[0x208] NewPaddrBase->0x0
				FName{None}||offsetActor::0x38] [fieldAddr->0x2b2729748]  ActorOffset =+0x3d0 PAdrArray->0x1C600D100 arr.dePtr->0x200000001d Count = [8||8] id*sizeof(uintptr_t) = sizeMenMove[0x40] NewPaddrBase->0x200000001d
				FName{None}||offsetActor::0x0] [fieldAddr->0x2b2729810]  ActorOffset =+0x498 PAdrArray->0x1692F15C0 arr.dePtr->0x2b2729778 Count = [1||4] id*sizeof(uintptr_t) = sizeMenMove[0x8] NewPaddrBase->0x0
				FName{None}||offsetActor::0x58] [fieldAddr->0x2b2729868]  ActorOffset =+0x4f0 PAdrArray->0x2B9F61780 arr.dePtr->0x290575458 Count = [12||24] id*sizeof(uintptr_t) = sizeMenMove[0x60] NewPaddrBase->0x440048005f
				FName{WorldSingletonCollection}||offsetActor::0x3d0] [fieldAddr->0x2b27299c8]  ActorOffset =+0x650 PAdrArray->0x2B29240C0 arr.dePtr->0x13faf0300 Count = [123||170] id*sizeof(uintptr_t) = sizeMenMove[0x3d8] NewPaddrBase->0x3fec2e00
				FName{None}||offsetActor::0x3d0] [fieldAddr->0x2b27299e8]  ActorOffset =+0x670 PAdrArray->0x0 arr.dePtr->0x0 Count = [123||128] id*sizeof(uintptr_t) = sizeMenMove[0x3d8] NewPaddrBase->0x0
				FName{}||offsetActor::0x40] [fieldAddr->0x2b2729a18]  ActorOffset =+0x6a0 PAdrArray->0x2E37EA540 arr.dePtr->0x27737f560 Count = [9||22] id*sizeof(uintptr_t) = sizeMenMove[0x48] NewPaddrBase->0x3fea6000
				FName{None}||offsetActor::0x40] [fieldAddr->0x2b2729a38]  ActorOffset =+0x6c0 PAdrArray->0x0 arr.dePtr->0x0 Count = [9||128] id*sizeof(uintptr_t) = sizeMenMove[0x48] NewPaddrBase->0x0
				FName{None}||offsetActor::0xff0] [fieldAddr->0x2b2729aa0]  ActorOffset =+0x728 PAdrArray->0xCFFFFFFFF00 arr.dePtr->0x0 Count = [511||8704] id*sizeof(uintptr_t) = sizeMenMove[0xff8] NewPaddrBase->0x0
				FName{None}||offsetActor::0x7f8] [fieldAddr->0x2b2729aa8]  ActorOffset =+0x730 PAdrArray->0x2200000001FF arr.dePtr->0x0 Count = [256||2048] id*sizeof(uintptr_t) = sizeMenMove[0x800] NewPaddrBase->0x0
				FName{None}||offsetActor::0x7f8] [fieldAddr->0x2b2729af0]  ActorOffset =+0x778 PAdrArray->0x1400 arr.dePtr->0x0 Count = [256||512] id*sizeof(uintptr_t) = sizeMenMove[0x800] NewPaddrBase->0x0
				FName{}||offsetActor::0x638] [fieldAddr->0x2b2729f10]  ActorOffset =+0xb98 PAdrArray->0x1537A83A0 arr.dePtr->0x140b8d160 Count = [200||9216] id*sizeof(uintptr_t) = sizeMenMove[0x640] NewPaddrBase->0x450000000a
				FName{None}||offsetActor::0x48] [fieldAddr->0x2b272a0d0]  ActorOffset =+0xd58 PAdrArray->0x2CE8B02E0 arr.dePtr->0x0 Count = [10||10] id*sizeof(uintptr_t) = sizeMenMove[0x50] NewPaddrBase->0x2884aa480
				FName{MaterialExpressionTextureSampleParameter2D}||offsetActor::0x2e8] [fieldAddr->0x2b272a3c0]  ActorOffset =+0x1048 PAdrArray->0x1653DCB00 arr.dePtr->0x3fd19e80 Count = [94||166] id*sizeof(uintptr_t) = sizeMenMove[0x2f0] NewPaddrBase->0x4eeb6b80
				FName{MaterialExpressionTextureSampleParameter2D}||offsetActor::0x3d0] [fieldAddr->0x2b272a400]  ActorOffset =+0x1088 PAdrArray->0x2C4EB5400 arr.dePtr->0x3fd19e80 Count = [123||174] id*sizeof(uintptr_t) = sizeMenMove[0x3d8] NewPaddrBase->0xffffffffffffffff
				FName{MaterialExpressionTextureSampleParameter2D}||offsetActor::0x2f0] [fieldAddr->0x2b272a420]  ActorOffset =+0x10a8 PAdrArray->0x2C4EB5B00 arr.dePtr->0x3fd19e80 Count = [95||204] id*sizeof(uintptr_t) = sizeMenMove[0x2f8] NewPaddrBase->0x6c00650044002f
				FName{MaterialExpressionTextureSampleParameter2D}||offsetActor::0x170] [fieldAddr->0x2b272a470]  ActorOffset =+0x10f8 PAdrArray->0x1B3ABC200 arr.dePtr->0x3fd19e80 Count = [47||145] id*sizeof(uintptr_t) = sizeMenMove[0x178] NewPaddrBase->0xffffffffffffffff
				FName{MaterialExpressionTextureSampleParameter2D}||offsetActor::0x190] [fieldAddr->0x2b272a480]  ActorOffset =+0x1108 PAdrArray->0x4ACC8000 arr.dePtr->0x3fd19e80 Count = [51||61] id*sizeof(uintptr_t) = sizeMenMove[0x198] NewPaddrBase->0x750064006e0049
				FName{None}||offsetActor::0x20] [fieldAddr->0x2b272a848]  ActorOffset =+0x14d0 PAdrArray->0x2944CD300 arr.dePtr->0x2f558600000001 Count = [5||32] id*sizeof(uintptr_t) = sizeMenMove[0x28] NewPaddrBase->0x45fab560
				FName{None}||offsetActor::0x78] [fieldAddr->0x2b272b168]  ActorOffset =+0x1df0 PAdrArray->0x163C90E80 arr.dePtr->0x19ea7b00000000 Count = [16||32] id*sizeof(uintptr_t) = sizeMenMove[0x80] NewPaddrBase->0x2f550100000000
				FName{MaterialInstanceDynamic}||offsetActor::0x8] [fieldAddr->0x2b272b368]  ActorOffset =+0x1ff0 PAdrArray->0x279464D90 arr.dePtr->0x2a6255800 Count = [2||2] id*sizeof(uintptr_t) = sizeMenMove[0x10] NewPaddrBase->0x0



```
