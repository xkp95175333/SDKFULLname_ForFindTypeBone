
// Class Engine.ParticleModuleSizeScale
// 0x0060 (0x0090 - 0x0030)
class UParticleModuleSizeScale : public UParticleModuleSizeBase
{
public:
	struct FRawDistributionVector                 SizeScale;                                         // 0x0030(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          bConsiderCameraDistanceSizeScalar;                 // 0x0078(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartCameraDistance;                               // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndCameraDistance;                                 // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartSizeScalar;                                   // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndSizeScalar;                                     // 0x0088(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         EnableX : 1;                                       // 0x008C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         EnableY : 1;                                       // 0x008C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         EnableZ : 1;                                       // 0x008C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleSizeScale")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleSizeScale")
	}
	static class UParticleModuleSizeScale* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleSizeScale>();
	}
};

// Class Engine.ParticleModuleSizeScaleBySpeed
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase
{
public:
	struct FVector2D                              SpeedScale;                                        // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              MaxScale;                                          // 0x0038(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleSizeScaleBySpeed")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleSizeScaleBySpeed")
	}
	static class UParticleModuleSizeScaleBySpeed* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleSizeScaleBySpeed>();
	}
};

// Class Engine.ParticleModuleSourceMovement
// 0x0048 (0x0078 - 0x0030)
class UParticleModuleSourceMovement : public UParticleModuleLocationBase
{
public:
	struct FRawDistributionVector                 SourceMovementScale;                               // 0x0030(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleSourceMovement")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleSourceMovement")
	}
	static class UParticleModuleSourceMovement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleSourceMovement>();
	}
};

// Class Engine.ParticleModuleSpawnPerUnit
// 0x0040 (0x0078 - 0x0038)
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
public:
	float                                         UnitScalar;                                        // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MovementTolerance;                                 // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  SpawnPerUnit;                                      // 0x0040(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                         MaxFrameDistance;                                  // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIgnoreSpawnRateWhenMoving : 1;                    // 0x0074(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIgnoreMovementAlongX : 1;                         // 0x0074(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIgnoreMovementAlongY : 1;                         // 0x0074(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIgnoreMovementAlongZ : 1;                         // 0x0074(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleSpawnPerUnit")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleSpawnPerUnit")
	}
	static class UParticleModuleSpawnPerUnit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleSpawnPerUnit>();
	}
};

// Class Engine.ParticleModuleSubUV
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleSubUV : public UParticleModuleSubUVBase
{
public:
	class USubUVAnimation*                        Animation;                                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  SubImageIndex;                                     // 0x0038(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bUseRealTime : 1;                                  // 0x0068(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleSubUV")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleSubUV")
	}
	static class UParticleModuleSubUV* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleSubUV>();
	}
};

// Class Engine.ParticleModuleSubUVMovie
// 0x0040 (0x00B0 - 0x0070)
class UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
public:
	uint8                                         bUseEmitterTime : 1;                               // 0x0070(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionFloat                  FrameRate;                                         // 0x0078(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                         StartingFrame;                                     // 0x00A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleSubUVMovie")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleSubUVMovie")
	}
	static class UParticleModuleSubUVMovie* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleSubUVMovie>();
	}
};

// Class Engine.ParticleModuleTypeDataBeam2
// 0x0120 (0x0150 - 0x0030)
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
public:
	EBeam2Method                                  BeamMethod;                                        // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextureTile;                                       // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TextureTileDistance;                               // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Sheets;                                            // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxBeamCount;                                      // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Speed;                                             // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InterpolationPoints;                               // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAlwaysOn : 1;                                     // 0x004C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UpVectorStepSize;                                  // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BranchParentName;                                  // 0x0054(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionFloat                  Distance;                                          // 0x0060(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	EBeamTaperMethod                              TaperMethod;                                       // 0x0090(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionFloat                  TaperFactor;                                       // 0x0098(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  TaperScale;                                        // 0x00C8(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         RenderGeometry : 1;                                // 0x00F8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         RenderDirectLine : 1;                              // 0x00F8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         RenderLines : 1;                                   // 0x00F8(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         RenderTessellation : 1;                            // 0x00F8(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_F9[0x57];                                      // 0x00F9(0x0057)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleTypeDataBeam2")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleTypeDataBeam2")
	}
	static class UParticleModuleTypeDataBeam2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleTypeDataBeam2>();
	}
};

// Class Engine.ParticleModuleTypeDataGpuMesh
// 0x0350 (0x0380 - 0x0030)
class UParticleModuleTypeDataGpuMesh : public UParticleModuleTypeDataBase
{
public:
	class UStaticMesh*                            Mesh;                                              // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LODSizeScale;                                      // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseStaticMeshLODs : 1;                            // 0x003C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	EMeshScreenAlignment                          MeshAlignment;                                     // 0x003D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EParticleAxisLock                             AxisLockOption;                                    // 0x003E(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseDynamicMaterialParams : 1;                     // 0x003F(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	struct FGPUMeshEmitterInfo                    EmitterInfo;                                       // 0x0040(0x01D8)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_218[0x8];                                      // 0x0218(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGPUMeshResourceData                   ResourceData;                                      // 0x0220(0x0150)(NativeAccessSpecifierPublic)
	float                                         CameraMotionBlurAmount;                            // 0x0370(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bClearExistingParticlesOnInit : 1;                 // 0x0374(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_375[0xB];                                      // 0x0375(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleTypeDataGpuMesh")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleTypeDataGpuMesh")
	}
	static class UParticleModuleTypeDataGpuMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleTypeDataGpuMesh>();
	}
};

// Class Engine.ParticleModuleTypeDataMesh
// 0x0068 (0x0098 - 0x0030)
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
public:
	class UStaticMesh*                            Mesh;                                              // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LODSizeScale;                                      // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseStaticMeshLODs : 1;                            // 0x0044(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         CastShadows : 1;                                   // 0x0044(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         DoCollisions : 1;                                  // 0x0044(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	EMeshScreenAlignment                          MeshAlignment;                                     // 0x0045(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bOverrideMaterial : 1;                             // 0x0046(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideDefaultMotionBlurSettings : 1;            // 0x0046(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableMotionBlur : 1;                             // 0x0046(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_47[0x1];                                       // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionVector                 RollPitchYawRange;                                 // 0x0048(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	EParticleAxisLock                             AxisLockOption;                                    // 0x0090(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bCameraFacing : 1;                                 // 0x0091(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	EMeshCameraFacingUpAxis                       CameraFacingUpAxisOption;                          // 0x0092(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMeshCameraFacingOptions                      CameraFacingOption;                                // 0x0093(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bApplyParticleRotationAsSpin : 1;                  // 0x0094(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFaceCameraDirectionRatherThanPosition : 1;        // 0x0094(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCollisionsConsiderPartilceSize : 1;               // 0x0094(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCanBeInCluster : 1;                               // 0x0094(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleTypeDataMesh")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleTypeDataMesh")
	}
	static class UParticleModuleTypeDataMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleTypeDataMesh>();
	}
};

// Class Engine.ParticleModuleTypeDataRibbon
// 0x0030 (0x0060 - 0x0030)
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
public:
	int32                                         MaxTessellationBetweenParticles;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SheetsPerTrail;                                    // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxTrailCount;                                     // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxParticleInTrailCount;                           // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDeadTrailsOnDeactivate : 1;                       // 0x0040(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDeadTrailsOnSourceLoss : 1;                       // 0x0040(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bClipSourceSegement : 1;                           // 0x0040(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnablePreviousTangentRecalculation : 1;           // 0x0040(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTangentRecalculationEveryFrame : 1;               // 0x0040(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSpawnInitialParticle : 1;                         // 0x0040(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	ETrailsRenderAxisOption                       RenderAxis;                                        // 0x0044(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TangentSpawningScalar;                             // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bRenderGeometry : 1;                               // 0x004C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRenderSpawnPoints : 1;                            // 0x004C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRenderTangents : 1;                               // 0x004C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRenderTessellation : 1;                           // 0x004C(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TilingDistance;                                    // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceTessellationStepSize;                      // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bEnableTangentDiffInterpScale : 1;                 // 0x0058(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TangentTessellationScalar;                         // 0x005C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleTypeDataRibbon")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleTypeDataRibbon")
	}
	static class UParticleModuleTypeDataRibbon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleTypeDataRibbon>();
	}
};

// Class Engine.ParticleModuleVectorFieldRotation
// 0x0018 (0x0048 - 0x0030)
class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase
{
public:
	struct FVector                                MinInitialRotation;                                // 0x0030(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                MaxInitialRotation;                                // 0x003C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleVectorFieldRotation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleVectorFieldRotation")
	}
	static class UParticleModuleVectorFieldRotation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleVectorFieldRotation>();
	}
};

// Class Engine.ParticleModuleVectorFieldScale
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase
{
public:
	class UDistributionFloat*                     VectorFieldScale;                                  // 0x0030(0x0008)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  VectorFieldScaleRaw;                               // 0x0038(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleVectorFieldScale")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleVectorFieldScale")
	}
	static class UParticleModuleVectorFieldScale* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleVectorFieldScale>();
	}
};

// Class Engine.ParticleModuleVectorFieldScaleOverLife
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase
{
public:
	class UDistributionFloat*                     VectorFieldScaleOverLife;                          // 0x0030(0x0008)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  VectorFieldScaleOverLifeRaw;                       // 0x0038(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleVectorFieldScaleOverLife")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleVectorFieldScaleOverLife")
	}
	static class UParticleModuleVectorFieldScaleOverLife* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleVectorFieldScaleOverLife>();
	}
};

// Class Engine.ParticleModuleWindDirectionalSource
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleWindDirectionalSource : public UParticleModuleWindBase
{
public:
	struct FRawDistributionFloat                  WindImpactOverLife;                                // 0x0030(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                         WindDeflectionAngleXY;                             // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleWindDirectionalSource")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleWindDirectionalSource")
	}
	static class UParticleModuleWindDirectionalSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleWindDirectionalSource>();
	}
};

// Class Engine.ParticleSpriteEmitter
// 0x0000 (0x01B8 - 0x01B8)
class UParticleSpriteEmitter : public UParticleEmitter
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleSpriteEmitter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleSpriteEmitter")
	}
	static class UParticleSpriteEmitter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleSpriteEmitter>();
	}
};

// Class Engine.PathFollowingAgentInterface
// 0x0000 (0x0000 - 0x0000)
class IPathFollowingAgentInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PathFollowingAgentInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PathFollowingAgentInterface")
	}
	static class IPathFollowingAgentInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPathFollowingAgentInterface>();
	}
};

// Class Engine.PhysCharacterMovement
// 0x0180 (0x0730 - 0x05B0)
class UPhysCharacterMovement : public UCapsuleComponent
{
public:
	uint8                                         bCollidWithOtherController : 1;                    // 0x05B0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_5B1[0x17F];                                    // 0x05B1(0x017F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysCharacterMovement")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysCharacterMovement")
	}
	static class UPhysCharacterMovement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysCharacterMovement>();
	}
};

// Class Engine.PhysicalMaterialPropertyBase
// 0x0000 (0x0028 - 0x0028)
class UPhysicalMaterialPropertyBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicalMaterialPropertyBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicalMaterialPropertyBase")
	}
	static class UPhysicalMaterialPropertyBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicalMaterialPropertyBase>();
	}
};

