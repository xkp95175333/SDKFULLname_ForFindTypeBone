
// Class Engine.ParticleModuleTypeDataBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleTypeDataBase : public UParticleModule
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleTypeDataBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleTypeDataBase")
	}
	static class UParticleModuleTypeDataBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleTypeDataBase>();
	}
};

// Class Engine.ParticleModuleTypeDataGpu
// 0x03F0 (0x0420 - 0x0030)
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase
{
public:
	struct FGPUSpriteEmitterInfo                  EmitterInfo;                                       // 0x0030(0x0280)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGPUSpriteResourceData                 ResourceData;                                      // 0x02B0(0x0160)(NativeAccessSpecifierPublic)
	float                                         CameraMotionBlurAmount;                            // 0x0410(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bClearExistingParticlesOnInit : 1;                 // 0x0414(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_415[0xB];                                      // 0x0415(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleTypeDataGpu")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleTypeDataGpu")
	}
	static class UParticleModuleTypeDataGpu* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleTypeDataGpu>();
	}
};

// Class Engine.PackageMapClient
// 0x0318 (0x03F8 - 0x00E0)
class UPackageMapClient : public UPackageMap
{
public:
	uint8                                         Pad_E0[0x318];                                     // 0x00E0(0x0318)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PackageMapClient")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PackageMapClient")
	}
	static class UPackageMapClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPackageMapClient>();
	}
};

// Class Engine.NetDriver
// 0x0788 (0x07B0 - 0x0028)
class UNetDriver : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 NetConnectionClassName;                            // 0x0030(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReplicationDriverClassName;                        // 0x0040(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxDownloadSize;                                   // 0x0050(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bClampListenServerTickRate : 1;                    // 0x0054(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NetServerMaxTickRate;                              // 0x0058(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxNetTickRate;                                    // 0x005C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxInternetClientRate;                             // 0x0060(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxClientRate;                                     // 0x0064(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ServerTravelPause;                                 // 0x0068(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpawnPrioritySeconds;                              // 0x006C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RelevantTimeout;                                   // 0x0070(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         KeepAliveTime;                                     // 0x0074(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InitialConnectTimeout;                             // 0x0078(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConnectionTimeout;                                 // 0x007C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeoutMultiplierForUnoptimizedBuilds;             // 0x0080(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNoTimeouts;                                       // 0x0084(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNeverApplyNetworkEmulationSettings;               // 0x0085(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_86[0x2];                                       // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UNetConnection*                         ServerConnection;                                  // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNetConnection*>                 ClientConnections;                                 // 0x0090(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_A0[0x60];                                      // 0x00A0(0x0060)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RecentlyDisconnectedTrackingTime;                  // 0x0100(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_104[0x3C];                                     // 0x0104(0x003C)(Fixing Size After Last Property [ Dumper-7 ])
	class UWorld*                                 World;                                             // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPackage*                               WorldPackage;                                      // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_150[0x20];                                     // 0x0150(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 NetConnectionClass;                                // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 ReplicationDriverClass;                            // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_180[0x10];                                     // 0x0180(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   NetDriverName;                                     // 0x0190(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FChannelDefinition>             ChannelDefinitions;                                // 0x0198(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TMap<class FName, struct FChannelDefinition>  ChannelDefinitionMap;                              // 0x01A8(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UChannel*>                       ActorChannelPool;                                  // 0x01F8(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_208[0x8];                                      // 0x0208(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Time;                                              // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_214[0x4D4];                                    // 0x0214(0x04D4)(Fixing Size After Last Property [ Dumper-7 ])
	class UReplicationDriver*                     ReplicationDriver;                                 // 0x06E8(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_6F0[0xC0];                                     // 0x06F0(0x00C0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NetDriver")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NetDriver")
	}
	static class UNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetDriver>();
	}
};

// Class Engine.ReporterBase
// 0x0008 (0x0030 - 0x0028)
class UReporterBase : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ReporterBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ReporterBase")
	}
	static class UReporterBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReporterBase>();
	}
};

// Class Engine.DemoNetDriver
// 0x0960 (0x1110 - 0x07B0)
class UDemoNetDriver : public UNetDriver
{
public:
	uint8                                         Pad_7B0[0xF8];                                     // 0x07B0(0x00F8)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, struct FRollbackNetStartupActorInfo> RollbackNetStartupActors;               // 0x08A8(0x0050)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_8F8[0x3CC];                                    // 0x08F8(0x03CC)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CheckpointSaveMaxMSPerFrame;                       // 0x0CC4(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_CC8[0x30];                                     // 0x0CC8(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMulticastRecordOptions>        MulticastRecordOptions;                            // 0x0CF8(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	bool                                          bIsLocalReplay;                                    // 0x0D08(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D09[0x7];                                      // 0x0D09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APlayerController*>              SpectatorControllers;                              // 0x0D10(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_D20[0x3F0];                                    // 0x0D20(0x03F0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DemoNetDriver")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DemoNetDriver")
	}
	static class UDemoNetDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDemoNetDriver>();
	}
};

// Class Engine.ReporterGraph
// 0x0078 (0x00A8 - 0x0030)
class UReporterGraph : public UReporterBase
{
public:
	uint8                                         Pad_30[0x78];                                      // 0x0030(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ReporterGraph")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ReporterGraph")
	}
	static class UReporterGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReporterGraph>();
	}
};

// Class Engine.Interface_PreviewMeshProvider
// 0x0000 (0x0000 - 0x0000)
class IInterface_PreviewMeshProvider : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Interface_PreviewMeshProvider")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Interface_PreviewMeshProvider")
	}
	static class IInterface_PreviewMeshProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInterface_PreviewMeshProvider>();
	}
};

// Class Engine.LevelScriptBlueprint
// 0x0000 (0x00A0 - 0x00A0)
class ULevelScriptBlueprint : public UBlueprint
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LevelScriptBlueprint")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LevelScriptBlueprint")
	}
	static class ULevelScriptBlueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelScriptBlueprint>();
	}
};

// Class Engine.ParticleModuleRotation
// 0x0030 (0x0060 - 0x0030)
class UParticleModuleRotation : public UParticleModuleRotationBase
{
public:
	struct FRawDistributionFloat                  StartRotation;                                     // 0x0030(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleRotation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleRotation")
	}
	static class UParticleModuleRotation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleRotation>();
	}
};

// Class Engine.AnimBlueprintGeneratedClass
// 0x0210 (0x0578 - 0x0368)
class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	uint8                                         Pad_368[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBakedAnimationStateMachine>    BakedStateMachines;                                // 0x0370(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	class USkeleton*                              TargetSkeleton;                                    // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimNotifyEvent>               AnimNotifies;                                      // 0x0388(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<class FName, struct FCachedPoseIndices>  OrderedSavedPoseIndicesMap;                        // 0x0398(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_3E8[0xD0];                                     // 0x03E8(0x00D0)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           SyncGroupNames;                                    // 0x04B8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FExposedValueHandler>           EvaluateGraphExposedInputs;                        // 0x04C8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation;              // 0x04D8(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FAnimGraphBlendOptions> GraphBlendOptions;                              // 0x0528(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimBlueprintGeneratedClass")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimBlueprintGeneratedClass")
	}
	static class UAnimBlueprintGeneratedClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBlueprintGeneratedClass>();
	}
};

// Class Engine.OnlineBlueprintCallProxyBase
// 0x0000 (0x0028 - 0x0028)
class UOnlineBlueprintCallProxyBase : public UObject
{
public:
	void Activate();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("OnlineBlueprintCallProxyBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"OnlineBlueprintCallProxyBase")
	}
	static class UOnlineBlueprintCallProxyBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineBlueprintCallProxyBase>();
	}
};

// Class Engine.OnlineEngineInterface
// 0x0000 (0x0028 - 0x0028)
class UOnlineEngineInterface : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("OnlineEngineInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"OnlineEngineInterface")
	}
	static class UOnlineEngineInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineEngineInterface>();
	}
};

// Class Engine.MaterialExpressionCollectionParameter
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionCollectionParameter : public UMaterialExpression
{
public:
	class UMaterialParameterCollection*           Collection;                                        // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ParameterName;                                     // 0x0048(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ParameterId;                                       // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMaterialSamplerType                          SamplerType;                                       // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionCollectionParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionCollectionParameter")
	}
	static class UMaterialExpressionCollectionParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionCollectionParameter>();
	}
};

// Class Engine.OnlineSession
// 0x0000 (0x0028 - 0x0028)
class UOnlineSession : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("OnlineSession")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"OnlineSession")
	}
	static class UOnlineSession* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineSession>();
	}
};

// Class Engine.MaterialExpressionParameter
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionParameter : public UMaterialExpression
{
public:
	class FName                                   ParameterName;                                     // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ExpressionGUID;                                    // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionParameter")
	}
	static class UMaterialExpressionParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionParameter>();
	}
};

// Class Engine.MaterialExpressionVectorParameter
// 0x0018 (0x0070 - 0x0058)
class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter
{
public:
	struct FLinearColor                           DefaultValue;                                      // 0x0058(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseCustomPrimitiveData;                           // 0x0068(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         PrimitiveDataIndex;                                // 0x0069(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionVectorParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionVectorParameter")
	}
	static class UMaterialExpressionVectorParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionVectorParameter>();
	}
};

// Class Engine.MaterialExpressionChannelMaskParameter
// 0x0018 (0x0088 - 0x0070)
class UMaterialExpressionChannelMaskParameter : public UMaterialExpressionVectorParameter
{
public:
	EChannelMaskParameterColor                    MaskChannel;                                       // 0x0070(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Input;                                             // 0x0074(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_80[0x8];                                       // 0x0080(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionChannelMaskParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionChannelMaskParameter")
	}
	static class UMaterialExpressionChannelMaskParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionChannelMaskParameter>();
	}
};

// Class Engine.InterpGroupInst
// 0x0020 (0x0048 - 0x0028)
class UInterpGroupInst : public UObject
{
public:
	class UInterpGroup*                           Group;                                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 GroupActor;                                        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInterpTrackInst*>               TrackInst;                                         // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpGroupInst")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpGroupInst")
	}
	static class UInterpGroupInst* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpGroupInst>();
	}
};

// Class Engine.InterpGroupInstDirector
// 0x0000 (0x0048 - 0x0048)
class UInterpGroupInstDirector : public UInterpGroupInst
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpGroupInstDirector")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpGroupInstDirector")
	}
	static class UInterpGroupInstDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpGroupInstDirector>();
	}
};

// Class Engine.MaterialExpressionAppendVector
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionAppendVector : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionAppendVector")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionAppendVector")
	}
	static class UMaterialExpressionAppendVector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionAppendVector>();
	}
};

// Class Engine.StaticMeshActor
// 0x0010 (0x0380 - 0x0370)
class AStaticMeshActor : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMeshComponent;                               // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bStaticMeshReplicateMovement;                      // 0x0378(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENavDataGatheringMode                         NavigationGeometryGatheringMode;                   // 0x0379(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_37A[0x6];                                      // 0x037A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMobility(EComponentMobility InMobility);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("StaticMeshActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"StaticMeshActor")
	}
	static class AStaticMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStaticMeshActor>();
	}
};

// Class Engine.AutomationTestSettings
// 0x0300 (0x0328 - 0x0028)
class UAutomationTestSettings : public UObject
{
public:
	TArray<class FString>                         EngineTestModules;                                 // 0x0028(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                         EditorTestModules;                                 // 0x0038(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        AutomationTestmap;                                 // 0x0048(0x0018)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps;                    // 0x0060(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                AssetsToOpen;                                      // 0x0070(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FBuildPromotionTestSettings            BuildPromotionTest;                                // 0x0080(0x01F0)(Edit, Config, NativeAccessSpecifierPublic)
	struct FMaterialEditorPromotionSettings       MaterialEditorPromotionTest;                       // 0x0270(0x0030)(Edit, Config, NativeAccessSpecifierPublic)
	struct FParticleEditorPromotionSettings       ParticleEditorPromotionTest;                       // 0x02A0(0x0010)(Edit, Config, NativeAccessSpecifierPublic)
	struct FBlueprintEditorPromotionSettings      BlueprintEditorPromotionTest;                      // 0x02B0(0x0030)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                         TestLevelFolders;                                  // 0x02E0(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FExternalToolDefinition>        ExternalTools;                                     // 0x02F0(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FEditorImportExportTestDefinition> ImportExportTestDefinitions;                    // 0x0300(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FLaunchOnTestSettings>          LaunchOnSettings;                                  // 0x0310(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FIntPoint                              DefaultScreenshotResolution;                       // 0x0320(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AutomationTestSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AutomationTestSettings")
	}
	static class UAutomationTestSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutomationTestSettings>();
	}
};

// Class Engine.GameSession
// 0x0018 (0x0388 - 0x0370)
class AGameSession : public AInfo
{
public:
	int32                                         MaxSpectators;                                     // 0x0370(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPlayers;                                        // 0x0374(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPartySize;                                      // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         MaxSplitscreensPerConnection;                      // 0x037C(0x0001)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRequiresPushToTalk;                               // 0x037D(0x0001)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_37E[0x2];                                      // 0x037E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SessionName;                                       // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GameSession")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GameSession")
	}
	static class AGameSession* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameSession>();
	}
};

// Class Engine.AnimInstance
// 0x0248 (0x0270 - 0x0028)
class alignas(0x10) UAnimInstance : public UObject
{
public:
	class USkeleton*                              CurrentSkeleton;                                   // 0x0028(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERootMotionMode                               RootMotionMode;                                    // 0x0030(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseMultiThreadedAnimationUpdate : 1;              // 0x0031(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUsingCopyPoseFromMesh : 1;                        // 0x0031(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_31_2 : 2;                                   // 0x0031(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bQueueMontageEvents : 1;                           // 0x0031(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(class UAnimMontage* Montage, bool bInterrupted)> OnMontageBlendingOut; // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class UAnimMontage* Montage)> OnMontageStarted;                    // 0x0048(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(class UAnimMontage* Montage, bool bInterrupted)> OnMontageEnded;   // 0x0058(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              OnAllMontageInstancesEnded;                        // 0x0068(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0x88];                                      // 0x0078(0x0088)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNotifyQueue                       NotifyQueue;                                       // 0x0100(0x0070)(Transient, NativeAccessSpecifierPublic)
	TArray<struct FAnimNotifyEvent>               ActiveAnimNotifyState;                             // 0x0170(0x0010)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_180[0x61];                                     // 0x0180(0x0061)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bSkipBlueprintUpdateAnimation : 1;                 // 0x01E1(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSkipBlueprintPostEvaluateAnimation : 1;           // 0x01E1(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1E2[0x8E];                                     // 0x01E2(0x008E)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BlueprintBeginPlay();
	void BlueprintInitializeAnimation();
	void BlueprintPostEvaluateAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ClearMorphTargets();
	class FName GetCurrentStateName(int32 MachineIndex);
	float GetInstanceAssetPlayerLength(int32 AssetPlayerIndex);
	float GetInstanceAssetPlayerTime(int32 AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFraction(int32 AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFromEnd(int32 AssetPlayerIndex);
	float GetInstanceAssetPlayerTimeFromEndFraction(int32 AssetPlayerIndex);
	float GetInstanceCurrentStateElapsedTime(int32 MachineIndex);
	float GetInstanceMachineWeight(int32 MachineIndex);
	float GetInstanceStateWeight(int32 MachineIndex, int32 StateIndex);
	float GetInstanceTransitionCrossfadeDuration(int32 MachineIndex, int32 TransitionIndex);
	float GetInstanceTransitionTimeElapsed(int32 MachineIndex, int32 TransitionIndex);
	float GetInstanceTransitionTimeElapsedFraction(int32 MachineIndex, int32 TransitionIndex);
	float GetRelevantAnimLength(int32 MachineIndex, int32 StateIndex);
	float GetRelevantAnimTime(int32 MachineIndex, int32 StateIndex);
	float GetRelevantAnimTimeFraction(int32 MachineIndex, int32 StateIndex);
	float GetRelevantAnimTimeRemaining(int32 MachineIndex, int32 StateIndex);
	float GetRelevantAnimTimeRemainingFraction(int32 MachineIndex, int32 StateIndex);
	void LinkAnimClassLayers(TSubclassOf<class UAnimInstance> InClass);
	void LinkAnimGraphByTag(class FName InTag, TSubclassOf<class UAnimInstance> InClass);
	void LockAIResources(bool bLockMovement, bool LockAILogic);
	void Montage_JumpToSection(class FName SectionName, const class UAnimMontage* Montage);
	void Montage_JumpToSectionsEnd(class FName SectionName, const class UAnimMontage* Montage);
	void Montage_Pause(const class UAnimMontage* Montage);
	float Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);
	void Montage_Resume(const class UAnimMontage* Montage);
	void Montage_SetNextSection(class FName SectionNameToChange, class FName NextSection, const class UAnimMontage* Montage);
	void Montage_SetPlayRate(const class UAnimMontage* Montage, float NewPlayRate);
	void Montage_SetPosition(const class UAnimMontage* Montage, float NewPosition);
	void Montage_Stop(float InBlendOutTime, const class UAnimMontage* Montage);
	float PlaySlotAnimation(class UAnimSequenceBase* Asset, class FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount);
	class UAnimMontage* PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, class FName SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int32 LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
	void ResetDynamics(ETeleportType InTeleportType);
	void SavePoseSnapshot(class FName SnapshotName);
	void SetMorphTarget(class FName MorphTargetName, float Value);
	void SetRootMotionMode(ERootMotionMode Value);
	void SnapshotPose(struct FPoseSnapshot& Snapshot);
	void StopSlotAnimation(float InBlendOutTime, class FName SlotNodeName);
	void UnlinkAnimClassLayers(TSubclassOf<class UAnimInstance> InClass);
	void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);

	float CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation) const;
	void GetActiveCurveNames(EAnimCurveType CurveType, TArray<class FName>* OutNames) const;
	void GetAllCurveNames(TArray<class FName>* OutNames) const;
	float GetAnimAssetPlayPosition(class FName InName) const;
	TMap<class FName, float> GetAnimAssetPlayPositions() const;
	class UAnimMontage* GetCurrentActiveMontage() const;
	float GetCurveValue(class FName CurveName) const;
	class UAnimInstance* GetLinkedAnimGraphInstanceByTag(class FName InTag) const;
	void GetLinkedAnimGraphInstancesByTag(class FName InTag, TArray<class UAnimInstance*>* OutLinkedInstances) const;
	class UAnimInstance* GetLinkedAnimLayerInstanceByClass(TSubclassOf<class UAnimInstance> InClass) const;
	class UAnimInstance* GetLinkedAnimLayerInstanceByGroup(class FName InGroup) const;
	class AActor* GetOwningActor() const;
	class USkeletalMeshComponent* GetOwningComponent() const;
	struct FMarkerSyncAnimPosition GetSyncGroupPosition(class FName InSyncGroupName) const;
	bool GetTimeToClosestMarker(class FName SyncGroup, class FName MarkerName, float* OutMarkerTime) const;
	bool HasMarkerBeenHitThisFrame(class FName SyncGroup, class FName MarkerName) const;
	bool IsAnyMontagePlaying() const;
	bool IsPlayingSlotAnimation(const class UAnimSequenceBase* Asset, class FName SlotNodeName) const;
	bool IsSyncGroupBetweenMarkers(class FName InSyncGroupName, class FName PreviousMarker, class FName NextMarker, bool bRespectMarkerOrder) const;
	float Montage_GetBlendTime(const class UAnimMontage* Montage) const;
	class FName Montage_GetCurrentSection(const class UAnimMontage* Montage) const;
	bool Montage_GetIsStopped(const class UAnimMontage* Montage) const;
	float Montage_GetPlayRate(const class UAnimMontage* Montage) const;
	float Montage_GetPosition(const class UAnimMontage* Montage) const;
	bool Montage_IsActive(const class UAnimMontage* Montage) const;
	bool Montage_IsPlaying(const class UAnimMontage* Montage) const;
	class APawn* TryGetPawnOwner() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimInstance")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimInstance")
	}
	static class UAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimInstance>();
	}
};

// Class Engine.AudioComponent
// 0x0590 (0x07E0 - 0x0250)
class UAudioComponent : public USceneComponent
{
public:
	class USoundBase*                             Sound;                                             // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAudioComponentParam>           InstanceParameters;                                // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class USoundClass*                            SoundClassOverride;                                // 0x0268(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAutoDestroy : 1;                                  // 0x0270(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bStopWhenOwnerDestroyed : 1;                       // 0x0270(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bShouldRemainActiveIfDropped : 1;                  // 0x0270(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAllowSpatialization : 1;                          // 0x0270(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideAttenuation : 1;                          // 0x0270(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideSubtitlePriority : 1;                     // 0x0270(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsUISound : 1;                                    // 0x0270(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableLowPassFilter : 1;                          // 0x0270(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverridePriority : 1;                             // 0x0271(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSuppressSubtitles : 1;                            // 0x0271(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_271_2 : 6;                                  // 0x0271(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
	uint8                                         BitPad_272_0 : 4;                                  // 0x0272(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bAutoManageAttachment : 1;                         // 0x0272(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_273[0x5];                                      // 0x0273(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   AudioComponentUserID;                              // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PitchModulationMin;                                // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PitchModulationMax;                                // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumeModulationMin;                               // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumeModulationMax;                               // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumeMultiplier;                                  // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EnvelopeFollowerAttackTime;                        // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EnvelopeFollowerReleaseTime;                       // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Priority;                                          // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SubtitlePriority;                                  // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A4[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundEffectSourcePresetChain*          SourceEffectChain;                                 // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PitchMultiplier;                                   // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LowPassFilterFrequency;                            // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundAttenuation*                      AttenuationSettings;                               // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings              AttenuationOverrides;                              // 0x02C8(0x0350)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                      ConcurrencySettings;                               // 0x0618(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class USoundConcurrency*>                ConcurrencySet;                                    // 0x0620(0x0050)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_670[0xC];                                      // 0x0670(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	EAttachmentRule                               AutoAttachLocationRule;                            // 0x067C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                               AutoAttachRotationRule;                            // 0x067D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                               AutoAttachScaleRule;                               // 0x067E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_67F[0x1];                                      // 0x067F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnAudioFinished;                                   // 0x0680(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_690[0x18];                                     // 0x0690(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const class USoundWave* PlayingSoundWave, const float PlaybackPercent)> OnAudioPlaybackPercent; // 0x06A8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_6B8[0x18];                                     // 0x06B8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const class USoundWave* PlayingSoundWave, const float EnvelopeValue)> OnAudioSingleEnvelopeValue; // 0x06D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_6E0[0x18];                                     // 0x06E0(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const float AverageEnvelopeValue, const float MaxEnvelope, const int32 NumWaveInstances)> OnAudioMultiEnvelopeValue; // 0x06F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_708[0x18];                                     // 0x0708(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoundModulation                       Modulation;                                        // 0x0720(0x0010)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TDelegate<void(const TArray<struct FSubtitleCue>& Subtitles, float CueDuration)> OnQueueSubtitles; // 0x0730(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>         AutoAttachParent;                                  // 0x0740(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AutoAttachSocketName;                              // 0x0748(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_750[0x90];                                     // 0x0750(0x0090)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AdjustAttenuation(const struct FSoundAttenuationSettings& InAttenuationSettings);
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, const EAudioFaderCurve FadeCurve);
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, const EAudioFaderCurve FadeCurve);
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel, const EAudioFaderCurve FadeCurve);
	bool GetCookedEnvelopeData(float* OutEnvelopeData);
	bool GetCookedEnvelopeDataForAllPlayingSounds(TArray<struct FSoundWaveEnvelopeDataPerSound>* OutEnvelopeData);
	bool GetCookedFFTData(const TArray<float>& FrequenciesToGet, TArray<struct FSoundWaveSpectralData>* OutSoundWaveSpectralData);
	bool GetCookedFFTDataForAllPlayingSounds(TArray<struct FSoundWaveSpectralDataPerSound>* OutSoundWaveSpectralData);
	void Play(float StartTime);
	void SetBoolParameter(class FName InName, bool Inbool);
	void SetFloatParameter(class FName InName, float InFloat);
	void SetIntParameter(class FName InName, int32 inInt);
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
	void SetPaused(bool bPause);
	void SetPitchMultiplier(float NewPitchMultiplier);
	void SetSound(class USoundBase* NewSound);
	void SetSourceBusSendPostEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
	void SetSourceBusSendPreEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
	void SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
	void SetUISound(bool bInUISound);
	void SetVolumeMultiplier(float NewVolumeMultiplier);
	void SetWaveParameter(class FName InName, class USoundWave* InWave);
	void Stop();
	void StopDelayed(float DelayTime);

	EAudioComponentPlayState GetPlayState() const;
	bool HasCookedAmplitudeEnvelopeData() const;
	bool HasCookedFFTData() const;
	bool IsPlaying() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AudioComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AudioComponent")
	}
	static class UAudioComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioComponent>();
	}
};

// Class Engine.NavMovementComponent
// 0x0040 (0x0178 - 0x0138)
class UNavMovementComponent : public UMovementComponent
{
public:
	struct FNavAgentProperties                    NavAgentProps;                                     // 0x0138(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FixedPathBrakingDistance;                          // 0x0168(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bUpdateNavAgentWithOwnersCollision : 1;            // 0x016C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bUseAccelerationForPaths : 1;                      // 0x016C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, Config, GlobalConfig, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bUseFixedBrakingDistanceForPaths : 1;              // 0x016C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	struct FMovementProperties                    MovementState;                                     // 0x016D(0x0001)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_16E[0x2];                                      // 0x016E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                PathFollowingComp;                                 // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void StopActiveMovement();
	void StopMovementKeepPathing();

	bool IsCrouching() const;
	bool IsFalling() const;
	bool IsFlying() const;
	bool IsMovingOnGround() const;
	bool IsSwimming() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavMovementComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavMovementComponent")
	}
	static class UNavMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavMovementComponent>();
	}
};

// Class Engine.PawnMovementComponent
// 0x0008 (0x0180 - 0x0178)
class UPawnMovementComponent : public UNavMovementComponent
{
public:
	class APawn*                                  PawnOwner;                                         // 0x0178(0x0008)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void AddInputVector(const struct FVector& WorldVector, bool bForce);
	struct FVector ConsumeInputVector();

	struct FVector GetLastInputVector() const;
	class APawn* GetPawnOwner() const;
	struct FVector GetPendingInputVector() const;
	bool IsMoveInputIgnored() const;
	struct FVector K2_GetInputVector() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PawnMovementComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PawnMovementComponent")
	}
	static class UPawnMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnMovementComponent>();
	}
};

// Class Engine.AnimCompress
// 0x0008 (0x0040 - 0x0038)
class UAnimCompress : public UAnimBoneCompressionCodec
{
public:
	uint8                                         bNeedsSkeleton : 1;                                // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EAnimationCompressionFormat                   TranslationCompressionFormat;                      // 0x003C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimationCompressionFormat                   RotationCompressionFormat;                         // 0x003D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimationCompressionFormat                   ScaleCompressionFormat;                            // 0x003E(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F[0x1];                                       // 0x003F(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimCompress")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimCompress")
	}
	static class UAnimCompress* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCompress>();
	}
};

// Class Engine.AnimCompress_RemoveEverySecondKey
// 0x0008 (0x0048 - 0x0040)
class UAnimCompress_RemoveEverySecondKey : public UAnimCompress
{
public:
	int32                                         MinKeys;                                           // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bStartAtSecondKey : 1;                             // 0x0044(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimCompress_RemoveEverySecondKey")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimCompress_RemoveEverySecondKey")
	}
	static class UAnimCompress_RemoveEverySecondKey* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCompress_RemoveEverySecondKey>();
	}
};

// Class Engine.TriggerBase
// 0x0008 (0x0378 - 0x0370)
class ATriggerBase : public AActor
{
public:
	class UShapeComponent*                        CollisionComponent;                                // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TriggerBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TriggerBase")
	}
	static class ATriggerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATriggerBase>();
	}
};

// Class Engine.TriggerSphere
// 0x0000 (0x0378 - 0x0378)
class ATriggerSphere : public ATriggerBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TriggerSphere")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TriggerSphere")
	}
	static class ATriggerSphere* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATriggerSphere>();
	}
};

// Class Engine.MaterialExpressionLightmassReplace
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionLightmassReplace : public UMaterialExpression
{
public:
	struct FExpressionInput                       Realtime;                                          // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Lightmass;                                         // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionLightmassReplace")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionLightmassReplace")
	}
	static class UMaterialExpressionLightmassReplace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLightmassReplace>();
	}
};

