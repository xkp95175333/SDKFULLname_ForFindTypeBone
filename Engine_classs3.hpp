
// Class Engine.EngineBaseTypes
// 0x0000 (0x0028 - 0x0028)
class UEngineBaseTypes : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("EngineBaseTypes")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"EngineBaseTypes")
	}
	static class UEngineBaseTypes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEngineBaseTypes>();
	}
};

// Class Engine.EngineHandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UEngineHandlerComponentFactory : public UHandlerComponentFactory
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("EngineHandlerComponentFactory")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"EngineHandlerComponentFactory")
	}
	static class UEngineHandlerComponentFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEngineHandlerComponentFactory>();
	}
};

// Class Engine.MaterialExpressionVirtualTextureFeatureSwitch
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionVirtualTextureFeatureSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                       no;                                                // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Yes;                                               // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionVirtualTextureFeatureSwitch")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionVirtualTextureFeatureSwitch")
	}
	static class UMaterialExpressionVirtualTextureFeatureSwitch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionVirtualTextureFeatureSwitch>();
	}
};

// Class Engine.EngineMessage
// 0x0080 (0x00A8 - 0x0028)
class UEngineMessage : public ULocalMessage
{
public:
	class FString                                 FailedPlaceMessage;                                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MaxedOutMessage;                                   // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 EnteredMessage;                                    // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LeftMessage;                                       // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GlobalNameChange;                                  // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SpecEnteredMessage;                                // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 NewPlayerMessage;                                  // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 NewSpecMessage;                                    // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("EngineMessage")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"EngineMessage")
	}
	static class UEngineMessage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEngineMessage>();
	}
};

// Class Engine.SoundNodeOscillator
// 0x0028 (0x0068 - 0x0040)
class USoundNodeOscillator : public USoundNode
{
public:
	uint8                                         bModulateVolume : 1;                               // 0x0040(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bModulatePitch : 1;                                // 0x0040(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AmplitudeMin;                                      // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AmplitudeMax;                                      // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrequencyMin;                                      // 0x004C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FrequencyMax;                                      // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OffsetMin;                                         // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OffsetMax;                                         // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CenterMin;                                         // 0x005C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CenterMax;                                         // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeOscillator")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeOscillator")
	}
	static class USoundNodeOscillator* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeOscillator>();
	}
};

// Class Engine.LightmassImportanceVolume
// 0x0000 (0x03A8 - 0x03A8)
class ALightmassImportanceVolume : public AVolume
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LightmassImportanceVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LightmassImportanceVolume")
	}
	static class ALightmassImportanceVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALightmassImportanceVolume>();
	}
};

// Class Engine.EngineTypes
// 0x0000 (0x0028 - 0x0028)
class UEngineTypes : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("EngineTypes")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"EngineTypes")
	}
	static class UEngineTypes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEngineTypes>();
	}
};

// Class Engine.ExponentialHeightFog
// 0x0010 (0x0380 - 0x0370)
class AExponentialHeightFog : public AInfo
{
public:
	class UExponentialHeightFogComponent*         Component;                                         // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         bEnabled : 1;                                      // 0x0378(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_bEnabled();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ExponentialHeightFog")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ExponentialHeightFog")
	}
	static class AExponentialHeightFog* GetDefaultObj()
	{
		return GetDefaultObjImpl<AExponentialHeightFog>();
	}
};

// Class Engine.ExponentialHeightFogComponent
// 0x0190 (0x03E0 - 0x0250)
class UExponentialHeightFogComponent : public USceneComponent
{
public:
	float                                         FogDensity;                                        // 0x0250(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DirectionalScale;                                  // 0x0254(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FogHeightFalloff;                                  // 0x0258(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25C[0x4];                                      // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             FogMap;                                            // 0x0260(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_268[0x8];                                      // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               FogMapScaleOffset;                                 // 0x0270(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FogMapHeight1;                                     // 0x0280(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FogMapHeight2;                                     // 0x0284(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FogMapHeight3;                                     // 0x0288(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExponentialHeightFogData              SecondFogData;                                     // 0x028C(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                           UnderwaterFogColor;                                // 0x029C(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnderwaterDepthFogDensity;                         // 0x02AC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnderwaterFogAttenuation;                          // 0x02B0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnderwaterFogStartDistance;                        // 0x02B4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           UnderwaterFogAbsorptionColor;                      // 0x02B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           UnderwaterFogInscatteringColor;                    // 0x02C8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnderwaterFogDensity;                              // 0x02D8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnderwaterFogHeightFalloff;                        // 0x02DC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnderwaterFogExponentialStartDistance;             // 0x02E0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnderwaterFogCustomData1;                          // 0x02E4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnderwaterFogCustomData2;                          // 0x02E8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnderwaterVolumetricFogScale;                      // 0x02EC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnderwaterFogCustomData3;                          // 0x02F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClipmap*                               WaterHeightClipmapMap;                             // 0x02F8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UnderwaterFogCustomData4;                          // 0x0300(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EnableUnderwaterFogMobile;                         // 0x0304(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IntroSecondFog;                                    // 0x0308(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_309[0x3];                                      // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           FogInscatteringColor;                              // 0x030C(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31C[0x4];                                      // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureCube*                           InscatteringColorCubemap;                          // 0x0320(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InscatteringColorCubemapAngle;                     // 0x0328(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           InscatteringTextureTint;                           // 0x032C(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FullyDirectionalInscatteringColorDistance;         // 0x033C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NonDirectionalInscatteringColorDistance;           // 0x0340(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DirectionalInscatteringExponent;                   // 0x0344(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DirectionalInscatteringStartDistance;              // 0x0348(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           DirectionalInscatteringColor;                      // 0x034C(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FogMaxOpacity;                                     // 0x035C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartDistance;                                     // 0x0360(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FogCutoffDistance;                                 // 0x0364(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableVolumetricFog;                              // 0x0368(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableVolumetricExclude;                          // 0x0369(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOnlyLocalLight;                                   // 0x036A(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_36B[0x1];                                      // 0x036B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         VolumetricFogScatteringDistribution;               // 0x036C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 VolumetricFogAlbedo;                               // 0x0370(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           VolumetricFogEmissive;                             // 0x0374(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumetricFogExtinctionScale;                      // 0x0384(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumetricFogDistance;                             // 0x0388(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OverrideVolumetricFogDistance;                     // 0x038C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumetricFogStaticLightingScatteringIntensity;    // 0x0390(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 BPFogAlbedoOverride;                               // 0x0394(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BPFogExtinctionScaleOverride;                      // 0x0398(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumetricFarStart;                                // 0x039C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumetricFarEnd;                                  // 0x03A0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideLightColorsWithFogInscatteringColors;     // 0x03A4(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A5[0x3];                                      // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGlobalInteriorFogData                 GlobalInteriorFogData;                             // 0x03A8(0x0030)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_3D8[0x8];                                      // 0x03D8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetBPFogAlbedoOverride(const struct FColor& NewValue);
	void SetBPFogExtinctionOverride(float NewValue);
	void SetDirectionalInscatteringColor(const struct FLinearColor& Value);
	void SetDirectionalInscatteringExponent(float Value);
	void SetDirectionalInscatteringStartDistance(float Value);
	void SetDirectionalScale(float Value);
	void SetEnableUnderwaterFogMobile(float Value);
	void SetFogCutoffDistance(float Value);
	void SetFogDensity(float Value);
	void SetFogHeightFalloff(float Value);
	void SetFogInscatteringColor(const struct FLinearColor& Value);
	void SetFogMapHeight1(float Value);
	void SetFogMapHeight2(float Value);
	void SetFogMapHeight3(float Value);
	void SetFogMapScaleOffset(const struct FVector4& Value);
	void SetFogMaxOpacity(float Value);
	void SetFullyDirectionalInscatteringColorDistance(float Value);
	void SetInscatteringColorCubemap(class UTextureCube* Value);
	void SetInscatteringColorCubemapAngle(float Value);
	void SetInscatteringTextureTint(const struct FLinearColor& Value);
	void SetIntroSecondFog(bool Value);
	void SetNonDirectionalInscatteringColorDistance(float Value);
	void SetOverrideVolumetricFogDistance(float NewValue);
	void SetSecondFogDensity(float Value);
	void SetSecondFogHeightFalloff(float Value);
	void SetSecondFogHeightOffset(float Value);
	void SetSecondFogStartDistance(float Value);
	void SetStartDistance(float Value);
	void SetUnderwaterDepthFogDensity(float Value);
	void SetUnderwaterFogAbsorptionColor(const struct FLinearColor& Value);
	void SetUnderWaterFogAttenuation(float Value);
	void SetUnderWaterFogColor(const struct FLinearColor& Value);
	void SetUnderWaterFogCustomData1(float Value);
	void SetUnderWaterFogCustomData2(float Value);
	void SetUnderWaterFogCustomData3(float Value);
	void SetUnderWaterFogCustomData4(float Value);
	void SetUnderWaterFogDensity(float Value);
	void SetUnderWaterFogExponentialStartDistance(float Value);
	void SetUnderWaterFogHeightClipmap(class UClipmap* Value);
	void SetUnderWaterFogHeightFalloff(float Value);
	void SetUnderWaterFogInscatteringColor(const struct FLinearColor& Value);
	void SetUnderWaterFogStartDistance(float Value);
	void SetVolumetricExclude(bool bNewValue);
	void SetVolumetricFog(bool bNewValue);
	void SetVolumetricFogAlbedo(const struct FColor& NewValue);
	void SetVolumetricFogDistance(float NewValue);
	void SetVolumetricFogEmissive(const struct FLinearColor& NewValue);
	void SetVolumetricFogExtinctionScale(float NewValue);
	void SetVolumetricFogScatteringDistribution(float NewValue);
	void SetVolumetricLocalLight(bool bNewValue);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ExponentialHeightFogComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ExponentialHeightFogComponent")
	}
	static class UExponentialHeightFogComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UExponentialHeightFogComponent>();
	}
};

// Class Engine.MaterialExpressionConstant
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionConstant : public UMaterialExpression
{
public:
	float                                         R;                                                 // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionConstant")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionConstant")
	}
	static class UMaterialExpressionConstant* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionConstant>();
	}
};

// Class Engine.FloatingPawnMovement
// 0x0018 (0x0198 - 0x0180)
class UFloatingPawnMovement : public UPawnMovementComponent
{
public:
	float                                         MaxSpeed;                                          // 0x0180(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Acceleration;                                      // 0x0184(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Deceleration;                                      // 0x0188(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TurningBoost;                                      // 0x018C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bPositionCorrected : 1;                            // 0x0190(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("FloatingPawnMovement")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"FloatingPawnMovement")
	}
	static class UFloatingPawnMovement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFloatingPawnMovement>();
	}
};

// Class Engine.MaterialExpressionViewSize
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionViewSize : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionViewSize")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionViewSize")
	}
	static class UMaterialExpressionViewSize* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionViewSize>();
	}
};

// Class Engine.Font
// 0x01B0 (0x01D8 - 0x0028)
class UFont : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	EFontCacheType                                FontCacheType;                                     // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FontVOffset;                                       // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FontVOffset_Top;                                   // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FontVOffset_Bottom;                                // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFontCharacter>                 Characters;                                        // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                     Textures;                                          // 0x0050(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         IsRemapped;                                        // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EmScale;                                           // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Ascent;                                            // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Descent;                                           // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Leading;                                           // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Kerning;                                           // 0x0074(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontImportOptionsData                 ImportOptions;                                     // 0x0078(0x00B0)(Edit, NativeAccessSpecifierPublic)
	int32                                         NumCharacters;                                     // 0x0128(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 MaxCharHeight;                                     // 0x0130(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	float                                         ScalingFactor;                                     // 0x0140(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         LegacyFontSize;                                    // 0x0144(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   LegacyFontName;                                    // 0x0148(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCompositeFont                         CompositeFont;                                     // 0x0150(0x0038)(NativeAccessSpecifierPublic)
	uint8                                         Pad_188[0x50];                                     // 0x0188(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Font")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Font")
	}
	static class UFont* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFont>();
	}
};

// Class Engine.MaterialFunctionInstance
// 0x0090 (0x00D0 - 0x0040)
class UMaterialFunctionInstance : public UMaterialFunctionInterface
{
public:
	class UMaterialFunctionInterface*             Parent;                                            // 0x0040(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialFunctionInterface*             Base;                                              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FScalarParameterValue>          ScalarParameterValues;                             // 0x0050(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVectorParameterValue>          VectorParameterValues;                             // 0x0060(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTextureParameterValue>         TextureParameterValues;                            // 0x0070(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSpriteTextureParameterValue>   SpriteTextureParameterValues;                      // 0x0080(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFontParameterValue>            FontParameterValues;                               // 0x0090(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStaticSwitchParameter>         StaticSwitchParameterValues;                       // 0x00A0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FStaticComponentMaskParameter>  StaticComponentMaskParameterValues;                // 0x00B0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;        // 0x00C0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialFunctionInstance")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialFunctionInstance")
	}
	static class UMaterialFunctionInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialFunctionInstance>();
	}
};

// Class Engine.MaterialFunctionMaterialLayerInstance
// 0x0000 (0x00D0 - 0x00D0)
class UMaterialFunctionMaterialLayerInstance : public UMaterialFunctionInstance
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialFunctionMaterialLayerInstance")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialFunctionMaterialLayerInstance")
	}
	static class UMaterialFunctionMaterialLayerInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialFunctionMaterialLayerInstance>();
	}
};

// Class Engine.LocalLightGroupBake
// 0x0248 (0x0270 - 0x0028)
class ULocalLightGroupBake : public UObject
{
public:
	TArray<struct FLocalLightGroupBakeLightMapInfo> LightMapInfos;                                   // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLocalLightGroupBakeShadowMapInfo> ShadowMapInfos;                                 // 0x0038(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_48[0x140];                                     // 0x0048(0x0140)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ULightMapVirtualTexture2D*>      ConvertedVTLightmaps;                              // 0x0188(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bForHD;                                            // 0x0198(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_199[0xD7];                                     // 0x0199(0x00D7)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LocalLightGroupBake")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LocalLightGroupBake")
	}
	static class ULocalLightGroupBake* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalLightGroupBake>();
	}
};

// Class Engine.ForceFeedbackAttenuation
// 0x00C8 (0x00F0 - 0x0028)
class UForceFeedbackAttenuation : public UObject
{
public:
	struct FForceFeedbackAttenuationSettings      Attenuation;                                       // 0x0028(0x00C8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ForceFeedbackAttenuation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ForceFeedbackAttenuation")
	}
	static class UForceFeedbackAttenuation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UForceFeedbackAttenuation>();
	}
};

// Class Engine.LightmassPortalComponent
// 0x0010 (0x0260 - 0x0250)
class ULightmassPortalComponent : public USceneComponent
{
public:
	class UBoxComponent*                          PreviewBox;                                        // 0x0250(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_258[0x8];                                      // 0x0258(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LightmassPortalComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LightmassPortalComponent")
	}
	static class ULightmassPortalComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULightmassPortalComponent>();
	}
};

// Class Engine.ForceFeedbackEffect
// 0x0018 (0x0040 - 0x0028)
class UForceFeedbackEffect : public UObject
{
public:
	TArray<struct FForceFeedbackChannelDetails>   ChannelDetails;                                    // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         Duration;                                          // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ForceFeedbackEffect")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ForceFeedbackEffect")
	}
	static class UForceFeedbackEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<UForceFeedbackEffect>();
	}
};

// Class Engine.ThumbnailInfo
// 0x0000 (0x0028 - 0x0028)
class UThumbnailInfo : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ThumbnailInfo")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ThumbnailInfo")
	}
	static class UThumbnailInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UThumbnailInfo>();
	}
};

// Class Engine.GameNetworkManager
// 0x00B0 (0x0420 - 0x0370)
class AGameNetworkManager : public AInfo
{
public:
	float                                         BadPacketLossThreshold;                            // 0x0370(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SeverePacketLossThreshold;                         // 0x0374(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         BadPingThreshold;                                  // 0x0378(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SeverePingThreshold;                               // 0x037C(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AdjustedNetSpeed;                                  // 0x0380(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LastNetSpeedUpdateTime;                            // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TotalNetBandwidth;                                 // 0x0388(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinDynamicBandwidth;                               // 0x038C(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxDynamicBandwidth;                               // 0x0390(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsStandbyCheckingEnabled : 1;                     // 0x0394(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHasStandbyCheatTriggered : 1;                     // 0x0394(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_395[0x3];                                      // 0x0395(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StandbyRxCheatTime;                                // 0x0398(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StandbyTxCheatTime;                                // 0x039C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PercentMissingForRxStandby;                        // 0x03A0(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PercentMissingForTxStandby;                        // 0x03A4(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PercentForBadPing;                                 // 0x03A8(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         JoinInProgressStandbyWaitTime;                     // 0x03AC(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MoveRepSize;                                       // 0x03B0(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MAXPOSITIONERRORSQUARED;                           // 0x03B4(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MAXNEARZEROVELOCITYSQUARED;                        // 0x03B8(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CLIENTADJUSTUPDATECOST;                            // 0x03BC(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MAXCLIENTUPDATEINTERVAL;                           // 0x03C0(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxClientForcedUpdateDuration;                     // 0x03C4(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ServerForcedUpdateHitchThreshold;                  // 0x03C8(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ServerForcedUpdateHitchCooldown;                   // 0x03CC(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxMoveDeltaTime;                                  // 0x03D0(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxClientSmoothingDeltaTime;                       // 0x03D4(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClientNetSendMoveDeltaTime;                        // 0x03D8(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClientNetSendMoveDeltaTimeThrottled;               // 0x03DC(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClientNetSendMoveDeltaTimeStationary;              // 0x03E0(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ClientNetSendMoveThrottleAtNetSpeed;               // 0x03E4(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ClientNetSendMoveThrottleOverPlayerCount;          // 0x03E8(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ClientAuthorativePosition;                         // 0x03EC(0x0001)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3ED[0x3];                                      // 0x03ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ClientErrorUpdateRateLimit;                        // 0x03F0(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClientNetCamUpdateDeltaTime;                       // 0x03F4(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClientNetCamUpdatePositionLimit;                   // 0x03F8(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMovementTimeDiscrepancyDetection;                 // 0x03FC(0x0001)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMovementTimeDiscrepancyResolution;                // 0x03FD(0x0001)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3FE[0x2];                                      // 0x03FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MovementTimeDiscrepancyMaxTimeMargin;              // 0x0400(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MovementTimeDiscrepancyMinTimeMargin;              // 0x0404(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MovementTimeDiscrepancyResolutionRate;             // 0x0408(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MovementTimeDiscrepancyDriftAllowance;             // 0x040C(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x0410(0x0001)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseDistanceBasedRelevancy;                        // 0x0411(0x0001)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_412[0xE];                                      // 0x0412(0x000E)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GameNetworkManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GameNetworkManager")
	}
	static class AGameNetworkManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGameNetworkManager>();
	}
};

// Class Engine.GeneratedMeshAreaLight
// 0x0000 (0x0388 - 0x0388)
class AGeneratedMeshAreaLight : public ASpotLight
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GeneratedMeshAreaLight")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GeneratedMeshAreaLight")
	}
	static class AGeneratedMeshAreaLight* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeneratedMeshAreaLight>();
	}
};

// Class Engine.MatineeActorCameraAnim
// 0x0008 (0x0420 - 0x0418)
class AMatineeActorCameraAnim : public AMatineeActor
{
public:
	class UCameraAnim*                            CameraAnim;                                        // 0x0418(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MatineeActorCameraAnim")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MatineeActorCameraAnim")
	}
	static class AMatineeActorCameraAnim* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMatineeActorCameraAnim>();
	}
};

// Class Engine.LocalLightBakeVolume
// 0x00A0 (0x0448 - 0x03A8)
class ALocalLightBakeVolume : public AVolume
{
public:
	ELocalLightBakeMode                           BakeMode;                                          // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReflectionCaptureDirectionalLight;                // 0x03A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReflectionCaptureSkyLight;                        // 0x03AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReflectionCaptureExponentialHeightFog;            // 0x03AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReflectionCaptureBounces;                          // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOpenLightMapSizeLimit;                            // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableEnvironmentScene;                           // 0x03B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3B2[0x2];                                      // 0x03B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLightMapAtlasPackingSettings          LightMapAtlasPackingSettings;                      // 0x03B4(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLightMapAtlasPackingSettings          HDLightMapAtlasPackingSettings;                    // 0x03D4(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FColor                                 ReplaceAlbedo;                                     // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AlphaBoost;                                        // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DiffuseBoost;                                      // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                BakingLevelList;                                   // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                BakingLevelList_AddingForHD;                       // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                BakingLevelList_AddingForMobile;                   // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	EStaticShadowmapScale                         StaticSHDirectionScale;                            // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseAmbientOcclusion;                              // 0x0431(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_432[0x2];                                      // 0x0432(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxOcclusionDistance;                              // 0x0434(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OcclusionExponent;                                 // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SkipDistance;                                      // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBakeLoadGIVolume;                                 // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_441[0x7];                                      // 0x0441(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LocalLightBakeVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LocalLightBakeVolume")
	}
	static class ALocalLightBakeVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALocalLightBakeVolume>();
	}
};

// Class Engine.GpuMergedTexture
// 0x0050 (0x01E8 - 0x0198)
class UGpuMergedTexture : public UTexture2D
{
public:
	uint8                                         Pad_198[0x20];                                     // 0x0198(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	class UGpuMergeTextureTask*                   PendingStreamInTask;                               // 0x01B8(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStopPendingStreamInHasBeenStarted;                // 0x01C0(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 TexPendingMipMapGeneration;                        // 0x01C8(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             TexPendingTargetTextureAfterMipMapGeneration;      // 0x01D0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D8[0x10];                                     // 0x01D8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GpuMergedTexture")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GpuMergedTexture")
	}
	static class UGpuMergedTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGpuMergedTexture>();
	}
};

// Class Engine.GpuMergeTextureTask
// 0x0040 (0x0068 - 0x0028)
class UGpuMergeTextureTask : public UObject
{
public:
	class UGpuMergedTexture*                      TargetTexture;                                     // 0x0028(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UGpuMergedTexture*                      IntermediateGpuMergedTexture;                      // 0x0030(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_38[0x20];                                      // 0x0038(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         WaitRtcEndTimeTicks;                               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GpuMergeTextureTask")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GpuMergeTextureTask")
	}
	static class UGpuMergeTextureTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGpuMergeTextureTask>();
	}
};

// Class Engine.LocalPlayerSubsystem
// 0x0000 (0x0030 - 0x0030)
class ULocalPlayerSubsystem : public USubsystem
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LocalPlayerSubsystem")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LocalPlayerSubsystem")
	}
	static class ULocalPlayerSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalPlayerSubsystem>();
	}
};

// Class Engine.HapticFeedbackEffect_Buffer
// 0x0040 (0x0068 - 0x0028)
class UHapticFeedbackEffect_Buffer : public UHapticFeedbackEffect_Base
{
public:
	TArray<uint8>                                 Amplitudes;                                        // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         SampleRate;                                        // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x2C];                                      // 0x003C(0x002C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("HapticFeedbackEffect_Buffer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"HapticFeedbackEffect_Buffer")
	}
	static class UHapticFeedbackEffect_Buffer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHapticFeedbackEffect_Buffer>();
	}
};

// Class Engine.TetLightCache
// 0x0050 (0x0078 - 0x0028)
class UTetLightCache : public UObject
{
public:
	uint8                                         Pad_28[0x50];                                      // 0x0028(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TetLightCache")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TetLightCache")
	}
	static class UTetLightCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTetLightCache>();
	}
};

// Class Engine.MaterialExpressionVertexTangentWS
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionVertexTangentWS : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionVertexTangentWS")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionVertexTangentWS")
	}
	static class UMaterialExpressionVertexTangentWS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionVertexTangentWS>();
	}
};

// Class Engine.HLODProxy
// 0x0010 (0x0038 - 0x0028)
class UHLODProxy : public UObject
{
public:
	TArray<struct FHLODProxyMesh>                 ProxyMeshes;                                       // 0x0028(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("HLODProxy")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"HLODProxy")
	}
	static class UHLODProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHLODProxy>();
	}
};

// Class Engine.AmbisonicsSubmixSettingsBase
// 0x0000 (0x0028 - 0x0028)
class UAmbisonicsSubmixSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("AmbisonicsSubmixSettingsBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"AmbisonicsSubmixSettingsBase")
	}
	static class UAmbisonicsSubmixSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAmbisonicsSubmixSettingsBase>();
	}
};

// Class Engine.OcclusionPluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("OcclusionPluginSourceSettingsBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"OcclusionPluginSourceSettingsBase")
	}
	static class UOcclusionPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOcclusionPluginSourceSettingsBase>();
	}
};

// Class Engine.SoundNodeConcatenator
// 0x0010 (0x0050 - 0x0040)
class USoundNodeConcatenator : public USoundNode
{
public:
	TArray<float>                                 InputVolume;                                       // 0x0040(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeConcatenator")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeConcatenator")
	}
	static class USoundNodeConcatenator* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeConcatenator>();
	}
};

// Class Engine.ReverbPluginSourceSettingsBase
// 0x0000 (0x0028 - 0x0028)
class UReverbPluginSourceSettingsBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ReverbPluginSourceSettingsBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ReverbPluginSourceSettingsBase")
	}
	static class UReverbPluginSourceSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReverbPluginSourceSettingsBase>();
	}
};

// Class Engine.ImportantToggleSettingInterface
// 0x0000 (0x0000 - 0x0000)
class IImportantToggleSettingInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ImportantToggleSettingInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ImportantToggleSettingInterface")
	}
	static class IImportantToggleSettingInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IImportantToggleSettingInterface>();
	}
};

// Class Engine.InterpTrackInstVectorMaterialParam
// 0x0038 (0x0060 - 0x0028)
class UInterpTrackInstVectorMaterialParam : public UInterpTrackInst
{
public:
	TArray<class UMaterialInstanceDynamic*>       MaterialInstances;                                 // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        ResetVectors;                                      // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPrimitiveMaterialRef>          PrimitiveMaterialRefs;                             // 0x0048(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UInterpTrackVectorMaterialParam*        InstancedTrack;                                    // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstVectorMaterialParam")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstVectorMaterialParam")
	}
	static class UInterpTrackInstVectorMaterialParam* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstVectorMaterialParam>();
	}
};

// Class Engine.InGameAdManager
// 0x0028 (0x0060 - 0x0038)
class UInGameAdManager : public UPlatformInterfaceBase
{
public:
	uint8                                         bShouldPauseWhileAdOpen : 1;                       // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TDelegate<void()>>                     ClickedBannerDelegates;                            // 0x0040(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<TDelegate<void()>>                     ClosedAdDelegates;                                 // 0x0050(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InGameAdManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InGameAdManager")
	}
	static class UInGameAdManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInGameAdManager>();
	}
};

// Class Engine.MaterialExpressionAtmosphericFogColor
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionAtmosphericFogColor : public UMaterialExpression
{
public:
	struct FExpressionInput                       WorldPosition;                                     // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionAtmosphericFogColor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionAtmosphericFogColor")
	}
	static class UMaterialExpressionAtmosphericFogColor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionAtmosphericFogColor>();
	}
};

// Class Engine.InputActionDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputActionDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintInputActionDelegateBinding> InputActionDelegateBindings;                 // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InputActionDelegateBinding")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InputActionDelegateBinding")
	}
	static class UInputActionDelegateBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputActionDelegateBinding>();
	}
};

// Class Engine.InterpTrackLinearColorProp
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackLinearColorProp : public UInterpTrackLinearColorBase
{
public:
	class FName                                   PropertyName;                                      // 0x0090(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackLinearColorProp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackLinearColorProp")
	}
	static class UInterpTrackLinearColorProp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackLinearColorProp>();
	}
};

// Class Engine.InputAxisDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputAxisDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings;                     // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InputAxisDelegateBinding")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InputAxisDelegateBinding")
	}
	static class UInputAxisDelegateBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputAxisDelegateBinding>();
	}
};