// Class Engine.PhysicsAsyncLoaderVolume
// 0x0000 (0x03A8 - 0x03A8)
class APhysicsAsyncLoaderVolume : public AVolume
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsAsyncLoaderVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsAsyncLoaderVolume")
	}
	static class APhysicsAsyncLoaderVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<APhysicsAsyncLoaderVolume>();
	}
};

// Class Engine.PhysicsBoxComponent
// 0x0000 (0x05C0 - 0x05C0)
class UPhysicsBoxComponent : public UBoxComponent
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsBoxComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsBoxComponent")
	}
	static class UPhysicsBoxComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsBoxComponent>();
	}
};

// Class Engine.PhysicsConstraintActor
// 0x0020 (0x0390 - 0x0370)
class APhysicsConstraintActor : public ARigidBodyBase
{
public:
	class UPhysicsConstraintComponent*            ConstraintComp;                                    // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                 ConstraintActor1;                                  // 0x0378(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 ConstraintActor2;                                  // 0x0380(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDisableCollision : 1;                             // 0x0388(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_389[0x7];                                      // 0x0389(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsConstraintActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsConstraintActor")
	}
	static class APhysicsConstraintActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APhysicsConstraintActor>();
	}
};

// Class Engine.PhysicsConstraintTemplate
// 0x02D0 (0x02F8 - 0x0028)
class UPhysicsConstraintTemplate : public UObject
{
public:
	struct FConstraintInstance                    DefaultInstance;                                   // 0x0028(0x01B8)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FPhysicsConstraintProfileHandle> ProfileHandles;                                   // 0x01E0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FConstraintProfileProperties           DefaultProfile;                                    // 0x01F0(0x0104)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsConstraintTemplate")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsConstraintTemplate")
	}
	static class UPhysicsConstraintTemplate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsConstraintTemplate>();
	}
};

// Class Engine.PhysicsHandleComponent
// 0x00A8 (0x01A0 - 0x00F8)
class alignas(0x10) UPhysicsHandleComponent : public UActorComponent
{
public:
	class UPrimitiveComponent*                    GrabbedComponent;                                  // 0x00F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_100[0x8];                                      // 0x0100(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         BitPad_108_0 : 1;                                  // 0x0108(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bSoftAngularConstraint : 1;                        // 0x0108(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSoftLinearConstraint : 1;                         // 0x0108(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bInterpolateTarget : 1;                            // 0x0108(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LinearDamping;                                     // 0x010C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LinearStiffness;                                   // 0x0110(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularDamping;                                    // 0x0114(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularStiffness;                                  // 0x0118(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11C[0x64];                                     // 0x011C(0x0064)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InterpolationSpeed;                                // 0x0180(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_184[0x1C];                                     // 0x0184(0x001C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GrabComponent(class UPrimitiveComponent* Component, class FName InBoneName, const struct FVector& GrabLocation, bool bConstrainRotation);
	void GrabComponentAtLocation(class UPrimitiveComponent* Component, class FName InBoneName, const struct FVector& GrabLocation);
	void GrabComponentAtLocationWithRotation(class UPrimitiveComponent* Component, class FName InBoneName, const struct FVector& Location, const struct FRotator& Rotation);
	void ReleaseComponent();
	void SetAngularDamping(float NewAngularDamping);
	void SetAngularStiffness(float NewAngularStiffness);
	void SetInterpolationSpeed(float NewInterpolationSpeed);
	void SetLinearDamping(float NewLinearDamping);
	void SetLinearStiffness(float NewLinearStiffness);
	void SetTargetLocation(const struct FVector& NewLocation);
	void SetTargetLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void SetTargetRotation(const struct FRotator& NewRotation);

	class UPrimitiveComponent* GetGrabbedComponent() const;
	void GetTargetLocationAndRotation(struct FVector* TargetLocation, struct FRotator* TargetRotation) const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsHandleComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsHandleComponent")
	}
	static class UPhysicsHandleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsHandleComponent>();
	}
};

// Class Engine.PhysicsSettings
// 0x0110 (0x0148 - 0x0038)
class UPhysicsSettings : public UDeveloperSettings
{
public:
	float                                         DefaultGravityZ;                                   // 0x0038(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultTerminalVelocity;                           // 0x003C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultFluidFriction;                              // 0x0040(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SimulateScratchMemorySize;                         // 0x0044(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RagdollAggregateThreshold;                         // 0x0048(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TriangleMeshTriangleMinAreaThreshold;              // 0x004C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableShapeSharing;                               // 0x0050(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnablePCM;                                        // 0x0051(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableStabilization;                              // 0x0052(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWarnMissingLocks;                                 // 0x0053(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnable2DPhysics;                                  // 0x0054(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigidBodyErrorCorrection              PhysicErrorCorrection;                             // 0x0058(0x0034)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	ESettingsLockedAxis                           LockedAxis;                                        // 0x008C(0x0001)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESettingsDOF                                  DefaultDegreesOfFreedom;                           // 0x008D(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8E[0x2];                                       // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BounceThresholdVelocity;                           // 0x0090(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFrictionCombineMode                          FrictionCombineMode;                               // 0x0094(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFrictionCombineMode                          RestitutionCombineMode;                            // 0x0095(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_96[0x2];                                       // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxAngularVelocity;                                // 0x0098(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxDepenetrationVelocity;                          // 0x009C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ContactOffsetMultiplier;                           // 0x00A0(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinContactOffset;                                  // 0x00A4(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxContactOffset;                                  // 0x00A8(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSimulateSkeletalMeshOnDedicatedServer;            // 0x00AC(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionTraceFlag                           DefaultShapeComplexity;                            // 0x00AD(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDefaultHasComplexCollision;                       // 0x00AE(0x0001)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSuppressFaceRemapTable;                           // 0x00AF(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSupportUVFromHitResults;                          // 0x00B0(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableActiveActors;                              // 0x00B1(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableKinematicStaticPairs;                      // 0x00B2(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableKinematicKinematicPairs;                   // 0x00B3(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableOverlapUsingTrigger;                        // 0x00B4(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSingleThreadTriggerSceneSimulation;               // 0x00B5(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bGenerateOverlapEventsBeforeBeginPlay;             // 0x00B6(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDefaultAggregateSelfCollision;                    // 0x00B7(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDefaultCreatePhysicsMeshes;                       // 0x00B8(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NavWalkingUpdateCD;                                // 0x00BC(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableCCD;                                       // 0x00C0(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableEnhancedDeterminism;                        // 0x00C1(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C2[0x2];                                       // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AnimPhysicsMinDeltaTime;                           // 0x00C4(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSimulateAnimPhysicsAfterReset;                    // 0x00C8(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxPhysicsDeltaTime;                               // 0x00CC(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSubstepping;                                      // 0x00D0(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSubsteppingAsync;                                 // 0x00D1(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D2[0x2];                                       // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxSubstepDeltaTime;                               // 0x00D4(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxSubsteps;                                       // 0x00D8(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SyncSceneSmoothingFactor;                          // 0x00DC(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InitialAverageFrameRate;                           // 0x00E0(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PhysXTreeRebuildRate;                              // 0x00E4(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PhysXFetchResultsRate;                             // 0x00E8(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TriggerSceneTickDivider;                           // 0x00EC(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPhysicalSurfaceName>           PhysicalSurfaces;                                  // 0x00F0(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FBroadphaseSettings                    DefaultBroadphaseSettings;                         // 0x0100(0x0040)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosPhysicsSettings                  ChaosSettings;                                     // 0x0140(0x0003)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_143[0x5];                                      // 0x0143(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsSettings")
	}
	static class UPhysicsSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsSettings>();
	}
};

// Class Engine.PhysicsSpringComponent
// 0x0030 (0x0280 - 0x0250)
class UPhysicsSpringComponent : public USceneComponent
{
public:
	float                                         SpringStiffness;                                   // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpringDamping;                                     // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpringLengthAtRest;                                // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpringRadius;                                      // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionChannel                             SpringChannel;                                     // 0x0260(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIgnoreSelf;                                       // 0x0261(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_262[0x2];                                      // 0x0262(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpringCompression;                                 // 0x0264(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_268[0x18];                                     // 0x0268(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetNormalizedCompressionScalar() const;
	struct FVector GetSpringCurrentEndPoint() const;
	struct FVector GetSpringDirection() const;
	struct FVector GetSpringRestingPoint() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsSpringComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsSpringComponent")
	}
	static class UPhysicsSpringComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsSpringComponent>();
	}
};

// Class Engine.PhysicsStaticScene
// 0x0078 (0x03E8 - 0x0370)
class APhysicsStaticScene : public AActor
{
public:
	TArray<class FName>                           StreamingLevels;                                   // 0x0370(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<uint64, class UPhysicalMaterial*>        PhysicalMaterials;                                 // 0x0380(0x0050)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3D0[0x18];                                     // 0x03D0(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsStaticScene")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsStaticScene")
	}
	static class APhysicsStaticScene* GetDefaultObj()
	{
		return GetDefaultObjImpl<APhysicsStaticScene>();
	}
};

// Class Engine.PhysicsThruster
// 0x0008 (0x0378 - 0x0370)
class APhysicsThruster : public ARigidBodyBase
{
public:
	class UPhysicsThrusterComponent*              ThrusterComponent;                                 // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsThruster")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsThruster")
	}
	static class APhysicsThruster* GetDefaultObj()
	{
		return GetDefaultObjImpl<APhysicsThruster>();
	}
};

// Class Engine.PhysicsThrusterComponent
// 0x0010 (0x0260 - 0x0250)
class UPhysicsThrusterComponent : public USceneComponent
{
public:
	float                                         ThrustStrength;                                    // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_254[0xC];                                      // 0x0254(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsThrusterComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsThrusterComponent")
	}
	static class UPhysicsThrusterComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsThrusterComponent>();
	}
};

// Class Engine.SceneCaptureComponent
// 0x00B0 (0x0300 - 0x0250)
class USceneCaptureComponent : public USceneComponent
{
public:
	ESceneCapturePrimitiveRenderMode              PrimitiveRenderMode;                               // 0x0250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESceneCaptureSource                           CaptureSource;                                     // 0x0251(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_252[0x6];                                      // 0x0252(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TWeakObjectPtr<class UPrimitiveComponent>> HiddenComponents;                              // 0x0258(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         HiddenActors;                                      // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UPrimitiveComponent>> ShowOnlyComponents;                            // 0x0278(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         ShowOnlyActors;                                    // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                          bCaptureEveryFrame;                                // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCaptureOnMovement;                                // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAlwaysPersistRenderingState;                      // 0x029A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29B[0x1];                                      // 0x029B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LODDistanceFactor;                                 // 0x029C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxViewDistanceOverride;                           // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CaptureSortPriority;                               // 0x02A4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseRayTracingIfEnabled;                           // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A9[0x7];                                      // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FEngineShowFlagsSetting>        ShowFlagSettings;                                  // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Interp, NativeAccessSpecifierPublic)
	bool                                          bDisablePostProcessVolume;                         // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseLiteRenderer;                                  // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceUseThinGBuffer;                              // 0x02C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELiteRendererUsage                            LiteRendererUsage;                                 // 0x02C3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         IndependentFOV;                                    // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         UseCaptureTAA : 1;                                 // 0x02C8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2C9[0x17];                                     // 0x02C9(0x0017)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ProfilingEventName;                                // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Interp, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2F0[0x10];                                     // 0x02F0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClearHiddenComponents();
	void ClearShowOnlyComponents();
	void HideActorComponents(class AActor* InActor);
	void HideComponent(class UPrimitiveComponent* InComponent);
	void RemoveShowOnlyActorComponents(class AActor* InActor);
	void RemoveShowOnlyComponent(class UPrimitiveComponent* InComponent);
	void SetCaptureSortPriority(int32 NewCaptureSortPriority);
	void SetupIndependentFOV(const float& InFOV);
	void SetUseLiteRenderer(bool bInUseLiteRenderer);
	void ShowOnlyActorComponents(class AActor* InActor);
	void ShowOnlyComponent(class UPrimitiveComponent* InComponent);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SceneCaptureComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SceneCaptureComponent")
	}
	static class USceneCaptureComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USceneCaptureComponent>();
	}
};

