```cpp


#pragma pack(push, 1)
struct TArrayRaw
{
	uintptr_t Data; // 0x00
	int   Count; // 0x08
	int   Max;   // 0x0C
};
static_assert(sizeof(TArrayRaw) == 0x10);
#pragma pack(pop)


struct UEArrayDesc
{
	BaseLavel LavelProfilepoint;
	uintptr_t fieldAddr;
	 
	uintptr_t ArrayID; 
	TArrayRaw arr;
	AddressParts parr;
	uint64_t ArrayData;
	uint64_t ArrayDatadecore;        // ptr -> UObject*
	int32_t   Count;
	int32_t   Max;
 

	size_t GetSizeAllPtr;
	uintptr_t  testActor;
	int16_t  FnameID;
	uint32_t indexFname;
};


bool ProfileDebug = false;
//Scan_Array_Count(Addr::selectedAddress, 0x0,0x1500,2);
std::vector<UEArrayDesc> Scan_Array_Count(uintptr_t PersistentLevel,
	int StartOffset = 0x0,
	int EndOffset = 0x800,
	int Stride = 4, uintptr_t Workcomt=NULL)
{
	std::vector<UEArrayDesc> results; 
	BaseLavel GetLvale = {};
	GetLvale.PersistentLevel = PersistentLevel;
	GetLvale.StartOffset = StartOffset;
	GetLvale.EndOffset = EndOffset;
	GetLvale.Stride = Stride;
	GetLvale.AddrStartLevel = (uint64_t)PersistentLevel + (int)StartOffset;
	GetLvale.AddrEncLevel = (uint64_t)PersistentLevel + (int)EndOffset;

	GetLvale.pLavel = SplitAddressPrecise(PersistentLevel);

	//GetLvale.PersistentLevel= (PersistentLevel != 0 && PersistentLevel > (int)0xFFFFFFFFFFFFF || isBadPtr(PersistentLevel)) fieldAddr = AutodecodepointAddress(PersistentLevel);
	 
	 
//	printf("hibbleKey  : 0x%llX\n", testhibbleKey);

	uintptr_t BaseArrayLaverl = (uint64_t)PersistentLevel + (int)0; 
	uintptr_t PBaseArrayLaverl = read<uintptr_t>(PersistentLevel);
	printf("AddrLevel  : 0x%llX PAddrLevel : 0x%llX\n", BaseArrayLaverl,   PBaseArrayLaverl);


	PBaseArrayLaverl = (ChackPtrEncore(PBaseArrayLaverl) == true) ? AutodecodepointAddress(PBaseArrayLaverl) : PBaseArrayLaverl;

	//if (fieldAddr != 0 && fieldAddr > (int)0xFFFFFFFFFFFFF || isBadPtr(fieldAddr) ) fieldAddr = AutodecodepointAddress(fieldAddr);
	AddressParts prrayLaverlParts = SplitAddressPrecise(PBaseArrayLaverl);
	PBaseArrayLaverl = (PBaseArrayLaverl != 0 && PBaseArrayLaverl > (int)0xFFFFFFFFFFFFF || isBadPtr(PBaseArrayLaverl)) ? prrayLaverlParts.core : PBaseArrayLaverl;
 
	for (int off = StartOffset; off <= EndOffset; off += Stride)
	{
		uintptr_t fieldAddr = (uint64_t)PersistentLevel  + (int)off;  
		//uintptr_t fieldKeyAddr = (uint64_t)PersistentLevel  + ( (int)off+sizeof(uint32_t));  

		fieldAddr = (ChackPtrEncore(fieldAddr) == true) ? AutodecodepointAddress(fieldAddr) : fieldAddr;

		//if (fieldAddr != 0 && fieldAddr > (int)0xFFFFFFFFFFFFF || isBadPtr(fieldAddr) ) fieldAddr = AutodecodepointAddress(fieldAddr);
		AddressParts pfieldAddr = SplitAddressPrecise(fieldAddr);
		fieldAddr = (fieldAddr != 0 && fieldAddr > (int)0xFFFFFFFFFFFFF || isBadPtr(fieldAddr))? pfieldAddr.core : fieldAddr;

		//uintptr_t fieldAddr = ( reinterpret_cast<uintptr_t>( PersistentLevel) > 0x1000 && reinterpret_cast<uintptr_t>( PersistentLevel) > 0x1000000000000) ? (AutodecodepointAddress(reinterpret_cast<uintptr_t>( PersistentLevel) + off)) : reinterpret_cast<uintptr_t>( PersistentLevel) + off);
		 // อ่าน TArray struct
		TArrayRaw arr = read<TArrayRaw>(fieldAddr);
		// 	TArrayRaw Parr8 = read<TArrayRaw>(fieldAddr + 8);// +8
		// 	TArrayRaw Parr10 = read<TArrayRaw>(fieldAddr + 0x10);// + 16

		arr.Data = (ChackPtrEncore(arr.Data) == true) ? AutodecodepointAddress(arr.Data) : arr.Data;
		uintptr_t farrAddr = arr.Data; 
		AddressParts parrAddr = SplitAddressPrecise(farrAddr);

		farrAddr = (farrAddr != 0 && farrAddr > (int)0xFFFFFFFFFFFFF || isBadPtr(farrAddr)) ? parrAddr.core : farrAddr;
		 
	 
		// 1) ตรวจ Data pointer
		//arr.Data = (arr.Data != 0 || isBadPtr(arr.Data) && arr.Data > (int)0x1000000000000) ? AutodecodepointAddress(arr.Data) : arr.Data;
		// 2) ตรวจ Count / Max
		if (arr.Count <= 0 || arr.Max <= 0)        continue;
		if (arr.Count > arr.Max)                   continue;
		if (arr.Max > 50000)                       continue;


		uintptr_t AddrStartarr = (uint64_t)arr.Data + (int)8;
		uintptr_t AddrEncarr = (uint64_t)arr.Data + arr.Count*8;



		//__m256i t128test = read<__m256i>(arr.Data);
		size_t GetSizeAllPtr =  arr.Count  * 8;
		//size_t GetSizeAllPtrBk =  arr.Count  * 8;  
		// 3) ตรวจว่า Data ใช้งานได้จริง
		  uintptr_t testActor = read<uintptr_t>(arr.Data + 1 * 8); 
		 
		  uintptr_t testActormoveoffset = read<uintptr_t>((AddrStartarr + GetSizeAllPtr + 2 * 8) );
		 
		  //uintptr_t testActormoveoffset = read<uintptr_t>(PersistentLevel + GetSizeAllPtr * 8+8);
		 
		uint32_t offsetActor = AddrEncarr - AddrStartarr;




		Base_Uworld = (Base_Uworld > (uint64_t)0x10000000000000u || Base_Uworld > (uint64_t)0x1000u) ? AutodecodepointAddress(Base_Uworld) : Base_Uworld;

		uint64_t AddressUworldStart_A = Addr::processBasemodule.BaseAddress + GetUE::OffsetUworld;


		//__m128i  worldraw_A = read128Ex2<__m128i>(AddressUworldStart_A);
		////alignas(16) unsigned char worldbytes[16];
		////_mm_store_si128((__m128i*)worldbytes, worldraw_A); 
		//uint64_t lo = worldraw_A.m128i_u64[0]; // lower 8 bytes
		//uint64_t hi = worldraw_A.m128i_u64[1]; // upper 8 bytes
		//bool ThonNote = false;
		//printf("use setup offset World \n\t Uworld_Addraob-> 0x%llX Uworld_offsetaob_low_hi-> 0x%llX || 0x%llX \n", GetUE::Uworld, lo, hi);
		//printf("\t\tWorldAddrAob\n");

		////setup
		//FindForMainFnDebug(GetUE::Uworld, true, 0x9EFF, ThonNote);
		//printf("\t\tUworldOff_low\n");
		//FindForMainFnDebug(lo, true, 0x9EFF, ThonNote);
		//printf("\t\tUworldOff_hi\n");
		//FindForMainFnDebug(hi, true, 0x9EFF, ThonNote);

		//ThonNote = false;

		//FindForMainFnDebug(testActor, true, 0x58, false);

		 
		auto  checkOffset = ResolveFNameKeyOffset(testActor, 0x1C);
		uint32_t nameKey = read<uint32_t>(testActor + checkOffset); 
		std::string objectName = GetNameBest(nameKey);
		//std::string objectName2 = GetFunGNameForASMChack(nameKey);
	 
		// ✅ พบ TArray ที่น่าเชื่อถือoff
		UEArrayDesc desc{};
		desc.ArrayID = off;
		desc.ArrayData = arr.Data;
		desc.ArrayDatadecore = farrAddr;
		desc.Count = arr.Count;
		desc.Max = arr.Max;
		desc.GetSizeAllPtr = GetSizeAllPtr;
		desc.testActor = testActor;
		desc.FnameID  = checkOffset;
		desc.indexFname = nameKey;


		desc.LavelProfilepoint = GetLvale;

		results.push_back(desc);
		 

		printf("FName{%s}||offsetActor::0x%llx] [fieldAddr->0x%llx]  ActorOffset =+0x%llx PAdrArray->0x%llX arr.dePtr->0x%llx Count = [%d||%d] id*sizeof(uintptr_t) = sizeMenMove[0x%llx] NewPaddrBase->0x%llx \n",
			objectName.c_str(),  offsetActor, fieldAddr, off,/* arr.Data*/farrAddr, testActor, arr.Count,    arr.Max, GetSizeAllPtr, testActormoveoffset);



	}	
	
 
 
	return results;
}



```