// Class Engine.CharacterMovementComponent
// 0x0610 (0x0790 - 0x0180)
class UCharacterMovementComponent : public UPawnMovementComponent
{
public:
	uint8                                         Pad_180[0x10];                                     // 0x0180(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class ACHARACTER*                             CharacterOwner;                                    // 0x0190(0x0008)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         GravityScale;                                      // 0x0198(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxStepHeight;                                     // 0x019C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JumpZVelocity;                                     // 0x01A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JumpOffJumpZFactor;                                // 0x01A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A8[0x8];                                      // 0x01A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WalkableFloorAngle;                                // 0x01B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         WalkableFloorZ;                                    // 0x01B4(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EMovementMode                                 MovementMode;                                      // 0x01B8(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         CustomMovementMode;                                // 0x01B9(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENetworkSmoothingMode                         NetworkSmoothingMode;                              // 0x01BA(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1BB[0x1];                                      // 0x01BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GroundFriction;                                    // 0x01BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C0[0x1C];                                     // 0x01C0(0x001C)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxWalkSpeed;                                      // 0x01DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxWalkSpeedCrouched;                              // 0x01E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxSwimSpeed;                                      // 0x01E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxFlySpeed;                                       // 0x01E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxCustomMovementSpeed;                            // 0x01EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxAcceleration;                                   // 0x01F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinAnalogWalkSpeed;                                // 0x01F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BrakingFrictionFactor;                             // 0x01F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BrakingFriction;                                   // 0x01FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BrakingSubStepTime;                                // 0x0200(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BrakingDecelerationWalking;                        // 0x0204(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BrakingDecelerationFalling;                        // 0x0208(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BrakingDecelerationSwimming;                       // 0x020C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BrakingDecelerationFlying;                         // 0x0210(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AirControl;                                        // 0x0214(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AirControlBoostMultiplier;                         // 0x0218(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AirControlBoostVelocityThreshold;                  // 0x021C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FallingLateralFriction;                            // 0x0220(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CrouchedHalfHeight;                                // 0x0224(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Buoyancy;                                          // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PerchRadiusThreshold;                              // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PerchAdditionalHeight;                             // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationRate;                                      // 0x0234(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         bUseSeparateBrakingFriction : 1;                   // 0x0240(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bApplyGravityWhileJumping : 1;                     // 0x0240(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseControllerDesiredRotation : 1;                 // 0x0240(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOrientRotationToMovement : 1;                     // 0x0240(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSweepWhileNavWalking : 1;                         // 0x0240(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_240_5 : 1;                                  // 0x0240(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bMovementInProgress : 1;                           // 0x0240(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bEnableScopedMovementUpdates : 1;                  // 0x0240(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableServerDualMoveScopedMovementUpdates : 1;    // 0x0241(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bForceMaxAccel : 1;                                // 0x0241(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRunPhysicsWithNoController : 1;                   // 0x0241(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bForceNextFloorCheck : 1;                          // 0x0241(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, DisableEditOnTemplate, EditConst, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bShrinkProxyCapsule : 1;                           // 0x0241(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCanWalkOffLedges : 1;                             // 0x0241(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCanWalkOffLedgesWhenCrouching : 1;                // 0x0241(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_241_7 : 1;                                  // 0x0241(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
	uint8                                         BitPad_242_0 : 1;                                  // 0x0242(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bNetworkSkipProxyPredictionOnNetUpdate : 1;        // 0x0242(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNetworkAlwaysReplicateTransformUpdateTimestamp : 1; // 0x0242(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDeferUpdateMoveComponent : 1;                     // 0x0242(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnablePhysicsInteraction : 1;                     // 0x0242(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTouchForceScaledToMass : 1;                       // 0x0242(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bPushForceScaledToMass : 1;                        // 0x0242(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bPushForceUsingZOffset : 1;                        // 0x0242(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bScalePushForceToVelocity : 1;                     // 0x0243(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_244[0x4];                                      // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        DeferredUpdatedMoveComponent;                      // 0x0248(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxOutOfWaterStepHeight;                           // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutofWaterZ;                                       // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Mass;                                              // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StandingDownwardForceScale;                        // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InitialPushForceFactor;                            // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PushForceFactor;                                   // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PushForcePointZOffsetFactor;                       // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TouchForceFactor;                                  // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinTouchForce;                                     // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxTouchForce;                                     // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RepulsionForce;                                    // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Acceleration;                                      // 0x027C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_288[0x8];                                      // 0x0288(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  LastUpdateRotation;                                // 0x0290(0x0010)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FEncVector                             LastUpdateLocation;                                // 0x02A0(0x0010)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                LastUpdateVelocity;                                // 0x02B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ServerLastTransformUpdateTimeStamp;                // 0x02BC(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ServerLastClientGoodMoveAckTime;                   // 0x02C0(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ServerLastClientAdjustmentTime;                    // 0x02C4(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                PendingImpulseToApply;                             // 0x02C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                PendingForceToApply;                               // 0x02D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         AnalogInputModifier;                               // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2E4[0xC];                                      // 0x02E4(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxSimulationTimeStep;                             // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxSimulationIterations;                           // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxJumpApexAttemptsPerSimulation;                  // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxDepenetrationWithGeometry;                      // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxDepenetrationWithGeometryAsProxy;               // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxDepenetrationWithPawn;                          // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxDepenetrationWithPawnAsProxy;                   // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NetworkSimulatedSmoothLocationTime;                // 0x030C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NetworkSimulatedSmoothRotationTime;                // 0x0310(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ListenServerNetworkSimulatedSmoothLocationTime;    // 0x0314(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ListenServerNetworkSimulatedSmoothRotationTime;    // 0x0318(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NetProxyShrinkRadius;                              // 0x031C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NetProxyShrinkHalfHeight;                          // 0x0320(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NetworkMaxSmoothUpdateDistance;                    // 0x0324(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NetworkNoSmoothUpdateDistance;                     // 0x0328(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NetworkMinTimeBetweenClientAckGoodMoves;           // 0x032C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NetworkMinTimeBetweenClientAdjustments;            // 0x0330(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; // 0x0334(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NetworkLargeClientCorrectionDistance;              // 0x0338(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LedgeCheckThreshold;                               // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JumpOutOfWaterPitch;                               // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFindFloorResult                       CurrentFloor;                                      // 0x0344(0x0094)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	EMovementMode                                 DefaultLandMovementMode;                           // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMovementMode                                 DefaultWaterMovementMode;                          // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMovementMode                                 GroundMovementMode;                                // 0x03DA(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         bMaintainHorizontalGroundVelocity : 1;             // 0x03DB(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bImpartBaseVelocityX : 1;                          // 0x03DB(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bImpartBaseVelocityY : 1;                          // 0x03DB(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bImpartBaseVelocityZ : 1;                          // 0x03DB(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bImpartBaseAngularVelocity : 1;                    // 0x03DB(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bJustTeleported : 1;                               // 0x03DB(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNetworkUpdateReceived : 1;                        // 0x03DB(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNetworkMovementModeChanged : 1;                   // 0x03DB(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x03DC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bServerAcceptClientAuthoritativePosition : 1;      // 0x03DC(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNotifyApex : 1;                                   // 0x03DC(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCheatFlying : 1;                                  // 0x03DC(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bWantsToCrouch : 1;                                // 0x03DC(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCrouchMaintainsBaseLocation : 1;                  // 0x03DC(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, DisableEditOnTemplate, EditConst, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIgnoreBaseRotation : 1;                           // 0x03DC(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFastAttachedMove : 1;                             // 0x03DC(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAlwaysCheckFloor : 1;                             // 0x03DD(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseFlatBaseForFloorChecks : 1;                    // 0x03DD(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bPerformingJumpOff : 1;                            // 0x03DD(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bWantsToLeaveNavWalking : 1;                       // 0x03DD(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseRVOAvoidance : 1;                              // 0x03DD(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRequestedMoveUseAcceleration : 1;                 // 0x03DD(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_3DD_6 : 1;                                  // 0x03DD(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bWasSimulatingRootMotion : 1;                      // 0x03DD(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAllowPhysicsRotationDuringAnimRootMotion : 1;     // 0x03DE(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHasRequestedVelocity : 1;                         // 0x03DE(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bRequestedMoveWithMaxSpeed : 1;                    // 0x03DE(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bWasAvoidanceUpdated : 1;                          // 0x03DE(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         BitPad_3DE_4 : 2;                                  // 0x03DE(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bProjectNavMeshWalking : 1;                        // 0x03DE(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bProjectNavMeshOnBothWorldChannels : 1;            // 0x03DE(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bNavMeshWalkingAvoidBumpy : 1;                     // 0x03DF(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_3E0[0x10];                                     // 0x03E0(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AvoidanceConsiderationRadius;                      // 0x03F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RequestedVelocity;                                 // 0x03F4(0x000C)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AvoidanceUID;                                      // 0x0400(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                      AvoidanceGroup;                                    // 0x0404(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                      GroupsToAvoid;                                     // 0x0408(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNavAvoidanceMask                      GroupsToIgnore;                                    // 0x040C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                         AvoidanceWeight;                                   // 0x0410(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                PendingLaunchVelocity;                             // 0x0414(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_420[0xB0];                                     // 0x0420(0x00B0)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NavMeshProjectionInterval;                         // 0x04D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NavMeshProjectionTimer;                            // 0x04D4(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NavMeshEnterInterval;                              // 0x04D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NavMeshEnterTimer;                                 // 0x04DC(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NavMeshProjectionInterpSpeed;                      // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NavMeshProjectionHeightScaleUp;                    // 0x04E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NavMeshProjectionHeightScaleDown;                  // 0x04E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NavWalkingFloorDistTolerance;                      // 0x04EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NavWalkingLerpHeight;                              // 0x04F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NavWalkingLerpDist;                                // 0x04F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4F8[0x10];                                     // 0x04F8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction;               // 0x0508(0x0068)(NativeAccessSpecifierPublic)
	uint8                                         Pad_570[0x18];                                     // 0x0570(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinTimeBetweenTimeStampResets;                     // 0x0588(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_58C[0x4];                                      // 0x058C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRootMotionSourceGroup                 CurrentRootMotion;                                 // 0x0590(0x00F8)(Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_688[0x98];                                     // 0x0688(0x0098)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRootMotionMovementParams              RootMotionParams;                                  // 0x0720(0x0040)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                AnimRootMotionVelocity;                            // 0x0760(0x000C)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_76C[0x24];                                     // 0x076C(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddForce(const struct FVector& Force);
	void AddImpulse(const struct FVector& Impulse, bool bVelocityChange);
	void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ClearAccumulatedForces();
	void DisableMovement();
	void SetAvoidanceEnabled(bool bEnable);
	void SetAvoidanceGroup(int32 GroupFlags);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int32 GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int32 GroupFlags);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetMovementMode(EMovementMode NewMovementMode, uint8 NewCustomMode);
	void SetWalkableFloorAngle(float InWalkableFloorAngle);
	void SetWalkableFloorZ(float InWalkableFloorZ);

	float GetAnalogInputModifier() const;
	class ACHARACTER* GetCharacterOwner() const;
	struct FVector GetCurrentAcceleration() const;
	struct FVector GetImpartedMovementBaseVelocity() const;
	struct FVector GetLastUpdateLocation() const;
	struct FRotator GetLastUpdateRotation() const;
	struct FVector GetLastUpdateVelocity() const;
	float GetMaxAcceleration() const;
	float GetMaxBrakingDeceleration() const;
	float GetMaxJumpHeight() const;
	float GetMaxJumpHeightWithJumpTime() const;
	float GetMinAnalogSpeed() const;
	class UPrimitiveComponent* GetMovementBase() const;
	float GetPerchRadiusThreshold() const;
	float GetValidPerchRadius() const;
	bool IsWalkable(const struct FHitResult& Hit) const;
	bool IsWalking() const;
	void K2_ComputeFloorDist(const struct FVector& CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct FFindFloorResult* FloorResult) const;
	void K2_FindFloor(const struct FVector& CapsuleLocation, struct FFindFloorResult* FloorResult) const;
	float K2_GetModifiedMaxAcceleration() const;
	float K2_GetWalkableFloorAngle() const;
	float K2_GetWalkableFloorZ() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CharacterMovementComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CharacterMovementComponent")
	}
	static class UCharacterMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterMovementComponent>();
	}
};

// Class Engine.MaterialExpressionTextureSampleParameterSubUV
// 0x0008 (0x0100 - 0x00F8)
class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D
{
public:
	uint8                                         bBlend : 1;                                        // 0x00F8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTextureSampleParameterSubUV")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTextureSampleParameterSubUV")
	}
	static class UMaterialExpressionTextureSampleParameterSubUV* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTextureSampleParameterSubUV>();
	}
};

// Class Engine.PlayerCameraManager
// 0x5CB70 (0x5CEE0 - 0x0370)
#pragma pack(push, 0x1)
class alignas(0x10) APlayerCameraManager : public AActor
{
public:
	class APlayerController*                      PCOwner;                                           // 0x0370(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                        TransformComponent;                                // 0x0378(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_380[0x8];                                      // 0x0380(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DefaultFOV;                                        // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38C[0x4];                                      // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DefaultOrthoWidth;                                 // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_394[0x4];                                      // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DefaultAspectRatio;                                // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39C[0x44];                                     // 0x039C(0x0044)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCameraCacheEntry                      CameraCache;                                       // 0x03E0(0x16D70)(Transient, NativeAccessSpecifierPublic)
	struct FCameraCacheEntry                      LastFrameCameraCache;                              // 0x17150(0x16D70)(Transient, NativeAccessSpecifierPublic)
	struct FTViewTarget                           ViewTarget;                                        // 0x2DEC0(0x0A00)(Transient, NativeAccessSpecifierPublic)
	struct FTViewTarget                           PendingViewTarget;                                 // 0x2E8C0(0x0A00)(Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_2F2C0[0x20];                                   // 0x2F2C0(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCameraCacheEntry                      CameraCachePrivate;                                // 0x2F2E0(0x16D70)(Transient, NativeAccessSpecifierPrivate)
	struct FCameraCacheEntry                      LastFrameCameraCachePrivate;                       // 0x46050(0x16D70)(Transient, NativeAccessSpecifierPrivate)
	TArray<class UCameraModifier*>                ModifierList;                                      // 0x5CDC0(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCameraModifier>>    DefaultModifiers;                                  // 0x5CDD0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                         FreeCamDistance;                                   // 0x5CDE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                FreeCamOffset;                                     // 0x5CDE4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ViewTargetOffset;                                  // 0x5CDF0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5CDFC[0x14];                                   // 0x5CDFC(0x0014)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AEmitterCameraLensEffectBase*>   CameraLensEffects;                                 // 0x5CE10(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UCameraModifier_CameraShake*            CachedCameraShakeMod;                              // 0x5CE20(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCameraAnimInst*                        AnimInstPool[0x8];                                 // 0x5CE28(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPostProcessSettings>           PostProcessBlendCache;                             // 0x5CE68(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_5CE78[0x10];                                   // 0x5CE78(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCameraAnimInst*>                ActiveAnims;                                       // 0x5CE88(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UCameraAnimInst*>                FreeAnims;                                         // 0x5CE98(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class ACameraActor*                           AnimCameraActor;                                   // 0x5CEA8(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
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

public:
	class AEmitterCameraLensEffectBase* AddCameraLensEffect(TSubclassOf<class AEmitterCameraLensEffectBase> LensEffectEmitterClass);
	class UCameraModifier* AddNewCameraModifier(TSubclassOf<class UCameraModifier> ModifierClass);
	bool BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV);
	void ClearCameraLensEffects();
	class UCameraModifier* FindCameraModifierByClass(TSubclassOf<class UCameraModifier> ModifierClass);
	void OnPhotographyMultiPartCaptureEnd();
	void OnPhotographyMultiPartCaptureStart();
	void OnPhotographySessionEnd();
	void OnPhotographySessionStart();
	void PhotographyCameraModify(const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* ResultCameraLocation);
	class UCameraAnimInst* PlayCameraAnim(class UCameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, ECameraAnimPlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
	class UCameraShake* PlayCameraShake(TSubclassOf<class UCameraShake> ShakeClass, float Scale, ECameraAnimPlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
	void RemoveCameraLensEffect(class AEmitterCameraLensEffectBase* Emitter);
	bool RemoveCameraModifier(class UCameraModifier* ModifierToRemove);
	void SetGameCameraCutThisFrame();
	void SetManualCameraFade(float InFadeAmount, const struct FLinearColor& Color, bool bInFadeAudio);
	void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, const struct FLinearColor& Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
	void StopAllCameraAnims(bool bImmediate);
	void StopAllCameraShakes(bool bImmediately);
	void StopAllInstancesOfCameraAnim(class UCameraAnim* Anim, bool bImmediate);
	void StopAllInstancesOfCameraShake(TSubclassOf<class UCameraShake> Shake, bool bImmediately);
	void StopCameraAnimInst(class UCameraAnimInst* AnimInst, bool bImmediate);
	void StopCameraFade();
	void StopCameraShake(class UCameraShake* ShakeInstance, bool bImmediately);

	struct FVector GetCameraLocation() const;
	struct FRotator GetCameraRotation() const;
	float GetFOVAngle() const;
	class APlayerController* GetOwningPlayerController() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PlayerCameraManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PlayerCameraManager")
	}
	static class APlayerCameraManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerCameraManager>();
	}
};
#pragma pack(pop)

// Class Engine.ParticleModuleAttractorBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleAttractorBase : public UParticleModule
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleAttractorBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleAttractorBase")
	}
	static class UParticleModuleAttractorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleAttractorBase>();
	}
};

// Class Engine.CameraComponent
// 0x09D0 (0x0C20 - 0x0250)
class UCameraComponent : public USceneComponent
{
public:
	float                                         FieldOfView;                                       // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OrthoWidth;                                        // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OrthoNearClipPlane;                                // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OrthoFarClipPlane;                                 // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AspectRatio;                                       // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bConstrainAspectRatio : 1;                         // 0x0264(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseFieldOfViewForLOD : 1;                         // 0x0264(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bLockToHmd : 1;                                    // 0x0264(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUsePawnControlRotation : 1;                       // 0x0264(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	ECameraProjectionMode                         ProjectionMode;                                    // 0x0265(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_266[0x3A];                                     // 0x0266(0x003A)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PostProcessBlendWeight;                            // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A4[0x2C];                                     // 0x02A4(0x002C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   PostProcessSettings;                               // 0x02D0(0x0950)(Edit, BlueprintVisible, Interp, NativeAccessSpecifierPublic)

public:
	void AddOrUpdateBlendable(TScriptInterface<class IBlendableInterface> InBlendableObject, float InWeight);
	void GetCameraView(float DeltaTime, struct FMinimalViewInfo* DesiredView);
	void OnCameraMeshHiddenChanged();
	void RemoveBlendable(TScriptInterface<class IBlendableInterface> InBlendableObject);
	void SetAspectRatio(float InAspectRatio);
	void SetConstraintAspectRatio(bool bInConstrainAspectRatio);
	void SetFieldOfView(float InFieldOfView);
	void SetOrthoFarClipPlane(float InOrthoFarClipPlane);
	void SetOrthoNearClipPlane(float InOrthoNearClipPlane);
	void SetOrthoWidth(float InOrthoWidth);
	void SetPostProcessBlendWeight(float InPostProcessBlendWeight);
	void SetProjectionMode(ECameraProjectionMode InProjectionMode);
	void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CameraComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CameraComponent")
	}
	static class UCameraComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraComponent>();
	}
};

// Class Engine.Skeleton
// 0x0348 (0x0370 - 0x0028)
class USkeleton : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBoneNode>                      BoneTree;                                          // 0x0038(0x0010)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<struct FTransform>                     RefLocalPoses;                                     // 0x0048(0x0010)(ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_58[0x118];                                     // 0x0058(0x0118)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  VirtualBoneGuid;                                   // 0x0170(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FVirtualBone>                   VirtualBones;                                      // 0x0180(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class USkeletalMeshSocket*>            Sockets;                                           // 0x0190(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A0[0x50];                                     // 0x01A0(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSmartNameContainer                    SmartNames;                                        // 0x01F0(0x0050)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_240[0x28];                                     // 0x0240(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeleton*                              MasterSkeleton;                                    // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_270[0x8];                                      // 0x0270(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBlendProfile*>                  BlendProfiles;                                     // 0x0278(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FAnimSlotGroup>                 SlotGroups;                                        // 0x0288(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_298[0xC8];                                     // 0x0298(0x00C8)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAssetUserData*>                 AssetUserData;                                     // 0x0360(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Skeleton")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Skeleton")
	}
	static class USkeleton* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkeleton>();
	}
};

// Class Engine.SkeletalMeshActor
// 0x0088 (0x03F8 - 0x0370)
class ASkeletalMeshActor : public AActor
{
public:
	uint8                                         Pad_370[0x8];                                      // 0x0370(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bShouldDoAnimNotifies : 1;                         // 0x0378(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bWakeOnLevelStart : 1;                             // 0x0378(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 SkeletalMeshComponent;                             // 0x0380(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMesh*                          ReplicatedMesh;                                    // 0x0388(0x0008)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                          ReplicatedPhysAsset;                               // 0x0390(0x0008)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     ReplicatedMaterial0;                               // 0x0398(0x0008)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     ReplicatedMaterial1;                               // 0x03A0(0x0008)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A8[0x50];                                     // 0x03A8(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_ReplicatedMaterial0();
	void OnRep_ReplicatedMaterial1();
	void OnRep_ReplicatedMesh();
	void OnRep_ReplicatedPhysAsset();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SkeletalMeshActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SkeletalMeshActor")
	}
	static class ASkeletalMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASkeletalMeshActor>();
	}
};

// Class Engine.TriggerBox
// 0x0000 (0x0378 - 0x0378)
class ATriggerBox : public ATriggerBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TriggerBox")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TriggerBox")
	}
	static class ATriggerBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATriggerBox>();
	}
};

// Class Engine.CDLODClipRectComponent
// 0x0000 (0x0250 - 0x0250)
class UCDLODClipRectComponent : public USceneComponent
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CDLODClipRectComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CDLODClipRectComponent")
	}
	static class UCDLODClipRectComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCDLODClipRectComponent>();
	}
};

// Class Engine.Clipmap
// 0x0188 (0x02B8 - 0x0130)
class UClipmap : public UTexture
{
public:
	struct FIntPoint                              OriginTextureSize;                                 // 0x0130(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsWeightmapClipmap;                               // 0x0138(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bGenerateSubTextureButton;                         // 0x0139(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13A[0x2];                                      // 0x013A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PatchSize;                                         // 0x013C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PatchCount;                                        // 0x0140(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<uint32>                                  DiscardLayerId;                                    // 0x0148(0x0050)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<uint32, uint32>                          ValidTextureLayerId;                               // 0x0198(0x0050)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	int32                                         ReservedPatchCount;                                // 0x01E8(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1EC[0x4];                                      // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ClipmapSize;                                       // 0x01F0(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MipCount;                                          // 0x01F4(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPixelFormat                                  CachedPF;                                          // 0x01F8(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressX;                                          // 0x01F9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressY;                                          // 0x01FA(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressZ;                                          // 0x01FB(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FIntVector, TSoftObjectPtr<class UTexture2D>> SubTexture;                            // 0x0200(0x0050)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<struct FIntVector, class UTexture2D*>    BackupTextures;                                    // 0x0250(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FIntPoint>                      SizeInPatchs;                                      // 0x02A0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                         Pad_2B0[0x8];                                      // 0x02B0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Clipmap")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Clipmap")
	}
	static class UClipmap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClipmap>();
	}
};

// Class Engine.ParticleModuleLocation
// 0x0050 (0x0080 - 0x0030)
class UParticleModuleLocation : public UParticleModuleLocationBase
{
public:
	struct FRawDistributionVector                 StartLocation;                                     // 0x0030(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                         DistributeOverNPoints;                             // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistributeThreshold;                               // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLocation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLocation")
	}
	static class UParticleModuleLocation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLocation>();
	}
};

// Class Engine.ParticleModuleLocationWorldOffset
// 0x0000 (0x0080 - 0x0080)
class UParticleModuleLocationWorldOffset : public UParticleModuleLocation
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLocationWorldOffset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLocationWorldOffset")
	}
	static class UParticleModuleLocationWorldOffset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLocationWorldOffset>();
	}
};

// Class Engine.InterpTrackInstSound
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstSound : public UInterpTrackInst
{
public:
	float                                         LastUpdatePosition;                                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        PlayAudioComp;                                     // 0x0030(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstSound")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstSound")
	}
	static class UInterpTrackInstSound* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstSound>();
	}
};

// Class Engine.InputDelegateBinding
// 0x0000 (0x0028 - 0x0028)
class UInputDelegateBinding : public UDynamicBlueprintBinding
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InputDelegateBinding")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InputDelegateBinding")
	}
	static class UInputDelegateBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputDelegateBinding>();
	}
};

// Class Engine.InputKeyDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputKeyDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings;                       // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InputKeyDelegateBinding")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InputKeyDelegateBinding")
	}
	static class UInputKeyDelegateBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputKeyDelegateBinding>();
	}
};

// Class Engine.AnimNotify_PlayParticleEffect
// 0x0058 (0x0090 - 0x0038)
class alignas(0x10) UAnimNotify_PlayParticleEffect : public UAnimNotify
{
public:
	class UParticleSystem*                        PSTemplate;                                        // 0x0038(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LocationOffset;                                    // 0x0040(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationOffset;                                    // 0x004C(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Scale;                                             // 0x0058(0x000C)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x1C];                                      // 0x0064(0x001C)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         Attached : 1;                                      // 0x0080(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SocketName;                                        // 0x0084(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimNotify_PlayParticleEffect")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimNotify_PlayParticleEffect")
	}
	static class UAnimNotify_PlayParticleEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlayParticleEffect>();
	}
};

// Class Engine.GameStateBase
// 0x0040 (0x03B0 - 0x0370)
class AGameStateBase : public AInfo
{
public:
	TSubclassOf<class AGameModeBase>              GameModeClass;                                     // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameModeBase*                          AuthorityGameMode;                                 // 0x0378(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ASpectatorPawn>             SpectatorClass;                                    // 0x0380(0x0008)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APlayerState*>                   PlayerArray;                                       // 0x0388(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                          bReplicatedHasBegunPlay;                           // 0x0398(0x0001)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_399[0x3];                                      // 0x0399(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ReplicatedWorldTimeSeconds;                        // 0x039C(0x0004)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ServerWorldTimeSecondsDelta;                       // 0x03A0(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ServerWorldTimeSecondsUpdateFrequency;             // 0x03A4(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3A8[0x8];                                      // 0x03A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_GameModeClass();
	void OnRep_ReplicatedHasBegunPlay();
	void OnRep_ReplicatedWorldTimeSeconds();
	void OnRep_SpectatorClass();

	float GetPlayerRespawnDelay(class AController* Controller) const;
	float GetPlayerStartTime(class AController* Controller) const;
	float GetServerWorldTimeSeconds() const;
	bool HasBegunPlay() const;
	bool HasMatchStarted() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GameStateBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GameStateBase")
	}
	static class AGameStateBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameStateBase>();
	}
};

// Class Engine.LightmassCharacterIndirectDetailVolume
// 0x0000 (0x03A8 - 0x03A8)
class ALightmassCharacterIndirectDetailVolume : public AVolume
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LightmassCharacterIndirectDetailVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LightmassCharacterIndirectDetailVolume")
	}
	static class ALightmassCharacterIndirectDetailVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALightmassCharacterIndirectDetailVolume>();
	}
};

// Class Engine.SceneCapture
// 0x0010 (0x0380 - 0x0370)
class ASceneCapture : public AActor
{
public:
	class UStaticMeshComponent*                   MeshComp;                                          // 0x0370(0x0008)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        SceneComponent;                                    // 0x0378(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SceneCapture")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SceneCapture")
	}
	static class ASceneCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASceneCapture>();
	}
};

// Class Engine.PlanarReflection
// 0x0010 (0x0390 - 0x0380)
class APlanarReflection : public ASceneCapture
{
public:
	class UPlanarReflectionComponent*             PlanarReflectionComponent;                         // 0x0380(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bShowPreviewPlane;                                 // 0x0388(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_389[0x7];                                      // 0x0389(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnInterpToggle(bool bEnable);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PlanarReflection")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PlanarReflection")
	}
	static class APlanarReflection* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlanarReflection>();
	}
};

// Class Engine.GameState
// 0x0020 (0x03D0 - 0x03B0)
class AGameState : public AGameStateBase
{
public:
	class FName                                   MatchState;                                        // 0x03B0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   PreviousMatchState;                                // 0x03B8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         ElapsedTime;                                       // 0x03C0(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C4[0xC];                                      // 0x03C4(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_ElapsedTime();
	void OnRep_MatchState();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GameState")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GameState")
	}
	static class AGameState* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameState>();
	}
};

// Class Engine.DataTable
// 0x0118 (0x0140 - 0x0028)
class UDataTable : public UObject
{
public:
	class UScriptStruct*                          RowStruct;                                         // 0x0028(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, uint8*>                     RowMap;                                            // 0x0030(0x0050)(So, here's a RowMap. Good luck with it.)
	uint8                                         Pad_80[0x60];                                      // 0x0080(0x0060)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bStripFromClientBuilds : 1;                        // 0x00E0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIgnoreExtraFields : 1;                            // 0x00E0(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIgnoreMissingFields : 1;                          // 0x00E0(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ImportKeyField;                                    // 0x00E8(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIgnoreReferencedObjectsGC : 1;                    // 0x00F8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCanMMapToFile : 1;                                // 0x00F8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableSqlite : 1;                                 // 0x00F8(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_F9[0x1];                                       // 0x00F9(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bIgnoreKeepReferenceObject;                        // 0x00FA(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FB[0x45];                                      // 0x00FB(0x0045)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DataTable")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DataTable")
	}
	static class UDataTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataTable>();
	}
};

// Class Engine.InterpTrackInstFloatParticleParam
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstFloatParticleParam : public UInterpTrackInst
{
public:
	float                                         ResetFloat;                                        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstFloatParticleParam")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstFloatParticleParam")
	}
	static class UInterpTrackInstFloatParticleParam* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstFloatParticleParam>();
	}
};

// Class Engine.DestructibleStaticMesh
// 0x0070 (0x0200 - 0x0190)
class UDestructibleStaticMesh : public UStaticLabelMesh
{
public:
	uint8                                         Pad_190[0x10];                                     // 0x0190(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBodySetup*>                     BodySetups;                                        // 0x01A0(0x0010)(Edit, ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FComplexCollisionMaterialArray> BodyComplexCollisionMaterials;                     // 0x01B0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FComplexCollisionMaterialArray> BodyComplexCollisionMaterials_HD;                  // 0x01C0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class UPhysicalMaterial*>              AllComplexCollisionMaterials;                      // 0x01D0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                         Pad_1E0[0x20];                                     // 0x01E0(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DestructibleStaticMesh")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DestructibleStaticMesh")
	}
	static class UDestructibleStaticMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDestructibleStaticMesh>();
	}
};

// Class Engine.PlayerState
// 0x0128 (0x0498 - 0x0370)
class APlayerState : public AInfo
{
public:
	float                                         Score;                                             // 0x0370(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlayerName;                                        // 0x0378(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_388[0x10];                                     // 0x0388(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PlayerId;                                          // 0x0398(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Ping;                                              // 0x039C(0x0001)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39D[0x1];                                      // 0x039D(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bShouldUpdateReplicatedPing : 1;                   // 0x039E(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bIsSpectator : 1;                                  // 0x039E(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOnlySpectator : 1;                                // 0x039E(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsABot : 1;                                       // 0x039E(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_39E_4 : 1;                                  // 0x039E(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bIsInactive : 1;                                   // 0x039E(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFromPreviousLevel : 1;                            // 0x039E(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Net, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_39F[0x1];                                      // 0x039F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StartTime;                                         // 0x03A0(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A4[0x4];                                      // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class ULocalMessage>              EngineMessageClass;                                // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3B0[0x8];                                      // 0x03B0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SavedNetworkAddress;                               // 0x03B8(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                       UniqueId;                                          // 0x03C8(0x0028)(Net, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F0[0x8];                                      // 0x03F0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  PawnPrivate;                                       // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_400[0x78];                                     // 0x0400(0x0078)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlayerNamePrivate;                                 // 0x0478(0x0010)(Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_488[0x10];                                     // 0x0488(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_bIsInactive();
	void OnRep_PlayerId();
	void OnRep_PlayerName();
	void OnRep_Score();
	void OnRep_UniqueId();
	void ReceiveCopyProperties(class APlayerState* NewPlayerState);
	void ReceiveOverrideWith(class APlayerState* OldPlayerState);