// Class Engine.PlanarReflectionComponent
// 0x0100 (0x0400 - 0x0300)
class UPlanarReflectionComponent : public USceneCaptureComponent
{
public:
	class UBoxComponent*                          PreviewBox;                                        // 0x0300(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseMobilePPR;                                     // 0x0308(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               NormalizedFactor;                                  // 0x0310(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NormalDistortionStrength;                          // 0x0320(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PrefilterRoughness;                                // 0x0324(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PrefilterRoughnessDistance;                        // 0x0328(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ScreenPercentage;                                  // 0x032C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ExtraFOV;                                          // 0x0330(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceFromPlaneFadeStart;                        // 0x0334(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceFromPlaneFadeEnd;                          // 0x0338(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceFromPlaneFadeoutStart;                     // 0x033C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceFromPlaneFadeoutEnd;                       // 0x0340(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngleFromPlaneFadeStart;                           // 0x0344(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngleFromPlaneFadeEnd;                             // 0x0348(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowPreviewPlane;                                 // 0x034C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSimplifiedRenderPass;                          // 0x034D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRenderSceneTwoSided;                              // 0x034E(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34F[0xB1];                                     // 0x034F(0x00B1)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PlanarReflectionComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PlanarReflectionComponent")
	}
	static class UPlanarReflectionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlanarReflectionComponent>();
	}
};

// Class Engine.PlaneReflectionCapture
// 0x0000 (0x0380 - 0x0380)
class APlaneReflectionCapture : public AReflectionCapture
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PlaneReflectionCapture")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PlaneReflectionCapture")
	}
	static class APlaneReflectionCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlaneReflectionCapture>();
	}
};

// Class Engine.PlatformEventsComponent
// 0x0020 (0x0118 - 0x00F8)
class UPlatformEventsComponent : public UActorComponent
{
public:
	TMulticastInlineDelegate<void()>              PlatformChangedToLaptopModeDelegate;               // 0x00F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void()>              PlatformChangedToTabletModeDelegate;               // 0x0108(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	bool IsInLaptopMode();
	bool IsInTabletMode();
	bool SupportsConvertibleLaptops();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PlatformEventsComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PlatformEventsComponent")
	}
	static class UPlatformEventsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformEventsComponent>();
	}
};

// Class Engine.PlatformInterfaceWebResponse
// 0x0088 (0x00B0 - 0x0028)
class UPlatformInterfaceWebResponse : public UObject
{
public:
	class FString                                 OriginalURL;                                       // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ResponseCode;                                      // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Tag;                                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StringResponse;                                    // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 BinaryResponse;                                    // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x50];                                      // 0x0060(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetHeader(int32 HeaderIndex, class FString* Header, class FString* Value);
	class FString GetHeaderValue(const class FString& HeaderName);
	int32 GetNumHeaders();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PlatformInterfaceWebResponse")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PlatformInterfaceWebResponse")
	}
	static class UPlatformInterfaceWebResponse* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformInterfaceWebResponse>();
	}
};

// Class Engine.PointLight
// 0x0008 (0x0388 - 0x0380)
class APointLight : public ALight
{
public:
	class UPointLightComponent*                   PointLightComponent;                               // 0x0380(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void SetLightFalloffExponent(float NewLightFalloffExponent);
	void SetRadius(float NewRadius);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PointLight")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PointLight")
	}
	static class APointLight* GetDefaultObj()
	{
		return GetDefaultObjImpl<APointLight>();
	}
};

// Class Engine.Polys
// 0x0010 (0x0038 - 0x0028)
class UPolys : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Polys")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Polys")
	}
	static class UPolys* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPolys>();
	}
};

// Class Engine.PoseAsset
// 0x00A0 (0x0120 - 0x0080)
class UPoseAsset : public UAnimationAsset
{
public:
	struct FPoseDataContainer                     PoseContainer;                                     // 0x0080(0x0090)(NativeAccessSpecifierPrivate)
	bool                                          bAdditivePose;                                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BasePoseIndex;                                     // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   RetargetSource;                                    // 0x0118(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PoseAsset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PoseAsset")
	}
	static class UPoseAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseAsset>();
	}
};

// Class Engine.PoseWatch
// 0x0010 (0x0038 - 0x0028)
class UPoseWatch : public UObject
{
public:
	class UEdGraphNode*                           Node;                                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 PoseWatchColour;                                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PoseWatch")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PoseWatch")
	}
	static class UPoseWatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseWatch>();
	}
};

// Class Engine.PostProcessVolume
// 0x09B8 (0x0D60 - 0x03A8)
class APostProcessVolume : public AVolume
{
public:
	uint8                                         Pad_3A8[0x8];                                      // 0x03A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   Settings;                                          // 0x03B0(0x0950)(Edit, BlueprintVisible, Interp, NativeAccessSpecifierPublic)
	float                                         Priority;                                          // 0x0D00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendRadius;                                       // 0x0D04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendWeight;                                       // 0x0D08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bEnabled : 1;                                      // 0x0D0C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUnbound : 1;                                      // 0x0D0C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_D0D[0x3];                                      // 0x0D0D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture>                AsyncColorGradingLUT;                              // 0x0D10(0x0028)(Edit, BlueprintVisible, Transient, Interp, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture>                AsyncLMT_LUT;                                      // 0x0D38(0x0028)(Edit, BlueprintVisible, Transient, Interp, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void AddOrUpdateBlendable(TScriptInterface<class IBlendableInterface> InBlendableObject, float InWeight);
	void AddOrUpdateBlendableViewSize(TScriptInterface<class IBlendableInterface> InBlendableObject, float InWeight, const struct FVector2D& ViewportLeftTop, const struct FVector2D& ViewPortSize);
	void SetAsyncColorGradingLUT(TSoftObjectPtr<class UTexture> NewTexture);
	void SetAsyncLMT_LUT(TSoftObjectPtr<class UTexture> NewTexture);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PostProcessVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PostProcessVolume")
	}
	static class APostProcessVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<APostProcessVolume>();
	}
};

// Class Engine.PreBakeShadowDepthTileMap
// 0x0028 (0x0088 - 0x0060)
class UPreBakeShadowDepthTileMap : public UPreBakeShadowDepthMap
{
public:
	struct FIntPoint                              TileIndex;                                         // 0x0060(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoxSphereBounds                       ShadowTileBounds;                                  // 0x0068(0x001C)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PreBakeShadowDepthTileMap")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PreBakeShadowDepthTileMap")
	}
	static class UPreBakeShadowDepthTileMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPreBakeShadowDepthTileMap>();
	}
};

// Class Engine.PreBakeTODDirectionalShadowDepthMap
// 0x0050 (0x0078 - 0x0028)
class UPreBakeTODDirectionalShadowDepthMap : public UObject
{
public:
	TMap<class FString, struct FPreBakeDirectionalShadowDepthMap> DirectionalShadowDepthMaps;        // 0x0028(0x0050)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PreBakeTODDirectionalShadowDepthMap")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PreBakeTODDirectionalShadowDepthMap")
	}
	static class UPreBakeTODDirectionalShadowDepthMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPreBakeTODDirectionalShadowDepthMap>();
	}
};

// Class Engine.PrecomputedVisibilityOverrideVolume
// 0x0030 (0x03D8 - 0x03A8)
class APrecomputedVisibilityOverrideVolume : public AVolume
{
public:
	TArray<class AActor*>                         OverrideVisibleActors;                             // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         OverrideInvisibleActors;                           // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           OverrideInvisibleLevels;                           // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PrecomputedVisibilityOverrideVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PrecomputedVisibilityOverrideVolume")
	}
	static class APrecomputedVisibilityOverrideVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<APrecomputedVisibilityOverrideVolume>();
	}
};

// Class Engine.PreviewCollectionInterface
// 0x0000 (0x0000 - 0x0000)
class IPreviewCollectionInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PreviewCollectionInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PreviewCollectionInterface")
	}
	static class IPreviewCollectionInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IPreviewCollectionInterface>();
	}
};

// Class Engine.PreviewMeshCollection
// 0x0020 (0x0050 - 0x0030)
class UPreviewMeshCollection : public UDataAsset
{
public:
	uint8                                         Pad_30[0x8];                                       // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeleton*                              Skeleton;                                          // 0x0038(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPreviewMeshCollectionEntry>    SkeletalMeshes;                                    // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PreviewMeshCollection")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PreviewMeshCollection")
	}
	static class UPreviewMeshCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPreviewMeshCollection>();
	}
};

// Class Engine.PrimaryAssetLabel
// 0x0048 (0x0078 - 0x0030)
class UPrimaryAssetLabel : public UPrimaryDataAsset
{
public:
	struct FPrimaryAssetRules                     Rules;                                             // 0x0030(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         bLabelAssetsInMyDirectory : 1;                     // 0x003C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsRuntimeLabel : 1;                               // 0x003C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class UObject>>         ExplicitAssets;                                    // 0x0040(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UClass>>           ExplicitBlueprints;                                // 0x0050(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FCollectionReference                   AssetCollection;                                   // 0x0060(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FDirectoryPath>                 ExplicitDirectories;                               // 0x0068(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PrimaryAssetLabel")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PrimaryAssetLabel")
	}
	static class UPrimaryAssetLabel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrimaryAssetLabel>();
	}
};

// Class Engine.RadialForceActor
// 0x0008 (0x0378 - 0x0370)
class ARadialForceActor : public ARigidBodyBase
{
public:
	class URadialForceComponent*                  ForceComponent;                                    // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void DisableForce();
	void EnableForce();
	void FireImpulse();
	void ToggleForce();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RadialForceActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RadialForceActor")
	}
	static class ARadialForceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARadialForceActor>();
	}
};

// Class Engine.RadialForceComponent
// 0x0030 (0x0280 - 0x0250)
class URadialForceComponent : public USceneComponent
{
public:
	float                                         radius;                                            // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERadialImpulseFalloff                         Falloff;                                           // 0x0254(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_255[0x3];                                      // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ImpulseStrength;                                   // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bImpulseVelChange : 1;                             // 0x025C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIgnoreOwningActor : 1;                            // 0x025C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_25D[0x3];                                      // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ForceStrength;                                     // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DestructibleDamage;                                // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<EObjectTypeQuery>                      ObjectTypesToAffect;                               // 0x0268(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_278[0x8];                                      // 0x0278(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddObjectTypeToAffect(EObjectTypeQuery ObjectType);
	void FireImpulse();
	void RemoveObjectTypeToAffect(EObjectTypeQuery ObjectType);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RadialForceComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RadialForceComponent")
	}
	static class URadialForceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadialForceComponent>();
	}
};

