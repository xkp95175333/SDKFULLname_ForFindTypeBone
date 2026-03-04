
class alignas(0x01) FFieldPathProperty_
{
	unsigned __int8 Pad[0x20];
};

class alignas(0x01) FEncryptedObjectProperty_
{
	unsigned __int8 Pad[0x8];
};

class alignas(0x01) FMulticastSparseDelegateProperty_
{
	unsigned __int8 Pad[0x1];
};

// Enum Engine.EFormatArgumentType
// NumValues: 0x0007
enum class EFormatArgumentType : uint8
{
	Int                                      = 0,
	UInt                                     = 1,
	Float                                    = 2,
	Double                                   = 3,
	Text                                     = 4,
	Gender                                   = 5,
	EFormatArgumentType_MAX                  = 6,
};
 
// Enum Engine.EPlatformInterfaceDataType
// NumValues: 0x0007
enum class EPlatformInterfaceDataType : uint8
{
	PIDT_None                                = 0,
	PIDT_Int                                 = 1,
	PIDT_Float                               = 2,
	PIDT_String                              = 3,
	PIDT_Object                              = 4,
	PIDT_Custom                              = 5,
	PIDT_MAX                                 = 6,
};


// Enum AnimationCore.ETransformConstraintType
// NumValues: 0x0005
enum class ETransformConstraintType : uint8
{
	Translation                              = 0,
	Rotation                                 = 1,
	Scale                                    = 2,
	Parent                                   = 3,
	ETransformConstraintType_MAX             = 4,
};

// Enum AnimationCore.EConstraintType
// NumValues: 0x0003
enum class EConstraintType : uint8
{
	Transform                                = 0,
	Aim                                      = 1,
	MAX                                      = 2,
};

// ScriptStruct AnimationCore.ConstraintDescriptor
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FConstraintDescriptor
{
public:
	EConstraintType                               Type;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0xF];                                        // 0x0001(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationCore.ConstraintData