// Class Engine.RainEffectComponent
// 0x01D0 (0x0420 - 0x0250)
class URainEffectComponent : public USceneComponent
{
public:
	bool                                          bEnableRainEffect;                                 // 0x0250(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_251[0x3];                                      // 0x0251(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WetIntensity;                                      // 0x0254(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RainIntensity;                                     // 0x0258(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RoughnessFadeDistance;                             // 0x025C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RoughnessFadeTransition;                           // 0x0260(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RoughnessFadeThreshold;                            // 0x0264(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PuddleThreshold;                                   // 0x0268(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GlobalSaturationShift;                             // 0x026C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RippleDensity;                                     // 0x0270(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RippleIntensity;                                   // 0x0274(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RippleEdgeContrast;                                // 0x0278(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RippleSpeed;                                       // 0x027C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                               RippleWeightVector;                                // 0x0280(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             RippleNormalTemplateTexture;                       // 0x0290(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RippleCullDistance;                                // 0x0298(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WindRippleIntensity;                               // 0x029C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                               WindRippleDensityVector;                           // 0x02A0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                               WindRippleSpeedVector;                             // 0x02B0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             WindRippleHFNormalTemplateTexture;                 // 0x02C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             WindRippleLFNormalTemplateTexture;                 // 0x02C8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUsePreBakeShadowDepthMap;                         // 0x02D0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D1[0x3];                                      // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RainShadowCascadeCount;                            // 0x02D4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RainShadowMapTileResolution;                       // 0x02D8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RainShadowMapTileSize;                             // 0x02DC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALightShadowVolume*                     RainShadowRangeVolume;                             // 0x02E0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RainShadowBias;                                    // 0x02E8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RainShadowTransition;                              // 0x02EC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPreBakeTODDirectionalShadowDepthMap*   PreBakeRainShadowMapData;                          // 0x02F0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2F8[0x50];                                     // 0x02F8(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<struct FIntPoint, struct FShadowDataItem> ShadowDatas;                                      // 0x0348(0x0050)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_398[0x88];                                     // 0x0398(0x0088)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetGlobalSaturationShift(float NewGlobalSaturationShift);
	void SetIsEnableRainEffect(bool bEnabled);
	void SetPuddleThreshold(float NewPuddleThreshold);
	void SetRainIntensity(float NewIntensity);
	void SetRainShadowBias(float NewRainShadowBias);
	void SetRainShadowTransition(float NewRainShadowTransition);
	void SetRippleDensity(float NewDensity);
	void SetRippleEdgeContrast(float NewRippleEdgeContrast);
	void SetRippleIntensity(float NewIntensity);
	void SetRippleSpeed(float NewRippleSpeed);
	void SetRippleWeightVector(const struct FVector4& NewRippleWeightVector);
	void SetRoughnessFadeDistance(float NewRoughnessFadeDistance);
	void SetRoughnessFadeThreshold(float NewRoughnessFadeThreshold);
	void SetRoughnessFadeTransition(float NewRoughnessFadeTransition);
	void SetWetIntensity(float NewIntensity);
	void SetWindRippleDensityVector(const struct FVector4& NewWindRippleDensityVector);
	void SetWindRippleIntensity(float NewWindRippleIntensity);
	void SetWindRippleSpeedVector(const struct FVector4& NewWindRippleSpeedVector);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RainEffectComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RainEffectComponent")
	}
	static class URainEffectComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<URainEffectComponent>();
	}
};

// Class Engine.InputAxisKeyDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputAxisKeyDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings;               // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InputAxisKeyDelegateBinding")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InputAxisKeyDelegateBinding")
	}
	static class UInputAxisKeyDelegateBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputAxisKeyDelegateBinding>();
	}
};

// Class Engine.InputSettings
// 0x00C8 (0x00F0 - 0x0028)
class UInputSettings : public UObject
{
public:
	TArray<struct FInputAxisConfigEntry>          AxisConfig;                                        // 0x0028(0x0010)(Edit, EditFixedSize, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         bAltEnterTogglesFullscreen : 1;                    // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bF11TogglesFullscreen : 1;                         // 0x0038(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseMouseForTouch : 1;                             // 0x0038(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableMouseSmoothing : 1;                         // 0x0038(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableFOVScaling : 1;                             // 0x0038(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCaptureMouseOnLaunch : 1;                         // 0x0038(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDefaultViewportMouseLock : 1;                     // 0x0038(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Config, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAlwaysShowTouchInterface : 1;                     // 0x0038(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bShowConsoleOnFourFingerTap : 1;                   // 0x0039(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableGestureRecognizer : 1;                      // 0x0039(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	bool                                          bUseAutocorrect;                                   // 0x003A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         ExcludedAutocorrectOS;                             // 0x0040(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class FString>                         ExcludedAutocorrectCultures;                       // 0x0050(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class FString>                         ExcludedAutocorrectDeviceModels;                   // 0x0060(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
	EMouseCaptureMode                             DefaultViewportMouseCaptureMode;                   // 0x0070(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMouseLockMode                                DefaultViewportMouseLockMode;                      // 0x0071(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_72[0x2];                                       // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FOVScale;                                          // 0x0074(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DoubleClickTime;                                   // 0x0078(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FInputActionKeyMapping>         ActionMappings;                                    // 0x0080(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FInputAxisKeyMapping>           AxisMappings;                                      // 0x0090(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FInputActionSpeechMapping>      SpeechMappings;                                    // 0x00A0(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                        DefaultTouchInterface;                             // 0x00B0(0x0018)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   ConsoleKey;                                        // 0x00C8(0x0018)(Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                           ConsoleKeys;                                       // 0x00E0(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UInputSettings* GetInputSettings();

	void AddActionMapping(const struct FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
	void AddAxisMapping(const struct FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
	void ForceRebuildKeymaps();
	void RemoveActionMapping(const struct FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
	void RemoveAxisMapping(const struct FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
	void SaveKeyMappings();

	void GetActionMappingByName(const class FName InActionName, TArray<struct FInputActionKeyMapping>* OutMappings) const;
	void GetActionNames(TArray<class FName>* ActionNames) const;
	void GetAxisMappingByName(const class FName InAxisName, TArray<struct FInputAxisKeyMapping>* OutMappings) const;
	void GetAxisNames(TArray<class FName>* AxisNames) const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InputSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InputSettings")
	}
	static class UInputSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputSettings>();
	}
};

// Class Engine.MaterialExpressionAtlasBatchNumericArgument
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionAtlasBatchNumericArgument : public UMaterialExpression
{
public:
	int32                                         MaterialLayerIndex;                                // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ArgumentLocalVectorIndex;                          // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionAtlasBatchNumericArgument")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionAtlasBatchNumericArgument")
	}
	static class UMaterialExpressionAtlasBatchNumericArgument* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionAtlasBatchNumericArgument>();
	}
};

// Class Engine.InputTouchDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UInputTouchDelegateBinding : public UInputDelegateBinding
{
public:
	TArray<struct FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings;                   // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InputTouchDelegateBinding")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InputTouchDelegateBinding")
	}
	static class UInputTouchDelegateBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputTouchDelegateBinding>();
	}
};

// Class Engine.TireType
// 0x0008 (0x0038 - 0x0030)
class UTireType : public UDataAsset
{
public:
	float                                         FrictionScale;                                     // 0x0030(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TireType")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TireType")
	}
	static class UTireType* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTireType>();
	}
};

// Class Engine.InputVectorAxisDelegateBinding
// 0x0000 (0x0038 - 0x0038)
class UInputVectorAxisDelegateBinding : public UInputAxisKeyDelegateBinding
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InputVectorAxisDelegateBinding")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InputVectorAxisDelegateBinding")
	}
	static class UInputVectorAxisDelegateBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputVectorAxisDelegateBinding>();
	}
};

// Class Engine.MaterialExpressionBumpOffset
// 0x0048 (0x0088 - 0x0040)
class UMaterialExpressionBumpOffset : public UMaterialExpression
{
public:
	struct FExpressionInput                       Coordinate;                                        // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Height;                                            // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       HeightRatioInput;                                  // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HeightRatio;                                       // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReferencePlane;                                    // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        ConstCoordinate;                                   // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionBumpOffset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionBumpOffset")
	}
	static class UMaterialExpressionBumpOffset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionBumpOffset>();
	}
};

// Class Engine.Interface_AssetUserData
// 0x0000 (0x0000 - 0x0000)
class IInterface_AssetUserData : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Interface_AssetUserData")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Interface_AssetUserData")
	}
	static class IInterface_AssetUserData* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInterface_AssetUserData>();
	}
};

// Class Engine.Interface_CollisionDataProvider
// 0x0000 (0x0000 - 0x0000)
class IInterface_CollisionDataProvider : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Interface_CollisionDataProvider")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Interface_CollisionDataProvider")
	}
	static class IInterface_CollisionDataProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInterface_CollisionDataProvider>();
	}
};

// Class Engine.MaterialExpressionArctangent2Fast
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionArctangent2Fast : public UMaterialExpression
{
public:
	struct FExpressionInput                       Y;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       X;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionArctangent2Fast")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionArctangent2Fast")
	}
	static class UMaterialExpressionArctangent2Fast* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionArctangent2Fast>();
	}
};

// Class Engine.InterpCurveEdSetup
// 0x0018 (0x0040 - 0x0028)
class UInterpCurveEdSetup : public UObject
{
public:
	TArray<struct FCurveEdTab>                    Tabs;                                              // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         ActiveTab;                                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpCurveEdSetup")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpCurveEdSetup")
	}
	static class UInterpCurveEdSetup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpCurveEdSetup>();
	}
};

// Class Engine.InterpData
// 0x0048 (0x0070 - 0x0028)
class UInterpData : public UObject
{
public:
	float                                         InterpLength;                                      // 0x0028(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PathBuildTime;                                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInterpGroup*>                   InterpGroups;                                      // 0x0030(0x0010)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UInterpCurveEdSetup*                    CurveEdSetup;                                      // 0x0040(0x0008)(ExportObject, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EdSectionStart;                                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EdSectionEnd;                                      // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bShouldBakeAndPrune : 1;                           // 0x0050(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInterpGroupDirector*                   CachedDirectorGroup;                               // 0x0058(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           AllEventNames;                                     // 0x0060(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpData")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpData")
	}
	static class UInterpData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpData>();
	}
};

// Class Engine.MaterialExpressionBreakMaterialAttributes
// 0x0020 (0x0060 - 0x0040)
class UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression
{
public:
	struct FMaterialAttributesInput               MaterialAttributes;                                // 0x0040(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x10];                                      // 0x0050(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionBreakMaterialAttributes")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionBreakMaterialAttributes")
	}
	static class UMaterialExpressionBreakMaterialAttributes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionBreakMaterialAttributes>();
	}
};

// Class Engine.MaterialExpressionClearCoatNormalCustomOutput
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionClearCoatNormalCustomOutput : public UMaterialExpressionCustomOutput
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionClearCoatNormalCustomOutput")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionClearCoatNormalCustomOutput")
	}
	static class UMaterialExpressionClearCoatNormalCustomOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionClearCoatNormalCustomOutput>();
	}
};

// Class Engine.InterpFilter_Custom
// 0x0000 (0x0038 - 0x0038)
class UInterpFilter_Custom : public UInterpFilter
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpFilter_Custom")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpFilter_Custom")
	}
	static class UInterpFilter_Custom* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpFilter_Custom>();
	}
};

// Class Engine.InterpGroup
// 0x0028 (0x0050 - 0x0028)
class UInterpGroup : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UInterpTrack*>                   InterpTracks;                                      // 0x0030(0x0010)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                   GroupName;                                         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 GroupColor;                                        // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bCollapsed : 1;                                    // 0x004C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bVisible : 1;                                      // 0x004C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsFolder : 1;                                     // 0x004C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsParented : 1;                                   // 0x004C(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsSelected : 1;                                   // 0x004C(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpGroup")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpGroup")
	}
	static class UInterpGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpGroup>();
	}
};

// Class Engine.MaterialExpressionCameraVectorWS
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionCameraVectorWS : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionCameraVectorWS")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionCameraVectorWS")
	}
	static class UMaterialExpressionCameraVectorWS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionCameraVectorWS>();
	}
};

// Class Engine.InterpGroupCamera
// 0x0010 (0x0060 - 0x0050)
class UInterpGroupCamera : public UInterpGroup
{
public:
	class UCameraAnim*                            CameraAnimInst;                                    // 0x0050(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CompressTolerance;                                 // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpGroupCamera")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpGroupCamera")
	}
	static class UInterpGroupCamera* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpGroupCamera>();
	}
};

// Class Engine.SkeletalMesh
// 0x0378 (0x03B8 - 0x0040)
class USkeletalMesh : public UStreamableRenderAsset
{
public:
	uint8                                         Pad_40[0x20];                                      // 0x0040(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeleton*                              Skeleton;                                          // 0x0060(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoxSphereBounds                       ImportedBounds;                                    // 0x0068(0x001C)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                       ExtendedBounds;                                    // 0x0084(0x001C)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FVector                                PositiveBoundsExtension;                           // 0x00A0(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                NegativeBoundsExtension;                           // 0x00AC(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FSkeletalMaterial>              Materials;                                         // 0x00B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<struct FBoneMirrorInfo>                SkelMirrorTable;                                   // 0x00C8(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSkeletalMeshLODInfo>           LODInfo;                                           // 0x00D8(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E8[0x50];                                      // 0x00E8(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPerPlatformInt                        MinLOD;                                            // 0x0138(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformBool                       DisableBelowMinLodStripping;                       // 0x013C(0x0001)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_13D[0x3];                                      // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MeshGroup;                                         // 0x0140(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAxis                                         SkelMirrorAxis;                                    // 0x0148(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAxis                                         SkelMirrorFlipAxis;                                // 0x0149(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseFullPrecisionUVs : 1;                          // 0x014A(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseHighPrecisionTangentBasis : 1;                 // 0x014A(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHasBeenSimplified : 1;                            // 0x014A(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHasVertexColors : 1;                              // 0x014A(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_14A_4 : 1;                                  // 0x014A(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bEnablePerPolyCollision : 1;                       // 0x014A(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_14B[0x5];                                      // 0x014B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBodySetup*                             BodySetup;                                         // 0x0150(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                          PhysicsAsset;                                      // 0x0158(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                          ShadowPhysicsAsset;                                // 0x0160(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNodeMappingContainer*>          NodeMappingData;                                   // 0x0168(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         CullingDistance;                                   // 0x0178(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CullingScreenSize;                                 // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LocalLightShadowBias;                              // 0x0180(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_184[0x4];                                      // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMorphTarget*>                   MorphTargets;                                      // 0x0188(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_198[0x178];                                    // 0x0198(0x0178)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UAnimInstance>              PostProcessAnimBlueprint;                          // 0x0310(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           AssetsTags;                                        // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UClothingAssetBase*>             MeshClothingAssets;                                // 0x0328(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSkeletalMeshSamplingInfo              SamplingInfo;                                      // 0x0338(0x0030)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<class UAssetUserData*>                 AssetUserData;                                     // 0x0368(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_378[0x8];                                      // 0x0378(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkeletalMeshSocket*>            Sockets;                                           // 0x0380(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_390[0x10];                                     // 0x0390(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bSupportRayTracing : 1;                            // 0x03A0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_3A1[0x7];                                      // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSkinWeightProfileInfo>         SkinWeightProfiles;                                // 0x03A8(0x0010)(Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	void SetLODSettings(class USkeletalMeshLODSettings* InLODSettings);

	class USkeletalMeshSocket* FindSocket(class FName InSocketName) const;
	class USkeletalMeshSocket* FindSocketAndIndex(class FName InSocketName, int32* OutIndex) const;
	class USkeletalMeshSocket* FindSocketInfo(class FName InSocketName, struct FTransform* OutTransform, int32* OutBoneIndex, int32* OutIndex) const;
	struct FBoxSphereBounds GetBounds() const;
	struct FBoxSphereBounds GetImportedBounds() const;
	class UNodeMappingContainer* GetNodeMappingContainer(class UBlueprint* SourceAsset) const;
	class USkeletalMeshSocket* GetSocketByIndex(int32 Index_0) const;
	bool IsSectionUsingCloth(int32 InSectionIndex, bool bCheckCorrespondingSections) const;
	TArray<class FString> K2_GetAllMorphTargetNames() const;
	int32 NumSockets() const;

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SkeletalMesh")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SkeletalMesh")
	}
	static class USkeletalMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkeletalMesh>();
	}
};

// Class Engine.RuntimeSkeletalMesh
// 0x0188 (0x0540 - 0x03B8)
class URuntimeSkeletalMesh : public USkeletalMesh
{
public:
	uint8                                         Pad_3B8[0xB8];                                     // 0x03B8(0x00B8)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSkelMeshMaterials>             SubSkeletalMeshMaterials;                          // 0x0470(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     UsedMergeMaterial;                                 // 0x0480(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_488[0xB8];                                     // 0x0488(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class URuntimeSkeletalMesh* CreateRuntimeSkeletalMesh(class UPackage* Package);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RuntimeSkeletalMesh")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RuntimeSkeletalMesh")
	}
	static class URuntimeSkeletalMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<URuntimeSkeletalMesh>();
	}
};

// Class Engine.InterpGroupDirector
// 0x0000 (0x0050 - 0x0050)
class UInterpGroupDirector : public UInterpGroup
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpGroupDirector")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpGroupDirector")
	}
	static class UInterpGroupDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpGroupDirector>();
	}
};

// Class Engine.MaterialExpressionBlackBody
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionBlackBody : public UMaterialExpression
{
public:
	struct FExpressionInput                       Temp;                                              // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionBlackBody")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionBlackBody")
	}
	static class UMaterialExpressionBlackBody* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionBlackBody>();
	}
};

// Class Engine.InterpToMovementComponent
// 0x00A0 (0x01D8 - 0x0138)
class UInterpToMovementComponent : public UMovementComponent
{
public:
	float                                         Duration;                                          // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bPauseOnImpact : 1;                                // 0x013C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_13D[0x3];                                      // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bSweep;                                            // 0x0140(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETeleportType                                 TeleportType;                                      // 0x0141(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInterpToBehaviourType                        BehaviourType;                                     // 0x0142(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCheckIfStillInWorld;                              // 0x0143(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bForceSubStepping : 1;                             // 0x0144(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_145[0x3];                                      // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(const struct FHitResult& ImpactResult, float Time)> OnInterpToReverse; // 0x0148(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FHitResult& ImpactResult, float Time)> OnInterpToStop; // 0x0158(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FHitResult& ImpactResult, float Time)> OnWaitBeginDelegate; // 0x0168(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FHitResult& ImpactResult, float Time)> OnWaitEndDelegate; // 0x0178(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(const struct FHitResult& ImpactResult, float Time)> OnResetDelegate; // 0x0188(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                         MaxSimulationTimeStep;                             // 0x0198(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxSimulationIterations;                           // 0x019C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInterpControlPoint>            ControlPoints;                                     // 0x01A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B0[0x28];                                     // 0x01B0(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void FinaliseControlPoints();
	void RestartMovement(float InitialDirection);
	void StopSimulating(const struct FHitResult& HitResult);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpToMovementComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpToMovementComponent")
	}
	static class UInterpToMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpToMovementComponent>();
	}
};

// Class Engine.SoundNodeDoppler
// 0x0010 (0x0050 - 0x0040)
class USoundNodeDoppler : public USoundNode
{
public:
	float                                         DopplerIntensity;                                  // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSmoothing;                                     // 0x0044(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SmoothingInterpSpeed;                              // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundNodeDoppler")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundNodeDoppler")
	}
	static class USoundNodeDoppler* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundNodeDoppler>();
	}
};

// Class Engine.MaterialExpressionComment
// 0x0030 (0x0070 - 0x0040)
class UMaterialExpressionComment : public UMaterialExpression
{
public:
	int32                                         SizeX;                                             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SizeY;                                             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Text;                                              // 0x0048(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           CommentColor;                                      // 0x0058(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontSize;                                          // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionComment")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionComment")
	}
	static class UMaterialExpressionComment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionComment>();
	}
};

// Class Engine.InterpTrackBoolProp
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackBoolProp : public UInterpTrack
{
public:
	TArray<struct FBoolTrackKey>                  BoolTrack;                                         // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x0080(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackBoolProp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackBoolProp")
	}
	static class UInterpTrackBoolProp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackBoolProp>();
	}
};

// Class Engine.InterpTrackColorScale
// 0x0000 (0x0090 - 0x0090)
class UInterpTrackColorScale : public UInterpTrackVectorBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackColorScale")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackColorScale")
	}
	static class UInterpTrackColorScale* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackColorScale>();
	}
};

// Class Engine.InterpTrackEvent
// 0x0018 (0x0088 - 0x0070)
class UInterpTrackEvent : public UInterpTrack
{
public:
	TArray<struct FEventTrackKey>                 EventTrack;                                        // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bFireEventsWhenForwards : 1;                       // 0x0080(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFireEventsWhenBackwards : 1;                      // 0x0080(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFireEventsWhenJumpingForwards : 1;                // 0x0080(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseCustomEventName : 1;                           // 0x0080(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackEvent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackEvent")
	}
	static class UInterpTrackEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackEvent>();
	}
};

// Class Engine.InterpTrackFloatAnimBPParam
// 0x0020 (0x00B0 - 0x0090)
class UInterpTrackFloatAnimBPParam : public UInterpTrackFloatBase
{
public:
	class UClass*                                 AnimBlueprintClass;                                // 0x0090(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimInstance>              AnimClass;                                         // 0x0098(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ParamName;                                         // 0x00A0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A8[0x8];                                       // 0x00A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackFloatAnimBPParam")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackFloatAnimBPParam")
	}
	static class UInterpTrackFloatAnimBPParam* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackFloatAnimBPParam>();
	}
};

// Class Engine.ParticleModuleSize
// 0x0060 (0x0090 - 0x0030)
class UParticleModuleSize : public UParticleModuleSizeBase
{
public:
	struct FRawDistributionVector                 StartSize;                                         // 0x0030(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          bConsiderCameraDistanceSizeScalar;                 // 0x0078(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartCameraDistance;                               // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndCameraDistance;                                 // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartSizeScalar;                                   // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndSizeScalar;                                     // 0x0088(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleSize")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleSize")
	}
	static class UParticleModuleSize* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleSize>();
	}
};

// Class Engine.ParticleModuleSize_Seeded
// 0x0020 (0x00B0 - 0x0090)
class UParticleModuleSize_Seeded : public UParticleModuleSize
{
public:
	struct FParticleRandomSeedInfo                RandomSeedInfo;                                    // 0x0090(0x0020)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleSize_Seeded")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleSize_Seeded")
	}
	static class UParticleModuleSize_Seeded* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleSize_Seeded>();
	}
};

// Class Engine.InterpTrackFloatParticleParam
// 0x0008 (0x0098 - 0x0090)
class UInterpTrackFloatParticleParam : public UInterpTrackFloatBase
{
public:
	class FName                                   ParamName;                                         // 0x0090(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackFloatParticleParam")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackFloatParticleParam")
	}
	static class UInterpTrackFloatParticleParam* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackFloatParticleParam>();
	}
};

// Class Engine.ParticleModuleMeshRotationRate
// 0x0048 (0x0078 - 0x0030)
class UParticleModuleMeshRotationRate : public UParticleModuleRotationRateBase
{
public:
	struct FRawDistributionVector                 StartRotationRate;                                 // 0x0030(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleMeshRotationRate")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleMeshRotationRate")
	}
	static class UParticleModuleMeshRotationRate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleMeshRotationRate>();
	}
};

// Class Engine.ParticleModuleMeshRotationRate_Seeded
// 0x0020 (0x0098 - 0x0078)
class UParticleModuleMeshRotationRate_Seeded : public UParticleModuleMeshRotationRate
{
public:
	struct FParticleRandomSeedInfo                RandomSeedInfo;                                    // 0x0078(0x0020)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleMeshRotationRate_Seeded")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleMeshRotationRate_Seeded")
	}
	static class UParticleModuleMeshRotationRate_Seeded* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleMeshRotationRate_Seeded>();
	}
};

// Class Engine.InterpTrackInstAnimControl
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAnimControl : public UInterpTrackInst
{
public:
	float                                         LastUpdatePosition;                                // 0x0028(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstAnimControl")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstAnimControl")
	}
	static class UInterpTrackInstAnimControl* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstAnimControl>();
	}
};

// Class Engine.InterpTrackInstColorProp
// 0x0010 (0x0060 - 0x0050)
class UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
public:
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 ResetColor;                                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstColorProp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstColorProp")
	}
	static class UInterpTrackInstColorProp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstColorProp>();
	}
};

// Class Engine.ParticleModuleSubUVBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleSubUVBase : public UParticleModule
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleSubUVBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleSubUVBase")
	}
	static class UParticleModuleSubUVBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleSubUVBase>();
	}
};

// Class Engine.InterpTrackInstDirector
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstDirector : public UInterpTrackInst
{
public:
	class AActor*                                 OldViewTarget;                                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstDirector")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstDirector")
	}
	static class UInterpTrackInstDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstDirector>();
	}
};

// Class Engine.InterpTrackInstMove
// 0x0018 (0x0040 - 0x0028)
class UInterpTrackInstMove : public UInterpTrackInst
{
public:
	struct FVector                                ResetLocation;                                     // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               ResetRotation;                                     // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstMove")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstMove")
	}
	static class UInterpTrackInstMove* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstMove>();
	}
};

// Class Engine.PhysicsStaticSceneComponent
// 0x0000 (0x0590 - 0x0590)
class UPhysicsStaticSceneComponent : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsStaticSceneComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsStaticSceneComponent")
	}
	static class UPhysicsStaticSceneComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsStaticSceneComponent>();
	}
};

// Class Engine.InterpTrackInstSlomo
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstSlomo : public UInterpTrackInst
{
public:
	float                                         OldTimeDilation;                                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstSlomo")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstSlomo")
	}
	static class UInterpTrackInstSlomo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstSlomo>();
	}
};

// Class Engine.InterpTrackInstVectorProp
// 0x0018 (0x0068 - 0x0050)
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
public:
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ResetVector;                                       // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackInstVectorProp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackInstVectorProp")
	}
	static class UInterpTrackInstVectorProp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackInstVectorProp>();
	}
};

// Class Engine.ParticleModuleLocationBoneSocket
// 0x0040 (0x0070 - 0x0030)
class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
public:
	ELocationBoneSocketSource                     SourceType;                                        // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                UniversalOffset;                                   // 0x0034(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FLocationBoneSocketInfo>        SourceLocations;                                   // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	ELocationBoneSocketSelectionMethod            SelectionMethod;                                   // 0x0050(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bUpdatePositionEachFrame : 1;                      // 0x0054(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOrientMeshEmitters : 1;                           // 0x0054(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bInheritBoneVelocity : 1;                          // 0x0054(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InheritVelocityScale;                              // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SkelMeshActorParamName;                            // 0x005C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumPreSelectedIndices;                             // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_68[0x8];                                       // 0x0068(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLocationBoneSocket")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLocationBoneSocket")
	}
	static class UParticleModuleLocationBoneSocket* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLocationBoneSocket>();
	}
};

// Class Engine.PlaneReflectionCaptureComponent
// 0x0010 (0x04F0 - 0x04E0)
class UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent
{
public:
	float                                         InfluenceRadiusScale;                              // 0x04D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4DC[0x4];                                      // 0x04DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDrawSphereComponent*                   PreviewInfluenceRadius;                            // 0x04E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                          PreviewCaptureBox;                                 // 0x04E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PlaneReflectionCaptureComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PlaneReflectionCaptureComponent")
	}
	static class UPlaneReflectionCaptureComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlaneReflectionCaptureComponent>();
	}
};

// Class Engine.InterpTrackMove
// 0x0058 (0x00C8 - 0x0070)
class UInterpTrackMove : public UInterpTrack
{
public:
	struct FInterpCurveVector                     PosTrack;                                          // 0x0070(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveVector                     EulerTrack;                                        // 0x0088(0x0018)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpLookupTrack                     LookupTrack;                                       // 0x00A0(0x0010)(NativeAccessSpecifierPublic)
	class FName                                   LookAtGroupName;                                   // 0x00B0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LinCurveTension;                                   // 0x00B8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngCurveTension;                                   // 0x00BC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseQuatInterpolation : 1;                         // 0x00C0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bShowArrowAtKeys : 1;                              // 0x00C0(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDisableMovement : 1;                              // 0x00C0(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bShowTranslationOnCurveEd : 1;                     // 0x00C0(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bShowRotationOnCurveEd : 1;                        // 0x00C0(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHide3DTrack : 1;                                  // 0x00C0(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EInterpTrackMoveRotMode                       RotMode;                                           // 0x00C4(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackMove")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackMove")
	}
	static class UInterpTrackMove* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackMove>();
	}
};

// Class Engine.InterpTrackParticleReplay
// 0x0010 (0x0080 - 0x0070)
class UInterpTrackParticleReplay : public UInterpTrack
{
public:
	TArray<struct FParticleReplayTrackKey>        TrackKeys;                                         // 0x0070(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackParticleReplay")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackParticleReplay")
	}
	static class UInterpTrackParticleReplay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackParticleReplay>();
	}
};

// Class Engine.InterpTrackSound
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackSound : public UInterpTrackVectorBase
{
public:
	TArray<struct FSoundTrackKey>                 Sounds;                                            // 0x0090(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bPlayOnReverse : 1;                                // 0x00A0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bContinueSoundOnMatineeEnd : 1;                    // 0x00A0(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSuppressSubtitles : 1;                            // 0x00A0(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bTreatAsDialogue : 1;                              // 0x00A0(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAttach : 1;                                       // 0x00A0(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("InterpTrackSound")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"InterpTrackSound")
	}
	static class UInterpTrackSound* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterpTrackSound>();
	}
};

// Class Engine.NZSkyBoxActor
// 0x0010 (0x0380 - 0x0370)
class ANZSkyBoxActor : public AActor
{
public:
	class UNZSkyBoxComponent*                     Component;                                         // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bEnabled : 1;                                      // 0x0378(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_bEnabled();
	void SetSuspension(bool bSuspended);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NZSkyBoxActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NZSkyBoxActor")
	}
	static class ANZSkyBoxActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANZSkyBoxActor>();
	}
};