	class FString GetPlayerName() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PlayerState")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PlayerState")
	}
	static class APlayerState* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerState>();
	}
};

// Class Engine.HealthSnapshotBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UHealthSnapshotBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	static void LogPerformanceSnapshot(const class FString& SnapshotTitle, bool bResetStats);
	static void StartPerformanceSnapshots();
	static void StopPerformanceSnapshots();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("HealthSnapshotBlueprintLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"HealthSnapshotBlueprintLibrary")
	}
	static class UHealthSnapshotBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHealthSnapshotBlueprintLibrary>();
	}
};

// Class Engine.ModelComponent
// 0x0040 (0x05D0 - 0x0590)
class UModelComponent : public UPrimitiveComponent
{
public:
	uint8                                         Pad_588[0x18];                                     // 0x0588(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class UBodySetup*                             ModelBodySetup;                                    // 0x05A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5A8[0x28];                                     // 0x05A8(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ModelComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ModelComponent")
	}
	static class UModelComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModelComponent>();
	}
};

// Class Engine.GIReplaceVolume
// 0x0020 (0x03C8 - 0x03A8)
class AGIReplaceVolume : public AVolume
{
public:
	bool                                          EnableReplace;                                     // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A9[0x3];                                      // 0x03A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FadeLength;                                        // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReplaceSkyAO;                                      // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ReplaceBounce;                                     // 0x03B4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C4[0x4];                                      // 0x03C4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GIReplaceVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GIReplaceVolume")
	}
	static class AGIReplaceVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGIReplaceVolume>();
	}
};

// Class Engine.DemoNetConnection
// 0x0070 (0x1DF8 - 0x1D88)
class UDemoNetConnection : public UNetConnection
{
public:
	uint8                                         Pad_1D88[0x70];                                    // 0x1D88(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DemoNetConnection")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DemoNetConnection")
	}
	static class UDemoNetConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDemoNetConnection>();
	}
};

// Class Engine.CameraModifier
// 0x0020 (0x0048 - 0x0028)
class UCameraModifier : public UObject
{
public:
	uint8                                         bDebug : 1;                                        // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bExclusive : 1;                                    // 0x0028(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         Priority;                                          // 0x002C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CameraOwner;                                       // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         AlphaInTime;                                       // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         AlphaOutTime;                                      // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         Alpha;                                             // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV);
	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings);
	void DisableModifier(bool bImmediate);
	void EnableModifier();

	class AActor* GetViewTarget() const;
	bool IsDisabled() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CameraModifier")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CameraModifier")
	}
	static class UCameraModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraModifier>();
	}
};

// Class Engine.KismetStringTableLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetStringTableLibrary : public UBlueprintFunctionLibrary
{
public:
	static TArray<class FString> GetKeysFromStringTable(const class FName TableId);
	static TArray<class FName> GetMetaDataIdsFromStringTableEntry(const class FName TableId, const class FString& Key);
	static TArray<class FName> GetRegisteredStringTables();
	static class FString GetTableEntryMetaData(const class FName TableId, const class FString& Key, const class FName MetaDataId);
	static class FString GetTableEntrySourceString(const class FName TableId, const class FString& Key);
	static class FString GetTableNamespace(const class FName TableId);
	static bool IsRegisteredTableEntry(const class FName TableId, const class FString& Key);
	static bool IsRegisteredTableId(const class FName TableId);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("KismetStringTableLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"KismetStringTableLibrary")
	}
	static class UKismetStringTableLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetStringTableLibrary>();
	}
};

// Class Engine.EdGraph
// 0x0038 (0x0060 - 0x0028)
class UEdGraph : public UObject
{
public:
	TSubclassOf<class UEdGraphSchema>             Schema;                                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEdGraphNode*>                   Nodes;                                             // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bEditable : 1;                                     // 0x0040(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAllowDeletion : 1;                                // 0x0040(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAllowRenaming : 1;                                // 0x0040(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_41[0x1F];                                      // 0x0041(0x001F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("EdGraph")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"EdGraph")
	}
	static class UEdGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEdGraph>();
	}
};

// Class Engine.AsyncActionLoadPrimaryAssetBase
// 0x0048 (0x0078 - 0x0030)
class UAsyncActionLoadPrimaryAssetBase : public UBlueprintAsyncActionBase
{
public:
	uint8                                         Pad_30[0x48];                                      // 0x0030(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AsyncActionLoadPrimaryAssetBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AsyncActionLoadPrimaryAssetBase")
	}
	static class UAsyncActionLoadPrimaryAssetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncActionLoadPrimaryAssetBase>();
	}
};

// Class Engine.CheatManager
// 0x0050 (0x0078 - 0x0028)
class UCheatManager : public UObject
{
public:
	class ADebugCameraController*                 DebugCameraControllerRef;                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ADebugCameraController>     DebugCameraControllerClass;                        // 0x0030(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x40];                                      // 0x0038(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BugIt(const class FString& ScreenShotDescription);
	void BugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
	void BugItStringCreator(const struct FVector& ViewLocation, const struct FRotator& ViewRotation, class FString* GoString, class FString* LocString);
	void ChangeSize(float F);
	void CheatScript(const class FString& ScriptName);
	void DamageTarget(float DamageAmount);
	void DebugCapsuleSweep();
	void DebugCapsuleSweepCapture();
	void DebugCapsuleSweepChannel(ECollisionChannel Channel);
	void DebugCapsuleSweepClear();
	void DebugCapsuleSweepComplex(bool bTraceComplex);
	void DebugCapsuleSweepPawn();
	void DebugCapsuleSweepSize(float HalfHeight, float radius);
	void DestroyAll(TSubclassOf<class AActor> aClass);
	void DestroyAllPawnsExceptTarget();
	void DestroyPawns(TSubclassOf<class APawn> aClass);
	void DestroyServerStatReplicator();
	void DestroyTarget();
	void DisableDebugCamera();
	void DumpChatState();
	void DumpOnlineSessionState();
	void DumpPartyState();
	void DumpVoiceMutingState();
	void EnableDebugCamera();
	void FlushLog();
	void Fly();
	void FreezeFrame(float Delay);
	void Ghost();
	void God();
	void InvertMouse();
	void LogLoc();
	void OnlyLoadLevel(class FName PackageName);
	void PlayersOnly();
	void ReceiveEndPlay();
	void ReceiveInitCheatManager();
	void ServerToggleAILogging();
	void SetMouseSensitivityToDefault();
	void SetWorldOrigin();
	void Slomo(float NewTimeDilation);
	void SpawnServerStatReplicator();
	void StreamLevelIn(class FName PackageName);
	void StreamLevelOut(class FName PackageName);
	void Summon(const class FString& ClassName);
	void Teleport();
	void TestCollisionDistance();
	void ToggleAILogging();
	void ToggleDebugCamera();
	void ToggleServerStatReplicatorClientOverwrite();
	void ToggleServerStatReplicatorUpdateStatNet();
	void UpdateSafeArea();
	void ViewActor(class FName ActorName);
	void ViewClass(TSubclassOf<class AActor> DesiredClass);
	void ViewPlayer(const class FString& S);
	void ViewSelf();
	void Walk();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CheatManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CheatManager")
	}
	static class UCheatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCheatManager>();
	}
};

// Class Engine.CurveTable
// 0x0078 (0x00A0 - 0x0028)
class UCurveTable : public UObject
{
public:
	uint8                                         Pad_28[0x78];                                      // 0x0028(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CurveTable")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CurveTable")
	}
	static class UCurveTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurveTable>();
	}
};

// Class Engine.CompositeCurveTable
// 0x0028 (0x00C8 - 0x00A0)
class UCompositeCurveTable : public UCurveTable
{
public:
	TArray<class UCurveTable*>                    ParentTables;                                      // 0x00A0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UCurveTable*>                    OldParentTables;                                   // 0x00B0(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_C0[0x8];                                       // 0x00C0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CompositeCurveTable")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CompositeCurveTable")
	}
	static class UCompositeCurveTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompositeCurveTable>();
	}
};

// Class Engine.GameEngine
// 0x0050 (0x0FF0 - 0x0FA0)
#pragma pack(push, 0x1)
class alignas(0x10) UGameEngine : public UEngine
{
public:
	float                                         MaxDeltaTime;                                      // 0x0F98(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ServerFlushLogInterval;                            // 0x0F9C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameInstance*                          GameInstance;                                      // 0x0FA0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FA8[0x40];                                     // 0x0FA8(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UGameEngine* GetEngine();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GameEngine")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GameEngine")
	}
	static class UGameEngine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameEngine>();
	}
};
#pragma pack(pop)

// Class Engine.MaterialExpressionParticleDirection
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionParticleDirection : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionParticleDirection")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionParticleDirection")
	}
	static class UMaterialExpressionParticleDirection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionParticleDirection>();
	}
};

// Class Engine.GameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UGameplayStatics : public UBlueprintFunctionLibrary
{
public:
	static void ActivateReverbEffect(const class UObject* WorldContextObject, class UReverbEffect* ReverbEffect, class FName TagName, float Priority, float Volume, float FadeTime);
	static float ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass);
	static float ApplyPointDamage(class AActor* DamagedActor, float BaseDamage, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass);
	static bool ApplyRadialDamage(const class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float DamageRadius, TSubclassOf<class UDamageType> DamageTypeClass, const TArray<class AActor*>& IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, ECollisionChannel DamagePreventionChannel);
	static bool ApplyRadialDamageWithFalloff(const class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TSubclassOf<class UDamageType> DamageTypeClass, const TArray<class AActor*>& IgnoreActors, class AActor* DamageCauser, class AController* InstigatedByController, ECollisionChannel DamagePreventionChannel);
	static bool AreAnyListenersWithinRange(const class UObject* WorldContextObject, const struct FVector& Location, float MaximumRange);
	static bool AreSubtitlesEnabled();
	static class AActor* BeginDeferredActorSpawnFromClass(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
	static class AActor* BeginSpawningActorFromBlueprint(const class UObject* WorldContextObject, const class UBlueprint* Blueprint, const struct FTransform& SpawnTransform, bool bNoCollisionFail);
	static class AActor* BeginSpawningActorFromClass(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const struct FTransform& SpawnTransform, bool bNoCollisionFail, class AActor* Owner);
	static bool Blueprint_PredictProjectilePath_Advanced(const class UObject* WorldContextObject, const struct FPredictProjectilePathParams& PredictParams, struct FPredictProjectilePathResult* PredictResult);
	static bool Blueprint_PredictProjectilePath_ByObjectType(const class UObject* WorldContextObject, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination, const struct FVector& StartPos, const struct FVector& LaunchVelocity, bool bTracePath, float ProjectileRadius, const TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
	static bool Blueprint_PredictProjectilePath_ByTraceChannel(const class UObject* WorldContextObject, struct FHitResult* OutHit, TArray<struct FVector>* OutPathPositions, struct FVector* OutLastTraceDestination, const struct FVector& StartPos, const struct FVector& LaunchVelocity, bool bTracePath, float ProjectileRadius, ECollisionChannel TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
	static bool BlueprintSuggestProjectileVelocity(const class UObject* WorldContextObject, struct FVector* TossVelocity, const struct FVector& StartLocation, const struct FVector& EndLocation, float LaunchSpeed, float OverrideGravityZ, ESuggestProjVelocityTraceOption TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug);
	static void BreakHitResult(const struct FHitResult& Hit, bool* bBlockingHit, bool* bInitialOverlap, float* Time, float* Distance, struct FVector* Location, struct FVector* ImpactPoint, struct FVector* Normal, struct FVector* ImpactNormal, class UPhysicalMaterial** PhysMat, class AActor** HitActor, class UPrimitiveComponent** HitComponent, class FName* HitBoneName, int32* HitItem, int32* FaceIndex, struct FVector* TraceStart, struct FVector* TraceEnd);
	static void CancelAsyncLoading();
	static void ClearSoundMixClassOverride(const class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float FadeOutTime);
	static void ClearSoundMixModifiers(const class UObject* WorldContextObject);
	static class APlayerController* CreatePlayer(const class UObject* WorldContextObject, int32 ControllerId, bool bSpawnPlayerController);
	static class USaveGame* CreateSaveGameObject(TSubclassOf<class USaveGame> SaveGameClass);
	static class UAudioComponent* CreateSound2D(const class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	static void DeactivateReverbEffect(const class UObject* WorldContextObject, class FName TagName);
	static bool DeleteGameInSlot(const class FString& SlotName, const int32 UserIndex);
	static bool DeprojectScreenToWorld(class APlayerController* Player, const struct FVector2D& ScreenPosition, struct FVector* WorldPosition, struct FVector* WorldDirection, bool bPlayerViewportRelative);
	static bool DoesSaveGameExist(const class FString& SlotName, const int32 UserIndex);
	static void EnableLiveStreaming(bool Enable);
	static bool FindCollisionUV(const struct FHitResult& Hit, int32 UVChannel, struct FVector2D* UV);
	static class AActor* FinishSpawningActor(class AActor* Actor, const struct FTransform& SpawnTransform);
	static void FlushLevelStreaming(const class UObject* WorldContextObject);
	static void GetAccurateRealTime(const class UObject* WorldContextObject, int32* Seconds, float* PartialSeconds);
	static struct FVector GetActorArrayAverageLocation(const TArray<class AActor*>& actors);
	static void GetActorArrayBounds(const TArray<class AActor*>& actors, bool bOnlyCollidingComponents, struct FVector* Center, struct FVector* BoxExtent);
	static class AActor* GetActorOfClass(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass);
	static void GetAllActorsOfClass(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, TArray<class AActor*>* OutActors);
	static void GetAllActorsOfClassWithTag(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, class FName Tag, TArray<class AActor*>* OutActors);
	static void GetAllActorsWithInterface(const class UObject* WorldContextObject, TSubclassOf<class IInterface> Interface, TArray<class AActor*>* OutActors);
	static void GetAllActorsWithTag(const class UObject* WorldContextObject, class FName Tag, TArray<class AActor*>* OutActors);
	static float GetAudioTimeSeconds(const class UObject* WorldContextObject);
	static class FString GetCurrentLevelName(const class UObject* WorldContextObject, bool bRemovePrefixString);
	static class UReverbEffect* GetCurrentReverbEffect(const class UObject* WorldContextObject);
	static bool GetEnableWorldRendering(const class UObject* WorldContextObject);
	static class UGameInstance* GetGameInstance(const class UObject* WorldContextObject);
	static class AGameModeBase* GetGameMode(const class UObject* WorldContextObject);
	static class AGameStateBase* GetGameState(const class UObject* WorldContextObject);
	static float GetGlobalTimeDilation(const class UObject* WorldContextObject);
	static int32 GetIntOption(const class FString& Options, const class FString& Key, int32 DefaultValue);
	static void GetKeyValue(const class FString& Pair, class FString* Key, class FString* Value);
	static int32 GetMaxAudioChannelCount(const class UObject* WorldContextObject);
	static class UClass* GetObjectClass(const class UObject* Object);
	static class FString GetPlatformName();
	static class APlayerCameraManager* GetPlayerCameraManager(const class UObject* WorldContextObject, int32 PlayerIndex);
	static class ACHARACTER* GetPlayerCharacter(const class UObject* WorldContextObject, int32 PlayerIndex);
	static class APlayerController* GetPlayerController(const class UObject* WorldContextObject, int32 PlayerIndex);
	static class APlayerController* GetPlayerControllerFromID(const class UObject* WorldContextObject, int32 ControllerId);
	static int32 GetPlayerControllerID(class APlayerController* Player);
	static class APawn* GetPlayerPawn(const class UObject* WorldContextObject, int32 PlayerIndex);
	static float GetRealTimeSeconds(const class UObject* WorldContextObject);
	static class ULevelStreaming* GetStreamingLevel(const class UObject* WorldContextObject, class FName PackageName);
	static EPhysicalSurface GetSurfaceType(const struct FHitResult& Hit);
	static float GetTimeSeconds(const class UObject* WorldContextObject);
	static float GetUnpausedTimeSeconds(const class UObject* WorldContextObject);
	static EMouseCaptureMode GetViewportMouseCaptureMode(const class UObject* WorldContextObject);
	static void GetViewProjectionMatrix(const struct FMinimalViewInfo& DesiredView, struct FMatrix* ViewMatrix, struct FMatrix* ProjectionMatrix, struct FMatrix* ViewProjectionMatrix);
	static float GetWorldDeltaSeconds(const class UObject* WorldContextObject);
	static struct FIntVector GetWorldOriginLocation(const class UObject* WorldContextObject);
	static int32 GrassOverlappingSphereCount(const class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float radius);
	static bool HasLaunchOption(const class FString& OptionToCheck);
	static bool HasOption(const class FString& Options, const class FString& InKey);
	static bool IsGamePaused(const class UObject* WorldContextObject);
	static bool IsSplitscreenForceDisabled(const class UObject* WorldContextObject);
	static class USaveGame* LoadGameFromSlot(const class FString& SlotName, const int32 UserIndex);
	static void LoadStreamLevel(const class UObject* WorldContextObject, class FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, const struct FLatentActionInfo& LatentInfo);
	static struct FHitResult MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, const struct FVector& Location, const struct FVector& ImpactPoint, const struct FVector& Normal, const struct FVector& ImpactNormal, class UPhysicalMaterial* PhysMat, class AActor* HitActor, class UPrimitiveComponent* HitComponent, class FName HitBoneName, int32 HitItem, int32 FaceIndex, const struct FVector& TraceStart, const struct FVector& TraceEnd);
	static void OpenLevel(const class UObject* WorldContextObject, class FName LevelName, bool bAbsolute, const class FString& Options);
	static class FString ParseOption(const class FString& Options, const class FString& Key);
	static void PlayDialogue2D(const class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
	static void PlayDialogueAtLocation(const class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	static void PlaySound2D(const class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor);
	static void PlaySoundAtLocation(const class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor);
	static void PlayWorldCameraShake(const class UObject* WorldContextObject, TSubclassOf<class UCameraShake> Shake, const struct FVector& Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
	static void PopSoundMixModifier(const class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);
	static void PrimeSound(class USoundBase* InSound);
	static bool ProjectWorldToScreen(class APlayerController* Player, const struct FVector& WorldPosition, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative);
	static void PushSoundMixModifier(const class UObject* WorldContextObject, class USoundMix* InSoundMixModifier);
	static struct FVector RebaseLocalOriginOntoZero(class UObject* WorldContextObject, const struct FVector& WorldLocation);
	static struct FVector RebaseZeroOriginOntoLocal(class UObject* WorldContextObject, const struct FVector& WorldLocation);
	static void RemovePlayer(class APlayerController* Player, bool bDestroyPawn);
	static bool SaveGameToSlot(class USaveGame* SaveGameObject, const class FString& SlotName, const int32 UserIndex);
	static void SetBaseSoundMix(const class UObject* WorldContextObject, class USoundMix* InSoundMix);
	static void SetEnableWorldRendering(const class UObject* WorldContextObject, bool bEnable);
	static void SetForceDisableSplitscreen(const class UObject* WorldContextObject, bool bDisable);
	static bool SetGamePaused(const class UObject* WorldContextObject, bool bPaused);
	static void SetGlobalListenerFocusParameters(const class UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale);
	static void SetGlobalPitchModulation(const class UObject* WorldContextObject, float PitchModulation, float TimeSec);
	static void SetGlobalTimeDilation(const class UObject* WorldContextObject, float TimeDilation);
	static void SetMaxAudioChannelsScaled(const class UObject* WorldContextObject, float MaxChannelCountScale);
	static void SetPlayerControllerID(class APlayerController* Player, int32 ControllerId);
	static void SetSoundMixClassOverride(const class UObject* WorldContextObject, class USoundMix* InSoundMixModifier, class USoundClass* InSoundClass, float Volume, float Pitch, float FadeInTime, bool bApplyToChildren);
	static void SetSubtitlesEnabled(bool bEnabled);
	static void SetViewportMouseCaptureMode(const class UObject* WorldContextObject, const EMouseCaptureMode MouseCaptureMode);
	static void SetWorldOriginLocation(const class UObject* WorldContextObject, const struct FIntVector& NewLocation);
	static class UDecalComponent* SpawnDecalAtLocation(const class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan);
	static class UDecalComponent* SpawnDecalAttached(class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation LocationType, float LifeSpan);
	static class UAudioComponent* SpawnDialogue2D(const class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy);
	static class UAudioComponent* SpawnDialogueAtLocation(const class UObject* WorldContextObject, class UDialogueWave* Dialogue, const struct FDialogueContext& Context, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
	static class UAudioComponent* SpawnDialogueAttached(class UDialogueWave* Dialogue, const struct FDialogueContext& Context, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
	static class UParticleSystemComponent* SpawnEmitterAtLocation(const class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivateSystem);
	static class UParticleSystemComponent* SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, EAttachLocation LocationType, bool bAutoDestroy, EPSCPoolMethod PoolingMethod, bool bAutoActivate);
	static class UForceFeedbackComponent* SpawnForceFeedbackAtLocation(const class UObject* WorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect, const struct FVector& Location, const struct FRotator& Rotation, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
	static class UForceFeedbackComponent* SpawnForceFeedbackAttached(class UForceFeedbackEffect* ForceFeedbackEffect, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, class UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
	static class UObject* SpawnObject(TSubclassOf<class UObject> objectClass, class UObject* Outer_0);
	static class UAudioComponent* SpawnSound2D(const class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	static class UAudioComponent* SpawnSoundAtLocation(const class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	static class UAudioComponent* SpawnSoundAttached(class USoundBase* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	static bool SuggestProjectileVelocity_CustomArc(const class UObject* WorldContextObject, struct FVector* OutLaunchVelocity, const struct FVector& StartPos, const struct FVector& EndPos, float OverrideGravityZ, float ArcParam);
	static void UnloadStreamLevel(const class UObject* WorldContextObject, class FName LevelName, const struct FLatentActionInfo& LatentInfo, bool bShouldBlockOnUnload);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GameplayStatics")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GameplayStatics")
	}
	static class UGameplayStatics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayStatics>();
	}
};

// Class Engine.GameUserSettings
// 0x00F8 (0x0120 - 0x0028)
class UGameUserSettings : public UObject
{
public:
	bool                                          bUseVSync;                                         // 0x0028(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseDynamicResolution;                             // 0x0029(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A[0x56];                                      // 0x002A(0x0056)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        ResolutionSizeX;                                   // 0x0080(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                        ResolutionSizeY;                                   // 0x0084(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                        LastUserConfirmedResolutionSizeX;                  // 0x0088(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                        LastUserConfirmedResolutionSizeY;                  // 0x008C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         WindowPosX;                                        // 0x0090(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         WindowPosY;                                        // 0x0094(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         FullscreenMode;                                    // 0x0098(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         LastConfirmedFullscreenMode;                       // 0x009C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         PreferredFullscreenMode;                           // 0x00A0(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32                                        Version;                                           // 0x00A4(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         AudioQualityLevel;                                 // 0x00A8(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         LastConfirmedAudioQualityLevel;                    // 0x00AC(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         FrameRateLimit;                                    // 0x00B0(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DesiredScreenWidth;                                // 0x00B8(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bUseDesiredScreenHeight;                           // 0x00BC(0x0001)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DesiredScreenHeight;                               // 0x00C0(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         LastUserConfirmedDesiredScreenWidth;               // 0x00C4(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         LastUserConfirmedDesiredScreenHeight;              // 0x00C8(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         LastRecommendedScreenWidth;                        // 0x00CC(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         LastRecommendedScreenHeight;                       // 0x00D0(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         LastCPUBenchmarkResult;                            // 0x00D4(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         LastGPUBenchmarkResult;                            // 0x00D8(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 LastCPUBenchmarkSteps;                             // 0x00E0(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                 LastGPUBenchmarkSteps;                             // 0x00F0(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	float                                         LastGPUBenchmarkMultiplier;                        // 0x0100(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bUseHDRDisplayOutput;                              // 0x0104(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_105[0x3];                                      // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HDRDisplayOutputNits;                              // 0x0108(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnGameUserSettingsUINeedsUpdate;                   // 0x0110(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

public:
	static struct FIntPoint GetDefaultResolution();
	static EWindowMode GetDefaultWindowMode();
	static struct FIntPoint GetDefaultWindowPosition();
	static class UGameUserSettings* GetGameUserSettings();
	static int32 GetSyncInterval();

	void ApplyHardwareBenchmarkResults();
	void ApplyNonResolutionSettings();
	void ApplyResolutionSettings(bool bCheckForCommandLineOverrides);
	void ApplySettings(bool bCheckForCommandLineOverrides);
	void ConfirmVideoMode();
	void EnableHDRDisplayOutput(bool bEnable, int32 DisplayNits);
	float GetDefaultResolutionScale();
	float GetRecommendedResolutionScale();
	void LoadSettings(bool bForceReload);
	void ResetToCurrentSettings();
	void RevertVideoMode();
	void RunHardwareBenchmark(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);
	void SaveSettings();
	void SetAntiAliasingQuality(int32 Value);
	void SetAudioQualityLevel(int32 QualityLevel);
	void SetBenchmarkFallbackValues();
	void SetDynamicResolutionEnabled(bool bEnable);
	void SetFoliageQuality(int32 Value);
	void SetFrameRateLimit(float NewLimit);
	void SetFullscreenMode(EWindowMode InFullscreenMode);
	void SetOverallScalabilityLevel(int32 Value);
	void SetPostProcessingQuality(int32 Value);
	void SetResolutionScaleNormalized(float NewScaleNormalized);
	void SetResolutionScaleValue(int32 NewScaleValue);
	void SetResolutionScaleValueEx(float NewScaleValue);
	void SetScreenResolution(const struct FIntPoint& Resolution);
	void SetShadingQuality(int32 Value);
	void SetShadowQuality(int32 Value);
	void SetTextureQuality(int32 Value);
	void SetToDefaults();
	void SetViewDistanceQuality(int32 Value);
	void SetVisualEffectQuality(int32 Value);
	void SetVSyncEnabled(bool bEnable);
	void ValidateSettings();

	int32 GetAntiAliasingQuality() const;
	int32 GetAudioQualityLevel() const;
	int32 GetCurrentHDRDisplayNits() const;
	struct FIntPoint GetDesktopResolution() const;
	int32 GetFoliageQuality() const;
	float GetFrameRateLimit() const;
	EWindowMode GetFullscreenMode() const;
	EWindowMode GetLastConfirmedFullscreenMode() const;
	struct FIntPoint GetLastConfirmedScreenResolution() const;
	int32 GetOverallScalabilityLevel() const;
	int32 GetPostProcessingQuality() const;
	EWindowMode GetPreferredFullscreenMode() const;
	void GetResolutionScaleInformation(float* CurrentScaleNormalized, int32* CurrentScaleValue, int32* MinScaleValue, int32* MaxScaleValue) const;
	void GetResolutionScaleInformationEx(float* CurrentScaleNormalized, float* CurrentScaleValue, float* MinScaleValue, float* MaxScaleValue) const;
	float GetResolutionScaleNormalized() const;
	struct FIntPoint GetScreenResolution() const;
	int32 GetShadingQuality() const;
	int32 GetShadowQuality() const;
	int32 GetTextureQuality() const;
	int32 GetViewDistanceQuality() const;
	int32 GetVisualEffectQuality() const;
	bool IsDirty() const;
	bool IsDynamicResolutionDirty() const;
	bool IsDynamicResolutionEnabled() const;
	bool IsFullscreenModeDirty() const;
	bool IsHDREnabled() const;
	bool IsScreenResolutionDirty() const;
	bool IsVSyncDirty() const;
	bool IsVSyncEnabled() const;
	bool SupportsHDRDisplayOutput() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GameUserSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GameUserSettings")
	}
	static class UGameUserSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameUserSettings>();
	}
};

// Class Engine.AnimSequenceBase
// 0x0028 (0x00A8 - 0x0080)
class UAnimSequenceBase : public UAnimationAsset
{
public:
	TArray<struct FAnimNotifyEvent>               Notifies;                                          // 0x0080(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                         SequenceLength;                                    // 0x0090(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RateScale;                                         // 0x0094(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawCurveTracks                        RawCurveData;                                      // 0x0098(0x0010)(NativeAccessSpecifierPublic)

public:
	float GetPlayLength();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimSequenceBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimSequenceBase")
	}
	static class UAnimSequenceBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSequenceBase>();
	}
};

// Class Engine.InheritableComponentHandler
// 0x0020 (0x0048 - 0x0028)
class UInheritableComponentHandler : public UObject
{
public:
	TArray<struct FComponentOverrideRecord>       Records;                                           // 0x0028(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UActorComponent*>                UnnecessaryComponents;                             // 0x0038(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InheritableComponentHandler")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InheritableComponentHandler")
	}
	static class UInheritableComponentHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInheritableComponentHandler>();
	}
};

// Class Engine.Texture2DSpriteAtlas
// 0x0008 (0x01A0 - 0x0198)
class UTexture2DSpriteAtlas : public UTexture2D
{
public:
	bool                                          bHDOverridePowerOfTwo;                             // 0x0198(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETexturePowerOfTwoSetting                     PowerOfTwoModeHD;                                  // 0x0199(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIgnoreRescale : 1;                                // 0x019A(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_19B[0x5];                                      // 0x019B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Texture2DSpriteAtlas")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Texture2DSpriteAtlas")
	}
	static class UTexture2DSpriteAtlas* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTexture2DSpriteAtlas>();
	}
};

// Class Engine.LocalPlayer
// 0x0228 (0x0270 - 0x0048)
class ULocalPlayer : public UPlayer
{
public:
	uint8                                         Pad_48[0x28];                                      // 0x0048(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameViewportClient*                    ViewportClient;                                    // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0x1C];                                      // 0x0078(0x001C)(Fixing Size After Last Property [ Dumper-7 ])
	EAspectRatioAxisConstraint                    AspectRatioAxisConstraint;                         // 0x0094(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class APlayerController>          PendingLevelPlayerControllerClass;                 // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bSentSplitJoin : 1;                                // 0x00A0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_A1[0x17];                                      // 0x00A1(0x0017)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ControllerId;                                      // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_BC[0x1B4];                                     // 0x00BC(0x01B4)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LocalPlayer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LocalPlayer")
	}
	static class ULocalPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalPlayer>();
	}
};