// Class Engine.RainEffect
// 0x0008 (0x0378 - 0x0370)
class ARainEffect : public AActor
{
public:
	class URainEffectComponent*                   RainEffectComponent;                               // 0x0370(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RainEffect")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RainEffect")
	}
	static class ARainEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARainEffect>();
	}
};

// Class Engine.RectLight
// 0x0008 (0x0388 - 0x0380)
class ARectLight : public ALight
{
public:
	class URectLightComponent*                    RectLightComponent;                                // 0x0380(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RectLight")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RectLight")
	}
	static class ARectLight* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARectLight>();
	}
};

// Class Engine.RectLightComponent
// 0x0020 (0x0450 - 0x0430)
class URectLightComponent : public ULocalLightComponent
{
public:
	float                                         SourceWidth;                                       // 0x0430(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SourceHeight;                                      // 0x0434(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BarnDoorAngle;                                     // 0x0438(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BarnDoorLength;                                    // 0x043C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                               SourceTexture;                                     // 0x0440(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_448[0x8];                                      // 0x0448(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetBarnDoorAngle(float NewValue);
	void SetBarnDoorLength(float NewValue);
	void SetSourceHeight(float NewValue);
	void SetSourceTexture(class UTexture* bNewValue);
	void SetSourceWidth(float bNewValue);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RectLightComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RectLightComponent")
	}
	static class URectLightComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<URectLightComponent>();
	}
};

// Class Engine.ReflectionRange
// 0x0008 (0x0378 - 0x0370)
class AReflectionRange : public AActor
{
public:
	class UReflectionRangeComponent*              CaptureRangeComponent;                             // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ReflectionRange")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ReflectionRange")
	}
	static class AReflectionRange* GetDefaultObj()
	{
		return GetDefaultObjImpl<AReflectionRange>();
	}
};

// Class Engine.RendererOverrideSettings
// 0x0008 (0x0040 - 0x0038)
class URendererOverrideSettings : public UDeveloperSettings
{
public:
	uint8                                         bSupportAllShaderPermutations : 1;                 // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bForceRecomputeTangents : 1;                       // 0x0038(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RendererOverrideSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RendererOverrideSettings")
	}
	static class URendererOverrideSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<URendererOverrideSettings>();
	}
};

// Class Engine.ReverbEffect
// 0x0030 (0x0058 - 0x0028)
class UReverbEffect : public UObject
{
public:
	float                                         Density;                                           // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Diffusion;                                         // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Gain;                                              // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GainHF;                                            // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DecayTime;                                         // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DecayHFRatio;                                      // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReflectionsGain;                                   // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReflectionsDelay;                                  // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LateGain;                                          // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LateDelay;                                         // 0x004C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AirAbsorptionGainHF;                               // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RoomRolloffFactor;                                 // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ReverbEffect")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ReverbEffect")
	}
	static class UReverbEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReverbEffect>();
	}
};

// Class Engine.Rig
// 0x0028 (0x0050 - 0x0028)
class URig : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTransformBase>                 TransformBases;                                    // 0x0030(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNode>                          Nodes;                                             // 0x0040(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Rig")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Rig")
	}
	static class URig* GetDefaultObj()
	{
		return GetDefaultObjImpl<URig>();
	}
};

// Class Engine.RuntimeMergedSkeleton
// 0x02D0 (0x0640 - 0x0370)
class URuntimeMergedSkeleton : public USkeleton
{
public:
	uint8                                         Pad_370[0x2D0];                                    // 0x0370(0x02D0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RuntimeMergedSkeleton")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RuntimeMergedSkeleton")
	}
	static class URuntimeMergedSkeleton* GetDefaultObj()
	{
		return GetDefaultObjImpl<URuntimeMergedSkeleton>();
	}
};

// Class Engine.RuntimeShadowMaskComponent
// 0x0000 (0x0250 - 0x0250)
class URuntimeShadowMaskComponent : public USceneComponent
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RuntimeShadowMaskComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RuntimeShadowMaskComponent")
	}
	static class URuntimeShadowMaskComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<URuntimeShadowMaskComponent>();
	}
};

// Class Engine.StaticMeshProxy
// 0x0040 (0x01D0 - 0x0190)
class UStaticMeshProxy : public UStaticMesh
{
public:
	uint8                                         Pad_190[0x40];                                     // 0x0190(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("StaticMeshProxy")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"StaticMeshProxy")
	}
	static class UStaticMeshProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStaticMeshProxy>();
	}
};

// Class Engine.RuntimeVirtualTexture
// 0x0198 (0x01C0 - 0x0028)
class alignas(0x10) URuntimeVirtualTexture : public UObject
{
public:
	int32                                         TileCount;                                         // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         TileSize;                                          // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         TileBorderSize;                                    // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ERuntimeVirtualTextureMaterialType            MaterialType;                                      // 0x0034(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bCompressTextures;                                 // 0x0035(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bEnableRTCDecompressSimulation;                    // 0x0036(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_37[0x1];                                       // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRTCProfile                            RuntimeTexCompressionProfile;                      // 0x0038(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRTCProfile                            RTCProfileTex0;                                    // 0x0044(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRTCProfile                            RTCProfileTex1;                                    // 0x0050(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FRTCProfile                            RTCProfileTex2;                                    // 0x005C(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                          bEnable;                                           // 0x0068(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bClearTextures;                                    // 0x0069(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bSinglePhysicalSpace;                              // 0x006A(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bPrivateSpace;                                     // 0x006B(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bAdaptive;                                         // 0x006C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bContinuousUpdate;                                 // 0x006D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bEnableScalability;                                // 0x006E(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_6F[0x1];                                       // 0x006F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RemoveLowMips;                                     // 0x0070(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         size;                                              // 0x0074(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         StreamLowMips;                                     // 0x0078(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URuntimeVirtualTextureStreamingProxy*   StreamingTexture_ForPC;                            // 0x0080(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URuntimeVirtualTextureStreamingProxy*   StreamingTexture_Runtime;                          // 0x0088(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         StreamTextureMipLevel;                             // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         SubSVTRegionSize;                                  // 0x0094(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         SubSVTRegionMipOffset;                             // 0x0098(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSVTRegionDataSoftObject               RegionSVT0sSoftPath;                               // 0x00A0(0x0020)(Edit, NativeAccessSpecifierPublic)
	TMap<class FString, struct FSVTRegionDataSoftObject> RegionSVT0sSoftPathMap;                     // 0x00C0(0x0050)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_110[0x8];                                      // 0x0110(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class URuntimeVirtualTextureStreamingProxy> SVT1SoftPath;                         // 0x0118(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_140[0x80];                                     // 0x0140(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	int32 GetPageTableSize() const;
	int32 GetSize() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RuntimeVirtualTexture")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RuntimeVirtualTexture")
	}
	static class URuntimeVirtualTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<URuntimeVirtualTexture>();
	}
};

// Class Engine.RuntimeVirtualTextureStreamingProxy
// 0x0038 (0x01D0 - 0x0198)
class URuntimeVirtualTextureStreamingProxy : public UTexture2D
{
public:
	struct FVirtualTextureBuildSettings           Settings;                                          // 0x0198(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bSinglePhysicalSpace;                              // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint32>                                BuildHash;                                         // 0x01B0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                                RTCHash;                                           // 0x01C0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RuntimeVirtualTextureStreamingProxy")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RuntimeVirtualTextureStreamingProxy")
	}
	static class URuntimeVirtualTextureStreamingProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<URuntimeVirtualTextureStreamingProxy>();
	}
};

// Class Engine.SceneCaptureComponent2D
// 0x0A00 (0x0D00 - 0x0300)
class USceneCaptureComponent2D : public USceneCaptureComponent
{
public:
	ECameraProjectionMode                         ProjectionType;                                    // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_301[0x3];                                      // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FOVAngle;                                          // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OrthoWidth;                                        // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 TextureTarget;                                     // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESceneCaptureCompositeMode                    CompositeMode;                                     // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_319[0x7];                                      // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   PostProcessSettings;                               // 0x0320(0x0950)(Edit, BlueprintVisible, Interp, NativeAccessSpecifierPublic)
	float                                         PostProcessBlendWeight;                            // 0x0C70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bOverride_CustomNearClippingPlane : 1;             // 0x0C74(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_C75[0x3];                                      // 0x0C75(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CustomNearClippingPlane;                           // 0x0C78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseCustomProjectionMatrix;                        // 0x0C7C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C7D[0x3];                                      // 0x0C7D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMatrix                                CustomProjectionMatrix;                            // 0x0C80(0x0040)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                          bEnableClipPlane;                                  // 0x0CC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CC1[0x3];                                      // 0x0CC1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ClipPlaneBase;                                     // 0x0CC4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ClipPlaneNormal;                                   // 0x0CD0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bCameraCutThisFrame : 1;                           // 0x0CDC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1; // 0x0CDC(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSRGBtoLinear : 1;                                 // 0x0CDC(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_CDD[0x3];                                      // 0x0CDD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	ESSAA                                         SSAALevel;                                         // 0x0CE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CE1[0x3];                                      // 0x0CE1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bCustomShadowMapSize : 1;                          // 0x0CE4(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_CE5[0x1B];                                     // 0x0CE5(0x001B)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddOrUpdateBlendable(TScriptInterface<class IBlendableInterface> InBlendableObject, float InWeight);
	void CaptureScene();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SceneCaptureComponent2D")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SceneCaptureComponent2D")
	}
	static class USceneCaptureComponent2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<USceneCaptureComponent2D>();
	}
};

// Class Engine.SceneCaptureComponentCube
// 0x0030 (0x0330 - 0x0300)
class USceneCaptureComponentCube : public USceneCaptureComponent
{
public:
	class UTextureRenderTargetCube*               TextureTarget;                                     // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCaptureRotation;                                  // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_309[0x7];                                      // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTargetCube*               TextureTargetLeft;                                 // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTargetCube*               TextureTargetRight;                                // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                 TextureTargetODS;                                  // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         IPD;                                               // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_32C[0x4];                                      // 0x032C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CaptureScene();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SceneCaptureComponentCube")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SceneCaptureComponentCube")
	}
	static class USceneCaptureComponentCube* GetDefaultObj()
	{
		return GetDefaultObjImpl<USceneCaptureComponentCube>();
	}
};

// Class Engine.SCS_Node
// 0x00B0 (0x00D8 - 0x0028)
class USCS_Node : public UObject
{
public:
	class UClass*                                 ComponentClass;                                    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                        ComponentTemplate;                                 // 0x0030(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData;                    // 0x0038(0x0048)(NativeAccessSpecifierPublic)
	class FName                                   AttachToName;                                      // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ParentComponentOrVariableName;                     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ParentComponentOwnerClassName;                     // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsParentComponentNative;                          // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USCS_Node*>                      ChildNodes;                                        // 0x00A0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBPVariableMetaDataEntry>       MetaDataArray;                                     // 0x00B0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                  VariableGuid;                                      // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   InternalVariableName;                              // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SCS_Node")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SCS_Node")
	}
	static class USCS_Node* GetDefaultObj()
	{
		return GetDefaultObjImpl<USCS_Node>();
	}
};

// Class Engine.SimpleConstructionScript
// 0x0078 (0x00A0 - 0x0028)
class USimpleConstructionScript : public UObject
{
public:
	TArray<class USCS_Node*>                      RootNodes;                                         // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class USCS_Node*>                      AllNodes;                                          // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class USCS_Node*                              DefaultSceneRootNode;                              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_50[0x50];                                      // 0x0050(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SimpleConstructionScript")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SimpleConstructionScript")
	}
	static class USimpleConstructionScript* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleConstructionScript>();
	}
};