// Class Engine.KismetArrayLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetArrayLibrary : public UBlueprintFunctionLibrary
{
public:
	static int32 Array_Add(const TArray<int32>& TargetArray, const int32& NewItem);
	static int32 Array_AddUnique(const TArray<int32>& TargetArray, const int32& NewItem);
	static void Array_Append(const TArray<int32>& TargetArray, const TArray<int32>& SourceArray);
	static void Array_Clear(const TArray<int32>& TargetArray);
	static bool Array_Contains(const TArray<int32>& TargetArray, const int32& ItemToFind);
	static int32 Array_Find(const TArray<int32>& TargetArray, const int32& ItemToFind);
	static void Array_Get(const TArray<int32>& TargetArray, int32 Index_0, int32* Item);
	static bool Array_Identical(const TArray<int32>& ArrayA, const TArray<int32>& ArrayB);
	static void Array_Insert(const TArray<int32>& TargetArray, const int32& NewItem, int32 Index_0);
	static bool Array_IsValidIndex(const TArray<int32>& TargetArray, int32 IndexToTest);
	static int32 Array_LastIndex(const TArray<int32>& TargetArray);
	static int32 Array_Length(const TArray<int32>& TargetArray);
	static void Array_Remove(const TArray<int32>& TargetArray, int32 IndexToRemove);
	static bool Array_RemoveItem(const TArray<int32>& TargetArray, const int32& Item);
	static void Array_Resize(const TArray<int32>& TargetArray, int32 size);
	static void Array_Set(const TArray<int32>& TargetArray, int32 Index_0, const int32& Item, bool bSizeToFit);
	static void Array_Shuffle(const TArray<int32>& TargetArray);
	static void Array_Swap(const TArray<int32>& TargetArray, int32 FirstIndex, int32 SecondIndex);
	static void FilterArray(const TArray<class AActor*>& TargetArray, TSubclassOf<class AActor> FilterClass, TArray<class AActor*>* FilteredArray);
	static void SetArrayPropertyByName(class UObject* Object, class FName PropertyName, const TArray<int32>& Value);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("KismetArrayLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"KismetArrayLibrary")
	}
	static class UKismetArrayLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetArrayLibrary>();
	}
};

// Class Engine.KismetInputLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetInputLibrary : public UBlueprintFunctionLibrary
{
public:
	static void CalibrateTilt();
	static bool EqualEqual_InputChordInputChord(const struct FInputChord& A, const struct FInputChord& B);
	static bool EqualEqual_KeyKey(const struct FKey& A, const struct FKey& B);
	static float GetAnalogValue(const struct FAnalogInputEvent& Input);
	static struct FKey GetKey(const struct FKeyEvent& Input);
	static int32 GetUserIndex(const struct FKeyEvent& Input);
	static class FText InputChord_GetDisplayName(const struct FInputChord& Key);
	static bool InputEvent_IsAltDown(const struct FInputEvent& Input);
	static bool InputEvent_IsCommandDown(const struct FInputEvent& Input);
	static bool InputEvent_IsControlDown(const struct FInputEvent& Input);
	static bool InputEvent_IsLeftAltDown(const struct FInputEvent& Input);
	static bool InputEvent_IsLeftCommandDown(const struct FInputEvent& Input);
	static bool InputEvent_IsLeftControlDown(const struct FInputEvent& Input);
	static bool InputEvent_IsLeftShiftDown(const struct FInputEvent& Input);
	static bool InputEvent_IsRepeat(const struct FInputEvent& Input);
	static bool InputEvent_IsRightAltDown(const struct FInputEvent& Input);
	static bool InputEvent_IsRightCommandDown(const struct FInputEvent& Input);
	static bool InputEvent_IsRightControlDown(const struct FInputEvent& Input);
	static bool InputEvent_IsRightShiftDown(const struct FInputEvent& Input);
	static bool InputEvent_IsShiftDown(const struct FInputEvent& Input);
	static class FText Key_GetDisplayName(const struct FKey& Key);
	static EUINavigationAction Key_GetNavigationAction(const struct FKey& InKey);
	static EUINavigationAction Key_GetNavigationActionFromKey(const struct FKeyEvent& InKeyEvent);
	static EUINavigation Key_GetNavigationDirectionFromAnalog(const struct FAnalogInputEvent& InAnalogEvent);
	static EUINavigation Key_GetNavigationDirectionFromKey(const struct FKeyEvent& InKeyEvent);
	static bool Key_IsFloatAxis(const struct FKey& Key);
	static bool Key_IsGamepadKey(const struct FKey& Key);
	static bool Key_IsKeyboardKey(const struct FKey& Key);
	static bool Key_IsModifierKey(const struct FKey& Key);
	static bool Key_IsMouseButton(const struct FKey& Key);
	static bool Key_IsValid(const struct FKey& Key);
	static bool Key_IsVectorAxis(const struct FKey& Key);
	static struct FVector2D PointerEvent_GetCursorDelta(const struct FPointerEvent& Input);
	static struct FKey PointerEvent_GetEffectingButton(const struct FPointerEvent& Input);
	static struct FVector2D PointerEvent_GetGestureDelta(const struct FPointerEvent& Input);
	static ESlateGesture PointerEvent_GetGestureType(const struct FPointerEvent& Input);
	static struct FVector2D PointerEvent_GetLastScreenSpacePosition(const struct FPointerEvent& Input);
	static int32 PointerEvent_GetPointerIndex(const struct FPointerEvent& Input);
	static struct FVector2D PointerEvent_GetScreenSpacePosition(const struct FPointerEvent& Input);
	static int32 PointerEvent_GetTouchpadIndex(const struct FPointerEvent& Input);
	static int32 PointerEvent_GetUserIndex(const struct FPointerEvent& Input);
	static float PointerEvent_GetWheelDelta(const struct FPointerEvent& Input);
	static bool PointerEvent_IsMouseButtonDown(const struct FPointerEvent& Input, const struct FKey& MouseButton);
	static bool PointerEvent_IsTouchEvent(const struct FPointerEvent& Input);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("KismetInputLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"KismetInputLibrary")
	}
	static class UKismetInputLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetInputLibrary>();
	}
};

// Class Engine.PainCausingVolume
// 0x0028 (0x03E0 - 0x03B8)
class APainCausingVolume : public APhysicsVolume
{
public:
	uint8                                         bPainCausing : 1;                                  // 0x03B8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_3B9[0x3];                                      // 0x03B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DamagePerSec;                                      // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageType>                DamageType;                                        // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PainInterval;                                      // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bEntryPain : 1;                                    // 0x03CC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BACKUP_bPainCausing : 1;                           // 0x03CC(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_3CD[0x3];                                      // 0x03CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            DamageInstigator;                                  // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3D8[0x8];                                      // 0x03D8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PainCausingVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PainCausingVolume")
	}
	static class APainCausingVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<APainCausingVolume>();
	}
};

// Class Engine.KismetMaterialLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary
{
public:
	static class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(class UObject* WorldContextObject, class UMaterialInterface* Parent, class FName OptionalName);
	static float GetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, class FName ParameterName);
	static class UObject* GetTextureParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, class FName ParameterName);
	static struct FLinearColor GetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, class FName ParameterName);
	static void SetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, class FName ParameterName, float ParameterValue);
	static void SetTextureParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, class FName ParameterName, class UObject* ParameterValue);
	static void SetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, class FName ParameterName, const struct FLinearColor& ParameterValue);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("KismetMaterialLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"KismetMaterialLibrary")
	}
	static class UKismetMaterialLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetMaterialLibrary>();
	}
};

// Class Engine.KismetStringLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetStringLibrary : public UBlueprintFunctionLibrary
{
public:
	static class FString BuildString_Bool(const class FString& AppendTo, const class FString& Prefix, bool Inbool, const class FString& Suffix);
	static class FString BuildString_Color(const class FString& AppendTo, const class FString& Prefix, const struct FLinearColor& InColor, const class FString& Suffix);
	static class FString BuildString_Float(const class FString& AppendTo, const class FString& Prefix, float InFloat, const class FString& Suffix);
	static class FString BuildString_Int(const class FString& AppendTo, const class FString& Prefix, int32 inInt, const class FString& Suffix);
	static class FString BuildString_IntVector(const class FString& AppendTo, const class FString& Prefix, const struct FIntVector& InIntVector, const class FString& Suffix);
	static class FString BuildString_Name(const class FString& AppendTo, const class FString& Prefix, class FName InName, const class FString& Suffix);
	static class FString BuildString_Object(const class FString& AppendTo, const class FString& Prefix, class UObject* InObj, const class FString& Suffix);
	static class FString BuildString_Rotator(const class FString& AppendTo, const class FString& Prefix, const struct FRotator& InRot, const class FString& Suffix);
	static class FString BuildString_Vector(const class FString& AppendTo, const class FString& Prefix, const struct FVector& InVector, const class FString& Suffix);
	static class FString BuildString_Vector2d(const class FString& AppendTo, const class FString& Prefix, const struct FVector2D& InVector2D, const class FString& Suffix);
	static class FString Concat_StrStr(const class FString& A, const class FString& B);
	static bool Contains(const class FString& SearchIn, const class FString& SubString, bool bUseCase, bool bSearchFromEnd);
	static class FString Conv_BoolToString(bool Inbool);
	static class FString Conv_ByteToString(uint8 InByte);
	static class FString Conv_ColorToString(const struct FLinearColor& InColor);
	static class FString Conv_FloatToString(float InFloat);
	static class FString Conv_IntToString(int32 inInt);
	static class FString Conv_IntVectorToString(const struct FIntVector& InIntVec);
	static class FString Conv_MatrixToString(const struct FMatrix& InMatrix);
	static class FString Conv_NameToString(class FName InName);
	static class FString Conv_ObjectToString(class UObject* InObj);
	static class FString Conv_RotatorToString(const struct FRotator& InRot);
	static void Conv_StringToColor(const class FString& inString, struct FLinearColor* OutConvertedColor, bool* OutIsValid);
	static float Conv_StringToFloat(const class FString& inString);
	static int32 Conv_StringToInt(const class FString& inString);
	static class FName Conv_StringToName(const class FString& inString);
	static void Conv_StringToRotator(const class FString& inString, struct FRotator* OutConvertedRotator, bool* OutIsValid);
	static void Conv_StringToVector(const class FString& inString, struct FVector* OutConvertedVector, bool* OutIsValid);
	static void Conv_StringToVector2D(const class FString& inString, struct FVector2D* OutConvertedVector2D, bool* OutIsValid);
	static class FString Conv_TransformToString(const struct FTransform& InTrans);
	static class FString Conv_Vector2dToString(const struct FVector2D& InVec);
	static class FString Conv_VectorToString(const struct FVector& InVec);
	static int32 CullArray(const class FString& SourceString, TArray<class FString>* inArray);
	static bool EndsWith(const class FString& SourceString, const class FString& InSuffix, ESearchCase SearchCase);
	static bool EqualEqual_StriStri(const class FString& A, const class FString& B);
	static bool EqualEqual_StrStr(const class FString& A, const class FString& B);
	static int32 FindSubstring(const class FString& SearchIn, const class FString& SubString, bool bUseCase, bool bSearchFromEnd, int32 StartPosition);
	static TArray<class FString> GetCharacterArrayFromString(const class FString& SourceString);
	static int32 GetCharacterAsNumber(const class FString& SourceString, int32 Index_0);
	static class FString GetSubstring(const class FString& SourceString, int32 StartIndex, int32 Length);
	static bool IsNumeric(const class FString& SourceString);
	static class FString JoinStringArray(const TArray<class FString>& SourceArray, const class FString& Separator);
	static class FString Left(const class FString& SourceString, int32 Count);
	static class FString LeftChop(const class FString& SourceString, int32 Count);
	static class FString LeftPad(const class FString& SourceString, int32 ChCount);
	static int32 Len(const class FString& S);
	static bool MatchesWildcard(const class FString& SourceString, const class FString& Wildcard, ESearchCase SearchCase);
	static class FString Mid(const class FString& SourceString, int32 Start, int32 Count);
	static bool NotEqual_StriStri(const class FString& A, const class FString& B);
	static bool NotEqual_StrStr(const class FString& A, const class FString& B);
	static TArray<class FString> ParseIntoArray(const class FString& SourceString, const class FString& Delimiter, const bool CullEmptyStrings);
	static class FString Replace(const class FString& SourceString, const class FString& From, const class FString& To, ESearchCase SearchCase);
	static int32 ReplaceInline(class FString& SourceString, const class FString& SearchText, const class FString& ReplacementText, ESearchCase SearchCase);
	static class FString Reverse(const class FString& SourceString);
	static class FString Right(const class FString& SourceString, int32 Count);
	static class FString RightChop(const class FString& SourceString, int32 Count);
	static class FString RightPad(const class FString& SourceString, int32 ChCount);
	static bool Split(const class FString& SourceString, const class FString& InStr, class FString* LeftS, class FString* RightS, ESearchCase SearchCase, ESearchDir SearchDir);
	static bool StartsWith(const class FString& SourceString, const class FString& InPrefix, ESearchCase SearchCase);
	static class FString TimeSecondsToString(float InSeconds);
	static class FString ToLower(const class FString& SourceString);
	static class FString ToUpper(const class FString& SourceString);
	static class FString Trim(const class FString& SourceString);
	static class FString TrimTrailing(const class FString& SourceString);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("KismetStringLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"KismetStringLibrary")
	}
	static class UKismetStringLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetStringLibrary>();
	}
};

// Class Engine.KismetSystemLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetSystemLibrary : public UBlueprintFunctionLibrary
{
public:
	static struct FDebugFloatHistory AddFloatHistorySample(float Value, const struct FDebugFloatHistory& FloatHistory);
	static int32 BeginTransaction(const class FString& Context, const class FText& Description, class UObject* PrimaryObject);
	static bool BoxOverlapActors(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& BoxExtent, const TArray<EObjectTypeQuery>& ObjectTypes, class UClass* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>* OutActors);
	static bool BoxOverlapComponents(class UObject* WorldContextObject, const struct FVector& BoxPos, const struct FVector& Extent, const TArray<EObjectTypeQuery>& ObjectTypes, class UClass* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	static bool BoxTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool BoxTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, class FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool BoxTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool BoxTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool BoxTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, class FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool BoxTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static void BreakSoftClassPath(const struct FSoftClassPath& InSoftClassPath, class FString* PathString);
	static void BreakSoftObjectPath(const struct FSoftObjectPath& InSoftObjectPath, class FString* PathString);
	static void CancelTransaction(const int32 Index_0);
	static bool CanLaunchURL(const class FString& URL);
	static bool CapsuleOverlapActors(class UObject* WorldContextObject, const struct FVector& CapsulePos, float radius, float HalfHeight, const TArray<EObjectTypeQuery>& ObjectTypes, class UClass* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>* OutActors);
	static bool CapsuleOverlapComponents(class UObject* WorldContextObject, const struct FVector& CapsulePos, float radius, float HalfHeight, const TArray<EObjectTypeQuery>& ObjectTypes, class UClass* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	static bool CapsuleTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float radius, float HalfHeight, ETraceTypeQuery TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool CapsuleTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float radius, float HalfHeight, class FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool CapsuleTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float radius, float HalfHeight, const TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool CapsuleTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float radius, float HalfHeight, ETraceTypeQuery TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool CapsuleTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float radius, float HalfHeight, class FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool CapsuleTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float radius, float HalfHeight, const TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static void CollectGarbage();
	static bool ComponentOverlapActors(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, const TArray<EObjectTypeQuery>& ObjectTypes, class UClass* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>* OutActors);
	static bool ComponentOverlapComponents(class UPrimitiveComponent* Component, const struct FTransform& ComponentTransform, const TArray<EObjectTypeQuery>& ObjectTypes, class UClass* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	static void ControlScreensaver(bool bAllowScreenSaver);
	static TSoftClassPtr<class UClass> Conv_ClassToSoftClassReference(const TSubclassOf<class UObject>& Class_0);
	static class UObject* Conv_InterfaceToObject(const TScriptInterface<class IInterface>& Interface);
	static TSoftObjectPtr<class UObject> Conv_ObjectToSoftObjectReference(class UObject* Object);
	static class FString Conv_PrimaryAssetIdToString(const struct FPrimaryAssetId& PrimaryAssetId);
	static class FString Conv_PrimaryAssetTypeToString(const struct FPrimaryAssetType& PrimaryAssetType);
	static TSoftClassPtr<class UClass> Conv_SoftClassPathToSoftClassRef(const struct FSoftClassPath& SoftClassPath);
	static TSubclassOf<class UObject> Conv_SoftClassReferenceToClass(const TSoftClassPtr<class UClass>& SoftClass);
	static class FString Conv_SoftClassReferenceToString(const TSoftClassPtr<class UClass>& SoftClassReference);
	static class UObject* Conv_SoftObjectReferenceToObject(const TSoftObjectPtr<class UObject>& SoftObject);
	static class FString Conv_SoftObjectReferenceToString(const TSoftObjectPtr<class UObject>& SoftObjectReference);
	static TSoftObjectPtr<class UObject> Conv_SoftObjPathToSoftObjRef(const struct FSoftObjectPath& SoftObjectPath);
	static class FString ConvertToAbsolutePath(const class FString& Filename);
	static class FString ConvertToRelativePath(const class FString& Filename);
	static void CreateCopyForUndoBuffer(class UObject* ObjectToModify);
	static void Delay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo);
	static bool DoesImplementInterface(class UObject* TestObject, TSubclassOf<class IInterface> Interface);
	static void DrawDebugArrow(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, float ArrowSize, const struct FLinearColor& LineColor, float Duration, float Thickness);
	static void DrawDebugBox(class UObject* WorldContextObject, const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& LineColor, const struct FRotator& Rotation, float Duration, float Thickness);
	static void DrawDebugCamera(const class ACameraActor* CameraActor, const struct FLinearColor& CameraColor, float Duration);
	static void DrawDebugCapsule(class UObject* WorldContextObject, const struct FVector& Center, float HalfHeight, float radius, const struct FRotator& Rotation, const struct FLinearColor& LineColor, float Duration, float Thickness);
	static void DrawDebugCircle(class UObject* WorldContextObject, const struct FVector& Center, float radius, int32 NumSegments, const struct FLinearColor& LineColor, float Duration, float Thickness, const struct FVector& YAxis, const struct FVector& ZAxis, bool bDrawAxis);
	static void DrawDebugCone(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, const struct FLinearColor& LineColor, float Duration, float Thickness);
	static void DrawDebugConeInDegrees(class UObject* WorldContextObject, const struct FVector& Origin, const struct FVector& Direction, float Length, float AngleWidth, float AngleHeight, int32 NumSides, const struct FLinearColor& LineColor, float Duration, float Thickness);
	static void DrawDebugCoordinateSystem(class UObject* WorldContextObject, const struct FVector& AxisLoc, const struct FRotator& AxisRot, float Scale, float Duration, float Thickness);
	static void DrawDebugCylinder(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float radius, int32 Segments, const struct FLinearColor& LineColor, float Duration, float Thickness);
	static void DrawDebugFloatHistoryLocation(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FVector& DrawLocation, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration);
	static void DrawDebugFloatHistoryTransform(class UObject* WorldContextObject, const struct FDebugFloatHistory& FloatHistory, const struct FTransform& DrawTransform, const struct FVector2D& DrawSize, const struct FLinearColor& DrawColor, float Duration);
	static void DrawDebugFrustum(class UObject* WorldContextObject, const struct FTransform& FrustumTransform, const struct FLinearColor& FrustumColor, float Duration, float Thickness);
	static void DrawDebugLine(class UObject* WorldContextObject, const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& LineColor, float Duration, float Thickness);
	static void DrawDebugPlane(class UObject* WorldContextObject, const struct FPlane& PlaneCoordinates, const struct FVector& Location, float size, const struct FLinearColor& PlaneColor, float Duration);
	static void DrawDebugPoint(class UObject* WorldContextObject, const struct FVector& Position, float size, const struct FLinearColor& PointColor, float Duration);
	static void DrawDebugSphere(class UObject* WorldContextObject, const struct FVector& Center, float radius, int32 Segments, const struct FLinearColor& LineColor, float Duration, float Thickness);
	static void DrawDebugString(class UObject* WorldContextObject, const struct FVector& TextLocation, const class FString& Text, class AActor* TestBaseActor, const struct FLinearColor& TextColor, float Duration);
	static int32 EndTransaction();
	static bool EqualEqual_PrimaryAssetId(const struct FPrimaryAssetId& A, const struct FPrimaryAssetId& B);
	static bool EqualEqual_PrimaryAssetType(const struct FPrimaryAssetType& A, const struct FPrimaryAssetType& B);
	static bool EqualEqual_SoftClassReference(const TSoftClassPtr<class UClass>& A, const TSoftClassPtr<class UClass>& B);
	static bool EqualEqual_SoftObjectReference(const TSoftObjectPtr<class UObject>& A, const TSoftObjectPtr<class UObject>& B);
	static void ExecuteConsoleCommand(class UObject* WorldContextObject, const class FString& Command, class APlayerController* SpecificPlayer);
	static void FlushDebugStrings(class UObject* WorldContextObject);
	static void FlushPersistentDebugLines(class UObject* WorldContextObject);
	static void ForceCloseAdBanner();
	static void GetActorBounds(const class AActor* Actor, struct FVector* Origin, struct FVector* BoxExtent);
	static void GetActorListFromComponentList(const TArray<class UPrimitiveComponent*>& ComponentList, class UClass* ActorClassFilter, TArray<class AActor*>* OutActorList);
	static int32 GetAdIDCount();
	static class FString GetClassDisplayName(class UClass* Class_0);
	static TSubclassOf<class UObject> GetClassFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	static class FString GetCommandLine();
	static void GetComponentBounds(const class USceneComponent* Component, struct FVector* Origin, struct FVector* BoxExtent, float* SphereRadius);
	static bool GetConsoleVariableBoolValue(const class FString& VariableName);
	static float GetConsoleVariableFloatValue(const class FString& VariableName);
	static int32 GetConsoleVariableIntValue(const class FString& VariableName);
	static bool GetConvenientWindowedResolutions(TArray<struct FIntPoint>* Resolutions);
	static bool GetCurrentBundleState(const struct FPrimaryAssetId& PrimaryAssetId, bool bForceCurrentState, TArray<class FName>* OutBundles);
	static class FString GetDefaultLanguage();
	static class FString GetDefaultLocale();
	static class FString GetDeviceID();
	static class FString GetDisplayName(const class UObject* Object);
	static class FString GetEngineVersion();
	static int64 GetFrameCount();
	static class FString GetGameBundleId();
	static class FString GetGameName();
	static class FString GetGamepadControllerName(int32 ControllerId);
	static float GetGameTimeInSeconds(class UObject* WorldContextObject);
	static class FString GetLocalCurrencyCode();
	static class FString GetLocalCurrencySymbol();
	static int32 GetMinYResolutionFor3DView();
	static int32 GetMinYResolutionForUI();
	static class UObject* GetObjectFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	static class FString GetObjectName(const class UObject* Object);
	static class UObject* GetOuterObject(const class UObject* Object);
	static class FString GetPathName(const class UObject* Object);
	static class FString GetPlatformUserName();
	static TArray<class FString> GetPreferredLanguages();
	static struct FPrimaryAssetId GetPrimaryAssetIdFromClass(TSubclassOf<class UObject> Class_0);
	static struct FPrimaryAssetId GetPrimaryAssetIdFromObject(class UObject* Object);
	static struct FPrimaryAssetId GetPrimaryAssetIdFromSoftClassReference(TSoftClassPtr<class UClass> SoftClassReference);
	static struct FPrimaryAssetId GetPrimaryAssetIdFromSoftObjectReference(TSoftObjectPtr<class UObject> SoftObjectReference);
	static void GetPrimaryAssetIdList(const struct FPrimaryAssetType& PrimaryAssetType, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList);
	static void GetPrimaryAssetsWithBundleState(const TArray<class FName>& RequiredBundles, const TArray<class FName>& ExcludedBundles, const TArray<struct FPrimaryAssetType>& ValidTypes, bool bForceCurrentState, TArray<struct FPrimaryAssetId>* OutPrimaryAssetIdList);
	static class FString GetProjectContentDirectory();
	static class FString GetProjectDirectory();
	static class FString GetProjectSavedDirectory();
	static int32 GetRenderingDetailMode();
	static int32 GetRenderingMaterialQualityLevel();
	static TSoftClassPtr<class UClass> GetSoftClassReferenceFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	static TSoftObjectPtr<class UObject> GetSoftObjectReferenceFromPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	static bool GetSupportedFullscreenResolutions(TArray<struct FIntPoint>* Resolutions);
	static class FString GetUniqueDeviceId();
	static bool GetVolumeButtonsHandledBySystem();
	static struct FWindParametersStruct GetWindParameters(class UObject* WorldContextObject, const struct FVector& Position);
	static void HideAdBanner();
	static bool IsControllerAssignedToGamepad(int32 ControllerId);
	static bool IsDedicatedServer(class UObject* WorldContextObject);
	static bool IsInterstitialAdAvailable();
	static bool IsInterstitialAdRequested();
	static bool IsLoggedIn(class APlayerController* SpecificPlayer);
	static bool IsPackagedForDistribution();
	static bool IsScreensaverEnabled();
	static bool IsServer(class UObject* WorldContextObject);
	static bool IsStandalone(class UObject* WorldContextObject);
	static bool IsUnattended();
	static bool IsValid(const class UObject* Object);
	static bool IsValidClass(class UClass* Class_0);
	static bool IsValidPrimaryAssetId(const struct FPrimaryAssetId& PrimaryAssetId);
	static bool IsValidPrimaryAssetType(const struct FPrimaryAssetType& PrimaryAssetType);
	static bool IsValidSoftClassReference(const TSoftClassPtr<class UClass>& SoftClassReference);
	static bool IsValidSoftObjectReference(const TSoftObjectPtr<class UObject>& SoftObjectReference);
	static void K2_ClearAndInvalidateTimerHandle(class UObject* WorldContextObject, struct FTimerHandle& Handle);
	static void K2_ClearTimer(class UObject* Object, const class FString& FunctionName);
	static void K2_ClearTimerDelegate(TDelegate<void()> Delegate);
	static void K2_ClearTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	static float K2_GetTimerElapsedTime(class UObject* Object, const class FString& FunctionName);
	static float K2_GetTimerElapsedTimeDelegate(TDelegate<void()> Delegate);
	static float K2_GetTimerElapsedTimeHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	static float K2_GetTimerRemainingTime(class UObject* Object, const class FString& FunctionName);
	static float K2_GetTimerRemainingTimeDelegate(TDelegate<void()> Delegate);
	static float K2_GetTimerRemainingTimeHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	static struct FTimerHandle K2_InvalidateTimerHandle(struct FTimerHandle& Handle);
	static bool K2_IsTimerActive(class UObject* Object, const class FString& FunctionName);
	static bool K2_IsTimerActiveDelegate(TDelegate<void()> Delegate);
	static bool K2_IsTimerActiveHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	static bool K2_IsTimerPaused(class UObject* Object, const class FString& FunctionName);
	static bool K2_IsTimerPausedDelegate(TDelegate<void()> Delegate);
	static bool K2_IsTimerPausedHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	static bool K2_IsValidTimerHandle(const struct FTimerHandle& Handle);
	static void K2_PauseTimer(class UObject* Object, const class FString& FunctionName);
	static void K2_PauseTimerDelegate(TDelegate<void()> Delegate);
	static void K2_PauseTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	static struct FTimerHandle K2_SetTimer(class UObject* Object, const class FString& FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
	static struct FTimerHandle K2_SetTimerDelegate(TDelegate<void()> Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
	static bool K2_TimerExists(class UObject* Object, const class FString& FunctionName);
	static bool K2_TimerExistsDelegate(TDelegate<void()> Delegate);
	static bool K2_TimerExistsHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	static void K2_UnPauseTimer(class UObject* Object, const class FString& FunctionName);
	static void K2_UnPauseTimerDelegate(TDelegate<void()> Delegate);
	static void K2_UnPauseTimerHandle(class UObject* WorldContextObject, const struct FTimerHandle& Handle);
	static void LaunchURL(const class FString& URL);
	static bool LineTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, ETraceTypeQuery TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool LineTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, class FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool LineTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, ETraceTypeQuery TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool LineTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, class FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool LineTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, const TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static void LoadAsset(class UObject* WorldContextObject, TSoftObjectPtr<class UObject> Asset, TDelegate<void(class UObject* Loaded)> OnLoaded, const struct FLatentActionInfo& LatentInfo);
	static class UObject* LoadAsset_Blocking(TSoftObjectPtr<class UObject> Asset);
	static void LoadAssetClass(class UObject* WorldContextObject, TSoftClassPtr<class UClass> AssetClass, TDelegate<void(TSubclassOf<class UObject> Loaded)> OnLoaded, const struct FLatentActionInfo& LatentInfo);
	static class UClass* LoadClassAsset_Blocking(TSoftClassPtr<class UClass> AssetClass);
	static void LoadInterstitialAd(int32 AdIdIndex);
	static bool MakeLiteralBool(bool Value);
	static uint8 MakeLiteralByte(uint8 Value);
	static float MakeLiteralFloat(float Value);
	static int32 MakeLiteralInt(int32 Value);
	static class FName MakeLiteralName(class FName Value);
	static class FString MakeLiteralString(const class FString& Value);
	static class FText MakeLiteralText(const class FText& Value);
	static struct FSoftClassPath MakeSoftClassPath(const class FString& PathString);
	static struct FSoftObjectPath MakeSoftObjectPath(const class FString& PathString);
	static void MoveComponentTo(class USceneComponent* Component, const struct FVector& TargetRelativeLocation, const struct FRotator& TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, EMoveComponentAction MoveAction, const struct FLatentActionInfo& LatentInfo);
	static class FString NormalizeFilename(const class FString& InFilename);
	static bool NotEqual_PrimaryAssetId(const struct FPrimaryAssetId& A, const struct FPrimaryAssetId& B);
	static bool NotEqual_PrimaryAssetType(const struct FPrimaryAssetType& A, const struct FPrimaryAssetType& B);
	static bool NotEqual_SoftClassReference(const TSoftClassPtr<class UClass>& A, const TSoftClassPtr<class UClass>& B);
	static bool NotEqual_SoftObjectReference(const TSoftObjectPtr<class UObject>& A, const TSoftObjectPtr<class UObject>& B);
	static void PrintString(class UObject* WorldContextObject, const class FString& inString, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration);
	static void PrintText(class UObject* WorldContextObject, const class FText& InText, bool bPrintToScreen, bool bPrintToLog, const struct FLinearColor& TextColor, float Duration);
	static void PrintWarning(const class FString& inString);
	static void QuitGame(class UObject* WorldContextObject, class APlayerController* SpecificPlayer, EQuitPreference QuitPreference, bool bIgnorePlatformRestrictions);
	static void RegisterForRemoteNotifications();
	static void ResetGamepadAssignments();
	static void ResetGamepadAssignmentToController(int32 ControllerId);
	static void RetriggerableDelay(class UObject* WorldContextObject, float Duration, const struct FLatentActionInfo& LatentInfo);
	static void SetBoolPropertyByName(class UObject* Object, class FName PropertyName, bool Value);
	static void SetBytePropertyByName(class UObject* Object, class FName PropertyName, uint8 Value);
	static void SetClassPropertyByName(class UObject* Object, class FName PropertyName, TSubclassOf<class UObject> Value);
	static void SetCollisionProfileNameProperty(class UObject* Object, class FName PropertyName, const struct FCollisionProfileName& Value);
	static void SetFieldPathPropertyByName(class UObject* Object, class FName PropertyName, const FFieldPathProperty_& Value);
	static void SetFloatPropertyByName(class UObject* Object, class FName PropertyName, float Value);
	static void SetInt64PropertyByName(class UObject* Object, class FName PropertyName, int64 Value);
	static void SetInterfacePropertyByName(class UObject* Object, class FName PropertyName, const TScriptInterface<class IInterface>& Value);
	static void SetIntPropertyByName(class UObject* Object, class FName PropertyName, int32 Value);
	static void SetLinearColorPropertyByName(class UObject* Object, class FName PropertyName, const struct FLinearColor& Value);
	static void SetNamePropertyByName(class UObject* Object, class FName PropertyName, const class FName& Value);
	static void SetObjectPropertyByName(class UObject* Object, class FName PropertyName, class UObject* Value);
	static void SetRotatorPropertyByName(class UObject* Object, class FName PropertyName, const struct FRotator& Value);
	static void SetSoftClassPropertyByName(class UObject* Object, class FName PropertyName, const TSoftClassPtr<class UClass>& Value);
	static void SetSoftObjectPropertyByName(class UObject* Object, class FName PropertyName, const TSoftObjectPtr<class UObject>& Value);
	static void SetStringPropertyByName(class UObject* Object, class FName PropertyName, const class FString& Value);
	static void SetStructurePropertyByName(class UObject* Object, class FName PropertyName, const struct FGenericStruct& Value);
	static void SetSuppressViewportTransitionMessage(class UObject* WorldContextObject, bool bState);
	static void SetTextPropertyByName(class UObject* Object, class FName PropertyName, const class FText& Value);
	static void SetTransformPropertyByName(class UObject* Object, class FName PropertyName, const struct FTransform& Value);
	static void SetUserActivity(const struct FUserActivity& UserActivity);
	static void SetVectorPropertyByName(class UObject* Object, class FName PropertyName, const struct FVector& Value);
	static void SetVolumeButtonsHandledBySystem(bool bEnabled);
	static void SetWindowTitle(const class FText& Title);
	static void ShowAdBanner(int32 AdIdIndex, bool bShowOnBottomOfScreen);
	static void ShowInterstitialAd();
	static void ShowPlatformSpecificAchievementsScreen(class APlayerController* SpecificPlayer);
	static void ShowPlatformSpecificLeaderboardScreen(const class FString& CategoryName);
	static void SnapshotObject(class UObject* Object);
	static bool SphereOverlapActors(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, const TArray<EObjectTypeQuery>& ObjectTypes, class UClass* ActorClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class AActor*>* OutActors);
	static bool SphereOverlapComponents(class UObject* WorldContextObject, const struct FVector& SpherePos, float SphereRadius, const TArray<EObjectTypeQuery>& ObjectTypes, class UClass* ComponentClassFilter, const TArray<class AActor*>& ActorsToIgnore, TArray<class UPrimitiveComponent*>* OutComponents);
	static bool SphereTraceMulti(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float radius, ETraceTypeQuery TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool SphereTraceMultiByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float radius, class FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool SphereTraceMultiForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float radius, const TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool SphereTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float radius, ETraceTypeQuery TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool SphereTraceSingleByProfile(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float radius, class FName ProfileName, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static bool SphereTraceSingleForObjects(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, float radius, const TArray<EObjectTypeQuery>& ObjectTypes, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	static void StackTrace();
	static void TransactObject(class UObject* Object);
	static void UnloadPrimaryAsset(const struct FPrimaryAssetId& PrimaryAssetId);
	static void UnloadPrimaryAssetList(const TArray<struct FPrimaryAssetId>& PrimaryAssetIdList);
	static void UnregisterForRemoteNotifications();

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("KismetSystemLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"KismetSystemLibrary")
	}
	static class UKismetSystemLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetSystemLibrary>();
	}
};

// Class Engine.ParticleModuleOrbitBase
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleOrbitBase : public UParticleModule
{
public:
	uint8                                         bUseEmitterTime : 1;                               // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleOrbitBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleOrbitBase")
	}
	static class UParticleModuleOrbitBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleOrbitBase>();
	}
};

// Class Engine.ParticleModuleOrbit
// 0x00F8 (0x0130 - 0x0038)
class UParticleModuleOrbit : public UParticleModuleOrbitBase
{
public:
	EOrbitChainMode                               ChainMode;                                         // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionVector                 OffsetAmount;                                      // 0x0040(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FOrbitOptions                          OffsetOptions;                                     // 0x0088(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionVector                 RotationAmount;                                    // 0x0090(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FOrbitOptions                          RotationOptions;                                   // 0x00D8(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionVector                 RotationRateAmount;                                // 0x00E0(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FOrbitOptions                          RotationRateOptions;                               // 0x0128(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_12C[0x4];                                      // 0x012C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleOrbit")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleOrbit")
	}
	static class UParticleModuleOrbit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleOrbit>();
	}
};

// Class Engine.KojimaRuntimeData
// 0x0028 (0x0058 - 0x0030)
class UKojimaRuntimeData : public UDataAsset
{
public:
	TArray<struct FVector>                        TransmittanceStore;                                // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         TransWidth;                                        // 0x0040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TransHeight;                                       // 0x0044(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        Lsky;                                              // 0x0048(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("KojimaRuntimeData")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"KojimaRuntimeData")
	}
	static class UKojimaRuntimeData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKojimaRuntimeData>();
	}
};