// Class Engine.MapBuildDataRegistry
// 0x0210 (0x0238 - 0x0028)
class UMapBuildDataRegistry : public UObject
{
public:
	ELightingBuildQuality                         LevelLightingQuality;                              // 0x0028(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x20F];                                     // 0x0029(0x020F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MapBuildDataRegistry")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MapBuildDataRegistry")
	}
	static class UMapBuildDataRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapBuildDataRegistry>();
	}
};

// Class Engine.TextureCube
// 0x0090 (0x01C0 - 0x0130)
class UTextureCube : public UTexture
{
public:
	uint8                                         Pad_130[0x80];                                     // 0x0130(0x0080)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SaveName;                                          // 0x01B0(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TextureCube")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TextureCube")
	}
	static class UTextureCube* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextureCube>();
	}
};

// Class Engine.PhysicalMaterial
// 0x0058 (0x0080 - 0x0028)
class UPhysicalMaterial : public UObject
{
public:
	float                                         Friction;                                          // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFrictionCombineMode                          FrictionCombineMode;                               // 0x002C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideFrictionCombineMode;                      // 0x002D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Restitution;                                       // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFrictionCombineMode                          RestitutionCombineMode;                            // 0x0034(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideRestitutionCombineMode;                   // 0x0035(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Density;                                           // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RaiseMassToPower;                                  // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DestructibleDamageThresholdScale;                  // 0x0040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterialPropertyBase*          PhysicalMaterialProperty;                          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPhysicalSurface                              SurfaceType;                                       // 0x0050(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TireFrictionScale;                                 // 0x0054(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTireFrictionScalePair>         TireFrictionScales;                                // 0x0058(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                         Pad_68[0x18];                                      // 0x0068(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicalMaterial")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicalMaterial")
	}
	static class UPhysicalMaterial* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicalMaterial>();
	}
};

// Class Engine.PhysicalAnimationComponent
// 0x0040 (0x0138 - 0x00F8)
class UPhysicalAnimationComponent : public UActorComponent
{
public:
	float                                         StrengthMultiplyer;                                // 0x00F8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 SkeletalMeshComponent;                             // 0x0100(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_108[0x30];                                     // 0x0108(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ApplyPhysicalAnimationProfileBelow(class FName BodyName, class FName ProfileName, bool bIncludeSelf, bool bClearNotFound);
	void ApplyPhysicalAnimationSettings(class FName BodyName, const struct FPhysicalAnimationData& PhysicalAnimationData);
	void ApplyPhysicalAnimationSettingsBelow(class FName BodyName, const struct FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf);
	void SetSkeletalMeshComponent(class USkeletalMeshComponent* InSkeletalMeshComponent);
	void SetStrengthMultiplyer(float InStrengthMultiplyer);

	struct FTransform GetBodyTargetTransform(class FName BodyName) const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicalAnimationComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicalAnimationComponent")
	}
	static class UPhysicalAnimationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicalAnimationComponent>();
	}
};

// Class Engine.MaterialExpressionAtmosphericLightVector
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionAtmosphericLightVector : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionAtmosphericLightVector")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionAtmosphericLightVector")
	}
	static class UMaterialExpressionAtmosphericLightVector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionAtmosphericLightVector>();
	}
};

// Class Engine.NavigationObjectBase
// 0x0028 (0x0398 - 0x0370)
class ANavigationObjectBase : public AActor
{
public:
	uint8                                         Pad_370[0x8];                                      // 0x0370(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCapsuleComponent*                      CapsuleComponent;                                  // 0x0378(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBillboardComponent*                    GoodSprite;                                        // 0x0380(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBillboardComponent*                    BadSprite;                                         // 0x0388(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         bIsPIEPlayerStart : 1;                             // 0x0390(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_391[0x7];                                      // 0x0391(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavigationObjectBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavigationObjectBase")
	}
	static class ANavigationObjectBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavigationObjectBase>();
	}
};

// Class Engine.Interface_PostProcessVolume
// 0x0000 (0x0000 - 0x0000)
class IInterface_PostProcessVolume : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Interface_PostProcessVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Interface_PostProcessVolume")
	}
	static class IInterface_PostProcessVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInterface_PostProcessVolume>();
	}
};

// Class Engine.PlayerStart
// 0x0008 (0x03A0 - 0x0398)
class APlayerStart : public ANavigationObjectBase
{
public:
	class FName                                   PlayerStartTag;                                    // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PlayerStart")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PlayerStart")
	}
	static class APlayerStart* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerStart>();
	}
};

// Class Engine.AudioVolume
// 0x0050 (0x03F8 - 0x03A8)
class AAudioVolume : public AVolume
{
public:
	float                                         Priority;                                          // 0x03A8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         bEnabled : 1;                                      // 0x03AC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_3AD[0x3];                                      // 0x03AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FReverbSettings                        Settings;                                          // 0x03B0(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	struct FInteriorSettings                      AmbientZoneSettings;                               // 0x03D0(0x0024)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3F4[0x4];                                      // 0x03F4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_bEnabled();
	void SetEnabled(bool bNewEnabled);
	void SetInteriorSettings(const struct FInteriorSettings& NewInteriorSettings);
	void SetPriority(float NewPriority);
	void SetReverbSettings(const struct FReverbSettings& NewReverbSettings);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AudioVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AudioVolume")
	}
	static class AAudioVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAudioVolume>();
	}
};

// Class Engine.InterpFilter
// 0x0010 (0x0038 - 0x0028)
class UInterpFilter : public UObject
{
public:
	class FString                                 Caption;                                           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpFilter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpFilter")
	}
	static class UInterpFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpFilter>();
	}
};

// Class Engine.InterpFilter_Classes
// 0x0000 (0x0038 - 0x0038)
class UInterpFilter_Classes : public UInterpFilter
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpFilter_Classes")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpFilter_Classes")
	}
	static class UInterpFilter_Classes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpFilter_Classes>();
	}
};

// Class Engine.SpectatorPawn
// 0x0000 (0x03F8 - 0x03F8)
class ASpectatorPawn : public ADefaultPawn
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SpectatorPawn")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SpectatorPawn")
	}
	static class ASpectatorPawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpectatorPawn>();
	}
};

// Class Engine.DecalActor
// 0x0008 (0x0378 - 0x0370)
class ADecalActor : public AActor
{
public:
	class UDecalComponent*                        Decal;                                             // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
	void SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);

	class UMaterialInterface* GetDecalMaterial() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DecalActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DecalActor")
	}
	static class ADecalActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADecalActor>();
	}
};

// Class Engine.SpringArmComponent
// 0x0090 (0x02E0 - 0x0250)
class USpringArmComponent : public USceneComponent
{
public:
	float                                         TargetArmLength;                                   // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                SocketOffset;                                      // 0x0254(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                TargetOffset;                                      // 0x0260(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ProbeSize;                                         // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionChannel                             ProbeChannel;                                      // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_271[0x3];                                      // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bDoCollisionTest : 1;                              // 0x0274(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUsePawnControlRotation : 1;                       // 0x0274(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bInheritPitch : 1;                                 // 0x0274(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bInheritYaw : 1;                                   // 0x0274(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bInheritRoll : 1;                                  // 0x0274(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableCameraLag : 1;                              // 0x0274(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableCameraRotationLag : 1;                      // 0x0274(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseCameraLagSubstepping : 1;                      // 0x0274(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDrawDebugLagMarkers : 1;                          // 0x0275(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_276[0x2];                                      // 0x0276(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CameraLagSpeed;                                    // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CameraRotationLagSpeed;                            // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CameraLagMaxTimeStep;                              // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CameraLagMaxDistance;                              // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_288[0x58];                                     // 0x0288(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FRotator GetTargetRotation() const;
	struct FVector GetUnfixedCameraPosition() const;
	bool IsCollisionFixApplied() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SpringArmComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SpringArmComponent")
	}
	static class USpringArmComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpringArmComponent>();
	}
};

// Class Engine.InterpGroupInstCamera
// 0x0000 (0x0048 - 0x0048)
class UInterpGroupInstCamera : public UInterpGroupInst
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpGroupInstCamera")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpGroupInstCamera")
	}
	static class UInterpGroupInstCamera* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpGroupInstCamera>();
	}
};

// Class Engine.ControlChannel
// 0x0018 (0x0088 - 0x0070)
class UControlChannel : public UChannel
{
public:
	uint8                                         Pad_70[0x18];                                      // 0x0070(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ControlChannel")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ControlChannel")
	}
	static class UControlChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UControlChannel>();
	}
};

// Class Engine.SceneCapture2D
// 0x0008 (0x0388 - 0x0380)
class ASceneCapture2D : public ASceneCapture
{
public:
	class USceneCaptureComponent2D*               CaptureComponent2D;                                // 0x0380(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnInterpToggle(bool bEnable);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SceneCapture2D")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SceneCapture2D")
	}
	static class ASceneCapture2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASceneCapture2D>();
	}
};

// Class Engine.EmitterCameraLensEffectBase
// 0x0070 (0x0430 - 0x03C0)
class AEmitterCameraLensEffectBase : public AEmitter
{
public:
	class UParticleSystem*                        PS_CameraEffect;                                   // 0x03C0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UParticleSystem*                        PS_CameraEffectNonExtremeContent;                  // 0x03C8(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayerCameraManager*                   BaseCamera;                                        // 0x03D0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3D8[0x8];                                      // 0x03D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             RelativeTransform;                                 // 0x03E0(0x0030)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                         BaseFOV;                                           // 0x0410(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAllowMultipleInstances : 1;                       // 0x0414(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bResetWhenRetriggered : 1;                         // 0x0414(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_415[0x3];                                      // 0x0415(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSubclassOf<class AEmitterCameraLensEffectBase>> EmittersToTreatAsSame;                   // 0x0418(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                         DistFromCamera;                                    // 0x0428(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_42C[0x4];                                      // 0x042C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("EmitterCameraLensEffectBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"EmitterCameraLensEffectBase")
	}
	static class AEmitterCameraLensEffectBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEmitterCameraLensEffectBase>();
	}
};

// Class Engine.ParticleModuleMeshRotation_Seeded
// 0x0020 (0x00A0 - 0x0080)
class UParticleModuleMeshRotation_Seeded : public UParticleModuleMeshRotation
{
public:
	struct FParticleRandomSeedInfo                RandomSeedInfo;                                    // 0x0080(0x0020)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleMeshRotation_Seeded")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleMeshRotation_Seeded")
	}
	static class UParticleModuleMeshRotation_Seeded* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleMeshRotation_Seeded>();
	}
};

// Class Engine.BoxComponent
// 0x0020 (0x05C0 - 0x05A0)
#pragma pack(push, 0x1)
class alignas(0x10) UBoxComponent : public UShapeComponent
{
public:
	struct FVector                                BoxExtent;                                         // 0x05A0(0x000C)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         LineThickness;                                     // 0x05AC(0x0004)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bAutoDynamicObstacle;                              // 0x05B0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBuildContour;                                     // 0x05B1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5B2[0x6];                                      // 0x05B2(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ForceNavMeshUpdate();
	void SetBoxExtent(const struct FVector& InBoxExtent, bool bUpdateOverlaps);

	struct FVector GetScaledBoxExtent() const;
	struct FVector GetUnscaledBoxExtent() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BoxComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BoxComponent")
	}
	static class UBoxComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBoxComponent>();
	}
};
#pragma pack(pop)

// Class Engine.SphereComponent
// 0x0010 (0x05B0 - 0x05A0)
#pragma pack(push, 0x1)
class alignas(0x10) USphereComponent : public UShapeComponent
{
public:
	float                                         SphereRadius;                                      // 0x05A0(0x0004)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5A4[0x4];                                      // 0x05A4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);

	float GetScaledSphereRadius() const;
	float GetShapeScale() const;
	float GetUnscaledSphereRadius() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SphereComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SphereComponent")
	}
	static class USphereComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphereComponent>();
	}
};
#pragma pack(pop)

// Class Engine.InterpTrackInstToggle
// 0x0010 (0x0038 - 0x0028)
class UInterpTrackInstToggle : public UInterpTrackInst
{
public:
	ETrackToggleAction                            Action;                                            // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LastUpdatePosition;                                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bSavedActiveState : 1;                             // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstToggle")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstToggle")
	}
	static class UInterpTrackInstToggle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstToggle>();
	}
};

// Class Engine.RigidBodyBase
// 0x0000 (0x0370 - 0x0370)
class ARigidBodyBase : public AActor
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RigidBodyBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RigidBodyBase")
	}
	static class ARigidBodyBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARigidBodyBase>();
	}
};

// Class Engine.DPICustomScalingRule
// 0x0000 (0x0028 - 0x0028)
class UDPICustomScalingRule : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DPICustomScalingRule")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DPICustomScalingRule")
	}
	static class UDPICustomScalingRule* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDPICustomScalingRule>();
	}
};

// Class Engine.LightImportanceVolume
// 0x0138 (0x04E0 - 0x03A8)
class alignas(0x10) ALightImportanceVolume : public AVolume
{
public:
	TSoftObjectPtr<class ULightImportanceAsset>   LightImportanceDataSoftPtr;                        // 0x03A8(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3D0[0xF0];                                     // 0x03D0(0x00F0)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  LightImportanceVolumeGuid;                         // 0x04C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bDrawDebugBox;                                     // 0x04D0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4D1[0xF];                                      // 0x04D1(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LightImportanceVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LightImportanceVolume")
	}
	static class ALightImportanceVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALightImportanceVolume>();
	}
};

// Class Engine.SpotLight
// 0x0008 (0x0388 - 0x0380)
class ASpotLight : public ALight
{
public:
	class USpotLightComponent*                    SpotLightComponent;                                // 0x0380(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetInnerConeAngle(float NewInnerConeAngle);
	void SetOuterConeAngle(float NewOuterConeAngle);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SpotLight")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SpotLight")
	}
	static class ASpotLight* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASpotLight>();
	}
};

// Class Engine.InputComponent
// 0x0088 (0x0180 - 0x00F8)
class UInputComponent : public UActorComponent
{
public:
	uint8                                         Pad_F8[0x70];                                      // 0x00F8(0x0070)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCachedKeyToActionInfo>         CachedKeyToActionInfo;                             // 0x0168(0x0010)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_178[0x8];                                      // 0x0178(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetControllerAnalogKeyState(const struct FKey& Key) const;
	void GetControllerAnalogStickState(EControllerAnalogStick WhichStick, float* StickX, float* Sticky) const;
	float GetControllerKeyTimeDown(const struct FKey& Key) const;
	void GetControllerMouseDelta(float* DeltaX, float* DeltaY) const;
	struct FVector GetControllerVectorKeyState(const struct FKey& Key) const;
	void GetTouchState(int32 FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed) const;
	bool IsControllerKeyDown(const struct FKey& Key) const;
	bool WasControllerKeyJustPressed(const struct FKey& Key) const;
	bool WasControllerKeyJustReleased(const struct FKey& Key) const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InputComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InputComponent")
	}
	static class UInputComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputComponent>();
	}
};

// Class Engine.MaterialFunctionInterface
// 0x0018 (0x0040 - 0x0028)
class UMaterialFunctionInterface : public UObject
{
public:
	struct FGuid                                  StateId;                                           // 0x0028(0x0010)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMaterialFunctionUsage                        MaterialFunctionUsage;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialFunctionInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialFunctionInterface")
	}
	static class UMaterialFunctionInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialFunctionInterface>();
	}
};

// Class Engine.MaterialFunction
// 0x0028 (0x0068 - 0x0040)
class UMaterialFunction : public UMaterialFunctionInterface
{
public:
	class FString                                 Description;                                       // 0x0040(0x0010)(Edit, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialExpression*>            FunctionExpressions;                               // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bExposeToLibrary : 1;                              // 0x0060(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bPrefixParameterNames : 1;                         // 0x0060(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUsedCustomVertexPosition : 1;                     // 0x0060(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bReentrantFlag : 1;                                // 0x0060(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialFunction")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialFunction")
	}
	static class UMaterialFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialFunction>();
	}
};

// Class Engine.MaterialFunctionMaterialLayer
// 0x0000 (0x0068 - 0x0068)
class UMaterialFunctionMaterialLayer : public UMaterialFunction
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialFunctionMaterialLayer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialFunctionMaterialLayer")
	}
	static class UMaterialFunctionMaterialLayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialFunctionMaterialLayer>();
	}
};

// Class Engine.ArrowComponent
// 0x0010 (0x05A0 - 0x0590)
#pragma pack(push, 0x1)
class alignas(0x10) UArrowComponent : public UPrimitiveComponent
{
public:
	struct FColor                                 ArrowColor;                                        // 0x0588(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ArrowSize;                                         // 0x058C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScreenSize;                                        // 0x0590(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsScreenSizeScaled : 1;                           // 0x0594(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTreatAsASprite : 1;                               // 0x0594(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_595[0x3];                                      // 0x0595(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetArrowColor(const struct FLinearColor& NewColor);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ArrowComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ArrowComponent")
	}
	static class UArrowComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArrowComponent>();
	}
};
#pragma pack(pop)

// Class Engine.RuntimeStaticMesh
// 0x00F0 (0x0280 - 0x0190)
class URuntimeStaticMesh : public UStaticMesh
{
public:
	uint8                                         Pad_190[0xF0];                                     // 0x0190(0x00F0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class URuntimeStaticMesh* CreateRuntimeStaticMesh(class UPackage* Package);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RuntimeStaticMesh")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RuntimeStaticMesh")
	}
	static class URuntimeStaticMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<URuntimeStaticMesh>();
	}
};

// Class Engine.SkyLight
// 0x0010 (0x0380 - 0x0370)
class ASkyLight : public AInfo
{
public:
	class USkyLightComponent*                     LightComponent;                                    // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         bEnabled : 1;                                      // 0x0378(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_bEnabled();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SkyLight")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SkyLight")
	}
	static class ASkyLight* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASkyLight>();
	}
};

// Class Engine.LocalMessage
// 0x0000 (0x0028 - 0x0028)
class ULocalMessage : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LocalMessage")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LocalMessage")
	}
	static class ULocalMessage* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalMessage>();
	}
};

// Class Engine.AnimNotifyState_TimedParticleEffect
// 0x0030 (0x0060 - 0x0030)
class UAnimNotifyState_TimedParticleEffect : public UAnimNotifyState
{
public:
	class UParticleSystem*                        PSTemplate;                                        // 0x0030(0x0008)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SocketName;                                        // 0x0038(0x0008)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LocationOffset;                                    // 0x0040(0x000C)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationOffset;                                    // 0x004C(0x000C)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bDestroyAtEnd;                                     // 0x0058(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimNotifyState_TimedParticleEffect")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimNotifyState_TimedParticleEffect")
	}
	static class UAnimNotifyState_TimedParticleEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_TimedParticleEffect>();
	}
};

// Class Engine.MaterialExpressionConstant3Vector
// 0x0010 (0x0050 - 0x0040)
class UMaterialExpressionConstant3Vector : public UMaterialExpression
{
public:
	struct FLinearColor                           Constant;                                          // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionConstant3Vector")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionConstant3Vector")
	}
	static class UMaterialExpressionConstant3Vector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionConstant3Vector>();
	}
};

// Class Engine.DecalComponent
// 0x0050 (0x02A0 - 0x0250)
#pragma pack(push, 0x1)
class alignas(0x10) UDecalComponent : public USceneComponent
{
public:
	class UMaterialInterface*                     DecalMaterial;                                     // 0x0250(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         SortOrder;                                         // 0x0258(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeScreenSize;                                    // 0x025C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeStartDelay;                                    // 0x0260(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeDuration;                                      // 0x0264(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeInDuration;                                    // 0x0268(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeInStartDelay;                                  // 0x026C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDestroyOwnerAfterFade : 1;                        // 0x0270(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseDecalIgnoreChannel : 1;                        // 0x0270(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	struct FLightingChannels                      LightingChannels;                                  // 0x0271(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_272[0x2];                                      // 0x0272(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                DecalSize;                                         // 0x0274(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_280[0x18];                                     // 0x0280(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
	void SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
	void SetFadeIn(float StartDelay, float Duaration);
	void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade);
	void SetFadeScreenSize(float NewFadeScreenSize);
	void SetSortOrder(int32 Value);

	class UMaterialInterface* GetDecalMaterial() const;
	float GetFadeDuration() const;
	float GetFadeInDuration() const;
	float GetFadeInStartDelay() const;
	float GetFadeStartDelay() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DecalComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DecalComponent")
	}
	static class UDecalComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDecalComponent>();
	}
};
#pragma pack(pop)

// Class Engine.PhysicsConstraintComponent
// 0x0200 (0x0450 - 0x0250)
class UPhysicsConstraintComponent : public USceneComponent
{
public:
	class AActor*                                 ConstraintActor1;                                  // 0x0250(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConstrainComponentPropName            ComponentName1;                                    // 0x0258(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                 ConstraintActor2;                                  // 0x0260(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConstrainComponentPropName            ComponentName2;                                    // 0x0268(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_270[0x10];                                     // 0x0270(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicsConstraintTemplate*             ConstraintSetup;                                   // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(int32 ConstraintIndex)> OnConstraintBroken;                        // 0x0288(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FConstraintInstance                    ConstraintInstance;                                // 0x0298(0x01B8)(Edit, NativeAccessSpecifierPublic)

public:
	void BreakConstraint();
	void GetConstraintForce(struct FVector* OutLinearForce, struct FVector* OutAngularForce);
	bool IsBroken();
	void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold);
	void SetAngularDriveMode(EAngularDriveMode DriveMode);
	void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
	void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	void SetAngularOrientationTarget(const struct FRotator& InPosTarget);
	void SetAngularSwing1Limit(EAngularConstraintMotion MotionType, float Swing1LimitAngle);
	void SetAngularSwing2Limit(EAngularConstraintMotion MotionType, float Swing2LimitAngle);
	void SetAngularTwistLimit(EAngularConstraintMotion ConstraintType, float TwistLimitAngle);
	void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	void SetAngularVelocityDriveSLERP(bool bEnableSLERP);
	void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
	void SetAngularVelocityTarget(const struct FVector& InVelTarget);
	void SetConstrainedComponents(class UPrimitiveComponent* Component1, class FName BoneName1, class UPrimitiveComponent* Component2, class FName BoneName2);
	void SetConstraintReferenceFrame(EConstraintFrame Frame, const struct FTransform& RefFrame);
	void SetConstraintReferenceOrientation(EConstraintFrame Frame, const struct FVector& PriAxis, const struct FVector& SecAxis);
	void SetConstraintReferencePosition(EConstraintFrame Frame, const struct FVector& RefPosition);
	void SetDisableCollision(bool bDisableCollision);
	void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold);
	void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
	void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	void SetLinearPositionTarget(const struct FVector& InPosTarget);
	void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	void SetLinearVelocityTarget(const struct FVector& InVelTarget);
	void SetLinearXLimit(ELinearConstraintMotion ConstraintType, float LimitSize);
	void SetLinearYLimit(ELinearConstraintMotion ConstraintType, float LimitSize);
	void SetLinearZLimit(ELinearConstraintMotion ConstraintType, float LimitSize);
	void SetOrientationDriveSLERP(bool bEnableSLERP);
	void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);

	float GetCurrentSwing1() const;
	float GetCurrentSwing2() const;
	float GetCurrentTwist() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsConstraintComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsConstraintComponent")
	}
	static class UPhysicsConstraintComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsConstraintComponent>();
	}
};

// Class Engine.InterpTrackInstFade
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstFade : public UInterpTrackInst
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstFade")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstFade")
	}
	static class UInterpTrackInstFade* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstFade>();
	}
};

// Class Engine.Level
// 0x0388 (0x03B0 - 0x0028)
class alignas(0x10) ULevel : public UObject
{
public:
	uint8                                         Pad_28[0x70];                                      // 0x0028(0x0070)(Fixing Size After Last Property [ Dumper-7 ])
	class TArray<class AActor*>                   Actors;                                            // 0x0098(0x0010)(THIS IS THE ARRAY YOU'RE LOOKING FOR! [NOT AUTO-GENERATED PROPERTY])
	class UWorld*                                 OwningWorld;                                       // 0x00A8(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UModel*                                 Model;                                             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UModelComponent*>                ModelComponents;                                   // 0x00B8(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class ULevelActorContainer*                   ActorCluster;                                      // 0x00C8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumTextureStreamingUnbuiltComponents;              // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumTextureStreamingDirtyResources;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALevelScriptActor*                      LevelScriptActor;                                  // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationObjectBase*                  NavListStart;                                      // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationObjectBase*                  NavListEnd;                                        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNavigationDataChunk*>           NavDataChunks;                                     // 0x00F0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         LightmapTotalSize;                                 // 0x0100(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ShadowmapTotalSize;                                // 0x0104(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        StaticNavigableGeometry;                           // 0x0108(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                          StreamingTextureGuids;                             // 0x0118(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_128[0x98];                                     // 0x0128(0x0098)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  LevelBuildDataId;                                  // 0x01C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMapBuildDataRegistry*                  MapBuildData;                                      // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                             LightBuildLevelOffset;                             // 0x01D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsLightingScenario : 1;                           // 0x01E4(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_1E4_1 : 2;                                  // 0x01E4(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bTextureStreamingRotationChanged : 1;              // 0x01E4(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bStaticComponentsRegisteredInStreamingManager : 1; // 0x01E4(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Transient, DuplicateTransient, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsVisible : 1;                                    // 0x01E4(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1E5[0x5B];                                     // 0x01E5(0x005B)(Fixing Size After Last Property [ Dumper-7 ])
	class AWorldSettings*                         WorldSettings;                                     // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_248[0x8];                                      // 0x0248(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAssetUserData*>                 AssetUserData;                                     // 0x0250(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_260[0x10];                                     // 0x0260(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors;            // 0x0270(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_280[0x130];                                    // 0x0280(0x0130)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Level")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Level")
	}
	static class ULevel* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevel>();
	}
};

// Class Engine.DestructibleStaticMeshActor
// 0x0000 (0x0380 - 0x0380)
class ADestructibleStaticMeshActor : public AStaticMeshActor
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DestructibleStaticMeshActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DestructibleStaticMeshActor")
	}
	static class ADestructibleStaticMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADestructibleStaticMeshActor>();
	}
};

// Class Engine.ParticleModuleLightBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleLightBase : public UParticleModule
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLightBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLightBase")
	}
	static class UParticleModuleLightBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLightBase>();
	}
};

// Class Engine.ParticleModuleLight
// 0x00F0 (0x0120 - 0x0030)
class UParticleModuleLight : public UParticleModuleLightBase
{
public:
	bool                                          bUseInverseSquaredFalloff;                         // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAffectsTranslucency;                              // 0x0031(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPreviewLightRadius;                               // 0x0032(0x0001)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_33[0x1];                                       // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpawnFraction;                                     // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionVector                 ColorScaleOverLife;                                // 0x0038(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  BrightnessOverLife;                                // 0x0080(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  RadiusScale;                                       // 0x00B0(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  LightExponent;                                     // 0x00E0(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FLightingChannels                      LightingChannels;                                  // 0x0110(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         VolumetricScatteringIntensity;                     // 0x0114(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHighQualityLights;                                // 0x0118(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShadowCastingLights;                              // 0x0119(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11A[0x6];                                      // 0x011A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLight")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLight")
	}
	static class UParticleModuleLight* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLight>();
	}
};

// Class Engine.ParticleModuleLight_Seeded
// 0x0020 (0x0140 - 0x0120)
class UParticleModuleLight_Seeded : public UParticleModuleLight
{
public:
	struct FParticleRandomSeedInfo                RandomSeedInfo;                                    // 0x0120(0x0020)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLight_Seeded")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLight_Seeded")
	}
	static class UParticleModuleLight_Seeded* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLight_Seeded>();
	}
};

// Class Engine.KismetNodeHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary
{
public:
	static bool BitIsMarked(int32 Data, int32 Index_0);
	static void ClearAllBits(int32* Data);
	static void ClearBit(int32* Data, int32 Index_0);
	static class FName GetEnumeratorName(const class UEnum* Enum, uint8 EnumeratorValue);
	static class FString GetEnumeratorUserFriendlyName(const class UEnum* Enum, uint8 EnumeratorValue);
	static uint8 GetEnumeratorValueFromIndex(const class UEnum* Enum, uint8 EnumeratorIndex);
	static int32 GetFirstUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits);
	static int32 GetRandomUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits);
	static int32 GetUnmarkedBit(int32 Data, int32 StartIdx, int32 NumBits, bool bRandom);
	static uint8 GetValidValue(const class UEnum* Enum, uint8 EnumeratorValue);
	static bool HasMarkedBit(int32 Data, int32 NumBits);
	static bool HasUnmarkedBit(int32 Data, int32 NumBits);
	static void MarkBit(int32* Data, int32 Index_0);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("KismetNodeHelperLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"KismetNodeHelperLibrary")
	}
	static class UKismetNodeHelperLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetNodeHelperLibrary>();
	}
};

// Class Engine.KillZVolume
// 0x0000 (0x03B8 - 0x03B8)
class AKillZVolume : public APhysicsVolume
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("KillZVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"KillZVolume")
	}
	static class AKillZVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKillZVolume>();
	}
};

// Class Engine.MaterialExpressionArcsine
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionArcsine : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionArcsine")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionArcsine")
	}
	static class UMaterialExpressionArcsine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionArcsine>();
	}
};

// Class Engine.NavAreaBase
// 0x0008 (0x0030 - 0x0028)
class UNavAreaBase : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavAreaBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavAreaBase")
	}
	static class UNavAreaBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavAreaBase>();
	}
};

// Class Engine.SpatializationPluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class USpatializationPluginSourceSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SpatializationPluginSourceSettingsBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SpatializationPluginSourceSettingsBase")
	}
	static class USpatializationPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatializationPluginSourceSettingsBase>();
	}
};