// Class Engine.SkeletalMeshLODSettings
// 0x0020 (0x0050 - 0x0030)
class USkeletalMeshLODSettings : public UDataAsset
{
public:
	struct FPerPlatformInt                        MinLOD;                                            // 0x0030(0x0004)(Edit, Config, GlobalConfig, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPerPlatformBool                       DisableBelowMinLodStripping;                       // 0x0034(0x0001)(Edit, Config, GlobalConfig, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPerPlatformBool                       bSupportLODStreaming;                              // 0x0035(0x0001)(Edit, Config, GlobalConfig, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPerPlatformInt                        MaxNumStreamedLODs;                                // 0x0038(0x0004)(Edit, Config, GlobalConfig, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPerPlatformInt                        MaxNumOptionalLODs;                                // 0x003C(0x0004)(Edit, Config, GlobalConfig, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSkeletalMeshLODGroupSettings>  LODGroups;                                         // 0x0040(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SkeletalMeshLODSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SkeletalMeshLODSettings")
	}
	static class USkeletalMeshLODSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkeletalMeshLODSettings>();
	}
};

// Class Engine.SkeletalMeshSimplificationSettings
// 0x0008 (0x0040 - 0x0038)
class USkeletalMeshSimplificationSettings : public UDeveloperSettings
{
public:
	class FName                                   SkeletalMeshReductionModuleName;                   // 0x0038(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SkeletalMeshSimplificationSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SkeletalMeshSimplificationSettings")
	}
	static class USkeletalMeshSimplificationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkeletalMeshSimplificationSettings>();
	}
};

// Class Engine.SkyAtmosphereComponent
// 0x0120 (0x0370 - 0x0250)
class USkyAtmosphereComponent : public USceneComponent
{
public:
	float                                         BottomRadius;                                      // 0x0250(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 GroundAlbedo;                                      // 0x0254(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsePlanetCenterRebasing;                          // 0x0258(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_259[0x3];                                      // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AtmosphereHeight;                                  // 0x025C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MultiScatteringFactor;                             // 0x0260(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverride_FakeWorldCameraOrigin;                   // 0x0264(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_265[0x3];                                      // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                FakeWorldCameraOrigin;                             // 0x0268(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RayleighScatteringScale;                           // 0x0274(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           RayleighScattering;                                // 0x0278(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RayleighExponentialDistribution;                   // 0x0288(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           RayleighScatteringLow;                             // 0x028C(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RayleighScaleLow;                                  // 0x029C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MieScatteringScale;                                // 0x02A0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MieScattering;                                     // 0x02A4(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MieAbsorptionScale;                                // 0x02B4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MieAbsorption;                                     // 0x02B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MieAnisotropy;                                     // 0x02C8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MieExponentialDistribution;                        // 0x02CC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MieScatteringLow;                                  // 0x02D0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MieScaleLow;                                       // 0x02E0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MieAnisotropyLow;                                  // 0x02E4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OtherAbsorptionScale;                              // 0x02E8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           OtherAbsorption;                                   // 0x02EC(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTentDistribution                      OtherTentDistribution;                             // 0x02FC(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                           SkyLuminanceFactor;                                // 0x0308(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AerialPespectiveViewDistanceScale;                 // 0x0318(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TransmittanceMinLightElevationAngle;               // 0x031C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FogDistanceScaleLow;                               // 0x0320(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FogStartDistance;                                  // 0x0324(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FogHeightFalloff;                                  // 0x0328(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HeightFogContribution;                             // 0x032C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_330[0x24];                                     // 0x0330(0x0024)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  bStaticLightingBuiltGUID;                          // 0x0354(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_364[0xC];                                      // 0x0364(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OverrideAtmosphereLightDirection(int32 AtmosphereLightIndex, const struct FVector& LightDirection);
	void SetAerialPespectiveViewDistanceScale(float NewValue);
	void SetbUsePlanetCenterRebasing(bool NewValue);
	void SetFakeWorldCameraOrigin(const struct FVector& NewValue);
	void SetHeightFogContribution(float NewValue);
	void SetMieAbsorption(const struct FLinearColor& NewValue);
	void SetMieAbsorptionScale(float NewValue);
	void SetMieAnisotropy(float NewValue);
	void SetMieExponentialDistribution(float NewValue);
	void SetMieScattering(const struct FLinearColor& NewValue);
	void SetMieScatteringScale(float NewValue);
	void SetOtherAbsorption(const struct FLinearColor& NewValue);
	void SetOtherAbsorptionScale(float NewValue);
	void SetRayleighExponentialDistribution(float NewValue);
	void SetRayleighScattering(const struct FLinearColor& NewValue);
	void SetRayleighScatteringScale(float NewValue);
	void SetSkyLuminanceFactor(const struct FLinearColor& NewValue);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SkyAtmosphereComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SkyAtmosphereComponent")
	}
	static class USkyAtmosphereComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkyAtmosphereComponent>();
	}
};

// Class Engine.SlateTextureAtlasInterface
// 0x0000 (0x0000 - 0x0000)
class ISlateTextureAtlasInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SlateTextureAtlasInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SlateTextureAtlasInterface")
	}
	static class ISlateTextureAtlasInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ISlateTextureAtlasInterface>();
	}
};

// Class Engine.SmokeTestCommandlet
// 0x0000 (0x0088 - 0x0088)
class USmokeTestCommandlet : public UCommandlet
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SmokeTestCommandlet")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SmokeTestCommandlet")
	}
	static class USmokeTestCommandlet* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmokeTestCommandlet>();
	}
};

// Class Engine.SoundConcurrency
// 0x0020 (0x0048 - 0x0028)
class USoundConcurrency : public UObject
{
public:
	struct FSoundConcurrencySettings              Concurrency;                                       // 0x0028(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundConcurrency")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundConcurrency")
	}
	static class USoundConcurrency* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundConcurrency>();
	}
};

// Class Engine.SoundEffectSourcePresetChain
// 0x0018 (0x0040 - 0x0028)
class USoundEffectSourcePresetChain : public UObject
{
public:
	TArray<struct FSourceEffectChainEntry>        Chain;                                             // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bPlayEffectChainTails : 1;                         // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundEffectSourcePresetChain")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundEffectSourcePresetChain")
	}
	static class USoundEffectSourcePresetChain* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundEffectSourcePresetChain>();
	}
};

// Class Engine.SoundMix
// 0x0060 (0x0088 - 0x0028)
class USoundMix : public UObject
{
public:
	uint8                                         bApplyEQ : 1;                                      // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EQPriority;                                        // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAudioEQEffect                         EQSettings;                                        // 0x0030(0x0038)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundClassAdjuster>            SoundClassEffects;                                 // 0x0068(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         InitialDelay;                                      // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeInTime;                                        // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Duration;                                          // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeOutTime;                                       // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundMix")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundMix")
	}
	static class USoundMix* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundMix>();
	}
};

// Class Engine.SoundNodeBranch
// 0x0008 (0x0048 - 0x0040)
class USoundNodeBranch : public USoundNode
{
public:
	class FName                                   BoolParameterName;                                 // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeBranch")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeBranch")
	}
	static class USoundNodeBranch* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeBranch>();
	}
};

// Class Engine.SoundNodeDelay
// 0x0008 (0x0048 - 0x0040)
class USoundNodeDelay : public USoundNode
{
public:
	float                                         DelayMin;                                          // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DelayMax;                                          // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeDelay")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeDelay")
	}
	static class USoundNodeDelay* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeDelay>();
	}
};

// Class Engine.SoundNodeDialoguePlayer
// 0x0028 (0x0068 - 0x0040)
class USoundNodeDialoguePlayer : public USoundNode
{
public:
	struct FDialogueWaveParameter                 DialogueWaveParameter;                             // 0x0040(0x0020)(Edit, NativeAccessSpecifierPublic)
	uint8                                         bLooping : 1;                                      // 0x0060(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeDialoguePlayer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeDialoguePlayer")
	}
	static class USoundNodeDialoguePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeDialoguePlayer>();
	}
};

// Class Engine.SoundNodeDistanceCrossFade
// 0x0010 (0x0050 - 0x0040)
class USoundNodeDistanceCrossFade : public USoundNode
{
public:
	TArray<struct FDistanceDatum>                 CrossFadeInput;                                    // 0x0040(0x0010)(Edit, ExportObject, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeDistanceCrossFade")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeDistanceCrossFade")
	}
	static class USoundNodeDistanceCrossFade* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeDistanceCrossFade>();
	}
};

// Class Engine.SoundNodeEnveloper
// 0x0178 (0x01B8 - 0x0040)
class USoundNodeEnveloper : public USoundNode
{
public:
	float                                         LoopStart;                                         // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LoopEnd;                                           // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DurationAfterLoop;                                 // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LoopCount;                                         // 0x004C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bLoopIndefinitely : 1;                             // 0x0050(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bLoop : 1;                                         // 0x0050(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDistributionFloatConstantCurve*        VolumeInterpCurve;                                 // 0x0058(0x0008)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDistributionFloatConstantCurve*        PitchInterpCurve;                                  // 0x0060(0x0008)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     VolumeCurve;                                       // 0x0068(0x00A0)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     PitchCurve;                                        // 0x0108(0x00A0)(Edit, NativeAccessSpecifierPublic)
	float                                         PitchMin;                                          // 0x01A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PitchMax;                                          // 0x01AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumeMin;                                         // 0x01B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumeMax;                                         // 0x01B4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeEnveloper")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeEnveloper")
	}
	static class USoundNodeEnveloper* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeEnveloper>();
	}
};

// Class Engine.SoundNodeGroupControl
// 0x0010 (0x0050 - 0x0040)
class USoundNodeGroupControl : public USoundNode
{
public:
	TArray<int32>                                 GroupSizes;                                        // 0x0040(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeGroupControl")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeGroupControl")
	}
	static class USoundNodeGroupControl* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeGroupControl>();
	}
};

// Class Engine.SoundNodeLooping
// 0x0008 (0x0048 - 0x0040)
class USoundNodeLooping : public USoundNode
{
public:
	int32                                         LoopCount;                                         // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bLoopIndefinitely : 1;                             // 0x0044(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeLooping")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeLooping")
	}
	static class USoundNodeLooping* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeLooping>();
	}
};

// Class Engine.SoundNodeMature
// 0x0000 (0x0040 - 0x0040)
class USoundNodeMature : public USoundNode
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeMature")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeMature")
	}
	static class USoundNodeMature* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeMature>();
	}
};

// Class Engine.SoundNodeMixer
// 0x0010 (0x0050 - 0x0040)
class USoundNodeMixer : public USoundNode
{
public:
	TArray<float>                                 InputVolume;                                       // 0x0040(0x0010)(Edit, ExportObject, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeMixer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeMixer")
	}
	static class USoundNodeMixer* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeMixer>();
	}
};

// Class Engine.SoundNodeModulator
// 0x0010 (0x0050 - 0x0040)
class USoundNodeModulator : public USoundNode
{
public:
	float                                         PitchMin;                                          // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PitchMax;                                          // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumeMin;                                         // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumeMax;                                         // 0x004C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeModulator")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeModulator")
	}
	static class USoundNodeModulator* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeModulator>();
	}
};