// Class Engine.LevelBounds
// 0x0020 (0x0390 - 0x0370)
class ALevelBounds : public AActor
{
public:
	bool                                          bAutoUpdateBounds;                                 // 0x0370(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_371[0x3];                                      // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                DefaultLevelBoundSize;                             // 0x0374(0x000C)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftClassPtr<class UClass>>           IrrelevantActorTypes;                              // 0x0380(0x0010)(ZeroConstructor, Config, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LevelBounds")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LevelBounds")
	}
	static class ALevelBounds* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALevelBounds>();
	}
};

// Class Engine.LevelStreamingPersistent
// 0x0000 (0x0150 - 0x0150)
class ULevelStreamingPersistent : public ULevelStreaming
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LevelStreamingPersistent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LevelStreamingPersistent")
	}
	static class ULevelStreamingPersistent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULevelStreamingPersistent>();
	}
};

// Class Engine.ParticleModuleLocationWorldOffset_Seeded
// 0x0020 (0x00A0 - 0x0080)
class UParticleModuleLocationWorldOffset_Seeded : public UParticleModuleLocationWorldOffset
{
public:
	struct FParticleRandomSeedInfo                RandomSeedInfo;                                    // 0x0080(0x0020)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLocationWorldOffset_Seeded")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLocationWorldOffset_Seeded")
	}
	static class UParticleModuleLocationWorldOffset_Seeded* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLocationWorldOffset_Seeded>();
	}
};

// Class Engine.LightImportanceAsset
// 0x0038 (0x0068 - 0x0030)
class ULightImportanceAsset : public UDataAsset
{
public:
	TArray<struct FLightImportanceSampleAssetData> ImportanceSamples;                                // 0x0030(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FVector                                VolumePosition;                                    // 0x0040(0x000C)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                VolumeExtent;                                      // 0x004C(0x000C)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                CellSize;                                          // 0x0058(0x000C)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LightImportanceAsset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LightImportanceAsset")
	}
	static class ULightImportanceAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULightImportanceAsset>();
	}
};

// Class Engine.LightmappedSurfaceCollection
// 0x0018 (0x0040 - 0x0028)
class ULightmappedSurfaceCollection : public UObject
{
public:
	class UModel*                                 SourceModel;                                       // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 Surfaces;                                          // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LightmappedSurfaceCollection")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LightmappedSurfaceCollection")
	}
	static class ULightmappedSurfaceCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULightmappedSurfaceCollection>();
	}
};

// Class Engine.LightmassPortal
// 0x0008 (0x0378 - 0x0370)
class ALightmassPortal : public AActor
{
public:
	class ULightmassPortalComponent*              PortalComponent;                                   // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LightmassPortal")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LightmassPortal")
	}
	static class ALightmassPortal* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALightmassPortal>();
	}
};

// Class Engine.PhysicsAsset
// 0x00F8 (0x0120 - 0x0028)
class UPhysicsAsset : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 BoundsBodies;                                      // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class USkeletalBodySetup*>             SkeletalBodySetups;                                // 0x0040(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UPhysicsConstraintTemplate*>     ConstraintSetup;                                   // 0x0050(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bNotForDedicatedServer : 1;                        // 0x0060(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_61[0xA7];                                      // 0x0061(0x00A7)(Fixing Size After Last Property [ Dumper-7 ])
	class UThumbnailInfo*                         ThumbnailInfo;                                     // 0x0108(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UBodySetup*>                     BodySetup;                                         // 0x0110(0x0010)(ExportObject, ZeroConstructor, Deprecated, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsAsset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsAsset")
	}
	static class UPhysicsAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsAsset>();
	}
};

// Class Engine.LightmassPrimitiveSettingsObject
// 0x0020 (0x0048 - 0x0028)
class ULightmassPrimitiveSettingsObject : public UObject
{
public:
	struct FLightmassPrimitiveSettings            LightmassSettings;                                 // 0x0028(0x0020)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LightmassPrimitiveSettingsObject")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LightmassPrimitiveSettingsObject")
	}
	static class ULightmassPrimitiveSettingsObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULightmassPrimitiveSettingsObject>();
	}
};

// Class Engine.LineBatchComponent
// 0x0040 (0x05D0 - 0x0590)
class ULineBatchComponent : public UPrimitiveComponent
{
public:
	uint8                                         Pad_588[0x48];                                     // 0x0588(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LineBatchComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LineBatchComponent")
	}
	static class ULineBatchComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULineBatchComponent>();
	}
};

// Class Engine.PluginCommandlet
// 0x0020 (0x00A8 - 0x0088)
class UPluginCommandlet : public UCommandlet
{
public:
	uint8                                         Pad_88[0x20];                                      // 0x0088(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PluginCommandlet")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PluginCommandlet")
	}
	static class UPluginCommandlet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPluginCommandlet>();
	}
};

// Class Engine.LocalLightGroupBakeComponent
// 0x00C0 (0x0310 - 0x0250)
class ULocalLightGroupBakeComponent : public USceneComponent
{
public:
	class FName                                   CustomSubDir;                                      // 0x0250(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOpenLightMapSizeLimit;                            // 0x0258(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 GeneratedLevelPackageName;                         // 0x0260(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoxSphereBounds                       MeshBounds;                                        // 0x0270(0x001C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULocalLightGroupBake*                   LocalLightGroupBakeObject;                         // 0x0290(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalLightGroupBake*                   HDLocalLightGroupBakeObject;                       // 0x0298(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalReflectionGroupBake*              LocalReflectionGroupBakeObject;                    // 0x02A0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalReflectionGroupBake*              HDLocalReflectionGroupBakeObject;                  // 0x02A8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActorComponent*>                LightComponentArray;                               // 0x02B0(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UActorComponent*>                StaticComponentArray;                              // 0x02C0(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UActorComponent*>                EnvironmentStaticComponentArray;                   // 0x02D0(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UActorComponent*>                ReflectionComponentArray;                          // 0x02E0(0x0010)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_2F0[0x20];                                     // 0x02F0(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LocalLightGroupBakeComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LocalLightGroupBakeComponent")
	}
	static class ULocalLightGroupBakeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalLightGroupBakeComponent>();
	}
};

// Class Engine.LocalReflectionGroupBake
// 0x00B8 (0x00E0 - 0x0028)
class ULocalReflectionGroupBake : public UObject
{
public:
	uint8                                         Pad_28[0xB8];                                      // 0x0028(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("LocalReflectionGroupBake")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"LocalReflectionGroupBake")
	}
	static class ULocalReflectionGroupBake* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalReflectionGroupBake>();
	}
};

// Class Engine.MaterialExpressionAbs
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionAbs : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionAbs")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionAbs")
	}
	static class UMaterialExpressionAbs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionAbs>();
	}
};

// Class Engine.MaterialExpressionAdd
// 0x0030 (0x0070 - 0x0040)
class UMaterialExpressionAdd : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConstA;                                            // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConstB;                                            // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionAdd")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionAdd")
	}
	static class UMaterialExpressionAdd* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionAdd>();
	}
};

// Class Engine.MaterialExpressionAntialiasedTextureMask
// 0x0008 (0x0100 - 0x00F8)
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
public:
	float                                         ThresHold;                                         // 0x00F8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETextureColorChannel                          Channel;                                           // 0x00FC(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionAntialiasedTextureMask")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionAntialiasedTextureMask")
	}
	static class UMaterialExpressionAntialiasedTextureMask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionAntialiasedTextureMask>();
	}
};

// Class Engine.MaterialExpressionArccosine
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionArccosine : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionArccosine")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionArccosine")
	}
	static class UMaterialExpressionArccosine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionArccosine>();
	}
};

// Class Engine.MaterialExpressionArccosineFast
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionArccosineFast : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionArccosineFast")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionArccosineFast")
	}
	static class UMaterialExpressionArccosineFast* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionArccosineFast>();
	}
};

// Class Engine.ParticleModuleVectorFieldRotationRate
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase
{
public:
	struct FVector                                RotationRate;                                      // 0x0030(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleVectorFieldRotationRate")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleVectorFieldRotationRate")
	}
	static class UParticleModuleVectorFieldRotationRate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleVectorFieldRotationRate>();
	}
};

// Class Engine.MaterialExpressionArctangent
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionArctangent : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionArctangent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionArctangent")
	}
	static class UMaterialExpressionArctangent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionArctangent>();
	}
};

// Class Engine.MaterialExpressionArctangent2
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionArctangent2 : public UMaterialExpression
{
public:
	struct FExpressionInput                       Y;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       X;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionArctangent2")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionArctangent2")
	}
	static class UMaterialExpressionArctangent2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionArctangent2>();
	}
};

// Class Engine.MaterialExpressionArctangentFast
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionArctangentFast : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionArctangentFast")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionArctangentFast")
	}
	static class UMaterialExpressionArctangentFast* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionArctangentFast>();
	}
};

// Class Engine.MaterialExpressionAtlasTextureSample
// 0x0038 (0x0090 - 0x0058)
class UMaterialExpressionAtlasTextureSample : public UMaterialExpressionTextureBase
{
public:
	int32                                         MaterialLayerIndex;                                // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMaterialAtlasUsage                           AtlasTextureMode;                                  // 0x005C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Coordinates;                                       // 0x0060(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x8];                                       // 0x006C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       TextureObject;                                     // 0x0074(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_80[0x8];                                       // 0x0080(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	ESamplerSourceMode                            SamplerSource;                                     // 0x0088(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_89[0x1];                                       // 0x0089(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         ConstCoordinate;                                   // 0x008A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8B[0x5];                                       // 0x008B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionAtlasTextureSample")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionAtlasTextureSample")
	}
	static class UMaterialExpressionAtlasTextureSample* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionAtlasTextureSample>();
	}
};

// Class Engine.ParticleModuleLocationPrimitiveSphere
// 0x0030 (0x00E0 - 0x00B0)
class UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
public:
	struct FRawDistributionFloat                  StartRadius;                                       // 0x00B0(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLocationPrimitiveSphere")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLocationPrimitiveSphere")
	}
	static class UParticleModuleLocationPrimitiveSphere* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLocationPrimitiveSphere>();
	}
};

// Class Engine.ParticleModuleLocationPrimitiveSphere_Seeded
// 0x0020 (0x0100 - 0x00E0)
class UParticleModuleLocationPrimitiveSphere_Seeded : public UParticleModuleLocationPrimitiveSphere
{
public:
	struct FParticleRandomSeedInfo                RandomSeedInfo;                                    // 0x00E0(0x0020)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLocationPrimitiveSphere_Seeded")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLocationPrimitiveSphere_Seeded")
	}
	static class UParticleModuleLocationPrimitiveSphere_Seeded* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLocationPrimitiveSphere_Seeded>();
	}
};

// Class Engine.PoseableMeshComponent
// 0x0160 (0x0AA0 - 0x0940)
class UPoseableMeshComponent : public USkinnedMeshComponent
{
public:
	uint8                                         Pad_940[0x160];                                    // 0x0940(0x0160)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CopyPoseFromSkeletalComponent(class USkeletalMeshComponent* InComponentToCopy);
	struct FVector GetBoneLocationByName(class FName BoneName, EBoneSpaces BoneSpace);
	struct FRotator GetBoneRotationByName(class FName BoneName, EBoneSpaces BoneSpace);
	struct FVector GetBoneScaleByName(class FName BoneName, EBoneSpaces BoneSpace);
	struct FTransform GetBoneTransformByName(class FName BoneName, EBoneSpaces BoneSpace);
	void ResetBoneTransformByName(class FName BoneName);
	void SetBoneLocationByName(class FName BoneName, const struct FVector& InLocation, EBoneSpaces BoneSpace);
	void SetBoneRotationByName(class FName BoneName, const struct FRotator& InRotation, EBoneSpaces BoneSpace);
	void SetBoneScaleByName(class FName BoneName, const struct FVector& InScale3D, EBoneSpaces BoneSpace);
	void SetBoneTransformByName(class FName BoneName, const struct FTransform& InTransform, EBoneSpaces BoneSpace);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PoseableMeshComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PoseableMeshComponent")
	}
	static class UPoseableMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPoseableMeshComponent>();
	}
};

// Class Engine.MaterialExpressionBentNormalCustomOutput
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionBentNormalCustomOutput : public UMaterialExpressionCustomOutput
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionBentNormalCustomOutput")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionBentNormalCustomOutput")
	}
	static class UMaterialExpressionBentNormalCustomOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionBentNormalCustomOutput>();
	}
};

// Class Engine.MaterialExpressionBlendMaterialAttributes
// 0x0058 (0x0098 - 0x0040)
class UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression
{
public:
	struct FMaterialAttributesInput               A;                                                 // 0x0040(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x10];                                      // 0x0050(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMaterialAttributesInput               B;                                                 // 0x0060(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_70[0x10];                                      // 0x0070(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Alpha;                                             // 0x0080(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_8C[0x8];                                       // 0x008C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	EMaterialAttributeBlend                       PixelAttributeBlendType;                           // 0x0094(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMaterialAttributeBlend                       VertexAttributeBlendType;                          // 0x0095(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_96[0x2];                                       // 0x0096(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionBlendMaterialAttributes")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionBlendMaterialAttributes")
	}
	static class UMaterialExpressionBlendMaterialAttributes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionBlendMaterialAttributes>();
	}
};

// Class Engine.MaterialExpressionCameraPositionWS
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionCameraPositionWS : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionCameraPositionWS")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionCameraPositionWS")
	}
	static class UMaterialExpressionCameraPositionWS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionCameraPositionWS>();
	}
};

// Class Engine.MaterialExpressionCeil
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionCeil : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionCeil")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionCeil")
	}
	static class UMaterialExpressionCeil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionCeil>();
	}
};

// Class Engine.MaterialExpressionClamp
// 0x0048 (0x0088 - 0x0040)
class UMaterialExpressionClamp : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Min;                                               // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Max;                                               // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	EClampMode                                    ClampMode;                                         // 0x007C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinDefault;                                        // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxDefault;                                        // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionClamp")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionClamp")
	}
	static class UMaterialExpressionClamp* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionClamp>();
	}
};

// Class Engine.PhysicsCapsuleComponent
// 0x0000 (0x05B0 - 0x05B0)
class UPhysicsCapsuleComponent : public UCapsuleComponent
{
public:
	void OnPhysicsBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsCapsuleComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsCapsuleComponent")
	}
	static class UPhysicsCapsuleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsCapsuleComponent>();
	}
};

// Class Engine.MaterialExpressionComponentMask
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionComponentMask : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         R : 1;                                             // 0x0054(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         G : 1;                                             // 0x0054(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         B : 1;                                             // 0x0054(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         A : 1;                                             // 0x0054(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionComponentMask")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionComponentMask")
	}
	static class UMaterialExpressionComponentMask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionComponentMask>();
	}
};

// Class Engine.MaterialExpressionConstant2Vector
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionConstant2Vector : public UMaterialExpression
{
public:
	float                                         R;                                                 // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         G;                                                 // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionConstant2Vector")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionConstant2Vector")
	}
	static class UMaterialExpressionConstant2Vector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionConstant2Vector>();
	}
};

// Class Engine.MaterialExpressionConstant4Vector
// 0x0010 (0x0050 - 0x0040)
class UMaterialExpressionConstant4Vector : public UMaterialExpression
{
public:
	struct FLinearColor                           Constant;                                          // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionConstant4Vector")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionConstant4Vector")
	}
	static class UMaterialExpressionConstant4Vector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionConstant4Vector>();
	}
};

// Class Engine.PhysicsSimulationMeshComponent
// 0x0060 (0x08A0 - 0x0840)
class UPhysicsSimulationMeshComponent : public UStaticMeshComponent
{
public:
	EPhysicsAsyncAddMode                          m_collisionAddMode;                                // 0x0840(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_841[0x7];                                      // 0x0841(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TWeakObjectPtr<class UPrimitiveComponent>> m_AsyncComponent;                              // 0x0848(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FBox                                   m_AABBBox;                                         // 0x0858(0x001C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_874[0x4];                                      // 0x0874(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBodyInstance>                  SimulationBodyInstances;                           // 0x0878(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_888[0x10];                                     // 0x0888(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bBodyInstancesCreated : 1;                         // 0x0898(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_899[0x7];                                      // 0x0899(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnExplosionEnd();
	void OnExplosionHit(const struct FVector& Point, float radius, float Strength);
	void OnPredictedOverlap(const struct FVector& Point, float radius);
	bool TestLineTraceComponent(const struct FVector& Start, const struct FVector& End);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PhysicsSimulationMeshComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PhysicsSimulationMeshComponent")
	}
	static class UPhysicsSimulationMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhysicsSimulationMeshComponent>();
	}
};

// Class Engine.MaterialExpressionCosine
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionCosine : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Period;                                            // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionCosine")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionCosine")
	}
	static class UMaterialExpressionCosine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionCosine>();
	}
};

// Class Engine.MaterialExpressionCrossProduct
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionCrossProduct : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionCrossProduct")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionCrossProduct")
	}
	static class UMaterialExpressionCrossProduct* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionCrossProduct>();
	}
};

// Class Engine.MaterialExpressionScalarParameter
// 0x0008 (0x0060 - 0x0058)
class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter
{
public:
	float                                         DefaultValue;                                      // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseCustomPrimitiveData;                           // 0x005C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         PrimitiveDataIndex;                                // 0x005D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5E[0x2];                                       // 0x005E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionScalarParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionScalarParameter")
	}
	static class UMaterialExpressionScalarParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionScalarParameter>();
	}
};

// Class Engine.MaterialExpressionCurveAtlasRowParameter
// 0x0028 (0x0088 - 0x0060)
class UMaterialExpressionCurveAtlasRowParameter : public UMaterialExpressionScalarParameter
{
public:
	class UCurveLinearColor*                      Curve;                                             // 0x0060(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveLinearColorAtlas*                 Atlas;                                             // 0x0068(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                       InputTime;                                         // 0x0070(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_7C[0xC];                                       // 0x007C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionCurveAtlasRowParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionCurveAtlasRowParameter")
	}
	static class UMaterialExpressionCurveAtlasRowParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionCurveAtlasRowParameter>();
	}
};

// Class Engine.MaterialExpressionCustom
// 0x0068 (0x00A8 - 0x0040)
class UMaterialExpressionCustom : public UMaterialExpression
{
public:
	class FString                                 Code;                                              // 0x0040(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECustomMaterialOutputType                     OutputType;                                        // 0x0050(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseFloatPrecision;                                 // 0x0051(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ForVertexShader;                                   // 0x0052(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EVertexPhase                                  VertexPhase;                                       // 0x0053(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EShadingPhase                                 ShadingPhase;                                      // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Description;                                       // 0x0058(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCustomInput>                   Inputs;                                            // 0x0068(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomOutput>                  AdditionalOutputs;                                 // 0x0078(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomDefine>                  AdditionalDefines;                                 // 0x0088(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         IncludeFilePaths;                                  // 0x0098(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionCustom")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionCustom")
	}
	static class UMaterialExpressionCustom* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionCustom>();
	}
};

// Class Engine.MaterialExpressionDDX
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionDDX : public UMaterialExpression
{
public:
	struct FExpressionInput                       Value;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDDX")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDDX")
	}
	static class UMaterialExpressionDDX* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDDX>();
	}
};

// Class Engine.MaterialExpressionTextureSampleParameter2DArray
// 0x0000 (0x00F8 - 0x00F8)
class UMaterialExpressionTextureSampleParameter2DArray : public UMaterialExpressionTextureSampleParameter
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTextureSampleParameter2DArray")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTextureSampleParameter2DArray")
	}
	static class UMaterialExpressionTextureSampleParameter2DArray* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTextureSampleParameter2DArray>();
	}
};

// Class Engine.MaterialExpressionDDY
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionDDY : public UMaterialExpression
{
public:
	struct FExpressionInput                       Value;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDDY")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDDY")
	}
	static class UMaterialExpressionDDY* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDDY>();
	}
};

// Class Engine.MaterialExpressionDecalDerivative
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionDecalDerivative : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDecalDerivative")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDecalDerivative")
	}
	static class UMaterialExpressionDecalDerivative* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDecalDerivative>();
	}
};

// Class Engine.MaterialExpressionDecalLifetimeOpacity
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionDecalLifetimeOpacity : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDecalLifetimeOpacity")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDecalLifetimeOpacity")
	}
	static class UMaterialExpressionDecalLifetimeOpacity* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDecalLifetimeOpacity>();
	}
};

// Class Engine.MaterialFunctionMaterialLayerBlend
// 0x0000 (0x0068 - 0x0068)
class UMaterialFunctionMaterialLayerBlend : public UMaterialFunction
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialFunctionMaterialLayerBlend")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialFunctionMaterialLayerBlend")
	}
	static class UMaterialFunctionMaterialLayerBlend* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialFunctionMaterialLayerBlend>();
	}
};

// Class Engine.MaterialExpressionDecalMipmapLevel
// 0x0020 (0x0060 - 0x0040)
class UMaterialExpressionDecalMipmapLevel : public UMaterialExpression
{
public:
	struct FExpressionInput                       TextureSize;                                       // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConstWidth;                                        // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConstHeight;                                       // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDecalMipmapLevel")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDecalMipmapLevel")
	}
	static class UMaterialExpressionDecalMipmapLevel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDecalMipmapLevel>();
	}
};

// Class Engine.MaterialExpressionDeltaTime
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionDeltaTime : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDeltaTime")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDeltaTime")
	}
	static class UMaterialExpressionDeltaTime* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDeltaTime>();
	}
};

// Class Engine.MaterialExpressionDepthFade
// 0x0030 (0x0070 - 0x0040)
class UMaterialExpressionDepthFade : public UMaterialExpression
{
public:
	struct FExpressionInput                       InOpacity;                                         // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       FadeDistance;                                      // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OpacityDefault;                                    // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeDistanceDefault;                               // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDepthFade")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDepthFade")
	}
	static class UMaterialExpressionDepthFade* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDepthFade>();
	}
};