// Class Engine.CameraModifier_CameraShake
// 0x0068 (0x00B0 - 0x0048)
class UCameraModifier_CameraShake : public UCameraModifier
{
public:
	TArray<class UCameraShake*>                   ActiveShakes;                                      // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class UCameraShake>, struct FPooledCameraShakes> ExpiredPooledShakesMap;        // 0x0058(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         SplitScreenShakeScale;                             // 0x00A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CameraModifier_CameraShake")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CameraModifier_CameraShake")
	}
	static class UCameraModifier_CameraShake* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraModifier_CameraShake>();
	}
};

// Class Engine.ParticleModuleAccelerationConstant
// 0x0010 (0x0048 - 0x0038)
class UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase
{
public:
	struct FVector                                Acceleration;                                      // 0x0038(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleAccelerationConstant")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleAccelerationConstant")
	}
	static class UParticleModuleAccelerationConstant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleAccelerationConstant>();
	}
};

// Class Engine.ParticleModuleTrailSource
// 0x0060 (0x0090 - 0x0030)
class UParticleModuleTrailSource : public UParticleModuleTrailBase
{
public:
	ETrail2SourceMethod                           SourceMethod;                                      // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SourceName;                                        // 0x0034(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionFloat                  SourceStrength;                                    // 0x0040(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bLockSourceStength : 1;                            // 0x0070(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SourceOffsetCount;                                 // 0x0074(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        SourceOffsetDefaults;                              // 0x0078(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	EParticleSourceSelectionMethod                SelectionMethod;                                   // 0x0088(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bInheritRotation : 1;                              // 0x008C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleTrailSource")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleTrailSource")
	}
	static class UParticleModuleTrailSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleTrailSource>();
	}
};

// Class Engine.InterpTrackVisibility
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackVisibility : public UInterpTrack
{
public:
	TArray<struct FVisibilityTrackKey>            VisibilityTrack;                                   // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bFireEventsWhenForwards : 1;                       // 0x0080(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFireEventsWhenBackwards : 1;                      // 0x0080(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFireEventsWhenJumpingForwards : 1;                // 0x0080(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackVisibility")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackVisibility")
	}
	static class UInterpTrackVisibility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackVisibility>();
	}
};

// Class Engine.AsyncSkeletalMeshComponent
// 0x0020 (0x0F70 - 0x0F50)
class UAsyncSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	uint8                                         Pad_F48[0x8];                                      // 0x0F48(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        SkeletalMeshPath;                                  // 0x0F50(0x0018)(ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bNeedAsyncLoad;                                    // 0x0F68(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_F69[0x7];                                      // 0x0F69(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AsyncSkeletalMeshComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AsyncSkeletalMeshComponent")
	}
	static class UAsyncSkeletalMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncSkeletalMeshComponent>();
	}
};

// Class Engine.PlayerStartPIE
// 0x0000 (0x03A0 - 0x03A0)
class APlayerStartPIE : public APlayerStart
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PlayerStartPIE")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PlayerStartPIE")
	}
	static class APlayerStartPIE* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerStartPIE>();
	}
};

// Class Engine.SaveGame
// 0x0000 (0x0028 - 0x0028)
class USaveGame : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SaveGame")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SaveGame")
	}
	static class USaveGame* GetDefaultObj()
	{
		return GetDefaultObjImpl<USaveGame>();
	}
};

// Class Engine.PhysicsCollisionHandler
// 0x0018 (0x0040 - 0x0028)
class UPhysicsCollisionHandler : public UObject
{
public:
	float                                         ImpactThreshold;                                   // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ImpactReFireDelay;                                 // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                             DefaultImpactSound;                                // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LastImpactSoundTime;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsCollisionHandler")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsCollisionHandler")
	}
	static class UPhysicsCollisionHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsCollisionHandler>();
	}
};

// Class Engine.MaterialExpressionCustomOutput
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionCustomOutput : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionCustomOutput")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionCustomOutput")
	}
	static class UMaterialExpressionCustomOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionCustomOutput>();
	}
};

// Class Engine.PhysicsSimulationTree
// 0x0510 (0x0538 - 0x0028)
class UPhysicsSimulationTree : public UObject
{
public:
	uint8                                         Pad_28[0x30];                                      // 0x0028(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	class UWorld*                                 OwningWorld;                                       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UPhysicsSimulationMeshComponent>> m_PhysicsSimulationComponents;     // 0x0060(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UShapeComponent>> m_AsyncMovementShape;                              // 0x0070(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UPrimitiveComponent>> m_AsyncConstrainShape;                         // 0x0080(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_90[0x4A8];                                     // 0x0090(0x04A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsSimulationTree")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsSimulationTree")
	}
	static class UPhysicsSimulationTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsSimulationTree>();
	}
};

// Class Engine.EngineCustomTimeStep
// 0x0000 (0x0028 - 0x0028)
class UEngineCustomTimeStep : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("EngineCustomTimeStep")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"EngineCustomTimeStep")
	}
	static class UEngineCustomTimeStep* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEngineCustomTimeStep>();
	}
};

// Class Engine.SoundEffectPreset
// 0x0018 (0x0040 - 0x0028)
class USoundEffectPreset : public UObject
{
public:
	uint8                                         Pad_28[0x18];                                      // 0x0028(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundEffectPreset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundEffectPreset")
	}
	static class USoundEffectPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundEffectPreset>();
	}
};

// Class Engine.SoundEffectSubmixPreset
// 0x0000 (0x0040 - 0x0040)
class USoundEffectSubmixPreset : public USoundEffectPreset
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundEffectSubmixPreset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundEffectSubmixPreset")
	}
	static class USoundEffectSubmixPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundEffectSubmixPreset>();
	}
};

// Class Engine.AsyncActionLoadPrimaryAssetClassList
// 0x0010 (0x0088 - 0x0078)
class UAsyncActionLoadPrimaryAssetClassList : public UAsyncActionLoadPrimaryAssetBase
{
public:
	TMulticastInlineDelegate<void(const TArray<TSubclassOf<class UObject>>& Loaded)> completed;      // 0x0078(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UAsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(class UObject* WorldContextObject, const TArray<struct FPrimaryAssetId>& PrimaryAssetList, const TArray<class FName>& LoadBundles);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AsyncActionLoadPrimaryAssetClassList")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AsyncActionLoadPrimaryAssetClassList")
	}
	static class UAsyncActionLoadPrimaryAssetClassList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncActionLoadPrimaryAssetClassList>();
	}
};

// Class Engine.ParticleModuleAttractorPointGravity
// 0x0048 (0x0078 - 0x0030)
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase
{
public:
	struct FVector                                Position;                                          // 0x0030(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         radius;                                            // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDistributionFloat*                     Strength;                                          // 0x0040(0x0008)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  StrengthRaw;                                       // 0x0048(0x0030)(Edit, NoClear, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleAttractorPointGravity")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleAttractorPointGravity")
	}
	static class UParticleModuleAttractorPointGravity* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleAttractorPointGravity>();
	}
};

// Class Engine.BlendProfile
// 0x0020 (0x0048 - 0x0028)
class UBlendProfile : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeleton*                              OwningSkeleton;                                    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBlendProfileBoneEntry>         ProfileEntries;                                    // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BlendProfile")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BlendProfile")
	}
	static class UBlendProfile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlendProfile>();
	}
};

// Class Engine.SoundWaveProcedural
// 0x0050 (0x03D0 - 0x0380)
class USoundWaveProcedural : public USoundWave
{
public:
	uint8                                         Pad_380[0x50];                                     // 0x0380(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundWaveProcedural")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundWaveProcedural")
	}
	static class USoundWaveProcedural* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundWaveProcedural>();
	}
};

// Class Engine.Model
// 0x0230 (0x0258 - 0x0028)
class UModel : public UObject
{
public:
	uint8                                         Pad_28[0x230];                                     // 0x0028(0x0230)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Model")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Model")
	}
	static class UModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModel>();
	}
};

// Class Engine.PRTMonolithicFarGIData
// 0x00B0 (0x00E0 - 0x0030)
class UPRTMonolithicFarGIData : public UDataAsset
{
public:
	TArray<uint32>                                VxTree_ChildMask_0_32_Natural;                     // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                                VxTree_ChildMask_32_64_Natural;                    // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                                VxTree_ChildBlockOffset_Natural;                   // 0x0050(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FIntVector                             TreeDimensionL0;                                   // 0x0060(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NonBakeNum;                                        // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WholeAABBMin;                                      // 0x0070(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                WholeAABBMax;                                      // 0x007C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                FarBlendAABBMin;                                   // 0x0088(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                FarBlendAABBMax;                                   // 0x0094(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                BasicTexelSize;                                    // 0x00A0(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint16>                                NatPayload_Skyvis;                                 // 0x00B0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint16>                                NatPayload_Bounce;                                 // 0x00C0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint16>                                AtfPayload;                                        // 0x00D0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PRTMonolithicFarGIData")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PRTMonolithicFarGIData")
	}
	static class UPRTMonolithicFarGIData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPRTMonolithicFarGIData>();
	}
};

// Class Engine.AimOffsetBlendSpace
// 0x0000 (0x0150 - 0x0150)
class UAimOffsetBlendSpace : public UBlendSpace
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AimOffsetBlendSpace")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AimOffsetBlendSpace")
	}
	static class UAimOffsetBlendSpace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAimOffsetBlendSpace>();
	}
};

// Class Engine.BlendSpace1D
// 0x0008 (0x0150 - 0x0148)
class UBlendSpace1D : public UBlendSpaceBase
{
public:
	bool                                          bScaleAnimation;                                   // 0x0148(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BlendSpace1D")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BlendSpace1D")
	}
	static class UBlendSpace1D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlendSpace1D>();
	}
};

// Class Engine.AimOffsetBlendSpace1D
// 0x0000 (0x0150 - 0x0150)
class UAimOffsetBlendSpace1D : public UBlendSpace1D
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AimOffsetBlendSpace1D")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AimOffsetBlendSpace1D")
	}
	static class UAimOffsetBlendSpace1D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAimOffsetBlendSpace1D>();
	}
};

// Class Engine.AISystemBase
// 0x0030 (0x0058 - 0x0028)
class UAISystemBase : public UObject
{
public:
	struct FSoftClassPath                         AISystemClassName;                                 // 0x0028(0x0018)(ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   AISystemModuleName;                                // 0x0040(0x0008)(ZeroConstructor, Config, GlobalConfig, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bInstantiateAISystemOnClient;                      // 0x0050(0x0001)(ZeroConstructor, Config, GlobalConfig, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AISystemBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AISystemBase")
	}
	static class UAISystemBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISystemBase>();
	}
};

// Class Engine.AmbientSound
// 0x0008 (0x0378 - 0x0370)
class AAmbientSound : public AActor
{
public:
	class UAudioComponent*                        AudioComponent;                                    // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel);
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void Play(float StartTime);
	void Stop();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AmbientSound")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AmbientSound")
	}
	static class AAmbientSound* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAmbientSound>();
	}
};

// Class Engine.TwitterIntegrationBase
// 0x0000 (0x0038 - 0x0038)
class UTwitterIntegrationBase : public UPlatformInterfaceBase
{
public:
	bool AuthorizeAccounts();
	bool CanShowTweetUI();
	class FString GetAccountName(int32 AccountIndex);
	int32 GetNumAccounts();
	void Init();
	bool ShowTweetUI(const class FString& InitialMessage, const class FString& URL, const class FString& Picture);
	bool TwitterRequest(const class FString& URL, const TArray<class FString>& ParamKeysAndValues, ETwitterRequestMethod RequestMethod, int32 AccountIndex);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TwitterIntegrationBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TwitterIntegrationBase")
	}
	static class UTwitterIntegrationBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTwitterIntegrationBase>();
	}
};

// Class Engine.AnimationSettings
// 0x0038 (0x0070 - 0x0038)
class UAnimationSettings : public UDeveloperSettings
{
public:
	int32                                         CompressCommandletVersion;                         // 0x0038(0x0004)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         KeyEndEffectorsMatchNameArray;                     // 0x0040(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimCompress>              DefaultCompressionAlgorithm;                       // 0x0050(0x0008)(Edit, ZeroConstructor, Config, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimationCompressionFormat                   RotationCompressionFormat;                         // 0x0058(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimationCompressionFormat                   TranslationCompressionFormat;                      // 0x0059(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5A[0x2];                                       // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxCurveError;                                     // 0x005C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AlternativeCompressionThreshold;                   // 0x0060(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ForceRecompression;                                // 0x0064(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnlyCheckForMissingSkeletalMeshes;                // 0x0065(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceBelowThreshold;                              // 0x0066(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFirstRecompressUsingCurrentOrDefault;             // 0x0067(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRaiseMaxErrorToExisting;                          // 0x0068(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTryExhaustiveSearch;                              // 0x0069(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableSegmenting;                                 // 0x006A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnablePerformanceLog;                             // 0x006B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStripAnimationDataOnDedicatedServer;              // 0x006C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTickAnimationOnSkeletalMeshInit;                  // 0x006D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6E[0x2];                                       // 0x006E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimationSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimationSettings")
	}
	static class UAnimationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationSettings>();
	}
};

// Class Engine.AnimBlueprint
// 0x0028 (0x00C8 - 0x00A0)
class UAnimBlueprint : public UBlueprint
{
public:
	uint8                                         Pad_A0[0x8];                                       // 0x00A0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeleton*                              TargetSkeleton;                                    // 0x00A8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimGroupInfo>                 Groups;                                            // 0x00B0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bUseMultiThreadedAnimationUpdate;                  // 0x00C0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWarnAboutBlueprintUsage;                          // 0x00C1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimBlueprint")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimBlueprint")
	}
	static class UAnimBlueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimBlueprint>();
	}
};

// Class Engine.AnimClassInterface
// 0x0000 (0x0000 - 0x0000)
class IAnimClassInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimClassInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimClassInterface")
	}
	static class IAnimClassInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAnimClassInterface>();
	}
};

// Class Engine.AnimCompositeBase
// 0x0000 (0x00A8 - 0x00A8)
class UAnimCompositeBase : public UAnimSequenceBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimCompositeBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimCompositeBase")
	}
	static class UAnimCompositeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCompositeBase>();
	}
};

// Class Engine.AnimComposite
// 0x0010 (0x00B8 - 0x00A8)
class UAnimComposite : public UAnimCompositeBase
{
public:
	struct FAnimTrack                             AnimationTrack;                                    // 0x00A8(0x0010)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimComposite")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimComposite")
	}
	static class UAnimComposite* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimComposite>();
	}
};

// Class Engine.SoundNodeModulatorContinuous
// 0x0040 (0x0080 - 0x0040)
class USoundNodeModulatorContinuous : public USoundNode
{
public:
	struct FModulatorContinuousParams             PitchModulationParams;                             // 0x0040(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FModulatorContinuousParams             VolumeModulationParams;                            // 0x0060(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeModulatorContinuous")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeModulatorContinuous")
	}
	static class USoundNodeModulatorContinuous* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeModulatorContinuous>();
	}
};

// Class Engine.AnimCompress_BitwiseCompressOnly
// 0x0000 (0x0040 - 0x0040)
class UAnimCompress_BitwiseCompressOnly : public UAnimCompress
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimCompress_BitwiseCompressOnly")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimCompress_BitwiseCompressOnly")
	}
	static class UAnimCompress_BitwiseCompressOnly* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCompress_BitwiseCompressOnly>();
	}
};

// Class Engine.AnimCompress_LeastDestructive
// 0x0000 (0x0040 - 0x0040)
class UAnimCompress_LeastDestructive : public UAnimCompress_BitwiseCompressOnly
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimCompress_LeastDestructive")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimCompress_LeastDestructive")
	}
	static class UAnimCompress_LeastDestructive* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCompress_LeastDestructive>();
	}
};

// Class Engine.ParticleModuleVectorFieldBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleVectorFieldBase : public UParticleModule
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleVectorFieldBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleVectorFieldBase")
	}
	static class UParticleModuleVectorFieldBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleVectorFieldBase>();
	}
};

// Class Engine.ParticleModuleVectorFieldGlobal
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase
{
public:
	uint8                                         bOverrideGlobalVectorFieldTightness : 1;           // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GlobalVectorFieldScale;                            // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GlobalVectorFieldTightness;                        // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleVectorFieldGlobal")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleVectorFieldGlobal")
	}
	static class UParticleModuleVectorFieldGlobal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleVectorFieldGlobal>();
	}
};

// Class Engine.AnimCompress_RemoveLinearKeys
// 0x0020 (0x0060 - 0x0040)
class UAnimCompress_RemoveLinearKeys : public UAnimCompress
{
public:
	float                                         MaxPosDiff;                                        // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxAngleDiff;                                      // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxScaleDiff;                                      // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxEffectorDiff;                                   // 0x004C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinEffectorDiff;                                   // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EffectorDiffSocket;                                // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ParentKeyScale;                                    // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bRetarget : 1;                                     // 0x005C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bActuallyFilterLinearKeys : 1;                     // 0x005C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOptimizeForForwardPlayback : 1;                   // 0x005C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseDecompression : 1;                             // 0x005C(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseMultithreading : 1;                            // 0x005C(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimCompress_RemoveLinearKeys")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimCompress_RemoveLinearKeys")
	}
	static class UAnimCompress_RemoveLinearKeys* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCompress_RemoveLinearKeys>();
	}
};

// Class Engine.ParticleModuleTypeDataAnimTrail
// 0x0018 (0x0048 - 0x0030)
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
public:
	uint8                                         bDeadTrailsOnDeactivate : 1;                       // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnablePreviousTangentRecalculation : 1;           // 0x0030(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTangentRecalculationEveryFrame : 1;               // 0x0030(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TilingDistance;                                    // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceTessellationStepSize;                      // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TangentTessellationStepSize;                       // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WidthTessellationStepSize;                         // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleTypeDataAnimTrail")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleTypeDataAnimTrail")
	}
	static class UParticleModuleTypeDataAnimTrail* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleTypeDataAnimTrail>();
	}
};

// Class Engine.AnimCompress_PerTrackCompression
// 0x0078 (0x00D8 - 0x0060)
class UAnimCompress_PerTrackCompression : public UAnimCompress_RemoveLinearKeys
{
public:
	float                                         MaxZeroingThreshold;                               // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxPosDiffBitwise;                                 // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxAngleDiffBitwise;                               // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxScaleDiffBitwise;                               // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<EAnimationCompressionFormat>           AllowedRotationFormats;                            // 0x0070(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<EAnimationCompressionFormat>           AllowedTranslationFormats;                         // 0x0080(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<EAnimationCompressionFormat>           AllowedScaleFormats;                               // 0x0090(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bResampleAnimation : 1;                            // 0x00A0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ResampledFramerate;                                // 0x00A4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinKeysForResampling;                              // 0x00A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseAdaptiveError : 1;                             // 0x00AC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseOverrideForEndEffectors : 1;                   // 0x00AC(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TrackHeightBias;                                   // 0x00B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ParentingDivisor;                                  // 0x00B4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ParentingDivisorExponent;                          // 0x00B8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseAdaptiveError2 : 1;                            // 0x00BC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RotationErrorSourceRatio;                          // 0x00C0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TranslationErrorSourceRatio;                       // 0x00C4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ScaleErrorSourceRatio;                             // 0x00C8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxErrorPerTrackRatio;                             // 0x00CC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PerturbationProbeSize;                             // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimCompress_PerTrackCompression")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimCompress_PerTrackCompression")
	}
	static class UAnimCompress_PerTrackCompression* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCompress_PerTrackCompression>();
	}
};

// Class Engine.AnimCompress_RemoveTrivialKeys
// 0x0010 (0x0050 - 0x0040)
class UAnimCompress_RemoveTrivialKeys : public UAnimCompress
{
public:
	float                                         MaxPosDiff;                                        // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxAngleDiff;                                      // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxScaleDiff;                                      // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimCompress_RemoveTrivialKeys")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimCompress_RemoveTrivialKeys")
	}
	static class UAnimCompress_RemoveTrivialKeys* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCompress_RemoveTrivialKeys>();
	}
};

// Class Engine.AnimCurveCompressionCodec_CompressedRichCurve
// 0x0000 (0x0028 - 0x0028)
class UAnimCurveCompressionCodec_CompressedRichCurve : public UAnimCurveCompressionCodec
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimCurveCompressionCodec_CompressedRichCurve")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimCurveCompressionCodec_CompressedRichCurve")
	}
	static class UAnimCurveCompressionCodec_CompressedRichCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCurveCompressionCodec_CompressedRichCurve>();
	}
};

// Class Engine.AnimCurveCompressionCodec_UniformIndexable
// 0x0000 (0x0028 - 0x0028)
class UAnimCurveCompressionCodec_UniformIndexable : public UAnimCurveCompressionCodec
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimCurveCompressionCodec_UniformIndexable")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimCurveCompressionCodec_UniformIndexable")
	}
	static class UAnimCurveCompressionCodec_UniformIndexable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCurveCompressionCodec_UniformIndexable>();
	}
};

// Class Engine.SoundNodeWavePlayer
// 0x0038 (0x0078 - 0x0040)
class USoundNodeWavePlayer : public USoundNodeAssetReferencer
{
public:
	TSoftObjectPtr<class USoundWave>              SoundWaveAssetPtr;                                 // 0x0040(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundWave*                             SoundWave;                                         // 0x0068(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         BitPad_70_0 : 1;                                   // 0x0070(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bLooping : 1;                                      // 0x0070(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeWavePlayer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeWavePlayer")
	}
	static class USoundNodeWavePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeWavePlayer>();
	}
};

// Class Engine.AnimCurveCompressionCodec_UniformlySampled
// 0x0000 (0x0028 - 0x0028)
class UAnimCurveCompressionCodec_UniformlySampled : public UAnimCurveCompressionCodec
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimCurveCompressionCodec_UniformlySampled")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimCurveCompressionCodec_UniformlySampled")
	}
	static class UAnimCurveCompressionCodec_UniformlySampled* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCurveCompressionCodec_UniformlySampled>();
	}
};

// Class Engine.AnimCurveCompressionSettings
// 0x0008 (0x0030 - 0x0028)
class UAnimCurveCompressionSettings : public UObject
{
public:
	class UAnimCurveCompressionCodec*             Codec;                                             // 0x0028(0x0008)(Edit, ExportObject, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimCurveCompressionSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimCurveCompressionSettings")
	}
	static class UAnimCurveCompressionSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimCurveCompressionSettings>();
	}
};

// Class Engine.ParticleModuleVelocity
// 0x0078 (0x00B0 - 0x0038)
class UParticleModuleVelocity : public UParticleModuleVelocityBase
{
public:
	struct FRawDistributionVector                 StartVelocity;                                     // 0x0038(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  StartVelocityRadial;                               // 0x0080(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleVelocity")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleVelocity")
	}
	static class UParticleModuleVelocity* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleVelocity>();
	}
};

// Class Engine.ParticleModuleVelocity_Seeded
// 0x0020 (0x00D0 - 0x00B0)
class UParticleModuleVelocity_Seeded : public UParticleModuleVelocity
{
public:
	struct FParticleRandomSeedInfo                RandomSeedInfo;                                    // 0x00B0(0x0020)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleVelocity_Seeded")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleVelocity_Seeded")
	}
	static class UParticleModuleVelocity_Seeded* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleVelocity_Seeded>();
	}
};

// Class Engine.AnimLayerInterface
// 0x0000 (0x0000 - 0x0000)
class IAnimLayerInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimLayerInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimLayerInterface")
	}
	static class IAnimLayerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAnimLayerInterface>();
	}
};

// Class Engine.ParticleModuleVectorFieldLocal
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase
{
public:
	class UVectorField*                           VectorField;                                       // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RelativeTranslation;                               // 0x0038(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RelativeRotation;                                  // 0x0044(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                RelativeScale3D;                                   // 0x0050(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Intensity;                                         // 0x005C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Tightness;                                         // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIgnoreComponentTransform : 1;                     // 0x0064(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileX : 1;                                        // 0x0064(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileY : 1;                                        // 0x0064(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTileZ : 1;                                        // 0x0064(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseFixDT : 1;                                     // 0x0064(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleVectorFieldLocal")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleVectorFieldLocal")
	}
	static class UParticleModuleVectorFieldLocal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleVectorFieldLocal>();
	}
};

// Class Engine.AnimMontage
// 0x0128 (0x01D0 - 0x00A8)
class UAnimMontage : public UAnimCompositeBase
{
public:
	struct FAlphaBlend                            blendIn;                                           // 0x00A8(0x0030)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         BlendInTime;                                       // 0x00D8(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAlphaBlend                            blendOut;                                          // 0x00E0(0x0030)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                         BlendOutTime;                                      // 0x0110(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendOutTriggerTime;                               // 0x0114(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SyncGroup;                                         // 0x0118(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SyncSlotIndex;                                     // 0x0120(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarkerSyncData                        MarkerData;                                        // 0x0128(0x0020)(NativeAccessSpecifierPublic)
	TArray<struct FCompositeSection>              CompositeSections;                                 // 0x0148(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSlotAnimationTrack>            SlotAnimTracks;                                    // 0x0158(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBranchingPoint>                BranchingPoints;                                   // 0x0168(0x0010)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	bool                                          bEnableRootMotionTranslation;                      // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableRootMotionRotation;                         // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableAutoBlendOut;                               // 0x017A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERootMotionRootLock                           RootMotionRootLock;                                // 0x017B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17C[0x4];                                      // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBranchingPointMarker>          BranchingPointMarkers;                             // 0x0180(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<int32>                                 BranchingPointStateNotifyIndices;                  // 0x0190(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimeStretchCurve                      TimeStretchCurve;                                  // 0x01A0(0x0028)(Edit, NativeAccessSpecifierPublic)
	class FName                                   TimeStretchCurveName;                              // 0x01C8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	float GetDefaultBlendOutTime() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimMontage")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimMontage")
	}
	static class UAnimMontage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimMontage>();
	}
};

// Class Engine.AnimNotify_PauseClothingSimulation
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_PauseClothingSimulation : public UAnimNotify
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimNotify_PauseClothingSimulation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimNotify_PauseClothingSimulation")
	}
	static class UAnimNotify_PauseClothingSimulation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PauseClothingSimulation>();
	}
};

// Class Engine.AnimNotify_PlaySound
// 0x0020 (0x0058 - 0x0038)
class UAnimNotify_PlaySound : public UAnimNotify
{
public:
	class USoundBase*                             Sound;                                             // 0x0038(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumeMultiplier;                                  // 0x0040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PitchMultiplier;                                   // 0x0044(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bFollow : 1;                                       // 0x0048(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   AttachName;                                        // 0x004C(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimNotify_PlaySound")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimNotify_PlaySound")
	}
	static class UAnimNotify_PlaySound* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_PlaySound>();
	}
};

// Class Engine.HierarchicalLODSetup
// 0x0038 (0x0060 - 0x0028)
class UHierarchicalLODSetup : public UObject
{
public:
	TArray<struct FHierarchicalSimplification>    HierarchicalLODSetup;                              // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>      OverrideBaseMaterial;                              // 0x0038(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("HierarchicalLODSetup")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"HierarchicalLODSetup")
	}
	static class UHierarchicalLODSetup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHierarchicalLODSetup>();
	}
};

// Class Engine.AnimNotify_ResetClothingSimulation
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_ResetClothingSimulation : public UAnimNotify
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimNotify_ResetClothingSimulation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimNotify_ResetClothingSimulation")
	}
	static class UAnimNotify_ResetClothingSimulation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_ResetClothingSimulation>();
	}
};

// Class Engine.AnimNotify_ResetDynamics
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_ResetDynamics : public UAnimNotify
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimNotify_ResetDynamics")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimNotify_ResetDynamics")
	}
	static class UAnimNotify_ResetDynamics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_ResetDynamics>();
	}
};

// Class Engine.AnimNotify_ResumeClothingSimulation
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_ResumeClothingSimulation : public UAnimNotify
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimNotify_ResumeClothingSimulation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimNotify_ResumeClothingSimulation")
	}
	static class UAnimNotify_ResumeClothingSimulation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_ResumeClothingSimulation>();
	}
};

// Class Engine.FXSystemAsset
// 0x0008 (0x0030 - 0x0028)
class UFXSystemAsset : public UObject
{
public:
	uint32                                        MaxPoolSize;                                       // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("FXSystemAsset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"FXSystemAsset")
	}
	static class UFXSystemAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFXSystemAsset>();
	}
};

// Class Engine.ParticleSystem
// 0x0118 (0x0148 - 0x0030)
class UParticleSystem : public UFXSystemAsset
{
public:
	float                                         UpdateTime_FPS;                                    // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UpdateTime_Delta;                                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WarmupTime;                                        // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WarmupTickRate;                                    // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleEmitter*>               Emitters;                                          // 0x0040(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*               PreviewComponent;                                  // 0x0050(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterpCurveEdSetup*                    CurveEdSetup;                                      // 0x0058(0x0008)(ExportObject, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LODDistanceCheckTime;                              // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MacroUVRadius;                                     // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                 LODDistances;                                      // 0x0068(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         CullingDistance;                                   // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CullingScreenSize;                                 // 0x007C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FParticleSystemLOD>             LODSettings;                                       // 0x0080(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBox                                   FixedRelativeBoundingBox;                          // 0x0090(0x001C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBox                                   RenderOrderBoundingBox;                            // 0x00AC(0x001C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         SecondsBeforeInactive;                             // 0x00C8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Delay;                                             // 0x00CC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DelayLow;                                          // 0x00D0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bOrientZAxisTowardCamera : 1;                      // 0x00D4(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseFixedRelativeBoundingBox : 1;                  // 0x00D4(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseRenderingOrderBoundingBox : 1;                 // 0x00D4(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bShouldResetPeakCounts : 1;                        // 0x00D4(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHasPhysics : 1;                                   // 0x00D4(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseRealtimeThumbnail : 1;                         // 0x00D4(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         ThumbnailImageOutOfDate : 1;                       // 0x00D4(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_D4_7 : 1;                                   // 0x00D4(0x0001)(Fixing Bit-Field Size For New Byte [ Dumper-7 ])
	uint8                                         BitPad_D5_0 : 1;                                   // 0x00D5(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bUseDelayRange : 1;                                // 0x00D5(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAllowManagedTicking : 1;                          // 0x00D5(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAutoDeactivate : 1;                               // 0x00D5(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRegenerateLODDuplicate : 1;                       // 0x00D5(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	EParticleSystemUpdateMode                     SystemUpdateMode;                                  // 0x00D6(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D7[0x1];                                       // 0x00D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           AssetsTags;                                        // 0x00D8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	EParticleSystemLODMethod                      LODMethod;                                         // 0x00E8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EParticleSystemInsignificanceReaction         InsignificantReaction;                             // 0x00E9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EParticleSystemOcclusionBoundsMethod          OcclusionBoundsMethod;                             // 0x00EA(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_EB[0x1];                                       // 0x00EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	EParticleSignificanceLevel                    MaxSignificanceLevel;                              // 0x00EC(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        MinTimeBetweenTicks;                               // 0x00F0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InsignificanceDelay;                               // 0x00F4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                MacroUVPosition;                                   // 0x00F8(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                   CustomOcclusionBounds;                             // 0x0104(0x001C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FLODSoloTrack>                  SoloTracking;                                      // 0x0120(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FNamedEmitterMaterial>          NamedMaterialSlots;                                // 0x0130(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_140[0x2];                                      // 0x0140(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         BitPad_142_0 : 1;                                  // 0x0142(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bIsImmortal : 1;                                   // 0x0142(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bWillBecomeZombie : 1;                             // 0x0142(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_143[0x5];                                      // 0x0143(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool ContainsEmitterType(class UClass* TypeData);