// Class Engine.SoundNodeParamCrossFade
// 0x0008 (0x0058 - 0x0050)
class USoundNodeParamCrossFade : public USoundNodeDistanceCrossFade
{
public:
	class FName                                   ParamName;                                         // 0x0050(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeParamCrossFade")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeParamCrossFade")
	}
	static class USoundNodeParamCrossFade* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeParamCrossFade>();
	}
};

// Class Engine.SoundNodeQualityLevel
// 0x0000 (0x0040 - 0x0040)
class USoundNodeQualityLevel : public USoundNode
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeQualityLevel")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeQualityLevel")
	}
	static class USoundNodeQualityLevel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeQualityLevel>();
	}
};

// Class Engine.SoundNodeRandom
// 0x0030 (0x0070 - 0x0040)
class USoundNodeRandom : public USoundNode
{
public:
	TArray<float>                                 Weights;                                           // 0x0040(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                  HasBeenUsed;                                       // 0x0050(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	int32                                         NumRandomUsed;                                     // 0x0060(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PreselectAtLevelLoad;                              // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bShouldExcludeFromBranchCulling : 1;               // 0x0068(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSoundCueExcludedFromBranchCulling : 1;            // 0x0068(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRandomizeWithoutReplacement : 1;                  // 0x0068(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeRandom")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeRandom")
	}
	static class USoundNodeRandom* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeRandom>();
	}
};

// Class Engine.SoundNodeSoundClass
// 0x0008 (0x0048 - 0x0040)
class USoundNodeSoundClass : public USoundNode
{
public:
	class USoundClass*                            SoundClassOverride;                                // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeSoundClass")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeSoundClass")
	}
	static class USoundNodeSoundClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeSoundClass>();
	}
};

// Class Engine.SoundNodeSwitch
// 0x0008 (0x0048 - 0x0040)
class USoundNodeSwitch : public USoundNode
{
public:
	class FName                                   IntParameterName;                                  // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeSwitch")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeSwitch")
	}
	static class USoundNodeSwitch* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeSwitch>();
	}
};

// Class Engine.SoundNodeWaveParam
// 0x0008 (0x0048 - 0x0040)
class USoundNodeWaveParam : public USoundNode
{
public:
	class FName                                   WaveParameterName;                                 // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeWaveParam")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeWaveParam")
	}
	static class USoundNodeWaveParam* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeWaveParam>();
	}
};

// Class Engine.SoundSubmix
// 0x0060 (0x0088 - 0x0028)
class USoundSubmix : public UObject
{
public:
	TArray<class USoundSubmix*>                   ChildSubmixes;                                     // 0x0028(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class USoundSubmix*                           ParentSubmix;                                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESubmixChannelFormat                          ChannelFormat;                                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bMuteWhenBackgrounded : 1;                         // 0x0041(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USoundEffectSubmixPreset*>       SubmixEffectChain;                                 // 0x0048(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UAmbisonicsSubmixSettingsBase*          AmbisonicsPluginSettings;                          // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EnvelopeFollowerAttackTime;                        // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EnvelopeFollowerReleaseTime;                       // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutputVolume;                                      // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const class USoundWave* ResultingSoundWave)> OnSubmixRecordedFileDone; // 0x0070(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_80[0x8];                                       // 0x0080(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddEnvelopeFollowerDelegate(const class UObject* WorldContextObject, const TDelegate<void(const TArray<float>& Envelope)>& OnSubmixEnvelopeBP);
	void SetSubmixOutputVolume(const class UObject* WorldContextObject, float InOutputVolume);
	void StartEnvelopeFollowing(const class UObject* WorldContextObject);
	void StartRecordingOutput(const class UObject* WorldContextObject, float ExpectedDuration);
	void StopEnvelopeFollowing(const class UObject* WorldContextObject);
	void StopRecordingOutput(const class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const class FString& Name_0, const class FString& Path, class USoundWave* ExistingSoundWaveToOverwrite);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundSubmix")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundSubmix")
	}
	static class USoundSubmix* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundSubmix>();
	}
};

// Class Engine.SpectatorPawnMovement
// 0x0008 (0x01A0 - 0x0198)
class USpectatorPawnMovement : public UFloatingPawnMovement
{
public:
	uint8                                         bIgnoreTimeDilation : 1;                           // 0x0198(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SpectatorPawnMovement")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SpectatorPawnMovement")
	}
	static class USpectatorPawnMovement* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpectatorPawnMovement>();
	}
};

// Class Engine.SphereReflectionCapture
// 0x0008 (0x0388 - 0x0380)
class ASphereReflectionCapture : public AReflectionCapture
{
public:
	class UDrawSphereComponent*                   DrawCaptureRadius;                                 // 0x0380(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SphereReflectionCapture")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SphereReflectionCapture")
	}
	static class ASphereReflectionCapture* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASphereReflectionCapture>();
	}
};

// Class Engine.SphereReflectionCaptureComponent
// 0x0010 (0x04F0 - 0x04E0)
class USphereReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	float                                         InfluenceRadius;                                   // 0x04D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CaptureDistanceScale;                              // 0x04DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDrawSphereComponent*                   PreviewInfluenceRadius;                            // 0x04E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E8[0x8];                                      // 0x04E8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SphereReflectionCaptureComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SphereReflectionCaptureComponent")
	}
	static class USphereReflectionCaptureComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphereReflectionCaptureComponent>();
	}
};

// Class Engine.SplineMetadata
// 0x0000 (0x0028 - 0x0028)
class USplineMetadata : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SplineMetadata")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SplineMetadata")
	}
	static class USplineMetadata* GetDefaultObj()
	{
		return GetDefaultObjImpl<USplineMetadata>();
	}
};

// Class Engine.SplineMeshActor
// 0x0008 (0x0378 - 0x0370)
class ASplineMeshActor : public AActor
{
public:
	class USplineMeshComponent*                   SplineMeshComponent;                               // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SplineMeshActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SplineMeshActor")
	}
	static class ASplineMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASplineMeshActor>();
	}
};

// Class Engine.SplineMeshComponent
// 0x00A0 (0x08E0 - 0x0840)
class USplineMeshComponent : public UStaticMeshComponent
{
public:
	uint8                                         Pad_840[0x8];                                      // 0x0840(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSplineMeshParams                      SplineParams;                                      // 0x0848(0x0058)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                SplineUpDir;                                       // 0x08A0(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SplineBoundaryMin;                                 // 0x08AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  CachedMeshBodySetupGuid;                           // 0x08B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBodySetup*                             BodySetup;                                         // 0x08C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SplineBoundaryMax;                                 // 0x08C8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAllowSplineEditingPerInstance : 1;                // 0x08CC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSmoothInterpRollScale : 1;                        // 0x08CC(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bMeshDirty : 1;                                    // 0x08CC(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	ESplineMeshAxis                               ForwardAxis;                                       // 0x08CD(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8CE[0x2];                                      // 0x08CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         VirtualTextureMainPassMaxDrawDistance;             // 0x08D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8D4[0xC];                                      // 0x08D4(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);
	void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);
	void SetEndOffset(const struct FVector2D& EndOffset, bool bUpdateMesh);
	void SetEndPosition(const struct FVector& EndPos, bool bUpdateMesh);
	void SetEndRoll(float EndRoll, bool bUpdateMesh);
	void SetEndScale(const struct FVector2D& EndScale, bool bUpdateMesh);
	void SetEndTangent(const struct FVector& EndTangent, bool bUpdateMesh);
	void SetForwardAxis(ESplineMeshAxis InForwardAxis, bool bUpdateMesh);
	void SetSplineUpDir(const struct FVector& InSplineUpDir, bool bUpdateMesh);
	void SetStartAndEnd(const struct FVector& StartPos, const struct FVector& StartTangent, const struct FVector& EndPos, const struct FVector& EndTangent, bool bUpdateMesh);
	void SetStartOffset(const struct FVector2D& StartOffset, bool bUpdateMesh);
	void SetStartPosition(const struct FVector& StartPos, bool bUpdateMesh);
	void SetStartRoll(float StartRoll, bool bUpdateMesh);
	void SetStartScale(const struct FVector2D& StartScale, bool bUpdateMesh);
	void SetStartTangent(const struct FVector& StartTangent, bool bUpdateMesh);
	void UpdateMesh();

	float GetBoundaryMax() const;
	float GetBoundaryMin() const;
	struct FVector2D GetEndOffset() const;
	struct FVector GetEndPosition() const;
	float GetEndRoll() const;
	struct FVector2D GetEndScale() const;
	struct FVector GetEndTangent() const;
	ESplineMeshAxis GetForwardAxis() const;
	struct FVector GetSplineUpDir() const;
	struct FVector2D GetStartOffset() const;
	struct FVector GetStartPosition() const;
	float GetStartRoll() const;
	struct FVector2D GetStartScale() const;
	struct FVector GetStartTangent() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SplineMeshComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SplineMeshComponent")
	}
	static class USplineMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USplineMeshComponent>();
	}
};

// Class Engine.StaticMeshSocket
// 0x0040 (0x0068 - 0x0028)
class UStaticMeshSocket : public UObject
{
public:
	class FName                                   SocketName;                                        // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                RelativeLocation;                                  // 0x0030(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RelativeRotation;                                  // 0x003C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                RelativeScale;                                     // 0x0048(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Tag;                                               // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("StaticMeshSocket")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"StaticMeshSocket")
	}
	static class UStaticMeshSocket* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStaticMeshSocket>();
	}
};

// Class Engine.StereoLayerComponent
// 0x00E0 (0x0330 - 0x0250)
class UStereoLayerComponent : public USceneComponent
{
public:
	uint8                                         bLiveTexture : 1;                                  // 0x0250(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsDepth : 1;                                // 0x0250(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bNoAlphaChannel : 1;                               // 0x0250(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               Texture;                                           // 0x0258(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture*                               LeftTexture;                                       // 0x0260(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bQuadPreserveTextureRatio : 1;                     // 0x0268(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_269[0x3];                                      // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              QuadSize;                                          // 0x026C(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBox2D                                 UVRect;                                            // 0x0274(0x0014)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                         CylinderRadius;                                    // 0x0288(0x0004)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         CylinderOverlayArc;                                // 0x028C(0x0004)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         CylinderHeight;                                    // 0x0290(0x0004)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FEquirectProps                         EquirectProps;                                     // 0x0294(0x0048)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	EStereoLayerType                              StereoLayerType;                                   // 0x02DC(0x0001)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EStereoLayerShape                             StereoLayerShape;                                  // 0x02DD(0x0001)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2DE[0x2];                                      // 0x02DE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Priority;                                          // 0x02E0(0x0004)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2E4[0x4C];                                     // 0x02E4(0x004C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void MarkTextureForUpdate();
	void SetEquirectProps(const struct FEquirectProps& InScaleBiases);
	void SetLeftTexture(class UTexture* InTexture);
	void SetPriority(int32 InPriority);
	void SetQuadSize(const struct FVector2D& InQuadSize);
	void SetTexture(class UTexture* InTexture);
	void SetUVRect(const struct FBox2D& InUVRect);

	class UTexture* GetLeftTexture() const;
	int32 GetPriority() const;
	struct FVector2D GetQuadSize() const;
	class UTexture* GetTexture() const;
	struct FBox2D GetUVRect() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("StereoLayerComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"StereoLayerComponent")
	}
	static class UStereoLayerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStereoLayerComponent>();
	}
};