// Class Engine.MaterialExpressionDepthOfFieldFunction
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression
{
public:
	EDepthOfFieldFunctionValue                    FunctionValue;                                     // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Depth;                                             // 0x0044(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDepthOfFieldFunction")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDepthOfFieldFunction")
	}
	static class UMaterialExpressionDepthOfFieldFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDepthOfFieldFunction>();
	}
};

// Class Engine.MaterialExpressionDeriveNormalZ
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionDeriveNormalZ : public UMaterialExpression
{
public:
	struct FExpressionInput                       InXY;                                              // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDeriveNormalZ")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDeriveNormalZ")
	}
	static class UMaterialExpressionDeriveNormalZ* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDeriveNormalZ>();
	}
};

// Class Engine.MaterialExpressionTransformPosition
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionTransformPosition : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	EMaterialPositionTransformSource              TransformSourceType;                               // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMaterialPositionTransformSource              TransformType;                                     // 0x0055(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_56[0x2];                                       // 0x0056(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTransformPosition")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTransformPosition")
	}
	static class UMaterialExpressionTransformPosition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTransformPosition>();
	}
};

// Class Engine.MaterialExpressionDesaturation
// 0x0038 (0x0078 - 0x0040)
class UMaterialExpressionDesaturation : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Fraction;                                          // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           LuminanceFactors;                                  // 0x0068(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDesaturation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDesaturation")
	}
	static class UMaterialExpressionDesaturation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDesaturation>();
	}
};

// Class Engine.MaterialExpressionDistance
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionDistance : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDistance")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDistance")
	}
	static class UMaterialExpressionDistance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDistance>();
	}
};

// Class Engine.MaterialExpressionDistanceCullFade
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionDistanceCullFade : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDistanceCullFade")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDistanceCullFade")
	}
	static class UMaterialExpressionDistanceCullFade* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDistanceCullFade>();
	}
};

// Class Engine.MatineeAnimInterface
// 0x0000 (0x0000 - 0x0000)
class IMatineeAnimInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MatineeAnimInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MatineeAnimInterface")
	}
	static class IMatineeAnimInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMatineeAnimInterface>();
	}
};

// Class Engine.MaterialExpressionDistanceFieldGradient
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionDistanceFieldGradient : public UMaterialExpression
{
public:
	struct FExpressionInput                       Position;                                          // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDistanceFieldGradient")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDistanceFieldGradient")
	}
	static class UMaterialExpressionDistanceFieldGradient* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDistanceFieldGradient>();
	}
};

// Class Engine.MaterialExpressionDistanceToNearestSurface
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression
{
public:
	struct FExpressionInput                       Position;                                          // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDistanceToNearestSurface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDistanceToNearestSurface")
	}
	static class UMaterialExpressionDistanceToNearestSurface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDistanceToNearestSurface>();
	}
};

// Class Engine.MaterialExpressionDivide
// 0x0030 (0x0070 - 0x0040)
class UMaterialExpressionDivide : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConstA;                                            // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConstB;                                            // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDivide")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDivide")
	}
	static class UMaterialExpressionDivide* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDivide>();
	}
};

// Class Engine.MaterialExpressionDotProduct
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionDotProduct : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDotProduct")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDotProduct")
	}
	static class UMaterialExpressionDotProduct* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDotProduct>();
	}
};

// Class Engine.MaterialExpressionDynamicParameter
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionDynamicParameter : public UMaterialExpression
{
public:
	TArray<class FString>                         ParamNames;                                        // 0x0040(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                           DefaultValue;                                      // 0x0050(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        ParameterIndex;                                    // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionDynamicParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionDynamicParameter")
	}
	static class UMaterialExpressionDynamicParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionDynamicParameter>();
	}
};

// Class Engine.ParticleModuleAccelerationOverLifetime
// 0x0048 (0x0080 - 0x0038)
class UParticleModuleAccelerationOverLifetime : public UParticleModuleAccelerationBase
{
public:
	struct FRawDistributionVector                 AccelOverLife;                                     // 0x0038(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleAccelerationOverLifetime")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleAccelerationOverLifetime")
	}
	static class UParticleModuleAccelerationOverLifetime* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleAccelerationOverLifetime>();
	}
};

// Class Engine.MaterialExpressionExtraOutput
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionExtraOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FExtraOutputPin>                CustomOutputs;                                     // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ForVertexShader;                                   // 0x0050(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EVertexPhase                                  VertexPhase;                                       // 0x0051(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EShadingPhase                                 ShadingPhase;                                      // 0x0052(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_53[0x5];                                       // 0x0053(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionExtraOutput")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionExtraOutput")
	}
	static class UMaterialExpressionExtraOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionExtraOutput>();
	}
};

// Class Engine.MaterialExpressionEyeAdaptation
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionEyeAdaptation : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionEyeAdaptation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionEyeAdaptation")
	}
	static class UMaterialExpressionEyeAdaptation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionEyeAdaptation>();
	}
};

// Class Engine.MorphTarget
// 0x0020 (0x0048 - 0x0028)
class UMorphTarget : public UObject
{
public:
	class USkeletalMesh*                          BaseSkelMesh;                                      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_30[0x18];                                      // 0x0030(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MorphTarget")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MorphTarget")
	}
	static class UMorphTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMorphTarget>();
	}
};

// Class Engine.MaterialExpressionMainViewEyeAdaptation
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionMainViewEyeAdaptation : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionMainViewEyeAdaptation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionMainViewEyeAdaptation")
	}
	static class UMaterialExpressionMainViewEyeAdaptation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionMainViewEyeAdaptation>();
	}
};

// Class Engine.MaterialExpressionFeatureLevelSwitch
// 0x0068 (0x00A8 - 0x0040)
class UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                       Default;                                           // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Inputs[0x4];                                       // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_84[0x24];                                      // 0x0084(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionFeatureLevelSwitch")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionFeatureLevelSwitch")
	}
	static class UMaterialExpressionFeatureLevelSwitch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionFeatureLevelSwitch>();
	}
};

// Class Engine.MaterialExpressionFloor
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionFloor : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionFloor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionFloor")
	}
	static class UMaterialExpressionFloor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionFloor>();
	}
};

// Class Engine.MaterialExpressionFmod
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionFmod : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionFmod")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionFmod")
	}
	static class UMaterialExpressionFmod* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionFmod>();
	}
};

// Class Engine.MaterialExpressionFontSample
// 0x0010 (0x0050 - 0x0040)
class UMaterialExpressionFontSample : public UMaterialExpression
{
public:
	class UFont*                                  Font;                                              // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FontTexturePage;                                   // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionFontSample")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionFontSample")
	}
	static class UMaterialExpressionFontSample* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionFontSample>();
	}
};

// Class Engine.ParticleModuleBeamBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleBeamBase : public UParticleModule
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleBeamBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleBeamBase")
	}
	static class UParticleModuleBeamBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleBeamBase>();
	}
};

// Class Engine.ParticleModuleBeamNoise
// 0x0160 (0x0190 - 0x0030)
class UParticleModuleBeamNoise : public UParticleModuleBeamBase
{
public:
	uint8                                         bLowFreq_Enabled : 1;                              // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         frequency;                                         // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Frequency_LowRange;                                // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionVector                 NoiseRange;                                        // 0x0040(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  NoiseRangeScale;                                   // 0x0088(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bNRScaleEmitterTime : 1;                           // 0x00B8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionVector                 NoiseSpeed;                                        // 0x00C0(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bSmooth : 1;                                       // 0x0108(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NoiseLockRadius;                                   // 0x010C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bNoiseLock : 1;                                    // 0x0110(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOscillate : 1;                                    // 0x0110(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NoiseLockTime;                                     // 0x0114(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NoiseTension;                                      // 0x0118(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseNoiseTangents : 1;                             // 0x011C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_11D[0x3];                                      // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionFloat                  NoiseTangentStrength;                              // 0x0120(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                         NoiseTessellation;                                 // 0x0150(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bTargetNoise : 1;                                  // 0x0154(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_155[0x3];                                      // 0x0155(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FrequencyDistance;                                 // 0x0158(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bApplyNoiseScale : 1;                              // 0x015C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_15D[0x3];                                      // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionFloat                  NoiseScale;                                        // 0x0160(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleBeamNoise")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleBeamNoise")
	}
	static class UParticleModuleBeamNoise* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleBeamNoise>();
	}
};

// Class Engine.MaterialExpressionFontSampleParameter
// 0x0020 (0x0070 - 0x0050)
class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample
{
public:
	class FName                                   ParameterName;                                     // 0x0050(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ExpressionGUID;                                    // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Group;                                             // 0x0068(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionFontSampleParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionFontSampleParameter")
	}
	static class UMaterialExpressionFontSampleParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionFontSampleParameter>();
	}
};

// Class Engine.MaterialExpressionFrac
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionFrac : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionFrac")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionFrac")
	}
	static class UMaterialExpressionFrac* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionFrac>();
	}
};

// Class Engine.MaterialExpressionFresnel
// 0x0048 (0x0088 - 0x0040)
class UMaterialExpressionFresnel : public UMaterialExpression
{
public:
	struct FExpressionInput                       ExponentIn;                                        // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Exponent;                                          // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                       BaseReflectFractionIn;                             // 0x0058(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x8];                                       // 0x0064(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BaseReflectFraction;                               // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                       Normal;                                            // 0x0070(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_7C[0xC];                                       // 0x007C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionFresnel")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionFresnel")
	}
	static class UMaterialExpressionFresnel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionFresnel>();
	}
};

// Class Engine.MaterialExpressionStaticBoolParameter
// 0x0008 (0x0060 - 0x0058)
class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter
{
public:
	uint8                                         DefaultValue : 1;                                  // 0x0058(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionStaticBoolParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionStaticBoolParameter")
	}
	static class UMaterialExpressionStaticBoolParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionStaticBoolParameter>();
	}
};

// Class Engine.MaterialExpressionFunctionInput
// 0x0080 (0x00C0 - 0x0040)
class UMaterialExpressionFunctionInput : public UMaterialExpression
{
public:
	struct FExpressionInput                       Preview;                                           // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   InputName;                                         // 0x0054(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Description;                                       // 0x0060(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ID;                                                // 0x0070(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFunctionInputType                            InputType;                                         // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_81[0xF];                                       // 0x0081(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               PreviewValue;                                      // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUsePreviewValueAsDefault : 1;                     // 0x00A0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SortPriority;                                      // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bCompilingFunctionPreview : 1;                     // 0x00A8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_A9[0x17];                                      // 0x00A9(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionFunctionInput")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionFunctionInput")
	}
	static class UMaterialExpressionFunctionInput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionFunctionInput>();
	}
};

// Class Engine.MaterialExpressionFunctionOutput
// 0x0048 (0x0088 - 0x0040)
class UMaterialExpressionFunctionOutput : public UMaterialExpression
{
public:
	class FName                                   OutputName;                                        // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Description;                                       // 0x0048(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SortPriority;                                      // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                       A;                                                 // 0x005C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_68[0x8];                                       // 0x0068(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bLastPreviewed : 1;                                // 0x0070(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  ID;                                                // 0x0074(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionFunctionOutput")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionFunctionOutput")
	}
	static class UMaterialExpressionFunctionOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionFunctionOutput>();
	}
};

// Class Engine.MaterialExpressionGbufferDepthOffsetOutput
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionGbufferDepthOffsetOutput : public UMaterialExpressionCustomOutput
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionGbufferDepthOffsetOutput")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionGbufferDepthOffsetOutput")
	}
	static class UMaterialExpressionGbufferDepthOffsetOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionGbufferDepthOffsetOutput>();
	}
};

// Class Engine.MaterialExpressionGetMaterialAttributes
// 0x0030 (0x0070 - 0x0040)
class UMaterialExpressionGetMaterialAttributes : public UMaterialExpression
{
public:
	struct FMaterialAttributesInput               MaterialAttributes;                                // 0x0040(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x10];                                      // 0x0050(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGuid>                          AttributeGetTypes;                                 // 0x0060(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionGetMaterialAttributes")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionGetMaterialAttributes")
	}
	static class UMaterialExpressionGetMaterialAttributes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionGetMaterialAttributes>();
	}
};

// Class Engine.MaterialExpressionGetMobileSceneColorDistortion
// 0x0030 (0x0070 - 0x0040)
class UMaterialExpressionGetMobileSceneColorDistortion : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       OffsetFraction;                                    // 0x0054(0x000C)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ConstInput;                                        // 0x0068(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionGetMobileSceneColorDistortion")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionGetMobileSceneColorDistortion")
	}
	static class UMaterialExpressionGetMobileSceneColorDistortion* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionGetMobileSceneColorDistortion>();
	}
};

// Class Engine.MaterialParameterCollection
// 0x0088 (0x00B0 - 0x0028)
class UMaterialParameterCollection : public UObject
{
public:
	struct FGuid                                  StateId;                                           // 0x0028(0x0010)(ZeroConstructor, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCollectionScalarParameter>     ScalarParameters;                                  // 0x0038(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCollectionVectorParameter>     VectorParameters;                                  // 0x0048(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCollectionTextureParameter>    TextureParameters;                                 // 0x0058(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_68[0x48];                                      // 0x0068(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialParameterCollection")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialParameterCollection")
	}
	static class UMaterialParameterCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialParameterCollection>();
	}
};

// Class Engine.MaterialExpressionGIReplace
// 0x0040 (0x0080 - 0x0040)
class UMaterialExpressionGIReplace : public UMaterialExpression
{
public:
	struct FExpressionInput                       Default;                                           // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       StaticIndirect;                                    // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       DynamicIndirect;                                   // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0xC];                                       // 0x0074(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionGIReplace")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionGIReplace")
	}
	static class UMaterialExpressionGIReplace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionGIReplace>();
	}
};

// Class Engine.ParticleModuleVelocityOverLifetime
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
public:
	struct FRawDistributionVector                 VelOverLife;                                       // 0x0038(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Absolute : 1;                                      // 0x0080(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, ExportObject, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleVelocityOverLifetime")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleVelocityOverLifetime")
	}
	static class UParticleModuleVelocityOverLifetime* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleVelocityOverLifetime>();
	}
};

// Class Engine.MaterialExpressionHairAttributes
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionHairAttributes : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionHairAttributes")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionHairAttributes")
	}
	static class UMaterialExpressionHairAttributes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionHairAttributes>();
	}
};

// Class Engine.MaterialExpressionIf
// 0x0070 (0x00B0 - 0x0040)
class UMaterialExpressionIf : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       AGreaterThanB;                                     // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       AEqualsB;                                          // 0x007C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       ALessThanB;                                        // 0x0090(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x8];                                       // 0x009C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EqualsThreshold;                                   // 0x00A4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConstB;                                            // 0x00A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConstAEqualsB;                                     // 0x00AC(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionIf")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionIf")
	}
	static class UMaterialExpressionIf* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionIf>();
	}
};

// Class Engine.MaterialExpressionIfBranch
// 0x0078 (0x00B8 - 0x0040)
class UMaterialExpressionIfBranch : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       AGreaterThanB;                                     // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       AEqualsB;                                          // 0x007C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       ALessThanB;                                        // 0x0090(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x1C];                                      // 0x009C(0x001C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionIfBranch")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionIfBranch")
	}
	static class UMaterialExpressionIfBranch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionIfBranch>();
	}
};

// Class Engine.MaterialExpressionLightmapUVs
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionLightmapUVs : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionLightmapUVs")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionLightmapUVs")
	}
	static class UMaterialExpressionLightmapUVs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLightmapUVs>();
	}
};

// Class Engine.MaterialExpressionLightVector
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionLightVector : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionLightVector")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionLightVector")
	}
	static class UMaterialExpressionLightVector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLightVector>();
	}
};

// Class Engine.MaterialExpressionLinearInterpolate
// 0x0048 (0x0088 - 0x0040)
class UMaterialExpressionLinearInterpolate : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Alpha;                                             // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConstA;                                            // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConstB;                                            // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConstAlpha;                                        // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionLinearInterpolate")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionLinearInterpolate")
	}
	static class UMaterialExpressionLinearInterpolate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLinearInterpolate>();
	}
};

// Class Engine.MeshSimplificationSettings
// 0x0008 (0x0040 - 0x0038)
class UMeshSimplificationSettings : public UDeveloperSettings
{
public:
	class FName                                   MeshReductionModuleName;                           // 0x0038(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MeshSimplificationSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MeshSimplificationSettings")
	}
	static class UMeshSimplificationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshSimplificationSettings>();
	}
};

// Class Engine.MaterialExpressionLiteHDREnableColorAdjust
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionLiteHDREnableColorAdjust : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionLiteHDREnableColorAdjust")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionLiteHDREnableColorAdjust")
	}
	static class UMaterialExpressionLiteHDREnableColorAdjust* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLiteHDREnableColorAdjust>();
	}
};

// Class Engine.PawnNoiseEmitterComponent
// 0x0028 (0x0120 - 0x00F8)
class UPawnNoiseEmitterComponent : public UActorComponent
{
public:
	uint8                                         bAIPerceptionSystemCompatibilityMode : 1;          // 0x00F8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_F9[0x3];                                       // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LastRemoteNoisePosition;                           // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NoiseLifetime;                                     // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LastRemoteNoiseVolume;                             // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         LastRemoteNoiseTime;                               // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         LastLocalNoiseVolume;                              // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         LastLocalNoiseTime;                                // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void MakeNoise(class AActor* NoiseMaker, float Loudness, const struct FVector& NoiseLocation);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("PawnNoiseEmitterComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"PawnNoiseEmitterComponent")
	}
	static class UPawnNoiseEmitterComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnNoiseEmitterComponent>();
	}
};

// Class Engine.MaterialExpressionLiteHDRShaderStage
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionLiteHDRShaderStage : public UMaterialExpression
{
public:
	struct FExpressionInput                       Default;                                           // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       LiteHDRInput;                                      // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionLiteHDRShaderStage")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionLiteHDRShaderStage")
	}
	static class UMaterialExpressionLiteHDRShaderStage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLiteHDRShaderStage>();
	}
};

// Class Engine.MaterialExpressionRerouteBase
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionRerouteBase : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionRerouteBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionRerouteBase")
	}
	static class UMaterialExpressionRerouteBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionRerouteBase>();
	}
};

// Class Engine.MaterialExpressionLocalVariableBase
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionLocalVariableBase : public UMaterialExpressionRerouteBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionLocalVariableBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionLocalVariableBase")
	}
	static class UMaterialExpressionLocalVariableBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLocalVariableBase>();
	}
};

// Class Engine.MaterialExpressionLocalVariableDeclaration
// 0x0030 (0x0070 - 0x0040)
class UMaterialExpressionLocalVariableDeclaration : public UMaterialExpressionLocalVariableBase
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Name_0;                                            // 0x0054(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  VariableGuid;                                      // 0x005C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionLocalVariableDeclaration")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionLocalVariableDeclaration")
	}
	static class UMaterialExpressionLocalVariableDeclaration* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLocalVariableDeclaration>();
	}
};

// Class Engine.MaterialExpressionLocalVariableUsage
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionLocalVariableUsage : public UMaterialExpressionLocalVariableBase
{
public:
	class UMaterialExpressionLocalVariableDeclaration* Declaration;                                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  DeclarationGuid;                                   // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionLocalVariableUsage")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionLocalVariableUsage")
	}
	static class UMaterialExpressionLocalVariableUsage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLocalVariableUsage>();
	}
};

// Class Engine.MaterialExpressionLogarithm10
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionLogarithm10 : public UMaterialExpression
{
public:
	struct FExpressionInput                       X;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionLogarithm10")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionLogarithm10")
	}
	static class UMaterialExpressionLogarithm10* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLogarithm10>();
	}
};

// Class Engine.MaterialExpressionLogarithm2
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionLogarithm2 : public UMaterialExpression
{
public:
	struct FExpressionInput                       X;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionLogarithm2")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionLogarithm2")
	}
	static class UMaterialExpressionLogarithm2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionLogarithm2>();
	}
};

// Class Engine.MaterialExpressionSpriteTextureObject
// 0x0098 (0x00D8 - 0x0040)
class UMaterialExpressionSpriteTextureObject : public UMaterialExpression
{
public:
	struct FExpressionInput                       Coordinates;                                       // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       TextureObject;                                     // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       MipValue;                                          // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       CoordinatesDX;                                     // 0x007C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       CoordinatesDY;                                     // 0x0090(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x8];                                       // 0x009C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       AutomaticViewMipBiasValue;                         // 0x00A4(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_B0[0x8];                                       // 0x00B0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	ESamplerSourceMode                            SamplerSource;                                     // 0x00B8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         AutomaticViewMipBias : 1;                          // 0x00B9(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         ConstCoordinate;                                   // 0x00BA(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_BB[0x1];                                       // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ConstMipValue;                                     // 0x00BC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                TextureResObject;                                  // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMaterialSamplerType                          SamplerType;                                       // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         IsDefaultMeshpaintTexture : 1;                     // 0x00C9(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_CA[0x6];                                       // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               Texture;                                           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSpriteTextureObject")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSpriteTextureObject")
	}
	static class UMaterialExpressionSpriteTextureObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSpriteTextureObject>();
	}
};

// Class Engine.MaterialExpressionMakeMaterialAttributes
// 0x0270 (0x02B0 - 0x0040)
class UMaterialExpressionMakeMaterialAttributes : public UMaterialExpression
{
public:
	struct FExpressionInput                       BaseColor;                                         // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Metallic;                                          // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Specular;                                          // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Roughness;                                         // 0x007C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Anisotropy;                                        // 0x0090(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x8];                                       // 0x009C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       EmissiveColor;                                     // 0x00A4(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_B0[0x8];                                       // 0x00B0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Opacity;                                           // 0x00B8(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_C4[0x8];                                       // 0x00C4(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       OpacityMask;                                       // 0x00CC(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_D8[0x8];                                       // 0x00D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Normal;                                            // 0x00E0(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_EC[0x8];                                       // 0x00EC(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Tangent;                                           // 0x00F4(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_100[0x8];                                      // 0x0100(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       WorldPositionOffset;                               // 0x0108(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_114[0x8];                                      // 0x0114(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       WorldDisplacement;                                 // 0x011C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_128[0x8];                                      // 0x0128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       TessellationMultiplier;                            // 0x0130(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_13C[0x8];                                      // 0x013C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       SubsurfaceColor;                                   // 0x0144(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_150[0x8];                                      // 0x0150(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       ClearCoat;                                         // 0x0158(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_164[0x8];                                      // 0x0164(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       ClearCoatRoughness;                                // 0x016C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_178[0x8];                                      // 0x0178(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       AmbientOcclusion;                                  // 0x0180(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_18C[0x8];                                      // 0x018C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Refraction;                                        // 0x0194(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A0[0x8];                                      // 0x01A0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       CustomizedUVs[0x8];                                // 0x01A8(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_208[0x40];                                     // 0x0208(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       PixelDepthOffset;                                  // 0x0248(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_254[0x8];                                      // 0x0254(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       ShadingModel;                                      // 0x025C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_268[0x8];                                      // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       WetnessMask;                                       // 0x0270(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_27C[0x8];                                      // 0x027C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Porosity;                                          // 0x0284(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_290[0x8];                                      // 0x0290(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       PuddleMask;                                        // 0x0298(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A4[0xC];                                      // 0x02A4(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionMakeMaterialAttributes")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionMakeMaterialAttributes")
	}
	static class UMaterialExpressionMakeMaterialAttributes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionMakeMaterialAttributes>();
	}
};

// Class Engine.MaterialExpressionMapARPassthroughCameraUV
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionMapARPassthroughCameraUV : public UMaterialExpression
{
public:
	struct FExpressionInput                       Coordinates;                                       // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionMapARPassthroughCameraUV")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionMapARPassthroughCameraUV")
	}
	static class UMaterialExpressionMapARPassthroughCameraUV* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionMapARPassthroughCameraUV>();
	}
};

// Class Engine.MaterialExpressionMaterialAttributeLayers
// 0x00B0 (0x00F0 - 0x0040)
class UMaterialExpressionMaterialAttributeLayers : public UMaterialExpression
{
public:
	class FName                                   ParameterName;                                     // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ExpressionGUID;                                    // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMaterialAttributesInput               Input;                                             // 0x0058(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_68[0x10];                                      // 0x0068(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMaterialLayersFunctions               DefaultLayers;                                     // 0x0078(0x0040)(Edit, NativeAccessSpecifierPublic)
	TArray<class UMaterialExpressionMaterialFunctionCall*> LayerCallers;                             // 0x00B8(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	int32                                         NumActiveLayerCallers;                             // 0x00C8(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialExpressionMaterialFunctionCall*> BlendCallers;                             // 0x00D0(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	int32                                         NumActiveBlendCallers;                             // 0x00E0(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsLayerGraphBuilt;                                // 0x00E4(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E5[0xB];                                       // 0x00E5(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionMaterialAttributeLayers")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionMaterialAttributeLayers")
	}
	static class UMaterialExpressionMaterialAttributeLayers* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionMaterialAttributeLayers>();
	}
};

// Class Engine.MaterialExpressionMaterialFunctionCall
// 0x0020 (0x0060 - 0x0040)
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
public:
	class UMaterialFunctionInterface*             MaterialFunction;                                  // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseIfCondition;                                    // 0x0048(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMaterialParameterInfo                 FunctionParameterInfo;                             // 0x004C(0x0010)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionMaterialFunctionCall")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionMaterialFunctionCall")
	}
	static class UMaterialExpressionMaterialFunctionCall* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionMaterialFunctionCall>();
	}
};

// Class Engine.MaterialExpressionMaterialLayerOutput
// 0x0000 (0x0088 - 0x0088)
class UMaterialExpressionMaterialLayerOutput : public UMaterialExpressionFunctionOutput
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionMaterialLayerOutput")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionMaterialLayerOutput")
	}
	static class UMaterialExpressionMaterialLayerOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionMaterialLayerOutput>();
	}
};

// Class Engine.MaterialExpressionMaterialProxyReplace
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionMaterialProxyReplace : public UMaterialExpression
{
public:
	struct FExpressionInput                       Realtime;                                          // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       MaterialProxy;                                     // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionMaterialProxyReplace")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionMaterialProxyReplace")
	}
	static class UMaterialExpressionMaterialProxyReplace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionMaterialProxyReplace>();
	}
};

// Class Engine.MaterialExpressionMax
// 0x0030 (0x0070 - 0x0040)
class UMaterialExpressionMax : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConstA;                                            // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConstB;                                            // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionMax")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionMax")
	}
	static class UMaterialExpressionMax* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionMax>();
	}
};

// Class Engine.MaterialExpressionMin
// 0x0030 (0x0070 - 0x0040)
class UMaterialExpressionMin : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConstA;                                            // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConstB;                                            // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionMin")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionMin")
	}
	static class UMaterialExpressionMin* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionMin>();
	}
};

// Class Engine.MaterialExpressionSubtract
// 0x0030 (0x0070 - 0x0040)
class UMaterialExpressionSubtract : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConstA;                                            // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConstB;                                            // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSubtract")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSubtract")
	}
	static class UMaterialExpressionSubtract* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSubtract>();
	}
};

// Class Engine.MaterialExpressionMultiply
// 0x0030 (0x0070 - 0x0040)
class UMaterialExpressionMultiply : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConstA;                                            // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConstB;                                            // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionMultiply")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionMultiply")
	}
	static class UMaterialExpressionMultiply* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionMultiply>();
	}
};

// Class Engine.MaterialExpressionNoise
// 0x0050 (0x0090 - 0x0040)
class UMaterialExpressionNoise : public UMaterialExpression
{
public:
	struct FExpressionInput                       Position;                                          // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       FilterWidth;                                       // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scale;                                             // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Quality;                                           // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENoiseFunction                                NoiseFunction;                                     // 0x0070(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bTurbulence : 1;                                   // 0x0074(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Levels;                                            // 0x0078(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutputMin;                                         // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OutputMax;                                         // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LevelScale;                                        // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bTiling : 1;                                       // 0x0088(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        RepeatSize;                                        // 0x008C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionNoise")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionNoise")
	}
	static class UMaterialExpressionNoise* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionNoise>();
	}
};

// Class Engine.MaterialExpressionNormalize
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionNormalize : public UMaterialExpression
{
public:
	struct FExpressionInput                       VectorInput;                                       // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionNormalize")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionNormalize")
	}
	static class UMaterialExpressionNormalize* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionNormalize>();
	}
};

// Class Engine.MaterialExpressionWindParams
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionWindParams : public UMaterialExpression
{
public:
	bool                                          bForceUsePrevData;                                 // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionWindParams")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionWindParams")
	}
	static class UMaterialExpressionWindParams* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionWindParams>();
	}
};

// Class Engine.MaterialExpressionObjectBounds
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionObjectBounds : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionObjectBounds")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionObjectBounds")
	}
	static class UMaterialExpressionObjectBounds* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionObjectBounds>();
	}
};

// Class Engine.MaterialExpressionObjectOrientation
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionObjectOrientation : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionObjectOrientation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionObjectOrientation")
	}
	static class UMaterialExpressionObjectOrientation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionObjectOrientation>();
	}
};

