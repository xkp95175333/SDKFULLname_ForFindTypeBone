#pragma once

#include <string>
#include <functional>
#include <type_traits>

// 0x06B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
#define FSMTransition_SMGraphK2Node_TransitionResultNode_2 9C2181274B0B924D3CA5B9A279E94D46.f  // 0x06B8(0x0160)()
#define FSMTransition_SMGraphK2Node_TransitionResultNode_1 D4B4CDFA4851581F8DC45E9C7872C650f.f    // 0x0818(0x0160)()
#define FSMTransition_SMGraphK2Node_TransitionResultNode 4BA7DDA040FC0248A8B01583B6E915F8.f    // 0x0978(0x0160)()
#define FSMState_SMGraphK2Node_StateEntryNode_2 C0DBF5B740F7B9D1ACCE33B304AEB402.f    // 0x0AD8(0x01A0)()
#define FSMState_SMGraphK2Node_StateEntryNode_1 1FACFA3B42188AD48CB8FE86FA345CE8.f    // 0x0C78(0x01A0)()
#define FSMState_SMGraphK2Node_StateEntryNode  CF4E52DC4722886E63BB5FA77C287B6E.f    // 0x0E18(0x01A0)()
#define FSMGraphPropertyGraphPropertyNode_26  0B8166E24E17986EEBD2D2B7C7669B87.f   
#define FSMGraphPropertyGraphPropertyNode_25 4EF24D604A1B26CBA1B40CB1B5389803.f  
#define FSMGraphPropertyGraphPropertyNode_24 7B9A2F5242D5C0A09AEAFB9EF9777E0C.f    // 0x11D8(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_23 BBD7E6C24F093AB644A50696EC37CC4C.f    // 0x12E8(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_22 B5976DFF4B62E5360B1EA89D8AE977E4.f    // 0x13F8(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_21 15350AC14AD6EC008466F6B4A498EE11.f    // 0x1508(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_20 E7A137594D279F137E503D85F7634CFD.f    // 0x1618(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_19 9A5DA2E04D383A8B99C59E8AF0EB45E7.f    // 0x1728(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_18 B6B6D9F7490CA6FD6E8F32943D0A1E5D.f    // 0x1838(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_17 BE4BA6884C262887F959F4BFA680387D.f    // 0x1948(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_16 CF57221F422BAFAA4FD449B4F0AF5428.f    // 0x1A58(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_15 5E2BC43B424AA24CCB3D5EBD3C81B7FF.f    // 0x1B68(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_14 5D13481E491E4F324E6FA682CDA631B8.f    // 0x1C78(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_13 FF1119B944E81D48E6D5268A78531DDF.f    // 0x1D88(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_12 AC5FF6854CD71E348887A49F30470B1D.f    // 0x1E98(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_11 E49029A54C1422B293D2DCAF7B77A77B.f    // 0x1FA8(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_10 C8B8F8F94894193D040D218988FF0D46.f    // 0x20B8(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_9 6822FBCA4761BC24374A13BFD75A09D5.f    // 0x21C8(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_8 C7A4619E4BC836C83E483EA632945CFE.f    // 0x22D8(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_7 DDBB8BA14A67FE72604D8FA6579B138B.f    // 0x23E8(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_6 C6550DB84EB312D4876B03A1A1C9EF9F.f    // 0x24F8(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_5 F71F0EED42C74D3F066BB9ADB26CD698.f    // 0x2608(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_4 DB785E3546482417D936CEA201D16A44.f    // 0x2718(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_3 4C42393E427BF20986DAD9988C737B57.f    // 0x2828(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_2 49D0CA7F4C83C6204C50E4A0CEA472B6.f    // 0x2938(0x0110)()
#define FSMGraphPropertyGraphPropertyNode_1 2FE81A82427E06D5C25F79A7B1A9AFDD.f    // 0x2A48(0x0110)()
#define FSMGraphPropertyGraphPropertyNode DF27C1CF48DAF7DA684A468CD7E15B35.f    // 0x2B58(0x0110)()

typedef __int8  int8;
typedef __int16 int16;
typedef __int32 int32;
typedef __int64 int64;

typedef uint8_t  uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64; 

#define FName8_ue std::u8string  
#define FName16_ue std::u16string    
#define FName32_ue std::u32string    
#define FName_ue std::wstring 
#define String_ue std::string




#pragma once 
namespace U4Enum {



	enum class EObjectFlags : int32
	{
		NoFlags = 0x00000000,

		Public = 0x00000001,
		Standalone = 0x00000002,
		MarkAsNative = 0x00000004,
		Transactional = 0x00000008,
		ClassDefaultObject = 0x00000010,
		ArchetypeObject = 0x00000020,
		Transient = 0x00000040,

		MarkAsRootSet = 0x00000080,
		TagGarbageTemp = 0x00000100,

		NeedInitialization = 0x00000200,
		NeedLoad = 0x00000400,
		KeepForCooker = 0x00000800,
		NeedPostLoad = 0x00001000,
		NeedPostLoadSubobjects = 0x00002000,
		NewerVersionExists = 0x00004000,
		BeginDestroyed = 0x00008000,
		FinishDestroyed = 0x00010000,

		BeingRegenerated = 0x00020000,
		DefaultSubObject = 0x00040000,
		WasLoaded = 0x00080000,
		TextExportTransient = 0x00100000,
		LoadCompleted = 0x00200000,
		InheritableComponentTemplate = 0x00400000,
		DuplicateTransient = 0x00800000,
		StrongRefOnFrame = 0x01000000,
		NonPIEDuplicateTransient = 0x02000000,
		Dynamic = 0x04000000,
		WillBeLoaded = 0x08000000,
		HasExternalPackage = 0x10000000,

		MirroredGarbage = 0x40000000,
		AllocatedInSharedPage = 0x80000000,
	};

	enum class EFunctionFlags : uint32
	{
		None = 0x00000000,

		Final = 0x00000001,
		RequiredAPI = 0x00000002,
		BlueprintAuthorityOnly = 0x00000004,
		BlueprintCosmetic = 0x00000008,
		Net = 0x00000040,
		NetReliable = 0x00000080,
		NetRequest = 0x00000100,
		Exec = 0x00000200,
		Native = 0x00000400,
		Event = 0x00000800,
		NetResponse = 0x00001000,
		Static = 0x00002000,
		NetMulticast = 0x00004000,
		UbergraphFunction = 0x00008000,
		MulticastDelegate = 0x00010000,
		Public = 0x00020000,
		Private = 0x00040000,
		Protected = 0x00080000,
		Delegate = 0x00100000,
		NetServer = 0x00200000,
		HasOutParms = 0x00400000,
		HasDefaults = 0x00800000,
		NetClient = 0x01000000,
		DLLImport = 0x02000000,
		BlueprintCallable = 0x04000000,
		BlueprintEvent = 0x08000000,
		BlueprintPure = 0x10000000,
		EditorOnly = 0x20000000,
		Const = 0x40000000,
		NetValidate = 0x80000000,

		AllFlags = 0xFFFFFFFF,
	};

	enum class EClassFlags : uint32
	{
		CLASS_None = 0x00000000u,
		Abstract = 0x00000001u,
		DefaultConfig = 0x00000002u,
		Config = 0x00000004u,
		Transient = 0x00000008u,
		Parsed = 0x00000010u,
		MatchedSerializers = 0x00000020u,
		ProjectUserConfig = 0x00000040u,
		Native = 0x00000080u,
		NoExport = 0x00000100u,
		NotPlaceable = 0x00000200u,
		PerObjectConfig = 0x00000400u,
		ReplicationDataIsSetUp = 0x00000800u,
		EditInlineNew = 0x00001000u,
		CollapseCategories = 0x00002000u,
		Interface = 0x00004000u,
		CustomConstructor = 0x00008000u,
		Const = 0x00010000u,
		LayoutChanging = 0x00020000u,
		CompiledFromBlueprint = 0x00040000u,
		MinimalAPI = 0x00080000u,
		RequiredAPI = 0x00100000u,
		DefaultToInstanced = 0x00200000u,
		TokenStreamAssembled = 0x00400000u,
		HasInstancedReference = 0x00800000u,
		Hidden = 0x01000000u,
		Deprecated = 0x02000000u,
		HideDropDown = 0x04000000u,
		GlobalUserConfig = 0x08000000u,
		Intrinsic = 0x10000000u,
		Constructed = 0x20000000u,
		ConfigDoNotCheckDefaults = 0x40000000u,
		NewerVersionExists = 0x80000000u,
	};

	enum class EClassCastFlags : uint64
	{
		None = 0x0000000000000000,

		Field = 0x0000000000000001,
		Int8Property = 0x0000000000000002,
		Enum = 0x0000000000000004,
		Struct = 0x0000000000000008,
		ScriptStruct = 0x0000000000000010,
		Class = 0x0000000000000020,
		ByteProperty = 0x0000000000000040,
		IntProperty = 0x0000000000000080,
		FloatProperty = 0x0000000000000100,
		UInt64Property = 0x0000000000000200,
		ClassProperty = 0x0000000000000400,
		UInt32Property = 0x0000000000000800,
		InterfaceProperty = 0x0000000000001000,
		NameProperty = 0x0000000000002000,
		StrProperty = 0x0000000000004000,
		Property = 0x0000000000008000,
		ObjectProperty = 0x0000000000010000,
		BoolProperty = 0x0000000000020000,
		UInt16Property = 0x0000000000040000,
		Function = 0x0000000000080000,
		StructProperty = 0x0000000000100000,
		ArrayProperty = 0x0000000000200000,
		Int64Property = 0x0000000000400000,
		DelegateProperty = 0x0000000000800000,
		NumericProperty = 0x0000000001000000,
		MulticastDelegateProperty = 0x0000000002000000,
		ObjectPropertyBase = 0x0000000004000000,
		WeakObjectProperty = 0x0000000008000000,
		LazyObjectProperty = 0x0000000010000000,
		SoftObjectProperty = 0x0000000020000000,
		TextProperty = 0x0000000040000000,
		Int16Property = 0x0000000080000000,
		DoubleProperty = 0x0000000100000000,
		SoftClassProperty = 0x0000000200000000,
		Package = 0x0000000400000000,
		Level = 0x0000000800000000,
		Actor = 0x0000001000000000,
		PlayerController = 0x0000002000000000,
		Pawn = 0x0000004000000000,
		SceneComponent = 0x0000008000000000,
		PrimitiveComponent = 0x0000010000000000,
		SkinnedMeshComponent = 0x0000020000000000,
		SkeletalMeshComponent = 0x0000040000000000,
		Blueprint = 0x0000080000000000,
		DelegateFunction = 0x0000100000000000,
		StaticMeshComponent = 0x0000200000000000,
		MapProperty = 0x0000400000000000,
		SetProperty = 0x0000800000000000,
		EnumProperty = 0x0001000000000000,
		USparseDelegateFunction = 0x0002000000000000,
		MulticastInlineDelegateProperty = 0x0004000000000000,
		MulticastSparseDelegateProperty = 0x0008000000000000,
		FieldPathProperty = 0x0010000000000000,
		LargeWorldCoordinatesRealProperty = 0x0080000000000000,
		OptionalProperty = 0x0100000000000000,
		VValueProperty = 0x0200000000000000,
		VerseVMClass = 0x0400000000000000,
		VRestValueProperty = 0x0800000000000000,
		Utf8StrProperty = 0x1000000000000000,
		AnsiStrProperty = 0x2000000000000000,
		VCellProperty = 0x4000000000000000,
	};

	enum class EPropertyFlags : uint64
	{
		None = 0x0000000000000000,

		Edit = 0x0000000000000001,
		ConstParm = 0x0000000000000002,
		BlueprintVisible = 0x0000000000000004,
		ExportObject = 0x0000000000000008,
		BlueprintReadOnly = 0x0000000000000010,
		Net = 0x0000000000000020,
		EditFixedSize = 0x0000000000000040,
		Parm = 0x0000000000000080,
		OutParm = 0x0000000000000100,
		ZeroConstructor = 0x0000000000000200,
		ReturnParm = 0x0000000000000400,
		DisableEditOnTemplate = 0x0000000000000800,

		Transient = 0x0000000000002000,
		Config = 0x0000000000004000,

		DisableEditOnInstance = 0x0000000000010000,
		EditConst = 0x0000000000020000,
		GlobalConfig = 0x0000000000040000,
		InstancedReference = 0x0000000000080000,

		DuplicateTransient = 0x0000000000200000,
		SubobjectReference = 0x0000000000400000,

		SaveGame = 0x0000000001000000,
		NoClear = 0x0000000002000000,

		ReferenceParm = 0x0000000008000000,
		BlueprintAssignable = 0x0000000010000000,
		Deprecated = 0x0000000020000000,
		IsPlainOldData = 0x0000000040000000,
		RepSkip = 0x0000000080000000,
		RepNotify = 0x0000000100000000,
		Interp = 0x0000000200000000,
		NonTransactional = 0x0000000400000000,
		EditorOnly = 0x0000000800000000,
		NoDestructor = 0x0000001000000000,

		AutoWeak = 0x0000004000000000,
		ContainsInstancedReference = 0x0000008000000000,
		AssetRegistrySearchable = 0x0000010000000000,
		SimpleDisplay = 0x0000020000000000,
		AdvancedDisplay = 0x0000040000000000,
		Protected = 0x0000080000000000,
		BlueprintCallable = 0x0000100000000000,
		BlueprintAuthorityOnly = 0x0000200000000000,
		TextExportTransient = 0x0000400000000000,
		NonPIEDuplicateTransient = 0x0000800000000000,
		ExposeOnSpawn = 0x0001000000000000,
		PersistentInstance = 0x0002000000000000,
		UObjectWrapper = 0x0004000000000000,
		HasGetValueTypeHash = 0x0008000000000000,
		NativeAccessSpecifierPublic = 0x0010000000000000,
		NativeAccessSpecifierProtected = 0x0020000000000000,
		NativeAccessSpecifierPrivate = 0x0040000000000000,
		SkipSerialization = 0x0080000000000000,
	};


};

 
namespace EngineSettings
{

	// Enum EngineSettings.ESubLevelStripMode
	// NumValues: 0x0003
	enum class ESubLevelStripMode : uint8_t
	{
		ExactClass = 0,
		IsChildOf = 1,
		ESubLevelStripMode_MAX = 2,
	};

	// Enum EngineSettings.EFourPlayerSplitScreenType
	// NumValues: 0x0004
	enum class EFourPlayerSplitScreenType : uint8_t
	{
		Grid = 0,
		Vertical = 1,
		Horizontal = 2,
		EFourPlayerSplitScreenType_MAX = 3,
	};

	// Enum EngineSettings.EThreePlayerSplitScreenType
	// NumValues: 0x0005
	enum class EThreePlayerSplitScreenType : uint8_t
	{
		FavorTop = 0,
		FavorBottom = 1,
		Vertical = 2,
		Horizontal = 3,
		EThreePlayerSplitScreenType_MAX = 4,
	};

	// Enum EngineSettings.ETwoPlayerSplitScreenType
	// NumValues: 0x0003
	enum class ETwoPlayerSplitScreenType : uint8_t
	{
		Horizontal = 0,
		Vertical = 1,
		ETwoPlayerSplitScreenType_MAX = 2,
	};

	// ScriptStruct EngineSettings.AutoCompleteCommand
	// 0x0028 (0x0028 - 0x0000)
	struct FAutoCompleteCommand
	{
	public:
		std::wstring                                 Command;                                           // 0x0000(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		std::wstring                               Desc;                                              // 0x0010(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_20[0x8];                                       // 0x0020(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	//	DUMPER7_ASSERTS_FAutoCompleteCommand;

	// ScriptStruct EngineSettings.GameModeName
	// 0x0028 (0x0028 - 0x0000)
	struct FGameModeName
	{
	public:
		std::wstring                            Name;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		//  FSoftClassPath                         GameMode;                                          // 0x0010(0x0018)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	//	DUMPER7_ASSERTS_FGameModeName;

};

namespace Core
{

	// Enum CoreUObject.EInterpCurveMode
	// NumValues: 0x0007
	enum class EInterpCurveMode : uint8_t
	{
		CIM_Linear = 0,
		CIM_CurveAuto = 1,
		CIM_Constant = 2,
		CIM_CurveUser = 3,
		CIM_CurveBreak = 4,
		CIM_CurveAutoClamped = 5,
		CIM_MAX = 6,
	};

	// Enum CoreUObject.ERangeBoundTypes
	// NumValues: 0x0004
	enum class ERangeBoundTypes : uint8_t
	{
		Exclusive = 0,
		Inclusive = 1,
		Open = 2,
		ERangeBoundTypes_MAX = 3,
	};

	// Enum CoreUObject.ELocalizedTextSourceCategory
	// NumValues: 0x0004
	enum class ELocalizedTextSourceCategory : uint8_t
	{
		Game = 0,
		Engine = 1,
		Editor = 2,
		ELocalizedTextSourceCategory_MAX = 3,
	};

	// Enum CoreUObject.EAutomationEventType
	// NumValues: 0x0004
	enum class EAutomationEventType : uint8_t
	{
		Info = 0,
		Warning = 1,
		Error = 2,
		EAutomationEventType_MAX = 3,
	};

	// Enum CoreUObject.EMouseCursor
	// NumValues: 0x001A
	enum class EMouseCursor : uint8_t
	{
		None = 0,
		Default = 1,
		TextEditBeam = 2,
		ResizeLeftRight = 3,
		ResizeUpDown = 4,
		ResizeSouthEast = 5,
		ResizeSouthWest = 6,
		CardinalCross = 7,
		Crosshairs = 8,
		Hand = 9,
		GrabHand = 10,
		GrabHandClosed = 11,
		SlashedCircle = 12,
		EyeDropper = 13,
		Menu = 14,
		Custom1 = 15,
		Custom2 = 16,
		Custom3 = 17,
		Custom4 = 18,
		Custom5 = 19,
		Custom6 = 20,
		Custom7 = 21,
		Custom8 = 22,
		Custom9 = 23,
		Custom10 = 24,
		EMouseCursor_MAX = 25,
	};

	// Enum CoreUObject.EPixelFormat
	// NumValues: 0x0050
	enum class EPixelFormat : uint8_t
	{
		PF_Unknown = 0,
		PF_A32B32G32R32F = 1,
		PF_B8G8R8A8 = 2,
		PF_G8 = 3,
		PF_G16 = 4,
		PF_DXT1 = 5,
		PF_DXT3 = 6,
		PF_DXT5 = 7,
		PF_UYVY = 8,
		PF_FloatRGB = 9,
		PF_FloatRGBA = 10,
		PF_DepthStencil = 11,
		PF_ShadowDepth = 12,
		PF_R32_FLOAT = 13,
		PF_G16R16 = 14,
		PF_G16R16F = 15,
		PF_G16R16F_FILTER = 16,
		PF_G32R32F = 17,
		PF_A2B10G10R10 = 18,
		PF_A16B16G16R16 = 19,
		PF_D24 = 20,
		PF_R16F = 21,
		PF_R16F_FILTER = 22,
		PF_BC5 = 23,
		PF_V8U8 = 24,
		PF_A1 = 25,
		PF_FloatR11G11B10 = 26,
		PF_A8 = 27,
		PF_R32_UINT = 28,
		PF_R32_SINT = 29,
		PF_PVRTC2 = 30,
		PF_PVRTC4 = 31,
		PF_R16_UINT = 32,
		PF_R16_SINT = 33,
		PF_R16G16B16A16_UINT = 34,
		PF_R16G16B16A16_SINT = 35,
		PF_R5G6B5_UNORM = 36,
		PF_R8G8B8A8 = 37,
		PF_A8R8G8B8 = 38,
		PF_BC4 = 39,
		PF_R8G8 = 40,
		PF_ATC_RGB = 41,
		PF_ATC_RGBA_E = 42,
		PF_ATC_RGBA_I = 43,
		PF_X24_G8 = 44,
		PF_ETC1 = 45,
		PF_ETC2_RGB = 46,
		PF_ETC2_RGBA = 47,
		PF_R32G32B32A32_UINT = 48,
		PF_R16G16_UINT = 49,
		PF_ASTC_4x4 = 50,
		PF_ASTC_5x5 = 70,
		PF_ASTC_6x6 = 51,
		PF_ASTC_8x8 = 52,
		PF_ASTC_10x10 = 53,
		PF_ASTC_12x12 = 54,
		PF_BC6H = 55,
		PF_BC7 = 56,
		PF_R8_UINT = 57,
		PF_L8 = 58,
		PF_XGXR8 = 59,
		PF_R8G8B8A8_UINT = 60,
		PF_R8G8B8A8_SNORM = 61,
		PF_R16G16B16A16_UNORM = 62,
		PF_R16G16B16A16_SNORM = 63,
		PF_PLATFORM_HDR_0 = 64,
		PF_PLATFORM_HDR_1 = 65,
		PF_PLATFORM_HDR_2 = 66,
		PF_NV12 = 67,
		PF_R32G32_UINT = 68,
		PF_ASTC_5x4 = 69,
		PF_ASTC_5x5_0 = 70,
		PF_ASTC_6x5 = 71,
		PF_ASTC_8x5 = 72,
		PF_ASTC_8x6 = 73,
		PF_ASTC_10x5 = 74,
		PF_ASTC_10x6 = 75,
		PF_ASTC_10x8 = 76,
		PF_ASTC_12x10 = 77,
		PF_MAX_0 = 79,
	};

	// Enum CoreUObject.ELifetimeCondition
	// NumValues: 0x0014
	enum class ELifetimeCondition : uint8_t
	{
		COND_None = 0,
		COND_InitialOnly = 1,
		COND_OwnerOnly = 2,
		COND_SkipOwner = 3,
		COND_SimulatedOnly = 4,
		COND_AutonomousOnly = 5,
		COND_SimulatedOrPhysics = 6,
		COND_InitialOrOwner = 7,
		COND_Custom = 8,
		COND_ReplayOrOwner = 9,
		COND_ReplayOnly = 10,
		COND_SimulatedOnlyNoReplay = 11,
		COND_SimulatedOrPhysicsNoReplay = 12,
		COND_SkipReplay = 13,
		COND_InitialOrSkipOwner = 14,
		COND_OwnerOrFocusTarget = 15,
		COND_FocusTargetSkipOwner = 16,
		COND_VisibleOnly = 17,
		COND_Never = 31,
		COND_Max = 32,
	};

	// Enum CoreUObject.EDataValidationResult
	// NumValues: 0x0004
	enum class EDataValidationResult : uint8_t
	{
		Invalid = 0,
		Valid = 1,
		NotValidated = 2,
		EDataValidationResult_MAX = 3,
	};

	// Enum CoreUObject.EPropertyAccessChangeNotifyMode
	// NumValues: 0x0004
	enum class EPropertyAccessChangeNotifyMode : uint8_t
	{
		Default = 0,
		Never = 1,
		Always = 2,
		EPropertyAccessChangeNotifyMode_MAX = 3,
	};

	// Enum CoreUObject.EUnit
	// NumValues: 0x0033
	enum class EUnit : uint8_t
	{
		Micrometers = 0,
		Millimeters = 1,
		Centimeters = 2,
		Meters = 3,
		Kilometers = 4,
		Inches = 5,
		Feet = 6,
		Yards = 7,
		Miles = 8,
		Lightyears = 9,
		Degrees = 10,
		Radians = 11,
		MetersPerSecond = 12,
		KilometersPerHour = 13,
		MilesPerHour = 14,
		Celsius = 15,
		Farenheit = 16,
		Kelvin = 17,
		Micrograms = 18,
		Milligrams = 19,
		Grams = 20,
		Kilograms = 21,
		MetricTons = 22,
		Ounces = 23,
		Pounds = 24,
		Stones = 25,
		Newtons = 26,
		PoundsForce = 27,
		KilogramsForce = 28,
		Hertz = 29,
		Kilohertz = 30,
		Megahertz = 31,
		Gigahertz = 32,
		RevolutionsPerMinute = 33,
		Bytes = 34,
		Kilobytes = 35,
		Megabytes = 36,
		Gigabytes = 37,
		Terabytes = 38,
		Lumens = 39,
		Milliseconds = 43,
		Seconds = 44,
		Minutes = 45,
		Hours = 46,
		Days = 47,
		Months = 48,
		Years = 49,
		Multiplier = 52,
		Percentage = 51,
		Unspecified = 53,
		EUnit_MAX = 54,
	};

	// Enum CoreUObject.EAxis
	// NumValues: 0x0005
	enum class EAxis : uint8_t
	{
		None = 0,
		X = 1,
		Y = 2,
		Z = 3,
		EAxis_MAX = 4,
	};

	// Enum CoreUObject.ELogTimes
	// NumValues: 0x0005
	enum class ELogTimes : uint8_t
	{
		None = 0,
		UTC = 1,
		SinceGStartTime = 2,
		Local = 3,
		ELogTimes_MAX = 4,
	};

	// Enum CoreUObject.ESearchDir
	// NumValues: 0x0003
	enum class ESearchDir : uint8_t
	{
		FromStart = 0,
		FromEnd = 1,
		ESearchDir_MAX = 2,
	};

	// Enum CoreUObject.ESearchCase
	// NumValues: 0x0003
	enum class ESearchCase : uint8_t
	{
		CaseSensitive = 0,
		IgnoreCase = 1,
		ESearchCase_MAX = 2,
	};


};

namespace Cam
{

	// Enum Engine.ETextGender
	// NumValues: 0x0004
	enum class ETextGender : uint8_t
	{
		Masculine = 0,
		Feminine = 1,
		Neuter = 2,
		ETextGender_MAX = 3,
	};

	// Enum Engine.EFormatArgumentType
	// NumValues: 0x0007
	enum class EFormatArgumentType : uint8_t
	{
		Int = 0,
		UInt = 1,
		Float = 2,
		Double = 3,
		Text = 4,
		Gender = 5,
		EFormatArgumentType_MAX = 6,
	};

	// Enum Engine.EEndPlayReason
	// NumValues: 0x0006
	enum class EEndPlayReason : uint8_t
	{
		Destroyed = 0,
		LevelTransition = 1,
		EndPlayInEditor = 2,
		RemovedFromWorld = 3,
		Quit = 4,
		EEndPlayReason_MAX = 5,
	};

	// Enum Engine.ETickingGroup
	// NumValues: 0x0009
	enum class ETickingGroup : uint8_t
	{
		TG_PrePhysics = 0,
		TG_StartPhysics = 1,
		TG_DuringPhysics = 2,
		TG_EndPhysics = 3,
		TG_PostPhysics = 4,
		TG_PostUpdateWork = 5,
		TG_LastDemotable = 6,
		TG_NewlySpawned = 7,
		TG_MAX = 8,
	};

	// Enum Engine.EComponentCreationMethod
	// NumValues: 0x0005
	enum class EComponentCreationMethod : uint8_t
	{
		Native = 0,
		SimpleConstructionScript = 1,
		UserConstructionScript = 2,
		Instance = 3,
		EComponentCreationMethod_MAX = 4,
	};

	// Enum Engine.EComponentReplicationFlags
	// NumValues: 0x0008
	enum class EComponentReplicationFlags : uint8_t
	{
		Rep_Always = 0,
		Rep_OwnerOnly = 1,
		Rep_SimulateOnly = 4,
		Rep_ToBeObservedOnly = 8,
		Rep_OwnerAndSimulate = 16,
		Rep_OwnerAndOB = 32,
		Rep_SimulteAndOB = 64,
		Rep_MAX = 65,
	};

	// Enum Engine.ETemperatureSeverityType
	// NumValues: 0x0007
	enum class ETemperatureSeverityType : uint8_t
	{
		Unknown = 0,
		Good = 1,
		Bad = 2,
		Serious = 3,
		Critical = 4,
		NumSeverities = 5,
		ETemperatureSeverityType_MAX = 6,
	};

	// Enum Engine.EPlaneConstraintAxisSetting
	// NumValues: 0x0006
	enum class EPlaneConstraintAxisSetting : uint8_t
	{
		Custom = 0,
		X = 1,
		Y = 2,
		Z = 3,
		UseGlobalPhysicsSetting = 4,
		EPlaneConstraintAxisSetting_MAX = 5,
	};

	// Enum Engine.EInterpToBehaviourType
	// NumValues: 0x0005
	enum class EInterpToBehaviourType : uint8_t
	{
		OneShot = 0,
		OneShot_Reverse = 1,
		Loop_Reset = 2,
		PingPong = 3,
		EInterpToBehaviourType_MAX = 4,
	};

	// Enum Engine.ETeleportType
	// NumValues: 0x0005
	enum class ETeleportType : uint8_t
	{
		None = 0,
		TeleportPhysics = 1,
		ResetPhysics = 2,
		SkipSkeletalMeshUpdateChildComponents = 4,
		ETeleportType_MAX = 5,
	};

	// Enum Engine.EPlatformInterfaceDataType
	// NumValues: 0x0007
	enum class EPlatformInterfaceDataType : uint8_t
	{
		PIDT_None = 0,
		PIDT_Int = 1,
		PIDT_Float = 2,
		PIDT_String = 3,
		PIDT_Object = 4,
		PIDT_Custom = 5,
		PIDT_MAX = 6,
	};

	// Enum Engine.EMovementMode
	// NumValues: 0x0008
	enum class EMovementMode : uint8_t
	{
		MOVE_None = 0,
		MOVE_Walking = 1,
		MOVE_NavWalking = 2,
		MOVE_Falling = 3,
		MOVE_Swimming = 4,
		MOVE_Flying = 5,
		MOVE_Custom = 6,
		MOVE_MAX = 7,
	};

	// Enum Engine.ENetworkFailure
	// NumValues: 0x000E
	enum class ENetworkFailure : uint8_t
	{
		NetDriverAlreadyExists = 0,
		NetDriverCreateFailure = 1,
		NetDriverListenFailure = 2,
		ConnectionLost = 3,
		ConnectionTimeout = 4,
		FailureReceived = 5,
		OutdatedClient = 6,
		OutdatedServer = 7,
		PendingConnectionFailure = 8,
		NetGuidMismatch = 9,
		NetChecksumMismatch = 10,
		NonExistantPackage = 11,
		CorruptedPacket = 12,
		ENetworkFailure_MAX = 13,
	};

	// Enum Engine.ETravelFailure
	// NumValues: 0x000D
	enum class ETravelFailure : uint8_t
	{
		NoLevel = 0,
		LoadMapFailure = 1,
		InvalidURL = 2,
		PackageMissing = 3,
		PackageVersion = 4,
		NoDownload = 5,
		TravelFailure = 6,
		CheatCommands = 7,
		PendingNetGameCreateFailure = 8,
		CloudSaveFailure = 9,
		ServerTravelFailure = 10,
		ClientTravelFailure = 11,
		ETravelFailure_MAX = 12,
	};

	// Enum Engine.EScreenOrientation
	// NumValues: 0x0008
	enum class EScreenOrientation : uint8_t
	{
		Unknown = 0,
		Portrait = 1,
		PortraitUpsideDown = 2,
		LandscapeLeft = 3,
		LandscapeRight = 4,
		FaceUp = 5,
		FaceDown = 6,
		EScreenOrientation_MAX = 7,
	};

	// Enum Engine.EApplicationState
	// NumValues: 0x0005
	enum class EApplicationState : uint8_t
	{
		Unknown = 0,
		Inactive = 1,
		Background = 2,
		Active = 3,
		EApplicationState_MAX = 4,
	};

	// Enum Engine.EObjectTypeQuery
	// NumValues: 0x0022
	enum class EObjectTypeQuery : uint8_t
	{
		ObjectTypeQuery1 = 0,
		ObjectTypeQuery2 = 1,
		ObjectTypeQuery3 = 2,
		ObjectTypeQuery4 = 3,
		ObjectTypeQuery5 = 4,
		ObjectTypeQuery6 = 5,
		ObjectTypeQuery7 = 6,
		ObjectTypeQuery8 = 7,
		ObjectTypeQuery9 = 8,
		ObjectTypeQuery10 = 9,
		ObjectTypeQuery11 = 10,
		ObjectTypeQuery12 = 11,
		ObjectTypeQuery13 = 12,
		ObjectTypeQuery14 = 13,
		ObjectTypeQuery15 = 14,
		ObjectTypeQuery16 = 15,
		ObjectTypeQuery17 = 16,
		ObjectTypeQuery18 = 17,
		ObjectTypeQuery19 = 18,
		ObjectTypeQuery20 = 19,
		ObjectTypeQuery21 = 20,
		ObjectTypeQuery22 = 21,
		ObjectTypeQuery23 = 22,
		ObjectTypeQuery24 = 23,
		ObjectTypeQuery25 = 24,
		ObjectTypeQuery26 = 25,
		ObjectTypeQuery27 = 26,
		ObjectTypeQuery28 = 27,
		ObjectTypeQuery29 = 28,
		ObjectTypeQuery30 = 29,
		ObjectTypeQuery31 = 30,
		ObjectTypeQuery32 = 31,
		ObjectTypeQuery_MAX = 32,
		EObjectTypeQuery_MAX = 33,
	};

	// Enum Engine.EDrawDebugTrace
	// NumValues: 0x0005
	enum class EDrawDebugTrace : uint8_t
	{
		None = 0,
		ForOneFrame = 1,
		ForDuration = 2,
		Persistent = 3,
		EDrawDebugTrace_MAX = 4,
	};

	// Enum Engine.ETraceTypeQuery
	// NumValues: 0x0022
	enum class ETraceTypeQuery : uint8_t
	{
		TraceTypeQuery1 = 0,
		TraceTypeQuery2 = 1,
		TraceTypeQuery3 = 2,
		TraceTypeQuery4 = 3,
		TraceTypeQuery5 = 4,
		TraceTypeQuery6 = 5,
		TraceTypeQuery7 = 6,
		TraceTypeQuery8 = 7,
		TraceTypeQuery9 = 8,
		TraceTypeQuery10 = 9,
		TraceTypeQuery11 = 10,
		TraceTypeQuery12 = 11,
		TraceTypeQuery13 = 12,
		TraceTypeQuery14 = 13,
		TraceTypeQuery15 = 14,
		TraceTypeQuery16 = 15,
		TraceTypeQuery17 = 16,
		TraceTypeQuery18 = 17,
		TraceTypeQuery19 = 18,
		TraceTypeQuery20 = 19,
		TraceTypeQuery21 = 20,
		TraceTypeQuery22 = 21,
		TraceTypeQuery23 = 22,
		TraceTypeQuery24 = 23,
		TraceTypeQuery25 = 24,
		TraceTypeQuery26 = 25,
		TraceTypeQuery27 = 26,
		TraceTypeQuery28 = 27,
		TraceTypeQuery29 = 28,
		TraceTypeQuery30 = 29,
		TraceTypeQuery31 = 30,
		TraceTypeQuery32 = 31,
		TraceTypeQuery_MAX = 32,
		ETraceTypeQuery_MAX = 33,
	};

	// Enum Engine.EMoveComponentAction
	// NumValues: 0x0004
	enum class EMoveComponentAction : uint8_t
	{
		Move = 0,
		Stop = 1,
		Return = 2,
		EMoveComponentAction_MAX = 3,
	};

	// Enum Engine.EQuitPreference
	// NumValues: 0x0003
	enum class EQuitPreference : uint8_t
	{
		Quit = 0,
		Background = 1,
		EQuitPreference_MAX = 2,
	};

	// Enum Engine.EMouseLockMode
	// NumValues: 0x0005
	enum class EMouseLockMode : uint8_t
	{
		DoNotLock = 0,
		LockOnCapture = 1,
		LockAlways = 2,
		LockInFullscreen = 3,
		EMouseLockMode_MAX = 4,
	};

	// Enum Engine.EWindowTitleBarMode
	// NumValues: 0x0003
	enum class EWindowTitleBarMode : uint8_t
	{
		Overlay = 0,
		VerticalBox = 1,
		EWindowTitleBarMode_MAX = 2,
	};

	// Enum Engine.EMaterialAtlasUsage
	// NumValues: 0x0006
	enum class EMaterialAtlasUsage : uint8_t
	{
		None = 0,
		Usage0 = 1,
		Usage1 = 2,
		Usage2 = 3,
		Usage3 = 4,
		EMaterialAtlasUsage_MAX = 5,
	};

	// Enum Engine.ERoundingMode
	// NumValues: 0x0008
	enum class ERoundingMode : uint8_t
	{
		HalfToEven = 0,
		HalfFromZero = 1,
		HalfToZero = 2,
		FromZero = 3,
		ToZero = 4,
		ToNegativeInfinity = 5,
		ToPositiveInfinity = 6,
		ERoundingMode_MAX = 7,
	};

	// Enum Engine.EInputEvent
	// NumValues: 0x0006
	enum class EInputEvent : uint8_t
	{
		IE_Pressed = 0,
		IE_Released = 1,
		IE_Repeat = 2,
		IE_DoubleClick = 3,
		IE_Axis = 4,
		IE_MAX = 5,
	};

	// Enum Engine.EFastArraySerializerDeltaFlags
	// NumValues: 0x0005
	enum class EFastArraySerializerDeltaFlags : uint8_t
	{
		None = 0,
		HasBeenSerialized = 1,
		HasDeltaBeenRequested = 2,
		IsUsingDeltaSerialization = 4,
		EFastArraySerializerDeltaFlags_MAX = 5,
	};

	// Enum Engine.ENetRole
	// NumValues: 0x0005
	enum class ENetRole : uint8_t
	{
		ROLE_None = 0,
		ROLE_SimulatedProxy = 1,
		ROLE_AutonomousProxy = 2,
		ROLE_Authority = 3,
		ROLE_MAX = 4,
	};

	// Enum Engine.EAttachLocation
	// NumValues: 0x0005
	enum class EAttachLocation : uint8_t
	{
		KeepRelativeOffset = 0,
		KeepWorldPosition = 1,
		SnapToTarget = 2,
		SnapToTargetIncludingScale = 3,
		EAttachLocation_MAX = 4,
	};

	// Enum Engine.EAttachmentRule
	// NumValues: 0x0004
	enum class EAttachmentRule : uint8_t
	{
		KeepRelative = 0,
		KeepWorld = 1,
		SnapToTarget = 2,
		EAttachmentRule_MAX = 3,
	};

	// Enum Engine.EDetachmentRule
	// NumValues: 0x0003
	enum class EDetachmentRule : uint8_t
	{
		KeepRelative = 0,
		KeepWorld = 1,
		EDetachmentRule_MAX = 2,
	};

	// Enum Engine.ENetDormancy
	// NumValues: 0x0007
	enum class ENetDormancy : uint8_t
	{
		DORM_Never = 0,
		DORM_Awake = 1,
		DORM_DormantAll = 2,
		DORM_DormantPartial = 3,
		DORM_Initial = 4,
		DORM_DormantAll_KeelChannel = 5,
		DORM_MAX = 6,
	};

	// Enum Engine.EAutoReceiveInput
	// NumValues: 0x000A
	enum class EAutoReceiveInput : uint8_t
	{
		Disabled = 0,
		Player0 = 1,
		Player1 = 2,
		Player2 = 3,
		Player3 = 4,
		Player4 = 5,
		Player5 = 6,
		Player6 = 7,
		Player7 = 8,
		EAutoReceiveInput_MAX = 9,
	};

	// Enum Engine.ESpawnActorCollisionHandlingMethod
	// NumValues: 0x0006
	enum class ESpawnActorCollisionHandlingMethod : uint8_t
	{
		Undefined = 0,
		AlwaysSpawn = 1,
		AdjustIfPossibleButAlwaysSpawn = 2,
		AdjustIfPossibleButDontSpawnIfColliding = 3,
		DontSpawnIfColliding = 4,
		ESpawnActorCollisionHandlingMethod_MAX = 5,
	};

	// Enum Engine.ERotatorQuantization
	// NumValues: 0x0003
	enum class ERotatorQuantization : uint8_t
	{
		ByteComponents = 0,
		ShortComponents = 1,
		ERotatorQuantization_MAX = 2,
	};

	// Enum Engine.EVectorQuantization
	// NumValues: 0x0004
	enum class EVectorQuantization : uint8_t
	{
		RoundWholeNumber = 0,
		RoundOneDecimal = 1,
		RoundTwoDecimals = 2,
		EVectorQuantization_MAX = 3,
	};

	// Enum Engine.EActorUpdateOverlapsMethod
	// NumValues: 0x0005
	enum class EActorUpdateOverlapsMethod : uint8_t
	{
		UseConfigDefault = 0,
		AlwaysUpdate = 1,
		OnlyUpdateMovable = 2,
		NeverUpdate = 3,
		EActorUpdateOverlapsMethod_MAX = 4,
	};

	// Enum Engine.EAutoPossessAI
	// NumValues: 0x0005
	enum class EAutoPossessAI : uint8_t
	{
		Disabled = 0,
		PlacedInWorld = 1,
		Spawned = 2,
		PlacedInWorldOrSpawned = 3,
		EAutoPossessAI_MAX = 4,
	};

	// Enum Engine.ECollisionChannel
	// NumValues: 0x0022
	enum class ECollisionChannel : uint8_t
	{
		ECC_WorldStatic = 0,
		ECC_WorldDynamic = 1,
		ECC_Pawn = 2,
		ECC_Visibility = 3,
		ECC_Camera = 4,
		ECC_PhysicsBody = 5,
		ECC_Vehicle = 6,
		ECC_Destructible = 7,
		ECC_EngineTraceChannel1 = 8,
		ECC_EngineTraceChannel2 = 9,
		ECC_EngineTraceChannel3 = 10,
		ECC_EngineTraceChannel4 = 11,
		ECC_EngineTraceChannel5 = 12,
		ECC_EngineTraceChannel6 = 13,
		ECC_GameTraceChannel1 = 14,
		ECC_GameTraceChannel2 = 15,
		ECC_GameTraceChannel3 = 16,
		ECC_GameTraceChannel4 = 17,
		ECC_GameTraceChannel5 = 18,
		ECC_GameTraceChannel6 = 19,
		ECC_GameTraceChannel7 = 20,
		ECC_GameTraceChannel8 = 21,
		ECC_GameTraceChannel9 = 22,
		ECC_GameTraceChannel10 = 23,
		ECC_GameTraceChannel11 = 24,
		ECC_GameTraceChannel12 = 25,
		ECC_GameTraceChannel13 = 26,
		ECC_GameTraceChannel14 = 27,
		ECC_GameTraceChannel15 = 28,
		ECC_GameTraceChannel16 = 29,
		ECC_GameTraceChannel17 = 30,
		ECC_GameTraceChannel18 = 31,
		ECC_OverlapAll_Deprecated = 32,
		ECC_MAX = 33,
	};

	// Enum Engine.ECollisionResponse
	// NumValues: 0x0004
	enum class ECollisionResponse : uint8_t
	{
		ECR_Ignore = 0,
		ECR_Overlap = 1,
		ECR_Block = 2,
		ECR_MAX = 3,
	};

	// Enum Engine.EAnimLinkMethod
	// NumValues: 0x0004
	enum class EAnimLinkMethod : uint8_t
	{
		Absolute = 0,
		Relative = 1,
		Proportional = 2,
		EAnimLinkMethod_MAX = 3,
	};

	// Enum Engine.ENotifyFilterType
	// NumValues: 0x0004
	enum class ENotifyFilterType : uint8_t
	{
		NoFiltering = 0,
		LOD = 1,
		AnimLOD = 2,
		ENotifyFilterType_MAX = 3,
	};

	// Enum Engine.EMontageNotifyTickType
	// NumValues: 0x0003
	enum class EMontageNotifyTickType : uint8_t
	{
		Queued = 0,
		BranchingPoint = 1,
		EMontageNotifyTickType_MAX = 2,
	};

	// Enum Engine.ERichCurveExtrapolation
	// NumValues: 0x0007
	enum class ERichCurveExtrapolation : uint8_t
	{
		RCCE_Cycle = 0,
		RCCE_CycleWithOffset = 1,
		RCCE_Oscillate = 2,
		RCCE_Linear = 3,
		RCCE_Constant = 4,
		RCCE_None = 5,
		RCCE_MAX = 6,
	};

	// Enum Engine.ERichCurveTangentWeightMode
	// NumValues: 0x0005
	enum class ERichCurveTangentWeightMode : uint8_t
	{
		RCTWM_WeightedNone = 0,
		RCTWM_WeightedArrive = 1,
		RCTWM_WeightedLeave = 2,
		RCTWM_WeightedBoth = 3,
		RCTWM_MAX = 4,
	};

	// Enum Engine.ERichCurveTangentMode
	// NumValues: 0x0005
	enum class ERichCurveTangentMode : uint8_t
	{
		RCTM_Auto = 0,
		RCTM_User = 1,
		RCTM_Break = 2,
		RCTM_None = 3,
		RCTM_MAX = 4,
	};

	// Enum Engine.ERichCurveInterpMode
	// NumValues: 0x0005
	enum class ERichCurveInterpMode : uint8_t
	{
		RCIM_Linear = 0,
		RCIM_Constant = 1,
		RCIM_Cubic = 2,
		RCIM_None = 3,
		RCIM_MAX = 4,
	};

	// Enum Engine.TextureGroup
	// NumValues: 0x0035
	enum class ETextureGroup : uint8_t
	{
		TEXTUREGROUP_World = 0,
		TEXTUREGROUP_WorldNormalMap = 1,
		TEXTUREGROUP_WorldSpecular = 2,
		TEXTUREGROUP_Character = 3,
		TEXTUREGROUP_CharacterNormalMap = 4,
		TEXTUREGROUP_CharacterSpecular = 5,
		TEXTUREGROUP_Weapon = 6,
		TEXTUREGROUP_WeaponNormalMap = 7,
		TEXTUREGROUP_WeaponSpecular = 8,
		TEXTUREGROUP_Vehicle = 9,
		TEXTUREGROUP_VehicleNormalMap = 10,
		TEXTUREGROUP_VehicleSpecular = 11,
		TEXTUREGROUP_Cinematic = 12,
		TEXTUREGROUP_Effects = 13,
		TEXTUREGROUP_EffectsNotFiltered = 14,
		TEXTUREGROUP_Skybox = 15,
		TEXTUREGROUP_UI = 16,
		TEXTUREGROUP_Lightmap = 17,
		TEXTUREGROUP_RenderTarget = 18,
		TEXTUREGROUP_MobileFlattened = 19,
		TEXTUREGROUP_ProcBuilding_Face = 20,
		TEXTUREGROUP_ProcBuilding_LightMap = 21,
		TEXTUREGROUP_Shadowmap = 22,
		TEXTUREGROUP_ColorLookupTable = 23,
		TEXTUREGROUP_Terrain_Heightmap = 24,
		TEXTUREGROUP_Terrain_Weightmap = 25,
		TEXTUREGROUP_Bokeh = 26,
		TEXTUREGROUP_IESLightProfile = 27,
		TEXTUREGROUP_Pixels2D = 28,
		TEXTUREGROUP_HierarchicalLOD = 29,
		TEXTUREGROUP_Impostor = 30,
		TEXTUREGROUP_ImpostorNormalDepth = 31,
		TEXTUREGROUP_8BitData = 32,
		TEXTUREGROUP_16BitData = 33,
		TEXTUREGROUP_WorldAniso = 34,
		TEXTUREGROUP_WorldNoSmallPak = 35,
		TEXTUREGROUP_Grass = 36,
		TEXTUREGROUP_Tree = 37,
		TEXTUREGROUP_Building = 38,
		TEXTUREGROUP_Stone = 39,
		TEXTUREGROUP_Prop = 40,
		TEXTUREGROUP_Decal = 41,
		TEXTUREGROUP_Project01 = 42,
		TEXTUREGROUP_Project02 = 43,
		TEXTUREGROUP_Project03 = 44,
		TEXTUREGROUP_Project04 = 45,
		TEXTUREGROUP_Project05 = 46,
		TEXTUREGROUP_Project06 = 47,
		TEXTUREGROUP_Project07 = 48,
		TEXTUREGROUP_Project08 = 49,
		TEXTUREGROUP_Project09 = 50,
		TEXTUREGROUP_Project10 = 51,
		TEXTUREGROUP_MAX = 52,
	};

	// Enum Engine.ERelativeTransformSpace
	// NumValues: 0x0005
	enum class ERelativeTransformSpace : uint8_t
	{
		RTS_World = 0,
		RTS_Actor = 1,
		RTS_Component = 2,
		RTS_ParentBoneSpace = 3,
		RTS_MAX = 4,
	};

	// Enum Engine.EComponentMobility
	// NumValues: 0x0004
	enum class EComponentMobility : uint8_t
	{
		Static = 0,
		Stationary = 1,
		Movable = 2,
		EComponentMobility_MAX = 3,
	};

	// Enum Engine.EDetailMode
	// NumValues: 0x0004
	enum class EDetailMode : uint8_t
	{
		DM_Low = 0,
		DM_Medium = 1,
		DM_High = 2,
		DM_MAX = 3,
	};

	// Enum Engine.EAspectRatioAxisConstraint
	// NumValues: 0x0004
	enum class EAspectRatioAxisConstraint : uint8_t
	{
		AspectRatio_MaintainYFOV = 0,
		AspectRatio_MaintainXFOV = 1,
		AspectRatio_MajorAxisFOV = 2,
		AspectRatio_MAX = 3,
	};

	// Enum Engine.EAlphaBlendOption
	// NumValues: 0x0010
	enum class EAlphaBlendOption : uint8_t
	{
		Linear = 0,
		Cubic = 1,
		HermiteCubic = 2,
		Sinusoidal = 3,
		QuadraticInOut = 4,
		CubicInOut = 5,
		QuarticInOut = 6,
		QuinticInOut = 7,
		CircularIn = 8,
		CircularOut = 9,
		CircularInOut = 10,
		ExpIn = 11,
		ExpOut = 12,
		ExpInOut = 13,
		Custom = 14,
		EAlphaBlendOption_MAX = 15,
	};

	// Enum Engine.EAnimGroupRole
	// NumValues: 0x0006
	enum class EAnimGroupRole : uint8_t
	{
		CanBeLeader = 0,
		AlwaysFollower = 1,
		AlwaysLeader = 2,
		TransitionLeader = 3,
		TransitionFollower = 4,
		EAnimGroupRole_MAX = 5,
	};

	// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
	// NumValues: 0x0003
	enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
	{
		LinkedLayers = 0,
		LinkedAnimGraph = 1,
		EPreviewAnimationBlueprintApplicationMethod_MAX = 2,
	};

	// Enum Engine.AnimationKeyFormat
	// NumValues: 0x0004
	enum class EAnimationKeyFormat : uint8_t
	{
		AKF_ConstantKeyLerp = 0,
		AKF_VariableKeyLerp = 1,
		AKF_PerTrackCompression = 2,
		AKF_MAX = 3,
	};

	// Enum Engine.ERawCurveTrackTypes
	// NumValues: 0x0004
	enum class ERawCurveTrackTypes : uint8_t
	{
		RCT_Float = 0,
		RCT_Vector = 1,
		RCT_Transform = 2,
		RCT_MAX = 3,
	};

	// Enum Engine.EAnimAssetCurveFlags
	// NumValues: 0x0009
	enum class EAnimAssetCurveFlags : uint8_t
	{
		AACF_NONE = 0,
		AACF_DriveMorphTarget_DEPRECATED = 1,
		AACF_DriveAttribute_DEPRECATED = 2,
		AACF_Editable = 4,
		AACF_DriveMaterial_DEPRECATED = 8,
		AACF_Metadata = 16,
		AACF_DriveTrack = 32,
		AACF_Disabled = 64,
		AACF_MAX = 65,
	};

	// Enum Engine.AnimationCompressionFormat
	// NumValues: 0x0008
	enum class EAnimationCompressionFormat : uint8_t
	{
		ACF_None = 0,
		ACF_Float96NoW = 1,
		ACF_Fixed48NoW = 2,
		ACF_IntervalFixed32NoW = 3,
		ACF_Fixed32NoW = 4,
		ACF_Float32NoW = 5,
		ACF_Identity = 6,
		ACF_MAX = 7,
	};

	// Enum Engine.EAdditiveBasePoseType
	// NumValues: 0x0005
	enum class EAdditiveBasePoseType : uint8_t
	{
		ABPT_None = 0,
		ABPT_RefPose = 1,
		ABPT_AnimScaled = 2,
		ABPT_AnimFrame = 3,
		ABPT_MAX = 4,
	};

	// Enum Engine.ERootMotionMode
	// NumValues: 0x0005
	enum class ERootMotionMode : uint8_t
	{
		NoRootMotionExtraction = 0,
		IgnoreRootMotion = 1,
		RootMotionFromEverything = 2,
		RootMotionFromMontagesOnly = 3,
		ERootMotionMode_MAX = 4,
	};

	// Enum Engine.ERootMotionRootLock
	// NumValues: 0x0004
	enum class ERootMotionRootLock : uint8_t
	{
		RefPose = 0,
		AnimFirstFrame = 1,
		Zero = 2,
		ERootMotionRootLock_MAX = 3,
	};

	// Enum Engine.EMontagePlayReturnType
	// NumValues: 0x0003
	enum class EMontagePlayReturnType : uint8_t
	{
		MontageLength = 0,
		Duration = 1,
		EMontagePlayReturnType_MAX = 2,
	};

	// Enum Engine.EDrawDebugItemType
	// NumValues: 0x0006
	enum class EDrawDebugItemType : uint8_t
	{
		DirectionalArrow = 0,
		Sphere = 1,
		Line = 2,
		OnScreenMessage = 3,
		CoordinateSystem = 4,
		EDrawDebugItemType_MAX = 5,
	};

	// Enum Engine.EMontageSubStepResult
	// NumValues: 0x0005
	enum class EMontageSubStepResult : uint8_t
	{
		Moved = 0,
		NotMoved = 1,
		InvalidSection = 2,
		InvalidMontage = 3,
		EMontageSubStepResult_MAX = 4,
	};

	// Enum Engine.EAnimNotifyEventType
	// NumValues: 0x0003
	enum class EAnimNotifyEventType : uint8_t
	{
		Begin = 0,
		End = 1,
		EAnimNotifyEventType_MAX = 2,
	};

	// Enum Engine.EInertializationSpace
	// NumValues: 0x0004
	enum class EInertializationSpace : uint8_t
	{
		Default = 0,
		WorldSpace = 1,
		WorldRotation = 2,
		EInertializationSpace_MAX = 3,
	};

	// Enum Engine.EInertializationBoneState
	// NumValues: 0x0004
	enum class EInertializationBoneState : uint8_t
	{
		Invalid = 0,
		Valid = 1,
		Excluded = 2,
		EInertializationBoneState_MAX = 3,
	};

	// Enum Engine.EInertializationState
	// NumValues: 0x0004
	enum class EInertializationState : uint8_t
	{
		Inactive = 0,
		Pending = 1,
		Active = 2,
		EInertializationState_MAX = 3,
	};

	// Enum Engine.EEvaluatorMode
	// NumValues: 0x0004
	enum class EEvaluatorMode : uint8_t
	{
		EM_Standard = 0,
		EM_Freeze = 1,
		EM_DelayedFreeze = 2,
		EM_MAX = 3,
	};

	// Enum Engine.EEvaluatorDataSource
	// NumValues: 0x0003
	enum class EEvaluatorDataSource : uint8_t
	{
		EDS_SourcePose = 0,
		EDS_DestinationPose = 1,
		EDS_MAX = 2,
	};

	// Enum Engine.ECopyType
	// NumValues: 0x0005
	enum class ECopyType : uint8_t
	{
		MemCopy = 0,
		BoolProperty = 1,
		StructProperty = 2,
		ObjectProperty = 3,
		ECopyType_MAX = 4,
	};

	// Enum Engine.EPostCopyOperation
	// NumValues: 0x0003
	enum class EPostCopyOperation : uint8_t
	{
		None = 0,
		LogicalNegateBool = 1,
		EPostCopyOperation_MAX = 2,
	};

	// Enum Engine.EPinHidingMode
	// NumValues: 0x0005
	enum class EPinHidingMode : uint8_t
	{
		NeverAsPin = 0,
		PinHiddenByDefault = 1,
		PinShownByDefault = 2,
		AlwaysAsPin = 3,
		EPinHidingMode_MAX = 4,
	};

	// Enum Engine.AnimPhysCollisionType
	// NumValues: 0x0005
	enum class EAnimPhysCollisionType : uint8_t
	{
		CoM = 0,
		CustomSphere = 1,
		InnerSphere = 2,
		OuterSphere = 3,
		AnimPhysCollisionType_MAX = 4,
	};

	// Enum Engine.AnimPhysTwistAxis
	// NumValues: 0x0004
	enum class EAnimPhysTwistAxis : uint8_t
	{
		AxisX = 0,
		AxisY = 1,
		AxisZ = 2,
		AnimPhysTwistAxis_MAX = 3,
	};

	// Enum Engine.ETypeAdvanceAnim
	// NumValues: 0x0004
	enum class ETypeAdvanceAnim : uint8_t
	{
		ETAA_Default = 0,
		ETAA_Finished = 1,
		ETAA_Looped = 2,
		ETAA_MAX = 3,
	};

	// Enum Engine.ETransitionLogicType
	// NumValues: 0x0004
	enum class ETransitionLogicType : uint8_t
	{
		TLT_StandardBlend = 0,
		TLT_Inertialization = 1,
		TLT_Custom = 2,
		TLT_MAX = 3,
	};

	// Enum Engine.ETransitionBlendMode
	// NumValues: 0x0003
	enum class ETransitionBlendMode : uint8_t
	{
		TBM_Linear = 0,
		TBM_Cubic = 1,
		TBM_MAX = 2,
	};

	// Enum Engine.EComponentType
	// NumValues: 0x000C
	enum class EComponentType : uint8_t
	{
		None = 0,
		TranslationX = 1,
		TranslationY = 2,
		TranslationZ = 3,
		RotationX = 4,
		RotationY = 5,
		RotationZ = 6,
		Scale = 7,
		ScaleX = 8,
		ScaleY = 9,
		ScaleZ = 10,
		EComponentType_MAX = 11,
	};

	// Enum Engine.EAxisOption
	// NumValues: 0x0008
	enum class EAxisOption : uint8_t
	{
		X = 0,
		Y = 1,
		Z = 2,
		X_Neg = 3,
		Y_Neg = 4,
		Z_Neg = 5,
		Custom = 6,
		EAxisOption_MAX = 7,
	};

	// Enum Engine.EAnimInterpolationType
	// NumValues: 0x0003
	enum class EAnimInterpolationType : uint8_t
	{
		Linear = 0,
		Step = 1,
		EAnimInterpolationType_MAX = 2,
	};

	// Enum Engine.ECurveBlendOption
	// NumValues: 0x0004
	enum class ECurveBlendOption : uint8_t
	{
		MaxWeight = 0,
		NormalizeByWeight = 1,
		BlendByWeight = 2,
		ECurveBlendOption_MAX = 3,
	};

	// Enum Engine.EAdditiveAnimationType
	// NumValues: 0x0004
	enum class EAdditiveAnimationType : uint8_t
	{
		AAT_None = 0,
		AAT_LocalSpaceBase = 1,
		AAT_RotationOffsetMeshSpace = 2,
		AAT_MAX = 3,
	};

	// Enum Engine.EBoneRotationSource
	// NumValues: 0x0004
	enum class EBoneRotationSource : uint8_t
	{
		BRS_KeepComponentSpaceRotation = 0,
		BRS_KeepLocalSpaceRotation = 1,
		BRS_CopyFromTarget = 2,
		BRS_MAX = 3,
	};

	// Enum Engine.EBoneControlSpace
	// NumValues: 0x0005
	enum class EBoneControlSpace : uint8_t
	{
		BCS_WorldSpace = 0,
		BCS_ComponentSpace = 1,
		BCS_ParentBoneSpace = 2,
		BCS_BoneSpace = 3,
		BCS_MAX = 4,
	};

	// Enum Engine.EBoneAxis
	// NumValues: 0x0004
	enum class EBoneAxis : uint8_t
	{
		BA_X = 0,
		BA_Y = 1,
		BA_Z = 2,
		BA_MAX = 3,
	};

	// Enum Engine.EPrimaryAssetPakRule
	// NumValues: 0x0005
	enum class EPrimaryAssetPakRule : uint8_t
	{
		Default = 0,
		Necessary = 1,
		Auto = 2,
		Options = 3,
		EPrimaryAssetPakRule_MAX = 4,
	};

	// Enum Engine.EPrimaryAssetCookRule
	// NumValues: 0x0006
	enum class EPrimaryAssetCookRule : uint8_t
	{
		Unknown = 0,
		NeverCook = 1,
		DevelopmentCook = 2,
		DevelopmentAlwaysCook = 3,
		AlwaysCook = 4,
		EPrimaryAssetCookRule_MAX = 5,
	};

	// Enum Engine.EAttenuationShape
	// NumValues: 0x0005
	enum class EAttenuationShape : uint8_t
	{
		Sphere = 0,
		Capsule = 1,
		Box = 2,
		Cone = 3,
		EAttenuationShape_MAX = 4,
	};

	// Enum Engine.EAttenuationDistanceModel
	// NumValues: 0x0007
	enum class EAttenuationDistanceModel : uint8_t
	{
		Linear = 0,
		Logarithmic = 1,
		Inverse = 2,
		LogReverse = 3,
		NaturalSound = 4,
		Custom = 5,
		EAttenuationDistanceModel_MAX = 6,
	};

	// Enum Engine.EAudioFaderCurve
	// NumValues: 0x0006
	enum class EAudioFaderCurve : uint8_t
	{
		Linear = 0,
		Logarithmic = 1,
		SCurve = 2,
		Sin = 3,
		Count = 4,
		EAudioFaderCurve_MAX = 5,
	};

	// Enum Engine.EAudioComponentPlayState
	// NumValues: 0x0007
	enum class EAudioComponentPlayState : uint8_t
	{
		Playing = 0,
		Stopped = 1,
		Paused = 2,
		FadingIn = 3,
		FadingOut = 4,
		Count = 5,
		EAudioComponentPlayState_MAX = 6,
	};

	// Enum Engine.EMonoChannelUpmixMethod
	// NumValues: 0x0004
	enum class EMonoChannelUpmixMethod : uint8_t
	{
		Linear = 0,
		EqualPower = 1,
		FullVolume = 2,
		EMonoChannelUpmixMethod_MAX = 3,
	};

	// Enum Engine.EPanningMethod
	// NumValues: 0x0003
	enum class EPanningMethod : uint8_t
	{
		Linear = 0,
		EqualPower = 1,
		EPanningMethod_MAX = 2,
	};

	// Enum Engine.EVoiceSampleRate
	// NumValues: 0x0003
	enum class EVoiceSampleRate : uint32_t
	{
		Low16000Hz = 16000,
		Normal24000Hz = 24000,
		EVoiceSampleRate_MAX = 24001,
	};

	// Enum Engine.ReverbPreset
	// NumValues: 0x0018
	enum class EReverbPreset : uint8_t
	{
		REVERB_Default = 0,
		REVERB_Bathroom = 1,
		REVERB_StoneRoom = 2,
		REVERB_Auditorium = 3,
		REVERB_ConcertHall = 4,
		REVERB_Cave = 5,
		REVERB_Hallway = 6,
		REVERB_StoneCorridor = 7,
		REVERB_Alley = 8,
		REVERB_Forest = 9,
		REVERB_City = 10,
		REVERB_Mountains = 11,
		REVERB_Quarry = 12,
		REVERB_Plain = 13,
		REVERB_ParkingLot = 14,
		REVERB_SewerPipe = 15,
		REVERB_Underwater = 16,
		REVERB_SmallRoom = 17,
		REVERB_MediumRoom = 18,
		REVERB_LargeRoom = 19,
		REVERB_MediumHall = 20,
		REVERB_LargeHall = 21,
		REVERB_Plate = 22,
		REVERB_MAX = 23,
	};

	// Enum Engine.EBlendableLocation
	// NumValues: 0x0006
	enum class EBlendableLocation : uint8_t
	{
		BL_AfterTonemapping = 0,
		BL_BeforeTonemapping = 1,
		BL_BeforeTranslucency = 2,
		BL_ReplacingTonemapper = 3,
		BL_SSRInput = 4,
		BL_MAX = 5,
	};

	// Enum Engine.ENotifyTriggerMode
	// NumValues: 0x0004
	enum class ENotifyTriggerMode : uint8_t
	{
		AllAnimations = 0,
		HighestWeightedAnimation = 1,
		None = 2,
		ENotifyTriggerMode_MAX = 3,
	};

	// Enum Engine.EBlendSpaceAxis
	// NumValues: 0x0004
	enum class EBlendSpaceAxis : uint8_t
	{
		BSA_None = 0,
		BSA_X = 1,
		BSA_Y = 2,
		BSA_Max = 3,
	};

	// Enum Engine.EBlueprintNativizationFlag
	// NumValues: 0x0004
	enum class EBlueprintNativizationFlag : uint8_t
	{
		Disabled = 0,
		Dependency = 1,
		ExplicitlyEnabled = 2,
		EBlueprintNativizationFlag_MAX = 3,
	};

	// Enum Engine.EBlueprintCompileMode
	// NumValues: 0x0004
	enum class EBlueprintCompileMode : uint8_t
	{
		Default = 0,
		Development = 1,
		FinalRelease = 2,
		EBlueprintCompileMode_MAX = 3,
	};

	// Enum Engine.EBlueprintType
	// NumValues: 0x0007
	enum class EBlueprintType : uint8_t
	{
		BPTYPE_Normal = 0,
		BPTYPE_Const = 1,
		BPTYPE_MacroLibrary = 2,
		BPTYPE_Interface = 3,
		BPTYPE_LevelScript = 4,
		BPTYPE_FunctionLibrary = 5,
		BPTYPE_MAX = 6,
	};

	// Enum Engine.EBlueprintStatus
	// NumValues: 0x0007
	enum class EBlueprintStatus : uint8_t
	{
		BS_Unknown = 0,
		BS_Dirty = 1,
		BS_Error = 2,
		BS_UpToDate = 3,
		BS_BeingCreated = 4,
		BS_UpToDateWithWarnings = 5,
		BS_MAX = 6,
	};

	// Enum Engine.EDOFMode
	// NumValues: 0x0008
	enum class EDOFMode : uint8_t
	{
		Default = 0,
		SixDOF = 1,
		YZPlane = 2,
		XZPlane = 3,
		XYPlane = 4,
		CustomPlane = 5,
		None = 6,
		EDOFMode_MAX = 7,
	};

	// Enum Engine.EBodyCollisionResponse
	// NumValues: 0x0003
	enum class EBodyCollisionResponse : uint8_t
	{
		BodyCollision_Enabled = 0,
		BodyCollision_Disabled = 1,
		BodyCollision_MAX = 2,
	};

	// Enum Engine.EPhysicsType
	// NumValues: 0x0004
	enum class EPhysicsType : uint8_t
	{
		PhysType_Default = 0,
		PhysType_Kinematic = 1,
		PhysType_Simulated = 2,
		PhysType_MAX = 3,
	};

	// Enum Engine.ECollisionTraceFlag
	// NumValues: 0x0005
	enum class ECollisionTraceFlag : uint8_t
	{
		CTF_UseDefault = 0,
		CTF_UseSimpleAndComplex = 1,
		CTF_UseSimpleAsComplex = 2,
		CTF_UseComplexAsSimple = 3,
		CTF_MAX = 4,
	};

	// Enum Engine.EBrushType
	// NumValues: 0x0004
	enum class EBrushType : uint8_t
	{
		Brush_Default = 0,
		Brush_Add = 1,
		Brush_Subtract = 2,
		Brush_MAX = 3,
	};

	// Enum Engine.ECsgOper
	// NumValues: 0x0007
	enum class ECsgOper : uint8_t
	{
		CSG_Active = 0,
		CSG_Add = 1,
		CSG_Subtract = 2,
		CSG_Intersect = 3,
		CSG_Deintersect = 4,
		CSG_None = 5,
		CSG_MAX = 6,
	};

	// Enum Engine.EInitialOscillatorOffset
	// NumValues: 0x0003
	enum class EInitialOscillatorOffset : uint8_t
	{
		EOO_OffsetRandom = 0,
		EOO_OffsetZero = 1,
		EOO_MAX = 2,
	};

	// Enum Engine.EOscillatorWaveform
	// NumValues: 0x0003
	enum class EOscillatorWaveform : uint8_t
	{
		SineWave = 0,
		PerlinNoise = 1,
		EOscillatorWaveform_MAX = 2,
	};

	// Enum Engine.ECameraAlphaBlendMode
	// NumValues: 0x0003
	enum class ECameraAlphaBlendMode : uint8_t
	{
		CABM_Linear = 0,
		CABM_Cubic = 1,
		CABM_MAX = 2,
	};

	// Enum Engine.ECameraAnimPlaySpace
	// NumValues: 0x0004
	enum class ECameraAnimPlaySpace : uint8_t
	{
		CameraLocal = 0,
		World = 1,
		UserDefined = 2,
		ECameraAnimPlaySpace_MAX = 3,
	};

	// Enum Engine.ECameraProjectionMode
	// NumValues: 0x0003
	enum class ECameraProjectionMode : uint8_t
	{
		Perspective = 0,
		Orthographic = 1,
		ECameraProjectionMode_MAX = 2,
	};

	// Enum Engine.ECloudStorageDelegate
	// NumValues: 0x0008
	enum class ECloudStorageDelegate : uint8_t
	{
		CSD_KeyValueReadComplete = 0,
		CSD_KeyValueWriteComplete = 1,
		CSD_ValueChanged = 2,
		CSD_DocumentQueryComplete = 3,
		CSD_DocumentReadComplete = 4,
		CSD_DocumentWriteComplete = 5,
		CSD_DocumentConflictDetected = 6,
		CSD_MAX = 7,
	};

	// Enum Engine.EAngularDriveMode
	// NumValues: 0x0003
	enum class EAngularDriveMode : uint8_t
	{
		SLERP = 0,
		TwistAndSwing = 1,
		EAngularDriveMode_MAX = 2,
	};

	// Enum Engine.ELinearConstraintMotion
	// NumValues: 0x0004
	enum class ELinearConstraintMotion : uint8_t
	{
		LCM_Free = 0,
		LCM_Limited = 1,
		LCM_Locked = 2,
		LCM_MAX = 3,
	};

	// Enum Engine.ECurveTableMode
	// NumValues: 0x0004
	enum class ECurveTableMode : uint8_t
	{
		Empty = 0,
		SimpleCurves = 1,
		RichCurves = 2,
		ECurveTableMode_MAX = 3,
	};

	// Enum Engine.EEvaluateCurveTableResult
	// NumValues: 0x0003
	enum class EEvaluateCurveTableResult : uint8_t
	{
		RowFound = 0,
		RowNotFound = 1,
		EEvaluateCurveTableResult_MAX = 2,
	};

	// Enum Engine.EGrammaticalNumber
	// NumValues: 0x0003
	enum class EGrammaticalNumber : uint8_t
	{
		Singular = 0,
		Plural = 1,
		EGrammaticalNumber_MAX = 2,
	};

	// Enum Engine.EGrammaticalGender
	// NumValues: 0x0005
	enum class EGrammaticalGender : uint8_t
	{
		Neuter = 0,
		Masculine = 1,
		Feminine = 2,
		Mixed = 3,
		EGrammaticalGender_MAX = 4,
	};

	// Enum Engine.DistributionParamMode
	// NumValues: 0x0004
	enum class EDistributionParamMode : uint8_t
	{
		DPM_Normal = 0,
		DPM_Abs = 1,
		DPM_Direct = 2,
		DPM_MAX = 3,
	};

	// Enum Engine.EDistributionVectorMirrorFlags
	// NumValues: 0x0004
	enum class EDistributionVectorMirrorFlags : uint8_t
	{
		EDVMF_Same = 0,
		EDVMF_Different = 1,
		EDVMF_Mirror = 2,
		EDVMF_MAX = 3,
	};

	// Enum Engine.EDistributionVectorLockFlags
	// NumValues: 0x0006
	enum class EDistributionVectorLockFlags : uint8_t
	{
		EDVLF_None = 0,
		EDVLF_XY = 1,
		EDVLF_XZ = 2,
		EDVLF_YZ = 3,
		EDVLF_XYZ = 4,
		EDVLF_MAX = 5,
	};

	// Enum Engine.ENodeEnabledState
	// NumValues: 0x0004
	enum class ENodeEnabledState : uint8_t
	{
		Enabled = 0,
		Disabled = 1,
		DevelopmentOnly = 2,
		ENodeEnabledState_MAX = 3,
	};

	// Enum Engine.ENodeAdvancedPins
	// NumValues: 0x0004
	enum class ENodeAdvancedPins : uint8_t
	{
		NoPins = 0,
		Shown = 1,
		Hidden = 2,
		ENodeAdvancedPins_MAX = 3,
	};

	// Enum Engine.ENodeTitleType
	// NumValues: 0x0006
	enum class ENodeTitleType : uint8_t
	{
		FullTitle = 0,
		ListView = 1,
		EditableTitle = 2,
		MenuTitle = 3,
		MAX_TitleTypes = 4,
		ENodeTitleType_MAX = 5,
	};

	// Enum Engine.EPinContainerType
	// NumValues: 0x0005
	enum class EPinContainerType : uint8_t
	{
		None = 0,
		Array = 1,
		Set = 2,
		Map = 3,
		EPinContainerType_MAX = 4,
	};

	// Enum Engine.EEdGraphPinDirection
	// NumValues: 0x0003
	enum class EEdGraphPinDirection : uint8_t
	{
		EGPD_Input = 0,
		EGPD_Output = 1,
		EGPD_MAX = 2,
	};

	// Enum Engine.EBlueprintPinStyleType
	// NumValues: 0x0003
	enum class EBlueprintPinStyleType : uint8_t
	{
		BPST_Original = 0,
		BPST_VariantA = 1,
		BPST_MAX = 2,
	};

	// Enum Engine.ECanCreateConnectionResponse
	// NumValues: 0x0007
	enum class ECanCreateConnectionResponse : uint8_t
	{
		CONNECT_RESPONSE_MAKE = 0,
		CONNECT_RESPONSE_DISALLOW = 1,
		CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
		CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
		CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
		CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
		CONNECT_RESPONSE_MAX = 6,
	};

	// Enum Engine.EGraphType
	// NumValues: 0x0006
	enum class EGraphType : uint8_t
	{
		GT_Function = 0,
		GT_Ubergraph = 1,
		GT_Macro = 2,
		GT_Animation = 3,
		GT_StateMachine = 4,
		GT_MAX = 5,
	};

	// Enum Engine.ELowMemoryWarningLevel
	// NumValues: 0x0006
	enum class ELowMemoryWarningLevel : uint8_t
	{
		None = 0,
		Light = 1,
		Moderate = 2,
		Serious = 3,
		Critical = 4,
		ELowMemoryWarningLevel_MAX = 5,
	};

	// Enum Engine.ETransitionType
	// NumValues: 0x0008
	enum class ETransitionType : uint8_t
	{
		None = 0,
		Paused = 1,
		Loading = 2,
		Saving = 3,
		Connecting = 4,
		Precaching = 5,
		WaitingToConnect = 6,
		MAX = 7,
	};

	// Enum Engine.EFullyLoadPackageType
	// NumValues: 0x0006
	enum class EFullyLoadPackageType : uint8_t
	{
		FULLYLOAD_Map = 0,
		FULLYLOAD_Game_PreLoadClass = 1,
		FULLYLOAD_Game_PostLoadClass = 2,
		FULLYLOAD_Always = 3,
		FULLYLOAD_Mutator = 4,
		FULLYLOAD_MAX = 5,
	};

	// Enum Engine.EViewModeIndex
	// NumValues: 0x0022
	enum class EViewModeIndex : uint8_t
	{
		VMI_BrushWireframe = 0,
		VMI_Wireframe = 1,
		VMI_Unlit = 2,
		VMI_Lit = 3,
		VMI_Lit_DetailLighting = 4,
		VMI_LightingOnly = 5,
		VMI_LightComplexity = 6,
		VMI_ShaderComplexity = 8,
		VMI_LightmapDensity = 9,
		VMI_LitLightmapDensity = 10,
		VMI_ReflectionOverride = 11,
		VMI_VisualizeBuffer = 12,
		VMI_StationaryLightOverlap = 14,
		VMI_CollisionPawn = 15,
		VMI_CollisionVisibility = 16,
		VMI_LODColoration = 18,
		VMI_QuadOverdraw = 19,
		VMI_PrimitiveDistanceAccuracy = 20,
		VMI_MeshUVDensityAccuracy = 21,
		VMI_ShaderComplexityWithQuadOverdraw = 22,
		VMI_HLODColoration = 23,
		VMI_GroupLODColoration = 24,
		VMI_MaterialTextureScaleAccuracy = 25,
		VMI_RequiredTextureResolution = 26,
		VMI_PathTracing = 27,
		VMI_RayTracingDebug = 28,
		VMI_PRT = 29,
		VMI_PRT_Normal = 30,
		VMI_PRT_PbCheck = 31,
		VMI_LIGHT_Check = 32,
		VMI_MeshTextureDensity = 33,
		VMI_RayTracingCausticsDebug = 34,
		VMI_Max = 35,
		VMI_Unknown = 255,
	};

	// Enum Engine.ENetMode
	// NumValues: 0x0005
	enum class ENetMode : uint8_t
	{
		NM_Standalone = 0,
		NM_DedicatedServer = 1,
		NM_ListenServer = 2,
		NM_Client = 3,
		NM_MAX = 4,
	};

	// Enum Engine.EDemoPlayFailure
	// NumValues: 0x000A
	enum class EDemoPlayFailure : uint8_t
	{
		Generic = 0,
		DemoNotFound = 1,
		Corrupt = 2,
		InvalidVersion = 3,
		InitBase = 4,
		GameSpecificHeader = 5,
		ReplayStreamerInternal = 6,
		LoadMap = 7,
		Serialization = 8,
		EDemoPlayFailure_MAX = 9,
	};

	// Enum Engine.ETravelType
	// NumValues: 0x0004
	enum class ETravelType : uint8_t
	{
		TRAVEL_Absolute = 0,
		TRAVEL_Partial = 1,
		TRAVEL_Relative = 2,
		TRAVEL_MAX = 3,
	};

	// Enum Engine.ENetworkLagState
	// NumValues: 0x0003
	enum class ENetworkLagState : uint8_t
	{
		NotLagging = 0,
		Lagging = 1,
		ENetworkLagState_MAX = 2,
	};

	// Enum Engine.ETickListType
	// NumValues: 0x0008
	enum class ETickListType : uint8_t
	{
		AnyTickList = 0,
		EnabledTickList = 1,
		CoolingDownTickList = 2,
		DisabledTickList = 3,
		RescheduleTickList = 4,
		NewlySpawnedTickList = 5,
		MaxTypeCount = 6,
		ETickListType_MAX = 7,
	};

	// Enum Engine.EMouseCaptureMode
	// NumValues: 0x0006
	enum class EMouseCaptureMode : uint8_t
	{
		NoCapture = 0,
		CapturePermanently = 1,
		CapturePermanently_IncludingInitialMouseDown = 2,
		CaptureDuringMouseDown = 3,
		CaptureDuringRightMouseDown = 4,
		EMouseCaptureMode_MAX = 5,
	};

	// Enum Engine.ECustomTimeStepSynchronizationState
	// NumValues: 0x0005
	enum class ECustomTimeStepSynchronizationState : uint8_t
	{
		Closed = 0,
		Error = 1,
		Synchronized = 2,
		Synchronizing = 3,
		ECustomTimeStepSynchronizationState_MAX = 4,
	};

	// Enum Engine.EPrebakeShadowCascadeIndex
	// NumValues: 0x0006
	enum class EPrebakeShadowCascadeIndex : uint8_t
	{
		Cascade_None = 0,
		Cascade_0 = 1,
		Cascade_1 = 2,
		Cascade_2 = 3,
		Cascade_3 = 4,
		Cascade_MAX = 5,
	};

	// Enum Engine.ELODShadowBiasType
	// NumValues: 0x000A
	enum class ELODShadowBiasType : uint8_t
	{
		LOD_None = 0,
		LOD_0 = 1,
		LOD_1 = 2,
		LOD_2 = 3,
		LOD_3 = 4,
		LOD_4 = 5,
		LOD_5 = 6,
		LOD_6 = 7,
		LOD_7 = 8,
		LOD_MAX = 9,
	};

	// Enum Engine.EMaterialStencilOpType
	// NumValues: 0x0005
	enum class EMaterialStencilOpType : uint8_t
	{
		MSOP_None = 0,
		MSOP_Equal = 1,
		MSOP_NoEqual = 2,
		MSOP_Always = 4,
		MSOP_MAX = 5,
	};

	// Enum Engine.ELightMapAllocationPolicy
	// NumValues: 0x0003
	enum class ELightMapAllocationPolicy : uint8_t
	{
		LMAP_FixTexelLengthRatio = 0,
		LMAP_FixLightMapCount = 1,
		LMAP_MAX = 2,
	};

	// Enum Engine.ELightMapGroupingPolicy
	// NumValues: 0x0004
	enum class ELightMapGroupingPolicy : uint8_t
	{
		LMGP_DefaultUE = 0,
		LMGP_Distance = 1,
		LMGP_PreDefinedLightMapGroup = 2,
		LMGP_MAX = 3,
	};

	// Enum Engine.EWorldScale
	// NumValues: 0x0004
	enum class EWorldScale : uint8_t
	{
		MiniWorld = 0,
		MidWorld = 1,
		BigWorld = 2,
		EWorldScale_MAX = 3,
	};

	// Enum Engine.EMeshBufferAccess
	// NumValues: 0x0003
	enum class EMeshBufferAccess : uint8_t
	{
		Default = 0,
		ForceCPUAndGPU = 1,
		EMeshBufferAccess_MAX = 2,
	};

	// Enum Engine.EConstraintFrame
	// NumValues: 0x0003
	enum class EConstraintFrame : uint8_t
	{
		Frame1 = 0,
		Frame2 = 1,
		EConstraintFrame_MAX = 2,
	};

	// Enum Engine.EAngularConstraintMotion
	// NumValues: 0x0004
	enum class EAngularConstraintMotion : uint8_t
	{
		ACM_Free = 0,
		ACM_Limited = 1,
		ACM_Locked = 2,
		ACM_MAX = 3,
	};

	// Enum Engine.EComponentSocketType
	// NumValues: 0x0004
	enum class EComponentSocketType : uint8_t
	{
		Invalid = 0,
		Bone = 1,
		Socket = 2,
		EComponentSocketType_MAX = 3,
	};

	// Enum Engine.EPhysicalSurface
	// NumValues: 0x0041
	enum class EPhysicalSurface : uint8_t
	{
		SurfaceType_Default = 0,
		SurfaceType1 = 1,
		SurfaceType2 = 2,
		SurfaceType3 = 3,
		SurfaceType4 = 4,
		SurfaceType5 = 5,
		SurfaceType6 = 6,
		SurfaceType7 = 7,
		SurfaceType8 = 8,
		SurfaceType9 = 9,
		SurfaceType10 = 10,
		SurfaceType11 = 11,
		SurfaceType12 = 12,
		SurfaceType13 = 13,
		SurfaceType14 = 14,
		SurfaceType15 = 15,
		SurfaceType16 = 16,
		SurfaceType17 = 17,
		SurfaceType18 = 18,
		SurfaceType19 = 19,
		SurfaceType20 = 20,
		SurfaceType21 = 21,
		SurfaceType22 = 22,
		SurfaceType23 = 23,
		SurfaceType24 = 24,
		SurfaceType25 = 25,
		SurfaceType26 = 26,
		SurfaceType27 = 27,
		SurfaceType28 = 28,
		SurfaceType29 = 29,
		SurfaceType30 = 30,
		SurfaceType31 = 31,
		SurfaceType32 = 32,
		SurfaceType33 = 33,
		SurfaceType34 = 34,
		SurfaceType35 = 35,
		SurfaceType36 = 36,
		SurfaceType37 = 37,
		SurfaceType38 = 38,
		SurfaceType39 = 39,
		SurfaceType40 = 40,
		SurfaceType41 = 41,
		SurfaceType42 = 42,
		SurfaceType43 = 43,
		SurfaceType44 = 44,
		SurfaceType45 = 45,
		SurfaceType46 = 46,
		SurfaceType47 = 47,
		SurfaceType48 = 48,
		SurfaceType49 = 49,
		SurfaceType50 = 50,
		SurfaceType51 = 51,
		SurfaceType52 = 52,
		SurfaceType53 = 53,
		SurfaceType54 = 54,
		SurfaceType55 = 55,
		SurfaceType56 = 56,
		SurfaceType57 = 57,
		SurfaceType58 = 58,
		SurfaceType59 = 59,
		SurfaceType60 = 60,
		SurfaceType61 = 61,
		SurfaceType62 = 62,
		SurfaceType_Max = 63,
		EPhysicalSurface_MAX = 64,
	};

	// Enum Engine.EWalkableSlopeBehavior
	// NumValues: 0x0005
	enum class EWalkableSlopeBehavior : uint8_t
	{
		WalkableSlope_Default = 0,
		WalkableSlope_Increase = 1,
		WalkableSlope_Decrease = 2,
		WalkableSlope_Unwalkable = 3,
		WalkableSlope_Max = 4,
	};

	// Enum Engine.EUpdateRateShiftBucket
	// NumValues: 0x0008
	enum class EUpdateRateShiftBucket : uint8_t
	{
		ShiftBucket0 = 0,
		ShiftBucket1 = 1,
		ShiftBucket2 = 2,
		ShiftBucket3 = 3,
		ShiftBucket4 = 4,
		ShiftBucket5 = 5,
		ShiftBucketMax = 6,
		EUpdateRateShiftBucket_MAX = 7,
	};

	// Enum Engine.EShadowMapFlags
	// NumValues: 0x0003
	enum class EShadowMapFlags : uint8_t
	{
		SMF_None = 0,
		SMF_Streamed = 1,
		SMF_MAX = 2,
	};

	// Enum Engine.ELightMapPaddingType
	// NumValues: 0x0004
	enum class ELightMapPaddingType : uint8_t
	{
		LMPT_NormalPadding = 0,
		LMPT_PrePadding = 1,
		LMPT_NoPadding = 2,
		LMPT_MAX = 3,
	};

	// Enum Engine.ECollisionEnabled
	// NumValues: 0x0005
	enum class ECollisionEnabled : uint8_t
	{
		NoCollision = 0,
		QueryOnly = 1,
		PhysicsOnly = 2,
		QueryAndPhysics = 3,
		ECollisionEnabled_MAX = 4,
	};

	// Enum Engine.ETimelineSigType
	// NumValues: 0x0006
	enum class ETimelineSigType : uint8_t
	{
		ETS_EventSignature = 0,
		ETS_FloatSignature = 1,
		ETS_VectorSignature = 2,
		ETS_LinearColorSignature = 3,
		ETS_InvalidSignature = 4,
		ETS_MAX = 5,
	};

	// Enum Engine.ESleepFamily
	// NumValues: 0x0004
	enum class ESleepFamily : uint8_t
	{
		Normal = 0,
		Sensitive = 1,
		Custom = 2,
		ESleepFamily_MAX = 3,
	};

	// Enum Engine.ERadialImpulseFalloff
	// NumValues: 0x0003
	enum class ERadialImpulseFalloff : uint8_t
	{
		RIF_Constant = 0,
		RIF_Linear = 1,
		RIF_MAX = 2,
	};

	// Enum Engine.EFilterInterpolationType
	// NumValues: 0x0004
	enum class EFilterInterpolationType : uint8_t
	{
		BSIT_Average = 0,
		BSIT_Linear = 1,
		BSIT_Cubic = 2,
		BSIT_MAX = 3,
	};

	// Enum Engine.ETraceMaskFilter
	// NumValues: 0x0007
	enum class ETraceMaskFilter : uint8_t
	{
		TraceMaskFilter_0 = 0,
		TraceMaskFilter_1 = 1,
		TraceMaskFilter_2 = 2,
		TraceMaskFilter_3 = 3,
		TraceMaskFilter_4 = 4,
		TraceMaskFilter_5 = 5,
		TraceMaskFilter_MAX = 6,
	};

	// Enum Engine.EOverlapFilterOption
	// NumValues: 0x0004
	enum class EOverlapFilterOption : uint8_t
	{
		OverlapFilter_All = 0,
		OverlapFilter_DynamicOnly = 1,
		OverlapFilter_StaticOnly = 2,
		OverlapFilter_MAX = 3,
	};

	// Enum Engine.ENetworkSmoothingMode
	// NumValues: 0x0005
	enum class ENetworkSmoothingMode : uint8_t
	{
		Disabled = 0,
		Linear = 1,
		Exponential = 2,
		Replay = 3,
		ENetworkSmoothingMode_MAX = 4,
	};

	// Enum Engine.ELightingBuildMode
	// NumValues: 0x0003
	enum class ELightingBuildMode : uint8_t
	{
		LBM_Default = 0,
		LBM_BakeForHD = 1,
		LBM_MAX = 2,
	};

	// Enum Engine.ELightingBuildQuality
	// NumValues: 0x0005
	enum class ELightingBuildQuality : uint8_t
	{
		Quality_Preview = 0,
		Quality_Medium = 1,
		Quality_High = 2,
		Quality_Production = 3,
		Quality_MAX = 4,
	};

	// Enum Engine.ESimpleEFXLitQuality
	// NumValues: 0x0007
	enum class ESimpleEFXLitQuality : uint8_t
	{
		SIMPLE_EFX_LIT_QUALITY_NONE = 0,
		SIMPLE_EFX_LIT_QUALITY_LOW = 1,
		SIMPLE_EFX_LIT_QUALITY_MID = 2,
		SIMPLE_EFX_LIT_QUALITY_HIGH = 3,
		SIMPLE_EFX_LIT_QUALITY_ULTRA = 4,
		SIMPLE_EFX_LIT_QUALITY_COUNT = 5,
		SIMPLE_EFX_LIT_QUALITY_MAX = 6,
	};

	// Enum Engine.EMaterialShadingRate
	// NumValues: 0x0009
	enum class EMaterialShadingRate : uint8_t
	{
		MSR_1x1 = 0,
		MSR_2x1 = 1,
		MSR_1x2 = 2,
		MSR_2x2 = 3,
		MSR_4x2 = 4,
		MSR_2x4 = 5,
		MSR_4x4 = 6,
		MSR_Count = 7,
		MSR_MAX = 8,
	};

	// Enum Engine.EMaterialStencilCompare
	// NumValues: 0x000A
	enum class EMaterialStencilCompare : uint8_t
	{
		MSC_Less = 0,
		MSC_LessEqual = 1,
		MSC_Greater = 2,
		MSC_GreaterEqual = 3,
		MSC_Equal = 4,
		MSC_NotEqual = 5,
		MSC_Never = 6,
		MSC_Always = 7,
		MSC_Count = 8,
		MSC_MAX = 9,
	};

	// Enum Engine.EMaterialSamplerType
	// NumValues: 0x0012
	enum class EMaterialSamplerType : uint8_t
	{
		SAMPLERTYPE_Color = 0,
		SAMPLERTYPE_Grayscale = 1,
		SAMPLERTYPE_Alpha = 2,
		SAMPLERTYPE_Normal = 3,
		SAMPLERTYPE_Masks = 4,
		SAMPLERTYPE_DistanceFieldFont = 5,
		SAMPLERTYPE_LinearColor = 6,
		SAMPLERTYPE_LinearGrayscale = 7,
		SAMPLERTYPE_Data = 8,
		SAMPLERTYPE_External = 9,
		SAMPLERTYPE_VirtualColor = 10,
		SAMPLERTYPE_VirtualGrayscale = 11,
		SAMPLERTYPE_VirtualAlpha = 12,
		SAMPLERTYPE_VirtualNormal = 13,
		SAMPLERTYPE_VirtualMasks = 14,
		SAMPLERTYPE_VirtualLinearColor = 15,
		SAMPLERTYPE_VirtualLinearGrayscale = 16,
		SAMPLERTYPE_MAX = 17,
	};

	// Enum Engine.EMaterialTessellationMode
	// NumValues: 0x0004
	enum class EMaterialTessellationMode : uint8_t
	{
		MTM_NoTessellation = 0,
		MTM_FlatTessellation = 1,
		MTM_PNTriangles = 2,
		MTM_MAX = 3,
	};

	// Enum Engine.EMaterialShadingModel
	// NumValues: 0x0013
	enum class EMaterialShadingModel : uint8_t
	{
		MSM_Unlit = 0,
		MSM_DefaultLit = 1,
		MSM_Subsurface = 2,
		MSM_PreintegratedSkin = 3,
		MSM_ClearCoat = 4,
		MSM_SubsurfaceProfile = 5,
		MSM_TwoSidedFoliage = 6,
		MSM_Hair = 7,
		MSM_Mobile_Hair_Mask = 8,
		MSM_Mobile_Hair_Blend = 9,
		MSM_Cloth = 10,
		MSM_Eye = 11,
		MSM_SingleLayerWater = 12,
		MSM_SGSSS = 13,
		MSM_ThinTranslucent = 14,
		MSM_Weapon = 15,
		MSM_NUM = 16,
		MSM_FromMaterialExpression = 17,
		MSM_MAX = 18,
	};

	// Enum Engine.EParticleCollisionMode
	// NumValues: 0x0003
	enum class EParticleCollisionMode : uint8_t
	{
		SceneDepth = 0,
		DistanceField = 1,
		EParticleCollisionMode_MAX = 2,
	};

	// Enum Engine.ETrailWidthMode
	// NumValues: 0x0004
	enum class ETrailWidthMode : uint8_t
	{
		ETrailWidthMode_FromCentre = 0,
		ETrailWidthMode_FromFirst = 1,
		ETrailWidthMode_FromSecond = 2,
		ETrailWidthMode_MAX = 3,
	};

	// Enum Engine.EGBufferFormat
	// NumValues: 0x0005
	enum class EGBufferFormat : uint8_t
	{
		Force8BitsPerChannel = 0,
		Default = 1,
		HighPrecisionNormals = 3,
		Force16BitsPerChannel = 5,
		EGBufferFormat_MAX = 6,
	};

	// Enum Engine.ESceneCaptureCompositeMode
	// NumValues: 0x0004
	enum class ESceneCaptureCompositeMode : uint8_t
	{
		SCCM_Overwrite = 0,
		SCCM_Additive = 1,
		SCCM_Composite = 2,
		SCCM_MAX = 3,
	};

	// Enum Engine.ESceneCaptureSource
	// NumValues: 0x000B
	enum class ESceneCaptureSource : uint8_t
	{
		SCS_SceneColorHDR = 0,
		SCS_SceneColorHDRNoAlpha = 1,
		SCS_FinalColorLDR = 2,
		SCS_SceneColorSceneDepth = 3,
		SCS_SceneDepth = 4,
		SCS_DeviceDepth = 5,
		SCS_Normal = 6,
		SCS_BaseColor = 7,
		SCS_FinalColorHDR = 8,
		SCS_LinearColorLDR = 9,
		SCS_MAX = 10,
	};

	// Enum Engine.ETranslucentSortPolicy
	// NumValues: 0x0004
	enum class ETranslucentSortPolicy : uint8_t
	{
		SortByDistance = 0,
		SortByProjectedZ = 1,
		SortAlongAxis = 2,
		ETranslucentSortPolicy_MAX = 3,
	};

	// Enum Engine.ERefractionMode
	// NumValues: 0x0003
	enum class ERefractionMode : uint8_t
	{
		RM_IndexOfRefraction = 0,
		RM_PixelNormalOffset = 1,
		RM_MAX = 2,
	};

	// Enum Engine.ETranslucencyLightingMode
	// NumValues: 0x0007
	enum class ETranslucencyLightingMode : uint8_t
	{
		TLM_VolumetricNonDirectional = 0,
		TLM_VolumetricDirectional = 1,
		TLM_VolumetricPerVertexNonDirectional = 2,
		TLM_VolumetricPerVertexDirectional = 3,
		TLM_Surface = 4,
		TLM_SurfacePerPixelLighting = 5,
		TLM_MAX = 6,
	};

	// Enum Engine.ESamplerSourceMode
	// NumValues: 0x0004
	enum class ESamplerSourceMode : uint8_t
	{
		SSM_FromTextureAsset = 0,
		SSM_Wrap_WorldGroupSettings = 1,
		SSM_Clamp_WorldGroupSettings = 2,
		SSM_MAX = 3,
	};

	// Enum Engine.EMaterialLightingChannelMask
	// NumValues: 0x0006
	enum class EMaterialLightingChannelMask : uint8_t
	{
		MLCM_0000 = 0,
		MLCM_0001 = 1,
		MLCM_0010 = 2,
		MLCM_0100 = 4,
		MLCM_1000 = 8,
		MLCM_MAX = 9,
	};

	// Enum Engine.EMaterialWetnessMode
	// NumValues: 0x0003
	enum class EMaterialWetnessMode : uint8_t
	{
		MWM_None = 0,
		MWM_General = 1,
		MWM_MAX = 2,
	};

	// Enum Engine.EBlendMode
	// NumValues: 0x0009
	enum class EBlendMode : uint8_t
	{
		BLEND_Opaque = 0,
		BLEND_Masked = 1,
		BLEND_Translucent = 2,
		BLEND_Additive = 3,
		BLEND_Modulate = 4,
		BLEND_AlphaComposite = 5,
		BLEND_AlphaHoldout = 6,
		BLEND_AdditiveRGB = 7,
		BLEND_MAX = 8,
	};

	// Enum Engine.EOcclusionCombineMode
	// NumValues: 0x0003
	enum class EOcclusionCombineMode : uint8_t
	{
		OCM_Minimum = 0,
		OCM_Multiply = 1,
		OCM_MAX = 2,
	};

	// Enum Engine.ELightmapType
	// NumValues: 0x0004
	enum class ELightmapType : uint8_t
	{
		Default = 0,
		ForceSurface = 1,
		ForceVolumetric = 2,
		ELightmapType_MAX = 3,
	};

	// Enum Engine.EIndirectLightingCacheQuality
	// NumValues: 0x0004
	enum class EIndirectLightingCacheQuality : uint8_t
	{
		ILCQ_Off = 0,
		ILCQ_Point = 1,
		ILCQ_Volume = 2,
		ILCQ_MAX = 3,
	};

	// Enum Engine.ESceneDepthPriorityGroup
	// NumValues: 0x0003
	enum class ESceneDepthPriorityGroup : uint8_t
	{
		SDPG_World = 0,
		SDPG_Foreground = 1,
		SDPG_MAX = 2,
	};

	// Enum Engine.EFontCacheType
	// NumValues: 0x0003
	enum class EFontCacheType : uint8_t
	{
		Offline = 0,
		Runtime = 1,
		EFontCacheType_MAX = 2,
	};

	// Enum Engine.EFontImportCharacterSet
	// NumValues: 0x0004
	enum class EFontImportCharacterSet : uint8_t
	{
		FontICS_Default = 0,
		FontICS_Ansi = 1,
		FontICS_Symbol = 2,
		FontICS_MAX = 3,
	};

	// Enum Engine.EStandbyType
	// NumValues: 0x0004
	enum class EStandbyType : uint8_t
	{
		STDBY_Rx = 0,
		STDBY_Tx = 1,
		STDBY_BadPing = 2,
		STDBY_MAX = 3,
	};

	// Enum Engine.ESuggestProjVelocityTraceOption
	// NumValues: 0x0004
	enum class ESuggestProjVelocityTraceOption : uint8_t
	{
		DoNotTrace = 0,
		TraceFullPath = 1,
		OnlyTraceWhileAscending = 2,
		ESuggestProjVelocityTraceOption_MAX = 3,
	};

	// Enum Engine.EWindowMode
	// NumValues: 0x0004
	enum class EWindowMode : uint8_t
	{
		Fullscreen = 0,
		WindowedFullscreen = 1,
		Windowed = 2,
		EWindowMode_MAX = 3,
	};

	// Enum Engine.EImportanceWeight
	// NumValues: 0x0006
	enum class EImportanceWeight : uint8_t
	{
		Luminance = 0,
		Red = 1,
		Green = 2,
		Blue = 3,
		Alpha = 4,
		EImportanceWeight_MAX = 5,
	};

	// Enum Engine.EAdManagerDelegate
	// NumValues: 0x0003
	enum class EAdManagerDelegate : uint8_t
	{
		AMD_ClickedBanner = 0,
		AMD_UserClosedAd = 1,
		AMD_MAX = 2,
	};

	// Enum Engine.EControllerAnalogStick
	// NumValues: 0x0003
	enum class EControllerAnalogStick : uint8_t
	{
		CAS_LeftStick = 0,
		CAS_RightStick = 1,
		CAS_MAX = 2,
	};

	// Enum Engine.EAnimAlphaInputType
	// NumValues: 0x0004
	enum class EAnimAlphaInputType : uint8_t
	{
		Float = 0,
		Bool = 1,
		Curve = 2,
		EAnimAlphaInputType_MAX = 3,
	};

	// Enum Engine.ETrackActiveCondition
	// NumValues: 0x0004
	enum class ETrackActiveCondition : uint8_t
	{
		ETAC_Always = 0,
		ETAC_GoreEnabled = 1,
		ETAC_GoreDisabled = 2,
		ETAC_MAX = 3,
	};

	// Enum Engine.EInterpTrackMoveRotMode
	// NumValues: 0x0004
	enum class EInterpTrackMoveRotMode : uint8_t
	{
		IMR_Keyframed = 0,
		IMR_LookAtGroup = 1,
		IMR_Ignore = 2,
		IMR_MAX = 3,
	};

	// Enum Engine.EInterpMoveAxis
	// NumValues: 0x0007
	enum class EInterpMoveAxis : uint8_t
	{
		AXIS_TranslationX = 0,
		AXIS_TranslationY = 1,
		AXIS_TranslationZ = 2,
		AXIS_RotationX = 3,
		AXIS_RotationY = 4,
		AXIS_RotationZ = 5,
		AXIS_MAX = 6,
	};

	// Enum Engine.ETrackToggleAction
	// NumValues: 0x0005
	enum class ETrackToggleAction : uint8_t
	{
		ETTA_Off = 0,
		ETTA_On = 1,
		ETTA_Toggle = 2,
		ETTA_Trigger = 3,
		ETTA_MAX = 4,
	};

	// Enum Engine.EVisibilityTrackCondition
	// NumValues: 0x0004
	enum class EVisibilityTrackCondition : uint8_t
	{
		EVTC_Always = 0,
		EVTC_GoreEnabled = 1,
		EVTC_GoreDisabled = 2,
		EVTC_MAX = 3,
	};

	// Enum Engine.EVisibilityTrackAction
	// NumValues: 0x0004
	enum class EVisibilityTrackAction : uint8_t
	{
		EVTA_Hide = 0,
		EVTA_Show = 1,
		EVTA_Toggle = 2,
		EVTA_MAX = 3,
	};

	// Enum Engine.ESlateGesture
	// NumValues: 0x0007
	enum class ESlateGesture : uint8_t
	{
		None = 0,
		Scroll = 1,
		Magnify = 2,
		Swipe = 3,
		Rotate = 4,
		LongPress = 5,
		ESlateGesture_MAX = 6,
	};

	// Enum Engine.EMatrixColumns
	// NumValues: 0x0005
	enum class EMatrixColumns : uint8_t
	{
		First = 0,
		Second = 1,
		Third = 2,
		Fourth = 3,
		EMatrixColumns_MAX = 4,
	};

	// Enum Engine.ELerpInterpolationMode
	// NumValues: 0x0004
	enum class ELerpInterpolationMode : uint8_t
	{
		QuatInterp = 0,
		EulerInterp = 1,
		DualQuatInterp = 2,
		ELerpInterpolationMode_MAX = 3,
	};

	// Enum Engine.EEasingFunc
	// NumValues: 0x000F
	enum class EEasingFunc : uint8_t
	{
		Linear = 0,
		Step = 1,
		SinusoidalIn = 2,
		SinusoidalOut = 3,
		SinusoidalInOut = 4,
		EaseIn = 5,
		EaseOut = 6,
		EaseInOut = 7,
		ExpoIn = 8,
		ExpoOut = 9,
		ExpoInOut = 10,
		CircularIn = 11,
		CircularOut = 12,
		CircularInOut = 13,
		EEasingFunc_MAX = 14,
	};

	// Enum Engine.EStreamingVolumeUsage
	// NumValues: 0x0006
	enum class EStreamingVolumeUsage : uint8_t
	{
		SVB_Loading = 0,
		SVB_LoadingAndVisibility = 1,
		SVB_VisibilityBlockingOnLoad = 2,
		SVB_BlockingOnLoad = 3,
		SVB_LoadingNotVisible = 4,
		SVB_MAX = 5,
	};

	// Enum Engine.ELocalLightBakeMode
	// NumValues: 0x0004
	enum class ELocalLightBakeMode : uint8_t
	{
		SKY_AO_MODE = 0,
		SDF_SHADOW_MASK_MODE = 1,
		OUTDOOR_AO_MODE = 2,
		ELocalLightBakeMode_MAX = 3,
	};

	// Enum Engine.EMaterialVertexColorBlendWeightChannels
	// NumValues: 0x0006
	enum class EMaterialVertexColorBlendWeightChannels : uint8_t
	{
		None = 0,
		R = 1,
		RG = 2,
		RGB = 3,
		RGBA = 4,
		EMaterialVertexColorBlendWeightChannels_MAX = 5,
	};

	// Enum Engine.EMaterialDecalResponse
	// NumValues: 0x0009
	enum class EMaterialDecalResponse : uint8_t
	{
		MDR_None = 0,
		MDR_ColorNormalRoughness = 1,
		MDR_Color = 2,
		MDR_ColorNormal = 3,
		MDR_ColorRoughness = 4,
		MDR_Normal = 5,
		MDR_NormalRoughness = 6,
		MDR_Roughness = 7,
		MDR_MAX = 8,
	};

	// Enum Engine.EDecalBlendMode
	// NumValues: 0x0012
	enum class EDecalBlendMode : uint8_t
	{
		DBM_Translucent = 0,
		DBM_Stain = 1,
		DBM_Normal = 2,
		DBM_Emissive = 3,
		DBM_DBuffer_ColorNormalRoughness = 4,
		DBM_DBuffer_Color = 5,
		DBM_DBuffer_ColorNormal = 6,
		DBM_DBuffer_ColorRoughness = 7,
		DBM_DBuffer_Normal = 8,
		DBM_DBuffer_NormalRoughness = 9,
		DBM_DBuffer_Roughness = 10,
		DBM_DBuffer_Emissive = 11,
		DBM_DBuffer_AlphaComposite = 12,
		DBM_DBuffer_EmissiveAlphaComposite = 13,
		DBM_Volumetric_DistanceFunction = 14,
		DBM_AlphaComposite = 15,
		DBM_AmbientOcclusion = 16,
		DBM_MAX = 17,
	};

	// Enum Engine.ETextureColorChannel
	// NumValues: 0x0005
	enum class ETextureColorChannel : uint8_t
	{
		TCC_Red = 0,
		TCC_Green = 1,
		TCC_Blue = 2,
		TCC_Alpha = 3,
		TCC_MAX = 4,
	};

	// Enum Engine.EMaterialAttributeBlend
	// NumValues: 0x0004
	enum class EMaterialAttributeBlend : uint8_t
	{
		Blend = 0,
		UseA = 1,
		UseB = 2,
		EMaterialAttributeBlend_MAX = 3,
	};

	// Enum Engine.EChannelMaskParameterColor
	// NumValues: 0x0005
	enum class EChannelMaskParameterColor : uint8_t
	{
		Red = 0,
		Green = 1,
		Blue = 2,
		Alpha = 3,
		EChannelMaskParameterColor_MAX = 4,
	};

	// Enum Engine.EClampMode
	// NumValues: 0x0004
	enum class EClampMode : uint8_t
	{
		CMODE_Clamp = 0,
		CMODE_ClampMin = 1,
		CMODE_ClampMax = 2,
		CMODE_MAX = 3,
	};

	// Enum Engine.ECustomMaterialOutputType
	// NumValues: 0x0006
	enum class ECustomMaterialOutputType : uint8_t
	{
		CMOT_Float1 = 0,
		CMOT_Float2 = 1,
		CMOT_Float3 = 2,
		CMOT_Float4 = 3,
		CMOT_MaterialAttributes = 4,
		CMOT_MAX = 5,
	};

	// Enum Engine.EDepthOfFieldFunctionValue
	// NumValues: 0x0005
	enum class EDepthOfFieldFunctionValue : uint8_t
	{
		TDOF_NearAndFarMask = 0,
		TDOF_NearMask = 1,
		TDOF_FarMask = 2,
		TDOF_CircleOfConfusionRadius = 3,
		TDOF_MAX = 4,
	};

	// Enum Engine.EFunctionInputType
	// NumValues: 0x000C
	enum class EFunctionInputType : uint8_t
	{
		FunctionInput_Scalar = 0,
		FunctionInput_Vector2 = 1,
		FunctionInput_Vector3 = 2,
		FunctionInput_Vector4 = 3,
		FunctionInput_Texture2D = 4,
		FunctionInput_TextureCube = 5,
		FunctionInput_Texture2DArray = 6,
		FunctionInput_VolumeTexture = 7,
		FunctionInput_StaticBool = 8,
		FunctionInput_MaterialAttributes = 9,
		FunctionInput_TextureExternal = 10,
		FunctionInput_MAX = 11,
	};

	// Enum Engine.ENoiseFunction
	// NumValues: 0x0007
	enum class ENoiseFunction : uint8_t
	{
		NOISEFUNCTION_SimplexTex = 0,
		NOISEFUNCTION_GradientTex = 1,
		NOISEFUNCTION_GradientTex3D = 2,
		NOISEFUNCTION_GradientALU = 3,
		NOISEFUNCTION_ValueALU = 4,
		NOISEFUNCTION_VoronoiALU = 5,
		NOISEFUNCTION_MAX = 6,
	};

	// Enum Engine.ERuntimeVirtualTextureMipValueMode
	// NumValues: 0x0004
	enum class ERuntimeVirtualTextureMipValueMode : uint8_t
	{
		RVTMVM_None = 0,
		RVTMVM_MipLevel = 1,
		RVTMVM_MipBias = 2,
		RVTMVM_MAX = 3,
	};

	// Enum Engine.EMaterialSceneAttributeInputMode
	// NumValues: 0x0003
	enum class EMaterialSceneAttributeInputMode : uint8_t
	{
		Coordinates = 0,
		OffsetFraction = 1,
		EMaterialSceneAttributeInputMode_MAX = 2,
	};

	// Enum Engine.ESpeedTreeLODType
	// NumValues: 0x0003
	enum class ESpeedTreeLODType : uint8_t
	{
		STLOD_Pop = 0,
		STLOD_Smooth = 1,
		STLOD_MAX = 2,
	};

	// Enum Engine.ESpeedTreeWindType
	// NumValues: 0x0008
	enum class ESpeedTreeWindType : uint8_t
	{
		STW_None = 0,
		STW_Fastest = 1,
		STW_Fast = 2,
		STW_Better = 3,
		STW_Best = 4,
		STW_Palm = 5,
		STW_BestPlus = 6,
		STW_MAX = 7,
	};

	// Enum Engine.ESpeedTreeGeometryType
	// NumValues: 0x0006
	enum class ESpeedTreeGeometryType : uint8_t
	{
		STG_Branch = 0,
		STG_Frond = 1,
		STG_Leaf = 2,
		STG_FacingLeaf = 3,
		STG_Billboard = 4,
		STG_MAX = 5,
	};

	// Enum Engine.EMaterialExposedTextureProperty
	// NumValues: 0x0003
	enum class EMaterialExposedTextureProperty : uint8_t
	{
		TMTM_TextureSize = 0,
		TMTM_TexelSize = 1,
		TMTM_MAX = 2,
	};

	// Enum Engine.ETextureMipValueMode
	// NumValues: 0x0006
	enum class ETextureMipValueMode : uint8_t
	{
		TMVM_None = 0,
		TMVM_MipLevel = 1,
		TMVM_MipBias = 2,
		TMVM_Derivative = 3,
		TMVM_ClampMipLevel = 4,
		TMVM_MAX = 5,
	};

	// Enum Engine.EMaterialVectorCoordTransform
	// NumValues: 0x0007
	enum class EMaterialVectorCoordTransform : uint8_t
	{
		TRANSFORM_Tangent = 0,
		TRANSFORM_Local = 1,
		TRANSFORM_World = 2,
		TRANSFORM_View = 3,
		TRANSFORM_Camera = 4,
		TRANSFORM_ParticleWorld = 5,
		TRANSFORM_MAX = 6,
	};

	// Enum Engine.EMaterialVectorCoordTransformSource
	// NumValues: 0x0007
	enum class EMaterialVectorCoordTransformSource : uint8_t
	{
		TRANSFORMSOURCE_Tangent = 0,
		TRANSFORMSOURCE_Local = 1,
		TRANSFORMSOURCE_World = 2,
		TRANSFORMSOURCE_View = 3,
		TRANSFORMSOURCE_Camera = 4,
		TRANSFORMSOURCE_ParticleWorld = 5,
		TRANSFORMSOURCE_MAX = 6,
	};

	// Enum Engine.EMaterialPositionTransformSource
	// NumValues: 0x0007
	enum class EMaterialPositionTransformSource : uint8_t
	{
		TRANSFORMPOSSOURCE_Local = 0,
		TRANSFORMPOSSOURCE_World = 1,
		TRANSFORMPOSSOURCE_TranslatedWorld = 2,
		TRANSFORMPOSSOURCE_View = 3,
		TRANSFORMPOSSOURCE_Camera = 4,
		TRANSFORMPOSSOURCE_Particle = 5,
		TRANSFORMPOSSOURCE_MAX = 6,
	};

	// Enum Engine.EVectorNoiseFunction
	// NumValues: 0x0006
	enum class EVectorNoiseFunction : uint8_t
	{
		VNF_CellnoiseALU = 0,
		VNF_VectorALU = 1,
		VNF_GradientALU = 2,
		VNF_CurlALU = 3,
		VNF_VoronoiALU = 4,
		VNF_MAX = 5,
	};

	// Enum Engine.EMaterialExposedViewProperty
	// NumValues: 0x0011
	enum class EMaterialExposedViewProperty : uint8_t
	{
		MEVP_BufferSize = 0,
		MEVP_FieldOfView = 1,
		MEVP_TanHalfFieldOfView = 2,
		MEVP_ViewSize = 3,
		MEVP_WorldSpaceViewPosition = 4,
		MEVP_WorldSpaceCameraPosition = 5,
		MEVP_ViewportOffset = 6,
		MEVP_TemporalSampleCount = 7,
		MEVP_TemporalSampleIndex = 8,
		MEVP_TemporalSampleOffset = 9,
		MEVP_RuntimeVirtualTextureOutputLevel = 10,
		MEVP_RuntimeVirtualTextureOutputDerivative = 11,
		MEVP_PreExposure = 12,
		MEVP_WindParams = 13,
		MEVP_RotateAngle = 14,
		MEVP_UnscaledViewSize = 15,
		MEVP_MAX = 16,
	};

	// Enum Engine.EWorldPositionIncludedOffsets
	// NumValues: 0x0005
	enum class EWorldPositionIncludedOffsets : uint8_t
	{
		WPT_Default = 0,
		WPT_ExcludeAllShaderOffsets = 1,
		WPT_CameraRelative = 2,
		WPT_CameraRelativeNoOffsets = 3,
		WPT_MAX = 4,
	};

	// Enum Engine.EMaterialFunctionUsage
	// NumValues: 0x0004
	enum class EMaterialFunctionUsage : uint8_t
	{
		Default = 0,
		MaterialLayer = 1,
		MaterialLayerBlend = 2,
		EMaterialFunctionUsage_MAX = 3,
	};

	// Enum Engine.EMaterialCategory
	// NumValues: 0x000C
	enum class EMaterialCategory : uint8_t
	{
		MC_PBR_Opaque = 0,
		MC_Weapon = 1,
		MC_Character = 2,
		MC_Terrain = 3,
		MC_Sky = 4,
		MC_Grass = 5,
		MC_Rock = 6,
		MC_Tree = 7,
		MC_Tree_Lod = 8,
		MC_Particle = 9,
		MC_Keep_Original = 10,
		MC_MAX = 11,
	};

	// Enum Engine.EMaterialUsage
	// NumValues: 0x0012
	enum class EMaterialUsage : uint8_t
	{
		MATUSAGE_SkeletalMesh = 0,
		MATUSAGE_ParticleSprites = 1,
		MATUSAGE_BeamTrails = 2,
		MATUSAGE_MeshParticles = 3,
		MATUSAGE_StaticLighting = 4,
		MATUSAGE_MorphTargets = 5,
		MATUSAGE_SplineMesh = 6,
		MATUSAGE_InstancedStaticMeshes = 7,
		MATUSAGE_GeometryCollections = 8,
		MATUSAGE_Clothing = 9,
		MATUSAGE_NiagaraSprites = 10,
		MATUSAGE_NiagaraRibbons = 11,
		MATUSAGE_NiagaraMeshParticles = 12,
		MATUSAGE_GeometryCache = 13,
		MATUSAGE_Water = 14,
		MATUSAGE_WaterCaustics = 15,
		MATUSAGE_HairStrands = 16,
		MATUSAGE_MAX = 17,
	};

	// Enum Engine.EMaterialParameterAssociation
	// NumValues: 0x0004
	enum class EMaterialParameterAssociation : uint8_t
	{
		LayerParameter = 0,
		BlendParameter = 1,
		GlobalParameter = 2,
		EMaterialParameterAssociation_MAX = 3,
	};

	// Enum Engine.EMaterialMergeType
	// NumValues: 0x0003
	enum class EMaterialMergeType : uint8_t
	{
		MaterialMergeType_Default = 0,
		MaterialMergeType_Simplygon = 1,
		MaterialMergeType_MAX = 2,
	};

	// Enum Engine.ETextureSizingType
	// NumValues: 0x0005
	enum class ETextureSizingType : uint8_t
	{
		TextureSizingType_UseSingleTextureSize = 0,
		TextureSizingType_UseAutomaticBiasedSizes = 1,
		TextureSizingType_UseManualOverrideTextureSize = 2,
		TextureSizingType_UseSimplygonAutomaticSizing = 3,
		TextureSizingType_MAX = 4,
	};

	// Enum Engine.ESceneTextureId
	// NumValues: 0x0021
	enum class ESceneTextureId : uint8_t
	{
		PPI_SceneColor = 0,
		PPI_SceneDepth = 1,
		PPI_DiffuseColor = 2,
		PPI_SpecularColor = 3,
		PPI_SubsurfaceColor = 4,
		PPI_BaseColor = 5,
		PPI_Specular = 6,
		PPI_Metallic = 7,
		PPI_WorldNormal = 8,
		PPI_SeparateTranslucency = 9,
		PPI_Opacity = 10,
		PPI_Roughness = 11,
		PPI_MaterialAO = 12,
		PPI_CustomDepth = 13,
		PPI_PostProcessInput0 = 14,
		PPI_PostProcessInput1 = 15,
		PPI_PostProcessInput2 = 16,
		PPI_PostProcessInput3 = 17,
		PPI_PostProcessInput4 = 18,
		PPI_PostProcessInput5 = 19,
		PPI_PostProcessInput6 = 20,
		PPI_DecalMask = 21,
		PPI_ShadingModelColor = 22,
		PPI_ShadingModelID = 23,
		PPI_AmbientOcclusion = 24,
		PPI_CustomStencil = 25,
		PPI_StoredBaseColor = 26,
		PPI_StoredSpecular = 27,
		PPI_Velocity = 28,
		PPI_WorldTangent = 29,
		PPI_Anisotropy = 30,
		PPI_CustomData = 31,
		PPI_MAX = 32,
	};

	// Enum Engine.EMaterialDomain
	// NumValues: 0x0009
	enum class EMaterialDomain : uint8_t
	{
		MD_Surface = 0,
		MD_DeferredDecal = 1,
		MD_LightFunction = 2,
		MD_Volume = 3,
		MD_PostProcess = 4,
		MD_UI = 5,
		MD_RuntimeVirtualTexture = 6,
		MD_Missing = 7,
		MD_MAX = 8,
	};

	// Enum Engine.EVertexPhase
	// NumValues: 0x0004
	enum class EVertexPhase : uint8_t
	{
		VP_ViewResolving = 0,
		VP_PositionCalculation = 1,
		VP_VariantsCalculation = 2,
		VP_MAX = 3,
	};

	// Enum Engine.EShadingPhase
	// NumValues: 0x0005
	enum class EShadingPhase : uint8_t
	{
		SP_V2F = 0,
		SP_DataPrepare = 1,
		SP_OutColorGenerate = 2,
		SP_Debug = 3,
		SP_MAX = 4,
	};

	// Enum Engine.EMeshInstancingReplacementMethod
	// NumValues: 0x0003
	enum class EMeshInstancingReplacementMethod : uint8_t
	{
		RemoveOriginalActors = 0,
		KeepOriginalActorsAsEditorOnly = 1,
		EMeshInstancingReplacementMethod_MAX = 2,
	};

	// Enum Engine.EUVOutput
	// NumValues: 0x0003
	enum class EUVOutput : uint8_t
	{
		DoNotOutputChannel = 0,
		OutputChannel = 1,
		EUVOutput_MAX = 2,
	};

	// Enum Engine.EMeshMergeType
	// NumValues: 0x0003
	enum class EMeshMergeType : uint8_t
	{
		MeshMergeType_Default = 0,
		MeshMergeType_MergeActor = 1,
		MeshMergeType_MAX = 2,
	};

	// Enum Engine.EMeshLODSelectionType
	// NumValues: 0x0005
	enum class EMeshLODSelectionType : uint8_t
	{
		AllLODs = 0,
		SpecificLOD = 1,
		CalculateLOD = 2,
		LowestDetailLOD = 3,
		EMeshLODSelectionType_MAX = 4,
	};

	// Enum Engine.EProxyNormalComputationMethod
	// NumValues: 0x0004
	enum class EProxyNormalComputationMethod : uint8_t
	{
		AngleWeighted = 0,
		AreaWeighted = 1,
		EqualWeighted = 2,
		EProxyNormalComputationMethod_MAX = 3,
	};

	// Enum Engine.ELandscapeCullingPrecision
	// NumValues: 0x0004
	enum class ELandscapeCullingPrecision : uint8_t
	{
		High = 0,
		Medium = 1,
		Low = 2,
		ELandscapeCullingPrecision_MAX = 3,
	};

	// Enum Engine.EStaticMeshReductionTerimationCriterion
	// NumValues: 0x0004
	enum class EStaticMeshReductionTerimationCriterion : uint8_t
	{
		Triangles = 0,
		Vertices = 1,
		Any = 2,
		EStaticMeshReductionTerimationCriterion_MAX = 3,
	};

	// Enum Engine.EMeshFeatureImportance
	// NumValues: 0x0007
	enum class EMeshFeatureImportance : uint8_t
	{
		Off = 0,
		Lowest = 1,
		Low = 2,
		Normal = 3,
		High = 4,
		Highest = 5,
		EMeshFeatureImportance_MAX = 6,
	};

	// Enum Engine.EVertexPaintAxis
	// NumValues: 0x0004
	enum class EVertexPaintAxis : uint8_t
	{
		X = 0,
		Y = 1,
		Z = 2,
		EVertexPaintAxis_MAX = 3,
	};

	// Enum Engine.EMicroTransactionResult
	// NumValues: 0x0005
	enum class EMicroTransactionResult : uint8_t
	{
		MTR_Succeeded = 0,
		MTR_Failed = 1,
		MTR_Canceled = 2,
		MTR_RestoredFromServer = 3,
		MTR_MAX = 4,
	};

	// Enum Engine.EMicroTransactionDelegate
	// NumValues: 0x0003
	enum class EMicroTransactionDelegate : uint8_t
	{
		MTD_PurchaseQueryComplete = 0,
		MTD_PurchaseComplete = 1,
		MTD_MAX = 2,
	};

	// Enum Engine.FNavigationSystemRunMode
	// NumValues: 0x0006
	enum class EFNavigationSystemRunMode : uint8_t
	{
		InvalidMode = 0,
		GameMode = 1,
		EditorMode = 2,
		SimulationMode = 3,
		PIEMode = 4,
		FNavigationSystemRunMode_MAX = 5,
	};

	// Enum Engine.ENavigationQueryResult
	// NumValues: 0x0005
	enum class ENavigationQueryResult : uint8_t
	{
		Invalid = 0,
		Error = 1,
		Fail = 2,
		Success = 3,
		ENavigationQueryResult_MAX = 4,
	};

	// Enum Engine.ENavPathEvent
	// NumValues: 0x0009
	enum class ENavPathEvent : uint8_t
	{
		Cleared = 0,
		NewPath = 1,
		UpdatedDueToGoalMoved = 2,
		UpdatedDueToNavigationChanged = 3,
		Invalidated = 4,
		RePathFailed = 5,
		MetaPathUpdate = 6,
		Custom = 7,
		ENavPathEvent_MAX = 8,
	};

	// Enum Engine.ENavDataGatheringModeConfig
	// NumValues: 0x0004
	enum class ENavDataGatheringModeConfig : uint8_t
	{
		Invalid = 0,
		Instant = 1,
		Lazy = 2,
		ENavDataGatheringModeConfig_MAX = 3,
	};

	// Enum Engine.ENavDataGatheringMode
	// NumValues: 0x0004
	enum class ENavDataGatheringMode : uint8_t
	{
		Default = 0,
		Instant = 1,
		Lazy = 2,
		ENavDataGatheringMode_MAX = 3,
	};

	// Enum Engine.ENavigationOptionFlag
	// NumValues: 0x0004
	enum class ENavigationOptionFlag : uint8_t
	{
		Default = 0,
		Enable = 1,
		Disable = 2,
		MAX = 3,
	};

	// Enum Engine.ENavLinkDirection
	// NumValues: 0x0004
	enum class ENavLinkDirection : uint8_t
	{
		BothWays = 0,
		LeftToRight = 1,
		RightToLeft = 2,
		ENavLinkDirection_MAX = 3,
	};

	// Enum Engine.EControllMode
	// NumValues: 0x0004
	enum class EControllMode : uint8_t
	{
		ENone = 0,
		EExposureOnly = 1,
		EFullControll = 2,
		EControllMode_MAX = 3,
	};

	// Enum Engine.EEmitterRenderMode
	// NumValues: 0x0006
	enum class EEmitterRenderMode : uint8_t
	{
		ERM_Normal = 0,
		ERM_Point = 1,
		ERM_Cross = 2,
		ERM_LightsOnly = 3,
		ERM_None = 4,
		ERM_MAX = 5,
	};

	// Enum Engine.EParticleSubUVInterpMethod
	// NumValues: 0x0006
	enum class EParticleSubUVInterpMethod : uint8_t
	{
		PSUVIM_None = 0,
		PSUVIM_Linear = 1,
		PSUVIM_Linear_Blend = 2,
		PSUVIM_Random = 3,
		PSUVIM_Random_Blend = 4,
		PSUVIM_MAX = 5,
	};

	// Enum Engine.EParticleBurstMethod
	// NumValues: 0x0003
	enum class EParticleBurstMethod : uint8_t
	{
		EPBM_Instant = 0,
		EPBM_Interpolated = 1,
		EPBM_MAX = 2,
	};

	// Enum Engine.EParticleSystemInsignificanceReaction
	// NumValues: 0x0006
	enum class EParticleSystemInsignificanceReaction : uint8_t
	{
		Auto = 0,
		Complete = 1,
		DisableTick = 2,
		DisableTickAndKill = 3,
		Num = 4,
		EParticleSystemInsignificanceReaction_MAX = 5,
	};

	// Enum Engine.EParticleVRSShadingRate
	// NumValues: 0x0004
	enum class EParticleVRSShadingRate : uint8_t
	{
		VRS_None = 0,
		VRS_2X2 = 1,
		Num = 2,
		EParticleVRSShadingRate_MAX = 3,
	};

	// Enum Engine.EParticleSignificanceLevel
	// NumValues: 0x0006
	enum class EParticleSignificanceLevel : uint8_t
	{
		Low = 0,
		Medium = 1,
		High = 2,
		Critical = 3,
		Num = 4,
		EParticleSignificanceLevel_MAX = 5,
	};

	// Enum Engine.EParticleDetailMode
	// NumValues: 0x0004
	enum class EParticleDetailMode : uint8_t
	{
		PDM_Low = 0,
		PDM_Medium = 1,
		PDM_High = 2,
		PDM_MAX = 3,
	};

	// Enum Engine.EParticleSourceSelectionMethod
	// NumValues: 0x0003
	enum class EParticleSourceSelectionMethod : uint8_t
	{
		EPSSM_Random = 0,
		EPSSM_Sequential = 1,
		EPSSM_MAX = 2,
	};

	// Enum Engine.EModuleType
	// NumValues: 0x000A
	enum class EModuleType : uint8_t
	{
		EPMT_General = 0,
		EPMT_TypeData = 1,
		EPMT_Beam = 2,
		EPMT_Trail = 3,
		EPMT_Spawn = 4,
		EPMT_Required = 5,
		EPMT_Event = 6,
		EPMT_Light = 7,
		EPMT_SubUV = 8,
		EPMT_MAX = 9,
	};

	// Enum Engine.EAttractorParticleSelectionMethod
	// NumValues: 0x0003
	enum class EAttractorParticleSelectionMethod : uint8_t
	{
		EAPSM_Random = 0,
		EAPSM_Sequential = 1,
		EAPSM_MAX = 2,
	};

	// Enum Engine.Beam2SourceTargetTangentMethod
	// NumValues: 0x0005
	enum class EBeam2SourceTargetTangentMethod : uint8_t
	{
		PEB2STTM_Direct = 0,
		PEB2STTM_UserSet = 1,
		PEB2STTM_Distribution = 2,
		PEB2STTM_Emitter = 3,
		PEB2STTM_MAX = 4,
	};

	// Enum Engine.Beam2SourceTargetMethod
	// NumValues: 0x0006
	enum class EBeam2SourceTargetMethod : uint8_t
	{
		PEB2STM_Default = 0,
		PEB2STM_UserSet = 1,
		PEB2STM_Emitter = 2,
		PEB2STM_Particle = 3,
		PEB2STM_Actor = 4,
		PEB2STM_MAX = 5,
	};

	// Enum Engine.BeamModifierType
	// NumValues: 0x0003
	enum class EBeamModifierType : uint8_t
	{
		PEB2MT_Source = 0,
		PEB2MT_Target = 1,
		PEB2MT_MAX = 2,
	};

	// Enum Engine.EParticleCameraOffsetUpdateMethod
	// NumValues: 0x0004
	enum class EParticleCameraOffsetUpdateMethod : uint8_t
	{
		EPCOUM_DirectSet = 0,
		EPCOUM_Additive = 1,
		EPCOUM_Scalar = 2,
		EPCOUM_MAX = 3,
	};

	// Enum Engine.EParticleCollisionComplete
	// NumValues: 0x0007
	enum class EParticleCollisionComplete : uint8_t
	{
		EPCC_Kill = 0,
		EPCC_Freeze = 1,
		EPCC_HaltCollisions = 2,
		EPCC_FreezeTranslation = 3,
		EPCC_FreezeRotation = 4,
		EPCC_FreezeMovement = 5,
		EPCC_MAX = 6,
	};

	// Enum Engine.EParticleCollisionResponse
	// NumValues: 0x0004
	enum class EParticleCollisionResponse : uint8_t
	{
		Bounce = 0,
		Stop = 1,
		Kill = 2,
		EParticleCollisionResponse_MAX = 3,
	};

	// Enum Engine.ELocationBoneSocketSelectionMethod
	// NumValues: 0x0003
	enum class ELocationBoneSocketSelectionMethod : uint8_t
	{
		BONESOCKETSEL_Sequential = 0,
		BONESOCKETSEL_Random = 1,
		BONESOCKETSEL_MAX = 2,
	};

	// Enum Engine.ELocationBoneSocketSource
	// NumValues: 0x0003
	enum class ELocationBoneSocketSource : uint8_t
	{
		BONESOCKETSOURCE_Bones = 0,
		BONESOCKETSOURCE_Sockets = 1,
		BONESOCKETSOURCE_MAX = 2,
	};

	// Enum Engine.ELocationEmitterSelectionMethod
	// NumValues: 0x0003
	enum class ELocationEmitterSelectionMethod : uint8_t
	{
		ELESM_Random = 0,
		ELESM_Sequential = 1,
		ELESM_MAX = 2,
	};

	// Enum Engine.CylinderHeightAxis
	// NumValues: 0x0004
	enum class ECylinderHeightAxis : uint8_t
	{
		PMLPC_HEIGHTAXIS_X = 0,
		PMLPC_HEIGHTAXIS_Y = 1,
		PMLPC_HEIGHTAXIS_Z = 2,
		PMLPC_HEIGHTAXIS_MAX = 3,
	};

	// Enum Engine.ELocationSkelVertSurfaceSource
	// NumValues: 0x0003
	enum class ELocationSkelVertSurfaceSource : uint8_t
	{
		VERTSURFACESOURCE_Vert = 0,
		VERTSURFACESOURCE_Surface = 1,
		VERTSURFACESOURCE_MAX = 2,
	};

	// Enum Engine.EOrbitChainMode
	// NumValues: 0x0004
	enum class EOrbitChainMode : uint8_t
	{
		EOChainMode_Add = 0,
		EOChainMode_Scale = 1,
		EOChainMode_Link = 2,
		EOChainMode_MAX = 3,
	};

	// Enum Engine.EParticleAxisLock
	// NumValues: 0x000B
	enum class EParticleAxisLock : uint8_t
	{
		EPAL_NONE = 0,
		EPAL_X = 1,
		EPAL_Y = 2,
		EPAL_Z = 3,
		EPAL_NEGATIVE_X = 4,
		EPAL_NEGATIVE_Y = 5,
		EPAL_NEGATIVE_Z = 6,
		EPAL_ROTATE_X = 7,
		EPAL_ROTATE_Y = 8,
		EPAL_ROTATE_Z = 9,
		EPAL_MAX = 10,
	};

	// Enum Engine.EEmitterDynamicParameterValue
	// NumValues: 0x0007
	enum class EEmitterDynamicParameterValue : uint8_t
	{
		EDPV_UserSet = 0,
		EDPV_AutoSet = 1,
		EDPV_VelocityX = 2,
		EDPV_VelocityY = 3,
		EDPV_VelocityZ = 4,
		EDPV_VelocityMag = 5,
		EDPV_MAX = 6,
	};

	// Enum Engine.EEmitterNormalsMode
	// NumValues: 0x0004
	enum class EEmitterNormalsMode : uint8_t
	{
		ENM_CameraFacing = 0,
		ENM_Spherical = 1,
		ENM_Cylindrical = 2,
		ENM_MAX = 3,
	};

	// Enum Engine.EParticleSortMode
	// NumValues: 0x0006
	enum class EParticleSortMode : uint8_t
	{
		PSORTMODE_None = 0,
		PSORTMODE_ViewProjDepth = 1,
		PSORTMODE_DistanceToView = 2,
		PSORTMODE_Age_OldestFirst = 3,
		PSORTMODE_Age_NewestFirst = 4,
		PSORTMODE_MAX = 5,
	};

	// Enum Engine.EParticleUVFlipMode
	// NumValues: 0x0009
	enum class EParticleUVFlipMode : uint8_t
	{
		None = 0,
		FlipUV = 1,
		FlipUOnly = 2,
		FlipVOnly = 3,
		RandomFlipUV = 4,
		RandomFlipUOnly = 5,
		RandomFlipVOnly = 6,
		RandomFlipUVIndependent = 7,
		EParticleUVFlipMode_MAX = 8,
	};

	// Enum Engine.ETrail2SourceMethod
	// NumValues: 0x0004
	enum class ETrail2SourceMethod : uint8_t
	{
		PET2SRCM_Default = 0,
		PET2SRCM_Particle = 1,
		PET2SRCM_Actor = 2,
		PET2SRCM_MAX = 3,
	};

	// Enum Engine.EBeamTaperMethod
	// NumValues: 0x0004
	enum class EBeamTaperMethod : uint8_t
	{
		PEBTM_None = 0,
		PEBTM_Full = 1,
		PEBTM_Partial = 2,
		PEBTM_MAX = 3,
	};

	// Enum Engine.EBeam2Method
	// NumValues: 0x0004
	enum class EBeam2Method : uint8_t
	{
		PEB2M_Distance = 0,
		PEB2M_Target = 1,
		PEB2M_Branch = 2,
		PEB2M_MAX = 3,
	};

	// Enum Engine.EMeshCameraFacingOptions
	// NumValues: 0x000E
	enum class EMeshCameraFacingOptions : uint8_t
	{
		XAxisFacing_NoUp = 0,
		XAxisFacing_ZUp = 1,
		XAxisFacing_NegativeZUp = 2,
		XAxisFacing_YUp = 3,
		XAxisFacing_NegativeYUp = 4,
		LockedAxis_ZAxisFacing = 5,
		LockedAxis_NegativeZAxisFacing = 6,
		LockedAxis_YAxisFacing = 7,
		LockedAxis_NegativeYAxisFacing = 8,
		VelocityAligned_ZAxisFacing = 9,
		VelocityAligned_NegativeZAxisFacing = 10,
		VelocityAligned_YAxisFacing = 11,
		VelocityAligned_NegativeYAxisFacing = 12,
		EMeshCameraFacingOptions_MAX = 13,
	};

	// Enum Engine.EMeshCameraFacingUpAxis
	// NumValues: 0x0006
	enum class EMeshCameraFacingUpAxis : uint8_t
	{
		CameraFacing_NoneUP = 0,
		CameraFacing_ZUp = 1,
		CameraFacing_NegativeZUp = 2,
		CameraFacing_YUp = 3,
		CameraFacing_NegativeYUp = 4,
		CameraFacing_MAX = 5,
	};

	// Enum Engine.EMeshScreenAlignment
	// NumValues: 0x0004
	enum class EMeshScreenAlignment : uint8_t
	{
		PSMA_MeshFaceCameraWithRoll = 0,
		PSMA_MeshFaceCameraWithSpin = 1,
		PSMA_MeshFaceCameraWithLockedAxis = 2,
		PSMA_MAX = 3,
	};

	// Enum Engine.ETrailsRenderAxisOption
	// NumValues: 0x0004
	enum class ETrailsRenderAxisOption : uint8_t
	{
		Trails_CameraUp = 0,
		Trails_SourceUp = 1,
		Trails_WorldUp = 2,
		Trails_MAX = 3,
	};

	// Enum Engine.EParticleScreenAlignment
	// NumValues: 0x0008
	enum class EParticleScreenAlignment : uint8_t
	{
		PSA_FacingCameraPosition = 0,
		PSA_Square = 1,
		PSA_Rectangle = 2,
		PSA_Velocity = 3,
		PSA_AwayFromCenter = 4,
		PSA_TypeSpecific = 5,
		PSA_FacingCameraDistanceBlend = 6,
		PSA_MAX = 7,
	};

	// Enum Engine.EParticleSystemOcclusionBoundsMethod
	// NumValues: 0x0004
	enum class EParticleSystemOcclusionBoundsMethod : uint8_t
	{
		EPSOBM_None = 0,
		EPSOBM_ParticleBounds = 1,
		EPSOBM_CustomBounds = 2,
		EPSOBM_MAX = 3,
	};

	// Enum Engine.ParticleSystemLODMethod
	// NumValues: 0x0004
	enum class EParticleSystemLODMethod : uint8_t
	{
		PARTICLESYSTEMLODMETHOD_Automatic = 0,
		PARTICLESYSTEMLODMETHOD_DirectSet = 1,
		PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
		PARTICLESYSTEMLODMETHOD_MAX = 3,
	};

	// Enum Engine.EParticleSystemUpdateMode
	// NumValues: 0x0003
	enum class EParticleSystemUpdateMode : uint8_t
	{
		EPSUM_RealTime = 0,
		EPSUM_FixedTime = 1,
		EPSUM_MAX = 2,
	};

	// Enum Engine.EParticleEventType
	// NumValues: 0x0007
	enum class EParticleEventType : uint8_t
	{
		EPET_Any = 0,
		EPET_Spawn = 1,
		EPET_Death = 2,
		EPET_Collision = 3,
		EPET_Burst = 4,
		EPET_Blueprint = 5,
		EPET_MAX = 6,
	};

	// Enum Engine.ParticleReplayState
	// NumValues: 0x0004
	enum class EParticleReplayState : uint8_t
	{
		PRS_Disabled = 0,
		PRS_Capturing = 1,
		PRS_Replaying = 2,
		PRS_MAX = 3,
	};

	// Enum Engine.EParticleSysParamType
	// NumValues: 0x000A
	enum class EParticleSysParamType : uint8_t
	{
		PSPT_None = 0,
		PSPT_Scalar = 1,
		PSPT_ScalarRand = 2,
		PSPT_Vector = 3,
		PSPT_VectorRand = 4,
		PSPT_Color = 5,
		PSPT_Actor = 6,
		PSPT_Material = 7,
		PSPT_VectorUnitRand = 8,
		PSPT_MAX = 9,
	};

	// Enum Engine.ESettingsLockedAxis
	// NumValues: 0x0006
	enum class ESettingsLockedAxis : uint8_t
	{
		None = 0,
		X = 1,
		Y = 2,
		Z = 3,
		Invalid = 4,
		ESettingsLockedAxis_MAX = 5,
	};

	// Enum Engine.ESettingsDOF
	// NumValues: 0x0005
	enum class ESettingsDOF : uint8_t
	{
		Full3D = 0,
		YZPlane = 1,
		XZPlane = 2,
		XYPlane = 3,
		ESettingsDOF_MAX = 4,
	};

	// Enum Engine.EFrictionCombineMode
	// NumValues: 0x0004
	enum class EFrictionCombineMode : uint8_t
	{
		Average = 0,
		Min = 1,
		Multiply = 2,
		Max = 3,
	};

	// Enum Engine.EPhysicsAsyncAddMode
	// NumValues: 0x0004
	enum class EPhysicsAsyncAddMode : uint8_t
	{
		OnceOverlapSwitchToAdd = 0,
		OnceOverlapAdditiveToAdd = 1,
		OnceOverLapByPhysicsTree = 2,
		EPhysicsAsyncAddMode_MAX = 3,
	};

	// Enum Engine.EViewTargetBlendFunction
	// NumValues: 0x0006
	enum class EViewTargetBlendFunction : uint8_t
	{
		VTBlend_Linear = 0,
		VTBlend_Cubic = 1,
		VTBlend_EaseIn = 2,
		VTBlend_EaseOut = 3,
		VTBlend_EaseInOut = 4,
		VTBlend_MAX = 5,
	};

	// Enum Engine.EDynamicForceFeedbackAction
	// NumValues: 0x0004
	enum class EDynamicForceFeedbackAction : uint8_t
	{
		Start = 0,
		Update = 1,
		Stop = 2,
		EDynamicForceFeedbackAction_MAX = 3,
	};

	// Enum Engine.EPreferredWorldScaleType
	// NumValues: 0x0005
	enum class EPreferredWorldScaleType : uint8_t
	{
		EPWS_MiniWorld = 0,
		EPWS_MidWorld = 1,
		EPWS_BigWorld = 2,
		EPWS_Num = 3,
		EPWS_MAX = 4,
	};

	// Enum Engine.ERenderMatrixMode
	// NumValues: 0x0003
	enum class ERenderMatrixMode : uint8_t
	{
		ERMM_Default = 0,
		ERMM_IndependentFovFromCameraManager = 1,
		ERMM_MAX = 2,
	};

	// Enum Engine.ERendererStencilMask
	// NumValues: 0x000B
	enum class ERendererStencilMask : uint8_t
	{
		ERSM_Default = 0,
		ERSM_255 = 1,
		ERSM_1 = 2,
		ERSM_2 = 3,
		ERSM_4 = 4,
		ERSM_8 = 5,
		ERSM_16 = 6,
		ERSM_32 = 7,
		ERSM_64 = 8,
		ERSM_128 = 9,
		ERSM_MAX = 10,
	};

	// Enum Engine.EHasCustomNavigableGeometry
	// NumValues: 0x0005
	enum class EHasCustomNavigableGeometry : uint8_t
	{
		No = 0,
		Yes = 1,
		EvenIfNotCollidable = 2,
		DontExport = 3,
		EHasCustomNavigableGeometry_MAX = 4,
	};

	// Enum Engine.ECanBeCharacterBase
	// NumValues: 0x0004
	enum class ECanBeCharacterBase : uint8_t
	{
		ECB_No = 0,
		ECB_Yes = 1,
		ECB_Owner = 2,
		ECB_MAX = 3,
	};

	// Enum Engine.EReflectionInfluencePrimitiveType
	// NumValues: 0x0004
	enum class EReflectionInfluencePrimitiveType : uint8_t
	{
		BothStaticAndMovable = 0,
		StaticOnly = 1,
		MovableOnly = 2,
		EReflectionInfluencePrimitiveType_MAX = 3,
	};

	// Enum Engine.EReflectionSourceType
	// NumValues: 0x0003
	enum class EReflectionSourceType : uint8_t
	{
		CapturedScene = 0,
		SpecifiedCubemap = 1,
		EReflectionSourceType_MAX = 2,
	};

	// Enum Engine.EReflectionRangeShape
	// NumValues: 0x0003
	enum class EReflectionRangeShape : uint8_t
	{
		Sphere = 0,
		Box = 1,
		EReflectionRangeShape_MAX = 2,
	};

	// Enum Engine.EDefaultBackBufferPixelFormat
	// NumValues: 0x0006
	enum class EDefaultBackBufferPixelFormat : uint8_t
	{
		DBBPF_B8G8R8A8 = 0,
		DBBPF_A16B16G16R16_DEPRECATED = 1,
		DBBPF_FloatRGB_DEPRECATED = 2,
		DBBPF_FloatRGBA = 3,
		DBBPF_A2B10G10R10 = 4,
		DBBPF_MAX = 5,
	};

	// Enum Engine.EAutoExposureMethodUI
	// NumValues: 0x0004
	enum class EAutoExposureMethodUI : uint8_t
	{
		AEM_Histogram = 0,
		AEM_Basic = 1,
		AEM_Manual = 2,
		AEM_MAX = 3,
	};

	// Enum Engine.EAlphaChannelMode
	// NumValues: 0x0004
	enum class EAlphaChannelMode : uint8_t
	{
		Disabled = 0,
		LinearColorSpaceOnly = 1,
		AllowThroughTonemapper = 2,
		EAlphaChannelMode_MAX = 3,
	};

	// Enum Engine.EVelocityOutputPass
	// NumValues: 0x0004
	enum class EVelocityOutputPass : uint8_t
	{
		DepthPass = 0,
		BasePass = 1,
		AfterBasePass = 2,
		EVelocityOutputPass_MAX = 3,
	};

	// Enum Engine.EEarlyZPass
	// NumValues: 0x0005
	enum class EEarlyZPass : uint8_t
	{
		None = 0,
		OpaqueOnly = 1,
		OpaqueAndMasked = 2,
		Auto = 3,
		EEarlyZPass_MAX = 4,
	};

	// Enum Engine.ECustomDepthStencil
	// NumValues: 0x0005
	enum class ECustomDepthStencil : uint8_t
	{
		Disabled = 0,
		Enabled = 1,
		EnabledOnDemand = 2,
		EnabledWithStencil = 3,
		ECustomDepthStencil_MAX = 4,
	};

	// Enum Engine.EMobileMSAASampleCount
	// NumValues: 0x0005
	enum class EMobileMSAASampleCount : uint8_t
	{
		One = 1,
		Two = 2,
		Four = 4,
		Eight = 8,
		EMobileMSAASampleCount_MAX = 9,
	};

	// Enum Engine.ECompositingSampleCount
	// NumValues: 0x0005
	enum class ECompositingSampleCount : uint8_t
	{
		One = 1,
		Two = 2,
		Four = 4,
		Eight = 8,
		ECompositingSampleCount_MAX = 9,
	};

	// Enum Engine.EClearSceneOptions
	// NumValues: 0x0004
	enum class EClearSceneOptions : uint8_t
	{
		NoClear = 0,
		HardwareClear = 1,
		QuadAtMaxZ = 2,
		EClearSceneOptions_MAX = 3,
	};

	// Enum Engine.EReporterLineStyle
	// NumValues: 0x0003
	enum class EReporterLineStyle : uint8_t
	{
		Line = 0,
		Dash = 1,
		EReporterLineStyle_MAX = 2,
	};

	// Enum Engine.ELegendPosition
	// NumValues: 0x0003
	enum class ELegendPosition : uint8_t
	{
		Outside = 0,
		Inside = 1,
		ELegendPosition_MAX = 2,
	};

	// Enum Engine.EGraphDataStyle
	// NumValues: 0x0003
	enum class EGraphDataStyle : uint8_t
	{
		Lines = 0,
		Filled = 1,
		EGraphDataStyle_MAX = 2,
	};

	// Enum Engine.EGraphAxisStyle
	// NumValues: 0x0004
	enum class EGraphAxisStyle : uint8_t
	{
		Lines = 0,
		Notches = 1,
		Grid = 2,
		EGraphAxisStyle_MAX = 3,
	};

	// Enum Engine.ERichCurveKeyTimeCompressionFormat
	// NumValues: 0x0003
	enum class ERichCurveKeyTimeCompressionFormat : uint8_t
	{
		RCKTCF_uint16 = 0,
		RCKTCF_float32 = 1,
		RCKTCF_MAX = 2,
	};

	// Enum Engine.ERichCurveCompressionFormat
	// NumValues: 0x0006
	enum class ERichCurveCompressionFormat : uint8_t
	{
		RCCF_Empty = 0,
		RCCF_Constant = 1,
		RCCF_Linear = 2,
		RCCF_Cubic = 3,
		RCCF_Mixed = 4,
		RCCF_MAX = 5,
	};

	// Enum Engine.EConstraintTransform
	// NumValues: 0x0003
	enum class EConstraintTransform : uint8_t
	{
		Absolute = 0,
		Relative = 1,
		EConstraintTransform_MAX = 2,
	};

	// Enum Engine.EControlConstraint
	// NumValues: 0x0003
	enum class EControlConstraint : uint8_t
	{
		Orientation = 0,
		Translation = 1,
		MAX = 2,
	};

	// Enum Engine.ERootMotionFinishVelocityMode
	// NumValues: 0x0004
	enum class ERootMotionFinishVelocityMode : uint8_t
	{
		MaintainLastRootMotionVelocity = 0,
		SetVelocity = 1,
		ClampVelocity = 2,
		ERootMotionFinishVelocityMode_MAX = 3,
	};

	// Enum Engine.ERootMotionSourceSettingsFlags
	// NumValues: 0x0003
	enum class ERootMotionSourceSettingsFlags : uint8_t
	{
		UseSensitiveLiftoffCheck = 1,
		DisablePartialEndTick = 2,
		ERootMotionSourceSettingsFlags_MAX = 3,
	};

	// Enum Engine.ERootMotionSourceStatusFlags
	// NumValues: 0x0004
	enum class ERootMotionSourceStatusFlags : uint8_t
	{
		Prepared = 1,
		Finished = 2,
		MarkedForRemoval = 4,
		ERootMotionSourceStatusFlags_MAX = 5,
	};

	// Enum Engine.ERootMotionAccumulateMode
	// NumValues: 0x0003
	enum class ERootMotionAccumulateMode : uint8_t
	{
		Override = 0,
		Additive = 1,
		ERootMotionAccumulateMode_MAX = 2,
	};

	// Enum Engine.ERTCChannelPlane
	// NumValues: 0x000A
	enum class ERTCChannelPlane : uint8_t
	{
		Default = 0,
		R = 1,
		RG = 2,
		RG_B = 3,
		RGB = 4,
		RGBA = 5,
		RGB_A = 6,
		RG_A = 7,
		Count = 8,
		ERTCChannelPlane_MAX = 9,
	};

	// Enum Engine.ERTCColorSpace
	// NumValues: 0x0004
	enum class ERTCColorSpace : uint8_t
	{
		Default = 0,
		LDR = 1,
		Count = 2,
		ERTCColorSpace_MAX = 3,
	};

	// Enum Engine.ERTCQuality
	// NumValues: 0x0006
	enum class ERTCQuality : uint8_t
	{
		Default = 0,
		Fastest = 1,
		Normal = 2,
		High = 3,
		Count = 4,
		ERTCQuality_MAX = 5,
	};

	// Enum Engine.ERTCFormat
	// NumValues: 0x0008
	enum class ERTCFormat : uint8_t
	{
		Default = 0,
		UE4Ori = 1,
		None = 2,
		ASTC_Family = 3,
		ETC_Family = 4,
		DXT_Family = 5,
		Count = 6,
		ERTCFormat_MAX = 7,
	};

	// Enum Engine.ERuntimeVirtualTextureLayerType
	// NumValues: 0x0005
	enum class ERuntimeVirtualTextureLayerType : uint8_t
	{
		Detail = 0,
		Base = 1,
		Backup = 2,
		Count = 3,
		ERuntimeVirtualTextureLayerType_MAX = 4,
	};

	// Enum Engine.ERuntimeVirtualTextureMainPassType
	// NumValues: 0x0004
	enum class ERuntimeVirtualTextureMainPassType : uint8_t
	{
		Never = 0,
		Exclusive = 1,
		Always = 2,
		ERuntimeVirtualTextureMainPassType_MAX = 3,
	};

	// Enum Engine.ERuntimeVirtualTextureMaterialType
	// NumValues: 0x0009
	enum class ERuntimeVirtualTextureMaterialType : uint8_t
	{
		BaseColor = 0,
		BaseColor_Normal_DEPRECATED = 1,
		BaseColor_Normal_Specular = 2,
		BaseColor_Normal_Roughness_Specular_Mask_Height = 3,
		BaseColor_Normal_Specular_YCoCg = 4,
		BaseColor_Normal_Specular_Mask_YCoCg = 5,
		WorldHeight = 6,
		Count = 7,
		ERuntimeVirtualTextureMaterialType_MAX = 8,
	};

	// Enum Engine.ERayTracingWaterCausticsBufferScale
	// NumValues: 0x0004
	enum class ERayTracingWaterCausticsBufferScale : uint8_t
	{
		FULL = 0,
		HALF = 1,
		QUATER = 2,
		ERayTracingWaterCausticsBufferScale_MAX = 3,
	};

	// Enum Engine.ERayTracingWaterCausticsType
	// NumValues: 0x0004
	enum class ERayTracingWaterCausticsType : uint8_t
	{
		Disable = 0,
		SurfelBasedRendering = 1,
		ProceduralMeshes = 2,
		ERayTracingWaterCausticsType_MAX = 3,
	};

	// Enum Engine.EMobilePixelProjectedReflectionQuality
	// NumValues: 0x0005
	enum class EMobilePixelProjectedReflectionQuality : uint8_t
	{
		Disabled = 0,
		BestPerformance = 1,
		BetterQuality = 2,
		BestQuality = 3,
		EMobilePixelProjectedReflectionQuality_MAX = 4,
	};

	// Enum Engine.EMobilePlanarReflectionMode
	// NumValues: 0x0004
	enum class EMobilePlanarReflectionMode : uint8_t
	{
		Usual = 0,
		MobilePPRExclusive = 1,
		MobilePPR = 2,
		EMobilePlanarReflectionMode_MAX = 3,
	};

	// Enum Engine.ERayTracingMeshCausticsDebugScreenData
	// NumValues: 0x0004
	enum class ERayTracingMeshCausticsDebugScreenData : uint8_t
	{
		Debug_None = 0,
		Debug_Photon = 1,
		Debug_CausticsVariance = 2,
		Debug_MAX = 3,
	};

	// Enum Engine.ERayTracingMeshCausticsDebugLightData
	// NumValues: 0x0009
	enum class ERayTracingMeshCausticsDebugLightData : uint8_t
	{
		Debug_None = 0,
		Debug_Normal = 1,
		Debug_ScreenArea = 2,
		Debug_CausticsVariance = 3,
		Debug_RayDensity = 4,
		Debug_RayDensityMip = 5,
		Debug_LightID = 6,
		Debug_PhotonCount = 7,
		Debug_MAX = 8,
	};

	// Enum Engine.ERayTracingMeshCausticsTranslucentReflectionMode
	// NumValues: 0x0004
	enum class ERayTracingMeshCausticsTranslucentReflectionMode : uint8_t
	{
		TranslucentReflectionMode_NoReflection = 0,
		TranslucentReflectionMode_AlwaysReflection = 1,
		TranslucentReflectionMode_RandomReflection = 2,
		TranslucentReflectionMode_MAX = 3,
	};

	// Enum Engine.ERayTracingMeshCausticsBufferScale
	// NumValues: 0x0004
	enum class ERayTracingMeshCausticsBufferScale : uint8_t
	{
		BufferScale_Full = 0,
		BufferScale_Half = 1,
		BufferScale_Quarter = 2,
		BufferScale_MAX = 3,
	};

	// Enum Engine.ERayTracingMeshCausticsResolutionOverride
	// NumValues: 0x0008
	enum class ERayTracingMeshCausticsResolutionOverride : uint8_t
	{
		Resolution_None = 0,
		Resolution_64 = 1,
		Resolution_128 = 2,
		Resolution_256 = 3,
		Resolution_512 = 4,
		Resolution_1024 = 5,
		Resolution_2048 = 6,
		Resolution_MAX = 7,
	};

	// Enum Engine.ERayTracingMeshCausticsResolution
	// NumValues: 0x0007
	enum class ERayTracingMeshCausticsResolution : uint8_t
	{
		Resolution_64 = 0,
		Resolution_128 = 1,
		Resolution_256 = 2,
		Resolution_512 = 3,
		Resolution_1024 = 4,
		Resolution_2048 = 5,
		Resolution_MAX = 6,
	};

	// Enum Engine.EReflectedAndRefractedRayTracedShadows
	// NumValues: 0x0004
	enum class EReflectedAndRefractedRayTracedShadows : uint8_t
	{
		Disabled = 0,
		Hard_shadows = 1,
		Area_shadows = 2,
		EReflectedAndRefractedRayTracedShadows_MAX = 3,
	};

	// Enum Engine.ERayTracingGIDenoiseDebugType
	// NumValues: 0x0009
	enum class ERayTracingGIDenoiseDebugType : uint8_t
	{
		Disabled = 0,
		Variance = 1,
		FirstMoment = 2,
		SecondMoment = 3,
		HistoryLength = 4,
		MotionVector = 5,
		HitDistance = 6,
		RawOutput = 7,
		ERayTracingGIDenoiseDebugType_MAX = 8,
	};

	// Enum Engine.ERayTracingGIDenoiseSpatialFilterType
	// NumValues: 0x0003
	enum class ERayTracingGIDenoiseSpatialFilterType : uint8_t
	{
		ATrous = 0,
		Gaussian = 1,
		ERayTracingGIDenoiseSpatialFilterType_MAX = 2,
	};

	// Enum Engine.ERayTracingGIDenoiseType
	// NumValues: 0x0004
	enum class ERayTracingGIDenoiseType : uint8_t
	{
		Disabled = 0,
		UE4 = 1,
		New = 2,
		ERayTracingGIDenoiseType_MAX = 3,
	};

	// Enum Engine.ERayTracingGlobalIlluminationType
	// NumValues: 0x0004
	enum class ERayTracingGlobalIlluminationType : uint8_t
	{
		Disabled = 0,
		BruteForce = 1,
		FinalGather = 2,
		ERayTracingGlobalIlluminationType_MAX = 3,
	};

	// Enum Engine.ETranslucencyType
	// NumValues: 0x0005
	enum class ETranslucencyType : uint8_t
	{
		Raster = 0,
		RayTracing = 1,
		HybridTranslucency = 2,
		EnhancedRayTracing = 3,
		ETranslucencyType_MAX = 4,
	};

	// Enum Engine.EReflectionsType
	// NumValues: 0x0003
	enum class EReflectionsType : uint8_t
	{
		ScreenSpace = 0,
		RayTracing = 1,
		EReflectionsType_MAX = 2,
	};

	// Enum Engine.ELightUnits
	// NumValues: 0x0004
	enum class ELightUnits : uint8_t
	{
		Unitless = 0,
		Candelas = 1,
		Lumens = 2,
		ELightUnits_MAX = 3,
	};

	// Enum Engine.EPPEdgeDetectMethod
	// NumValues: 0x0004
	enum class EPPEdgeDetectMethod : uint8_t
	{
		DD_NONE = 0,
		DD_Sobel = 1,
		DD_IRoberts = 2,
		DD_MAX = 3,
	};

	// Enum Engine.EPPBlurMethod
	// NumValues: 0x0004
	enum class EPPBlurMethod : uint8_t
	{
		BB_NONE = 0,
		BB_GB = 1,
		BB_IB = 2,
		BB_MAX = 3,
	};

	// Enum Engine.ELensFlareMethod
	// NumValues: 0x0004
	enum class ELensFlareMethod : uint8_t
	{
		LFM_UE = 0,
		LFM_OPTIMIZED = 1,
		LFM_CUSTOM = 2,
		LFM_MAX = 3,
	};

	// Enum Engine.EBloomMethod
	// NumValues: 0x0003
	enum class EBloomMethod : uint8_t
	{
		BM_SOG = 0,
		BM_FFT = 1,
		BM_MAX = 2,
	};

	// Enum Engine.EAutoExposureMethod
	// NumValues: 0x0004
	enum class EAutoExposureMethod : uint8_t
	{
		AEM_Histogram = 0,
		AEM_Basic = 1,
		AEM_Manual = 2,
		AEM_MAX = 3,
	};

	// Enum Engine.EDepthOfFieldMethod
	// NumValues: 0x0004
	enum class EDepthOfFieldMethod : uint8_t
	{
		DOFM_BokehDOF = 0,
		DOFM_Gaussian = 1,
		DOFM_CircleDOF = 2,
		DOFM_MAX = 3,
	};

	// Enum Engine.ELiteRendererUsage
	// NumValues: 0x0004
	enum class ELiteRendererUsage : uint8_t
	{
		Default = 0,
		OnlyTranslucent = 1,
		Scope = 2,
		ELiteRendererUsage_MAX = 3,
	};

	// Enum Engine.ESceneCapturePrimitiveRenderMode
	// NumValues: 0x0004
	enum class ESceneCapturePrimitiveRenderMode : uint8_t
	{
		PRM_LegacySceneCapture = 0,
		PRM_RenderScenePrimitives = 1,
		PRM_UseShowOnlyList = 2,
		PRM_MAX = 3,
	};

	// Enum Engine.ESSAA
	// NumValues: 0x0005
	enum class ESSAA : uint8_t
	{
		SSAA_None = 0,
		SSAA_2X = 2,
		SSAA_3X = 3,
		SSAA_4X = 4,
		SSAA_MAX = 5,
	};

	// Enum Engine.EMaterialProperty
	// NumValues: 0x0024
	enum class EMaterialProperty : uint8_t
	{
		MP_EmissiveColor = 0,
		MP_Opacity = 1,
		MP_OpacityMask = 2,
		MP_DiffuseColor = 3,
		MP_SpecularColor = 4,
		MP_BaseColor = 5,
		MP_Metallic = 6,
		MP_Specular = 7,
		MP_Roughness = 8,
		MP_Anisotropy = 9,
		MP_Normal = 10,
		MP_Tangent = 11,
		MP_WorldPositionOffset = 12,
		MP_WorldDisplacement = 13,
		MP_TessellationMultiplier = 14,
		MP_SubsurfaceColor = 15,
		MP_CustomData0 = 16,
		MP_CustomData1 = 17,
		MP_AmbientOcclusion = 18,
		MP_Refraction = 19,
		MP_CustomizedUVs0 = 20,
		MP_CustomizedUVs1 = 21,
		MP_CustomizedUVs2 = 22,
		MP_CustomizedUVs3 = 23,
		MP_CustomizedUVs4 = 24,
		MP_CustomizedUVs5 = 25,
		MP_CustomizedUVs6 = 26,
		MP_CustomizedUVs7 = 27,
		MP_PixelDepthOffset = 28,
		MP_ShadingModel = 29,
		MP_WetnessMask = 30,
		MP_Porosity = 31,
		MP_PuddleMask = 32,
		MP_MaterialAttributes = 33,
		MP_CustomOutput = 34,
		MP_MAX = 35,
	};

	// Enum Engine.EAntiAliasingMethod
	// NumValues: 0x0008
	enum class EAntiAliasingMethod : uint8_t
	{
		AAM_None = 0,
		AAM_FXAA = 1,
		AAM_TemporalAA = 2,
		AAM_MSAA = 3,
		AAM_TSR = 4,
		AAM_SMAA = 5,
		AAM_LWTAA = 6,
		AAM_MAX = 7,
	};

	// Enum Engine.EPhysicsTransformUpdateMode
	// NumValues: 0x0003
	enum class EPhysicsTransformUpdateMode : uint8_t
	{
		SimulationUpatesComponentTransform = 0,
		ComponentTransformIsKinematic = 1,
		EPhysicsTransformUpdateMode_MAX = 2,
	};

	// Enum Engine.EAnimationMode
	// NumValues: 0x0004
	enum class EAnimationMode : uint8_t
	{
		AnimationBlueprint = 0,
		AnimationSingleNode = 1,
		AnimationCustomMode = 2,
		EAnimationMode_MAX = 3,
	};

	// Enum Engine.EKinematicBonesUpdateToPhysics
	// NumValues: 0x0003
	enum class EKinematicBonesUpdateToPhysics : uint8_t
	{
		SkipSimulatingBones = 0,
		SkipAllBones = 1,
		EKinematicBonesUpdateToPhysics_MAX = 2,
	};

	// Enum Engine.EClothMassMode
	// NumValues: 0x0005
	enum class EClothMassMode : uint8_t
	{
		UniformMass = 0,
		TotalMass = 1,
		Density = 2,
		MaxClothMassMode = 3,
		EClothMassMode_MAX = 4,
	};

	// Enum Engine.EAnimCurveType
	// NumValues: 0x0005
	enum class EAnimCurveType : uint8_t
	{
		AttributeCurve = 0,
		MaterialCurve = 1,
		MorphTargetCurve = 2,
		MaxAnimCurveType = 3,
		EAnimCurveType_MAX = 4,
	};

	// Enum Engine.ESkeletalMeshSkinningImportVersions
	// NumValues: 0x0005
	enum class ESkeletalMeshSkinningImportVersions : uint8_t
	{
		Before_Versionning = 0,
		SkeletalMeshBuildRefactor = 1,
		VersionPlusOne = 2,
		LatestVersion = 1,
		ESkeletalMeshSkinningImportVersions_MAX = 3,
	};

	// Enum Engine.ESkeletalMeshGeoImportVersions
	// NumValues: 0x0005
	enum class ESkeletalMeshGeoImportVersions : uint8_t
	{
		Before_Versionning = 0,
		SkeletalMeshBuildRefactor = 1,
		VersionPlusOne = 2,
		LatestVersion = 1,
		ESkeletalMeshGeoImportVersions_MAX = 3,
	};

	// Enum Engine.EBoneFilterActionOption
	// NumValues: 0x0004
	enum class EBoneFilterActionOption : uint8_t
	{
		Remove = 0,
		Keep = 1,
		Invalid = 2,
		EBoneFilterActionOption_MAX = 3,
	};

	// Enum Engine.SkeletalMeshOptimizationImportance
	// NumValues: 0x0007
	enum class ESkeletalMeshOptimizationImportance : uint8_t
	{
		SMOI_Off = 0,
		SMOI_Lowest = 1,
		SMOI_Low = 2,
		SMOI_Normal = 3,
		SMOI_High = 4,
		SMOI_Highest = 5,
		SMOI_MAX = 6,
	};

	// Enum Engine.SkeletalMeshOptimizationType
	// NumValues: 0x0004
	enum class ESkeletalMeshOptimizationType : uint8_t
	{
		SMOT_NumOfTriangles = 0,
		SMOT_MaxDeviation = 1,
		SMOT_TriangleOrDeviation = 2,
		SMOT_MAX = 3,
	};

	// Enum Engine.SkeletalMeshTerminationCriterion
	// NumValues: 0x0007
	enum class ESkeletalMeshTerminationCriterion : uint8_t
	{
		SMTC_NumOfTriangles = 0,
		SMTC_NumOfVerts = 1,
		SMTC_TriangleOrVert = 2,
		SMTC_AbsNumOfTriangles = 3,
		SMTC_AbsNumOfVerts = 4,
		SMTC_AbsTriangleOrVert = 5,
		SMTC_MAX = 6,
	};

	// Enum Engine.EBoneTranslationRetargetingMode
	// NumValues: 0x0006
	enum class EBoneTranslationRetargetingMode : uint8_t
	{
		Animation = 0,
		Skeleton = 1,
		AnimationScaled = 2,
		AnimationRelative = 3,
		OrientAndScale = 4,
		EBoneTranslationRetargetingMode_MAX = 5,
	};

	// Enum Engine.EBoneSpaces
	// NumValues: 0x0003
	enum class EBoneSpaces : uint8_t
	{
		WorldSpace = 0,
		ComponentSpace = 1,
		EBoneSpaces_MAX = 2,
	};

	// Enum Engine.EVisibilityBasedAnimTickOption
	// NumValues: 0x0005
	enum class EVisibilityBasedAnimTickOption : uint8_t
	{
		AlwaysTickPoseAndRefreshBones = 0,
		AlwaysTickPose = 1,
		OnlyTickMontagesWhenNotRendered = 2,
		OnlyTickPoseWhenRendered = 3,
		EVisibilityBasedAnimTickOption_MAX = 4,
	};

	// Enum Engine.EPhysBodyOp
	// NumValues: 0x0003
	enum class EPhysBodyOp : uint8_t
	{
		PBO_None = 0,
		PBO_Term = 1,
		PBO_MAX = 2,
	};

	// Enum Engine.EBoneVisibilityStatus
	// NumValues: 0x0004
	enum class EBoneVisibilityStatus : uint8_t
	{
		BVS_HiddenByParent = 0,
		BVS_Visible = 1,
		BVS_ExplicitlyHidden = 2,
		BVS_MAX = 3,
	};

	// Enum Engine.ESkyLightSourceType
	// NumValues: 0x0003
	enum class ESkyLightSourceType : uint8_t
	{
		SLS_CapturedScene = 0,
		SLS_SpecifiedCubemap = 1,
		SLS_MAX = 2,
	};

	// Enum Engine.EReverbSendMethod
	// NumValues: 0x0004
	enum class EReverbSendMethod : uint8_t
	{
		Linear = 0,
		CustomCurve = 1,
		Manual = 2,
		EReverbSendMethod_MAX = 3,
	};

	// Enum Engine.EAirAbsorptionMethod
	// NumValues: 0x0003
	enum class EAirAbsorptionMethod : uint8_t
	{
		Linear = 0,
		CustomCurve = 1,
		EAirAbsorptionMethod_MAX = 2,
	};

	// Enum Engine.ESoundSpatializationAlgorithm
	// NumValues: 0x0003
	enum class ESoundSpatializationAlgorithm : uint8_t
	{
		SPATIALIZATION_Default = 0,
		SPATIALIZATION_HRTF = 1,
		SPATIALIZATION_MAX = 2,
	};

	// Enum Engine.ESoundDistanceCalc
	// NumValues: 0x0005
	enum class ESoundDistanceCalc : uint8_t
	{
		SOUNDDISTANCE_Normal = 0,
		SOUNDDISTANCE_InfiniteXYPlane = 1,
		SOUNDDISTANCE_InfiniteXZPlane = 2,
		SOUNDDISTANCE_InfiniteYZPlane = 3,
		SOUNDDISTANCE_MAX = 4,
	};

	// Enum Engine.EVirtualizationMode
	// NumValues: 0x0004
	enum class EVirtualizationMode : uint8_t
	{
		Disabled = 0,
		PlayWhenSilent = 1,
		Restart = 2,
		EVirtualizationMode_MAX = 3,
	};

	// Enum Engine.ESoundWaveLoadingBehavior
	// NumValues: 0x0007
	enum class ESoundWaveLoadingBehavior : uint8_t
	{
		Inherited = 0,
		RetainOnLoad = 1,
		PrimeOnLoad = 2,
		LoadOnDemand = 3,
		ForceInline = 4,
		Uninitialized = 255,
		ESoundWaveLoadingBehavior_MAX = 256,
	};

	// Enum Engine.EAudioOutputTarget
	// NumValues: 0x0004
	enum class EAudioOutputTarget : uint8_t
	{
		Speaker = 0,
		Controller = 1,
		ControllerFallbackToSpeaker = 2,
		EAudioOutputTarget_MAX = 3,
	};

	// Enum Engine.EMaxConcurrentResolutionRule
	// NumValues: 0x0008
	enum class EMaxConcurrentResolutionRule : uint8_t
	{
		PreventNew = 0,
		StopOldest = 1,
		StopFarthestThenPreventNew = 2,
		StopFarthestThenOldest = 3,
		StopLowestPriority = 4,
		StopQuietest = 5,
		StopLowestPriorityThenPreventNew = 6,
		EMaxConcurrentResolutionRule_MAX = 7,
	};

	// Enum Engine.ESoundGroup
	// NumValues: 0x001A
	enum class ESoundGroup : uint8_t
	{
		SOUNDGROUP_Default = 0,
		SOUNDGROUP_Effects = 1,
		SOUNDGROUP_UI = 2,
		SOUNDGROUP_Music = 3,
		SOUNDGROUP_Voice = 4,
		SOUNDGROUP_GameSoundGroup1 = 5,
		SOUNDGROUP_GameSoundGroup2 = 6,
		SOUNDGROUP_GameSoundGroup3 = 7,
		SOUNDGROUP_GameSoundGroup4 = 8,
		SOUNDGROUP_GameSoundGroup5 = 9,
		SOUNDGROUP_GameSoundGroup6 = 10,
		SOUNDGROUP_GameSoundGroup7 = 11,
		SOUNDGROUP_GameSoundGroup8 = 12,
		SOUNDGROUP_GameSoundGroup9 = 13,
		SOUNDGROUP_GameSoundGroup10 = 14,
		SOUNDGROUP_GameSoundGroup11 = 15,
		SOUNDGROUP_GameSoundGroup12 = 16,
		SOUNDGROUP_GameSoundGroup13 = 17,
		SOUNDGROUP_GameSoundGroup14 = 18,
		SOUNDGROUP_GameSoundGroup15 = 19,
		SOUNDGROUP_GameSoundGroup16 = 20,
		SOUNDGROUP_GameSoundGroup17 = 21,
		SOUNDGROUP_GameSoundGroup18 = 22,
		SOUNDGROUP_GameSoundGroup19 = 23,
		SOUNDGROUP_GameSoundGroup20 = 24,
		SOUNDGROUP_MAX = 25,
	};

	// Enum Engine.ModulationParamMode
	// NumValues: 0x0004
	enum class EModulationParamMode : uint8_t
	{
		MPM_Normal = 0,
		MPM_Abs = 1,
		MPM_Direct = 2,
		MPM_MAX = 3,
	};

	// Enum Engine.ESourceBusChannels
	// NumValues: 0x0003
	enum class ESourceBusChannels : uint8_t
	{
		Mono = 0,
		Stereo = 1,
		ESourceBusChannels_MAX = 2,
	};

	// Enum Engine.ESourceBusSendLevelControlMethod
	// NumValues: 0x0004
	enum class ESourceBusSendLevelControlMethod : uint8_t
	{
		Linear = 0,
		CustomCurve = 1,
		Manual = 2,
		ESourceBusSendLevelControlMethod_MAX = 3,
	};

	// Enum Engine.ESubmixChannelFormat
	// NumValues: 0x0008
	enum class ESubmixChannelFormat : uint8_t
	{
		Device = 0,
		Stereo = 1,
		Quad = 2,
		FiveDotOne = 3,
		SevenDotOne = 4,
		Ambisonics = 5,
		Count = 6,
		ESubmixChannelFormat_MAX = 7,
	};

	// Enum Engine.ESendLevelControlMethod
	// NumValues: 0x0004
	enum class ESendLevelControlMethod : uint8_t
	{
		Linear = 0,
		CustomCurve = 1,
		Manual = 2,
		ESendLevelControlMethod_MAX = 3,
	};

	// Enum Engine.EAudioRecordingExportType
	// NumValues: 0x0003
	enum class EAudioRecordingExportType : uint8_t
	{
		SoundWave = 0,
		WavFile = 1,
		EAudioRecordingExportType_MAX = 2,
	};

	// Enum Engine.ESoundWaveFFTSize
	// NumValues: 0x0006
	enum class ESoundWaveFFTSize : uint8_t
	{
		VerySmall_64 = 0,
		Small_256 = 1,
		Medium_512 = 2,
		Large_1024 = 3,
		VeryLarge_2048 = 4,
		ESoundWaveFFTSize_MAX = 5,
	};

	// Enum Engine.EDecompressionType
	// NumValues: 0x0009
	enum class EDecompressionType : uint8_t
	{
		DTYPE_Setup = 0,
		DTYPE_Invalid = 1,
		DTYPE_Preview = 2,
		DTYPE_Native = 3,
		DTYPE_RealTime = 4,
		DTYPE_Procedural = 5,
		DTYPE_Xenon = 6,
		DTYPE_Streaming = 7,
		DTYPE_MAX = 8,
	};

	// Enum Engine.ESplineCoordinateSpace
	// NumValues: 0x0003
	enum class ESplineCoordinateSpace : uint8_t
	{
		Local = 0,
		World = 1,
		ESplineCoordinateSpace_MAX = 2,
	};

	// Enum Engine.ESplinePointType
	// NumValues: 0x0006
	enum class ESplinePointType : uint8_t
	{
		Linear = 0,
		Curve = 1,
		Constant = 2,
		CurveClamped = 3,
		CurveCustomTangent = 4,
		ESplinePointType_MAX = 5,
	};

	// Enum Engine.ESplineMeshAxis
	// NumValues: 0x0004
	enum class ESplineMeshAxis : uint8_t
	{
		X = 0,
		Y = 1,
		Z = 2,
		ESplineMeshAxis_MAX = 3,
	};

	// Enum Engine.EMaterialErrorType
	// NumValues: 0x0005
	enum class EMaterialErrorType : uint8_t
	{
		None = 0,
		WIP = 1,
		Warning = 2,
		Error = 3,
		EMaterialErrorType_MAX = 4,
	};

	// Enum Engine.EOptimizationType
	// NumValues: 0x0003
	enum class EOptimizationType : uint8_t
	{
		OT_NumOfTriangles = 0,
		OT_MaxDeviation = 1,
		OT_MAX = 2,
	};

	// Enum Engine.EImportanceLevel
	// NumValues: 0x0008
	enum class EImportanceLevel : uint8_t
	{
		IL_Off = 0,
		IL_Lowest = 1,
		IL_Low = 2,
		IL_Normal = 3,
		IL_High = 4,
		IL_Highest = 5,
		TEMP_BROKEN2 = 6,
		EImportanceLevel_MAX = 7,
	};

	// Enum Engine.ENormalMode
	// NumValues: 0x0006
	enum class ENormalMode : uint8_t
	{
		NM_PreserveSmoothingGroups = 0,
		NM_RecalculateNormals = 1,
		NM_RecalculateNormalsSmooth = 2,
		NM_RecalculateNormalsHard = 3,
		TEMP_BROKEN = 4,
		ENormalMode_MAX = 5,
	};

	// Enum Engine.EReflectionCachePolicy
	// NumValues: 0x0003
	enum class EReflectionCachePolicy : uint8_t
	{
		CacheRuntime = 0,
		ManuallySpecify = 1,
		EReflectionCachePolicy_MAX = 2,
	};

	// Enum Engine.EStereoLayerShape
	// NumValues: 0x0005
	enum class EStereoLayerShape : uint8_t
	{
		SLSH_QuadLayer = 0,
		SLSH_CylinderLayer = 1,
		SLSH_CubemapLayer = 2,
		SLSH_EquirectLayer = 3,
		SLSH_MAX = 4,
	};

	// Enum Engine.EStereoLayerType
	// NumValues: 0x0004
	enum class EStereoLayerType : uint8_t
	{
		SLT_WorldLocked = 0,
		SLT_TrackerLocked = 1,
		SLT_FaceLocked = 2,
		SLT_MAX = 3,
	};

	// Enum Engine.EOpacitySourceMode
	// NumValues: 0x0006
	enum class EOpacitySourceMode : uint8_t
	{
		OSM_Alpha = 0,
		OSM_ColorBrightness = 1,
		OSM_RedChannel = 2,
		OSM_GreenChannel = 3,
		OSM_BlueChannel = 4,
		OSM_MAX = 5,
	};

	// Enum Engine.ESubUVBoundingVertexCount
	// NumValues: 0x0003
	enum class ESubUVBoundingVertexCount : uint8_t
	{
		BVC_FourVertices = 0,
		BVC_EightVertices = 1,
		BVC_MAX = 2,
	};

	// Enum Engine.EABCDirection
	// NumValues: 0x0007
	enum class EABCDirection : uint8_t
	{
		Up = 0,
		Down = 1,
		Right = 2,
		Left = 3,
		Forward = 4,
		Backward = 5,
		EABCDirection_MAX = 6,
	};

	// Enum Engine.EVerticalTextAligment
	// NumValues: 0x0005
	enum class EVerticalTextAligment : uint8_t
	{
		EVRTA_TextTop = 0,
		EVRTA_TextCenter = 1,
		EVRTA_TextBottom = 2,
		EVRTA_QuadTop = 3,
		EVRTA_MAX = 4,
	};

	// Enum Engine.EHorizTextAligment
	// NumValues: 0x0004
	enum class EHorizTextAligment : uint8_t
	{
		EHTA_Left = 0,
		EHTA_Center = 1,
		EHTA_Right = 2,
		EHTA_MAX = 3,
	};

	// Enum Engine.ETextureCompressionQuality
	// NumValues: 0x0007
	enum class ETextureCompressionQuality : uint8_t
	{
		TCQ_Default = 0,
		TCQ_Lowest = 1,
		TCQ_Low = 2,
		TCQ_Medium = 3,
		TCQ_High = 4,
		TCQ_Highest = 5,
		TCQ_MAX = 6,
	};

	// Enum Engine.ETextureSourceFormat
	// NumValues: 0x000A
	enum class ETextureSourceFormat : uint8_t
	{
		TSF_Invalid = 0,
		TSF_G8 = 1,
		TSF_BGRA8 = 2,
		TSF_BGRE8 = 3,
		TSF_RGBA16 = 4,
		TSF_RGBA16F = 5,
		TSF_RGBA8 = 6,
		TSF_RGBE8 = 7,
		TSF_G16 = 8,
		TSF_MAX = 9,
	};

	// Enum Engine.ETextureSourceArtType
	// NumValues: 0x0004
	enum class ETextureSourceArtType : uint8_t
	{
		TSAT_Uncompressed = 0,
		TSAT_PNGCompressed = 1,
		TSAT_DDSFile = 2,
		TSAT_MAX = 3,
	};

	// Enum Engine.ETextureMipCount
	// NumValues: 0x0004
	enum class ETextureMipCount : uint8_t
	{
		TMC_ResidentMips = 0,
		TMC_AllMips = 1,
		TMC_AllMipsBiased = 2,
		TMC_MAX = 3,
	};

	// Enum Engine.EBlendChannel
	// NumValues: 0x0005
	enum class EBlendChannel : uint8_t
	{
		BC_BlendToRed = 0,
		BC_BlendToGreen = 1,
		BC_BlendToBlue = 2,
		BC_BlendToAlpha = 3,
		BC_MAX = 4,
	};

	// Enum Engine.ECompositeTextureMode
	// NumValues: 0x0006
	enum class ECompositeTextureMode : uint8_t
	{
		CTM_Disabled = 0,
		CTM_NormalRoughnessToRed = 1,
		CTM_NormalRoughnessToGreen = 2,
		CTM_NormalRoughnessToBlue = 3,
		CTM_NormalRoughnessToAlpha = 4,
		CTM_MAX = 5,
	};

	// Enum Engine.ECompositeChannelType
	// NumValues: 0x0003
	enum class ECompositeChannelType : uint8_t
	{
		CCT_None = 0,
		CCT_RG_As_Normalized_Normal = 1,
		CCT_MAX = 2,
	};

	// Enum Engine.TextureAddress
	// NumValues: 0x0004
	enum class ETextureAddress : uint8_t
	{
		TA_Wrap = 0,
		TA_Clamp = 1,
		TA_Mirror = 2,
		TA_MAX = 3,
	};

	// Enum Engine.TextureFilter
	// NumValues: 0x0005
	enum class ETextureFilter : uint8_t
	{
		TF_Nearest = 0,
		TF_Bilinear = 1,
		TF_Trilinear = 2,
		TF_Default = 3,
		TF_MAX = 4,
	};

	// Enum Engine.TextureCompressionSettings
	// NumValues: 0x000F
	enum class ETextureCompressionSettings : uint8_t
	{
		TC_Default = 0,
		TC_Normalmap = 1,
		TC_Masks = 2,
		TC_Grayscale = 3,
		TC_Displacementmap = 4,
		TC_VectorDisplacementmap = 5,
		TC_HDR = 6,
		TC_EditorIcon = 7,
		TC_Alpha = 8,
		TC_DistanceFieldFont = 9,
		TC_HDR_Compressed = 10,
		TC_BC7 = 11,
		TC_HDR_RGBM = 12,
		TC_HDR_RGBM_NoCompressed = 13,
		TC_MAX = 14,
	};

	// Enum Engine.ETextureDownSampleAmount
	// NumValues: 0x0006
	enum class ETextureDownSampleAmount : uint8_t
	{
		TDSA_FromTextureGroup = 0,
		TDSA_None = 1,
		TDSA_Low = 2,
		TDSA_Medium = 3,
		TDSA_High = 4,
		TDSA_MAX = 5,
	};

	// Enum Engine.ETextureLossyCompressionAmount
	// NumValues: 0x0008
	enum class ETextureLossyCompressionAmount : uint8_t
	{
		TLCA_Default = 0,
		TLCA_None = 1,
		TLCA_Lowest = 2,
		TLCA_Low = 3,
		TLCA_Medium = 4,
		TLCA_High = 5,
		TLCA_Highest = 6,
		TLCA_MAX = 7,
	};

	// Enum Engine.ETextureMipLoadOptions
	// NumValues: 0x0004
	enum class ETextureMipLoadOptions : uint8_t
	{
		Default = 0,
		AllMips = 1,
		OnlyFirstMip = 2,
		ETextureMipLoadOptions_MAX = 3,
	};

	// Enum Engine.ETextureSamplerFilter
	// NumValues: 0x0006
	enum class ETextureSamplerFilter : uint8_t
	{
		Point = 0,
		Bilinear = 1,
		Trilinear = 2,
		AnisotropicPoint = 3,
		AnisotropicLinear = 4,
		ETextureSamplerFilter_MAX = 5,
	};

	// Enum Engine.ETexturePowerOfTwoSetting
	// NumValues: 0x0004
	enum class ETexturePowerOfTwoSetting : uint8_t
	{
		None = 0,
		PadToPowerOfTwo = 1,
		PadToSquarePowerOfTwo = 2,
		ETexturePowerOfTwoSetting_MAX = 3,
	};

	// Enum Engine.TextureMipGenSettings
	// NumValues: 0x0016
	enum class ETextureMipGenSettings : uint8_t
	{
		TMGS_FromTextureGroup = 0,
		TMGS_SimpleAverage = 1,
		TMGS_Sharpen0 = 2,
		TMGS_Sharpen1 = 3,
		TMGS_Sharpen2 = 4,
		TMGS_Sharpen3 = 5,
		TMGS_Sharpen4 = 6,
		TMGS_Sharpen5 = 7,
		TMGS_Sharpen6 = 8,
		TMGS_Sharpen7 = 9,
		TMGS_Sharpen8 = 10,
		TMGS_Sharpen9 = 11,
		TMGS_Sharpen10 = 12,
		TMGS_NoMipmaps = 13,
		TMGS_LeaveExistingMips = 14,
		TMGS_Blur1 = 15,
		TMGS_Blur2 = 16,
		TMGS_Blur3 = 17,
		TMGS_Blur4 = 18,
		TMGS_Blur5 = 19,
		TMGS_Unfiltered = 20,
		TMGS_MAX = 21,
	};

	// Enum Engine.ETextureAstcPreferCompressor
	// NumValues: 0x0004
	enum class ETextureAstcPreferCompressor : uint8_t
	{
		TAPC_Default = 0,
		TAPC_Arm = 1,
		TAPC_IntelISPC = 2,
		TAPC_MAX = 3,
	};

	// Enum Engine.ETextureAstcCompressionQuality
	// NumValues: 0x0010
	enum class ETextureAstcCompressionQuality : uint8_t
	{
		TCQ_ASTC_Default = 0,
		TCQ_ASTC_4x4 = 1,
		TCQ_ASTC_5x4 = 2,
		TCQ_ASTC_5x5 = 3,
		TCQ_ASTC_6x5 = 4,
		TCQ_ASTC_6x6 = 5,
		TCQ_ASTC_8x5 = 6,
		TCQ_ASTC_8x6 = 7,
		TCQ_ASTC_10x5 = 8,
		TCQ_ASTC_10x6 = 9,
		TCQ_ASTC_8x8 = 10,
		TCQ_ASTC_10x8 = 11,
		TCQ_ASTC_10x10 = 12,
		TCQ_ASTC_12x10 = 13,
		TCQ_ASTC_12x12 = 14,
		TCQ_ASTC_Max = 15,
	};

	// Enum Engine.ETextureRenderTargetFormat
	// NumValues: 0x000C
	enum class ETextureRenderTargetFormat : uint8_t
	{
		RTF_R8 = 0,
		RTF_RG8 = 1,
		RTF_RGBA8 = 2,
		RTF_RGBA8_SRGB = 3,
		RTF_R16f = 4,
		RTF_RG16f = 5,
		RTF_RGBA16f = 6,
		RTF_R32f = 7,
		RTF_RG32f = 8,
		RTF_RGBA32f = 9,
		RTF_RGB10A2 = 10,
		RTF_MAX = 11,
	};

	// Enum Engine.ETimecodeProviderSynchronizationState
	// NumValues: 0x0005
	enum class ETimecodeProviderSynchronizationState : uint32_t
	{
		Closed = 0,
		Error = 1,
		Synchronized = 2,
		Synchronizing = 3,
		ETimecodeProviderSynchronizationState_MAX = 4,
	};

	// Enum Engine.ETimelineDirection
	// NumValues: 0x0003
	enum class ETimelineDirection : uint8_t
	{
		Forward = 0,
		Backward = 1,
		ETimelineDirection_MAX = 2,
	};

	// Enum Engine.ETimelineLengthMode
	// NumValues: 0x0003
	enum class ETimelineLengthMode : uint8_t
	{
		TL_TimelineLength = 0,
		TL_LastKeyFrame = 1,
		TL_MAX = 2,
	};

	// Enum Engine.ETimeStretchCurveMapping
	// NumValues: 0x0004
	enum class ETimeStretchCurveMapping : uint8_t
	{
		T_Original = 0,
		T_TargetMin = 1,
		T_TargetMax = 2,
		MAX = 3,
	};

	// Enum Engine.ETwitterIntegrationDelegate
	// NumValues: 0x0004
	enum class ETwitterIntegrationDelegate : uint8_t
	{
		TID_AuthorizeComplete = 0,
		TID_TweetUIComplete = 1,
		TID_RequestComplete = 2,
		TID_MAX = 3,
	};

	// Enum Engine.ETwitterRequestMethod
	// NumValues: 0x0004
	enum class ETwitterRequestMethod : uint8_t
	{
		TRM_Get = 0,
		TRM_Post = 1,
		TRM_Delete = 2,
		TRM_MAX = 3,
	};

	// Enum Engine.EUserDefinedStructureStatus
	// NumValues: 0x0005
	enum class EUserDefinedStructureStatus : uint8_t
	{
		UDSS_UpToDate = 0,
		UDSS_Dirty = 1,
		UDSS_Error = 2,
		UDSS_Duplicate = 3,
		UDSS_MAX = 4,
	};

	// Enum Engine.EUIScalingRule
	// NumValues: 0x0006
	enum class EUIScalingRule : uint8_t
	{
		ShortestSide = 0,
		LongestSide = 1,
		Horizontal = 2,
		Vertical = 3,
		Custom = 4,
		EUIScalingRule_MAX = 5,
	};

	// Enum Engine.ERenderFocusRule
	// NumValues: 0x0005
	enum class ERenderFocusRule : uint8_t
	{
		Always = 0,
		NonPointer = 1,
		NavigationOnly = 2,
		Never = 3,
		ERenderFocusRule_MAX = 4,
	};

	// Enum Engine.EVectorFieldConstructionOp
	// NumValues: 0x0003
	enum class EVectorFieldConstructionOp : uint8_t
	{
		VFCO_Extrude = 0,
		VFCO_Revolve = 1,
		VFCO_MAX = 2,
	};

	// Enum Engine.EWindSourceType
	// NumValues: 0x0003
	enum class EWindSourceType : uint8_t
	{
		Directional = 0,
		Point = 1,
		EWindSourceType_MAX = 2,
	};

	// Enum Engine.EPSCPoolMethod
	// NumValues: 0x0006
	enum class EPSCPoolMethod : uint8_t
	{
		None = 0,
		AutoRelease = 1,
		ManualRelease = 2,
		ManualRelease_OnComplete = 3,
		FreeInPool = 4,
		EPSCPoolMethod_MAX = 5,
	};

	// Enum Engine.EVolumeLightingMethod
	// NumValues: 0x0003
	enum class EVolumeLightingMethod : uint8_t
	{
		VLM_VolumetricLightmap = 0,
		VLM_SparseVolumeLightingSamples = 1,
		VLM_MAX = 2,
	};

	// Enum Engine.EVisibilityAggressiveness
	// NumValues: 0x0004
	enum class EVisibilityAggressiveness : uint8_t
	{
		VIS_LeastAggressive = 0,
		VIS_ModeratelyAggressive = 1,
		VIS_MostAggressive = 2,
		VIS_Max = 3,
	};

	// Enum Engine.EStaticShadowmapScale
	// NumValues: 0x0004
	enum class EStaticShadowmapScale : uint8_t
	{
		StaticShadowmapScale_Complete = 0,
		StaticShadowmapScale_Half = 1,
		StaticShadowmapScale_Quarter = 2,
		StaticShadowmapScale_Max = 3,
	};

	// Enum PhysicsCore.EChaosBufferMode
	// NumValues: 0x0005
	enum class EChaosBufferMode : uint8_t
	{
		Double = 0,
		Triple = 1,
		Num = 2,
		Invalid = 3,
		EChaosBufferMode_MAX = 4,
	};

	// Enum PhysicsCore.EChaosThreadingMode
	// NumValues: 0x0006
	enum class EChaosThreadingMode : uint8_t
	{
		DedicatedThread = 0,
		TaskGraph = 1,
		SingleThread = 2,
		Num = 3,
		Invalid = 4,
		EChaosThreadingMode_MAX = 5,
	};

	// Enum PhysicsCore.EChaosSolverTickMode
	// NumValues: 0x0005
	enum class EChaosSolverTickMode : uint8_t
	{
		Fixed = 0,
		Variable = 1,
		VariableCapped = 2,
		VariableCappedWithTarget = 3,
		EChaosSolverTickMode_MAX = 4,
	};

};

namespace Engine
{



	// Enum Engine.ETextGender
	// NumValues: 0x0004
	enum class ETextGender : uint8_t
	{
		Masculine = 0,
		Feminine = 1,
		Neuter = 2,
		ETextGender_MAX = 3,
	};

	// Enum Engine.EFormatArgumentType
	// NumValues: 0x0007
	enum class EFormatArgumentType : uint8_t
	{
		Int = 0,
		UInt = 1,
		Float = 2,
		Double = 3,
		Text = 4,
		Gender = 5,
		EFormatArgumentType_MAX = 6,
	};

	// Enum Engine.EEndPlayReason
	// NumValues: 0x0006
	enum class EEndPlayReason : uint8_t
	{
		Destroyed = 0,
		LevelTransition = 1,
		EndPlayInEditor = 2,
		RemovedFromWorld = 3,
		Quit = 4,
		EEndPlayReason_MAX = 5,
	};

	// Enum Engine.ETickingGroup
	// NumValues: 0x0009
	enum class ETickingGroup : uint8_t
	{
		TG_PrePhysics = 0,
		TG_StartPhysics = 1,
		TG_DuringPhysics = 2,
		TG_EndPhysics = 3,
		TG_PostPhysics = 4,
		TG_PostUpdateWork = 5,
		TG_LastDemotable = 6,
		TG_NewlySpawned = 7,
		TG_MAX = 8,
	};

	// Enum Engine.EComponentCreationMethod
	// NumValues: 0x0005
	enum class EComponentCreationMethod : uint8_t
	{
		Native = 0,
		SimpleConstructionScript = 1,
		UserConstructionScript = 2,
		Instance = 3,
		EComponentCreationMethod_MAX = 4,
	};

	// Enum Engine.EComponentReplicationFlags
	// NumValues: 0x0008
	enum class EComponentReplicationFlags : uint8_t
	{
		Rep_Always = 0,
		Rep_OwnerOnly = 1,
		Rep_SimulateOnly = 4,
		Rep_ToBeObservedOnly = 8,
		Rep_OwnerAndSimulate = 16,
		Rep_OwnerAndOB = 32,
		Rep_SimulteAndOB = 64,
		Rep_MAX = 65,
	};

	// Enum Engine.ETemperatureSeverityType
	// NumValues: 0x0007
	enum class ETemperatureSeverityType : uint8_t
	{
		Unknown = 0,
		Good = 1,
		Bad = 2,
		Serious = 3,
		Critical = 4,
		NumSeverities = 5,
		ETemperatureSeverityType_MAX = 6,
	};

	// Enum Engine.EPlaneConstraintAxisSetting
	// NumValues: 0x0006
	enum class EPlaneConstraintAxisSetting : uint8_t
	{
		Custom = 0,
		X = 1,
		Y = 2,
		Z = 3,
		UseGlobalPhysicsSetting = 4,
		EPlaneConstraintAxisSetting_MAX = 5,
	};

	// Enum Engine.EInterpToBehaviourType
	// NumValues: 0x0005
	enum class EInterpToBehaviourType : uint8_t
	{
		OneShot = 0,
		OneShot_Reverse = 1,
		Loop_Reset = 2,
		PingPong = 3,
		EInterpToBehaviourType_MAX = 4,
	};

	// Enum Engine.ETeleportType
	// NumValues: 0x0005
	enum class ETeleportType : uint8_t
	{
		None = 0,
		TeleportPhysics = 1,
		ResetPhysics = 2,
		SkipSkeletalMeshUpdateChildComponents = 4,
		ETeleportType_MAX = 5,
	};

	// Enum Engine.EPlatformInterfaceDataType
	// NumValues: 0x0007
	enum class EPlatformInterfaceDataType : uint8_t
	{
		PIDT_None = 0,
		PIDT_Int = 1,
		PIDT_Float = 2,
		PIDT_String = 3,
		PIDT_Object = 4,
		PIDT_Custom = 5,
		PIDT_MAX = 6,
	};

	// Enum Engine.EMovementMode
	// NumValues: 0x0008
	enum class EMovementMode : uint8_t
	{
		MOVE_None = 0,
		MOVE_Walking = 1,
		MOVE_NavWalking = 2,
		MOVE_Falling = 3,
		MOVE_Swimming = 4,
		MOVE_Flying = 5,
		MOVE_Custom = 6,
		MOVE_MAX = 7,
	};

	// Enum Engine.ENetworkFailure
	// NumValues: 0x000E
	enum class ENetworkFailure : uint8_t
	{
		NetDriverAlreadyExists = 0,
		NetDriverCreateFailure = 1,
		NetDriverListenFailure = 2,
		ConnectionLost = 3,
		ConnectionTimeout = 4,
		FailureReceived = 5,
		OutdatedClient = 6,
		OutdatedServer = 7,
		PendingConnectionFailure = 8,
		NetGuidMismatch = 9,
		NetChecksumMismatch = 10,
		NonExistantPackage = 11,
		CorruptedPacket = 12,
		ENetworkFailure_MAX = 13,
	};

	// Enum Engine.ETravelFailure
	// NumValues: 0x000D
	enum class ETravelFailure : uint8_t
	{
		NoLevel = 0,
		LoadMapFailure = 1,
		InvalidURL = 2,
		PackageMissing = 3,
		PackageVersion = 4,
		NoDownload = 5,
		TravelFailure = 6,
		CheatCommands = 7,
		PendingNetGameCreateFailure = 8,
		CloudSaveFailure = 9,
		ServerTravelFailure = 10,
		ClientTravelFailure = 11,
		ETravelFailure_MAX = 12,
	};

	// Enum Engine.EScreenOrientation
	// NumValues: 0x0008
	enum class EScreenOrientation : uint8_t
	{
		Unknown = 0,
		Portrait = 1,
		PortraitUpsideDown = 2,
		LandscapeLeft = 3,
		LandscapeRight = 4,
		FaceUp = 5,
		FaceDown = 6,
		EScreenOrientation_MAX = 7,
	};

	// Enum Engine.EApplicationState
	// NumValues: 0x0005
	enum class EApplicationState : uint8_t
	{
		Unknown = 0,
		Inactive = 1,
		Background = 2,
		Active = 3,
		EApplicationState_MAX = 4,
	};

	// Enum Engine.EObjectTypeQuery
	// NumValues: 0x0022
	enum class EObjectTypeQuery : uint8_t
	{
		ObjectTypeQuery1 = 0,
		ObjectTypeQuery2 = 1,
		ObjectTypeQuery3 = 2,
		ObjectTypeQuery4 = 3,
		ObjectTypeQuery5 = 4,
		ObjectTypeQuery6 = 5,
		ObjectTypeQuery7 = 6,
		ObjectTypeQuery8 = 7,
		ObjectTypeQuery9 = 8,
		ObjectTypeQuery10 = 9,
		ObjectTypeQuery11 = 10,
		ObjectTypeQuery12 = 11,
		ObjectTypeQuery13 = 12,
		ObjectTypeQuery14 = 13,
		ObjectTypeQuery15 = 14,
		ObjectTypeQuery16 = 15,
		ObjectTypeQuery17 = 16,
		ObjectTypeQuery18 = 17,
		ObjectTypeQuery19 = 18,
		ObjectTypeQuery20 = 19,
		ObjectTypeQuery21 = 20,
		ObjectTypeQuery22 = 21,
		ObjectTypeQuery23 = 22,
		ObjectTypeQuery24 = 23,
		ObjectTypeQuery25 = 24,
		ObjectTypeQuery26 = 25,
		ObjectTypeQuery27 = 26,
		ObjectTypeQuery28 = 27,
		ObjectTypeQuery29 = 28,
		ObjectTypeQuery30 = 29,
		ObjectTypeQuery31 = 30,
		ObjectTypeQuery32 = 31,
		ObjectTypeQuery_MAX = 32,
		EObjectTypeQuery_MAX = 33,
	};

	// Enum Engine.EDrawDebugTrace
	// NumValues: 0x0005
	enum class EDrawDebugTrace : uint8_t
	{
		None = 0,
		ForOneFrame = 1,
		ForDuration = 2,
		Persistent = 3,
		EDrawDebugTrace_MAX = 4,
	};

	// Enum Engine.ETraceTypeQuery
	// NumValues: 0x0022
	enum class ETraceTypeQuery : uint8_t
	{
		TraceTypeQuery1 = 0,
		TraceTypeQuery2 = 1,
		TraceTypeQuery3 = 2,
		TraceTypeQuery4 = 3,
		TraceTypeQuery5 = 4,
		TraceTypeQuery6 = 5,
		TraceTypeQuery7 = 6,
		TraceTypeQuery8 = 7,
		TraceTypeQuery9 = 8,
		TraceTypeQuery10 = 9,
		TraceTypeQuery11 = 10,
		TraceTypeQuery12 = 11,
		TraceTypeQuery13 = 12,
		TraceTypeQuery14 = 13,
		TraceTypeQuery15 = 14,
		TraceTypeQuery16 = 15,
		TraceTypeQuery17 = 16,
		TraceTypeQuery18 = 17,
		TraceTypeQuery19 = 18,
		TraceTypeQuery20 = 19,
		TraceTypeQuery21 = 20,
		TraceTypeQuery22 = 21,
		TraceTypeQuery23 = 22,
		TraceTypeQuery24 = 23,
		TraceTypeQuery25 = 24,
		TraceTypeQuery26 = 25,
		TraceTypeQuery27 = 26,
		TraceTypeQuery28 = 27,
		TraceTypeQuery29 = 28,
		TraceTypeQuery30 = 29,
		TraceTypeQuery31 = 30,
		TraceTypeQuery32 = 31,
		TraceTypeQuery_MAX = 32,
		ETraceTypeQuery_MAX = 33,
	};

	// Enum Engine.EMoveComponentAction
	// NumValues: 0x0004
	enum class EMoveComponentAction : uint8_t
	{
		Move = 0,
		Stop = 1,
		Return = 2,
		EMoveComponentAction_MAX = 3,
	};

	// Enum Engine.EQuitPreference
	// NumValues: 0x0003
	enum class EQuitPreference : uint8_t
	{
		Quit = 0,
		Background = 1,
		EQuitPreference_MAX = 2,
	};

	// Enum Engine.EMouseLockMode
	// NumValues: 0x0005
	enum class EMouseLockMode : uint8_t
	{
		DoNotLock = 0,
		LockOnCapture = 1,
		LockAlways = 2,
		LockInFullscreen = 3,
		EMouseLockMode_MAX = 4,
	};

	// Enum Engine.EWindowTitleBarMode
	// NumValues: 0x0003
	enum class EWindowTitleBarMode : uint8_t
	{
		Overlay = 0,
		VerticalBox = 1,
		EWindowTitleBarMode_MAX = 2,
	};

	// Enum Engine.EMaterialAtlasUsage
	// NumValues: 0x0006
	enum class EMaterialAtlasUsage : uint8_t
	{
		None = 0,
		Usage0 = 1,
		Usage1 = 2,
		Usage2 = 3,
		Usage3 = 4,
		EMaterialAtlasUsage_MAX = 5,
	};

	// Enum Engine.ERoundingMode
	// NumValues: 0x0008
	enum class ERoundingMode : uint8_t
	{
		HalfToEven = 0,
		HalfFromZero = 1,
		HalfToZero = 2,
		FromZero = 3,
		ToZero = 4,
		ToNegativeInfinity = 5,
		ToPositiveInfinity = 6,
		ERoundingMode_MAX = 7,
	};

	// Enum Engine.EInputEvent
	// NumValues: 0x0006
	enum class EInputEvent : uint8_t
	{
		IE_Pressed = 0,
		IE_Released = 1,
		IE_Repeat = 2,
		IE_DoubleClick = 3,
		IE_Axis = 4,
		IE_MAX = 5,
	};

	// Enum Engine.EFastArraySerializerDeltaFlags
	// NumValues: 0x0005
	enum class EFastArraySerializerDeltaFlags : uint8_t
	{
		None = 0,
		HasBeenSerialized = 1,
		HasDeltaBeenRequested = 2,
		IsUsingDeltaSerialization = 4,
		EFastArraySerializerDeltaFlags_MAX = 5,
	};

	// Enum Engine.ENetRole
	// NumValues: 0x0005
	enum class ENetRole : uint8_t
	{
		ROLE_None = 0,
		ROLE_SimulatedProxy = 1,
		ROLE_AutonomousProxy = 2,
		ROLE_Authority = 3,
		ROLE_MAX = 4,
	};

	// Enum Engine.EAttachLocation
	// NumValues: 0x0005
	enum class EAttachLocation : uint8_t
	{
		KeepRelativeOffset = 0,
		KeepWorldPosition = 1,
		SnapToTarget = 2,
		SnapToTargetIncludingScale = 3,
		EAttachLocation_MAX = 4,
	};

	// Enum Engine.EAttachmentRule
	// NumValues: 0x0004
	enum class EAttachmentRule : uint8_t
	{
		KeepRelative = 0,
		KeepWorld = 1,
		SnapToTarget = 2,
		EAttachmentRule_MAX = 3,
	};

	// Enum Engine.EDetachmentRule
	// NumValues: 0x0003
	enum class EDetachmentRule : uint8_t
	{
		KeepRelative = 0,
		KeepWorld = 1,
		EDetachmentRule_MAX = 2,
	};

	// Enum Engine.ENetDormancy
	// NumValues: 0x0007
	enum class ENetDormancy : uint8_t
	{
		DORM_Never = 0,
		DORM_Awake = 1,
		DORM_DormantAll = 2,
		DORM_DormantPartial = 3,
		DORM_Initial = 4,
		DORM_DormantAll_KeelChannel = 5,
		DORM_MAX = 6,
	};

	// Enum Engine.EAutoReceiveInput
	// NumValues: 0x000A
	enum class EAutoReceiveInput : uint8_t
	{
		Disabled = 0,
		Player0 = 1,
		Player1 = 2,
		Player2 = 3,
		Player3 = 4,
		Player4 = 5,
		Player5 = 6,
		Player6 = 7,
		Player7 = 8,
		EAutoReceiveInput_MAX = 9,
	};

	// Enum Engine.ESpawnActorCollisionHandlingMethod
	// NumValues: 0x0006
	enum class ESpawnActorCollisionHandlingMethod : uint8_t
	{
		Undefined = 0,
		AlwaysSpawn = 1,
		AdjustIfPossibleButAlwaysSpawn = 2,
		AdjustIfPossibleButDontSpawnIfColliding = 3,
		DontSpawnIfColliding = 4,
		ESpawnActorCollisionHandlingMethod_MAX = 5,
	};

	// Enum Engine.ERotatorQuantization
	// NumValues: 0x0003
	enum class ERotatorQuantization : uint8_t
	{
		ByteComponents = 0,
		ShortComponents = 1,
		ERotatorQuantization_MAX = 2,
	};

	// Enum Engine.EVectorQuantization
	// NumValues: 0x0004
	enum class EVectorQuantization : uint8_t
	{
		RoundWholeNumber = 0,
		RoundOneDecimal = 1,
		RoundTwoDecimals = 2,
		EVectorQuantization_MAX = 3,
	};

	// Enum Engine.EActorUpdateOverlapsMethod
	// NumValues: 0x0005
	enum class EActorUpdateOverlapsMethod : uint8_t
	{
		UseConfigDefault = 0,
		AlwaysUpdate = 1,
		OnlyUpdateMovable = 2,
		NeverUpdate = 3,
		EActorUpdateOverlapsMethod_MAX = 4,
	};

	// Enum Engine.EAutoPossessAI
	// NumValues: 0x0005
	enum class EAutoPossessAI : uint8_t
	{
		Disabled = 0,
		PlacedInWorld = 1,
		Spawned = 2,
		PlacedInWorldOrSpawned = 3,
		EAutoPossessAI_MAX = 4,
	};

	// Enum Engine.ECollisionChannel
	// NumValues: 0x0022
	enum class ECollisionChannel : uint8_t
	{
		ECC_WorldStatic = 0,
		ECC_WorldDynamic = 1,
		ECC_Pawn = 2,
		ECC_Visibility = 3,
		ECC_Camera = 4,
		ECC_PhysicsBody = 5,
		ECC_Vehicle = 6,
		ECC_Destructible = 7,
		ECC_EngineTraceChannel1 = 8,
		ECC_EngineTraceChannel2 = 9,
		ECC_EngineTraceChannel3 = 10,
		ECC_EngineTraceChannel4 = 11,
		ECC_EngineTraceChannel5 = 12,
		ECC_EngineTraceChannel6 = 13,
		ECC_GameTraceChannel1 = 14,
		ECC_GameTraceChannel2 = 15,
		ECC_GameTraceChannel3 = 16,
		ECC_GameTraceChannel4 = 17,
		ECC_GameTraceChannel5 = 18,
		ECC_GameTraceChannel6 = 19,
		ECC_GameTraceChannel7 = 20,
		ECC_GameTraceChannel8 = 21,
		ECC_GameTraceChannel9 = 22,
		ECC_GameTraceChannel10 = 23,
		ECC_GameTraceChannel11 = 24,
		ECC_GameTraceChannel12 = 25,
		ECC_GameTraceChannel13 = 26,
		ECC_GameTraceChannel14 = 27,
		ECC_GameTraceChannel15 = 28,
		ECC_GameTraceChannel16 = 29,
		ECC_GameTraceChannel17 = 30,
		ECC_GameTraceChannel18 = 31,
		ECC_OverlapAll_Deprecated = 32,
		ECC_MAX = 33,
	};

	// Enum Engine.ECollisionResponse
	// NumValues: 0x0004
	enum class ECollisionResponse : uint8_t
	{
		ECR_Ignore = 0,
		ECR_Overlap = 1,
		ECR_Block = 2,
		ECR_MAX = 3,
	};

	// Enum Engine.EAnimLinkMethod
	// NumValues: 0x0004
	enum class EAnimLinkMethod : uint8_t
	{
		Absolute = 0,
		Relative = 1,
		Proportional = 2,
		EAnimLinkMethod_MAX = 3,
	};

	// Enum Engine.ENotifyFilterType
	// NumValues: 0x0004
	enum class ENotifyFilterType : uint8_t
	{
		NoFiltering = 0,
		LOD = 1,
		AnimLOD = 2,
		ENotifyFilterType_MAX = 3,
	};

	// Enum Engine.EMontageNotifyTickType
	// NumValues: 0x0003
	enum class EMontageNotifyTickType : uint8_t
	{
		Queued = 0,
		BranchingPoint = 1,
		EMontageNotifyTickType_MAX = 2,
	};

	// Enum Engine.ERichCurveExtrapolation
	// NumValues: 0x0007
	enum class ERichCurveExtrapolation : uint8_t
	{
		RCCE_Cycle = 0,
		RCCE_CycleWithOffset = 1,
		RCCE_Oscillate = 2,
		RCCE_Linear = 3,
		RCCE_Constant = 4,
		RCCE_None = 5,
		RCCE_MAX = 6,
	};

	// Enum Engine.ERichCurveTangentWeightMode
	// NumValues: 0x0005
	enum class ERichCurveTangentWeightMode : uint8_t
	{
		RCTWM_WeightedNone = 0,
		RCTWM_WeightedArrive = 1,
		RCTWM_WeightedLeave = 2,
		RCTWM_WeightedBoth = 3,
		RCTWM_MAX = 4,
	};

	// Enum Engine.ERichCurveTangentMode
	// NumValues: 0x0005
	enum class ERichCurveTangentMode : uint8_t
	{
		RCTM_Auto = 0,
		RCTM_User = 1,
		RCTM_Break = 2,
		RCTM_None = 3,
		RCTM_MAX = 4,
	};

	// Enum Engine.ERichCurveInterpMode
	// NumValues: 0x0005
	enum class ERichCurveInterpMode : uint8_t
	{
		RCIM_Linear = 0,
		RCIM_Constant = 1,
		RCIM_Cubic = 2,
		RCIM_None = 3,
		RCIM_MAX = 4,
	};

	// Enum Engine.TextureGroup
	// NumValues: 0x0035
	enum class ETextureGroup : uint8_t
	{
		TEXTUREGROUP_World = 0,
		TEXTUREGROUP_WorldNormalMap = 1,
		TEXTUREGROUP_WorldSpecular = 2,
		TEXTUREGROUP_Character = 3,
		TEXTUREGROUP_CharacterNormalMap = 4,
		TEXTUREGROUP_CharacterSpecular = 5,
		TEXTUREGROUP_Weapon = 6,
		TEXTUREGROUP_WeaponNormalMap = 7,
		TEXTUREGROUP_WeaponSpecular = 8,
		TEXTUREGROUP_Vehicle = 9,
		TEXTUREGROUP_VehicleNormalMap = 10,
		TEXTUREGROUP_VehicleSpecular = 11,
		TEXTUREGROUP_Cinematic = 12,
		TEXTUREGROUP_Effects = 13,
		TEXTUREGROUP_EffectsNotFiltered = 14,
		TEXTUREGROUP_Skybox = 15,
		TEXTUREGROUP_UI = 16,
		TEXTUREGROUP_Lightmap = 17,
		TEXTUREGROUP_RenderTarget = 18,
		TEXTUREGROUP_MobileFlattened = 19,
		TEXTUREGROUP_ProcBuilding_Face = 20,
		TEXTUREGROUP_ProcBuilding_LightMap = 21,
		TEXTUREGROUP_Shadowmap = 22,
		TEXTUREGROUP_ColorLookupTable = 23,
		TEXTUREGROUP_Terrain_Heightmap = 24,
		TEXTUREGROUP_Terrain_Weightmap = 25,
		TEXTUREGROUP_Bokeh = 26,
		TEXTUREGROUP_IESLightProfile = 27,
		TEXTUREGROUP_Pixels2D = 28,
		TEXTUREGROUP_HierarchicalLOD = 29,
		TEXTUREGROUP_Impostor = 30,
		TEXTUREGROUP_ImpostorNormalDepth = 31,
		TEXTUREGROUP_8BitData = 32,
		TEXTUREGROUP_16BitData = 33,
		TEXTUREGROUP_WorldAniso = 34,
		TEXTUREGROUP_WorldNoSmallPak = 35,
		TEXTUREGROUP_Grass = 36,
		TEXTUREGROUP_Tree = 37,
		TEXTUREGROUP_Building = 38,
		TEXTUREGROUP_Stone = 39,
		TEXTUREGROUP_Prop = 40,
		TEXTUREGROUP_Decal = 41,
		TEXTUREGROUP_Project01 = 42,
		TEXTUREGROUP_Project02 = 43,
		TEXTUREGROUP_Project03 = 44,
		TEXTUREGROUP_Project04 = 45,
		TEXTUREGROUP_Project05 = 46,
		TEXTUREGROUP_Project06 = 47,
		TEXTUREGROUP_Project07 = 48,
		TEXTUREGROUP_Project08 = 49,
		TEXTUREGROUP_Project09 = 50,
		TEXTUREGROUP_Project10 = 51,
		TEXTUREGROUP_MAX = 52,
	};

	// Enum Engine.ERelativeTransformSpace
	// NumValues: 0x0005
	enum class ERelativeTransformSpace : uint8_t
	{
		RTS_World = 0,
		RTS_Actor = 1,
		RTS_Component = 2,
		RTS_ParentBoneSpace = 3,
		RTS_MAX = 4,
	};

	// Enum Engine.EComponentMobility
	// NumValues: 0x0004
	enum class EComponentMobility : uint8_t
	{
		Static = 0,
		Stationary = 1,
		Movable = 2,
		EComponentMobility_MAX = 3,
	};

	// Enum Engine.EDetailMode
	// NumValues: 0x0004
	enum class EDetailMode : uint8_t
	{
		DM_Low = 0,
		DM_Medium = 1,
		DM_High = 2,
		DM_MAX = 3,
	};

	// Enum Engine.EAspectRatioAxisConstraint
	// NumValues: 0x0004
	enum class EAspectRatioAxisConstraint : uint8_t
	{
		AspectRatio_MaintainYFOV = 0,
		AspectRatio_MaintainXFOV = 1,
		AspectRatio_MajorAxisFOV = 2,
		AspectRatio_MAX = 3,
	};

	// Enum Engine.EAlphaBlendOption
	// NumValues: 0x0010
	enum class EAlphaBlendOption : uint8_t
	{
		Linear = 0,
		Cubic = 1,
		HermiteCubic = 2,
		Sinusoidal = 3,
		QuadraticInOut = 4,
		CubicInOut = 5,
		QuarticInOut = 6,
		QuinticInOut = 7,
		CircularIn = 8,
		CircularOut = 9,
		CircularInOut = 10,
		ExpIn = 11,
		ExpOut = 12,
		ExpInOut = 13,
		Custom = 14,
		EAlphaBlendOption_MAX = 15,
	};

	// Enum Engine.EAnimGroupRole
	// NumValues: 0x0006
	enum class EAnimGroupRole : uint8_t
	{
		CanBeLeader = 0,
		AlwaysFollower = 1,
		AlwaysLeader = 2,
		TransitionLeader = 3,
		TransitionFollower = 4,
		EAnimGroupRole_MAX = 5,
	};

	// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
	// NumValues: 0x0003
	enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
	{
		LinkedLayers = 0,
		LinkedAnimGraph = 1,
		EPreviewAnimationBlueprintApplicationMethod_MAX = 2,
	};

	// Enum Engine.AnimationKeyFormat
	// NumValues: 0x0004
	enum class EAnimationKeyFormat : uint8_t
	{
		AKF_ConstantKeyLerp = 0,
		AKF_VariableKeyLerp = 1,
		AKF_PerTrackCompression = 2,
		AKF_MAX = 3,
	};

	// Enum Engine.ERawCurveTrackTypes
	// NumValues: 0x0004
	enum class ERawCurveTrackTypes : uint8_t
	{
		RCT_Float = 0,
		RCT_Vector = 1,
		RCT_Transform = 2,
		RCT_MAX = 3,
	};

	// Enum Engine.EAnimAssetCurveFlags
	// NumValues: 0x0009
	enum class EAnimAssetCurveFlags : uint8_t
	{
		AACF_NONE = 0,
		AACF_DriveMorphTarget_DEPRECATED = 1,
		AACF_DriveAttribute_DEPRECATED = 2,
		AACF_Editable = 4,
		AACF_DriveMaterial_DEPRECATED = 8,
		AACF_Metadata = 16,
		AACF_DriveTrack = 32,
		AACF_Disabled = 64,
		AACF_MAX = 65,
	};

	// Enum Engine.AnimationCompressionFormat
	// NumValues: 0x0008
	enum class EAnimationCompressionFormat : uint8_t
	{
		ACF_None = 0,
		ACF_Float96NoW = 1,
		ACF_Fixed48NoW = 2,
		ACF_IntervalFixed32NoW = 3,
		ACF_Fixed32NoW = 4,
		ACF_Float32NoW = 5,
		ACF_Identity = 6,
		ACF_MAX = 7,
	};

	// Enum Engine.EAdditiveBasePoseType
	// NumValues: 0x0005
	enum class EAdditiveBasePoseType : uint8_t
	{
		ABPT_None = 0,
		ABPT_RefPose = 1,
		ABPT_AnimScaled = 2,
		ABPT_AnimFrame = 3,
		ABPT_MAX = 4,
	};

	// Enum Engine.ERootMotionMode
	// NumValues: 0x0005
	enum class ERootMotionMode : uint8_t
	{
		NoRootMotionExtraction = 0,
		IgnoreRootMotion = 1,
		RootMotionFromEverything = 2,
		RootMotionFromMontagesOnly = 3,
		ERootMotionMode_MAX = 4,
	};

	// Enum Engine.ERootMotionRootLock
	// NumValues: 0x0004
	enum class ERootMotionRootLock : uint8_t
	{
		RefPose = 0,
		AnimFirstFrame = 1,
		Zero = 2,
		ERootMotionRootLock_MAX = 3,
	};

	// Enum Engine.EMontagePlayReturnType
	// NumValues: 0x0003
	enum class EMontagePlayReturnType : uint8_t
	{
		MontageLength = 0,
		Duration = 1,
		EMontagePlayReturnType_MAX = 2,
	};

	// Enum Engine.EDrawDebugItemType
	// NumValues: 0x0006
	enum class EDrawDebugItemType : uint8_t
	{
		DirectionalArrow = 0,
		Sphere = 1,
		Line = 2,
		OnScreenMessage = 3,
		CoordinateSystem = 4,
		EDrawDebugItemType_MAX = 5,
	};

	// Enum Engine.EMontageSubStepResult
	// NumValues: 0x0005
	enum class EMontageSubStepResult : uint8_t
	{
		Moved = 0,
		NotMoved = 1,
		InvalidSection = 2,
		InvalidMontage = 3,
		EMontageSubStepResult_MAX = 4,
	};

	// Enum Engine.EAnimNotifyEventType
	// NumValues: 0x0003
	enum class EAnimNotifyEventType : uint8_t
	{
		Begin = 0,
		End = 1,
		EAnimNotifyEventType_MAX = 2,
	};

	// Enum Engine.EInertializationSpace
	// NumValues: 0x0004
	enum class EInertializationSpace : uint8_t
	{
		Default = 0,
		WorldSpace = 1,
		WorldRotation = 2,
		EInertializationSpace_MAX = 3,
	};

	// Enum Engine.EInertializationBoneState
	// NumValues: 0x0004
	enum class EInertializationBoneState : uint8_t
	{
		Invalid = 0,
		Valid = 1,
		Excluded = 2,
		EInertializationBoneState_MAX = 3,
	};

	// Enum Engine.EInertializationState
	// NumValues: 0x0004
	enum class EInertializationState : uint8_t
	{
		Inactive = 0,
		Pending = 1,
		Active = 2,
		EInertializationState_MAX = 3,
	};

	// Enum Engine.EEvaluatorMode
	// NumValues: 0x0004
	enum class EEvaluatorMode : uint8_t
	{
		EM_Standard = 0,
		EM_Freeze = 1,
		EM_DelayedFreeze = 2,
		EM_MAX = 3,
	};

	// Enum Engine.EEvaluatorDataSource
	// NumValues: 0x0003
	enum class EEvaluatorDataSource : uint8_t
	{
		EDS_SourcePose = 0,
		EDS_DestinationPose = 1,
		EDS_MAX = 2,
	};

	// Enum Engine.ECopyType
	// NumValues: 0x0005
	enum class ECopyType : uint8_t
	{
		MemCopy = 0,
		BoolProperty = 1,
		StructProperty = 2,
		ObjectProperty = 3,
		ECopyType_MAX = 4,
	};

	// Enum Engine.EPostCopyOperation
	// NumValues: 0x0003
	enum class EPostCopyOperation : uint8_t
	{
		None = 0,
		LogicalNegateBool = 1,
		EPostCopyOperation_MAX = 2,
	};

	// Enum Engine.EPinHidingMode
	// NumValues: 0x0005
	enum class EPinHidingMode : uint8_t
	{
		NeverAsPin = 0,
		PinHiddenByDefault = 1,
		PinShownByDefault = 2,
		AlwaysAsPin = 3,
		EPinHidingMode_MAX = 4,
	};

	// Enum Engine.AnimPhysCollisionType
	// NumValues: 0x0005
	enum class EAnimPhysCollisionType : uint8_t
	{
		CoM = 0,
		CustomSphere = 1,
		InnerSphere = 2,
		OuterSphere = 3,
		AnimPhysCollisionType_MAX = 4,
	};

	// Enum Engine.AnimPhysTwistAxis
	// NumValues: 0x0004
	enum class EAnimPhysTwistAxis : uint8_t
	{
		AxisX = 0,
		AxisY = 1,
		AxisZ = 2,
		AnimPhysTwistAxis_MAX = 3,
	};

	// Enum Engine.ETypeAdvanceAnim
	// NumValues: 0x0004
	enum class ETypeAdvanceAnim : uint8_t
	{
		ETAA_Default = 0,
		ETAA_Finished = 1,
		ETAA_Looped = 2,
		ETAA_MAX = 3,
	};

	// Enum Engine.ETransitionLogicType
	// NumValues: 0x0004
	enum class ETransitionLogicType : uint8_t
	{
		TLT_StandardBlend = 0,
		TLT_Inertialization = 1,
		TLT_Custom = 2,
		TLT_MAX = 3,
	};

	// Enum Engine.ETransitionBlendMode
	// NumValues: 0x0003
	enum class ETransitionBlendMode : uint8_t
	{
		TBM_Linear = 0,
		TBM_Cubic = 1,
		TBM_MAX = 2,
	};

	// Enum Engine.EComponentType
	// NumValues: 0x000C
	enum class EComponentType : uint8_t
	{
		None = 0,
		TranslationX = 1,
		TranslationY = 2,
		TranslationZ = 3,
		RotationX = 4,
		RotationY = 5,
		RotationZ = 6,
		Scale = 7,
		ScaleX = 8,
		ScaleY = 9,
		ScaleZ = 10,
		EComponentType_MAX = 11,
	};

	// Enum Engine.EAxisOption
	// NumValues: 0x0008
	enum class EAxisOption : uint8_t
	{
		X = 0,
		Y = 1,
		Z = 2,
		X_Neg = 3,
		Y_Neg = 4,
		Z_Neg = 5,
		Custom = 6,
		EAxisOption_MAX = 7,
	};

	// Enum Engine.EAnimInterpolationType
	// NumValues: 0x0003
	enum class EAnimInterpolationType : uint8_t
	{
		Linear = 0,
		Step = 1,
		EAnimInterpolationType_MAX = 2,
	};

	// Enum Engine.ECurveBlendOption
	// NumValues: 0x0004
	enum class ECurveBlendOption : uint8_t
	{
		MaxWeight = 0,
		NormalizeByWeight = 1,
		BlendByWeight = 2,
		ECurveBlendOption_MAX = 3,
	};

	// Enum Engine.EAdditiveAnimationType
	// NumValues: 0x0004
	enum class EAdditiveAnimationType : uint8_t
	{
		AAT_None = 0,
		AAT_LocalSpaceBase = 1,
		AAT_RotationOffsetMeshSpace = 2,
		AAT_MAX = 3,
	};

	// Enum Engine.EBoneRotationSource
	// NumValues: 0x0004
	enum class EBoneRotationSource : uint8_t
	{
		BRS_KeepComponentSpaceRotation = 0,
		BRS_KeepLocalSpaceRotation = 1,
		BRS_CopyFromTarget = 2,
		BRS_MAX = 3,
	};

	// Enum Engine.EBoneControlSpace
	// NumValues: 0x0005
	enum class EBoneControlSpace : uint8_t
	{
		BCS_WorldSpace = 0,
		BCS_ComponentSpace = 1,
		BCS_ParentBoneSpace = 2,
		BCS_BoneSpace = 3,
		BCS_MAX = 4,
	};

	// Enum Engine.EBoneAxis
	// NumValues: 0x0004
	enum class EBoneAxis : uint8_t
	{
		BA_X = 0,
		BA_Y = 1,
		BA_Z = 2,
		BA_MAX = 3,
	};

	// Enum Engine.EPrimaryAssetPakRule
	// NumValues: 0x0005
	enum class EPrimaryAssetPakRule : uint8_t
	{
		Default = 0,
		Necessary = 1,
		Auto = 2,
		Options = 3,
		EPrimaryAssetPakRule_MAX = 4,
	};

	// Enum Engine.EPrimaryAssetCookRule
	// NumValues: 0x0006
	enum class EPrimaryAssetCookRule : uint8_t
	{
		Unknown = 0,
		NeverCook = 1,
		DevelopmentCook = 2,
		DevelopmentAlwaysCook = 3,
		AlwaysCook = 4,
		EPrimaryAssetCookRule_MAX = 5,
	};

	// Enum Engine.EAttenuationShape
	// NumValues: 0x0005
	enum class EAttenuationShape : uint8_t
	{
		Sphere = 0,
		Capsule = 1,
		Box = 2,
		Cone = 3,
		EAttenuationShape_MAX = 4,
	};

	// Enum Engine.EAttenuationDistanceModel
	// NumValues: 0x0007
	enum class EAttenuationDistanceModel : uint8_t
	{
		Linear = 0,
		Logarithmic = 1,
		Inverse = 2,
		LogReverse = 3,
		NaturalSound = 4,
		Custom = 5,
		EAttenuationDistanceModel_MAX = 6,
	};

	// Enum Engine.EAudioFaderCurve
	// NumValues: 0x0006
	enum class EAudioFaderCurve : uint8_t
	{
		Linear = 0,
		Logarithmic = 1,
		SCurve = 2,
		Sin = 3,
		Count = 4,
		EAudioFaderCurve_MAX = 5,
	};

	// Enum Engine.EAudioComponentPlayState
	// NumValues: 0x0007
	enum class EAudioComponentPlayState : uint8_t
	{
		Playing = 0,
		Stopped = 1,
		Paused = 2,
		FadingIn = 3,
		FadingOut = 4,
		Count = 5,
		EAudioComponentPlayState_MAX = 6,
	};

	// Enum Engine.EMonoChannelUpmixMethod
	// NumValues: 0x0004
	enum class EMonoChannelUpmixMethod : uint8_t
	{
		Linear = 0,
		EqualPower = 1,
		FullVolume = 2,
		EMonoChannelUpmixMethod_MAX = 3,
	};

	// Enum Engine.EPanningMethod
	// NumValues: 0x0003
	enum class EPanningMethod : uint8_t
	{
		Linear = 0,
		EqualPower = 1,
		EPanningMethod_MAX = 2,
	};

	// Enum Engine.EVoiceSampleRate
	// NumValues: 0x0003
	enum class EVoiceSampleRate : uint32
	{
		Low16000Hz = 16000,
		Normal24000Hz = 24000,
		EVoiceSampleRate_MAX = 24001,
	};

	// Enum Engine.ReverbPreset
	// NumValues: 0x0018
	enum class EReverbPreset : uint8_t
	{
		REVERB_Default = 0,
		REVERB_Bathroom = 1,
		REVERB_StoneRoom = 2,
		REVERB_Auditorium = 3,
		REVERB_ConcertHall = 4,
		REVERB_Cave = 5,
		REVERB_Hallway = 6,
		REVERB_StoneCorridor = 7,
		REVERB_Alley = 8,
		REVERB_Forest = 9,
		REVERB_City = 10,
		REVERB_Mountains = 11,
		REVERB_Quarry = 12,
		REVERB_Plain = 13,
		REVERB_ParkingLot = 14,
		REVERB_SewerPipe = 15,
		REVERB_Underwater = 16,
		REVERB_SmallRoom = 17,
		REVERB_MediumRoom = 18,
		REVERB_LargeRoom = 19,
		REVERB_MediumHall = 20,
		REVERB_LargeHall = 21,
		REVERB_Plate = 22,
		REVERB_MAX = 23,
	};

	// Enum Engine.EBlendableLocation
	// NumValues: 0x0006
	enum class EBlendableLocation : uint8_t
	{
		BL_AfterTonemapping = 0,
		BL_BeforeTonemapping = 1,
		BL_BeforeTranslucency = 2,
		BL_ReplacingTonemapper = 3,
		BL_SSRInput = 4,
		BL_MAX = 5,
	};

	// Enum Engine.ENotifyTriggerMode
	// NumValues: 0x0004
	enum class ENotifyTriggerMode : uint8_t
	{
		AllAnimations = 0,
		HighestWeightedAnimation = 1,
		None = 2,
		ENotifyTriggerMode_MAX = 3,
	};

	// Enum Engine.EBlendSpaceAxis
	// NumValues: 0x0004
	enum class EBlendSpaceAxis : uint8_t
	{
		BSA_None = 0,
		BSA_X = 1,
		BSA_Y = 2,
		BSA_Max = 3,
	};

	// Enum Engine.EBlueprintNativizationFlag
	// NumValues: 0x0004
	enum class EBlueprintNativizationFlag : uint8_t
	{
		Disabled = 0,
		Dependency = 1,
		ExplicitlyEnabled = 2,
		EBlueprintNativizationFlag_MAX = 3,
	};

	// Enum Engine.EBlueprintCompileMode
	// NumValues: 0x0004
	enum class EBlueprintCompileMode : uint8_t
	{
		Default = 0,
		Development = 1,
		FinalRelease = 2,
		EBlueprintCompileMode_MAX = 3,
	};

	// Enum Engine.EBlueprintType
	// NumValues: 0x0007
	enum class EBlueprintType : uint8_t
	{
		BPTYPE_Normal = 0,
		BPTYPE_Const = 1,
		BPTYPE_MacroLibrary = 2,
		BPTYPE_Interface = 3,
		BPTYPE_LevelScript = 4,
		BPTYPE_FunctionLibrary = 5,
		BPTYPE_MAX = 6,
	};

	// Enum Engine.EBlueprintStatus
	// NumValues: 0x0007
	enum class EBlueprintStatus : uint8_t
	{
		BS_Unknown = 0,
		BS_Dirty = 1,
		BS_Error = 2,
		BS_UpToDate = 3,
		BS_BeingCreated = 4,
		BS_UpToDateWithWarnings = 5,
		BS_MAX = 6,
	};

	// Enum Engine.EDOFMode
	// NumValues: 0x0008
	enum class EDOFMode : uint8_t
	{
		Default = 0,
		SixDOF = 1,
		YZPlane = 2,
		XZPlane = 3,
		XYPlane = 4,
		CustomPlane = 5,
		None = 6,
		EDOFMode_MAX = 7,
	};

	// Enum Engine.EBodyCollisionResponse
	// NumValues: 0x0003
	enum class EBodyCollisionResponse : uint8_t
	{
		BodyCollision_Enabled = 0,
		BodyCollision_Disabled = 1,
		BodyCollision_MAX = 2,
	};

	// Enum Engine.EPhysicsType
	// NumValues: 0x0004
	enum class EPhysicsType : uint8_t
	{
		PhysType_Default = 0,
		PhysType_Kinematic = 1,
		PhysType_Simulated = 2,
		PhysType_MAX = 3,
	};

	// Enum Engine.ECollisionTraceFlag
	// NumValues: 0x0005
	enum class ECollisionTraceFlag : uint8_t
	{
		CTF_UseDefault = 0,
		CTF_UseSimpleAndComplex = 1,
		CTF_UseSimpleAsComplex = 2,
		CTF_UseComplexAsSimple = 3,
		CTF_MAX = 4,
	};

	// Enum Engine.EBrushType
	// NumValues: 0x0004
	enum class EBrushType : uint8_t
	{
		Brush_Default = 0,
		Brush_Add = 1,
		Brush_Subtract = 2,
		Brush_MAX = 3,
	};

	// Enum Engine.ECsgOper
	// NumValues: 0x0007
	enum class ECsgOper : uint8_t
	{
		CSG_Active = 0,
		CSG_Add = 1,
		CSG_Subtract = 2,
		CSG_Intersect = 3,
		CSG_Deintersect = 4,
		CSG_None = 5,
		CSG_MAX = 6,
	};

	// Enum Engine.EInitialOscillatorOffset
	// NumValues: 0x0003
	enum class EInitialOscillatorOffset : uint8_t
	{
		EOO_OffsetRandom = 0,
		EOO_OffsetZero = 1,
		EOO_MAX = 2,
	};

	// Enum Engine.EOscillatorWaveform
	// NumValues: 0x0003
	enum class EOscillatorWaveform : uint8_t
	{
		SineWave = 0,
		PerlinNoise = 1,
		EOscillatorWaveform_MAX = 2,
	};

	// Enum Engine.ECameraAlphaBlendMode
	// NumValues: 0x0003
	enum class ECameraAlphaBlendMode : uint8_t
	{
		CABM_Linear = 0,
		CABM_Cubic = 1,
		CABM_MAX = 2,
	};

	// Enum Engine.ECameraAnimPlaySpace
	// NumValues: 0x0004
	enum class ECameraAnimPlaySpace : uint8_t
	{
		CameraLocal = 0,
		World = 1,
		UserDefined = 2,
		ECameraAnimPlaySpace_MAX = 3,
	};

	// Enum Engine.ECameraProjectionMode
	// NumValues: 0x0003
	enum class ECameraProjectionMode : uint8_t
	{
		Perspective = 0,
		Orthographic = 1,
		ECameraProjectionMode_MAX = 2,
	};

	// Enum Engine.ECloudStorageDelegate
	// NumValues: 0x0008
	enum class ECloudStorageDelegate : uint8_t
	{
		CSD_KeyValueReadComplete = 0,
		CSD_KeyValueWriteComplete = 1,
		CSD_ValueChanged = 2,
		CSD_DocumentQueryComplete = 3,
		CSD_DocumentReadComplete = 4,
		CSD_DocumentWriteComplete = 5,
		CSD_DocumentConflictDetected = 6,
		CSD_MAX = 7,
	};

	// Enum Engine.EAngularDriveMode
	// NumValues: 0x0003
	enum class EAngularDriveMode : uint8_t
	{
		SLERP = 0,
		TwistAndSwing = 1,
		EAngularDriveMode_MAX = 2,
	};

	// Enum Engine.ELinearConstraintMotion
	// NumValues: 0x0004
	enum class ELinearConstraintMotion : uint8_t
	{
		LCM_Free = 0,
		LCM_Limited = 1,
		LCM_Locked = 2,
		LCM_MAX = 3,
	};

	// Enum Engine.ECurveTableMode
	// NumValues: 0x0004
	enum class ECurveTableMode : uint8_t
	{
		Empty = 0,
		SimpleCurves = 1,
		RichCurves = 2,
		ECurveTableMode_MAX = 3,
	};

	// Enum Engine.EEvaluateCurveTableResult
	// NumValues: 0x0003
	enum class EEvaluateCurveTableResult : uint8_t
	{
		RowFound = 0,
		RowNotFound = 1,
		EEvaluateCurveTableResult_MAX = 2,
	};

	// Enum Engine.EGrammaticalNumber
	// NumValues: 0x0003
	enum class EGrammaticalNumber : uint8_t
	{
		Singular = 0,
		Plural = 1,
		EGrammaticalNumber_MAX = 2,
	};

	// Enum Engine.EGrammaticalGender
	// NumValues: 0x0005
	enum class EGrammaticalGender : uint8_t
	{
		Neuter = 0,
		Masculine = 1,
		Feminine = 2,
		Mixed = 3,
		EGrammaticalGender_MAX = 4,
	};

	// Enum Engine.DistributionParamMode
	// NumValues: 0x0004
	enum class EDistributionParamMode : uint8_t
	{
		DPM_Normal = 0,
		DPM_Abs = 1,
		DPM_Direct = 2,
		DPM_MAX = 3,
	};

	// Enum Engine.EDistributionVectorMirrorFlags
	// NumValues: 0x0004
	enum class EDistributionVectorMirrorFlags : uint8_t
	{
		EDVMF_Same = 0,
		EDVMF_Different = 1,
		EDVMF_Mirror = 2,
		EDVMF_MAX = 3,
	};

	// Enum Engine.EDistributionVectorLockFlags
	// NumValues: 0x0006
	enum class EDistributionVectorLockFlags : uint8_t
	{
		EDVLF_None = 0,
		EDVLF_XY = 1,
		EDVLF_XZ = 2,
		EDVLF_YZ = 3,
		EDVLF_XYZ = 4,
		EDVLF_MAX = 5,
	};

	// Enum Engine.ENodeEnabledState
	// NumValues: 0x0004
	enum class ENodeEnabledState : uint8_t
	{
		Enabled = 0,
		Disabled = 1,
		DevelopmentOnly = 2,
		ENodeEnabledState_MAX = 3,
	};

	// Enum Engine.ENodeAdvancedPins
	// NumValues: 0x0004
	enum class ENodeAdvancedPins : uint8_t
	{
		NoPins = 0,
		Shown = 1,
		Hidden = 2,
		ENodeAdvancedPins_MAX = 3,
	};

	// Enum Engine.ENodeTitleType
	// NumValues: 0x0006
	enum class ENodeTitleType : uint8_t
	{
		FullTitle = 0,
		ListView = 1,
		EditableTitle = 2,
		MenuTitle = 3,
		MAX_TitleTypes = 4,
		ENodeTitleType_MAX = 5,
	};

	// Enum Engine.EPinContainerType
	// NumValues: 0x0005
	enum class EPinContainerType : uint8_t
	{
		None = 0,
		Array = 1,
		Set = 2,
		Map = 3,
		EPinContainerType_MAX = 4,
	};

	// Enum Engine.EEdGraphPinDirection
	// NumValues: 0x0003
	enum class EEdGraphPinDirection : uint8_t
	{
		EGPD_Input = 0,
		EGPD_Output = 1,
		EGPD_MAX = 2,
	};

	// Enum Engine.EBlueprintPinStyleType
	// NumValues: 0x0003
	enum class EBlueprintPinStyleType : uint8_t
	{
		BPST_Original = 0,
		BPST_VariantA = 1,
		BPST_MAX = 2,
	};

	// Enum Engine.ECanCreateConnectionResponse
	// NumValues: 0x0007
	enum class ECanCreateConnectionResponse : uint8_t
	{
		CONNECT_RESPONSE_MAKE = 0,
		CONNECT_RESPONSE_DISALLOW = 1,
		CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
		CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
		CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
		CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
		CONNECT_RESPONSE_MAX = 6,
	};

	// Enum Engine.EGraphType
	// NumValues: 0x0006
	enum class EGraphType : uint8_t
	{
		GT_Function = 0,
		GT_Ubergraph = 1,
		GT_Macro = 2,
		GT_Animation = 3,
		GT_StateMachine = 4,
		GT_MAX = 5,
	};

	// Enum Engine.ELowMemoryWarningLevel
	// NumValues: 0x0006
	enum class ELowMemoryWarningLevel : uint8_t
	{
		None = 0,
		Light = 1,
		Moderate = 2,
		Serious = 3,
		Critical = 4,
		ELowMemoryWarningLevel_MAX = 5,
	};

	// Enum Engine.ETransitionType
	// NumValues: 0x0008
	enum class ETransitionType : uint8_t
	{
		None = 0,
		Paused = 1,
		Loading = 2,
		Saving = 3,
		Connecting = 4,
		Precaching = 5,
		WaitingToConnect = 6,
		MAX = 7,
	};

	// Enum Engine.EFullyLoadPackageType
	// NumValues: 0x0006
	enum class EFullyLoadPackageType : uint8_t
	{
		FULLYLOAD_Map = 0,
		FULLYLOAD_Game_PreLoadClass = 1,
		FULLYLOAD_Game_PostLoadClass = 2,
		FULLYLOAD_Always = 3,
		FULLYLOAD_Mutator = 4,
		FULLYLOAD_MAX = 5,
	};

	// Enum Engine.EViewModeIndex
	// NumValues: 0x0022
	enum class EViewModeIndex : uint8_t
	{
		VMI_BrushWireframe = 0,
		VMI_Wireframe = 1,
		VMI_Unlit = 2,
		VMI_Lit = 3,
		VMI_Lit_DetailLighting = 4,
		VMI_LightingOnly = 5,
		VMI_LightComplexity = 6,
		VMI_ShaderComplexity = 8,
		VMI_LightmapDensity = 9,
		VMI_LitLightmapDensity = 10,
		VMI_ReflectionOverride = 11,
		VMI_VisualizeBuffer = 12,
		VMI_StationaryLightOverlap = 14,
		VMI_CollisionPawn = 15,
		VMI_CollisionVisibility = 16,
		VMI_LODColoration = 18,
		VMI_QuadOverdraw = 19,
		VMI_PrimitiveDistanceAccuracy = 20,
		VMI_MeshUVDensityAccuracy = 21,
		VMI_ShaderComplexityWithQuadOverdraw = 22,
		VMI_HLODColoration = 23,
		VMI_GroupLODColoration = 24,
		VMI_MaterialTextureScaleAccuracy = 25,
		VMI_RequiredTextureResolution = 26,
		VMI_PathTracing = 27,
		VMI_RayTracingDebug = 28,
		VMI_PRT = 29,
		VMI_PRT_Normal = 30,
		VMI_PRT_PbCheck = 31,
		VMI_LIGHT_Check = 32,
		VMI_MeshTextureDensity = 33,
		VMI_RayTracingCausticsDebug = 34,
		VMI_Max = 35,
		VMI_Unknown = 255,
	};

	// Enum Engine.ENetMode
	// NumValues: 0x0005
	enum class ENetMode : uint8_t
	{
		NM_Standalone = 0,
		NM_DedicatedServer = 1,
		NM_ListenServer = 2,
		NM_Client = 3,
		NM_MAX = 4,
	};

	// Enum Engine.EDemoPlayFailure
	// NumValues: 0x000A
	enum class EDemoPlayFailure : uint8_t
	{
		Generic = 0,
		DemoNotFound = 1,
		Corrupt = 2,
		InvalidVersion = 3,
		InitBase = 4,
		GameSpecificHeader = 5,
		ReplayStreamerInternal = 6,
		LoadMap = 7,
		Serialization = 8,
		EDemoPlayFailure_MAX = 9,
	};

	// Enum Engine.ETravelType
	// NumValues: 0x0004
	enum class ETravelType : uint8_t
	{
		TRAVEL_Absolute = 0,
		TRAVEL_Partial = 1,
		TRAVEL_Relative = 2,
		TRAVEL_MAX = 3,
	};

	// Enum Engine.ENetworkLagState
	// NumValues: 0x0003
	enum class ENetworkLagState : uint8_t
	{
		NotLagging = 0,
		Lagging = 1,
		ENetworkLagState_MAX = 2,
	};

	// Enum Engine.ETickListType
	// NumValues: 0x0008
	enum class ETickListType : uint8_t
	{
		AnyTickList = 0,
		EnabledTickList = 1,
		CoolingDownTickList = 2,
		DisabledTickList = 3,
		RescheduleTickList = 4,
		NewlySpawnedTickList = 5,
		MaxTypeCount = 6,
		ETickListType_MAX = 7,
	};

	// Enum Engine.EMouseCaptureMode
	// NumValues: 0x0006
	enum class EMouseCaptureMode : uint8_t
	{
		NoCapture = 0,
		CapturePermanently = 1,
		CapturePermanently_IncludingInitialMouseDown = 2,
		CaptureDuringMouseDown = 3,
		CaptureDuringRightMouseDown = 4,
		EMouseCaptureMode_MAX = 5,
	};

	// Enum Engine.ECustomTimeStepSynchronizationState
	// NumValues: 0x0005
	enum class ECustomTimeStepSynchronizationState : uint8_t
	{
		Closed = 0,
		Error = 1,
		Synchronized = 2,
		Synchronizing = 3,
		ECustomTimeStepSynchronizationState_MAX = 4,
	};

	// Enum Engine.EPrebakeShadowCascadeIndex
	// NumValues: 0x0006
	enum class EPrebakeShadowCascadeIndex : uint8_t
	{
		Cascade_None = 0,
		Cascade_0 = 1,
		Cascade_1 = 2,
		Cascade_2 = 3,
		Cascade_3 = 4,
		Cascade_MAX = 5,
	};

	// Enum Engine.ELODShadowBiasType
	// NumValues: 0x000A
	enum class ELODShadowBiasType : uint8_t
	{
		LOD_None = 0,
		LOD_0 = 1,
		LOD_1 = 2,
		LOD_2 = 3,
		LOD_3 = 4,
		LOD_4 = 5,
		LOD_5 = 6,
		LOD_6 = 7,
		LOD_7 = 8,
		LOD_MAX = 9,
	};

	// Enum Engine.EMaterialStencilOpType
	// NumValues: 0x0005
	enum class EMaterialStencilOpType : uint8_t
	{
		MSOP_None = 0,
		MSOP_Equal = 1,
		MSOP_NoEqual = 2,
		MSOP_Always = 4,
		MSOP_MAX = 5,
	};

	// Enum Engine.ELightMapAllocationPolicy
	// NumValues: 0x0003
	enum class ELightMapAllocationPolicy : uint8_t
	{
		LMAP_FixTexelLengthRatio = 0,
		LMAP_FixLightMapCount = 1,
		LMAP_MAX = 2,
	};

	// Enum Engine.ELightMapGroupingPolicy
	// NumValues: 0x0004
	enum class ELightMapGroupingPolicy : uint8_t
	{
		LMGP_DefaultUE = 0,
		LMGP_Distance = 1,
		LMGP_PreDefinedLightMapGroup = 2,
		LMGP_MAX = 3,
	};

	// Enum Engine.EWorldScale
	// NumValues: 0x0004
	enum class EWorldScale : uint8_t
	{
		MiniWorld = 0,
		MidWorld = 1,
		BigWorld = 2,
		EWorldScale_MAX = 3,
	};

	// Enum Engine.EMeshBufferAccess
	// NumValues: 0x0003
	enum class EMeshBufferAccess : uint8_t
	{
		Default = 0,
		ForceCPUAndGPU = 1,
		EMeshBufferAccess_MAX = 2,
	};

	// Enum Engine.EConstraintFrame
	// NumValues: 0x0003
	enum class EConstraintFrame : uint8_t
	{
		Frame1 = 0,
		Frame2 = 1,
		EConstraintFrame_MAX = 2,
	};

	// Enum Engine.EAngularConstraintMotion
	// NumValues: 0x0004
	enum class EAngularConstraintMotion : uint8_t
	{
		ACM_Free = 0,
		ACM_Limited = 1,
		ACM_Locked = 2,
		ACM_MAX = 3,
	};

	// Enum Engine.EComponentSocketType
	// NumValues: 0x0004
	enum class EComponentSocketType : uint8_t
	{
		Invalid = 0,
		Bone = 1,
		Socket = 2,
		EComponentSocketType_MAX = 3,
	};

	// Enum Engine.EPhysicalSurface
	// NumValues: 0x0041
	enum class EPhysicalSurface : uint8_t
	{
		SurfaceType_Default = 0,
		SurfaceType1 = 1,
		SurfaceType2 = 2,
		SurfaceType3 = 3,
		SurfaceType4 = 4,
		SurfaceType5 = 5,
		SurfaceType6 = 6,
		SurfaceType7 = 7,
		SurfaceType8 = 8,
		SurfaceType9 = 9,
		SurfaceType10 = 10,
		SurfaceType11 = 11,
		SurfaceType12 = 12,
		SurfaceType13 = 13,
		SurfaceType14 = 14,
		SurfaceType15 = 15,
		SurfaceType16 = 16,
		SurfaceType17 = 17,
		SurfaceType18 = 18,
		SurfaceType19 = 19,
		SurfaceType20 = 20,
		SurfaceType21 = 21,
		SurfaceType22 = 22,
		SurfaceType23 = 23,
		SurfaceType24 = 24,
		SurfaceType25 = 25,
		SurfaceType26 = 26,
		SurfaceType27 = 27,
		SurfaceType28 = 28,
		SurfaceType29 = 29,
		SurfaceType30 = 30,
		SurfaceType31 = 31,
		SurfaceType32 = 32,
		SurfaceType33 = 33,
		SurfaceType34 = 34,
		SurfaceType35 = 35,
		SurfaceType36 = 36,
		SurfaceType37 = 37,
		SurfaceType38 = 38,
		SurfaceType39 = 39,
		SurfaceType40 = 40,
		SurfaceType41 = 41,
		SurfaceType42 = 42,
		SurfaceType43 = 43,
		SurfaceType44 = 44,
		SurfaceType45 = 45,
		SurfaceType46 = 46,
		SurfaceType47 = 47,
		SurfaceType48 = 48,
		SurfaceType49 = 49,
		SurfaceType50 = 50,
		SurfaceType51 = 51,
		SurfaceType52 = 52,
		SurfaceType53 = 53,
		SurfaceType54 = 54,
		SurfaceType55 = 55,
		SurfaceType56 = 56,
		SurfaceType57 = 57,
		SurfaceType58 = 58,
		SurfaceType59 = 59,
		SurfaceType60 = 60,
		SurfaceType61 = 61,
		SurfaceType62 = 62,
		SurfaceType_Max = 63,
		EPhysicalSurface_MAX = 64,
	};

	// Enum Engine.EWalkableSlopeBehavior
	// NumValues: 0x0005
	enum class EWalkableSlopeBehavior : uint8_t
	{
		WalkableSlope_Default = 0,
		WalkableSlope_Increase = 1,
		WalkableSlope_Decrease = 2,
		WalkableSlope_Unwalkable = 3,
		WalkableSlope_Max = 4,
	};

	// Enum Engine.EUpdateRateShiftBucket
	// NumValues: 0x0008
	enum class EUpdateRateShiftBucket : uint8_t
	{
		ShiftBucket0 = 0,
		ShiftBucket1 = 1,
		ShiftBucket2 = 2,
		ShiftBucket3 = 3,
		ShiftBucket4 = 4,
		ShiftBucket5 = 5,
		ShiftBucketMax = 6,
		EUpdateRateShiftBucket_MAX = 7,
	};

	// Enum Engine.EShadowMapFlags
	// NumValues: 0x0003
	enum class EShadowMapFlags : uint8_t
	{
		SMF_None = 0,
		SMF_Streamed = 1,
		SMF_MAX = 2,
	};

	// Enum Engine.ELightMapPaddingType
	// NumValues: 0x0004
	enum class ELightMapPaddingType : uint8_t
	{
		LMPT_NormalPadding = 0,
		LMPT_PrePadding = 1,
		LMPT_NoPadding = 2,
		LMPT_MAX = 3,
	};

	// Enum Engine.ECollisionEnabled
	// NumValues: 0x0005
	enum class ECollisionEnabled : uint8_t
	{
		NoCollision = 0,
		QueryOnly = 1,
		PhysicsOnly = 2,
		QueryAndPhysics = 3,
		ECollisionEnabled_MAX = 4,
	};

	// Enum Engine.ETimelineSigType
	// NumValues: 0x0006
	enum class ETimelineSigType : uint8_t
	{
		ETS_EventSignature = 0,
		ETS_FloatSignature = 1,
		ETS_VectorSignature = 2,
		ETS_LinearColorSignature = 3,
		ETS_InvalidSignature = 4,
		ETS_MAX = 5,
	};

	// Enum Engine.ESleepFamily
	// NumValues: 0x0004
	enum class ESleepFamily : uint8_t
	{
		Normal = 0,
		Sensitive = 1,
		Custom = 2,
		ESleepFamily_MAX = 3,
	};

	// Enum Engine.ERadialImpulseFalloff
	// NumValues: 0x0003
	enum class ERadialImpulseFalloff : uint8_t
	{
		RIF_Constant = 0,
		RIF_Linear = 1,
		RIF_MAX = 2,
	};

	// Enum Engine.EFilterInterpolationType
	// NumValues: 0x0004
	enum class EFilterInterpolationType : uint8_t
	{
		BSIT_Average = 0,
		BSIT_Linear = 1,
		BSIT_Cubic = 2,
		BSIT_MAX = 3,
	};

	// Enum Engine.ETraceMaskFilter
	// NumValues: 0x0007
	enum class ETraceMaskFilter : uint8_t
	{
		TraceMaskFilter_0 = 0,
		TraceMaskFilter_1 = 1,
		TraceMaskFilter_2 = 2,
		TraceMaskFilter_3 = 3,
		TraceMaskFilter_4 = 4,
		TraceMaskFilter_5 = 5,
		TraceMaskFilter_MAX = 6,
	};

	// Enum Engine.EOverlapFilterOption
	// NumValues: 0x0004
	enum class EOverlapFilterOption : uint8_t
	{
		OverlapFilter_All = 0,
		OverlapFilter_DynamicOnly = 1,
		OverlapFilter_StaticOnly = 2,
		OverlapFilter_MAX = 3,
	};

	// Enum Engine.ENetworkSmoothingMode
	// NumValues: 0x0005
	enum class ENetworkSmoothingMode : uint8_t
	{
		Disabled = 0,
		Linear = 1,
		Exponential = 2,
		Replay = 3,
		ENetworkSmoothingMode_MAX = 4,
	};

	// Enum Engine.ELightingBuildMode
	// NumValues: 0x0003
	enum class ELightingBuildMode : uint8_t
	{
		LBM_Default = 0,
		LBM_BakeForHD = 1,
		LBM_MAX = 2,
	};

	// Enum Engine.ELightingBuildQuality
	// NumValues: 0x0005
	enum class ELightingBuildQuality : uint8_t
	{
		Quality_Preview = 0,
		Quality_Medium = 1,
		Quality_High = 2,
		Quality_Production = 3,
		Quality_MAX = 4,
	};

	// Enum Engine.ESimpleEFXLitQuality
	// NumValues: 0x0007
	enum class ESimpleEFXLitQuality : uint8_t
	{
		SIMPLE_EFX_LIT_QUALITY_NONE = 0,
		SIMPLE_EFX_LIT_QUALITY_LOW = 1,
		SIMPLE_EFX_LIT_QUALITY_MID = 2,
		SIMPLE_EFX_LIT_QUALITY_HIGH = 3,
		SIMPLE_EFX_LIT_QUALITY_ULTRA = 4,
		SIMPLE_EFX_LIT_QUALITY_COUNT = 5,
		SIMPLE_EFX_LIT_QUALITY_MAX = 6,
	};

	// Enum Engine.EMaterialShadingRate
	// NumValues: 0x0009
	enum class EMaterialShadingRate : uint8_t
	{
		MSR_1x1 = 0,
		MSR_2x1 = 1,
		MSR_1x2 = 2,
		MSR_2x2 = 3,
		MSR_4x2 = 4,
		MSR_2x4 = 5,
		MSR_4x4 = 6,
		MSR_Count = 7,
		MSR_MAX = 8,
	};

	// Enum Engine.EMaterialStencilCompare
	// NumValues: 0x000A
	enum class EMaterialStencilCompare : uint8_t
	{
		MSC_Less = 0,
		MSC_LessEqual = 1,
		MSC_Greater = 2,
		MSC_GreaterEqual = 3,
		MSC_Equal = 4,
		MSC_NotEqual = 5,
		MSC_Never = 6,
		MSC_Always = 7,
		MSC_Count = 8,
		MSC_MAX = 9,
	};

	// Enum Engine.EMaterialSamplerType
	// NumValues: 0x0012
	enum class EMaterialSamplerType : uint8_t
	{
		SAMPLERTYPE_Color = 0,
		SAMPLERTYPE_Grayscale = 1,
		SAMPLERTYPE_Alpha = 2,
		SAMPLERTYPE_Normal = 3,
		SAMPLERTYPE_Masks = 4,
		SAMPLERTYPE_DistanceFieldFont = 5,
		SAMPLERTYPE_LinearColor = 6,
		SAMPLERTYPE_LinearGrayscale = 7,
		SAMPLERTYPE_Data = 8,
		SAMPLERTYPE_External = 9,
		SAMPLERTYPE_VirtualColor = 10,
		SAMPLERTYPE_VirtualGrayscale = 11,
		SAMPLERTYPE_VirtualAlpha = 12,
		SAMPLERTYPE_VirtualNormal = 13,
		SAMPLERTYPE_VirtualMasks = 14,
		SAMPLERTYPE_VirtualLinearColor = 15,
		SAMPLERTYPE_VirtualLinearGrayscale = 16,
		SAMPLERTYPE_MAX = 17,
	};

	// Enum Engine.EMaterialTessellationMode
	// NumValues: 0x0004
	enum class EMaterialTessellationMode : uint8_t
	{
		MTM_NoTessellation = 0,
		MTM_FlatTessellation = 1,
		MTM_PNTriangles = 2,
		MTM_MAX = 3,
	};

	// Enum Engine.EMaterialShadingModel
	// NumValues: 0x0013
	enum class EMaterialShadingModel : uint8_t
	{
		MSM_Unlit = 0,
		MSM_DefaultLit = 1,
		MSM_Subsurface = 2,
		MSM_PreintegratedSkin = 3,
		MSM_ClearCoat = 4,
		MSM_SubsurfaceProfile = 5,
		MSM_TwoSidedFoliage = 6,
		MSM_Hair = 7,
		MSM_Mobile_Hair_Mask = 8,
		MSM_Mobile_Hair_Blend = 9,
		MSM_Cloth = 10,
		MSM_Eye = 11,
		MSM_SingleLayerWater = 12,
		MSM_SGSSS = 13,
		MSM_ThinTranslucent = 14,
		MSM_Weapon = 15,
		MSM_NUM = 16,
		MSM_FromMaterialExpression = 17,
		MSM_MAX = 18,
	};

	// Enum Engine.EParticleCollisionMode
	// NumValues: 0x0003
	enum class EParticleCollisionMode : uint8_t
	{
		SceneDepth = 0,
		DistanceField = 1,
		EParticleCollisionMode_MAX = 2,
	};

	// Enum Engine.ETrailWidthMode
	// NumValues: 0x0004
	enum class ETrailWidthMode : uint8_t
	{
		ETrailWidthMode_FromCentre = 0,
		ETrailWidthMode_FromFirst = 1,
		ETrailWidthMode_FromSecond = 2,
		ETrailWidthMode_MAX = 3,
	};

	// Enum Engine.EGBufferFormat
	// NumValues: 0x0005
	enum class EGBufferFormat : uint8_t
	{
		Force8BitsPerChannel = 0,
		Default = 1,
		HighPrecisionNormals = 3,
		Force16BitsPerChannel = 5,
		EGBufferFormat_MAX = 6,
	};

	// Enum Engine.ESceneCaptureCompositeMode
	// NumValues: 0x0004
	enum class ESceneCaptureCompositeMode : uint8_t
	{
		SCCM_Overwrite = 0,
		SCCM_Additive = 1,
		SCCM_Composite = 2,
		SCCM_MAX = 3,
	};

	// Enum Engine.ESceneCaptureSource
	// NumValues: 0x000B
	enum class ESceneCaptureSource : uint8_t
	{
		SCS_SceneColorHDR = 0,
		SCS_SceneColorHDRNoAlpha = 1,
		SCS_FinalColorLDR = 2,
		SCS_SceneColorSceneDepth = 3,
		SCS_SceneDepth = 4,
		SCS_DeviceDepth = 5,
		SCS_Normal = 6,
		SCS_BaseColor = 7,
		SCS_FinalColorHDR = 8,
		SCS_LinearColorLDR = 9,
		SCS_MAX = 10,
	};

	// Enum Engine.ETranslucentSortPolicy
	// NumValues: 0x0004
	enum class ETranslucentSortPolicy : uint8_t
	{
		SortByDistance = 0,
		SortByProjectedZ = 1,
		SortAlongAxis = 2,
		ETranslucentSortPolicy_MAX = 3,
	};

	// Enum Engine.ERefractionMode
	// NumValues: 0x0003
	enum class ERefractionMode : uint8_t
	{
		RM_IndexOfRefraction = 0,
		RM_PixelNormalOffset = 1,
		RM_MAX = 2,
	};

	// Enum Engine.ETranslucencyLightingMode
	// NumValues: 0x0007
	enum class ETranslucencyLightingMode : uint8_t
	{
		TLM_VolumetricNonDirectional = 0,
		TLM_VolumetricDirectional = 1,
		TLM_VolumetricPerVertexNonDirectional = 2,
		TLM_VolumetricPerVertexDirectional = 3,
		TLM_Surface = 4,
		TLM_SurfacePerPixelLighting = 5,
		TLM_MAX = 6,
	};

	// Enum Engine.ESamplerSourceMode
	// NumValues: 0x0004
	enum class ESamplerSourceMode : uint8_t
	{
		SSM_FromTextureAsset = 0,
		SSM_Wrap_WorldGroupSettings = 1,
		SSM_Clamp_WorldGroupSettings = 2,
		SSM_MAX = 3,
	};

	// Enum Engine.EMaterialLightingChannelMask
	// NumValues: 0x0006
	enum class EMaterialLightingChannelMask : uint8_t
	{
		MLCM_0000 = 0,
		MLCM_0001 = 1,
		MLCM_0010 = 2,
		MLCM_0100 = 4,
		MLCM_1000 = 8,
		MLCM_MAX = 9,
	};

	// Enum Engine.EMaterialWetnessMode
	// NumValues: 0x0003
	enum class EMaterialWetnessMode : uint8_t
	{
		MWM_None = 0,
		MWM_General = 1,
		MWM_MAX = 2,
	};

	// Enum Engine.EBlendMode
	// NumValues: 0x0009
	enum class EBlendMode : uint8_t
	{
		BLEND_Opaque = 0,
		BLEND_Masked = 1,
		BLEND_Translucent = 2,
		BLEND_Additive = 3,
		BLEND_Modulate = 4,
		BLEND_AlphaComposite = 5,
		BLEND_AlphaHoldout = 6,
		BLEND_AdditiveRGB = 7,
		BLEND_MAX = 8,
	};

	// Enum Engine.EOcclusionCombineMode
	// NumValues: 0x0003
	enum class EOcclusionCombineMode : uint8_t
	{
		OCM_Minimum = 0,
		OCM_Multiply = 1,
		OCM_MAX = 2,
	};

	// Enum Engine.ELightmapType
	// NumValues: 0x0004
	enum class ELightmapType : uint8_t
	{
		Default = 0,
		ForceSurface = 1,
		ForceVolumetric = 2,
		ELightmapType_MAX = 3,
	};

	// Enum Engine.EIndirectLightingCacheQuality
	// NumValues: 0x0004
	enum class EIndirectLightingCacheQuality : uint8_t
	{
		ILCQ_Off = 0,
		ILCQ_Point = 1,
		ILCQ_Volume = 2,
		ILCQ_MAX = 3,
	};

	// Enum Engine.ESceneDepthPriorityGroup
	// NumValues: 0x0003
	enum class ESceneDepthPriorityGroup : uint8_t
	{
		SDPG_World = 0,
		SDPG_Foreground = 1,
		SDPG_MAX = 2,
	};

	// Enum Engine.EFontCacheType
	// NumValues: 0x0003
	enum class EFontCacheType : uint8_t
	{
		Offline = 0,
		Runtime = 1,
		EFontCacheType_MAX = 2,
	};

	// Enum Engine.EFontImportCharacterSet
	// NumValues: 0x0004
	enum class EFontImportCharacterSet : uint8_t
	{
		FontICS_Default = 0,
		FontICS_Ansi = 1,
		FontICS_Symbol = 2,
		FontICS_MAX = 3,
	};

	// Enum Engine.EStandbyType
	// NumValues: 0x0004
	enum class EStandbyType : uint8_t
	{
		STDBY_Rx = 0,
		STDBY_Tx = 1,
		STDBY_BadPing = 2,
		STDBY_MAX = 3,
	};

	// Enum Engine.ESuggestProjVelocityTraceOption
	// NumValues: 0x0004
	enum class ESuggestProjVelocityTraceOption : uint8_t
	{
		DoNotTrace = 0,
		TraceFullPath = 1,
		OnlyTraceWhileAscending = 2,
		ESuggestProjVelocityTraceOption_MAX = 3,
	};

	// Enum Engine.EWindowMode
	// NumValues: 0x0004
	enum class EWindowMode : uint8_t
	{
		Fullscreen = 0,
		WindowedFullscreen = 1,
		Windowed = 2,
		EWindowMode_MAX = 3,
	};

	// Enum Engine.EImportanceWeight
	// NumValues: 0x0006
	enum class EImportanceWeight : uint8_t
	{
		Luminance = 0,
		Red = 1,
		Green = 2,
		Blue = 3,
		Alpha = 4,
		EImportanceWeight_MAX = 5,
	};

	// Enum Engine.EAdManagerDelegate
	// NumValues: 0x0003
	enum class EAdManagerDelegate : uint8_t
	{
		AMD_ClickedBanner = 0,
		AMD_UserClosedAd = 1,
		AMD_MAX = 2,
	};

	// Enum Engine.EControllerAnalogStick
	// NumValues: 0x0003
	enum class EControllerAnalogStick : uint8_t
	{
		CAS_LeftStick = 0,
		CAS_RightStick = 1,
		CAS_MAX = 2,
	};

	// Enum Engine.EAnimAlphaInputType
	// NumValues: 0x0004
	enum class EAnimAlphaInputType : uint8_t
	{
		Float = 0,
		Bool = 1,
		Curve = 2,
		EAnimAlphaInputType_MAX = 3,
	};

	// Enum Engine.ETrackActiveCondition
	// NumValues: 0x0004
	enum class ETrackActiveCondition : uint8_t
	{
		ETAC_Always = 0,
		ETAC_GoreEnabled = 1,
		ETAC_GoreDisabled = 2,
		ETAC_MAX = 3,
	};

	// Enum Engine.EInterpTrackMoveRotMode
	// NumValues: 0x0004
	enum class EInterpTrackMoveRotMode : uint8_t
	{
		IMR_Keyframed = 0,
		IMR_LookAtGroup = 1,
		IMR_Ignore = 2,
		IMR_MAX = 3,
	};

	// Enum Engine.EInterpMoveAxis
	// NumValues: 0x0007
	enum class EInterpMoveAxis : uint8_t
	{
		AXIS_TranslationX = 0,
		AXIS_TranslationY = 1,
		AXIS_TranslationZ = 2,
		AXIS_RotationX = 3,
		AXIS_RotationY = 4,
		AXIS_RotationZ = 5,
		AXIS_MAX = 6,
	};

	// Enum Engine.ETrackToggleAction
	// NumValues: 0x0005
	enum class ETrackToggleAction : uint8_t
	{
		ETTA_Off = 0,
		ETTA_On = 1,
		ETTA_Toggle = 2,
		ETTA_Trigger = 3,
		ETTA_MAX = 4,
	};

	// Enum Engine.EVisibilityTrackCondition
	// NumValues: 0x0004
	enum class EVisibilityTrackCondition : uint8_t
	{
		EVTC_Always = 0,
		EVTC_GoreEnabled = 1,
		EVTC_GoreDisabled = 2,
		EVTC_MAX = 3,
	};

	// Enum Engine.EVisibilityTrackAction
	// NumValues: 0x0004
	enum class EVisibilityTrackAction : uint8_t
	{
		EVTA_Hide = 0,
		EVTA_Show = 1,
		EVTA_Toggle = 2,
		EVTA_MAX = 3,
	};

	// Enum Engine.ESlateGesture
	// NumValues: 0x0007
	enum class ESlateGesture : uint8_t
	{
		None = 0,
		Scroll = 1,
		Magnify = 2,
		Swipe = 3,
		Rotate = 4,
		LongPress = 5,
		ESlateGesture_MAX = 6,
	};

	// Enum Engine.EMatrixColumns
	// NumValues: 0x0005
	enum class EMatrixColumns : uint8_t
	{
		First = 0,
		Second = 1,
		Third = 2,
		Fourth = 3,
		EMatrixColumns_MAX = 4,
	};

	// Enum Engine.ELerpInterpolationMode
	// NumValues: 0x0004
	enum class ELerpInterpolationMode : uint8_t
	{
		QuatInterp = 0,
		EulerInterp = 1,
		DualQuatInterp = 2,
		ELerpInterpolationMode_MAX = 3,
	};

	// Enum Engine.EEasingFunc
	// NumValues: 0x000F
	enum class EEasingFunc : uint8_t
	{
		Linear = 0,
		Step = 1,
		SinusoidalIn = 2,
		SinusoidalOut = 3,
		SinusoidalInOut = 4,
		EaseIn = 5,
		EaseOut = 6,
		EaseInOut = 7,
		ExpoIn = 8,
		ExpoOut = 9,
		ExpoInOut = 10,
		CircularIn = 11,
		CircularOut = 12,
		CircularInOut = 13,
		EEasingFunc_MAX = 14,
	};

	// Enum Engine.EStreamingVolumeUsage
	// NumValues: 0x0006
	enum class EStreamingVolumeUsage : uint8_t
	{
		SVB_Loading = 0,
		SVB_LoadingAndVisibility = 1,
		SVB_VisibilityBlockingOnLoad = 2,
		SVB_BlockingOnLoad = 3,
		SVB_LoadingNotVisible = 4,
		SVB_MAX = 5,
	};

	// Enum Engine.ELocalLightBakeMode
	// NumValues: 0x0004
	enum class ELocalLightBakeMode : uint8_t
	{
		SKY_AO_MODE = 0,
		SDF_SHADOW_MASK_MODE = 1,
		OUTDOOR_AO_MODE = 2,
		ELocalLightBakeMode_MAX = 3,
	};

	// Enum Engine.EMaterialVertexColorBlendWeightChannels
	// NumValues: 0x0006
	enum class EMaterialVertexColorBlendWeightChannels : uint8_t
	{
		None = 0,
		R = 1,
		RG = 2,
		RGB = 3,
		RGBA = 4,
		EMaterialVertexColorBlendWeightChannels_MAX = 5,
	};

	// Enum Engine.EMaterialDecalResponse
	// NumValues: 0x0009
	enum class EMaterialDecalResponse : uint8_t
	{
		MDR_None = 0,
		MDR_ColorNormalRoughness = 1,
		MDR_Color = 2,
		MDR_ColorNormal = 3,
		MDR_ColorRoughness = 4,
		MDR_Normal = 5,
		MDR_NormalRoughness = 6,
		MDR_Roughness = 7,
		MDR_MAX = 8,
	};

	// Enum Engine.EDecalBlendMode
	// NumValues: 0x0012
	enum class EDecalBlendMode : uint8_t
	{
		DBM_Translucent = 0,
		DBM_Stain = 1,
		DBM_Normal = 2,
		DBM_Emissive = 3,
		DBM_DBuffer_ColorNormalRoughness = 4,
		DBM_DBuffer_Color = 5,
		DBM_DBuffer_ColorNormal = 6,
		DBM_DBuffer_ColorRoughness = 7,
		DBM_DBuffer_Normal = 8,
		DBM_DBuffer_NormalRoughness = 9,
		DBM_DBuffer_Roughness = 10,
		DBM_DBuffer_Emissive = 11,
		DBM_DBuffer_AlphaComposite = 12,
		DBM_DBuffer_EmissiveAlphaComposite = 13,
		DBM_Volumetric_DistanceFunction = 14,
		DBM_AlphaComposite = 15,
		DBM_AmbientOcclusion = 16,
		DBM_MAX = 17,
	};

	// Enum Engine.ETextureColorChannel
	// NumValues: 0x0005
	enum class ETextureColorChannel : uint8_t
	{
		TCC_Red = 0,
		TCC_Green = 1,
		TCC_Blue = 2,
		TCC_Alpha = 3,
		TCC_MAX = 4,
	};

	// Enum Engine.EMaterialAttributeBlend
	// NumValues: 0x0004
	enum class EMaterialAttributeBlend : uint8_t
	{
		Blend = 0,
		UseA = 1,
		UseB = 2,
		EMaterialAttributeBlend_MAX = 3,
	};

	// Enum Engine.EChannelMaskParameterColor
	// NumValues: 0x0005
	enum class EChannelMaskParameterColor : uint8_t
	{
		Red = 0,
		Green = 1,
		Blue = 2,
		Alpha = 3,
		EChannelMaskParameterColor_MAX = 4,
	};

	// Enum Engine.EClampMode
	// NumValues: 0x0004
	enum class EClampMode : uint8_t
	{
		CMODE_Clamp = 0,
		CMODE_ClampMin = 1,
		CMODE_ClampMax = 2,
		CMODE_MAX = 3,
	};

	// Enum Engine.ECustomMaterialOutputType
	// NumValues: 0x0006
	enum class ECustomMaterialOutputType : uint8_t
	{
		CMOT_Float1 = 0,
		CMOT_Float2 = 1,
		CMOT_Float3 = 2,
		CMOT_Float4 = 3,
		CMOT_MaterialAttributes = 4,
		CMOT_MAX = 5,
	};

	// Enum Engine.EDepthOfFieldFunctionValue
	// NumValues: 0x0005
	enum class EDepthOfFieldFunctionValue : uint8_t
	{
		TDOF_NearAndFarMask = 0,
		TDOF_NearMask = 1,
		TDOF_FarMask = 2,
		TDOF_CircleOfConfusionRadius = 3,
		TDOF_MAX = 4,
	};

	// Enum Engine.EFunctionInputType
	// NumValues: 0x000C
	enum class EFunctionInputType : uint8_t
	{
		FunctionInput_Scalar = 0,
		FunctionInput_Vector2 = 1,
		FunctionInput_Vector3 = 2,
		FunctionInput_Vector4 = 3,
		FunctionInput_Texture2D = 4,
		FunctionInput_TextureCube = 5,
		FunctionInput_Texture2DArray = 6,
		FunctionInput_VolumeTexture = 7,
		FunctionInput_StaticBool = 8,
		FunctionInput_MaterialAttributes = 9,
		FunctionInput_TextureExternal = 10,
		FunctionInput_MAX = 11,
	};

	// Enum Engine.ENoiseFunction
	// NumValues: 0x0007
	enum class ENoiseFunction : uint8_t
	{
		NOISEFUNCTION_SimplexTex = 0,
		NOISEFUNCTION_GradientTex = 1,
		NOISEFUNCTION_GradientTex3D = 2,
		NOISEFUNCTION_GradientALU = 3,
		NOISEFUNCTION_ValueALU = 4,
		NOISEFUNCTION_VoronoiALU = 5,
		NOISEFUNCTION_MAX = 6,
	};

	// Enum Engine.ERuntimeVirtualTextureMipValueMode
	// NumValues: 0x0004
	enum class ERuntimeVirtualTextureMipValueMode : uint8_t
	{
		RVTMVM_None = 0,
		RVTMVM_MipLevel = 1,
		RVTMVM_MipBias = 2,
		RVTMVM_MAX = 3,
	};

	// Enum Engine.EMaterialSceneAttributeInputMode
	// NumValues: 0x0003
	enum class EMaterialSceneAttributeInputMode : uint8_t
	{
		Coordinates = 0,
		OffsetFraction = 1,
		EMaterialSceneAttributeInputMode_MAX = 2,
	};

	// Enum Engine.ESpeedTreeLODType
	// NumValues: 0x0003
	enum class ESpeedTreeLODType : uint8_t
	{
		STLOD_Pop = 0,
		STLOD_Smooth = 1,
		STLOD_MAX = 2,
	};

	// Enum Engine.ESpeedTreeWindType
	// NumValues: 0x0008
	enum class ESpeedTreeWindType : uint8_t
	{
		STW_None = 0,
		STW_Fastest = 1,
		STW_Fast = 2,
		STW_Better = 3,
		STW_Best = 4,
		STW_Palm = 5,
		STW_BestPlus = 6,
		STW_MAX = 7,
	};

	// Enum Engine.ESpeedTreeGeometryType
	// NumValues: 0x0006
	enum class ESpeedTreeGeometryType : uint8_t
	{
		STG_Branch = 0,
		STG_Frond = 1,
		STG_Leaf = 2,
		STG_FacingLeaf = 3,
		STG_Billboard = 4,
		STG_MAX = 5,
	};

	// Enum Engine.EMaterialExposedTextureProperty
	// NumValues: 0x0003
	enum class EMaterialExposedTextureProperty : uint8_t
	{
		TMTM_TextureSize = 0,
		TMTM_TexelSize = 1,
		TMTM_MAX = 2,
	};

	// Enum Engine.ETextureMipValueMode
	// NumValues: 0x0006
	enum class ETextureMipValueMode : uint8_t
	{
		TMVM_None = 0,
		TMVM_MipLevel = 1,
		TMVM_MipBias = 2,
		TMVM_Derivative = 3,
		TMVM_ClampMipLevel = 4,
		TMVM_MAX = 5,
	};

	// Enum Engine.EMaterialVectorCoordTransform
	// NumValues: 0x0007
	enum class EMaterialVectorCoordTransform : uint8_t
	{
		TRANSFORM_Tangent = 0,
		TRANSFORM_Local = 1,
		TRANSFORM_World = 2,
		TRANSFORM_View = 3,
		TRANSFORM_Camera = 4,
		TRANSFORM_ParticleWorld = 5,
		TRANSFORM_MAX = 6,
	};

	// Enum Engine.EMaterialVectorCoordTransformSource
	// NumValues: 0x0007
	enum class EMaterialVectorCoordTransformSource : uint8_t
	{
		TRANSFORMSOURCE_Tangent = 0,
		TRANSFORMSOURCE_Local = 1,
		TRANSFORMSOURCE_World = 2,
		TRANSFORMSOURCE_View = 3,
		TRANSFORMSOURCE_Camera = 4,
		TRANSFORMSOURCE_ParticleWorld = 5,
		TRANSFORMSOURCE_MAX = 6,
	};

	// Enum Engine.EMaterialPositionTransformSource
	// NumValues: 0x0007
	enum class EMaterialPositionTransformSource : uint8_t
	{
		TRANSFORMPOSSOURCE_Local = 0,
		TRANSFORMPOSSOURCE_World = 1,
		TRANSFORMPOSSOURCE_TranslatedWorld = 2,
		TRANSFORMPOSSOURCE_View = 3,
		TRANSFORMPOSSOURCE_Camera = 4,
		TRANSFORMPOSSOURCE_Particle = 5,
		TRANSFORMPOSSOURCE_MAX = 6,
	};

	// Enum Engine.EVectorNoiseFunction
	// NumValues: 0x0006
	enum class EVectorNoiseFunction : uint8_t
	{
		VNF_CellnoiseALU = 0,
		VNF_VectorALU = 1,
		VNF_GradientALU = 2,
		VNF_CurlALU = 3,
		VNF_VoronoiALU = 4,
		VNF_MAX = 5,
	};

	// Enum Engine.EMaterialExposedViewProperty
	// NumValues: 0x0011
	enum class EMaterialExposedViewProperty : uint8_t
	{
		MEVP_BufferSize = 0,
		MEVP_FieldOfView = 1,
		MEVP_TanHalfFieldOfView = 2,
		MEVP_ViewSize = 3,
		MEVP_WorldSpaceViewPosition = 4,
		MEVP_WorldSpaceCameraPosition = 5,
		MEVP_ViewportOffset = 6,
		MEVP_TemporalSampleCount = 7,
		MEVP_TemporalSampleIndex = 8,
		MEVP_TemporalSampleOffset = 9,
		MEVP_RuntimeVirtualTextureOutputLevel = 10,
		MEVP_RuntimeVirtualTextureOutputDerivative = 11,
		MEVP_PreExposure = 12,
		MEVP_WindParams = 13,
		MEVP_RotateAngle = 14,
		MEVP_UnscaledViewSize = 15,
		MEVP_MAX = 16,
	};

	// Enum Engine.EWorldPositionIncludedOffsets
	// NumValues: 0x0005
	enum class EWorldPositionIncludedOffsets : uint8_t
	{
		WPT_Default = 0,
		WPT_ExcludeAllShaderOffsets = 1,
		WPT_CameraRelative = 2,
		WPT_CameraRelativeNoOffsets = 3,
		WPT_MAX = 4,
	};

	// Enum Engine.EMaterialFunctionUsage
	// NumValues: 0x0004
	enum class EMaterialFunctionUsage : uint8_t
	{
		Default = 0,
		MaterialLayer = 1,
		MaterialLayerBlend = 2,
		EMaterialFunctionUsage_MAX = 3,
	};

	// Enum Engine.EMaterialCategory
	// NumValues: 0x000C
	enum class EMaterialCategory : uint8_t
	{
		MC_PBR_Opaque = 0,
		MC_Weapon = 1,
		MC_Character = 2,
		MC_Terrain = 3,
		MC_Sky = 4,
		MC_Grass = 5,
		MC_Rock = 6,
		MC_Tree = 7,
		MC_Tree_Lod = 8,
		MC_Particle = 9,
		MC_Keep_Original = 10,
		MC_MAX = 11,
	};

	// Enum Engine.EMaterialUsage
	// NumValues: 0x0012
	enum class EMaterialUsage : uint8_t
	{
		MATUSAGE_SkeletalMesh = 0,
		MATUSAGE_ParticleSprites = 1,
		MATUSAGE_BeamTrails = 2,
		MATUSAGE_MeshParticles = 3,
		MATUSAGE_StaticLighting = 4,
		MATUSAGE_MorphTargets = 5,
		MATUSAGE_SplineMesh = 6,
		MATUSAGE_InstancedStaticMeshes = 7,
		MATUSAGE_GeometryCollections = 8,
		MATUSAGE_Clothing = 9,
		MATUSAGE_NiagaraSprites = 10,
		MATUSAGE_NiagaraRibbons = 11,
		MATUSAGE_NiagaraMeshParticles = 12,
		MATUSAGE_GeometryCache = 13,
		MATUSAGE_Water = 14,
		MATUSAGE_WaterCaustics = 15,
		MATUSAGE_HairStrands = 16,
		MATUSAGE_MAX = 17,
	};

	// Enum Engine.EMaterialParameterAssociation
	// NumValues: 0x0004
	enum class EMaterialParameterAssociation : uint8_t
	{
		LayerParameter = 0,
		BlendParameter = 1,
		GlobalParameter = 2,
		EMaterialParameterAssociation_MAX = 3,
	};

	// Enum Engine.EMaterialMergeType
	// NumValues: 0x0003
	enum class EMaterialMergeType : uint8_t
	{
		MaterialMergeType_Default = 0,
		MaterialMergeType_Simplygon = 1,
		MaterialMergeType_MAX = 2,
	};

	// Enum Engine.ETextureSizingType
	// NumValues: 0x0005
	enum class ETextureSizingType : uint8_t
	{
		TextureSizingType_UseSingleTextureSize = 0,
		TextureSizingType_UseAutomaticBiasedSizes = 1,
		TextureSizingType_UseManualOverrideTextureSize = 2,
		TextureSizingType_UseSimplygonAutomaticSizing = 3,
		TextureSizingType_MAX = 4,
	};

	// Enum Engine.ESceneTextureId
	// NumValues: 0x0021
	enum class ESceneTextureId : uint8_t
	{
		PPI_SceneColor = 0,
		PPI_SceneDepth = 1,
		PPI_DiffuseColor = 2,
		PPI_SpecularColor = 3,
		PPI_SubsurfaceColor = 4,
		PPI_BaseColor = 5,
		PPI_Specular = 6,
		PPI_Metallic = 7,
		PPI_WorldNormal = 8,
		PPI_SeparateTranslucency = 9,
		PPI_Opacity = 10,
		PPI_Roughness = 11,
		PPI_MaterialAO = 12,
		PPI_CustomDepth = 13,
		PPI_PostProcessInput0 = 14,
		PPI_PostProcessInput1 = 15,
		PPI_PostProcessInput2 = 16,
		PPI_PostProcessInput3 = 17,
		PPI_PostProcessInput4 = 18,
		PPI_PostProcessInput5 = 19,
		PPI_PostProcessInput6 = 20,
		PPI_DecalMask = 21,
		PPI_ShadingModelColor = 22,
		PPI_ShadingModelID = 23,
		PPI_AmbientOcclusion = 24,
		PPI_CustomStencil = 25,
		PPI_StoredBaseColor = 26,
		PPI_StoredSpecular = 27,
		PPI_Velocity = 28,
		PPI_WorldTangent = 29,
		PPI_Anisotropy = 30,
		PPI_CustomData = 31,
		PPI_MAX = 32,
	};

	// Enum Engine.EMaterialDomain
	// NumValues: 0x0009
	enum class EMaterialDomain : uint8_t
	{
		MD_Surface = 0,
		MD_DeferredDecal = 1,
		MD_LightFunction = 2,
		MD_Volume = 3,
		MD_PostProcess = 4,
		MD_UI = 5,
		MD_RuntimeVirtualTexture = 6,
		MD_Missing = 7,
		MD_MAX = 8,
	};

	// Enum Engine.EVertexPhase
	// NumValues: 0x0004
	enum class EVertexPhase : uint8_t
	{
		VP_ViewResolving = 0,
		VP_PositionCalculation = 1,
		VP_VariantsCalculation = 2,
		VP_MAX = 3,
	};

	// Enum Engine.EShadingPhase
	// NumValues: 0x0005
	enum class EShadingPhase : uint8_t
	{
		SP_V2F = 0,
		SP_DataPrepare = 1,
		SP_OutColorGenerate = 2,
		SP_Debug = 3,
		SP_MAX = 4,
	};

	// Enum Engine.EMeshInstancingReplacementMethod
	// NumValues: 0x0003
	enum class EMeshInstancingReplacementMethod : uint8_t
	{
		RemoveOriginalActors = 0,
		KeepOriginalActorsAsEditorOnly = 1,
		EMeshInstancingReplacementMethod_MAX = 2,
	};

	// Enum Engine.EUVOutput
	// NumValues: 0x0003
	enum class EUVOutput : uint8_t
	{
		DoNotOutputChannel = 0,
		OutputChannel = 1,
		EUVOutput_MAX = 2,
	};

	// Enum Engine.EMeshMergeType
	// NumValues: 0x0003
	enum class EMeshMergeType : uint8_t
	{
		MeshMergeType_Default = 0,
		MeshMergeType_MergeActor = 1,
		MeshMergeType_MAX = 2,
	};

	// Enum Engine.EMeshLODSelectionType
	// NumValues: 0x0005
	enum class EMeshLODSelectionType : uint8_t
	{
		AllLODs = 0,
		SpecificLOD = 1,
		CalculateLOD = 2,
		LowestDetailLOD = 3,
		EMeshLODSelectionType_MAX = 4,
	};

	// Enum Engine.EProxyNormalComputationMethod
	// NumValues: 0x0004
	enum class EProxyNormalComputationMethod : uint8_t
	{
		AngleWeighted = 0,
		AreaWeighted = 1,
		EqualWeighted = 2,
		EProxyNormalComputationMethod_MAX = 3,
	};

	// Enum Engine.ELandscapeCullingPrecision
	// NumValues: 0x0004
	enum class ELandscapeCullingPrecision : uint8_t
	{
		High = 0,
		Medium = 1,
		Low = 2,
		ELandscapeCullingPrecision_MAX = 3,
	};

	// Enum Engine.EStaticMeshReductionTerimationCriterion
	// NumValues: 0x0004
	enum class EStaticMeshReductionTerimationCriterion : uint8_t
	{
		Triangles = 0,
		Vertices = 1,
		Any = 2,
		EStaticMeshReductionTerimationCriterion_MAX = 3,
	};

	// Enum Engine.EMeshFeatureImportance
	// NumValues: 0x0007
	enum class EMeshFeatureImportance : uint8_t
	{
		Off = 0,
		Lowest = 1,
		Low = 2,
		Normal = 3,
		High = 4,
		Highest = 5,
		EMeshFeatureImportance_MAX = 6,
	};

	// Enum Engine.EVertexPaintAxis
	// NumValues: 0x0004
	enum class EVertexPaintAxis : uint8_t
	{
		X = 0,
		Y = 1,
		Z = 2,
		EVertexPaintAxis_MAX = 3,
	};

	// Enum Engine.EMicroTransactionResult
	// NumValues: 0x0005
	enum class EMicroTransactionResult : uint8_t
	{
		MTR_Succeeded = 0,
		MTR_Failed = 1,
		MTR_Canceled = 2,
		MTR_RestoredFromServer = 3,
		MTR_MAX = 4,
	};

	// Enum Engine.EMicroTransactionDelegate
	// NumValues: 0x0003
	enum class EMicroTransactionDelegate : uint8_t
	{
		MTD_PurchaseQueryComplete = 0,
		MTD_PurchaseComplete = 1,
		MTD_MAX = 2,
	};

	// Enum Engine.FNavigationSystemRunMode
	// NumValues: 0x0006
	enum class EFNavigationSystemRunMode : uint8_t
	{
		InvalidMode = 0,
		GameMode = 1,
		EditorMode = 2,
		SimulationMode = 3,
		PIEMode = 4,
		FNavigationSystemRunMode_MAX = 5,
	};

	// Enum Engine.ENavigationQueryResult
	// NumValues: 0x0005
	enum class ENavigationQueryResult : uint8_t
	{
		Invalid = 0,
		Error = 1,
		Fail = 2,
		Success = 3,
		ENavigationQueryResult_MAX = 4,
	};

	// Enum Engine.ENavPathEvent
	// NumValues: 0x0009
	enum class ENavPathEvent : uint8_t
	{
		Cleared = 0,
		NewPath = 1,
		UpdatedDueToGoalMoved = 2,
		UpdatedDueToNavigationChanged = 3,
		Invalidated = 4,
		RePathFailed = 5,
		MetaPathUpdate = 6,
		Custom = 7,
		ENavPathEvent_MAX = 8,
	};

	// Enum Engine.ENavDataGatheringModeConfig
	// NumValues: 0x0004
	enum class ENavDataGatheringModeConfig : uint8_t
	{
		Invalid = 0,
		Instant = 1,
		Lazy = 2,
		ENavDataGatheringModeConfig_MAX = 3,
	};

	// Enum Engine.ENavDataGatheringMode
	// NumValues: 0x0004
	enum class ENavDataGatheringMode : uint8_t
	{
		Default = 0,
		Instant = 1,
		Lazy = 2,
		ENavDataGatheringMode_MAX = 3,
	};

	// Enum Engine.ENavigationOptionFlag
	// NumValues: 0x0004
	enum class ENavigationOptionFlag : uint8_t
	{
		Default = 0,
		Enable = 1,
		Disable = 2,
		MAX = 3,
	};

	// Enum Engine.ENavLinkDirection
	// NumValues: 0x0004
	enum class ENavLinkDirection : uint8_t
	{
		BothWays = 0,
		LeftToRight = 1,
		RightToLeft = 2,
		ENavLinkDirection_MAX = 3,
	};

	// Enum Engine.EControllMode
	// NumValues: 0x0004
	enum class EControllMode : uint8_t
	{
		ENone = 0,
		EExposureOnly = 1,
		EFullControll = 2,
		EControllMode_MAX = 3,
	};

	// Enum Engine.EEmitterRenderMode
	// NumValues: 0x0006
	enum class EEmitterRenderMode : uint8_t
	{
		ERM_Normal = 0,
		ERM_Point = 1,
		ERM_Cross = 2,
		ERM_LightsOnly = 3,
		ERM_None = 4,
		ERM_MAX = 5,
	};

	// Enum Engine.EParticleSubUVInterpMethod
	// NumValues: 0x0006
	enum class EParticleSubUVInterpMethod : uint8_t
	{
		PSUVIM_None = 0,
		PSUVIM_Linear = 1,
		PSUVIM_Linear_Blend = 2,
		PSUVIM_Random = 3,
		PSUVIM_Random_Blend = 4,
		PSUVIM_MAX = 5,
	};

	// Enum Engine.EParticleBurstMethod
	// NumValues: 0x0003
	enum class EParticleBurstMethod : uint8_t
	{
		EPBM_Instant = 0,
		EPBM_Interpolated = 1,
		EPBM_MAX = 2,
	};

	// Enum Engine.EParticleSystemInsignificanceReaction
	// NumValues: 0x0006
	enum class EParticleSystemInsignificanceReaction : uint8_t
	{
		Auto = 0,
		Complete = 1,
		DisableTick = 2,
		DisableTickAndKill = 3,
		Num = 4,
		EParticleSystemInsignificanceReaction_MAX = 5,
	};

	// Enum Engine.EParticleVRSShadingRate
	// NumValues: 0x0004
	enum class EParticleVRSShadingRate : uint8_t
	{
		VRS_None = 0,
		VRS_2X2 = 1,
		Num = 2,
		EParticleVRSShadingRate_MAX = 3,
	};

	// Enum Engine.EParticleSignificanceLevel
	// NumValues: 0x0006
	enum class EParticleSignificanceLevel : uint8_t
	{
		Low = 0,
		Medium = 1,
		High = 2,
		Critical = 3,
		Num = 4,
		EParticleSignificanceLevel_MAX = 5,
	};

	// Enum Engine.EParticleDetailMode
	// NumValues: 0x0004
	enum class EParticleDetailMode : uint8_t
	{
		PDM_Low = 0,
		PDM_Medium = 1,
		PDM_High = 2,
		PDM_MAX = 3,
	};

	// Enum Engine.EParticleSourceSelectionMethod
	// NumValues: 0x0003
	enum class EParticleSourceSelectionMethod : uint8_t
	{
		EPSSM_Random = 0,
		EPSSM_Sequential = 1,
		EPSSM_MAX = 2,
	};

	// Enum Engine.EModuleType
	// NumValues: 0x000A
	enum class EModuleType : uint8_t
	{
		EPMT_General = 0,
		EPMT_TypeData = 1,
		EPMT_Beam = 2,
		EPMT_Trail = 3,
		EPMT_Spawn = 4,
		EPMT_Required = 5,
		EPMT_Event = 6,
		EPMT_Light = 7,
		EPMT_SubUV = 8,
		EPMT_MAX = 9,
	};

	// Enum Engine.EAttractorParticleSelectionMethod
	// NumValues: 0x0003
	enum class EAttractorParticleSelectionMethod : uint8_t
	{
		EAPSM_Random = 0,
		EAPSM_Sequential = 1,
		EAPSM_MAX = 2,
	};

	// Enum Engine.Beam2SourceTargetTangentMethod
	// NumValues: 0x0005
	enum class EBeam2SourceTargetTangentMethod : uint8_t
	{
		PEB2STTM_Direct = 0,
		PEB2STTM_UserSet = 1,
		PEB2STTM_Distribution = 2,
		PEB2STTM_Emitter = 3,
		PEB2STTM_MAX = 4,
	};

	// Enum Engine.Beam2SourceTargetMethod
	// NumValues: 0x0006
	enum class EBeam2SourceTargetMethod : uint8_t
	{
		PEB2STM_Default = 0,
		PEB2STM_UserSet = 1,
		PEB2STM_Emitter = 2,
		PEB2STM_Particle = 3,
		PEB2STM_Actor = 4,
		PEB2STM_MAX = 5,
	};

	// Enum Engine.BeamModifierType
	// NumValues: 0x0003
	enum class EBeamModifierType : uint8_t
	{
		PEB2MT_Source = 0,
		PEB2MT_Target = 1,
		PEB2MT_MAX = 2,
	};

	// Enum Engine.EParticleCameraOffsetUpdateMethod
	// NumValues: 0x0004
	enum class EParticleCameraOffsetUpdateMethod : uint8_t
	{
		EPCOUM_DirectSet = 0,
		EPCOUM_Additive = 1,
		EPCOUM_Scalar = 2,
		EPCOUM_MAX = 3,
	};

	// Enum Engine.EParticleCollisionComplete
	// NumValues: 0x0007
	enum class EParticleCollisionComplete : uint8_t
	{
		EPCC_Kill = 0,
		EPCC_Freeze = 1,
		EPCC_HaltCollisions = 2,
		EPCC_FreezeTranslation = 3,
		EPCC_FreezeRotation = 4,
		EPCC_FreezeMovement = 5,
		EPCC_MAX = 6,
	};

	// Enum Engine.EParticleCollisionResponse
	// NumValues: 0x0004
	enum class EParticleCollisionResponse : uint8_t
	{
		Bounce = 0,
		Stop = 1,
		Kill = 2,
		EParticleCollisionResponse_MAX = 3,
	};

	// Enum Engine.ELocationBoneSocketSelectionMethod
	// NumValues: 0x0003
	enum class ELocationBoneSocketSelectionMethod : uint8_t
	{
		BONESOCKETSEL_Sequential = 0,
		BONESOCKETSEL_Random = 1,
		BONESOCKETSEL_MAX = 2,
	};

	// Enum Engine.ELocationBoneSocketSource
	// NumValues: 0x0003
	enum class ELocationBoneSocketSource : uint8_t
	{
		BONESOCKETSOURCE_Bones = 0,
		BONESOCKETSOURCE_Sockets = 1,
		BONESOCKETSOURCE_MAX = 2,
	};

	// Enum Engine.ELocationEmitterSelectionMethod
	// NumValues: 0x0003
	enum class ELocationEmitterSelectionMethod : uint8_t
	{
		ELESM_Random = 0,
		ELESM_Sequential = 1,
		ELESM_MAX = 2,
	};

	// Enum Engine.CylinderHeightAxis
	// NumValues: 0x0004
	enum class ECylinderHeightAxis : uint8_t
	{
		PMLPC_HEIGHTAXIS_X = 0,
		PMLPC_HEIGHTAXIS_Y = 1,
		PMLPC_HEIGHTAXIS_Z = 2,
		PMLPC_HEIGHTAXIS_MAX = 3,
	};

	// Enum Engine.ELocationSkelVertSurfaceSource
	// NumValues: 0x0003
	enum class ELocationSkelVertSurfaceSource : uint8_t
	{
		VERTSURFACESOURCE_Vert = 0,
		VERTSURFACESOURCE_Surface = 1,
		VERTSURFACESOURCE_MAX = 2,
	};

	// Enum Engine.EOrbitChainMode
	// NumValues: 0x0004
	enum class EOrbitChainMode : uint8_t
	{
		EOChainMode_Add = 0,
		EOChainMode_Scale = 1,
		EOChainMode_Link = 2,
		EOChainMode_MAX = 3,
	};

	// Enum Engine.EParticleAxisLock
	// NumValues: 0x000B
	enum class EParticleAxisLock : uint8_t
	{
		EPAL_NONE = 0,
		EPAL_X = 1,
		EPAL_Y = 2,
		EPAL_Z = 3,
		EPAL_NEGATIVE_X = 4,
		EPAL_NEGATIVE_Y = 5,
		EPAL_NEGATIVE_Z = 6,
		EPAL_ROTATE_X = 7,
		EPAL_ROTATE_Y = 8,
		EPAL_ROTATE_Z = 9,
		EPAL_MAX = 10,
	};

	// Enum Engine.EEmitterDynamicParameterValue
	// NumValues: 0x0007
	enum class EEmitterDynamicParameterValue : uint8_t
	{
		EDPV_UserSet = 0,
		EDPV_AutoSet = 1,
		EDPV_VelocityX = 2,
		EDPV_VelocityY = 3,
		EDPV_VelocityZ = 4,
		EDPV_VelocityMag = 5,
		EDPV_MAX = 6,
	};

	// Enum Engine.EEmitterNormalsMode
	// NumValues: 0x0004
	enum class EEmitterNormalsMode : uint8_t
	{
		ENM_CameraFacing = 0,
		ENM_Spherical = 1,
		ENM_Cylindrical = 2,
		ENM_MAX = 3,
	};

	// Enum Engine.EParticleSortMode
	// NumValues: 0x0006
	enum class EParticleSortMode : uint8_t
	{
		PSORTMODE_None = 0,
		PSORTMODE_ViewProjDepth = 1,
		PSORTMODE_DistanceToView = 2,
		PSORTMODE_Age_OldestFirst = 3,
		PSORTMODE_Age_NewestFirst = 4,
		PSORTMODE_MAX = 5,
	};

	// Enum Engine.EParticleUVFlipMode
	// NumValues: 0x0009
	enum class EParticleUVFlipMode : uint8_t
	{
		None = 0,
		FlipUV = 1,
		FlipUOnly = 2,
		FlipVOnly = 3,
		RandomFlipUV = 4,
		RandomFlipUOnly = 5,
		RandomFlipVOnly = 6,
		RandomFlipUVIndependent = 7,
		EParticleUVFlipMode_MAX = 8,
	};

	// Enum Engine.ETrail2SourceMethod
	// NumValues: 0x0004
	enum class ETrail2SourceMethod : uint8_t
	{
		PET2SRCM_Default = 0,
		PET2SRCM_Particle = 1,
		PET2SRCM_Actor = 2,
		PET2SRCM_MAX = 3,
	};

	// Enum Engine.EBeamTaperMethod
	// NumValues: 0x0004
	enum class EBeamTaperMethod : uint8_t
	{
		PEBTM_None = 0,
		PEBTM_Full = 1,
		PEBTM_Partial = 2,
		PEBTM_MAX = 3,
	};

	// Enum Engine.EBeam2Method
	// NumValues: 0x0004
	enum class EBeam2Method : uint8_t
	{
		PEB2M_Distance = 0,
		PEB2M_Target = 1,
		PEB2M_Branch = 2,
		PEB2M_MAX = 3,
	};

	// Enum Engine.EMeshCameraFacingOptions
	// NumValues: 0x000E
	enum class EMeshCameraFacingOptions : uint8_t
	{
		XAxisFacing_NoUp = 0,
		XAxisFacing_ZUp = 1,
		XAxisFacing_NegativeZUp = 2,
		XAxisFacing_YUp = 3,
		XAxisFacing_NegativeYUp = 4,
		LockedAxis_ZAxisFacing = 5,
		LockedAxis_NegativeZAxisFacing = 6,
		LockedAxis_YAxisFacing = 7,
		LockedAxis_NegativeYAxisFacing = 8,
		VelocityAligned_ZAxisFacing = 9,
		VelocityAligned_NegativeZAxisFacing = 10,
		VelocityAligned_YAxisFacing = 11,
		VelocityAligned_NegativeYAxisFacing = 12,
		EMeshCameraFacingOptions_MAX = 13,
	};

	// Enum Engine.EMeshCameraFacingUpAxis
	// NumValues: 0x0006
	enum class EMeshCameraFacingUpAxis : uint8_t
	{
		CameraFacing_NoneUP = 0,
		CameraFacing_ZUp = 1,
		CameraFacing_NegativeZUp = 2,
		CameraFacing_YUp = 3,
		CameraFacing_NegativeYUp = 4,
		CameraFacing_MAX = 5,
	};

	// Enum Engine.EMeshScreenAlignment
	// NumValues: 0x0004
	enum class EMeshScreenAlignment : uint8_t
	{
		PSMA_MeshFaceCameraWithRoll = 0,
		PSMA_MeshFaceCameraWithSpin = 1,
		PSMA_MeshFaceCameraWithLockedAxis = 2,
		PSMA_MAX = 3,
	};

	// Enum Engine.ETrailsRenderAxisOption
	// NumValues: 0x0004
	enum class ETrailsRenderAxisOption : uint8_t
	{
		Trails_CameraUp = 0,
		Trails_SourceUp = 1,
		Trails_WorldUp = 2,
		Trails_MAX = 3,
	};

	// Enum Engine.EParticleScreenAlignment
	// NumValues: 0x0008
	enum class EParticleScreenAlignment : uint8_t
	{
		PSA_FacingCameraPosition = 0,
		PSA_Square = 1,
		PSA_Rectangle = 2,
		PSA_Velocity = 3,
		PSA_AwayFromCenter = 4,
		PSA_TypeSpecific = 5,
		PSA_FacingCameraDistanceBlend = 6,
		PSA_MAX = 7,
	};

	// Enum Engine.EParticleSystemOcclusionBoundsMethod
	// NumValues: 0x0004
	enum class EParticleSystemOcclusionBoundsMethod : uint8_t
	{
		EPSOBM_None = 0,
		EPSOBM_ParticleBounds = 1,
		EPSOBM_CustomBounds = 2,
		EPSOBM_MAX = 3,
	};

	// Enum Engine.ParticleSystemLODMethod
	// NumValues: 0x0004
	enum class EParticleSystemLODMethod : uint8_t
	{
		PARTICLESYSTEMLODMETHOD_Automatic = 0,
		PARTICLESYSTEMLODMETHOD_DirectSet = 1,
		PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
		PARTICLESYSTEMLODMETHOD_MAX = 3,
	};

	// Enum Engine.EParticleSystemUpdateMode
	// NumValues: 0x0003
	enum class EParticleSystemUpdateMode : uint8_t
	{
		EPSUM_RealTime = 0,
		EPSUM_FixedTime = 1,
		EPSUM_MAX = 2,
	};

	// Enum Engine.EParticleEventType
	// NumValues: 0x0007
	enum class EParticleEventType : uint8_t
	{
		EPET_Any = 0,
		EPET_Spawn = 1,
		EPET_Death = 2,
		EPET_Collision = 3,
		EPET_Burst = 4,
		EPET_Blueprint = 5,
		EPET_MAX = 6,
	};

	// Enum Engine.ParticleReplayState
	// NumValues: 0x0004
	enum class EParticleReplayState : uint8_t
	{
		PRS_Disabled = 0,
		PRS_Capturing = 1,
		PRS_Replaying = 2,
		PRS_MAX = 3,
	};

	// Enum Engine.EParticleSysParamType
	// NumValues: 0x000A
	enum class EParticleSysParamType : uint8_t
	{
		PSPT_None = 0,
		PSPT_Scalar = 1,
		PSPT_ScalarRand = 2,
		PSPT_Vector = 3,
		PSPT_VectorRand = 4,
		PSPT_Color = 5,
		PSPT_Actor = 6,
		PSPT_Material = 7,
		PSPT_VectorUnitRand = 8,
		PSPT_MAX = 9,
	};

	// Enum Engine.ESettingsLockedAxis
	// NumValues: 0x0006
	enum class ESettingsLockedAxis : uint8_t
	{
		None = 0,
		X = 1,
		Y = 2,
		Z = 3,
		Invalid = 4,
		ESettingsLockedAxis_MAX = 5,
	};

	// Enum Engine.ESettingsDOF
	// NumValues: 0x0005
	enum class ESettingsDOF : uint8_t
	{
		Full3D = 0,
		YZPlane = 1,
		XZPlane = 2,
		XYPlane = 3,
		ESettingsDOF_MAX = 4,
	};

	// Enum Engine.EFrictionCombineMode
	// NumValues: 0x0004
	enum class EFrictionCombineMode : uint8_t
	{
		Average = 0,
		Min = 1,
		Multiply = 2,
		Max = 3,
	};

	// Enum Engine.EPhysicsAsyncAddMode
	// NumValues: 0x0004
	enum class EPhysicsAsyncAddMode : uint8_t
	{
		OnceOverlapSwitchToAdd = 0,
		OnceOverlapAdditiveToAdd = 1,
		OnceOverLapByPhysicsTree = 2,
		EPhysicsAsyncAddMode_MAX = 3,
	};

	// Enum Engine.EViewTargetBlendFunction
	// NumValues: 0x0006
	enum class EViewTargetBlendFunction : uint8_t
	{
		VTBlend_Linear = 0,
		VTBlend_Cubic = 1,
		VTBlend_EaseIn = 2,
		VTBlend_EaseOut = 3,
		VTBlend_EaseInOut = 4,
		VTBlend_MAX = 5,
	};

	// Enum Engine.EDynamicForceFeedbackAction
	// NumValues: 0x0004
	enum class EDynamicForceFeedbackAction : uint8_t
	{
		Start = 0,
		Update = 1,
		Stop = 2,
		EDynamicForceFeedbackAction_MAX = 3,
	};

	// Enum Engine.EPreferredWorldScaleType
	// NumValues: 0x0005
	enum class EPreferredWorldScaleType : uint8_t
	{
		EPWS_MiniWorld = 0,
		EPWS_MidWorld = 1,
		EPWS_BigWorld = 2,
		EPWS_Num = 3,
		EPWS_MAX = 4,
	};

	// Enum Engine.ERenderMatrixMode
	// NumValues: 0x0003
	enum class ERenderMatrixMode : uint8_t
	{
		ERMM_Default = 0,
		ERMM_IndependentFovFromCameraManager = 1,
		ERMM_MAX = 2,
	};

	// Enum Engine.ERendererStencilMask
	// NumValues: 0x000B
	enum class ERendererStencilMask : uint8_t
	{
		ERSM_Default = 0,
		ERSM_255 = 1,
		ERSM_1 = 2,
		ERSM_2 = 3,
		ERSM_4 = 4,
		ERSM_8 = 5,
		ERSM_16 = 6,
		ERSM_32 = 7,
		ERSM_64 = 8,
		ERSM_128 = 9,
		ERSM_MAX = 10,
	};

	// Enum Engine.EHasCustomNavigableGeometry
	// NumValues: 0x0005
	enum class EHasCustomNavigableGeometry : uint8_t
	{
		No = 0,
		Yes = 1,
		EvenIfNotCollidable = 2,
		DontExport = 3,
		EHasCustomNavigableGeometry_MAX = 4,
	};

	// Enum Engine.ECanBeCharacterBase
	// NumValues: 0x0004
	enum class ECanBeCharacterBase : uint8_t
	{
		ECB_No = 0,
		ECB_Yes = 1,
		ECB_Owner = 2,
		ECB_MAX = 3,
	};

	// Enum Engine.EReflectionInfluencePrimitiveType
	// NumValues: 0x0004
	enum class EReflectionInfluencePrimitiveType : uint8_t
	{
		BothStaticAndMovable = 0,
		StaticOnly = 1,
		MovableOnly = 2,
		EReflectionInfluencePrimitiveType_MAX = 3,
	};

	// Enum Engine.EReflectionSourceType
	// NumValues: 0x0003
	enum class EReflectionSourceType : uint8_t
	{
		CapturedScene = 0,
		SpecifiedCubemap = 1,
		EReflectionSourceType_MAX = 2,
	};

	// Enum Engine.EReflectionRangeShape
	// NumValues: 0x0003
	enum class EReflectionRangeShape : uint8_t
	{
		Sphere = 0,
		Box = 1,
		EReflectionRangeShape_MAX = 2,
	};

	// Enum Engine.EDefaultBackBufferPixelFormat
	// NumValues: 0x0006
	enum class EDefaultBackBufferPixelFormat : uint8_t
	{
		DBBPF_B8G8R8A8 = 0,
		DBBPF_A16B16G16R16_DEPRECATED = 1,
		DBBPF_FloatRGB_DEPRECATED = 2,
		DBBPF_FloatRGBA = 3,
		DBBPF_A2B10G10R10 = 4,
		DBBPF_MAX = 5,
	};

	// Enum Engine.EAutoExposureMethodUI
	// NumValues: 0x0004
	enum class EAutoExposureMethodUI : uint8_t
	{
		AEM_Histogram = 0,
		AEM_Basic = 1,
		AEM_Manual = 2,
		AEM_MAX = 3,
	};

	// Enum Engine.EAlphaChannelMode
	// NumValues: 0x0004
	enum class EAlphaChannelMode : uint8_t
	{
		Disabled = 0,
		LinearColorSpaceOnly = 1,
		AllowThroughTonemapper = 2,
		EAlphaChannelMode_MAX = 3,
	};

	// Enum Engine.EVelocityOutputPass
	// NumValues: 0x0004
	enum class EVelocityOutputPass : uint8_t
	{
		DepthPass = 0,
		BasePass = 1,
		AfterBasePass = 2,
		EVelocityOutputPass_MAX = 3,
	};

	// Enum Engine.EEarlyZPass
	// NumValues: 0x0005
	enum class EEarlyZPass : uint8_t
	{
		None = 0,
		OpaqueOnly = 1,
		OpaqueAndMasked = 2,
		Auto = 3,
		EEarlyZPass_MAX = 4,
	};

	// Enum Engine.ECustomDepthStencil
	// NumValues: 0x0005
	enum class ECustomDepthStencil : uint8_t
	{
		Disabled = 0,
		Enabled = 1,
		EnabledOnDemand = 2,
		EnabledWithStencil = 3,
		ECustomDepthStencil_MAX = 4,
	};

	// Enum Engine.EMobileMSAASampleCount
	// NumValues: 0x0005
	enum class EMobileMSAASampleCount : uint8_t
	{
		One = 1,
		Two = 2,
		Four = 4,
		Eight = 8,
		EMobileMSAASampleCount_MAX = 9,
	};

	// Enum Engine.ECompositingSampleCount
	// NumValues: 0x0005
	enum class ECompositingSampleCount : uint8_t
	{
		One = 1,
		Two = 2,
		Four = 4,
		Eight = 8,
		ECompositingSampleCount_MAX = 9,
	};

	// Enum Engine.EClearSceneOptions
	// NumValues: 0x0004
	enum class EClearSceneOptions : uint8_t
	{
		NoClear = 0,
		HardwareClear = 1,
		QuadAtMaxZ = 2,
		EClearSceneOptions_MAX = 3,
	};

	// Enum Engine.EReporterLineStyle
	// NumValues: 0x0003
	enum class EReporterLineStyle : uint8_t
	{
		Line = 0,
		Dash = 1,
		EReporterLineStyle_MAX = 2,
	};

	// Enum Engine.ELegendPosition
	// NumValues: 0x0003
	enum class ELegendPosition : uint8_t
	{
		Outside = 0,
		Inside = 1,
		ELegendPosition_MAX = 2,
	};

	// Enum Engine.EGraphDataStyle
	// NumValues: 0x0003
	enum class EGraphDataStyle : uint8_t
	{
		Lines = 0,
		Filled = 1,
		EGraphDataStyle_MAX = 2,
	};

	// Enum Engine.EGraphAxisStyle
	// NumValues: 0x0004
	enum class EGraphAxisStyle : uint8_t
	{
		Lines = 0,
		Notches = 1,
		Grid = 2,
		EGraphAxisStyle_MAX = 3,
	};

	// Enum Engine.ERichCurveKeyTimeCompressionFormat
	// NumValues: 0x0003
	enum class ERichCurveKeyTimeCompressionFormat : uint8_t
	{
		RCKTCF_uint16 = 0,
		RCKTCF_float32 = 1,
		RCKTCF_MAX = 2,
	};

	// Enum Engine.ERichCurveCompressionFormat
	// NumValues: 0x0006
	enum class ERichCurveCompressionFormat : uint8_t
	{
		RCCF_Empty = 0,
		RCCF_Constant = 1,
		RCCF_Linear = 2,
		RCCF_Cubic = 3,
		RCCF_Mixed = 4,
		RCCF_MAX = 5,
	};

	// Enum Engine.EConstraintTransform
	// NumValues: 0x0003
	enum class EConstraintTransform : uint8_t
	{
		Absolute = 0,
		Relative = 1,
		EConstraintTransform_MAX = 2,
	};

	// Enum Engine.EControlConstraint
	// NumValues: 0x0003
	enum class EControlConstraint : uint8_t
	{
		Orientation = 0,
		Translation = 1,
		MAX = 2,
	};

	// Enum Engine.ERootMotionFinishVelocityMode
	// NumValues: 0x0004
	enum class ERootMotionFinishVelocityMode : uint8_t
	{
		MaintainLastRootMotionVelocity = 0,
		SetVelocity = 1,
		ClampVelocity = 2,
		ERootMotionFinishVelocityMode_MAX = 3,
	};

	// Enum Engine.ERootMotionSourceSettingsFlags
	// NumValues: 0x0003
	enum class ERootMotionSourceSettingsFlags : uint8_t
	{
		UseSensitiveLiftoffCheck = 1,
		DisablePartialEndTick = 2,
		ERootMotionSourceSettingsFlags_MAX = 3,
	};

	// Enum Engine.ERootMotionSourceStatusFlags
	// NumValues: 0x0004
	enum class ERootMotionSourceStatusFlags : uint8_t
	{
		Prepared = 1,
		Finished = 2,
		MarkedForRemoval = 4,
		ERootMotionSourceStatusFlags_MAX = 5,
	};

	// Enum Engine.ERootMotionAccumulateMode
	// NumValues: 0x0003
	enum class ERootMotionAccumulateMode : uint8_t
	{
		Override = 0,
		Additive = 1,
		ERootMotionAccumulateMode_MAX = 2,
	};

	// Enum Engine.ERTCChannelPlane
	// NumValues: 0x000A
	enum class ERTCChannelPlane : uint8_t
	{
		Default = 0,
		R = 1,
		RG = 2,
		RG_B = 3,
		RGB = 4,
		RGBA = 5,
		RGB_A = 6,
		RG_A = 7,
		Count = 8,
		ERTCChannelPlane_MAX = 9,
	};

	// Enum Engine.ERTCColorSpace
	// NumValues: 0x0004
	enum class ERTCColorSpace : uint8_t
	{
		Default = 0,
		LDR = 1,
		Count = 2,
		ERTCColorSpace_MAX = 3,
	};

	// Enum Engine.ERTCQuality
	// NumValues: 0x0006
	enum class ERTCQuality : uint8_t
	{
		Default = 0,
		Fastest = 1,
		Normal = 2,
		High = 3,
		Count = 4,
		ERTCQuality_MAX = 5,
	};

	// Enum Engine.ERTCFormat
	// NumValues: 0x0008
	enum class ERTCFormat : uint8_t
	{
		Default = 0,
		UE4Ori = 1,
		None = 2,
		ASTC_Family = 3,
		ETC_Family = 4,
		DXT_Family = 5,
		Count = 6,
		ERTCFormat_MAX = 7,
	};

	// Enum Engine.ERuntimeVirtualTextureLayerType
	// NumValues: 0x0005
	enum class ERuntimeVirtualTextureLayerType : uint8_t
	{
		Detail = 0,
		Base = 1,
		Backup = 2,
		Count = 3,
		ERuntimeVirtualTextureLayerType_MAX = 4,
	};

	// Enum Engine.ERuntimeVirtualTextureMainPassType
	// NumValues: 0x0004
	enum class ERuntimeVirtualTextureMainPassType : uint8_t
	{
		Never = 0,
		Exclusive = 1,
		Always = 2,
		ERuntimeVirtualTextureMainPassType_MAX = 3,
	};

	// Enum Engine.ERuntimeVirtualTextureMaterialType
	// NumValues: 0x0009
	enum class ERuntimeVirtualTextureMaterialType : uint8_t
	{
		BaseColor = 0,
		BaseColor_Normal_DEPRECATED = 1,
		BaseColor_Normal_Specular = 2,
		BaseColor_Normal_Roughness_Specular_Mask_Height = 3,
		BaseColor_Normal_Specular_YCoCg = 4,
		BaseColor_Normal_Specular_Mask_YCoCg = 5,
		WorldHeight = 6,
		Count = 7,
		ERuntimeVirtualTextureMaterialType_MAX = 8,
	};

	// Enum Engine.ERayTracingWaterCausticsBufferScale
	// NumValues: 0x0004
	enum class ERayTracingWaterCausticsBufferScale : uint8_t
	{
		FULL = 0,
		HALF = 1,
		QUATER = 2,
		ERayTracingWaterCausticsBufferScale_MAX = 3,
	};

	// Enum Engine.ERayTracingWaterCausticsType
	// NumValues: 0x0004
	enum class ERayTracingWaterCausticsType : uint8_t
	{
		Disable = 0,
		SurfelBasedRendering = 1,
		ProceduralMeshes = 2,
		ERayTracingWaterCausticsType_MAX = 3,
	};

	// Enum Engine.EMobilePixelProjectedReflectionQuality
	// NumValues: 0x0005
	enum class EMobilePixelProjectedReflectionQuality : uint8_t
	{
		Disabled = 0,
		BestPerformance = 1,
		BetterQuality = 2,
		BestQuality = 3,
		EMobilePixelProjectedReflectionQuality_MAX = 4,
	};

	// Enum Engine.EMobilePlanarReflectionMode
	// NumValues: 0x0004
	enum class EMobilePlanarReflectionMode : uint8_t
	{
		Usual = 0,
		MobilePPRExclusive = 1,
		MobilePPR = 2,
		EMobilePlanarReflectionMode_MAX = 3,
	};

	// Enum Engine.ERayTracingMeshCausticsDebugScreenData
	// NumValues: 0x0004
	enum class ERayTracingMeshCausticsDebugScreenData : uint8_t
	{
		Debug_None = 0,
		Debug_Photon = 1,
		Debug_CausticsVariance = 2,
		Debug_MAX = 3,
	};

	// Enum Engine.ERayTracingMeshCausticsDebugLightData
	// NumValues: 0x0009
	enum class ERayTracingMeshCausticsDebugLightData : uint8_t
	{
		Debug_None = 0,
		Debug_Normal = 1,
		Debug_ScreenArea = 2,
		Debug_CausticsVariance = 3,
		Debug_RayDensity = 4,
		Debug_RayDensityMip = 5,
		Debug_LightID = 6,
		Debug_PhotonCount = 7,
		Debug_MAX = 8,
	};

	// Enum Engine.ERayTracingMeshCausticsTranslucentReflectionMode
	// NumValues: 0x0004
	enum class ERayTracingMeshCausticsTranslucentReflectionMode : uint8_t
	{
		TranslucentReflectionMode_NoReflection = 0,
		TranslucentReflectionMode_AlwaysReflection = 1,
		TranslucentReflectionMode_RandomReflection = 2,
		TranslucentReflectionMode_MAX = 3,
	};

	// Enum Engine.ERayTracingMeshCausticsBufferScale
	// NumValues: 0x0004
	enum class ERayTracingMeshCausticsBufferScale : uint8_t
	{
		BufferScale_Full = 0,
		BufferScale_Half = 1,
		BufferScale_Quarter = 2,
		BufferScale_MAX = 3,
	};

	// Enum Engine.ERayTracingMeshCausticsResolutionOverride
	// NumValues: 0x0008
	enum class ERayTracingMeshCausticsResolutionOverride : uint8_t
	{
		Resolution_None = 0,
		Resolution_64 = 1,
		Resolution_128 = 2,
		Resolution_256 = 3,
		Resolution_512 = 4,
		Resolution_1024 = 5,
		Resolution_2048 = 6,
		Resolution_MAX = 7,
	};

	// Enum Engine.ERayTracingMeshCausticsResolution
	// NumValues: 0x0007
	enum class ERayTracingMeshCausticsResolution : uint8_t
	{
		Resolution_64 = 0,
		Resolution_128 = 1,
		Resolution_256 = 2,
		Resolution_512 = 3,
		Resolution_1024 = 4,
		Resolution_2048 = 5,
		Resolution_MAX = 6,
	};

	// Enum Engine.EReflectedAndRefractedRayTracedShadows
	// NumValues: 0x0004
	enum class EReflectedAndRefractedRayTracedShadows : uint8_t
	{
		Disabled = 0,
		Hard_shadows = 1,
		Area_shadows = 2,
		EReflectedAndRefractedRayTracedShadows_MAX = 3,
	};

	// Enum Engine.ERayTracingGIDenoiseDebugType
	// NumValues: 0x0009
	enum class ERayTracingGIDenoiseDebugType : uint8_t
	{
		Disabled = 0,
		Variance = 1,
		FirstMoment = 2,
		SecondMoment = 3,
		HistoryLength = 4,
		MotionVector = 5,
		HitDistance = 6,
		RawOutput = 7,
		ERayTracingGIDenoiseDebugType_MAX = 8,
	};

	// Enum Engine.ERayTracingGIDenoiseSpatialFilterType
	// NumValues: 0x0003
	enum class ERayTracingGIDenoiseSpatialFilterType : uint8_t
	{
		ATrous = 0,
		Gaussian = 1,
		ERayTracingGIDenoiseSpatialFilterType_MAX = 2,
	};

	// Enum Engine.ERayTracingGIDenoiseType
	// NumValues: 0x0004
	enum class ERayTracingGIDenoiseType : uint8_t
	{
		Disabled = 0,
		UE4 = 1,
		New = 2,
		ERayTracingGIDenoiseType_MAX = 3,
	};

	// Enum Engine.ERayTracingGlobalIlluminationType
	// NumValues: 0x0004
	enum class ERayTracingGlobalIlluminationType : uint8_t
	{
		Disabled = 0,
		BruteForce = 1,
		FinalGather = 2,
		ERayTracingGlobalIlluminationType_MAX = 3,
	};

	// Enum Engine.ETranslucencyType
	// NumValues: 0x0005
	enum class ETranslucencyType : uint8_t
	{
		Raster = 0,
		RayTracing = 1,
		HybridTranslucency = 2,
		EnhancedRayTracing = 3,
		ETranslucencyType_MAX = 4,
	};

	// Enum Engine.EReflectionsType
	// NumValues: 0x0003
	enum class EReflectionsType : uint8_t
	{
		ScreenSpace = 0,
		RayTracing = 1,
		EReflectionsType_MAX = 2,
	};

	// Enum Engine.ELightUnits
	// NumValues: 0x0004
	enum class ELightUnits : uint8_t
	{
		Unitless = 0,
		Candelas = 1,
		Lumens = 2,
		ELightUnits_MAX = 3,
	};

	// Enum Engine.EPPEdgeDetectMethod
	// NumValues: 0x0004
	enum class EPPEdgeDetectMethod : uint8_t
	{
		DD_NONE = 0,
		DD_Sobel = 1,
		DD_IRoberts = 2,
		DD_MAX = 3,
	};

	// Enum Engine.EPPBlurMethod
	// NumValues: 0x0004
	enum class EPPBlurMethod : uint8_t
	{
		BB_NONE = 0,
		BB_GB = 1,
		BB_IB = 2,
		BB_MAX = 3,
	};

	// Enum Engine.ELensFlareMethod
	// NumValues: 0x0004
	enum class ELensFlareMethod : uint8_t
	{
		LFM_UE = 0,
		LFM_OPTIMIZED = 1,
		LFM_CUSTOM = 2,
		LFM_MAX = 3,
	};

	// Enum Engine.EBloomMethod
	// NumValues: 0x0003
	enum class EBloomMethod : uint8_t
	{
		BM_SOG = 0,
		BM_FFT = 1,
		BM_MAX = 2,
	};

	// Enum Engine.EAutoExposureMethod
	// NumValues: 0x0004
	enum class EAutoExposureMethod : uint8_t
	{
		AEM_Histogram = 0,
		AEM_Basic = 1,
		AEM_Manual = 2,
		AEM_MAX = 3,
	};

	// Enum Engine.EDepthOfFieldMethod
	// NumValues: 0x0004
	enum class EDepthOfFieldMethod : uint8_t
	{
		DOFM_BokehDOF = 0,
		DOFM_Gaussian = 1,
		DOFM_CircleDOF = 2,
		DOFM_MAX = 3,
	};

	// Enum Engine.ELiteRendererUsage
	// NumValues: 0x0004
	enum class ELiteRendererUsage : uint8_t
	{
		Default = 0,
		OnlyTranslucent = 1,
		Scope = 2,
		ELiteRendererUsage_MAX = 3,
	};

	// Enum Engine.ESceneCapturePrimitiveRenderMode
	// NumValues: 0x0004
	enum class ESceneCapturePrimitiveRenderMode : uint8_t
	{
		PRM_LegacySceneCapture = 0,
		PRM_RenderScenePrimitives = 1,
		PRM_UseShowOnlyList = 2,
		PRM_MAX = 3,
	};

	// Enum Engine.ESSAA
	// NumValues: 0x0005
	enum class ESSAA : uint8_t
	{
		SSAA_None = 0,
		SSAA_2X = 2,
		SSAA_3X = 3,
		SSAA_4X = 4,
		SSAA_MAX = 5,
	};

	// Enum Engine.EMaterialProperty
	// NumValues: 0x0024
	enum class EMaterialProperty : uint8_t
	{
		MP_EmissiveColor = 0,
		MP_Opacity = 1,
		MP_OpacityMask = 2,
		MP_DiffuseColor = 3,
		MP_SpecularColor = 4,
		MP_BaseColor = 5,
		MP_Metallic = 6,
		MP_Specular = 7,
		MP_Roughness = 8,
		MP_Anisotropy = 9,
		MP_Normal = 10,
		MP_Tangent = 11,
		MP_WorldPositionOffset = 12,
		MP_WorldDisplacement = 13,
		MP_TessellationMultiplier = 14,
		MP_SubsurfaceColor = 15,
		MP_CustomData0 = 16,
		MP_CustomData1 = 17,
		MP_AmbientOcclusion = 18,
		MP_Refraction = 19,
		MP_CustomizedUVs0 = 20,
		MP_CustomizedUVs1 = 21,
		MP_CustomizedUVs2 = 22,
		MP_CustomizedUVs3 = 23,
		MP_CustomizedUVs4 = 24,
		MP_CustomizedUVs5 = 25,
		MP_CustomizedUVs6 = 26,
		MP_CustomizedUVs7 = 27,
		MP_PixelDepthOffset = 28,
		MP_ShadingModel = 29,
		MP_WetnessMask = 30,
		MP_Porosity = 31,
		MP_PuddleMask = 32,
		MP_MaterialAttributes = 33,
		MP_CustomOutput = 34,
		MP_MAX = 35,
	};

	// Enum Engine.EAntiAliasingMethod
	// NumValues: 0x0008
	enum class EAntiAliasingMethod : uint8_t
	{
		AAM_None = 0,
		AAM_FXAA = 1,
		AAM_TemporalAA = 2,
		AAM_MSAA = 3,
		AAM_TSR = 4,
		AAM_SMAA = 5,
		AAM_LWTAA = 6,
		AAM_MAX = 7,
	};

	// Enum Engine.EPhysicsTransformUpdateMode
	// NumValues: 0x0003
	enum class EPhysicsTransformUpdateMode : uint8_t
	{
		SimulationUpatesComponentTransform = 0,
		ComponentTransformIsKinematic = 1,
		EPhysicsTransformUpdateMode_MAX = 2,
	};

	// Enum Engine.EAnimationMode
	// NumValues: 0x0004
	enum class EAnimationMode : uint8_t
	{
		AnimationBlueprint = 0,
		AnimationSingleNode = 1,
		AnimationCustomMode = 2,
		EAnimationMode_MAX = 3,
	};

	// Enum Engine.EKinematicBonesUpdateToPhysics
	// NumValues: 0x0003
	enum class EKinematicBonesUpdateToPhysics : uint8_t
	{
		SkipSimulatingBones = 0,
		SkipAllBones = 1,
		EKinematicBonesUpdateToPhysics_MAX = 2,
	};

	// Enum Engine.EClothMassMode
	// NumValues: 0x0005
	enum class EClothMassMode : uint8_t
	{
		UniformMass = 0,
		TotalMass = 1,
		Density = 2,
		MaxClothMassMode = 3,
		EClothMassMode_MAX = 4,
	};

	// Enum Engine.EAnimCurveType
	// NumValues: 0x0005
	enum class EAnimCurveType : uint8_t
	{
		AttributeCurve = 0,
		MaterialCurve = 1,
		MorphTargetCurve = 2,
		MaxAnimCurveType = 3,
		EAnimCurveType_MAX = 4,
	};

	// Enum Engine.ESkeletalMeshSkinningImportVersions
	// NumValues: 0x0005
	enum class ESkeletalMeshSkinningImportVersions : uint8_t
	{
		Before_Versionning = 0,
		SkeletalMeshBuildRefactor = 1,
		VersionPlusOne = 2,
		LatestVersion = 1,
		ESkeletalMeshSkinningImportVersions_MAX = 3,
	};

	// Enum Engine.ESkeletalMeshGeoImportVersions
	// NumValues: 0x0005
	enum class ESkeletalMeshGeoImportVersions : uint8_t
	{
		Before_Versionning = 0,
		SkeletalMeshBuildRefactor = 1,
		VersionPlusOne = 2,
		LatestVersion = 1,
		ESkeletalMeshGeoImportVersions_MAX = 3,
	};

	// Enum Engine.EBoneFilterActionOption
	// NumValues: 0x0004
	enum class EBoneFilterActionOption : uint8_t
	{
		Remove = 0,
		Keep = 1,
		Invalid = 2,
		EBoneFilterActionOption_MAX = 3,
	};

	// Enum Engine.SkeletalMeshOptimizationImportance
	// NumValues: 0x0007
	enum class ESkeletalMeshOptimizationImportance : uint8_t
	{
		SMOI_Off = 0,
		SMOI_Lowest = 1,
		SMOI_Low = 2,
		SMOI_Normal = 3,
		SMOI_High = 4,
		SMOI_Highest = 5,
		SMOI_MAX = 6,
	};

	// Enum Engine.SkeletalMeshOptimizationType
	// NumValues: 0x0004
	enum class ESkeletalMeshOptimizationType : uint8_t
	{
		SMOT_NumOfTriangles = 0,
		SMOT_MaxDeviation = 1,
		SMOT_TriangleOrDeviation = 2,
		SMOT_MAX = 3,
	};

	// Enum Engine.SkeletalMeshTerminationCriterion
	// NumValues: 0x0007
	enum class ESkeletalMeshTerminationCriterion : uint8_t
	{
		SMTC_NumOfTriangles = 0,
		SMTC_NumOfVerts = 1,
		SMTC_TriangleOrVert = 2,
		SMTC_AbsNumOfTriangles = 3,
		SMTC_AbsNumOfVerts = 4,
		SMTC_AbsTriangleOrVert = 5,
		SMTC_MAX = 6,
	};

	// Enum Engine.EBoneTranslationRetargetingMode
	// NumValues: 0x0006
	enum class EBoneTranslationRetargetingMode : uint8_t
	{
		Animation = 0,
		Skeleton = 1,
		AnimationScaled = 2,
		AnimationRelative = 3,
		OrientAndScale = 4,
		EBoneTranslationRetargetingMode_MAX = 5,
	};

	// Enum Engine.EBoneSpaces
	// NumValues: 0x0003
	enum class EBoneSpaces : uint8_t
	{
		WorldSpace = 0,
		ComponentSpace = 1,
		EBoneSpaces_MAX = 2,
	};

	// Enum Engine.EVisibilityBasedAnimTickOption
	// NumValues: 0x0005
	enum class EVisibilityBasedAnimTickOption : uint8_t
	{
		AlwaysTickPoseAndRefreshBones = 0,
		AlwaysTickPose = 1,
		OnlyTickMontagesWhenNotRendered = 2,
		OnlyTickPoseWhenRendered = 3,
		EVisibilityBasedAnimTickOption_MAX = 4,
	};

	// Enum Engine.EPhysBodyOp
	// NumValues: 0x0003
	enum class EPhysBodyOp : uint8_t
	{
		PBO_None = 0,
		PBO_Term = 1,
		PBO_MAX = 2,
	};

	// Enum Engine.EBoneVisibilityStatus
	// NumValues: 0x0004
	enum class EBoneVisibilityStatus : uint8_t
	{
		BVS_HiddenByParent = 0,
		BVS_Visible = 1,
		BVS_ExplicitlyHidden = 2,
		BVS_MAX = 3,
	};

	// Enum Engine.ESkyLightSourceType
	// NumValues: 0x0003
	enum class ESkyLightSourceType : uint8_t
	{
		SLS_CapturedScene = 0,
		SLS_SpecifiedCubemap = 1,
		SLS_MAX = 2,
	};

	// Enum Engine.EReverbSendMethod
	// NumValues: 0x0004
	enum class EReverbSendMethod : uint8_t
	{
		Linear = 0,
		CustomCurve = 1,
		Manual = 2,
		EReverbSendMethod_MAX = 3,
	};

	// Enum Engine.EAirAbsorptionMethod
	// NumValues: 0x0003
	enum class EAirAbsorptionMethod : uint8_t
	{
		Linear = 0,
		CustomCurve = 1,
		EAirAbsorptionMethod_MAX = 2,
	};

	// Enum Engine.ESoundSpatializationAlgorithm
	// NumValues: 0x0003
	enum class ESoundSpatializationAlgorithm : uint8_t
	{
		SPATIALIZATION_Default = 0,
		SPATIALIZATION_HRTF = 1,
		SPATIALIZATION_MAX = 2,
	};

	// Enum Engine.ESoundDistanceCalc
	// NumValues: 0x0005
	enum class ESoundDistanceCalc : uint8_t
	{
		SOUNDDISTANCE_Normal = 0,
		SOUNDDISTANCE_InfiniteXYPlane = 1,
		SOUNDDISTANCE_InfiniteXZPlane = 2,
		SOUNDDISTANCE_InfiniteYZPlane = 3,
		SOUNDDISTANCE_MAX = 4,
	};

	// Enum Engine.EVirtualizationMode
	// NumValues: 0x0004
	enum class EVirtualizationMode : uint8_t
	{
		Disabled = 0,
		PlayWhenSilent = 1,
		Restart = 2,
		EVirtualizationMode_MAX = 3,
	};

	// Enum Engine.ESoundWaveLoadingBehavior
	// NumValues: 0x0007
	enum class ESoundWaveLoadingBehavior : uint8_t
	{
		Inherited = 0,
		RetainOnLoad = 1,
		PrimeOnLoad = 2,
		LoadOnDemand = 3,
		ForceInline = 4,
		Uninitialized = 255,
		ESoundWaveLoadingBehavior_MAX = 256,
	};

	// Enum Engine.EAudioOutputTarget
	// NumValues: 0x0004
	enum class EAudioOutputTarget : uint8_t
	{
		Speaker = 0,
		Controller = 1,
		ControllerFallbackToSpeaker = 2,
		EAudioOutputTarget_MAX = 3,
	};

	// Enum Engine.EMaxConcurrentResolutionRule
	// NumValues: 0x0008
	enum class EMaxConcurrentResolutionRule : uint8_t
	{
		PreventNew = 0,
		StopOldest = 1,
		StopFarthestThenPreventNew = 2,
		StopFarthestThenOldest = 3,
		StopLowestPriority = 4,
		StopQuietest = 5,
		StopLowestPriorityThenPreventNew = 6,
		EMaxConcurrentResolutionRule_MAX = 7,
	};

	// Enum Engine.ESoundGroup
	// NumValues: 0x001A
	enum class ESoundGroup : uint8_t
	{
		SOUNDGROUP_Default = 0,
		SOUNDGROUP_Effects = 1,
		SOUNDGROUP_UI = 2,
		SOUNDGROUP_Music = 3,
		SOUNDGROUP_Voice = 4,
		SOUNDGROUP_GameSoundGroup1 = 5,
		SOUNDGROUP_GameSoundGroup2 = 6,
		SOUNDGROUP_GameSoundGroup3 = 7,
		SOUNDGROUP_GameSoundGroup4 = 8,
		SOUNDGROUP_GameSoundGroup5 = 9,
		SOUNDGROUP_GameSoundGroup6 = 10,
		SOUNDGROUP_GameSoundGroup7 = 11,
		SOUNDGROUP_GameSoundGroup8 = 12,
		SOUNDGROUP_GameSoundGroup9 = 13,
		SOUNDGROUP_GameSoundGroup10 = 14,
		SOUNDGROUP_GameSoundGroup11 = 15,
		SOUNDGROUP_GameSoundGroup12 = 16,
		SOUNDGROUP_GameSoundGroup13 = 17,
		SOUNDGROUP_GameSoundGroup14 = 18,
		SOUNDGROUP_GameSoundGroup15 = 19,
		SOUNDGROUP_GameSoundGroup16 = 20,
		SOUNDGROUP_GameSoundGroup17 = 21,
		SOUNDGROUP_GameSoundGroup18 = 22,
		SOUNDGROUP_GameSoundGroup19 = 23,
		SOUNDGROUP_GameSoundGroup20 = 24,
		SOUNDGROUP_MAX = 25,
	};

	// Enum Engine.ModulationParamMode
	// NumValues: 0x0004
	enum class EModulationParamMode : uint8_t
	{
		MPM_Normal = 0,
		MPM_Abs = 1,
		MPM_Direct = 2,
		MPM_MAX = 3,
	};

	// Enum Engine.ESourceBusChannels
	// NumValues: 0x0003
	enum class ESourceBusChannels : uint8_t
	{
		Mono = 0,
		Stereo = 1,
		ESourceBusChannels_MAX = 2,
	};

	// Enum Engine.ESourceBusSendLevelControlMethod
	// NumValues: 0x0004
	enum class ESourceBusSendLevelControlMethod : uint8_t
	{
		Linear = 0,
		CustomCurve = 1,
		Manual = 2,
		ESourceBusSendLevelControlMethod_MAX = 3,
	};

	// Enum Engine.ESubmixChannelFormat
	// NumValues: 0x0008
	enum class ESubmixChannelFormat : uint8_t
	{
		Device = 0,
		Stereo = 1,
		Quad = 2,
		FiveDotOne = 3,
		SevenDotOne = 4,
		Ambisonics = 5,
		Count = 6,
		ESubmixChannelFormat_MAX = 7,
	};

	// Enum Engine.ESendLevelControlMethod
	// NumValues: 0x0004
	enum class ESendLevelControlMethod : uint8_t
	{
		Linear = 0,
		CustomCurve = 1,
		Manual = 2,
		ESendLevelControlMethod_MAX = 3,
	};

	// Enum Engine.EAudioRecordingExportType
	// NumValues: 0x0003
	enum class EAudioRecordingExportType : uint8_t
	{
		SoundWave = 0,
		WavFile = 1,
		EAudioRecordingExportType_MAX = 2,
	};

	// Enum Engine.ESoundWaveFFTSize
	// NumValues: 0x0006
	enum class ESoundWaveFFTSize : uint8_t
	{
		VerySmall_64 = 0,
		Small_256 = 1,
		Medium_512 = 2,
		Large_1024 = 3,
		VeryLarge_2048 = 4,
		ESoundWaveFFTSize_MAX = 5,
	};

	// Enum Engine.EDecompressionType
	// NumValues: 0x0009
	enum class EDecompressionType : uint8_t
	{
		DTYPE_Setup = 0,
		DTYPE_Invalid = 1,
		DTYPE_Preview = 2,
		DTYPE_Native = 3,
		DTYPE_RealTime = 4,
		DTYPE_Procedural = 5,
		DTYPE_Xenon = 6,
		DTYPE_Streaming = 7,
		DTYPE_MAX = 8,
	};

	// Enum Engine.ESplineCoordinateSpace
	// NumValues: 0x0003
	enum class ESplineCoordinateSpace : uint8_t
	{
		Local = 0,
		World = 1,
		ESplineCoordinateSpace_MAX = 2,
	};

	// Enum Engine.ESplinePointType
	// NumValues: 0x0006
	enum class ESplinePointType : uint8_t
	{
		Linear = 0,
		Curve = 1,
		Constant = 2,
		CurveClamped = 3,
		CurveCustomTangent = 4,
		ESplinePointType_MAX = 5,
	};

	// Enum Engine.ESplineMeshAxis
	// NumValues: 0x0004
	enum class ESplineMeshAxis : uint8_t
	{
		X = 0,
		Y = 1,
		Z = 2,
		ESplineMeshAxis_MAX = 3,
	};

	// Enum Engine.EMaterialErrorType
	// NumValues: 0x0005
	enum class EMaterialErrorType : uint8_t
	{
		None = 0,
		WIP = 1,
		Warning = 2,
		Error = 3,
		EMaterialErrorType_MAX = 4,
	};

	// Enum Engine.EOptimizationType
	// NumValues: 0x0003
	enum class EOptimizationType : uint8_t
	{
		OT_NumOfTriangles = 0,
		OT_MaxDeviation = 1,
		OT_MAX = 2,
	};

	// Enum Engine.EImportanceLevel
	// NumValues: 0x0008
	enum class EImportanceLevel : uint8_t
	{
		IL_Off = 0,
		IL_Lowest = 1,
		IL_Low = 2,
		IL_Normal = 3,
		IL_High = 4,
		IL_Highest = 5,
		TEMP_BROKEN2 = 6,
		EImportanceLevel_MAX = 7,
	};

	// Enum Engine.ENormalMode
	// NumValues: 0x0006
	enum class ENormalMode : uint8_t
	{
		NM_PreserveSmoothingGroups = 0,
		NM_RecalculateNormals = 1,
		NM_RecalculateNormalsSmooth = 2,
		NM_RecalculateNormalsHard = 3,
		TEMP_BROKEN = 4,
		ENormalMode_MAX = 5,
	};

	// Enum Engine.EReflectionCachePolicy
	// NumValues: 0x0003
	enum class EReflectionCachePolicy : uint8_t
	{
		CacheRuntime = 0,
		ManuallySpecify = 1,
		EReflectionCachePolicy_MAX = 2,
	};

	// Enum Engine.EStereoLayerShape
	// NumValues: 0x0005
	enum class EStereoLayerShape : uint8_t
	{
		SLSH_QuadLayer = 0,
		SLSH_CylinderLayer = 1,
		SLSH_CubemapLayer = 2,
		SLSH_EquirectLayer = 3,
		SLSH_MAX = 4,
	};

	// Enum Engine.EStereoLayerType
	// NumValues: 0x0004
	enum class EStereoLayerType : uint8_t
	{
		SLT_WorldLocked = 0,
		SLT_TrackerLocked = 1,
		SLT_FaceLocked = 2,
		SLT_MAX = 3,
	};

	// Enum Engine.EOpacitySourceMode
	// NumValues: 0x0006
	enum class EOpacitySourceMode : uint8_t
	{
		OSM_Alpha = 0,
		OSM_ColorBrightness = 1,
		OSM_RedChannel = 2,
		OSM_GreenChannel = 3,
		OSM_BlueChannel = 4,
		OSM_MAX = 5,
	};

	// Enum Engine.ESubUVBoundingVertexCount
	// NumValues: 0x0003
	enum class ESubUVBoundingVertexCount : uint8_t
	{
		BVC_FourVertices = 0,
		BVC_EightVertices = 1,
		BVC_MAX = 2,
	};

	// Enum Engine.EABCDirection
	// NumValues: 0x0007
	enum class EABCDirection : uint8_t
	{
		Up = 0,
		Down = 1,
		Right = 2,
		Left = 3,
		Forward = 4,
		Backward = 5,
		EABCDirection_MAX = 6,
	};

	// Enum Engine.EVerticalTextAligment
	// NumValues: 0x0005
	enum class EVerticalTextAligment : uint8_t
	{
		EVRTA_TextTop = 0,
		EVRTA_TextCenter = 1,
		EVRTA_TextBottom = 2,
		EVRTA_QuadTop = 3,
		EVRTA_MAX = 4,
	};

	// Enum Engine.EHorizTextAligment
	// NumValues: 0x0004
	enum class EHorizTextAligment : uint8_t
	{
		EHTA_Left = 0,
		EHTA_Center = 1,
		EHTA_Right = 2,
		EHTA_MAX = 3,
	};

	// Enum Engine.ETextureCompressionQuality
	// NumValues: 0x0007
	enum class ETextureCompressionQuality : uint8_t
	{
		TCQ_Default = 0,
		TCQ_Lowest = 1,
		TCQ_Low = 2,
		TCQ_Medium = 3,
		TCQ_High = 4,
		TCQ_Highest = 5,
		TCQ_MAX = 6,
	};

	// Enum Engine.ETextureSourceFormat
	// NumValues: 0x000A
	enum class ETextureSourceFormat : uint8_t
	{
		TSF_Invalid = 0,
		TSF_G8 = 1,
		TSF_BGRA8 = 2,
		TSF_BGRE8 = 3,
		TSF_RGBA16 = 4,
		TSF_RGBA16F = 5,
		TSF_RGBA8 = 6,
		TSF_RGBE8 = 7,
		TSF_G16 = 8,
		TSF_MAX = 9,
	};

	// Enum Engine.ETextureSourceArtType
	// NumValues: 0x0004
	enum class ETextureSourceArtType : uint8_t
	{
		TSAT_Uncompressed = 0,
		TSAT_PNGCompressed = 1,
		TSAT_DDSFile = 2,
		TSAT_MAX = 3,
	};

	// Enum Engine.ETextureMipCount
	// NumValues: 0x0004
	enum class ETextureMipCount : uint8_t
	{
		TMC_ResidentMips = 0,
		TMC_AllMips = 1,
		TMC_AllMipsBiased = 2,
		TMC_MAX = 3,
	};

	// Enum Engine.EBlendChannel
	// NumValues: 0x0005
	enum class EBlendChannel : uint8_t
	{
		BC_BlendToRed = 0,
		BC_BlendToGreen = 1,
		BC_BlendToBlue = 2,
		BC_BlendToAlpha = 3,
		BC_MAX = 4,
	};

	// Enum Engine.ECompositeTextureMode
	// NumValues: 0x0006
	enum class ECompositeTextureMode : uint8_t
	{
		CTM_Disabled = 0,
		CTM_NormalRoughnessToRed = 1,
		CTM_NormalRoughnessToGreen = 2,
		CTM_NormalRoughnessToBlue = 3,
		CTM_NormalRoughnessToAlpha = 4,
		CTM_MAX = 5,
	};

	// Enum Engine.ECompositeChannelType
	// NumValues: 0x0003
	enum class ECompositeChannelType : uint8_t
	{
		CCT_None = 0,
		CCT_RG_As_Normalized_Normal = 1,
		CCT_MAX = 2,
	};

	// Enum Engine.TextureAddress
	// NumValues: 0x0004
	enum class ETextureAddress : uint8_t
	{
		TA_Wrap = 0,
		TA_Clamp = 1,
		TA_Mirror = 2,
		TA_MAX = 3,
	};

	// Enum Engine.TextureFilter
	// NumValues: 0x0005
	enum class ETextureFilter : uint8_t
	{
		TF_Nearest = 0,
		TF_Bilinear = 1,
		TF_Trilinear = 2,
		TF_Default = 3,
		TF_MAX = 4,
	};

	// Enum Engine.TextureCompressionSettings
	// NumValues: 0x000F
	enum class ETextureCompressionSettings : uint8_t
	{
		TC_Default = 0,
		TC_Normalmap = 1,
		TC_Masks = 2,
		TC_Grayscale = 3,
		TC_Displacementmap = 4,
		TC_VectorDisplacementmap = 5,
		TC_HDR = 6,
		TC_EditorIcon = 7,
		TC_Alpha = 8,
		TC_DistanceFieldFont = 9,
		TC_HDR_Compressed = 10,
		TC_BC7 = 11,
		TC_HDR_RGBM = 12,
		TC_HDR_RGBM_NoCompressed = 13,
		TC_MAX = 14,
	};

	// Enum Engine.ETextureDownSampleAmount
	// NumValues: 0x0006
	enum class ETextureDownSampleAmount : uint8_t
	{
		TDSA_FromTextureGroup = 0,
		TDSA_None = 1,
		TDSA_Low = 2,
		TDSA_Medium = 3,
		TDSA_High = 4,
		TDSA_MAX = 5,
	};

	// Enum Engine.ETextureLossyCompressionAmount
	// NumValues: 0x0008
	enum class ETextureLossyCompressionAmount : uint8_t
	{
		TLCA_Default = 0,
		TLCA_None = 1,
		TLCA_Lowest = 2,
		TLCA_Low = 3,
		TLCA_Medium = 4,
		TLCA_High = 5,
		TLCA_Highest = 6,
		TLCA_MAX = 7,
	};

	// Enum Engine.ETextureMipLoadOptions
	// NumValues: 0x0004
	enum class ETextureMipLoadOptions : uint8_t
	{
		Default = 0,
		AllMips = 1,
		OnlyFirstMip = 2,
		ETextureMipLoadOptions_MAX = 3,
	};

	// Enum Engine.ETextureSamplerFilter
	// NumValues: 0x0006
	enum class ETextureSamplerFilter : uint8_t
	{
		Point = 0,
		Bilinear = 1,
		Trilinear = 2,
		AnisotropicPoint = 3,
		AnisotropicLinear = 4,
		ETextureSamplerFilter_MAX = 5,
	};

	// Enum Engine.ETexturePowerOfTwoSetting
	// NumValues: 0x0004
	enum class ETexturePowerOfTwoSetting : uint8_t
	{
		None = 0,
		PadToPowerOfTwo = 1,
		PadToSquarePowerOfTwo = 2,
		ETexturePowerOfTwoSetting_MAX = 3,
	};

	// Enum Engine.TextureMipGenSettings
	// NumValues: 0x0016
	enum class ETextureMipGenSettings : uint8_t
	{
		TMGS_FromTextureGroup = 0,
		TMGS_SimpleAverage = 1,
		TMGS_Sharpen0 = 2,
		TMGS_Sharpen1 = 3,
		TMGS_Sharpen2 = 4,
		TMGS_Sharpen3 = 5,
		TMGS_Sharpen4 = 6,
		TMGS_Sharpen5 = 7,
		TMGS_Sharpen6 = 8,
		TMGS_Sharpen7 = 9,
		TMGS_Sharpen8 = 10,
		TMGS_Sharpen9 = 11,
		TMGS_Sharpen10 = 12,
		TMGS_NoMipmaps = 13,
		TMGS_LeaveExistingMips = 14,
		TMGS_Blur1 = 15,
		TMGS_Blur2 = 16,
		TMGS_Blur3 = 17,
		TMGS_Blur4 = 18,
		TMGS_Blur5 = 19,
		TMGS_Unfiltered = 20,
		TMGS_MAX = 21,
	};

	// Enum Engine.ETextureAstcPreferCompressor
	// NumValues: 0x0004
	enum class ETextureAstcPreferCompressor : uint8_t
	{
		TAPC_Default = 0,
		TAPC_Arm = 1,
		TAPC_IntelISPC = 2,
		TAPC_MAX = 3,
	};

	// Enum Engine.ETextureAstcCompressionQuality
	// NumValues: 0x0010
	enum class ETextureAstcCompressionQuality : uint8_t
	{
		TCQ_ASTC_Default = 0,
		TCQ_ASTC_4x4 = 1,
		TCQ_ASTC_5x4 = 2,
		TCQ_ASTC_5x5 = 3,
		TCQ_ASTC_6x5 = 4,
		TCQ_ASTC_6x6 = 5,
		TCQ_ASTC_8x5 = 6,
		TCQ_ASTC_8x6 = 7,
		TCQ_ASTC_10x5 = 8,
		TCQ_ASTC_10x6 = 9,
		TCQ_ASTC_8x8 = 10,
		TCQ_ASTC_10x8 = 11,
		TCQ_ASTC_10x10 = 12,
		TCQ_ASTC_12x10 = 13,
		TCQ_ASTC_12x12 = 14,
		TCQ_ASTC_Max = 15,
	};

	// Enum Engine.ETextureRenderTargetFormat
	// NumValues: 0x000C
	enum class ETextureRenderTargetFormat : uint8_t
	{
		RTF_R8 = 0,
		RTF_RG8 = 1,
		RTF_RGBA8 = 2,
		RTF_RGBA8_SRGB = 3,
		RTF_R16f = 4,
		RTF_RG16f = 5,
		RTF_RGBA16f = 6,
		RTF_R32f = 7,
		RTF_RG32f = 8,
		RTF_RGBA32f = 9,
		RTF_RGB10A2 = 10,
		RTF_MAX = 11,
	};

	// Enum Engine.ETimecodeProviderSynchronizationState
	// NumValues: 0x0005
	enum class ETimecodeProviderSynchronizationState : uint32
	{
		Closed = 0,
		Error = 1,
		Synchronized = 2,
		Synchronizing = 3,
		ETimecodeProviderSynchronizationState_MAX = 4,
	};

	// Enum Engine.ETimelineDirection
	// NumValues: 0x0003
	enum class ETimelineDirection : uint8_t
	{
		Forward = 0,
		Backward = 1,
		ETimelineDirection_MAX = 2,
	};

	// Enum Engine.ETimelineLengthMode
	// NumValues: 0x0003
	enum class ETimelineLengthMode : uint8_t
	{
		TL_TimelineLength = 0,
		TL_LastKeyFrame = 1,
		TL_MAX = 2,
	};

	// Enum Engine.ETimeStretchCurveMapping
	// NumValues: 0x0004
	enum class ETimeStretchCurveMapping : uint8_t
	{
		T_Original = 0,
		T_TargetMin = 1,
		T_TargetMax = 2,
		MAX = 3,
	};

	// Enum Engine.ETwitterIntegrationDelegate
	// NumValues: 0x0004
	enum class ETwitterIntegrationDelegate : uint8_t
	{
		TID_AuthorizeComplete = 0,
		TID_TweetUIComplete = 1,
		TID_RequestComplete = 2,
		TID_MAX = 3,
	};

	// Enum Engine.ETwitterRequestMethod
	// NumValues: 0x0004
	enum class ETwitterRequestMethod : uint8_t
	{
		TRM_Get = 0,
		TRM_Post = 1,
		TRM_Delete = 2,
		TRM_MAX = 3,
	};

	// Enum Engine.EUserDefinedStructureStatus
	// NumValues: 0x0005
	enum class EUserDefinedStructureStatus : uint8_t
	{
		UDSS_UpToDate = 0,
		UDSS_Dirty = 1,
		UDSS_Error = 2,
		UDSS_Duplicate = 3,
		UDSS_MAX = 4,
	};

	// Enum Engine.EUIScalingRule
	// NumValues: 0x0006
	enum class EUIScalingRule : uint8_t
	{
		ShortestSide = 0,
		LongestSide = 1,
		Horizontal = 2,
		Vertical = 3,
		Custom = 4,
		EUIScalingRule_MAX = 5,
	};

	// Enum Engine.ERenderFocusRule
	// NumValues: 0x0005
	enum class ERenderFocusRule : uint8_t
	{
		Always = 0,
		NonPointer = 1,
		NavigationOnly = 2,
		Never = 3,
		ERenderFocusRule_MAX = 4,
	};

	// Enum Engine.EVectorFieldConstructionOp
	// NumValues: 0x0003
	enum class EVectorFieldConstructionOp : uint8_t
	{
		VFCO_Extrude = 0,
		VFCO_Revolve = 1,
		VFCO_MAX = 2,
	};

	// Enum Engine.EWindSourceType
	// NumValues: 0x0003
	enum class EWindSourceType : uint8_t
	{
		Directional = 0,
		Point = 1,
		EWindSourceType_MAX = 2,
	};

	// Enum Engine.EPSCPoolMethod
	// NumValues: 0x0006
	enum class EPSCPoolMethod : uint8_t
	{
		None = 0,
		AutoRelease = 1,
		ManualRelease = 2,
		ManualRelease_OnComplete = 3,
		FreeInPool = 4,
		EPSCPoolMethod_MAX = 5,
	};

	// Enum Engine.EVolumeLightingMethod
	// NumValues: 0x0003
	enum class EVolumeLightingMethod : uint8_t
	{
		VLM_VolumetricLightmap = 0,
		VLM_SparseVolumeLightingSamples = 1,
		VLM_MAX = 2,
	};

	// Enum Engine.EVisibilityAggressiveness
	// NumValues: 0x0004
	enum class EVisibilityAggressiveness : uint8_t
	{
		VIS_LeastAggressive = 0,
		VIS_ModeratelyAggressive = 1,
		VIS_MostAggressive = 2,
		VIS_Max = 3,
	};

	// Enum Engine.EStaticShadowmapScale
	// NumValues: 0x0004
	enum class EStaticShadowmapScale : uint8_t
	{
		StaticShadowmapScale_Complete = 0,
		StaticShadowmapScale_Half = 1,
		StaticShadowmapScale_Quarter = 2,
		StaticShadowmapScale_Max = 3,
	};
};



namespace GPGlobalDefines
{
	// Enum GPGlobalDefines.EGPTriggerMode
// NumValues: 0x000C
	enum class EGPTriggerMode : uint8_t
	{
		AnyAny = 0,
		Player1 = 1,
		Player2 = 2,
		Player3 = 3,
		Player4 = 4,
		PlayerAny = 5,
		VehicleAny = 6,
		EnemyAny = 7,
		SpecialActor = 8,
		LevelEnvEvent = 9,
		Custom = 255,
		EGPTriggerMode_MAX = 256,
	};
	// Enum GPEncryption.EGPEncryptionType
// NumValues: 0x0016
	enum class EGPEncryptionType : uint32
	{
		None = 0,
		POV = 2,
		CharacterCapsule = 4,
		CharacterMesh = 8,
		CharacterMeshSceneProxy = 16,
		CharacterReplicationMovement = 32,
		PickupActor = 64,
		CharacterSceneComponent = 128,
		WeaponSceneComponent = 256,
		IntCharacterMovement = 512,
		MovementReplication = 1024,
		CharacterCapsule1p = 2048,
		CharacterMeshSceneProxy1p = 4096,
		EnableDynamicKey = 8192,
		CharacterMesh1p = 16384,
		CharacterVRamKey = 32768,
		CharacterCameraComponent = 65536,
		Encryptor_ForceSwitch = 1048576,
		Encryptor_Bit0 = 2097152,
		Encryptor_Bit1 = 4194304,
		Encryptor_Bit2 = 8388608,
		EGPEncryptionType_MAX = 8388609,
	};
	// ScriptStruct GPEncryption.GPEncryptionInfo
	// 0x0018 (0x0018 - 0x0000)
	struct alignas(0x08) FGPEncryptionInfo final
	{
	public:
		uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

}

namespace GPGameplay
{

	// Enum GPGameplay.EStateAudioEventType
	// NumValues: 0x0009
	enum class EStateAudioEventType : uint8_t
	{
		None = 0,
		NormalState = 1,
		LowHealth = 2,
		PendingDeath = 3,
		HoldBreath = 4,
		MP_ExitBoundary = 5,
		MP_EnterDeploy = 6,
		Suppressed = 7,
		EStateAudioEventType_MAX = 8,
	};

	// Enum GPGameplay.EModularPartNodeType
	// NumValues: 0x0006
	enum class EModularPartNodeType : uint8_t
	{
		None = 0,
		Adpater = 1,
		ExtraModel = 2,
		SkinAttach = 3,
		Pendant = 4,
		EModularPartNodeType_MAX = 5,
	};

	// Enum GPGameplay.EGPCharacterFightStateType
	// NumValues: 0x0004
	enum class EGPCharacterFightStateType : uint8_t
	{
		Fighting = 0,
		Leisure = 1,
		Alert = 2,
		EGPCharacterFightStateType_MAX = 3,
	};

	// Enum GPGameplay.EDamageValidateType
	// NumValues: 0x0005
	enum class EDamageValidateType : uint8_t
	{
		None = 0,
		HitScan = 1,
		Projectile = 2,
		MeleeHitScan = 3,
		EDamageValidateType_MAX = 4,
	};

	// Enum GPGameplay.EDamageType
	// NumValues: 0x001D
	enum class EDamageType : uint8_t
	{
		ENone = 0,
		EDefault = 1,
		EBuffDamage = 2,
		EWeaponDamage = 3,
		EDroppedDamage = 4,
		EWeaponThrowableDamage = 5,
		EPVEVehicleExplodeDamage = 6,
		EVehicleHitDamage = 7,
		EWeaponMeleeDamage = 8,
		EFSMActionDamage = 9,
		EDebug = 10,
		EVehicleLightDamage = 11,
		EVehicleNormalDamage = 12,
		EVehicleHeavyDamage = 13,
		EAssassinateDamage = 14,
		ETieBreakerDamage = 15,
		EFixedTrackRocket = 16,
		EAbilityC401 = 17,
		EBattleFieldSupportDamage = 18,
		LandmineDamage = 19,
		EMax = 20,
		ESectorArtilerrateSkillDamage = 21,
		EGuidedMissleSkillDamage = 22,
		ESkillDamage = 23,
		EWaterDrowningDamage = 24,
		ELaserDamage = 25,
		EInteractDamage = 26,
		ESceneFlameDamage = 27,
		EDamageType_MAX = 28,
	};

	// Enum GPGameplay.EDamageSystemDamageType
	// NumValues: 0x0006
	enum class EDamageSystemDamageType : uint8_t
	{
		None = 0,
		Point = 1,
		Radial = 2,
		Physics = 3,
		Buff = 4,
		EDamageSystemDamageType_MAX = 5,
	};

	// Enum GPGameplay.EDamageValidateResult
	// NumValues: 0x0007
	enum class EDamageValidateResult : uint8_t
	{
		None = 0,
		Approve = 1,
		Ignore = 2,
		Abort = 3,
		AbortOnlyLog = 4,
		UseServer = 5,
		EDamageValidateResult_MAX = 6,
	};

	// Enum GPGameplay.ECharacterLiveStatus
	// NumValues: 0x0006
	enum class ECharacterLiveStatus : uint8_t
	{
		ECharacterLiveStatus_None = 0,
		ECharacterLiveStatus_Alive = 1,
		ECharacterLiveStatus_Death = 2,
		ECharacterLiveStatus_ImpendingDeath = 3,
		ECharacterLiveStatus_WTF = 4,
		ECharacterLiveStatus_MAX = 5,
	};

	// Enum GPGameplay.EHitDamageApplyType
	// NumValues: 0x0004
	enum class EHitDamageApplyType : uint8_t
	{
		HitDamageApplyType_Health = 0,
		HitDamageApplyType_Shield = 1,
		HitDamageApplyType_BothShieldHealth = 2,
		HitDamageApplyType_MAX = 3,
	};

	// Enum GPGameplay.EDirection
	// NumValues: 0x0006
	enum class EDirection : uint8_t
	{
		Direction_None = 0,
		Direction_Front = 1,
		Direction_Back = 2,
		Direction_Left = 3,
		Direction_Right = 4,
		Direction_MAX = 5,
	};

	// Enum GPGameplay.EHitGroupType
	// NumValues: 0x0019
	enum class EHitGroupType : uint8_t
	{
		HitGroupType_None = 0,
		HitGroupType_Head = 1,
		HitGroupType_Neck = 2,
		HitGroupType_LeftShoulder = 3,
		HitGroupType_RightShoulder = 4,
		HitGroupType_Chest = 5,
		HitGroupType_Stomach = 6,
		HitGroupType_Hip = 7,
		HitGroupType_LeftLeg = 8,
		HitGroupType_LeftLegLower = 9,
		HitGroupType_LeftFoot = 10,
		HitGroupType_RightLeg = 11,
		HitGroupType_RightLegLower = 12,
		HitGroupType_RightFoot = 13,
		HitGroupType_LeftArm = 14,
		HitGroupType_LeftForeArm = 15,
		HitGroupType_LeftHand = 16,
		HitGroupType_RightArm = 17,
		HitGroupType_RightForeArm = 18,
		HitGroupType_RightHand = 19,
		HitGroupType_Shield = 20,
		HitGroupType_Weapon = 21,
		HitGroupType_RightAnkle = 22,
		HitGroupType_LeftAnkle = 23,
		HitGroupType_MAX = 24,
	};

	// Enum GPGameplay.EMysticalPendantShowType
	// NumValues: 0x0005
	enum class EMysticalPendantShowType : uint8_t
	{
		None = 0,
		Material = 1,
		Effect = 2,
		Image = 3,
		EMysticalPendantShowType_MAX = 4,
	};

	// Enum GPGameplay.EDeadType
	// NumValues: 0x0010
	enum class EDeadType : uint8_t
	{
		ENone = 0,
		EKilledByWeapon = 1,
		EkilledByVehicle = 2,
		EkilledBySelf = 3,
		EkilledByPoisonGas = 4,
		EkilledFallDown = 5,
		EKilledFromImpendingDeath = 6,
		EKilledFromBuff = 7,
		EKilledByGm = 8,
		EKilledFromEnvExplosion = 9,
		EKilledByVehicleWeapon = 10,
		EKilledByAssassinateDamage = 11,
		EKilledByBattleFieldSupportSkill = 12,
		EKilledBySectorArtilerrateSkill = 13,
		EKilledByGuidedMissleSkill = 14,
		EDeadType_MAX = 15,
	};

	// Enum GPGameplay.EGPHealthShowMode
	// NumValues: 0x0005
	enum class EGPHealthShowMode : uint8_t
	{
		NeverShow = 0,
		ShowOnPoint = 1,
		AlwaysShow = 2,
		ShowBigBar = 3,
		EGPHealthShowMode_MAX = 4,
	};

	// Enum GPGameplay.EGPFSMTransitionEvent
	// NumValues: 0x00A2
	enum class EGPFSMTransitionEvent : uint8_t
	{
		EGPFSMTransitionEvent_Unknown = 0,
		EGPFSMTransitionEVent_WaitPlayerStart = 1,
		EGPFSMTransitionEVent_EndWaitPlayerStart = 2,
		EGPFSMTransitionEVent_EnterMPLogoutState = 3,
		EGPFSMTransitionEVent_ExitMPLogoutState = 4,
		EGPFSMTransitionEvent_Timeout = 5,
		EGPFSMTransitionEvent_StartSprint = 6,
		EGPFSMTransitionEvent_StartSuperSprint = 7,
		EGPFSMTransitionEvent_EndSprintToStop = 8,
		EGPFSMTransitionEvent_EndSprintToMoving = 9,
		EGPFSMTransitionEvent_Finish = 10,
		EGPFSMTransitionEvent_NormalToADS = 11,
		EGPFSMTransitionEvent_AdsToNormal = 12,
		EGPFSMTransitionEvent_BeginVault = 13,
		EGPFSMTransitionEvent_EndVault = 14,
		EGPFSMTransitionEvent_BeginOperate = 15,
		EGPFSMTransitionEvent_EndOperate = 16,
		EGPFSMTransitionEvent_BeginZipline = 17,
		EGPFSMTransitionEvent_EndZipline = 18,
		EGPFSMTransitionEvent_CancelZipline = 19,
		EGPFSMTransitionEvent_CancelOperate = 20,
		EGPFSMTransitionEvent_ToLooting = 21,
		EGPFSMTransitionEvent_ToReborn = 22,
		EGPFSMTransitionEvent_BeAssassinateToIampendingDeath = 23,
		ESkillEvent_BuffFinish = 24,
		ESkillEvent_Cast = 25,
		ESkillEvent_Charged = 26,
		ESkillEvent_Charging = 27,
		ESkillEvent_Restored = 28,
		ESkillEvent_SpawnObjectFinish = 29,
		ESkillEvent_Terminate = 30,
		ESkillEvent_Ultimate = 31,
		ESkillEvent_NormalBreak = 32,
		ESkillEvent_Timeout = 33,
		ESkillEvent_Break = 34,
		ESkillEvent_BeginCharging = 35,
		ESkillEvent_BeginCooling = 36,
		ESkillEvent_BeginPreparing = 37,
		ESkillEvent_EndPrepare = 38,
		ESkillEvent_CancelPrepare = 39,
		ESkillEvent_Yes = 40,
		ESkillEvent_No = 41,
		ESkillEvent_SkillEnerngyChange = 42,
		ESkillEvent_Failed = 43,
		ESkillEvent_EnergyChanged = 44,
		ESkillEvent_Death = 45,
		ESkillEvent_Uncharged = 46,
		EGPFSMTransitionEvent_BeginRelaxIdle = 47,
		EGPFSMTransitionEvent_EndRelaxIdle = 48,
		EGPFSMTransitionEvent_BeginStarApp = 49,
		EGPFSMTransitionEvent_BeginStarAppInRegName = 50,
		EGPFSMTransitionEvent_EndStarApp = 51,
		EGPFSMTransitionEvent_BeginCutScne = 52,
		EGPFSMTransitionEvent_EndCutScne = 53,
		EGPFSMTransitionEvent_ToLeftLean = 54,
		EGPFSMTransitionEvent_ToRightLean = 55,
		EGPFSMTransitionEvent_EndLean = 56,
		EGPFSMTransitionEvent_StartClimbLadder = 57,
		EGPFSMTransitionEvent_GetOffClimbLadder = 58,
		EGPFSMTransitionEvent_EndClimbLadder = 59,
		EGPFSMTransitionEvent_CarryBodyGetOnVehicle = 60,
		EGPFSMTransitionEvent_CarryBodyGetOffVehicle = 61,
		EGPFSMTransitionEvent_BeginBeHit = 62,
		EGPFSMTransitionEvent_EndBeHit = 63,
		EGPFSMTransitionEvent_CancelBeHit = 64,
		EGPFSMTransitionEvent_StartAutoDriveVehicle = 65,
		EGPFSMTransitionEvent_CancelAutoDriveVehicle = 66,
		EGPFSMTransitionEvent_GetOnFlyBase = 67,
		EGPFSMTransitionEvent_GetOffFlyBase = 68,
		EGPFSMTransitionEvent_BeginUseSkill = 69,
		EGPFSMTransitionEvent_EndUseSkill = 70,
		EGPFSMTransitionEvent_BeginLeftHandSkill = 71,
		EGPFSMTransitionEvent_EndLeftHandSkill = 72,
		EGPFSMTransitionEvent_BeginRightHandSkill = 73,
		EGPFSMTransitionEvent_EndRightHandSkill = 74,
		EGPFSMTransitionEvent_BeginDoubleHandsSkill = 75,
		EGPFSMTransitionEvent_EndDoubleHandsSkill = 76,
		EGPFSMTransitionEvent_BeginLegsSkill = 77,
		EGPFSMTransitionEvent_EndLegsSkill = 78,
		EGPFSMTransitionEvent_BeginSpecialSkill = 79,
		EGPFSMTransitionEvent_EndSpecialSkill = 80,
		EGPFSMTransitionEvent_BeginActionSkill = 81,
		EGPFSMTransitionEvent_EndActionSkill = 82,
		EGPFSMTransitionEvent_BeginCustomSkill = 83,
		EGPFSMTransitionEvent_EndCustomSkill = 84,
		EGPFSMTransitionEvent_BeginCustom2Skill = 85,
		EGPFSMTransitionEvent_EndCustom2Skill = 86,
		EGPFSMTransitionEvent_BeginCustom3Skill = 87,
		EGPFSMTransitionEvent_EndCustom3Skill = 88,
		EGPFSMTransitionEvent_BeginAssassinate = 89,
		EGPFSMTransitionEvent_EndAssassinate = 90,
		EGPFSMTransitionEvent_SkillToSkillADS = 91,
		EGPFSMTransitionEvent_SkillADSToSkill = 92,
		EGPFSMTransitionEvent_EndRescue = 93,
		EGPFSMTransitionEvent_StartSearchItem = 94,
		EGPFSMTransitionEvent_EndSearchItem = 95,
		EGPFSMTransitionEvent_StartWeaponInspect = 96,
		EGPFSMTransitionEvent_EndWeaponInspect = 97,
		EGPFSMTransitionEvent_StartHighValueItemInspect = 98,
		EGPFSMTransitionEvent_EndHighValueItemInspect = 99,
		EGPFSMTransitionEvent_StartWeaponBipodDeploy = 100,
		EGPFSMTransitionEvent_EndWeaponBipodDeploy = 101,
		EGPFSMTransitionEvent_StartSlidingTackle = 102,
		EGPFSMTransitionEvent_EndSlidingTackle = 103,
		EGPFSMTransitionEvent_StartCrocodileBite = 104,
		EGPFSMTransitionEvent_EndCrocodileBite = 105,
		EGPFSMTransitionEvent_StartSimpleOperate = 106,
		EGPFSMTransitionEvent_EndSimpleOperate = 107,
		EGPFSMTransitionEvent_StartSimpleOperateWithUI = 108,
		EGPFSMTransitionEvent_EndSimpleOperateWithUI = 109,
		EGPFSMTransitionEvent_StartPreciseOperate = 110,
		EGPFSMTransitionEvent_EndPreciseOperate = 111,
		EGPFSMTransitionEvent_StartPreciseOperateWithUI = 112,
		EGPFSMTransitionEvent_EndPreciseOperateWithUI = 113,
		EGPFSMTransitionEvent_StartDelayOperate = 114,
		EGPFSMTransitionEvent_EndDelayOperate = 115,
		EGPFSMTransitionEvent_StartDelayOperateWithUI = 116,
		EGPFSMTransitionEvent_EndDelayOperateWithUI = 117,
		EGPFSMTransitionEvent_EndKnockbacck = 118,
		EGPFSMTransitionEvent_StartKnockbacck = 119,
		EGPFSMTransitionEvent_StartFirefighting = 120,
		EGPFSMTransitionEvent_EndFirefighting = 121,
		EGPFSMTransitionEvent_StartMarking = 122,
		EGPFSMTransitionEvent_EndMarking = 123,
		EGPFSMTransitionEvent_StartOneHandedGesture = 124,
		EGPFSMTransitionEvent_EndOneHandedGesture = 125,
		EGPFSMTransitionEvent_StartTwoHandedGesture = 126,
		EGPFSMTransitionEvent_EndTwoHandedGesture = 127,
		EGPFSMTransitionEvent_StartEmote = 128,
		EGPFSMTransitionEvent_EndEmote = 129,
		EGPFSMTransitionEvent_StartApplySpray = 130,
		EGPFSMTransitionEvent_EndApplySpray = 131,
		EGPFSMTransitionEvent_StartFallHighBeHit = 132,
		EGPFSMTransitionEvent_EndFallHighBeHit = 133,
		EGPFSMTransitionEvent_SafeHouseEnterRange = 134,
		EGPFSMTransitionEvent_SafeHouseLeaveRange = 135,
		EGPFSMTransitionEvent_StartAirDropVehicle = 136,
		EGPFSMTransitionEvent_EndAirDropVehicle = 137,
		EGPFSMTransitionEvent_StartSeamlessShow = 138,
		EGPFSMTransitionEvent_EndSeamlessShow = 139,
		EGPFSMTransitionEvent_StartRankSKillOperate = 140,
		EGPFSMTransitionEvent_EndRankSKillOperate = 141,
		EGPFSMTransitionEvent_StartCommonLeftArmAnim = 142,
		EGPFSMTransitionEvent_EndCommonLeftArmAnim = 143,
		EGPFSMTransitionEvent_StartDive = 144,
		EGPFSMTransitionEvent_EndDive = 145,
		EGPFSMTransitionEvent_CaptureFlagStarFinish = 146,
		EGPFSMTransitionEvent_StartCaptureFlag = 147,
		EGPFSMTransitionEvent_EndCaptureFlag = 148,
		EGPFSMTransitionEvent_StartPassiveMove = 149,
		EGPFSMTransitionEvent_EndPassiveMove = 150,
		EGPFSMTransitionEvent_StartPrePassiveMove = 151,
		EGPFSMTransitionEvent_EndPrePassiveMove = 152,
		EGPFSMTransitionEvent_EndElectricShock = 153,
		EGPFSMTransitionEvent_StartElectricShock = 154,
		EGPFSMTransitionEvent_StartHelmetAction = 155,
		EGPFSMTransitionEvent_EndHelmetAction = 156,
		EGPFSMTransitionEvent_StartDramaFall = 157,
		EGPFSMTransitionEvent_EndDramaFall = 158,
		EGPFSMTransitionEvent_GetOnVehicleMoveBase = 159,
		EGPFSMTransitionEvent_GetOffVehicleMoveBase = 160,
		EGPFSMTransitionEvent_MAX = 161,
	};

	// Enum GPGameplay.ECharacterFSMEventDefine
	// NumValues: 0x009F
	enum class ECharacterFSMEventDefine : uint8_t
	{
		EVENT_GPFSM_NONE = 0,
		EVENT_GPFSM_Server_ReceiveTransitionEvent = 1,
		EVENT_GPFSM_Client_MoveForward = 2,
		EVENT_GPFSM_Client_MoveRight = 3,
		EVENT_GPFSM_Client_MoveStatusChanged = 4,
		EVENT_GPFSM_Client_Turn = 5,
		EVENT_GPFSM_Client_TurnAtRate = 6,
		EVENT_GPFSM_Client_LookUp = 7,
		EVENT_GPFSM_Client_LookUpAtRate = 8,
		EVENT_GPFSM_Client_PrepareFire = 9,
		EVENT_GPFSM_Client_PrepareJump = 10,
		EVENT_GPFSM_Client_PrepareAim = 11,
		EVENT_GPFSM_Client_PrepareReload = 12,
		EVENT_GPFSM_Client_FireButtonPressed = 13,
		EVENT_GPFSM_Client_FireButtonReleased = 14,
		EVENT_GPFSM_Client_FireButtonRelease_IncludeF = 15,
		EVENT_GPFSM_Client_JumButtonPressed = 16,
		EVENT_GPFSM_Client_AimButtonPressed = 17,
		EVENT_GPFSM_Client_AimButtonReleased = 18,
		EVENT_GPFSM_Client_SideAimButtonPressed = 19,
		EVENT_GPFSM_Client_SideAimButtonReleased = 20,
		EVENT_GPFSM_Client_ReloadButtonPressed = 21,
		EVENT_GPFSM_Client_MoveButtonPressed = 22,
		EVENT_GPFSM_Client_SprintButtonPressed = 23,
		EVENT_GPFSM_Client_CrouchButtonPressed = 24,
		EVENT_GPFSM_Client_CrouchButtonReleased = 25,
		EVENT_GPFSM_Client_ProneButtonPressed = 26,
		EVENT_GPFSM_Client_SwitchWeaponButtonPressed = 27,
		EVENT_GPFSM_Client_ToogleCrouch = 28,
		EVENT_GPFSM_Client_ToogleProne = 29,
		EVENT_GPFSM_Client_TooglePose = 30,
		EVENT_GPFSM_Server_BeginUseItem = 31,
		EVENT_GPFSM_Server_EndUseItem = 32,
		EVENT_GPFSM_Server_CancelUseItem = 33,
		EVENT_GPFSM_Client_CancelUseItem = 34,
		EVENT_GPFSM_Client_ClientPreUseItem = 35,
		EVENT_GPFSM_Server_BeginOperate = 36,
		EVENT_GPFSM_Server_EndOperate = 37,
		EVENT_GPFSM_Server_CancelOperate = 38,
		EVENT_GPFSM_Server_TryRescue = 39,
		EVENT_GPFSM_Server_TryCancelRescue = 40,
		EVENT_GPFSM_Client_TryCancelRescue = 41,
		EVENT_GPFSM_Client_TryCancelRescueMySelf = 42,
		EVENT_GPFSM_Client_TryCancelCancelRescueMySelf = 43,
		EVENT_GPFSM_Client_BeingRescueInfoArrived = 44,
		EVENT_GPFSM_Client_BeingRescueAnimationTriggered = 45,
		EVENT_GPFSM_Client_TryCancelRescueMySelfImmediately = 46,
		EVENT_GPFSM_Client_TryCancelCancelRescueMySelfImmediately = 47,
		EVENT_GPFSM_Server_StartSprint = 48,
		EVENT_GPFSM_Server_EndSprint = 49,
		EVENT_GPFSM_Server_BeginLooting = 50,
		EVENT_GPFSM_Server_TryDriveCar = 51,
		EVENT_GPFSM_Server_TryTexiCar = 52,
		EVENT_GPFSM_Server_GetOnVehicleWhenCarryBody = 53,
		EVENT_GPFSM_Server_GetOffVehicleWhenCarryBody = 54,
		EVENT_GPFSM_Server_TryStopDrivingCar = 55,
		EVENT_GPFSM_Server_TryTexiOffCar = 56,
		EVENT_GPFSM_Client_CarInfoArrived = 57,
		EVENT_GPFSM_Client_TrySwitchSeat = 58,
		EVENT_GPFSM_Server_TrySwitchSeat = 59,
		EVENT_GPFSM_Server_TryGetOnCarWithSpecificSeat = 60,
		EVENT_GPFSM_Server_TryCarryBody = 61,
		EVENT_GPFSM_Server_TryCancelCarryBody = 62,
		EVENT_GPFSM_Server_TryDropCarryBody = 63,
		EVENT_GPFSM_Server_TryStartMonitor = 64,
		EVENT_GPFSM_Server_TryCancelMonitor = 65,
		EVENT_GPFSM_Server_TryEnterMonitor = 66,
		EVENT_GPFSM_Server_TryEnterNextMonitor = 67,
		EVENT_GPFSM_Server_TryEnterLastMonitor = 68,
		EVENT_GPFSM_Server_TryUseTelescope = 69,
		EVENT_GPFSM_Server_TryCancelTelescope = 70,
		EVENT_GPFSM_Both_ResetPassengerPosition = 71,
		EVENT_GPFSM_Server_TryUseH2HBInCar = 72,
		EVENT_GPFSM_Server_TryUseH2HBOnLand = 73,
		EVENT_GPFSM_Server_TryLeaveMachineGun = 74,
		EVENT_GPFSM_Client_JumpButtonPressed = 75,
		EVENT_GPFSM_Client_JumpButtonReleased = 76,
		EVENT_GPFSM_Client_ForceToStand = 77,
		EVENT_GPFSM_Client_UseItemInfoArrived = 78,
		EVENT_GPFSM_Client_TrumpetButtonPressed = 79,
		EVENT_GPFSM_Client_TrumpetButtonReleased = 80,
		EVENT_GPFSM_Client_WheelieButtonPressed = 81,
		EVENT_GPFSM_Client_WheelieButtonReleased = 82,
		EVENT_GPFSM_Client_StoppieButtonPressed = 83,
		EVENT_GPFSM_Client_StoppieButtonReleased = 84,
		EVENT_GPFSM_Client_TryUseStarApp = 85,
		EVENT_GPFSM_Client_TryCancelStarApp = 86,
		EVENT_GPFSM_Client_ToogleLeftLean = 87,
		EVENT_GPFSM_Client_ToogleRightLean = 88,
		EVENT_GPFSM_CancelLean = 89,
		EVENT_GPFSM_Server_StartSearchItem = 90,
		EVENT_GPFSM_Server_EndSearchItem = 91,
		EVENT_GPFSM_Server_StartWeaponInspect = 92,
		EVENT_GPFSM_Server_EndWeaponInspect = 93,
		EVENT_GPFSM_Server_StartWeaponBipodDeploy = 94,
		EVENT_GPFSM_Server_EndWeaponBipodDeploy = 95,
		EVENT_GPFSM_Client_StartWeaponBipodDeploy = 96,
		EVENT_GPFSM_Client_EndPerformAction = 97,
		EVENT_GPFSM_Server_EndPerformAction = 98,
		EVENT_GPFSM_Client_FirefightingButtonReleased = 99,
		EVENT_GPFSM_Server_KnockDownBeginBeHit = 100,
		EVENT_GPFSM_Server_KnockDownCancelBeHit = 101,
		EVENT_GPFSM_Server_ExplodeDamageBeginBeHit = 102,
		EVENT_GPFSM_Server_ExplodeDamageCancelBeHit = 103,
		EVENT_GPFSM_Server_BeginUseSkill = 104,
		EVENT_GPFSM_Server_EndUseSkill = 105,
		EVENT_GPFSM_Server_BeginLeftHandSkill = 106,
		EVENT_GPFSM_Server_EndLeftHandSkill = 107,
		EVENT_GPFSM_Server_BeginRightHandSkill = 108,
		EVENT_GPFSM_Server_EndRightHandSkill = 109,
		EVENT_GPFSM_Server_BeginDoubleHandsSkill = 110,
		EVENT_GPFSM_Server_EndDoubleHandsSkill = 111,
		EVENT_GPFSM_Server_BeginLegsSkill = 112,
		EVENT_GPFSM_Server_EndLegsSkill = 113,
		EVENT_GPFSM_Server_BeginSpecialSkill = 114,
		EVENT_GPFSM_Server_EndSpecialSkill = 115,
		EVENT_GPFSM_Server_BeginActionSkill = 116,
		EVENT_GPFSM_Server_EndActionSkill = 117,
		EVENT_GPFSM_Server_BeginCustomSkill = 118,
		EVENT_GPFSM_Server_EndCustomSkill = 119,
		EVENT_GPFSM_Server_BeginCustom2Skill = 120,
		EVENT_GPFSM_Server_EndCustom2Skill = 121,
		EVENT_GPFSM_Server_BeginCustom3Skill = 122,
		EVENT_GPFSM_Server_EndCustom3Skill = 123,
		EVENT_GPFSM_Server_BeginZipline = 124,
		EVENT_GPFSM_Server_EndZipline = 125,
		EVENT_GPFSM_Server_CancelZipline = 126,
		EVENT_GPFSM_Server_BeginAssassinate = 127,
		EVENT_GPFSM_Server_EndAssassinate = 128,
		EVENT_GPFSM_Server_CancelAssassinate = 129,
		EVENT_GPFSM_Server_BeingAssassinateBegin = 130,
		EVENT_GPFSM_Server_BeingAssassinateEnd = 131,
		EVENT_GPFSM_Server_BeingAssassinateBreakOff = 132,
		EVENT_GPFSM_CommandSkill = 133,
		EVENT_GPFSM_BeginPrepare = 134,
		EVENT_GPFSM_CancelPrepare = 135,
		EVENT_GPFSM_Both_TryCancelUseItem = 136,
		EVENT_GPFSM_Client_ParentAttachmentChange = 137,
		EVENT_GPFSM_Server_TryEnterRelaxIdle = 138,
		EVENT_GPFSM_Server_TryCancelRelaxIdle = 139,
		EVENT_GPFSM_Client_TryGetOutWeapon = 140,
		EVENT_GPFSM_Client_TryStartAutoDriveVehicle = 141,
		EVENT_GPFSM_Server_BeginFloating = 142,
		EVENT_GPFSM_Server_CancelFloating = 143,
		EVENT_GPFSM_Client_SkillPressed = 144,
		EVENT_GPFSM_Client_SkillReleased = 145,
		EVENT_GPFSM_Client_BeginVaultAndClimb = 146,
		EVENT_GPFSM_Client_EndVaultAndClimb = 147,
		EVENT_GPFSM_Server_BeginBeSuppressed = 148,
		EVENT_GPFSM_Server_CanceBeSuppressed = 149,
		EVENT_GPFSM_Server_BeginRaiseWatch = 150,
		EVENT_GPFSM_Server_EndRaiseWatch = 151,
		EVENT_GPFSM_Client_SafeHouseEnterRange = 152,
		EVENT_GPFSM_Client_SafeHouseLeaveRange = 153,
		EVENT_GPFSM_Server_StartAirDropVehicle = 154,
		EVENT_GPFSM_Server_EndAirDropVehicle = 155,
		EVENT_GPFSM_Server_StartRankSkillOperate = 156,
		EVENT_GPFSM_Server_EndRankSkillOperate = 157,
		EVENT_GPFSM_MAX = 158,
	};

	// Enum GPGameplay.EBreathState
	// NumValues: 0x0005
	enum class EBreathState : uint8_t
	{
		None = 0,
		Breath = 1,
		HoldBreath = 2,
		UnHoldBreath = 3,
		EBreathState_MAX = 4,
	};

	// Enum GPGameplay.ECharingSlot
	// NumValues: 0x0018
	enum class ECharingSlot : uint8_t
	{
		None = 0,
		ArmdedForceItem1 = 1,
		ArmdedForceItem2 = 2,
		Ability = 3,
		AbilityReady = 4,
		FlyRebotSkill = 5,
		FlyRebotHealth = 6,
		FlyRebotCharging = 7,
		BattleFieldPropSkillCD = 8,
		GuidedMissle = 9,
		SectorArtilerrate = 10,
		SectorSmoke = 11,
		RebornBeacons = 12,
		NightVision = 13,
		ArmdedForceItem1Ready = 14,
		ArmdedForceItem2Ready = 15,
		BattleFieldPropSkillReady = 16,
		UpgradeHighValueAnchor = 17,
		UpgradeHighVehicleAnchor = 18,
		FastRedeploy = 19,
		FreeBuild = 20,
		CommanderCommumication = 21,
		Relink = 22,
		Max = 23,
	};

	// Enum GPGameplay.ESkillBehavior
	// NumValues: 0x0026
	enum class ESkillBehavior : uint8_t
	{
		NormalStart = 0,
		NormalBreak = 1,
		NormalEnd = 2,
		UnNormalEnd = 3,
		Fire = 4,
		FirePress = 5,
		Reload = 6,
		Jump = 7,
		Aim = 8,
		SwtichWeapon = 9,
		AssaultBreak = 10,
		CharacherImpendingDeat = 11,
		CharacherImpendingDeatAction = 12,
		CharacherDie = 13,
		CurWeaponAllAmmoEmpty = 14,
		UseItem = 15,
		SwtichWeaponSuccess = 16,
		BeginEquipWeapon = 17,
		EndEquipWeapon = 18,
		FireUnPress = 19,
		EndFire = 20,
		SupportWeaponFire = 21,
		UseSkill2_Begin = 22,
		UseSkill2_End = 23,
		SkillWeaponAttach = 24,
		SkillWeaponDetach = 25,
		BeginEquip = 26,
		WeaponComponentFire = 27,
		WeaponComponentEndFire = 28,
		WeaponComponentSwitchToIdle = 29,
		TakeDamge = 30,
		TakeDamgeToDie = 31,
		EMPBreak = 32,
		RePressedInSkill = 33,
		LeaveSkillState = 34,
		OnEndPassiveMove = 35,
		OnPassiveMoveAnimEnd = 36,
		ESkillBehavior_MAX = 37,
	};

	// Enum GPGameplay.ESkillBtnCall
	// NumValues: 0x0006
	enum class ESkillBtnCall : uint8_t
	{
		None = 0,
		Pressed = 1,
		Released = 2,
		Click = 3,
		LongPress = 4,
		ESkillBtnCall_MAX = 5,
	};

	// Enum GPGameplay.EWeaponAddFunction
	// NumValues: 0x000F
	enum class EWeaponAddFunction : uint8_t
	{
		EWeapAddFunc_None = 0,
		EWeapAddFunc_Zooming = 1,
		EWeapAddFunc_Silencer = 2,
		EWeapAddFunc_FlashSuppressor = 3,
		EWeapAddFunc_ClipExtent = 4,
		EWeapAddFunc_ChangeClipFaster = 5,
		EWeapAddFunc_LeftHandIK = 6,
		EWeapAddFunc_BipodUpDown = 7,
		EWeapAddFunc_FlashLight = 8,
		EWeapAddFunc_Laser = 9,
		EWeapAddFunc_PowerFlash = 10,
		EWeapAddFunc_InspectWeapon = 11,
		EWeapAddFunc_QuicklyAdapt = 12,
		EBackWeapPos_Max = 13,
		EWeaponAddFunction_MAX = 14,
	};

	// Enum GPGameplay.ESubtitleSequenceType
	// NumValues: 0x000C
	enum class ESubtitleSequenceType : uint8_t
	{
		None = 0,
		Subtitle_Raid1 = 1,
		Subtitle_Raid2 = 2,
		Subtitle_SafeHouse = 3,
		Subtitle_SOLEvent = 4,
		Subtitle_SOLQuest = 5,
		Subtitle_AI = 6,
		Subtitle_Intro = 7,
		Subtitle_CutScene = 8,
		Subtitle_BreakthroughThink = 9,
		Subtitle_SOLRelink = 10,
		ESubtitleSequenceType_MAX = 11,
	};

	// Enum GPGameplay.EGameRuleType
	// NumValues: 0x0005
	enum class EGameRuleType : uint8_t
	{
		None = 0,
		Rule_SOL = 2,
		Rule_Arena = 4,
		Rule_JailBreak = 8,
		EGameRuleType_MAX = 9,
	};

	// Enum GPGameplay.ESlotButton
	// NumValues: 0x0005
	enum class ESlotButton : uint8_t
	{
		SlotButton_Right = 0,
		SlotButton_Left = 1,
		SlotButton_FirePress = 2,
		SlotButton_FireRelease = 3,
		SlotButton_MAX = 4,
	};

	// Enum GPGameplay.ESkillUISlot
	// NumValues: 0x000D
	enum class ESkillUISlot : uint8_t
	{
		UIState_NoSlot = 0,
		UIState_FireButtonLeft = 1,
		UIState_Custom = 2,
		UIState_Custom2 = 3,
		UIState_Custom3 = 4,
		UIState_Self = 5,
		UIState_QTELeft = 6,
		UIState_QTERight = 7,
		UIState_ActiveSkill = 8,
		UIState_SupportSkill = 9,
		UIState_BattleFieldPropSkill = 10,
		UIState_QTELeft_Ext = 11,
		UIState_MAX = 12,
	};

	// Enum GPGameplay.ESkillCDEffectType
	// NumValues: 0x0003
	enum class ESkillCDEffectType : uint8_t
	{
		SkillCDEffect_Normal = 0,
		SkillCDEffect_Support = 1,
		SkillCDEffect_MAX = 2,
	};

	// Enum GPGameplay.ERankSkillUIState
	// NumValues: 0x0005
	enum class ERankSkillUIState : uint8_t
	{
		None = 0,
		ScoreLess = 1,
		CDing = 2,
		ToBeUsed = 3,
		ERankSkillUIState_MAX = 4,
	};

	// Enum GPGameplay.EMarkFeature
	// NumValues: 0x0012
	enum class EMarkFeature : uint32
	{
		UpdateScreenPosOnce = 1,
		UpdateScreenPos = 2,
		UpdateScreenPosFromTargetActor = 4,
		UpdateScreenPosFromGivenLocation = 8,
		UpdateScreenPosByController = 16,
		UpdateScreenPosByMatrix = 32,
		UpdateScreenPosEnableTraceXYZ = 64,
		UpdateScreenPosEnableTraceXY = 128,
		Update3DDis = 1024,
		Update2DDis = 2048,
		UpdateDir = 32768,
		UpdateAimed = 1048576,
		UpdateAimedOnTarget = 2097152,
		UpdateAimedBasedOnRadialDistance = 4194304,
		UpdateHasCoverBetween = 33554432,
		UpdateHasCoverBetweenUseRayTrace = 67108864,
		UpdateSizeOnDis = 1073741824,
		EMarkFeature_MAX = 1073741825,
	};

	// Enum GPGameplay.ETeamIdentity
	// NumValues: 0x0005
	enum class ETeamIdentity : uint8_t
	{
		None = 0,
		TeamMember = 1,
		TeamLeader = 2,
		Commander = 3,
		ETeamIdentity_MAX = 4,
	};

	// Enum GPGameplay.EMarkingType
	// NumValues: 0x0006
	enum class EMarkingType : uint8_t
	{
		None = 0,
		NormalUnitMarking = 1,
		UpgradeMarking = 2,
		TacticalMarking = 3,
		COUNT = 4,
		EMarkingType_MAX = 5,
	};

	// Enum GPGameplay.EMarkerCampType
	// NumValues: 0x0007
	enum class EMarkerCampType : uint8_t
	{
		None = 0,
		Neutral = 1,
		Campmate = 2,
		Teammate = 3,
		Enemy = 4,
		Self = 5,
		EMarkerCampType_MAX = 6,
	};

	// Enum GPGameplay.EGPMarkerClassType
	// NumValues: 0x000E
	enum class EGPMarkerClassType : uint8_t
	{
		None = 0,
		FriendlyCharacterMarker = 1,
		EnemyCharacterMarker = 2,
		SceneWeaponMarker = 3,
		VehicleMarker = 4,
		TacticalEquipmentMarker = 5,
		BattleFieldGameModeMarker = 6,
		SOLGameModeMarker = 7,
		QuestMarker = 8,
		MapMarker = 9,
		MarkingMarker = 10,
		InteractorMarker = 11,
		TacticalMarking = 12,
		EGPMarkerClassType_MAX = 13,
	};

	// Enum GPGameplay.ECountDownPriority
	// NumValues: 0x0006
	enum class ECountDownPriority : uint8_t
	{
		None = 0,
		Common = 1,
		Contract = 2,
		Escape = 3,
		MandelBrick = 4,
		Max = 5,
	};

	// Enum GPGameplay.EGPAbilityLockerType
	// NumValues: 0x0005
	enum class EGPAbilityLockerType : uint8_t
	{
		None = 0,
		LaserPointer = 1,
		LaserPointerReciver = 2,
		LowAmmo = 3,
		EGPAbilityLockerType_MAX = 4,
	};

	// Enum GPGameplay.EAudioListenerType
	// NumValues: 0x000C
	enum class EAudioListenerType : uint8_t
	{
		None = 0,
		Action = 1,
		Weapon = 2,
		Skill = 3,
		Voice = 4,
		Interact = 5,
		Loot = 6,
		Vehicle = 7,
		Buff = 8,
		RemoveBuff = 9,
		UseItem = 10,
		EAudioListenerType_MAX = 11,
	};

	// Enum GPGameplay.EInteractorType
	// NumValues: 0x0010
	enum class EInteractorType : uint8_t
	{
		InteractorType_Unknow = 0,
		InteractorType_Default = 1,
		InteractorType_BoxOrBag = 2,
		InteractorType_DeadBody = 3,
		InteractorType_SingleItem = 4,
		InteractorType_Vehicle = 5,
		InteractorType_Rescue = 6,
		InteractorType_Carrybody = 7,
		InteractorType_ShopStation = 8,
		InteractorType_Door = 9,
		InteractorType_SingleItemContainer = 10,
		InteractorType_HackPC = 11,
		InteractorType_MusicPlayer = 12,
		InteractorType_Altar = 13,
		InteractorType_DisposalBomb = 14,
		InteractorType_Max = 15,
	};

	// Enum GPGameplay.EHitEventType
	// NumValues: 0x001E
	enum class EHitEventType : uint8_t
	{
		None = 0,
		HitBody = 1,
		HitBodyWithArmor = 2,
		HitBodyWithArmorAndDamageHp = 3,
		HitHeadWithoutHelmet = 4,
		HitHelmet = 5,
		HitHelmetAndDamageHp = 6,
		HitHelmetBroken = 7,
		HitArmorBroken = 8,
		HitLowHealth = 9,
		HitBulletWhoosh = 10,
		HitBulletHitAround = 11,
		HitSuppressByBullet = 12,
		KnockDownByHitBody = 13,
		KnockDownByHitHead = 14,
		KilledByHitBody = 15,
		KilledByHitHead = 16,
		Shocked = 17,
		HitVehicle = 18,
		KillVehicle = 19,
		BreakthroughRankSkillHit = 20,
		HitShield = 21,
		HitHeavyArmor = 22,
		Stagger = 23,
		HitADS = 24,
		HitSkillActor = 25,
		BreakShieldGlass = 26,
		CounterProjectile = 27,
		Invincible = 28,
		EHitEventType_MAX = 29,
	};

	// Enum GPGameplay.AttributeAdditionType
	// NumValues: 0x000A
	enum class EAttributeAdditionType : uint8_t
	{
		Add_Base = 0,
		Override_Base = 1,
		InitalCover = 2,
		FinalCover = 3,
		Add = 4,
		Mult_A = 5,
		Mult_B = 6,
		Mult_C = 7,
		Mult_D = 8,
		Max = 9,
	};

	// Enum GPGameplay.EFSMGamePlayStatusDefine
	// NumValues: 0x000B
	enum class EFSMGamePlayStatusDefine : uint8_t
	{
		GamePlayStatus_None = 0,
		GamePlayStatus_AimOn = 1,
		GamePlayStatus_Reload = 2,
		GamePlayStatus_Looting = 3,
		GamePlayStatus_Rescue = 4,
		GamePlayStatus_BeingRescue = 5,
		GamePlayStatus_ImpedingDeath = 6,
		GamePlayStatus_Prone = 7,
		GamePlayStatus_Crouch = 8,
		GamePlayStatus_float = 9,
		GamePlayStatus_MAX = 10,
	};

	// Enum GPGameplay.EFSMCharacterState
	// NumValues: 0x003B
	enum class EFSMCharacterState : uint8_t
	{
		FSMPlayerState_None = 0,
		FSMPlayerState_AimOn = 1,
		FSMPlayerState_LeanPeek = 2,
		FSMPlayerState_Reload = 3,
		FSMPlayerState_Fire = 4,
		FSMPlayerState_WeaponInspect = 5,
		FSMPlayerState_WeaponBipodDeploy = 6,
		FSMPlayerState_Prone = 7,
		FSMPlayerState_Crouch = 8,
		FSMPlayerState_Stand = 9,
		FSMPlayerState_Sprint = 10,
		FSMPlayerState_SlidingTackle = 11,
		FSMPlayerState_SpecialMove = 12,
		FSMPlayerState_Swimming = 13,
		FSMPlayerState_SwimmingSprint = 14,
		FSMPlayerState_Marking = 15,
		FSMPlayerState_SearchItem = 16,
		FSMPlayerState_CarryBody = 17,
		FSMPlayerState_CarryBodyDrop = 18,
		FSMPlayerState_Rescue = 19,
		FSMPlayerState_BeingRescue = 20,
		FSMPlayerState_Interact = 21,
		FSMPlayerState_PreciseInteract = 22,
		FSMPlayerState_DelayInteract = 23,
		FSMPlayerState_GameOperate = 24,
		FSMPlayerState_Skill = 25,
		FSMPlayerState_DoubleHandSkill = 26,
		FSMPlayerState_LeftHandSkill = 27,
		FSMPlayerState_RightHandSkill = 28,
		FSMPlayerState_LegSkill = 29,
		FSMPlayerState_SpecialSkill = 30,
		FSMPlayerState_ActionSkill = 31,
		FSMPlayerState_Custom1Skill = 32,
		FSMPlayerState_Custom2Skill = 33,
		FSMPlayerState_Custom3Skill = 34,
		FSMPlayerState_Vehicle = 35,
		FSMPlayerState_SceneWeapon = 36,
		FSMPlayerState_UseItem = 37,
		FSMPlayerState_Firefighting = 38,
		FSMPlayerState_HighValueItemInspect = 39,
		FSMPlayerState_Helmet = 40,
		FSMPlayerState_BeHit = 41,
		FSMPlayerState_ImpedingDeath = 42,
		FSMPlayerState_Death = 43,
		FSMPlayerState_CutScene = 44,
		FSMPlayerState_Assassinate = 45,
		FSMPlayerState_BeAssassinate = 46,
		FSMPlayerState_OneHandedGesture = 47,
		FSMPlayerState_TwoHandedGesture = 48,
		FSMPlayerState_Emote = 49,
		FSMPlayerState_ApplySpray = 50,
		FSMPlayerState_CommonLeftArmAnim = 51,
		FSMPlayerState_Dive = 52,
		FSMPlayerState_CaptureFlag = 53,
		FSMPlayerState_PassiveMove = 54,
		FSMPlayerState_WaitStart = 55,
		FSMPlayerState_QuitGame = 56,
		FSMPlayerState_CrowdControl = 57,
		FSMPlayerState_MAX = 58,
	};

	// Enum GPGameplay.EMarkerCoordinatedType
	// NumValues: 0x0006
	enum class EMarkerCoordinatedType : uint8_t
	{
		None = 0,
		MandelBrick = 31,
		MandelBrick_MapMarked = 41,
		HighValueBox_MapMarked = 42,
		MarkingItemMarker = 51,
		EMarkerCoordinatedType_MAX = 52,
	};

	// Enum GPGameplay.ERepairEventType
	// NumValues: 0x0003
	enum class ERepairEventType : uint8_t
	{
		RepairStop = 0,
		RepairFinished = 1,
		ERepairEventType_MAX = 2,
	};

	// Enum GPGameplay.EWeaponLockerType
	// NumValues: 0x0007
	enum class EWeaponLockerType : uint8_t
	{
		None = 0,
		LaserPoniter = 1,
		StingerMissile = 2,
		Javelin = 3,
		AA = 4,
		AT = 5,
		EWeaponLockerType_MAX = 6,
	};

	// Enum GPGameplay.EStingerMissileLockingState
	// NumValues: 0x0009
	enum class EStingerMissileLockingState : uint8_t
	{
		NONE = 0,
		UNLOCK_DISTANCE = 1,
		UNLOCK_EMPTY = 2,
		NAP_OF_EARTH = 3,
		CANNOTLOCK = 4,
		START_LOCKING = 5,
		COMPLETE_LOCKING = 6,
		MISSILE_ATTACK = 7,
		EStingerMissileLockingState_MAX = 8,
	};

	// Enum GPGameplay.ECurveBlendOption_BCOnly
	// NumValues: 0x0004
	enum class ECurveBlendOption_BCOnly : uint8_t
	{
		Override = 0,
		MaxValue = 1,
		Additive = 2,
		ECurveBlendOption_MAX = 3,
	};

	// Enum GPGameplay.EPartNodeFunc
	// NumValues: 0x0003
	enum class EPartNodeFunc : uint8_t
	{
		EPNF_Empty = 0,
		EPNF_None = 1,
		EPNF_MAX = 2,
	};

	// Enum GPGameplay.EGPPlayParticleEffectRole
	// NumValues: 0x0004
	enum class EGPPlayParticleEffectRole : uint8_t
	{
		ROLE_1PAnd3P = 0,
		ROLE_1P = 1,
		ROLE_3P = 2,
		ROLE_MAX = 3,
	};

	// Enum GPGameplay.EClimbLadderNotifySettingType
	// NumValues: 0x0003
	enum class EClimbLadderNotifySettingType : uint8_t
	{
		EClimbLadderNotifySettingType_NONE = 0,
		EClimbLadderNotifySettingType_BreakPoint = 1,
		EClimbLadderNotifySettingType_MAX = 2,
	};

	// Enum GPGameplay.EVaultNotifySettingType
	// NumValues: 0x000D
	enum class EVaultNotifySettingType : uint8_t
	{
		EVaultNotifySettingType_NONE = 0,
		EVaultNotifySettingType_StartPoint = 1,
		EVaultNotifySettingType_HandTouchPoint = 2,
		EVaultNotifySettingType_BeginVaultPoint = 3,
		EVaultNotifySettingType_EndVaultPoint = 4,
		EVaultNotifySettingType_LandPoint = 5,
		EVaultNotifySettingType_EndPoint = 6,
		EVaultNotifySettingType_BreakPoint = 7,
		EVaultNotifySettingType_HideWeapon = 8,
		EVaultNotifySettingType_ShowWeapon = 9,
		EVaultNotifySettingType_FallingPoint = 10,
		EVaultNotifySettingType_BeforeBreakPoint = 11,
		EVaultNotifySettingType_MAX = 12,
	};

	// Enum GPGameplay.EAnimNotifyStateIKBlend
	// NumValues: 0x0004
	enum class EAnimNotifyStateIKBlend : uint8_t
	{
		None = 0,
		ChangeClip = 1,
		Vault = 2,
		Max = 3,
	};

	// Enum GPGameplay.EExplodeRagdollImpulseType
	// NumValues: 0x0005
	enum class EExplodeRagdollImpulseType : uint8_t
	{
		None = 0,
		Low = 1,
		Medium = 2,
		High = 3,
		EExplodeRagdollImpulseType_MAX = 4,
	};

	// Enum GPGameplay.EDamageExplodeBlockCheckType
	// NumValues: 0x0003
	enum class EDamageExplodeBlockCheckType : uint8_t
	{
		Low = 0,
		High = 1,
		EDamageExplodeBlockCheckType_MAX = 2,
	};

	// Enum GPGameplay.EGPDamageFeature
	// NumValues: 0x0003
	enum class EGPDamageFeature : uint8_t
	{
		None = 0,
		SOL = 1,
		EGPDamageFeature_MAX = 2,
	};

	// Enum GPGameplay.EGPDamageMode
	// NumValues: 0x0006
	enum class EGPDamageMode : uint8_t
	{
		Default = 0,
		GameMode01 = 1,
		GameMode02 = 2,
		GameMode03 = 3,
		GameMode04 = 4,
		EGPDamageMode_MAX = 5,
	};

	// Enum GPGameplay.EAttributeEffectMainTag
	// NumValues: 0x0006
	enum class EAttributeEffectMainTag : uint8_t
	{
		Default = 0,
		Damage = 1,
		Buff = 2,
		System = 3,
		Equipment = 4,
		Max = 5,
	};

	// Enum GPGameplay.EAttributeEffectInstanceType
	// NumValues: 0x0005
	enum class EAttributeEffectInstanceType : uint8_t
	{
		None = 0,
		Damage = 1,
		Buff = 2,
		ItemHealth = 3,
		EAttributeEffectInstanceType_MAX = 4,
	};

	// Enum GPGameplay.EPlayerQuitMatchReason
	// NumValues: 0x0005
	enum class EPlayerQuitMatchReason : uint8_t
	{
		ENone = 0,
		EEndMatch = 1,
		ESvrForceKick = 2,
		EClientReqQuit = 3,
		EPlayerQuitMatchReason_MAX = 4,
	};

	// Enum GPGameplay.EPlayerEndMatchReason
	// NumValues: 0x0004
	enum class EPlayerEndMatchReason : uint8_t
	{
		EPlayerEndMatch_Success = 0,
		EPlayerEndMatch_Killed = 1,
		EPlayerEndMatch_TimeLimit = 2,
		EPlayerEndMatch_MAX = 3,
	};

	// Enum GPGameplay.EBulletHitActionType
	// NumValues: 0x0005
	enum class EBulletHitActionType : uint8_t
	{
		None = 0,
		Damage = 1,
		Buff = 2,
		Custom = 3,
		EBulletHitActionType_MAX = 4,
	};

	// Enum GPGameplay.ECampType
	// NumValues: 0x0013
	enum class ECampType : uint8_t
	{
		BF_DeltaCamp0 = 0,
		BF_DeltaCamp1 = 1,
		SOL_DeltaPMC = 101,
		SOL_DarkTide = 102,
		SOL_Hudson = 103,
		Raid_DeltaPMC = 104,
		Raid_DarkTide = 105,
		Raid_Hudson = 106,
		BF_Hudson = 109,
		SafeHouse_Player = 110,
		SafeHouse_NPC = 111,
		SafeHouse_RangeTarget = 112,
		Vehicle = 112,
		Neutral = 113,
		SOL_ContractPlayer = 5,
		SOL_BossTeam = 107,
		SOL_ContractPlayer_DarkTide = 121,
		SOL_ContractPlayer_Hudson = 122,
		Max = 255,
	};

	// Enum GPGameplay.EChainHookTargetType
	// NumValues: 0x0006
	enum class EChainHookTargetType : uint32
	{
		Enemy = 0,
		DeadBody = 1,
		DeadBox = 2,
		Other = 3,
		None = 4,
		EChainHookTargetType_MAX = 5,
	};

	// Enum GPGameplay.ECharacterSnatshotSubPose
	// NumValues: 0x0004
	enum class ECharacterSnatshotSubPose : uint8_t
	{
		Center = 0,
		Left = 1,
		Right = 2,
		Max = 3,
	};

	// Enum GPGameplay.ECharacterSnatshotBasePose
	// NumValues: 0x001A
	enum class ECharacterSnatshotBasePose : uint8_t
	{
		None = 0,
		Stand = 1,
		Crouch = 2,
		Prone = 3,
		InVehicle = 4,
		InSceneWeapon = 5,
		ImpendingDeath = 6,
		Knockback = 7,
		SlidingTackle = 8,
		Vaulting = 9,
		Climb = 10,
		Zipline = 11,
		BeingAssassinate = 12,
		ShieldHold = 13,
		ShieldFlank = 14,
		ShieldSprint = 15,
		Dive = 16,
		SwimmingSurfaceIdle = 17,
		SwimmingBackward = 18,
		SwimmingForward = 19,
		SwimmingAscendingBackward = 20,
		SwimmingDescendingForward = 21,
		RollMove = 22,
		PassiveRopeMove = 23,
		PassiveMove = 24,
		Max = 25,
	};

	// Enum GPGameplay.EHaavkTurnType
	// NumValues: 0x0003
	enum class EHaavkTurnType : uint8_t
	{
		LeftAndRight = 0,
		Circle = 1,
		EHaavkTurnType_MAX = 2,
	};

	// Enum GPGameplay.EDamageStateRecordType
	// NumValues: 0x0007
	enum class EDamageStateRecordType : uint8_t
	{
		Default = 0,
		Character = 1,
		GeneralGun = 2,
		Melee = 3,
		Vehicle = 4,
		Door = 5,
		EDamageStateRecordType_MAX = 6,
	};

	// Enum GPGameplay.EDamageGameState
	// NumValues: 0x0005
	enum class EDamageGameState : uint8_t
	{
		None = 0,
		Prematch = 1,
		InGame = 2,
		EndGame = 3,
		EDamageGameState_MAX = 4,
	};

	// Enum GPGameplay.EDamageUnitType
	// NumValues: 0x0003
	enum class EDamageUnitType : uint8_t
	{
		Actor = 0,
		Component = 1,
		EDamageUnitType_MAX = 2,
	};

	// Enum GPGameplay.EDamageActorType
	// NumValues: 0x000A
	enum class EDamageActorType : uint8_t
	{
		None = 0,
		PlayerCharacter = 1,
		AICharacter = 2,
		Vehicle = 3,
		Weapon = 4,
		World = 5,
		BreakablePawn = 6,
		ScenceWeaponPawn = 7,
		Others = 8,
		EDamageActorType_MAX = 9,
	};

	// Enum GPGameplay.EDamageModifyType
	// NumValues: 0x0004
	enum class EDamageModifyType : uint8_t
	{
		Add = 0,
		Mult = 1,
		Override = 2,
		EDamageModifyType_MAX = 3,
	};

	// Enum GPGameplay.EGPDamageEnableType
	// NumValues: 0x0005
	enum class EGPDamageEnableType : uint8_t
	{
		Default = 0,
		Enable = 1,
		Disable = 2,
		EnableWithEnemy = 3,
		EGPDamageEnableType_MAX = 4,
	};

	// Enum GPGameplay.EDamageChannel
	// NumValues: 0x0005
	enum class EDamageChannel : uint8_t
	{
		Default = 0,
		HP = 1,
		ArmorDamage = 2,
		HealthDamage = 3,
		Max = 4,
	};

	// Enum GPGameplay.EWeaponFireValidateFaildReason
	// NumValues: 0x000E
	enum class EWeaponFireValidateFaildReason : uint8_t
	{
		None = 0,
		CharacterOwnerNull = 1,
		CharacterDied = 2,
		CharacterImpendingDeath = 3,
		CharacterCantFire = 4,
		WeaponInactive = 5,
		WeaponNotFiringState = 6,
		WeaponNoAmmo = 7,
		FireIntervalError = 8,
		FireIdInvalid = 9,
		FireTimeInvalid = 10,
		LogicFireTimeInvalid = 11,
		SkillForbidFire = 12,
		EWeaponFireValidateFaildReason_MAX = 13,
	};

	// Enum GPGameplay.EDataTableConstrainType
	// NumValues: 0x0003
	enum class EDataTableConstrainType : uint8_t
	{
		Unique = 0,
		ForeignKey = 1,
		EDataTableConstrainType_MAX = 2,
	};

	// Enum GPGameplay.ENetworkReplayStreamerType
	// NumValues: 0x0006
	enum class ENetworkReplayStreamerType : uint8_t
	{
		StreamerType_Memery = 0,
		StreamerType_File = 1,
		StreamerType_HTTP = 2,
		StreamerType_File_ARS = 3,
		StreamerType_File_JSON = 4,
		StreamerType_MAX = 5,
	};

	// Enum GPGameplay.EEMPType
	// NumValues: 0x0003
	enum class EEMPType : uint32
	{
		EMP = 0,
		DataKnife = 1,
		EEMPType_MAX = 2,
	};

	// Enum GPGameplay.EFiringAnimMode
	// NumValues: 0x0003
	enum class EFiringAnimMode : uint8_t
	{
		Single = 0,
		Continue = 1,
		EFiringAnimMode_MAX = 2,
	};

	// Enum GPGameplay.EFiringAnimBlendOutMode
	// NumValues: 0x0004
	enum class EFiringAnimBlendOutMode : uint8_t
	{
		ForceEnd = 0,
		ContinueAnim = 1,
		BlendOut = 2,
		EFiringAnimBlendOutMode_MAX = 3,
	};

	// Enum GPGameplay.EFiringAnimDim
	// NumValues: 0x0008
	enum class EFiringAnimDim : uint8_t
	{
		Dim_Trans_Forward = 0,
		Dim_Trans_Right = 1,
		Dim_Trans_Up = 2,
		Dim_Rot_Pitch = 3,
		Dim_Rot_Yaw = 4,
		Dim_Rot_Roll = 5,
		Dim_Num = 6,
		Dim_MAX = 7,
	};

	// Enum GPGameplay.EDFMAbilityEndReason
	// NumValues: 0x0007
	enum class EDFMAbilityEndReason : uint8_t
	{
		NormalEnd = 0,
		UnNormalEnd = 1,
		Die = 2,
		RemoveFromCharacter = 3,
		CastFaild = 4,
		PlayMontageFaild = 5,
		EDFMAbilityEndReason_MAX = 6,
	};

	// Enum GPGameplay.EDFMAbilityLogicType
	// NumValues: 0x000D
	enum class EDFMAbilityLogicType : uint8_t
	{
		Default = 0,
		EnterState = 1,
		LeaveState = 2,
		PlayMontage = 3,
		PlayMontageInstance = 4,
		KeepActor = 5,
		SpawnActor = 6,
		Function = 7,
		WeaponProjectileActor = 8,
		ProjectileActor = 9,
		Buff = 10,
		LogicTypeMax = 11,
		EDFMAbilityLogicType_MAX = 12,
	};

	// Enum GPGameplay.EAbilityMontagePlayerStage
	// NumValues: 0x0005
	enum class EAbilityMontagePlayerStage : uint32
	{
		Init = 0,
		Start = 1,
		Loop = 2,
		End = 3,
		EAbilityMontagePlayerStage_MAX = 4,
	};

	// Enum GPGameplay.EAnimState
	// NumValues: 0x000F
	enum class EAnimState : uint8_t
	{
		Stand = 0,
		Crouch = 1,
		Prone = 2,
		Sprint = 3,
		Jump = 4,
		Dead = 5,
		Vault = 6,
		Zipline = 7,
		Rescue = 8,
		Throw = 9,
		Reload = 10,
		Medical = 11,
		Moving = 12,
		ImpendingDeath = 13,
		Max = 32,
	};

	// Enum GPGameplay.EAnimCrowdControlType
	// NumValues: 0x0002
	enum class EAnimCrowdControlType : uint8_t
	{
		ElectricShock = 0,
		EAnimCrowdControlType_MAX = 1,
	};

	// Enum GPGameplay.EAnimPassiveMoveType
	// NumValues: 0x0003
	enum class EAnimPassiveMoveType : uint8_t
	{
		Pulling = 0,
		Pulling_UnderWater = 1,
		EAnimPassiveMoveType_MAX = 2,
	};

	// Enum GPGameplay.EAnimKnockbackType
	// NumValues: 0x0003
	enum class EAnimKnockbackType : uint8_t
	{
		Knockback = 0,
		Knockback_UnderWater = 1,
		EAnimKnockbackType_MAX = 2,
	};

	// Enum GPGameplay.EAnimRescueType
	// NumValues: 0x001F
	enum class EAnimRescueType : uint8_t
	{
		None = 0,
		SolLandRescueStand = 1,
		SolLandBeRescueStand = 2,
		SolLandRescueCrouch = 3,
		SolLandBeRescueCrouch = 4,
		SolLandRescueProne = 5,
		SolLandBeRescueProne = 6,
		SolSwimRescueSurfaceWater = 7,
		SolSwimBeRescueSurfaceWater = 8,
		SolSwimRescueInWater = 9,
		SolSwimBeRescueInWater = 10,
		BatLandRescueStand = 11,
		BatLandBeRescueStand = 12,
		BatLandRescueCrouch = 13,
		BatLandBeRescueCrouch = 14,
		BatLandRescueProne = 15,
		BatLandBeRescueProne = 16,
		BatSwimRescueSurfaceWater = 17,
		BatSwimBeRescueSurfaceWater = 18,
		BatSwimRescueInWater = 19,
		BatSwimBeRescueInWater = 20,
		SolLandRescueCrouchDeath = 21,
		SolRescueLandNoPreciseStand = 22,
		SolRescueLandNoPreciseCrouch = 23,
		SolRescueLandNoPreciseProne = 24,
		BatRescueLandNoPreciseStand = 25,
		BatRescueLandNoPreciseCrouch = 26,
		BatRescueLandNoPreciseProne = 27,
		SolLandFastBeRescueCrouch = 28,
		BatLandFastBeRescueProne = 29,
		EAnimRescueType_MAX = 30,
	};

	// Enum GPGameplay.EAnimCarryBodyType
	// NumValues: 0x0003
	enum class EAnimCarryBodyType : uint8_t
	{
		CarryCharacter = 0,
		CarryBox = 1,
		EAnimCarryBodyType_MAX = 2,
	};

	// Enum GPGameplay.EAnimApplySprayType
	// NumValues: 0x0002
	enum class EAnimApplySprayType : uint8_t
	{
		ApplySpray = 0,
		EAnimApplySprayType_MAX = 1,
	};

	// Enum GPGameplay.EAnimMarkingType
	// NumValues: 0x0002
	enum class EAnimMarkingType : uint8_t
	{
		Marking = 0,
		EAnimMarkingType_MAX = 1,
	};

	// Enum GPGameplay.EAnimFirefightingType
	// NumValues: 0x0006
	enum class EAnimFirefightingType : uint8_t
	{
		Firefighting = 0,
		ZoyaSwarms = 1,
		Rope = 2,
		BionicSpy = 3,
		NetRemove = 4,
		EAnimFirefightingType_MAX = 5,
	};

	// Enum GPGameplay.EAnimRaiseWatchType
	// NumValues: 0x0002
	enum class EAnimRaiseWatchType : uint8_t
	{
		RaiseWatch = 0,
		EAnimRaiseWatchType_MAX = 1,
	};

	// Enum GPGameplay.EAnimHitPart
	// NumValues: 0x0006
	enum class EAnimHitPart : uint8_t
	{
		None = 0,
		Head = 1,
		UpperBody = 2,
		LeftLeg = 3,
		RightLeg = 4,
		EAnimHitPart_MAX = 5,
	};

	// Enum GPGameplay.EAnimParachuteType
	// NumValues: 0x0003
	enum class EAnimParachuteType : uint8_t
	{
		Parachute = 0,
		Glide = 1,
		EAnimParachuteType_MAX = 2,
	};

	// Enum GPGameplay.EAnimClimbLadderType
	// NumValues: 0x0002
	enum class EAnimClimbLadderType : uint8_t
	{
		ClimbLadder = 0,
		EAnimClimbLadderType_MAX = 1,
	};

	// Enum GPGameplay.EAnimBunkerType
	// NumValues: 0x0002
	enum class EAnimBunkerType : uint8_t
	{
		NoWeapon = 0,
		EAnimBunkerType_MAX = 1,
	};

	// Enum GPGameplay.EAnimTacticalActionType
	// NumValues: 0x0002
	enum class EAnimTacticalActionType : uint8_t
	{
		TacticalAction = 0,
		EAnimTacticalActionType_MAX = 1,
	};

	// Enum GPGameplay.EAnimVehicleSeatPos
	// NumValues: 0x000A
	enum class EAnimVehicleSeatPos : uint8_t
	{
		Seat_FL = 0,
		Seat_FR = 1,
		Seat_BL = 2,
		Seat_BR = 3,
		Seat_BL02 = 4,
		Seat_BR02 = 5,
		Seat_BL03 = 6,
		Seat_BR03 = 7,
		Seat_MachineGun = 8,
		Seat_MAX = 9,
	};

	// Enum GPGameplay.EAnimLoadPriority
	// NumValues: 0x0005
	enum class EAnimLoadPriority : uint8_t
	{
		Low = 0,
		Medium = 50,
		High = 100,
		SuperHigh = 200,
		EAnimLoadPriority_MAX = 201,
	};

	// Enum GPGameplay.EGPEventToggleState
	// NumValues: 0x0003
	enum class EGPEventToggleState : uint8_t
	{
		TURN_ON = 6,
		TURN_OFF = 7,
		TURN_MAX = 8,
	};

	// Enum GPGameplay.EGPAnimOperationInterruptType
	// NumValues: 0x0004
	enum class EGPAnimOperationInterruptType : uint8_t
	{
		Default = 0,
		Interrupt_SwitchWeapon = 1,
		Interrupt_Reload = 2,
		EGPAnimOperationInterruptType_MAX = 3,
	};

	// Enum GPGameplay.EGPAnimNotifyLogicalBreakType
	// NumValues: 0x0014
	enum class EGPAnimNotifyLogicalBreakType : uint8_t
	{
		Default = 0,
		LogicReload_Complete = 1,
		Reload_Ready = 5,
		EventToggle_TurnOn = 6,
		EventToggle_TurnOff = 7,
		Fire_Break = 8,
		Equip_Break = 9,
		Fire_Break_End = 10,
		Do_Fire = 11,
		EnableSprint_ThrowableWeapon = 12,
		Show_PreviewLine = 13,
		Throwable_HideMesh = 14,
		Throwable_ShowMesh = 15,
		Throwable_Unlock = 16,
		LeftWeapon_EndLeftHold = 17,
		LeftWeapon_HideMesh = 18,
		LeftWeapon_ShowMesh = 19,
		PostFire_Break = 20,
		CBow_SwitchToLeft = 21,
		EGPAnimNotifyLogicalBreakType_MAX = 22,
	};

	// Enum GPGameplay.EUseLeftHandReason
	// NumValues: 0x0008
	enum class EUseLeftHandReason : uint8_t
	{
		EUseLeftHandReason_OneHandedGesture = 0,
		EUseLeftHandReason_ApplySpray = 1,
		EUseLeftHandReason_Marking = 2,
		EUseLeftHandReason_AbilityPlayMontageSystem = 3,
		EUseLeftHandReason_LeftWeaponAnim = 4,
		EUseLeftHandReason_ThrowableWeapon = 5,
		EUseLeftHandReason_Helmet = 6,
		EUseLeftHandReason_MAX = 7,
	};

	// Enum GPGameplay.ERetargetConfig
	// NumValues: 0x0003
	enum class ERetargetConfig : uint8_t
	{
		ERetargetConfig_Normal = 0,
		ERetargetConfig_FPP = 1,
		ERetargetConfig_MAX = 2,
	};

	// Enum GPGameplay.EWeaponLeanAimType
	// NumValues: 0x0004
	enum class EWeaponLeanAimType : uint8_t
	{
		EWeapLeanAimType_Center = 0,
		EWeapLeanAimType_Left = 1,
		EWeapLeanAimType_Right = 2,
		EWeapLeanAimType_MAX = 3,
	};

	// Enum GPGameplay.ELocomotionTransitionType
	// NumValues: 0x000C
	enum class ELocomotionTransitionType : uint8_t
	{
		LocomotionTransitionType_None = 0,
		LocomotionTransitionType_IdleToWalking = 1,
		LocomotionTransitionType_IdleToRunning = 2,
		LocomotionTransitionType_IdleToFastRunning = 3,
		LocomotionTransitionType_RunningToFastRunning = 4,
		LocomotionTransitionType_WalkingToIdle = 5,
		LocomotionTransitionType_RunningToIdle = 6,
		LocomotionTransitionType_FastRunningToIdle = 7,
		LocomotionTransitionType_Pivot_Walking = 8,
		LocomotionTransitionType_Pivot_Running = 9,
		LocomotionTransitionType_Pivot_FastRunning = 10,
		LocomotionTransitionType_MAX = 11,
	};

	// Enum GPGameplay.EAssasinateAnimType
	// NumValues: 0x0004
	enum class EAssasinateAnimType : uint8_t
	{
		Stand = 1,
		Impending = 2,
		Prone = 4,
		EAssasinateAnimType_MAX = 5,
	};

	// Enum GPGameplay.ESmallActionTrigger
	// NumValues: 0x0008
	enum class ESmallActionTrigger : uint8_t
	{
		EStill2NotStill = 1,
		ENotStil2Still = 2,
		EFiring2NotFiring = 4,
		EFasterMove2Walk = 8,
		EJumping2Land = 16,
		EStand2Crouch = 32,
		ECrouch2Stand = 64,
		ESmallActionTrigger_MAX = 65,
	};

	// Enum GPGameplay.ESmallActionState
	// NumValues: 0x0010
	enum class ESmallActionState : uint8_t
	{
		EStill = 0,
		EHorizonRotate = 1,
		EVerticalRotate = 2,
		EMove = 3,
		EFiring = 4,
		ENoFiring = 5,
		EWalk = 6,
		ERun = 7,
		ESprint = 8,
		EAiring = 9,
		ELanding = 10,
		EStand = 11,
		ECrouch = 12,
		EZooming = 13,
		EMax = 14,
		ESmallActionState_MAX = 15,
	};

	// Enum GPGameplay.ESpringStatusType
	// NumValues: 0x0005
	enum class ESpringStatusType : uint8_t
	{
		ESpringStatus_Default = 0,
		ESpringStatus_Aim = 1,
		ESpringStatus_Crouch = 2,
		ESpringStatus_NumMax = 3,
		ESpringStatus_MAX = 4,
	};

	// Enum GPGameplay.EFPPCameraRotationCalcType
	// NumValues: 0x0004
	enum class EFPPCameraRotationCalcType : uint8_t
	{
		EJointBoneAddValue = 0,
		EFPPCameraBoneAutoBlend = 1,
		EFPPCameraBone = 2,
		EFPPCameraRotationCalcType_MAX = 3,
	};

	// Enum GPGameplay.EAnimEnvInteraction
	// NumValues: 0x0006
	enum class EAnimEnvInteraction : uint32
	{
		EAnimEnv_None = 0,
		EAnimEnv_Up = 1,
		EAnimEnv_Down = 2,
		EAnimEnv_CollisionL = 3,
		EAnimEnv_CollisionR = 4,
		EAnimEnv_MAX = 5,
	};

	// Enum GPGameplay.EMotionGear
	// NumValues: 0x0005
	enum class EMotionGear : uint8_t
	{
		EMotionGear_Walk = 0,
		EMotionGear_Run = 1,
		EMotionGear_Sprint = 2,
		EMotionGear_SuperSprint = 3,
		EMotionGear_MAX = 4,
	};

	// Enum GPGameplay.EAnimationSwimType
	// NumValues: 0x0005
	enum class EAnimationSwimType : uint8_t
	{
		AnimSwimType_Surfacewater = 0,
		AnimSwimType_Underwater = 1,
		AnimSwimType_Descending = 2,
		AnimSwimType_Ascending = 3,
		AnimSwimType_MAX = 4,
	};

	// Enum GPGameplay.EAnimationPlayType
	// NumValues: 0x0024
	enum class EAnimationPlayType : uint8_t
	{
		AnimPlayType_None = 0,
		AnimPlayType_FullBody = 1,
		AnimPlayType_FullBodyBeforeAO = 2,
		AnimPlayType_FullBodyWithIK = 3,
		AnimPlayType_FullBodyNoMoving = 4,
		AnimPlayType_FullBodyWhenProne = 5,
		AnimPlayType_UpperBody = 6,
		AnimPlayType_UpperBodyWithIK = 7,
		AnimPlayType_UpperBodyGroupAimWithIK = 8,
		AnimPlayType_LowerBody = 9,
		AnimPlayType_FPPAnimSlot = 10,
		AnimPlayType_UpperBodyWithForceIdle = 11,
		AnimPlayType_FullBodyTakeHit = 12,
		AnimPlayType_FullBodyDeath = 13,
		AnimPlayType_LeftArm = 14,
		AnimPlayType_LeftArmBeforeAO = 15,
		AnimPlayType_RightArm = 16,
		AnimPlayType_LeftRightArm = 17,
		AnimPlayType_LeftArmMirrorByRightArm = 18,
		AnimPlayType_RightArmMirrorByLeftArm = 19,
		AnimPlayType_MirrorAnimBlend = 20,
		AnimPlayType_TurnAnim = 21,
		AnimPlayType_DefaultFullBodyMovingUpperBody = 22,
		AnimPlayType_DefaultFullBodyMovingUpperBodyWithIK = 23,
		AnimPlayType_FullBodyRescue = 24,
		AnimPlayType_InVehicle = 25,
		AnimPlayType_InVehicleBeforeDrive = 26,
		AnimPlayType_MachineGun = 27,
		AnimPlayType_FullBodyCarryBody = 28,
		AnimPlayType_FullBodyAllOverride = 29,
		AnimPlayType_UpperArms = 30,
		AnimPlayType_DefaultUpperBodyMovingUpperArms = 31,
		AnimPlayType_LocomotionFullBodyRushWithIK = 32,
		AnimPlayType_SwimmingUpperBodyMovingUpperArms = 33,
		AnimPlayType_SwimmingUpperBodyMovingUpperArmsWithIK = 34,
		AnimPlayType_MAX = 35,
	};

	// Enum GPGameplay.EEquipmentPart
	// NumValues: 0x000C
	enum class EEquipmentPart : uint8_t
	{
		None = 0,
		TopOfHead = 1,
		Neck = 2,
		Ear = 3,
		Eye = 4,
		Jaw = 5,
		Thorax = 6,
		LeftArm = 7,
		RightArm = 8,
		LeftLeg = 9,
		RightLeg = 10,
		Max = 11,
	};

	// Enum GPGameplay.ECharacterPart
	// NumValues: 0x000A
	enum class ECharacterPart : uint8_t
	{
		None = 0,
		Head = 1,
		Thorax = 2,
		Abdomen = 3,
		RightArm = 4,
		LeftArm = 5,
		RightLeg = 6,
		LeftLeg = 7,
		FullBody = 8,
		ECharacterPart_MAX = 9,
	};

	// Enum GPGameplay.EInstantGEType
	// NumValues: 0x0005
	enum class EInstantGEType : uint8_t
	{
		None = 0,
		InstantAddHP = 1,
		FixFracture = 2,
		FixBleeding = 3,
		EInstantGEType_MAX = 4,
	};

	// Enum GPGameplay.EHeadEquipmentPartType
	// NumValues: 0x0005
	enum class EHeadEquipmentPartType : uint8_t
	{
		HeadTop = 0,
		Eye = 1,
		Face = 2,
		Ear = 3,
		Max = 4,
	};

	// Enum GPGameplay.EEquipmentType
	// NumValues: 0x000E
	enum class EEquipmentType : uint8_t
	{
		None = 0,
		Helmet = 1,
		Headset = 2,
		FaceMask = 3,
		Armband = 4,
		BreastPlate = 5,
		Glasses = 6,
		ChestHanging = 7,
		Bag = 8,
		SafeBox = 9,
		Tool = 10,
		Shoes = 11,
		KeyChain = 12,
		Max = 13,
	};

	// Enum GPGameplay.EWeaponBuff
	// NumValues: 0x0002
	enum class EWeaponBuff : uint32
	{
		None = 0,
		Max = 1,
	};

	// Enum GPGameplay.EFootstepStateType
	// NumValues: 0x0009
	enum class EFootstepStateType : uint8_t
	{
		Default = 0,
		Walk = 1,
		Run = 2,
		Sprint = 3,
		CrouchMove = 4,
		CrouchRun = 5,
		ProneMove = 6,
		ProneRun = 7,
		EFootstepStateType_MAX = 8,
	};

	// Enum GPGameplay.EFakeFootstepReason
	// NumValues: 0x0004
	enum class EFakeFootstepReason : uint8_t
	{
		LowAnimLOD = 0,
		PVSCut = 1,
		LossNotify = 2,
		EFakeFootstepReason_MAX = 3,
	};

	// Enum GPGameplay.EFakeFootstepStatus
	// NumValues: 0x0004
	enum class EFakeFootstepStatus : uint8_t
	{
		Simulating = 0,
		InTransition = 1,
		PendingRemove = 2,
		EFakeFootstepStatus_MAX = 3,
	};

	// Enum GPGameplay.EAudioMovementMode
	// NumValues: 0x0008
	enum class EAudioMovementMode : uint8_t
	{
		MOVE_None = 0,
		MOVE_Walking = 1,
		MOVE_NavWalking = 2,
		MOVE_Falling = 3,
		MOVE_Swimming = 4,
		MOVE_Flying = 5,
		MOVE_Custom = 6,
		MOVE_MAX = 7,
	};

	// Enum GPGameplay.EAudioListenerMovementType
	// NumValues: 0x0008
	enum class EAudioListenerMovementType : uint8_t
	{
		None = 0,
		Crouch = 1,
		CrouchSlientWalk = 2,
		Prone = 3,
		Walk = 4,
		SlientWalk = 5,
		Sprint = 6,
		EAudioListenerMovementType_MAX = 7,
	};

	// Enum GPGameplay.ESubtitleHudType
	// NumValues: 0x0004
	enum class ESubtitleHudType : uint8_t
	{
		None = 0,
		OnlyText = 1,
		TextWithBlackBG = 2,
		ESubtitleHudType_MAX = 3,
	};

	// Enum GPGameplay.ESubtitlePriorityType
	// NumValues: 0x0008
	enum class ESubtitlePriorityType : uint8_t
	{
		None = 0,
		QuestNotice_P1 = 1,
		QuestNotice_P2 = 2,
		QuestNotice_P3 = 3,
		AIDialog_P1 = 4,
		AIDialog_P2 = 5,
		AIDialog_P3 = 6,
		ESubtitlePriorityType_MAX = 7,
	};

	// Enum GPGameplay.EBlackboardFields
	// NumValues: 0x0018
	enum class EBlackboardFields : uint32
	{
		None = 0,
		WeaponProxy = 1,
		WeaponAnimData = 2,
		WeaponZoomData = 4,
		WeaponFuncZoom = 8,
		WeaponFuncGunSway = 16,
		WeaponFuncOffset = 32,
		bIsZooming = 64,
		CurrentWeaponState = 128,
		bIsFiring = 256,
		bIsSwitchingWeapon = 512,
		bIsPrefiring = 1024,
		bIsLeftWeaponFiring = 2048,
		bUndderFPP = 4096,
		GPPlayer = 8192,
		GPPlayerInputManager = 16384,
		PlayerCameraManager = 32768,
		SoundVisualizationComponent = 65536,
		GPPlayerState = 131072,
		bIsInLegFracture = 262144,
		bIsInDoubleLegFracture = 524288,
		bIsInArmFracture = 1048576,
		bIsInBoss05Dizzy = 2097152,
		EBlackboardFields_MAX = 2097153,
	};

	// Enum GPGameplay.EGPCharacterCameraModeType
	// NumValues: 0x0004
	enum class EGPCharacterCameraModeType : uint8_t
	{
		ECameraMode_None = 0,
		ECameraMode_FPP = 1,
		ECameraMode_TPP = 2,
		ECameraMode_MAX = 3,
	};

	// Enum GPGameplay.EGPCharacterCameraModeReason
	// NumValues: 0x0009
	enum class EGPCharacterCameraModeReason : uint8_t
	{
		ECameraModeReason_VehicleLiveSpectating = 0,
		ECameraModeReason_RebornEffect = 1,
		ECameraModeReason_Redeploy = 2,
		ECameraModeReason_Emote = 3,
		ECameraModeReason_GamePlay = 4,
		ECameraModeReason_UserXppChange = 5,
		ECameraModeReason_Vehicle = 6,
		ECameraModeReason_GamePlayLow = 7,
		ECameraModeReason_MAX = 8,
	};

	// Enum GPGameplay.ECorrectControlActorReason
	// NumValues: 0x0003
	enum class ECorrectControlActorReason : uint8_t
	{
		FailedToStartControl = 0,
		FailedToStopControl = 1,
		ECorrectControlActorReason_MAX = 2,
	};

	// Enum GPGameplay.ECharacterAudioGender
	// NumValues: 0x0003
	enum class ECharacterAudioGender : uint8_t
	{
		Male = 0,
		Female = 1,
		ECharacterAudioGender_MAX = 2,
	};

	// Enum GPGameplay.ECharacterAudioListener
	// NumValues: 0x0006
	enum class ECharacterAudioListener : uint8_t
	{
		NoNeeds = 0,
		Myself = 1,
		Teammate = 2,
		CampmateButNotTeammate = 3,
		Enemy = 4,
		ECharacterAudioListener_MAX = 5,
	};

	// Enum GPGameplay.ECharacterAudioPlayMode
	// NumValues: 0x0004
	enum class ECharacterAudioPlayMode : uint8_t
	{
		OneShot = 0,
		Loop = 1,
		State = 2,
		ECharacterAudioPlayMode_MAX = 3,
	};

	// Enum GPGameplay.ECharacterAudioType
	// NumValues: 0x0059
	enum class ECharacterAudioType : uint8_t
	{
		Pending = 0,
		Breath_Sprint = 1,
		Breath_Tired = 2,
		Breath_Recover = 3,
		Breath_Dying = 4,
		Breath_Injured_Heavy = 5,
		Breath_Injured_Light = 6,
		Breath_CloseMouth = 7,
		Reaction_Die = 8,
		Reaction_Pain = 9,
		Reaction_Bleeding = 10,
		Reaction_ArmBroken = 11,
		Reaction_LegBroken = 12,
		Reaction_BodyBroken = 13,
		Reaction_Yell = 14,
		Reaction_Hit = 15,
		Reaction_Healed = 16,
		State_Default = 17,
		State_Injured = 18,
		Ability_VO1 = 19,
		Ability_VO2 = 20,
		Ability_VO3 = 21,
		Ability_VO4 = 22,
		Ability_VO5 = 23,
		Ability_VO6 = 24,
		Ability_VO7 = 25,
		Ability_VO8 = 26,
		Ability_VO9 = 27,
		Ability_VO10 = 28,
		Ability_VO11 = 29,
		Ability_VO12 = 30,
		Ability_VO13 = 31,
		Ability_VO14 = 32,
		Ability_VO15 = 33,
		Ability_VO16 = 34,
		Ability_VO17 = 35,
		Ability_VO18 = 36,
		Ability_VO19 = 37,
		Ability_VO20 = 38,
		PassiveTrigger = 39,
		UltimateSmokePropUse = 40,
		UltimateSmokePropFinished = 41,
		PropEliminate = 42,
		PropAssist = 43,
		UltimateFullyCharged = 44,
		UltimateUse = 45,
		UltimateOngoing = 46,
		UltimateEliminate = 47,
		UltimateEliminateAssist = 48,
		UltimateCure = 49,
		UltimateFullyCharged401 = 50,
		UltimateUse401 = 51,
		UltimateOngoing401 = 52,
		UltimateHit401 = 53,
		UltimateAssist401 = 54,
		Begin_Throw_Throwables = 55,
		EnterSmoke_Cough = 56,
		Enemy_Explosive_Nearby = 57,
		CQB_FullyCharged = 58,
		CQB_UseSkill = 59,
		CQB_Kill = 60,
		CQB_KillAssist = 61,
		PassiveTrigger_C201 = 62,
		PropUse_C201ElectricBow = 63,
		PropHit_C201ElectricBow = 64,
		PropAssist_C201ElectricBow = 65,
		PropEliminate_C201ElectricBow = 66,
		UltimateFullyCharged_C201ProxSensorBow = 67,
		UltimateUse_C201ProxSensorBow = 68,
		UltimateOngoing_C201ProxSensorBow = 69,
		UltimateEliminate_C201ProxSensorBow = 70,
		UltimateAssist_C201ProxSensorBow = 71,
		UltimateHit_C201ProxSensorBow = 72,
		PropUse_C301Launcer = 73,
		PropHit_C301Launcer = 74,
		PropAssist_C301Launcer = 75,
		PropEliminate_C301Launcer = 76,
		Passive_Trigger_Throw = 77,
		Prop_Hit_Mine = 78,
		Prop_Use_Mine = 79,
		Prop_Eliminate_Mine = 80,
		Prop_UseSupportSmoke = 81,
		Prop_UseAssultSmoke = 82,
		Prop_StartHoldBreath = 83,
		Prop_EndHoldBreath = 84,
		Prop_StartUnHoldBreath = 85,
		NONE = 86,
		NumMax = 87,
		ECharacterAudioType_MAX = 88,
	};

	// Enum GPGameplay.EBuffRemovedReason
	// NumValues: 0x0003
	enum class EBuffRemovedReason : uint8_t
	{
		ENormal = 0,
		EDead = 1,
		EBuffRemovedReason_MAX = 2,
	};

	// Enum GPGameplay.EGPCustomMovementType
	// NumValues: 0x0018
	enum class EGPCustomMovementType : uint8_t
	{
		GPCustomMovementType_None = 0,
		GPCustomMovementType_Vaulting = 1,
		GPCustomMovementType_Climbing = 2,
		GPCustomMovementType_ClimbingLadder = 3,
		GPCustomMovementType_SlidingTackle = 4,
		GPCustomMovementType_Parachute = 5,
		GPCustomMovementType_Assassinate = 6,
		GPCustomMovementType_Zipline = 7,
		GPCustomMovementType_PlayerParachute = 8,
		GPCustomMovementType_Gliding = 9,
		GPCustomMovementType_Interactor = 10,
		GPCustomMovementType_Rescue = 11,
		GPCustomMovementType_BeingRescue = 12,
		GPCustomMovementType_TransitionToSequence = 13,
		GPCustomMovementType_Rush = 14,
		GPCustomMovementType_KnockBack = 15,
		GPCustomMovementType_CrocodileBite = 16,
		GPCustomMovementType_BeAssassinate = 17,
		GPCustomMovementType_Dive = 18,
		GPCustomMovementType_PassiveMove = 19,
		GPCustomMovementType_Roll = 20,
		GPCustomMovementType_RopeHanging = 21,
		GPCustomMovementType_Idling = 22,
		GPCustomMovementType_MAX = 23,
	};

	// Enum GPGameplay.EGPCharacterHiddenReason
	// NumValues: 0x000B
	enum class EGPCharacterHiddenReason : uint8_t
	{
		EGPCharacterHidden_WaitSOLStart = 0,
		EGPCharacterHidden_SOLFinishGame = 1,
		EGPCharacterHidden_MPFinishGame = 2,
		EGPCharacterHidden_MPDeathViewOther = 3,
		EGPCharacterHidden_Vehicle = 4,
		EGPCharacterHidden_VehicleCarryBody = 5,
		EGPCharacterHidden_DeathShowDeadBox = 6,
		EGPCharacterHidden_IsOfflineCharacter = 7,
		EGPCharacterHidden_AntiPeekMode = 8,
		EGPCharacterHidden_TearOff = 9,
		EGPCharacterHidden_MAX = 10,
	};

	// Enum GPGameplay.ECharacterQTEStateRight
	// NumValues: 0x0007
	enum class ECharacterQTEStateRight : uint8_t
	{
		QTERight_None = 0,
		QTERight_MineActivate = 1,
		QTERight_SelfCure = 2,
		QTERight_ReleaseRope = 4,
		QTERight_Rescue = 8,
		QTERight_Parachute = 16,
		QTERight_MAX = 17,
	};

	// Enum GPGameplay.ECharacterQTEStateLeft
	// NumValues: 0x0005
	enum class ECharacterQTEStateLeft : uint8_t
	{
		QTELeft_None = 0,
		QTELeft_ReleaseRope = 1,
		QTELeft_MineRecycle = 2,
		QTELeft_Carry = 4,
		QTELeft_MAX = 5,
	};

	// Enum GPGameplay.EHeroResourceState
	// NumValues: 0x0005
	enum class EHeroResourceState : uint8_t
	{
		AS_Init = 0,
		AS_Invalid = 1,
		AS_Loading = 2,
		AS_Loaded = 3,
		AS_MAX = 4,
	};

	// Enum GPGameplay.ECollisionState
	// NumValues: 0x0016
	enum class ECollisionState : uint8_t
	{
		None = 0,
		Sol_DefaultSpawn = 1,
		Sol_ImpendingDeath = 2,
		Sol_CarryBody = 3,
		Sol_BeAssassinate = 4,
		Sol_Dying = 5,
		Sol_MatchOver = 6,
		Breakthrough_DefaultSpawn = 7,
		Breakthrough_ImpendingDeath = 8,
		Breakthrough_CarryBody = 9,
		Breakthrough_BeAssassinate = 10,
		Breakthrough_Dying = 11,
		Breakthrough_MatchOver = 12,
		Prone_Default = 13,
		Prone_Prone = 14,
		Prone_ImpendingDeath_Sol = 15,
		Prone_ImpendingDeath_Breakthrough = 16,
		Prone_BeCarry = 17,
		Prone_BeAssassinate = 18,
		Prone_Dying = 19,
		Prone_MatchOver = 20,
		ECollisionState_MAX = 21,
	};

	// Enum GPGameplay.EProcessInputCompReason
	// NumValues: 0x0007
	enum class EProcessInputCompReason : uint8_t
	{
		EProcessInputReason_WatchingCCTV = 1,
		EProcessInputReason_WeaponAssembler = 2,
		EProcessInputReason_HALLDISPLAY = 4,
		EProcessInputReason_3DSafeHouse = 8,
		EProcessInputReason_Range = 16,
		EProcessInputReason_CollectionRoom = 32,
		EProcessInputReason_MAX = 33,
	};

	// Enum GPGameplay.EAICharacterTag
	// NumValues: 0x0014
	enum class EAICharacterTag : uint8_t
	{
		EAICharacterTag_None = 0,
		EAICharacterTag_Elite = 1,
		EAICharacterTag_Civilian = 2,
		EAICharacterTag_Sniper = 3,
		EAICharacterTag_Shield = 4,
		EAICharacterTag_HeavyArmor = 5,
		EAICharacterTag_Paratrooper = 6,
		EAICharacterTag_Melee = 7,
		EAICharacterTag_Firebat = 8,
		EAICharacterTag_RPG = 9,
		EAICharacterTag_Boss = 10,
		EAICharacterTag_BoyBand = 11,
		EAICharacterTag_Crocodile = 12,
		EAICharacterTag_NonHuman = 13,
		EAICharacterTag_HelicopterPilot = 14,
		EAICharacterTag_InsuranceCompany = 15,
		EAICharacterTag_Activity = 16,
		EAICharacterTag_Romytheus_Assault = 17,
		EAICharacterTag_Romytheus_Shield = 18,
		EAICharacterTag_MAX = 19,
	};

	// Enum GPGameplay.EStateInterruptReason
	// NumValues: 0x0005
	enum class EStateInterruptReason : uint8_t
	{
		Lean = 0,
		Sliding = 1,
		NotStandPose = 2,
		ForbidReasonMax = 3,
		EStateInterruptReason_MAX = 4,
	};

	// Enum GPGameplay.EOverrideMovementType
	// NumValues: 0x0006
	enum class EOverrideMovementType : uint8_t
	{
		EOperateMovementType_NoMove = 0,
		EOperateMovementType_Walk = 1,
		EOperateMovementType_Run = 2,
		EOperateMovementType_Sprint = 3,
		EOperateMovementType_None = 4,
		EOperateMovementType_MAX = 5,
	};

	// Enum GPGameplay.EOperateMovementType
	// NumValues: 0x0005
	enum class EOperateMovementType : uint8_t
	{
		EOperateMovementType_None = 0,
		EOperateMovementType_NoMove = 1,
		EOperateMovementType_NormalRun = 2,
		EOperateMovementType_NoMoveAndNoBasePoseSwitch = 3,
		EOperateMovementType_MAX = 4,
	};

	// Enum GPGameplay.EFSMForbidReason
	// NumValues: 0x0069
	enum class EFSMForbidReason : uint8_t
	{
		EFR_Default = 0,
		EFR_Sprint = 1,
		EFR_Vault = 2,
		EFR_Reload = 3,
		EFR_Jump = 4,
		EFR_ProneFire = 5,
		EFR_FreeLook = 6,
		EFR_ImpendingDeath = 7,
		EFR_Operate = 8,
		EFR_Aim = 9,
		EFR_QuickThrow = 10,
		EFR_Prone = 11,
		EFR_Fire = 12,
		EFR_Sequence = 13,
		EFR_Vehicle = 14,
		EFR_Burden = 15,
		EFR_Death = 16,
		EFR_ClimbLadder = 17,
		EFR_WeaponState = 18,
		EFR_UseTelescope = 19,
		EFR_Monitor = 20,
		EFR_RelaxIde = 21,
		EFR_CutScene = 22,
		EFR_BeHit = 23,
		EFR_UseStarApp = 24,
		EFR_SceneWeapon = 25,
		EFR_StaminaLow = 26,
		EFR_OnFlyBase = 27,
		EFR_Assassinate = 28,
		EFR_BeAssassinate = 29,
		EFR_UsingSkill = 30,
		EFR_SearchItem = 31,
		EFR_FallHigh = 32,
		EFR_UseZipline = 33,
		EFR_Parachute = 34,
		EFR_SlidingTackle = 35,
		EFR_TutorialRotate = 36,
		EFR_TutorialMove = 37,
		EFR_TutorialShoot = 38,
		EFR_InSafeHouse = 39,
		EFR_OpenInteractUI = 40,
		EFR_RaiseWatch = 41,
		EFR_PreViewActor = 42,
		EFR_FireModePlacement = 43,
		EFR_WeaponInspect = 44,
		EFR_HighValueItemInspect = 45,
		EFR_WeaponBipodDeploy = 46,
		EFR_BowArrow = 47,
		EFR_SkillRTT = 48,
		EFR_ClientPreStateRTT = 49,
		EFR_WaitingStart = 50,
		EFR_SeamlessShow = 51,
		EFR_Helmet = 52,
		EFR_Firefighting = 53,
		EFR_ApplySpray = 54,
		EFR_OneHandedGesture = 55,
		EFR_TwoHandedGesture = 56,
		EFR_Emote = 57,
		EFR_UsingDoubleHandsSkill = 58,
		EFR_UsingRightHandSkill = 59,
		EFR_UsingLeftHandSkill = 60,
		EFR_UsingLegsSkill = 61,
		EFR_UsingSpecialSkill = 62,
		EFR_Knockback = 63,
		EFR_WeaponPreFire = 64,
		EFR_WeaponFire = 65,
		EFR_Rescue = 66,
		EFR_RushMoveEnd = 67,
		EFR_UsingDoubleHandsSkillAction = 68,
		EFR_UsingRightHandSkillAction = 69,
		EFR_UsingLeftHandSkillAction = 70,
		EFR_UsingLegsSkillAction = 71,
		EFR_UsingSpecialSkillAction = 72,
		EFR_OpenBag = 73,
		EFR_Lean = 74,
		EFR_VehicleLockCamera = 75,
		EFR_PlayingMedia = 76,
		EFR_Reborn = 77,
		EFR_Dive = 78,
		EFR_PassiveMove = 79,
		EFR_PrePassiveMove = 80,
		EFR_SkillFireRTT = 81,
		EFR_RangeFirstEquipAnim = 82,
		EFR_UsingActionSkill = 83,
		EFR_PostPassiveMove = 84,
		EFR_ProneSetFireCracker = 85,
		EFR_CrowdControl = 86,
		EFR_ControlDrone = 87,
		EFR_DramaFallingVolume = 88,
		EFR_Swim = 89,
		EFR_SwimSprint = 90,
		EFR_EyeUnderWater = 91,
		EFR_RollMove = 92,
		EFR_JailBreak = 93,
		EFR_EMP = 94,
		EFR_SelfRescue = 95,
		EFR_Net = 96,
		EFR_RemoteRescue = 97,
		EFR_OnVehicleMoveBase = 98,
		EFR_UsingCustomSkill = 99,
		EFR_UsingCustom2Skill = 100,
		EFR_UsingCustom3Skill = 101,
		EFR_MatchEnd = 102,
		ForbidReasonMAX = 103,
		EFSMForbidReason_MAX = 104,
	};

	// Enum GPGameplay.ECharacterStateMask
	// NumValues: 0x004D
	enum class ECharacterStateMask : uint8_t
	{
		None = 0,
		CanMove = 1,
		CanRotate = 2,
		CanCharacterRotate = 3,
		CanCrouch = 4,
		CanProne = 5,
		CanJump = 6,
		CanVault = 7,
		CanReload = 8,
		CanAimOn = 9,
		CanAimOff = 10,
		CanSwitchWeapon = 11,
		CanFire = 12,
		CanAutoChangeClip = 13,
		CanWeaponInspect = 14,
		CanHighValueItemInspect = 15,
		CanWeaponBolt = 16,
		CanWeaponBipodDeploy = 17,
		CanSkillSwtichWeapon = 18,
		CanDiscardOrEquipWeapon = 19,
		CanUseMachineGun = 20,
		CanSwitchNormalWeapon = 21,
		CanSwitchTacticalEquip = 22,
		CanUseItem = 23,
		CanOperate = 24,
		DisableWhitelistOperate = 25,
		CanLooting = 26,
		CanDetectInteractor = 27,
		CanDetectRescue = 28,
		CanUserChangeXPP = 29,
		CanSwitchHelmetMask = 30,
		PauseSwitchHelmetMask = 31,
		CanDrive = 32,
		CanPlayTacticalAction = 33,
		CanClimbLadder = 34,
		CanUseTelescope = 35,
		CanChangeWeaponMode = 36,
		CanShowInteractUI = 37,
		CanLean = 38,
		CanBeHit = 39,
		CanUseSkill = 40,
		CanAssassinate = 41,
		CanBeAssassinate = 42,
		CanCarrybody = 43,
		CanParachute = 44,
		CanSlidingTackle = 45,
		CanUseZipline = 46,
		CanPlayMarkingAnim = 47,
		CanFirefighting = 48,
		CanApplySpray = 49,
		CanPlayOneHandedGesture = 50,
		CanPlayTwoHandedGesture = 51,
		CanPlayEmote = 52,
		CanDive = 53,
		CanSuperSprint = 54,
		CanNotBlockFriend = 55,
		CanStandUp = 56,
		CanProneMove = 57,
		CanProneStandUp = 58,
		CanSprint = 59,
		CanSwimSprint = 60,
		CanBeBreakByOtherSkill = 61,
		CanUseSpecialSkill = 62,
		CanUseLeftHandSkill = 63,
		CanUseRightHandSkill = 64,
		CanUseLegSkill = 65,
		CanUseActionSkill = 66,
		CanSkillWeaponFire = 67,
		CanNormalWeaponFire = 68,
		CanReloadLogic = 69,
		CanRaiseWatch = 70,
		CanUseHelmet = 71,
		CanAbilityListner = 72,
		CanSelfRescue = 73,
		CanFastFire = 74,
		All = 75,
		ECharacterStateMask_MAX = 76,
	};

	// Enum GPGameplay.EForbidMoveReason
	// NumValues: 0x000A
	enum class EForbidMoveReason : uint8_t
	{
		VaultAndClimb = 0,
		AbilityForbidMove = 1,
		InteractForbidMove = 2,
		InteractTrackerForbidMove = 3,
		HUDForbidMove = 4,
		SettlementForbidMove = 5,
		FSM = 6,
		TransitionMove = 7,
		ForbidMoveReasonNum = 8,
		EForbidMoveReason_MAX = 9,
	};

	// Enum GPGameplay.EMovementFailureReason
	// NumValues: 0x000F
	enum class EMovementFailureReason : uint8_t
	{
		MovementFailureReason_None = 0,
		MovementFailureReason_AlreadyInState = 1,
		MovementFailureReason_NotSupport = 2,
		MovementFailureReason_TooFrequent = 3,
		MovementFailureReason_SimulatingPhysics = 4,
		MovementFailureReason_Swimming = 5,
		MovementFailureReason_UsingItem = 6,
		MovementFailureReason_InWeakStatus = 7,
		MovementFailureReason_NotPassCollisionTest = 8,
		MovementFailureReason_TouchWaterVolume = 9,
		MovementFailureReason_IsInKeepPreFireState = 10,
		MovementFailureReason_CanNotStandNow = 11,
		MovementFailureReason_CanNotProneNow = 12,
		MovementFailureReason_Falling = 13,
		MovementFailureReason_MAX = 14,
	};

	// Enum GPGameplay.EPlayerScoreReturnType
	// NumValues: 0x0006
	enum class EPlayerScoreReturnType : uint8_t
	{
		PlayerScoreReturnType_None = 0,
		PlayerScoreReturnType_RebornFlag = 1,
		PlayerScoreReturnType_Rescue = 2,
		PlayerScoreReturnType_DriveVehicle = 3,
		PlayerScoreReturnType_TeamLastOneRedeploy = 4,
		PlayerScoreReturnType_MAX = 5,
	};

	// Enum GPGameplay.EPlayerLeanType
	// NumValues: 0x0005
	enum class EPlayerLeanType : uint8_t
	{
		PlayerLeanType_NotLean = 0,
		PlayerLeanType_LeftLean = 1,
		PlayerLeanType_RightLean = 2,
		PlayerLeanType_Toggle = 16,
		PlayerLeanType_MAX = 17,
	};

	// Enum GPGameplay.ESwimImmediateAudioType
	// NumValues: 0x0004
	enum class ESwimImmediateAudioType : uint8_t
	{
		SwimImmediateAudioType_None = 0,
		SwimImmediateAudioType_Human = 1,
		SwimImmediateAudioType_Vehicle = 2,
		SwimImmediateAudioType_MAX = 3,
	};

	// Enum GPGameplay.ESwimStateAudioType
	// NumValues: 0x0004
	enum class ESwimStateAudioType : uint8_t
	{
		SwimStateAudioType_None = 0,
		SwimStateAudioType_AboveWater = 1,
		SwimStateAudioType_BelowWater = 2,
		SwimStateAudioType_MAX = 3,
	};

	// Enum GPGameplay.EStaminaExclusiveChangeType
	// NumValues: 0x0006
	enum class EStaminaExclusiveChangeType : uint8_t
	{
		EStaminaExclusiveChange_Normal = 0,
		EStaminaExclusiveChange_Sprint = 1,
		EStaminaExclusiveChange_StandRun = 2,
		EStaminaExclusiveChange_SuperSprint = 3,
		EStaminaExclusiveChange_SwimmingSprint = 4,
		EStaminaExclusiveChange_MAX = 5,
	};

	// Enum GPGameplay.EStaminaIndependentChangeType
	// NumValues: 0x0014
	enum class EStaminaIndependentChangeType : uint8_t
	{
		EStaminaIndependentChange_None = 0,
		EStaminaIndependentChange_Jump = 1,
		EStaminaIndependentChange_Vault_One = 2,
		EStaminaIndependentChange_Vault_Two = 3,
		EStaminaIndependentChange_Vault_Three = 4,
		EStaminaIndependentChange_Vault_Four = 5,
		EStaminaIndependentChange_SlideTackle = 6,
		EStaminaIndependentChange_StandToProne = 7,
		EStaminaIndependentChange_StandToCrouch = 8,
		EStaminaIndependentChange_CrouchToStand = 9,
		EStaminaIndependentChange_CrouchToProne = 10,
		EStaminaIndependentChange_ProneToCrouch = 11,
		EStaminaIndependentChange_ProneToStand = 12,
		EStaminaIndependentChange_SkillAssaultAward = 13,
		EStaminaIndependentChange_SkillAssaultStart = 14,
		EStaminaIndependentChange_SkillBlastShieldNormalAttack = 15,
		EStaminaIndependentChange_SkillBlastShieldHeavyAttack = 16,
		EStaminaIndependentChange_Dive = 17,
		EStaminaIndependentChange_SprintPenalty = 18,
		EStaminaIndependentChange_MAX = 19,
	};

	// Enum GPGameplay.ECampNum
	// NumValues: 0x0005
	enum class ECampNum : uint8_t
	{
		ECamp_None = 0,
		ECamp_Player = 1,
		ECamp_PlayerEnemy = 2,
		ECamp_Custom1 = 3,
		ECamp_MAX = 4,
	};

	// Enum GPGameplay.ECharacterGender
	// NumValues: 0x0003
	enum class ECharacterGender : uint8_t
	{
		CharacterGender_Male = 0,
		CharacterGender_Female = 1,
		CharacterGender_MAX = 2,
	};

	// Enum GPGameplay.ECharacterDamagePartsName
	// NumValues: 0x0009
	enum class ECharacterDamagePartsName : uint8_t
	{
		None = 0,
		Leg = 1,
		LegUpper = 2,
		Arm = 3,
		ArmUpper = 4,
		Head = 5,
		Thorx = 6,
		ThorxUpper = 7,
		ECharacterDamagePartsName_MAX = 8,
	};

	// Enum GPGameplay.ESetCharacterPositionAndRep2ClientReason
	// NumValues: 0x000B
	enum class ESetCharacterPositionAndRep2ClientReason : uint8_t
	{
		ENone = 0,
		ERedeploy = 1,
		ERaidResetHasVechile = 2,
		EVolumeResetPosition = 3,
		EVolumeResetCharacterBasePose = 4,
		EMapHeightChanged = 5,
		ECharacterStuck = 6,
		EVaultClimbEndNotInSafe = 7,
		EZiplineCheck = 8,
		EGetOffFromVehicleWithInheritVelocity = 9,
		ESetCharacterPositionAndRep2ClientReason_MAX = 10,
	};

	// Enum GPGameplay.ERedeployStateFuture
	// NumValues: 0x0010
	enum class ERedeployStateFuture : uint32
	{
		Idle = 0,
		Start = 1,
		FallDown = 2,
		TurnCameraToEnemy = 3,
		FovZoomOut = 4,
		KillerMark = 5,
		FovZoomIn = 6,
		TurnCameraToSelf = 7,
		Rescue = 8,
		Rising = 9,
		HighView = 10,
		WaitLoadCollision = 11,
		WaitPreMatch = 12,
		Landing = 13,
		RedeployEnd = 14,
		ERedeployStateFuture_MAX = 15,
	};

	// Enum GPGameplay.ERushKillState
	// NumValues: 0x0006
	enum class ERushKillState : uint8_t
	{
		Normal = 0,
		Rush = 1,
		Kill = 2,
		Rush2 = 3,
		Kill2 = 4,
		ERushKillState_MAX = 5,
	};

	// Enum GPGameplay.ECharacterBaseState
	// NumValues: 0x0003
	enum class ECharacterBaseState : uint8_t
	{
		NormalFight = 0,
		SafeHouse = 1,
		ECharacterBaseState_MAX = 2,
	};

	// Enum GPGameplay.ERescueNoPreciseType
	// NumValues: 0x0005
	enum class ERescueNoPreciseType : uint8_t
	{
		None = 0,
		NoMedicSwim = 1,
		NoMedicLand = 2,
		Medic = 3,
		ERescueNoPreciseType_MAX = 4,
	};

	// Enum GPGameplay.EClientAdjustPositionExInfo
	// NumValues: 0x0005
	enum class EClientAdjustPositionExInfo : uint8_t
	{
		None = 0,
		WantToCrouch = 1,
		WantToProne = 2,
		WantToStand = 3,
		EClientAdjustPositionExInfo_MAX = 4,
	};

	// Enum GPGameplay.EVerifyClientMoveExFlag
	// NumValues: 0x000B
	enum class EVerifyClientMoveExFlag : uint16
	{
		SuccessTrustAll = 0,
		NotVelocity = 1,
		NotMoveMode = 2,
		NotLocation = 4,
		FailJumpCount = 8,
		FailZAxis = 16,
		FailMaxJumpHeight = 32,
		FailDistance = 64,
		FailCustomMove = 128,
		FailTrustScore = 256,
		EVerifyClientMoveExFlag_MAX = 257,
	};

	// Enum GPGameplay.VerifyClientMoveResult
	// NumValues: 0x0005
	enum class EVerifyClientMoveResult : uint8_t
	{
		UseTrustScore = 0,
		SuccessCustomMove = 1,
		SuccessOnMoveBase = 2,
		Fail = 3,
		VerifyClientMoveResult_MAX = 4,
	};

	// Enum GPGameplay.EGPPlayerMoveMode
	// NumValues: 0x0006
	enum class EGPPlayerMoveMode : uint8_t
	{
		None = 0,
		StandStill = 1,
		Walk = 2,
		Run = 3,
		Sprint = 4,
		EGPPlayerMoveMode_MAX = 5,
	};

	// Enum GPGameplay.EGPMoveDebug
	// NumValues: 0x0008
	enum class EGPMoveDebug : uint8_t
	{
		GPMoveDebug_None = 0,
		GPMoveDebug_Prone = 1,
		GPMoveDebug_Penetration = 2,
		GPMoveDebug_MoveAlong = 3,
		GPMoveDebug_ResetWalkingPosition = 4,
		GPMoveDebug_DrawServerPhysicCheck = 5,
		GPMoveDebug_SwimLog = 6,
		GPMoveDebug_MAX = 7,
	};

	// Enum GPGameplay.EGPMovementType
	// NumValues: 0x0009
	enum class EGPMovementType : uint8_t
	{
		MovementType_None = 0,
		MovementType_Walk = 1,
		MovementType_Fall = 2,
		MovementType_Swim = 3,
		MovementType_Fly = 4,
		MovementType_Sprint = 5,
		MovementType_SilentWalk = 6,
		MovementType_HalfSquatWalk = 7,
		MovementType_MAX = 8,
	};

	// Enum GPGameplay.ECharacterSpecificVoiceType
	// NumValues: 0x0006
	enum class ECharacterSpecificVoiceType : uint8_t
	{
		None = 0,
		GameStart = 1,
		Kill = 2,
		Rescue = 3,
		BeRescued = 4,
		ECharacterSpecificVoiceType_MAX = 5,
	};

	// Enum GPGameplay.EAbilityVehicleDestroyReason
	// NumValues: 0x0006
	enum class EAbilityVehicleDestroyReason : uint8_t
	{
		Boom = 0,
		EmptyHealth = 1,
		OwnerDie = 2,
		RetrieveItems = 3,
		Power = 4,
		EAbilityVehicleDestroyReason_MAX = 5,
	};

	// Enum GPGameplay.EAudioEventType
	// NumValues: 0x0009
	enum class EAudioEventType : uint8_t
	{
		None = 0,
		StandToCrouch = 1,
		StandToProne = 2,
		CrouchToStand = 3,
		CrouchToProne = 4,
		ProneToStand = 5,
		ProneToCrouch = 6,
		ClimbLadderUp = 7,
		EAudioEventType_MAX = 8,
	};

	// Enum GPGameplay.EGPAnimAssetType
	// NumValues: 0x0008
	enum class EGPAnimAssetType : uint8_t
	{
		None = 0,
		AssassinateStand = 1,
		BeAssassinateStand = 2,
		AssassinateProne = 3,
		BeAssassinateProne = 4,
		AssassinateImpendingDeath = 5,
		BeAssassinateImpendingDeath = 6,
		EGPAnimAssetType_MAX = 7,
	};

	// Enum GPGameplay.EAntiPeekModeValidationStrategy
	// NumValues: 0x0003
	enum class EAntiPeekModeValidationStrategy : uint8_t
	{
		ValidationStrategy_Default = 0,
		ValidationStrategy_OnlyHead = 1,
		ValidationStrategy_MAX = 2,
	};

	// Enum GPGameplay.EAntiPeekModeReason
	// NumValues: 0x0003
	enum class EAntiPeekModeReason : uint8_t
	{
		AntiPeekModeReason_Emote = 0,
		AntiPeekModeReason_Assassination = 1,
		AntiPeekModeReason_MAX = 2,
	};

	// Enum GPGameplay.EAntiPeekModeCharacterPart
	// NumValues: 0x0007
	enum class EAntiPeekModeCharacterPart : uint8_t
	{
		AntiPeekModeCharacterPart_Head = 0,
		AntiPeekModeCharacterPart_Spine = 1,
		AntiPeekModeCharacterPart_LeftHand = 2,
		AntiPeekModeCharacterPart_RightHand = 3,
		AntiPeekModeCharacterPart_LeftFoot = 4,
		AntiPeekModeCharacterPart_RightFoot = 5,
		AntiPeekModeCharacterPart_MAX = 6,
	};

	// Enum GPGameplay.EAntiPeekModeCategory
	// NumValues: 0x0009
	enum class EAntiPeekModeCategory : uint8_t
	{
		AntiPeekModeCategory_PC_SOL_Player = 0,
		AntiPeekModeCategory_PC_SOL_AI = 1,
		AntiPeekModeCategory_PC_MP_Player = 2,
		AntiPeekModeCategory_PC_MP_AI = 3,
		AntiPeekModeCategory_Mobile_SOL_Player = 4,
		AntiPeekModeCategory_Mobile_SOL_AI = 5,
		AntiPeekModeCategory_Mobile_MP_Player = 6,
		AntiPeekModeCategory_Mobile_MP_AI = 7,
		AntiPeekModeCategory_MAX = 8,
	};

	// Enum GPGameplay.EVoiceTriggerRule
	// NumValues: 0x0006
	enum class EVoiceTriggerRule : uint8_t
	{
		DefaultInspect = 0,
		EmptyInspect = 1,
		MatchStart = 2,
		Ace = 3,
		Kill = 4,
		EVoiceTriggerRule_MAX = 5,
	};

	// Enum GPGameplay.EKillType
	// NumValues: 0x0005
	enum class EKillType : uint8_t
	{
		Player = 0,
		AILab = 1,
		RobotAI = 2,
		AIBoss = 3,
		EKillType_MAX = 4,
	};

	// Enum GPGameplay.ECommercializationVoiceResourceType
	// NumValues: 0x0003
	enum class ECommercializationVoiceResourceType : uint8_t
	{
		WeaponSkin = 0,
		Pendant = 1,
		ECommercializationVoiceResourceType_MAX = 2,
	};

	// Enum GPGameplay.ECharacterState
	// NumValues: 0x0013
	enum class ECharacterState : uint8_t
	{
		CharacterState_None = 0,
		CharacterState_Stand = 1,
		CharacterState_Crouch = 2,
		CharacterState_Prone = 3,
		CharacterState_SilentWalk = 4,
		CharacterState_Zipline = 5,
		CharacterState_Peek = 6,
		CharacterState_Jump = 7,
		CharacterState_Firing = 8,
		CharacterState_Zooming = 9,
		CharacterState_Reload = 10,
		CharacterState_SwitchWeapon = 11,
		CharacterState_Inspect = 12,
		CharacterState_Skill = 13,
		CharacterState_SprayPaint = 14,
		CharacterState_HandGesture = 15,
		CharacterState_LookWatch = 16,
		CharacterState_GetKill = 17,
		CharacterState_MAX = 18,
	};

	// Enum GPGameplay.EWatchMaterialRule
	// NumValues: 0x0004
	enum class EWatchMaterialRule : uint8_t
	{
		WatchMaterialRule_Texture = 0,
		WatchMaterialRule_Time = 1,
		WatchMaterialRule_KillCount = 2,
		WatchMaterialRule_MAX = 3,
	};

	// Enum GPGameplay.EItemCondition
	// NumValues: 0x0005
	enum class EItemCondition : uint8_t
	{
		ItemCondition_None = 0,
		ItemCondition_Empty = 1,
		ItemCondition_CannotUse = 2,
		ItemCondition_NoSpace = 3,
		ItemCondition_MAX = 4,
	};

	// Enum GPGameplay.EItemType
	// NumValues: 0x000B
	enum class EItemType : uint8_t
	{
		None = 0,
		Spray = 1,
		Voice = 2,
		OneHandedGesture = 3,
		TwoHandedGesture = 4,
		Emote = 5,
		WeaponInspect = 6,
		SkillInspect = 7,
		Watch = 8,
		HighValueItem = 9,
		EItemType_MAX = 10,
	};

	// Enum GPGameplay.EDestructAnimForwardType
	// NumValues: 0x0007
	enum class EDestructAnimForwardType : uint8_t
	{
		Forward = 0,
		Right = 1,
		Up = 2,
		NegativeForward = 3,
		NegativeRight = 4,
		NegativeUp = 5,
		EDestructAnimForwardType_MAX = 6,
	};

	// Enum GPGameplay.EDestructPriorityType
	// NumValues: 0x0003
	enum class EDestructPriorityType : uint8_t
	{
		ENormalPriority = 0,
		EHighPriority = 1,
		EDestructPriorityType_MAX = 2,
	};

	// Enum GPGameplay.EDestructPhysicsSimulateType
	// NumValues: 0x0004
	enum class EDestructPhysicsSimulateType : uint8_t
	{
		EAnimNodePhysics = 0,
		EGobalPhysics = 1,
		EAsyncPhysics = 2,
		EDestructPhysicsSimulateType_MAX = 3,
	};

	// Enum GPGameplay.EDestructPhysicsType
	// NumValues: 0x0006
	enum class EDestructPhysicsType : uint8_t
	{
		ENoPhysics = 0,
		ESimulateWithAnimationSequence = 1,
		ESimulateWithDelay = 2,
		ESimulateImmediateWithForce = 3,
		ESimulateImmediateWithForceInRadius = 4,
		EDestructPhysicsType_MAX = 5,
	};

	// Enum GPGameplay.EDestructState
	// NumValues: 0x0005
	enum class EDestructState : uint8_t
	{
		ENotDestructed = 0,
		EDamaged = 1,
		EDestroying = 2,
		EDestructed = 3,
		EDestructState_MAX = 4,
	};

	// Enum GPGameplay.EDestructLoadMode
	// NumValues: 0x0004
	enum class EDestructLoadMode : uint8_t
	{
		AsyncLoadWhenTrigger = 0,
		AsyncLoadWhenBeginPlay = 1,
		SyncLoad = 2,
		EDestructLoadMode_MAX = 3,
	};

	// Enum GPGameplay.EDiveState
	// NumValues: 0x0004
	enum class EDiveState : uint8_t
	{
		DiveState_Undefine = 0,
		DiveState_InAir = 1,
		DiveState_Landed = 2,
		DiveState_MAX = 3,
	};

	// Enum GPGameplay.EDroneMoveType
	// NumValues: 0x0003
	enum class EDroneMoveType : uint8_t
	{
		SingleAxis = 0,
		MultiAxis = 1,
		EDroneMoveType_MAX = 2,
	};

	// Enum GPGameplay.EAIAdditiveBehavior
	// NumValues: 0x0009
	enum class EAIAdditiveBehavior : uint8_t
	{
		None = 0,
		AimTarget = 1,
		GunShooting = 2,
		ChangeClip = 3,
		Speaking = 4,
		SpotTurn = 5,
		ProneRotator = 6,
		AdditiveGunPos = 7,
		MAX = 8,
	};

	// Enum GPGameplay.EAILeisureMovementType
	// NumValues: 0x0005
	enum class EAILeisureMovementType : uint8_t
	{
		DefualtType = 0,
		SpecialType01 = 1,
		SpecialType02 = 2,
		TYPE_MAX = 3,
		EAILeisureMovementType_MAX = 4,
	};

	// Enum GPGameplay.EGPCharacterMoveDirStateType
	// NumValues: 0x0004
	enum class EGPCharacterMoveDirStateType : uint8_t
	{
		Forward = 0,
		Backward = 1,
		Horizontal = 2,
		EGPCharacterMoveDirStateType_MAX = 3,
	};

	// Enum GPGameplay.EGPCharacterInCoverPoseType
	// NumValues: 0x0004
	enum class EGPCharacterInCoverPoseType : uint8_t
	{
		None = 0,
		LeftLow = 1,
		RightLow = 2,
		EGPCharacterInCoverPoseType_MAX = 3,
	};

	// Enum GPGameplay.EGPCharacterPoseStateType
	// NumValues: 0x0006
	enum class EGPCharacterPoseStateType : uint8_t
	{
		Stand = 0,
		Crouch = 1,
		Prone = 2,
		Sprint = 3,
		Trott = 4,
		EGPCharacterPoseStateType_MAX = 5,
	};

	// Enum GPGameplay.EGPCharacterAlertStateType
	// NumValues: 0x0004
	enum class EGPCharacterAlertStateType : uint8_t
	{
		Normal = 0,
		TrottMove = 1,
		Sight = 2,
		EGPCharacterAlertStateType_MAX = 3,
	};

	// Enum GPGameplay.EGPCharacterLeisureMoveType
	// NumValues: 0x0004
	enum class EGPCharacterLeisureMoveType : uint8_t
	{
		LeisureMoveType0 = 0,
		LeisureMoveType1 = 1,
		LeisureMoveType2 = 2,
		EGPCharacterLeisureMoveType_MAX = 3,
	};

	// Enum GPGameplay.EGPAICharaLocomotionType
	// NumValues: 0x000F
	enum class EGPAICharaLocomotionType : uint8_t
	{
		None = 0,
		Leisure_Patrol = 1,
		Alert_Trot = 2,
		Alert_Walk = 3,
		Alert_Crouch = 4,
		Alert_InLeftCover = 5,
		Alert_InRightCover = 6,
		Alert_Sprint = 7,
		Fight_Crouch = 8,
		Fight_Walk = 9,
		Fight_Run = 10,
		Fight_Sprint = 11,
		Fight_InCoverLeft = 12,
		Fight_InCoverRight = 13,
		EGPAICharaLocomotionType_MAX = 14,
	};

	// Enum GPGameplay.EGPAIMotionType
	// NumValues: 0x0008
	enum class EGPAIMotionType : uint8_t
	{
		None = 0,
		Walk = 1,
		Run = 2,
		Sprint = 3,
		Crouch = 4,
		Prone = 5,
		Swim = 6,
		EGPAIMotionType_MAX = 7,
	};

	// Enum GPGameplay.EFSMAudioEventType
	// NumValues: 0x0006
	enum class EFSMAudioEventType : uint32
	{
		None = 0,
		GAudio = 1,
		Foot = 2,
		LoopStart = 3,
		LoopEnd = 4,
		EFSMAudioEventType_MAX = 5,
	};

	// Enum GPGameplay.ECharacterGlobalEventDefine
	// NumValues: 0x0004
	enum class ECharacterGlobalEventDefine : uint8_t
	{
		ECharacterGlobalEventD_None = 0,
		ECharacterGlobalEvent_ToHandingM2HB = 1,
		ECharacterGlobalEvent_WTF = 2,
		ECharacterGlobalEventDefine_MAX = 3,
	};

	// Enum GPGameplay.EGPFSMNetworkIdentityType
	// NumValues: 0x0008
	enum class EGPFSMNetworkIdentityType : uint8_t
	{
		GPFSM_None = 0,
		GPFSM_OnlyServer = 1,
		GPFSM_OnlyClient = 2,
		GPFSM_OnlyAutonomous = 3,
		GPFSM_OnlySimulate = 4,
		GPFSM_BothServerAndAutonomous = 5,
		GPFSM_BothClientAndServer = 6,
		GPFSM_MAX = 7,
	};

	// Enum GPGameplay.EResetWalkingPositionType
	// NumValues: 0x0008
	enum class EResetWalkingPositionType : uint8_t
	{
		None = 0,
		PreCheckSuccess = 1,
		Success = 2,
		Fail_CD = 3,
		Fail_NotStuckInGeometry = 4,
		Fail_CheckFail = 5,
		Fail_Disable = 6,
		EResetWalkingPositionType_MAX = 7,
	};

	// Enum GPGameplay.EEndZiplineReason
	// NumValues: 0x0006
	enum class EEndZiplineReason : uint8_t
	{
		Arrive = 0,
		Collision = 1,
		Jump = 2,
		Cancel = 3,
		None = 4,
		EEndZiplineReason_MAX = 5,
	};

	// Enum GPGameplay.EBaseTLogDataType
	// NumValues: 0x000C
	enum class EBaseTLogDataType : uint8_t
	{
		ENone = 0,
		EServerBegin = 1,
		EDamage = 2,
		EBeDamaged = 3,
		EKillInfo = 4,
		EPropChange = 5,
		EHPGained = 6,
		EServerEnd = 7,
		EClientBegin = 8,
		EBigMapOperate = 9,
		EClientEnd = 10,
		EBaseTLogDataType_MAX = 11,
	};

	// Enum GPGameplay.ELastHitPosition
	// NumValues: 0x0009
	enum class ELastHitPosition : uint8_t
	{
		Head = 0,
		Chest = 1,
		Stomach = 2,
		LeftArm = 3,
		RightArm = 4,
		LeftLeg = 5,
		RightLeg = 6,
		None = 99,
		ELastHitPosition_MAX = 100,
	};

	// Enum GPGameplay.ESpecialWeaponMatch
	// NumValues: 0x0009
	enum class ESpecialWeaponMatch : uint8_t
	{
		None = 0,
		Sniper = 1,
		ColdArms = 2,
		Richx3 = 3,
		Pistol = 4,
		Shotgun = 5,
		Drug = 6,
		AbilityItem = 7,
		ESpecialWeaponMatch_MAX = 8,
	};

	// Enum GPGameplay.EGameplayType
	// NumValues: 0x0005
	enum class EGameplayType : uint8_t
	{
		EGameplayType_None = 0,
		EGameplayType_Normal = 1,
		EGameplayType_BFA = 2,
		EGameplayType_BTT = 3,
		EGameplayType_Max = 4,
	};

	// Enum GPGameplay.EGameTeamMemberCountType
	// NumValues: 0x0007
	enum class EGameTeamMemberCountType : uint8_t
	{
		EGameTeamMemberCountType_None = 0,
		EGameTeamMemberCountType_1 = 1,
		EGameTeamMemberCountType_2 = 2,
		EGameTeamMemberCountType_4 = 4,
		EGameTeamMemberCountType_5 = 5,
		EGameRoomType_Max = 6,
		EGameTeamMemberCountType_MAX = 7,
	};

	// Enum GPGameplay.EGameRoomType
	// NumValues: 0x0005
	enum class EGameRoomType : uint8_t
	{
		EGameRoomType_None = 0,
		EGameRoomType_Normal = 1,
		EGameRoomType_Rank = 2,
		EGameRoomType_Custom = 3,
		EGameRoomType_Max = 4,
	};

	// Enum GPGameplay.EGPSoftwareCursorType
	// NumValues: 0x0008
	enum class EGPSoftwareCursorType : uint8_t
	{
		None = 0,
		Default = 1,
		DefaultMoving = 2,
		Hand = 3,
		HandPressed = 4,
		GrabHand = 5,
		CardinalCross = 6,
		EGPSoftwareCursorType_MAX = 7,
	};

	// Enum GPGameplay.EHitEffectType
	// NumValues: 0x0004
	enum class EHitEffectType : uint8_t
	{
		HitEffectType_None = 0,
		HitEffectType_Animation = 1,
		HitEffectType_Physx = 2,
		HitEffectType_MAX = 3,
	};

	// Enum GPGameplay.EHitDirection
	// NumValues: 0x0006
	enum class EHitDirection : uint8_t
	{
		HitDirection_None = 0,
		HitDirection_Front = 1,
		HitDirection_Back = 2,
		HitDirection_Left = 3,
		HitDirection_Right = 4,
		HitDirection_MAX = 5,
	};

	// Enum GPGameplay.EGPHotFixActorType
	// NumValues: 0x0005
	enum class EGPHotFixActorType : uint8_t
	{
		None = 0,
		Add = 1,
		Delete = 2,
		Modify = 3,
		EGPHotFixActorType_MAX = 4,
	};

	// Enum GPGameplay.EBagTabType
	// NumValues: 0x0004
	enum class EBagTabType : uint8_t
	{
		EBagTab_Character = 0,
		EBagTab_Health = 1,
		EBagTab_ScoreBoard = 2,
		EBagTab_MAX = 3,
	};

	// Enum GPGameplay.EInputDisableReason
	// NumValues: 0x0007
	enum class EInputDisableReason : uint8_t
	{
		HUD_EmptyWhiteListBlockAll = 0,
		HUD_NotInWhiteList = 1,
		HUD_InBlackList = 2,
		MainStage = 3,
		PlayMode = 4,
		Dynamic = 5,
		EInputDisableReason_MAX = 6,
	};

	// Enum GPGameplay.EInputActionType
	// NumValues: 0x0135
	enum class EInputActionType : uint16
	{
		EInputAction_None = 0,
		EInputAction_MoveForwardBtnDown = 1,
		EInputAction_MoveForwardBtnUp = 2,
		EInputAction_MoveBackwardBtnDown = 3,
		EInputAction_MoveBackwardBtnUp = 4,
		EInputAction_MoveLeftBtnDown = 5,
		EInputAction_MoveLeftBtnUp = 6,
		EInputAction_MoveRightBtnDown = 7,
		EInputAction_MoveRightBtnUp = 8,
		EInputAction_MoveUpBtnDown = 9,
		EInputAction_MoveUpBtnUp = 10,
		EInputAction_MoveDownBtnDown = 11,
		EInputAction_MoveDownBtnUp = 12,
		EInputAction_MoveRollLeftBtnDown = 13,
		EInputAction_MoveRollLeftBtnUp = 14,
		EInputAction_MoveRollRightBtnDown = 15,
		EInputAction_MoveRollRightBtnUp = 16,
		EInputAction_AirThrottleUpBtnDown = 17,
		EInputAction_AirThrottleUpBtnUp = 18,
		EInputAction_AirThrottleDownBtnDown = 19,
		EInputAction_AirThrottleDownBtnUp = 20,
		EInputAction_AirRollLeftBtnDown = 21,
		EInputAction_AirRollLeftBtnUp = 22,
		EInputAction_AirRollRightBtnDown = 23,
		EInputAction_AirRollRightBtnUp = 24,
		EInputAction_AirPitchUpBtnDown = 25,
		EInputAction_AirPitchUpBtnUp = 26,
		EInputAction_AirPitchDownBtnDown = 27,
		EInputAction_AirPitchDownBtnUp = 28,
		EInputAction_AirYawLeftBtnDown = 29,
		EInputAction_AirYawLeftBtnUp = 30,
		EInputAction_AirYawRightBtnDown = 31,
		EInputAction_AirYawRightBtnUp = 32,
		EInputAction_HeliThrottleUpBtnDown = 33,
		EInputAction_HeliThrottleUpBtnUp = 34,
		EInputAction_HeliThrottleDownBtnDown = 35,
		EInputAction_HeliThrottleDownBtnUp = 36,
		EInputAction_HeliRollLeftBtnDown = 37,
		EInputAction_HeliRollLeftBtnUp = 38,
		EInputAction_HeliRollRightBtnDown = 39,
		EInputAction_HeliRollRightBtnUp = 40,
		EInputAction_HeliPitchUpBtnDown = 41,
		EInputAction_HeliPitchUpBtnUp = 42,
		EInputAction_HeliPitchDownBtnDown = 43,
		EInputAction_HeliPitchDownBtnUp = 44,
		EInputAction_HeliYawLeftBtnDown = 45,
		EInputAction_HeliYawLeftBtnUp = 46,
		EInputAction_HeliYawRightBtnDown = 47,
		EInputAction_HeliYawRightBtnUp = 48,
		EInputAction_JumpAndVaultBtnDown = 49,
		EInputAction_JumpAndVaultBtnUp = 50,
		EInputAction_JumpBtnDown = 51,
		EInputAction_JumpBtnUp = 52,
		EInputAction_VaultBtnDown = 53,
		EInputAction_CrouchBtnDown = 54,
		EInputAction_CrouchBtnUp = 55,
		EInputAction_CrouchHoldBtnDown = 56,
		EInputAction_CrouchHoldBtnUp = 57,
		EInputAction_ProneAndDiveBtnDown = 58,
		EInputAction_ProneBtnDown = 59,
		EInputAction_DiveBtnDown = 60,
		EInputAction_SwimUpBtnDown = 61,
		EInputAction_SwimUpBtnUp = 62,
		EInputAction_SwimDownBtnDown = 63,
		EInputAction_SwimDownBtnUp = 64,
		EInputAction_SprintBtnDown = 65,
		EInputAction_SprintBtnUp = 66,
		EInputAction_SilentWalkBtnDown = 67,
		EInputAction_SilentWalkBtnUp = 68,
		EInputAction_SuperSprintBtnDown = 69,
		EInputAction_SuperSprintBtnUp = 70,
		EInputAction_PersistMoveBtnDown = 71,
		EInputAction_PersistMoveBtnUp = 72,
		EInputAction_SprintKeyboardBtnDown = 73,
		EInputAction_SprintKeyboardBtnUp = 74,
		EInputAction_SilentWalkKeyboardBtnDown = 75,
		EInputAction_SilentWalkKeyboardBtnUp = 76,
		EInputAction_LeftPeekBtnDown = 77,
		EInputAction_LeftPeekBtnUp = 78,
		EInputAction_RightPeekBtnDown = 79,
		EInputAction_RightPeekBtnUp = 80,
		EInputAction_ParachuteOpenBtnDown = 81,
		EInputAction_ParachuteCloseBtnDown = 82,
		EInputAction_LeftFireBtnDown = 83,
		EInputAction_LeftFireBtnUp = 84,
		EInputAction_RightFireBtnDown = 85,
		EInputAction_RightFireBtnUp = 86,
		EInputAction_AimBtnDown = 87,
		EInputAction_AimBtnUp = 88,
		EInputAction_SideAimBtnDown = 89,
		EInputAction_SideAimBtnUp = 90,
		EInputAction_ChangeSightBtnDown = 91,
		EInputAction_HoldBreathBtnDown = 92,
		EInputAction_HoldBreathBtnUp = 93,
		EInputAction_ReloadBtnDown = 94,
		EInputAction_ReloadBtnUp = 95,
		EInputAction_GamepadReloadBtnDown = 96,
		EInputAction_FastFireBtnDown = 97,
		EInputAction_FastFireBtnUp = 98,
		EInputAction_SwitchWeapon1BtnDown = 99,
		EInputAction_SwitchWeapon2BtnDown = 100,
		EInputAction_SwitchWeapon3BtnDown = 101,
		EInputAction_SwitchWeapon4BtnDown = 102,
		EInputAction_SwitchToPreWeaponBtnDown = 103,
		EInputAction_SwitchToNextWeaponBtnDown = 104,
		EInputAction_SwitchWeaponFireModeBtnDown = 105,
		EInputAction_ChangeFOVBtnDown = 106,
		EInputAction_ChangeFovBtnUp = 107,
		EInputAction_SwitchTacticalEquipmentBtnDown = 108,
		EInputAction_SwitchTacticalEquipmentBtnUp = 109,
		EInputAction_PowerFlashOpenKeyboardBtnDown = 110,
		EInputAction_RangeFinderBtnDown = 111,
		EInputAction_NightVisionBtnDown = 112,
		EInputAction_NightVisionBtnUp = 113,
		EInputAction_WeaponBipodDeployBtnDown = 114,
		EInputAction_AbilityDetailBtnUp = 115,
		EInputAction_AbilityDetailBtnDown = 116,
		EInputAction_SkillButtonBtnDown = 117,
		EInputAction_SkillButtonBtnUp = 118,
		EInputAction_AbilityItemBtnDown = 119,
		EInputAction_AbilityItemBtnUp = 120,
		EInputAction_AbilityItemSecondBtnDown = 121,
		EInputAction_AbilityItemSecondBtnUp = 122,
		EInputAction_MedicalSyringeBtnDown = 123,
		EInputAction_SkillCustom1BtnDown = 124,
		EInputAction_SkillCustom1BtnUp = 125,
		EInputAction_SkillCustom2BtnDown = 126,
		EInputAction_SkillCustom2BtnUp = 127,
		EInputAction_BattleFieldPropSkillBtnDown = 128,
		EInputAction_BattleFieldPropSkillBtnUp = 129,
		EInputAction_SkillQTELeftBtnDown = 130,
		EInputAction_SkillQTELeftBtnUp = 131,
		EInputAction_SkillQTERightBtnDown = 132,
		EInputAction_SkillQTERightBtnUp = 133,
		EInputAction_SkillInspectRouletteBtnDown = 134,
		EInputAction_SkillInspectRouletteBtnUp = 135,
		EInputAction_SkillInspectBtnDown = 136,
		EInputAction_AbilityItem1InspectBtnDown = 137,
		EInputAction_AbilityItem2InspectBtnDown = 138,
		EInputAction_InteractBtnDown = 139,
		EInputAction_InteractBtnUp = 140,
		EInputAction_Interact2BtnDown = 141,
		EInputAction_Interact2BtnUp = 142,
		EInputAction_Interact3BtnDown = 143,
		EInputAction_Interact3BtnUp = 144,
		EInputAction_RescueBtnDown = 145,
		EInputAction_RescueBtnUp = 146,
		EInputAction_CarryBodyBtnDown = 147,
		EInputAction_DropCarryBodyBtnDown = 148,
		EInputAction_ZiplineBtnDown = 149,
		EInputAction_AssassinateBtnDown = 150,
		EInputAction_AssassinateBtnUp = 151,
		EInputAction_FirefightingBtnDown = 152,
		EInputAction_FirefightingBtnUp = 153,
		EInputAction_PullOutArrowBtnDown = 154,
		EInputAction_PullOutArrowBtnUp = 155,
		EInputAction_ButterRescueBtnDown = 156,
		EInputAction_ButterRescueBtnUp = 157,
		EInputAction_ESCBtnDown = 158,
		EInputAction_OpenGameESCPanelBtnDown = 159,
		EInputAction_LootingOpenBagBtnDown = 160,
		EInputAction_LootingOpenBagBtnUp = 161,
		EInputAction_LootingOpenHealthTabBtnDown = 162,
		EInputAction_ToggleScoreboardBtnDown = 163,
		EInputAction_ToggleScoreboardBtnUp = 164,
		EInputAction_RequestRescueBtnDown = 165,
		EInputAction_RequestRescueBtnUp = 166,
		EInputAction_AbandonRescueBtnDown = 167,
		EInputAction_AbandonRescueBtnUp = 168,
		EInputAction_AbandonRescueInWaterBtnDown = 169,
		EInputAction_AbandonRescueInWaterBtnUp = 170,
		EInputAction_EquipmentRentalBtnDown = 171,
		EInputAction_MiniMapScaleChangeBtnDown = 172,
		EInputAction_CloseDeathDetailBtnDown = 173,
		EInputAction_QuickResYesBtnDown = 174,
		EInputAction_QuickResNoBtnDown = 175,
		EInputAction_OpenScoreBoardBtnDown = 176,
		EInputAction_OpenScoreBoardBtnUp = 177,
		EInputAction_ArtillerySupportBtnDown = 178,
		EInputAction_ArtillerySupportBtnUp = 179,
		EInputAction_RouletteMedBtnDown = 180,
		EInputAction_RouletteMedBtnUp = 181,
		EInputAction_RouletteLeftBtnDown = 182,
		EInputAction_UseCurrentRouletteItemBtnDown = 183,
		EInputAction_CancelRouletteBtnDown = 184,
		EInputAction_OpenTaskBtnDown = 185,
		EInputAction_CommanderImpeachBtnDown = 186,
		EInputAction_TeamInfoDetailsBtnDown = 187,
		EInputAction_OpenMapBtnDown = 188,
		EInputAction_ZoomUpBigMapScaleBtnDown = 189,
		EInputAction_ZoomDownBigMapScaleBtnDown = 190,
		EInputAction_MapLongPressSelectBtnDown = 191,
		EInputAction_MapLongPressSelectBtnUp = 192,
		EInputAction_SOLMapExitInfoShow = 193,
		EInputAction_MapDigitalKey1BtnDown = 194,
		EInputAction_MapDigitalKey2BtnDown = 195,
		EInputAction_MapDigitalKey3BtnDown = 196,
		EInputAction_MapDigitalKey4BtnDown = 197,
		EInputAction_MapKeyUpBtnDown = 198,
		EInputAction_MapKeyDownBtnDown = 199,
		EInputAction_LocatePlayerBtnDown = 200,
		EInputAction_ToggleLegendsBtnDown = 201,
		EInputAction_WatchFightChangeTargetBtnDown = 202,
		EInputAction_WatchFightExitBtnDown = 203,
		EInputAction_WatchFightReportVoiceBtnDown = 204,
		EInputAction_WatchFightReportBtnDown = 205,
		EInputAction_WatchFightPlayerCardBtnDown = 206,
		EInputAction_WatchFightDeathDetailInfoBtnDown = 207,
		EInputAction_WatchKillCamReplayBtnDown = 208,
		EInputAction_MarkingBtnDown = 209,
		EInputAction_MarkingBtnUp = 210,
		EInputAction_CommercializationBtnDown = 211,
		EInputAction_CommercializationBtnUp = 212,
		EInputAction_SwitchRoulette = 213,
		EInputAction_ToggleVoiceSpeakingBtnDown = 214,
		EInputAction_KeepVoiceSpeakingBtnDown = 215,
		EInputAction_KeepVoiceSpeakingBtnUp = 216,
		EInputAction_MuteAllBtnDown = 217,
		EInputAction_ChangeVoiceChannelDown = 218,
		EInputAction_RangeManageWeaponBtnDown = 219,
		EInputAction_RangeToggleAnalysisPanelBtnDown = 220,
		EInputAction_RangeRefreshAnalysisPanelBtnDown = 221,
		EInputAction_RangeToggleAnalysisDetailedPanelBtnDown = 222,
		EInputAction_VehicleBoostBtnDown = 223,
		EInputAction_VehicleBrakeBtnDown = 224,
		EInputAction_VehicleBrakeBtnUp = 225,
		EInputAction_VehicleLockTurretBtnDown = 226,
		EInputAction_VehicleLockTurretBtnUp = 227,
		EInputAction_ChangeVehicleSeat1BtnDown = 228,
		EInputAction_ChangeVehicleSeat2BtnDown = 229,
		EInputAction_ChangeVehicleSeat3BtnDown = 230,
		EInputAction_ChangeVehicleSeat4BtnDown = 231,
		EInputAction_ChangeVehicleSeat5BtnDown = 232,
		EInputAction_ChangeVehicleSeat6BtnDown = 233,
		EInputAction_ChangeVehicleSeatToAvailable = 234,
		EInputAction_FirstVehicleSkillBtnDown = 235,
		EInputAction_FirstVehicleSkillBtnUp = 236,
		EInputAction_SecondVehicleSkillBtnDown = 237,
		EInputAction_SecondVehicleSkillBtnUp = 238,
		EInputAction_ThirdVehicleSkillBtnDown = 239,
		EInputAction_ThirdVehicleSkillBtnUp = 240,
		EInputAction_FourthVehicleSkillBtnDown = 241,
		EInputAction_FourthVehicleSkillBtnUp = 242,
		EInputAction_SecondVehicleWeaponFireBtnDown = 243,
		EInputAction_VehicleHeadOutBtnDown = 244,
		EInputAction_VehicleTrumpetBtnDown = 245,
		EInputAction_VehicleTrumpetBtnUp = 246,
		EInputAction_VehicleSwitchXPPBtnDown = 247,
		EInputAction_LeaveVehicleBtnDown = 248,
		EInputAction_LockVehicleCameraBtnDown = 249,
		EInputAction_LockVehicleCameraBtnUp = 250,
		EInputAction_AirLockVehicleCameraBtnDown = 251,
		EInputAction_AirLockVehicleCameraBtnUp = 252,
		EInputAction_VehicleFireBtnDown = 253,
		EInputAction_VehicleFireBtnUp = 254,
		EInputAction_VehicleAimBtnDown = 255,
		EInputAction_VehicleAimBtnUp = 256,
		EInputAction_JetAimBtnDown = 257,
		EInputAction_JetAimBtnUp = 258,
		EInputAction_AirVehicleBlanceAssistBtnDown = 259,
		EInputAction_AirVehicleBlanceAssistBtnUp = 260,
		EInputAction_SwitchVehicleWeapon1BtnDown = 261,
		EInputAction_SwitchVehicleWeapon2BtnDown = 262,
		EInputAction_SwitchScrollVehicleWeapon1BtnDown = 263,
		EInputAction_SwitchScrollVehicleWeapon2BtnDown = 264,
		EInputAction_VehicleMoveUpBtnDown = 265,
		EInputAction_VehicleMoveUpBtnUp = 266,
		EInputAction_VehicleMoveDownBtnDown = 267,
		EInputAction_VehicleMoveDownBtnUp = 268,
		EInputAction_VehicleSpeedupBtnDown = 269,
		EInputAction_VehicleSpeedupBtnUp = 270,
		EInputAction_JetDriveModeBtnDown = 271,
		EInputAction_Exit3DSafeHouseBtnDown = 272,
		EInputAction_ChangeXPPBtnDown = 273,
		EInputAction_HideHUDBtnDown = 274,
		EInputAction_ToggleWeaponDebugPanelBtnDown = 275,
		EInputAction_GMToggleGhostWalk = 276,
		EInputAction_GMToggleFlyWalk = 277,
		EInputAction_GMAddSpeed100 = 278,
		EInputAction_GMMinusSpeed100 = 279,
		EInputAction_TPPRotateCameraBtnDown = 280,
		EInputAction_TPPRotateCameraBtnUp = 281,
		EInputAction_FreeLookaroundModeBtnDown = 282,
		EInputAction_FreeLookaroundModeBtnUp = 283,
		EInputAction_OBC_ShowHidePanelBtnDown = 284,
		EInputAction_OBC_CatchMoveRoutePointBtnDown = 285,
		EInputAction_OBC_GenerateMoveRouteBtnDown = 286,
		EInputAction_OBC_ClearMoveRouteBtnDown = 287,
		EInputAction_OBC_CatchFaceRoutePointBtnDown = 288,
		EInputAction_OBC_GenerateFaceRouteBtnDown = 289,
		EInputAction_OBC_ClearFaceRouteBtnDown = 290,
		EInputAction_OBC_ShowHideRouteDebugViewBtnDown = 291,
		EInputAction_OBC_StartMoveCameraBtnDown = 292,
		EInputAction_OBC_UpdateFocusPointBtnDown = 293,
		EInputAction_OBC_LeftBtnClickBtnDown = 294,
		EInputAction_OBC_RightBtnClickBtnDown = 295,
		EInputAction_OBC_SwitchToFreeCameraBtnDown = 296,
		EInputAction_OBC_PrevTeamBtnDown = 297,
		EInputAction_OBC_NextTeamBtnDown = 298,
		EInputAction_OBC_ShowDetailListBtnDown = 299,
		EInputAction_OBC_ShowTeamInfoBtnDown = 300,
		EInputAction_OBC_ShowOutLineEffectBtnDown = 301,
		EInputAction_OBC_ShowPlayerMarkerBtnDown = 302,
		EInputAction_OBC_CameraMoveSpeedAccelerateBtnDown = 303,
		EInputAction_OBC_CameraMoveSpeedDecelerateBtnDown = 304,
		EInputAction_OBC_ChangeCameraCollisionBtnDown = 305,
		EInputAction_VehicleChangeXPPBtnDown = 306,
		EInputAction_NumMax = 307,
		EInputAction_MAX = 308,
	};

	// Enum GPGameplay.EInputAxisType
	// NumValues: 0x0017
	enum class EInputAxisType : uint16
	{
		EInputAxis_None = 0,
		EInputAxis_TurnAtRate = 1,
		EInputAxis_LookUpAtRate = 2,
		EInputAxis_MoveForward = 3,
		EInputAxis_MoveVehicleForward_Gamepad = 4,
		EInputAxis_MoveVehicleBackward_Gamepad = 5,
		EInputAxis_MoveRight = 6,
		EInputAxis_MoveUp = 7,
		EInputAxis_MoveRoll = 8,
		EInputAxis_AirThrottle = 9,
		EInputAxis_AirPitch = 10,
		EInputAxis_AirRoll = 11,
		EInputAxis_AirYaw = 12,
		EInputAxis_HeliThrottle = 13,
		EInputAxis_HeliPitch = 14,
		EInputAxis_HeliRoll = 15,
		EInputAxis_HeliYaw = 16,
		EInputAxis_RouletteOperationX = 17,
		EInputAxis_RouletteOperationY = 18,
		EInputAxis_SelectTacticalEquipX = 19,
		EInputAxis_SelectTacticalEquipY = 20,
		EInputAxis_NumMax = 21,
		EInputAxis_MAX = 22,
	};

	// Enum GPGameplay.EDoorKeyType
	// NumValues: 0x0003
	enum class EDoorKeyType : uint8_t
	{
		DoorKeyType_Normal = 0,
		DoorKeyType_ByLevel = 1,
		DoorKeyType_MAX = 2,
	};

	// Enum GPGameplay.EInteractorOptConditionType
	// NumValues: 0x0003
	enum class EInteractorOptConditionType : uint8_t
	{
		OptCondition_None = 0,
		OptCondition_ConsumeItem = 1,
		OptCondition_MAX = 2,
	};

	// Enum GPGameplay.EInteractorOptSwitcherType
	// NumValues: 0x0004
	enum class EInteractorOptSwitcherType : uint8_t
	{
		InteractorOptSwitcherType_None = 0,
		InteractorOptSwitcherType_Lock = 1,
		InteractorOptSwitcherType_OpenClose = 2,
		InteractorOptSwitcherType_MAX = 3,
	};

	// Enum GPGameplay.EInteractorBlockCheckType
	// NumValues: 0x0003
	enum class EInteractorBlockCheckType : uint8_t
	{
		InteractorBlockCheck_ForwardAndCheckBlock = 0,
		InteractorBlockCheck_BackwardAndCheckBlock = 1,
		InteractorBlockCheck_MAX = 2,
	};

	// Enum GPGameplay.EInteractorPriority
	// NumValues: 0x0006
	enum class EInteractorPriority : uint8_t
	{
		InteractorPriority_Zipline = 0,
		InteractorPriority_PickupOwnBySelf = 1,
		InteractorPriority_Delay = 2,
		InteractorPriority_Common = 3,
		InteractorPriority_PickupOwnByTeammate = 4,
		InteractorPriority_MAX = 5,
	};

	// Enum GPGameplay.EInteractorHUDType
	// NumValues: 0x0004
	enum class EInteractorHUDType : uint8_t
	{
		HUDType_None = 0,
		HUDType_Common = 1,
		HUDType_ContractNPC = 2,
		HUDType_MAX = 3,
	};

	// Enum GPGameplay.EInteractorPanelLayout
	// NumValues: 0x000C
	enum class EInteractorPanelLayout : uint8_t
	{
		InteractorPanelLayout_NULL = 0,
		InteractorPanelLayout_Default = 1,
		InteractorPanelLayout_Pickup = 2,
		InteractorPanelLayout_Container = 3,
		InteractorPanelLayout_DeadBody = 4,
		InteractorPanelLayout_Door = 5,
		InteractorPanelLayout_Rescue = 6,
		InteractorPanelLayout_Vehicle = 7,
		InteractorPanelLayout_CarryBody = 8,
		InteractorPanelLayout_SingleItemContainer = 9,
		InteractorPanelLayout_PickupContainer = 10,
		InteractorPanelLayout_MAX = 11,
	};

	// Enum GPGameplay.EKnockbackFromType
	// NumValues: 0x0005
	enum class EKnockbackFromType : uint8_t
	{
		None = 0,
		TigerCrouch = 1,
		RankSkill_GuidMissle = 2,
		BlastShieldAttack = 3,
		EKnockbackFromType_MAX = 4,
	};

	// Enum GPGameplay.EKnockBackState
	// NumValues: 0x0005
	enum class EKnockBackState : uint8_t
	{
		KnockBackState_Undefine = 0,
		KnockBackState_Fly = 1,
		KnockBackState_Fall = 2,
		KnockBackState_GetUp = 3,
		KnockBackState_MAX = 4,
	};

	// Enum GPGameplay.EGPMarkerColorType
	// NumValues: 0x0003
	enum class EGPMarkerColorType : uint8_t
	{
		None = 0,
		LocationMarkerEnemyColor = 1,
		EGPMarkerColorType_MAX = 2,
	};

	// Enum GPGameplay.EMarkingReceiver
	// NumValues: 0x0007
	enum class EMarkingReceiver : uint8_t
	{
		None = 0,
		SelfMarkingReceiver = 1,
		TeamMarkingReceiver = 2,
		CampMarkingReceiver = 3,
		TeamLeaderMarkingReceiver = 4,
		CommanderMarkingReceiver = 5,
		EMarkingReceiver_MAX = 6,
	};

	// Enum GPGameplay.ELowAmmoBubbleSourceType
	// NumValues: 0x0003
	enum class ELowAmmoBubbleSourceType : uint8_t
	{
		None = 0,
		AmmoPack = 1,
		ELowAmmoBubbleSourceType_MAX = 2,
	};

	// Enum GPGameplay.ELowHealthBubbleSourceType
	// NumValues: 0x0003
	enum class ELowHealthBubbleSourceType : uint8_t
	{
		None = 0,
		HealthPack = 1,
		ELowHealthBubbleSourceType_MAX = 2,
	};

	// Enum GPGameplay.EAutoShowBubbleSourceType
	// NumValues: 0x0005
	enum class EAutoShowBubbleSourceType : uint8_t
	{
		None = 0,
		SupportPack = 1,
		SupportBox = 2,
		MedicalGun = 3,
		EAutoShowBubbleSourceType_MAX = 4,
	};

	// Enum GPGameplay.EMarkingChatType
	// NumValues: 0x001C
	enum class EMarkingChatType : uint8_t
	{
		Default = 0,
		Location_Normal = 1,
		Location_Enemy = 2,
		Location_Attack = 3,
		Location_Defend = 4,
		Location_BeCareful = 5,
		Item_CommonItem = 6,
		Item_LootingItem = 7,
		Item_Container = 8,
		Item_DyingTeammate = 9,
		Item_DeadBody = 10,
		Item_Weapon = 11,
		Item_EngineerSonicTrap = 12,
		Item_Vehicle = 13,
		Item_TacticalEquip = 14,
		Item_PendingDeathCharacter = 15,
		Item_SectorAnchor = 16,
		Item_MandelBrickInteractor = 17,
		Item_MandelBrickDecipherDevice = 18,
		CancelMarking = 19,
		ReplyRescue = 20,
		Evacuation = 21,
		SafeBox = 22,
		MandelBrick = 23,
		DecipherStation = 24,
		CallForHelp = 25,
		COUNT = 26,
		EMarkingChatType_MAX = 27,
	};

	// Enum GPGameplay.EMarkingItemType
	// NumValues: 0x0010
	enum class EMarkingItemType : uint8_t
	{
		None = 0,
		CommonItem = 1,
		LootingItem = 2,
		Container = 3,
		DyingTeammate = 4,
		DeadBody = 5,
		Weapon = 6,
		EngineerSonicTrap = 7,
		Vehicle = 8,
		TacticalEquip = 9,
		PendingDeathCharacter = 10,
		SectorAnchor = 11,
		MandelBrickInteractor = 12,
		MandelBrickDecipherDevice = 13,
		COUNT = 14,
		EMarkingItemType_MAX = 15,
	};

	// Enum GPGameplay.EMarkingLocationType
	// NumValues: 0x0008
	enum class EMarkingLocationType : uint8_t
	{
		None = 0,
		NormalLocation = 1,
		Enemy = 2,
		Attack = 3,
		Defend = 4,
		BeCareful = 5,
		COUNT = 6,
		EMarkingLocationType_MAX = 7,
	};

	// Enum GPGameplay.EGameMarkFeature
	// NumValues: 0x0006
	enum class EGameMarkFeature : uint8_t
	{
		UpdateDistance = 1,
		UpdateHasCoverBetween = 2,
		UpdateHasAimed = 4,
		UpdateHasAimedByCircle = 8,
		UpdateScaleWithDistance = 16,
		EGameMarkFeature_MAX = 17,
	};

	// Enum GPGameplay.ETacticalMarkingType
	// NumValues: 0x000C
	enum class ETacticalMarkingType : uint8_t
	{
		None = 0,
		TacticalMarking_Attack = 1,
		TacticalMarking_Defense = 2,
		TacticalMarking_GoAheadThere = 3,
		TacticalMarking_VehicleGoAheadThere = 4,
		TacticalMarking_AttentionEnemy = 5,
		TacticalMarking_AttentionVehicle = 6,
		TacticalMarking_RequestHelp = 7,
		TacticalMarking_RequestRebornFlag = 8,
		TacticalMarking_RequestAttention = 9,
		TacticalMarking_RequestAttack = 10,
		ETacticalMarkingType_MAX = 11,
	};

	// Enum GPGameplay.EInteractorMarkerType
	// NumValues: 0x000B
	enum class EInteractorMarkerType : uint8_t
	{
		None = 0,
		Interactor_SceneAmmoBox = 1,
		Interactor_Fortification = 2,
		Interactor_AutoFortification_FixedWeaponAAMarker = 3,
		Interactor_AutoFortification_FixedWeaponMachineGunMarker = 4,
		Interactor_AutoFortification_FixedWeaponShoreMarker = 5,
		Interactor_EggPortalDoor = 6,
		Interactor_RecoveryMarker = 7,
		Interactor_AirVehicleRecoveryMarker = 8,
		Interactor_EggGoldBirdNest = 9,
		EInteractorMarkerType_MAX = 10,
	};

	// Enum GPGameplay.EMarkingMarkerType
	// NumValues: 0x0004
	enum class EMarkingMarkerType : uint8_t
	{
		None = 0,
		PlayerMarker_Location = 1,
		PlayerMarker_Item = 2,
		EMarkingMarkerType_MAX = 3,
	};

	// Enum GPGameplay.EMapMarkerType
	// NumValues: 0x0014
	enum class EMapMarkerType : uint8_t
	{
		None = 0,
		MapMarkerNormal = 1,
		Chat_Normal = 2,
		Chat_Item = 3,
		MapMarkerPlayerExit = 4,
		MapMarkerPlayerExitTrigger = 5,
		MapMarkerDoor = 6,
		MapMarkerQuest = 7,
		MapMarkerPOI = 8,
		MapMarkerShopStation = 9,
		MapMarkerHighValueBox = 10,
		MapMarkerContractQuest = 11,
		MapMarkerContractObjection = 12,
		MapMarkerWeaponBlueprintStation = 13,
		MapMarkerSectorAnchor = 14,
		MapMarkerScouter = 15,
		MapMarkerIronGauze = 16,
		CommanderMarking = 17,
		MapMarkerIconDisposalBomb = 18,
		EMapMarkerType_MAX = 19,
	};

	// Enum GPGameplay.EQuestMarkerMarkerType
	// NumValues: 0x001E
	enum class EQuestMarkerMarkerType : uint8_t
	{
		None = 0,
		Arrive = 1,
		Destroy = 2,
		Protect = 3,
		ProtectWithHP = 4,
		Arrive_Optional = 5,
		Destroy_Optional = 6,
		Protect_Optional = 7,
		ProtectWithHP_Optional = 8,
		NPCTalk = 9,
		TargetTrack = 10,
		NPCTrigger = 11,
		RPGTrack = 12,
		Vehicle = 13,
		Hostage = 14,
		MarkerNarrow = 15,
		AmmoBox = 16,
		EliteAI = 17,
		InteractiveReading = 18,
		InteractGame = 19,
		Raid_ValkyrieVehicle = 20,
		NPCTeamMate = 21,
		SOLContractKill = 22,
		SOLContractArrive = 23,
		SOLContractInteract = 24,
		SOLContractManning = 25,
		SOLMissionKill = 26,
		SOLMissionArrive = 27,
		SOLMissionInteract = 28,
		EQuestMarkerMarkerType_MAX = 29,
	};

	// Enum GPGameplay.ESOLGameModeMarkerType
	// NumValues: 0x0006
	enum class ESOLGameModeMarkerType : uint8_t
	{
		None = 0,
		DoorMarker = 1,
		CountDownReleaseMarker = 2,
		C4BombMarker = 3,
		JailBreakDeadBodyMarker = 4,
		ESOLGameModeMarkerType_MAX = 5,
	};

	// Enum GPGameplay.EBattleFieldGameModeMarkerType
	// NumValues: 0x0008
	enum class EBattleFieldGameModeMarkerType : uint8_t
	{
		None = 0,
		SectorAnchorMarker = 1,
		TransferMarker = 2,
		SupportSkillMarker = 3,
		BattleFieldCampSectorMarker = 4,
		CaptureFlagAnchorMarker = 5,
		CaptureFlagMarker = 6,
		EBattleFieldGameModeMarkerType_MAX = 7,
	};

	// Enum GPGameplay.ETacticalEquipmentMarkerType
	// NumValues: 0x001F
	enum class ETacticalEquipmentMarkerType : uint8_t
	{
		None = 0,
		CommonTacticalEquipmentMarker = 1,
		RebornFlagMarker = 2,
		VehicleRebornFlagMarker = 3,
		AmmoBoxMarker = 4,
		SonicTrapMarker = 5,
		GunnerRobotMarker = 6,
		HealBoxMarker = 7,
		ADSMarker = 8,
		RecoveryMarker = 9,
		DeadBodyAmmoBoxMarker = 10,
		ThrowBlocking = 11,
		SceneAmmoBoxMarker = 12,
		NetSpider = 13,
		SentrySpider = 14,
		SentryHive = 15,
		IntelligentSmoke = 16,
		StingMissleMarker = 17,
		SupportWeaponMarker = 18,
		LaserPointerMarker = 19,
		LaserPointerReciverMarker = 20,
		Detector = 21,
		RankSkillRebornFlagMarker = 22,
		SupportPackTargetMarker = 23,
		AutiTankMine = 24,
		ClaymoreMine = 25,
		BarbedWire = 26,
		RopeRoot = 27,
		BionicBirdMarker = 28,
		WireGuidedMarker = 29,
		ETacticalEquipmentMarkerType_MAX = 30,
	};

	// Enum GPGameplay.EVehicleMarkerType
	// NumValues: 0x0004
	enum class EVehicleMarkerType : uint8_t
	{
		None = 0,
		CommonVehicleMarker = 1,
		OBCommonVehicleMarker = 2,
		EVehicleMarkerType_MAX = 3,
	};

	// Enum GPGameplay.ESceneWeaponMarkerType
	// NumValues: 0x0009
	enum class ESceneWeaponMarkerType : uint8_t
	{
		None = 0,
		CommonSceneWeaponMarker = 1,
		FixedWeaponAAMarker = 2,
		FixedWeaponMachineGunMarker = 3,
		FixedWeaponShoreMarker = 4,
		AutoFortification_FixedWeaponAAMarker = 5,
		AutoFortification_FixedWeaponMachineGunMarker = 6,
		AutoFortification_FixedWeaponShoreMarker = 7,
		ESceneWeaponMarkerType_MAX = 8,
	};

	// Enum GPGameplay.EEnemyCharacterMarkerType
	// NumValues: 0x000B
	enum class EEnemyCharacterMarkerType : uint8_t
	{
		None = 0,
		RevealMarker = 1,
		AIBaseMarker = 2,
		AIWarnMarker = 3,
		AimedEnemyPlayerMarker = 4,
		AimedAIMarker = 5,
		EnemyEffectMarker = 6,
		FocusedEnemyMarker = 7,
		KillCamSelfMarker = 8,
		KnifeDroneLockEnemyMarker = 9,
		EEnemyCharacterMarkerType_MAX = 10,
	};

	// Enum GPGameplay.EFriendlyCharacterMarkerType
	// NumValues: 0x000C
	enum class EFriendlyCharacterMarkerType : uint8_t
	{
		None = 0,
		FriendlyMarker = 1,
		ImpendingDeathMarker = 2,
		DeathMarker = 3,
		OBFriendlyMarker = 4,
		OBImpendingDeathMarker = 5,
		OBDeathMarker = 6,
		BattleFieldOBFriendlyMarker = 7,
		BattleFieldOBImpendingDeathMarker = 8,
		BattleFieldOBDeathMarker = 9,
		OBAIMarker = 10,
		EFriendlyCharacterMarkerType_MAX = 11,
	};

	// Enum GPGameplay.EGPMarkerType
	// NumValues: 0x0076
	enum class EGPMarkerType : uint32
	{
		None = 0,
		FriendlyMarker = 1,
		ImpendingDeathMarker = 2,
		DeathMarker = 3,
		OBFriendlyMarker = 4,
		OBImpendingDeathMarker = 5,
		OBDeathMarker = 6,
		BattleFieldOBFriendlyMarker = 7,
		BattleFieldOBImpendingDeathMarker = 8,
		BattleFieldOBDeathMarker = 9,
		OBAIMarker = 10,
		RevealMarker = 257,
		AIBaseMarker = 258,
		AIWarnMarker = 259,
		AimedEnemyPlayerMarker = 260,
		AimedAIMarker = 261,
		EnemyEffectMarker = 262,
		FocusedEnemyMarker = 263,
		KillCamSelfMarker = 264,
		KnifeDroneLockEnemyMarker = 265,
		CommonSceneWeaponMarker = 513,
		FixedWeaponAAMarker = 514,
		FixedWeaponMachineGunMarker = 515,
		FixedWeaponShoreMarker = 516,
		CommonVehicleMarker = 769,
		OBCommonVehicleMarker = 770,
		CommonTacticalEquipmentMarker = 1025,
		RebornFlagMarker = 1026,
		VehicleRebornFlagMarker = 1027,
		AmmoBoxMarker = 1028,
		SonicTrapMarker = 1029,
		GunnerRobotMarker = 1030,
		HealBoxMarker = 1031,
		ADSMarker = 1032,
		RecoveryMarker = 1033,
		DeadBodyAmmoBoxMarker = 1034,
		ThrowBlocking = 1035,
		SceneAmmoBoxMarker = 1036,
		StingMissleMarker = 1037,
		SupportWeaponMarker = 1038,
		LaserPointerMarker = 1039,
		LaserPointerReciverMarker = 1040,
		Detector = 1041,
		RankSkillRebornFlagMarker = 1042,
		SupportPackTargetMarker = 1043,
		AutiTankMine = 1044,
		ClaymoreMine = 1045,
		BarbedWire = 1046,
		BionicBirdMarker = 1047,
		SectorAnchorMarker = 1281,
		TransferMarker = 1282,
		SupportSkillMarker = 1283,
		BattleFieldCampSectorMarker = 1284,
		CaptureFlagAnchorMarker = 1285,
		CaptureFlagMarker = 1286,
		DoorMarker = 1537,
		CountDownReleaseMarker = 1538,
		Arrive = 1793,
		Destroy = 1794,
		Protect = 1795,
		ProtectWithHP = 1796,
		Arrive_Optional = 1797,
		Destroy_Optional = 1798,
		Protect_Optional = 1799,
		ProtectWithHP_Optional = 1800,
		NPCTalk = 1801,
		TargetTrack = 1802,
		NPCTrigger = 1803,
		RPGTrack = 1804,
		Vehicle = 1805,
		Hostage = 1806,
		MarkerNarrow = 1807,
		AmmoBox = 1808,
		EliteAI = 1809,
		InteractiveReading = 1810,
		InteractGame = 1811,
		Raid_ValkyrieVehicle = 1812,
		NPCTeamMate = 1813,
		SOLContractKill = 1814,
		SOLContractArrive = 1815,
		SOLContractInteract = 1816,
		SOLContractManning = 1817,
		SOLMissionKill = 1818,
		SOLMissionArrive = 1819,
		SOLMissionInteract = 1820,
		MapMarkerNormal = 2049,
		Chat_Normal = 2050,
		Chat_Item = 2051,
		MapMarkerPlayerExit = 2052,
		MapMarkerPlayerExitTrigger = 2053,
		MapMarkerDoor = 2054,
		MapMarkerQuest = 2055,
		MapMarkerPOI = 2056,
		MapMarkerShopStation = 2057,
		MapMarkerHighValueBox = 2058,
		MapMarkerContractQuest = 2059,
		MapMarkerContractObjection = 2060,
		MapMarkerWeaponBlueprintStation = 2061,
		MapMarkerSectorAnchor = 2062,
		MapMarkerScouter = 2063,
		MapMarkerIronGauze = 2064,
		CommanderMarking = 2065,
		PlayerMarker_Location = 2305,
		PlayerMarker_Item = 2306,
		Interactor_SceneAmmoBox = 2561,
		Interactor_Fortification = 2562,
		TacticalMarking_Attack = 2817,
		TacticalMarking_Defense = 2818,
		TacticalMarking_GoAheadThere = 2819,
		TacticalMarking_VehicleGoAheadThere = 2820,
		TacticalMarking_AttentionEnemy = 2821,
		TacticalMarking_AttentionVehicle = 2822,
		TacticalMarking_RequestHelp = 2823,
		TacticalMarking_RequestRebornFlag = 2824,
		TacticalMarking_RequestAttention = 2825,
		TacticalMarking_RequestAttack = 2826,
		MapMarkerIconDisposalBomb = 2827,
		EGPMarkerType_MAX = 2828,
	};

	// Enum GPGameplay.EMarkerRefreshFrequencyLevel
	// NumValues: 0x0006
	enum class EMarkerRefreshFrequencyLevel : uint8_t
	{
		EveryFrame = 0,
		SuperHighFrequency = 1,
		HighFrequency = 2,
		MidFrequency = 3,
		LowFrequency = 4,
		EMarkerRefreshFrequencyLevel_MAX = 5,
	};

	// Enum GPGameplay.EGPMarkerViewStatus
	// NumValues: 0x0003
	enum class EGPMarkerViewStatus : uint8_t
	{
		PendingCreate = 0,
		Created = 1,
		EGPMarkerViewStatus_MAX = 2,
	};

	// Enum GPGameplay.EGPMarkedActorStatus
	// NumValues: 0x0004
	enum class EGPMarkedActorStatus : uint8_t
	{
		Normal = 0,
		Clipped = 1,
		Destroyed = 2,
		EGPMarkedActorStatus_MAX = 3,
	};

	// Enum GPGameplay.EMarkerUIWigetType
	// NumValues: 0x0007
	enum class EMarkerUIWigetType : uint8_t
	{
		None = 0,
		DistanceText = 1,
		NameText = 2,
		Bar = 4,
		Icon = 8,
		All = 15,
		EMarkerUIWigetType_MAX = 16,
	};

	// Enum GPGameplay.ERevealMarkerReason
	// NumValues: 0x0007
	enum class ERevealMarkerReason : uint8_t
	{
		None = 0,
		Resident = 1,
		AimReveal = 2,
		FireReveal = 3,
		MarkingReveal = 4,
		LockReveal = 5,
		ERevealMarkerReason_MAX = 6,
	};

	// Enum GPGameplay.ECharacterMarkerState
	// NumValues: 0x0006
	enum class ECharacterMarkerState : uint8_t
	{
		None = 0,
		Alive = 1,
		PendingDeath = 2,
		FirstDeath = 3,
		Death = 4,
		ECharacterMarkerState_MAX = 5,
	};

	// Enum GPGameplay.EQuickChatMarkingItemType
	// NumValues: 0x0007
	enum class EQuickChatMarkingItemType : uint8_t
	{
		None = 0,
		ThankYou = 1,
		NeedMedic = 2,
		NeedRepair = 3,
		NeedMunitions = 4,
		NeedVehicle = 5,
		EQuickChatMarkingItemType_MAX = 6,
	};

	// Enum GPGameplay.MarkType
	// NumValues: 0x0002
	enum class EMarkType : uint8_t
	{
		CHARACTER = 0,
		MarkType_MAX = 1,
	};

	// Enum GPGameplay.ENetworkNotifyPriority
	// NumValues: 0x000D
	enum class ENetworkNotifyPriority : uint8_t
	{
		NetworkIdentityNotifyPriority_NoUse = 0,
		NetworkIdentityNotifyPriority_Default = 101,
		NetworkIdentityNotifyPriority_Blackboard = 50,
		NetworkIdentityNotifyPriority_ActorRoot = 100,
		NetworkIdentityNotifyPriority_First = 110,
		NetworkIdentityNotifyPriority_Second = 120,
		NetworkIdentityNotifyPriority_Third = 130,
		NetworkIdentityNotifyPriority_Fourth = 140,
		NetworkIdentityNotifyPriority_Fifth = 150,
		NetworkIdentityNotifyPriority_Sixth = 160,
		NetworkIdentityNotifyPriority_Seventh = 170,
		NetworkIdentityNotifyPriority_Eighth = 180,
		NetworkIdentityNotifyPriority_MAX = 181,
	};

	// Enum GPGameplay.ENotifyTeammatesType
	// NumValues: 0x0004
	enum class ENotifyTeammatesType : uint8_t
	{
		ENotify_None = 0,
		ENotify_SkillReady = 1,
		ENotify_NumMax = 2,
		ENotify_MAX = 3,
	};

	// Enum GPGameplay.EOutLineScreenEffectStencil
	// NumValues: 0x0010
	enum class EOutLineScreenEffectStencil : uint8_t
	{
		None = 0,
		OutLineRed_3P = 30,
		OutLineWhite = 31,
		OutLineGreen = 32,
		OutLineBlue = 33,
		OutLineAI = 34,
		OutLineRed_1P = 35,
		OutLineLocking = 36,
		OutLineLockComplete = 37,
		OutLineGreen_SupportEffect = 38,
		OutLineYellow_Low = 40,
		OutLineYellow_High = 41,
		OutLineGreen_OB = 42,
		OutLineRed_OB = 43,
		OutLineOrange = 44,
		EOutLineScreenEffectStencil_MAX = 45,
	};

	// Enum GPGameplay.EAbilityItemOutLineType
	// NumValues: 0x0004
	enum class EAbilityItemOutLineType : uint32
	{
		None = 0,
		OnlyTeamate = 1,
		AllCamp = 2,
		EAbilityItemOutLineType_MAX = 3,
	};

	// Enum GPGameplay.EOutLineEffectType
	// NumValues: 0x001A
	enum class EOutLineEffectType : uint32
	{
		OutLineType_None = 0,
		OutLineType_ProxSensor = 1,
		OutLineType_ArrowMark = 2,
		OutLineType_MedicGun = 4,
		OutLineType_MedicGunHit = 8,
		OutLineType_SupportEffect = 16,
		OutLineType_DyingLockEnemy = 32,
		OutLineType_Breakthrough_Defender = 64,
		OutLineType_DyingShowTeammateCanRescueSelf = 128,
		OutLineType_DyingShowCampMedicCanRescueSelf = 256,
		OutLineType_Locking = 512,
		OutLineType_LockComplete = 1024,
		OutLineType_LockFire = 2048,
		OutLineType_OnlyMarker = 4096,
		OutLineType_SOL_OB_Teammate = 8192,
		OutLineType_SOL_OB_Enemy = 16384,
		OutLineType_SOL_OB_AI = 32768,
		OutLineType_SOL_OB_FreeCamera = 65536,
		OutLineType_Breakthrough_OB_Attacker = 131072,
		OutLineType_OBorReplay = 262144,
		OutLineType_Replay_Self = 524288,
		OutLineType_Replay_Teammate = 1048576,
		OutLineType_Breakthrough_OB_Defender = 2097152,
		OutLineType_SpiderSkill = 4194304,
		OutLineType_C103ButterPassiveSkill = 8388608,
		OutLineType_MAX = 8388609,
	};

	// Enum GPGameplay.EPlayerParachutePhaseType
	// NumValues: 0x0004
	enum class EPlayerParachutePhaseType : uint8_t
	{
		None = 0,
		Parachute = 1,
		Glide = 2,
		EPlayerParachutePhaseType_MAX = 3,
	};

	// Enum GPGameplay.EParachutePhaseType
	// NumValues: 0x0004
	enum class EParachutePhaseType : uint8_t
	{
		EParachutePhase_None = 0,
		EParachutePhase_Flying = 1,
		EParachutePhase_Landing = 2,
		EParachutePhase_MAX = 3,
	};

	// Enum GPGameplay.EPassiveMoveBodyType
	// NumValues: 0x0004
	enum class EPassiveMoveBodyType : uint8_t
	{
		PassiveMoveBodyTypeStand = 0,
		PassiveMoveBodyTypeCrouch = 1,
		PassiveMoveBodyTypeProne = 2,
		EPassiveMoveBodyType_MAX = 3,
	};

	// Enum GPGameplay.EPassiveMoveLogicType
	// NumValues: 0x0003
	enum class EPassiveMoveLogicType : uint8_t
	{
		PassiveMoveLogic_Default = 0,
		PassiveMoveLogic_Rope = 1,
		PassiveMoveLogic_MAX = 2,
	};

	// Enum GPGameplay.EPassiveMoveType
	// NumValues: 0x0004
	enum class EPassiveMoveType : uint8_t
	{
		PassiveMove_None = 0,
		PassiveMove_Target = 1,
		PassiveMove_Path = 2,
		PassiveMove_MAX = 3,
	};

	// Enum GPGameplay.EGPPathFollowStatus
	// NumValues: 0x0005
	enum class EGPPathFollowStatus : uint8_t
	{
		Init = 0,
		Play = 1,
		Pause = 2,
		Stop = 3,
		EGPPathFollowStatus_MAX = 4,
	};

	// Enum GPGameplay.ECameraModifier
	// NumValues: 0x0017
	enum class ECameraModifier : uint8_t
	{
		ECM_Default = 0,
		ECM_Reborn = 1,
		ECM_Redeploy = 2,
		ECM_GunSway = 3,
		ECM_AssaultSpeedUp = 4,
		ECM_Fire = 5,
		ECM_Bleeding = 6,
		ECM_Sprint = 7,
		ECM_CameraShake = 8,
		ECM_FPPFocusActor = 9,
		ECM_AssaultShock = 10,
		ECM_BeHit = 11,
		ECM_WeaponRecoil = 12,
		ECM_InVehicle = 13,
		ECM_ProneImpact = 14,
		ECM_FPPCameraOperate = 15,
		ECM_JoggleCamera = 16,
		ECM_ExplosionBeHit = 17,
		ECM_ViewRotateSpeedLimit = 18,
		ECM_AssaultSpeedUpMobile = 19,
		ECM_AISpecialHit = 20,
		ECM_FOVEffect = 21,
		ECM_MAX = 22,
	};

	// Enum GPGameplay.EDefaultFOVRenderReason
	// NumValues: 0x000B
	enum class EDefaultFOVRenderReason : uint8_t
	{
		EDFRR_Default = 0,
		EDFRR_MachiGun = 1,
		EDFRR_DriveCar = 2,
		EDFRR_ClimbLadder = 3,
		EDFRR_Telescope = 4,
		EDFRR_StarApp = 5,
		EDFRR_GetRopeDown = 6,
		EDFRR_Parachute = 7,
		EDFRR_Interact = 8,
		EDFRR_CrocodileBite = 9,
		EDFRR_Max = 10,
	};

	// Enum GPGameplay.EPOVModifyOption
	// NumValues: 0x0004
	enum class EPOVModifyOption : uint8_t
	{
		DoNotModify = 0,
		DefaultValue = 1,
		SetValue = 2,
		EPOVModifyOption_MAX = 3,
	};

	// Enum GPGameplay.ECameraRotationType
	// NumValues: 0x0003
	enum class ECameraRotationType : uint8_t
	{
		CameraRot_Final = 0,
		CameraRot_WeaponTrace = 1,
		CameraRot_MAX = 2,
	};

	// Enum GPGameplay.EFovAdjustMode
	// NumValues: 0x0005
	enum class EFovAdjustMode : uint8_t
	{
		FovMode_FixY = 0,
		FovMode_FixX = 1,
		FovMode_FixShortSide = 2,
		FovMode_FixLongSide = 3,
		FovMode_MAX = 4,
	};

	// Enum GPGameplay.ECameraSmoothDirection
	// NumValues: 0x0004
	enum class ECameraSmoothDirection : uint8_t
	{
		CameraSmoothDirection_None = 0,
		CameraSmoothDirection_OnlyZ = 1,
		CameraSmoothDirection_Full = 2,
		CameraSmoothDirection_MAX = 3,
	};

	// Enum GPGameplay.ECameraSmoothType
	// NumValues: 0x0007
	enum class ECameraSmoothType : uint8_t
	{
		CameraSmoothType_None = 0,
		CameraSmoothType_Crouch = 1,
		CameraSmoothType_Prone = 2,
		CameraSmoothType_QuickCrouch = 3,
		CameraSmoothType_Parachute = 4,
		CameraSmoothType_Climb = 5,
		CameraSmoothType_MAX = 6,
	};

	// Enum GPGameplay.EGPMGameSceneType
	// NumValues: 0x0008
	enum class EGPMGameSceneType : uint8_t
	{
		None = 0,
		FireShoot = 1,
		KillPlayer = 2,
		GetHighValueItem = 3,
		KillBoss = 4,
		SOLSettlement = 5,
		MPVictory = 6,
		EGPMGameSceneType_MAX = 7,
	};

	// Enum GPGameplay.EPlayerMarkerScreenPosType
	// NumValues: 0x0005
	enum class EPlayerMarkerScreenPosType : uint8_t
	{
		OnAim = 0,
		Inner = 1,
		Middle = 2,
		Outer = 3,
		EPlayerMarkerScreenPosType_MAX = 4,
	};

	// Enum GPGameplay.EPlayerPVSConnectionVisibleReason
	// NumValues: 0x0004
	enum class EPlayerPVSConnectionVisibleReason : uint8_t
	{
		None = 0,
		EPlayerPVSConnectionVisible_OutlineEffect = 1,
		EPlayerPVSConnectionVisible_Tracing = 2,
		EPlayerPVSConnectionVisibleReason_MAX = 3,
	};

	// Enum GPGameplay.EBattleFieldForcesType
	// NumValues: 0x0004
	enum class EBattleFieldForcesType : uint8_t
	{
		None = 0,
		Forces_Haavk = 1,
		Forces_GTI = 2,
		EBattleFieldForcesType_MAX = 3,
	};

	// Enum GPGameplay.EPlayerState
	// NumValues: 0x000A
	enum class EPlayerState : uint8_t
	{
		PlayerState_NONE = 0,
		PlayerState_Normal = 1,
		PlayerState_Airplane = 2,
		PlayerState_Air = 3,
		PlayerState_Drive = 4,
		PlayerState_Weak = 5,
		PlayerState_OffLine = 6,
		PlayerState_Dead = 7,
		PlayerState_Spectating = 8,
		PlayerState_MAX = 9,
	};

	// Enum GPGameplay.EPlayerGender
	// NumValues: 0x0006
	enum class EPlayerGender : uint8_t
	{
		PlayerGender_None = 0,
		PlayerGender_Male = 1,
		PlayerGender_Female = 2,
		PlayerGender_Unknow = 3,
		PlayerGender_Hide = 4,
		PlayerGender_Max = 5,
	};

	// Enum GPGameplay.ECharacterQTEState4
	// NumValues: 0x0004
	enum class ECharacterQTEState4 : uint8_t
	{
		QTEState_None = 0,
		QTEState_FastMelee = 1,
		QTEState_Assassinate = 2,
		QTEState_MAX = 3,
	};

	// Enum GPGameplay.EHitPartType
	// NumValues: 0x0007
	enum class EHitPartType : uint8_t
	{
		Body = 0,
		Head = 1,
		LeftShoulder = 2,
		RightShoulder = 3,
		LeftLeg = 4,
		RightLeg = 5,
		EHitPartType_MAX = 6,
	};

	// Enum GPGameplay.ERagdollStopReason
	// NumValues: 0x000D
	enum class ERagdollStopReason : uint8_t
	{
		ReplicateStop = 0,
		ClearRagdoll = 1,
		DropBodyCheck = 2,
		TickCheck = 3,
		MovableBase = 4,
		FallbackOverTime = 5,
		BeginOverlap = 6,
		CheckHipsVerticalDist = 7,
		HipsStable = 8,
		ClientPreStop = 9,
		OverTime = 10,
		ClientRPC = 11,
		ERagdollStopReason_MAX = 12,
	};

	// Enum GPGameplay.ERagdollAnimType
	// NumValues: 0x0005
	enum class ERagdollAnimType : uint8_t
	{
		NormalDeath = 0,
		DropBody = 1,
		ToImpendingDeath = 2,
		VehicleKill = 3,
		ERagdollAnimType_MAX = 4,
	};

	// Enum GPGameplay.ERagdollConstraintAnimType
	// NumValues: 0x0003
	enum class ERagdollConstraintAnimType : uint8_t
	{
		Blend = 0,
		Fixed = 1,
		ERagdollConstraintAnimType_MAX = 2,
	};

	// Enum GPGameplay.EGPAIDeathWeaponType
	// NumValues: 0x0004
	enum class EGPAIDeathWeaponType : uint8_t
	{
		None = 0,
		Medium = 1,
		Heavy = 2,
		EGPAIDeathWeaponType_MAX = 3,
	};

	// Enum GPGameplay.EWeaponDeathType
	// NumValues: 0x0004
	enum class EWeaponDeathType : uint8_t
	{
		None = 0,
		Medium = 1,
		Heavy = 2,
		EWeaponDeathType_MAX = 3,
	};

	// Enum GPGameplay.ERushFromType
	// NumValues: 0x0003
	enum class ERushFromType : uint8_t
	{
		Skill = 0,
		BlastShield = 1,
		ERushFromType_MAX = 2,
	};

	// Enum GPGameplay.ESHMoveMode
	// NumValues: 0x0007
	enum class ESHMoveMode : uint8_t
	{
		Stand = 0,
		Crouch = 1,
		Prone = 2,
		Sprint = 3,
		SilentWalk = 4,
		InAir = 5,
		ESHMoveMode_MAX = 6,
	};

	// Enum GPGameplay.EFSHForbidReason
	// NumValues: 0x0006
	enum class EFSHForbidReason : uint8_t
	{
		EFR_Default = 0,
		EFR_Sprint = 1,
		EFR_Jump = 2,
		EFR_Prone = 3,
		ForbidReasonMAX = 4,
		EFSHForbidReason_MAX = 5,
	};

	// Enum GPGameplay.ESHMovementState
	// NumValues: 0x0004
	enum class ESHMovementState : uint8_t
	{
		None = 0,
		Grounded = 1,
		InAir = 2,
		ESHMovementState_MAX = 3,
	};

	// Enum GPGameplay.ESHPlayerMoveMode
	// NumValues: 0x0006
	enum class ESHPlayerMoveMode : uint8_t
	{
		None = 0,
		StandStill = 1,
		Walk = 2,
		Run = 3,
		Sprint = 4,
		ESHPlayerMoveMode_MAX = 5,
	};

	// Enum GPGameplay.EGPHudDataType
	// NumValues: 0x0006
	enum class EGPHudDataType : uint8_t
	{
		None = 0,
		LocAndRot = 1,
		TeamCharacterHealth = 2,
		VehicleInfo = 3,
		SceneWeaponInfo = 4,
		EGPHudDataType_MAX = 5,
	};

	// Enum GPGameplay.EGPSceneActorType
	// NumValues: 0x0005
	enum class EGPSceneActorType : uint8_t
	{
		SA_NONE = 0,
		SA_Character = 1,
		SA_Vehicle = 2,
		SA_SceneWeapon = 3,
		SA_MAX = 4,
	};

	// Enum GPGameplay.EGPSceneActorStateType
	// NumValues: 0x0004
	enum class EGPSceneActorStateType : uint8_t
	{
		E_BeginPlay = 0,
		E_EndPlay = 1,
		E_Relevancy = 2,
		E_MAX = 3,
	};

	// Enum GPGameplay.EGPHudDataUpdateFrequency
	// NumValues: 0x0005
	enum class EGPHudDataUpdateFrequency : uint8_t
	{
		Freeze = 0,
		LowFrequency = 1,
		MidFrequency = 2,
		HighFrequency = 3,
		EGPHudDataUpdateFrequency_MAX = 4,
	};

	// Enum GPGameplay.ECustomPrimitiveDataFloatDefine
	// NumValues: 0x0005
	enum class ECustomPrimitiveDataFloatDefine : uint8_t
	{
		CPD_BaseColorFator = 0,
		CPD_EmissiveFator = 1,
		CPD_DistanceOffset = 2,
		CPD_Blank3 = 3,
		CPD_MAX = 4,
	};

	// Enum GPGameplay.ESkeletalMeshAnimUROActorType
	// NumValues: 0x0007
	enum class ESkeletalMeshAnimUROActorType : uint8_t
	{
		Normal = 0,
		Player = 1,
		AI = 2,
		Weapon = 3,
		Equipment = 4,
		Breakable = 5,
		ESkeletalMeshAnimUROActorType_MAX = 6,
	};

	// Enum GPGameplay.EDataFlowType
	// NumValues: 0x000D
	enum class EDataFlowType : uint8_t
	{
		None = 0,
		BeDamaged = 1,
		BeHealed = 2,
		BeKnocked = 3,
		MoveState = 4,
		BeBuffed = 5,
		BeRemoveBuffed = 6,
		BeDetect = 7,
		Move = 8,
		Sprint = 9,
		Squat = 10,
		Jump = 11,
		EDataFlowType_MAX = 12,
	};

	// Enum GPGameplay.ESkillConflictResolveType
	// NumValues: 0x0007
	enum class ESkillConflictResolveType : uint8_t
	{
		Accept = 0,
		Refuse = 1,
		Break = 2,
		OnlyBreak = 3,
		OnlyUsingBreak = 4,
		ConflictMax = 5,
		ESkillConflictResolveType_MAX = 6,
	};

	// Enum GPGameplay.EAbiltyTemplateAttachMeshMode
	// NumValues: 0x0004
	enum class EAbiltyTemplateAttachMeshMode : uint8_t
	{
		ATTACH_ALL = 0,
		ATTACH_FPP = 1,
		ATTACH_TPP = 2,
		ATTACH_MAX = 3,
	};

	// Enum GPGameplay.EAbilitySpawnState
	// NumValues: 0x0005
	enum class EAbilitySpawnState : uint8_t
	{
		Init = 0,
		Request = 1,
		Done = 2,
		Removed = 3,
		EAbilitySpawnState_MAX = 4,
	};

	// Enum GPGameplay.EAbilityTriggerType
	// NumValues: 0x0007
	enum class EAbilityTriggerType : uint8_t
	{
		None = 0,
		Then = 1,
		Trigger = 2,
		UnTrigger = 3,
		CallEvent = 4,
		Custom = 5,
		EAbilityTriggerType_MAX = 6,
	};

	// Enum GPGameplay.ESkillExcuteState
	// NumValues: 0x0004
	enum class ESkillExcuteState : uint8_t
	{
		EnterState = 1,
		LeaveState = 2,
		InvalidLeaveState = 4,
		ESkillExcuteState_MAX = 5,
	};

	// Enum GPGameplay.EAbilityEnterFlag
	// NumValues: 0x0004
	enum class EAbilityEnterFlag : uint8_t
	{
		CanNotPlay = 0,
		CanPlay = 1,
		NotifyServerEnter = 2,
		EAbilityEnterFlag_MAX = 3,
	};

	// Enum GPGameplay.EAbilityStateFlag
	// NumValues: 0x0005
	enum class EAbilityStateFlag : uint8_t
	{
		RepExcute = 0,
		PredictExcute = 1,
		PredictLocalExcute = 2,
		PredictLocalExcuteAll = 3,
		EAbilityStateFlag_MAX = 4,
	};

	// Enum GPGameplay.ENodeCantPlay
	// NumValues: 0x0003
	enum class ENodeCantPlay : uint8_t
	{
		NoSkillState = 0,
		CharacterDie = 1,
		ENodeCantPlay_MAX = 2,
	};

	// Enum GPGameplay.EAbilityNodeExcuteType
	// NumValues: 0x0008
	enum class EAbilityNodeExcuteType : uint8_t
	{
		Both = 0,
		Server = 1,
		Client = 2,
		Client1P = 3,
		Client3P = 4,
		ServerAndClient1P = 5,
		BothCantPlay = 6,
		EAbilityNodeExcuteType_MAX = 7,
	};

	// Enum GPGameplay.ECharacterSkillType
	// NumValues: 0x0006
	enum class ECharacterSkillType : uint8_t
	{
		None = 0,
		SkillType1 = 1,
		SkillType2 = 2,
		SkillType3 = 3,
		SkillType4 = 4,
		ECharacterSkillType_MAX = 5,
	};

	// Enum GPGameplay.ELoadResourceType
	// NumValues: 0x0007
	enum class ELoadResourceType : uint8_t
	{
		NONE = 0,
		Server = 1,
		Client1P = 2,
		Client3P = 4,
		Server_Client1P = 3,
		Server_Client1P_Client3P = 7,
		ELoadResourceType_MAX = 8,
	};

	// Enum GPGameplay.EAbilitySpawnType
	// NumValues: 0x0005
	enum class EAbilitySpawnType : uint8_t
	{
		NONE = 0,
		Server = 1,
		Client1P = 2,
		Client3P = 4,
		EAbilitySpawnType_MAX = 5,
	};

	// Enum GPGameplay.ESkillWeaponSwitchType
	// NumValues: 0x000A
	enum class ESkillWeaponSwitchType : uint8_t
	{
		Default = 0,
		Quiet = 1,
		Instant = 2,
		GetWeaponQuiet = 3,
		PutWeaponQuiet = 4,
		GetWeaponFast = 5,
		PutWeaponFast = 6,
		GetAndPutWeaponFast = 7,
		PutQuietAndGetWeaponFast = 8,
		ESkillWeaponSwitchType_MAX = 9,
	};

	// Enum GPGameplay.ESkillStateType
	// NumValues: 0x000B
	enum class ESkillStateType : uint8_t
	{
		DoubleHandsSkill = 1,
		LeftHandSkill = 2,
		RightHandSkill = 3,
		LegsSkill = 4,
		SpecialSkill = 5,
		ActionSkill = 6,
		CustomSkill = 7,
		Custom2Skill = 8,
		Custom3Skill = 9,
		SkillState_MAX = 10,
		ESkillStateType_MAX = 11,
	};

	// Enum GPGameplay.ESkillBehaviorPreFilterState
	// NumValues: 0x0004
	enum class ESkillBehaviorPreFilterState : uint8_t
	{
		ESkillBehavior_Failed = 0,
		ESkillBehavior_FailedWithTips = 1,
		ESkillBehavior_Successed = 2,
		ESkillBehavior_MAX = 3,
	};

	// Enum GPGameplay.ESkillNumType
	// NumValues: 0x0004
	enum class ESkillNumType : uint8_t
	{
		UT_Normal = 0,
		UT_Item = 1,
		UT_NoShow = 2,
		UT_MAX = 3,
	};

	// Enum GPGameplay.ESkillUsingType
	// NumValues: 0x000B
	enum class ESkillUsingType : uint8_t
	{
		UT_Normal = 0,
		UT_Normal_Charging = 1,
		UT_Select = 2,
		UT_Rocking = 3,
		UT_Disable_Charging = 4,
		UT_Activate = 5,
		UT_Disable_UseCD = 6,
		UT_Disable_EMP = 7,
		UT_Disable_NoCharging = 8,
		UT_Disable_NoTarget = 9,
		UT_MAX = 10,
	};

	// Enum GPGameplay.ESkillItemUsingType
	// NumValues: 0x0006
	enum class ESkillItemUsingType : uint8_t
	{
		UT_Normal = 0,
		UT_Selected = 1,
		UT_Activate = 2,
		UT_Disable = 3,
		UT_NormalUsing = 4,
		UT_MAX = 5,
	};

	// Enum GPGameplay.ESkillButtonState
	// NumValues: 0x0008
	enum class ESkillButtonState : uint8_t
	{
		ESB_Normal = 0,
		ESB_Cancel = 1,
		ESB_Activate = 2,
		ESB_Disable = 3,
		ESB_Slot1 = 4,
		ESB_Slot2 = 5,
		ESB_Fire = 6,
		ESB_MAX = 7,
	};

	// Enum GPGameplay.ECharacterSkillAbilityMask
	// NumValues: 0x0037
	enum class ECharacterSkillAbilityMask : uint8_t
	{
		None = 0,
		CanMove = 1,
		CanRotate = 2,
		CanCharacterRotate = 3,
		CanCrouch = 4,
		CanProne = 5,
		CanJump = 6,
		CanVault = 7,
		CanReload = 8,
		CanAimOn = 9,
		CanUseItem = 10,
		CanOperate = 11,
		CanLooting = 12,
		CanDetectInteractor = 13,
		CanDetectRescue = 14,
		CanUserChangeXPP = 15,
		CanDiscardOrEquipWeapon = 16,
		CanSwitchHelmetMask = 17,
		PauseSwitchHelmetMask = 18,
		CanFire = 19,
		CanDrive = 20,
		CanPlayTacticalAction = 21,
		CanClimbLadder = 22,
		CanUseTelescope = 23,
		CanChangeWeaponMode = 24,
		CanShowInteractUI = 25,
		CanLean = 26,
		CanBeHit = 27,
		CanUseSkill = 28,
		CanAssassinate = 29,
		CanCarrybody = 30,
		CanParachute = 31,
		CanSlidingTackle = 32,
		CanUseZipline = 33,
		CanAutoChangeClip = 34,
		CanWeaponInspect = 35,
		CanHighValueItemInspect = 36,
		CanWeaponBipodDeploy = 37,
		CanNotBlockFriend = 38,
		CanStandUp = 39,
		CanProneMove = 40,
		CanProneStandUp = 41,
		CanSkillSwtichWeapon = 42,
		CanWeaponBolt = 43,
		CanZoom = 44,
		CanSwitchWeapon = 45,
		CanPlayMarkingAnim = 46,
		CanFirefighting = 47,
		CanApplySpray = 48,
		CanPlayOneHandedGesture = 49,
		CanPlayTwoHandedGesture = 50,
		CanSprint = 51,
		CanBeBreakByOtherSkill = 52,
		All = 53,
		ECharacterSkillAbilityMask_MAX = 54,
	};

	// Enum GPGameplay.EFlowDataType
	// NumValues: 0x0005
	enum class EFlowDataType : uint8_t
	{
		None = 0,
		Props = 1,
		ActiveSKill = 2,
		Passive = 3,
		EFlowDataType_MAX = 4,
	};

	// Enum GPGameplay.ESkillLogicType
	// NumValues: 0x000D
	enum class ESkillLogicType : uint8_t
	{
		None = 0,
		Assault = 1,
		Support = 2,
		Scout = 3,
		Engineer = 4,
		Support101_SkillSmoke = 5,
		Support101_ItemSmoke = 6,
		Support101_Gun = 7,
		Item = 8,
		TestAbility = 9,
		RecycleMine = 10,
		ActivaMine = 11,
		ESkillLogicType_MAX = 12,
	};

	// Enum GPGameplay.ESkillActorEvent
	// NumValues: 0x0006
	enum class ESkillActorEvent : uint8_t
	{
		Idle = 0,
		Fire = 1,
		BeginEquipWeapon = 2,
		EndEquipWeapon = 3,
		WeaponChanged = 4,
		ESkillActorEvent_MAX = 5,
	};

	// Enum GPGameplay.ESkillDragMode
	// NumValues: 0x0002
	enum class ESkillDragMode : uint8_t
	{
		None = 0,
		ESkillDragMode_MAX = 1,
	};

	// Enum GPGameplay.ESkillKeyStatus
	// NumValues: 0x000A
	enum class ESkillKeyStatus : uint8_t
	{
		SKILL_STATUS_UNKNOW = 0,
		SKILL_STATUS_READY = 1,
		SKILL_STATUS_PRECAST = 2,
		SKILL_STATUS_CASTING = 3,
		SKILL_STATUS_AFTERCAST = 4,
		SKILL_STATUS_FINISH = 5,
		SKILL_STATUS_COOLING = 6,
		SKILL_STATUS_CHARGING = 7,
		SKILL_STATUS_PREPARING = 8,
		SKILL_STATUS_MAX = 9,
	};

	// Enum GPGameplay.ESkillRecycleType
	// NumValues: 0x0007
	enum class ESkillRecycleType : uint8_t
	{
		None = 0,
		SuppressionMine = 1,
		AntiTankMine = 2,
		ClaymoreMine = 3,
		SentryHive = 4,
		IntelligentSmoke = 5,
		ESkillRecycleType_MAX = 6,
	};

	// Enum GPGameplay.ESkillInterruptReason
	// NumValues: 0x0003
	enum class ESkillInterruptReason : uint8_t
	{
		None = 0,
		InWater = 1,
		ESkillInterruptReason_MAX = 2,
	};

	// Enum GPGameplay.ESkillUIState
	// NumValues: 0x001C
	enum class ESkillUIState : uint8_t
	{
		UIState_Undefine = 0,
		UIState_Ready = 1,
		UIState_Using = 2,
		UIState_CDing = 3,
		UIState_Disable = 4,
		UIState_Forbit = 5,
		UIState_StateDisable = 6,
		UIState_Score = 7,
		UIState_CampNum = 8,
		UIState_UseNoReady = 9,
		UIState_TemplateNoReady = 10,
		UIState_OtherSkill = 11,
		UIState_Blocked = 12,
		UIState_SwitchWeapon = 13,
		UIState_ZoomWeapon = 14,
		UIState_NoSkill = 15,
		UIState_NoCharacter = 16,
		UIState_TakeDamgeBreak = 17,
		UIState_FireBreak = 18,
		UIState_TeamNum = 19,
		UIState_Sector = 20,
		UIState_LieDownForbidSmoke = 21,
		UIState_UnderWater = 22,
		UIState_OnWater = 23,
		UIState_AirDropVehicle = 24,
		UIState_LimitUse = 25,
		UIState_NoTarget = 26,
		UIState_MAX = 27,
	};

	// Enum GPGameplay.EThreatShapeType
	// NumValues: 0x0003
	enum class EThreatShapeType : uint8_t
	{
		Sphere = 0,
		Box = 1,
		EThreatShapeType_MAX = 2,
	};

	// Enum GPGameplay.EThreatMarkerType
	// NumValues: 0x0003
	enum class EThreatMarkerType : uint8_t
	{
		Origin = 0,
		Screen = 1,
		EThreatMarkerType_MAX = 2,
	};

	// Enum GPGameplay.EThreatCampType
	// NumValues: 0x0005
	enum class EThreatCampType : uint8_t
	{
		Self = 0,
		SameTeam = 1,
		SameCamp = 2,
		Enemy = 3,
		EThreatCampType_MAX = 4,
	};

	// Enum GPGameplay.ESlideBreakType
	// NumValues: 0x0004
	enum class ESlideBreakType : uint8_t
	{
		None = 0,
		SlideBreak_Jump = 1,
		SlideBreak_Crouch = 2,
		ESlideBreakType_MAX = 3,
	};

	// Enum GPGameplay.ECharingSlotState
	// NumValues: 0x0005
	enum class ECharingSlotState : uint8_t
	{
		Normal = 0,
		Counting = 1,
		Pause = 2,
		Disable = 3,
		ECharingSlotState_MAX = 4,
	};

	// Enum GPGameplay.ESoundVisualizationVerticalType
	// NumValues: 0x0004
	enum class ESoundVisualizationVerticalType : uint8_t
	{
		Upper = 0,
		Middle = 1,
		Lower = 2,
		ESoundVisualizationVerticalType_MAX = 3,
	};

	// Enum GPGameplay.EMovementRelatedSpringArmState
	// NumValues: 0x0011
	enum class EMovementRelatedSpringArmState : uint8_t
	{
		ESpringArmState_None = 0,
		ESpringArmState_Default = 1,
		ESpringArmState_Crouch = 2,
		ESpringArmState_Prone = 3,
		ESpringArmState_Swim = 4,
		ESpringArmState_Vault = 5,
		ESpringArmState_SlidingTackle = 6,
		ESpringArmState_Parachute = 7,
		ESpringArmState_FPP = 8,
		ESpringArmState_TPPToFPP = 9,
		ESpringArmState_BeCarryBySomeOne = 10,
		ESpringArmState_LeftLeanPeek = 11,
		ESpringArmState_RightLeanPeek = 12,
		ESpringArmState_NPCTalk = 13,
		ESpringArmState_Error = 14,
		ESpringArmState_Emote = 15,
		ESpringArmState_MAX = 16,
	};

	// Enum GPGameplay.EVoiceOverTriggerType
	// NumValues: 0x0004
	enum class EVoiceOverTriggerType : uint8_t
	{
		None = 0,
		OverlapTrigger = 1,
		InteractTrigger = 2,
		EVoiceOverTriggerType_MAX = 3,
	};

	// Enum GPGameplay.ETacticalActionType
	// NumValues: 0x0005
	enum class ETacticalActionType : uint8_t
	{
		None = 0,
		RESPECT = 1,
		WINGCHUN = 2,
		ROCKPAPERSCISSORS = 3,
		ETacticalActionType_MAX = 4,
	};

	// Enum GPGameplay.EVaultEndMoveType
	// NumValues: 0x0003
	enum class EVaultEndMoveType : uint8_t
	{
		EVaultEndMove_Walking = 0,
		EVaultEndMove_Falling = 1,
		EVaultEndMove_MAX = 2,
	};

	// Enum GPGameplay.EVaultAnimType
	// NumValues: 0x0006
	enum class EVaultAnimType : uint8_t
	{
		EVaultAnim_None = 0,
		EVA_StepOn = 1,
		EVA_Vault = 2,
		EVA_Climb = 3,
		EVA_ClimbSwim = 4,
		EVaultAnimType_MAX = 5,
	};

	// Enum GPGameplay.EObstacleHeightType
	// NumValues: 0x0006
	enum class EObstacleHeightType : uint8_t
	{
		EObstacleHeight_None = 0,
		EObstacleHeight_60 = 1,
		EObstacleHeight_90 = 2,
		EObstacleHeight_140 = 3,
		EObstacleHeight_180 = 4,
		EObstacleHeight_Max = 5,
	};

	// Enum GPGameplay.EClimbVaultFailedReason
	// NumValues: 0x0008
	enum class EClimbVaultFailedReason : uint8_t
	{
		EChoice_None = 0,
		TouchAngle = 1,
		ObstacleHeight = 2,
		ApexPoint = 3,
		ObstacleAbruptSlope = 4,
		ObstacleWidth = 5,
		CollideOverHead = 6,
		EClimbVaultFailedReason_MAX = 7,
	};

	// Enum GPGameplay.EClimbVaultChoice
	// NumValues: 0x0004
	enum class EClimbVaultChoice : uint8_t
	{
		EChoice_None = 0,
		EChoice_Climb = 1,
		EChoice_Vault = 2,
		EChoice_MAX = 3,
	};

	// Enum GPGameplay.EClimbLadderFixTransformType
	// NumValues: 0x0006
	enum class EClimbLadderFixTransformType : uint8_t
	{
		EClimbLadderFix_DownStart = 0,
		EClimbLadderFix_DownEnd = 1,
		EClimbLadderFix_TopStart = 2,
		EClimbLadderFix_TopEnd = 3,
		EClimbLadderFix_Nearly = 4,
		EClimbLadderFix_MAX = 5,
	};

	// Enum GPGameplay.EClimbLadderCheckType
	// NumValues: 0x0009
	enum class EClimbLadderCheckType : uint8_t
	{
		EClimbLadderCheck_None = 0,
		EClimbLadderCheck_DownEnter = 1,
		EClimbLadderCheck_DownExit = 2,
		EClimbLadderCheck_TopEnter = 3,
		EClimbLadderCheck_TopExit = 4,
		EClimbLadderCheck_JumpEnter = 5,
		EClimbLadderCheck_JumpExit = 6,
		EClimbLadderCheck_Cancel = 7,
		EClimbLadderCheck_MAX = 8,
	};

	// Enum GPGameplay.EVehicleSpawnMethod
	// NumValues: 0x0004
	enum class EVehicleSpawnMethod : uint8_t
	{
		EVSM_None = 0,
		EVSM_AirDrop = 1,
		EVSM_Deployment = 2,
		EVSM_MAX = 3,
	};

	// Enum GPGameplay.EVehicleExtraPartType
	// NumValues: 0x0005
	enum class EVehicleExtraPartType : uint8_t
	{
		NONE = 0,
		WEAPON = 1,
		SKILL = 2,
		SKIN = 3,
		EVehicleExtraPartType_MAX = 4,
	};

	// Enum GPGameplay.EVehicleResetType
	// NumValues: 0x0007
	enum class EVehicleResetType : uint8_t
	{
		NONE = 0,
		STATUS = 1,
		PHYSICS = 2,
		AI = 4,
		PASSENGERS = 8,
		ALL = 15,
		EVehicleResetType_MAX = 16,
	};

	// Enum GPGameplay.EAnimVehicleSeatType
	// NumValues: 0x0003
	enum class EAnimVehicleSeatType : uint8_t
	{
		Sitting = 0,
		Stand = 1,
		EAnimVehicleSeatType_MAX = 2,
	};

	// Enum GPGameplay.EWeaponStage
	// NumValues: 0x0004
	enum class EWeaponStage : uint8_t
	{
		Dormancy = 0,
		DeActive = 1,
		Active = 2,
		EWeaponStage_MAX = 3,
	};

	// Enum GPGameplay.EWeaponInputOwner
	// NumValues: 0x0004
	enum class EWeaponInputOwner : uint8_t
	{
		None = 0,
		Left = 1,
		Right = 2,
		EWeaponInputOwner_MAX = 3,
	};

	// Enum GPGameplay.EZiplineHudStatus
	// NumValues: 0x0005
	enum class EZiplineHudStatus : uint8_t
	{
		None = 0,
		Hidden = 1,
		DisplayGetOn = 2,
		DisplayGetOff = 3,
		EZiplineHudStatus_MAX = 4,
	};

	// Enum GPGameplay.EExplicitDisableReason
	// NumValues: 0x000D
	enum class EExplicitDisableReason : uint8_t
	{
		CarrayBody = 0,
		ClimbLadder = 1,
		PassiveMove = 2,
		ResuceAction = 3,
		ResucePrecise = 4,
		Vehicle = 5,
		VehicleControl = 6,
		Helicopter = 7,
		RagDoll = 8,
		Rope = 9,
		Assassinate = 10,
		Movement = 11,
		Max = 12,
	};

	// Enum GPGameplay.EIntCharacterSnap
	// NumValues: 0x0003
	enum class EIntCharacterSnap : uint8_t
	{
		None = 0,
		SnapToLatest = 1,
		EIntCharacterSnap_MAX = 2,
	};

	// Enum GPGameplay.EScopeZoomType
	// NumValues: 0x0004
	enum class EScopeZoomType : uint8_t
	{
		ScopeZoomTypeDefault = 0,
		ScopeZoomTypeSideAiming = 1,
		ScopeZoomTypeMax = 2,
		EScopeZoomType_MAX = 3,
	};

	// Enum GPGameplay.ELowRepPriorityActorType
	// NumValues: 0x0005
	enum class ELowRepPriorityActorType : uint8_t
	{
		None = 0,
		GameState = 1,
		Camp0DataActor = 2,
		Camp1DataActor = 3,
		ELowRepPriorityActorType_MAX = 4,
	};

	// Enum GPGameplay.EMaterialSequencerPlayerPlayStatus
	// NumValues: 0x0003
	enum class EMaterialSequencerPlayerPlayStatus : uint8_t
	{
		None = 0,
		Playing = 1,
		EMaterialSequencerPlayerPlayStatus_MAX = 2,
	};

	// Enum GPGameplay.EMaterialSequencerNotifyType
	// NumValues: 0x0003
	enum class EMaterialSequencerNotifyType : uint8_t
	{
		None = 0,
		Name = 1,
		EMaterialSequencerNotifyType_MAX = 2,
	};

	// Enum GPGameplay.EMaterialSequenceParamsType
	// NumValues: 0x0004
	enum class EMaterialSequenceParamsType : uint8_t
	{
		Float = 0,
		LinearColor = 1,
		Vector = 2,
		EMaterialSequenceParamsType_MAX = 3,
	};

	// Enum GPGameplay.EWeaponAdapterItemType
	// NumValues: 0x0009
	enum class EWeaponAdapterItemType : uint8_t
	{
		NONE = 0,
		Foregrip = 1,
		Handguard = 2,
		Receiver = 3,
		PistolGrip = 4,
		Stock = 5,
		GunBarral = 6,
		TacticalDevices = 7,
		EWeaponAdapterItemType_MAX = 8,
	};

	// Enum GPGameplay.EWeaponAdapterHandIKPoseType
	// NumValues: 0x000C
	enum class EWeaponAdapterHandIKPoseType : uint8_t
	{
		NONE = 0,
		FPP = 1,
		TPP = 2,
		FPPWithWidget = 3,
		TPPWithWidget = 4,
		FPPNear = 5,
		FPPFar = 6,
		FPPNearWithWidget = 7,
		FPPFarWithWidget = 8,
		FPP_R = 9,
		TPP_R = 10,
		EWeaponAdapterHandIKPoseType_MAX = 11,
	};

	// Enum GPGameplay.EMagazineAnimType
	// NumValues: 0x0005
	enum class EMagazineAnimType : uint8_t
	{
		Normal = 0,
		Long = 1,
		Drum = 2,
		Special = 3,
		EMagazineAnimType_MAX = 4,
	};

	// Enum GPGameplay.EMagazineType
	// NumValues: 0x0004
	enum class EMagazineType : uint8_t
	{
		NONE = 0,
		NormalMagazine = 1,
		CLMagazine = 2,
		EMagazineType_MAX = 3,
	};

	// Enum GPGameplay.ETextureType
	// NumValues: 0x0005
	enum class ETextureType : uint8_t
	{
		NONE = 0,
		BaseColorMap = 1,
		MACMap = 2,
		NRMap = 3,
		ETextureType_MAX = 4,
	};

	// Enum GPGameplay.EWeaponPartAnimFunctionIKType
	// NumValues: 0x0004
	enum class EWeaponPartAnimFunctionIKType : uint8_t
	{
		NONE = 0,
		LeftIK = 1,
		RightIK = 2,
		EWeaponPartAnimFunctionIKType_MAX = 3,
	};

	// Enum GPGameplay.EWeaponPartAnimFunctionType
	// NumValues: 0x0008
	enum class EWeaponPartAnimFunctionType : uint8_t
	{
		NONE = 0,
		IK_LeftHand = 1,
		Anim_MagBulletChain = 2,
		Anim_BipodUpDown = 3,
		Anim_Overide = 4,
		Anim_Sco = 5,
		Anim_TransparentMag = 6,
		EWeaponPartAnimFunctionType_MAX = 7,
	};

	// Enum GPGameplay.EWeaponPartFunctionType
	// NumValues: 0x0005
	enum class EWeaponPartFunctionType : uint8_t
	{
		NONE = 0,
		StaticAttributeModify = 2,
		StaticAttributeReplace = 3,
		StaticArrayAttributeModify = 4,
		EWeaponPartFunctionType_MAX = 5,
	};

	// Enum GPGameplay.EWeaponPartFunctionDynamicType
	// NumValues: 0x0004
	enum class EWeaponPartFunctionDynamicType : uint8_t
	{
		NONE = 0,
		AlwaysEffective = 1,
		TacticalEffective = 2,
		EWeaponPartFunctionDynamicType_MAX = 3,
	};

	// Enum GPGameplay.EModularWeaponDescCompare
	// NumValues: 0x0008
	enum class EModularWeaponDescCompare : uint8_t
	{
		None = 0,
		Adapter = 1,
		ExtraModel = 2,
		Skin = 4,
		Pendant = 8,
		SolutionCompare = 1,
		AllCompare = 15,
		EModularWeaponDescCompare_MAX = 16,
	};

	// Enum GPGameplay.EModularPartNodeFlagState
	// NumValues: 0x0005
	enum class EModularPartNodeFlagState : uint8_t
	{
		Default = 0,
		Simulate = 1,
		RelationSimulate = 2,
		RelationVirutalSimulate = 4,
		EModularPartNodeFlagState_MAX = 5,
	};

	// Enum GPGameplay.EModularWeaponBuildStage
	// NumValues: 0x0006
	enum class EModularWeaponBuildStage : uint8_t
	{
		None = 0,
		WaitLoadDynamicPartsAsset = 1,
		DynamicPartsAssetLoading = 2,
		DynamicPartsAssetLoadFinished = 3,
		ModularBuild = 4,
		EModularWeaponBuildStage_MAX = 5,
	};

	// Enum GPGameplay.EModularWeaponMergeStage
	// NumValues: 0x0006
	enum class EModularWeaponMergeStage : uint8_t
	{
		None = 0,
		WaitLoadAllPartsAsset = 1,
		AllPartsAssetLoading = 2,
		AllPartsAssetLoadFnished = 3,
		MeshMerge = 4,
		EModularWeaponMergeStage_MAX = 5,
	};

	// Enum GPGameplay.EMysticalWeaponMaterialParamType
	// NumValues: 0x0006
	enum class EMysticalWeaponMaterialParamType : uint32
	{
		None = 0,
		Scalar = 1,
		Vector = 2,
		Color = 3,
		Texture = 4,
		EMysticalWeaponMaterialParamType_MAX = 5,
	};

	// Enum GPGameplay.ETuneSliderType
	// NumValues: 0x0003
	enum class ETuneSliderType : uint8_t
	{
		Continue = 0,
		Discrete = 1,
		ETuneSliderType_MAX = 2,
	};

	// Enum GPGameplay.ETuneMeshType
	// NumValues: 0x0004
	enum class ETuneMeshType : uint8_t
	{
		None = 0,
		Position = 1,
		Rotation = 2,
		ETuneMeshType_MAX = 3,
	};

	// Enum GPGameplay.EWeaponVoidPartsModelConditionType
	// NumValues: 0x0005
	enum class EWeaponVoidPartsModelConditionType : uint8_t
	{
		None = 0,
		Socket = 1,
		AdapterType = 2,
		ItemId = 3,
		EWeaponVoidPartsModelConditionType_MAX = 4,
	};

	// Enum GPGameplay.EWeaponPartMeshType
	// NumValues: 0x0004
	enum class EWeaponPartMeshType : uint8_t
	{
		Mesh1p = 0,
		Mesh3P = 1,
		MeshUI = 2,
		EWeaponPartMeshType_MAX = 3,
	};

	// Enum GPGameplay.FPartAddtionRuleType
	// NumValues: 0x0004
	enum class EFPartAddtionRuleType : uint8_t
	{
		None = 0,
		Addtive = 1,
		Replace = 2,
		FPartAddtionRuleType_MAX = 3,
	};

	// Enum GPGameplay.EMaterialParameterType
	// NumValues: 0x0004
	enum class EMaterialParameterType : uint8_t
	{
		Vector = 0,
		Scalar = 1,
		Texture = 2,
		EMaterialParameterType_MAX = 3,
	};

	// Enum GPGameplay.EApperanceModifyType
	// NumValues: 0x0003
	enum class EApperanceModifyType : uint8_t
	{
		None = 0,
		AppendModel = 1,
		EApperanceModifyType_MAX = 2,
	};

	// Enum GPGameplay.EWeaponExtraModelConditionType
	// NumValues: 0x0005
	enum class EWeaponExtraModelConditionType : uint8_t
	{
		None = 0,
		Socket = 1,
		AdapterType = 2,
		ItemId = 3,
		EWeaponExtraModelConditionType_MAX = 4,
	};

	// Enum GPGameplay.EWeaponExtraModelVisibility
	// NumValues: 0x0003
	enum class EWeaponExtraModelVisibility : uint8_t
	{
		Visible = 0,
		Hidden = 1,
		EWeaponExtraModelVisibility_MAX = 2,
	};

	// Enum GPGameplay.EFxFuntionType
	// NumValues: 0x000A
	enum class EFxFuntionType : uint8_t
	{
		ReplaceMuzzleFlashFx = 0,
		ReplaceShellDropFx = 1,
		ReplaceMuzzleTrailFx = 2,
		ReplaceRealBulletTrailFx = 3,
		ReplaceVirtualBulletTrailFx = 4,
		ReplaceBulletTrailFx = 5,
		ReplaceHitFx = 6,
		ReplaceMuzzleLightLevel = 7,
		AddMuzzleLightLevel = 8,
		EFxFuntionType_MAX = 9,
	};

	// Enum GPGameplay.EAssemblerAudioType
	// NumValues: 0x0014
	enum class EAssemblerAudioType : uint8_t
	{
		None = 0,
		Receiver = 1,
		GunBarral = 2,
		PistolGrip = 3,
		Stock = 4,
		Handguard = 5,
		Sight = 11,
		Magazine = 12,
		Muzzle = 13,
		Foregrip = 14,
		Underbarrel = 15,
		TacticalDevices = 16,
		Bipod = 17,
		ForSight = 18,
		RearSight = 19,
		SightBase = 21,
		Ammo = 99,
		Pop_Gun = 201,
		Select_Gun = 202,
		EAssemblerAudioType_MAX = 203,
	};

	// Enum GPGameplay.ERule_Opt
	// NumValues: 0x0003
	enum class ERule_Opt : uint8_t
	{
		And = 0,
		Or = 1,
		ERule_MAX = 2,
	};

	// Enum GPGameplay.EAnimItemOverrideRuleType
	// NumValues: 0x0005
	enum class EAnimItemOverrideRuleType : uint8_t
	{
		E_WeaponIDRule = 0,
		E_PartIDRule = 1,
		E_SkinRule = 2,
		E_HasPartType = 3,
		E_MAX = 4,
	};

	// Enum GPGameplay.EForbidLeftHandIKType
	// NumValues: 0x0004
	enum class EForbidLeftHandIKType : uint8_t
	{
		EOutReachDistance = 0,
		EHaveAdapterInSocket = 1,
		EAttachInSocket = 2,
		EForbidLeftHandIKType_MAX = 3,
	};

	// Enum GPGameplay.EAimDownSightsState
	// NumValues: 0x0004
	enum class EAimDownSightsState : uint8_t
	{
		InVisible = 0,
		Special_Pose = 1,
		Constant = 2,
		EAimDownSightsState_MAX = 3,
	};

	// Enum GPGameplay.EPartFunctionTag
	// NumValues: 0x0004
	enum class EPartFunctionTag : uint8_t
	{
		NONE = 0,
		SupportSideAiming = 1,
		All = 255,
		EPartFunctionTag_MAX = 256,
	};

	// Enum GPGameplay.EAssemblerCameraType
	// NumValues: 0x0005
	enum class EAssemblerCameraType : uint8_t
	{
		LOCK = 0,
		ROTATE_ROOT = 1,
		ROTATE_ARROUND = 2,
		AUTO_ROTATE = 3,
		EAssemblerCameraType_MAX = 4,
	};

	// Enum GPGameplay.EAssemblerCamPoint
	// NumValues: 0x003F
	enum class EAssemblerCamPoint : uint8_t
	{
		POINT_DEFAULT = 0,
		POINT_GUN_SELECTED = 1,
		POINT_GUN_DISPLAY = 2,
		POINT_MUZZLE = 3,
		POINT_BARREL = 4,
		POINT_HANDGUARD = 5,
		POINT_SIGHT = 6,
		POINT_MAGAZINE = 7,
		POINT_GRIP = 8,
		POINT_STOCK = 9,
		POINT_UP_RAIL = 10,
		POINT_DOWN_RAIL = 11,
		POINT_LEFT_RAIL = 12,
		POINT_RIGHT_RAIL = 13,
		POINT_BIPOD = 14,
		POINT_GUN_PRESET = 15,
		POINT_SPECIAL = 16,
		POINT_CONNECTOR = 17,
		POINT_CHEEKPAD = 18,
		POINT_PISTOLGRIP_PATCH = 19,
		POINT_SCO_SECONDARY = 20,
		POINT_HANU_POINT = 21,
		POINT_HAND_POINT = 22,
		POINT_HANL_POINT = 23,
		POINT_HANR_POINT = 24,
		POINT_BARBIP_POINT = 25,
		POINT_HANKIT_POINT = 26,
		POINT_STOKIT_POINT = 27,
		POINT_BARKIT_POINT = 28,
		POINT_SCOU_POINT = 29,
		POINT_RISER_POINT = 30,
		POINT_FOR_POINT = 31,
		POINT_COMMON_POINT = 32,
		POINT_GRIPBASS_POINT = 33,
		POINT_MAGBASS_POINT = 34,
		POINT_FLASHKILL_POINT = 35,
		POINT_HANDGUARDU_POINT = 36,
		POINT_GAS_POINT = 37,
		POINT_HAMMER_POINT = 38,
		POINT_TRIGGER_POINT = 39,
		POINT_HYDRASCO_POINT = 50,
		POINT_SHIELD_POINT = 51,
		POINT_BOLT_POINT = 52,
		POINT_GISG2_POINT = 53,
		POINT_HANDLE_POINT = 54,
		POINT_BOWSTRING_POINT = 55,
		POINT_BOWGRIP_POINT = 56,
		POINT_BOWLIMB_POINT = 57,
		POINT_BOWSCOPE_POINT = 58,
		POINT_ARROWREST_POINT = 59,
		POINT_STABILIZER_POINT = 60,
		POINT_BOWRELEASE_POINT = 61,
		POINT_LEVER_POINT = 62,
		POINT_SHWLLHOLDER_POINT = 63,
		POINT_PENDANT_POINT = 90,
		POINT_GUN_SOLUTION = 100,
		POINT_GUN_SOL_INSPECTOR = 200,
		POINT_GUN_DISPLAY_FEATURE1 = 201,
		POINT_GUN_SKIN_DEFAULT = 202,
		POINT_GUN_FINETUNE = 203,
		POINT_GUN_UPGRADE = 204,
		NONE = 205,
		EAssemblerCamPoint_MAX = 206,
	};

	// Enum GPGameplay.EPerkEffectAdditiveLogic
	// NumValues: 0x0004
	enum class EPerkEffectAdditiveLogic : uint8_t
	{
		None = 0,
		DurationAndCD = 1,
		TriggerIcon = 2,
		Max = 3,
	};

	// Enum GPGameplay.EPerkEffectTriggerCond
	// NumValues: 0x0003
	enum class EPerkEffectTriggerCond : uint8_t
	{
		None = 0,
		LowHealth = 1,
		Max = 2,
	};

	// Enum GPGameplay.EPerkSharedEffectType
	// NumValues: 0x0004
	enum class EPerkSharedEffectType : uint8_t
	{
		None = 0,
		ZoyaSOL = 1,
		ZoyaBreakThrough = 2,
		Max = 3,
	};

	// Enum GPGameplay.EPerkSharedEffectSource
	// NumValues: 0x0003
	enum class EPerkSharedEffectSource : uint8_t
	{
		None = 0,
		Zoya = 1,
		Max = 2,
	};

	// Enum GPGameplay.EPerkSpecialEffectType
	// NumValues: 0x000A
	enum class EPerkSpecialEffectType : uint8_t
	{
		None = 0,
		StaminaNotLose = 1,
		SuperDash = 2,
		ExSkillCoolDownReduce = 3,
		ArmdedForceItem1SkillCoolDownReduce = 4,
		ArmdedForceItem2SkillCoolDownReduce = 5,
		AimingAdverseResistance = 6,
		CrouchOrSilentWalkSpeedUp = 7,
		CureBodyWhenRescueSucceed = 8,
		Max = 9,
	};

	// Enum GPGameplay.EPerkEffectType
	// NumValues: 0x0004
	enum class EPerkEffectType : uint8_t
	{
		AddBuff = 0,
		AddSkill = 1,
		TriggerSpecialEffect = 2,
		Max = 3,
	};

	// Enum GPGameplay.EBuffEntityTriggerIconType
	// NumValues: 0x0006
	enum class EBuffEntityTriggerIconType : uint8_t
	{
		None = 0,
		EXSkillCooling = 1,
		BattleFieldPropSkill1Cooling = 2,
		BattleFieldPropSkill2Cooling = 3,
		CrouchOrSilentWalk = 4,
		Max = 5,
	};

	// Enum GPGameplay.EQuickAccessActionType
	// NumValues: 0x0004
	enum class EQuickAccessActionType : uint32
	{
		ConsoleCommand = 0,
		ConsoleVar = 1,
		ExecLuaScript = 2,
		EQuickAccessActionType_MAX = 3,
	};

	// Enum GPGameplay.EQuickAccessSideMenuParamType
	// NumValues: 0x0004
	enum class EQuickAccessSideMenuParamType : uint32
	{
		InputText = 0,
		StaticCombo = 1,
		DataTableDynamicCombo = 2,
		EQuickAccessSideMenuParamType_MAX = 3,
	};

	// Enum GPGameplay.EScopeLocationType
	// NumValues: 0x0006
	enum class EScopeLocationType : uint8_t
	{
		Undefined = 0,
		Main = 1,
		Top = 2,
		Side = 3,
		Sloping = 4,
		EScopeLocationType_MAX = 5,
	};

	// Enum GPGameplay.EShadowTransferType
	// NumValues: 0x0003
	enum class EShadowTransferType : uint8_t
	{
		FromLeft = 0,
		FromRight = 1,
		EShadowTransferType_MAX = 2,
	};

	// Enum GPGameplay.EScopeCompositeType
	// NumValues: 0x0004
	enum class EScopeCompositeType : uint8_t
	{
		CompositeUpDown = 0,
		CompositeLeftRight = 1,
		CompositeFrontBack = 2,
		EScopeCompositeType_MAX = 3,
	};

	// Enum GPGameplay.ECrosshairType
	// NumValues: 0x0004
	enum class ECrosshairType : uint8_t
	{
		Crosshair_None = 0,
		Crosshair_Holo = 1,
		Crosshair_RedDot = 2,
		Crosshair_MAX = 3,
	};

	// Enum GPGameplay.ESoftState
	// NumValues: 0x0004
	enum class ESoftState : uint8_t
	{
		Custom = 0,
		EFiring = 1,
		EReload = 2,
		ESoftState_MAX = 3,
	};

	// Enum GPGameplay.EAbilityEntitySysteType
	// NumValues: 0x0003
	enum class EAbilityEntitySysteType : uint8_t
	{
		Ability = 0,
		SysteTypeMax = 1,
		EAbilityEntitySysteType_MAX = 2,
	};

	// Enum GPGameplay.ESupportType
	// NumValues: 0x0003
	enum class ESupportType : uint8_t
	{
		HealthPack = 0,
		ArmorPack = 1,
		ESupportType_MAX = 2,
	};

	// Enum GPGameplay.ESwitchWeaponOperation
	// NumValues: 0x0004
	enum class ESwitchWeaponOperation : uint8_t
	{
		OP_Start = 0,
		OP_ActivatePending = 1,
		OP_Cancel = 2,
		OP_MAX = 3,
	};

	// Enum GPGameplay.EClassRepNodeMapping
	// NumValues: 0x000A
	enum class EClassRepNodeMapping : uint8_t
	{
		NotRouted = 0,
		RelevantAllConnections = 1,
		RelevantToTeam = 2,
		RelevantToClientProxy = 3,
		RelevantToJailBreakDeadBody = 4,
		Spatialize_Static = 5,
		Spatialize_Dynamic = 6,
		Spatialize_Dormancy = 7,
		RelevantToEggGoldenNest = 8,
		EClassRepNodeMapping_MAX = 9,
	};

	// Enum GPGameplay.EVehiclePartType
	// NumValues: 0x0009
	enum class EVehiclePartType : uint8_t
	{
		NONE = 0,
		BODY = 1,
		ENGINE_MAX = 2,
		WEAPON = 3,
		LEFT_TRACK = 4,
		RIGHT_TRACK = 5,
		ANTI_EXPLOSION_ARMOR = 6,
		VEHICLE_PART_TYPE_MAX = 7,
		EVehiclePartType_MAX = 8,
	};

	// Enum GPGameplay.EWeaponAdapterType
	// NumValues: 0x0012
	enum class EWeaponAdapterType : uint8_t
	{
		Receiver = 1,
		GunBarral = 2,
		PistolGrip = 3,
		Stock = 4,
		Handguard = 5,
		Sight = 11,
		Magazine = 12,
		Muzzle = 13,
		Foregrip = 14,
		Underbarrel = 15,
		TacticalDevices = 16,
		Bipod = 17,
		ForSight = 18,
		RearSight = 19,
		SightBase = 21,
		Special = 20,
		Silencer = 200,
		EWeaponAdapterType_MAX = 201,
	};

	// Enum GPGameplay.EBurnningPotState
	// NumValues: 0x0005
	enum class EBurnningPotState : uint8_t
	{
		StateIdle = 0,
		StateFiring = 1,
		StateCutting = 2,
		StateDeactive = 3,
		EBurnningPotState_MAX = 4,
	};

	// Enum GPGameplay.EWeaponAmmoLogicType
	// NumValues: 0x0004
	enum class EWeaponAmmoLogicType : uint8_t
	{
		None = 0,
		CommonAmmo = 1,
		ItemAmmo = 2,
		EWeaponAmmoLogicType_MAX = 3,
	};

	// Enum GPGameplay.EAddAmmoFailReason
	// NumValues: 0x0006
	enum class EAddAmmoFailReason : uint8_t
	{
		None = 0,
		NoProperWeapon = 1,
		FullCarriedAmmo = 2,
		CanNotAddAmmo = 3,
		NotSupportedAmmoType = 4,
		EAddAmmoFailReason_MAX = 5,
	};

	// Enum GPGameplay.ECharacterLeftArmAnimType
	// NumValues: 0x0004
	enum class ECharacterLeftArmAnimType : uint8_t
	{
		None = 0,
		Scene = 1,
		Weapon = 2,
		ECharacterLeftArmAnimType_MAX = 3,
	};

	// Enum GPGameplay.EWeaponAnimDirectItemType
	// NumValues: 0x0012
	enum class EWeaponAnimDirectItemType : uint8_t
	{
		None = 0,
		FPPMoveF = 1,
		FPPMoveFR = 2,
		FPPMoveFL = 3,
		FPPMoveB = 4,
		FPPMoveBR = 5,
		FPPMoveBL = 6,
		FPPMoveL = 7,
		FPPMoveR = 8,
		TPPMoveF = 9,
		TPPMoveFR = 10,
		TPPMoveFL = 11,
		TPPMoveB = 12,
		TPPMoveBR = 13,
		TPPMoveBL = 14,
		TPPMoveL = 15,
		TPPMoveR = 16,
		EWeaponAnimDirectItemType_MAX = 17,
	};

	// Enum GPGameplay.EWeaponAnimItemType
	// NumValues: 0x0018
	enum class EWeaponAnimItemType : uint8_t
	{
		None = 0,
		FPPDef = 1,
		FPPStand = 2,
		FPPCrouch = 3,
		FPPProne = 4,
		FPPFracture = 5,
		FPPImpendingDeath = 6,
		FPPSwim = 7,
		TPPDef = 8,
		TPPStand = 9,
		TPPCrouch = 10,
		TPPProne = 11,
		TPPFracture = 12,
		TPPImpendingDeath = 13,
		TPPSwim = 14,
		TPPUnderwaterSwim = 15,
		TPPUnderFPPStand = 16,
		TPPUnderFPPCrouch = 17,
		TPPUnderFPPProne = 18,
		TPPUnderFPPFracture = 19,
		TPPUnderFPPImpendingDeath = 20,
		TPPUnderFPPSwim = 21,
		TPPUnderFPPUnderwaterSwim = 22,
		EWeaponAnimItemType_MAX = 23,
	};

	// Enum GPGameplay.EWeaponAnimXPPType
	// NumValues: 0x0005
	enum class EWeaponAnimXPPType : uint8_t
	{
		None = 0,
		Both = 1,
		FPP = 2,
		TPPor3P = 3,
		EWeaponAnimXPPType_MAX = 4,
	};

	// Enum GPGameplay.ERuntimeOverrideAnimDatType
	// NumValues: 0x0005
	enum class ERuntimeOverrideAnimDatType : uint8_t
	{
		None = 0,
		WeaponAnimBasePos = 1,
		WeaponAnimBS = 2,
		WeaponAnimOperaction = 3,
		Max = 4,
	};

	// Enum GPGameplay.EWeaponAnimDataTableType
	// NumValues: 0x000B
	enum class EWeaponAnimDataTableType : uint8_t
	{
		None = 0,
		WeaponAnimBasePos = 1,
		WeaponAnimOperaction = 2,
		SpecialWeaponAnim = 3,
		AiAnimPosTable = 4,
		InWeaponAnimMax = 5,
		WeaponPartAnim = 6,
		CharacterLeftArm = 7,
		HallCharacterAnim = 8,
		HallWeaponPartAnim = 9,
		Max = 10,
	};

	// Enum GPGameplay.ERequestAnimType
	// NumValues: 0x0004
	enum class ERequestAnimType : uint8_t
	{
		EWeaponAnim = 0,
		EItemAnim = 1,
		EBasicAnim = 2,
		ERequestAnimType_MAX = 3,
	};

	// Enum GPGameplay.EGunSwayType
	// NumValues: 0x0003
	enum class EGunSwayType : uint8_t
	{
		Common = 0,
		Vehicle = 1,
		EGunSwayType_MAX = 2,
	};

	// Enum GPGameplay.EWeaponEffectType
	// NumValues: 0x0008
	enum class EWeaponEffectType : uint8_t
	{
		None = 0,
		MuzzleFlash = 1,
		ShellDrop = 2,
		MuzzleTrail = 3,
		BulletTrail = 4,
		ModelFx = 5,
		OverHeatTrail = 6,
		EWeaponEffectType_MAX = 7,
	};

	// Enum GPGameplay.EWeaponDisplayMode
	// NumValues: 0x0005
	enum class EWeaponDisplayMode : uint8_t
	{
		None = 0,
		FirstPerson = 1,
		ThirdPerson = 2,
		ThirdPersonOther = 3,
		EWeaponDisplayMode_MAX = 4,
	};

	// Enum GPGameplay.EWeaponHiddenTag
	// NumValues: 0x002A
	enum class EWeaponHiddenTag : uint8_t
	{
		OwnerHidden = 0,
		CarringBody = 1,
		PreciseOperate = 2,
		Redeploy = 3,
		Helicopter = 4,
		Vehicle = 5,
		VaultAndClimb = 6,
		RescuePrecise = 7,
		Assassinate = 8,
		Ability = 9,
		Parachute = 10,
		Interactive = 11,
		ExitCutScene = 12,
		RaiseWatch = 13,
		BeCarryBody = 14,
		LOD = 15,
		BeAssassinate = 16,
		ImpendingDeath = 17,
		ClimbLadder = 18,
		UseItem = 19,
		Perform = 20,
		Firefighting = 21,
		InteractivePutWeapon = 22,
		ShieldAttachBack = 23,
		AnimAttachBack = 24,
		CrowdControl = 25,
		SwimSprint = 26,
		HighValueItemInspect = 27,
		RopePassiveMove = 28,
		RollMove = 29,
		DramaFalling = 30,
		DoubleHandAbility = 31,
		LeftHandAbility = 32,
		RightHandAbility = 33,
		LegAbility = 34,
		SpecialAbility = 35,
		ActionAbility = 36,
		CustomAbility = 37,
		Custom2Ability = 38,
		Custom3Ability = 39,
		TagMax = 40,
		EWeaponHiddenTag_MAX = 41,
	};

	// Enum GPGameplay.EWeaponAttributeValueType
	// NumValues: 0x0003
	enum class EWeaponAttributeValueType : uint8_t
	{
		Normal = 0,
		Percentage = 1,
		EWeaponAttributeValueType_MAX = 2,
	};

	// Enum GPGameplay.EAttributeBetterDeterminer
	// NumValues: 0x0003
	enum class EAttributeBetterDeterminer : uint8_t
	{
		None = 0,
		Max = 1,
		Min = 2,
	};

	// Enum GPGameplay.ELimitFormulateType
	// NumValues: 0x0006
	enum class ELimitFormulateType : uint8_t
	{
		None = 0,
		MULT_A_Min = 1,
		MULT_A_Max = 2,
		Final_Min = 3,
		Final_Max = 4,
		ELimitFormulateType_MAX = 5,
	};

	// Enum GPGameplay.EWeaponAttackTriggerMode
	// NumValues: 0x0004
	enum class EWeaponAttackTriggerMode : uint8_t
	{
		OnHit = 0,
		OnExplode = 1,
		Custom = 2,
		EWeaponAttackTriggerMode_MAX = 3,
	};

	// Enum GPGameplay.EWeaponBoolPropertyType
	// NumValues: 0x0010
	enum class EWeaponBoolPropertyType : uint8_t
	{
		None = 0,
		IsBipodDown = 1,
		IsPowerFlashOn = 2,
		IsTacticalEquipUOn = 3,
		IsTacticalEquipU1On = 4,
		IsTacticalEquipU2On = 5,
		IsTacticalEquipROn = 6,
		IsTacticalEquipR1On = 7,
		IsTacticalEquipR2On = 8,
		IsTacticalEquipDOn = 9,
		IsTacticalEquipD1On = 10,
		IsTacticalEquipD2On = 11,
		IsTacticalEquipLOn = 12,
		IsTacticalEquipL1On = 13,
		IsTacticalEquipL2On = 14,
		Max = 15,
	};

	// Enum GPGameplay.EVehicleLockType
	// NumValues: 0x0005
	enum class EVehicleLockType : uint8_t
	{
		NONE = 0,
		Terrestrial = 1,
		Aerial = 2,
		All = 255,
		EVehicleLockType_MAX = 256,
	};

	// Enum GPGameplay.EWeaponGunKickTriggerType
	// NumValues: 0x0004
	enum class EWeaponGunKickTriggerType : uint8_t
	{
		EveryFire = 0,
		FirstFireKeep = 1,
		FirstFireLoop = 2,
		EWeaponGunKickTriggerType_MAX = 3,
	};

	// Enum GPGameplay.EWeaponFireShakeWaveform
	// NumValues: 0x0007
	enum class EWeaponFireShakeWaveform : uint8_t
	{
		CosWave = 0,
		SinWave = 1,
		PerlinNoise = 2,
		Curve = 3,
		CosWaveE = 4,
		SinWaveE = 5,
		EWeaponFireShakeWaveform_MAX = 6,
	};

	// Enum GPGameplay.EWeaponFireShakeType
	// NumValues: 0x0005
	enum class EWeaponFireShakeType : uint8_t
	{
		FireBegin = 0,
		FireLoop = 1,
		FireAlways = 2,
		FireRecoil = 3,
		EWeaponFireShakeType_MAX = 4,
	};

	// Enum GPGameplay.EWeaponOpenSightOnFireMode
	// NumValues: 0x0006
	enum class EWeaponOpenSightOnFireMode : uint8_t
	{
		None = 0,
		OpenSightMode_SemiAutomatic = 1,
		OpenSightMode_Automatic = 2,
		OpenSightMode_Sniper = 3,
		OpenSightMode_Missile = 4,
		EWeaponOpenSightOnFireMode_MAX = 5,
	};

	// Enum GPGameplay.EWeaponFireWithSightRealseConfigMode
	// NumValues: 0x0004
	enum class EWeaponFireWithSightRealseConfigMode : uint8_t
	{
		None = 0,
		StopFire_CloseSight = 1,
		OpenFire_Sight = 2,
		EWeaponFireWithSightRealseConfigMode_MAX = 3,
	};

	// Enum GPGameplay.EWeaponFireWithSightPressConfigMode
	// NumValues: 0x0004
	enum class EWeaponFireWithSightPressConfigMode : uint8_t
	{
		None = 0,
		OpenSightWithFire = 1,
		OpenSight = 2,
		EWeaponFireWithSightPressConfigMode_MAX = 3,
	};

	// Enum GPGameplay.EWeaponInputAutoFireMode
	// NumValues: 0x0004
	enum class EWeaponInputAutoFireMode : uint8_t
	{
		None = 0,
		Single = 1,
		Auto = 2,
		EWeaponInputAutoFireMode_MAX = 3,
	};

	// Enum GPGameplay.EWeaponInputRightActionMode
	// NumValues: 0x0004
	enum class EWeaponInputRightActionMode : uint8_t
	{
		None = 0,
		Follow_FireWithSightOpenConfig = 1,
		Follow_FireConfig = 2,
		EWeaponInputRightActionMode_MAX = 3,
	};

	// Enum GPGameplay.EWeaponAdditiveAnimTriggerType
	// NumValues: 0x0007
	enum class EWeaponAdditiveAnimTriggerType : uint8_t
	{
		None = 0,
		Always = 1,
		EveryFire = 2,
		WhileFireOnce = 3,
		WhileFireLoop = 4,
		EndFire = 5,
		EWeaponAdditiveAnimTriggerType_MAX = 6,
	};

	// Enum GPGameplay.EHitEventType_FX
	// NumValues: 0x0007
	enum class EHitEventType_FX : uint8_t
	{
		None = 0,
		KillWithHead = 1,
		KillWithBody = 2,
		HitWithHead = 3,
		HitWithBody = 4,
		HitWithArmor = 5,
		EHitEventType_MAX = 6,
	};

	// Enum GPGameplay.ETrailInWaterMode
	// NumValues: 0x0003
	enum class ETrailInWaterMode : uint8_t
	{
		ETrailMoveSelf = 1,
		ETrailAttachtoBullet = 2,
		ETrailInWaterMode_MAX = 3,
	};

	// Enum GPGameplay.EProjectileFlyMode
	// NumValues: 0x0004
	enum class EProjectileFlyMode : uint8_t
	{
		FlyMode_PhysicSimulate = 0,
		FlyMode_HitScan = 1,
		FlyMode_HitScanDelay = 2,
		FlyMode_MAX = 3,
	};

	// Enum GPGameplay.EDamageAttenBlendMode
	// NumValues: 0x0003
	enum class EDamageAttenBlendMode : uint8_t
	{
		BlendMode_Dest = 0,
		BlendMode_LinearLerp = 1,
		BlendMode_MAX = 2,
	};

	// Enum GPGameplay.ECrosshairScaleMode
	// NumValues: 0x0004
	enum class ECrosshairScaleMode : uint8_t
	{
		ScaleGap = 0,
		ScaleAll = 1,
		ScaleOverride = 2,
		ECrosshairScaleMode_MAX = 3,
	};

	// Enum GPGameplay.EWeaponDataRecoilType
	// NumValues: 0x0004
	enum class EWeaponDataRecoilType : uint8_t
	{
		WeaponRecoil_DFM = 0,
		WeaponRecoil_Polynomial = 1,
		WeaponRecoil_VelocityModel = 2,
		WeaponRecoil_MAX = 3,
	};

	// Enum GPGameplay.EExplosionType
	// NumValues: 0x0019
	enum class EExplosionType : uint8_t
	{
		None = 0,
		Weapon_Grenade = 1,
		Weapon_RPG_7 = 2,
		Weapon_C4 = 3,
		Weapon_Missile = 4,
		WeaponMelee_Hurt = 5,
		Weapon_3Grenade = 6,
		Vehicle_ArmedPickup = 7,
		Vehicle_Motor = 8,
		Vehicle_TutuCar = 9,
		Vehicle_UNTrunk = 10,
		Vehicle_DarkTideJeep = 11,
		Vehicle_CargoTrunk = 12,
		Vehicle_Drone = 13,
		Tank_Projectile = 14,
		FixedTrackRocket = 15,
		Other_Shell = 16,
		Other_RocketRecycling = 17,
		Type_Large = 18,
		Type_Mid = 19,
		Type_Small = 20,
		Weapon_Point = 21,
		RankSkill_GuidedMissle = 22,
		Other_Debug = 23,
		Max = 24,
	};

	// Enum GPGameplay.EMainAttributeFunctionCurvingType
	// NumValues: 0x0006
	enum class EMainAttributeFunctionCurvingType : uint8_t
	{
		NONE = 0,
		DeltaMapping = 1,
		DeltaMappingThenScale = 2,
		AbsoluteMapping = 3,
		AbsoluteMappingThenScale = 4,
		EMainAttributeFunctionCurvingType_MAX = 5,
	};

	// Enum GPGameplay.EWeaponDataModifierPeriod
	// NumValues: 0x0004
	enum class EWeaponDataModifierPeriod : uint8_t
	{
		GAME_MODE = 0,
		PARTS = 1,
		PART_TUNE = 2,
		Max = 3,
	};

	// Enum GPGameplay.EWeaponDataArrayModifierType
	// NumValues: 0x0004
	enum class EWeaponDataArrayModifierType : uint8_t
	{
		None = 0,
		Add = 1,
		Rem = 2,
		Max = 3,
	};

	// Enum GPGameplay.EWeaponDataReplaceType
	// NumValues: 0x0004
	enum class EWeaponDataReplaceType : uint8_t
	{
		None = 0,
		Final = 1,
		Initial = 2,
		Max = 3,
	};

	// Enum GPGameplay.EWeaponDataModifierType
	// NumValues: 0x0006
	enum class EWeaponDataModifierType : uint8_t
	{
		None = 0,
		Addend = 1,
		Mult_A = 2,
		Mult_B = 3,
		Mult_C = 4,
		Max = 5,
	};

	// Enum GPGameplay.EScopeLenMatState
	// NumValues: 0x0005
	enum class EScopeLenMatState : uint8_t
	{
		Close = 0,
		Switch = 1,
		Open = 2,
		EMP = 3,
		EScopeLenMatState_MAX = 4,
	};

	// Enum GPGameplay.WeaponInspectType
	// NumValues: 0x0005
	enum class EWeaponInspectType : uint8_t
	{
		WeaponInspectType_Default = 0,
		WeaponInspectType_Empty = 1,
		WeaponInspectType_Finally = 2,
		WeaponInspectType_FirstEmpty = 3,
		WeaponInspectType_MAX = 4,
	};

	// Enum GPGameplay.ETieWeaponState
	// NumValues: 0x0006
	enum class ETieWeaponState : uint8_t
	{
		E_Idle = 0,
		E_Vacant = 1,
		E_Using = 2,
		E_Broken = 3,
		E_Destory = 4,
		E_MAX = 5,
	};

	// Enum GPGameplay.ESceneWeaponType
	// NumValues: 0x000A
	enum class ESceneWeaponType : uint8_t
	{
		E_None = 0,
		E_MachineGun = 1,
		E_FixedWeaponAA = 2,
		E_FixedWEaponShore = 3,
		E_GiantTowerGuidedRocket = 4,
		E_GiantTowerWeaponAA = 5,
		E_HumveeCracked = 6,
		E_HawkMachineGun = 7,
		E_BunkerMachineGun = 8,
		E_MAX = 9,
	};

	// Enum GPGameplay.ESceneHealthState
	// NumValues: 0x0006
	enum class ESceneHealthState : uint8_t
	{
		None = 0,
		E_Normal = 1,
		E_Impaired = 2,
		E_Destory = 3,
		E_Constructable = 4,
		ESceneHealthState_MAX = 5,
	};

	// Enum GPGameplay.ECrossHairBindMode
	// NumValues: 0x0004
	enum class ECrossHairBindMode : uint8_t
	{
		BindToFireLocation = 0,
		BindToFrontSight = 1,
		BindToScreenCenter = 2,
		ECrossHairBindMode_MAX = 3,
	};

	// Enum GPGameplay.EWeaponOffsetType
	// NumValues: 0x000C
	enum class EWeaponOffsetType : uint8_t
	{
		WeaponZoomOffset_Rotation = 0,
		WeaponZoomOffset = 1,
		WeaponDisplayOffset = 2,
		WeaponAdditiveAnim = 3,
		WeaponAdditiveAnim_FiringAnim = 4,
		WeaponCameraShakeRoll = 5,
		WeaponGunKick = 6,
		WeaponGunSway = 7,
		WeaponOwnerHitShake = 8,
		WeaponGunKick2 = 9,
		WeaponOffsetFinal = 10,
		EWeaponOffsetType_MAX = 11,
	};

	// Enum GPGameplay.EZoomAlignmentMode
	// NumValues: 0x0004
	enum class EZoomAlignmentMode : uint8_t
	{
		TransformAlignment = 0,
		TranslationAlignment = 1,
		DisableAlignment = 2,
		EZoomAlignmentMode_MAX = 3,
	};

	// Enum GPGameplay.EEquipmentPartDamageType
	// NumValues: 0x0003
	enum class EEquipmentPartDamageType : uint8_t
	{
		Default = 0,
		Fix = 1,
		EEquipmentPartDamageType_MAX = 2,
	};

	// Enum GPGameplay.EWeaponHandAnimType
	// NumValues: 0x0005
	enum class EWeaponHandAnimType : uint8_t
	{
		None = 0,
		LeftHandType = 1,
		RightHandType = 2,
		BothHandsType = 3,
		EWeaponHandAnimType_MAX = 4,
	};

	// Enum GPGameplay.EWeaponFireCrosshairStyle
	// NumValues: 0x0002
	enum class EWeaponFireCrosshairStyle : uint8_t
	{
		CrosshairNormal = 0,
		EWeaponFireCrosshairStyle_MAX = 1,
	};

	// Enum GPGameplay.ECharacterLogicPoseType
	// NumValues: 0x0005
	enum class ECharacterLogicPoseType : uint8_t
	{
		None = 0,
		StandPose = 1,
		CrouchPose = 2,
		PronePose = 3,
		ECharacterLogicPoseType_MAX = 4,
	};

	// Enum GPGameplay.EChracterPoseType
	// NumValues: 0x0010
	enum class EChracterPoseType : uint8_t
	{
		None = 0,
		Stand = 1,
		Crouch = 2,
		Prone = 3,
		Jump = 4,
		Run = 5,
		Fly = 6,
		Sprint = 7,
		Fracture = 8,
		ImpendingDeath = 9,
		Swim = 10,
		UnderwaterSwim = 11,
		SlidingTackle = 12,
		Rescue = 13,
		Dive = 14,
		EChracterPoseType_MAX = 15,
	};

	// Enum GPGameplay.EHandIKType
	// NumValues: 0x0006
	enum class EHandIKType : uint8_t
	{
		HandIKType_None = 0,
		HandIKType_Primary = 1,
		HandIKType_Submachine = 2,
		HandIKType_Pistol = 3,
		HandIKType_SpecialLongWeapon = 4,
		HandIKType_Max = 5,
	};

	// Enum GPGameplay.ETurn8AngleType
	// NumValues: 0x000A
	enum class ETurn8AngleType : uint8_t
	{
		None = 0,
		Angle_Turn_0 = 1,
		Angle_TurnLeft_45 = 2,
		Angle_TurnLeft_90 = 3,
		Angle_TurnLeft_135 = 4,
		Angle_TurnLeft_180 = 5,
		Angle_TurnRight_45 = 6,
		Angle_TurnRight_90 = 7,
		Angle_TurnRight_135 = 8,
		Max = 9,
	};

	// Enum GPGameplay.EEightDirectionType
	// NumValues: 0x000A
	enum class EEightDirectionType : uint8_t
	{
		None = 0,
		Direction_F = 1,
		Direction_FR = 2,
		Direction_FL = 3,
		Direction_B = 4,
		Direction_BR = 5,
		Direction_BL = 6,
		Direction_L = 7,
		Direction_R = 8,
		Max = 9,
	};

	// Enum GPGameplay.EAnimationSpecialUseType
	// NumValues: 0x0003
	enum class EAnimationSpecialUseType : uint8_t
	{
		None = 0,
		TPPAnim_UnderFPP = 6,
		EAnimationSpecialUseType_MAX = 7,
	};

	// Enum GPGameplay.EPlacementPreviewType
	// NumValues: 0x0004
	enum class EPlacementPreviewType : uint8_t
	{
		Common = 0,
		Invalid = 1,
		Conflict = 2,
		EPlacementPreviewType_MAX = 3,
	};

	// Enum GPGameplay.ERecoilPeriod
	// NumValues: 0x0005
	enum class ERecoilPeriod : uint8_t
	{
		Sleep = 0,
		Recoil = 1,
		RecoverPause = 2,
		Recover = 3,
		ERecoilPeriod_MAX = 4,
	};

	// Enum GPGameplay.EWeaponSpreadModifierType
	// NumValues: 0x0003
	enum class EWeaponSpreadModifierType : uint8_t
	{
		CentralLimitTheorem = 0,
		SimpleRandom = 1,
		EWeaponSpreadModifierType_MAX = 2,
	};

	// Enum GPGameplay.EDistributionInSpreadType
	// NumValues: 0x0004
	enum class EDistributionInSpreadType : uint8_t
	{
		UniformDistribution = 0,
		CutCakeDistribution = 1,
		CustomDistribution = 2,
		EDistributionInSpreadType_MAX = 3,
	};

	// Enum GPGameplay.EWeaponSpreadAreaType
	// NumValues: 0x0002
	enum class EWeaponSpreadAreaType : uint8_t
	{
		Oval = 0,
		EWeaponSpreadAreaType_MAX = 1,
	};

	// Enum GPGameplay.EWeaponAdditiveGetAnimResultType
	// NumValues: 0x0005
	enum class EWeaponAdditiveGetAnimResultType : uint8_t
	{
		RotateSpine = 0,
		RotateByCenter = 1,
		RotateByHoldPoint = 2,
		AddtiveLeftHand = 3,
		EWeaponAdditiveGetAnimResultType_MAX = 4,
	};

	// Enum GPGameplay.EWeaponAntiCheatType
	// NumValues: 0x000C
	enum class EWeaponAntiCheatType : uint8_t
	{
		None = 0,
		Time = 1,
		SwitchWeapon = 2,
		Ammo = 3,
		FireSpread = 4,
		FireRecoil = 5,
		ChangeClip = 101,
		Chamber = 102,
		Equipping = 103,
		Firing = 104,
		OtherState = 200,
		EWeaponAntiCheatType_MAX = 201,
	};

	// Enum GPGameplay.EBulletShowReason
	// NumValues: 0x0006
	enum class EBulletShowReason : uint8_t
	{
		None = 0,
		ChangeClip = 1,
		Inspect = 2,
		Equip = 3,
		Chamber = 4,
		EBulletShowReason_MAX = 5,
	};

	// Enum GPGameplay.EShakerRuntimeRecoilSimulatorStage
	// NumValues: 0x0005
	enum class EShakerRuntimeRecoilSimulatorStage : uint8_t
	{
		None = 0,
		StartFire = 1,
		FireRebound = 2,
		Recover = 3,
		EShakerRuntimeRecoilSimulatorStage_MAX = 4,
	};

	// Enum GPGameplay.EZoomInParamType
	// NumValues: 0x0005
	enum class EZoomInParamType : uint8_t
	{
		Default = 0,
		Sight = 1,
		Scope = 2,
		Debug = 3,
		Max = 4,
	};

	// Enum GPGameplay.EGPCameraSwayMode
	// NumValues: 0x0004
	enum class EGPCameraSwayMode : uint8_t
	{
		EGPCameraSwayMode_AimWalk = 0,
		EGPCameraSwayMode_Walk = 1,
		EGPCameraSwayMode_Run = 2,
		EGPCameraSwayMode_MAX = 3,
	};

	// Enum GPGameplay.EMeleeFireMode
	// NumValues: 0x0003
	enum class EMeleeFireMode : uint8_t
	{
		Auto = 0,
		Single = 1,
		EMeleeFireMode_MAX = 2,
	};

	// Enum GPGameplay.EWeaponObjectMatchLevel
	// NumValues: 0x0006
	enum class EWeaponObjectMatchLevel : uint8_t
	{
		MatchAll = 0,
		MatchWeaponId = 1,
		MatchWeaponType = 2,
		AlwaysMatch = 3,
		Similarity = 4,
		EWeaponObjectMatchLevel_MAX = 5,
	};

	// Enum GPGameplay.EProcedureAnimBoneType
	// NumValues: 0x0006
	enum class EProcedureAnimBoneType : uint8_t
	{
		ScopeCenter = 0,
		WeaponRoot = 1,
		Camera = 2,
		FrontSight = 3,
		Custom = 4,
		EProcedureAnimBoneType_MAX = 5,
	};

	// Enum GPGameplay.EWeaponFeatureChangeReason
	// NumValues: 0x000B
	enum class EWeaponFeatureChangeReason : uint8_t
	{
		Undefined = 0,
		CharacterLODFeatureLevelEnter = 1,
		CharacterLODFeatureExitFeature = 2,
		CharacterSimulationLODSystemPost = 3,
		CharacterSignificanceEvaluateSystemApplyResult = 4,
		CharacterVehicleControlActionRefresh = 5,
		WeapRepCompBeginPlay = 6,
		WeapRepCompOnCharacterOwnerStartObserved = 7,
		OnWeaponFeatureDebugChanged = 8,
		RefreshVehicleWeaponLod = 9,
		EWeaponFeatureChangeReason_MAX = 10,
	};

	// Enum GPGameplay.EWeaponSkin_TexasPoker_Number
	// NumValues: 0x000E
	enum class EWeaponSkin_TexasPoker_Number : uint8_t
	{
		Number_Two = 0,
		Number_Three = 1,
		Number_Four = 2,
		Number_Five = 3,
		Number_Six = 4,
		Number_Seven = 5,
		Number_Eight = 6,
		Number_Nine = 7,
		Number_Ten = 8,
		Number_Jack = 9,
		Number_Queen = 10,
		Number_King = 11,
		Number_Ace = 12,
		Number_MAX = 13,
	};

	// Enum GPGameplay.EWeaponSkin_TexasPoker_Pattern
	// NumValues: 0x0005
	enum class EWeaponSkin_TexasPoker_Pattern : uint8_t
	{
		Spade = 0,
		Heart = 1,
		Diamond = 2,
		Club = 3,
		EWeaponSkin_TexasPoker_MAX = 4,
	};

	// Enum GPGameplay.EWeaponSkinPartConfigEnableConditionType
	// NumValues: 0x0004
	enum class EWeaponSkinPartConfigEnableConditionType : uint8_t
	{
		None = 0,
		Always = 1,
		ItemId = 2,
		EWeaponSkinPartConfigEnableConditionType_MAX = 3,
	};

	// Enum GPGameplay.EWeaponSkinPartItemAdditiveLocationRule
	// NumValues: 0x0004
	enum class EWeaponSkinPartItemAdditiveLocationRule : uint8_t
	{
		None = 0,
		Always = 1,
		Socket = 2,
		EWeaponSkinPartItemAdditiveLocationRule_MAX = 3,
	};

	// Enum GPGameplay.EMysticalSkinParamMaterialValueType
	// NumValues: 0x0004
	enum class EMysticalSkinParamMaterialValueType : uint8_t
	{
		Float = 0,
		Texture = 1,
		Color = 2,
		EMysticalSkinParamMaterialValueType_MAX = 3,
	};

	// Enum GPGameplay.EMysticalSkinParamValueType
	// NumValues: 0x0004
	enum class EMysticalSkinParamValueType : uint8_t
	{
		Constant = 0,
		Random = 1,
		Random01 = 2,
		EMysticalSkinParamValueType_MAX = 3,
	};

	// Enum GPGameplay.EWeaponSkinRareType
	// NumValues: 0x0004
	enum class EWeaponSkinRareType : uint8_t
	{
		Normal = 0,
		Rare = 1,
		VeryRare = 2,
		EWeaponSkinRareType_MAX = 3,
	};

	// Enum GPGameplay.ESkinMergeLevel
	// NumValues: 0x0004
	enum class ESkinMergeLevel : uint8_t
	{
		None = 0,
		ForceUse3PMaterial = 1,
		EmptySkin = 2,
		ESkinMergeLevel_MAX = 3,
	};

	// Enum GPGameplay.ESkinEffectTriggerEventType
	// NumValues: 0x0003
	enum class ESkinEffectTriggerEventType : uint8_t
	{
		None = 0,
		PlayMaterialAnim = 1,
		ESkinEffectTriggerEventType_MAX = 2,
	};

	// Enum GPGameplay.EWeaponSkinLogicMode
	// NumValues: 0x0005
	enum class EWeaponSkinLogicMode : uint8_t
	{
		None = 0,
		GameBoy2000 = 1,
		TexasPoker = 2,
		WeatherForecast = 3,
		EWeaponSkinLogicMode_MAX = 4,
	};

	// Enum GPGameplay.EWeaponSkinRenderMode
	// NumValues: 0x0003
	enum class EWeaponSkinRenderMode : uint8_t
	{
		None = 0,
		Dye = 1,
		EWeaponSkinRenderMode_MAX = 2,
	};

	// Enum GPGameplay.EWeaponModifyState
	// NumValues: 0x0005
	enum class EWeaponModifyState : uint8_t
	{
		None = 0,
		LoadMystical = 1,
		LoadAssets = 2,
		Done = 3,
		EWeaponModifyState_MAX = 4,
	};

	// Enum GPGameplay.EAbilityThrowableStickyType
	// NumValues: 0x0005
	enum class EAbilityThrowableStickyType : uint8_t
	{
		None = 0,
		All = 1,
		OnlyVehicle = 2,
		OnlyDFMChar = 3,
		EAbilityThrowableStickyType_MAX = 4,
	};

	// Enum GPGameplay.EWeaponThrowableType
	// NumValues: 0x0002
	enum class EWeaponThrowableType : uint8_t
	{
		None = 0,
		EWeaponThrowableType_MAX = 1,
	};

};

namespace Breakthrough {

	 
	 

	// Enum Breakthrough.EBattleFieldMarkingItemType
	// NumValues: 0x0004
	enum class EBattleFieldMarkingItemType : uint8
	{
		None = 0,
		QuickChat = 1,
		Marking = 2,
		EBattleFieldMarkingItemType_MAX = 3,
	};

	// Enum Breakthrough.ERankSkillBackgroundUIStyle
	// NumValues: 0x0005
	enum class ERankSkillBackgroundUIStyle : uint8
	{
		E_None = 0,
		E_CanUse = 1,
		E_CantUse = 2,
		E_Selected = 3,
		E_MAX = 4,
	};

	// Enum Breakthrough.EBattleFlagState
	// NumValues: 0x0006
	enum class EBattleFlagState : uint8
	{
		None = 0,
		Born = 1,
		Captured = 2,
		Dropped_AnchorCapture = 3,
		CoolingDown = 4,
		EBattleFlagState_MAX = 5,
	};

	// Enum Breakthrough.EBattleFlagAnchorState
	// NumValues: 0x0005
	enum class EBattleFlagAnchorState : uint8
	{
		None = 0,
		HasFlag = 1,
		NoFlag = 2,
		FlagBornCoolingDown = 3,
		EBattleFlagAnchorState_MAX = 4,
	};

	// Enum Breakthrough.EVehicleSceneWeaponType
	// NumValues: 0x0005
	enum class EVehicleSceneWeaponType : uint8
	{
		Vehicle = 0,
		SceneWeapon = 1,
		Skill = 2,
		FootSolider = 3,
		EVehicleSceneWeaponType_MAX = 4,
	};

	// Enum Breakthrough.EImpendingDeathClickTgLogType
	// NumValues: 0x0004
	enum class EImpendingDeathClickTgLogType : uint8
	{
		None = 0,
		GiveUpButtonClick = 1,
		MayDayButtonClick = 2,
		EImpendingDeathClickTgLogType_MAX = 3,
	};

	// Enum Breakthrough.EOnePlayerOneSectorTLogDataType
	// NumValues: 0x0014
	enum class EOnePlayerOneSectorTLogDataType : uint8
	{
		None = 0,
		RedeployStayTime = 1,
		SwitchHeroStayTime = 2,
		BackpackStayTime = 3,
		KillNum = 4,
		DeathNum = 5,
		Score = 6,
		SpawnRebornFlag = 7,
		TeammateRebornOnMyRebornFlag = 8,
		HalfJoinGame = 9,
		EnterSectorAnchorNum = 10,
		EnterSectorAnchorTime = 11,
		EnterSectorAnchorFightTime = 12,
		SupportSkillAssist = 13,
		SupportSkillKill = 14,
		SupportSkillNum = 15,
		SwitchBag = 16,
		SwitchArmItem = 17,
		BuildOneSatellitedish = 18,
		EOnePlayerOneSectorTLogDataType_MAX = 19,
	};

	// Enum Breakthrough.ERoundRedeployTLogDataType
	// NumValues: 0x0005
	enum class ERoundRedeployTLogDataType : uint8
	{
		None = 0,
		EnterFirstDeployViewTime = 1,
		BeginFirstDeployTime = 2,
		FirstOpenDeployViewTime = 3,
		ERoundRedeployTLogDataType_MAX = 4,
	};

	// Enum Breakthrough.ERescueFailureReason
	// NumValues: 0x0004
	enum class ERescueFailureReason : uint8
	{
		ERescue_None = 0,
		ERescue_Abandon_RescuerKilled = 1,
		ERescue_Abandon_RescuerGiveUp = 2,
		ERescue_MAX = 3,
	};

	// Enum Breakthrough.EExplodeType
	// NumValues: 0x0005
	enum class EExplodeType : uint8
	{
		PlayerSkill = 0,
		Vehicle = 1,
		FieldSupport = 2,
		FieldSupportMissile = 3,
		EExplodeType_MAX = 4,
	};

	// Enum Breakthrough.ESectorAnchorState
	// NumValues: 0x0005
	enum class ESectorAnchorState : uint8
	{
		DefendState = 0,
		DefendNeutral = 1,
		OffensiveNeutral = 2,
		OffensiveState = 3,
		ESectorAnchorState_MAX = 4,
	};

	// Enum Breakthrough.ERebornPositionType
	// NumValues: 0x0009
	enum class ERebornPositionType : uint8
	{
		None = 0,
		Base = 1,
		Anchor = 2,
		Teammate = 3,
		Beacon = 4,
		VehicleOnBase = 5,
		VehicleOnTeammate = 6,
		VehicleOnSameCamp = 7,
		ERebornPositionType_MAX = 8,
	};

	// Enum Breakthrough.EDynamicMusicCondition
	// NumValues: 0x0009
	enum class EDynamicMusicCondition : uint8
	{
		EInvalid = 0,
		EAttackerLeftVotes = 1,
		EDefenderLeftVotes = 2,
		ESectorOccupyProgress = 3,
		ELeftTime = 4,
		EOverTimeSectorOnlyOneAnchorOccupyProgress = 5,
		EOverTimeSectorMultiAnchorOccupyProgress = 6,
		EMax = 7,
		EDynamicMusicCondition_MAX = 8,
	};

	// Enum Breakthrough.ECommanderBeforeRedeployAudioType
	// NumValues: 0x000C
	enum class ECommanderBeforeRedeployAudioType : uint8
	{
		None = 0,
		CommandersShow = 1,
		RedeployHint = 2,
		NormalTeamAudio = 3,
		GoldTeamAudio = 4,
		SelectDutyHint = 5,
		SelectDutyTip = 6,
		NormalTeamMemberAudio = 7,
		GoldTeamMemberAudio = 8,
		TeamListShow = 9,
		ShowCoolSandBox = 10,
		ECommanderBeforeRedeployAudioType_MAX = 11,
	};

	// Enum Breakthrough.EBreakthroughNarrativeTipTriggerType
	// NumValues: 0x000A
	enum class EBreakthroughNarrativeTipTriggerType : uint8
	{
		None = 0,
		FirstDeploy = 1,
		SectorTrans = 2,
		SectorTransAndLastSectorBigEventHappen = 3,
		SectorTransAndLastSectorBigEventNotHappen = 4,
		SectorFightTicketReachX = 5,
		SectorFightTicketCostX = 6,
		SettlementBigEventHappen = 7,
		SettlementBigEventNotHappen = 8,
		EBreakthroughNarrativeTipTriggerType_MAX = 9,
	};

	// Enum Breakthrough.EBreakthroughTipType
	// NumValues: 0x00D7
	enum class EBreakthroughTipType : uint8
	{
		None = 0,
		BreakthroughGameStartOffence = 1,
		BreakthroughGameStartDefence = 2,
		BreakthroughGameOverOffenceVictory = 3,
		BreakthroughGameOverDefenceVictory = 4,
		BreakthroughGameOverOffenceDefeat = 5,
		BreakthroughGameOverDefenceDefeat = 6,
		BreakthroughHalfTimeRemain = 7,
		BreakthroughNoTime = 8,
		LeaveWarZoneTemporarily = 9,
		DieforLeaveWarZone = 10,
		BreakthroughSectorActivedOffence = 11,
		BreakthroughSectorActivedDefence = 12,
		BreakthroughSectorOccupyStatusChangedOffence = 13,
		BreakthroughSectorOccupyStatusChangedDefence = 14,
		BreakthroughSectorClear = 15,
		BreakthroughRetreatQuickly = 16,
		BreakthroughLastSectorActivedOffence = 17,
		BreakthroughLastSectorActivedDefence = 18,
		BreakthroughEnemyEnterOurSectorAnchor = 19,
		BreakthroughOurEnterEnemySectorAnchor = 20,
		BreakthroughEnemyTakeOverOccupyMoreThanHalf = 21,
		BreakthroughTakeOverOccupyMoreThanHalf = 22,
		EnemyTakeOverOccupySuccessfully = 23,
		TakeOverOccupySuccessfully = 24,
		BreakthroughLeftVotesRemaining80PercentOffence = 25,
		BreakthroughLeftVotesRemaining80PercentDefence = 26,
		BreakthroughLeftVotesRemaining50PercentOffence = 27,
		BreakthroughLeftVotesRemaining50PercentDefence = 28,
		BreakthroughLeftVotesRemaining25PercentOffence = 29,
		BreakthroughLeftVotesRemaining25PercentDefence = 30,
		BreakthroughLeftVotesRemaining15PercentOffence = 31,
		BreakthroughLeftVotesRemaining15PercentDefence = 32,
		BreakthroughEnemyLeftLowerThanX = 33,
		BreakthroughIceLandFirstRedeployOffence = 34,
		BreakthroughIceLandFirstRedeployDefence = 35,
		BreakthroughIceLandShipBlownIntoRedeploy = 36,
		BreakthroughIceLandShipNotBlownIntoRedeploy = 37,
		BreakthroughIceLandOffenseBaseStartOffence = 38,
		BreakthroughIceLandOffenseBaseStartDefence = 39,
		BreakthroughDesperateCounterattack = 40,
		BreakthroughOvertimeGameOffence = 41,
		BreakthroughOvertimeGameDefence = 42,
		BreakthroughOvertimeGameDefenderOccupyOneAnchorOffence = 43,
		BreakthroughOvertimeGameDefenderOccupyOneAnchorDefence = 44,
		BreakthroughWarTower3Active = 45,
		BreakthroughGuidedMissile = 46,
		BreakthroughSectorArtilerrate = 47,
		BreakthroughSectorSmoke = 48,
		BreakthroughVehicle = 49,
		BreakthroughRebornBeacons = 50,
		BreakthroughMidwayIntoTheGameOffence = 51,
		BreakthroughMidwayIntoTheGameDefence = 52,
		BreakthroughGuidedMissileReady = 53,
		BreakthroughSectorArtilerrateReady = 54,
		BreakthroughSectorSmokeReady = 55,
		BreakthroughVehicleReady = 56,
		BreakthroughRebornBeaconsReady = 57,
		BreakthroughCommanderSkillReady = 58,
		BreakthroughHighValueAnchorReady = 59,
		BreakthroughHighThreatVehicleReady = 60,
		BreakthroughFastDeployReady = 61,
		BreakthroughWarOrderTakeAnchorOrder = 62,
		BreakthroughWarOrderTakeAnchorStrong = 63,
		BreakthroughWarOrderKillTargetOrder = 64,
		BreakthroughWarOrderKillTargetStrong = 65,
		BreakthroughWarOrderBeTarget = 66,
		BreakthroughWarOrderKillTargetFinish = 67,
		BreakthroughWarOrderKillTargetCancel = 68,
		BreakthroughWarOrderTakeAnchorFinish = 69,
		BreakthroughBigEventCrackedWarehouseHappen = 70,
		BreakthroughBigEventIcelandTowerHappen = 71,
		BreakthroughBigEventIcelandTowerHP50Percent = 72,
		BreakthroughBigEventIcelandTowerHP30Percent = 73,
		BreakthroughBigEventIcelandSectorTrans = 74,
		BreakthroughBigEventIcelandSectorDisable = 75,
		BreakthroughBigEventGibraltarHappen = 76,
		BreakthroughSmallEventGibraltarFirstLine = 77,
		BreakthroughSmallEventGibraltarSecondLine = 78,
		BreakthroughTheLastSectorAnchorOffence = 79,
		BreakthroughTheLastSectorAnchorDefence = 80,
		BreakthroughEnemyEnterOurFinalSectorAnchor = 81,
		BreakthroughOurEnterEnemyFinalSectorAnchor = 82,
		ConquestMidwayIntoTheGame = 83,
		ConquestFriendlyOccupyOneSectorAddScore = 84,
		ConquestEnemyOccupyOneSectorAddScore = 85,
		ConquestFriendlyOccupyAllSector = 86,
		ConquestEnemyOccupyAllSector = 87,
		ConquestFriendlyOccupyMoreSector = 88,
		ConquestEnemyOccupyMoreSector = 89,
		ConquestFriendlyTicketTakeLead = 90,
		ConquestEnemyTicketTakeLead = 91,
		ConquestSoonLose = 92,
		ConquestSoonWin = 93,
		ConquestSectorOccupyStatusChangedOffence = 94,
		ConquestSectorOccupyStatusChangedDefence = 95,
		ConquestTicketReach25PercentLead = 96,
		ConquestTicketReach25PercentFall = 97,
		ConquestTicketReach50PercentLead = 98,
		ConquestTicketReach50PercentFall = 99,
		ConquestTicketReach75PercentLead = 100,
		ConquestTicketReach75PercentFall = 101,
		ConquestGameStartOffence = 102,
		ConquestGameStartDefence = 103,
		ConquestGameOverOffenceVictory = 104,
		ConquestGameOverDefenceVictory = 105,
		ConquestGameOverOffenceDefeat = 106,
		ConquestGameOverDefenceDefeat = 107,
		ConquestGameOverOffenceDraw = 108,
		ConquestGameOverDefenceDraw = 109,
		FlagGameOverOffenceVictory = 110,
		FlagGameOverDefenceVictory = 111,
		FlagGameOverOffenceDefeat = 112,
		FlagGameOverDefenceDefeat = 113,
		FlagGameOverOffenceDraw = 114,
		FlagGameOverDefenceDraw = 115,
		CaptureTheFlagCamp0 = 116,
		CaptureTheFlagCamp1 = 117,
		CaptureFlagWeDroppedTheFlag = 118,
		CaptureFlagEnemyDroppedTheFlag = 119,
		CaptureFlagWeCaptureTheFlag = 120,
		CaptureFlagEnemyCaptureTheFlag = 121,
		CaptureFlagSelfCaptureTheFlag = 122,
		CaptureFlagWeGoal = 123,
		CaptureFlagEnemyGoal = 124,
		CaptureFlagWeRefresh = 125,
		CaptureFlagEnemyRefresh = 126,
		CaptureFlagWeRefreshAfterOccupied = 127,
		CaptureFlagEnemyRefreshAfterOccupied = 128,
		SuperiorityCampTriggerAddTimeOnFlagMode = 129,
		InferiorCampTriggerAddTimeOnFlagMode = 130,
		CommanderBeLocalPlayer = 131,
		CommanderNew = 132,
		CommanderHighThreatBeTarget = 133,
		CommanderHighThreatTarget = 134,
		CommanderFinishHighThreat = 135,
		CommanderFailHighThreat = 136,
		CommanderTempOccupyConcentratedFireSectorAnchorFriend = 137,
		CommanderTempOccupyConcentratedFireSectorAnchorEnemy = 138,
		CommanderFinishHoldConcentratedFireSectorAnchor = 139,
		CommanderFinishTakeConcentratedFireSectorAnchor = 140,
		CommanderFailConcentratedFireSectorAnchor = 141,
		CommanderOursBeOurConcentratedFireSectorAnchor = 142,
		CommanderTheirsBeOurConcentratedFireSectorAnchor = 143,
		CommanderOursBeTheirConcentratedFireSectorAnchor = 144,
		CommanderTheirsBeTheirConcentratedFireSectorAnchor = 145,
		CommanderHighThreatOrder = 146,
		CommanderConcentratedFireSectorAnchorOrder = 147,
		CommanderUseFastDeploySkill = 148,
		CommanderFastDeploySkillReady = 149,
		CommanderFastDeployDuration = 150,
		CommanderEnemyUseFastDeploySkill = 151,
		TeamLeaderBeLocalPlayer = 152,
		TeamLeaderNew = 153,
		CommanderChannelAdd = 154,
		CommanderChannelRemove = 155,
		CommanderChannelAddForSelfCamp = 156,
		GuideMobileBroadcastBreakthroughAttack = 157,
		GuideMobileBroadcastBreakthroughDefend = 158,
		GuideMobileBroadcastConquest = 159,
		GuideMobileAnchorFirstStartCapture = 160,
		ChristmasAmmoBoxInteractionSuccess = 161,
		SpringFestSatellitedishFirstSuccess = 162,
		SpringFestSatellitedishEasterEgg1Success = 163,
		SpringFestSatellitedishFinalEasterEggSuccess = 164,
		NavalBattleIntercontinentalBallisticMissileLaunch = 165,
		NavalBattleIntercontinentalBallisticMissileExplode = 166,
		FaultFoggyWeatherPhaseOne = 167,
		FaultFoggyWeatherPhaseTwo = 168,
		CampVehicleNumAvailable = 169,
		FreeBuildCoastalDefenseArtillery = 170,
		FreeBuildAntiAircraftGuns = 171,
		FreeBuildBunker = 172,
		AutoTriggerType = 210,
		AutoTriggerType1 = 211,
		AutoTriggerType2 = 212,
		AutoTriggerType3 = 213,
		AutoTriggerType4 = 214,
		AutoTriggerType5 = 215,
		AutoTriggerType6 = 216,
		AutoTriggerType7 = 217,
		AutoTriggerType8 = 218,
		AutoTriggerType9 = 219,
		AutoTriggerType10 = 220,
		AutoTriggerType11 = 221,
		AutoTriggerType12 = 222,
		AutoTriggerType13 = 223,
		AutoTriggerType14 = 224,
		AutoTriggerType15 = 225,
		AutoTriggerType16 = 226,
		AutoTriggerType17 = 227,
		AutoTriggerType18 = 228,
		AutoTriggerType19 = 229,
		AutoTriggerType20 = 230,
		AutoTriggerType21 = 231,
		AutoTriggerType22 = 232,
		AutoTriggerType23 = 233,
		AutoTriggerType24 = 234,
		AutoTriggerType25 = 235,
		AutoTriggerType26 = 236,
		AutoTriggerType27 = 237,
		AutoTriggerType28 = 238,
		AutoTriggerType29 = 239,
		AutoTriggerType30 = 240,
		AutoTriggerType31 = 241,
		AutoTriggerType32 = 242,
		AutoTriggerType33 = 243,
		AutoTriggerType34 = 244,
		AutoTriggerType35 = 245,
		AutoTriggerType36 = 246,
		AutoTriggerType37 = 247,
		AutoTriggerType38 = 248,
		AutoTriggerType39 = 249,
		AutoTriggerType40 = 250,
		EBreakthroughTipType_MAX = 251,
	};

	// Enum Breakthrough.ERepositionReason
	// NumValues: 0x0006
	enum class ERepositionReason : uint8
	{
		None = 0,
		Expanding = 1,
		Retracting = 2,
		Insert = 3,
		Delete = 4,
		ERepositionReason_MAX = 5,
	};

	// Enum Breakthrough.EBattleSupportViewState
	// NumValues: 0x0006
	enum class EBattleSupportViewState : uint8
	{
		E_None = 0,
		E_FirstOpen = 1,
		E_Selected = 2,
		E_Cancled = 3,
		E_Closed = 4,
		E_MAX = 5,
	};

	// Enum Breakthrough.ERequestCancelAutoDeployReturnCode
	// NumValues: 0x0003
	enum class ERequestCancelAutoDeployReturnCode : uint8
	{
		Success = 0,
		Error_NotHighView = 1,
		ERequestCancelAutoDeployReturnCode_MAX = 2,
	};

	// Enum Breakthrough.ERequestLockTeammateLocationReturnCode
	// NumValues: 0x002B
	enum class ERequestLockTeammateLocationReturnCode : uint8
	{
		Success = 0,
		Error_RebornCharacterIsNull = 1,
		Error_RebornCharacterControllerIsNull = 2,
		Error_RebornCharacterNotSelf = 3,
		Error_HaveBeReborn = 4,
		Error_CharacterIsNull = 5,
		Error_OwnerPlayerStateIsNull = 6,
		Error_OwnerCharacterCampIsInvalid = 7,
		Error_GameStateIsNull = 8,
		Error_CurrentStageIsWaitingForPlayers = 9,
		Error_NotDead = 10,
		Error_CurrentStateIsNotHighView = 11,
		Error_InCD = 12,
		Error_SelectActorIdButNotFindActor = 13,
		Error_SelectEmpty = 14,
		Error_NotTeamPlayer = 15,
		Error_TeamPlayerDie = 16,
		Error_TeamPlayerInBattle = 17,
		Error_TeamPlayerCurrentStateCannotRedeploy = 18,
		Error_TeamPlayerNotInSafeZone = 19,
		Error_TeamPlayerInTransition = 20,
		Error_TeamPlayerInVehicle = 21,
		Error_VehicleFull = 22,
		Error_VehicleNotSelfCamp = 23,
		Error_VehicleNotInSafeZone = 24,
		Error_RebornFlagNotSelfCamp = 25,
		Error_RebornFlagNoAvailableTime = 26,
		Error_EnemySpawnAreaHub = 27,
		Error_SpawnAreaHubIsNotActive = 28,
		Error_SpawnAreaHubDisableFootSoldier = 29,
		Error_AnchorBeOccupy = 30,
		Error_SectorIsNotActive = 31,
		Error_PlayerDeployVehicleCD = 32,
		Error_LockedVehicleSpawnerNotInSpawnAreaHub = 33,
		Error_LockedVehicleSpawnerTypeNotMatch = 34,
		Error_VehicleTypeNotInSpawnAreaHub = 35,
		Error_VehicleSpawnerInCD = 36,
		Error_NoAvailableVehicleSpawner = 37,
		Error_VehicleSpawnerIsAlive = 38,
		Error_TeamMateNoSpace = 39,
		Error_SceneWeaponNotSameTeam = 40,
		Error_SwitchSceneWeaponToPlayerFailed = 41,
		ERequestLockTeammateLocationReturnCode_MAX = 42,
	};

	// Enum Breakthrough.ERequestRedeployReturnCode
	// NumValues: 0x0033
	enum class ERequestRedeployReturnCode : uint8
	{
		Success = 0,
		Error_RebornCharacterIsNull = 1,
		Error_RebornCharacterControllerIsNull = 2,
		Error_RebornCharacterNotSelf = 3,
		Error_HaveBeReborn = 4,
		Error_CharacterIsNull = 5,
		Error_OwnerPlayerStateIsNull = 6,
		Error_OwnerCharacterCampIsInvalid = 7,
		Error_CurrentArmBagHasDisableOrLockedWeaponItem = 8,
		Error_GameStateIsNull = 9,
		Error_CurrentStageIsWaitingForPlayers = 10,
		Error_NotDead = 11,
		Error_CurrentStateIsNotHighView = 12,
		Error_InCD = 13,
		Error_SelectActorIdButNotFindActor = 14,
		Error_SelectEmpty = 15,
		Error_SelectPlayerNotPreLock = 16,
		Error_SelectPlayerIdNotMatchPreLock = 17,
		Error_NotTeamPlayer = 18,
		Error_TeamPlayerDie = 19,
		Error_TeamPlayerInBattle = 20,
		Error_TeamPlayerCurrentStateCannotRedeploy = 21,
		Error_TeamPlayerNotInSafeZone = 22,
		Error_TeamPlayerInTransition = 23,
		Error_TeamPlayerInVehicle = 24,
		Error_VehicleIsDead = 25,
		Error_VehicleFull = 26,
		Error_VehicleNotSelfCamp = 27,
		Error_VehicleNotInSafeZone = 28,
		Error_RebornFlagNotSelfCamp = 29,
		Error_RebornFlagNoAvailableTime = 30,
		Error_NavMeshSystemIsNull = 31,
		Error_NavMeshIsNull = 32,
		Error_RebornFlagNotOnNavMesh = 33,
		Error_EnemySpawnAreaHub = 34,
		Error_SpawnAreaHubIsNotActive = 35,
		Error_SpawnAreaHubDisableFootSoldier = 36,
		Error_AnchorBeOccupy = 37,
		Error_SectorIsNotActive = 38,
		Error_PlayerDeployVehicleCD = 39,
		Error_PlayerDeployVehicleMoreSingleUseRestrict = 40,
		Error_LockedVehicleSpawnerNotInSpawnAreaHub = 41,
		Error_LockedVehicleSpawnerTypeNotMatch = 42,
		Error_VehicleTypeNotInSpawnAreaHub = 43,
		Error_VehicleSpawnerInCD = 44,
		Error_NoAvailableVehicleSpawner = 45,
		Error_VehicleSpawnerIsAlive = 46,
		Error_TeamMateNoSpace = 47,
		Error_SceneWeaponNotSameTeam = 48,
		Error_SwitchSceneWeaponToPlayerFailed = 49,
		ERequestRedeployReturnCode_MAX = 50,
	};

	// Enum Breakthrough.ERedeployLockVehicleReturnCode
	// NumValues: 0x0004
	enum class ERedeployLockVehicleReturnCode : uint8
	{
		Success = 0,
		Error_SelectActorIdButNotFindActor = 1,
		Error_NotVehicle = 2,
		ERedeployLockVehicleReturnCode_MAX = 3,
	};

	// Enum Breakthrough.ERedeployLockVehicleSpawnerReturnCode
	// NumValues: 0x000B
	enum class ERedeployLockVehicleSpawnerReturnCode : uint8
	{
		Success = 0,
		Error_PlayerInRedeployCD = 1,
		Error_PlayerControllerIsNull = 2,
		Error_PlayerCharacterIsNull = 3,
		Error_PlayerStateIsNull = 4,
		Error_SpawnAreaHubCampError = 5,
		Error_VehicleTypeNotInSpawnAreaHub = 6,
		Error_VehicleSpawnerInCD = 7,
		Error_NoAvailableVehicleSpawner = 8,
		Error_VehicleSpawnerIsAllDeployed = 9,
		ERedeployLockVehicleSpawnerReturnCode_MAX = 10,
	};

	// Enum Breakthrough.ERedeployStoreType
	// NumValues: 0x000A
	enum class ERedeployStoreType : uint8
	{
		ERedeployStore_None = 0,
		ERedeployStore_MainWeapon = 1,
		ERedeployStore_SecondaryWeapon = 2,
		ERedeployStore_MeleeWeapon = 3,
		ERedeployStore_ArmItem = 4,
		ERedeployStore_Vehicle = 5,
		ERedeployStore_WeaponPreset = 6,
		ERedeployStore_VehicleStore = 7,
		ERedeployStore_VehiclePartStore = 8,
		ERedeployStore_MAX = 9,
	};

	// Enum Breakthrough.EBreakthroughRedeployButtonState
	// NumValues: 0x0004
	enum class EBreakthroughRedeployButtonState : uint8
	{
		WaitDeploy = 5,
		Deploying = 6,
		Deployed = 7,
		EBreakthroughRedeployButtonState_MAX = 8,
	};

	// Enum Breakthrough.ECurStage
	// NumValues: 0x0005
	enum class ECurStage : uint8
	{
		PreTeamConstruct = 0,
		OnTeamConstruct1 = 1,
		OnTeamConstruct2 = 2,
		PostTeamConstruct = 3,
		ECurStage_MAX = 4,
	};

	// Enum Breakthrough.EPlayerGamePlayImageState
	// NumValues: 0x0008
	enum class EPlayerGamePlayImageState : uint8
	{
		None = 0,
		UsingMed = 1,
		Driving = 2,
		ArmForce = 3,
		Dead = 4,
		Disconnect = 5,
		QuitGame = 6,
		EPlayerGamePlayImageState_MAX = 7,
	};

	// Enum Breakthrough.ETeammateStateType
	// NumValues: 0x0008
	enum class ETeammateStateType : uint8
	{
		ETeammateStateType_Normal = 0,
		ETeammateStateType_Dying = 1,
		ETeammateStateType_Dead = 2,
		ETeammateStateType_Disconnect = 3,
		ETeammateStateType_Escaped = 4,
		ETeammateStateType_QuitGame = 5,
		ETeammateStateType_Count = 6,
		ETeammateStateType_MAX = 7,
	};

	// Enum Breakthrough.EBattleFlagAnchorUIState
	// NumValues: 0x0007
	enum class EBattleFlagAnchorUIState : uint8
	{
		None = 0,
		HasFlag = 1,
		NoFlag = 2,
		CoolingDown = 3,
		CaptureEnemyFlag = 4,
		CaptureEnemyFlagAndCoolingDown = 5,
		EBattleFlagAnchorUIState_MAX = 6,
	};

	// Enum Breakthrough.EBattleFlagAnchorTextState
	// NumValues: 0x0005
	enum class EBattleFlagAnchorTextState : uint8
	{
		None = 0,
		SelfCampAnchorHasFlag = 1,
		SelfCampAnchorAndSelfCaptureFlag = 2,
		EnemyCampAnchorHasFlag = 3,
		EBattleFlagAnchorTextState_MAX = 4,
	};

	// Enum Breakthrough.EBattleFlagTextState
	// NumValues: 0x0006
	enum class EBattleFlagTextState : uint8
	{
		None = 0,
		SelfCampFlagBeCaptured = 1,
		SelfCampFlagDroppedOrAvailable = 2,
		EnemyCampFlagBeCaptured = 3,
		EnemyCampFlagDroppedOrAvailable = 4,
		EBattleFlagTextState_MAX = 5,
	};

	// Enum Breakthrough.EChangeableStatusType
	// NumValues: 0x0004
	enum class EChangeableStatusType : uint8
	{
		None = 0,
		Christmas2024 = 1,
		SpringFestival2025 = 2,
		EChangeableStatusType_MAX = 3,
	};

	// Enum Breakthrough.ERecycleFreeBuildFortificationReturnCode
	// NumValues: 0x0009
	enum class ERecycleFreeBuildFortificationReturnCode : uint8
	{
		Success = 0,
		Error_OperatorCharacterNull = 1,
		Error_NoSkillConfig = 2,
		Error_GameStateNull = 3,
		Error_OperatorPlayerStateNull = 4,
		Error_NoAuthority = 5,
		Error_SceneWeaponNull = 6,
		Error_PlayerInSceneWeapon = 7,
		ERecycleFreeBuildFortificationReturnCode_MAX = 8,
	};

	// Enum Breakthrough.EFortificationBuildWeapon
	// NumValues: 0x0003
	enum class EFortificationBuildWeapon : uint8
	{
		EFortificationBuildWeapon_None = 0,
		EFortificationBuildWeapon_Hammer = 1,
		EFortificationBuildWeapon_MAX = 2,
	};

	// Enum Breakthrough.EFortificationType
	// NumValues: 0x0006
	enum class EFortificationType : uint8
	{
		EFortificationType_None = 0,
		EFortificationType_AmmoBox = 1,
		EFortificationType_SceneWeapon = 2,
		EFortificationType_BreakableItem = 3,
		EFortificationType_FreeConstruction = 4,
		EFortificationType_MAX = 5,
	};

	// Enum Breakthrough.EBreakthroughPlayerLifeStats
	// NumValues: 0x0013
	enum class EBreakthroughPlayerLifeStats : uint8
	{
		TotalFightAsCommander = 0,
		Commander_Win = 1,
		Commander_Gametime = 2,
		Commander_Score = 3,
		Commander_Kill = 4,
		Commander_Death = 5,
		Commander_Like = 6,
		Commander_Recommand = 7,
		Win_Ratio = 8,
		Kill_By_Vehicle_Per_Minute = 9,
		Defeat_By_Per_Minute = 10,
		Help_Per_Minute = 11,
		Percentile_Of_Win_Ration = 12,
		Percentile_Of_Kill_By_Vehicle_Per_Minute = 13,
		Percentile_Of_Defeat_By_Per_Minute = 14,
		Percentile_Of_Help_Per_Minute = 15,
		Commander_Play = 16,
		TotalNum = 17,
		EBreakthroughPlayerLifeStats_MAX = 18,
	};

	// Enum Breakthrough.EBreakthroughStage
	// NumValues: 0x000E
	enum class EBreakthroughStage : uint8
	{
		None = 0,
		LoadingMap = 1,
		WaitingForPlayers = 2,
		PreElection = 3,
		OnElection = 4,
		ElectionResult = 5,
		PreTeamConstruct = 6,
		OnTeamConstruct = 7,
		PostTeamConstruct = 8,
		PreMatch = 9,
		EntryCutscene = 10,
		Fighting = 11,
		BattleEnd = 12,
		EBreakthroughStage_MAX = 13,
	};

	// Enum Breakthrough.ESlotCompType
	// NumValues: 0x000A
	enum class ESlotCompType : uint8
	{
		ESlotCompType_None = 0,
		ESlotCompType_Countdown = 1,
		ESlotCompType_Using = 2,
		ESlotCompType_Selected = 3,
		ESlotCompType_SmallLock = 4,
		ESlotCompType_Ban = 5,
		ESlotCompType_CommonPoint = 6,
		ESlotCompType_OnlyDFIcon = 7,
		ESlotCompType_Custom = 8,
		ESlotCompType_MAX = 9,
	};

	// Enum Breakthrough.ERedeployZOrderInsideRedeployMarker
	// NumValues: 0x0005
	enum class ERedeployZOrderInsideRedeployMarker : uint8
	{
		None = 0,
		SelectQuad = 1,
		VehicleHub = 100,
		Top = 200,
		ERedeployZOrderInsideRedeployMarker_MAX = 201,
	};

	// Enum Breakthrough.ERedeployShowStage
	// NumValues: 0x0003
	enum class ERedeployShowStage : uint8
	{
		Global = 0,
		Zoom = 1,
		ERedeployShowStage_MAX = 2,
	};

	// Enum Breakthrough.ERedeployMarkerType
	// NumValues: 0x001E
	enum class ERedeployMarkerType : uint8
	{
		None = 0,
		SectorText = 1,
		CampPoint = 2,
		CampPointWithVehicle = 3,
		VehicleSelectQuad = 4,
		SameCampRebornFlag = 5,
		EnemyCampRebornFlag = 6,
		TeamDie = 7,
		SameCampDie = 8,
		EnemyCampDie = 9,
		VehiclePoint = 10,
		NeutralVehiclePoint = 11,
		EnemyCampVehiclePoint = 12,
		SameCampVehiclePoint = 13,
		TeamVehiclePoint = 14,
		EnemyCampPoint = 15,
		SameCampPoint = 16,
		TeammatePoint = 17,
		SameTeamLeader = 18,
		SectorAnchorInBattle = 19,
		SectorAnchorNormal = 20,
		RebornFlag = 21,
		SelectedPoint = 22,
		RandomReborn = 23,
		StaticPoint = 24,
		TeamStaticPoint = 25,
		CampStaticPoint = 26,
		EnemyStaticPoint = 27,
		CaptureFlagBase = 28,
		ERedeployMarkerType_MAX = 29,
	};

	// Enum Breakthrough.ERedeployKeybordMoveDirection
	// NumValues: 0x0006
	enum class ERedeployKeybordMoveDirection : uint8
	{
		None = 0,
		Up = 1,
		Down = 2,
		Left = 3,
		Right = 4,
		ERedeployKeybordMoveDirection_MAX = 5,
	};

	// Enum Breakthrough.EReDeployVehicleItemViewUnDeployReason
	// NumValues: 0x0006
	enum class EReDeployVehicleItemViewUnDeployReason : uint8
	{
		None = 0,
		TriggerSingleUseLimitation = 1,
		NoAvailableVehicle = 2,
		VehicleSpawnerCD = 3,
		PlayerDeployVehicleCD = 4,
		EReDeployVehicleItemViewUnDeployReason_MAX = 5,
	};

	// Enum Breakthrough.EFlagAudioType
	// NumValues: 0x0005
	enum class EFlagAudioType : uint8
	{
		E_Flag_Raise = 0,
		E_Flag_Down = 1,
		E_Flag_MoveDownStop = 2,
		E_Flag_MoveTopStop = 3,
		E_Flag_MAX = 4,
	};

	// Enum Breakthrough.EFlagStlyeType
	// NumValues: 0x0004
	enum class EFlagStlyeType : uint8
	{
		E_FlagNeutralType = 0,
		E_FlagDefenseType = 1,
		E_FlagOffenseType = 2,
		E_MAX = 3,
	};

	// Enum Breakthrough.ESectorAnchorFlagState
	// NumValues: 0x0007
	enum class ESectorAnchorFlagState : uint8
	{
		E_FlagDisActive = 0,
		E_FlagOwnedByDefense = 1,
		E_FlagDefenseLeading = 2,
		E_FlagNeutral = 3,
		E_FlagOffenseLeading = 4,
		E_FlagOwnedByOffense = 5,
		E_MAX = 6,
	};
















};
 
namespace GPGlobalDefines {




	// Enum GPGlobalDefines.EAdapterItemType
	// NumValues: 0x002C
	enum class EAdapterItemType : uint8
	{
		None = 0,
		Receiver = 1,
		GunBarral = 2,
		PistolGrip = 3,
		Stock = 4,
		Handguard = 5,
		Sight = 11,
		Magazine = 12,
		Muzzle = 13,
		Foregrip = 14,
		Underbarrel = 15,
		TacticalDevices = 16,
		Bipod = 17,
		ForSight = 18,
		RearSight = 19,
		Special = 20,
		SightBase = 21,
		Handle = 22,
		Attacker = 23,
		Connector = 24,
		Trigger = 25,
		PistolgripPatch = 26,
		CheekRest = 29,
		HandguardChip = 32,
		GripBass = 33,
		MagBass = 34,
		Flashkill = 37,
		Hammer = 38,
		GasT = 39,
		HanU = 40,
		Shield = 41,
		Bolt = 42,
		Handle2 = 43,
		BowLimb = 44,
		BowGrip = 45,
		Pendant = 46,
		BowString = 47,
		BowRelease = 48,
		ArrowRest = 50,
		BowScope = 51,
		Lever = 52,
		ShellHolder = 53,
		Ammo = 99,
		EAdapterItemType_MAX = 100,
	};

	// Enum GPGlobalDefines.EWeaponItemType
	// NumValues: 0x0012
	enum class EWeaponItemType : uint8
	{
		None = 0,
		Rifle = 1,
		Submachine = 2,
		Shotgun = 3,
		LightMachine = 4,
		PrecisionShootingRifle = 5,
		Sniper = 6,
		Pistol = 7,
		Heavy = 8,
		Melee = 10,
		EmptyHand = 11,
		VehicleGun = 12,
		Bow = 13,
		BlastShield = 14,
		CompoundBow = 15,
		HeavyMachineGun = 99,
		FlameThrower = 200,
		Max = 201,
	};

	// Enum GPGlobalDefines.EDFMGamePlayMode
	// NumValues: 0x0009
	enum class EDFMGamePlayMode : uint8
	{
		None = 0,
		GamePlayMode_SOL = 1,
		GamePlayMode_Raid = 2,
		GamePlayMode_IrisDiscovery = 3,
		GamePlayMode_Conquest = 4,
		GamePlayMode_Breakthrough = 5,
		GamePlayMode_SafeHouse = 6,
		GamePlayMode_Intro = 7,
		EDFMGamePlayMode_MAX = 8,
	};

	// Enum GPGlobalDefines.ESoundVisualizationType
	// NumValues: 0x005A
	enum class ESoundVisualizationType : uint8
	{
		ESVT_Default = 0,
		ESVT_None = 1,
		ESVT_Weapon_WeaponCommon = 2,
		ESVT_Weapon_MeleeWeaponCommon = 3,
		ESVT_Weapon_Fire = 4,
		ESVT_Weapon_SubFire = 5,
		ESVT_Weapon_Reload = 6,
		ESVT_Explosion = 7,
		ESVT_Character_SwitchAction = 8,
		ESVT_Character_SwitchAction_StandCrouch = 9,
		ESVT_FootStep_Common = 10,
		ESVT_FootStep_Walk = 11,
		ESVT_FootStep_Run = 12,
		ESVT_FootStep_Sprint = 13,
		ESVT_FootStep_Jump = 14,
		ESVT_FootStep_Land = 15,
		ESVT_FootStep_CrouchMove = 16,
		ESVT_FootStep_CrouchRun = 17,
		ESVT_FootStep_ProneMove = 18,
		ESVT_FootStep_ProneRun = 19,
		ESVT_FootStep_FractureMove = 20,
		ESVT_FootStep_FractureRun = 21,
		ESVT_FootStep_ClimbMove = 22,
		ESVT_FootStep_SlideTackle = 23,
		ESVT_FootStep_Swim = 24,
		ESVT_FootStep_SwimFast = 25,
		ESVT_FootStep_SwimUnderWater = 26,
		ESVT_FootStep_SwimFastUnderWater = 27,
		ESVT_FootStep_SwimIdle = 28,
		ESVT_FootStep_SwimIdleUnderWater = 29,
		ESVT_FootStep_SwimUp = 30,
		ESVT_FootStep_SwimDown = 31,
		ESVT_FootStep_SwimToLand = 32,
		ESVT_FootStep_LandToSwim = 33,
		ESVT_FootStep_FallingToSwimHigh = 34,
		ESVT_FootStep_FallingToSwimMid = 35,
		ESVT_FootStep_FallingToSwimLow = 36,
		ESVT_Interact_InteractCommon = 37,
		ESVT_Interact_OpenCloseDoor = 38,
		ESVT_Interact_BreakDoor = 39,
		ESVT_Interact_KickDoor = 40,
		ESVT_Interact_ReleaseLockDoor = 41,
		ESVT_Interact_HoldItem = 42,
		ESVT_Interact_UseItem = 43,
		ESVT_Interact_Looting = 44,
		ESVT_Interact_HackPC = 45,
		ESVT_Interact_ClimbLadder = 46,
		ESVT_Interact_Rescuing = 47,
		ESVT_Interact_Vaulting = 48,
		ESVT_Interact_CarryBody = 49,
		ESVT_Interact_FoliageOverlap = 50,
		ESVT_Interact_Parachute = 51,
		ESVT_Interact_Zipline = 52,
		ESVT_PlayerBreath = 53,
		ESVT_PlayerVoice = 54,
		ESVT_AIVoice = 55,
		ESVT_AI_FootStep_Common = 56,
		ESVT_AI_FootStep_Walk = 57,
		ESVT_AI_FootStep_Run = 58,
		ESVT_AI_FootStep_Sprint = 59,
		ESVT_AI_FootStep_Jump = 60,
		ESVT_AI_FootStep_Land = 61,
		ESVT_AI_FootStep_CrouchMove = 62,
		ESVT_AI_FootStep_CrouchRun = 63,
		ESVT_AI_FootStep_ProneMove = 64,
		ESVT_AI_FootStep_ProneRun = 65,
		ESVT_AI_FootStep_FractureMove = 66,
		ESVT_AI_FootStep_FractureRun = 67,
		ESVT_AI_FootStep_ClimbMove = 68,
		ESVT_AI_FootStep_SlideTackle = 69,
		ESVT_Vehicle_VehicleCommon = 70,
		ESVT_Vehicle_EngineerCar = 71,
		ESVT_Skill_Assault_BuffStart = 72,
		ESVT_SKill_Assault_DashStart = 73,
		ESVT_Skill_Engineer_MineActivate = 74,
		ESVT_Skill_Engineer_MineRecycle = 75,
		ESVT_Skill_Engineer_RobotStart = 76,
		ESVT_Skill_Engineer_WeldingIronGauze = 77,
		ESVT_Skill_Support_SelfCure = 78,
		ESVT_Skill_Scout_PathTracing = 79,
		ESVT_Skill_Engineer_WearAntiExplosion = 80,
		ESVT_Skill_Engineer_TakeOffAntiExplosion = 81,
		ESVT_Skill_Assault_SilenceZone = 82,
		ESVT_Skill_304_Roll = 83,
		ESVT_Skill_304_Rope = 84,
		ESVT_Skill_304_Passive = 85,
		ESVT_Vehicle_AIVehicleCommon = 86,
		ESVT_Skill_203_BionicSpy = 87,
		ESVT_NumMax = 88,
		ESVT_MAX = 89,
	};

	// Enum GPGlobalDefines.ELootingShare
	// NumValues: 0x0004
	enum class ELootingShare : uint8
	{
		Close = 0,
		TeamShare = 1,
		WholeTeamShare = 2,
		ELootingShare_MAX = 3,
	};

	// Enum GPGlobalDefines.ESensitivityType
	// NumValues: 0x0003
	enum class ESensitivityType : uint8
	{
		Normal = 0,
		Fire = 1,
		ESensitivityType_MAX = 2,
	};

	// Enum GPGlobalDefines.ESensitivityMode
	// NumValues: 0x0003
	enum class ESensitivityMode : uint8
	{
		FixedSpeed = 0,
		SpeedAcc = 1,
		ESensitivityMode_MAX = 2,
	};

	// Enum GPGlobalDefines.EAudioMasteringPCType
	// NumValues: 0x0004
	enum class EAudioMasteringPCType : uint8
	{
		HomeCinema = 0,
		Headphones = 1,
		NightMode = 2,
		Max = 3,
	};

	// Enum GPGlobalDefines.EAudioPresetPCType
	// NumValues: 0x0004
	enum class EAudioPresetPCType : uint8
	{
		Loudspeaker = 0,
		EarphoneStereo = 1,
		EarphoneDolbyAtmos = 2,
		Max = 3,
	};

	// Enum GPGlobalDefines.ELODLevel
	// NumValues: 0x0005
	enum class ELODLevel : uint8
	{
		Low = 0,
		Medium = 1,
		High = 2,
		Superhigh = 3,
		ELODLevel_MAX = 4,
	};

	// Enum GPGlobalDefines.EVehicleAimAssistMode
	// NumValues: 0x0004
	enum class EVehicleAimAssistMode : uint8
	{
		AllOpen = 0,
		AllClose = 1,
		Custom = 2,
		EVehicleAimAssistMode_MAX = 3,
	};

	// Enum GPGlobalDefines.ESecondWeaponFireBtn
	// NumValues: 0x0004
	enum class ESecondWeaponFireBtn : uint8
	{
		Close = 0,
		ChangeWeapon = 1,
		Fire = 2,
		ESecondWeaponFireBtn_MAX = 3,
	};

	// Enum GPGlobalDefines.EVehicleCannonLockMode
	// NumValues: 0x0004
	enum class EVehicleCannonLockMode : uint8
	{
		Close = 0,
		Click = 1,
		Press = 2,
		EVehicleCannonLockMode_MAX = 3,
	};

	// Enum GPGlobalDefines.ERollCameraMode
	// NumValues: 0x0003
	enum class ERollCameraMode : uint8
	{
		Click = 0,
		Mixed = 1,
		ERollCameraMode_MAX = 2,
	};

	// Enum GPGlobalDefines.EDriveAngle
	// NumValues: 0x0003
	enum class EDriveAngle : uint8
	{
		Follow = 0,
		Free = 1,
		EDriveAngle_MAX = 2,
	};

	// Enum GPGlobalDefines.EWeaponVehicleMode
	// NumValues: 0x0003
	enum class EWeaponVehicleMode : uint8
	{
		JoyStick = 0,
		Button = 1,
		EWeaponVehicleMode_MAX = 2,
	};

	// Enum GPGlobalDefines.EVehicleMode
	// NumValues: 0x0004
	enum class EVehicleMode : uint8
	{
		Button = 0,
		Glider = 1,
		JoyStick = 2,
		EVehicleMode_MAX = 3,
	};

	// Enum GPGlobalDefines.ESuperSprintControlMode
	// NumValues: 0x0003
	enum class ESuperSprintControlMode : uint8
	{
		LeftStick = 0,
		Button = 1,
		ESuperSprintControlMode_MAX = 2,
	};

	// Enum GPGlobalDefines.EMoveRunMode
	// NumValues: 0x0004
	enum class EMoveRunMode : uint8
	{
		LeftMoveRightFix = 0,
		LeftMoveRightFollow = 1,
		LeftFixRightFix = 2,
		EMoveRunMode_MAX = 3,
	};

	// Enum GPGlobalDefines.EJumpSplitMode
	// NumValues: 0x0004
	enum class EJumpSplitMode : uint8
	{
		Close = 0,
		BtnClick = 1,
		Slide = 2,
		EJumpSplitMode_MAX = 3,
	};

	// Enum GPGlobalDefines.ESensitivityChangeMode
	// NumValues: 0x0004
	enum class ESensitivityChangeMode : uint8
	{
		StartAim = 0,
		AfterOpenScope = 1,
		Transitional = 2,
		ESensitivityChangeMode_MAX = 3,
	};

	// Enum GPGlobalDefines.EFunctionBtnRotationMode
	// NumValues: 0x0004
	enum class EFunctionBtnRotationMode : uint8
	{
		AllOpen = 0,
		AllClose = 1,
		Custom = 2,
		EFunctionBtnRotationMode_MAX = 3,
	};

	// Enum GPGlobalDefines.ERightFireMode
	// NumValues: 0x0003
	enum class ERightFireMode : uint8
	{
		Follow = 0,
		Fixed = 1,
		ERightFireMode_MAX = 2,
	};

	// Enum GPGlobalDefines.ELeftJoystickMode
	// NumValues: 0x0003
	enum class ELeftJoystickMode : uint8
	{
		Follow = 0,
		Fixed = 1,
		ELeftJoystickMode_MAX = 2,
	};

	// Enum GPGlobalDefines.EKeyLayoutType
	// NumValues: 0x0004
	enum class EKeyLayoutType : uint8
	{
		Layout_0 = 0,
		Layout_1 = 1,
		Layout_2 = 2,
		Layout_MAX = 3,
	};

	// Enum GPGlobalDefines.EThrowMode
	// NumValues: 0x0004
	enum class EThrowMode : uint8
	{
		Default = 0,
		IdleToThrow = 1,
		DirectThrow = 2,
		EThrowMode_MAX = 3,
	};

	// Enum GPGlobalDefines.EFireBreakReload
	// NumValues: 0x0005
	enum class EFireBreakReload : uint8
	{
		Close = 0,
		BreakReload = 1,
		FireBreakReload = 2,
		MixReload = 3,
		EFireBreakReload_MAX = 4,
	};

	// Enum GPGlobalDefines.EGyroScopeOpenMode
	// NumValues: 0x0004
	enum class EGyroScopeOpenMode : uint8
	{
		AlwaysOpen = 0,
		Close = 1,
		OpenWhenAim = 2,
		EGyroScopeOpenMode_MAX = 3,
	};

	// Enum GPGlobalDefines.ESilentWalkInputMode
	// NumValues: 0x0005
	enum class ESilentWalkInputMode : uint8
	{
		Close = 0,
		ButtonToggle = 1,
		RouletteToggle = 2,
		Blend = 3,
		ESilentWalkInputMode_MAX = 4,
	};

	// Enum GPGlobalDefines.EAutoCrossMode
	// NumValues: 0x0004
	enum class EAutoCrossMode : uint8
	{
		Close = 0,
		LowObstacle = 1,
		HighObstacle = 2,
		EAutoCrossMode_MAX = 3,
	};

	// Enum GPGlobalDefines.EScopeBreathMode
	// NumValues: 0x0004
	enum class EScopeBreathMode : uint8
	{
		AllOpen = 0,
		AllClose = 1,
		Custom = 2,
		EScopeBreathMode_MAX = 3,
	};

	// Enum GPGlobalDefines.EQuickScopeOpenMode
	// NumValues: 0x0004
	enum class EQuickScopeOpenMode : uint8
	{
		AllOpen = 0,
		AllClose = 1,
		Custom = 2,
		EQuickScopeOpenMode_MAX = 3,
	};

	// Enum GPGlobalDefines.EScopeOpenMode
	// NumValues: 0x0004
	enum class EScopeOpenMode : uint8
	{
		Click = 0,
		Hold = 1,
		Mix = 2,
		EScopeOpenMode_MAX = 3,
	};

	// Enum GPGlobalDefines.EFireMode
	// NumValues: 0x0003
	enum class EFireMode : uint8
	{
		Press = 0,
		Release = 1,
		EFireMode_MAX = 2,
	};

	// Enum GPGlobalDefines.EHitEffectColor
	// NumValues: 0x0008
	enum class EHitEffectColor : uint8
	{
		Default = 0,
		Color1 = 1,
		Color2 = 2,
		Color3 = 3,
		Color4 = 4,
		Color5 = 5,
		Color6 = 6,
		EHitEffectColor_MAX = 7,
	};

	// Enum GPGlobalDefines.EVehicleSensitivityMode
	// NumValues: 0x0008
	enum class EVehicleSensitivityMode : uint8
	{
		NONE = 0,
		Vehicle_Driver_FPP = 1,
		Vehicle_Driver_TPP = 2,
		Vehicle_Weapon_Passenger_FPP = 3,
		Vehicle_Weapon_Passenger_TPP = 4,
		Helicopter_Driver_FPP = 5,
		Helicopter_Driver_TPP = 6,
		EVehicleSensitivityMode_MAX = 7,
	};

	// Enum GPGlobalDefines.EGamepadSensitivityPresetType
	// NumValues: 0x0005
	enum class EGamepadSensitivityPresetType : uint8
	{
		Custom = 0,
		Slow = 1,
		Middle = 2,
		Fast = 3,
		EGamepadSensitivityPresetType_MAX = 4,
	};

	// Enum GPGlobalDefines.ESideAimingControlMode
	// NumValues: 0x0004
	enum class ESideAimingControlMode : uint8
	{
		MixWithAim = 0,
		SeparateSame = 1,
		SeparateDiff = 2,
		ESideAimingControlMode_MAX = 3,
	};

	// Enum GPGlobalDefines.ESensitivityModeHD
	// NumValues: 0x0005
	enum class ESensitivityModeHD : uint8
	{
		MDVOnly = 0,
		MDVXADS = 1,
		ZoomratedMDV = 2,
		ADSOnly = 3,
		ESensitivityModeHD_MAX = 4,
	};

	// Enum GPGlobalDefines.EGamepadReloadInteractMode
	// NumValues: 0x0005
	enum class EGamepadReloadInteractMode : uint8
	{
		TapReload_HoldInteract = 0,
		TapInteract_HoldReload = 1,
		PreferInteract = 2,
		PreferReload = 3,
		EGamepadReloadInteractMode_MAX = 4,
	};

	// Enum GPGlobalDefines.ECrossplayType
	// NumValues: 0x0004
	enum class ECrossplayType : uint8
	{
		Disabled = 0,
		Enabled_WithConsole = 1,
		Enabled_WithPC = 2,
		ECrossplayType_MAX = 3,
	};

	// Enum GPGlobalDefines.EAirCraftScopeMode
	// NumValues: 0x0003
	enum class EAirCraftScopeMode : uint8
	{
		Follow = 0,
		Seperate = 1,
		EAirCraftScopeMode_MAX = 2,
	};

	// Enum GPGlobalDefines.ELootSharing
	// NumValues: 0x0004
	enum class ELootSharing : uint8
	{
		Close = 0,
		SmallTeamShare = 1,
		WholeTeamShare = 2,
		ELootSharing_MAX = 3,
	};

	// Enum GPGlobalDefines.EInputDeadZoneType
	// NumValues: 0x0004
	enum class EInputDeadZoneType : uint8
	{
		Invalid = 0,
		BaseOutermostSensitivity = 1,
		ADSOutermostSensitivity = 2,
		EInputDeadZoneType_MAX = 3,
	};

	// Enum GPGlobalDefines.EGamepadSensitivityCurveType
	// NumValues: 0x0004
	enum class EGamepadSensitivityCurveType : uint8
	{
		SlowToFast = 0,
		Linear = 1,
		FastToSlow = 2,
		EGamepadSensitivityCurveType_MAX = 3,
	};

	// Enum GPGlobalDefines.EMouseSensitivityMode
	// NumValues: 0x0006
	enum class EMouseSensitivityMode : uint8
	{
		ENormalWeapon = 0,
		EVehicleDriveWeapon = 1,
		EHelicopterDriveWeapon = 2,
		EVehicleWeapon = 3,
		EJet = 4,
		EMouseSensitivityMode_MAX = 5,
	};

	// Enum GPGlobalDefines.ESystemSettingApplyMode
	// NumValues: 0x0005
	enum class ESystemSettingApplyMode : uint8
	{
		Immediate = 0,
		ManullyConfirm = 1,
		Restart = 2,
		OutOfGame = 3,
		ESystemSettingApplyMode_MAX = 4,
	};

	// Enum GPGlobalDefines.ESystemSettingInputTypeHD
	// NumValues: 0x0011
	enum class ESystemSettingInputTypeHD : uint8
	{
		None = 0,
		Switcher = 1,
		FloatValue = 2,
		IntValue = 3,
		DropDown = 4,
		DynamicDropDown = 5,
		Volume = 6,
		Reserve1 = 7,
		Reserve2 = 8,
		Reserve3 = 9,
		Reserve4 = 10,
		Reserve5 = 11,
		Reserve6 = 12,
		Reserve7 = 13,
		Reserve8 = 14,
		Custom = 15,
		ESystemSettingInputTypeHD_MAX = 16,
	};

	// Enum GPGlobalDefines.ESystemSettingDescTemplateHD
	// NumValues: 0x000C
	enum class ESystemSettingDescTemplateHD : uint8
	{
		None = 0,
		Simple = 1,
		DropDown = 2,
		KeySettingItem = 3,
		Reserve3 = 4,
		Reserve4 = 5,
		Reserve5 = 6,
		Reserve6 = 7,
		Reserve7 = 8,
		Reserve8 = 9,
		Custom = 10,
		ESystemSettingDescTemplateHD_MAX = 11,
	};

	// Enum GPGlobalDefines.EInt
	// NumValues: 0x000E
	enum class EInt : uint8
	{
		Zero = 0,
		One = 1,
		Two = 2,
		Three = 3,
		Four = 4,
		Five = 5,
		Six = 6,
		Seven = 7,
		Eight = 8,
		Nine = 9,
		Ten = 10,
		Eleven = 11,
		Twelve = 12,
		EInt_MAX = 13,
	};

	// Enum GPGlobalDefines.ECharacterType
	// NumValues: 0x0004
	enum class ECharacterType : uint8
	{
		ENone = 0,
		ECharacter = 1,
		EAlarmTower = 2,
		ECharacterType_MAX = 3,
	};

	// Enum GPGlobalDefines.EDynamicUObjectRootType
	// NumValues: 0x0004
	enum class EDynamicUObjectRootType : uint8
	{
		Gameplay = 0,
		Persistent = 1,
		ClientSeamless = 2,
		EDynamicUObjectRootType_MAX = 3,
	};

	// Enum GPGlobalDefines.ESeamlessFlag
	// NumValues: 0x0004
	enum class ESeamlessFlag : uint8
	{
		SF_AutoDestroy = 0,
		SF_NeedDestroyAfterSeamless = 1,
		SF_KeepInAllStage = 2,
		SF_MAX = 3,
	};

	// Enum GPGlobalDefines.ESeamlessStage
	// NumValues: 0x0005
	enum class ESeamlessStage : uint8
	{
		Stage_None = 0,
		Stage_ClientOnly = 1,
		Stage_DedicatedServer = 2,
		Stage_Standalone = 3,
		Stage_MAX = 4,
	};

	// Enum GPGlobalDefines.EHeroMeshType
	// NumValues: 0x0005
	enum class EHeroMeshType : uint8
	{
		None = 0,
		Fpp = 1,
		Tpp = 2,
		UI = 3,
		EHeroMeshType_MAX = 4,
	};

	// Enum GPGlobalDefines.EDFMGamePlaySubMode
	// NumValues: 0x0008
	enum class EDFMGamePlaySubMode : uint8
	{
		None = 0,
		GamePlaySubMode_TacticalConquest = 1,
		GamePlaySubMode_CaptureFlag = 2,
		GamePlaySubMode_Arena = 3,
		GamePlaySubMode_Commander = 4,
		GamePlaySubMode_TacticalConquest_Evolution = 5,
		GamePlaySubMode_AirGround = 6,
		EDFMGamePlaySubMode_MAX = 7,
	};

	// Enum GPGlobalDefines.ESoundTypeIcon
	// NumValues: 0x0005
	enum class ESoundTypeIcon : uint8
	{
		ESTI_None = 0,
		ESTI_Ability = 1,
		ESTI_Medicine = 2,
		ESTI_Swim = 3,
		ESTI_MAX = 4,
	};

	// Enum GPGlobalDefines.ENumberIncreaseType
	// NumValues: 0x0005
	enum class ENumberIncreaseType : uint8
	{
		Linear = 0,
		Sqrt = 1,
		CustomedCurve = 2,
		RandomThenSteadyFromTail = 3,
		ENumberIncreaseType_MAX = 4,
	};

	// Enum GPGlobalDefines.EMarkerEdgeTrackType
	// NumValues: 0x0004
	enum class EMarkerEdgeTrackType : uint8
	{
		None = 0,
		TrackWhenOutEdge = 1,
		TrackWhenOutScreen = 2,
		EMarkerEdgeTrackType_MAX = 3,
	};

	// Enum GPGlobalDefines.EMarkerEdgeType
	// NumValues: 0x0007
	enum class EMarkerEdgeType : uint8
	{
		None = 0,
		MobileCustomCircle = 1,
		HDCustomScreenEdge = 2,
		CenterSmallCircle = 3,
		BigEllipse = 4,
		HDScreenEdge = 5,
		EMarkerEdgeType_MAX = 6,
	};

	// Enum GPGlobalDefines.ENZLogLevel
	// NumValues: 0x0005
	enum class ENZLogLevel : uint8
	{
		LogLevel_Log = 0,
		LogLevel_Warning = 1,
		LogLevel_Error = 2,
		LogLevel_Fatal = 3,
		LogLevel_MAX = 4,
	};

	// Enum GPGlobalDefines.ETurnInfo
	// NumValues: 0x0004
	enum class ETurnInfo : uint8
	{
		TurnInfo_None = 0,
		TurnInfo_Left = 1,
		TurnInfo_Right = 2,
		TurnInfo_MAX = 3,
	};

	// Enum GPGlobalDefines.EWeaponHand
	// NumValues: 0x0005
	enum class EWeaponHand : uint8
	{
		HAND_Right = 0,
		HAND_Left = 1,
		HAND_Center = 2,
		HAND_Hidden = 3,
		HAND_MAX = 4,
	};

	// Enum GPGlobalDefines.EInputMode
	// NumValues: 0x0005
	enum class EInputMode : uint8
	{
		EIM_None = 0,
		EIM_GameOnly = 1,
		EIM_GameAndUI = 2,
		EIM_UIOnly = 3,
		EIM_MAX = 4,
	};

	// Enum GPGlobalDefines.EClientSyncCustomData
	// NumValues: 0x0003
	enum class EClientSyncCustomData : uint8
	{
		ENone = 0,
		EDoorData = 1,
		EClientSyncCustomData_MAX = 2,
	};

	// Enum GPGlobalDefines.EGPTriggerAuth
	// NumValues: 0x0004
	enum class EGPTriggerAuth : uint8
	{
		Unkown = 0,
		ClientOnly = 1,
		Authority = 2,
		EGPTriggerAuth_MAX = 3,
	};

	// Enum GPGlobalDefines.EGPTriggerMode
	// NumValues: 0x000C
	enum class EGPTriggerMode : uint8
	{
		AnyAny = 0,
		Player1 = 1,
		Player2 = 2,
		Player3 = 3,
		Player4 = 4,
		PlayerAny = 5,
		VehicleAny = 6,
		EnemyAny = 7,
		SpecialActor = 8,
		LevelEnvEvent = 9,
		Custom = 255,
		EGPTriggerMode_MAX = 256,
	};

	// Enum GPGlobalDefines.EVehicleAbilityType
	// NumValues: 0x000B
	enum class EVehicleAbilityType : uint8
	{
		EVAT_DefaultTrue = 0,
		EVAT_DefaultFalse = 1,
		EVAT_USESkillCommon = 2,
		EVAT_BeDamageCommon = 3,
		ESVT_BeScan = 4,
		ESVT_ExtraFireNotLeanout = 5,
		EVAT_BattleFieldSkill = 6,
		ESVT_BePassiveMove = 7,
		ESVT_ForbidBePassiveMove = 8,
		ESVT_NumMax = 9,
		EVehicleAbilityType_MAX = 10,
	};

	// Enum GPGlobalDefines.EGPVehicleDamageType
	// NumValues: 0x0004
	enum class EGPVehicleDamageType : uint8
	{
		Default = 0,
		LightDamage = 1,
		HeavyDamage = 2,
		EGPVehicleDamageType_MAX = 3,
	};

	// Enum GPGlobalDefines.EGPVehicleArmorType
	// NumValues: 0x0012
	enum class EGPVehicleArmorType : uint8
	{
		Default = 0,
		Light = 1,
		LightMiddle = 2,
		Middle = 3,
		Heavy = 4,
		Raid = 5,
		RaidTankBoss = 6,
		LittleBird = 7,
		SOLHelicopter = 8,
		FSV = 9,
		GTQ35 = 10,
		AgainstBoat_SOL = 11,
		MotorBoat_SOL = 12,
		F35 = 13,
		SceneWeapon = 14,
		AAV7 = 15,
		Num = 16,
		EGPVehicleArmorType_MAX = 17,
	};

	// Enum GPGlobalDefines.EVehicleSeatType
	// NumValues: 0x0005
	enum class EVehicleSeatType : uint8
	{
		None = 0,
		MachineGun = 1,
		Drive = 2,
		Ride = 3,
		EVehicleSeatType_MAX = 4,
	};

	// Enum GPGlobalDefines.ECustomVehicleType
	// NumValues: 0x0004
	enum class ECustomVehicleType : uint8
	{
		None = 0,
		CustomAirVehicle = 1,
		CustomGroundVehicle = 2,
		ECustomVehicleType_MAX = 3,
	};

	// Enum GPGlobalDefines.EVehicleDeployType
	// NumValues: 0x0009
	enum class EVehicleDeployType : uint8
	{
		None = 0,
		LightVehicle = 10,
		ArmoredVehicle = 20,
		LightArmor = 30,
		HeavyVehicle = 40,
		AirTransport = 50,
		AttackHelicopter = 60,
		Fighter = 70,
		EVehicleDeployType_MAX = 71,
	};

	// Enum GPGlobalDefines.EAnimVehicleType
	// NumValues: 0x0018
	enum class EAnimVehicleType : uint8
	{
		BaseCar = 0,
		UNTruck = 1,
		TutuCar = 2,
		Jeep = 3,
		Valkyrie = 4,
		Boat = 5,
		MilitaryJeep = 6,
		Tank = 7,
		Helicopter = 8,
		Infantry = 9,
		SPAAG = 10,
		ATV = 11,
		ORV = 12,
		Humvee = 13,
		ArmedPickup = 14,
		OldCity_ArmoredCar = 15,
		OldCity_BossTank = 16,
		Wheel_Tank = 17,
		Bird_Helicopter = 18,
		Jet = 19,
		GTQ35 = 20,
		MotorBoat = 21,
		NoVehicle = 255,
		EAnimVehicleType_MAX = 256,
	};

	// Enum GPGlobalDefines.EDFMVehicleClassType
	// NumValues: 0x0005
	enum class EDFMVehicleClassType : uint8
	{
		VehicleType_None = 0,
		VehicleClassType_Ground = 1,
		VehicleClassType_Water = 2,
		VehicleClassType_Sky = 3,
		EDFMVehicleClassType_MAX = 4,
	};

	// Enum GPGlobalDefines.ECollectionItemType
	// NumValues: 0x000D
	enum class ECollectionItemType : uint8
	{
		None = 0,
		DailyNecessities = 1,
		ToolAndMaterial = 2,
		Electronic = 3,
		Other = 4,
		Key = 5,
		MedKit = 6,
		Intelligence = 7,
		Valuable = 8,
		Narrative = 9,
		TreasureMap = 10,
		Archive = 11,
		ECollectionItemType_MAX = 12,
	};

	// Enum GPGlobalDefines.EVehicleAimAssistType
	// NumValues: 0x0006
	enum class EVehicleAimAssistType : uint8
	{
		None = 0,
		GroundVehicle = 1,
		Helicopter = 2,
		Jet = 3,
		Gunner = 4,
		EVehicleAimAssistType_MAX = 5,
	};

	// Enum GPGlobalDefines.EWeaponExtraModelType
	// NumValues: 0x0012
	enum class EWeaponExtraModelType : uint8
	{
		None = 0,
		ForSight = 1,
		RearSight = 2,
		Handle = 3,
		Cheek = 4,
		Rail = 5,
		MagWell = 6,
		Rgrip = 7,
		Muzzle = 8,
		Shield = 20,
		Adapter = 22,
		Gas = 23,
		Pad = 24,
		Patch = 26,
		RailCover = 32,
		Fgrip = 33,
		Skin = 99,
		EWeaponExtraModelType_MAX = 100,
	};

	// Enum GPGlobalDefines.EGadgetItemSubType
	// NumValues: 0x0003
	enum class EGadgetItemSubType : uint8
	{
		None = 0,
		AmmoBox = 1,
		EGadgetItemSubType_MAX = 2,
	};

	// Enum GPGlobalDefines.EEquipmentItemType
	// NumValues: 0x0007
	enum class EEquipmentItemType : uint8
	{
		HELMET = 1,
		BreastPlate = 5,
		ChestHanging = 7,
		Bag = 8,
		SafeBox = 9,
		KeyChain = 12,
		EEquipmentItemType_MAX = 13,
	};

	// Enum GPGlobalDefines.EItemMainType
	// NumValues: 0x0019
	enum class EItemMainType : uint8
	{
		ItemMainType_None = 0,
		ItemMainType_Weapon = 10,
		ItemMainType_Equip = 11,
		ItemMainType_WeaponExtraModel = 12,
		ItemMainType_Adapter = 13,
		ItemMainType_Medicine = 14,
		ItemMainType_Collection = 15,
		ItemMainType_Sundry = 16,
		ItemMainType_Box = 17,
		ItemMainType_WeaponStruct = 18,
		ItemMainType_Food = 19,
		ItemMainType_WeaponThrowable = 21,
		ItemMainType_Perk = 22,
		ItemMainType_GadgetItem = 24,
		ItemMainType_ItemSkill = 25,
		ItemMainType_WeaponSkin = 28,
		ItemMainType_Fashion = 30,
		ItemMainType_PoorWeapon = 31,
		ItemMainType_Ammo = 37,
		ItemMainType_Commercialize = 38,
		ItemMainType_Vehicle = 39,
		ItemMainType_VehicleAdapter = 40,
		ItemMainType_VehicleSkin = 41,
		ItemMainType_Hero = 88,
		ItemMainType_MAX = 89,
	};

	// Enum GPGlobalDefines.ESightTelescopeType
	// NumValues: 0x000B
	enum class ESightTelescopeType : uint8
	{
		NoGlass = 0,
		RedSpot = 1,
		MechinicalAim = 2,
		VSS = 3,
		Scale_1 = 4,
		Scale_2 = 5,
		Scale_3 = 6,
		Scale_4 = 7,
		Scale_6 = 8,
		Scale_8 = 9,
		Max = 10,
	};

	// Enum GPGlobalDefines.EScreenAdaptorMode
	// NumValues: 0x0003
	enum class EScreenAdaptorMode : uint8
	{
		Corner = 0,
		RoundCorner = 1,
		EScreenAdaptorMode_MAX = 2,
	};

	// Enum GPGlobalDefines.EPlayerGuideStage
	// NumValues: 0x0005
	enum class EPlayerGuideStage : uint8
	{
		FirstLogin = 0,
		TrainingMatch = 1,
		WormUpMatch = 2,
		GuideStageEnd = 3,
		EPlayerGuideStage_MAX = 4,
	};

	// Enum GPGlobalDefines.EBeginerLevel
	// NumValues: 0x0005
	enum class EBeginerLevel : uint8
	{
		None = 0,
		Beginer = 1,
		Regular = 2,
		Master = 3,
		EBeginerLevel_MAX = 4,
	};

	// Enum GPGlobalDefines.EHandleMode
	// NumValues: 0x0004
	enum class EHandleMode : uint8
	{
		Mode_1 = 0,
		Mode_2 = 1,
		Mode_3 = 2,
		Mode_MAX = 3,
	};

	// Enum GPGlobalDefines.ERightHandFireMode
	// NumValues: 0x0004
	enum class ERightHandFireMode : uint8
	{
		Fixed = 0,
		Follow = 1,
		Closed = 2,
		ERightHandFireMode_MAX = 3,
	};

	// Enum GPGlobalDefines.EHudSubMode
	// NumValues: 0x0005
	enum class EHudSubMode : uint8
	{
		Mode_1 = 0,
		Mode_2 = 1,
		Mode_3 = 2,
		Mode_4 = 3,
		Mode_MAX = 4,
	};

	// Enum GPGlobalDefines.EHudMode
	// NumValues: 0x0004
	enum class EHudMode : uint8
	{
		Mode_1 = 0,
		Mode_2 = 1,
		Mode_3 = 2,
		Mode_MAX = 3,
	};

	// Enum GPGlobalDefines.EMedicineSort
	// NumValues: 0x0004
	enum class EMedicineSort : uint8
	{
		Mode_1 = 0,
		Mode_2 = 1,
		Mode_3 = 2,
		Mode_MAX = 3,
	};

	// Enum GPGlobalDefines.EOperationMode
	// NumValues: 0x0005
	enum class EOperationMode : uint8
	{
		Mode_1 = 0,
		Mode_2 = 1,
		Mode_3 = 2,
		Mode_4 = 3,
		Mode_MAX = 4,
	};

	// Enum GPGlobalDefines.EGyroMode
	// NumValues: 0x0004
	enum class EGyroMode : uint8
	{
		Closed = 0,
		Always = 1,
		WhenAim = 2,
		EGyroMode_MAX = 3,
	};

	// Enum GPGlobalDefines.EAimMethod
	// NumValues: 0x0003
	enum class EAimMethod : uint8
	{
		Click = 0,
		Pressing = 1,
		EAimMethod_MAX = 2,
	};

	// Enum GPGlobalDefines.ESideShootMethod
	// NumValues: 0x0003
	enum class ESideShootMethod : uint8
	{
		Click = 0,
		Pressing = 1,
		ESideShootMethod_MAX = 2,
	};

	// Enum GPGlobalDefines.ESideShootMode
	// NumValues: 0x0004
	enum class ESideShootMode : uint8
	{
		Closed = 0,
		Always = 1,
		WhenAim = 2,
		ESideShootMode_MAX = 3,
	};

	// Enum GPGlobalDefines.ELeftHandFireMode
	// NumValues: 0x0004
	enum class ELeftHandFireMode : uint8
	{
		Closed = 0,
		Always = 1,
		WhenAim = 2,
		ELeftHandFireMode_MAX = 3,
	};

	// Enum GPGlobalDefines.ESwitchOnOff
	// NumValues: 0x0004
	enum class ESwitchOnOff : uint64
	{
		Unknown = 18446744073709551615,
		Off = 0,
		On = 1,
		ESwitchOnOff_MAX = 2,
	};

	// Enum GPGlobalDefines.ERotationMethodType
	// NumValues: 0x0006
	enum class ERotationMethodType : uint8
	{
		ERotationMethodType_NZM = 0,
		ERotationMethodType_DFMCommon = 1,
		ERotationMethodType_DFMDistanceAcceleration = 2,
		ERotationMethodType_DFMSpeedAcceleration = 3,
		ERotationMethodType_DFMBlend = 4,
		ERotationMethodType_MAX = 5,
	};

	// Enum GPGlobalDefines.ERotationSensitivityCatagoryType
	// NumValues: 0x0004
	enum class ERotationSensitivityCatagoryType : uint8
	{
		ERotationMethodType_Low = 0,
		ERotationMethodType_Middle = 1,
		ERotationMethodType_High = 2,
		ERotationMethodType_MAX = 3,
	};

	// Enum GPGlobalDefines.EVehicleAssistAimConfigGroup
	// NumValues: 0x0004
	enum class EVehicleAssistAimConfigGroup : uint32
	{
		EVAACG_Default = 0,
		EVAACG_Helicopter = 1,
		EVAACG_Jet = 2,
		EVAACG_MAX = 3,
	};



};
 
namespace AllStructSDK
{

	// ScriptStruct CoreUObject.Vector2D
// 0x0008 (0x0008 - 0x0000)
	struct FVector2D
	{
	public:
		using UnderlayingType = float;

		float                                         X;                                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Y;                                                 // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	public:
		constexpr FVector2D(UnderlayingType X = 0, UnderlayingType Y = 0)
			: X(X), Y(Y)
		{
		}
		constexpr FVector2D(const FVector2D& other)
			: X(other.X), Y(other.Y)
		{
		}
		FVector2D& Normalize()
		{
			*this /= Magnitude();

			return *this;
		}
		FVector2D& operator*=(UnderlayingType Scalar)
		{
			*this = *this * Scalar;

			return *this;
		}
		FVector2D& operator*=(const FVector2D& Other)
		{
			*this = *this * Other;

			return *this;
		}
		FVector2D& operator+=(const FVector2D& Other)
		{
			*this = *this + Other;

			return *this;
		}
		FVector2D& operator-=(const FVector2D& Other)
		{
			*this = *this - Other;

			return *this;
		}
		FVector2D& operator/=(UnderlayingType Scalar)
		{
			*this = *this / Scalar;

			return *this;
		}
		FVector2D& operator/=(const FVector2D& Other)
		{
			*this = *this / Other;

			return *this;
		}
		FVector2D& operator=(const FVector2D& other)
		{
			X = other.X;
			Y = other.Y;

			return *this;
		}

		UnderlayingType Dot(const FVector2D& Other) const
		{
			return (X * Other.X) + (Y * Other.Y);
		}
		UnderlayingType GetDistanceTo(const FVector2D& Other) const
		{
			FVector2D DiffVector = Other - *this;

			return DiffVector.Magnitude();
		}
		FVector2D GetNormalized() const
		{
			return *this / Magnitude();
		}
		bool IsZero() const
		{
			return X == 0 && Y == 0;
		}
		UnderlayingType Magnitude() const
		{
			return std::sqrt((X * X) + (Y * Y));
		}
		bool operator!=(const FVector2D& Other) const
		{
			return X != Other.X || Y != Other.Y;
		}
		FVector2D operator*(UnderlayingType Scalar) const
		{
			return { X * Scalar, Y * Scalar };
		}
		FVector2D operator*(const FVector2D& Other) const
		{
			return { X * Other.X, Y * Other.Y };
		}
		FVector2D operator+(const FVector2D& Other) const
		{
			return { X + Other.X, Y + Other.Y };
		}
		FVector2D operator-(const FVector2D& Other) const
		{
			return { X - Other.X, Y - Other.Y };
		}
		FVector2D operator/(UnderlayingType Scalar) const
		{
			if (Scalar == 0)
				return *this;

			return { X / Scalar, Y / Scalar };
		}
		FVector2D operator/(const FVector2D& Other) const
		{
			if (Other.X == 0 || Other.Y == 0)
				return *this;

			return { X / Other.X, Y / Other.Y };
		}
		bool operator==(const FVector2D& Other) const
		{
			return X == Other.X && Y == Other.Y;
		}
	};

	// ScriptStruct CoreUObject.Vector
	// 0x000C (0x000C - 0x0000)
	struct FVector
	{
	public:
		using UnderlayingType = float;

		float                                         X;                                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Y;                                                 // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Z;                                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	public:
		constexpr FVector(UnderlayingType X = 0, UnderlayingType Y = 0, UnderlayingType Z = 0)
			: X(X), Y(Y), Z(Z)
		{
		}
		constexpr FVector(const FVector& other)
			: X(other.X), Y(other.Y), Z(other.Z)
		{
		}
		FVector& Normalize()
		{
			*this /= Magnitude();

			return *this;
		}
		FVector& operator*=(UnderlayingType Scalar)
		{
			*this = *this * Scalar;

			return *this;
		}
		FVector& operator*=(const FVector& Other)
		{
			*this = *this * Other;

			return *this;
		}
		FVector& operator+=(const FVector& Other)
		{
			*this = *this + Other;

			return *this;
		}
		FVector& operator-=(const FVector& Other)
		{
			*this = *this - Other;

			return *this;
		}
		FVector& operator/=(UnderlayingType Scalar)
		{
			*this = *this / Scalar;

			return *this;
		}
		FVector& operator/=(const FVector& Other)
		{
			*this = *this / Other;

			return *this;
		}
		FVector& operator=(const FVector& other)
		{
			X = other.X;
			Y = other.Y;
			Z = other.Z;

			return *this;
		}

		UnderlayingType Dot(const FVector& Other) const
		{
			return (X * Other.X) + (Y * Other.Y) + (Z * Other.Z);
		}
		UnderlayingType GetDistanceTo(const FVector& Other) const
		{
			FVector DiffVector = Other - *this;

			return DiffVector.Magnitude();
		}
		UnderlayingType GetDistanceToInMeters(const FVector& Other) const
		{
			return GetDistanceTo(Other) * static_cast<UnderlayingType>(0.01);
		}
		FVector GetNormalized() const
		{
			return *this / Magnitude();
		}
		bool IsZero() const
		{
			return X == 0 && Y == 0 && Z == 0;
		}
		UnderlayingType Magnitude() const
		{
			return std::sqrt((X * X) + (Y * Y) + (Z * Z));
		}
		bool operator!=(const FVector& Other) const
		{
			return X != Other.X || Y != Other.Y || Z != Other.Z;
		}
		FVector operator*(UnderlayingType Scalar) const
		{
			return { X * Scalar, Y * Scalar, Z * Scalar };
		}
		FVector operator*(const FVector& Other) const
		{
			return { X * Other.X, Y * Other.Y, Z * Other.Z };
		}
		FVector operator+(const FVector& Other) const
		{
			return { X + Other.X, Y + Other.Y, Z + Other.Z };
		}
		FVector operator-(const FVector& Other) const
		{
			return { X - Other.X, Y - Other.Y, Z - Other.Z };
		}
		FVector operator/(UnderlayingType Scalar) const
		{
			if (Scalar == 0)
				return *this;

			return { X / Scalar, Y / Scalar, Z / Scalar };
		}
		FVector operator/(const FVector& Other) const
		{
			if (Other.X == 0 || Other.Y == 0 || Other.Z == 0)
				return *this;

			return { X / Other.X, Y / Other.Y, Z / Other.Z };
		}
		bool operator==(const FVector& Other) const
		{
			return X == Other.X && Y == Other.Y && Z == Other.Z;
		}
	};

	template<typename ClassType>
	class TSubclassOf
	{
		class UClass* ClassPtr;

	public:
		TSubclassOf() = default;

		inline TSubclassOf(UClass* Class)
			: ClassPtr(Class)
		{
		}

		inline UClass* Get()
		{
			return ClassPtr;
		}

		inline operator UClass* () const
		{
			return ClassPtr;
		}

		template<typename Target, typename = std::enable_if<std::is_base_of_v<Target, ClassType>, bool>::type>
		inline operator TSubclassOf<Target>() const
		{
			return ClassPtr;
		}

		inline UClass* operator->()
		{
			return ClassPtr;
		}

		inline TSubclassOf& operator=(UClass* Class)
		{
			ClassPtr = Class;

			return *this;
		}

		inline bool operator==(const TSubclassOf& Other) const
		{
			return ClassPtr == Other.ClassPtr;
		}

		inline bool operator!=(const TSubclassOf& Other) const
		{
			return ClassPtr != Other.ClassPtr;
		}

		inline bool operator==(UClass* Other) const
		{
			return ClassPtr == Other;
		}

		inline bool operator!=(UClass* Other) const
		{
			return ClassPtr != Other;
		}
	};
	struct FColor
	{
	public:
		uint8_t                                         B;                                                 // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         G;                                                 // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         R;                                                 // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         A;                                                 // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.LinearColor
	// 0x0010 (0x0010 - 0x0000)
	struct FLinearColor
	{
	public:
		float                                         R;                                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         G;                                                 // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         B;                                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         A;                                                 // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct CoreUObject.Vector4
	// 0x0010 (0x0010 - 0x0000)
	struct alignas(0x10) FVector4
	{
	public:
		float                                         X;                                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Y;                                                 // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Z;                                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         W;                                                 // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct CoreUObject.PackedNormal
	// 0x0004 (0x0004 - 0x0000)
	struct FPackedNormal
	{
	public:
		uint8                                         X;                                                 // 0x0000(0x0001)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Y;                                                 // 0x0001(0x0001)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Z;                                                 // 0x0002(0x0001)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         W;                                                 // 0x0003(0x0001)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.PackedRGB10A2N
	// 0x0004 (0x0004 - 0x0000)
	struct FPackedRGB10A2N
	{
	public:
		int32                                         Packed;                                            // 0x0000(0x0004)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.PackedRGBA16N
	// 0x0008 (0x0008 - 0x0000)
	struct FPackedRGBA16N
	{
	public:
		int32                                         XY;                                                // 0x0000(0x0004)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         ZW;                                                // 0x0004(0x0004)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.IntPoint
	// 0x0008 (0x0008 - 0x0000)
	struct FIntPoint
	{
	public:
		int32                                         X;                                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         Y;                                                 // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.IntVector
	// 0x000C (0x000C - 0x0000)
	struct FIntVector
	{
	public:
		int32                                         X;                                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         Y;                                                 // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         Z;                                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.Color
	// 0x0004 (0x0004 - 0x0000)
	struct alignas(0x04) FColor final
	{
	public:
		uint8                                         B;                                                 // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         G;                                                 // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         R;                                                 // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         A;                                                 // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.LinearColor
	// 0x0010 (0x0010 - 0x0000)
	struct FLinearColor
	{
	public:
		float                                         R;                                                 // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         G;                                                 // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         B;                                                 // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         A;                                                 // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.Box
	// 0x001C (0x001C - 0x0000)
	struct FBox
	{
	public:
		FVector                                Min;                                               // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                Max;                                               // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         IsValid;                                           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.Box2D
	// 0x0014 (0x0014 - 0x0000)
	struct FBox2D
	{
	public:
		struct FVector2D                              Min;                                               // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              Max;                                               // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bIsValid;                                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.BoxSphereBounds
	// 0x001C (0x001C - 0x0000)
	struct FBoxSphereBounds
	{
	public:
		struct FVector                                Origin;                                            // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                BoxExtent;                                         // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SphereRadius;                                      // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.EncBoxSphereBounds
	// 0x0020 (0x0020 - 0x0000)
	struct FEncBoxSphereBounds
	{
	public:
		FEncVector                             Origin;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                BoxExtent;                                         // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SphereRadius;                                      // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.OrientedBox
	// 0x003C (0x003C - 0x0000)
	struct FOrientedBox
	{
	public:
		FVector                                Center;                                            // 0x0000(0x000C)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                AxisX;                                             // 0x000C(0x000C)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                AxisY;                                             // 0x0018(0x000C)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                AxisZ;                                             // 0x0024(0x000C)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ExtentX;                                           // 0x0030(0x0004)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ExtentY;                                           // 0x0034(0x0004)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ExtentZ;                                           // 0x0038(0x0004)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.Matrix
	// 0x0040 (0x0040 - 0x0000)
	struct FMatrix
	{
	public:
		struct FPlane                                 XPlane;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPlane                                 YPlane;                                            // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPlane                                 ZPlane;                                            // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPlane                                 WPlane;                                            // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.InterpCurvePointFloat
	// 0x0014 (0x0014 - 0x0000)
	struct FInterpCurvePointFloat
	{
	public:
		float                                         InVal;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         OutVal;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ArriveTangent;                                     // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LeaveTangent;                                      // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Core::EInterpCurveMode                              InterpMode;                                        // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.InterpCurveFloat
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveFloat final
	{
	public:
		std::is_array<struct FInterpCurvePointFloat>         Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                          bIsLooped;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         LoopKeyOffset;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.InterpCurvePointVector2D
	// 0x0020 (0x0020 - 0x0000)
	struct FInterpCurvePointVector2D
	{
	public:
		float                                         InVal;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector2D                              OutVal;                                            // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector2D                              ArriveTangent;                                     // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector2D                              LeaveTangent;                                      // 0x0014(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Core::EInterpCurveMode                              InterpMode;                                        // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.InterpCurveVector2D
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveVector2D
	{
	public:
		std::is_array<struct FInterpCurvePointVector2D>      Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                          bIsLooped;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         LoopKeyOffset;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// ScriptStruct CoreUObject.InterpCurvePointVector
	// 0x002C (0x002C - 0x0000)
	struct FInterpCurvePointVector
	{
	public:
		float                                         InVal;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                OutVal;                                            // 0x0004(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                ArriveTangent;                                     // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                LeaveTangent;                                      // 0x001C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Core::EInterpCurveMode                              InterpMode;                                        // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.InterpCurveVector
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveVector
	{
	public:
		std::is_array<struct FInterpCurvePointVector>        Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                          bIsLooped;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         LoopKeyOffset;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.InterpCurvePointQuat
	// 0x0050 (0x0050 - 0x0000)
	struct FInterpCurvePointQuat
	{
	public:
		float                                         InVal;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
		struct FQuat                                  OutVal;                                            // 0x0010(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FQuat                                  ArriveTangent;                                     // 0x0020(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FQuat                                  LeaveTangent;                                      // 0x0030(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		Core::EInterpCurveMode                              InterpMode;                                        // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_41[0xF];                                       // 0x0041(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.InterpCurveQuat
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveQuat
	{
	public:
		std::is_array<struct FInterpCurvePointQuat>          Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                          bIsLooped;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         LoopKeyOffset;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// ScriptStruct CoreUObject.TwoVectors
	// 0x0018 (0x0018 - 0x0000)
	struct FTwoVectors
	{
	public:
		struct FVector                                v1;                                                // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                v2;                                                // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// 0x0050 (0x0050 - 0x0000)
	struct FInterpCurvePointTwoVectors
	{
	public:
		float                                         InVal;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FTwoVectors                            OutVal;                                            // 0x0004(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		FTwoVectors                            ArriveTangent;                                     // 0x001C(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		FTwoVectors                            LeaveTangent;                                      // 0x0034(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		Core::EInterpCurveMode                              InterpMode;                                        // 0x004C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.InterpCurveTwoVectors
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveTwoVectors
	{
	public:
		std::is_array<struct FInterpCurvePointTwoVectors>    Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                          bIsLooped;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         LoopKeyOffset;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.InterpCurvePointLinearColor
	// 0x0038 (0x0038 - 0x0000)
	struct FInterpCurvePointLinearColor
	{
	public:
		float                                         InVal;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           OutVal;                                            // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           ArriveTangent;                                     // 0x0014(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           LeaveTangent;                                      // 0x0024(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Core::EInterpCurveMode                              InterpMode;                                        // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct Engine.WeightedBlendables
	// 0x0010 (0x0010 - 0x0000)
	struct FWeightedBlendables
	{
	public:
		std::is_array<struct FWeightedBlendable>             array;                                             // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	};
	// ScriptStruct CoreUObject.InterpCurveLinearColor
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveLinearColor
	{
	public:
		std::is_array<struct FInterpCurvePointLinearColor>   Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                          bIsLooped;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         LoopKeyOffset;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.Transform
	// 0x0030 (0x0030 - 0x0000)
	struct FTransform
	{
	public:
		struct FQuat                                  Rotation;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                translation;                                       // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                Scale3D;                                           // 0x0020(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// ScriptStruct CoreUObject.EncTransform
 // 0x0040 (0x0040 - 0x0000)
	struct FEncTransform
	{
	public:
		struct FQuat                                  Rotation;                                          // 0x0000(0x0010)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                translation;                                       // 0x0010(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                Scale3D;                                           // 0x0020(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FEncHandler                            EncHandler;                                        // 0x0030(0x0004)(Transient, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
		uint8                                         Pad_34[0xC];                                       // 0x0034(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.RandomStream
	// 0x0008 (0x0008 - 0x0000)
	struct FRandomStream
	{
	public:
		int32                                         InitialSeed;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         Seed;                                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// ScriptStruct CoreUObject.FrameNumber
   // 0x0004 (0x0004 - 0x0000)
	struct FFrameNumber
	{
	public:
		int32                                         Value;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.FrameRate
	// 0x0008 (0x0008 - 0x0000)
	struct FFrameRate
	{
	public:
		int32                                         Numerator;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         Denominator;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.FrameTime
	// 0x0008 (0x0008 - 0x0000)
	struct FFrameTime
	{
	public:
		struct FFrameNumber                           FrameNumber;                                       // 0x0000(0x0004)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SubFrame;                                          // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// ScriptStruct CoreUObject.QualifiedFrameTime
	// 0x0010 (0x0010 - 0x0000)
	struct FQualifiedFrameTime
	{
	public:
		struct FFrameTime                             Time;                                              // 0x0000(0x0008)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFrameRate                             Rate;                                              // 0x0008(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.Timecode
	// 0x0014 (0x0014 - 0x0000)
	struct FTimecode
	{
	public:
		int32                                         Hours;                                             // 0x0000(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         Minutes;                                           // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         Seconds;                                           // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         Frames;                                            // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bDropFrameFormat;                                  // 0x0010(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.Timespan
	// 0x0008 (0x0008 - 0x0000)
	struct  FTimespan
	{
	public:
		uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.SoftObjectPath
	// 0x0018 (0x0018 - 0x0000)
	struct FSoftObjectPath
	{
	public:
		std::string                                   AssetPathName;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		std::wstring                                  SubPathString;                                     // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.SoftClassPath
	// 0x0000 (0x0018 - 0x0018)
	struct FSoftClassPath : public FSoftObjectPath
	{
	};

	// ScriptStruct CoreUObject.PrimaryAssetType
	// 0x0008 (0x0008 - 0x0000)
	struct FPrimaryAssetType
	{
	public:
		std::string                                   Name;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.PrimaryAssetId
	// 0x0010 (0x0010 - 0x0000)
	struct FPrimaryAssetId
	{
	public:
		struct FPrimaryAssetType                      PrimaryAssetType;                                  // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		std::string                                  PrimaryAssetName;                                  // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.FallbackStruct
	// 0x0001 (0x0001 - 0x0000)
	struct FFallbackStruct
	{
	public:
		uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.FloatRangeBound
	// 0x0008 (0x0008 - 0x0000)
	struct FFloatRangeBound
	{
	public:
		Core::ERangeBoundTypes                              Type;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         Value;                                             // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.FloatRange
	// 0x0010 (0x0010 - 0x0000)
	struct FFloatRange
	{
	public:
		struct FFloatRangeBound                       LowerBound;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFloatRangeBound                       UpperBound;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.Int32RangeBound
	// 0x0008 (0x0008 - 0x0000)
	struct FInt32RangeBound
	{
	public:
		Core::ERangeBoundTypes                              Type;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         Value;                                             // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.Int32Range
	// 0x0010 (0x0010 - 0x0000)
	struct FInt32Range
	{
	public:
		struct FInt32RangeBound                       LowerBound;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInt32RangeBound                       UpperBound;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.FloatInterval
	// 0x0008 (0x0008 - 0x0000)
	struct FFloatInterval
	{
	public:
		float                                         Min;                                               // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Max;                                               // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.Int32Interval
	// 0x0008 (0x0008 - 0x0000)
	struct FInt32Interval
	{
	public:
		int32                                         Min;                                               // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         Max;                                               // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.PolyglotTextData
	// 0x00B8 (0x00B8 - 0x0000)
	struct FPolyglotTextData
	{
	public:
		Core::ELocalizedTextSourceCategory                  Category;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		std::wstring                                 NativeCulture;                                     // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		std::wstring                                  Namespace;                                         // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		std::wstring                                  Key;                                               // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		std::wstring                                  NativeString;                                      // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		std::unordered_map<std::wstring, std::wstring >            LocalizedStrings;                                  // 0x0048(0x0050)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                          bIsMinimalPatch;                                   // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		wchar_t											CachedText;                                        // 0x00A0(0x0018)(Transient, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.TextureMergingInfo
	// 0x0018 (0x0018 - 0x0000)
	struct FTextureMergingInfo final
	{
	public:
		uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
		std::is_array<struct FRegion>                        Regions;                                           // 0x0008(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	};

	// Class Engine.Texture2D
	// 0x0068 (0x0198 - 0x0130)
	class UTexture2D : public UTexture
	{
	public:
		int32                                         LevelIndex;                                        // 0x0130(0x0004)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         FirstResourceMemMip;                               // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bTemporarilyDisableStreaming : 1;                  // 0x0138(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
		Engine::ETextureAddress                               AddressX;                                          // 0x0139(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ETextureAddress                               AddressY;                                          // 0x013A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_13B[0x1];                                      // 0x013B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		struct FIntPoint                              ImportedSize;                                      // 0x013C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_144[0x1C];                                     // 0x0144(0x001C)(Fixing Size After Last Property [ Dumper-7 ])
		struct FTextureMergingInfo                    TextureMergingInfo;                                // 0x0160(0x0018)(Transient, NativeAccessSpecifierPublic)
		uint8                                         Pad_178[0x20];                                     // 0x0178(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])


	};
	// ScriptStruct CoreUObject.EncHandler
	// 0x0004 (0x0004 - 0x0000)
	struct FEncHandler
	{
	public:
		uint16                                        Index;                                             // 0x0000(0x0002)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int8                                          bEncrypted;                                        // 0x0002(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bDynamic : 1;                                      // 0x0003(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	};

	// ScriptStruct CoreUObject.EncVector
	// 0x0010 (0x0010 - 0x0000)
	struct FEncVector
	{
	public:
		float                                         X;                                                 // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Y;                                                 // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Z;                                                 // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FEncHandler                            EncHandler;                                        // 0x000C(0x0004)(Transient, RepSkip, NoDestructor, NativeAccessSpecifierPrivate)
	};

	// ScriptStruct CoreUObject.Guid
	// 0x0010 (0x0010 - 0x0000)
	struct FGuid
	{
	public:
		int32                                         A;                                                 // 0x0000(0x0004)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         B;                                                 // 0x0004(0x0004)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         C;                                                 // 0x0008(0x0004)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         D;                                                 // 0x000C(0x0004)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// Class Engine.StreamableRenderAsset
	// 0x0018 (0x0040 - 0x0028)
	class UStreamableRenderAsset
	{
	public:
		double                                        ForceMipLevelsToBeResidentTimestamp;               // 0x0028(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		int32                                         NumCinematicMipLevels;                             // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         StreamingIndex;                                    // 0x0034(0x0004)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		int32                                         CachedCombinedLODBias;                             // 0x0038(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		uint8                                         CachedNumResidentLODs;                             // 0x003C(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		uint8                                         CachedNumPerfectWantedLODs;                        // 0x003D(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		uint8                                         bCachedReadyForStreaming : 1;                      // 0x003E(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
		uint8                                         NeverStream : 1;                                   // 0x003E(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bGlobalForceMipLevelsToBeResident : 1;             // 0x003E(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bIsStreamable : 1;                                 // 0x003E(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Transient, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bHasStreamingUpdatePending : 1;                    // 0x003E(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Transient, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bForceMiplevelsToBeResident : 1;                   // 0x003E(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bIgnoreStreamingMipBias : 1;                       // 0x003E(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bUseCinematicMipLevels : 1;                        // 0x003E(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
		uint8                                         bForceKeepFullMipLevels : 1;                       // 0x003F(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))

	};

	// Class Engine.Texture
	// 0x00F0 (0x0130 - 0x0040)
	class UTexture : public UStreamableRenderAsset
	{
	public:
		uint8                                         Pad_40[0x8];                                       // 0x0040(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
		FGuid                                  LightingGuid;                                      // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		int32                                         LODBias;                                           // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ETextureCompressionSettings                   CompressionSettings;                               // 0x005C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ETextureFilter                                Filter;                                            // 0x005D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ETextureMipLoadOptions                        MipLoadOptions;                                    // 0x005E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ETextureGroup                                 LODGroup;                                          // 0x005F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		std::is_array<std::string>                           TextureTags;                                       // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPublic)
		uint8                                         SRGB : 1;                                          // 0x0070(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bImportAsIBL : 1;                                  // 0x0070(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bIBLNormalization : 1;                             // 0x0070(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         IBLNormalizationHighCut;                           // 0x0074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         IBLNormalizationLowCut;                            // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bOutdoorReflection : 1;                            // 0x007C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bMobileResource : 1;                               // 0x007C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         IBLRotation;                                       // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bSHUseCubemapping : 1;                             // 0x0084(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bSHCopyUpperHalf : 1;                              // 0x0084(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		std::unordered_map<std::wstring, struct FPlatformCustomSettings> ForcePlatformSettings;                       // 0x0088(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)
		uint8                                         bDisableDownscaleBeforeCompress : 1;               // 0x00D8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		Engine::ETextureDownSampleAmount                      DownSampleAmountForMobile;                         // 0x00D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bNoTiling : 1;                                     // 0x00DA(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         VirtualTextureStreaming : 1;                       // 0x00DA(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         CompressionYCoCg : 1;                              // 0x00DA(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bNotOfflineProcessed : 1;                          // 0x00DA(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bAsyncResourceReleaseHasBeenStarted : 1;           // 0x00DA(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
		uint8                                         Pad_DB[0x5];                                       // 0x00DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		std::is_array<class UAssetUserData*>                 AssetUserData;                                     // 0x00E0(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
		uint8                                         Pad_F0[0x40];                                      // 0x00F0(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])


	};

	// ScriptStruct Engine.PostProcessSettings
	// 0x0950 (0x0950 - 0x0000)
	struct FPostProcessSettings
	{
	public:
		uint8                                         bOverride_WhiteTemp : 1;                           // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_WhiteTint : 1;                           // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorSaturation : 1;                     // 0x0000(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorContrast : 1;                       // 0x0000(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorGamma : 1;                          // 0x0000(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorGain : 1;                           // 0x0000(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorOffset : 1;                         // 0x0000(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorSaturationShadows : 1;              // 0x0000(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorContrastShadows : 1;                // 0x0001(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorGammaShadows : 1;                   // 0x0001(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorGainShadows : 1;                    // 0x0001(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorOffsetShadows : 1;                  // 0x0001(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorSaturationMidtones : 1;             // 0x0001(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorContrastMidtones : 1;               // 0x0001(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorGammaMidtones : 1;                  // 0x0001(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorGainMidtones : 1;                   // 0x0001(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorOffsetMidtones : 1;                 // 0x0002(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorSaturationHighlights : 1;           // 0x0002(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorContrastHighlights : 1;             // 0x0002(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorGammaHighlights : 1;                // 0x0002(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorGainHighlights : 1;                 // 0x0002(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorOffsetHighlights : 1;               // 0x0002(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorCorrectionShadowsMax : 1;           // 0x0002(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorCorrectionHighlightsMin : 1;        // 0x0002(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BlueCorrection : 1;                      // 0x0003(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DarknessCorrection : 1;                  // 0x0003(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ExpandGamut : 1;                         // 0x0003(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmWhitePoint : 1;                      // 0x0003(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmSaturation : 1;                      // 0x0003(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmChannelMixerRed : 1;                 // 0x0003(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmChannelMixerGreen : 1;               // 0x0003(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmChannelMixerBlue : 1;                // 0x0003(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmContrast : 1;                        // 0x0004(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmDynamicRange : 1;                    // 0x0004(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmHealAmount : 1;                      // 0x0004(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmToeAmount : 1;                       // 0x0004(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmShadowTint : 1;                      // 0x0004(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmShadowTintBlend : 1;                 // 0x0004(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmShadowTintAmount : 1;                // 0x0004(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmSlope : 1;                           // 0x0004(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmToe : 1;                             // 0x0005(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmShoulder : 1;                        // 0x0005(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmBlackClip : 1;                       // 0x0005(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_FilmWhiteClip : 1;                       // 0x0005(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         BitPad_5_4 : 4;                                    // 0x0005(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
		uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		uint8                                         bOverride_Mobile_ACES_A : 1;                       // 0x0008(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_ACES_B : 1;                       // 0x0008(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_ACES_C : 1;                       // 0x0008(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_ACES_D : 1;                       // 0x0008(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_ACES_E : 1;                       // 0x0008(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_LDR_ACES_A : 1;                   // 0x0008(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_LDR_ACES_B : 1;                   // 0x0008(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_LDR_ACES_C : 1;                   // 0x0008(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_LDR_ACES_D : 1;                   // 0x0009(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_LDR_ACES_E : 1;                   // 0x0009(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_CG_Exposure : 1;                  // 0x0009(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_CG_HdrScale : 1;                  // 0x0009(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_CG_MasterSaturation : 1;          // 0x0009(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_CG_MasterTint : 1;                // 0x0009(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_CG_Saturation_K0 : 1;             // 0x0009(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_CG_Exposure_K0 : 1;               // 0x0009(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_CG_Tint_K0 : 1;                   // 0x000A(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_CG_Saturation_K1 : 1;             // 0x000A(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_CG_Exposure_K1 : 1;               // 0x000A(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_CG_Tint_K1 : 1;                   // 0x000A(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_CG_Saturation_K2 : 1;             // 0x000A(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_CG_Exposure_K2 : 1;               // 0x000A(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Mobile_CG_Tint_K2 : 1;                   // 0x000A(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileColorGradingLUT : 1;               // 0x000A(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileColorGradingLUTWeight : 1;         // 0x000B(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         BitPad_B_1 : 7;                                    // 0x000B(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
		uint8                                         bOverride_SceneColorTint : 1;                      // 0x000C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SceneFringeIntensity : 1;                // 0x000C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ChromaticAberrationStartOffset : 1;      // 0x000C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ChromaticAberrationSCaleR : 1;           // 0x000C(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ChromaticAberrationSCaleG : 1;           // 0x000C(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientCubemapTint : 1;                  // 0x000C(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientCubemapIntensity : 1;             // 0x000C(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomMethod : 1;                         // 0x000C(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_PPBlurMethod : 1;                        // 0x000D(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_PPEdgeDetectMethod : 1;                  // 0x000D(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomIntensity : 1;                      // 0x000D(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomMaxLuminance : 1;                   // 0x000D(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileBloomMaxLuminance : 1;             // 0x000D(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomThreshold : 1;                      // 0x000D(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Bloom1Tint : 1;                          // 0x000D(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Bloom1Size : 1;                          // 0x000D(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Bloom2Size : 1;                          // 0x000E(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Bloom2Tint : 1;                          // 0x000E(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Bloom3Tint : 1;                          // 0x000E(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Bloom3Size : 1;                          // 0x000E(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Bloom4Tint : 1;                          // 0x000E(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Bloom4Size : 1;                          // 0x000E(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Bloom5Tint : 1;                          // 0x000E(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Bloom5Size : 1;                          // 0x000E(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Bloom6Tint : 1;                          // 0x000F(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_Bloom6Size : 1;                          // 0x000F(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomSizeScale : 1;                      // 0x000F(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileBloomTint : 1;                     // 0x000F(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileBloomThreshold : 1;                // 0x000F(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomConvolutionTexture : 1;             // 0x000F(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomConvolutionSize : 1;                // 0x000F(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomConvolutionCenterUV : 1;            // 0x000F(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomConvolutionPreFilter : 1;           // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomConvolutionPreFilterMin : 1;        // 0x0010(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomConvolutionPreFilterMax : 1;        // 0x0010(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomConvolutionPreFilterMult : 1;       // 0x0010(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomConvolutionBufferScale : 1;         // 0x0010(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomDirtMaskIntensity : 1;              // 0x0010(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomDirtMaskTint : 1;                   // 0x0010(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_BloomDirtMask : 1;                       // 0x0010(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_CameraShutterSpeed : 1;                  // 0x0011(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_CameraISO : 1;                           // 0x0011(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AutoExposureMethod : 1;                  // 0x0011(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AutoExposureLowPercent : 1;              // 0x0011(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AutoExposureHighPercent : 1;             // 0x0011(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AutoExposureMinBrightness : 1;           // 0x0011(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AutoExposureMaxBrightness : 1;           // 0x0011(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AutoExposureCalibrationConstant : 1;     // 0x0011(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AutoExposureSpeedUp : 1;                 // 0x0012(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AutoExposureSpeedDown : 1;               // 0x0012(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AutoExposureBias : 1;                    // 0x0012(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AutoExposureBiasCurve : 1;               // 0x0012(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AutoExposureMeterMask : 1;               // 0x0012(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0x0012(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_HistogramLogMin : 1;                     // 0x0012(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_HistogramLogMax : 1;                     // 0x0012(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LocalExposureHighlightContrastScale : 1; // 0x0013(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LocalExposureShadowContrastScale : 1;    // 0x0013(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LocalExposureHighlightContrastCurve : 1; // 0x0013(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LocalExposureShadowContrastCurve : 1;    // 0x0013(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LocalExposureHighlightThreshold : 1;     // 0x0013(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LocalExposureShadowThreshold : 1;        // 0x0013(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LocalExposureDetailStrength : 1;         // 0x0013(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LocalExposureBlurredLuminanceBlend : 1;  // 0x0013(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LocalExposureBlurredLuminanceKernelSizePercent : 1; // 0x0014(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LocalExposureMiddleGreyBias : 1;         // 0x0014(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MiddleGreyBiasCompensation : 1;          // 0x0014(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareMethod : 1;                     // 0x0014(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareIntensity : 1;                  // 0x0014(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareTint : 1;                       // 0x0014(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareBokehSize : 1;                  // 0x0014(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareThreshold : 1;                  // 0x0014(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareBokehShape : 1;                 // 0x0015(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareLineWidth : 1;                  // 0x0015(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareLineLength : 1;                 // 0x0015(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareLineIntensity : 1;              // 0x0015(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareLineTint : 1;                   // 0x0015(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareHalo : 1;                       // 0x0015(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareHaloScaleMin : 1;               // 0x0015(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareHaloScaleMax : 1;               // 0x0015(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareTints_1 : 1;                    // 0x0016(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareLocation_1 : 1;                 // 0x0016(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareTints_2 : 1;                    // 0x0016(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareLocation_2 : 1;                 // 0x0016(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareTints_3 : 1;                    // 0x0016(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareLocation_3 : 1;                 // 0x0016(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareTints_4 : 1;                    // 0x0016(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareLocation_4 : 1;                 // 0x0016(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareTints_5 : 1;                    // 0x0017(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareLocation_5 : 1;                 // 0x0017(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareTints_6 : 1;                    // 0x0017(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareTints_7 : 1;                    // 0x0017(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareTints_8 : 1;                    // 0x0017(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_bUseMobileLensFlare : 1;                 // 0x0017(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileLensFlareIntensity : 1;            // 0x0017(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileLensFlareTint : 1;                 // 0x0017(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileLensFlareBokehSize : 1;            // 0x0018(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareRandomSeed : 1;                 // 0x0018(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareFlareCount : 1;                 // 0x0018(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareMinPositionScale : 1;           // 0x0018(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareMaxPositionScale : 1;           // 0x0018(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileLensFlareBokehShape : 1;           // 0x0018(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareIntensity2 : 1;                 // 0x0018(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareTint2 : 1;                      // 0x0018(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareBokehSize2 : 1;                 // 0x0019(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareRandomSeed2 : 1;                // 0x0019(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareFlareCount2 : 1;                // 0x0019(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareMinPositionScale2 : 1;          // 0x0019(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareMaxPositionScale2 : 1;          // 0x0019(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareBokehShape2 : 1;                // 0x0019(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareRayTint : 1;                    // 0x0019(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareRaySliceCount : 1;              // 0x0019(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareRayThreshold : 1;               // 0x001A(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareRayRandomSeed : 1;              // 0x001A(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareRaySize : 1;                    // 0x001A(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareRayWidth : 1;                   // 0x001A(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LensFlareRayIntensity : 1;               // 0x001A(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_VignetteIntensity : 1;                   // 0x001A(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GrainIntensity : 1;                      // 0x001A(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GrainJitter : 1;                         // 0x001A(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionIntensity : 1;           // 0x001B(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionStaticFraction : 1;      // 0x001B(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionRadius : 1;              // 0x001B(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionFadeDistance : 1;        // 0x001B(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionFadeRadius : 1;          // 0x001B(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionDistance : 1;            // 0x001B(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionRadiusInWS : 1;          // 0x001B(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionPower : 1;               // 0x001B(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionBias : 1;                // 0x001C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionQuality : 1;             // 0x001C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionMipBlend : 1;            // 0x001C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionMipScale : 1;            // 0x001C(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionMipThreshold : 1;        // 0x001C(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_AmbientOcclusionTemporalBlendWeight : 1; // 0x001C(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAOThreshold : 1;                     // 0x001C(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAOTwoSidedFoliageThreshold : 1;      // 0x001C(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAOBentNormalThreshold : 1;           // 0x001D(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAONoiseStep : 1;                     // 0x001D(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAOStepSize : 1;                      // 0x001D(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAOFirstPersonStepSize : 1;           // 0x001D(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAOFoliageStepSize : 1;               // 0x001D(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAOFoliageNormalAdjust : 1;           // 0x001D(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseTemporalBlendWeight : 1;    // 0x001D(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseTemporalMomentBlendWeight : 1; // 0x001D(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseTemporalNormalTolerance : 1; // 0x001E(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseTemporalDepthTolerance : 1; // 0x001E(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseTemporalHistoryLength : 1;  // 0x001E(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseSpatialAOSigma : 1;         // 0x001E(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseSpatialDepthSigma : 1;      // 0x001E(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseSpatialNormalSigma : 1;     // 0x001E(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseATrousIteration : 1;        // 0x001E(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseATrousCopyIterationIndex : 1; // 0x001E(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseATrousIterationStartKernelStep : 1; // 0x001F(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseATrousAOSigma : 1;          // 0x001F(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseATrousDepthSigma : 1;       // 0x001F(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseATrousDepthWeightCutoff : 1; // 0x001F(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseATrousNormalSigma : 1;      // 0x001F(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_SSRTAODenoiseATrousMinVarianceToDenoise : 1; // 0x001F(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         BitPad_1F_6 : 2;                                   // 0x001F(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
		uint8                                         bOverride_RayTracingAO : 1;                        // 0x0020(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingAOSamplesPerPixel : 1;         // 0x0020(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         BitPad_20_2 : 6;                                   // 0x0020(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
		uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		uint8                                         bOverride_LPVIntensity : 1;                        // 0x0024(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVDirectionalOcclusionIntensity : 1;    // 0x0024(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVDirectionalOcclusionRadius : 1;       // 0x0024(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVDiffuseOcclusionExponent : 1;         // 0x0024(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVSpecularOcclusionExponent : 1;        // 0x0024(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVDiffuseOcclusionIntensity : 1;        // 0x0024(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVSpecularOcclusionIntensity : 1;       // 0x0024(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVSize : 1;                             // 0x0024(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVSecondaryOcclusionIntensity : 1;      // 0x0025(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVSecondaryBounceIntensity : 1;         // 0x0025(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVGeometryVolumeBias : 1;               // 0x0025(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVVplInjectionBias : 1;                 // 0x0025(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVEmissiveInjectionIntensity : 1;       // 0x0025(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVFadeRange : 1;                        // 0x0025(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LPVDirectionalOcclusionFadeRange : 1;    // 0x0025(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_IndirectLightingColor : 1;               // 0x0025(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_IndirectLightingIntensity : 1;           // 0x0026(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorGradingIntensity : 1;               // 0x0026(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ColorGradingLUT : 1;                     // 0x0026(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_UseACEScc : 1;                           // 0x0026(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_PCHighPrecisionLMT : 1;                  // 0x0026(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LMT_LUTIntensity : 1;                    // 0x0026(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_LMT_LUT : 1;                             // 0x0026(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldFocalDistance : 1;           // 0x0026(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileDepthOfFieldFocalDistance : 1;     // 0x0027(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldFstop : 1;                   // 0x0027(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldMinFstop : 1;                // 0x0027(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldBladeCount : 1;              // 0x0027(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldSensorWidth : 1;             // 0x0027(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldSqueezeFactor : 1;           // 0x0027(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldDepthBlurRadius : 1;         // 0x0027(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldDepthBlurAmount : 1;         // 0x0027(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldFocalRegion : 1;             // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldNearTransitionRegion : 1;    // 0x0028(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldFarTransitionRegion : 1;     // 0x0028(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldScale : 1;                   // 0x0028(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldNearBlurSize : 1;            // 0x0028(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldFarBlurSize : 1;             // 0x0028(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileHQGaussian : 1;                    // 0x0028(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileDefaultUEHQGaussian : 1;           // 0x0028(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileRadialBlur : 1;                    // 0x0029(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileGhostEffect : 1;                   // 0x0029(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldOcclusion : 1;               // 0x0029(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldSkyFocusDistance : 1;        // 0x0029(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_DepthOfFieldVignetteSize : 1;            // 0x0029(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MotionBlurAmount : 1;                    // 0x0029(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MotionBlurMax : 1;                       // 0x0029(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MotionBlurTargetFPS : 1;                 // 0x0029(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MotionBlurPerObjectSize : 1;             // 0x002A(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_EnableMobileMotionBlur : 1;              // 0x002A(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileMotionBlurMaxSampleCount : 1;      // 0x002A(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileMotionBlurVelocityScale : 1;       // 0x002A(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileMotionBlurMaxVelocity : 1;         // 0x002A(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileMotionBlurUseAABBMask : 1;         // 0x002A(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileMotionBlurDepthMask : 1;           // 0x002A(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileMotionBlurDepthMaskTransition : 1; // 0x002A(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileMotionBlurAABBMaskCenter : 1;      // 0x002B(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileMotionBlurAABBMaskExtent : 1;      // 0x002B(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileMotionBlurAABBMaskTransition : 1;  // 0x002B(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileMotionBlurDisplayIntensity : 1;    // 0x002B(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileMotionBlurUseVSVelocity : 1;       // 0x002B(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileMotionBlurDownSampleFactor : 1;    // 0x002B(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_MobileMotionBlurAssumedDepth : 1;        // 0x002B(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ScreenPercentage : 1;                    // 0x002B(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ScreenSpaceReflectionIntensity : 1;      // 0x002C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ScreenSpaceReflectionQuality : 1;        // 0x002C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ScreenSpaceReflectionMaxRoughness : 1;   // 0x002C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x002C(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         BitPad_2C_4 : 4;                                   // 0x002C(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
		uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		uint8                                         bOverride_ScreenRainDropBlurStrength : 1;          // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ScreenRainDropBlurCullRadius : 1;        // 0x0030(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ScreenRainDropBlurStaticSplit : 1;       // 0x0030(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ScreenRainDropBlurStaticDropDensity : 1; // 0x0030(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ScreenRainDropBlurDynamicXSplit : 1;     // 0x0030(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ScreenRainDropBlurDynamicYSplit : 1;     // 0x0030(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ScreenRainDropBlurDynamicDropDensity : 1; // 0x0030(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ScreenRainDropBlurTest : 1;              // 0x0030(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_ReflectionsType : 1;                     // 0x0031(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingReflectionsMaxRoughness : 1;   // 0x0031(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingReflectionsMaxBounces : 1;     // 0x0031(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x0031(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingReflectionsShadows : 1;        // 0x0031(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingReflectionsTranslucency : 1;   // 0x0031(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_TranslucencyType : 1;                    // 0x0031(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingTranslucencyMaxRoughness : 1;  // 0x0031(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingTranslucencyMinReflectionThroughput : 1; // 0x0032(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingTranslucencyMinRefractionThroughput : 1; // 0x0032(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingTranslucencyEnableAbsorption : 1; // 0x0032(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x0032(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x0032(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingTranslucencyShadows : 1;       // 0x0032(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingTranslucencyRefraction : 1;    // 0x0032(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingGI : 1;                        // 0x0032(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingGIMaxBounces : 1;              // 0x0033(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingGISamplesPerPixel : 1;         // 0x0033(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseApplyAO : 1;                    // 0x0033(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseEnableTemporal : 1;             // 0x0033(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseTemporalBlendWeight : 1;        // 0x0033(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseTemporalMomentBlendWeight : 1;  // 0x0033(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseTemporalNormalTolerance : 1;    // 0x0033(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseTemporalDepthTolerance : 1;     // 0x0033(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseColorClamp : 1;                 // 0x0034(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseHistoryLength : 1;              // 0x0034(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseEnableATrous : 1;               // 0x0034(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseATrousIteration : 1;            // 0x0034(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseATrousCopyIteration : 1;        // 0x0034(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseATrousSampleDepthAsNormal : 1;  // 0x0034(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseATrousFilterWidth : 1;          // 0x0034(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseATrousVarianceGain : 1;         // 0x0034(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseATrousNormalTolerance : 1;      // 0x0035(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseATrousDepthTolerance : 1;       // 0x0035(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseATrousAOTolerance : 1;          // 0x0035(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseSpatialFilterType : 1;          // 0x0035(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseType : 1;                       // 0x0035(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_GIDenoiseDebugType : 1;                  // 0x0035(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_PathTracingMaxBounces : 1;               // 0x0035(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_PathTracingSamplesPerPixel : 1;          // 0x0035(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsEnable : 1;            // 0x0036(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsResolution : 1;        // 0x0036(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsIntensity : 1;         // 0x0036(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsMaxIntensity : 1;      // 0x0036(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsMaxTraceDepth : 1;     // 0x0036(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsFinalCullColorThreshold : 1; // 0x0036(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsMidCullColorThreshold : 1; // 0x0036(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsTranslucentReflectionMode : 1; // 0x0036(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsMaxScreenRadius : 1;   // 0x0037(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsBufferScale : 1;       // 0x0037(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsScatterDepthTolerance : 1; // 0x0037(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsSplatSize : 1;         // 0x0037(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsEnableDispersion : 1;  // 0x0037(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsDispersionSamples : 1; // 0x0037(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsAdaptivePhotonSize : 1; // 0x0037(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsAdaptiveVarianceGain : 1; // 0x0037(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsAdaptiveSmooth : 1;    // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsAdaptiveMaxSample : 1; // 0x0038(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsAdaptiveUpdateSpeed : 1; // 0x0038(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsEnableTemporalFilter : 1; // 0x0038(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsJitter : 1;            // 0x0038(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsTemporalStrength : 1;  // 0x0038(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsTemporalColorTolerance : 1; // 0x0038(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsDebugLightData : 1;    // 0x0038(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsDebugScreenData : 1;   // 0x0039(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsDebugMaxPixelValue : 1; // 0x0039(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsDebugMapScale : 1;     // 0x0039(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsDebugMaxPhotonCount : 1; // 0x0039(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingCausticsDebugMip : 1;          // 0x0039(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsType : 1;         // 0x0039(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsBufferScale : 1;  // 0x0039(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsFollowCamera : 1; // 0x0039(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsLookAt : 1;       // 0x003A(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsRange : 1;        // 0x003A(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsColor : 1;        // 0x003A(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsNumDenoisePasses : 1; // 0x003A(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsDispersionIntensity : 1; // 0x003A(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsDispersionOffset : 1; // 0x003A(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsReflectiveIntensity : 1; // 0x003A(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsReflectedRayTMax : 1; // 0x003A(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsReflectedRayTMin : 1; // 0x003B(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsRefractiveIntensity : 1; // 0x003B(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsRefractedRayTMax : 1; // 0x003B(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsRefractedRayTMin : 1; // 0x003B(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsFresnelBaseReflectFraction : 1; // 0x003B(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsReflectBackFaceCullingThreshold : 1; // 0x003B(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bOverride_RayTracingWaterCausticsRefractBackFaceCullingThreshold : 1; // 0x003B(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		Engine::EAutoExposureMethod                           AutoExposureMethod;                                // 0x003C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bMobileHQGaussian : 1;                             // 0x003D(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bMobileDefaultUEHQGaussian : 1;                    // 0x003D(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		Engine::EBloomMethod                                  BloomMethod;                                       // 0x003E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::EPPBlurMethod                                 PPBlurMethod;                                      // 0x003F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::EPPEdgeDetectMethod                           PPEdgeDetectMethod;                                // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bMobileRadialBlur : 1;                             // 0x0041(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         mobileradialtint;                                  // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         mobileradialstrength;                              // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct  FVector2D                              mobileradialcenter;                                // 0x004C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct  FVector2D                              mobileghostspeed;                                  // 0x0054(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         mobileghostblurtint;                               // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bMobileGhostEffect : 1;                            // 0x0060(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         WhiteTemp;                                         // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         WhiteTint;                                         // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct  FVector4                               ColorSaturation;                                   // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorContrast;                                     // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorGamma;                                        // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorGain;                                         // 0x00A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorOffset;                                       // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorSaturationShadows;                            // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorContrastShadows;                              // 0x00D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorGammaShadows;                                 // 0x00E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorGainShadows;                                  // 0x00F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorOffsetShadows;                                // 0x0100(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorSaturationMidtones;                           // 0x0110(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorContrastMidtones;                             // 0x0120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorGammaMidtones;                                // 0x0130(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorGainMidtones;                                 // 0x0140(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorOffsetMidtones;                               // 0x0150(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorSaturationHighlights;                         // 0x0160(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorContrastHighlights;                           // 0x0170(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorGammaHighlights;                              // 0x0180(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorGainHighlights;                               // 0x0190(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                               ColorOffsetHighlights;                             // 0x01A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ColorCorrectionHighlightsMin;                      // 0x01B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ColorCorrectionShadowsMax;                         // 0x01B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         BlueCorrection;                                    // 0x01B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DarknessCorrection;                                // 0x01BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ExpandGamut;                                       // 0x01C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         FilmSlope;                                         // 0x01C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         FilmToe;                                           // 0x01C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         FilmShoulder;                                      // 0x01CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         FilmBlackClip;                                     // 0x01D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         FilmWhiteClip;                                     // 0x01D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_ACES_A;                                     // 0x01D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_ACES_B;                                     // 0x01DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_ACES_C;                                     // 0x01E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_ACES_D;                                     // 0x01E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_ACES_E;                                     // 0x01E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_LDR_ACES_A;                                 // 0x01EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_LDR_ACES_B;                                 // 0x01F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_LDR_ACES_C;                                 // 0x01F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_LDR_ACES_D;                                 // 0x01F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_LDR_ACES_E;                                 // 0x01FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct	  FLinearColor                           Mobile_CG_MasterTint;                              // 0x0200(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_CG_MasterSaturation;                        // 0x0210(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_CG_Exposure;                                // 0x0214(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_CG_HdrScale;                                // 0x0218(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct	  FLinearColor                           Mobile_CG_Tint_K0;                                 // 0x021C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_CG_Saturation_K0;                           // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_CG_Exposure_K0;                             // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct	  FLinearColor                           Mobile_CG_Tint_K1;                                 // 0x0234(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_CG_Saturation_K1;                           // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_CG_Exposure_K1;                             // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           Mobile_CG_Tint_K2;                                 // 0x024C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_CG_Saturation_K2;                           // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Mobile_CG_Exposure_K2;                             // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class	  UTexture MobileColorGradingLUT;                             // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MobileColorGradingLUTWeight;                       // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           FilmWhitePoint;                                    // 0x0274(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           FilmShadowTint;                                    // 0x0284(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         FilmShadowTintBlend;                               // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         FilmShadowTintAmount;                              // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         FilmSaturation;                                    // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           FilmChannelMixerRed;                               // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           FilmChannelMixerGreen;                             // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           FilmChannelMixerBlue;                              // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         FilmContrast;                                      // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         FilmToeAmount;                                     // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         FilmHealAmount;                                    // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         FilmDynamicRange;                                  // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           SceneColorTint;                                    // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SceneFringeIntensity;                              // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ChromaticAberrationStartOffset;                    // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ChromaticAberrationSCaleR;                         // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ChromaticAberrationSCaleG;                         // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         BloomIntensity;                                    // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         BloomMaxLuminance;                                 // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MobileBloomMaxLuminance;                           // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         BloomThreshold;                                    // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         BloomSizeScale;                                    // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Bloom1Size;                                        // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Bloom2Size;                                        // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Bloom3Size;                                        // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Bloom4Size;                                        // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Bloom5Size;                                        // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Bloom6Size;                                        // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           Bloom1Tint;                                        // 0x032C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           Bloom2Tint;                                        // 0x033C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           Bloom3Tint;                                        // 0x034C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           Bloom4Tint;                                        // 0x035C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           Bloom5Tint;                                        // 0x036C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           Bloom6Tint;                                        // 0x037C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           MobileBloomTint;                                   // 0x038C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MobileBloomThreshold;                              // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         BloomConvolutionSize;                              // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_3A4[0x4];                                      // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct  UTexture2D							 BloomConvolutionTexture;                           // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              BloomConvolutionCenterUV;                          // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         BloomConvolutionPreFilterMin;                      // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         BloomConvolutionPreFilterMax;                      // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         BloomConvolutionPreFilterMult;                     // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         BloomConvolutionBufferScale;                       // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture* BloomDirtMask;                                     // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         BloomDirtMaskIntensity;                            // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           BloomDirtMaskTint;                                 // 0x03D4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           AmbientCubemapTint;                                // 0x03E4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AmbientCubemapIntensity;                           // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureCube* AmbientCubemap;                                    // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         CameraShutterSpeed;                                // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         CameraISO;                                         // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldFstop;                                 // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldMinFstop;                              // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         DepthOfFieldBladeCount;                            // 0x0410(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AutoExposureBias;                                  // 0x0414(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AutoExposureBiasBackup;                            // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bOverride_AutoExposureBiasBackup : 1;              // 0x041C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         BitPad_41C_1 : 7;                                  // 0x041C(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
		uint8                                         Pad_41D[0x3];                                      // 0x041D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		uint8                                         AutoExposureApplyPhysicalCameraExposure : 1;       // 0x0420(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_421[0x7];                                      // 0x0421(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UCurveFloat* AutoExposureBiasCurve;                             // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture* AutoExposureMeterMask;                             // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AutoExposureLowPercent;                            // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AutoExposureHighPercent;                           // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AutoExposureMinBrightness;                         // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AutoExposureMaxBrightness;                         // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AutoExposureSpeedUp;                               // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AutoExposureSpeedDown;                             // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         HistogramLogMin;                                   // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         HistogramLogMax;                                   // 0x0454(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AutoExposureCalibrationConstant;                   // 0x0458(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LocalExposureHighlightContrastScale;               // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LocalExposureShadowContrastScale;                  // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_464[0x4];                                      // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UCurveFloat* LocalExposureHighlightContrastCurve;               // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat* LocalExposureShadowContrastCurve;                  // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LocalExposureHighlightThreshold;                   // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LocalExposureShadowThreshold;                      // 0x047C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LocalExposureDetailStrength;                       // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LocalExposureBlurredLuminanceBlend;                // 0x0484(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LocalExposureBlurredLuminanceKernelSizePercent;    // 0x0488(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LocalExposureMiddleGreyBias;                       // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         MiddleGreyBiasCompensation : 1;                    // 0x0490(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_491[0x3];                                      // 0x0491(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         BlurRadius;                                        // 0x0494(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ELensFlareMethod                              LensFlareMethod;                                   // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_499[0x3];                                      // 0x0499(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         LensFlareIntensity;                                // 0x049C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           LensFlareTint;                                     // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareBokehSize;                                // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareThreshold;                                // 0x04B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture* LensFlareBokehShape;                               // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareLineWidth;                                // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareLineLength;                               // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareLineIntensity;                            // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           LensFlareLineTint;                                 // 0x04CC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_4DC[0x4];                                      // 0x04DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UTexture* LensFlareHalo;                                     // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareHaloScaleMin;                             // 0x04E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareHaloScaleMax;                             // 0x04EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           LensFlareTints_1;                                  // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareLocation_1;                               // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           LensFlareTints_2;                                  // 0x0504(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareLocation_2;                               // 0x0514(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           LensFlareTints_3;                                  // 0x0518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareLocation_3;                               // 0x0528(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           LensFlareTints_4;                                  // 0x052C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareLocation_4;                               // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           LensFlareTints_5;                                  // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareLocation_5;                               // 0x0550(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           LensFlareTints_6;                                  // 0x0554(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           LensFlareTints_7;                                  // 0x0564(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           LensFlareTints_8;                                  // 0x0574(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bUseMobileLensFlare : 1;                           // 0x0584(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_585[0x3];                                      // 0x0585(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         MobileLensFlareIntensity;                          // 0x0588(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           MobileLensFlareTint;                               // 0x058C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MobileLensFlareBokehSize;                          // 0x059C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         LensFlareRandomSeed;                               // 0x05A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         LensFlareFlareCount;                               // 0x05A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareMinPositionScale;                         // 0x05A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareMaxPositionScale;                         // 0x05AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture* MobileLensFlareBokehShape;                         // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareIntensity2;                               // 0x05B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           LensFlareTint2;                                    // 0x05BC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareBokehSize2;                               // 0x05CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         LensFlareRandomSeed2;                              // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         LensFlareFlareCount2;                              // 0x05D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareMinPositionScale2;                        // 0x05D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareMaxPositionScale2;                        // 0x05DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture* LensFlareBokehShape2;                              // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           LensFlareRayTint;                                  // 0x05E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         LensFlareRaySliceCount;                            // 0x05F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareRayThreshold;                             // 0x05FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         LensFlareRayRandomSeed;                            // 0x0600(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareRaySize;                                  // 0x0604(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareRayWidth;                                 // 0x0608(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LensFlareRayIntensity;                             // 0x060C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         VignetteIntensity;                                 // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         GrainJitter;                                       // 0x0614(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         GrainIntensity;                                    // 0x0618(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AmbientOcclusionIntensity;                         // 0x061C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AmbientOcclusionStaticFraction;                    // 0x0620(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AmbientOcclusionRadius;                            // 0x0624(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         AmbientOcclusionRadiusInWS : 1;                    // 0x0628(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_629[0x3];                                      // 0x0629(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         AmbientOcclusionFadeDistance;                      // 0x062C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AmbientOcclusionFadeRadius;                        // 0x0630(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AmbientOcclusionDistance;                          // 0x0634(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AmbientOcclusionPower;                             // 0x0638(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AmbientOcclusionBias;                              // 0x063C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AmbientOcclusionQuality;                           // 0x0640(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AmbientOcclusionMipBlend;                          // 0x0644(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AmbientOcclusionMipScale;                          // 0x0648(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AmbientOcclusionMipThreshold;                      // 0x064C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AmbientOcclusionTemporalBlendWeight;               // 0x0650(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAOThreshold;                                   // 0x0654(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAOTwoSidedFoliageThreshold;                    // 0x0658(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAOBentNormalThreshold;                         // 0x065C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAONoiseStep;                                   // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAOStepSize;                                    // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAOFirstPersonStepSize;                         // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAOFoliageStepSize;                             // 0x066C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAOFoliageNormalAdjust;                         // 0x0670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAODenoiseTemporalBlendWeight;                  // 0x0674(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAODenoiseTemporalMomentBlendWeight;            // 0x0678(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAODenoiseTemporalNormalTolerance;              // 0x067C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAODenoiseTemporalDepthTolerance;               // 0x0680(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         SSRTAODenoiseTemporalHistoryLength;                // 0x0684(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAODenoiseSpatialAOSigma;                       // 0x0688(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAODenoiseSpatialDepthSigma;                    // 0x068C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAODenoiseSpatialNormalSigma;                   // 0x0690(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         SSRTAODenoiseATrousIteration;                      // 0x0694(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         SSRTAODenoiseATrousCopyIterationIndex;             // 0x0698(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         SSRTAODenoiseATrousIterationStartKernelStep;       // 0x069C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAODenoiseATrousAOSigma;                        // 0x06A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAODenoiseATrousDepthSigma;                     // 0x06A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAODenoiseATrousDepthWeightCutoff;              // 0x06A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAODenoiseATrousNormalSigma;                    // 0x06AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SSRTAODenoiseATrousMinVarianceToDenoise;           // 0x06B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         RayTracingAO : 1;                                  // 0x06B4(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_6B5[0x3];                                      // 0x06B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         RayTracingAOSamplesPerPixel;                       // 0x06B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           IndirectLightingColor;                             // 0x06BC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         IndirectLightingIntensity;                         // 0x06CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ERayTracingGlobalIlluminationType             RayTracingGIType;                                  // 0x06D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_6D1[0x3];                                      // 0x06D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         RayTracingGIMaxBounces;                            // 0x06D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         RayTracingGISamplesPerPixel;                       // 0x06D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         RayTracingCausticsEnable : 1;                      // 0x06DC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_6DD[0x3];                                      // 0x06DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		Engine::ERayTracingMeshCausticsResolutionOverride     RayTracingCausticsResolution;                      // 0x06E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_6E1[0x3];                                      // 0x06E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         RayTracingCausticsIntensity;                       // 0x06E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingCausticsMaxIntensity;                    // 0x06E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         RayTracingCausticsMaxTraceDepth;                   // 0x06EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingCausticsCullColorThreshold;         // 0x06F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingCausticsMidCullColorThreshold;           // 0x06F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ERayTracingMeshCausticsTranslucentReflectionMode RayTracingCausticsTranslucentReflectionMode;    // 0x06F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_6F9[0x3];                                      // 0x06F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         RayTracingCausticsMaxScreenRadius;                 // 0x06FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ERayTracingMeshCausticsBufferScale            RayTracingCausticsBufferScale;                     // 0x0700(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_701[0x3];                                      // 0x0701(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         RayTracingCausticsScatterDepthTolerance;           // 0x0704(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingCausticsSplatSize;                       // 0x0708(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         RayTracingCausticsEnableDispersion : 1;            // 0x070C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_70D[0x3];                                      // 0x070D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         RayTracingCausticsDispersionSamples;               // 0x0710(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingCausticsAdaptivePhotonSize;              // 0x0714(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingCausticsAdaptiveVarianceGain;            // 0x0718(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingCausticsAdaptiveSmooth;                  // 0x071C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         RayTracingCausticsAdaptiveMaxSample;               // 0x0720(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingCausticsAdaptiveUpdateSpeed;             // 0x0724(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         RayTracingCausticsEnableTemporalFilter : 1;        // 0x0728(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_729[0x3];                                      // 0x0729(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         RayTracingCausticsJitter;                          // 0x072C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingCausticsTemporalStrength;                // 0x0730(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingCausticsTemporalColorTolerance;          // 0x0734(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ERayTracingMeshCausticsDebugLightData         RayTracingCausticsDebugLightData;                  // 0x0738(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ERayTracingMeshCausticsDebugScreenData        RayTracingCausticsDebugScreenData;                 // 0x0739(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_73A[0x2];                                      // 0x073A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         RayTracingCausticsDebugMaxPixelValue;              // 0x073C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingCausticsDebugMapScale;                   // 0x0740(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         RayTracingCausticsDebugMaxPhotonCount;             // 0x0744(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         RayTracingCausticsDebugMip;                        // 0x0748(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         GIDenoiseApplyAO : 1;                              // 0x074C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         GIDenoiseEnableTemporal : 1;                       // 0x074C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_74D[0x3];                                      // 0x074D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         GIDenoiseTemporalBlendWeight;                      // 0x0750(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         GIDenoiseTemporalMomentBlendWeight;                // 0x0754(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         GIDenoiseTemporalNormalTolerance;                  // 0x0758(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         GIDenoiseTemporalDepthTolerance;                   // 0x075C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         GIDenoiseColorClamp;                               // 0x0760(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         GIDenoiseHistoryLength;                            // 0x0764(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         GIDenoiseEnableATrous : 1;                         // 0x0768(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_769[0x3];                                      // 0x0769(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         GIDenoiseATrousIteration;                          // 0x076C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         GIDenoiseATrousCopyIteration;                      // 0x0770(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         GIDenoiseATrousSampleDepthAsNormal : 1;            // 0x0774(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_775[0x3];                                      // 0x0775(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         GIDenoiseATrousFilterWidth;                        // 0x0778(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         GIDenoiseATrousVarianceGain;                       // 0x077C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         GIDenoiseATrousNormalTolerance;                    // 0x0780(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         GIDenoiseATrousDepthTolerance;                     // 0x0784(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         GIDenoiseATrousAOTolerance;                        // 0x0788(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ERayTracingGIDenoiseSpatialFilterType         GIDenoiseSpatialFilterType;                        // 0x078C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ERayTracingGIDenoiseType                      GIDenoiseType;                                     // 0x078D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ERayTracingGIDenoiseDebugType                 GIDenoiseDebugType;                                // 0x078E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ERayTracingWaterCausticsType                  RayTracingWaterCausticsType;                       // 0x078F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::ERayTracingWaterCausticsBufferScale           RayTracingWaterCausticsBufferScale;                // 0x0790(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_791[0x3];                                      // 0x0791(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		uint8                                         RayTracingWaterCausticsFollowCamera : 1;           // 0x0794(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_795[0x3];                                      // 0x0795(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                RayTracingWaterCausticsLookAt;                     // 0x0798(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                RayTracingWaterCausticsRange;                      // 0x07A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                           RayTracingWaterCausticsColor;                      // 0x07B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         RayTracingWaterCausticsNumDenoisePasses;           // 0x07C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingWaterCausticsDispersionIntensity;        // 0x07C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingWaterCausticsDispersionOffset;           // 0x07C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingWaterCausticsReflectiveIntensity;        // 0x07CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingWaterCausticsReflectedRayTMax;           // 0x07D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingWaterCausticsReflectedRayTMin;           // 0x07D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingWaterCausticsRefractiveIntensity;        // 0x07D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingWaterCausticsRefractedRayTMax;           // 0x07DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingWaterCausticsRefractedRayTMin;           // 0x07E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingWaterCausticsFresnelBaseReflectFraction; // 0x07E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingWaterCausticsReflectBackFaceCullingThreshold; // 0x07E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingWaterCausticsRefractBackFaceCullingThreshold; // 0x07EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ColorGradingIntensity;                             // 0x07F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_7F4[0x4];                                      // 0x07F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		UTexture* ColorGradingLUT;                                   // 0x07F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          UseACEScc;                                         // 0x0800(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          PCHighPrecisionLMT;                                // 0x0801(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_802[0x2];                                      // 0x0802(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         LMT_LUTIntensity;                                  // 0x0804(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		UTexture* LMT_LUT;                                           // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldSensorWidth;                           // 0x0810(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldSqueezeFactor;                         // 0x0814(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldFocalDistance;                         // 0x0818(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldDepthBlurAmount;                       // 0x081C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldDepthBlurRadius;                       // 0x0820(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldFocalRegion;                           // 0x0824(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MobileDepthOfFieldFocalDistance;                   // 0x0828(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldNearTransitionRegion;                  // 0x082C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldFarTransitionRegion;                   // 0x0830(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldScale;                                 // 0x0834(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldNearBlurSize;                          // 0x0838(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldFarBlurSize;                           // 0x083C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldOcclusion;                             // 0x0840(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldSkyFocusDistance;                      // 0x0844(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DepthOfFieldVignetteSize;                          // 0x0848(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ScreenRainDropBlurStrength;                        // 0x084C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ScreenRainDropBlurCullRadius;                      // 0x0850(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ScreenRainDropBlurStaticSplit;                     // 0x0854(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ScreenRainDropBlurStaticDropDensity;               // 0x0858(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ScreenRainDropBlurDynamicXSplit;                   // 0x085C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ScreenRainDropBlurDynamicYSplit;                   // 0x0860(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ScreenRainDropBlurDynamicDropDensity;              // 0x0864(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ScreenRainDropBlurTest;                            // 0x0868(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MotionBlurAmount;                                  // 0x086C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MotionBlurMax;                                     // 0x0870(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         MotionBlurTargetFPS;                               // 0x0874(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MotionBlurPerObjectSize;                           // 0x0878(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bEnableMobileMotionBlur : 1;                       // 0x087C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_87D[0x3];                                      // 0x087D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         MobileMotionBlurMaxSampleCount;                    // 0x0880(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MobileMotionBlurVelocityScale;                     // 0x0884(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MobileMotionBlurMaxVelocity;                       // 0x0888(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bMobileMotionBlurUseAABBMask : 1;                  // 0x088C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_88D[0x3];                                      // 0x088D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         MobileMotionBlurDepthMask;                         // 0x0890(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MobileMotionBlurDepthMaskTransition;               // 0x0894(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              MobileMotionBlurAABBMaskCenter;                    // 0x0898(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              MobileMotionBlurAABBMaskExtent;                    // 0x08A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MobileMotionBlurAABBMaskTransition;                // 0x08A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bMobileMotionBlurDisplayIntensity : 1;             // 0x08AC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bMobileMotionBlurUseVSVelocity : 1;                // 0x08AC(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_8AD[0x3];                                      // 0x08AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         MobileMotionBlurDownSampleFactor;                  // 0x08B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MobileMotionBlurAssumedDepth;                      // 0x08B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVIntensity;                                      // 0x08B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVVplInjectionBias;                               // 0x08BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVSize;                                           // 0x08C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVSecondaryOcclusionIntensity;                    // 0x08C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVSecondaryBounceIntensity;                       // 0x08C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVGeometryVolumeBias;                             // 0x08CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVEmissiveInjectionIntensity;                     // 0x08D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVDirectionalOcclusionIntensity;                  // 0x08D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVDirectionalOcclusionRadius;                     // 0x08D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVDiffuseOcclusionExponent;                       // 0x08DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVSpecularOcclusionExponent;                      // 0x08E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVDiffuseOcclusionIntensity;                      // 0x08E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVSpecularOcclusionIntensity;                     // 0x08E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::EReflectionsType                              ReflectionsType;                                   // 0x08EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_8ED[0x3];                                      // 0x08ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         ScreenSpaceReflectionIntensity;                    // 0x08F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ScreenSpaceReflectionQuality;                      // 0x08F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ScreenSpaceReflectionMaxRoughness;                 // 0x08F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingReflectionsMaxRoughness;                 // 0x08FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         RayTracingReflectionsMaxBounces;                   // 0x0900(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         RayTracingReflectionsSamplesPerPixel;              // 0x0904(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::EReflectedAndRefractedRayTracedShadows        RayTracingReflectionsShadows;                      // 0x0908(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         RayTracingReflectionsTranslucency : 1;             // 0x0909(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		Engine::ETranslucencyType                             TranslucencyType;                                  // 0x090A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_90B[0x1];                                      // 0x090B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         RayTracingTranslucencyMaxRoughness;                // 0x090C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingTranslucencyMinReflectionThroughput;     // 0x0910(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RayTracingTranslucencyMinRefractionThroughput;     // 0x0914(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         RayTracingTranslucencyEnableAbsorption : 1;        // 0x0918(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_919[0x3];                                      // 0x0919(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         RayTracingTranslucencyRefractionRays;              // 0x091C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         RayTracingTranslucencySamplesPerPixel;             // 0x0920(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::EReflectedAndRefractedRayTracedShadows        RayTracingTranslucencyShadows;                     // 0x0924(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         RayTracingTranslucencyRefraction : 1;              // 0x0925(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_926[0x2];                                      // 0x0926(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         PathTracingMaxBounces;                             // 0x0928(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         PathTracingSamplesPerPixel;                        // 0x092C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVFadeRange;                                      // 0x0930(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         LPVDirectionalOcclusionFadeRange;                  // 0x0934(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ScreenPercentage;                                  // 0x0938(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_93C[0x4];                                      // 0x093C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FWeightedBlendables                    WeightedBlendables;                                // 0x0940(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	};

	// ScriptStruct Engine.MinimalViewInfo
	// 0x09E0 (0x09E0 - 0x0000)
	struct FMinimalViewInfo
	{
	public:
		FEncVector                             Location;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FRotator                               Rotation;                                          // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                         FOV;                                               // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DesiredFOV;                                        // 0x0020(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         OrthoWidth;                                        // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         OrthoNearClipPlane;                                // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         OrthoFarClipPlane;                                 // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AspectRatio;                                       // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bConstrainAspectRatio : 1;                         // 0x0034(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bUseFieldOfViewForLOD : 1;                         // 0x0034(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		ECameraProjectionMode                         ProjectionMode;                                    // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         PostProcessBlendWeight;                            // 0x003C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct 	FPostProcessSettings                   PostProcessSettings;                               // 0x0040(0x0950)(BlueprintVisible, NativeAccessSpecifierPublic)
		FVector2D                              OffCenterProjectionOffset;                         // 0x0990(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_998[0x48];                                     // 0x0998(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// Class Engine.CameraActor
	// 0x0980 (0x0CF0 - 0x0370)
	class ACameraActor// : public AActor
	{
	public:
		Engine::EAutoReceiveInput                             AutoActivateForPlayer;                             // 0x0370(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UCameraComponent* CameraComponent;                                   // 0x0378(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		class USceneComponent* SceneComponent;                                    // 0x0380(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_388[0x8];                                      // 0x0388(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
		uint8                                         bConstrainAspectRatio : 1;                         // 0x0390(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
		uint8                                         Pad_391[0x3];                                      // 0x0391(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         AspectRatio;                                       // 0x0394(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		float                                         FOVAngle;                                          // 0x0398(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		float                                         PostProcessBlendWeight;                            // 0x039C(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		static FPostProcessSettings                      PostProcessSettings;                               // 0x03A0(0x0950)(Deprecated, NativeAccessSpecifierPrivate)


	};
	// ScriptStruct Engine.TableRowBase
	// 0x0008 (0x0008 - 0x0000)
	struct alignas(0x08) FTableRowBase
	{
	public:
		uint8_t                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct Engine.PhysicalAnimationData
	// 0x0024 (0x0024 - 0x0000)
	struct FPhysicalAnimationData
	{
	public:
		char                                     BodyName;                                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         bIsLocalSimulation : 1;                            // 0x0008(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         OrientationStrength;                               // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AngularVelocityStrength;                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         PositionStrength;                                  // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         VelocityStrength;                                  // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MaxLinearForce;                                    // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MaxAngularForce;                                   // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.TireFrictionScalePair
	// 0x0010 (0x0010 - 0x0000)
	struct FTireFrictionScalePair
	{
	public:
		class UTireType* TireType;                                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         FrictionScale;                                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct Engine.NavigationLink
		// 0x0018 (0x0050 - 0x0038)
	struct FNavigationLink
	{
	public:
		FVector                                Left;                                              // 0x0038(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                Right;                                             // 0x0044(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.WindParametersStruct
	// 0x001C (0x001C - 0x0000)
	struct FWindParametersStruct
	{
	public:
		FVector                                Direction;                                         // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Speed;                                             // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SpeedForFX;                                        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MinGustAmt;                                        // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MaxGustAmt;                                        // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.ExpressionOutput
	// 0x0008 (0x0008 - 0x0000)
	struct FExpressionOutput
	{
	public:
		char                                 OutputName;                                        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.RootMotionSourceSettings
	// 0x0001 (0x0001 - 0x0000)
	struct FRootMotionSourceSettings
	{
	public:
		uint8_t                                         Flags;                                             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// ScriptStruct Engine.SoundWaveSpectralDataEntry
	// 0x0008 (0x0008 - 0x0000)
	struct FSoundWaveSpectralDataEntry
	{
	public:
		float                                         Magnitude;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         NormalizedMagnitude;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.SoundWaveSpectralTimeData
	// 0x0018 (0x0018 - 0x0000)
	struct FSoundWaveSpectralTimeData
	{
	public:
		TMemoryBlockEx<struct FSoundWaveSpectralDataEntry>    Data;                                              // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
		float                                         TimeSec;                                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};


	// ScriptStruct CoreUObject.InterpCurvePointVector
	// 0x002C (0x002C - 0x0000)
	struct FInterpCurvePointVector
	{
	public:
		float                                         InVal;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                OutVal;                                            // 0x0004(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                ArriveTangent;                                     // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                LeaveTangent;                                      // 0x001C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Core::EInterpCurveMode                              InterpMode;                                        // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};


	// ScriptStruct CoreUObject.InterpCurveVector
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveVector
	{
	public:
		std::is_array<struct FInterpCurvePointVector>        Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                          bIsLooped;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         LoopKeyOffset;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// ScriptStruct CoreUObject.InterpCurveQuat
		// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveQuat
	{
	public:
		std::is_array<struct FInterpCurvePointQuat>          Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                          bIsLooped;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         LoopKeyOffset;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.InterpCurveFloat
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveFloat
	{
	public:
		std::is_array<struct FInterpCurvePointFloat>         Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                          bIsLooped;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         LoopKeyOffset;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct Engine.SplineCurves
	// 0x0068 (0x0068 - 0x0000)
	struct FSplineCurves
	{
	public:
		FInterpCurveVector                     Position;                                          // 0x0000(0x0018)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FInterpCurveQuat                       Rotation;                                          // 0x0018(0x0018)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FInterpCurveVector                     Scale;                                             // 0x0030(0x0018)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FInterpCurveFloat                      ReparamTable;                                      // 0x0048(0x0018)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		char								   MetaData[0x0008];                                          // 0x0060(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	// ScriptStruct Engine.PhysicalAnimationProfile
	// 0x002C (0x002C - 0x0000)
	struct FPhysicalAnimationProfile
	{
	public:
		char                                     ProfileName;                                       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FPhysicalAnimationData                 PhysicalAnimationData;                             // 0x0008(0x0024)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	};

	// ScriptStruct Engine.RootMotionSourceGroup
	// 0x00F8 (0x00F8 - 0x0000)
	struct alignas(0x08) FRootMotionSourceGroup
	{
	public:
		uint8_t                                         Pad_0[0xE8];                                       // 0x0000(0x00E8)(Fixing Size After Last Property [ Dumper-7 ])
		uint8_t                                         bHasAdditiveSources : 1;                           // 0x00E8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         bHasOverrideSources : 1;                           // 0x00E8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         bIsAdditiveVelocityApplied : 1;                    // 0x00E8(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		FRootMotionSourceSettings              LastAccumulatedSettings;                           // 0x00E9(0x0001)(NoDestructor, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_EA[0x2];                                       // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		FVector                  LastPreAdditiveVelocity;                           // 0x00EC(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};



	// ScriptStruct Engine.RigidBodyState
	// 0x0040 (0x0040 - 0x0000)
	struct FRigidBodyState
	{
	public:
		FVector                 Position;                                          // 0x0000(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		FQuat                                  Quaternion;                                        // 0x0010(0x0010)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		FVector                 LinVel;                                            // 0x0020(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                 AngVel;                                            // 0x002C(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Timestamp;                                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Flags;                                             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};


	// ScriptStruct Engine.RepRootMotionMontage
	// 0x0158 (0x0158 - 0x0000)
	struct FRepRootMotionMontage
	{
	public:
		bool                                          bIsActive;                                         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		uint8_t							UAnimMontage_AnimMontage[0x0008];                                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Position;                                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector									Location_NetQuantize100;                                          // 0x0014(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                               Rotation;                                          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UPrimitiveComponent* MovementBase;                                      // 0x0030(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		char                                   MovementBaseBoneName;                              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bRelativePosition;                                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bRelativeRotation;                                 // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		FRootMotionSourceGroup                 AuthoritativeRootMotion;                           // 0x0048(0x00F8)(NativeAccessSpecifierPublic)
		FVector                   Acceleration;                                      // 0x0140(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                 LinearVelocity;                                    // 0x014C(0x000C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.SimulatedRootMotionReplicatedMove    Cam::
	// 0x0160 (0x0160 - 0x0000)
	struct FSimulatedRootMotionReplicatedMove
	{
	public:
		float                                         Time;                                              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		FRepRootMotionMontage                  RootMotion;                                        // 0x0008(0x0158)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	// ScriptStruct Engine.NodeItem
	// 0x0040 (0x0040 - 0x0000)
	struct FNodeItem
	{
	public:
		char                                   ParentName;                                        // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
		FTransform                             Transform;                                         // 0x0010(0x0030)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.TTLinearColorTrack
	// 0x0008 (0x0028 - 0x0020)
	struct FTTLinearColorTrack
	{
	public:
		class UCurveLinearColor* CurveLinearColor;                                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.SlotEvaluationPose
	// 0x0040 (0x0040 - 0x0000)
	struct alignas(0x08) FSlotEvaluationPose
	{
	public:
		Cam::EAdditiveAnimationType                        AdditiveType;                                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         Weight;                                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_8[0x38];                                       // 0x0008(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};


	// ScriptStruct Engine.MTDResult
	// 0x0010 (0x0010 - 0x0000)
	struct FMTDResult
	{
	public:
		FVector                                Direction;                                         // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Distance;                                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.VOscillator
	// 0x0024 (0x0024 - 0x0000)
	struct FVOscillator
	{
	public:
		FVector                          x;                                                 // 0x0000(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
		FVector                           y;                                                 // 0x000C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
		FVector                          z;                                                 // 0x0018(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	};

	// ScriptStruct Engine.QueuedDrawDebugItem
	// 0x0068 (0x0068 - 0x0000)
	struct FQueuedDrawDebugItem
	{
	public:
		Cam::EDrawDebugItemType                            ItemType;                                          // 0x0000(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		FVector                                StartLoc;                                          // 0x0004(0x000C)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                EndLoc;                                            // 0x0010(0x000C)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                Center;                                            // 0x001C(0x000C)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                               Rotation;                                          // 0x0028(0x000C)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                         radius;                                            // 0x0034(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         size;                                              // 0x0038(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         Segments;                                          // 0x003C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FColor									Color;                                             // 0x0040(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bPersistentLines;                                  // 0x0044(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         LifeTime;                                          // 0x0048(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Thickness;                                         // 0x004C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		std::string                                 Message;                                           // 0x0050(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              TextScale;                                         // 0x0060(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.NameCurve
	// 0x0010 (0x0078 - 0x0068)
	struct FNameCurve
	{
	public:
		TMemoryBlockEx<struct FNameCurveKey>                  Keys;                                              // 0x0068(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.AnimMontageInstance
	// 0x01B0 (0x01B0 - 0x0000)
	struct FAnimMontageInstance
	{
	public:
		class UAnimMontage* Montage;                                           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_8[0x20];                                       // 0x0008(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
		bool                                          bPlaying;                                          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         DefaultBlendTimeMultiplier;                        // 0x002C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_30[0xB8];                                      // 0x0030(0x00B8)(Fixing Size After Last Property [ Dumper-7 ])
		std::vector<int32_t>                                 NextSections;                                      // 0x00E8(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
		std::vector<int32_t>                                 PrevSections;                                      // 0x00F8(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
		uint8_t                                         Pad_108[0x10];                                     // 0x0108(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
		std::vector<struct FAnimNotifyEvent>               ActiveStateBranchingPoints;                        // 0x0118(0x0010)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
		std::vector<uint8_t>							FAnimNotifyEvent_ActiveStateBranchingPoints[0x0010];                        // 0x0118(0x0010)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
		float                                         Position;                                          // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		float                                         PlayRate;                                          // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		struct FAlphaBlend* Blend;                                             // 0x0130(0x0030)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
		uint8_t											FAlphaBlend_Blend[0x30];                                             // 0x0130(0x0030)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
		uint8_t                                         Pad_160[0x28];                                     // 0x0160(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
		int32_t                                         DisableRootMotionCount;                            // 0x0188(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8_t                                         Pad_18C[0x24];                                     // 0x018C(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};


	// ScriptStruct Engine.BranchingPointMarker
	// 0x000C (0x000C - 0x0000)
	struct FBranchingPointMarker
	{
	public:
		int32_t                                         NotifyIndex;                                       // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float											TriggerTime;                                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::EAnimNotifyEventType						NotifyEventType;                                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct Engine.LinearConstraint
	// 0x0008 (0x001C - 0x0014)
	struct FLinearConstraint
	{
	public:
		float												Limit;                                             // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::ELinearConstraintMotion						XMotion;                                           // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::ELinearConstraintMotion						YMotion;                                           // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::ELinearConstraintMotion						ZMotion;                                           // 0x001A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t												Pad_1B[0x1];                                       // 0x001B(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};


	// ScriptStruct Engine.ConstraintDrive
	// 0x0010 (0x0010 - 0x0000)
	struct FConstraintDrive
	{
	public:
		float                                         Stiffness;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         damping;                                           // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MaxForce;                                          // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t											bEnablePositionDrive : 1;                          // 0x000C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         bEnableVelocityDrive : 1;                          // 0x000C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};


	// ScriptStruct Engine.AngularDriveConstraint
	// 0x004C (0x004C - 0x0000)
	struct FAngularDriveConstraint
	{
	public:
		FConstraintDrive                       TwistDrive;                                        // 0x0000(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
		FConstraintDrive                       SwingDrive;                                        // 0x0010(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
		FConstraintDrive                       SlerpDrive;                                        // 0x0020(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
		Vector4                              OrientationTarget;                                 // 0x0030(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		FVector                                AngularVelocityTarget;                             // 0x003C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::EAngularDriveMode                             AngularDriveMode;                                  // 0x0048(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};


	// ScriptStruct Engine.ConeConstraint
	// 0x000C (0x0020 - 0x0014)
	struct FConeConstraint
	{
	public:
		float                                         Swing1LimitDegrees;                                // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Swing2LimitDegrees;                                // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::EAngularConstraintMotion                      Swing1Motion;                                      // 0x001C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::EAngularConstraintMotion                      Swing2Motion;                                      // 0x001D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                          Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct Engine.LinearDriveConstraint
	// 0x004C (0x004C - 0x0000)
	struct FLinearDriveConstraint
	{
	public:
		FVector                                PositionTarget;                                    // 0x0000(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                VelocityTarget;                                    // 0x000C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FConstraintDrive                       XDrive;                                            // 0x0018(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
		FConstraintDrive                       YDrive;                                            // 0x0028(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
		FConstraintDrive                       ZDrive;                                            // 0x0038(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
		uint8_t                                          bEnablePositionDrive : 1;                          // 0x0048(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                          Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct Engine.ConstraintBaseParams
	// 0x0014 (0x0014 - 0x0000)
	struct FConstraintBaseParams
	{
	public:
		float                                         Stiffness;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         damping;                                           // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Restitution;                                       // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ContactDistance;                                   // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         bSoftConstraint : 1;                               // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};


	// ScriptStruct Engine.TwistConstraint
	// 0x0008 (0x001C - 0x0014)
	struct FTwistConstraint : public FConstraintBaseParams
	{
	public:
		float                                         TwistLimitDegrees;                                 // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Engine::EAngularConstraintMotion              TwistMotion;                                       // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                       Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// ScriptStruct Engine.ConstraintProfileProperties
	// 0x0104 (0x0104 - 0x0000)
	struct FConstraintProfileProperties
	{
	public:
		float											ProjectionLinearTolerance;                         // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float											ProjectionAngularTolerance;                        // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float											LinearBreakThreshold;                              // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float											AngularBreakThreshold;                             // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FLinearConstraint                      LinearLimit;                                       // 0x0010(0x001C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
		FConeConstraint                        ConeLimit;                                         // 0x002C(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)
		FTwistConstraint                       TwistLimit;                                        // 0x004C(0x001C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
		FLinearDriveConstraint                 LinearDrive;                                       // 0x0068(0x004C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
		FAngularDriveConstraint                AngularDrive;                                      // 0x00B4(0x004C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
		uint8_t                                         bDisableCollision : 1;                             // 0x0100(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         bParentDominates : 1;                              // 0x0100(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         bEnableProjection : 1;                             // 0x0100(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         bAngularBreakable : 1;                             // 0x0100(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         bLinearBreakable : 1;                              // 0x0100(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct Engine.PhysicsConstraintProfileHandle
	// 0x010C (0x010C - 0x0000)
	struct FPhysicsConstraintProfileHandle
	{
	public:
		FConstraintProfileProperties			ProfileProperties;                                 // 0x0000(0x0104)(NoDestructor, NativeAccessSpecifierPublic)
		char										ProfileName;                                       // 0x0104(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.ChaosPhysicsSettings
	// 0x0003 (0x0003 - 0x0000)
	struct FChaosPhysicsSettings
	{
	public:
		Cam::EChaosThreadingMode                           DefaultThreadingModel;                             // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::EChaosSolverTickMode                          DedicatedThreadTickMode;                           // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::EChaosBufferMode                              DedicatedThreadBufferMode;                         // 0x0002(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.PhysicalSurfaceName
	// 0x000C (0x000C - 0x0000)
	struct FPhysicalSurfaceName
	{
	public:
		Cam::EPhysicalSurface								Type;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t												Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		char												Name;                                              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	//
	//// ScriptStruct Engine.DelegateArray
	//// 0x0010 (0x0010 - 0x0000)
	//struct FDelegateArray final
	//{
	//public:
	//	TArray<TDelegate<void(const struct FPlatformInterfaceDelegateResult& Result)>> Delegates;        // 0x0000(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	//};
	// 

	// ScriptStruct Engine.ViewTargetTransitionParams
	// 0x0010 (0x0010 - 0x0000)
	struct FViewTargetTransitionParams
	{
	public:
		float											BlendTime;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::EViewTargetBlendFunction					BlendFunction;                                     // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float											BlendExp;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         bLockOutgoing : 1;                                 // 0x000C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};


	// ScriptStruct Engine.TViewTarget
	// 0x0A00 (0x0A00 - 0x0000)
	struct FTViewTarget
	{
	public:
		class AActor* Target;                                            // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
		FMinimalViewInfo						POV;                                               // 0x0010(0x09E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		uint64_t* PlayerState;                                       // 0x09F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		uint8_t                                         Pad_9F8[0x8];                                      // 0x09F8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct GameCore.DescRowBase
	// 0x0008 (0x0010 - 0x0008)
	struct FDescRowBase : public FTableRowBase
	{
	public:
		char                           RowDescription;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct DFMGlobalDefines.DFMCommonItemRow
	// 0x0208 (0x0218 - 0x0010)
	struct FDFMCommonItemRow : public FDescRowBase
	{
	public:
		char											ItemID;                                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		char											Name;                                              // 0x0018(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		char											SubName;                                           // 0x0030(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		int32_t                                         GameItemType;                                      // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		char											ShortName;                                         // 0x0050(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		int32_t                                         Quality;                                           // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         Material;                                          // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         MaxStackCount;                                     // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         Length;                                            // 0x0074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         Width;                                             // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool											CanDecomposed;                                     // 0x007C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool											NeedDropped;                                       // 0x007D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool											CanUsed;                                           // 0x007E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool											CanBeGift;                                         // 0x007F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		char											Description;                                       // 0x0080(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		char											ShortDescription;                                  // 0x0098(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		float											Capacity;                                          // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         GainEquipPos;                                      // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         DefaultCarrySlot;                                  // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool											CanStoreInSafeBox;                                 // 0x00BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t											Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32_t                                         Score;                                             // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool											IsCurrency;                                        // 0x00C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool											bCanFastEquip;                                     // 0x00C5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool											IsModelOnly;                                       // 0x00C6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool											bIsCheck;                                          // 0x00C7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float											Weight;                                            // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		char											RecycleMoney;                                      // 0x00CC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         RecyclePrice;                                      // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         InitialGuidePrice;                                 // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         SellPriceRates;                                    // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         RedemptionRates;                                   // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         DailyRecycleMax;                                   // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         MallRecyclePrice;                                  // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         BitUsage;                                          // 0x00EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         TagFilterMain;                                     // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         TagFilterSub;                                      // 0x00F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         SortWeight;                                        // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         Inventory;                                         // 0x00FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		std::vector<int32_t>							SourceMapId;                                       // 0x0100(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		std::vector<char>						SourceMapTitle;                                    // 0x0110(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		std::vector<char>						SourceMapDesc;                                     // 0x0120(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                         cdid;                                              // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		std::vector<std::string>						Pictures;                                          // 0x0138(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		std::vector<  struct FWidgetTransform>			ictureTransforms;                                 // 0x0148(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		std::string										MallItemIcon;                                      // 0x0158(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		char											ShortNameSec;                                      // 0x0168(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		float											RecyclePricePercent;                               // 0x0180(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float											ModifyParam;                                       // 0x0184(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float											ModifyParam2;                                      // 0x0188(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                         LootingAudioId;                                    // 0x018C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool											bHighValueItemNeedInspection;                      // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		uint64_t                                        ConnectedPool;                                     // 0x0198(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool											bValuableItem;                                     // 0x01A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool											NoRedPoint;                                        // 0x01A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_1A2[0x2];                                      // 0x01A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32_t                                         CommercializeType;                                 // 0x01A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint64_t                                        JumpId;                                            // 0x01A8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		char											ButtonDes;                                         // 0x01B0(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		char											EndButtonDes;                                      // 0x01C8(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		char											UnlockTip;                                         // 0x01E0(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		char											UsageTip;                                          // 0x01F8(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_210[0x8];                                      // 0x0210(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// Package: BP_TestPlayerCameraManager
	struct FRepMovement
	{
	public:
		FVector									LinearVelocity;                                    // 0x0000(0x000C)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector									AngularVelocity;                                   // 0x000C(0x000C)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FEncVector								Location;                                          // 0x0018(0x0010)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector									Rotation;                                          // 0x0028(0x000C)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		uint8_t									bSimulatedPhysicSleep : 1;                         // 0x0034(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t									bRepPhysics : 1;                                   // 0x0034(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		Cam::EVectorQuantization			    LocationQuantizationLevel;                         // 0x0035(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::EVectorQuantization				VelocityQuantizationLevel;                         // 0x0036(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::ERotatorQuantization				RotationQuantizationLevel;                         // 0x0037(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.AnimSlotInfo
	// 0x0018 (0x0018 - 0x0000)
	struct FAnimSlotInfo
	{
	public:
		char                               SlotName;                                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		std::vector<float>                                 ChannelWeights;                                    // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	};


	// ScriptStruct Engine.GPUMeshResourceData
	// 0x0150 (0x0150 - 0x0000)
	struct FGPUMeshResourceData
	{
	public:
		std::is_array<FColor>						QuantizedColorSamples;                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
		std::is_array< FColor>						QuantizedMiscSamples;                              // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
		std::is_array< FColor>						QuantizedSimulationAttrSamples;                    // 0x0020(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
		Vector4 										ColorScale;                                        // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Vector4											ColorBias;                                         // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Vector4											MiscScale;                                         // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Vector4											MiscBias;                                          // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Vector4											SimulationAttrCurveScale;                          // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Vector4											SimulationAttrCurveBias;                           // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Vector4                               SubImageSize;                                      // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Vector4                               SizeBySpeed;                                       // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                               ConstantAcceleration;                              // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                              OrbitOffsetBase;                                   // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                               OrbitOffsetRange;                                  // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                              OrbitFrequencyBase;                                // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector									OrbitFrequencyRange;                               // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                              OrbitPhaseBase;                                    // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                              OrbitPhaseRange;                                   // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DragCoefficientScale;                              // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         DragCoefficientBias;                               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ResilienceScale;                                   // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ResilienceBias;                                    // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         CollisionRadiusScale;                              // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         CollisionRadiusBias;                               // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         CollisionTimeBias;                                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         CollisionRandomSpread;                             // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         CollisionRandomDistribution;                       // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         OneMinusFriction;                                  // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         RotationRateScale;                                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         CameraMotionBlurAmount;                            // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::EParticleScreenAlignment                      ScreenAlignment;                                   // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		Cam::EMeshScreenAlignment                          MeshAlignment;                                     // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_136[0x2];                                      // 0x0136(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		uint8_t                                         bRemoveHMDRoll : 1;                                // 0x0138(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         MinFacingCameraBlendDistance;                      // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         MaxFacingCameraBlendDistance;                      // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_144[0xC];                                      // 0x0144(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct Engine.CameraCacheEntry
	// 0x16D70 (0x16D70 - 0x0000)
	struct FCameraCacheEntry final
	{
	public:
		float                                         Timestamp;                                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
		struct FMinimalViewInfo                       POV;                                               // 0x0010(0x09E0)(NativeAccessSpecifierPublic)
		uint8                                         Pad_9F0[0x16380];                                  // 0x09F0(0x16380)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// Class Engine.PlayerCameraManager
// 0x5CB70 (0x5CEE0 - 0x0370)
#pragma pack(push, 0x1)
	class alignas(0x10) APlayerCameraManager
	{
	public:
		class APlayerController* PCOwner;                                           // 0x0370(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent* TransformComponent;                                // 0x0378(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_380[0x8];                                      // 0x0380(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         DefaultFOV;                                        // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         DefaultOrthoWidth;                                 // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_394[0x4];                                      // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         DefaultAspectRatio;                                // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_39C[0x44];                                     // 0x039C(0x0044)(Fixing Size After Last Property [ Dumper-7 ])
		FCameraCacheEntry                      CameraCache;                                       // 0x03E0(0x16D70)(Transient, NativeAccessSpecifierPublic)
		FCameraCacheEntry                      LastFrameCameraCache;                              // 0x17150(0x16D70)(Transient, NativeAccessSpecifierPublic)
		FTViewTarget                           ViewTarget;                                        // 0x2DEC0(0x0A00)(Transient, NativeAccessSpecifierPublic)
		FTViewTarget                           PendingViewTarget;                                 // 0x2E8C0(0x0A00)(Transient, NativeAccessSpecifierPublic)
		uint8                                         Pad_2F2C0[0x20];                                   // 0x2F2C0(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
		FCameraCacheEntry                      CameraCachePrivate;                                // 0x2F2E0(0x16D70)(Transient, NativeAccessSpecifierPrivate)
		FCameraCacheEntry                      LastFrameCameraCachePrivate;                       // 0x46050(0x16D70)(Transient, NativeAccessSpecifierPrivate)
		std::is_array<class UCameraModifier*>                ModifierList;                                      // 0x5CDC0(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
		std::is_array<TSubclassOf<class UCameraModifier>>    DefaultModifiers;                                  // 0x5CDD0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
		float                                         FreeCamDistance;                                   // 0x5CDE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                FreeCamOffset;                                     // 0x5CDE4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		FVector                                ViewTargetOffset;                                  // 0x5CDF0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_5CDFC[0x14];                                   // 0x5CDFC(0x0014)(Fixing Size After Last Property [ Dumper-7 ])
		std::is_array<class AEmitterCameraLensEffectBase*>   CameraLensEffects;                                 // 0x5CE10(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
		class UCameraModifier_CameraShake* CachedCameraShakeMod;                              // 0x5CE20(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		class UCameraAnimInst* AnimInstPool[0x8];                                 // 0x5CE28(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		std::is_array<struct FPostProcessSettings>           PostProcessBlendCache;                             // 0x5CE68(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
		uint8                                         Pad_5CE78[0x10];                                   // 0x5CE78(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
		std::is_array<class UCameraAnimInst*>                ActiveAnims;                                       // 0x5CE88(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
		std::is_array<class UCameraAnimInst*>                FreeAnims;                                         // 0x5CE98(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
		class ACameraActor* AnimCameraActor;                                   // 0x5CEA8(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		uint8                                         bIsOrthographic : 1;                               // 0x5CEB0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bDefaultConstrainAspectRatio : 1;                  // 0x5CEB0(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         BitPad_5CEB0_2 : 4;                                // 0x5CEB0(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
		uint8                                         bClientSimulatingViewTarget : 1;                   // 0x5CEB0(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bUseClientSideCameraUpdates : 1;                   // 0x5CEB0(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         BitPad_5CEB1_0 : 2;                                // 0x5CEB1(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
		uint8                                         bGameCameraCutThisFrame : 1;                       // 0x5CEB1(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_5CEB2[0x2];                                    // 0x5CEB2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         ViewPitchMin;                                      // 0x5CEB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ViewPitchMax;                                      // 0x5CEB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ViewYawMin;                                        // 0x5CEBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ViewYawMax;                                        // 0x5CEC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ViewRollMin;                                       // 0x5CEC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ViewRollMax;                                       // 0x5CEC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_5CECC[0x4];                                    // 0x5CECC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         ServerUpdateCameraTimeout;                         // 0x5CED0(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		uint8                                         Pad_5CED4[0x4];                                    // 0x5CED4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

	};
#pragma pack(pop)

	// Class Engine.CameraModifier
	// 0x0020 (0x0048 - 0x0028)
	class UCameraModifier
	{
	public:
		uint8_t                                         bDebug : 1;                                        // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         bExclusive : 1;                                    // 0x0028(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8_t                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		uint8_t                                         Priority;                                          // 0x002C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8_t                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		APlayerCameraManager 							CameraOwner;                                       // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		float											AlphaInTime;                                       // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		float											AlphaOutTime;                                      // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		float											Alpha;                                             // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
		uint8_t                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

	};



};
 