// Class Engine.StereoLayerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UStereoLayerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	static void EnableAutoLoadingSplashScreen(bool InAutoShowEnabled);
	static void HideSplashScreen();
	static void SetSplashScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector& offset, bool bShowLoadingMovie, bool bShowOnSet);
	static void ShowSplashScreen();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("StereoLayerFunctionLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"StereoLayerFunctionLibrary")
	}
	static class UStereoLayerFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStereoLayerFunctionLibrary>();
	}
};

// Class Engine.SubsurfaceProfile
// 0x0090 (0x00B8 - 0x0028)
class USubsurfaceProfile : public UObject
{
public:
	struct FSubsurfaceProfileStruct               Settings;                                          // 0x0028(0x008C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SubsurfaceProfile")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SubsurfaceProfile")
	}
	static class USubsurfaceProfile* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubsurfaceProfile>();
	}
};

// Class Engine.SubsystemBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USubsystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	static class UEngineSubsystem* GetEngineSubsystem(TSubclassOf<class UEngineSubsystem> Class_0);
	static class UGameInstanceSubsystem* GetGameInstanceSubsystem(class UObject* ContextObject, TSubclassOf<class UGameInstanceSubsystem> Class_0);
	static class ULocalPlayerSubsystem* GetLocalPlayerSubsystem(class UObject* ContextObject, TSubclassOf<class ULocalPlayerSubsystem> Class_0);
	static class ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(class APlayerController* PlayerController, TSubclassOf<class ULocalPlayerSubsystem> Class_0);
	static class UWorldSubsystem* GetWorldSubsystem(class UObject* ContextObject, TSubclassOf<class UWorldSubsystem> Class_0);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SubsystemBlueprintLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SubsystemBlueprintLibrary")
	}
	static class USubsystemBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubsystemBlueprintLibrary>();
	}
};

// Class Engine.SystemTimeTimecodeProvider
// 0x0010 (0x0040 - 0x0030)
class USystemTimeTimecodeProvider : public UTimecodeProvider
{
public:
	struct FFrameRate                             FrameRate;                                         // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_38[0x8];                                       // 0x0038(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetFrameRate(const struct FFrameRate& InFrameRate);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SystemTimeTimecodeProvider")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SystemTimeTimecodeProvider")
	}
	static class USystemTimeTimecodeProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<USystemTimeTimecodeProvider>();
	}
};

// Class Engine.TargetPoint
// 0x0000 (0x0370 - 0x0370)
class ATargetPoint : public AActor
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TargetPoint")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TargetPoint")
	}
	static class ATargetPoint* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATargetPoint>();
	}
};

// Class Engine.TetLightData
// 0x0068 (0x0090 - 0x0028)
class UTetLightData : public UObject
{
public:
	uint8                                         Pad_28[0x68];                                      // 0x0028(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TetLightData")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TetLightData")
	}
	static class UTetLightData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTetLightData>();
	}
};

// Class Engine.TextRenderActor
// 0x0008 (0x0378 - 0x0370)
class ATextRenderActor : public AActor
{
public:
	class UTextRenderComponent*                   TextRender;                                        // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TextRenderActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TextRenderActor")
	}
	static class ATextRenderActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATextRenderActor>();
	}
};

// Class Engine.Texture2DArray
// 0x0058 (0x0188 - 0x0130)
class UTexture2DArray : public UTexture
{
public:
	uint8                                         Pad_130[0x58];                                     // 0x0130(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Texture2DArray")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Texture2DArray")
	}
	static class UTexture2DArray* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTexture2DArray>();
	}
};

// Class Engine.TextureGroupSettingsConfig
// 0x0070 (0x00A8 - 0x0038)
class UTextureGroupSettingsConfig : public UDeveloperSettings
{
public:
	TMap<ETextureGroup, struct FTextureGroupStreamingPriorityBias> StreamingPriorityBiasSettings;    // 0x0038(0x0050)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FTextureGroupSettings>          TextureGroupSettings;                              // 0x0088(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FTextureGroupSettings>          TextureArrayGroupSettings;                         // 0x0098(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TextureGroupSettingsConfig")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TextureGroupSettingsConfig")
	}
	static class UTextureGroupSettingsConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextureGroupSettingsConfig>();
	}
};

// Class Engine.TextureRenderTargetCube
// 0x0018 (0x0150 - 0x0138)
class UTextureRenderTargetCube : public UTextureRenderTarget
{
public:
	int32                                         SizeX;                                             // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ClearColor;                                        // 0x013C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPixelFormat                                  OverrideFormat;                                    // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bHDR : 1;                                          // 0x014D(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bForceLinearGamma : 1;                             // 0x014D(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_14E[0x2];                                      // 0x014E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TextureRenderTargetCube")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TextureRenderTargetCube")
	}
	static class UTextureRenderTargetCube* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextureRenderTargetCube>();
	}
};

// Class Engine.TickTaskWhiteList
// 0x0068 (0x00A0 - 0x0038)
class UTickTaskWhiteList : public UDeveloperSettings
{
public:
	TArray<class FString>                         ServerAllowedTickClasses;                          // 0x0038(0x0010)(Edit, ZeroConstructor, Config, GlobalConfig, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_48[0x58];                                      // 0x0048(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TickTaskWhiteList")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TickTaskWhiteList")
	}
	static class UTickTaskWhiteList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickTaskWhiteList>();
	}
};

// Class Engine.TimelineComponent
// 0x00A0 (0x0198 - 0x00F8)
class UTimelineComponent : public UActorComponent
{
public:
	struct FTimeline                              TheTimeline;                                       // 0x00F8(0x0098)(Net, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                         bIgnoreTimeDilation : 1;                           // 0x0190(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_Timeline();
	void Play();
	void PlayFromStart();
	void Reverse();
	void ReverseFromEnd();
	void SetFloatCurve(class UCurveFloat* NewFloatCurve, class FName FloatTrackName);
	void SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation);
	void SetLinearColorCurve(class UCurveLinearColor* NewLinearColorCurve, class FName LinearColorTrackName);
	void SetLooping(bool bNewLooping);
	void SetNewTime(float NewTime);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate);
	void SetPlayRate(float NewRate);
	void SetTimelineLength(float NewLength);
	void SetTimelineLengthMode(ETimelineLengthMode NewLengthMode);
	void SetVectorCurve(class UCurveVector* NewVectorCurve, class FName VectorTrackName);
	void Stop();

	bool GetIgnoreTimeDilation() const;
	float GetPlaybackPosition() const;
	float GetPlayRate() const;
	float GetTimelineLength() const;
	bool IsLooping() const;
	bool IsPlaying() const;
	bool IsReversing() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TimelineComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TimelineComponent")
	}
	static class UTimelineComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimelineComponent>();
	}
};

// Class Engine.TimelineTemplate
// 0x0088 (0x00B0 - 0x0028)
class UTimelineTemplate : public UObject
{
public:
	float                                         TimelineLength;                                    // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETimelineLengthMode                           LengthMode;                                        // 0x002C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAutoPlay : 1;                                     // 0x002D(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bLoop : 1;                                         // 0x002D(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bReplicated : 1;                                   // 0x002D(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIgnoreTimeDilation : 1;                           // 0x002D(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTTEventTrack>                  EventTracks;                                       // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTTFloatTrack>                  FloatTracks;                                       // 0x0040(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTTVectorTrack>                 VectorTracks;                                      // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTTLinearColorTrack>            LinearColorTracks;                                 // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBPVariableMetaDataEntry>       MetaDataArray;                                     // 0x0070(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                  TimelineGuid;                                      // 0x0080(0x0010)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   VariableName;                                      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   DirectionPropertyName;                             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   UpdateFunctionName;                                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   FinishedFunctionName;                              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TimelineTemplate")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TimelineTemplate")
	}
	static class UTimelineTemplate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimelineTemplate>();
	}
};

// Class Engine.TOD_ReflectionManager
// 0x00F8 (0x0128 - 0x0030)
class UTOD_ReflectionManager : public UWorldSubsystem
{
public:
	TSet<class AReflectionCapture*>               ReflectionCaptureActors;                           // 0x0030(0x0050)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_80[0xA8];                                      // 0x0080(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TOD_ReflectionManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TOD_ReflectionManager")
	}
	static class UTOD_ReflectionManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTOD_ReflectionManager>();
	}
};

// Class Engine.ABCNatrualLightObj
// 0x0020 (0x0050 - 0x0030)
class UABCNatrualLightObj : public UDataAsset
{
public:
	int32                                         tileid;                                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint16>                                ProbeAmbientCubeData_SkyVis;                       // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ABCNatrualLightObj")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ABCNatrualLightObj")
	}
	static class UABCNatrualLightObj* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABCNatrualLightObj>();
	}
};

// Class Engine.TodSaveMarker
// 0x0008 (0x0038 - 0x0030)
class UTodSaveMarker : public UDataAsset
{
public:
	bool                                          IsPinned;                                          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TodSaveMarker")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TodSaveMarker")
	}
	static class UTodSaveMarker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTodSaveMarker>();
	}
};

// Class Engine.PRTGlobalMetaData
// 0x0030 (0x0060 - 0x0030)
class UPRTGlobalMetaData : public UDataAsset
{
public:
	int32                                         SavedTodNum;                                       // 0x0030(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SavedTime[0x6];                                    // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TileIdsOfHavingPersec;                             // 0x0050(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PRTGlobalMetaData")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PRTGlobalMetaData")
	}
	static class UPRTGlobalMetaData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPRTGlobalMetaData>();
	}
};

// Class Engine.ExposureOverrideVolume
// 0x0048 (0x03F0 - 0x03A8)
class AExposureOverrideVolume : public AVolume
{
public:
	bool                                          UseAsEV_Volume;                                    // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          isInRoom;                                          // 0x03A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3AA[0x2];                                      // 0x03AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Priority;                                          // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Compensation;                                      // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinEV;                                             // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxEV;                                             // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExposureSpeedOverrides                SpeedOverrides;                                    // 0x03BC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         AverageVolume;                                     // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3CC[0x24];                                     // 0x03CC(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ExposureOverrideVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ExposureOverrideVolume")
	}
	static class AExposureOverrideVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AExposureOverrideVolume>();
	}
};

// Class Engine.InteriorVolume
// 0x0150 (0x0540 - 0x03F0)
class AInteriorVolume : public AExposureOverrideVolume
{
public:
	bool                                          AntiLightLeak;                                     // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          JustBox;                                           // 0x03F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F2[0x6];                                      // 0x03F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 PointDotNormal_Local;                              // 0x03F8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        Normals;                                           // 0x0408(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 PointNumPerSection;                                // 0x0418(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        AllTrianglePoints;                                 // 0x0428(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        LocalMeshCenters;                                  // 0x0438(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        LocalMeshExtents;                                  // 0x0448(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_458[0xE8];                                     // 0x0458(0x00E8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InteriorVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InteriorVolume")
	}
	static class AInteriorVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInteriorVolume>();
	}
};

// Class Engine.TODManager
// 0x0020 (0x0050 - 0x0030)
class UTODManager : public UWorldSubsystem
{
public:
	class AActor*                                 TODSequenceActor;                                  // 0x0030(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNZSkyBoxComponent*                     SkyBoxComponent;                                   // 0x0038(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNZSkyBoxComponent*                     SkyBoxComponentToSwitch;                           // 0x0040(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TODManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TODManager")
	}
	static class UTODManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTODManager>();
	}
};