// Class Engine.MaterialExpressionObjectPositionWS
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionObjectPositionWS : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionObjectPositionWS")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionObjectPositionWS")
	}
	static class UMaterialExpressionObjectPositionWS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionObjectPositionWS>();
	}
};

// Class Engine.RVOAvoidanceInterface
// 0x0000 (0x0000 - 0x0000)
class IRVOAvoidanceInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RVOAvoidanceInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RVOAvoidanceInterface")
	}
	static class IRVOAvoidanceInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IRVOAvoidanceInterface>();
	}
};

// Class Engine.MaterialExpressionObjectRadius
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionObjectRadius : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionObjectRadius")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionObjectRadius")
	}
	static class UMaterialExpressionObjectRadius* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionObjectRadius>();
	}
};

// Class Engine.MaterialExpressionOneMinus
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionOneMinus : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionOneMinus")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionOneMinus")
	}
	static class UMaterialExpressionOneMinus* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionOneMinus>();
	}
};

// Class Engine.GI2DData
// 0x0048 (0x0070 - 0x0028)
class UGI2DData : public UObject
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSoftObjectPtr<class UTexture2D>>      GITextureSoftPtrs;                                 // 0x0038(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UTexture2D*                             GITexture;                                         // 0x0048(0x0008)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             AOTexture;                                         // 0x0058(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                               GI2DMinMax;                                        // 0x0060(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("GI2DData")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"GI2DData")
	}
	static class UGI2DData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGI2DData>();
	}
};

// Class Engine.MaterialExpressionPanner
// 0x0050 (0x0090 - 0x0040)
class UMaterialExpressionPanner : public UMaterialExpression
{
public:
	struct FExpressionInput                       Coordinate;                                        // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Time;                                              // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Speed;                                             // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpeedX;                                            // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SpeedY;                                            // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        ConstCoordinate;                                   // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFractionalPart;                                   // 0x0088(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPanner")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPanner")
	}
	static class UMaterialExpressionPanner* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPanner>();
	}
};

// Class Engine.MaterialExpressionParticleColor
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionParticleColor : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionParticleColor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionParticleColor")
	}
	static class UMaterialExpressionParticleColor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionParticleColor>();
	}
};

// Class Engine.ParticleModuleCameraBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleCameraBase : public UParticleModule
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleCameraBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleCameraBase")
	}
	static class UParticleModuleCameraBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleCameraBase>();
	}
};

// Class Engine.ParticleModuleCameraOffset
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
public:
	struct FRawDistributionFloat                  CameraOffset;                                      // 0x0030(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bSpawnTimeOnly : 1;                                // 0x0060(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EParticleCameraOffsetUpdateMethod             UpdateMethod;                                      // 0x0064(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleCameraOffset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleCameraOffset")
	}
	static class UParticleModuleCameraOffset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleCameraOffset>();
	}
};

// Class Engine.MaterialExpressionParticleMacroUV
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionParticleMacroUV : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionParticleMacroUV")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionParticleMacroUV")
	}
	static class UMaterialExpressionParticleMacroUV* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionParticleMacroUV>();
	}
};

// Class Engine.MaterialExpressionParticleMotionBlurFade
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionParticleMotionBlurFade : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionParticleMotionBlurFade")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionParticleMotionBlurFade")
	}
	static class UMaterialExpressionParticleMotionBlurFade* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionParticleMotionBlurFade>();
	}
};

// Class Engine.RuntimeVirtualTextureVolume
// 0x0008 (0x0378 - 0x0370)
class ARuntimeVirtualTextureVolume : public AActor
{
public:
	class URuntimeVirtualTextureComponent*        VirtualTextureComponent;                           // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("RuntimeVirtualTextureVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"RuntimeVirtualTextureVolume")
	}
	static class ARuntimeVirtualTextureVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARuntimeVirtualTextureVolume>();
	}
};

// Class Engine.MaterialExpressionParticlePositionWS
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionParticlePositionWS : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionParticlePositionWS")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionParticlePositionWS")
	}
	static class UMaterialExpressionParticlePositionWS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionParticlePositionWS>();
	}
};

// Class Engine.ServerStatReplicator
// 0x00C8 (0x0438 - 0x0370)
class AServerStatReplicator : public AInfo
{
public:
	bool                                          bUpdateStatNet;                                    // 0x0370(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverwriteClientStats;                             // 0x0371(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_372[0x2];                                      // 0x0372(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        Channels;                                          // 0x0374(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        InRate;                                            // 0x0378(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        OutRate;                                           // 0x037C(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        OutSaturation;                                     // 0x0380(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        MaxPacketOverhead;                                 // 0x0384(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        InRateClientMax;                                   // 0x0388(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        InRateClientMin;                                   // 0x038C(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        InRateClientAvg;                                   // 0x0390(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        InPacketsClientMax;                                // 0x0394(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        InPacketsClientMin;                                // 0x0398(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        InPacketsClientAvg;                                // 0x039C(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        OutRateClientMax;                                  // 0x03A0(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        OutRateClientMin;                                  // 0x03A4(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        OutRateClientAvg;                                  // 0x03A8(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        OutPacketsClientMax;                               // 0x03AC(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        OutPacketsClientMin;                               // 0x03B0(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        OutPacketsClientAvg;                               // 0x03B4(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NetNumClients;                                     // 0x03B8(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        InPackets;                                         // 0x03BC(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        OutPackets;                                        // 0x03C0(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        InBunches;                                         // 0x03C4(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        OutBunches;                                        // 0x03C8(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        OutLoss;                                           // 0x03CC(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        InLoss;                                            // 0x03D0(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        VoiceBytesSent;                                    // 0x03D4(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        VoiceBytesRecv;                                    // 0x03D8(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        VoicePacketsSent;                                  // 0x03DC(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        VoicePacketsRecv;                                  // 0x03E0(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        PercentInVoice;                                    // 0x03E4(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        PercentOutVoice;                                   // 0x03E8(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumActorChannels;                                  // 0x03EC(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumConsideredActors;                               // 0x03F0(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        PrioritizedActors;                                 // 0x03F4(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumRelevantActors;                                 // 0x03F8(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumRelevantDeletedActors;                          // 0x03FC(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumReplicatedActorAttempts;                        // 0x0400(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumReplicatedActors;                               // 0x0404(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumActors;                                         // 0x0408(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumNetActors;                                      // 0x040C(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumDormantActors;                                  // 0x0410(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumInitiallyDormantActors;                         // 0x0414(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumNetGUIDsAckd;                                   // 0x0418(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumNetGUIDsPending;                                // 0x041C(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumNetGUIDsUnAckd;                                 // 0x0420(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        ObjPathBytes;                                      // 0x0424(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NetGUIDOutRate;                                    // 0x0428(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NetGUIDInRate;                                     // 0x042C(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NetSaturated;                                      // 0x0430(0x0004)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_434[0x4];                                      // 0x0434(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ServerStatReplicator")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ServerStatReplicator")
	}
	static class AServerStatReplicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<AServerStatReplicator>();
	}
};

// Class Engine.MaterialExpressionParticleRadius
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionParticleRadius : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionParticleRadius")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionParticleRadius")
	}
	static class UMaterialExpressionParticleRadius* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionParticleRadius>();
	}
};

// Class Engine.MaterialExpressionParticleRandom
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionParticleRandom : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionParticleRandom")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionParticleRandom")
	}
	static class UMaterialExpressionParticleRandom* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionParticleRandom>();
	}
};

// Class Engine.ParticleEmitter
// 0x0190 (0x01B8 - 0x0028)
class UParticleEmitter : public UObject
{
public:
	class FName                                   EmitterName;                                       // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SubUVDataOffset;                                   // 0x0030(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEmitterRenderMode                            EmitterRenderMode;                                 // 0x0034(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EParticleSignificanceLevel                    SignificanceLevel;                                 // 0x0035(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EParticleVRSShadingRate                       ParticleVRSShadingRate;                            // 0x0036(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_37[0x1];                                       // 0x0037(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bUseLegacySpawningBehavior : 1;                    // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_38_1 : 3;                                   // 0x0038(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         ConvertedModules : 1;                              // 0x0038(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsSoloing : 1;                                    // 0x0038(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCookedOut : 1;                                    // 0x0038(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDisabledLODsKeepEmitterAlive : 1;                 // 0x0038(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDisableWhenInsignficant : 1;                      // 0x0039(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleLODLevel*>              LODLevels;                                         // 0x0040(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                         PeakActiveParticles;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InitialAllocationCount;                            // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         QualityLevelSpawnRateScale;                        // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        DetailModeBitmask;                                 // 0x005C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x158];                                     // 0x0060(0x0158)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleEmitter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleEmitter")
	}
	static class UParticleEmitter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleEmitter>();
	}
};

// Class Engine.MaterialExpressionParticleRelativeTime
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionParticleRelativeTime : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionParticleRelativeTime")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionParticleRelativeTime")
	}
	static class UMaterialExpressionParticleRelativeTime* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionParticleRelativeTime>();
	}
};

// Class Engine.MaterialExpressionParticleSize
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionParticleSize : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionParticleSize")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionParticleSize")
	}
	static class UMaterialExpressionParticleSize* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionParticleSize>();
	}
};

// Class Engine.MaterialExpressionParticleSpeed
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionParticleSpeed : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionParticleSpeed")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionParticleSpeed")
	}
	static class UMaterialExpressionParticleSpeed* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionParticleSpeed>();
	}
};

// Class Engine.MaterialExpressionParticleSubUVProperties
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionParticleSubUVProperties : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionParticleSubUVProperties")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionParticleSubUVProperties")
	}
	static class UMaterialExpressionParticleSubUVProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionParticleSubUVProperties>();
	}
};

// Class Engine.Selection
// 0x0078 (0x00A0 - 0x0028)
class USelection : public UObject
{
public:
	uint8                                         Pad_28[0x78];                                      // 0x0028(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Selection")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Selection")
	}
	static class USelection* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelection>();
	}
};

// Class Engine.MaterialExpressionPerInstanceBillboardLayerID
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionPerInstanceBillboardLayerID : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPerInstanceBillboardLayerID")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPerInstanceBillboardLayerID")
	}
	static class UMaterialExpressionPerInstanceBillboardLayerID* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPerInstanceBillboardLayerID>();
	}
};

// Class Engine.SkyLightComponent
// 0x0390 (0x0630 - 0x02A0)
class USkyLightComponent : public ULightComponentBase
{
public:
	ESkyLightSourceType                           SourceType;                                        // 0x0298(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureCube*                           Cubemap;                                           // 0x02A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureCube*                           ReflectionCubemap;                                 // 0x02A8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureCube*                           NextCubemap;                                       // 0x02B0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureCube*                           NextReflectionCubemap;                             // 0x02B8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CubemapBlendFactor;                                // 0x02C0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableBlend;                                      // 0x02C4(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C5[0x3];                                      // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTextureCube>            AsyncCubemap;                                      // 0x02C8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, Interp, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTextureCube>            AsyncReflectionCubemap;                            // 0x02F0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, Interp, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureCube*                           AdditiveCubemap;                                   // 0x0318(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, TSoftObjectPtr<class UTextureCube>> TodReflectionCubemaps;                   // 0x0320(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                         AdditiveReflectionIntensity;                       // 0x0370(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SourceCubemapAngle;                                // 0x0374(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CubemapResolution;                                 // 0x0378(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SkyDistanceThreshold;                              // 0x037C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNeedIrradianceNormalization;                      // 0x0380(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_381[0x3];                                      // 0x0381(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         IrradianceNormalizationIntensity;                  // 0x0384(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NormalizationHighCut;                              // 0x0388(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NormalizationLowCut;                               // 0x038C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCaptureEmissiveOnly;                              // 0x0390(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLowerHemisphereIsBlack;                           // 0x0391(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_392[0x2];                                      // 0x0392(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           LowerHemisphereColor;                              // 0x0394(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLowerUseGrayScale;                                // 0x03A4(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseCubemapInJadeSnake;                            // 0x03A5(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A6[0x2];                                      // 0x03A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OcclusionMaxDistance;                              // 0x03A8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Contrast;                                          // 0x03AC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OcclusionExponent;                                 // 0x03B0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinOcclusion;                                      // 0x03B4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 OcclusionTint;                                     // 0x03B8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOcclusionCombineMode                         OcclusionCombineMode;                              // 0x03BC(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3BD[0x16B];                                    // 0x03BD(0x016B)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 PreProcessedIrradianceEnvironmentMap;              // 0x0528(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                         PreProcessedAverageBrightness;                     // 0x0538(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_53C[0x4];                                      // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureCube*                           BlendDestinationCubemap;                           // 0x0540(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_548[0xA0];                                     // 0x0548(0x00A0)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 PreProcessedBlendDestinationIrradianceEnvironmentMap; // 0x05E8(0x0010)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                         PreProcessedBlendDestinationAverageBrightness;     // 0x05F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5FC[0x34];                                     // 0x05FC(0x0034)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void RecaptureSky();
	void SetAsyncCubemap(TSoftObjectPtr<class UTextureCube> NewCubemap);
	void SetAsyncReflectionCubemap(TSoftObjectPtr<class UTextureCube> NewCubemap);
	void SetCubemap(class UTextureCube* NewCubemap);
	void SetCubemapBlend(class UTextureCube* SourceCubemap, class UTextureCube* DestinationCubemap, float InBlendFraction);
	void SetCubemapBlendFactor(float NewBlendFactor);
	void SetIndirectLightingIntensity(float NewIntensity);
	void SetIntensity(float NewIntensity);
	void SetLightColor(const struct FLinearColor& NewLightColor);
	void SetLowerHemisphereColor(const struct FLinearColor& InLowerHemisphereColor);
	void SetMinOcclusion(float InMinOcclusion);
	void SetNextCubemap(class UTextureCube* NewCubemap);
	void SetNextReflectionCubemap(class UTextureCube* NewCubemap);
	void SetOcclusionContrast(float InOcclusionContrast);
	void SetOcclusionExponent(float InOcclusionExponent);
	void SetOcclusionTint(const struct FColor& InTint);
	void SetReflectionCubemap(class UTextureCube* NewCubemap);
	void SetVolumetricScatteringIntensity(float NewIntensity);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SkyLightComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SkyLightComponent")
	}
	static class USkyLightComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkyLightComponent>();
	}
};

// Class Engine.MaterialExpressionPerInstanceFadeAmount
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionPerInstanceFadeAmount : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPerInstanceFadeAmount")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPerInstanceFadeAmount")
	}
	static class UMaterialExpressionPerInstanceFadeAmount* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPerInstanceFadeAmount>();
	}
};

// Class Engine.MaterialExpressionPerInstanceLocalToWorldComponent
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionPerInstanceLocalToWorldComponent : public UMaterialExpression
{
public:
	int32                                         ComponentId;                                       // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPerInstanceLocalToWorldComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPerInstanceLocalToWorldComponent")
	}
	static class UMaterialExpressionPerInstanceLocalToWorldComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPerInstanceLocalToWorldComponent>();
	}
};

// Class Engine.ParticleModuleOrientationBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleOrientationBase : public UParticleModule
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleOrientationBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleOrientationBase")
	}
	static class UParticleModuleOrientationBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleOrientationBase>();
	}
};

// Class Engine.MaterialExpressionPerInstanceObjectOrientation
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionPerInstanceObjectOrientation : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPerInstanceObjectOrientation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPerInstanceObjectOrientation")
	}
	static class UMaterialExpressionPerInstanceObjectOrientation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPerInstanceObjectOrientation>();
	}
};

// Class Engine.MaterialExpressionPerInstanceRandom
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionPerInstanceRandom : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPerInstanceRandom")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPerInstanceRandom")
	}
	static class UMaterialExpressionPerInstanceRandom* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPerInstanceRandom>();
	}
};

// Class Engine.ParticleModuleKillBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleKillBase : public UParticleModule
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleKillBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleKillBase")
	}
	static class UParticleModuleKillBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleKillBase>();
	}
};

// Class Engine.ParticleModuleKillBox
// 0x0098 (0x00C8 - 0x0030)
class UParticleModuleKillBox : public UParticleModuleKillBase
{
public:
	struct FRawDistributionVector                 LowerLeftCorner;                                   // 0x0030(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionVector                 UpperRightCorner;                                  // 0x0078(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bAbsolute : 1;                                     // 0x00C0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bKillInside : 1;                                   // 0x00C0(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAxisAlignedAndFixedSize : 1;                      // 0x00C0(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleKillBox")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleKillBox")
	}
	static class UParticleModuleKillBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleKillBox>();
	}
};

// Class Engine.MaterialExpressionPixelNormalWS
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionPixelNormalWS : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPixelNormalWS")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPixelNormalWS")
	}
	static class UMaterialExpressionPixelNormalWS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPixelNormalWS>();
	}
};

// Class Engine.MaterialExpressionPower
// 0x0030 (0x0070 - 0x0040)
class UMaterialExpressionPower : public UMaterialExpression
{
public:
	struct FExpressionInput                       Base;                                              // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Exponent;                                          // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConstExponent;                                     // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPower")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPower")
	}
	static class UMaterialExpressionPower* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPower>();
	}
};

// Class Engine.SkyAtmosphere
// 0x0008 (0x0378 - 0x0370)
class ASkyAtmosphere : public AInfo
{
public:
	class USkyAtmosphereComponent*                SkyAtmosphereComponent;                            // 0x0370(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SkyAtmosphere")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SkyAtmosphere")
	}
	static class ASkyAtmosphere* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASkyAtmosphere>();
	}
};

// Class Engine.MaterialExpressionPrecomputedAOMask
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionPrecomputedAOMask : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPrecomputedAOMask")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPrecomputedAOMask")
	}
	static class UMaterialExpressionPrecomputedAOMask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPrecomputedAOMask>();
	}
};

// Class Engine.SoundCue
// 0x0380 (0x04E0 - 0x0160)
class USoundCue : public USoundBase
{
public:
	uint8                                         bPrimeOnLoad : 1;                                  // 0x0160(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundNode*                             FirstNode;                                         // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VolumeMultiplier;                                  // 0x0170(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PitchMultiplier;                                   // 0x0174(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings              AttenuationOverrides;                              // 0x0178(0x0350)(Edit, NativeAccessSpecifierPublic)
	float                                         SubtitlePriority;                                  // 0x04C8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4CC[0x4];                                      // 0x04CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bOverrideAttenuation : 1;                          // 0x04D0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bExcludeFromRandomNodeBranchCulling : 1;           // 0x04D0(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bHasPlayWhenSilent : 1;                            // 0x04D0(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_4D1[0xF];                                      // 0x04D1(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundCue")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundCue")
	}
	static class USoundCue* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundCue>();
	}
};

// Class Engine.SoundCueTemplate
// 0x0000 (0x04E0 - 0x04E0)
class USoundCueTemplate : public USoundCue
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SoundCueTemplate")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SoundCueTemplate")
	}
	static class USoundCueTemplate* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundCueTemplate>();
	}
};

// Class Engine.MaterialExpressionPreSkinnedLocalBounds
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionPreSkinnedLocalBounds : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPreSkinnedLocalBounds")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPreSkinnedLocalBounds")
	}
	static class UMaterialExpressionPreSkinnedLocalBounds* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPreSkinnedLocalBounds>();
	}
};

// Class Engine.MaterialExpressionPreSkinnedNormal
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionPreSkinnedNormal : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPreSkinnedNormal")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPreSkinnedNormal")
	}
	static class UMaterialExpressionPreSkinnedNormal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPreSkinnedNormal>();
	}
};

// Class Engine.ParticleModuleRotation_Seeded
// 0x0020 (0x0080 - 0x0060)
class UParticleModuleRotation_Seeded : public UParticleModuleRotation
{
public:
	struct FParticleRandomSeedInfo                RandomSeedInfo;                                    // 0x0060(0x0020)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleRotation_Seeded")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleRotation_Seeded")
	}
	static class UParticleModuleRotation_Seeded* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleRotation_Seeded>();
	}
};

// Class Engine.MaterialExpressionPreSkinnedPosition
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionPreSkinnedPosition : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPreSkinnedPosition")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPreSkinnedPosition")
	}
	static class UMaterialExpressionPreSkinnedPosition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPreSkinnedPosition>();
	}
};

// Class Engine.MaterialExpressionPreviousFrameSwitch
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionPreviousFrameSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                       CurrentFrame;                                      // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       PreviousFrame;                                     // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPreviousFrameSwitch")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPreviousFrameSwitch")
	}
	static class UMaterialExpressionPreviousFrameSwitch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPreviousFrameSwitch>();
	}
};

// Class Engine.MaterialExpressionPreviousQuaterSceneColor
// 0x0038 (0x0078 - 0x0040)
class UMaterialExpressionPreviousQuaterSceneColor : public UMaterialExpression
{
public:
	EMaterialSceneAttributeInputMode              InputMode;                                         // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Input;                                             // 0x0044(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       OffsetFraction;                                    // 0x0058(0x000C)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x8];                                       // 0x0064(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ConstInput;                                        // 0x006C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPreviousQuaterSceneColor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPreviousQuaterSceneColor")
	}
	static class UMaterialExpressionPreviousQuaterSceneColor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPreviousQuaterSceneColor>();
	}
};

// Class Engine.NavigationSystemConfig
// 0x0028 (0x0050 - 0x0028)
class UNavigationSystemConfig : public UObject
{
public:
	struct FSoftClassPath                         NavigationSystemClass;                             // 0x0028(0x0018)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAgentSelector                      SupportedAgentsMask;                               // 0x0040(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                   DefaultAgentName;                                  // 0x0044(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bIsOverriden : 1;                                  // 0x004C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavigationSystemConfig")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavigationSystemConfig")
	}
	static class UNavigationSystemConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavigationSystemConfig>();
	}
};

// Class Engine.MaterialExpressionPreZShaderStage
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionPreZShaderStage : public UMaterialExpression
{
public:
	struct FExpressionInput                       Default;                                           // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       PreZ;                                              // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionPreZShaderStage")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionPreZShaderStage")
	}
	static class UMaterialExpressionPreZShaderStage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPreZShaderStage>();
	}
};

// Class Engine.MaterialExpressionQualitySwitch
// 0x0090 (0x00D0 - 0x0040)
class UMaterialExpressionQualitySwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                       Default;                                           // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Inputs[0x6];                                       // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x34];                                      // 0x009C(0x0034)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionQualitySwitch")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionQualitySwitch")
	}
	static class UMaterialExpressionQualitySwitch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionQualitySwitch>();
	}
};

// Class Engine.MaterialExpressionReroute
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionReroute : public UMaterialExpressionRerouteBase
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionReroute")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionReroute")
	}
	static class UMaterialExpressionReroute* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionReroute>();
	}
};

// Class Engine.MaterialExpressionRotateAboutAxis
// 0x0058 (0x0098 - 0x0040)
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
public:
	struct FExpressionInput                       NormalizedRotationAxis;                            // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       RotationAngle;                                     // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       PivotPoint;                                        // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Position;                                          // 0x007C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Period;                                            // 0x0090(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionRotateAboutAxis")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionRotateAboutAxis")
	}
	static class UMaterialExpressionRotateAboutAxis* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionRotateAboutAxis>();
	}
};

// Class Engine.MaterialExpressionTextureCoordinate
// 0x0010 (0x0050 - 0x0040)
class UMaterialExpressionTextureCoordinate : public UMaterialExpression
{
public:
	int32                                         CoordinateIndex;                                   // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         UTiling;                                           // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         VTiling;                                           // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         UnMirrorU : 1;                                     // 0x004C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         UnMirrorV : 1;                                     // 0x004C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTextureCoordinate")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTextureCoordinate")
	}
	static class UMaterialExpressionTextureCoordinate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTextureCoordinate>();
	}
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureOutput
// 0x00A0 (0x00E0 - 0x0040)
class UMaterialExpressionRuntimeVirtualTextureOutput : public UMaterialExpressionCustomOutput
{
public:
	struct FExpressionInput                       BaseColor;                                         // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Specular;                                          // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Roughness;                                         // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Normal;                                            // 0x007C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       WorldHeight;                                       // 0x0090(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_9C[0x8];                                       // 0x009C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Opacity;                                           // 0x00A4(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_B0[0x8];                                       // 0x00B0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Mask;                                              // 0x00B8(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_C4[0x8];                                       // 0x00C4(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       AO;                                                // 0x00CC(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_D8[0x8];                                       // 0x00D8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionRuntimeVirtualTextureOutput")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionRuntimeVirtualTextureOutput")
	}
	static class UMaterialExpressionRuntimeVirtualTextureOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionRuntimeVirtualTextureOutput>();
	}
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureReplace
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionRuntimeVirtualTextureReplace : public UMaterialExpression
{
public:
	struct FExpressionInput                       Default;                                           // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       VirtualTextureOutput;                              // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionRuntimeVirtualTextureReplace")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionRuntimeVirtualTextureReplace")
	}
	static class UMaterialExpressionRuntimeVirtualTextureReplace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionRuntimeVirtualTextureReplace>();
	}
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSample
// 0x0050 (0x0090 - 0x0040)
class UMaterialExpressionRuntimeVirtualTextureSample : public UMaterialExpression
{
public:
	struct FExpressionInput                       Coordinates;                                       // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       MipValue;                                          // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       VirtualTextureInput;                               // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0xC];                                       // 0x0074(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	class URuntimeVirtualTexture*                 VirtualTexture;                                    // 0x0080(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERuntimeVirtualTextureMaterialType            MaterialType;                                      // 0x0088(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSinglePhysicalSpace;                              // 0x0089(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAdaptive;                                         // 0x008A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERuntimeVirtualTextureMipValueMode            MipValueMode;                                      // 0x008B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionRuntimeVirtualTextureSample")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionRuntimeVirtualTextureSample")
	}
	static class UMaterialExpressionRuntimeVirtualTextureSample* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionRuntimeVirtualTextureSample>();
	}
};

// Class Engine.MaterialExpressionRuntimeVirtualTextureSampleParameter
// 0x0020 (0x00B0 - 0x0090)
class UMaterialExpressionRuntimeVirtualTextureSampleParameter : public UMaterialExpressionRuntimeVirtualTextureSample
{
public:
	class FName                                   ParameterName;                                     // 0x0090(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ExpressionGUID;                                    // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Group;                                             // 0x00A8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionRuntimeVirtualTextureSampleParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionRuntimeVirtualTextureSampleParameter")
	}
	static class UMaterialExpressionRuntimeVirtualTextureSampleParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionRuntimeVirtualTextureSampleParameter>();
	}
};

// Class Engine.MaterialExpressionSaturate
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionSaturate : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSaturate")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSaturate")
	}
	static class UMaterialExpressionSaturate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSaturate>();
	}
};

// Class Engine.ParticleModuleEventBase
// 0x0000 (0x0030 - 0x0030)
class UParticleModuleEventBase : public UParticleModule
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleEventBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleEventBase")
	}
	static class UParticleModuleEventBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleEventBase>();
	}
};

// Class Engine.ParticleModuleEventReceiverBase
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleEventReceiverBase : public UParticleModuleEventBase
{
public:
	EParticleEventType                            EventGeneratorType;                                // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   EventName;                                         // 0x0034(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleEventReceiverBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleEventReceiverBase")
	}
	static class UParticleModuleEventReceiverBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleEventReceiverBase>();
	}
};

// Class Engine.ParticleModuleEventReceiverKillParticles
// 0x0008 (0x0048 - 0x0040)
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase
{
public:
	uint8                                         bStopSpawning : 1;                                 // 0x0040(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleEventReceiverKillParticles")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleEventReceiverKillParticles")
	}
	static class UParticleModuleEventReceiverKillParticles* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleEventReceiverKillParticles>();
	}
};

// Class Engine.MaterialExpressionSceneColor
// 0x0038 (0x0078 - 0x0040)
class UMaterialExpressionSceneColor : public UMaterialExpression
{
public:
	EMaterialSceneAttributeInputMode              InputMode;                                         // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseRawSceneColor;                                 // 0x0041(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Input;                                             // 0x0044(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       OffsetFraction;                                    // 0x0058(0x000C)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x8];                                       // 0x0064(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ConstInput;                                        // 0x006C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSceneColor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSceneColor")
	}
	static class UMaterialExpressionSceneColor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSceneColor>();
	}
};

// Class Engine.MaterialExpressionSceneDepth
// 0x0038 (0x0078 - 0x0040)
class UMaterialExpressionSceneDepth : public UMaterialExpression
{
public:
	EMaterialSceneAttributeInputMode              InputMode;                                         // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Input;                                             // 0x0044(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Coordinates;                                       // 0x0058(0x000C)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x8];                                       // 0x0064(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ConstInput;                                        // 0x006C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSceneDepth")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSceneDepth")
	}
	static class UMaterialExpressionSceneDepth* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSceneDepth>();
	}
};

// Class Engine.MaterialExpressionSceneDepthWithoutWater
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionSceneDepthWithoutWater : public UMaterialExpression
{
public:
	EMaterialSceneAttributeInputMode              InputMode;                                         // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Input;                                             // 0x0044(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ConstInput;                                        // 0x0058(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FallbackDepth;                                     // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSceneDepthWithoutWater")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSceneDepthWithoutWater")
	}
	static class UMaterialExpressionSceneDepthWithoutWater* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSceneDepthWithoutWater>();
	}
};