	bool IsImmortal() const;
	bool IsLooping() const;
	bool WillBecomeZombie() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleSystem")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleSystem")
	}
	static class UParticleSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleSystem>();
	}
};

// Class Engine.AnimNotifyState_Trail
// 0x0028 (0x0058 - 0x0030)
class UAnimNotifyState_Trail : public UAnimNotifyState
{
public:
	class UParticleSystem*                        PSTemplate;                                        // 0x0030(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   FirstSocketName;                                   // 0x0038(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SecondSocketName;                                  // 0x0040(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETrailWidthMode                               WidthScaleMode;                                    // 0x0048(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   WidthScaleCurve;                                   // 0x004C(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bRecycleSpawnedSystems : 1;                        // 0x0054(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UParticleSystem* OverridePSTemplate(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimNotifyState_Trail")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimNotifyState_Trail")
	}
	static class UAnimNotifyState_Trail* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_Trail>();
	}
};

// Class Engine.AnimSequence
// 0x0100 (0x01A8 - 0x00A8)
class UAnimSequence : public UAnimSequenceBase
{
public:
	int32                                         NumFrames;                                         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTrackToSkeletonMap>            TrackToSkeletonMapTable;                           // 0x00B0(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_C0[0x10];                                      // 0x00C0(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimBoneCompressionSettings*           BoneCompressionSettings;                           // 0x00D0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimCurveCompressionSettings*          CurveCompressionSettings;                          // 0x00D8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E0[0x78];                                      // 0x00E0(0x0078)(Fixing Size After Last Property [ Dumper-7 ])
	EAdditiveAnimationType                        AdditiveAnimType;                                  // 0x0158(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAdditiveBasePoseType                         RefPoseType;                                       // 0x0159(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15A[0x6];                                      // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          RefPoseSeq;                                        // 0x0160(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RefFrameIndex;                                     // 0x0168(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   RetargetSource;                                    // 0x016C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimInterpolationType                        Interpolation;                                     // 0x0174(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableRootMotion;                                 // 0x0175(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERootMotionRootLock                           RootMotionRootLock;                                // 0x0176(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceRootLock;                                    // 0x0177(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseNormalizedRootMotionScale;                     // 0x0178(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRootMotionSettingsCopiedFromMontage;              // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17A[0x6];                                      // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAnimSyncMarker>                AuthoredSyncMarkers;                               // 0x0180(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_190[0x18];                                     // 0x0190(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimSequence")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimSequence")
	}
	static class UAnimSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSequence>();
	}
};

// Class Engine.AnimSet
// 0x00C8 (0x00F0 - 0x0028)
class UAnimSet : public UObject
{
public:
	uint8                                         bAnimRotationOnly : 1;                             // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           TrackBoneNames;                                    // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimSetMeshLinkup>             LinkupCache;                                       // 0x0040(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<uint8>                                 BoneUseAnimTranslation;                            // 0x0050(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<uint8>                                 ForceUseMeshTranslation;                           // 0x0060(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class FName>                           UseTranslationBoneNames;                           // 0x0070(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FName>                           ForceMeshTranslationBoneNames;                     // 0x0080(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class FName                                   PreviewSkelMeshName;                               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BestRatioSkelMeshName;                             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A0[0x50];                                      // 0x00A0(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimSet")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimSet")
	}
	static class UAnimSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSet>();
	}
};

// Class Engine.AnimSingleNodeInstance
// 0x0020 (0x0290 - 0x0270)
class UAnimSingleNodeInstance : public UAnimInstance
{
public:
	class UAnimationAsset*                        CurrentAsset;                                      // 0x0270(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             PostEvaluateAnimEvent;                             // 0x0278(0x0010)(ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_288[0x8];                                      // 0x0288(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetLength();
	void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
	void SetAnimationAsset(class UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);
	void SetBlendSpaceInput(const struct FVector& InBlendInput);
	void SetLooping(bool bIsLooping);
	void SetPlaying(bool bIsPlaying);
	void SetPlayRate(float InPlayRate);
	void SetPosition(float InPosition, bool bFireNotifies);
	void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies);
	void SetPreviewCurveOverride(const class FName& PoseName, float Value, bool bRemoveIfZero);
	void SetReverse(bool bInReverse);
	void StopAnim();

	class UAnimationAsset* GetAnimationAsset() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimSingleNodeInstance")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimSingleNodeInstance")
	}
	static class UAnimSingleNodeInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSingleNodeInstance>();
	}
};

// Class Engine.AnimStateMachineTypes
// 0x0000 (0x0028 - 0x0028)
class UAnimStateMachineTypes : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimStateMachineTypes")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimStateMachineTypes")
	}
	static class UAnimStateMachineTypes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimStateMachineTypes>();
	}
};

// Class Engine.AnimStreamable
// 0x0038 (0x00E0 - 0x00A8)
class UAnimStreamable : public UAnimSequenceBase
{
public:
	int32                                         NumFrames;                                         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAnimInterpolationType                        Interpolation;                                     // 0x00AC(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   RetargetSource;                                    // 0x00B0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B8[0x10];                                      // 0x00B8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimBoneCompressionSettings*           BoneCompressionSettings;                           // 0x00C8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimCurveCompressionSettings*          CurveCompressionSettings;                          // 0x00D0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableRootMotion;                                 // 0x00D8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERootMotionRootLock                           RootMotionRootLock;                                // 0x00D9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceRootLock;                                    // 0x00DA(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseNormalizedRootMotionScale;                     // 0x00DB(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AnimStreamable")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AnimStreamable")
	}
	static class UAnimStreamable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimStreamable>();
	}
};

// Class Engine.ApplicationLifecycleComponent
// 0x0090 (0x0188 - 0x00F8)
class UApplicationLifecycleComponent : public UActorComponent
{
public:
	TMulticastInlineDelegate<void()>              ApplicationWillDeactivateDelegate;                 // 0x00F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              ApplicationHasReactivatedDelegate;                 // 0x0108(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              ApplicationWillEnterBackgroundDelegate;            // 0x0118(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              ApplicationHasEnteredForegroundDelegate;           // 0x0128(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              ApplicationWillTerminateDelegate;                  // 0x0138(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              ApplicationShouldUnloadResourcesDelegate;          // 0x0148(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const TArray<class FString>& StartupArguments)> ApplicationReceivedStartupArgumentsDelegate; // 0x0158(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(ETemperatureSeverityType Severity)> OnTemperatureChangeDelegate;   // 0x0168(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(bool bInLowPowerMode)> OnLowPowerModeDelegate;                     // 0x0178(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ApplicationLifecycleComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ApplicationLifecycleComponent")
	}
	static class UApplicationLifecycleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UApplicationLifecycleComponent>();
	}
};

// Class Engine.BodySetup
// 0x0228 (0x0250 - 0x0028)
class UBodySetup : public UObject
{
public:
	struct FKAggregateGeom                        AggGeom;                                           // 0x0028(0x0058)(Edit, NativeAccessSpecifierPublic)
	class FName                                   BoneName;                                          // 0x0080(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPhysicsType                                  PhysicsType;                                       // 0x0088(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAlwaysFullAnimWeight : 1;                         // 0x0089(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bConsiderForBounds : 1;                            // 0x0089(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bMeshCollideAll : 1;                               // 0x0089(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDoubleSidedGeometry : 1;                          // 0x0089(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bGenerateNonMirroredCollision : 1;                 // 0x0089(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSharedCookedData : 1;                             // 0x0089(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bGenerateMirroredCollision : 1;                    // 0x0089(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_8A[0x1];                                       // 0x008A(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         BindedTraceMaskFilter;                             // 0x008B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBodyCollisionResponse                        CollisionReponse;                                  // 0x008C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionTraceFlag                           CollisionTraceFlag;                                // 0x008D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8E[0x2];                                       // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      PhysMaterial;                                      // 0x0090(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWalkableSlopeOverride                 WalkableSlopeOverride;                             // 0x0098(0x0010)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_A8[0x68];                                      // 0x00A8(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBodyInstance                          DefaultInstance;                                   // 0x0110(0x0120)(Edit, NativeAccessSpecifierPublic)
	uint8                                         Pad_230[0x8];                                      // 0x0230(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                BuildScale3D;                                      // 0x0238(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_244[0xC];                                      // 0x0244(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BodySetup")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BodySetup")
	}
	static class UBodySetup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBodySetup>();
	}
};

// Class Engine.SkeletalBodySetup
// 0x0018 (0x0268 - 0x0250)
class USkeletalBodySetup : public UBodySetup
{
public:
	bool                                          bSkipScaleFromAnimation;                           // 0x0250(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPhysicalAnimationProfile>      PhysicalAnimationData;                             // 0x0258(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SkeletalBodySetup")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SkeletalBodySetup")
	}
	static class USkeletalBodySetup* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkeletalBodySetup>();
	}
};

// Class Engine.AssetExportTask
// 0x0050 (0x0078 - 0x0028)
class UAssetExportTask : public UObject
{
public:
	class UObject*                                Object;                                            // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UExporter*                              Exporter;                                          // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Filename;                                          // 0x0038(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSelected;                                         // 0x0048(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReplaceIdentical;                                 // 0x0049(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPrompt;                                           // 0x004A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutomated;                                        // 0x004B(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseFileArchive;                                   // 0x004C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWriteEmptyFiles;                                  // 0x004D(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E[0x2];                                       // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        IgnoreObjectList;                                  // 0x0050(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UObject*                                Options;                                           // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         Errors;                                            // 0x0068(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AssetExportTask")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AssetExportTask")
	}
	static class UAssetExportTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssetExportTask>();
	}
};

// Class Engine.ParticleSystemReplay
// 0x0018 (0x0040 - 0x0028)
class UParticleSystemReplay : public UObject
{
public:
	int32                                         ClipIDNumber;                                      // 0x0028(0x0004)(Edit, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x14];                                      // 0x002C(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleSystemReplay")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleSystemReplay")
	}
	static class UParticleSystemReplay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleSystemReplay>();
	}
};

// Class Engine.AssetImportData
// 0x0000 (0x0028 - 0x0028)
class UAssetImportData : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AssetImportData")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AssetImportData")
	}
	static class UAssetImportData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssetImportData>();
	}
};

// Class Engine.AssetManagerSettings
// 0x00C8 (0x0100 - 0x0038)
class UAssetManagerSettings : public UDeveloperSettings
{
public:
	TArray<struct FPrimaryAssetTypeInfo>          PrimaryAssetTypesToScan;                           // 0x0038(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FDirectoryPath>                 DirectoriesToExclude;                              // 0x0048(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FPrimaryAssetRulesOverride>     PrimaryAssetRules;                                 // 0x0058(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules;                         // 0x0068(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                          bOnlyCookProductionAssets;                         // 0x0078(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldManagerDetermineTypeAndName;                // 0x0079(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldGuessTypeAndNameInEditor;                   // 0x007A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldAcquireMissingChunksOnLoad;                 // 0x007B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldChunksRemoveRedundancy;                     // 0x007C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAssetManagerRedirect>          PrimaryAssetIdRedirects;                           // 0x0080(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FAssetManagerRedirect>          PrimaryAssetTypeRedirects;                         // 0x0090(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FAssetManagerRedirect>          AssetPathRedirects;                                // 0x00A0(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TSet<class FName>                             MetaDataTagsForAssetRegistry;                      // 0x00B0(0x0050)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AssetManagerSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AssetManagerSettings")
	}
	static class UAssetManagerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssetManagerSettings>();
	}
};

// Class Engine.AssetMappingTable
// 0x0010 (0x0038 - 0x0028)
class UAssetMappingTable : public UObject
{
public:
	TArray<struct FAssetMapping>                  MappedAssets;                                      // 0x0028(0x0010)(Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AssetMappingTable")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AssetMappingTable")
	}
	static class UAssetMappingTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssetMappingTable>();
	}
};

// Class Engine.AsyncActionHandleSaveGame
// 0x0038 (0x0068 - 0x0030)
class UAsyncActionHandleSaveGame : public UBlueprintAsyncActionBase
{
public:
	TMulticastInlineDelegate<void(class USaveGame* SaveGame, bool bSuccess)> completed;              // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_40[0x20];                                      // 0x0040(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveGame*                              SaveGameObject;                                    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UAsyncActionHandleSaveGame* AsyncLoadGameFromSlot(class UObject* WorldContextObject, const class FString& SlotName, const int32 UserIndex);
	static class UAsyncActionHandleSaveGame* AsyncSaveGameToSlot(class UObject* WorldContextObject, class USaveGame* SaveGameObject_0, const class FString& SlotName, const int32 UserIndex);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AsyncActionHandleSaveGame")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AsyncActionHandleSaveGame")
	}
	static class UAsyncActionHandleSaveGame* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncActionHandleSaveGame>();
	}
};

// Class Engine.AsyncActionLoadPrimaryAsset
// 0x0010 (0x0088 - 0x0078)
class UAsyncActionLoadPrimaryAsset : public UAsyncActionLoadPrimaryAssetBase
{
public:
	TMulticastInlineDelegate<void(class UObject* Loaded)> completed;                                 // 0x0078(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UAsyncActionLoadPrimaryAsset* AsyncLoadPrimaryAsset(class UObject* WorldContextObject, const struct FPrimaryAssetId& PrimaryAsset, const TArray<class FName>& LoadBundles);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AsyncActionLoadPrimaryAsset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AsyncActionLoadPrimaryAsset")
	}
	static class UAsyncActionLoadPrimaryAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncActionLoadPrimaryAsset>();
	}
};

// Class Engine.AsyncActionLoadPrimaryAssetClass
// 0x0010 (0x0088 - 0x0078)
class UAsyncActionLoadPrimaryAssetClass : public UAsyncActionLoadPrimaryAssetBase
{
public:
	TMulticastInlineDelegate<void(TSubclassOf<class UObject> Loaded)> completed;                     // 0x0078(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UAsyncActionLoadPrimaryAssetClass* AsyncLoadPrimaryAssetClass(class UObject* WorldContextObject, const struct FPrimaryAssetId& PrimaryAsset, const TArray<class FName>& LoadBundles);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AsyncActionLoadPrimaryAssetClass")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AsyncActionLoadPrimaryAssetClass")
	}
	static class UAsyncActionLoadPrimaryAssetClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncActionLoadPrimaryAssetClass>();
	}
};

// Class Engine.AsyncActionLoadPrimaryAssetList
// 0x0010 (0x0088 - 0x0078)
class UAsyncActionLoadPrimaryAssetList : public UAsyncActionLoadPrimaryAssetBase
{
public:
	TMulticastInlineDelegate<void(const TArray<class UObject*>& Loaded)> completed;                  // 0x0078(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UAsyncActionLoadPrimaryAssetList* AsyncLoadPrimaryAssetList(class UObject* WorldContextObject, const TArray<struct FPrimaryAssetId>& PrimaryAssetList, const TArray<class FName>& LoadBundles);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AsyncActionLoadPrimaryAssetList")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AsyncActionLoadPrimaryAssetList")
	}
	static class UAsyncActionLoadPrimaryAssetList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncActionLoadPrimaryAssetList>();
	}
};

// Class Engine.AsyncActionChangePrimaryAssetBundles
// 0x0010 (0x0088 - 0x0078)
class UAsyncActionChangePrimaryAssetBundles : public UAsyncActionLoadPrimaryAssetBase
{
public:
	TMulticastInlineDelegate<void()>              completed;                                         // 0x0078(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForMatchingPrimaryAssets(class UObject* WorldContextObject, const TArray<class FName>& NewBundles, const TArray<class FName>& OldBundles);
	static class UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(class UObject* WorldContextObject, const TArray<struct FPrimaryAssetId>& PrimaryAssetList, const TArray<class FName>& AddBundles, const TArray<class FName>& RemoveBundles);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AsyncActionChangePrimaryAssetBundles")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AsyncActionChangePrimaryAssetBundles")
	}
	static class UAsyncActionChangePrimaryAssetBundles* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncActionChangePrimaryAssetBundles>();
	}
};

// Class Engine.AtmosphericFog
// 0x0008 (0x0378 - 0x0370)
class AAtmosphericFog : public AInfo
{
public:
	class UAtmosphericFogComponent*               AtmosphericFogComponent;                           // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AtmosphericFog")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AtmosphericFog")
	}
	static class AAtmosphericFog* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAtmosphericFog>();
	}
};

// Class Engine.AtmosphericFogComponent
// 0x0260 (0x04B0 - 0x0250)
class UAtmosphericFogComponent : public USceneComponent
{
public:
	float                                         SunMultiplier;                                     // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FogMultiplier;                                     // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DensityMultiplier;                                 // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DensityOffset;                                     // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceScale;                                     // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AltitudeScale;                                     // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceOffset;                                    // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GroundOffset;                                      // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartDistance;                                     // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SunDiscScale;                                      // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultBrightness;                                 // 0x0278(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 DefaultLightColor;                                 // 0x027C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDisableSunDisk : 1;                               // 0x0280(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAtmosphereAffectsSunIlluminance : 1;              // 0x0280(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDisableGroundScattering : 1;                      // 0x0280(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_281[0x3];                                      // 0x0281(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAtmospherePrecomputeParameters        PrecomputeParams;                                  // 0x0284(0x002C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                             TransmittanceTexture;                              // 0x02B0(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             IrradianceTexture;                                 // 0x02B8(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C0[0x1F0];                                    // 0x02C0(0x01F0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void DisableGroundScattering(bool NewGroundScattering);
	void DisableSunDisk(bool NewSunDisk);
	void SetAltitudeScale(float NewAltitudeScale);
	void SetDefaultBrightness(float NewBrightness);
	void SetDefaultLightColor(const struct FLinearColor& NewLightColor);
	void SetDensityMultiplier(float NewDensityMultiplier);
	void SetDensityOffset(float NewDensityOffset);
	void SetDistanceOffset(float NewDistanceOffset);
	void SetDistanceScale(float NewDistanceScale);
	void SetFogMultiplier(float NewFogMultiplier);
	void SetPrecomputeParams(float DensityHeight, int32 MaxScatteringOrder, int32 InscatterAltitudeSampleNum);
	void SetStartDistance(float NewStartDistance);
	void SetSunMultiplier(float NewSunMultiplier);
	void StartPrecompute();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AtmosphericFogComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AtmosphericFogComponent")
	}
	static class UAtmosphericFogComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAtmosphericFogComponent>();
	}
};

// Class Engine.BandwidthTestActor
// 0x0020 (0x0390 - 0x0370)
class ABandwidthTestActor : public AActor
{
public:
	struct FBandwidthTestGenerator                BandwidthGenerator;                                // 0x0370(0x0020)(Net, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BandwidthTestActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BandwidthTestActor")
	}
	static class ABandwidthTestActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABandwidthTestActor>();
	}
};

// Class Engine.BillboardBatchTexture2DArray
// 0x0030 (0x0160 - 0x0130)
class UBillboardBatchTexture2DArray : public UTexture
{
public:
	TArray<TSoftObjectPtr<class UTexture2D>>      TextureArray;                                      // 0x0130(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint32                                        SlotCount;                                         // 0x0140(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressX;                                          // 0x0144(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressY;                                          // 0x0145(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressZ;                                          // 0x0146(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_147[0x1];                                      // 0x0147(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntVector                             CachedSize;                                        // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CachedNumMip;                                      // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPixelFormat                                  CachedPF;                                          // 0x0158(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bResetSubTexture;                                  // 0x0159(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCheckSubTextureButton;                            // 0x015A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15B[0x5];                                      // 0x015B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BillboardBatchTexture2DArray")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BillboardBatchTexture2DArray")
	}
	static class UBillboardBatchTexture2DArray* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBillboardBatchTexture2DArray>();
	}
};

// Class Engine.BillboardComponent
// 0x0020 (0x05B0 - 0x0590)
class UBillboardComponent : public UPrimitiveComponent
{
public:
	class UTexture2D*                             Sprite;                                            // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsScreenSizeScaled : 1;                           // 0x0590(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_591[0x3];                                      // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScreenSize;                                        // 0x0594(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         U;                                                 // 0x0598(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UL;                                                // 0x059C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         V;                                                 // 0x05A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VL;                                                // 0x05A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5A8[0x8];                                      // 0x05A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetSprite(class UTexture2D* NewSprite);
	void SetSpriteAndUV(class UTexture2D* NewSprite, int32 NewU, int32 NewUL, int32 NewV, int32 NewVL);
	void SetUV(int32 NewU, int32 NewUL, int32 NewV, int32 NewVL);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BillboardComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BillboardComponent")
	}
	static class UBillboardComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBillboardComponent>();
	}
};

// Class Engine.BinaryAsset
// 0x00A0 (0x00C8 - 0x0028)
class UBinaryAsset : public UObject
{
public:
	uint8                                         Pad_28[0xA0];                                      // 0x0028(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BinaryAsset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BinaryAsset")
	}
	static class UBinaryAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBinaryAsset>();
	}
};

// Class Engine.RuntimeVirtualTextureComponent
// 0x0040 (0x0290 - 0x0250)
class URuntimeVirtualTextureComponent : public USceneComponent
{
public:
	class URuntimeVirtualTexture*                 VirtualTexture;                                    // 0x0250(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bUseStreamingLowMipsInEditor;                      // 0x0258(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 BoundsSourceActor;                                 // 0x0260(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class URuntimeVirtualTextureStreamingProxy*> StreamingTextureSVTs_keepReference;          // 0x0268(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class UTexture2D*                             AlbedoTextureToImport;                             // 0x0278(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             NormalTextureToImport;                             // 0x0280(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_288[0x8];                                      // 0x0288(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RuntimeVirtualTextureComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RuntimeVirtualTextureComponent")
	}
	static class URuntimeVirtualTextureComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<URuntimeVirtualTextureComponent>();
	}
};

// Class Engine.BlendableInterface
// 0x0000 (0x0000 - 0x0000)
class IBlendableInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BlendableInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BlendableInterface")
	}
	static class IBlendableInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBlendableInterface>();
	}
};

// Class Engine.BlockingVolume
// 0x0000 (0x03A8 - 0x03A8)
class ABlockingVolume : public AVolume
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BlockingVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BlockingVolume")
	}
	static class ABlockingVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABlockingVolume>();
	}
};

// Class Engine.BlueprintExtension
// 0x0000 (0x0028 - 0x0028)
class UBlueprintExtension : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BlueprintExtension")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BlueprintExtension")
	}
	static class UBlueprintExtension* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprintExtension>();
	}
};

// Class Engine.BlueprintMapLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintMapLibrary : public UBlueprintFunctionLibrary
{
public:
	static void Map_Add(const TMap<int32, int32>& TargetMap, const int32& Key, const int32& Value);
	static void Map_Clear(const TMap<int32, int32>& TargetMap);
	static bool Map_Contains(const TMap<int32, int32>& TargetMap, const int32& Key);
	static bool Map_Find(const TMap<int32, int32>& TargetMap, const int32& Key, int32* Value);
	static void Map_Keys(const TMap<int32, int32>& TargetMap, TArray<int32>* Keys);
	static int32 Map_Length(const TMap<int32, int32>& TargetMap);
	static bool Map_Remove(const TMap<int32, int32>& TargetMap, const int32& Key);
	static void Map_Values(const TMap<int32, int32>& TargetMap, TArray<int32>* Values);
	static void SetMapPropertyByName(class UObject* Object, class FName PropertyName, const TMap<int32, int32>& Value);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BlueprintMapLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BlueprintMapLibrary")
	}
	static class UBlueprintMapLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprintMapLibrary>();
	}
};

// Class Engine.BlueprintPathsLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintPathsLibrary : public UBlueprintFunctionLibrary
{
public:
	static class FString AutomationDir();
	static class FString AutomationLogDir();
	static class FString AutomationTransientDir();
	static class FString BugItDir();
	static class FString ChangeExtension(const class FString& InPath, const class FString& InNewExtension);
	static class FString CloudDir();
	static bool CollapseRelativeDirectories(const class FString& InPath, class FString* OutPath);
	static class FString Combine(const TArray<class FString>& InPaths);
	static class FString ConvertFromSandboxPath(const class FString& InPath, const class FString& InSandboxName);
	static class FString ConvertRelativePathToFull(const class FString& InPath, const class FString& InBasePath);
	static class FString ConvertToSandboxPath(const class FString& InPath, const class FString& InSandboxName);
	static class FString CreateTempFilename(const class FString& Path, const class FString& Prefix, const class FString& Extension);
	static class FString DiffDir();
	static bool DirectoryExists(const class FString& InPath);
	static class FString EngineConfigDir();
	static class FString EngineContentDir();
	static class FString EngineDir();
	static class FString EngineIntermediateDir();
	static class FString EnginePluginsDir();
	static class FString EngineSavedDir();
	static class FString EngineSourceDir();
	static class FString EngineUserDir();
	static class FString EngineVersionAgnosticUserDir();
	static class FString EnterpriseDir();
	static class FString EnterpriseFeaturePackDir();
	static class FString EnterprisePluginsDir();
	static class FString FeaturePackDir();
	static bool FileExists(const class FString& InPath);
	static class FString GameAgnosticSavedDir();
	static class FString GameDevelopersDir();
	static class FString GameSourceDir();
	static class FString GameUserDeveloperDir();
	static class FString GeneratedConfigDir();
	static class FString GetBaseFilename(const class FString& InPath, bool bRemovePath);
	static class FString GetCleanFilename(const class FString& InPath);
	static const TArray<class FString> GetEditorLocalizationPaths();
	static const TArray<class FString> GetEngineLocalizationPaths();
	static class FString GetExtension(const class FString& InPath, bool bIncludeDot);
	static const TArray<class FString> GetGameLocalizationPaths();
	static class FString GetInvalidFileSystemChars();
	static class FString GetPath(const class FString& InPath);
	static class FString GetProjectFilePath();
	static const TArray<class FString> GetPropertyNameLocalizationPaths();
	static class FString GetRelativePathToRoot();
	static const TArray<class FString> GetRestrictedFolderNames();
	static const TArray<class FString> GetToolTipLocalizationPaths();
	static bool HasProjectPersistentDownloadDir();
	static bool IsDrive(const class FString& InPath);
	static bool IsProjectFilePathSet();
	static bool IsRelative(const class FString& InPath);
	static bool IsRestrictedPath(const class FString& InPath);
	static bool IsSamePath(const class FString& PathA, const class FString& PathB);
	static class FString LaunchDir();
	static bool MakePathRelativeTo(const class FString& InPath, const class FString& InRelativeTo, class FString* OutPath);
	static void MakePlatformFilename(const class FString& InPath, class FString* OutPath);
	static void MakeStandardFilename(const class FString& InPath, class FString* OutPath);
	static class FString MakeValidFileName(const class FString& inString, const class FString& InReplacementChar);
	static void NormalizeDirectoryName(const class FString& InPath, class FString* OutPath);
	static void NormalizeFilename(const class FString& InPath, class FString* OutPath);
	static class FString ProfilingDir();
	static class FString ProjectConfigDir();
	static class FString ProjectContentDir();
	static class FString ProjectDir();
	static class FString ProjectIntermediateDir();
	static class FString ProjectLogDir();
	static class FString ProjectModsDir();
	static class FString ProjectPersistentDownloadDir();
	static class FString ProjectPluginsDir();
	static class FString ProjectSavedDir();
	static class FString ProjectUserDir();
	static void RemoveDuplicateSlashes(const class FString& InPath, class FString* OutPath);
	static class FString RootDir();
	static class FString SandboxesDir();
	static class FString ScreenShotDir();
	static class FString SetExtension(const class FString& InPath, const class FString& InNewExtension);
	static void SetProjectFilePath(const class FString& NewGameProjectFilePath);
	static class FString ShaderWorkingDir();
	static bool ShouldSaveToUserDir();
	static class FString SourceConfigDir();
	static void Split(const class FString& InPath, class FString* PathPart, class FString* FilenamePart, class FString* ExtensionPart);
	static void ValidatePath(const class FString& InPath, bool* bDidSucceed, class FText* OutReason);
	static class FString VideoCaptureDir();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BlueprintPathsLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BlueprintPathsLibrary")
	}
	static class UBlueprintPathsLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprintPathsLibrary>();
	}
};

// Class Engine.PlatformGameInstance
// 0x00D0 (0x0270 - 0x01A0)
class UPlatformGameInstance : public UGameInstance
{
public:
	TMulticastInlineDelegate<void()>              ApplicationWillDeactivateDelegate;                 // 0x01A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              ApplicationHasReactivatedDelegate;                 // 0x01B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              ApplicationWillEnterBackgroundDelegate;            // 0x01C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              ApplicationHasEnteredForegroundDelegate;           // 0x01D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              ApplicationWillTerminateDelegate;                  // 0x01E0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              ApplicationShouldUnloadResourcesDelegate;          // 0x01F0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const TArray<class FString>& StartupArguments)> ApplicationReceivedStartupArgumentsDelegate; // 0x0200(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const TArray<uint8>& inArray)> ApplicationRegisteredForRemoteNotificationsDelegate; // 0x0210(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(int32 inInt)>   ApplicationRegisteredForUserNotificationsDelegate; // 0x0220(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const class FString& inString)> ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x0230(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const class FString& inString, EApplicationState inAppState)> ApplicationReceivedRemoteNotificationDelegate; // 0x0240(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const class FString& inString, int32 inInt, EApplicationState inAppState)> ApplicationReceivedLocalNotificationDelegate; // 0x0250(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(EScreenOrientation inScreenOrientation)> ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x0260(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PlatformGameInstance")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PlatformGameInstance")
	}
	static class UPlatformGameInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformGameInstance>();
	}
};