// Class Engine.TouchInterface
// 0x0030 (0x0058 - 0x0028)
class UTouchInterface : public UObject
{
public:
	TArray<struct FTouchInputControl>             Controls;                                          // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         ActiveOpacity;                                     // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InactiveOpacity;                                   // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeUntilDeactive;                                 // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TimeUntilReset;                                    // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ActivationDelay;                                   // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPreventRecenter;                                  // 0x004C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartupDelay;                                      // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TouchInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TouchInterface")
	}
	static class UTouchInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTouchInterface>();
	}
};

// Class Engine.TriggerCapsule
// 0x0000 (0x0378 - 0x0378)
class ATriggerCapsule : public ATriggerBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TriggerCapsule")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TriggerCapsule")
	}
	static class ATriggerCapsule* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATriggerCapsule>();
	}
};

// Class Engine.TriggerVolume
// 0x0000 (0x03A8 - 0x03A8)
class ATriggerVolume : public AVolume
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TriggerVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TriggerVolume")
	}
	static class ATriggerVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATriggerVolume>();
	}
};

// Class Engine.UMaterialExpressionUnscaledViewSize
// 0x0000 (0x0040 - 0x0040)
class UUMaterialExpressionUnscaledViewSize : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("UMaterialExpressionUnscaledViewSize")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"UMaterialExpressionUnscaledViewSize")
	}
	static class UUMaterialExpressionUnscaledViewSize* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMaterialExpressionUnscaledViewSize>();
	}
};

// Class Engine.UserDefinedEnum
// 0x0050 (0x00B0 - 0x0060)
class UUserDefinedEnum : public UEnum
{
public:
	TMap<class FName, class FText>                DisplayNameMap;                                    // 0x0060(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("UserDefinedEnum")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"UserDefinedEnum")
	}
	static class UUserDefinedEnum* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserDefinedEnum>();
	}
};

// Class Engine.UserDefinedStruct
// 0x0048 (0x0110 - 0x00C8)
class UUserDefinedStruct : public UScriptStruct
{
public:
	EUserDefinedStructureStatus                   Status;                                            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  Guid;                                              // 0x00CC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DC[0x34];                                      // 0x00DC(0x0034)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("UserDefinedStruct")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"UserDefinedStruct")
	}
	static class UUserDefinedStruct* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserDefinedStruct>();
	}
};

// Class Engine.UserInterfaceSettings
// 0x0248 (0x0280 - 0x0038)
class UUserInterfaceSettings : public UDeveloperSettings
{
public:
	ERenderFocusRule                              RenderFocusRule;                                   // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EMouseCursor, struct FHardwareCursorReference> HardwareCursors;                             // 0x0040(0x0050)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TMap<EMouseCursor, struct FSoftClassPath>     SoftwareCursors;                                   // 0x0090(0x0050)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FSoftClassPath                         DefaultCursor;                                     // 0x00E0(0x0018)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                         TextEditBeamCursor;                                // 0x00F8(0x0018)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                         CrosshairsCursor;                                  // 0x0110(0x0018)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                         HandCursor;                                        // 0x0128(0x0018)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                         GrabHandCursor;                                    // 0x0140(0x0018)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                         GrabHandClosedCursor;                              // 0x0158(0x0018)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                         SlashedCircleCursor;                               // 0x0170(0x0018)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ApplicationScale;                                  // 0x0188(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EUIScalingRule                                UIScaleRule;                                       // 0x018C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_18D[0x3];                                      // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         CustomScalingRuleClass;                            // 0x0190(0x0018)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     UIScaleCurve;                                      // 0x01A8(0x00A0)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                          bAllowHighDPIInGameMode;                           // 0x0248(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLoadWidgetsOnDedicatedServer;                     // 0x0249(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24A[0x6];                                      // 0x024A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        CursorClasses;                                     // 0x0250(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UClass*                                 CustomScalingRuleClassInstance;                    // 0x0260(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDPICustomScalingRule*                  CustomScalingRule;                                 // 0x0268(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_270[0x10];                                     // 0x0270(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("UserInterfaceSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"UserInterfaceSettings")
	}
	static class UUserInterfaceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserInterfaceSettings>();
	}
};

// Class Engine.VectorFieldAnimated
// 0x0040 (0x0088 - 0x0048)
class UVectorFieldAnimated : public UVectorField
{
public:
	class UTexture2D*                             Texture;                                           // 0x0048(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EVectorFieldConstructionOp                    ConstructionOp;                                    // 0x0050(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         VolumeSizeX;                                       // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         VolumeSizeY;                                       // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         VolumeSizeZ;                                       // 0x005C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SubImagesX;                                        // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SubImagesY;                                        // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FrameCount;                                        // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FramesPerSecond;                                   // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bLoop : 1;                                         // 0x0070(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVectorFieldStatic*                     NoiseField;                                        // 0x0078(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NoiseScale;                                        // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NoiseMax;                                          // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VectorFieldAnimated")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VectorFieldAnimated")
	}
	static class UVectorFieldAnimated* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVectorFieldAnimated>();
	}
};

// Class Engine.VectorFieldComponent
// 0x0020 (0x05B0 - 0x0590)
class UVectorFieldComponent : public UPrimitiveComponent
{
public:
	class UVectorField*                           VectorField;                                       // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Intensity;                                         // 0x0590(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Tightness;                                         // 0x0594(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bPreviewVectorField : 1;                           // 0x0598(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_599[0x17];                                     // 0x0599(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetIntensity(float NewIntensity);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VectorFieldComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VectorFieldComponent")
	}
	static class UVectorFieldComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVectorFieldComponent>();
	}
};

// Class Engine.VectorFieldVolume
// 0x0008 (0x0378 - 0x0370)
class AVectorFieldVolume : public AActor
{
public:
	class UVectorFieldComponent*                  VectorFieldComponent;                              // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VectorFieldVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VectorFieldVolume")
	}
	static class AVectorFieldVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVectorFieldVolume>();
	}
};

// Class Engine.VirtualTexture
// 0x0000 (0x0028 - 0x0028)
class UVirtualTexture : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VirtualTexture")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VirtualTexture")
	}
	static class UVirtualTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVirtualTexture>();
	}
};

// Class Engine.LightMapVirtualTexture
// 0x0000 (0x0028 - 0x0028)
class ULightMapVirtualTexture : public UVirtualTexture
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LightMapVirtualTexture")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LightMapVirtualTexture")
	}
	static class ULightMapVirtualTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULightMapVirtualTexture>();
	}
};

// Class Engine.LightMapVirtualTexture2D
// 0x0018 (0x01B0 - 0x0198)
class ULightMapVirtualTexture2D : public UTexture2D
{
public:
	TArray<int8>                                  TypeToLayer;                                       // 0x0198(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         TexelPerMeter;                                     // 0x01A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LightMapVirtualTexture2D")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LightMapVirtualTexture2D")
	}
	static class ULightMapVirtualTexture2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULightMapVirtualTexture2D>();
	}
};

// Class Engine.VirtualTexturePoolConfig
// 0x0018 (0x0040 - 0x0028)
class UVirtualTexturePoolConfig : public UObject
{
public:
	int32                                         DefaultSizeInMegabyte;                             // 0x0028(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVirtualTextureSpacePoolConfig> Pools;                                             // 0x0030(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VirtualTexturePoolConfig")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VirtualTexturePoolConfig")
	}
	static class UVirtualTexturePoolConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVirtualTexturePoolConfig>();
	}
};

// Class Engine.VisualLoggerAutomationTests
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerAutomationTests : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VisualLoggerAutomationTests")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VisualLoggerAutomationTests")
	}
	static class UVisualLoggerAutomationTests* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVisualLoggerAutomationTests>();
	}
};

// Class Engine.VisualLoggerDebugSnapshotInterface
// 0x0000 (0x0000 - 0x0000)
class IVisualLoggerDebugSnapshotInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VisualLoggerDebugSnapshotInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VisualLoggerDebugSnapshotInterface")
	}
	static class IVisualLoggerDebugSnapshotInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IVisualLoggerDebugSnapshotInterface>();
	}
};

// Class Engine.VoiceChannel
// 0x0010 (0x0080 - 0x0070)
class UVoiceChannel : public UChannel
{
public:
	uint8                                         Pad_70[0x10];                                      // 0x0070(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VoiceChannel")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VoiceChannel")
	}
	static class UVoiceChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoiceChannel>();
	}
};

// Class Engine.VOIPTalker
// 0x0038 (0x0130 - 0x00F8)
class UVOIPTalker : public UActorComponent
{
public:
	struct FVoiceSettings                         Settings;                                          // 0x00F8(0x0018)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_110[0x20];                                     // 0x0110(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UVOIPTalker* CreateTalkerForPlayer(class APlayerState* OwningState);

	void BPOnTalkingBegin(class UAudioComponent* AudioComponent);
	void BPOnTalkingEnd();
	float GetVoiceLevel();
	void RegisterWithPlayerState(class APlayerState* OwningState);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VOIPTalker")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VOIPTalker")
	}
	static class UVOIPTalker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVOIPTalker>();
	}
};

// Class Engine.VOIPStatics
// 0x0000 (0x0028 - 0x0028)
class UVOIPStatics : public UBlueprintFunctionLibrary
{
public:
	static void SetMicThreshold(float InThreshold);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VOIPStatics")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VOIPStatics")
	}
	static class UVOIPStatics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVOIPStatics>();
	}
};

// Class Engine.VolumeTexture
// 0x0058 (0x0188 - 0x0130)
class UVolumeTexture : public UTexture
{
public:
	uint8                                         Pad_130[0x58];                                     // 0x0130(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VolumeTexture")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VolumeTexture")
	}
	static class UVolumeTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVolumeTexture>();
	}
};

// Class Engine.VolumetricLightmapDensityVolume
// 0x0008 (0x03B0 - 0x03A8)
class AVolumetricLightmapDensityVolume : public AVolume
{
public:
	struct FInt32Interval                         AllowedMipLevelRange;                              // 0x03A8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("VolumetricLightmapDensityVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"VolumetricLightmapDensityVolume")
	}
	static class AVolumetricLightmapDensityVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVolumetricLightmapDensityVolume>();
	}
};

// Class Engine.WindDirectionalSource
// 0x0008 (0x0378 - 0x0370)
class AWindDirectionalSource : public AInfo
{
public:
	class UWindDirectionalSourceComponent*        Component;                                         // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("WindDirectionalSource")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WindDirectionalSource")
	}
	static class AWindDirectionalSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWindDirectionalSource>();
	}
};

// Class Engine.WindDirectionalSourceComponent
// 0x0030 (0x0280 - 0x0250)
class UWindDirectionalSourceComponent : public USceneComponent
{
public:
	float                                         Strength;                                          // 0x0250(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Speed;                                             // 0x0254(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpeedForFX;                                        // 0x0258(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinGustAmount;                                     // 0x025C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxGustAmount;                                     // 0x0260(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         radius;                                            // 0x0264(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bPointWind : 1;                                    // 0x0268(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_269[0x17];                                     // 0x0269(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMaximumGustAmount(float InNewMaxGust);
	void SetMinimumGustAmount(float InNewMinGust);
	void SetRadius(float InNewRadius);
	void SetSpeed(float InNewSpeed);
	void SetSpeedForFX(float InNewSpeed);
	void SetStrength(float InNewStrength);
	void SetWindType(EWindSourceType InNewType);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("WindDirectionalSourceComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"WindDirectionalSourceComponent")
	}
	static class UWindDirectionalSourceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWindDirectionalSourceComponent>();
	}
};

}