// Class Engine.MaterialExpressionTextureSprite2DSampleParameter
// 0x0008 (0x0100 - 0x00F8)
class UMaterialExpressionTextureSprite2DSampleParameter : public UMaterialExpressionTextureSampleParameter
{
public:
	class UMaterialExpressionVectorParameter*     UVSizeVectorParameter;                             // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTextureSprite2DSampleParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTextureSprite2DSampleParameter")
	}
	static class UMaterialExpressionTextureSprite2DSampleParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTextureSprite2DSampleParameter>();
	}
};

// Class Engine.MaterialExpressionSceneTexelSize
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionSceneTexelSize : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSceneTexelSize")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSceneTexelSize")
	}
	static class UMaterialExpressionSceneTexelSize* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSceneTexelSize>();
	}
};

// Class Engine.MaterialExpressionSceneTexture
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionSceneTexture : public UMaterialExpression
{
public:
	struct FExpressionInput                       Coordinates;                                       // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	ESceneTextureId                               SceneTextureId;                                    // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFiltered;                                         // 0x0055(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_56[0x2];                                       // 0x0056(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSceneTexture")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSceneTexture")
	}
	static class UMaterialExpressionSceneTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSceneTexture>();
	}
};

// Class Engine.MaterialExpressionScreenPosition
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionScreenPosition : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionScreenPosition")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionScreenPosition")
	}
	static class UMaterialExpressionScreenPosition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionScreenPosition>();
	}
};

// Class Engine.MaterialExpressionSetMaterialAttributes
// 0x0020 (0x0060 - 0x0040)
class UMaterialExpressionSetMaterialAttributes : public UMaterialExpression
{
public:
	TArray<struct FExpressionInput>               Inputs;                                            // 0x0040(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                          AttributeSetTypes;                                 // 0x0050(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSetMaterialAttributes")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSetMaterialAttributes")
	}
	static class UMaterialExpressionSetMaterialAttributes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSetMaterialAttributes>();
	}
};

// Class Engine.MaterialExpressionShaderStageSwitch
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionShaderStageSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                       PixelShader;                                       // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       VertexShader;                                      // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionShaderStageSwitch")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionShaderStageSwitch")
	}
	static class UMaterialExpressionShaderStageSwitch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionShaderStageSwitch>();
	}
};

// Class Engine.NavEdgeProviderInterface
// 0x0000 (0x0000 - 0x0000)
class INavEdgeProviderInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavEdgeProviderInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavEdgeProviderInterface")
	}
	static class INavEdgeProviderInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<INavEdgeProviderInterface>();
	}
};

// Class Engine.MaterialExpressionShadingModel
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionShadingModel : public UMaterialExpression
{
public:
	EMaterialShadingModel                         ShadingModel;                                      // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionShadingModel")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionShadingModel")
	}
	static class UMaterialExpressionShadingModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionShadingModel>();
	}
};

// Class Engine.MaterialExpressionShadingPathSwitch
// 0x0050 (0x0090 - 0x0040)
class UMaterialExpressionShadingPathSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                       Default;                                           // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Inputs[0x3];                                       // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0x18];                                      // 0x0078(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionShadingPathSwitch")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionShadingPathSwitch")
	}
	static class UMaterialExpressionShadingPathSwitch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionShadingPathSwitch>();
	}
};

// Class Engine.MaterialExpressionShadowReplace
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionShadowReplace : public UMaterialExpression
{
public:
	struct FExpressionInput                       Default;                                           // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Shadow;                                            // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionShadowReplace")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionShadowReplace")
	}
	static class UMaterialExpressionShadowReplace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionShadowReplace>();
	}
};

// Class Engine.MaterialExpressionVectorNoise
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionVectorNoise : public UMaterialExpression
{
public:
	struct FExpressionInput                       Position;                                          // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	EVectorNoiseFunction                          NoiseFunction;                                     // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Quality;                                           // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bTiling : 1;                                       // 0x005C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        TileSize;                                          // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionVectorNoise")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionVectorNoise")
	}
	static class UMaterialExpressionVectorNoise* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionVectorNoise>();
	}
};

// Class Engine.MaterialExpressionSign
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionSign : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSign")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSign")
	}
	static class UMaterialExpressionSign* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSign>();
	}
};

// Class Engine.MaterialExpressionSine
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionSine : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Period;                                            // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSine")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSine")
	}
	static class UMaterialExpressionSine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSine>();
	}
};

// Class Engine.MaterialExpressionSingleLayerWaterMaterialOutput
// 0x0050 (0x0090 - 0x0040)
class UMaterialExpressionSingleLayerWaterMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
	struct FExpressionInput                       ScatteringCoefficients;                            // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       AbsorptionCoefficients;                            // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       PhaseG;                                            // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       ColorScaleBehindWater;                             // 0x007C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSingleLayerWaterMaterialOutput")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSingleLayerWaterMaterialOutput")
	}
	static class UMaterialExpressionSingleLayerWaterMaterialOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSingleLayerWaterMaterialOutput>();
	}
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDirection
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionSkyAtmosphereLightDirection : public UMaterialExpression
{
public:
	int32                                         LightIndex;                                        // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSkyAtmosphereLightDirection")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSkyAtmosphereLightDirection")
	}
	static class UMaterialExpressionSkyAtmosphereLightDirection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSkyAtmosphereLightDirection>();
	}
};

// Class Engine.MaterialExpressionSkyAtmosphereLightIlluminance
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionSkyAtmosphereLightIlluminance : public UMaterialExpression
{
public:
	int32                                         LightIndex;                                        // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExpressionInput                       WorldPosition;                                     // 0x0044(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSkyAtmosphereLightIlluminance")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSkyAtmosphereLightIlluminance")
	}
	static class UMaterialExpressionSkyAtmosphereLightIlluminance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSkyAtmosphereLightIlluminance>();
	}
};

// Class Engine.NavRelevantInterface
// 0x0000 (0x0000 - 0x0000)
class INavRelevantInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavRelevantInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavRelevantInterface")
	}
	static class INavRelevantInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<INavRelevantInterface>();
	}
};

// Class Engine.MaterialExpressionSkyAtmosphereLightDiskLuminance
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionSkyAtmosphereLightDiskLuminance : public UMaterialExpression
{
public:
	int32                                         LightIndex;                                        // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSkyAtmosphereLightDiskLuminance")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSkyAtmosphereLightDiskLuminance")
	}
	static class UMaterialExpressionSkyAtmosphereLightDiskLuminance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSkyAtmosphereLightDiskLuminance>();
	}
};

// Class Engine.MaterialExpressionSkyAtmosphereAerialPerspective
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionSkyAtmosphereAerialPerspective : public UMaterialExpression
{
public:
	struct FExpressionInput                       WorldPosition;                                     // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSkyAtmosphereAerialPerspective")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSkyAtmosphereAerialPerspective")
	}
	static class UMaterialExpressionSkyAtmosphereAerialPerspective* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSkyAtmosphereAerialPerspective>();
	}
};

// Class Engine.MaterialExpressionSkyAtmosphereDistantLightScatteredLuminance
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSkyAtmosphereDistantLightScatteredLuminance")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSkyAtmosphereDistantLightScatteredLuminance")
	}
	static class UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance>();
	}
};

// Class Engine.ParticleModuleAttractorPoint
// 0x00B0 (0x00E0 - 0x0030)
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
public:
	struct FRawDistributionVector                 Position;                                          // 0x0030(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  Range;                                             // 0x0078(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  Strength;                                          // 0x00A8(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         StrengthByDistance : 1;                            // 0x00D8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bAffectBaseVelocity : 1;                           // 0x00D8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverrideVelocity : 1;                             // 0x00D8(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseWorldSpacePosition : 1;                        // 0x00D8(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Positive_X : 1;                                    // 0x00D8(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Positive_Y : 1;                                    // 0x00D8(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Positive_Z : 1;                                    // 0x00D8(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Negative_X : 1;                                    // 0x00D8(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Negative_Y : 1;                                    // 0x00D9(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Negative_Z : 1;                                    // 0x00D9(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_DA[0x6];                                       // 0x00DA(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleAttractorPoint")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleAttractorPoint")
	}
	static class UParticleModuleAttractorPoint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleAttractorPoint>();
	}
};

// Class Engine.MaterialExpressionSkyAtmosphereViewLuminance
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionSkyAtmosphereViewLuminance : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSkyAtmosphereViewLuminance")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSkyAtmosphereViewLuminance")
	}
	static class UMaterialExpressionSkyAtmosphereViewLuminance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSkyAtmosphereViewLuminance>();
	}
};

// Class Engine.MaterialExpressionSobol
// 0x0048 (0x0088 - 0x0040)
class UMaterialExpressionSobol : public UMaterialExpression
{
public:
	struct FExpressionInput                       Cell;                                              // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Index_0;                                           // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Seed;                                              // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        ConstIndex;                                        // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ConstSeed;                                         // 0x0080(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSobol")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSobol")
	}
	static class UMaterialExpressionSobol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSobol>();
	}
};

// Class Engine.MaterialExpressionSpeedTree
// 0x0060 (0x00A0 - 0x0040)
class UMaterialExpressionSpeedTree : public UMaterialExpression
{
public:
	struct FExpressionInput                       GeometryInput;                                     // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       WindInput;                                         // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       LODInput;                                          // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       ExtraBendWS;                                       // 0x007C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	ESpeedTreeGeometryType                        GeometryType;                                      // 0x0090(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESpeedTreeWindType                            WindType;                                          // 0x0091(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESpeedTreeLODType                             LODType;                                           // 0x0092(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_93[0x1];                                       // 0x0093(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BillboardThreshold;                                // 0x0094(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAccurateWindVelocities;                           // 0x0098(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSpeedTree")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSpeedTree")
	}
	static class UMaterialExpressionSpeedTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSpeedTree>();
	}
};

// Class Engine.MaterialExpressionSphereMask
// 0x0058 (0x0098 - 0x0040)
class UMaterialExpressionSphereMask : public UMaterialExpression
{
public:
	struct FExpressionInput                       A;                                                 // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       radius;                                            // 0x0068(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x8];                                       // 0x0074(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Hardness;                                          // 0x007C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_88[0x8];                                       // 0x0088(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AttenuationRadius;                                 // 0x0090(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HardnessPercent;                                   // 0x0094(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSphereMask")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSphereMask")
	}
	static class UMaterialExpressionSphereMask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSphereMask>();
	}
};

// Class Engine.MaterialExpressionSphericalParticleOpacity
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression
{
public:
	struct FExpressionInput                       Density;                                           // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConstantDensity;                                   // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSphericalParticleOpacity")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSphericalParticleOpacity")
	}
	static class UMaterialExpressionSphericalParticleOpacity* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSphericalParticleOpacity>();
	}
};

// Class Engine.MaterialExpressionSpriteTextureSample
// 0x0040 (0x0118 - 0x00D8)
class UMaterialExpressionSpriteTextureSample : public UMaterialExpressionTextureSample
{
public:
	struct FExpressionInput                       StartUV;                                           // 0x00D8(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_E4[0x8];                                       // 0x00E4(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       SizeUV;                                            // 0x00EC(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_F8[0x8];                                       // 0x00F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       UVFunction;                                        // 0x0100(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_10C[0x8];                                      // 0x010C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	ESamplerSourceMode                            SpiritSamplerMode;                                 // 0x0114(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSpriteTextureSample")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSpriteTextureSample")
	}
	static class UMaterialExpressionSpriteTextureSample* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSpriteTextureSample>();
	}
};

// Class Engine.MaterialExpressionSquareRoot
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionSquareRoot : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionSquareRoot")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionSquareRoot")
	}
	static class UMaterialExpressionSquareRoot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionSquareRoot>();
	}
};

// Class Engine.MaterialExpressionStaticBool
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionStaticBool : public UMaterialExpression
{
public:
	uint8                                         Value : 1;                                         // 0x0040(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionStaticBool")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionStaticBool")
	}
	static class UMaterialExpressionStaticBool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionStaticBool>();
	}
};

// Class Engine.MaterialExpressionStaticComponentMaskParameter
// 0x0018 (0x0070 - 0x0058)
class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter
{
public:
	struct FExpressionInput                       Input;                                             // 0x0058(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x8];                                       // 0x0064(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         DefaultR : 1;                                      // 0x006C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         DefaultG : 1;                                      // 0x006C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         DefaultB : 1;                                      // 0x006C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         DefaultA : 1;                                      // 0x006C(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionStaticComponentMaskParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionStaticComponentMaskParameter")
	}
	static class UMaterialExpressionStaticComponentMaskParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionStaticComponentMaskParameter>();
	}
};

// Class Engine.MaterialExpressionStaticSwitch
// 0x0040 (0x0080 - 0x0040)
class UMaterialExpressionStaticSwitch : public UMaterialExpression
{
public:
	uint8                                         DefaultValue : 1;                                  // 0x0040(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       A;                                                 // 0x0044(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0058(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x8];                                       // 0x0064(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Value;                                             // 0x006C(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_78[0x8];                                       // 0x0078(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionStaticSwitch")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionStaticSwitch")
	}
	static class UMaterialExpressionStaticSwitch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionStaticSwitch>();
	}
};

// Class Engine.MaterialExpressionStaticSwitchParameter
// 0x0028 (0x0088 - 0x0060)
class UMaterialExpressionStaticSwitchParameter : public UMaterialExpressionStaticBoolParameter
{
public:
	struct FExpressionInput                       A;                                                 // 0x0060(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x8];                                       // 0x006C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       B;                                                 // 0x0074(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_80[0x8];                                       // 0x0080(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionStaticSwitchParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionStaticSwitchParameter")
	}
	static class UMaterialExpressionStaticSwitchParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionStaticSwitchParameter>();
	}
};

// Class Engine.MaterialExpressionTangent
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionTangent : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Period;                                            // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTangent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTangent")
	}
	static class UMaterialExpressionTangent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTangent>();
	}
};

// Class Engine.MaterialExpressionTangentOutput
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionTangentOutput : public UMaterialExpressionCustomOutput
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTangentOutput")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTangentOutput")
	}
	static class UMaterialExpressionTangentOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTangentOutput>();
	}
};

// Class Engine.MaterialExpressionTemporalSobol
// 0x0038 (0x0078 - 0x0040)
class UMaterialExpressionTemporalSobol : public UMaterialExpression
{
public:
	struct FExpressionInput                       Index_0;                                           // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Seed;                                              // 0x0054(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_60[0x8];                                       // 0x0060(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        ConstIndex;                                        // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ConstSeed;                                         // 0x006C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTemporalSobol")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTemporalSobol")
	}
	static class UMaterialExpressionTemporalSobol* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTemporalSobol>();
	}
};

// Class Engine.MaterialExpressionTextureObject
// 0x0000 (0x0058 - 0x0058)
class UMaterialExpressionTextureObject : public UMaterialExpressionTextureBase
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTextureObject")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTextureObject")
	}
	static class UMaterialExpressionTextureObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTextureObject>();
	}
};

// Class Engine.MaterialExpressionTextureObjectParameter
// 0x0000 (0x00F8 - 0x00F8)
class UMaterialExpressionTextureObjectParameter : public UMaterialExpressionTextureSampleParameter
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTextureObjectParameter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTextureObjectParameter")
	}
	static class UMaterialExpressionTextureObjectParameter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTextureObjectParameter>();
	}
};

// Class Engine.MaterialExpressionTextureProperty
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionTextureProperty : public UMaterialExpression
{
public:
	struct FExpressionInput                       TextureObject;                                     // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	EMaterialExposedTextureProperty               Property;                                          // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTextureProperty")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTextureProperty")
	}
	static class UMaterialExpressionTextureProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTextureProperty>();
	}
};

// Class Engine.MaterialExpressionTextureSampleParameterCube
// 0x0000 (0x00F8 - 0x00F8)
class UMaterialExpressionTextureSampleParameterCube : public UMaterialExpressionTextureSampleParameter
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTextureSampleParameterCube")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTextureSampleParameterCube")
	}
	static class UMaterialExpressionTextureSampleParameterCube* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTextureSampleParameterCube>();
	}
};

// Class Engine.MaterialExpressionTextureSampleParameterVolume
// 0x0000 (0x00F8 - 0x00F8)
class UMaterialExpressionTextureSampleParameterVolume : public UMaterialExpressionTextureSampleParameter
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTextureSampleParameterVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTextureSampleParameterVolume")
	}
	static class UMaterialExpressionTextureSampleParameterVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTextureSampleParameterVolume>();
	}
};

// Class Engine.MaterialExpressionThinTranslucentMaterialOutput
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionThinTranslucentMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
	struct FExpressionInput                       TransmittanceColor;                                // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionThinTranslucentMaterialOutput")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionThinTranslucentMaterialOutput")
	}
	static class UMaterialExpressionThinTranslucentMaterialOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionThinTranslucentMaterialOutput>();
	}
};

// Class Engine.MaterialExpressionTime
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionTime : public UMaterialExpression
{
public:
	uint8                                         bIgnorePause : 1;                                  // 0x0040(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_Period : 1;                              // 0x0040(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Period;                                            // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTime")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTime")
	}
	static class UMaterialExpressionTime* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTime>();
	}
};

// Class Engine.MaterialExpressionTransform
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionTransform : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	EMaterialVectorCoordTransformSource           TransformSourceType;                               // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMaterialVectorCoordTransform                 TransformType;                                     // 0x0055(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_56[0x2];                                       // 0x0056(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTransform")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTransform")
	}
	static class UMaterialExpressionTransform* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTransform>();
	}
};

// Class Engine.MaterialExpressionTruncate
// 0x0018 (0x0058 - 0x0040)
class UMaterialExpressionTruncate : public UMaterialExpression
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0xC];                                       // 0x004C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTruncate")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTruncate")
	}
	static class UMaterialExpressionTruncate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTruncate>();
	}
};

// Class Engine.MaterialExpressionTwoSidedSign
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionTwoSidedSign : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionTwoSidedSign")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionTwoSidedSign")
	}
	static class UMaterialExpressionTwoSidedSign* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionTwoSidedSign>();
	}
};

// Class Engine.MaterialExpressionUIFetchBackBuffer
// 0x0020 (0x0060 - 0x0040)
class UMaterialExpressionUIFetchBackBuffer : public UMaterialExpression
{
public:
	EMaterialSceneAttributeInputMode              InputMode;                                         // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FExpressionInput                       Coordinates;                                       // 0x0044(0x000C)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_50[0x8];                                       // 0x0050(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ConstInput;                                        // 0x0058(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionUIFetchBackBuffer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionUIFetchBackBuffer")
	}
	static class UMaterialExpressionUIFetchBackBuffer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionUIFetchBackBuffer>();
	}
};

// Class Engine.MaterialExpressionVertexColor
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionVertexColor : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionVertexColor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionVertexColor")
	}
	static class UMaterialExpressionVertexColor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionVertexColor>();
	}
};

// Class Engine.MaterialExpressionVertexInterpolator
// 0x0028 (0x0068 - 0x0040)
class UMaterialExpressionVertexInterpolator : public UMaterialExpressionCustomOutput
{
public:
	struct FExpressionInput                       Input;                                             // 0x0040(0x000C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x8];                                       // 0x004C(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          ExcludeInDepthOnly;                                // 0x0054(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_55[0x13];                                      // 0x0055(0x0013)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionVertexInterpolator")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionVertexInterpolator")
	}
	static class UMaterialExpressionVertexInterpolator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionVertexInterpolator>();
	}
};

// Class Engine.MaterialExpressionVertexNormalWS
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionVertexNormalWS : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionVertexNormalWS")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionVertexNormalWS")
	}
	static class UMaterialExpressionVertexNormalWS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionVertexNormalWS>();
	}
};

// Class Engine.MaterialExpressionViewProperty
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionViewProperty : public UMaterialExpression
{
public:
	EMaterialExposedViewProperty                  Property;                                          // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionViewProperty")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionViewProperty")
	}
	static class UMaterialExpressionViewProperty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionViewProperty>();
	}
};

// Class Engine.MaterialExpressionWorldOriginLocation
// 0x0000 (0x0040 - 0x0040)
class UMaterialExpressionWorldOriginLocation : public UMaterialExpression
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionWorldOriginLocation")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionWorldOriginLocation")
	}
	static class UMaterialExpressionWorldOriginLocation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionWorldOriginLocation>();
	}
};

// Class Engine.MaterialExpressionWorldPosition
// 0x0008 (0x0048 - 0x0040)
class UMaterialExpressionWorldPosition : public UMaterialExpression
{
public:
	EWorldPositionIncludedOffsets                 WorldPositionShaderOffset;                         // 0x0040(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialExpressionWorldPosition")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialExpressionWorldPosition")
	}
	static class UMaterialExpressionWorldPosition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionWorldPosition>();
	}
};

// Class Engine.MaterialFunctionMaterialLayerBlendInstance
// 0x0000 (0x00D0 - 0x00D0)
class UMaterialFunctionMaterialLayerBlendInstance : public UMaterialFunctionInstance
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialFunctionMaterialLayerBlendInstance")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialFunctionMaterialLayerBlendInstance")
	}
	static class UMaterialFunctionMaterialLayerBlendInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialFunctionMaterialLayerBlendInstance>();
	}
};

// Class Engine.MaterialInstanceActor
// 0x0010 (0x0380 - 0x0370)
class AMaterialInstanceActor : public AActor
{
public:
	TArray<class AActor*>                         TargetActors;                                      // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialInstanceActor")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialInstanceActor")
	}
	static class AMaterialInstanceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMaterialInstanceActor>();
	}
};

// Class Engine.MaterialInstanceDynamic
// 0x0050 (0x0338 - 0x02E8)
class UMaterialInstanceDynamic : public UMaterialInstance
{
public:
	uint8                                         Pad_2E8[0x50];                                     // 0x02E8(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CopyInterpParameters(class UMaterialInstance* Source);
	void CopyParameterOverrides(class UMaterialInstance* MaterialInstance);
	void K2_CopyMaterialInstanceParameters(class UMaterialInterface* Source, bool bQuickParametersOnly);
	float K2_GetScalarParameterValue(class FName ParameterName);
	class UTexture* K2_GetTextureParameterValue(class FName ParameterName);
	struct FLinearColor K2_GetVectorParameterValue(class FName ParameterName);
	void K2_InterpolateMaterialInstanceParams(class UMaterialInstance* SourceA, class UMaterialInstance* SourceB, float Alpha);
	void SetScalarParameterValue(class FName ParameterName, float Value);
	void SetSpriteTextureParameterValue(class FName ParameterName, class UObject* Value);
	void SetTextureParameterValue(class FName ParameterName, class UTexture* Value);
	void SetVectorParameterValue(class FName ParameterName, const struct FLinearColor& Value);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialInstanceDynamic")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialInstanceDynamic")
	}
	static class UMaterialInstanceDynamic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialInstanceDynamic>();
	}
};

// Class Engine.MaterialParameterCollectionInstance
// 0x0118 (0x0140 - 0x0028)
class UMaterialParameterCollectionInstance : public UObject
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialParameterCollection*           Collection;                                        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_38[0xA8];                                      // 0x0038(0x00A8)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class UObject*>             TextureParameterValues;                            // 0x00E0(0x0050)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_130[0x10];                                     // 0x0130(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MaterialParameterCollectionInstance")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MaterialParameterCollectionInstance")
	}
	static class UMaterialParameterCollectionInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialParameterCollectionInstance>();
	}
};

// Class Engine.MatineeInterface
// 0x0000 (0x0000 - 0x0000)
class IMatineeInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MatineeInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MatineeInterface")
	}
	static class IMatineeInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMatineeInterface>();
	}
};

// Class Engine.MeshGroupSettingsConfig
// 0x0010 (0x0048 - 0x0038)
class UMeshGroupSettingsConfig : public UDeveloperSettings
{
public:
	TArray<struct FMeshGroupSettings>             MeshGroupSettings;                                 // 0x0038(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MeshGroupSettingsConfig")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MeshGroupSettingsConfig")
	}
	static class UMeshGroupSettingsConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshGroupSettingsConfig>();
	}
};

// Class Engine.MeshMergeCullingVolume
// 0x0000 (0x03A8 - 0x03A8)
class AMeshMergeCullingVolume : public AVolume
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MeshMergeCullingVolume")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MeshMergeCullingVolume")
	}
	static class AMeshMergeCullingVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMeshMergeCullingVolume>();
	}
};

// Class Engine.MeshVertexPainterKismetLibrary
// 0x0000 (0x0028 - 0x0028)
class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary
{
public:
	static void PaintVerticesLerpAlongAxis(class UStaticMeshComponent* StaticMeshComponent, const struct FLinearColor& StartColor, const struct FLinearColor& EndColor, EVertexPaintAxis Axis, bool bConvertToSRGB);
	static void PaintVerticesSingleColor(class UStaticMeshComponent* StaticMeshComponent, const struct FLinearColor& FillColor, bool bConvertToSRGB);
	static void RemovePaintedVertices(class UStaticMeshComponent* StaticMeshComponent);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MeshVertexPainterKismetLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MeshVertexPainterKismetLibrary")
	}
	static class UMeshVertexPainterKismetLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshVertexPainterKismetLibrary>();
	}
};

// Class Engine.MultiSubboundsStaticMeshComponent
// 0x0060 (0x08A0 - 0x0840)
class UMultiSubboundsStaticMeshComponent : public UStaticMeshComponent
{
public:
	TArray<struct FBoxSphereBounds>               SubBounds;                                         // 0x0840(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             NoDepthFetchMaterials;                             // 0x0850(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FVector4>                       DiscreteLinePoints;                                // 0x0860(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_870[0x20];                                     // 0x0870(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             DepthFetchMaterials;                               // 0x0890(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("MultiSubboundsStaticMeshComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"MultiSubboundsStaticMeshComponent")
	}
	static class UMultiSubboundsStaticMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMultiSubboundsStaticMeshComponent>();
	}
};

// Class Engine.NavAgentInterface
// 0x0000 (0x0000 - 0x0000)
class INavAgentInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavAgentInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavAgentInterface")
	}
	static class INavAgentInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<INavAgentInterface>();
	}
};

// Class Engine.NavCollisionBase
// 0x0048 (0x0070 - 0x0028)
class UNavCollisionBase : public UObject
{
public:
	uint8                                         bIsDynamicObstacle : 1;                            // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_29[0x47];                                      // 0x0029(0x0047)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavCollisionBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavCollisionBase")
	}
	static class UNavCollisionBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavCollisionBase>();
	}
};

// Class Engine.NavigationDataChunk
// 0x0008 (0x0030 - 0x0028)
class UNavigationDataChunk : public UObject
{
public:
	class FName                                   NavigationDataName;                                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavigationDataChunk")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavigationDataChunk")
	}
	static class UNavigationDataChunk* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavigationDataChunk>();
	}
};

// Class Engine.NavigationDataInterface
// 0x0000 (0x0000 - 0x0000)
class INavigationDataInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavigationDataInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavigationDataInterface")
	}
	static class INavigationDataInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<INavigationDataInterface>();
	}
};

// Class Engine.NavigationSystemBase
// 0x0000 (0x0028 - 0x0028)
class UNavigationSystemBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavigationSystemBase")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavigationSystemBase")
	}
	static class UNavigationSystemBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavigationSystemBase>();
	}
};

// Class Engine.NullNavSysConfig
// 0x0000 (0x0050 - 0x0050)
class UNullNavSysConfig : public UNavigationSystemConfig
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NullNavSysConfig")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NullNavSysConfig")
	}
	static class UNullNavSysConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNullNavSysConfig>();
	}
};

// Class Engine.NavLinkDefinition
// 0x0028 (0x0050 - 0x0028)
class UNavLinkDefinition : public UObject
{
public:
	TArray<struct FNavigationLink>                Links;                                             // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNavigationSegmentLink>         SegmentLinks;                                      // 0x0038(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_48[0x8];                                       // 0x0048(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavLinkDefinition")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavLinkDefinition")
	}
	static class UNavLinkDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLinkDefinition>();
	}
};

// Class Engine.NavPathObserverInterface
// 0x0000 (0x0000 - 0x0000)
class INavPathObserverInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NavPathObserverInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NavPathObserverInterface")
	}
	static class INavPathObserverInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<INavPathObserverInterface>();
	}
};

// Class Engine.SimulatedClientNetConnection
// 0x0000 (0x1D88 - 0x1D88)
class USimulatedClientNetConnection : public UNetConnection
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("SimulatedClientNetConnection")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"SimulatedClientNetConnection")
	}
	static class USimulatedClientNetConnection* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimulatedClientNetConnection>();
	}
};

// Class Engine.NetworkSettings
// 0x0020 (0x0058 - 0x0038)
class UNetworkSettings : public UDeveloperSettings
{
public:
	uint8                                         bVerifyPeer : 1;                                   // 0x0038(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableMultiplayerWorldOriginRebasing : 1;         // 0x0038(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxRepArraySize;                                   // 0x003C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxRepArrayMemory;                                 // 0x0040(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FNetworkEmulationProfileDescription> NetworkEmulationProfiles;                     // 0x0048(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NetworkSettings")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NetworkSettings")
	}
	static class UNetworkSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetworkSettings>();
	}
};

