---
ทดลองตาม Ida มี 3 ตัวหลัก  - , def , +   
โค้ด  printf มาแบบนี้  สำคัญตรง uintptr_t GetBlackReChackStart = Addr::selectedAddress - (int)0x1500;  มีการ ลบ ให้ กลับไป เริ่ม แบบ ติด ลบ มันมี Array ถาม 1400 กว่า และ ตรง 1500 และ 1a00 ครบ 3 กลุ่ม เหลือ ฟังชั้น GetGname 3 ฟังชั้น 
```cpp
if (ImGui::MenuItem("Find_Array_Count", nullptr, &Addr::userChackArray, selectedRow != -1))
{
 
	if (Addr::userChackArray) 
	{

		Scan_Array_Count(Addr::selectedAddress, 0x0,0x1500,4);
		printf("\nNew\n");

		uintptr_t GetBlackReChackStart = Addr::selectedAddress - (int)0x1500;
		Scan_Array_Count(GetBlackReChackStart, 0x0, 0x2500, 8);
		printf("\nReChack - 0x1500  Loop debug 0x2500  * 8 \n"); 
		Addr::userChackArray = false; // รีเซ็ตสถานะหลังทำงานเสร็จ
	}

}


```
```c


PersistentLevel  : 0x7295DC70
FName{None} [fieldAddr->0x7295dc84] offArray=+0x14 AdrArray->0x77BCFB8000000000 arr.DataPtr->0x0 Count = [1||1] count*8[0x8]
FName{None} [fieldAddr->0x7295dc88] offArray=+0x18 AdrArray->0x177BCFB80 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
FName{None} [fieldAddr->0x7295dc94] offArray=+0x24 AdrArray->0xAD635D1000000000 arr.DataPtr->0x0 Count = [1||1] count*8[0x8]
FName{None} [fieldAddr->0x7295dc98] offArray=+0x28 AdrArray->0x1AD635D10 arr.DataPtr->0x3f48a6db Count = [1||4] count*8[0x8]
FName{None} [fieldAddr->0x7295dcd4] offArray=+0x64 AdrArray->0x7813844000000000 arr.DataPtr->0x0 Count = [2||6] count*8[0x10]
FName{} [fieldAddr->0x7295dcd8] offArray=+0x68 AdrArray->0x278138440 arr.DataPtr->0x1a8dafc10 Count = [6||20] count*8[0x30]
FName{None} [fieldAddr->0x7295dce4] offArray=+0x74 AdrArray->0x95C0340000000014 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{BP_GameState_IrisSafeHouse_C} [fieldAddr->0x7295dce8] offArray=+0x78 AdrArray->0x195C03400 arr.DataPtr->0x11b320010 Count = [2||3] count*8[0x10]
FName{None} [fieldAddr->0x7295dd14] offArray=+0xA4 AdrArray->0x7739058040050000 arr.DataPtr->0x0 Count = [2||20] count*8[0x10]
FName{MaterialParameterCollectionInstance} [fieldAddr->0x7295dd18] offArray=+0xA8 AdrArray->0x277390580 arr.DataPtr->0x177c781c0 Count = [20||24] count*8[0xA0]
FName{None} [fieldAddr->0x7295dd40] offArray=+0xD0 AdrArray->0x2663934E0 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
FName{None} [fieldAddr->0x7295dd4c] offArray=+0xDC AdrArray->0x843F9BE000000000 arr.DataPtr->0x0 Count = [1||1] count*8[0x8]
FName{None} [fieldAddr->0x7295dd50] offArray=+0xE0 AdrArray->0x1843F9BE0 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
FName{None} [fieldAddr->0x7295dd90] offArray=+0x120 AdrArray->0xBA591780 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
FName{None} [fieldAddr->0x7295dedc] offArray=+0x26C AdrArray->0x6E4AB70000000000 arr.DataPtr->0x0 Count = [2||2] count*8[0x10]
FName{None} [fieldAddr->0x7295dee0] offArray=+0x270 AdrArray->0x26E4AB700 arr.DataPtr->0x3 Count = [2||4] count*8[0x10]
FName{None} [fieldAddr->0x7295dee4] offArray=+0x274 AdrArray->0x0 arr.DataPtr->0x0 Count = [4||4] count*8[0x20]
FName{None} [fieldAddr->0x7295dfe4] offArray=+0x374 AdrArray->0xAD37F10000000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{None} [fieldAddr->0x7295dfe8] offArray=+0x378 AdrArray->0x1AD37F100 arr.DataPtr->0x3 Count = [2||4] count*8[0x10]
FName{None} [fieldAddr->0x7295dffc] offArray=+0x38C AdrArray->0x825FBD7000000000 arr.DataPtr->0x0 Count = [1||7] count*8[0x8]
FName{None} [fieldAddr->0x7295e000] offArray=+0x390 AdrArray->0x1825FBD70 arr.DataPtr->0x6c0061 Count = [7||8] count*8[0x38]
FName{None} [fieldAddr->0x7295e024] offArray=+0x3B4 AdrArray->0x7ADB78B000000000 arr.DataPtr->0x0 Count = [2||33] count*8[0x10]
FName{None} [fieldAddr->0x7295e028] offArray=+0x3B8 AdrArray->0x27ADB78B0 arr.DataPtr->0x61004d002f0065 Count = [33||40] count*8[0x108]
FName{} [fieldAddr->0x7295e110] offArray=+0x4A0 AdrArray->0x271776040 arr.DataPtr->0x7295e078 Count = [1||4] count*8[0x8]
FName{None} [fieldAddr->0x7295e1e4] offArray=+0x574 AdrArray->0x79F3D9C000000000 arr.DataPtr->0x0 Count = [1||512] count*8[0x8]
FName{None} [fieldAddr->0x7295e2b4] offArray=+0x644 AdrArray->0x51C6561000000000 arr.DataPtr->0x0 Count = [1||1] count*8[0x8]
FName{None} [fieldAddr->0x7295e2c4] offArray=+0x654 AdrArray->0x961350B000000000 arr.DataPtr->0x0 Count = [1||122] count*8[0x8]
FName{WorldSingletonCollection} [fieldAddr->0x7295e2c8] offArray=+0x658 AdrArray->0x1961350B0 arr.DataPtr->0x2644f9680 Count = [122||170] count*8[0x3D0]
FName{None} [fieldAddr->0x7295e2e8] offArray=+0x678 AdrArray->0x0 arr.DataPtr->0x0 Count = [122||128] count*8[0x3D0]
FName{None} [fieldAddr->0x7295e304] offArray=+0x694 AdrArray->0x84739C0000000000 arr.DataPtr->0x0 Count = [1||128] count*8[0x8]
FName{None} [fieldAddr->0x7295e314] offArray=+0x6A4 AdrArray->0x644FE60000000000 arr.DataPtr->0x0 Count = [2||3] count*8[0x10]
FName{} [fieldAddr->0x7295e318] offArray=+0x6A8 AdrArray->0x2644FE600 arr.DataPtr->0x278d0f010 Count = [3||4] count*8[0x18]
FName{None} [fieldAddr->0x7295e31c] offArray=+0x6AC AdrArray->0x0 arr.DataPtr->0x0 Count = [4||7] count*8[0x20]
FName{None} [fieldAddr->0x7295e338] offArray=+0x6C8 AdrArray->0x0 arr.DataPtr->0x0 Count = [3||128] count*8[0x18]
FName{None} [fieldAddr->0x7295e3b8] offArray=+0x748 AdrArray->0x800 arr.DataPtr->0x0 Count = [256||512] count*8[0x800]
FName{None} [fieldAddr->0x7295e3d0] offArray=+0x760 AdrArray->0xFFFFF100000000FF arr.DataPtr->0x0 Count = [511||9984] count*8[0xFF8]
FName{None} [fieldAddr->0x7295e3dc] offArray=+0x76C AdrArray->0x2700 arr.DataPtr->0x0 Count = [2048||10496] count*8[0x4000]
FName{None} [fieldAddr->0x7295e420] offArray=+0x7B0 AdrArray->0xC00 arr.DataPtr->0x0 Count = [256||512] count*8[0x800]
FName{None} [fieldAddr->0x7295e4a8] offArray=+0x838 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||7] count*8[0x8]
FName{None} [fieldAddr->0x7295e538] offArray=+0x8C8 AdrArray->0x2E46BB41A231DA00 arr.DataPtr->0x0 Count = [1||3] count*8[0x8]
FName{None} [fieldAddr->0x7295e53c] offArray=+0x8CC AdrArray->0x12E46BB41 arr.DataPtr->0x0 Count = [3||5] count*8[0x18]
FName{None} [fieldAddr->0x7295e588] offArray=+0x918 AdrArray->0x0 arr.DataPtr->0x0 Count = [2||4] count*8[0x10]
FName{None} [fieldAddr->0x7295e598] offArray=+0x928 AdrArray->0x0 arr.DataPtr->0x0 Count = [256||256] count*8[0x800]
FName{None} [fieldAddr->0x7295e59c] offArray=+0x92C AdrArray->0x0 arr.DataPtr->0x0 Count = [256||13824] count*8[0x800]
FName{None} [fieldAddr->0x7295e5d8] offArray=+0x968 AdrArray->0x9D110000080600 arr.DataPtr->0x0 Count = [3||5] count*8[0x18]
FName{None} [fieldAddr->0x7295e628] offArray=+0x9B8 AdrArray->0x7562333031432F74 arr.DataPtr->0x0 Count = [4||6] count*8[0x20]
FName{None} [fieldAddr->0x7295e678] offArray=+0xA08 AdrArray->0x68432F736C616972 arr.DataPtr->0x0 Count = [5||7] count*8[0x28]
FName{None} [fieldAddr->0x7295e6c8] offArray=+0xA58 AdrArray->0x697263532F000000 arr.DataPtr->0x0 Count = [6||8] count*8[0x30]
FName{None} [fieldAddr->0x7295e718] offArray=+0xAA8 AdrArray->0x7250657361420000 arr.DataPtr->0x0 Count = [7||9] count*8[0x38]
FName{None} [fieldAddr->0x7295ed30] offArray=+0x10C0 AdrArray->0x5C0000005D arr.DataPtr->0x0 Count = [24||32] count*8[0xC0]
FName{None} [fieldAddr->0x7295ed40] offArray=+0x10D0 AdrArray->0x3284F7 arr.DataPtr->0x0 Count = [47||93] count*8[0x178]
FName{None} [fieldAddr->0x7295ed58] offArray=+0x10E8 AdrArray->0x312CB3 arr.DataPtr->0x0 Count = [47||94] count*8[0x178]
FName{None} [fieldAddr->0x7295ed70] offArray=+0x1100 AdrArray->0x312C91 arr.DataPtr->0x0 Count = [47||95] count*8[0x178]
FName{None} [fieldAddr->0x7295ed78] offArray=+0x1108 AdrArray->0x5F0000002F arr.DataPtr->0x0 Count = [47||50] count*8[0x178]
FName{None} [fieldAddr->0x7295ed88] offArray=+0x1118 AdrArray->0x3284EB arr.DataPtr->0x0 Count = [47||96] count*8[0x178]
FName{None} [fieldAddr->0x7295ed90] offArray=+0x1120 AdrArray->0x2F arr.DataPtr->0x0 Count = [30||49] count*8[0xF0]
FName{None} [fieldAddr->0x7295eda0] offArray=+0x1130 AdrArray->0x137D00 arr.DataPtr->0x1606000900f64f3c Count = [47||97] count*8[0x178]
FName{None} [fieldAddr->0x7295edec] offArray=+0x117C AdrArray->0x554BF37800000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{None} [fieldAddr->0x7295ee2c] offArray=+0x11BC AdrArray->0x554BF37800000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{None} [fieldAddr->0x7295eeac] offArray=+0x123C AdrArray->0x554BF37800000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{None} [fieldAddr->0x7295ef04] offArray=+0x1294 AdrArray->0x554BF37800000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{None} [fieldAddr->0x7295ef44] offArray=+0x12D4 AdrArray->0x554BF37800000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{None} [fieldAddr->0x7295ef84] offArray=+0x1314 AdrArray->0x554BF37800000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{None} [fieldAddr->0x7295efc4] offArray=+0x1354 AdrArray->0x554BF37800000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{None} [fieldAddr->0x7295f014] offArray=+0x13A4 AdrArray->0x554BF37800000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{None} [fieldAddr->0x7295f054] offArray=+0x13E4 AdrArray->0x554BF37800000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{None} [fieldAddr->0x7295f094] offArray=+0x1424 AdrArray->0x554BF37800000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{None} [fieldAddr->0x7295f0d4] offArray=+0x1464 AdrArray->0x554BF37800000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{None} [fieldAddr->0x7295f124] offArray=+0x14B4 AdrArray->0x554BF37800000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]
FName{None} [fieldAddr->0x7295f164] offArray=+0x14F4 AdrArray->0x554BF37800000000 arr.DataPtr->0x0 Count = [1||2] count*8[0x8]

New
PersistentLevel  : 0x7295C770
FName{None} [fieldAddr->0x7295c938] offArray=+0x1C8 AdrArray->0x0 arr.DataPtr->0x0 Count = [17||542] count*8[0x88]
FName{None} [fieldAddr->0x7295c950] offArray=+0x1E0 AdrArray->0xFFFFFFFF0000024D arr.DataPtr->0x0 Count = [442||556] count*8[0xDD0]
FName{None} [fieldAddr->0x7295c970] offArray=+0x200 AdrArray->0xBBFFFFFFFF arr.DataPtr->0x0 Count = [120||545] count*8[0x3C0]
FName{None} [fieldAddr->0x7295c988] offArray=+0x218 AdrArray->0x1B7FFFFFFFF arr.DataPtr->0x0 Count = [430||613] count*8[0xD70]
FName{None} [fieldAddr->0x7295c998] offArray=+0x228 AdrArray->0x15FFFFFFFFF arr.DataPtr->0x0 Count = [128||501] count*8[0x400]
FName{None} [fieldAddr->0x7295c9a8] offArray=+0x238 AdrArray->0xBE000001FE arr.DataPtr->0x0 Count = [24||233] count*8[0xC0]
FName{None} [fieldAddr->0x7295c9e0] offArray=+0x270 AdrArray->0x7A0000024B arr.DataPtr->0x0 Count = [291||604] count*8[0x918]
FName{None} [fieldAddr->0x7295ca20] offArray=+0x2B0 AdrArray->0x11B00000258 arr.DataPtr->0x0 Count = [473||522] count*8[0xEC8]
FName{None} [fieldAddr->0x7295ca28] offArray=+0x2B8 AdrArray->0x20A000001D9 arr.DataPtr->0x0 Count = [398||437] count*8[0xC70]
FName{None} [fieldAddr->0x7295ca98] offArray=+0x328 AdrArray->0xFFFFFFFF000001AF arr.DataPtr->0x0 Count = [405||625] count*8[0xCA8]
FName{None} [fieldAddr->0x7295caa8] offArray=+0x338 AdrArray->0x21CFFFFFFFF arr.DataPtr->0x0 Count = [459||586] count*8[0xE58]
FName{None} [fieldAddr->0x7295cad8] offArray=+0x368 AdrArray->0x810000021A arr.DataPtr->0x0 Count = [401||619] count*8[0xC88]
FName{None} [fieldAddr->0x7295cb58] offArray=+0x3E8 AdrArray->0xFFFFFFFF00000275 arr.DataPtr->0x0 Count = [614||627] count*8[0x1330]
FName{None} [fieldAddr->0x7295cb70] offArray=+0x400 AdrArray->0x2670000026C arr.DataPtr->0x0 Count = [49||319] count*8[0x188]
FName{None} [fieldAddr->0x7295cbe0] offArray=+0x470 AdrArray->0xFFFFFFFFFFFFFFFF arr.DataPtr->0x0 Count = [576||606] count*8[0x1200]
FName{None} [fieldAddr->0x7295cc58] offArray=+0x4E8 AdrArray->0xFFFFFFFFFFFFFFFF arr.DataPtr->0x0 Count = [340||426] count*8[0xAA0]
FName{None} [fieldAddr->0x7295cc68] offArray=+0x4F8 AdrArray->0xFFFFFFFFFFFFFFFF arr.DataPtr->0x0 Count = [213||631] count*8[0x6A8]
FName{None} [fieldAddr->0x7295cc70] offArray=+0x500 AdrArray->0x277000000D5 arr.DataPtr->0x0 Count = [197||525] count*8[0x628]
FName{None} [fieldAddr->0x7295cc98] offArray=+0x528 AdrArray->0x2280000026E arr.DataPtr->0x0 Count = [299||535] count*8[0x958]
FName{None} [fieldAddr->0x7295ccc0] offArray=+0x550 AdrArray->0x1320000021D arr.DataPtr->0x0 Count = [54||344] count*8[0x1B0]
FName{None} [fieldAddr->0x7295ccc8] offArray=+0x558 AdrArray->0x15800000036 arr.DataPtr->0x0 Count = [93||185] count*8[0x2E8]
FName{None} [fieldAddr->0x7295cce0] offArray=+0x570 AdrArray->0xFFFFFFFF00000134 arr.DataPtr->0x0 Count = [227||524] count*8[0x718]
FName{None} [fieldAddr->0x7295cd40] offArray=+0x5D0 AdrArray->0x11A00000120 arr.DataPtr->0x0 Count = [228||253] count*8[0x720]
FName{None} [fieldAddr->0x7295cd80] offArray=+0x610 AdrArray->0xFFFFFFFFFFFFFFFF arr.DataPtr->0x0 Count = [429||626] count*8[0xD68]
FName{None} [fieldAddr->0x7295cd88] offArray=+0x618 AdrArray->0x272000001AD arr.DataPtr->0x0 Count = [334||403] count*8[0xA70]
FName{None} [fieldAddr->0x7295cdc0] offArray=+0x650 AdrArray->0x1BD arr.DataPtr->0x0 Count = [158||482] count*8[0x4F0]
FName{None} [fieldAddr->0x7295cdd0] offArray=+0x660 AdrArray->0x1F6FFFFFFFF arr.DataPtr->0x0 Count = [427||533] count*8[0xD58]
FName{None} [fieldAddr->0x7295cdf0] offArray=+0x680 AdrArray->0xFFFFFFFF000001F3 arr.DataPtr->0x0 Count = [44||397] count*8[0x160]
FName{None} [fieldAddr->0x7295ce08] offArray=+0x698 AdrArray->0x1A000000251 arr.DataPtr->0x0 Count = [238||362] count*8[0x770]
FName{None} [fieldAddr->0x7295ce20] offArray=+0x6B0 AdrArray->0xFFFFFFFFFFFFFFFF arr.DataPtr->0x0 Count = [209||324] count*8[0x688]
FName{None} [fieldAddr->0x7295ce58] offArray=+0x6E8 AdrArray->0xFFFFFFFF0000019B arr.DataPtr->0x0 Count = [13||101] count*8[0x68]
FName{None} [fieldAddr->0x7295ce80] offArray=+0x710 AdrArray->0xFFFFFFFF000001F9 arr.DataPtr->0x0 Count = [151||493] count*8[0x4B8]
FName{None} [fieldAddr->0x7295ce98] offArray=+0x728 AdrArray->0x1BB00000278 arr.DataPtr->0x0 Count = [36||84] count*8[0x120]
FName{None} [fieldAddr->0x7295cea0] offArray=+0x730 AdrArray->0x5400000024 arr.DataPtr->0x0 Count = [448||516] count*8[0xE00]
FName{None} [fieldAddr->0x7295cea8] offArray=+0x738 AdrArray->0x204000001C0 arr.DataPtr->0x0 Count = [379||560] count*8[0xBD8]
FName{None} [fieldAddr->0x7295cf18] offArray=+0x7A8 AdrArray->0x253FFFFFFFF arr.DataPtr->0x0 Count = [110||193] count*8[0x370]
FName{None} [fieldAddr->0x7295cf28] offArray=+0x7B8 AdrArray->0x135FFFFFFFF arr.DataPtr->0x0 Count = [96||506] count*8[0x300]
FName{None} [fieldAddr->0x7295cf68] offArray=+0x7F8 AdrArray->0x20900000234 arr.DataPtr->0x0 Count = [173||607] count*8[0x568]
FName{None} [fieldAddr->0x7295cfa8] offArray=+0x838 AdrArray->0x12EFFFFFFFF arr.DataPtr->0x0 Count = [14||495] count*8[0x70]
FName{None} [fieldAddr->0x7295cfc0] offArray=+0x850 AdrArray->0xFFFFFFFFFFFFFFFF arr.DataPtr->0x0 Count = [485||561] count*8[0xF28]
FName{None} [fieldAddr->0x7295cfe8] offArray=+0x878 AdrArray->0x12F arr.DataPtr->0x0 Count = [254||338] count*8[0x7F0]
FName{None} [fieldAddr->0x7295d010] offArray=+0x8A0 AdrArray->0xFFFFFFFF0000003F arr.DataPtr->0x0 Count = [26||370] count*8[0xD0]
FName{None} [fieldAddr->0x7295d020] offArray=+0x8B0 AdrArray->0xFFFFFFFF00000212 arr.DataPtr->0x0 Count = [492||511] count*8[0xF60]
FName{None} [fieldAddr->0x7295d028] offArray=+0x8B8 AdrArray->0x1FF000001EC arr.DataPtr->0x0 Count = [285||380] count*8[0x8E8]
FName{None} [fieldAddr->0x7295d078] offArray=+0x908 AdrArray->0xFFFFFFFF000000F9 arr.DataPtr->0x0 Count = [377||550] count*8[0xBC8]
FName{None} [fieldAddr->0x7295d088] offArray=+0x918 AdrArray->0xFFFFFFFF00000264 arr.DataPtr->0x0 Count = [408||602] count*8[0xCC0]
FName{None} [fieldAddr->0x7295d098] offArray=+0x928 AdrArray->0x1B800000256 arr.DataPtr->0x0 Count = [38||225] count*8[0x130]
FName{None} [fieldAddr->0x7295d0e8] offArray=+0x978 AdrArray->0x1A50000023A arr.DataPtr->0x0 Count = [220||547] count*8[0x6E0]
FName{None} [fieldAddr->0x7295d0f8] offArray=+0x988 AdrArray->0x1C500000219 arr.DataPtr->0x0 Count = [169||628] count*8[0x548]
FName{None} [fieldAddr->0x7295d128] offArray=+0x9B8 AdrArray->0xBA000000F4 arr.DataPtr->0x0 Count = [504||605] count*8[0xFC0]
FName{None} [fieldAddr->0x7295d5e8] offArray=+0xE78 AdrArray->0x193E35200 arr.DataPtr->0x1a0bb100000000 Count = [12||32] count*8[0x60]
FName{None} [fieldAddr->0x7295dbf0] offArray=+0x1480 AdrArray->0x1843FF6C0 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
FName{OpenWorldStreamingLevel} [fieldAddr->0x7295dc10] offArray=+0x14A0 AdrArray->0x17B3FA4C0 arr.DataPtr->0x11b7dd300 Count = [473||584] count*8[0xEC8]
FName{OpenWorldStreamingLevel} [fieldAddr->0x7295dc20] offArray=+0x14B0 AdrArray->0x1835ACA00 arr.DataPtr->0x11f07480 Count = [23||24] count*8[0xB8]
FName{None} [fieldAddr->0x7295dc88] offArray=+0x1518 AdrArray->0x177BCFB80 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
FName{None} [fieldAddr->0x7295dc98] offArray=+0x1528 AdrArray->0x1AD635D10 arr.DataPtr->0x3f48a6db Count = [1||4] count*8[0x8]
FName{} [fieldAddr->0x7295dcd8] offArray=+0x1568 AdrArray->0x278138440 arr.DataPtr->0x1a8dafc10 Count = [6||20] count*8[0x30]
FName{BP_GameState_IrisSafeHouse_C} [fieldAddr->0x7295dce8] offArray=+0x1578 AdrArray->0x195C03400 arr.DataPtr->0x11b320010 Count = [2||3] count*8[0x10]
FName{MaterialParameterCollectionInstance} [fieldAddr->0x7295dd18] offArray=+0x15A8 AdrArray->0x277390580 arr.DataPtr->0x177c781c0 Count = [20||24] count*8[0xA0]
FName{None} [fieldAddr->0x7295dd40] offArray=+0x15D0 AdrArray->0x2663934E0 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
FName{None} [fieldAddr->0x7295dd50] offArray=+0x15E0 AdrArray->0x1843F9BE0 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
FName{None} [fieldAddr->0x7295dd90] offArray=+0x1620 AdrArray->0xBA591780 arr.DataPtr->0x0 Count = [1||4] count*8[0x8]
FName{None} [fieldAddr->0x7295dee0] offArray=+0x1770 AdrArray->0x26E4AB700 arr.DataPtr->0x3 Count = [2||4] count*8[0x10]
FName{None} [fieldAddr->0x7295dfe8] offArray=+0x1878 AdrArray->0x1AD37F100 arr.DataPtr->0x3 Count = [2||4] count*8[0x10]
FName{None} [fieldAddr->0x7295e000] offArray=+0x1890 AdrArray->0x1825FBD70 arr.DataPtr->0x6c0061 Count = [7||8] count*8[0x38]
FName{None} [fieldAddr->0x7295e028] offArray=+0x18B8 AdrArray->0x27ADB78B0 arr.DataPtr->0x61004d002f0065 Count = [33||40] count*8[0x108]
FName{} [fieldAddr->0x7295e110] offArray=+0x19A0 AdrArray->0x271776040 arr.DataPtr->0x7295e078 Count = [1||4] count*8[0x8]
FName{WorldSingletonCollection} [fieldAddr->0x7295e2c8] offArray=+0x1B58 AdrArray->0x1961350B0 arr.DataPtr->0x2644f9680 Count = [122||170] count*8[0x3D0]
FName{None} [fieldAddr->0x7295e2e8] offArray=+0x1B78 AdrArray->0x0 arr.DataPtr->0x0 Count = [122||128] count*8[0x3D0]
FName{} [fieldAddr->0x7295e318] offArray=+0x1BA8 AdrArray->0x2644FE600 arr.DataPtr->0x278d0f010 Count = [3||4] count*8[0x18]
FName{None} [fieldAddr->0x7295e338] offArray=+0x1BC8 AdrArray->0x0 arr.DataPtr->0x0 Count = [3||128] count*8[0x18]
FName{None} [fieldAddr->0x7295e3b8] offArray=+0x1C48 AdrArray->0x800 arr.DataPtr->0x0 Count = [256||512] count*8[0x800]
FName{None} [fieldAddr->0x7295e3d0] offArray=+0x1C60 AdrArray->0xFFFFF100000000FF arr.DataPtr->0x0 Count = [511||9984] count*8[0xFF8]
FName{None} [fieldAddr->0x7295e420] offArray=+0x1CB0 AdrArray->0xC00 arr.DataPtr->0x0 Count = [256||512] count*8[0x800]
FName{None} [fieldAddr->0x7295e4a8] offArray=+0x1D38 AdrArray->0x0 arr.DataPtr->0x0 Count = [1||7] count*8[0x8]
FName{None} [fieldAddr->0x7295e538] offArray=+0x1DC8 AdrArray->0x2E46BB41A231DA00 arr.DataPtr->0x0 Count = [1||3] count*8[0x8]
FName{None} [fieldAddr->0x7295e588] offArray=+0x1E18 AdrArray->0x0 arr.DataPtr->0x0 Count = [2||4] count*8[0x10]
FName{None} [fieldAddr->0x7295e598] offArray=+0x1E28 AdrArray->0x0 arr.DataPtr->0x0 Count = [256||256] count*8[0x800]
FName{None} [fieldAddr->0x7295e5d8] offArray=+0x1E68 AdrArray->0x9D110000080600 arr.DataPtr->0x0 Count = [3||5] count*8[0x18]
FName{None} [fieldAddr->0x7295e628] offArray=+0x1EB8 AdrArray->0x7562333031432F74 arr.DataPtr->0x0 Count = [4||6] count*8[0x20]
FName{None} [fieldAddr->0x7295e678] offArray=+0x1F08 AdrArray->0x68432F736C616972 arr.DataPtr->0x0 Count = [5||7] count*8[0x28]
FName{None} [fieldAddr->0x7295e6c8] offArray=+0x1F58 AdrArray->0x697263532F000000 arr.DataPtr->0x0 Count = [6||8] count*8[0x30]
FName{None} [fieldAddr->0x7295e718] offArray=+0x1FA8 AdrArray->0x7250657361420000 arr.DataPtr->0x0 Count = [7||9] count*8[0x38]

ReChack - 0x1500  Loop debug 0x2500  * 8




```