// 0x0080 (0x0080 - 0x0000)
struct FConstraintData
{
public:
	struct FConstraintDescriptor                  Constraint;                                        // 0x0000(0x0010)(NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMaintainOffset;                                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0xB];                                       // 0x0015(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             offset;                                            // 0x0020(0x0030)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             CurrentTransform;                                  // 0x0050(0x0030)(Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.Axis
// 0x0010 (0x0010 - 0x0000)
struct FAxis
{
public:
	struct FVector                                Axis;                                              // 0x0000(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInLocalSpace;                                     // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationCore.CCDIKChainLink
// 0x0080 (0x0080 - 0x0000)
struct alignas(0x10) FCCDIKChainLink
{
public:
	uint8                                         Pad_0[0x80];                                       // 0x0000(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationCore.FilterOptionPerAxis
// 0x0003 (0x0003 - 0x0000)
struct FFilterOptionPerAxis
{
public:
	bool                                          bX;                                                // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bY;                                                // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bZ;                                                // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FConstraintDescriptionEx
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilterOptionPerAxis                   AxesFilterOption;                                  // 0x0008(0x0003)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationCore.AimConstraintDescription
// 0x0030 (0x0040 - 0x0010)
struct FAimConstraintDescription : public FConstraintDescriptionEx
{
public:
	struct FAxis                                  LookAt_Axis;                                       // 0x0010(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                  LookUp_Axis;                                       // 0x0020(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bUseLookUp;                                        // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LookUpTarget;                                      // 0x0034(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.TransformConstraintDescription
// 0x0008 (0x0018 - 0x0010)
struct FTransformConstraintDescription : public FConstraintDescriptionEx
{
public:
	ETransformConstraintType                      TransformType;                                     // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationCore.ConstraintDescription
// 0x000D (0x000D - 0x0000)
struct FConstraintDescription
{
public:
	bool                                          bTranslation;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRotation;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bScale;                                            // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bParent;                                           // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   TranslationAxes;                                   // 0x0004(0x0003)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   RotationAxes;                                      // 0x0007(0x0003)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   ScaleAxes;                                         // 0x000A(0x0003)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.TransformConstraint
// 0x0028 (0x0028 - 0x0000)
struct FTransformConstraint
{
public:
	struct FConstraintDescription                 Operator;                                          // 0x0000(0x000D)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SourceNode;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TargetNode;                                        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMaintainOffset;                                   // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationCore.ConstraintOffset
// 0x0060 (0x0060 - 0x0000)
struct FConstraintOffset
{
public:
	struct FVector                                translation;                                       // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  Rotation;                                          // 0x0010(0x0010)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Parent;                                            // 0x0030(0x0030)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.TransformFilter
// 0x0009 (0x0009 - 0x0000)
struct FTransformFilter
{
public:
	struct FFilterOptionPerAxis                   TranslationFilter;                                 // 0x0000(0x0003)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   RotationFilter;                                    // 0x0003(0x0003)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                   ScaleFilter;                                       // 0x0006(0x0003)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.EulerTransform
// 0x0024 (0x0024 - 0x0000)
struct FEulerTransform
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0018(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.FABRIKChainLink
// 0x0038 (0x0038 - 0x0000)
struct alignas(0x08) FFABRIKChainLink
{
public:
	uint8                                         Pad_0[0x38];                                       // 0x0000(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AnimationCore.NodeChain
// 0x0010 (0x0010 - 0x0000)
struct FNodeChain
{
public:
	TArray<class FName>                           Nodes;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.NodeObject
// 0x0010 (0x0010 - 0x0000)
struct FNodeObject
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ParentName;                                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.NodeHierarchyData
// 0x0070 (0x0070 - 0x0000)
struct FNodeHierarchyData
{
public:
	TArray<struct FNodeObject>                    Nodes;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                     Transforms;                                        // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                      NodeNameToIndexMapping;                            // 0x0020(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// 0x0078 (0x0078 - 0x0000)
struct FNodeHierarchyWithUserData
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FNodeHierarchyData                     Hierarchy;                                         // 0x0008(0x0070)(Protected, NativeAccessSpecifierProtected)
};


// Enum Engine.EEndPlayReason
// NumValues: 0x0006
enum class EEndPlayReason : uint8
{
	Destroyed                                = 0,
	LevelTransition                          = 1,
	EndPlayInEditor                          = 2,
	RemovedFromWorld                         = 3,
	Quit                                     = 4,
	EEndPlayReason_MAX                       = 5,
};

// Enum Engine.ETickingGroup
// NumValues: 0x0009
enum class ETickingGroup : uint8
{
	TG_PrePhysics                            = 0,
	TG_StartPhysics                          = 1,
	TG_DuringPhysics                         = 2,
	TG_EndPhysics                            = 3,
	TG_PostPhysics                           = 4,
	TG_PostUpdateWork                        = 5,
	TG_LastDemotable                         = 6,
	TG_NewlySpawned                          = 7,
	TG_MAX                                   = 8,
};

// Enum Engine.EComponentCreationMethod
// NumValues: 0x0005
enum class EComponentCreationMethod : uint8
{
	Native                                   = 0,
	SimpleConstructionScript                 = 1,
	UserConstructionScript                   = 2,
	Instance                                 = 3,
	EComponentCreationMethod_MAX             = 4,
};

// Enum Engine.EComponentReplicationFlags
// NumValues: 0x0008
enum class EComponentReplicationFlags : uint8
{
	Rep_Always                               = 0,
	Rep_OwnerOnly                            = 1,
	Rep_SimulateOnly                         = 4,
	Rep_ToBeObservedOnly                     = 8,
	Rep_OwnerAndSimulate                     = 16,
	Rep_OwnerAndOB                           = 32,
	Rep_SimulteAndOB                         = 64,
	Rep_MAX                                  = 65,
};

// Enum Engine.ETemperatureSeverityType
// NumValues: 0x0007
enum class ETemperatureSeverityType : uint8
{
	Unknown                                  = 0,
	Good                                     = 1,
	Bad                                      = 2,
	Serious                                  = 3,
	Critical                                 = 4,
	NumSeverities                            = 5,
	ETemperatureSeverityType_MAX             = 6,
};

// Enum Engine.EPlaneConstraintAxisSetting
// NumValues: 0x0006
enum class EPlaneConstraintAxisSetting : uint8
{
	Custom                                   = 0,
	X                                        = 1,
	Y                                        = 2,
	Z                                        = 3,
	UseGlobalPhysicsSetting                  = 4,
	EPlaneConstraintAxisSetting_MAX          = 5,
};

// Enum Engine.EInterpToBehaviourType
// NumValues: 0x0005
enum class EInterpToBehaviourType : uint8
{
	OneShot                                  = 0,
	OneShot_Reverse                          = 1,
	Loop_Reset                               = 2,
	PingPong                                 = 3,
	EInterpToBehaviourType_MAX               = 4,
};

// Enum Engine.ETeleportType
// NumValues: 0x0005
enum class ETeleportType : uint8
{
	None                                     = 0,
	TeleportPhysics                          = 1,
	ResetPhysics                             = 2,
	SkipSkeletalMeshUpdateChildComponents    = 4,
	ETeleportType_MAX                        = 5,
};

// Enum Engine.EScreenOrientation
// NumValues: 0x0008
enum class EScreenOrientation : uint8
{
	Unknown                                  = 0,
	Portrait                                 = 1,
	PortraitUpsideDown                       = 2,
	LandscapeLeft                            = 3,
	LandscapeRight                           = 4,
	FaceUp                                   = 5,
	FaceDown                                 = 6,
	EScreenOrientation_MAX                   = 7,
};

// Enum Engine.EApplicationState
// NumValues: 0x0005
enum class EApplicationState : uint8
{
	Unknown                                  = 0,
	Inactive                                 = 1,
	Background                               = 2,
	Active                                   = 3,
	EApplicationState_MAX                    = 4,
};

// Enum Engine.EAutoReceiveInput
// NumValues: 0x000A
enum class EAutoReceiveInput : uint8
{
	Disabled                                 = 0,
	Player0                                  = 1,
	Player1                                  = 2,
	Player2                                  = 3,
	Player3                                  = 4,
	Player4                                  = 5,
	Player5                                  = 6,
	Player6                                  = 7,
	Player7                                  = 8,
	EAutoReceiveInput_MAX                    = 9,
};


// Enum Engine.ERotatorQuantization
// NumValues: 0x0003
enum class ERotatorQuantization : uint8
{
	ByteComponents                           = 0,
	ShortComponents                          = 1,
	ERotatorQuantization_MAX                 = 2,
};

// Class Engine.ActorComponent
// 0x00D0 (0x00F8 - 0x0028)
class UActorComponent : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActorComponentTickFunction            PrimaryComponentTick;                              // 0x0030(0x0068)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                           ComponentTags;                                     // 0x0098(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bAllowBluePrintTick : 1;                           // 0x00A8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAssetUserData*>                 AssetUserData;                                     // 0x00B0(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_C0[0x8];                                       // 0x00C0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         BitPad_C8_0 : 3;                                   // 0x00C8(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bReplicates : 1;                                   // 0x00C8(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bShouldCallPreReplication : 1;                     // 0x00C8(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bNetAddressable : 1;                               // 0x00C8(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bRegisterAsData : 1;                               // 0x00C8(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_C9[0x1];                                       // 0x00C9(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	EComponentReplicationFlags                    ReplicationFlag;                                   // 0x00CA(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         BitPad_CB_0 : 4;                                   // 0x00CB(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bAutoActivate : 1;                                 // 0x00CB(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsActive : 1;                                     // 0x00CB(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Net, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEditableWhenInherited : 1;                        // 0x00CB(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_CB_7 : 1;                                   // 0x00CB(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
	uint8                                         bCanEverAffectNavigation : 1;                      // 0x00CC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         BitPad_CC_1 : 1;                                   // 0x00CC(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bIsEditorOnly : 1;                                 // 0x00CC(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_CD[0x1];                                       // 0x00CD(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	EComponentCreationMethod                      CreationMethod;                                    // 0x00CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastSparseDelegateProperty_             OnComponentActivated;                              // 0x00CF(0x0001)(InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastSparseDelegateProperty_             OnComponentDeactivated;                            // 0x00D0(0x0001)(InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSimpleMemberReference>         UCSModifiedProperties;                             // 0x00D8(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E8[0x10];                                      // 0x00E8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};


// Enum AnimGraphRuntime.ESphericalLimitType
// NumValues: 0x0003
enum class ESphericalLimitType : uint8
{
	Inner                                    = 0,
	Outer                                    = 1,
	ESphericalLimitType_MAX                  = 2,
};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
// NumValues: 0x0006
enum class EAnimPhysSimSpaceType : uint8
{
	Component                                = 0,
	Actor                                    = 1,
	World                                    = 2,
	RootRelative                             = 3,
	BoneRelative                             = 4,
	AnimPhysSimSpaceType_MAX                 = 5,
};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
// NumValues: 0x0003
enum class EAnimPhysLinearConstraintType : uint8
{
	Free                                     = 0,
	Limited                                  = 1,
	AnimPhysLinearConstraintType_MAX         = 2,
};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
// NumValues: 0x0003
enum class EAnimPhysAngularConstraintType : uint8
{
	Angular                                  = 0,
	Cone                                     = 1,
	AnimPhysAngularConstraintType_MAX        = 2,
};

// Enum AnimGraphRuntime.EBlendListTransitionType
// NumValues: 0x0003
enum class EBlendListTransitionType : uint8
{
	StandardBlend                            = 0,
	Inertialization                          = 1,
	EBlendListTransitionType_MAX             = 2,
};

// Enum AnimGraphRuntime.EDrivenDestinationMode
// NumValues: 0x0004
enum class EDrivenDestinationMode : uint8
{
	Bone                                     = 0,
	MorphTarget                              = 1,
	MaterialParameter                        = 2,
	EDrivenDestinationMode_MAX               = 3,
};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
// NumValues: 0x0004
enum class EDrivenBoneModificationMode : uint8
{
	AddToInput                               = 0,
	ReplaceComponent                         = 1,
	AddToRefPose                             = 2,
	EDrivenBoneModificationMode_MAX          = 3,
};

// Enum AnimGraphRuntime.EConstraintOffsetOption
// NumValues: 0x0003
enum class EConstraintOffsetOption : uint8
{
	None                                     = 0,
	Offset_RefPose                           = 1,
	EConstraintOffsetOption_MAX              = 2,
};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
// NumValues: 0x0003
enum class ECopyBoneDeltaMode : uint8
{
	Accumulate                               = 0,
	Copy                                     = 1,
	CopyBoneDeltaMode_MAX                    = 2,
};

// Enum AnimGraphRuntime.EInterpolationBlend
// NumValues: 0x0008
enum class EInterpolationBlend : uint8
{
	Linear                                   = 0,
	Cubic                                    = 1,
	Sinusoidal                               = 2,
	EaseInOutExponent2                       = 3,
	EaseInOutExponent3                       = 4,
	EaseInOutExponent4                       = 5,
	EaseInOutExponent5                       = 6,
	MAX                                      = 7,
};

// Enum AnimGraphRuntime.EBoneModificationMode
// NumValues: 0x0004
enum class EBoneModificationMode : uint8
{
	BMM_Ignore                               = 0,
	BMM_Replace                              = 1,
	BMM_Additive                             = 2,
	BMM_MAX                                  = 3,
};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
// NumValues: 0x0006
enum class EModifyCurveApplyMode : uint8
{
	Add                                      = 0,
	Scale                                    = 1,
	Blend                                    = 2,
	WeightedMovingAverage                    = 3,
	RemapCurve                               = 4,
	EModifyCurveApplyMode_MAX                = 5,
};

// Enum AnimGraphRuntime.EPoseDriverOutput
// NumValues: 0x0003
enum class EPoseDriverOutput : uint8
{
	DrivePoses                               = 0,
	DriveCurves                              = 1,
	EPoseDriverOutput_MAX                    = 2,
};

// Enum AnimGraphRuntime.EPoseDriverSource
// NumValues: 0x0003
enum class EPoseDriverSource : uint8
{
	Rotation                                 = 0,
	Translation                              = 1,
	EPoseDriverSource_MAX                    = 2,
};

// Enum AnimGraphRuntime.EPoseDriverType
// NumValues: 0x0004
enum class EPoseDriverType : uint8
{
	SwingAndTwist                            = 0,
	SwingOnly                                = 1,
	Translation                              = 2,
	EPoseDriverType_MAX                      = 3,
};

// Enum AnimGraphRuntime.ESnapshotSourceMode
// NumValues: 0x0003
enum class ESnapshotSourceMode : uint8
{
	NamedSnapshot                            = 0,
	SnapshotPin                              = 1,
	ESnapshotSourceMode_MAX                  = 2,
};

// Enum AnimGraphRuntime.ERefPoseType
// NumValues: 0x0003
enum class ERefPoseType : uint8
{
	EIT_LocalSpace                           = 0,
	EIT_Additive                             = 1,
	EIT_MAX                                  = 2,
};

// Enum AnimGraphRuntime.ESimulationSpace
// NumValues: 0x0004
enum class ESimulationSpace : uint8
{
	ComponentSpace                           = 0,
	WorldSpace                               = 1,
	BaseBoneSpace                            = 2,
	ESimulationSpace_MAX                     = 3,
};

// Enum AnimGraphRuntime.EScaleChainInitialLength
// NumValues: 0x0004
enum class EScaleChainInitialLength : uint8
{
	FixedDefaultLengthValue                  = 0,
	Distance                                 = 1,
	ChainLength                              = 2,
	EScaleChainInitialLength_MAX             = 3,
};

// Enum AnimGraphRuntime.ESequenceEvalReinit
// NumValues: 0x0004
enum class ESequenceEvalReinit : uint8
{
	NoReset                                  = 0,
	StartPosition                            = 1,
	ExplicitTime                             = 2,
	ESequenceEvalReinit_MAX                  = 3,
};

// Enum AnimGraphRuntime.ESplineBoneAxis
// NumValues: 0x0005
enum class ESplineBoneAxis : uint8
{
	None                                     = 0,
	X                                        = 1,
	Y                                        = 2,
	Z                                        = 3,
	ESplineBoneAxis_MAX                      = 4,
};

// Enum AnimGraphRuntime.ERotationComponent
// NumValues: 0x0007
enum class ERotationComponent : uint8
{
	EulerX                                   = 0,
	EulerY                                   = 1,
	EulerZ                                   = 2,
	QuaternionAngle                          = 3,
	SwingAngle                               = 4,
	TwistAngle                               = 5,
	ERotationComponent_MAX                   = 6,
};

// Enum AnimGraphRuntime.EEasingFuncType
// NumValues: 0x0010
enum class EEasingFuncType : uint8
{
	Linear                                   = 0,
	Sinusoidal                               = 1,
	Cubic                                    = 2,
	QuadraticInOut                           = 3,
	CubicInOut                               = 4,
	HermiteCubic                             = 5,
	QuarticInOut                             = 6,
	QuinticInOut                             = 7,
	CircularIn                               = 8,
	CircularOut                              = 9,
	CircularInOut                            = 10,
	ExpIn                                    = 11,
	ExpOut                                   = 12,
	ExpInOut                                 = 13,
	CustomCurve                              = 14,
	EEasingFuncType_MAX                      = 15,
};

// Enum AnimGraphRuntime.ERBFNormalizeMethod
// NumValues: 0x0004
enum class ERBFNormalizeMethod : uint8
{
	OnlyNormalizeAboveOne                    = 0,
	AlwaysNormalize                          = 1,
	NormalizeWithinMedian                    = 2,
	ERBFNormalizeMethod_MAX                  = 3,
};

// Enum AnimGraphRuntime.ERBFDistanceMethod
// NumValues: 0x0005
enum class ERBFDistanceMethod : uint8
{
	Euclidean                                = 0,
	Quaternion                               = 1,
	SwingAngle                               = 2,
	DefaultMethod                            = 3,
	ERBFDistanceMethod_MAX                   = 4,
};

// Enum AnimGraphRuntime.ERBFFunctionType
// NumValues: 0x0007
enum class ERBFFunctionType : uint8
{
	Gaussian                                 = 0,
	Exponential                              = 1,
	Linear                                   = 2,
	Cubic                                    = 3,
	Quintic                                  = 4,
	DefaultFunction                          = 5,
	ERBFFunctionType_MAX                     = 6,
};

// ScriptStruct AnimGraphRuntime.SocketReference
// 0x0040 (0x0040 - 0x0000)
struct alignas(0x10) FSocketReference
{
public:
	uint8                                         Pad_0[0x30];                                       // 0x0000(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SocketName;                                        // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};



// ScriptStruct AkAudio.AKWaapiJsonObject
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FAKWaapiJsonObject
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};



// ScriptStruct AkAudio.AKWaapiJsonObject
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FAKWaapiJsonObject
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};


// ScriptStruct AkAudio.AkWaapiSubscriptionId
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FAkWaapiSubscriptionId
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AkAudio.AkSurfaceEdgeInfo
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x04) FAkSurfaceEdgeInfo
{
public:
	uint8                                         Pad_0[0x28];                                       // 0x0000(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
// ScriptStruct AkAudio.AkSurfaceEdgeVerts
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x04) FAkSurfaceEdgeVerts
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
// ScriptStruct AkAudio.AkSurfaceEdgeInfo
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x04) FAkSurfaceEdgeInfo
{
public:
	uint8                                         Pad_0[0x28];                                       // 0x0000(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
// ScriptStruct AkAudio.AkWaapiSubscriptionId
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FAkWaapiSubscriptionId
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
// ScriptStruct AIModule.AISenseAffiliationFilter
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FAISenseAffiliationFilter
{
public:
	uint8                                         bDetectEnemies : 1;                                // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDetectNeutrals : 1;                               // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDetectFriendlies : 1;                             // 0x0000(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AssetRegistry.AssetData
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) FAssetData
{
public:
	class FName                                   ObjectPath;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PackageName;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PackagePath;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AssetName;                                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AssetClass;                                        // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_28[0x28];                                      // 0x0028(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
// Class AkAudio.AkCheckBox
// 0x0A88 (0x0BF0 - 0x0168)
class alignas(0x10) UAkCheckBox : public UContentWidget
{
public:
	uint8                                         Pad_168[0x3C8];                                    // 0x0168(0x03C8)(Fixing Size After Last Property [ Dumper-7 ])
	ECheckBoxState                                CheckedState;                                      // 0x0530(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_531[0x3];                                      // 0x0531(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             CheckedStateDelegate;                              // 0x0534(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_544[0x4];                                      // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCheckBoxStyle                         WidgetStyle;                                       // 0x0548(0x05C8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EHorizontalAlignment                          HorizontalAlignment;                               // 0x0B10(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsFocusable;                                       // 0x0B11(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B12[0x6];                                      // 0x0B12(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkBoolPropertyToControl               ThePropertyToControl;                              // 0x0B18(0x0010)(Edit, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                  ItemToControl;                                     // 0x0B28(0x0040)(Edit, Config, EditConst, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(bool bIsChecked)> AkOnCheckStateChanged;                           // 0x0B68(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FGuid& ItemDroppedID)> OnItemDropped;                 // 0x0B78(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const class FString& PropertyDropped)> OnPropertyDropped;          // 0x0B88(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_B98[0x58];                                     // 0x0B98(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Class AkAudio.AkCheckBox
// 0x0A88 (0x0BF0 - 0x0168)
class alignas(0x10) UAkCheckBox : public UContentWidget
{
public:
	uint8                                         Pad_168[0x3C8];                                    // 0x0168(0x03C8)(Fixing Size After Last Property [ Dumper-7 ])
	ECheckBoxState                                CheckedState;                                      // 0x0530(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_531[0x3];                                      // 0x0531(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             CheckedStateDelegate;                              // 0x0534(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_544[0x4];                                      // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCheckBoxStyle                         WidgetStyle;                                       // 0x0548(0x05C8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EHorizontalAlignment                          HorizontalAlignment;                               // 0x0B10(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsFocusable;                                       // 0x0B11(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B12[0x6];                                      // 0x0B12(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkBoolPropertyToControl               ThePropertyToControl;                              // 0x0B18(0x0010)(Edit, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                  ItemToControl;                                     // 0x0B28(0x0040)(Edit, Config, EditConst, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(bool bIsChecked)> AkOnCheckStateChanged;                           // 0x0B68(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FGuid& ItemDroppedID)> OnItemDropped;                 // 0x0B78(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const class FString& PropertyDropped)> OnPropertyDropped;          // 0x0B88(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_B98[0x58];                                     // 0x0B98(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

	// Enum CoreUObject.EAxis
	// NumValues: 0x0005
	enum class EAxis : uint8
	{
		None = 0,
		X = 1,
		Y = 2,
		Z = 3,
		EAxis_MAX = 4,
	};

	// Enum CoreUObject.ELogTimes
	// NumValues: 0x0005
	enum class ELogTimes : uint8
	{
		None = 0,
		UTC = 1,
		SinceGStartTime = 2,
		Local = 3,
		ELogTimes_MAX = 4,
	};

	// Enum CoreUObject.ESearchDir
	// NumValues: 0x0003
	enum class ESearchDir : uint8
	{
		FromStart = 0,
		FromEnd = 1,
		ESearchDir_MAX = 2,
	};

	// Enum CoreUObject.ESearchCase
	// NumValues: 0x0003
	enum class ESearchCase : uint8
	{
		CaseSensitive = 0,
		IgnoreCase = 1,
		ESearchCase_MAX = 2,
	};

	// ScriptStruct CoreUObject.Guid
	// 0x0010 (0x0010 - 0x0000)
	struct FGuid
	{
	public:
		int32                                         A;                                                 // 0x0000(0x0004)
		int32                                         B;                                                 // 0x0004(0x0004)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         C;                                                 // 0x0008(0x0004)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         D;                                                 // 0x000C(0x0004)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.AutomationEvent
	// 0x0038 (0x0038 - 0x0000)
	struct FAutomationEvent
	{
	public:
		EAutomationEventType                          Type;                                              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 Message;                                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 Context;                                           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                  Artifact;                                          // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.DateTime
	// 0x0008 (0x0008 - 0x0000)
	struct alignas(0x08) FDateTime
	{
	public:
		uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.AutomationExecutionEntry
	// 0x0058 (0x0058 - 0x0000)
	struct FAutomationExecutionEntry
	{
	public:
		struct FAutomationEvent                       Event;                                             // 0x0000(0x0038)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 Filename;                                          // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         LineNumber;                                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FDateTime                              Timestamp;                                         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.JoinabilitySettings
	// 0x0014 (0x0014 - 0x0000)
	struct FJoinabilitySettings
	{
	public:
		class FName                                   SessionName;                                       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bPublicSearchable;                                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bAllowInvites;                                     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bJoinViaPresence;                                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bJoinViaPresenceFriendsOnly;                       // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         MaxPlayers;                                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         MaxPartySize;                                      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};


	// ScriptStruct CoreUObject.Ray
	// 0x0018 (0x0018 - 0x0000)
	struct FRay
	{
	public:
		struct FVector                                Origin;                                            // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                Direction;                                         // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.UniqueNetIdWrapper
	// 0x0001 (0x0001 - 0x0000)
	struct FUniqueNetIdWrapper
	{
	public:
		uint8                                         Pad_0[0x1];                                        // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.Sphere
	// 0x0010 (0x0010 - 0x0000)
	struct FSphere
	{
	public:
		struct FVector                                Center;                                            // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         W;                                                 // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.CapsuleShape
	// 0x0020 (0x0020 - 0x0000)
	struct FCapsuleShape
	{
	public:
		struct FVector                                Center;                                            // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         radius;                                            // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                Orientation;                                       // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Length;                                            // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.EncHandler
	// 0x0004 (0x0004 - 0x0000)
	struct FEncHandler
	{
	public:
		uint16                                        Index;                                             // 0x0000(0x0002)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int8                                          bEncrypted;                                        // 0x0002(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bDynamic : 1;                                      // 0x0003(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bShareKey : 1;                                     // 0x0003(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	};

	// ScriptStruct CoreUObject.EncVector
	// 0x0010 (0x0010 - 0x0000)
	struct FEncVector
	{
	public:
		float                                         X;                                                 // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Y;                                                 // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         Z;                                                 // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEncHandler                            EncHandler;                                        // 0x000C(0x0004)(Transient, RepSkip, NoDestructor, NativeAccessSpecifierPrivate)
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

	// ScriptStruct CoreUObject.TwoVectors
	// 0x0018 (0x0018 - 0x0000)
	struct FTwoVectors
	{
	public:
		struct FVector                                v1;                                                // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                v2;                                                // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.Plane
	// 0x0004 (0x0010 - 0x000C)
	struct alignas(0x10) FPlane : public FVector
	{
	public:
		float                                         W;                                                 // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.Rotator
	// 0x000C (0x000C - 0x0000)
	struct FRotator
	{
	public:
		using UnderlayingType = float;

		float                                         Pitch;                                             // 0x0000(0x0004)
		float                                         Yaw;                                               // 0x0004(0x0004)
		float                                         Roll;                                              // 0x0008(0x0004)

	public:
		static UnderlayingType ClampAxis(UnderlayingType Angle)
		{
			Angle = std::fmod(Angle, static_cast<UnderlayingType>(360));
			if (Angle < static_cast<UnderlayingType>(0))
				Angle += static_cast<UnderlayingType>(360);

			return Angle;
		}
		static UnderlayingType NormalizeAxis(UnderlayingType Angle)
		{
			Angle = ClampAxis(Angle);
			if (Angle > static_cast<UnderlayingType>(180))
				Angle -= static_cast<UnderlayingType>(360);

			return Angle;
		}

		FRotator& Clamp()
		{
			Pitch = ClampAxis(Pitch);
			Yaw = ClampAxis(Yaw);
			Roll = ClampAxis(Roll);

			return *this;
		}
		constexpr FRotator(UnderlayingType Pitch = 0, UnderlayingType Yaw = 0, UnderlayingType Roll = 0)
			: Pitch(Pitch), Yaw(Yaw), Roll(Roll)
		{
		}
		constexpr FRotator(const FRotator& other)
			: Pitch(other.Pitch), Yaw(other.Yaw), Roll(other.Roll)
		{
		}
		FRotator& Normalize()
		{
			Pitch = NormalizeAxis(Pitch);
			Yaw = NormalizeAxis(Yaw);
			Roll = NormalizeAxis(Roll);

			return *this;
		}
		FRotator& operator*=(UnderlayingType Scalar)
		{
			*this = *this * Scalar;

			return *this;
		}
		FRotator& operator*=(const FRotator& Other)
		{
			*this = *this * Other;

			return *this;
		}
		FRotator& operator+=(const FRotator& Other)
		{
			*this = *this + Other;

			return *this;
		}
		FRotator& operator-=(const FRotator& Other)
		{
			*this = *this - Other;

			return *this;
		}
		FRotator& operator/=(UnderlayingType Scalar)
		{
			*this = *this / Scalar;

			return *this;
		}
		FRotator& operator/=(const FRotator& Other)
		{
			*this = *this / Other;

			return *this;
		}
		FRotator& operator=(const FRotator& other)
		{
			Pitch = other.Pitch;
			Yaw = other.Yaw;
			Roll = other.Roll;

			return *this;
		}

		FRotator GetNormalized() const
		{
			FRotator rotator = *this;
			rotator.Normalize();

			return rotator;
		}
		bool IsZero() const
		{
			return ClampAxis(Pitch) == 0 && ClampAxis(Yaw) == 0 && ClampAxis(Roll) == 0;
		}
		bool operator!=(const FRotator& Other) const
		{
			return Pitch != Other.Pitch || Yaw != Other.Yaw || Roll != Other.Roll;
		}
		FRotator operator*(UnderlayingType Scalar) const
		{
			return { Pitch * Scalar, Yaw * Scalar, Roll * Scalar };
		}
		FRotator operator*(const FRotator& Other) const
		{
			return { Pitch * Other.Pitch, Yaw * Other.Yaw, Roll * Other.Roll };
		}
		FRotator operator+(const FRotator& Other) const
		{
			return { Pitch + Other.Pitch, Yaw + Other.Yaw, Roll + Other.Roll };
		}
		FRotator operator-(const FRotator& Other) const
		{
			return { Pitch - Other.Pitch, Yaw - Other.Yaw, Roll - Other.Roll };
		}
		FRotator operator/(UnderlayingType Scalar) const
		{
			if (Scalar == 0)
				return *this;

			return { Pitch / Scalar, Yaw / Scalar, Roll / Scalar };
		}
		FRotator operator/(const FRotator& Other) const
		{
			if (Other.Pitch == 0 || Other.Yaw == 0 || Other.Roll == 0)
				return *this;

			return { Pitch / Other.Pitch, Yaw / Other.Yaw, Roll / Other.Roll };
		}
		bool operator==(const FRotator& Other) const
		{
			return Pitch == Other.Pitch && Yaw == Other.Yaw && Roll == Other.Roll;
		}
	};

	// ScriptStruct CoreUObject.Quat
	// 0x0010 (0x0010 - 0x0000)
	struct alignas(0x10) FQuat
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
	struct alignas(0x04) FColor
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
		struct FVector                                Min;                                               // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                Max;                                               // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
		struct FEncVector                             Origin;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                BoxExtent;                                         // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SphereRadius;                                      // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.OrientedBox
	// 0x003C (0x003C - 0x0000)
	struct FOrientedBox
	{
	public:
		struct FVector                                Center;                                            // 0x0000(0x000C)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                AxisX;                                             // 0x000C(0x000C)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                AxisY;                                             // 0x0018(0x000C)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                AxisZ;                                             // 0x0024(0x000C)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
		EInterpCurveMode                              InterpMode;                                        // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.InterpCurveFloat
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveFloat
	{
	public:
		TArray<struct FInterpCurvePointFloat>         Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
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
		struct FVector2D                              OutVal;                                            // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              ArriveTangent;                                     // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                              LeaveTangent;                                      // 0x0014(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInterpCurveMode                              InterpMode;                                        // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.InterpCurveVector2D
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveVector2D
	{
	public:
		TArray<struct FInterpCurvePointVector2D>      Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
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
		struct FVector                                OutVal;                                            // 0x0004(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                ArriveTangent;                                     // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                LeaveTangent;                                      // 0x001C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInterpCurveMode                              InterpMode;                                        // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.InterpCurveVector
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveVector
	{
	public:
		TArray<struct FInterpCurvePointVector>        Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
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
		EInterpCurveMode                              InterpMode;                                        // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_41[0xF];                                       // 0x0041(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.InterpCurveQuat
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveQuat
	{
	public:
		TArray<struct FInterpCurvePointQuat>          Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                          bIsLooped;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         LoopKeyOffset;                                     // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
	// 0x0050 (0x0050 - 0x0000)
	struct FInterpCurvePointTwoVectors
	{
	public:
		float                                         InVal;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTwoVectors                            OutVal;                                            // 0x0004(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTwoVectors                            ArriveTangent;                                     // 0x001C(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTwoVectors                            LeaveTangent;                                      // 0x0034(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EInterpCurveMode                              InterpMode;                                        // 0x004C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.InterpCurveTwoVectors
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveTwoVectors
	{
	public:
		TArray<struct FInterpCurvePointTwoVectors>    Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
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
		EInterpCurveMode                              InterpMode;                                        // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.InterpCurveLinearColor
	// 0x0018 (0x0018 - 0x0000)
	struct FInterpCurveLinearColor
	{
	public:
		TArray<struct FInterpCurvePointLinearColor>   Points;                                            // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
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
	struct alignas(0x08) FTimespan
	{
	public:
		uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	// ScriptStruct CoreUObject.SoftObjectPath
	// 0x0018 (0x0018 - 0x0000)
	struct FSoftObjectPath
	{
	public:
		class FName                                   AssetPathName;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 SubPathString;                                     // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
		class FName                                   Name;                                              // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// ScriptStruct CoreUObject.PrimaryAssetId
	// 0x0010 (0x0010 - 0x0000)
	struct FPrimaryAssetId
	{
	public:
		struct FPrimaryAssetType                      PrimaryAssetType;                                  // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                   PrimaryAssetName;                                  // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
		ERangeBoundTypes                              Type;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
		ERangeBoundTypes                              Type;                                              // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
		ELocalizedTextSourceCategory                  Category;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 NativeCulture;                                     // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 Namespace;                                         // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 Key;                                               // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 NativeString;                                      // 0x0038(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, class FString>            LocalizedStrings;                                  // 0x0048(0x0050)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                          bIsMinimalPatch;                                   // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class FText                                   CachedText;                                        // 0x00A0(0x0018)(Transient, NativeAccessSpecifierPublic)
	};