// Class Engine.NodeMappingContainer
// 0x0140 (0x0168 - 0x0028)
class UNodeMappingContainer : public UObject
{
public:
	TMap<class FName, struct FNodeItem>           SourceItems;                                       // 0x0028(0x0050)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FNodeItem>           TargetItems;                                       // 0x0078(0x0050)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TMap<class FName, class FName>                SourceToTarget;                                    // 0x00C8(0x0050)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UObject>                 SourceAsset;                                       // 0x0118(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UObject>                 TargetAsset;                                       // 0x0140(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NodeMappingContainer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NodeMappingContainer")
	}
	static class UNodeMappingContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNodeMappingContainer>();
	}
};

// Class Engine.NodeMappingProviderInterface
// 0x0000 (0x0000 - 0x0000)
class INodeMappingProviderInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NodeMappingProviderInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NodeMappingProviderInterface")
	}
	static class INodeMappingProviderInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<INodeMappingProviderInterface>();
	}
};

// Class Engine.Note
// 0x0000 (0x0370 - 0x0370)
class ANote : public AActor
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("Note")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"Note")
	}
	static class ANote* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANote>();
	}
};

// Class Engine.TetLightDataMap
// 0x0050 (0x0078 - 0x0028)
class UTetLightDataMap : public UObject
{
public:
	TMap<struct FIntVector, TSoftObjectPtr<class UTetLightData>> DataMap;                            // 0x0028(0x0050)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("TetLightDataMap")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"TetLightDataMap")
	}
	static class UTetLightDataMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTetLightDataMap>();
	}
};

// Class Engine.NZSkyBoxComponent
// 0x9570 (0x97C0 - 0x0250)
class UNZSkyBoxComponent : public USceneComponent
{
public:
	EControllMode                                 ControllMode;                                      // 0x0250(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOutsideSkyBox;                                    // 0x0251(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOldSetting;                                       // 0x0252(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUse24HLerpedSH;                                   // 0x0253(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseFarGI;                                         // 0x0254(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFarGIBakeAtf;                                     // 0x0255(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_256[0x2];                                      // 0x0256(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureCube*                           OverrideCube;                                      // 0x0258(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_260[0x8];                                      // 0x0260(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TestStr;                                           // 0x0268(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTOD_Time                              TodTime;                                           // 0x0278(0x0004)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTOD_SkylightCompensate                SkylightCompensate;                                // 0x027C(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_284[0x4];                                      // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTOD_GiAdjust                          GiAdjust;                                          // 0x0288(0x0090)(Edit, NativeAccessSpecifierPublic)
	struct FTOD_AtmosphereParameters              Atmosphere;                                        // 0x0318(0x0A70)(Edit, NativeAccessSpecifierPublic)
	struct FTOD_WeatherActors                     WeatherActors;                                     // 0x0D88(0x0180)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FTOD_DayParameters                     Day;                                               // 0x0F08(0x3088)(Edit, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F90[0x10];                                    // 0x3F90(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTOD_Animation                         TodAnimation;                                      // 0x3FA0(0x0030)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FTOD_Sun                               TodSunParams;                                      // 0x3FD0(0x0034)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4004[0x26EC];                                  // 0x4004(0x26EC)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTOD_Exposure                          TodExposure;                                       // 0x66F0(0x1E48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTOD_Actors                            TodActors;                                         // 0x8538(0x0028)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FTOD_Textures                          TodTextures;                                       // 0x8560(0x0028)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UGI2DData*                              GI2DData;                                          // 0x8588(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8590[0x40];                                    // 0x8590(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTOD_SphericHarmonics                  Tod_ShContext;                                     // 0x85D0(0x0040)(Edit, NativeAccessSpecifierPublic)
	struct FTOD_Reflections                       Tod_ReflContext;                                   // 0x8610(0x00E0)(Edit, NativeAccessSpecifierPublic)
	class UTextureCube*                           CachedCube;                                        // 0x86F0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_86F8[0x104];                                   // 0x86F8(0x0104)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTOD_CycleParameters                   Cycle;                                             // 0x87FC(0x0024)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          IsTextureVolumeCloud;                              // 0x8820(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ProbeUpdateDirty;                                  // 0x8821(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8822[0x6];                                     // 0x8822(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTOD_AdditionalPRTMap                  Tod_AdditionalMap;                                 // 0x8828(0x0388)(Edit, NativeAccessSpecifierPublic)
	float                                         MinOffset;                                         // 0x8BB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxOffset;                                         // 0x8BB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LightmapScale;                                     // 0x8BB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8BBC[0x2C];                                    // 0x8BBC(0x002C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTetLightSetting                       TetLightSetting;                                   // 0x8BE8(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_8BF4[0x4];                                     // 0x8BF4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTetLightDataMap*                       TetLightMap;                                       // 0x8BF8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8C00[0x58];                                    // 0x8C00(0x0058)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TODIndex;                                          // 0x8C58(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8C5C[0x419];                                   // 0x8C5C(0x0419)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          SequenceBakeKey;                                   // 0x9075(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9076[0x2];                                     // 0x9076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SkylightLoadPath;                                  // 0x9078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Interp, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9088[0x738];                                   // 0x9088(0x0738)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool DetectInteriorVolumeGap(float GapSizeToDetect, float GapSizeAllowed);
	bool GetIsInExposureVolume();
	void SetFastForward(const struct FVector& pos, float AcTime);
	void SetFixedCameraStatus(bool bFixed);

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("NZSkyBoxComponent")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"NZSkyBoxComponent")
	}
	static class UNZSkyBoxComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNZSkyBoxComponent>();
	}
};

// Class Engine.ObjectLibrary
// 0x0080 (0x00A8 - 0x0028)
class UObjectLibrary : public UObject
{
public:
	class UClass*                                 ObjectBaseClass;                                   // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHasBlueprintClasses;                              // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        Objects;                                           // 0x0038(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class UObject>>         WeakObjects;                                       // 0x0048(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                          bUseWeakReferences;                                // 0x0058(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bIsFullyLoaded;                                    // 0x0059(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5A[0x4E];                                      // 0x005A(0x004E)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ObjectLibrary")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ObjectLibrary")
	}
	static class UObjectLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectLibrary>();
	}
};

// Class Engine.ObjectPoolableInterface
// 0x0000 (0x0000 - 0x0000)
class IObjectPoolableInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ObjectPoolableInterface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ObjectPoolableInterface")
	}
	static class IObjectPoolableInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IObjectPoolableInterface>();
	}
};

// Class Engine.ObjectReferencer
// 0x0010 (0x0038 - 0x0028)
class UObjectReferencer : public UObject
{
public:
	TArray<class UObject*>                        ReferencedObjects;                                 // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ObjectReferencer")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ObjectReferencer")
	}
	static class UObjectReferencer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectReferencer>();
	}
};

// Class Engine.ParticleEventManager
// 0x0000 (0x0370 - 0x0370)
class AParticleEventManager : public AActor
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleEventManager")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleEventManager")
	}
	static class AParticleEventManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AParticleEventManager>();
	}
};

// Class Engine.ParticleLODLevel
// 0x0090 (0x00B8 - 0x0028)
class UParticleLODLevel : public UObject
{
public:
	int32                                         Level;                                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bEnabled : 1;                                      // 0x002C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleModuleRequired*                RequiredModule;                                    // 0x0030(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleModule*>                Modules;                                           // 0x0038(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UParticleModuleTypeDataBase*            TypeDataModule;                                    // 0x0048(0x0008)(ExportObject, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleModuleSpawn*                   SpawnModule;                                       // 0x0050(0x0008)(ExportObject, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleModuleEventGenerator*          EventGenerator;                                    // 0x0058(0x0008)(ExportObject, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleModuleSpawnBase*>       SpawningModules;                                   // 0x0060(0x0010)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class UParticleModule*>                SpawnModules;                                      // 0x0070(0x0010)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class UParticleModule*>                UpdateModules;                                     // 0x0080(0x0010)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class UParticleModuleOrbit*>           OrbitModules;                                      // 0x0090(0x0010)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	TArray<class UParticleModuleEventReceiverBase*> EventReceiverModules;                            // 0x00A0(0x0010)(ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	uint8                                         ConvertedModules : 1;                              // 0x00B0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PeakActiveParticles;                               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleLODLevel")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleLODLevel")
	}
	static class UParticleLODLevel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleLODLevel>();
	}
};

// Class Engine.ParticleModuleAcceleration
// 0x0050 (0x0088 - 0x0038)
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase
{
public:
	struct FRawDistributionVector                 Acceleration;                                      // 0x0038(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bApplyOwnerScale : 1;                              // 0x0080(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleAcceleration")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleAcceleration")
	}
	static class UParticleModuleAcceleration* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleAcceleration>();
	}
};

// Class Engine.ParticleModuleAccelerationDragScaleOverLife
// 0x0038 (0x0070 - 0x0038)
class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase
{
public:
	class UDistributionFloat*                     DragScale;                                         // 0x0038(0x0008)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  DragScaleRaw;                                      // 0x0040(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleAccelerationDragScaleOverLife")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleAccelerationDragScaleOverLife")
	}
	static class UParticleModuleAccelerationDragScaleOverLife* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleAccelerationDragScaleOverLife>();
	}
};

// Class Engine.ParticleModuleAttractorLine
// 0x0078 (0x00A8 - 0x0030)
class UParticleModuleAttractorLine : public UParticleModuleAttractorBase
{
public:
	struct FVector                                EndPoint0;                                         // 0x0030(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                EndPoint1;                                         // 0x003C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  Range;                                             // 0x0048(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  Strength;                                          // 0x0078(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleAttractorLine")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleAttractorLine")
	}
	static class UParticleModuleAttractorLine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleAttractorLine>();
	}
};

// Class Engine.ParticleModuleAttractorParticle
// 0x0080 (0x00B0 - 0x0030)
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
public:
	class FName                                   EmitterName;                                       // 0x0030(0x0008)(Edit, ExportObject, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  Range;                                             // 0x0038(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bStrengthByDistance : 1;                           // 0x0068(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionFloat                  Strength;                                          // 0x0070(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bAffectBaseVelocity : 1;                           // 0x00A0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EAttractorParticleSelectionMethod             SelectionMethod;                                   // 0x00A4(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bRenewSource : 1;                                  // 0x00A8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bInheritSourceVel : 1;                             // 0x00A8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LastSelIndex;                                      // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleAttractorParticle")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleAttractorParticle")
	}
	static class UParticleModuleAttractorParticle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleAttractorParticle>();
	}
};

// Class Engine.ParticleModuleBeamModifier
// 0x00D8 (0x0108 - 0x0030)
class UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
public:
	EBeamModifierType                             ModifierType;                                      // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBeamModifierOptions                   PositionOptions;                                   // 0x0034(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRawDistributionVector                 Position;                                          // 0x0038(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FBeamModifierOptions                   TangentOptions;                                    // 0x0080(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionVector                 Tangent;                                           // 0x0088(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bAbsoluteTangent : 1;                              // 0x00D0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBeamModifierOptions                   StrengthOptions;                                   // 0x00D4(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  Strength;                                          // 0x00D8(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleBeamModifier")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleBeamModifier")
	}
	static class UParticleModuleBeamModifier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleBeamModifier>();
	}
};

// Class Engine.ParticleModuleBeamSource
// 0x00E8 (0x0118 - 0x0030)
class UParticleModuleBeamSource : public UParticleModuleBeamBase
{
public:
	EBeam2SourceTargetMethod                      SourceMethod;                                      // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SourceName;                                        // 0x0034(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bSourceAbsolute : 1;                               // 0x003C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionVector                 Source;                                            // 0x0040(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bLockSource : 1;                                   // 0x0088(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EBeam2SourceTargetTangentMethod               SourceTangentMethod;                               // 0x008C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionVector                 SourceTangent;                                     // 0x0090(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bLockSourceTangent : 1;                            // 0x00D8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionFloat                  SourceStrength;                                    // 0x00E0(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bLockSourceStength : 1;                            // 0x0110(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleBeamSource")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleBeamSource")
	}
	static class UParticleModuleBeamSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleBeamSource>();
	}
};

// Class Engine.ParticleModuleBeamTarget
// 0x00F0 (0x0120 - 0x0030)
class UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
public:
	EBeam2SourceTargetMethod                      TargetMethod;                                      // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TargetName;                                        // 0x0034(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionVector                 Target;                                            // 0x0040(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bTargetAbsolute : 1;                               // 0x0088(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bLockTarget : 1;                                   // 0x0088(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	EBeam2SourceTargetTangentMethod               TargetTangentMethod;                               // 0x008C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionVector                 TargetTangent;                                     // 0x0090(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bLockTargetTangent : 1;                            // 0x00D8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionFloat                  TargetStrength;                                    // 0x00E0(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bLockTargetStength : 1;                            // 0x0110(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LockRadius;                                        // 0x0114(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_118[0x8];                                      // 0x0118(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleBeamTarget")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleBeamTarget")
	}
	static class UParticleModuleBeamTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleBeamTarget>();
	}
};

// Class Engine.ParticleModuleCollision
// 0x0170 (0x01A0 - 0x0030)
class UParticleModuleCollision : public UParticleModuleCollisionBase
{
public:
	struct FRawDistributionVector                 DampingFactor;                                     // 0x0030(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionVector                 DampingFactorRotation;                             // 0x0078(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  MaxCollisions;                                     // 0x00C0(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	EParticleCollisionComplete                    CollisionCompletionOption;                         // 0x00F0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      CollisionTypes;                                    // 0x00F8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bUseCollisionChannel;                              // 0x0108(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseCollisionCache;                                // 0x0109(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10A[0x2];                                      // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CacheCollisionExtend;                              // 0x010C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionChannel                             CollisionChannel;                                  // 0x0118(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_119[0xB];                                      // 0x0119(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bApplyPhysics : 1;                                 // 0x0124(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIgnoreTriggerVolumes : 1;                         // 0x0124(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_125[0x3];                                      // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionFloat                  ParticleMass;                                      // 0x0128(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                         DirScalar;                                         // 0x0158(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bPawnsDoNotDecrementCount : 1;                     // 0x015C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOnlyVerticalNormalsDecrementCount : 1;            // 0x015C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_15D[0x3];                                      // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         VerticalFudgeFactor;                               // 0x0160(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionFloat                  DelayAmount;                                       // 0x0168(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bDropDetail : 1;                                   // 0x0198(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCollideOnlyIfVisible : 1;                         // 0x0198(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIgnoreSourceActor : 1;                            // 0x0198(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_199[0x3];                                      // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxCollisionDistance;                              // 0x019C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleCollision")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleCollision")
	}
	static class UParticleModuleCollision* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleCollision>();
	}
};

// Class Engine.ParticleModuleColorOverLife
// 0x0080 (0x00B0 - 0x0030)
class UParticleModuleColorOverLife : public UParticleModuleColorBase
{
public:
	struct FRawDistributionVector                 ColorOverLife;                                     // 0x0030(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  AlphaOverLife;                                     // 0x0078(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bClampAlpha : 1;                                   // 0x00A8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleColorOverLife")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleColorOverLife")
	}
	static class UParticleModuleColorOverLife* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleColorOverLife>();
	}
};

// Class Engine.ParticleModuleEventGenerator
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleEventGenerator : public UParticleModuleEventBase
{
public:
	TArray<struct FParticleEvent_GenerateInfo>    Events;                                            // 0x0030(0x0010)(Edit, ExportObject, ZeroConstructor, NoClear, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleEventGenerator")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleEventGenerator")
	}
	static class UParticleModuleEventGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleEventGenerator>();
	}
};

// Class Engine.ParticleModuleEventReceiverSpawn
// 0x0098 (0x00D8 - 0x0040)
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
public:
	struct FRawDistributionFloat                  SpawnCount;                                        // 0x0040(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bUseParticleTime : 1;                              // 0x0070(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUsePSysLocation : 1;                              // 0x0070(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bInheritVelocity : 1;                              // 0x0070(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRawDistributionVector                 InheritVelocityScale;                              // 0x0078(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UPhysicalMaterial*>              PhysicalMaterials;                                 // 0x00C0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bBanPhysicalMaterials : 1;                         // 0x00D0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleEventReceiverSpawn")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleEventReceiverSpawn")
	}
	static class UParticleModuleEventReceiverSpawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleEventReceiverSpawn>();
	}
};

// Class Engine.ParticleModuleEventSendToGame
// 0x0000 (0x0028 - 0x0028)
class UParticleModuleEventSendToGame : public UObject
{
public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleEventSendToGame")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleEventSendToGame")
	}
	static class UParticleModuleEventSendToGame* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleEventSendToGame>();
	}
};

// Class Engine.ParticleModuleKillHeight
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleKillHeight : public UParticleModuleKillBase
{
public:
	struct FRawDistributionFloat                  Height;                                            // 0x0030(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bAbsolute : 1;                                     // 0x0060(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFloor : 1;                                        // 0x0060(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bApplyPSysScale : 1;                               // 0x0060(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleKillHeight")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleKillHeight")
	}
	static class UParticleModuleKillHeight* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleKillHeight>();
	}
};

// Class Engine.ParticleModuleLocation_Seeded
// 0x0020 (0x00A0 - 0x0080)
class UParticleModuleLocation_Seeded : public UParticleModuleLocation
{
public:
	struct FParticleRandomSeedInfo                RandomSeedInfo;                                    // 0x0080(0x0020)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLocation_Seeded")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLocation_Seeded")
	}
	static class UParticleModuleLocation_Seeded* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLocation_Seeded>();
	}
};

// Class Engine.ParticleModuleLocationEmitter
// 0x0020 (0x0050 - 0x0030)
class UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
public:
	class FName                                   EmitterName;                                       // 0x0030(0x0008)(Edit, ExportObject, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELocationEmitterSelectionMethod               SelectionMethod;                                   // 0x0038(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         InheritSourceVelocity : 1;                         // 0x003C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InheritSourceVelocityScale;                        // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bInheritSourceRotation : 1;                        // 0x0044(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InheritSourceRotationScale;                        // 0x0048(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLocationEmitter")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLocationEmitter")
	}
	static class UParticleModuleLocationEmitter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLocationEmitter>();
	}
};

// Class Engine.ParticleModuleLocationEmitterDirect
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase
{
public:
	class FName                                   EmitterName;                                       // 0x0030(0x0008)(Edit, ExportObject, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLocationEmitterDirect")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLocationEmitterDirect")
	}
	static class UParticleModuleLocationEmitterDirect* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLocationEmitterDirect>();
	}
};

// Class Engine.ParticleModuleLocationPrimitiveCylinder_Seeded
// 0x0020 (0x0140 - 0x0120)
class UParticleModuleLocationPrimitiveCylinder_Seeded : public UParticleModuleLocationPrimitiveCylinder
{
public:
	struct FParticleRandomSeedInfo                RandomSeedInfo;                                    // 0x0120(0x0020)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLocationPrimitiveCylinder_Seeded")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLocationPrimitiveCylinder_Seeded")
	}
	static class UParticleModuleLocationPrimitiveCylinder_Seeded* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLocationPrimitiveCylinder_Seeded>();
	}
};

// Class Engine.ParticleModuleLocationPrimitiveTriangle
// 0x00D8 (0x0108 - 0x0030)
class UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase
{
public:
	struct FRawDistributionVector                 StartOffset;                                       // 0x0030(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  Height;                                            // 0x0078(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  Angle;                                             // 0x00A8(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  Thickness;                                         // 0x00D8(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLocationPrimitiveTriangle")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLocationPrimitiveTriangle")
	}
	static class UParticleModuleLocationPrimitiveTriangle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLocationPrimitiveTriangle>();
	}
};

// Class Engine.ParticleModuleLocationSkelVertSurface
// 0x0060 (0x0090 - 0x0030)
class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
public:
	ELocationSkelVertSurfaceSource                SourceType;                                        // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                UniversalOffset;                                   // 0x0034(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUpdatePositionEachFrame : 1;                      // 0x0040(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOrientMeshEmitters : 1;                           // 0x0040(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bInheritBoneVelocity : 1;                          // 0x0040(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InheritVelocityScale;                              // 0x0044(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SkelMeshActorParamName;                            // 0x0048(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ValidAssociatedBones;                              // 0x0050(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bEnforceNormalCheck : 1;                           // 0x0060(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                NormalToCompare;                                   // 0x0064(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NormalCheckToleranceDegrees;                       // 0x0070(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NormalCheckTolerance;                              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 ValidMaterialIndices;                              // 0x0078(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bInheritVertexColor : 1;                           // 0x0088(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bInheritUV : 1;                                    // 0x0088(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        InheritUVChannel;                                  // 0x008C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleLocationSkelVertSurface")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleLocationSkelVertSurface")
	}
	static class UParticleModuleLocationSkelVertSurface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleLocationSkelVertSurface>();
	}
};

// Class Engine.ParticleModuleMeshMaterial
// 0x0010 (0x0040 - 0x0030)
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase
{
public:
	TArray<class UMaterialInterface*>             MeshMaterials;                                     // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleMeshMaterial")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleMeshMaterial")
	}
	static class UParticleModuleMeshMaterial* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleMeshMaterial>();
	}
};

// Class Engine.ParticleModuleMeshRotationRateMultiplyLife
// 0x0048 (0x0078 - 0x0030)
class UParticleModuleMeshRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	struct FRawDistributionVector                 LifeMultiplier;                                    // 0x0030(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleMeshRotationRateMultiplyLife")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleMeshRotationRateMultiplyLife")
	}
	static class UParticleModuleMeshRotationRateMultiplyLife* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleMeshRotationRateMultiplyLife>();
	}
};

// Class Engine.ParticleModuleMeshRotationRateOverLife
// 0x0050 (0x0080 - 0x0030)
class UParticleModuleMeshRotationRateOverLife : public UParticleModuleRotationRateBase
{
public:
	struct FRawDistributionVector                 RotRate;                                           // 0x0030(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bScaleRotRate : 1;                                 // 0x0078(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleMeshRotationRateOverLife")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleMeshRotationRateOverLife")
	}
	static class UParticleModuleMeshRotationRateOverLife* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleMeshRotationRateOverLife>();
	}
};

// Class Engine.ParticleModuleOrientationAxisLock
// 0x0008 (0x0038 - 0x0030)
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase
{
public:
	EParticleAxisLock                             LockAxisFlags;                                     // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleOrientationAxisLock")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleOrientationAxisLock")
	}
	static class UParticleModuleOrientationAxisLock* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleOrientationAxisLock>();
	}
};

// Class Engine.ParticleModuleParameterDynamic_Seeded
// 0x0020 (0x0068 - 0x0048)
class UParticleModuleParameterDynamic_Seeded : public UParticleModuleParameterDynamic
{
public:
	struct FParticleRandomSeedInfo                RandomSeedInfo;                                    // 0x0048(0x0020)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleParameterDynamic_Seeded")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleParameterDynamic_Seeded")
	}
	static class UParticleModuleParameterDynamic_Seeded* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleParameterDynamic_Seeded>();
	}
};

// Class Engine.ParticleModulePivotOffset
// 0x0008 (0x0038 - 0x0030)
class UParticleModulePivotOffset : public UParticleModuleLocationBase
{
public:
	struct FVector2D                              PivotOffset;                                       // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModulePivotOffset")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModulePivotOffset")
	}
	static class UParticleModulePivotOffset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModulePivotOffset>();
	}
};

// Class Engine.ParticleModuleRequired
// 0x0110 (0x0140 - 0x0030)
class UParticleModuleRequired : public UParticleModule
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinFacingCameraBlendDistance;                      // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxFacingCameraBlendDistance;                      // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                EmitterOrigin;                                     // 0x0040(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               EmitterRotation;                                   // 0x004C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	EParticleScreenAlignment                      ScreenAlignment;                                   // 0x0058(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseInLocalSpace : 1;                              // 0x0059(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BitPad_59_1 : 1;                                   // 0x0059(0x0001)(Fixing Bit-Field Size Between Bits [ Dumper-7 ])
	uint8                                         bUseFPPCamera : 1;                                 // 0x0059(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bKillOnDeactivate : 1;                             // 0x0059(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bKillOnCompleted : 1;                              // 0x0059(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	EParticleSortMode                             SortMode;                                          // 0x005A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bUseLegacyEmitterTime : 1;                         // 0x005B(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bRemoveHMDRoll : 1;                                // 0x005B(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEmitterDurationUseRange : 1;                      // 0x005B(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	float                                         EmitterDuration;                                   // 0x005C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRawDistributionFloat                  SpawnRate;                                         // 0x0060(0x0030)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FParticleBurst>                 BurstList;                                         // 0x0090(0x0010)(ExportObject, ZeroConstructor, NoClear, NativeAccessSpecifierPublic)
	float                                         EmitterDelay;                                      // 0x00A0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EmitterDelayLow;                                   // 0x00A4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDelayFirstLoopOnly : 1;                           // 0x00A8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	EParticleSubUVInterpMethod                    InterpolationMethod;                               // 0x00A9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bScaleUV : 1;                                      // 0x00AA(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEmitterDelayUseRange : 1;                         // 0x00AA(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	EParticleBurstMethod                          ParticleBurstMethod;                               // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bOverrideSystemMacroUV : 1;                        // 0x00AC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseMaxDrawCount : 1;                              // 0x00AC(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	EOpacitySourceMode                            OpacitySourceMode;                                 // 0x00AD(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEmitterNormalsMode                           EmitterNormalsMode;                                // 0x00AE(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bOrbitModuleAffectsVelocityAlignment : 1;          // 0x00AF(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	int32                                         SubImages_Horizontal;                              // 0x00B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SubImages_Vertical;                                // 0x00B4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RandomImageTime;                                   // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RandomImageChanges;                                // 0x00BC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                MacroUVPosition;                                   // 0x00C0(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MacroUVRadius;                                     // 0x00CC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EParticleUVFlipMode                           UVFlippingMode;                                    // 0x00D0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESubUVBoundingVertexCount                     BoundingMode;                                      // 0x00D1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDurationRecalcEachLoop : 1;                       // 0x00D2(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_D3[0x1];                                       // 0x00D3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                NormalsSphereCenter;                               // 0x00D4(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AlphaThreshold;                                    // 0x00E0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EmitterLoops;                                      // 0x00E4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             CutoutTexture;                                     // 0x00E8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxDrawCount;                                      // 0x00F0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EmitterDurationLow;                                // 0x00F4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                NormalsCylinderDirection;                          // 0x00F8(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           NamedMaterialOverrides;                            // 0x0108(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_118[0x28];                                     // 0x0118(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleRequired")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleRequired")
	}
	static class UParticleModuleRequired* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleRequired>();
	}
};

// Class Engine.ParticleModuleRotationOverLifetime
// 0x0038 (0x0068 - 0x0030)
class UParticleModuleRotationOverLifetime : public UParticleModuleRotationBase
{
public:
	struct FRawDistributionFloat                  RotationOverLife;                                  // 0x0030(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Scale : 1;                                         // 0x0060(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleRotationOverLifetime")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleRotationOverLifetime")
	}
	static class UParticleModuleRotationOverLifetime* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleRotationOverLifetime>();
	}
};

// Class Engine.ParticleModuleRotationRate
// 0x0030 (0x0060 - 0x0030)
class UParticleModuleRotationRate : public UParticleModuleRotationRateBase
{
public:
	struct FRawDistributionFloat                  StartRotationRate;                                 // 0x0030(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleRotationRate")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleRotationRate")
	}
	static class UParticleModuleRotationRate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleRotationRate>();
	}
};

// Class Engine.ParticleModuleRotationRate_Seeded
// 0x0020 (0x0080 - 0x0060)
class UParticleModuleRotationRate_Seeded : public UParticleModuleRotationRate
{
public:
	struct FParticleRandomSeedInfo                RandomSeedInfo;                                    // 0x0060(0x0020)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleRotationRate_Seeded")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleRotationRate_Seeded")
	}
	static class UParticleModuleRotationRate_Seeded* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleRotationRate_Seeded>();
	}
};

// Class Engine.ParticleModuleRotationRateMultiplyLife
// 0x0030 (0x0060 - 0x0030)
class UParticleModuleRotationRateMultiplyLife : public UParticleModuleRotationRateBase
{
public:
	struct FRawDistributionFloat                  LifeMultiplier;                                    // 0x0030(0x0030)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleRotationRateMultiplyLife")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleRotationRateMultiplyLife")
	}
	static class UParticleModuleRotationRateMultiplyLife* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleRotationRateMultiplyLife>();
	}
};

// Class Engine.ParticleModuleSizeMultiplyLife
// 0x0050 (0x0080 - 0x0030)
class UParticleModuleSizeMultiplyLife : public UParticleModuleSizeBase
{
public:
	struct FRawDistributionVector                 LifeMultiplier;                                    // 0x0030(0x0048)(Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         MultiplyX : 1;                                     // 0x0078(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         MultiplyY : 1;                                     // 0x0078(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         MultiplyZ : 1;                                     // 0x0078(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		STATIC_CLASS_IMPL("ParticleModuleSizeMultiplyLife")
	}
	static const class FName& StaticName()
	{
		STATIC_NAME_IMPL(L"ParticleModuleSizeMultiplyLife")
	}
	static class UParticleModuleSizeMultiplyLife* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleModuleSizeMultiplyLife>();
	}
};