// Class Engine.SceneCaptureCube
// 0x0008 (0x0388 - 0x0380)
class ASceneCaptureCube : public ASceneCapture
{
public:
	class USceneCaptureComponentCube*             CaptureComponentCube;                              // 0x0380(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnInterpToggle(bool bEnable);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SceneCaptureCube")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SceneCaptureCube")
	}
	static class ASceneCaptureCube* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASceneCaptureCube>();
	}
};

// Class Engine.BlueprintSetLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintSetLibrary : public UBlueprintFunctionLibrary
{
public:
	static void Set_Add(const TSet<int32>& TargetSet, const int32& NewItem);
	static void Set_AddItems(const TSet<int32>& TargetSet, const TArray<int32>& NewItems);
	static void Set_Clear(const TSet<int32>& TargetSet);
	static bool Set_Contains(const TSet<int32>& TargetSet, const int32& ItemToFind);
	static void Set_Difference(const TSet<int32>& A, const TSet<int32>& B, TSet<int32>* Result);
	static void Set_Intersection(const TSet<int32>& A, const TSet<int32>& B, TSet<int32>* Result);
	static int32 Set_Length(const TSet<int32>& TargetSet);
	static bool Set_Remove(const TSet<int32>& TargetSet, const int32& Item);
	static void Set_RemoveItems(const TSet<int32>& TargetSet, const TArray<int32>& Items);
	static void Set_ToArray(const TSet<int32>& A, TArray<int32>* Result);
	static void Set_Union(const TSet<int32>& A, const TSet<int32>& B, TSet<int32>* Result);
	static void SetSetPropertyByName(class UObject* Object, class FName PropertyName, const TSet<int32>& Value);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BlueprintSetLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BlueprintSetLibrary")
	}
	static class UBlueprintSetLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprintSetLibrary>();
	}
};

// Class Engine.BoneMaskFilter
// 0x0010 (0x0038 - 0x0028)
class UBoneMaskFilter : public UObject
{
public:
	TArray<struct FInputBlendPose>                BlendPoses;                                        // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BoneMaskFilter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BoneMaskFilter")
	}
	static class UBoneMaskFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBoneMaskFilter>();
	}
};

// Class Engine.ReflectionCapture
// 0x0010 (0x0380 - 0x0370)
class AReflectionCapture : public AActor
{
public:
	class UReflectionCaptureComponent*            CaptureComponent;                                  // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_378[0x8];                                      // 0x0378(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ReflectionCapture")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ReflectionCapture")
	}
	static class AReflectionCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<AReflectionCapture>();
	}
};

// Class Engine.VectorField
// 0x0020 (0x0048 - 0x0028)
class UVectorField : public UObject
{
public:
	struct FBox                                   Bounds;                                            // 0x0028(0x001C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         Intensity;                                         // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VectorField")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VectorField")
	}
	static class UVectorField* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVectorField>();
	}
};

// Class Engine.VectorFieldStatic
// 0x00C0 (0x0108 - 0x0048)
class UVectorFieldStatic : public UVectorField
{
public:
	int32                                         SizeX;                                             // 0x0048(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SizeY;                                             // 0x004C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SizeZ;                                             // 0x0050(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowCPUAccess;                                   // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_55[0xA3];                                      // 0x0055(0x00A3)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector4>                       CPUData;                                           // 0x00F8(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VectorFieldStatic")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VectorFieldStatic")
	}
	static class UVectorFieldStatic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVectorFieldStatic>();
	}
};

// Class Engine.BoxReflectionCapture
// 0x0000 (0x0380 - 0x0380)
class ABoxReflectionCapture : public AReflectionCapture
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BoxReflectionCapture")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BoxReflectionCapture")
	}
	static class ABoxReflectionCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABoxReflectionCapture>();
	}
};

// Class Engine.Breakpoint
// 0x0018 (0x0040 - 0x0028)
class UBreakpoint : public UObject
{
public:
	uint8                                         bEnabled : 1;                                      // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEdGraphNode*                           Node;                                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         bStepOnce : 1;                                     // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bStepOnce_WasPreviouslyDisabled : 1;               // 0x0038(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bStepOnce_RemoveAfterHit : 1;                      // 0x0038(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Breakpoint")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Breakpoint")
	}
	static class UBreakpoint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBreakpoint>();
	}
};

// Class Engine.BrushComponent
// 0x0010 (0x05A0 - 0x0590)
class UBrushComponent : public UPrimitiveComponent
{
public:
	class UModel*                                 Brush;                                             // 0x0588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBodySetup*                             BrushBodySetup;                                    // 0x0590(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_598[0x8];                                      // 0x0598(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BrushComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BrushComponent")
	}
	static class UBrushComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBrushComponent>();
	}
};

// Class Engine.BrushShape
// 0x0000 (0x03A8 - 0x03A8)
class ABrushShape : public ABrush
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("BrushShape")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"BrushShape")
	}
	static class ABrushShape* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABrushShape>();
	}
};

// Class Engine.ButtonStyleAsset
// 0x0298 (0x02C0 - 0x0028)
class UButtonStyleAsset : public UObject
{
public:
	struct FButtonStyle                           ButtonStyle;                                       // 0x0028(0x0298)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ButtonStyleAsset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ButtonStyleAsset")
	}
	static class UButtonStyleAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UButtonStyleAsset>();
	}
};

// Class Engine.CameraAnim
// 0x0998 (0x09C0 - 0x0028)
class UCameraAnim : public UObject
{
public:
	class UInterpGroup*                           CameraInterpGroup;                                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnimLength;                                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBox                                   BoundingBox;                                       // 0x0034(0x001C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         bRelativeToInitialTransform : 1;                   // 0x0050(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRelativeToInitialFOV : 1;                         // 0x0050(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BaseFOV;                                           // 0x0054(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0x8];                                       // 0x0058(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   BasePostProcessSettings;                           // 0x0060(0x0950)(NativeAccessSpecifierPublic)
	float                                         BasePostProcessBlendWeight;                        // 0x09B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9B4[0xC];                                      // 0x09B4(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CameraAnim")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CameraAnim")
	}
	static class UCameraAnim* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnim>();
	}
};

// Class Engine.VisualLoggerKismetLibrary
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary
{
public:
	static void EnableRecording(bool bEnabled);
	static void LogBox(class UObject* WorldContextObject, const struct FBox& BoxShape, const class FString& Text, const struct FLinearColor& ObjectColor, class FName LogCategory, bool bAddToMessageLog);
	static void LogLocation(class UObject* WorldContextObject, const struct FVector& Location, const class FString& Text, const struct FLinearColor& ObjectColor, float radius, class FName LogCategory, bool bAddToMessageLog);
	static void LogSegment(class UObject* WorldContextObject, const struct FVector& SegmentStart, const struct FVector& SegmentEnd, const class FString& Text, const struct FLinearColor& ObjectColor, const float Thickness, class FName CategoryName, bool bAddToMessageLog);
	static void LogText(class UObject* WorldContextObject, const class FString& Text, class FName LogCategory, bool bAddToMessageLog);
	static void RedirectVislog(class UObject* SourceOwner, class UObject* DestinationOwner);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VisualLoggerKismetLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VisualLoggerKismetLibrary")
	}
	static class UVisualLoggerKismetLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVisualLoggerKismetLibrary>();
	}
};

// Class Engine.CameraAnimInst
// 0x00E8 (0x0110 - 0x0028)
class alignas(0x10) UCameraAnimInst : public UObject
{
public:
	class UCameraAnim*                            CamAnim;                                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterpGroupInst*                       InterpGroupInst;                                   // 0x0030(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_38[0x18];                                      // 0x0038(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PlayRate;                                          // 0x0050(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x14];                                      // 0x0054(0x0014)(Fixing Size After Last Property [ Dumper-7 ])
	class UInterpTrackMove*                       MoveTrack;                                         // 0x0068(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterpTrackInstMove*                   MoveInst;                                          // 0x0070(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECameraAnimPlaySpace                          PlaySpace;                                         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_79[0x97];                                      // 0x0079(0x0097)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetDuration(float NewDuration);
	void SetScale(float NewDuration);
	void Stop(bool bImmediate);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CameraAnimInst")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CameraAnimInst")
	}
	static class UCameraAnimInst* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimInst>();
	}
};

// Class Engine.CameraBlockingVolume
// 0x0000 (0x03A8 - 0x03A8)
class ACameraBlockingVolume : public AVolume
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CameraBlockingVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CameraBlockingVolume")
	}
	static class ACameraBlockingVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraBlockingVolume>();
	}
};

// Class Engine.Canvas
// 0x02A8 (0x02D0 - 0x0028)
class UCanvas : public UObject
{
public:
	float                                         OrgX;                                              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OrgY;                                              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClipX;                                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClipY;                                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 DrawColor;                                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bCenterX : 1;                                      // 0x003C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCenterY : 1;                                      // 0x003C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNoSmooth : 1;                                     // 0x003C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SizeX;                                             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SizeY;                                             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlane                                 ColorModulate;                                     // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             DefaultTexture;                                    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             GradientTexture0;                                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UReporterGraph*                         ReporterGraph;                                     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0x258];                                     // 0x0078(0x0258)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void K2_Deproject(const struct FVector2D& ScreenPosition, struct FVector* WorldOrigin, struct FVector* WorldDirection);
	void K2_DrawBorder(class UTexture* BorderTexture, class UTexture* BackgroundTexture, class UTexture* LeftBorderTexture, class UTexture* RightBorderTexture, class UTexture* TopBorderTexture, class UTexture* BottomBorderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, const struct FVector2D& BorderScale, const struct FVector2D& BackgroundScale, float Rotation, const struct FVector2D& PivotPoint, const struct FVector2D& CornerSize);
	void K2_DrawBox(const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, float Thickness, const struct FLinearColor& RenderColor);
	void K2_DrawLine(const struct FVector2D& ScreenPositionA, const struct FVector2D& ScreenPositionB, float Thickness, const struct FLinearColor& RenderColor);
	void K2_DrawMaterial(class UMaterialInterface* RenderMaterial, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, float Rotation, const struct FVector2D& PivotPoint);
	void K2_DrawMaterialTriangle(class UMaterialInterface* RenderMaterial, const TArray<struct FCanvasUVTri>& Triangles);
	void K2_DrawPolygon(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& radius, int32 NumberOfSides, const struct FLinearColor& RenderColor);
	void K2_DrawText(class UFont* RenderFont, const class FString& RenderText, const struct FVector2D& ScreenPosition, const struct FVector2D& Scale, const struct FLinearColor& RenderColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);
	void K2_DrawTexture(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, EBlendMode BlendMode, float Rotation, const struct FVector2D& PivotPoint);
	void K2_DrawTriangle(class UTexture* RenderTexture, const TArray<struct FCanvasUVTri>& Triangles);
	struct FVector K2_Project(const struct FVector& WorldLocation);
	struct FVector2D K2_StrLen(class UFont* RenderFont, const class FString& RenderText);
	struct FVector2D K2_TextSize(class UFont* RenderFont, const class FString& RenderText, const struct FVector2D& Scale);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Canvas")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Canvas")
	}
	static class UCanvas* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCanvas>();
	}
};

// Class Engine.TextureRenderTarget
// 0x0008 (0x0138 - 0x0130)
class UTextureRenderTarget : public UTexture
{
public:
	float                                         TargetGamma;                                       // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TextureRenderTarget")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TextureRenderTarget")
	}
	static class UTextureRenderTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextureRenderTarget>();
	}
};

// Class Engine.TextureRenderTarget2D
// 0x0030 (0x0168 - 0x0138)
class UTextureRenderTarget2D : public UTextureRenderTarget
{
public:
	int32                                         SizeX;                                             // 0x0138(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SizeY;                                             // 0x013C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ClearColor;                                        // 0x0140(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressX;                                          // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressY;                                          // 0x0151(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bForceLinearGamma : 1;                             // 0x0152(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHDR : 1;                                          // 0x0152(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bGPUSharedFlag : 1;                                // 0x0152(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	ETextureRenderTargetFormat                    RenderTargetFormat;                                // 0x0153(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAutoGenerateMips : 1;                             // 0x0154(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	ETextureFilter                                MipsSamplerFilter;                                 // 0x0155(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               MipsAddressU;                                      // 0x0156(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               MipsAddressV;                                      // 0x0157(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPixelFormat                                  OverrideFormat;                                    // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_159[0xF];                                      // 0x0159(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TextureRenderTarget2D")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TextureRenderTarget2D")
	}
	static class UTextureRenderTarget2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextureRenderTarget2D>();
	}
};

// Class Engine.CanvasRenderTarget2D
// 0x0020 (0x0188 - 0x0168)
class UCanvasRenderTarget2D : public UTextureRenderTarget2D
{
public:
	TMulticastInlineDelegate<void(class UCanvas* Canvas, int32 Width, int32 Height)> OnCanvasRenderTargetUpdate; // 0x0168(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWorld>                  World;                                             // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bShouldClearRenderTargetOnReceiveUpdate;           // 0x0180(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UCanvasRenderTarget2D* CreateCanvasRenderTarget2D(class UObject* WorldContextObject, TSubclassOf<class UCanvasRenderTarget2D> CanvasRenderTarget2DClass, int32 Width, int32 Height);

	void GetSize(int32* Width, int32* Height);
	void ReceiveUpdate(class UCanvas* Canvas, int32 Width, int32 Height);
	void UpdateResource();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CanvasRenderTarget2D")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CanvasRenderTarget2D")
	}
	static class UCanvasRenderTarget2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCanvasRenderTarget2D>();
	}
};

// Class Engine.CDLODClipRectVolume
// 0x0008 (0x0378 - 0x0370)
class ACDLODClipRectVolume : public AActor
{
public:
	class UCDLODClipRectComponent*                CDLODClipRectComponent;                            // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CDLODClipRectVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CDLODClipRectVolume")
	}
	static class ACDLODClipRectVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACDLODClipRectVolume>();
	}
};

// Class Engine.ChaosPhysicalMaterial
// 0x0010 (0x0038 - 0x0028)
class UChaosPhysicalMaterial : public UObject
{
public:
	float                                         Friction;                                          // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Restitution;                                       // 0x002C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SleepingLinearVelocityThreshold;                   // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SleepingAngularVelocityThreshold;                  // 0x0034(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ChaosPhysicalMaterial")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ChaosPhysicalMaterial")
	}
	static class UChaosPhysicalMaterial* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosPhysicalMaterial>();
	}
};

// Class Engine.CheckBoxStyleAsset
// 0x05C8 (0x05F0 - 0x0028)
class UCheckBoxStyleAsset : public UObject
{
public:
	struct FCheckBoxStyle                         CheckBoxStyle;                                     // 0x0028(0x05C8)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CheckBoxStyleAsset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CheckBoxStyleAsset")
	}
	static class UCheckBoxStyleAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCheckBoxStyleAsset>();
	}
};

// Class Engine.ChildActorComponent
// 0x0040 (0x0290 - 0x0250)
class UChildActorComponent : public USceneComponent
{
public:
	TSubclassOf<class AActor>                     ChildActorClass;                                   // 0x0250(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bKeepCompInBuildRuntimeRes;                        // 0x0258(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ChildActor;                                        // 0x0260(0x0008)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                 ChildActorTemplate;                                // 0x0268(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_270[0x20];                                     // 0x0270(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetChildActorClass(TSubclassOf<class AActor> InClass);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ChildActorComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ChildActorComponent")
	}
	static class UChildActorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChildActorComponent>();
	}
};

// Class Engine.ChildConnection
// 0x0008 (0x1D90 - 0x1D88)
class UChildConnection : public UNetConnection
{
public:
	class UNetConnection*                         Parent;                                            // 0x1D88(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ChildConnection")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ChildConnection")
	}
	static class UChildConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChildConnection>();
	}
};

// Class Engine.ClipmapActor
// 0x0130 (0x04A0 - 0x0370)
class AClipmapActor : public AActor
{
public:
	TArray<class UClipmap*>                       Clipmaps;                                          // 0x0370(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint32                                        AsyncLoadPriority;                                 // 0x0380(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         VTDirtyMaxMip;                                     // 0x0384(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              LeftTopWorldPosition;                              // 0x0388(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_390[0x8];                                      // 0x0390(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PatchSizeInWorldSpace;                             // 0x0398(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PatchSize;                                         // 0x039C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PatchCount;                                        // 0x03A0(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                              OriginTextureSize;                                 // 0x03A4(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MipCount;                                          // 0x03AC(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FIntPoint>                      SizeInPatchs;                                      // 0x03B0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	int32                                         ReservedPatchCount;                                // 0x03C0(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C4[0xDC];                                     // 0x03C4(0x00DC)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ClipmapActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ClipmapActor")
	}
	static class AClipmapActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AClipmapActor>();
	}
};

// Class Engine.CloudStorageBase
// 0x0018 (0x0050 - 0x0038)
class UCloudStorageBase : public UPlatformInterfaceBase
{
public:
	TArray<class FString>                         LocalCloudFiles;                                   // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bSuppressDelegateCalls : 1;                        // 0x0048(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CloudStorageBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CloudStorageBase")
	}
	static class UCloudStorageBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCloudStorageBase>();
	}
};

// Class Engine.CollisionProfile
// 0x0140 (0x0178 - 0x0038)
class UCollisionProfile : public UDeveloperSettings
{
public:
	TArray<struct FCollisionResponseTemplate>     Profiles;                                          // 0x0038(0x0010)(ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate)
	TArray<struct FCustomChannelSetup>            DefaultChannelResponses;                           // 0x0048(0x0010)(ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate)
	TArray<struct FCustomProfile>                 EditProfiles;                                      // 0x0058(0x0010)(ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate)
	TArray<struct FRedirector>                    ProfileRedirects;                                  // 0x0068(0x0010)(ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate)
	TArray<struct FRedirector>                    CollisionChannelRedirects;                         // 0x0078(0x0010)(ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate)
	TArray<struct FCustomTraceMaskFilterName>     TraceMaskFilterReNames;                            // 0x0088(0x0010)(ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPrivate)
	uint8                                         Pad_98[0xE0];                                      // 0x0098(0x00E0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CollisionProfile")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CollisionProfile")
	}
	static class UCollisionProfile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollisionProfile>();
	}
};

// Class Engine.ComponentDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UComponentDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FBlueprintComponentDelegateBinding> ComponentDelegateBindings;                     // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ComponentDelegateBinding")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ComponentDelegateBinding")
	}
	static class UComponentDelegateBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComponentDelegateBinding>();
	}
};

// Class Engine.CompositeDataTable
// 0x0028 (0x0168 - 0x0140)
class UCompositeDataTable : public UDataTable
{
public:
	TArray<class UDataTable*>                     ParentTables;                                      // 0x0140(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UDataTable*>                     OldParentTables;                                   // 0x0150(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_160[0x8];                                      // 0x0160(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CompositeDataTable")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CompositeDataTable")
	}
	static class UCompositeDataTable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompositeDataTable>();
	}
};

// Class Engine.LevelScriptActor
// 0x0008 (0x0378 - 0x0370)
class ALevelScriptActor : public AActor
{
public:
	uint8                                         bInputEnabled : 1;                                 // 0x0370(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_371[0x7];                                      // 0x0371(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void LevelReset();
	bool RemoteEvent(class FName EventName);
	void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
	void WorldOriginLocationChanged(const struct FIntVector& OldOriginLocation, const struct FIntVector& NewOriginLocation);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LevelScriptActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LevelScriptActor")
	}
	static class ALevelScriptActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelScriptActor>();
	}
};

// Class Engine.Console
// 0x0108 (0x0130 - 0x0028)
class UConsole : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class ULocalPlayer*                           ConsoleTargetPlayer;                               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             DefaultTexture_Black;                              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             DefaultTexture_White;                              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x18];                                      // 0x0050(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         HistoryBuffer;                                     // 0x0068(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0xB8];                                      // 0x0078(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Console")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Console")
	}
	static class UConsole* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsole>();
	}
};

// Class Engine.CullDistanceVolume
// 0x0018 (0x03C0 - 0x03A8)
class ACullDistanceVolume : public AVolume
{
public:
	TArray<struct FCullDistanceSizePair>          CullDistances;                                     // 0x03A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bEnabled : 1;                                      // 0x03B8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_3B9[0x7];                                      // 0x03B9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CullDistanceVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CullDistanceVolume")
	}
	static class ACullDistanceVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACullDistanceVolume>();
	}
};

// Class Engine.LevelStreamingVolume
// 0x0018 (0x03C0 - 0x03A8)
class ALevelStreamingVolume : public AVolume
{
public:
	TArray<class FName>                           StreamingLevelNames;                               // 0x03A8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                         bEditorPreVisOnly : 1;                             // 0x03B8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDisabled : 1;                                     // 0x03B8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_3B9[0x3];                                      // 0x03B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EStreamingVolumeUsage                         StreamingUsage;                                    // 0x03BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3BD[0x3];                                      // 0x03BD(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LevelStreamingVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LevelStreamingVolume")
	}
	static class ALevelStreamingVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelStreamingVolume>();
	}
};

// Class Engine.ShadowMapTexture2D
// 0x0008 (0x01A0 - 0x0198)
class UShadowMapTexture2D : public UTexture2D
{
public:
	EShadowMapFlags                               ShadowmapFlags;                                    // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ShadowMapTexture2D")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ShadowMapTexture2D")
	}
	static class UShadowMapTexture2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShadowMapTexture2D>();
	}
};

// Class Engine.CurveEdPresetCurve
// 0x0000 (0x0028 - 0x0028)
class UCurveEdPresetCurve : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CurveEdPresetCurve")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CurveEdPresetCurve")
	}
	static class UCurveEdPresetCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurveEdPresetCurve>();
	}
};

// Class Engine.LevelActorContainer
// 0x0010 (0x0038 - 0x0028)
class ULevelActorContainer : public UObject
{
public:
	TArray<class AActor*>                         actors;                                            // 0x0028(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LevelActorContainer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LevelActorContainer")
	}
	static class ULevelActorContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelActorContainer>();
	}
};

// Class Engine.CurveFloat
// 0x00A0 (0x00D0 - 0x0030)
class UCurveFloat : public UCurveBase
{
public:
	struct FRichCurve                             FloatCurve;                                        // 0x0030(0x0098)(NativeAccessSpecifierPublic)
	bool                                          bIsEventCurve;                                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetFloatValue(float InTime) const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CurveFloat")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CurveFloat")
	}
	static class UCurveFloat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurveFloat>();
	}
};

// Class Engine.InterpTrackFade
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackFade : public UInterpTrackFloatBase
{
public:
	uint8                                         bPersistFade : 1;                                  // 0x0090(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFadeAudio : 1;                                    // 0x0090(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           FadeColor;                                         // 0x0094(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackFade")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackFade")
	}
	static class UInterpTrackFade* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackFade>();
	}
};

// Class Engine.CurveLinearColorAtlas
// 0x0020 (0x01B8 - 0x0198)
class UCurveLinearColorAtlas : public UTexture2D
{
public:
	uint32                                        TextureSize;                                       // 0x0198(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bSquareResolution : 1;                             // 0x019C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_19D[0x3];                                      // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        TextureHeight;                                     // 0x01A0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A4[0x4];                                      // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCurveLinearColor*>              GradientCurves;                                    // 0x01A8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	bool GetCurvePosition(class UCurveLinearColor* InCurve, float* Position);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CurveLinearColorAtlas")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CurveLinearColorAtlas")
	}
	static class UCurveLinearColorAtlas* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurveLinearColorAtlas>();
	}
};

// Class Engine.RuntimeOptionsBase
// 0x0010 (0x0038 - 0x0028)
class URuntimeOptionsBase : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RuntimeOptionsBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RuntimeOptionsBase")
	}
	static class URuntimeOptionsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<URuntimeOptionsBase>();
	}
};

// Class Engine.InterpTrackInstColorScale
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstColorScale : public UInterpTrackInst
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstColorScale")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstColorScale")
	}
	static class UInterpTrackInstColorScale* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstColorScale>();
	}
};

// Class Engine.CurveSourceInterface
// 0x0000 (0x0000 - 0x0000)
class ICurveSourceInterface : public IInterface
{
public:
	class FName GetBindingName() const;
	void GetCurves(TArray<struct FNamedCurveValue>* OutValues) const;
	float GetCurveValue(class FName CurveName) const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("CurveSourceInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"CurveSourceInterface")
	}
	static class ICurveSourceInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ICurveSourceInterface>();
	}
};

// Class Engine.SlateBrushAsset
// 0x0090 (0x00B8 - 0x0028)
class USlateBrushAsset : public UObject
{
public:
	struct FSlateBrush                            Brush;                                             // 0x0028(0x0090)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SlateBrushAsset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SlateBrushAsset")
	}
	static class USlateBrushAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USlateBrushAsset>();
	}
};

// Class Engine.DataTableFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	static bool DoesDataTableRowExist(class UDataTable* Table, class FName RowName);
	static void EvaluateCurveTableRow(class UCurveTable* CurveTable, class FName RowName, float InXY, EEvaluateCurveTableResult* OutResult, float* OutXY, const class FString& ContextString);
	static TArray<class FString> GetDataTableColumnAsString(const class UDataTable* DataTable, class FName PropertyName);
	static bool GetDataTableRowFromName(class UDataTable* Table, class FName RowName, struct FTableRowBase* OutRow);
	static void GetDataTableRowNames(class UDataTable* Table, TArray<class FName>* OutRowNames);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DataTableFunctionLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DataTableFunctionLibrary")
	}
	static class UDataTableFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDataTableFunctionLibrary>();
	}
};

// Class Engine.InterpTrackDirector
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackDirector : public UInterpTrack
{
public:
	TArray<struct FDirectorTrackCut>              CutTrack;                                          // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bSimulateCameraCutsOnClients : 1;                  // 0x0080(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackDirector")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackDirector")
	}
	static class UInterpTrackDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackDirector>();
	}
};

// Class Engine.DebugCameraController
// 0x0100 (0x07C0 - 0x06C0)
class ADebugCameraController : public APlayerController
{
public:
	uint8                                         bShowSelectedInfo : 1;                             // 0x06C0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsFrozenRendering : 1;                            // 0x06C0(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsOrbitingSelectedActor : 1;                      // 0x06C0(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOrbitPivotUseCenter : 1;                          // 0x06C0(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableBufferVisualization : 1;                    // 0x06C0(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableBufferVisualizationFullMode : 1;            // 0x06C0(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsBufferVisualizationInputSetup : 1;              // 0x06C0(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bLastDisplayEnabled : 1;                           // 0x06C0(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_6C1[0x7];                                      // 0x06C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDrawFrustumComponent*                  DrawFrustum;                                       // 0x06C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 SelectedActor;                                     // 0x06D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    SelectedComponent;                                 // 0x06D8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                             SelectedHitPoint;                                  // 0x06E0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class APlayerController*                      OriginalControllerRef;                             // 0x0768(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayer*                                OriginalPlayer;                                    // 0x0770(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpeedScale;                                        // 0x0778(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InitialMaxSpeed;                                   // 0x077C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InitialAccel;                                      // 0x0780(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InitialDecel;                                      // 0x0784(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_788[0x38];                                     // 0x0788(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ReceiveOnActivate(class APlayerController* OriginalPC);
	void ReceiveOnActorSelected(class AActor* NewSelectedActor, const struct FVector& SelectHitLocation, const struct FVector& SelectHitNormal, const struct FHitResult& Hit);
	void ReceiveOnDeactivate(class APlayerController* RestoredPC);
	void SetPawnMovementSpeedScale(float NewSpeedScale);
	void ShowDebugSelectedInfo();
	void ToggleDisplay();

	class AActor* GetSelectedActor() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DebugCameraController")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DebugCameraController")
	}
	static class ADebugCameraController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADebugCameraController>();
	}
};

// Class Engine.DebugCameraControllerSettings
// 0x0010 (0x0048 - 0x0038)
class UDebugCameraControllerSettings : public UDeveloperSettings
{
public:
	TArray<struct FDebugCameraControllerSettingsViewModeIndex> CycleViewModes;                       // 0x0038(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DebugCameraControllerSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DebugCameraControllerSettings")
	}
	static class UDebugCameraControllerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugCameraControllerSettings>();
	}
};

// Class Engine.InterpTrackInstBoolProp
// 0x0018 (0x0068 - 0x0050)
class UInterpTrackInstBoolProp : public UInterpTrackInstProperty
{
public:
	uint8                                         Pad_50[0x10];                                      // 0x0050(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          ResetBool;                                         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstBoolProp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstBoolProp")
	}
	static class UInterpTrackInstBoolProp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstBoolProp>();
	}
};

// Class Engine.DebugCameraHUD
// 0x0000 (0x0460 - 0x0460)
class ADebugCameraHUD : public AHUD
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DebugCameraHUD")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DebugCameraHUD")
	}
	static class ADebugCameraHUD* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADebugCameraHUD>();
	}
};

// Class Engine.DebugDrawService
// 0x0000 (0x0028 - 0x0028)
class UDebugDrawService : public UBlueprintFunctionLibrary
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DebugDrawService")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DebugDrawService")
	}
	static class UDebugDrawService* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugDrawService>();
	}
};

// Class Engine.LocalLightComponent
// 0x0020 (0x0430 - 0x0410)
class ULocalLightComponent : public ULightComponent
{
public:
	ELightUnits                                   IntensityUnits;                                    // 0x0410(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_411[0x3];                                      // 0x0411(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         radius;                                            // 0x0414(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AttenuationRadius;                                 // 0x0418(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLightmassPointLightSettings           LightmassSettings;                                 // 0x041C(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bCacheStaticShadow;                                // 0x0428(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCastPerObjectShadow;                              // 0x0429(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42A[0x2];                                      // 0x042A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ShadowRadiusScale;                                 // 0x042C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static float GetUnitsConversionFactor(ELightUnits SrcUnits, ELightUnits TargetUnits, float CosHalfConeAngle);

	void SetAttenuationRadius(float NewRadius);
	void SetCacheStaticShadow(bool NewValue);
	void SetCastPerObjectShadow(bool NewValue);
	void SetIntensityUnits(ELightUnits NewIntensityUnits);
	void SetShadowRadiusScale(float NewValue);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LocalLightComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LocalLightComponent")
	}
	static class ULocalLightComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalLightComponent>();
	}
};

// Class Engine.PointLightComponent
// 0x0030 (0x0460 - 0x0430)
#pragma pack(push, 0x1)
class alignas(0x10) UPointLightComponent : public ULocalLightComponent
{
public:
	uint8                                         bUseInverseSquaredFalloff : 1;                     // 0x0430(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_431[0x3];                                      // 0x0431(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LightFalloffExponent;                              // 0x0434(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SourceRadius;                                      // 0x0438(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SoftSourceRadius;                                  // 0x043C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                  ShadowSwitchForEachFace;                           // 0x0440(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         SourceLength;                                      // 0x0450(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseUnrealIntensity : 1;                           // 0x0454(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_455[0x3];                                      // 0x0455(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetLightFalloffExponent(float NewLightFalloffExponent);
	void SetSoftSourceRadius(float bNewValue);
	void SetSourceLength(float NewValue);
	void SetSourceRadius(float bNewValue);
	void SetUseInverseSquaredFalloff(bool NewValue);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PointLightComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PointLightComponent")
	}
	static class UPointLightComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPointLightComponent>();
	}
};
#pragma pack(pop)

// Class Engine.SpotLightComponent
// 0x0030 (0x0490 - 0x0460)
class USpotLightComponent : public UPointLightComponent
{
public:
	float                                         InnerConeAngle;                                    // 0x0458(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OuterConeAngle;                                    // 0x045C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LightShaftConeAngle;                               // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_464[0x4];                                      // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALightShadowVolume*                     SpotLightShadowVolume;                             // 0x0468(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ALightShadowVolume*>             ExtraSpotLightShadowVolumes;                       // 0x0470(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bEnableShadowCache;                                // 0x0480(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsePreBakeShadowDepthMap;                         // 0x0481(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_482[0x2];                                      // 0x0482(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PreBakeShadowDepthMapResolution;                   // 0x0484(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPreBakeShadowDepthMap*                 PreBakeShadowDepthMap;                             // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void BakeShadowDepth();
	void SetInnerConeAngle(float NewInnerConeAngle);
	void SetOuterConeAngle(float NewOuterConeAngle);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SpotLightComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SpotLightComponent")
	}
	static class USpotLightComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpotLightComponent>();
	}
};

// Class Engine.InterpTrackInstLinearColorProp
// 0x0018 (0x0068 - 0x0050)
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty
{
public:
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           ResetColor;                                        // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstLinearColorProp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstLinearColorProp")
	}
	static class UInterpTrackInstLinearColorProp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstLinearColorProp>();
	}
};

// Class Engine.DefaultPhysicsVolume
// 0x0000 (0x03B8 - 0x03B8)
class ADefaultPhysicsVolume : public APhysicsVolume
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DefaultPhysicsVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DefaultPhysicsVolume")
	}
	static class ADefaultPhysicsVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADefaultPhysicsVolume>();
	}
};

// Class Engine.PendingNetGame
// 0x0098 (0x00C0 - 0x0028)
class UPendingNetGame : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UNetDriver*                             NetDriver;                                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDemoNetDriver*                         DemoNetDriver;                                     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_40[0x80];                                      // 0x0040(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PendingNetGame")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PendingNetGame")
	}
	static class UPendingNetGame* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPendingNetGame>();
	}
};

// Class Engine.InterpTrackInstEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstEvent : public UInterpTrackInst
{
public:
	float                                         LastUpdatePosition;                                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstEvent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstEvent")
	}
	static class UInterpTrackInstEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstEvent>();
	}
};

// Class Engine.DemoPendingNetGame
// 0x0000 (0x00C0 - 0x00C0)
class UDemoPendingNetGame : public UPendingNetGame
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DemoPendingNetGame")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DemoPendingNetGame")
	}
	static class UDemoPendingNetGame* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDemoPendingNetGame>();
	}
};

// Class Engine.SoundEffectSourcePreset
// 0x0000 (0x0040 - 0x0040)
class USoundEffectSourcePreset : public USoundEffectPreset
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundEffectSourcePreset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundEffectSourcePreset")
	}
	static class USoundEffectSourcePreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundEffectSourcePreset>();
	}
};

// Class Engine.DestructibleInterface
// 0x0000 (0x0000 - 0x0000)
class IDestructibleInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DestructibleInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DestructibleInterface")
	}
	static class IDestructibleInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IDestructibleInterface>();
	}
};

// Class Engine.InterpTrackInstAudioMaster
// 0x0000 (0x0028 - 0x0028)
class UInterpTrackInstAudioMaster : public UInterpTrackInst
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstAudioMaster")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstAudioMaster")
	}
	static class UInterpTrackInstAudioMaster* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstAudioMaster>();
	}
};

// Class Engine.DetActorWhiteList
// 0x0068 (0x00A0 - 0x0038)
class UDetActorWhiteList : public UDeveloperSettings
{
public:
	TArray<class FString>                         ClassList;                                         // 0x0038(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_48[0x58];                                      // 0x0048(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DetActorWhiteList")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DetActorWhiteList")
	}
	static class UDetActorWhiteList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDetActorWhiteList>();
	}
};

// Class Engine.TimecodeProvider
// 0x0008 (0x0030 - 0x0028)
class UTimecodeProvider : public UObject
{
public:
	int32                                         FrameDelay;                                        // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FTimecode GetDelayedTimecode() const;
	struct FFrameRate GetFrameRate() const;
	ETimecodeProviderSynchronizationState GetSynchronizationState() const;
	struct FTimecode GetTimecode() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TimecodeProvider")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TimecodeProvider")
	}
	static class UTimecodeProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimecodeProvider>();
	}
};

// Class Engine.InterpTrackInstVisibility
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstVisibility : public UInterpTrackInst
{
public:
	EVisibilityTrackAction                        Action;                                            // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LastUpdatePosition;                                // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstVisibility")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstVisibility")
	}
	static class UInterpTrackInstVisibility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstVisibility>();
	}
};

// Class Engine.TextureLODSettings
// 0x0010 (0x0038 - 0x0028)
class UTextureLODSettings : public UObject
{
public:
	TArray<struct FTextureLODGroup>               TextureLODGroups;                                  // 0x0028(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TextureLODSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TextureLODSettings")
	}
	static class UTextureLODSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextureLODSettings>();
	}
};

// Class Engine.DeviceProfile
// 0x0060 (0x0098 - 0x0038)
class UDeviceProfile : public UTextureLODSettings
{
public:
	class FString                                 DeviceType;                                        // 0x0038(0x0010)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 BaseProfileName;                                   // 0x0048(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                Parent;                                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x18];                                      // 0x0060(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CVars;                                             // 0x0078(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x10];                                      // 0x0088(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DeviceProfile")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DeviceProfile")
	}
	static class UDeviceProfile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeviceProfile>();
	}
};

// Class Engine.InterpTrackInstParticleReplay
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstParticleReplay : public UInterpTrackInst
{
public:
	float                                         LastUpdatePosition;                                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstParticleReplay")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstParticleReplay")
	}
	static class UInterpTrackInstParticleReplay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstParticleReplay>();
	}
};

// Class Engine.DeviceProfileManager
// 0x0088 (0x00B0 - 0x0028)
class UDeviceProfileManager : public UObject
{
public:
	TArray<class UObject*>                        Profiles;                                          // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x78];                                      // 0x0038(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DeviceProfileManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DeviceProfileManager")
	}
	static class UDeviceProfileManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeviceProfileManager>();
	}
};

// Class Engine.InterpTrackInstFloatAnimBPParam
// 0x0018 (0x0040 - 0x0028)
class UInterpTrackInstFloatAnimBPParam : public UInterpTrackInst
{
public:
	class UAnimInstance*                          AnimScriptInstance;                                // 0x0028(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ResetFloat;                                        // 0x0030(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0xC];                                       // 0x0034(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstFloatAnimBPParam")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstFloatAnimBPParam")
	}
	static class UInterpTrackInstFloatAnimBPParam* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstFloatAnimBPParam>();
	}
};

// Class Engine.DialogueVoice
// 0x0018 (0x0040 - 0x0028)
class UDialogueVoice : public UObject
{
public:
	EGrammaticalGender                            gender;                                            // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGrammaticalNumber                            Plurality;                                         // 0x0029(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  LocalizationGUID;                                  // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DialogueVoice")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DialogueVoice")
	}
	static class UDialogueVoice* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDialogueVoice>();
	}
};

// Class Engine.DialogueWave
// 0x0048 (0x0070 - 0x0028)
class UDialogueWave : public UObject
{
public:
	uint8                                         bMature : 1;                                       // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_SubtitleOverride : 1;                    // 0x0028(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SpokenText;                                        // 0x0030(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SubtitleOverride;                                  // 0x0040(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDialogueContextMapping>        ContextMappings;                                   // 0x0050(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                  LocalizationGUID;                                  // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DialogueWave")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DialogueWave")
	}
	static class UDialogueWave* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDialogueWave>();
	}
};

// Class Engine.DistributionFloatConstant
// 0x0008 (0x0040 - 0x0038)
class UDistributionFloatConstant : public UDistributionFloat
{
public:
	float                                         Constant;                                          // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DistributionFloatConstant")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DistributionFloatConstant")
	}
	static class UDistributionFloatConstant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDistributionFloatConstant>();
	}
};

// Class Engine.InterpTrackSlomo
// 0x0000 (0x0090 - 0x0090)
class UInterpTrackSlomo : public UInterpTrackFloatBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackSlomo")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackSlomo")
	}
	static class UInterpTrackSlomo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackSlomo>();
	}
};

// Class Engine.DistributionFloatConstantCurve
// 0x0018 (0x0050 - 0x0038)
class UDistributionFloatConstantCurve : public UDistributionFloat
{
public:
	struct FInterpCurveFloat                      ConstantCurve;                                     // 0x0038(0x0018)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DistributionFloatConstantCurve")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DistributionFloatConstantCurve")
	}
	static class UDistributionFloatConstantCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDistributionFloatConstantCurve>();
	}
};

// Class Engine.DistributionFloatParameterBase
// 0x0020 (0x0060 - 0x0040)
class UDistributionFloatParameterBase : public UDistributionFloatConstant
{
public:
	class FName                                   ParameterName;                                     // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinInput;                                          // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxInput;                                          // 0x004C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinOutput;                                         // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxOutput;                                         // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDistributionParamMode                        ParamMode;                                         // 0x0058(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DistributionFloatParameterBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DistributionFloatParameterBase")
	}
	static class UDistributionFloatParameterBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDistributionFloatParameterBase>();
	}
};

// Class Engine.SoundClass
// 0x0068 (0x0090 - 0x0028)
class USoundClass : public UObject
{
public:
	struct FSoundClassProperties                  Properties;                                        // 0x0028(0x0030)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class USoundClass*>                    ChildClasses;                                      // 0x0058(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPassiveSoundMixModifier>       PassiveSoundMixModifiers;                          // 0x0068(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSoundModulation                       Modulation;                                        // 0x0078(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class USoundClass*                            ParentClass;                                       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundClass")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundClass")
	}
	static class USoundClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundClass>();
	}
};

// Class Engine.KismetInternationalizationLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetInternationalizationLibrary : public UBlueprintFunctionLibrary
{
public:
	static void ClearCurrentAssetGroupCulture(const class FName AssetGroup, const bool SaveToConfig);
	static class FString GetCultureDisplayName(const class FString& Culture, const bool Localized);
	static class FString GetCurrentAssetGroupCulture(const class FName AssetGroup);
	static class FString GetCurrentCulture();
	static class FString GetCurrentLanguage();
	static class FString GetCurrentLocale();
	static TArray<class FString> GetLocalizedCultures(const bool IncludeGame, const bool IncludeEngine, const bool IncludeEditor, const bool IncludeAdditional);
	static class FString GetNativeCulture(const ELocalizedTextSourceCategory TextCategory);
	static class FString GetSuitableCulture(const TArray<class FString>& AvailableCultures, const class FString& CultureToMatch, const class FString& FallbackCulture);
	static bool SetCurrentAssetGroupCulture(const class FName AssetGroup, const class FString& Culture, const bool SaveToConfig);
	static bool SetCurrentCulture(const class FString& Culture, const bool SaveToConfig);
	static bool SetCurrentLanguage(const class FString& Culture, const bool SaveToConfig);
	static bool SetCurrentLanguageAndLocale(const class FString& Culture, const bool SaveToConfig);
	static bool SetCurrentLocale(const class FString& Culture, const bool SaveToConfig);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("KismetInternationalizationLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"KismetInternationalizationLibrary")
	}
	static class UKismetInternationalizationLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetInternationalizationLibrary>();
	}
};

// Class Engine.DistributionFloatParticleParameter
// 0x0000 (0x0060 - 0x0060)
class UDistributionFloatParticleParameter : public UDistributionFloatParameterBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DistributionFloatParticleParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DistributionFloatParticleParameter")
	}
	static class UDistributionFloatParticleParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDistributionFloatParticleParameter>();
	}
};

// Class Engine.DistributionFloatUniform
// 0x0008 (0x0040 - 0x0038)
class UDistributionFloatUniform : public UDistributionFloat
{
public:
	float                                         Min;                                               // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Max;                                               // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DistributionFloatUniform")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DistributionFloatUniform")
	}
	static class UDistributionFloatUniform* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDistributionFloatUniform>();
	}
};

// Class Engine.InterpTrackVectorProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackVectorProp : public UInterpTrackVectorBase
{
public:
	class FName                                   PropertyName;                                      // 0x0090(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackVectorProp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackVectorProp")
	}
	static class UInterpTrackVectorProp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackVectorProp>();
	}
};

// Class Engine.DistributionFloatUniformCurve
// 0x0018 (0x0050 - 0x0038)
class UDistributionFloatUniformCurve : public UDistributionFloat
{
public:
	struct FInterpCurveVector2D                   ConstantCurve;                                     // 0x0038(0x0018)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DistributionFloatUniformCurve")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DistributionFloatUniformCurve")
	}
	static class UDistributionFloatUniformCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDistributionFloatUniformCurve>();
	}
};

// Class Engine.KismetGuidLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetGuidLibrary : public UBlueprintFunctionLibrary
{
public:
	static class FString Conv_GuidToString(const struct FGuid& InGUID);
	static bool EqualEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);
	static void Invalidate_Guid(struct FGuid& InGUID);
	static bool IsValid_Guid(const struct FGuid& InGUID);
	static struct FGuid NewGuid();
	static bool NotEqual_GuidGuid(const struct FGuid& A, const struct FGuid& B);
	static void Parse_StringToGuid(const class FString& GuidString, struct FGuid* OutGUID, bool* Success);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("KismetGuidLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"KismetGuidLibrary")
	}
	static class UKismetGuidLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetGuidLibrary>();
	}
};

// Class Engine.KismetTextLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetTextLibrary : public UBlueprintFunctionLibrary
{
public:
	static class FText AsCurrency_Float(float Value, ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits, const class FString& CurrencyCode);
	static class FText AsCurrency_Integer(int32 Value, ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits, const class FString& CurrencyCode);
	static class FText AsCurrencyBase(int32 BaseValue, const class FString& CurrencyCode);
	static class FText AsDate_DateTime(const struct FDateTime& InDateTime);
	static class FText AsDateTime_DateTime(const struct FDateTime& In);
	static class FText AsPercent_Float(float Value, ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits);
	static class FText AsTime_DateTime(const struct FDateTime& In);
	static class FText AsTimespan_Timespan(const struct FTimespan& InTimespan);
	static class FText AsTimeZoneDate_DateTime(const struct FDateTime& InDateTime, const class FString& InTimeZone);
	static class FText AsTimeZoneDateTime_DateTime(const struct FDateTime& InDateTime, const class FString& InTimeZone);
	static class FText AsTimeZoneTime_DateTime(const struct FDateTime& InDateTime, const class FString& InTimeZone);
	static class FText Conv_BoolToText(bool Inbool);
	static class FText Conv_ByteToText(uint8 Value);
	static class FText Conv_ColorToText(const struct FLinearColor& InColor);
	static class FText Conv_FloatToText(float Value, ERoundingMode RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits);
	static class FText Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
	static class FText Conv_IntToText(int32 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
	static class FText Conv_NameToText(class FName InName);
	static class FText Conv_ObjectToText(class UObject* InObj);
	static class FText Conv_RotatorToText(const struct FRotator& InRot);
	static class FText Conv_StringToText(const class FString& inString);
	static class FString Conv_TextToString(const class FText& InText);
	static class FText Conv_TransformToText(const struct FTransform& InTrans);
	static class FText Conv_Vector2dToText(const struct FVector2D& InVec);
	static class FText Conv_VectorToText(const struct FVector& InVec);
	static bool EqualEqual_IgnoreCase_TextText(const class FText& A, const class FText& B);
	static bool EqualEqual_TextText(const class FText& A, const class FText& B);
	static bool FindTextInLocalizationTable(const class FString& Namespace, const class FString& Key, class FText* OutText);
	static class FText Format(const class FText& InPattern, const TArray<struct FFormatArgumentData>& InArgs);
	static class FText GetEmptyText();
	static void IsPolyglotDataValid(const struct FPolyglotTextData& PolyglotData, bool* IsValid, class FText* ErrorMessage);
	static bool NotEqual_IgnoreCase_TextText(const class FText& A, const class FText& B);
	static bool NotEqual_TextText(const class FText& A, const class FText& B);
	static class FText PolyglotDataToText(const struct FPolyglotTextData& PolyglotData);
	static bool StringTableIdAndKeyFromText(const class FText& Text, class FName* OutTableId, class FString* OutKey);
	static class FText TextFromStringTable(const class FName TableId, const class FString& Key);
	static bool TextIsCultureInvariant(const class FText& InText);
	static bool TextIsEmpty(const class FText& InText);
	static bool TextIsFromStringTable(const class FText& Text);
	static bool TextIsTransient(const class FText& InText);
	static class FText TextToLower(const class FText& InText);
	static class FText TextToUpper(const class FText& InText);
	static class FText TextTrimPreceding(const class FText& InText);
	static class FText TextTrimPrecedingAndTrailing(const class FText& InText);
	static class FText TextTrimTrailing(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("KismetTextLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"KismetTextLibrary")
	}
	static class UKismetTextLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetTextLibrary>();
	}
};

// Class Engine.DistributionVectorUniform
// 0x0028 (0x0060 - 0x0038)
class UDistributionVectorUniform : public UDistributionVector
{
public:
	struct FVector                                Max;                                               // 0x0038(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Min;                                               // 0x0044(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bLockAxes : 1;                                     // 0x0050(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EDistributionVectorLockFlags                  LockedAxes;                                        // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDistributionVectorMirrorFlags                MirrorFlags[0x3];                                  // 0x0055(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseExtremes : 1;                                  // 0x0058(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DistributionVectorUniform")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DistributionVectorUniform")
	}
	static class UDistributionVectorUniform* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDistributionVectorUniform>();
	}
};

// Class Engine.DistributionVectorUniformCurve
// 0x0028 (0x0060 - 0x0038)
class UDistributionVectorUniformCurve : public UDistributionVector
{
public:
	struct FInterpCurveTwoVectors                 ConstantCurve;                                     // 0x0038(0x0018)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bLockAxes1 : 1;                                    // 0x0050(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bLockAxes2 : 1;                                    // 0x0050(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EDistributionVectorLockFlags                  LockedAxes[0x2];                                   // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDistributionVectorMirrorFlags                MirrorFlags[0x3];                                  // 0x0056(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bUseExtremes : 1;                                  // 0x005C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DistributionVectorUniformCurve")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DistributionVectorUniformCurve")
	}
	static class UDistributionVectorUniformCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDistributionVectorUniformCurve>();
	}
};

// Class Engine.DrawFrustumComponent
// 0x0020 (0x05B0 - 0x0590)
class UDrawFrustumComponent : public UPrimitiveComponent
{
public:
	struct FColor                                 FrustumColor;                                      // 0x0588(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrustumAngle;                                      // 0x058C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrustumAspectRatio;                                // 0x0590(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrustumStartDist;                                  // 0x0594(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrustumEndDist;                                    // 0x0598(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59C[0x4];                                      // 0x059C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               Texture;                                           // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5A8[0x8];                                      // 0x05A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DrawFrustumComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DrawFrustumComponent")
	}
	static class UDrawFrustumComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDrawFrustumComponent>();
	}
};

// Class Engine.IntSerialization
// 0x0028 (0x0050 - 0x0028)
class UIntSerialization : public UObject
{
public:
	uint16                                        UnsignedInt16Variable;                             // 0x0028(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A[0x2];                                       // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        UnsignedInt32Variable;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                        UnsignedInt64Variable;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                          SignedInt8Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x1];                                       // 0x0039(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int16                                         SignedInt16Variable;                               // 0x003A(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         SignedInt64Variable;                               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         UnsignedInt8Variable;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SignedInt32Variable;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("IntSerialization")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"IntSerialization")
	}
	static class UIntSerialization* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIntSerialization>();
	}
};

// Class Engine.DrawSphereComponent
// 0x0000 (0x05B0 - 0x05B0)
class UDrawSphereComponent : public USphereComponent
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DrawSphereComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DrawSphereComponent")
	}
	static class UDrawSphereComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDrawSphereComponent>();
	}
};

// Class Engine.DynamicTexture2DArray
// 0x0058 (0x0188 - 0x0130)
class UDynamicTexture2DArray : public UTexture
{
public:
	TArray<TSoftObjectPtr<class UTexture2D>>      TextureArray;                                      // 0x0130(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint32                                        SlotCount;                                         // 0x0140(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressX;                                          // 0x0144(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressY;                                          // 0x0145(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureAddress                               AddressZ;                                          // 0x0146(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_147[0x1];                                      // 0x0147(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntVector                             CachedSize;                                        // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CachedNumMip;                                      // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_158[0x4];                                      // 0x0158(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	EPixelFormat                                  CachedPF;                                          // 0x015C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bResetSubTexture;                                  // 0x015D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCheckSubTextureButton;                            // 0x015E(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15F[0x29];                                     // 0x015F(0x0029)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("DynamicTexture2DArray")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"DynamicTexture2DArray")
	}
	static class UDynamicTexture2DArray* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicTexture2DArray>();
	}
};

// Class Engine.GraphNodeContextMenuContext
// 0x0028 (0x0050 - 0x0028)
class UGraphNodeContextMenuContext : public UObject
{
public:
	class UBlueprint*                             Blueprint;                                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEdGraph*                               Graph;                                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEdGraphNode*                           Node;                                              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_40[0x8];                                       // 0x0040(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bIsDebugging;                                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GraphNodeContextMenuContext")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GraphNodeContextMenuContext")
	}
	static class UGraphNodeContextMenuContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGraphNodeContextMenuContext>();
	}
};

// Class Engine.ProxyLODMeshSimplificationSettings
// 0x0008 (0x0040 - 0x0038)
class UProxyLODMeshSimplificationSettings : public UDeveloperSettings
{
public:
	class FName                                   ProxyLODMeshReductionModuleName;                   // 0x0038(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ProxyLODMeshSimplificationSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ProxyLODMeshSimplificationSettings")
	}
	static class UProxyLODMeshSimplificationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProxyLODMeshSimplificationSettings>();
	}
};

// Class Engine.LevelStreamingAlwaysLoaded
// 0x0000 (0x0150 - 0x0150)
class ULevelStreamingAlwaysLoaded : public ULevelStreaming
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LevelStreamingAlwaysLoaded")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LevelStreamingAlwaysLoaded")
	}
	static class ULevelStreamingAlwaysLoaded* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelStreamingAlwaysLoaded>();
	}
};

// Class Engine.EdGraphNode
// 0x0070 (0x0098 - 0x0028)
class UEdGraphNode : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UEdGraphPin_Deprecated*>         DeprecatedPins;                                    // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         NodePosX;                                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NodePosY;                                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NodeWidth;                                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NodeHeight;                                        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENodeAdvancedPins                             AdvancedPinDisplay;                                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENodeEnabledState                             EnabledState;                                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_5A[0x1];                                       // 0x005A(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         BitPad_5B_0 : 1;                                   // 0x005B(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bDisplayAsDisabled : 1;                            // 0x005B(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bUserSetEnabledState : 1;                          // 0x005B(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         BitPad_5B_3 : 1;                                   // 0x005B(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bIsNodeEnabled : 1;                                // 0x005B(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         BitPad_5B_5 : 1;                                   // 0x005B(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bHasCompilerMessage : 1;                           // 0x005B(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 NodeComment;                                       // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ErrorType;                                         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ErrorMsg;                                          // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  NodeGuid;                                          // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("EdGraphNode")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"EdGraphNode")
	}
	static class UEdGraphNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEdGraphNode>();
	}
};

// Class Engine.EdGraphNode_Documentation
// 0x0020 (0x00B8 - 0x0098)
class UEdGraphNode_Documentation : public UEdGraphNode
{
public:
	class FString                                 Link;                                              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Excerpt;                                           // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("EdGraphNode_Documentation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"EdGraphNode_Documentation")
	}
	static class UEdGraphNode_Documentation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEdGraphNode_Documentation>();
	}
};

// Class Engine.Layer
// 0x0020 (0x0048 - 0x0028)
class ULayer : public UObject
{
public:
	class FName                                   LayerName;                                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsVisible : 1;                                    // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLayerActorStats>               ActorStats;                                        // 0x0038(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Layer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Layer")
	}
	static class ULayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULayer>();
	}
};

// Class Engine.EdGraphPin_Deprecated
// 0x00F0 (0x0118 - 0x0028)
class UEdGraphPin_Deprecated : public UObject
{
public:
	class FString                                 PinName;                                           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PinToolTip;                                        // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEdGraphPinDirection                          Direction;                                         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEdGraphPinType                        PinType;                                           // 0x0050(0x0058)(NoDestructor, NativeAccessSpecifierPublic)
	class FString                                 DefaultValue;                                      // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AutogeneratedDefaultValue;                         // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                DefaultObject;                                     // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   DefaultTextValue;                                  // 0x00D0(0x0018)(NativeAccessSpecifierPublic)
	TArray<class UEdGraphPin_Deprecated*>         LinkedTo;                                          // 0x00E8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UEdGraphPin_Deprecated*>         SubPins;                                           // 0x00F8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UEdGraphPin_Deprecated*                 ParentPin;                                         // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEdGraphPin_Deprecated*                 ReferencePassThroughConnection;                    // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("EdGraphPin_Deprecated")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"EdGraphPin_Deprecated")
	}
	static class UEdGraphPin_Deprecated* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEdGraphPin_Deprecated>();
	}
};

// Class Engine.Scene
// 0x0000 (0x0028 - 0x0028)
class UScene : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Scene")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Scene")
	}
	static class UScene* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScene>();
	}
};

// Class Engine.EdGraphSchema
// 0x0000 (0x0028 - 0x0028)
class UEdGraphSchema : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("EdGraphSchema")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"EdGraphSchema")
	}
	static class UEdGraphSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEdGraphSchema>();
	}
};

// Class Engine.KismetRenderingLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetRenderingLibrary : public UBlueprintFunctionLibrary
{
public:
	static void BeginDrawCanvasToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UCanvas** Canvas, struct FVector2D* size, struct FDrawToRenderTargetContext* Context, bool immediateDrawing);
	static void BreakSkinWeightInfo(const struct FSkelMeshSkinWeightInfo& InWeight, int32* Bone0, uint8* Weight0, int32* Bone1, uint8* Weight1, int32* Bone2, uint8* Weight2, int32* Bone3, uint8* Weight3);
	static void BuildReflectionCaptures();
	static void ClearRenderTarget2D(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const struct FLinearColor& ClearColor);
	static void ConvertRenderTargetToTexture2DEditorOnly(class UObject* WorldContextObject, class UTextureRenderTarget2D* RenderTarget, class UTexture2D* Texture);
	static void ConvertRenderTargetToTextureCubeEditorOnly(class UObject* WorldContextObject, class UTextureRenderTargetCube* RenderTarget, class UTextureCube* TextureCube);
	static class UTextureRenderTarget2D* CreateRenderTarget2D(class UObject* WorldContextObject, int32 Width, int32 Height, ETextureRenderTargetFormat Format, const struct FLinearColor& ClearColor, bool bAutoGenerateMipMaps, bool bAutoFillMipMaps, bool bClearRenderTargetImmediatly);
	static void DrawMaterialToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UMaterialInterface* Material);
	static void DrawMaterialToRenderTargetWithCoordinate(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UMaterialInterface* Material, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize);
	static void EndDrawCanvasToRenderTarget(class UObject* WorldContextObject, const struct FDrawToRenderTargetContext& Context);
	static void ExportRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const class FString& FilePath, const class FString& Filename);
	static void ExportTexture2D(class UObject* WorldContextObject, class UTexture2D* Texture, const class FString& FilePath, const class FString& Filename);
	static class UTexture2D* ImportBufferAsTexture2D(class UObject* WorldContextObject, const TArray<uint8>& Buffer);
	static class UTexture2D* ImportFileAsTexture2D(class UObject* WorldContextObject, const class FString& Filename);
	static struct FSkelMeshSkinWeightInfo MakeSkinWeightInfo(int32 Bone0, uint8 Weight0, int32 Bone1, uint8 Weight1, int32 Bone2, uint8 Weight2, int32 Bone3, uint8 Weight3);
	static struct FColor ReadRenderTargetPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int32 X, int32 Y);
	static struct FLinearColor ReadRenderTargetRawPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int32 X, int32 Y);
	static struct FLinearColor ReadRenderTargetRawUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
	static struct FColor ReadRenderTargetUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
	static void ReleaseRenderTarget2D(class UTextureRenderTarget2D* TextureRenderTarget);
	static class UTexture2D* RenderTargetCreateStaticTexture2DEditorOnly(class UTextureRenderTarget2D* RenderTarget, const class FString& Name_0, bool bForceOverride, ETextureCompressionSettings CompressionSettings, ETextureMipGenSettings MipSettings);
	static class UTextureCube* RenderTargetCreateStaticTextureCubeEditorOnly(class UTextureRenderTargetCube* RenderTarget, const class FString& Name_0, bool bForceOverride, ETextureCompressionSettings CompressionSettings, ETextureMipGenSettings MipSettings);
	static void SetCastInsetShadowForAllAttachments(class UPrimitiveComponent* PrimitiveComponent, bool bCastInsetShadow, bool bLightAttachmentsAsGroup);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("KismetRenderingLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"KismetRenderingLibrary")
	}
	static class UKismetRenderingLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetRenderingLibrary>();
	}
};
