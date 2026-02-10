

// enum_SDK  Goto https://github.com/xkp95175333/SDKFULLname_ForFindTypeBone/blob/master/Delta_struct/enum_SDK.h

namespace NewSDKOffset

{

	//Script/Engine.OnlineSession
	// Size: 0x28
	class UOnlineSession final : public UObject {
	public:
		// No properties
	};

	//Script/OnlineSubsystemUtils.OnlineSessionClient
	// Size: 0x1e0
	class UOnlineSessionClient final : public UOnlineSession {
	public:
		uint8_t UnknownData_723[0x1b0]; // 0x28 (0x1b0)
		bool bIsFromInvite; // 0x1d8 (0x1)
		bool bHandlingDisconnect; // 0x1d9 (0x1)
		uint8_t UnknownData_724[0x6]; // 0x1da (0x6)
	};
	//Script/Engine.GameInstance
	// Size: 0x1a0
	class UGameInstance final : public UObject {
	public:
		uint8_t UnknownData_8[0x10]; // 0x28 (0x10)
		TArray<class ULocalPlayer*> LocalPlayers; // 0x38 (0x10)
		class UOnlineSession* OnlineSession; // 0x48 (0x8)
		TArray<class UObject*> ReferencedObjects; // 0x50 (0x10)
		uint8_t UnknownData_9[0x140]; // 0x60 (0x140)

		// Functions
		void UGameInstance::DebugCreatePlayer(int32_t& ControllerId); // 0xed5bb80
		void UGameInstance::DebugRemovePlayer(int32_t& ControllerId); // 0xaf18410
		void UGameInstance::HandleNetworkError(uint8_t& FailureType, bool& bIsServer); // 0xcc51c80
		void UGameInstance::HandleTravelError(uint8_t& FailureType); // 0xcc51c80
		void UGameInstance::ReceiveInit(); // 0xcc51c80
		void UGameInstance::ReceiveShutdown(); // 0xcc51c80
	};

	//Script/Engine.Actor
	// Size: 0x370
	class AActor final : public UObject {
	public:
		struct FActorTickFunction PrimaryActorTick; // 0x28 (0x68)
		bool bHidden; // 0x90 (0x1)
		bool bEnableNetActive; // 0x90 (0x1)
		bool bNetActive; // 0x90 (0x1)
		bool bNetTemporary; // 0x90 (0x1)
		bool bNetStartup; // 0x90 (0x1)
		bool bOnlyRelevantToOwner; // 0x90 (0x1)
		bool bAlwaysRelevant; // 0x90 (0x1)
		bool bReplicateMovement; // 0x90 (0x1)
		bool bShouldCallPreReplication; // 0x91 (0x1)
		bool bTearOff; // 0x91 (0x1)
		bool bExchangedRoles; // 0x91 (0x1)
		bool bNetLoadOnClient; // 0x91 (0x1)
		bool bNetUseOwnerRelevancy; // 0x91 (0x1)
		bool bRelevantForNetworkReplays; // 0x91 (0x1)
		bool bRelevantForLevelBounds; // 0x91 (0x1)
		bool bReplayRewindable; // 0x92 (0x1)
		bool bAllowTickBeforeBeginPlay; // 0x92 (0x1)
		bool bAllowBluePrintTick; // 0x92 (0x1)
		bool bAutoDestroyWhenFinished; // 0x92 (0x1)
		bool bBlockInput; // 0x92 (0x1)
		bool bCanBeDamaged; // 0x92 (0x1)
		bool bCollideWhenPlacing; // 0x92 (0x1)
		bool bFindCameraComponentWhenViewTarget; // 0x92 (0x1)
		bool bGenerateOverlapEventsDuringLevelStreaming; // 0x93 (0x1)
		bool bIgnoresOriginShifting; // 0x93 (0x1)
		bool bEnableAutoLODGeneration; // 0x93 (0x1)
		bool bIsEditorOnlyActor; // 0x93 (0x1)
		bool bActorSeamlessTraveled; // 0x93 (0x1)
		bool bReplicates; // 0x93 (0x1)
		bool bCanBeInCluster; // 0x93 (0x1)
		bool bAllowReceiveTickEventOnDedicatedServer; // 0x93 (0x1)
		uint8_t UnknownData_1c[0x1]; // 0x94 (0x1)
		bool bActorEnableCollision; // 0x95 (0x1)
		bool bActorIsBeingDestroyed; // 0x95 (0x1)
		EEActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x96 (0x1)
		EEActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x97 (0x1)
		uint8_t RemoteRole; // 0x98 (0x1)
		uint8_t UnknownData_1d[0x3]; // 0x99 (0x3)
		struct FRepMovement ReplicatedMovement; // 0x9c (0x38)
		float InitialLifeSpan; // 0xd4 (0x4)
		float CustomTimeDilation; // 0xd8 (0x4)
		uint8_t UnknownData_1e[0x4]; // 0xdc (0x4)
		struct FRepAttachment AttachmentReplication; // 0xe0 (0x40)
		class AActor* Owner; // 0x120 (0x8)
		FName NetDriverName; // 0x128 (0x8)
		uint8_t Role; // 0x130 (0x1)
		uint8_t NetDormancy; // 0x131 (0x1)
		EESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x132 (0x1)
		uint8_t AutoReceiveInput; // 0x133 (0x1)
		int32_t InputPriority; // 0x134 (0x4)
		class UInputComponent* InputComponent; // 0x138 (0x8)
		float NetCullDistanceSquared; // 0x140 (0x4)
		float NetCullDistanceSquared_HD; // 0x144 (0x4)
		float NetCullDistanceSquared_M; // 0x148 (0x4)
		int32_t NetTag; // 0x14c (0x4)
		float NetUpdateFrequency; // 0x150 (0x4)
		float MinNetUpdateFrequency; // 0x154 (0x4)
		float NetPriority; // 0x158 (0x4)
		uint8_t UnknownData_1f[0xc]; // 0x15c (0xc)
		class APawn* Instigator; // 0x168 (0x8)
		TArray<class AActor*> Children; // 0x170 (0x10)
		EncryptedObjectProperty RootComponent; // 0x180 (0x8)
		TArray<class AMatineeActor*> ControllingMatineeActors; // 0x188 (0x10)
		uint8_t UnknownData_20[0x8]; // 0x198 (0x8)
		TArray<FName> Layers; // 0x1a0 (0x10)
		TWeakObjectPtr<class UChildActorComponent> ParentComponent; // 0x1b0 (0x8)
		TArray<FName> Tags; // 0x1b8 (0x10)
		FDelegate OnTakeAnyDamage; // 0x1c8 (0x1)
		FDelegate OnTakePointDamage; // 0x1c9 (0x1)
		FDelegate OnTakeRadialDamage; // 0x1ca (0x1)
		FDelegate OnActorBeginOverlap; // 0x1cb (0x1)
		FDelegate OnActorEndOverlap; // 0x1cc (0x1)
		FDelegate OnBeginCursorOver; // 0x1cd (0x1)
		FDelegate OnEndCursorOver; // 0x1ce (0x1)
		FDelegate OnClicked; // 0x1cf (0x1)
		FDelegate OnReleased; // 0x1d0 (0x1)
		FDelegate OnInputTouchBegin; // 0x1d1 (0x1)
		FDelegate OnInputTouchEnd; // 0x1d2 (0x1)
		FDelegate OnInputTouchEnter; // 0x1d3 (0x1)
		FDelegate OnInputTouchLeave; // 0x1d4 (0x1)
		FDelegate OnActorHit; // 0x1d5 (0x1)
		uint8_t UnknownData_21[0x22]; // 0x1d6 (0x22)
		FDelegate OnDestroyed; // 0x1f8 (0x1)
		FDelegate OnEndPlay; // 0x1f9 (0x1)
		uint8_t UnknownData_22[0x76]; // 0x1fa (0x76)
		TArray<class UActorComponent*> InstanceComponents; // 0x270 (0x10)
		TArray<class UActorComponent*> BlueprintCreatedComponents; // 0x280 (0x10)
		uint8_t UnknownData_23[0xe0]; // 0x290 (0xe0)

		// Functions
		bool AActor::ActorHasTag(FName& Tag); // 0xecfa810
		class UActorComponent* AActor::AddComponent(FName& TemplateName, bool& bManualAttachment, const struct FTransform& RelativeTransform, const class UObject* ComponentTemplateContext); // 0xecfa8a0
		void AActor::AddTickPrerequisiteActor(class AActor* PrerequisiteActor); // 0xecfaa60
		void AActor::AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent); // 0xecfaaf0
		void AActor::DetachRootComponentFromParent(bool& bMaintainWorldPosition); // 0xecfab80
		void AActor::DisableInput(class APlayerController* PlayerController); // 0xfe9b70
		void AActor::EnableInput(class APlayerController* PlayerController); // 0xa568a50
		void AActor::FlushNetDormancy(); // 0xecfac10
		void AActor::ForceNetUpdate(); // 0xecfac30
		void AActor::GetActorBounds(bool& bOnlyCollidingComponents, struct FVector& Origin, struct FVector& BoxExtent); // 0xecfac50
		bool AActor::GetActorEnableCollision(); // 0xecfad80
		void AActor::GetActorEyesViewPoint(struct FVector& OutLocation, struct FRotator& OutRotation); // 0xecfadb0
		struct FVector AActor::GetActorForwardVector(); // 0xecfaea0
		struct FVector AActor::GetActorRelativeScale3D(); // 0xecfafe0
		struct FVector AActor::GetActorRightVector(); // 0xecfb020
		struct FVector AActor::GetActorScale3D(); // 0xecfb160
		float AActor::GetActorTickInterval(); // 0xecfb1a0
		float AActor::GetActorTimeDilation(); // 0xecfb1d0
		struct FVector AActor::GetActorUpVector(); // 0xecfb200
		void AActor::GetAllChildActors(TArray<class AActor*> ChildActors, bool& bIncludeDescendants); // 0xecfb340
		void AActor::GetAttachedActors(TArray<class AActor*> OutActors, bool& bResetArray); // 0xecfb4d0
		class AActor* AActor::GetAttachParentActor(); // 0xecfb460
		FName AActor::GetAttachParentSocketName(); // 0xecfb490
		class UActorComponent* AActor::GetComponentByClass(TSubclassOf<class UClass>& ComponentClass); // 0xecfb5f0
		TArray<class UActorComponent*> AActor::GetComponentsByInterface(TSubclassOf<class UClass>& Interface); // 0xecfb680
		TArray<class UActorComponent*> AActor::GetComponentsByTag(TSubclassOf<class UClass>& ComponentClass, FName& Tag); // 0xecfb760
		float AActor::GetDistanceTo(const class AActor* OtherActor); // 0xecfb870
		float AActor::GetDotProductTo(const class AActor* OtherActor); // 0xecfb910
		float AActor::GetGameTimeSinceCreation(); // 0xecfb9b0
		float AActor::GetHorizontalDistanceTo(const class AActor* OtherActor); // 0xecfb9e0
		float AActor::GetHorizontalDotProductTo(const class AActor* OtherActor); // 0xecfba80
		float AActor::GetInputAxisKeyValue(const struct FKey& InputAxisKey); // 0xecfbb20
		float AActor::GetInputAxisValue(const FName& InputAxisName); // 0xecfbc10
		struct FVector AActor::GetInputVectorAxisValue(const struct FKey& InputAxisKey); // 0xecfbcb0
		class APawn* AActor::GetInstigator(); // 0xecfbdb0
		class AController* AActor::GetInstigatorController(); // 0xecfbde0
		float AActor::GetLifeSpan(); // 0xa5a6700
		uint8_t AActor::GetLocalRole(); // 0xecfbe10
		void AActor::GetOverlappingActors(TArray<class AActor*> OverlappingActors, TSubclassOf<class UClass>& ClassFilter); // 0xecfbe30
		void AActor::GetOverlappingComponents(TArray<class UPrimitiveComponent*> OverlappingComponents); // 0xecfbf50
		class AActor* AActor::GetOwner(); // 0xa6cede0
		class AActor* AActor::GetParentActor(); // 0xecfc020
		class UChildActorComponent* AActor::GetParentComponent(); // 0xecfc050
		uint8_t AActor::GetRemoteRole(); // 0xecfc080
		float AActor::GetSquaredDistanceTo(const class AActor* OtherActor); // 0xecfc0a0
		bool AActor::GetTickableWhenPaused(); // 0xecfc140
		struct FTransform AActor::GetTransform(); // 0xecfc170
		struct FVector AActor::GetVelocity(); // 0xecfc1c0
		float AActor::GetVerticalDistanceTo(const class AActor* OtherActor); // 0xecfc200
		bool AActor::HasAuthority(); // 0xecfc2a0
		bool AActor::IsActorBeingDestroyed(); // 0xecfc2d0
		bool AActor::IsActorTickEnabled(); // 0xecfc300
		bool AActor::IsChildActor(); // 0xecfc330
		bool AActor::IsOverlappingActor(const class AActor* Other); // 0xecfc360
		void AActor::K2_AddActorLocalOffset(struct FVector& DeltaLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xecfc3f0
		void AActor::K2_AddActorLocalRotation(struct FRotator& DeltaRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xecfc590
		void AActor::K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xecfc730
		void AActor::K2_AddActorWorldOffset(struct FVector& DeltaLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xecfc930
		void AActor::K2_AddActorWorldRotation(struct FRotator& DeltaRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xecfcad0
		void AActor::K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xecfcc70
		void AActor::K2_AttachRootComponentTo(class USceneComponent* InParent, FName& InSocketName, uint8_t& AttachLocationType, bool& bWeldSimulatedBodies); // 0xecfce70
		void AActor::K2_AttachRootComponentToActor(class AActor* InParentActor, FName& InSocketName, uint8_t& AttachLocationType, bool& bWeldSimulatedBodies); // 0xecfcfc0
		void AActor::K2_AttachToActor(class AActor* ParentActor, FName& SocketName, EEAttachmentRule& LocationRule, EEAttachmentRule& RotationRule, EEAttachmentRule& ScaleRule, bool& bWeldSimulatedBodies); // 0xecfd110
		void AActor::K2_AttachToComponent(class USceneComponent* Parent, FName& SocketName, EEAttachmentRule& LocationRule, EEAttachmentRule& RotationRule, EEAttachmentRule& ScaleRule, bool& bWeldSimulatedBodies); // 0xecfd2d0
		void AActor::K2_DestroyActor(); // 0x7726190
		void AActor::K2_DestroyComponent(class UActorComponent* Component); // 0xecfd490
		void AActor::K2_DetachFromActor(EEDetachmentRule& LocationRule, EEDetachmentRule& RotationRule, EEDetachmentRule& ScaleRule); // 0xecfd510
		struct FVector AActor::K2_GetActorLocation(); // 0xecfd610
		struct FRotator AActor::K2_GetActorRotation(); // 0xecfd790
		TArray<class UActorComponent*> AActor::K2_GetComponentsByClass(TSubclassOf<class UClass>& ComponentClass); // 0xecfd910
		class USceneComponent* AActor::K2_GetRootComponent(); // 0xecfd9f0
		void AActor::K2_OnBecomeViewTarget(class APlayerController* PC); // 0xcc51c80
		void AActor::K2_OnEndViewTarget(class APlayerController* PC); // 0xcc51c80
		void AActor::K2_OnReset(); // 0xcc51c80
		bool AActor::K2_SetActorLocation(struct FVector& NewLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xecfdaf0
		bool AActor::K2_SetActorLocationAndRotation(struct FVector& NewLocation, struct FRotator& NewRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xecfdca0
		void AActor::K2_SetActorRelativeLocation(struct FVector& NewRelativeLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xecfdea0
		void AActor::K2_SetActorRelativeRotation(struct FRotator& NewRelativeRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xecfe040
		void AActor::K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xecfe1e0
		bool AActor::K2_SetActorRotation(struct FRotator& NewRotation, bool& bTeleportPhysics); // 0xecfe3e0
		bool AActor::K2_SetActorTransform(const struct FTransform& NewTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xecfe4c0
		bool AActor::K2_TeleportTo(struct FVector& DestLocation, struct FRotator& DestRotation); // 0xecfe6c0
		class UMaterialInstanceDynamic* AActor::MakeMIDForMaterial(class UMaterialInterface* Parent); // 0xecfe7b0
		void AActor::MakeNoise(float& Loudness, class APawn* NoiseInstigator, struct FVector& NoiseLocation, float& MaxRange, FName& Tag); // 0xecfe840
		void AActor::OnRep_AttachmentReplication(); // 0xb82bc0
		void AActor::OnRep_Instigator(); // 0x7655870
		void AActor::OnRep_NetActive(); // 0xb82d20
		void AActor::OnRep_Owner(); // 0xdd5570
		void AActor::OnRep_ReplicatedMovement(); // 0x2854b00
		void AActor::OnRep_ReplicateMovement(); // 0xb823c0
		void AActor::PrestreamTextures(float& Seconds, bool& bEnableStreaming, int32_t& CinematicTextureGroups); // 0xecfe9d0
		void AActor::ReceiveActorBeginCursorOver(); // 0xcc51c80
		void AActor::ReceiveActorBeginOverlap(class AActor* OtherActor); // 0xcc51c80
		void AActor::ReceiveActorEndCursorOver(); // 0xcc51c80
		void AActor::ReceiveActorEndOverlap(class AActor* OtherActor); // 0xcc51c80
		void AActor::ReceiveActorOnClicked(struct FKey& ButtonPressed); // 0xcc51c80
		void AActor::ReceiveActorOnInputTouchBegin(const uint8_t& FingerIndex); // 0xcc51c80
		void AActor::ReceiveActorOnInputTouchEnd(const uint8_t& FingerIndex); // 0xcc51c80
		void AActor::ReceiveActorOnInputTouchEnter(const uint8_t& FingerIndex); // 0xcc51c80
		void AActor::ReceiveActorOnInputTouchLeave(const uint8_t& FingerIndex); // 0xcc51c80
		void AActor::ReceiveActorOnReleased(struct FKey& ButtonReleased); // 0xcc51c80
		void AActor::ReceiveAnyDamage(float& Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser); // 0xcc51c80
		void AActor::ReceiveBeginPlay(); // 0xcc51c80
		void AActor::ReceiveDestroyed(); // 0xcc51c80
		void AActor::ReceiveEndPlay(uint8_t& EndPlayReason); // 0xcc51c80
		void AActor::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool& bSelfMoved, struct FVector& HitLocation, struct FVector& HitNormal, struct FVector& NormalImpulse, const struct FHitResult& Hit); // 0xcc51c80
		void AActor::ReceivePointDamage(float& Damage, const class UDamageType* DamageType, struct FVector& HitLocation, struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, FName& BoneName, struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo); // 0xcc51c80
		void AActor::ReceiveRadialDamage(float& DamageReceived, const class UDamageType* DamageType, struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser); // 0xcc51c80
		void AActor::ReceiveTick(float& DeltaSeconds); // 0xcc51c80
		void AActor::RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor); // 0xecfeae0
		void AActor::RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent); // 0xecfeb70
		void AActor::SetActorEnableCollision(bool& bNewActorEnableCollision); // 0xecfec00
		void AActor::SetActorHiddenInGame(bool& bNewHidden); // 0xecfec90
		void AActor::SetActorRelativeScale3D(struct FVector& NewRelativeScale); // 0xecfed20
		void AActor::SetActorScale3D(struct FVector& NewScale3D); // 0xecfedb0
		void AActor::SetActorTickEnabled(bool& bEnabled); // 0xecfee40
		void AActor::SetActorTickInterval(float& TickInterval); // 0xecfeed0
		void AActor::SetLifeSpan(float& InLifespan); // 0xecfef50
		void AActor::SetNetDormancy(uint8_t& NewDormancy); // 0xecfefd0
		void AActor::SetOwner(class AActor* NewOwner); // 0x4f28930
		void AActor::SetReplicateMovement(bool& bInReplicateMovement); // 0xecff050
		void AActor::SetReplicates(bool& bInReplicates); // 0xecff0e0
		void AActor::SetTickableWhenPaused(bool& bTickableWhenPaused); // 0xecff1f0
		void AActor::SetTickGroup(uint8_t& NewTickGroup); // 0xecff170
		void AActor::SnapRootComponentTo(class AActor* InParentActor, FName& InSocketName); // 0xecff280
		void AActor::TearOff(); // 0xb83010
		void AActor::UserConstructionScript(); // 0xcc51c80
		bool AActor::WasRecentlyContinuousRendered(class UWorld* World, float& Tolerance); // 0xecff340
		bool AActor::WasRecentlyRendered(float& Tolerance); // 0xecff400
		bool AActor::WasRecentlyRenderedWithShadow(class UWorld* World, float& Tolerance); // 0xecff490
	};

	//Script/Engine.PostProcessSettings
	// Size: 0x950
	struct FPostProcessSettings {
	public:
		bool bOverride_WhiteTemp; // 0x0 (0x1)
		bool bOverride_WhiteTint; // 0x0 (0x1)
		bool bOverride_ColorSaturation; // 0x0 (0x1)
		bool bOverride_ColorContrast; // 0x0 (0x1)
		bool bOverride_ColorGamma; // 0x0 (0x1)
		bool bOverride_ColorGain; // 0x0 (0x1)
		bool bOverride_ColorOffset; // 0x0 (0x1)
		bool bOverride_ColorSaturationShadows; // 0x0 (0x1)
		bool bOverride_ColorContrastShadows; // 0x1 (0x1)
		bool bOverride_ColorGammaShadows; // 0x1 (0x1)
		bool bOverride_ColorGainShadows; // 0x1 (0x1)
		bool bOverride_ColorOffsetShadows; // 0x1 (0x1)
		bool bOverride_ColorSaturationMidtones; // 0x1 (0x1)
		bool bOverride_ColorContrastMidtones; // 0x1 (0x1)
		bool bOverride_ColorGammaMidtones; // 0x1 (0x1)
		bool bOverride_ColorGainMidtones; // 0x1 (0x1)
		bool bOverride_ColorOffsetMidtones; // 0x2 (0x1)
		bool bOverride_ColorSaturationHighlights; // 0x2 (0x1)
		bool bOverride_ColorContrastHighlights; // 0x2 (0x1)
		bool bOverride_ColorGammaHighlights; // 0x2 (0x1)
		bool bOverride_ColorGainHighlights; // 0x2 (0x1)
		bool bOverride_ColorOffsetHighlights; // 0x2 (0x1)
		bool bOverride_ColorCorrectionShadowsMax; // 0x2 (0x1)
		bool bOverride_ColorCorrectionHighlightsMin; // 0x2 (0x1)
		bool bOverride_BlueCorrection; // 0x3 (0x1)
		bool bOverride_DarknessCorrection; // 0x3 (0x1)
		bool bOverride_ExpandGamut; // 0x3 (0x1)
		bool bOverride_FilmWhitePoint; // 0x3 (0x1)
		bool bOverride_FilmSaturation; // 0x3 (0x1)
		bool bOverride_FilmChannelMixerRed; // 0x3 (0x1)
		bool bOverride_FilmChannelMixerGreen; // 0x3 (0x1)
		bool bOverride_FilmChannelMixerBlue; // 0x3 (0x1)
		bool bOverride_FilmContrast; // 0x4 (0x1)
		bool bOverride_FilmDynamicRange; // 0x4 (0x1)
		bool bOverride_FilmHealAmount; // 0x4 (0x1)
		bool bOverride_FilmToeAmount; // 0x4 (0x1)
		bool bOverride_FilmShadowTint; // 0x4 (0x1)
		bool bOverride_FilmShadowTintBlend; // 0x4 (0x1)
		bool bOverride_FilmShadowTintAmount; // 0x4 (0x1)
		bool bOverride_FilmSlope; // 0x4 (0x1)
		bool bOverride_FilmToe; // 0x5 (0x1)
		bool bOverride_FilmShoulder; // 0x5 (0x1)
		bool bOverride_FilmBlackClip; // 0x5 (0x1)
		bool bOverride_FilmWhiteClip; // 0x5 (0x1)
		uint8_t UnknownData_608c[0x2]; // 0x6 (0x2)
		bool bOverride_Mobile_ACES_A; // 0x8 (0x1)
		bool bOverride_Mobile_ACES_B; // 0x8 (0x1)
		bool bOverride_Mobile_ACES_C; // 0x8 (0x1)
		bool bOverride_Mobile_ACES_D; // 0x8 (0x1)
		bool bOverride_Mobile_ACES_E; // 0x8 (0x1)
		bool bOverride_Mobile_LDR_ACES_A; // 0x8 (0x1)
		bool bOverride_Mobile_LDR_ACES_B; // 0x8 (0x1)
		bool bOverride_Mobile_LDR_ACES_C; // 0x8 (0x1)
		bool bOverride_Mobile_LDR_ACES_D; // 0x9 (0x1)
		bool bOverride_Mobile_LDR_ACES_E; // 0x9 (0x1)
		bool bOverride_Mobile_CG_Exposure; // 0x9 (0x1)
		bool bOverride_Mobile_CG_HdrScale; // 0x9 (0x1)
		bool bOverride_Mobile_CG_MasterSaturation; // 0x9 (0x1)
		bool bOverride_Mobile_CG_MasterTint; // 0x9 (0x1)
		bool bOverride_Mobile_CG_Saturation_K0; // 0x9 (0x1)
		bool bOverride_Mobile_CG_Exposure_K0; // 0x9 (0x1)
		bool bOverride_Mobile_CG_Tint_K0; // 0xa (0x1)
		bool bOverride_Mobile_CG_Saturation_K1; // 0xa (0x1)
		bool bOverride_Mobile_CG_Exposure_K1; // 0xa (0x1)
		bool bOverride_Mobile_CG_Tint_K1; // 0xa (0x1)
		bool bOverride_Mobile_CG_Saturation_K2; // 0xa (0x1)
		bool bOverride_Mobile_CG_Exposure_K2; // 0xa (0x1)
		bool bOverride_Mobile_CG_Tint_K2; // 0xa (0x1)
		bool bOverride_MobileColorGradingLUT; // 0xa (0x1)
		bool bOverride_MobileColorGradingLUTWeight; // 0xb (0x1)
		bool bOverride_SceneColorTint; // 0xc (0x1)
		bool bOverride_SceneFringeIntensity; // 0xc (0x1)
		bool bOverride_ChromaticAberrationStartOffset; // 0xc (0x1)
		bool bOverride_ChromaticAberrationSCaleR; // 0xc (0x1)
		bool bOverride_ChromaticAberrationSCaleG; // 0xc (0x1)
		bool bOverride_AmbientCubemapTint; // 0xc (0x1)
		bool bOverride_AmbientCubemapIntensity; // 0xc (0x1)
		bool bOverride_BloomMethod; // 0xc (0x1)
		bool bOverride_PPBlurMethod; // 0xd (0x1)
		bool bOverride_PPEdgeDetectMethod; // 0xd (0x1)
		bool bOverride_BloomIntensity; // 0xd (0x1)
		bool bOverride_BloomMaxLuminance; // 0xd (0x1)
		bool bOverride_MobileBloomMaxLuminance; // 0xd (0x1)
		bool bOverride_BloomThreshold; // 0xd (0x1)
		bool bOverride_Bloom1Tint; // 0xd (0x1)
		bool bOverride_Bloom1Size; // 0xd (0x1)
		bool bOverride_Bloom2Size; // 0xe (0x1)
		bool bOverride_Bloom2Tint; // 0xe (0x1)
		bool bOverride_Bloom3Tint; // 0xe (0x1)
		bool bOverride_Bloom3Size; // 0xe (0x1)
		bool bOverride_Bloom4Tint; // 0xe (0x1)
		bool bOverride_Bloom4Size; // 0xe (0x1)
		bool bOverride_Bloom5Tint; // 0xe (0x1)
		bool bOverride_Bloom5Size; // 0xe (0x1)
		bool bOverride_Bloom6Tint; // 0xf (0x1)
		bool bOverride_Bloom6Size; // 0xf (0x1)
		bool bOverride_BloomSizeScale; // 0xf (0x1)
		bool bOverride_MobileBloomTint; // 0xf (0x1)
		bool bOverride_MobileBloomThreshold; // 0xf (0x1)
		bool bOverride_BloomConvolutionTexture; // 0xf (0x1)
		bool bOverride_BloomConvolutionSize; // 0xf (0x1)
		bool bOverride_BloomConvolutionCenterUV; // 0xf (0x1)
		bool bOverride_BloomConvolutionPreFilter; // 0x10 (0x1)
		bool bOverride_BloomConvolutionPreFilterMin; // 0x10 (0x1)
		bool bOverride_BloomConvolutionPreFilterMax; // 0x10 (0x1)
		bool bOverride_BloomConvolutionPreFilterMult; // 0x10 (0x1)
		bool bOverride_BloomConvolutionBufferScale; // 0x10 (0x1)
		bool bOverride_BloomDirtMaskIntensity; // 0x10 (0x1)
		bool bOverride_BloomDirtMaskTint; // 0x10 (0x1)
		bool bOverride_BloomDirtMask; // 0x10 (0x1)
		bool bOverride_CameraShutterSpeed; // 0x11 (0x1)
		bool bOverride_CameraISO; // 0x11 (0x1)
		bool bOverride_AutoExposureMethod; // 0x11 (0x1)
		bool bOverride_AutoExposureLowPercent; // 0x11 (0x1)
		bool bOverride_AutoExposureHighPercent; // 0x11 (0x1)
		bool bOverride_AutoExposureMinBrightness; // 0x11 (0x1)
		bool bOverride_AutoExposureMaxBrightness; // 0x11 (0x1)
		bool bOverride_AutoExposureCalibrationConstant; // 0x11 (0x1)
		bool bOverride_AutoExposureSpeedUp; // 0x12 (0x1)
		bool bOverride_AutoExposureSpeedDown; // 0x12 (0x1)
		bool bOverride_AutoExposureBias; // 0x12 (0x1)
		bool bOverride_AutoExposureBiasCurve; // 0x12 (0x1)
		bool bOverride_AutoExposureMeterMask; // 0x12 (0x1)
		bool bOverride_AutoExposureApplyPhysicalCameraExposure; // 0x12 (0x1)
		bool bOverride_HistogramLogMin; // 0x12 (0x1)
		bool bOverride_HistogramLogMax; // 0x12 (0x1)
		bool bOverride_LocalExposureHighlightContrastScale; // 0x13 (0x1)
		bool bOverride_LocalExposureShadowContrastScale; // 0x13 (0x1)
		bool bOverride_LocalExposureHighlightContrastCurve; // 0x13 (0x1)
		bool bOverride_LocalExposureShadowContrastCurve; // 0x13 (0x1)
		bool bOverride_LocalExposureHighlightThreshold; // 0x13 (0x1)
		bool bOverride_LocalExposureShadowThreshold; // 0x13 (0x1)
		bool bOverride_LocalExposureDetailStrength; // 0x13 (0x1)
		bool bOverride_LocalExposureBlurredLuminanceBlend; // 0x13 (0x1)
		bool bOverride_LocalExposureBlurredLuminanceKernelSizePercent; // 0x14 (0x1)
		bool bOverride_LocalExposureMiddleGreyBias; // 0x14 (0x1)
		bool bOverride_MiddleGreyBiasCompensation; // 0x14 (0x1)
		bool bOverride_LensFlareMethod; // 0x14 (0x1)
		bool bOverride_LensFlareIntensity; // 0x14 (0x1)
		bool bOverride_LensFlareTint; // 0x14 (0x1)
		bool bOverride_LensFlareBokehSize; // 0x14 (0x1)
		bool bOverride_LensFlareThreshold; // 0x14 (0x1)
		bool bOverride_LensFlareBokehShape; // 0x15 (0x1)
		bool bOverride_LensFlareLineWidth; // 0x15 (0x1)
		bool bOverride_LensFlareLineLength; // 0x15 (0x1)
		bool bOverride_LensFlareLineIntensity; // 0x15 (0x1)
		bool bOverride_LensFlareLineTint; // 0x15 (0x1)
		bool bOverride_LensFlareHalo; // 0x15 (0x1)
		bool bOverride_LensFlareHaloScaleMin; // 0x15 (0x1)
		bool bOverride_LensFlareHaloScaleMax; // 0x15 (0x1)
		bool bOverride_LensFlareTints; // 0x16 (0x1)
		bool bOverride_LensFlareLocation; // 0x16 (0x1)
		bool bOverride_LensFlareTints; // 0x16 (0x1)
		bool bOverride_LensFlareLocation; // 0x16 (0x1)
		bool bOverride_LensFlareTints; // 0x16 (0x1)
		bool bOverride_LensFlareLocation; // 0x16 (0x1)
		bool bOverride_LensFlareTints; // 0x16 (0x1)
		bool bOverride_LensFlareLocation; // 0x16 (0x1)
		bool bOverride_LensFlareTints; // 0x17 (0x1)
		bool bOverride_LensFlareLocation; // 0x17 (0x1)
		bool bOverride_LensFlareTints; // 0x17 (0x1)
		bool bOverride_LensFlareTints; // 0x17 (0x1)
		bool bOverride_LensFlareTints; // 0x17 (0x1)
		bool bOverride_bUseMobileLensFlare; // 0x17 (0x1)
		bool bOverride_MobileLensFlareIntensity; // 0x17 (0x1)
		bool bOverride_MobileLensFlareTint; // 0x17 (0x1)
		bool bOverride_MobileLensFlareBokehSize; // 0x18 (0x1)
		bool bOverride_LensFlareRandomSeed; // 0x18 (0x1)
		bool bOverride_LensFlareFlareCount; // 0x18 (0x1)
		bool bOverride_LensFlareMinPositionScale; // 0x18 (0x1)
		bool bOverride_LensFlareMaxPositionScale; // 0x18 (0x1)
		bool bOverride_MobileLensFlareBokehShape; // 0x18 (0x1)
		bool bOverride_LensFlareIntensity2; // 0x18 (0x1)
		bool bOverride_LensFlareTint2; // 0x18 (0x1)
		bool bOverride_LensFlareBokehSize2; // 0x19 (0x1)
		bool bOverride_LensFlareRandomSeed2; // 0x19 (0x1)
		bool bOverride_LensFlareFlareCount2; // 0x19 (0x1)
		bool bOverride_LensFlareMinPositionScale2; // 0x19 (0x1)
		bool bOverride_LensFlareMaxPositionScale2; // 0x19 (0x1)
		bool bOverride_LensFlareBokehShape2; // 0x19 (0x1)
		bool bOverride_LensFlareRayTint; // 0x19 (0x1)
		bool bOverride_LensFlareRaySliceCount; // 0x19 (0x1)
		bool bOverride_LensFlareRayThreshold; // 0x1a (0x1)
		bool bOverride_LensFlareRayRandomSeed; // 0x1a (0x1)
		bool bOverride_LensFlareRaySize; // 0x1a (0x1)
		bool bOverride_LensFlareRayWidth; // 0x1a (0x1)
		bool bOverride_LensFlareRayIntensity; // 0x1a (0x1)
		bool bOverride_VignetteIntensity; // 0x1a (0x1)
		bool bOverride_GrainIntensity; // 0x1a (0x1)
		bool bOverride_GrainJitter; // 0x1a (0x1)
		bool bOverride_AmbientOcclusionIntensity; // 0x1b (0x1)
		bool bOverride_AmbientOcclusionStaticFraction; // 0x1b (0x1)
		bool bOverride_AmbientOcclusionRadius; // 0x1b (0x1)
		bool bOverride_AmbientOcclusionFadeDistance; // 0x1b (0x1)
		bool bOverride_AmbientOcclusionFadeRadius; // 0x1b (0x1)
		bool bOverride_AmbientOcclusionDistance; // 0x1b (0x1)
		bool bOverride_AmbientOcclusionRadiusInWS; // 0x1b (0x1)
		bool bOverride_AmbientOcclusionPower; // 0x1b (0x1)
		bool bOverride_AmbientOcclusionBias; // 0x1c (0x1)
		bool bOverride_AmbientOcclusionQuality; // 0x1c (0x1)
		bool bOverride_AmbientOcclusionMipBlend; // 0x1c (0x1)
		bool bOverride_AmbientOcclusionMipScale; // 0x1c (0x1)
		bool bOverride_AmbientOcclusionMipThreshold; // 0x1c (0x1)
		bool bOverride_AmbientOcclusionTemporalBlendWeight; // 0x1c (0x1)
		bool bOverride_SSRTAOThreshold; // 0x1c (0x1)
		bool bOverride_SSRTAOTwoSidedFoliageThreshold; // 0x1c (0x1)
		bool bOverride_SSRTAOBentNormalThreshold; // 0x1d (0x1)
		bool bOverride_SSRTAONoiseStep; // 0x1d (0x1)
		bool bOverride_SSRTAOStepSize; // 0x1d (0x1)
		bool bOverride_SSRTAOFirstPersonStepSize; // 0x1d (0x1)
		bool bOverride_SSRTAOFoliageStepSize; // 0x1d (0x1)
		bool bOverride_SSRTAOFoliageNormalAdjust; // 0x1d (0x1)
		bool bOverride_SSRTAODenoiseTemporalBlendWeight; // 0x1d (0x1)
		bool bOverride_SSRTAODenoiseTemporalMomentBlendWeight; // 0x1d (0x1)
		bool bOverride_SSRTAODenoiseTemporalNormalTolerance; // 0x1e (0x1)
		bool bOverride_SSRTAODenoiseTemporalDepthTolerance; // 0x1e (0x1)
		bool bOverride_SSRTAODenoiseTemporalHistoryLength; // 0x1e (0x1)
		bool bOverride_SSRTAODenoiseSpatialAOSigma; // 0x1e (0x1)
		bool bOverride_SSRTAODenoiseSpatialDepthSigma; // 0x1e (0x1)
		bool bOverride_SSRTAODenoiseSpatialNormalSigma; // 0x1e (0x1)
		bool bOverride_SSRTAODenoiseATrousIteration; // 0x1e (0x1)
		bool bOverride_SSRTAODenoiseATrousCopyIterationIndex; // 0x1e (0x1)
		bool bOverride_SSRTAODenoiseATrousIterationStartKernelStep; // 0x1f (0x1)
		bool bOverride_SSRTAODenoiseATrousAOSigma; // 0x1f (0x1)
		bool bOverride_SSRTAODenoiseATrousDepthSigma; // 0x1f (0x1)
		bool bOverride_SSRTAODenoiseATrousDepthWeightCutoff; // 0x1f (0x1)
		bool bOverride_SSRTAODenoiseATrousNormalSigma; // 0x1f (0x1)
		bool bOverride_SSRTAODenoiseATrousMinVarianceToDenoise; // 0x1f (0x1)
		bool bOverride_RayTracingAO; // 0x20 (0x1)
		bool bOverride_RayTracingAOSamplesPerPixel; // 0x20 (0x1)
		uint8_t UnknownData_608d[0x3]; // 0x21 (0x3)
		bool bOverride_LPVIntensity; // 0x24 (0x1)
		bool bOverride_LPVDirectionalOcclusionIntensity; // 0x24 (0x1)
		bool bOverride_LPVDirectionalOcclusionRadius; // 0x24 (0x1)
		bool bOverride_LPVDiffuseOcclusionExponent; // 0x24 (0x1)
		bool bOverride_LPVSpecularOcclusionExponent; // 0x24 (0x1)
		bool bOverride_LPVDiffuseOcclusionIntensity; // 0x24 (0x1)
		bool bOverride_LPVSpecularOcclusionIntensity; // 0x24 (0x1)
		bool bOverride_LPVSize; // 0x24 (0x1)
		bool bOverride_LPVSecondaryOcclusionIntensity; // 0x25 (0x1)
		bool bOverride_LPVSecondaryBounceIntensity; // 0x25 (0x1)
		bool bOverride_LPVGeometryVolumeBias; // 0x25 (0x1)
		bool bOverride_LPVVplInjectionBias; // 0x25 (0x1)
		bool bOverride_LPVEmissiveInjectionIntensity; // 0x25 (0x1)
		bool bOverride_LPVFadeRange; // 0x25 (0x1)
		bool bOverride_LPVDirectionalOcclusionFadeRange; // 0x25 (0x1)
		bool bOverride_IndirectLightingColor; // 0x25 (0x1)
		bool bOverride_IndirectLightingIntensity; // 0x26 (0x1)
		bool bOverride_ColorGradingIntensity; // 0x26 (0x1)
		bool bOverride_ColorGradingLUT; // 0x26 (0x1)
		bool bOverride_UseACEScc; // 0x26 (0x1)
		bool bOverride_PCHighPrecisionLMT; // 0x26 (0x1)
		bool bOverride_LMT_LUTIntensity; // 0x26 (0x1)
		bool bOverride_LMT_LUT; // 0x26 (0x1)
		bool bOverride_DepthOfFieldFocalDistance; // 0x26 (0x1)
		bool bOverride_MobileDepthOfFieldFocalDistance; // 0x27 (0x1)
		bool bOverride_DepthOfFieldFstop; // 0x27 (0x1)
		bool bOverride_DepthOfFieldMinFstop; // 0x27 (0x1)
		bool bOverride_DepthOfFieldBladeCount; // 0x27 (0x1)
		bool bOverride_DepthOfFieldSensorWidth; // 0x27 (0x1)
		bool bOverride_DepthOfFieldSqueezeFactor; // 0x27 (0x1)
		bool bOverride_DepthOfFieldDepthBlurRadius; // 0x27 (0x1)
		bool bOverride_DepthOfFieldDepthBlurAmount; // 0x27 (0x1)
		bool bOverride_DepthOfFieldFocalRegion; // 0x28 (0x1)
		bool bOverride_DepthOfFieldNearTransitionRegion; // 0x28 (0x1)
		bool bOverride_DepthOfFieldFarTransitionRegion; // 0x28 (0x1)
		bool bOverride_DepthOfFieldScale; // 0x28 (0x1)
		bool bOverride_DepthOfFieldNearBlurSize; // 0x28 (0x1)
		bool bOverride_DepthOfFieldFarBlurSize; // 0x28 (0x1)
		bool bOverride_MobileHQGaussian; // 0x28 (0x1)
		bool bOverride_MobileDefaultUEHQGaussian; // 0x28 (0x1)
		bool bOverride_MobileRadialBlur; // 0x29 (0x1)
		bool bOverride_MobileGhostEffect; // 0x29 (0x1)
		bool bOverride_DepthOfFieldOcclusion; // 0x29 (0x1)
		bool bOverride_DepthOfFieldSkyFocusDistance; // 0x29 (0x1)
		bool bOverride_DepthOfFieldVignetteSize; // 0x29 (0x1)
		bool bOverride_MotionBlurAmount; // 0x29 (0x1)
		bool bOverride_MotionBlurMax; // 0x29 (0x1)
		bool bOverride_MotionBlurTargetFPS; // 0x29 (0x1)
		bool bOverride_MotionBlurPerObjectSize; // 0x2a (0x1)
		bool bOverride_EnableMobileMotionBlur; // 0x2a (0x1)
		bool bOverride_MobileMotionBlurMaxSampleCount; // 0x2a (0x1)
		bool bOverride_MobileMotionBlurVelocityScale; // 0x2a (0x1)
		bool bOverride_MobileMotionBlurMaxVelocity; // 0x2a (0x1)
		bool bOverride_MobileMotionBlurUseAABBMask; // 0x2a (0x1)
		bool bOverride_MobileMotionBlurDepthMask; // 0x2a (0x1)
		bool bOverride_MobileMotionBlurDepthMaskTransition; // 0x2a (0x1)
		bool bOverride_MobileMotionBlurAABBMaskCenter; // 0x2b (0x1)
		bool bOverride_MobileMotionBlurAABBMaskExtent; // 0x2b (0x1)
		bool bOverride_MobileMotionBlurAABBMaskTransition; // 0x2b (0x1)
		bool bOverride_MobileMotionBlurDisplayIntensity; // 0x2b (0x1)
		bool bOverride_MobileMotionBlurUseVSVelocity; // 0x2b (0x1)
		bool bOverride_MobileMotionBlurDownSampleFactor; // 0x2b (0x1)
		bool bOverride_MobileMotionBlurAssumedDepth; // 0x2b (0x1)
		bool bOverride_ScreenPercentage; // 0x2b (0x1)
		bool bOverride_ScreenSpaceReflectionIntensity; // 0x2c (0x1)
		bool bOverride_ScreenSpaceReflectionQuality; // 0x2c (0x1)
		bool bOverride_ScreenSpaceReflectionMaxRoughness; // 0x2c (0x1)
		bool bOverride_ScreenSpaceReflectionRoughnessScale; // 0x2c (0x1)
		uint8_t UnknownData_608e[0x3]; // 0x2d (0x3)
		bool bOverride_ScreenRainDropBlurStrength; // 0x30 (0x1)
		bool bOverride_ScreenRainDropBlurCullRadius; // 0x30 (0x1)
		bool bOverride_ScreenRainDropBlurStaticSplit; // 0x30 (0x1)
		bool bOverride_ScreenRainDropBlurStaticDropDensity; // 0x30 (0x1)
		bool bOverride_ScreenRainDropBlurDynamicXSplit; // 0x30 (0x1)
		bool bOverride_ScreenRainDropBlurDynamicYSplit; // 0x30 (0x1)
		bool bOverride_ScreenRainDropBlurDynamicDropDensity; // 0x30 (0x1)
		bool bOverride_ScreenRainDropBlurTest; // 0x30 (0x1)
		bool bOverride_ReflectionsType; // 0x31 (0x1)
		bool bOverride_RayTracingReflectionsMaxRoughness; // 0x31 (0x1)
		bool bOverride_RayTracingReflectionsMaxBounces; // 0x31 (0x1)
		bool bOverride_RayTracingReflectionsSamplesPerPixel; // 0x31 (0x1)
		bool bOverride_RayTracingReflectionsShadows; // 0x31 (0x1)
		bool bOverride_RayTracingReflectionsTranslucency; // 0x31 (0x1)
		bool bOverride_TranslucencyType; // 0x31 (0x1)
		bool bOverride_RayTracingTranslucencyMaxRoughness; // 0x31 (0x1)
		bool bOverride_RayTracingTranslucencyMinReflectionThroughput; // 0x32 (0x1)
		bool bOverride_RayTracingTranslucencyMinRefractionThroughput; // 0x32 (0x1)
		bool bOverride_RayTracingTranslucencyEnableAbsorption; // 0x32 (0x1)
		bool bOverride_RayTracingTranslucencyRefractionRays; // 0x32 (0x1)
		bool bOverride_RayTracingTranslucencySamplesPerPixel; // 0x32 (0x1)
		bool bOverride_RayTracingTranslucencyShadows; // 0x32 (0x1)
		bool bOverride_RayTracingTranslucencyRefraction; // 0x32 (0x1)
		bool bOverride_RayTracingGI; // 0x32 (0x1)
		bool bOverride_RayTracingGIMaxBounces; // 0x33 (0x1)
		bool bOverride_RayTracingGISamplesPerPixel; // 0x33 (0x1)
		bool bOverride_GIDenoiseApplyAO; // 0x33 (0x1)
		bool bOverride_GIDenoiseEnableTemporal; // 0x33 (0x1)
		bool bOverride_GIDenoiseTemporalBlendWeight; // 0x33 (0x1)
		bool bOverride_GIDenoiseTemporalMomentBlendWeight; // 0x33 (0x1)
		bool bOverride_GIDenoiseTemporalNormalTolerance; // 0x33 (0x1)
		bool bOverride_GIDenoiseTemporalDepthTolerance; // 0x33 (0x1)
		bool bOverride_GIDenoiseColorClamp; // 0x34 (0x1)
		bool bOverride_GIDenoiseHistoryLength; // 0x34 (0x1)
		bool bOverride_GIDenoiseEnableATrous; // 0x34 (0x1)
		bool bOverride_GIDenoiseATrousIteration; // 0x34 (0x1)
		bool bOverride_GIDenoiseATrousCopyIteration; // 0x34 (0x1)
		bool bOverride_GIDenoiseATrousSampleDepthAsNormal; // 0x34 (0x1)
		bool bOverride_GIDenoiseATrousFilterWidth; // 0x34 (0x1)
		bool bOverride_GIDenoiseATrousVarianceGain; // 0x34 (0x1)
		bool bOverride_GIDenoiseATrousNormalTolerance; // 0x35 (0x1)
		bool bOverride_GIDenoiseATrousDepthTolerance; // 0x35 (0x1)
		bool bOverride_GIDenoiseATrousAOTolerance; // 0x35 (0x1)
		bool bOverride_GIDenoiseSpatialFilterType; // 0x35 (0x1)
		bool bOverride_GIDenoiseType; // 0x35 (0x1)
		bool bOverride_GIDenoiseDebugType; // 0x35 (0x1)
		bool bOverride_PathTracingMaxBounces; // 0x35 (0x1)
		bool bOverride_PathTracingSamplesPerPixel; // 0x35 (0x1)
		bool bOverride_RayTracingCausticsEnable; // 0x36 (0x1)
		bool bOverride_RayTracingCausticsResolution; // 0x36 (0x1)
		bool bOverride_RayTracingCausticsIntensity; // 0x36 (0x1)
		bool bOverride_RayTracingCausticsMaxIntensity; // 0x36 (0x1)
		bool bOverride_RayTracingCausticsMaxTraceDepth; // 0x36 (0x1)
		bool bOverride_RayTracingCausticsFinalCullColorThreshold; // 0x36 (0x1)
		bool bOverride_RayTracingCausticsMidCullColorThreshold; // 0x36 (0x1)
		bool bOverride_RayTracingCausticsTranslucentReflectionMode; // 0x36 (0x1)
		bool bOverride_RayTracingCausticsMaxScreenRadius; // 0x37 (0x1)
		bool bOverride_RayTracingCausticsBufferScale; // 0x37 (0x1)
		bool bOverride_RayTracingCausticsScatterDepthTolerance; // 0x37 (0x1)
		bool bOverride_RayTracingCausticsSplatSize; // 0x37 (0x1)
		bool bOverride_RayTracingCausticsEnableDispersion; // 0x37 (0x1)
		bool bOverride_RayTracingCausticsDispersionSamples; // 0x37 (0x1)
		bool bOverride_RayTracingCausticsAdaptivePhotonSize; // 0x37 (0x1)
		bool bOverride_RayTracingCausticsAdaptiveVarianceGain; // 0x37 (0x1)
		bool bOverride_RayTracingCausticsAdaptiveSmooth; // 0x38 (0x1)
		bool bOverride_RayTracingCausticsAdaptiveMaxSample; // 0x38 (0x1)
		bool bOverride_RayTracingCausticsAdaptiveUpdateSpeed; // 0x38 (0x1)
		bool bOverride_RayTracingCausticsEnableTemporalFilter; // 0x38 (0x1)
		bool bOverride_RayTracingCausticsJitter; // 0x38 (0x1)
		bool bOverride_RayTracingCausticsTemporalStrength; // 0x38 (0x1)
		bool bOverride_RayTracingCausticsTemporalColorTolerance; // 0x38 (0x1)
		bool bOverride_RayTracingCausticsDebugLightData; // 0x38 (0x1)
		bool bOverride_RayTracingCausticsDebugScreenData; // 0x39 (0x1)
		bool bOverride_RayTracingCausticsDebugMaxPixelValue; // 0x39 (0x1)
		bool bOverride_RayTracingCausticsDebugMapScale; // 0x39 (0x1)
		bool bOverride_RayTracingCausticsDebugMaxPhotonCount; // 0x39 (0x1)
		bool bOverride_RayTracingCausticsDebugMip; // 0x39 (0x1)
		bool bOverride_RayTracingWaterCausticsType; // 0x39 (0x1)
		bool bOverride_RayTracingWaterCausticsBufferScale; // 0x39 (0x1)
		bool bOverride_RayTracingWaterCausticsFollowCamera; // 0x39 (0x1)
		bool bOverride_RayTracingWaterCausticsLookAt; // 0x3a (0x1)
		bool bOverride_RayTracingWaterCausticsRange; // 0x3a (0x1)
		bool bOverride_RayTracingWaterCausticsColor; // 0x3a (0x1)
		bool bOverride_RayTracingWaterCausticsNumDenoisePasses; // 0x3a (0x1)
		bool bOverride_RayTracingWaterCausticsDispersionIntensity; // 0x3a (0x1)
		bool bOverride_RayTracingWaterCausticsDispersionOffset; // 0x3a (0x1)
		bool bOverride_RayTracingWaterCausticsReflectiveIntensity; // 0x3a (0x1)
		bool bOverride_RayTracingWaterCausticsReflectedRayTMax; // 0x3a (0x1)
		bool bOverride_RayTracingWaterCausticsReflectedRayTMin; // 0x3b (0x1)
		bool bOverride_RayTracingWaterCausticsRefractiveIntensity; // 0x3b (0x1)
		bool bOverride_RayTracingWaterCausticsRefractedRayTMax; // 0x3b (0x1)
		bool bOverride_RayTracingWaterCausticsRefractedRayTMin; // 0x3b (0x1)
		bool bOverride_RayTracingWaterCausticsFresnelBaseReflectFraction; // 0x3b (0x1)
		bool bOverride_RayTracingWaterCausticsReflectBackFaceCullingThreshold; // 0x3b (0x1)
		bool bOverride_RayTracingWaterCausticsRefractBackFaceCullingThreshold; // 0x3b (0x1)
		uint8_t AutoExposureMethod; // 0x3c (0x1)
		bool bMobileHQGaussian; // 0x3d (0x1)
		bool bMobileDefaultUEHQGaussian; // 0x3d (0x1)
		uint8_t BloomMethod; // 0x3e (0x1)
		uint8_t PPBlurMethod; // 0x3f (0x1)
		uint8_t PPEdgeDetectMethod; // 0x40 (0x1)
		bool bMobileRadialBlur; // 0x41 (0x1)
		uint8_t UnknownData_608f[0x2]; // 0x42 (0x2)
		float mobileradialtint; // 0x44 (0x4)
		float mobileradialstrength; // 0x48 (0x4)
		struct FVector2D mobileradialcenter; // 0x4c (0x8)
		struct FVector2D mobileghostspeed; // 0x54 (0x8)
		float mobileghostblurtint; // 0x5c (0x4)
		bool bMobileGhostEffect; // 0x60 (0x1)
		uint8_t UnknownData_6090[0x3]; // 0x61 (0x3)
		float WhiteTemp; // 0x64 (0x4)
		float WhiteTint; // 0x68 (0x4)
		uint8_t UnknownData_6091[0x4]; // 0x6c (0x4)
		struct FVector4 ColorSaturation; // 0x70 (0x10)
		struct FVector4 ColorContrast; // 0x80 (0x10)
		struct FVector4 ColorGamma; // 0x90 (0x10)
		struct FVector4 ColorGain; // 0xa0 (0x10)
		struct FVector4 ColorOffset; // 0xb0 (0x10)
		struct FVector4 ColorSaturationShadows; // 0xc0 (0x10)
		struct FVector4 ColorContrastShadows; // 0xd0 (0x10)
		struct FVector4 ColorGammaShadows; // 0xe0 (0x10)
		struct FVector4 ColorGainShadows; // 0xf0 (0x10)
		struct FVector4 ColorOffsetShadows; // 0x100 (0x10)
		struct FVector4 ColorSaturationMidtones; // 0x110 (0x10)
		struct FVector4 ColorContrastMidtones; // 0x120 (0x10)
		struct FVector4 ColorGammaMidtones; // 0x130 (0x10)
		struct FVector4 ColorGainMidtones; // 0x140 (0x10)
		struct FVector4 ColorOffsetMidtones; // 0x150 (0x10)
		struct FVector4 ColorSaturationHighlights; // 0x160 (0x10)
		struct FVector4 ColorContrastHighlights; // 0x170 (0x10)
		struct FVector4 ColorGammaHighlights; // 0x180 (0x10)
		struct FVector4 ColorGainHighlights; // 0x190 (0x10)
		struct FVector4 ColorOffsetHighlights; // 0x1a0 (0x10)
		float ColorCorrectionHighlightsMin; // 0x1b0 (0x4)
		float ColorCorrectionShadowsMax; // 0x1b4 (0x4)
		float BlueCorrection; // 0x1b8 (0x4)
		float DarknessCorrection; // 0x1bc (0x4)
		float ExpandGamut; // 0x1c0 (0x4)
		float FilmSlope; // 0x1c4 (0x4)
		float FilmToe; // 0x1c8 (0x4)
		float FilmShoulder; // 0x1cc (0x4)
		float FilmBlackClip; // 0x1d0 (0x4)
		float FilmWhiteClip; // 0x1d4 (0x4)
		float Mobile_ACES_A; // 0x1d8 (0x4)
		float Mobile_ACES_B; // 0x1dc (0x4)
		float Mobile_ACES_C; // 0x1e0 (0x4)
		float Mobile_ACES_D; // 0x1e4 (0x4)
		float Mobile_ACES_E; // 0x1e8 (0x4)
		float Mobile_LDR_ACES_A; // 0x1ec (0x4)
		float Mobile_LDR_ACES_B; // 0x1f0 (0x4)
		float Mobile_LDR_ACES_C; // 0x1f4 (0x4)
		float Mobile_LDR_ACES_D; // 0x1f8 (0x4)
		float Mobile_LDR_ACES_E; // 0x1fc (0x4)
		struct FLinearColor Mobile_CG_MasterTint; // 0x200 (0x10)
		float Mobile_CG_MasterSaturation; // 0x210 (0x4)
		float Mobile_CG_Exposure; // 0x214 (0x4)
		float Mobile_CG_HdrScale; // 0x218 (0x4)
		struct FLinearColor Mobile_CG_Tint_K0; // 0x21c (0x10)
		float Mobile_CG_Saturation_K0; // 0x22c (0x4)
		float Mobile_CG_Exposure_K0; // 0x230 (0x4)
		struct FLinearColor Mobile_CG_Tint_K1; // 0x234 (0x10)
		float Mobile_CG_Saturation_K1; // 0x244 (0x4)
		float Mobile_CG_Exposure_K1; // 0x248 (0x4)
		struct FLinearColor Mobile_CG_Tint_K2; // 0x24c (0x10)
		float Mobile_CG_Saturation_K2; // 0x25c (0x4)
		float Mobile_CG_Exposure_K2; // 0x260 (0x4)
		uint8_t UnknownData_6092[0x4]; // 0x264 (0x4)
		class UTexture* MobileColorGradingLUT; // 0x268 (0x8)
		float MobileColorGradingLUTWeight; // 0x270 (0x4)
		struct FLinearColor FilmWhitePoint; // 0x274 (0x10)
		struct FLinearColor FilmShadowTint; // 0x284 (0x10)
		float FilmShadowTintBlend; // 0x294 (0x4)
		float FilmShadowTintAmount; // 0x298 (0x4)
		float FilmSaturation; // 0x29c (0x4)
		struct FLinearColor FilmChannelMixerRed; // 0x2a0 (0x10)
		struct FLinearColor FilmChannelMixerGreen; // 0x2b0 (0x10)
		struct FLinearColor FilmChannelMixerBlue; // 0x2c0 (0x10)
		float FilmContrast; // 0x2d0 (0x4)
		float FilmToeAmount; // 0x2d4 (0x4)
		float FilmHealAmount; // 0x2d8 (0x4)
		float FilmDynamicRange; // 0x2dc (0x4)
		struct FLinearColor SceneColorTint; // 0x2e0 (0x10)
		float SceneFringeIntensity; // 0x2f0 (0x4)
		float ChromaticAberrationStartOffset; // 0x2f4 (0x4)
		float ChromaticAberrationSCaleR; // 0x2f8 (0x4)
		float ChromaticAberrationSCaleG; // 0x2fc (0x4)
		float BloomIntensity; // 0x300 (0x4)
		float BloomMaxLuminance; // 0x304 (0x4)
		float MobileBloomMaxLuminance; // 0x308 (0x4)
		float BloomThreshold; // 0x30c (0x4)
		float BloomSizeScale; // 0x310 (0x4)
		float Bloom1Size; // 0x314 (0x4)
		float Bloom2Size; // 0x318 (0x4)
		float Bloom3Size; // 0x31c (0x4)
		float Bloom4Size; // 0x320 (0x4)
		float Bloom5Size; // 0x324 (0x4)
		float Bloom6Size; // 0x328 (0x4)
		struct FLinearColor Bloom1Tint; // 0x32c (0x10)
		struct FLinearColor Bloom2Tint; // 0x33c (0x10)
		struct FLinearColor Bloom3Tint; // 0x34c (0x10)
		struct FLinearColor Bloom4Tint; // 0x35c (0x10)
		struct FLinearColor Bloom5Tint; // 0x36c (0x10)
		struct FLinearColor Bloom6Tint; // 0x37c (0x10)
		struct FLinearColor MobileBloomTint; // 0x38c (0x10)
		float MobileBloomThreshold; // 0x39c (0x4)
		float BloomConvolutionSize; // 0x3a0 (0x4)
		uint8_t UnknownData_6093[0x4]; // 0x3a4 (0x4)
		class UTexture2D* BloomConvolutionTexture; // 0x3a8 (0x8)
		struct FVector2D BloomConvolutionCenterUV; // 0x3b0 (0x8)
		float BloomConvolutionPreFilterMin; // 0x3b8 (0x4)
		float BloomConvolutionPreFilterMax; // 0x3bc (0x4)
		float BloomConvolutionPreFilterMult; // 0x3c0 (0x4)
		float BloomConvolutionBufferScale; // 0x3c4 (0x4)
		class UTexture* BloomDirtMask; // 0x3c8 (0x8)
		float BloomDirtMaskIntensity; // 0x3d0 (0x4)
		struct FLinearColor BloomDirtMaskTint; // 0x3d4 (0x10)
		struct FLinearColor AmbientCubemapTint; // 0x3e4 (0x10)
		float AmbientCubemapIntensity; // 0x3f4 (0x4)
		class UTextureCube* AmbientCubemap; // 0x3f8 (0x8)
		float CameraShutterSpeed; // 0x400 (0x4)
		float CameraISO; // 0x404 (0x4)
		float DepthOfFieldFstop; // 0x408 (0x4)
		float DepthOfFieldMinFstop; // 0x40c (0x4)
		int32_t DepthOfFieldBladeCount; // 0x410 (0x4)
		float AutoExposureBias; // 0x414 (0x4)
		float AutoExposureBiasBackup; // 0x418 (0x4)
		bool bOverride_AutoExposureBiasBackup; // 0x41c (0x1)
		uint8_t UnknownData_6094[0x3]; // 0x41d (0x3)
		bool AutoExposureApplyPhysicalCameraExposure; // 0x420 (0x1)
		uint8_t UnknownData_6095[0x7]; // 0x421 (0x7)
		class UCurveFloat* AutoExposureBiasCurve; // 0x428 (0x8)
		class UTexture* AutoExposureMeterMask; // 0x430 (0x8)
		float AutoExposureLowPercent; // 0x438 (0x4)
		float AutoExposureHighPercent; // 0x43c (0x4)
		float AutoExposureMinBrightness; // 0x440 (0x4)
		float AutoExposureMaxBrightness; // 0x444 (0x4)
		float AutoExposureSpeedUp; // 0x448 (0x4)
		float AutoExposureSpeedDown; // 0x44c (0x4)
		float HistogramLogMin; // 0x450 (0x4)
		float HistogramLogMax; // 0x454 (0x4)
		float AutoExposureCalibrationConstant; // 0x458 (0x4)
		float LocalExposureHighlightContrastScale; // 0x45c (0x4)
		float LocalExposureShadowContrastScale; // 0x460 (0x4)
		uint8_t UnknownData_6096[0x4]; // 0x464 (0x4)
		class UCurveFloat* LocalExposureHighlightContrastCurve; // 0x468 (0x8)
		class UCurveFloat* LocalExposureShadowContrastCurve; // 0x470 (0x8)
		float LocalExposureHighlightThreshold; // 0x478 (0x4)
		float LocalExposureShadowThreshold; // 0x47c (0x4)
		float LocalExposureDetailStrength; // 0x480 (0x4)
		float LocalExposureBlurredLuminanceBlend; // 0x484 (0x4)
		float LocalExposureBlurredLuminanceKernelSizePercent; // 0x488 (0x4)
		float LocalExposureMiddleGreyBias; // 0x48c (0x4)
		bool MiddleGreyBiasCompensation; // 0x490 (0x1)
		uint8_t UnknownData_6097[0x3]; // 0x491 (0x3)
		int32_t BlurRadius; // 0x494 (0x4)
		uint8_t LensFlareMethod; // 0x498 (0x1)
		uint8_t UnknownData_6098[0x3]; // 0x499 (0x3)
		float LensFlareIntensity; // 0x49c (0x4)
		struct FLinearColor LensFlareTint; // 0x4a0 (0x10)
		float LensFlareBokehSize; // 0x4b0 (0x4)
		float LensFlareThreshold; // 0x4b4 (0x4)
		class UTexture* LensFlareBokehShape; // 0x4b8 (0x8)
		float LensFlareLineWidth; // 0x4c0 (0x4)
		float LensFlareLineLength; // 0x4c4 (0x4)
		float LensFlareLineIntensity; // 0x4c8 (0x4)
		struct FLinearColor LensFlareLineTint; // 0x4cc (0x10)
		uint8_t UnknownData_6099[0x4]; // 0x4dc (0x4)
		class UTexture* LensFlareHalo; // 0x4e0 (0x8)
		float LensFlareHaloScaleMin; // 0x4e8 (0x4)
		float LensFlareHaloScaleMax; // 0x4ec (0x4)
		struct FLinearColor LensFlareTints; // 0x4f0 (0x10)
		float LensFlareLocation; // 0x500 (0x4)
		struct FLinearColor LensFlareTints; // 0x504 (0x10)
		float LensFlareLocation; // 0x514 (0x4)
		struct FLinearColor LensFlareTints; // 0x518 (0x10)
		float LensFlareLocation; // 0x528 (0x4)
		struct FLinearColor LensFlareTints; // 0x52c (0x10)
		float LensFlareLocation; // 0x53c (0x4)
		struct FLinearColor LensFlareTints; // 0x540 (0x10)
		float LensFlareLocation; // 0x550 (0x4)
		struct FLinearColor LensFlareTints; // 0x554 (0x10)
		struct FLinearColor LensFlareTints; // 0x564 (0x10)
		struct FLinearColor LensFlareTints; // 0x574 (0x10)
		bool bUseMobileLensFlare; // 0x584 (0x1)
		uint8_t UnknownData_609a[0x3]; // 0x585 (0x3)
		float MobileLensFlareIntensity; // 0x588 (0x4)
		struct FLinearColor MobileLensFlareTint; // 0x58c (0x10)
		float MobileLensFlareBokehSize; // 0x59c (0x4)
		int32_t LensFlareRandomSeed; // 0x5a0 (0x4)
		int32_t LensFlareFlareCount; // 0x5a4 (0x4)
		float LensFlareMinPositionScale; // 0x5a8 (0x4)
		float LensFlareMaxPositionScale; // 0x5ac (0x4)
		class UTexture* MobileLensFlareBokehShape; // 0x5b0 (0x8)
		float LensFlareIntensity2; // 0x5b8 (0x4)
		struct FLinearColor LensFlareTint2; // 0x5bc (0x10)
		float LensFlareBokehSize2; // 0x5cc (0x4)
		int32_t LensFlareRandomSeed2; // 0x5d0 (0x4)
		int32_t LensFlareFlareCount2; // 0x5d4 (0x4)
		float LensFlareMinPositionScale2; // 0x5d8 (0x4)
		float LensFlareMaxPositionScale2; // 0x5dc (0x4)
		class UTexture* LensFlareBokehShape2; // 0x5e0 (0x8)
		struct FLinearColor LensFlareRayTint; // 0x5e8 (0x10)
		int32_t LensFlareRaySliceCount; // 0x5f8 (0x4)
		float LensFlareRayThreshold; // 0x5fc (0x4)
		int32_t LensFlareRayRandomSeed; // 0x600 (0x4)
		float LensFlareRaySize; // 0x604 (0x4)
		float LensFlareRayWidth; // 0x608 (0x4)
		float LensFlareRayIntensity; // 0x60c (0x4)
		float VignetteIntensity; // 0x610 (0x4)
		float GrainJitter; // 0x614 (0x4)
		float GrainIntensity; // 0x618 (0x4)
		float AmbientOcclusionIntensity; // 0x61c (0x4)
		float AmbientOcclusionStaticFraction; // 0x620 (0x4)
		float AmbientOcclusionRadius; // 0x624 (0x4)
		bool AmbientOcclusionRadiusInWS; // 0x628 (0x1)
		uint8_t UnknownData_609b[0x3]; // 0x629 (0x3)
		float AmbientOcclusionFadeDistance; // 0x62c (0x4)
		float AmbientOcclusionFadeRadius; // 0x630 (0x4)
		float AmbientOcclusionDistance; // 0x634 (0x4)
		float AmbientOcclusionPower; // 0x638 (0x4)
		float AmbientOcclusionBias; // 0x63c (0x4)
		float AmbientOcclusionQuality; // 0x640 (0x4)
		float AmbientOcclusionMipBlend; // 0x644 (0x4)
		float AmbientOcclusionMipScale; // 0x648 (0x4)
		float AmbientOcclusionMipThreshold; // 0x64c (0x4)
		float AmbientOcclusionTemporalBlendWeight; // 0x650 (0x4)
		float SSRTAOThreshold; // 0x654 (0x4)
		float SSRTAOTwoSidedFoliageThreshold; // 0x658 (0x4)
		float SSRTAOBentNormalThreshold; // 0x65c (0x4)
		float SSRTAONoiseStep; // 0x660 (0x4)
		float SSRTAOStepSize; // 0x664 (0x4)
		float SSRTAOFirstPersonStepSize; // 0x668 (0x4)
		float SSRTAOFoliageStepSize; // 0x66c (0x4)
		float SSRTAOFoliageNormalAdjust; // 0x670 (0x4)
		float SSRTAODenoiseTemporalBlendWeight; // 0x674 (0x4)
		float SSRTAODenoiseTemporalMomentBlendWeight; // 0x678 (0x4)
		float SSRTAODenoiseTemporalNormalTolerance; // 0x67c (0x4)
		float SSRTAODenoiseTemporalDepthTolerance; // 0x680 (0x4)
		int32_t SSRTAODenoiseTemporalHistoryLength; // 0x684 (0x4)
		float SSRTAODenoiseSpatialAOSigma; // 0x688 (0x4)
		float SSRTAODenoiseSpatialDepthSigma; // 0x68c (0x4)
		float SSRTAODenoiseSpatialNormalSigma; // 0x690 (0x4)
		int32_t SSRTAODenoiseATrousIteration; // 0x694 (0x4)
		int32_t SSRTAODenoiseATrousCopyIterationIndex; // 0x698 (0x4)
		int32_t SSRTAODenoiseATrousIterationStartKernelStep; // 0x69c (0x4)
		float SSRTAODenoiseATrousAOSigma; // 0x6a0 (0x4)
		float SSRTAODenoiseATrousDepthSigma; // 0x6a4 (0x4)
		float SSRTAODenoiseATrousDepthWeightCutoff; // 0x6a8 (0x4)
		float SSRTAODenoiseATrousNormalSigma; // 0x6ac (0x4)
		float SSRTAODenoiseATrousMinVarianceToDenoise; // 0x6b0 (0x4)
		bool RayTracingAO; // 0x6b4 (0x1)
		uint8_t UnknownData_609c[0x3]; // 0x6b5 (0x3)
		int32_t RayTracingAOSamplesPerPixel; // 0x6b8 (0x4)
		struct FLinearColor IndirectLightingColor; // 0x6bc (0x10)
		float IndirectLightingIntensity; // 0x6cc (0x4)
		EERayTracingGlobalIlluminationType RayTracingGIType; // 0x6d0 (0x1)
		uint8_t UnknownData_609d[0x3]; // 0x6d1 (0x3)
		int32_t RayTracingGIMaxBounces; // 0x6d4 (0x4)
		int32_t RayTracingGISamplesPerPixel; // 0x6d8 (0x4)
		bool RayTracingCausticsEnable; // 0x6dc (0x1)
		uint8_t UnknownData_609e[0x3]; // 0x6dd (0x3)
		EERayTracingMeshCausticsResolutionOverride RayTracingCausticsResolution; // 0x6e0 (0x1)
		uint8_t UnknownData_609f[0x3]; // 0x6e1 (0x3)
		float RayTracingCausticsIntensity; // 0x6e4 (0x4)
		float RayTracingCausticsMaxIntensity; // 0x6e8 (0x4)
		int32_t RayTracingCausticsMaxTraceDepth; // 0x6ec (0x4)
		float RayTracingCausticsFinalCullColorThreshold; // 0x6f0 (0x4)
		float RayTracingCausticsMidCullColorThreshold; // 0x6f4 (0x4)
		EERayTracingMeshCausticsTranslucentReflectionMode RayTracingCausticsTranslucentReflectionMode; // 0x6f8 (0x1)
		uint8_t UnknownData_60a0[0x3]; // 0x6f9 (0x3)
		float RayTracingCausticsMaxScreenRadius; // 0x6fc (0x4)
		EERayTracingMeshCausticsBufferScale RayTracingCausticsBufferScale; // 0x700 (0x1)
		uint8_t UnknownData_60a1[0x3]; // 0x701 (0x3)
		float RayTracingCausticsScatterDepthTolerance; // 0x704 (0x4)
		float RayTracingCausticsSplatSize; // 0x708 (0x4)
		bool RayTracingCausticsEnableDispersion; // 0x70c (0x1)
		uint8_t UnknownData_60a2[0x3]; // 0x70d (0x3)
		int32_t RayTracingCausticsDispersionSamples; // 0x710 (0x4)
		float RayTracingCausticsAdaptivePhotonSize; // 0x714 (0x4)
		float RayTracingCausticsAdaptiveVarianceGain; // 0x718 (0x4)
		float RayTracingCausticsAdaptiveSmooth; // 0x71c (0x4)
		int32_t RayTracingCausticsAdaptiveMaxSample; // 0x720 (0x4)
		float RayTracingCausticsAdaptiveUpdateSpeed; // 0x724 (0x4)
		bool RayTracingCausticsEnableTemporalFilter; // 0x728 (0x1)
		uint8_t UnknownData_60a3[0x3]; // 0x729 (0x3)
		float RayTracingCausticsJitter; // 0x72c (0x4)
		float RayTracingCausticsTemporalStrength; // 0x730 (0x4)
		float RayTracingCausticsTemporalColorTolerance; // 0x734 (0x4)
		EERayTracingMeshCausticsDebugLightData RayTracingCausticsDebugLightData; // 0x738 (0x1)
		EERayTracingMeshCausticsDebugScreenData RayTracingCausticsDebugScreenData; // 0x739 (0x1)
		uint8_t UnknownData_60a4[0x2]; // 0x73a (0x2)
		float RayTracingCausticsDebugMaxPixelValue; // 0x73c (0x4)
		float RayTracingCausticsDebugMapScale; // 0x740 (0x4)
		int32_t RayTracingCausticsDebugMaxPhotonCount; // 0x744 (0x4)
		int32_t RayTracingCausticsDebugMip; // 0x748 (0x4)
		bool GIDenoiseApplyAO; // 0x74c (0x1)
		bool GIDenoiseEnableTemporal; // 0x74c (0x1)
		uint8_t UnknownData_60a5[0x3]; // 0x74d (0x3)
		float GIDenoiseTemporalBlendWeight; // 0x750 (0x4)
		float GIDenoiseTemporalMomentBlendWeight; // 0x754 (0x4)
		float GIDenoiseTemporalNormalTolerance; // 0x758 (0x4)
		float GIDenoiseTemporalDepthTolerance; // 0x75c (0x4)
		int32_t GIDenoiseColorClamp; // 0x760 (0x4)
		int32_t GIDenoiseHistoryLength; // 0x764 (0x4)
		bool GIDenoiseEnableATrous; // 0x768 (0x1)
		uint8_t UnknownData_60a6[0x3]; // 0x769 (0x3)
		int32_t GIDenoiseATrousIteration; // 0x76c (0x4)
		int32_t GIDenoiseATrousCopyIteration; // 0x770 (0x4)
		bool GIDenoiseATrousSampleDepthAsNormal; // 0x774 (0x1)
		uint8_t UnknownData_60a7[0x3]; // 0x775 (0x3)
		float GIDenoiseATrousFilterWidth; // 0x778 (0x4)
		float GIDenoiseATrousVarianceGain; // 0x77c (0x4)
		float GIDenoiseATrousNormalTolerance; // 0x780 (0x4)
		float GIDenoiseATrousDepthTolerance; // 0x784 (0x4)
		float GIDenoiseATrousAOTolerance; // 0x788 (0x4)
		EERayTracingGIDenoiseSpatialFilterType GIDenoiseSpatialFilterType; // 0x78c (0x1)
		EERayTracingGIDenoiseType GIDenoiseType; // 0x78d (0x1)
		EERayTracingGIDenoiseDebugType GIDenoiseDebugType; // 0x78e (0x1)
		EERayTracingWaterCausticsType RayTracingWaterCausticsType; // 0x78f (0x1)
		EERayTracingWaterCausticsBufferScale RayTracingWaterCausticsBufferScale; // 0x790 (0x1)
		uint8_t UnknownData_60a8[0x3]; // 0x791 (0x3)
		bool RayTracingWaterCausticsFollowCamera; // 0x794 (0x1)
		uint8_t UnknownData_60a9[0x3]; // 0x795 (0x3)
		struct FVector RayTracingWaterCausticsLookAt; // 0x798 (0xc)
		struct FVector RayTracingWaterCausticsRange; // 0x7a4 (0xc)
		struct FLinearColor RayTracingWaterCausticsColor; // 0x7b0 (0x10)
		int32_t RayTracingWaterCausticsNumDenoisePasses; // 0x7c0 (0x4)
		float RayTracingWaterCausticsDispersionIntensity; // 0x7c4 (0x4)
		float RayTracingWaterCausticsDispersionOffset; // 0x7c8 (0x4)
		float RayTracingWaterCausticsReflectiveIntensity; // 0x7cc (0x4)
		float RayTracingWaterCausticsReflectedRayTMax; // 0x7d0 (0x4)
		float RayTracingWaterCausticsReflectedRayTMin; // 0x7d4 (0x4)
		float RayTracingWaterCausticsRefractiveIntensity; // 0x7d8 (0x4)
		float RayTracingWaterCausticsRefractedRayTMax; // 0x7dc (0x4)
		float RayTracingWaterCausticsRefractedRayTMin; // 0x7e0 (0x4)
		float RayTracingWaterCausticsFresnelBaseReflectFraction; // 0x7e4 (0x4)
		float RayTracingWaterCausticsReflectBackFaceCullingThreshold; // 0x7e8 (0x4)
		float RayTracingWaterCausticsRefractBackFaceCullingThreshold; // 0x7ec (0x4)
		float ColorGradingIntensity; // 0x7f0 (0x4)
		uint8_t UnknownData_60aa[0x4]; // 0x7f4 (0x4)
		class UTexture* ColorGradingLUT; // 0x7f8 (0x8)
		bool UseACEScc; // 0x800 (0x1)
		bool PCHighPrecisionLMT; // 0x801 (0x1)
		uint8_t UnknownData_60ab[0x2]; // 0x802 (0x2)
		float LMT_LUTIntensity; // 0x804 (0x4)
		class UTexture* LMT_LUT; // 0x808 (0x8)
		float DepthOfFieldSensorWidth; // 0x810 (0x4)
		float DepthOfFieldSqueezeFactor; // 0x814 (0x4)
		float DepthOfFieldFocalDistance; // 0x818 (0x4)
		float DepthOfFieldDepthBlurAmount; // 0x81c (0x4)
		float DepthOfFieldDepthBlurRadius; // 0x820 (0x4)
		float DepthOfFieldFocalRegion; // 0x824 (0x4)
		float MobileDepthOfFieldFocalDistance; // 0x828 (0x4)
		float DepthOfFieldNearTransitionRegion; // 0x82c (0x4)
		float DepthOfFieldFarTransitionRegion; // 0x830 (0x4)
		float DepthOfFieldScale; // 0x834 (0x4)
		float DepthOfFieldNearBlurSize; // 0x838 (0x4)
		float DepthOfFieldFarBlurSize; // 0x83c (0x4)
		float DepthOfFieldOcclusion; // 0x840 (0x4)
		float DepthOfFieldSkyFocusDistance; // 0x844 (0x4)
		float DepthOfFieldVignetteSize; // 0x848 (0x4)
		float ScreenRainDropBlurStrength; // 0x84c (0x4)
		float ScreenRainDropBlurCullRadius; // 0x850 (0x4)
		float ScreenRainDropBlurStaticSplit; // 0x854 (0x4)
		float ScreenRainDropBlurStaticDropDensity; // 0x858 (0x4)
		float ScreenRainDropBlurDynamicXSplit; // 0x85c (0x4)
		float ScreenRainDropBlurDynamicYSplit; // 0x860 (0x4)
		float ScreenRainDropBlurDynamicDropDensity; // 0x864 (0x4)
		float ScreenRainDropBlurTest; // 0x868 (0x4)
		float MotionBlurAmount; // 0x86c (0x4)
		float MotionBlurMax; // 0x870 (0x4)
		int32_t MotionBlurTargetFPS; // 0x874 (0x4)
		float MotionBlurPerObjectSize; // 0x878 (0x4)
		bool bEnableMobileMotionBlur; // 0x87c (0x1)
		uint8_t UnknownData_60ac[0x3]; // 0x87d (0x3)
		int32_t MobileMotionBlurMaxSampleCount; // 0x880 (0x4)
		float MobileMotionBlurVelocityScale; // 0x884 (0x4)
		float MobileMotionBlurMaxVelocity; // 0x888 (0x4)
		bool bMobileMotionBlurUseAABBMask; // 0x88c (0x1)
		uint8_t UnknownData_60ad[0x3]; // 0x88d (0x3)
		float MobileMotionBlurDepthMask; // 0x890 (0x4)
		float MobileMotionBlurDepthMaskTransition; // 0x894 (0x4)
		struct FVector2D MobileMotionBlurAABBMaskCenter; // 0x898 (0x8)
		struct FVector2D MobileMotionBlurAABBMaskExtent; // 0x8a0 (0x8)
		float MobileMotionBlurAABBMaskTransition; // 0x8a8 (0x4)
		bool bMobileMotionBlurDisplayIntensity; // 0x8ac (0x1)
		bool bMobileMotionBlurUseVSVelocity; // 0x8ac (0x1)
		uint8_t UnknownData_60ae[0x3]; // 0x8ad (0x3)
		int32_t MobileMotionBlurDownSampleFactor; // 0x8b0 (0x4)
		float MobileMotionBlurAssumedDepth; // 0x8b4 (0x4)
		float LPVIntensity; // 0x8b8 (0x4)
		float LPVVplInjectionBias; // 0x8bc (0x4)
		float LPVSize; // 0x8c0 (0x4)
		float LPVSecondaryOcclusionIntensity; // 0x8c4 (0x4)
		float LPVSecondaryBounceIntensity; // 0x8c8 (0x4)
		float LPVGeometryVolumeBias; // 0x8cc (0x4)
		float LPVEmissiveInjectionIntensity; // 0x8d0 (0x4)
		float LPVDirectionalOcclusionIntensity; // 0x8d4 (0x4)
		float LPVDirectionalOcclusionRadius; // 0x8d8 (0x4)
		float LPVDiffuseOcclusionExponent; // 0x8dc (0x4)
		float LPVSpecularOcclusionExponent; // 0x8e0 (0x4)
		float LPVDiffuseOcclusionIntensity; // 0x8e4 (0x4)
		float LPVSpecularOcclusionIntensity; // 0x8e8 (0x4)
		EEReflectionsType ReflectionsType; // 0x8ec (0x1)
		uint8_t UnknownData_60af[0x3]; // 0x8ed (0x3)
		float ScreenSpaceReflectionIntensity; // 0x8f0 (0x4)
		float ScreenSpaceReflectionQuality; // 0x8f4 (0x4)
		float ScreenSpaceReflectionMaxRoughness; // 0x8f8 (0x4)
		float RayTracingReflectionsMaxRoughness; // 0x8fc (0x4)
		int32_t RayTracingReflectionsMaxBounces; // 0x900 (0x4)
		int32_t RayTracingReflectionsSamplesPerPixel; // 0x904 (0x4)
		EEReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x908 (0x1)
		bool RayTracingReflectionsTranslucency; // 0x909 (0x1)
		EETranslucencyType TranslucencyType; // 0x90a (0x1)
		uint8_t UnknownData_60b0[0x1]; // 0x90b (0x1)
		float RayTracingTranslucencyMaxRoughness; // 0x90c (0x4)
		float RayTracingTranslucencyMinReflectionThroughput; // 0x910 (0x4)
		float RayTracingTranslucencyMinRefractionThroughput; // 0x914 (0x4)
		bool RayTracingTranslucencyEnableAbsorption; // 0x918 (0x1)
		uint8_t UnknownData_60b1[0x3]; // 0x919 (0x3)
		int32_t RayTracingTranslucencyRefractionRays; // 0x91c (0x4)
		int32_t RayTracingTranslucencySamplesPerPixel; // 0x920 (0x4)
		EEReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x924 (0x1)
		bool RayTracingTranslucencyRefraction; // 0x925 (0x1)
		uint8_t UnknownData_60b2[0x2]; // 0x926 (0x2)
		int32_t PathTracingMaxBounces; // 0x928 (0x4)
		int32_t PathTracingSamplesPerPixel; // 0x92c (0x4)
		float LPVFadeRange; // 0x930 (0x4)
		float LPVDirectionalOcclusionFadeRange; // 0x934 (0x4)
		float ScreenPercentage; // 0x938 (0x4)
		uint8_t UnknownData_60b3[0x4]; // 0x93c (0x4)
		struct FWeightedBlendables WeightedBlendables; // 0x940 (0x10)
	};

	//Script/Engine.MinimalViewInfo
	// Size: 0x9e0
	struct FMinimalViewInfo {
	public:
		struct FEncVector Location; // 0x0 (0x10)
		struct FRotator Rotation; // 0x10 (0xc)
		float FOV; // 0x1c (0x4)
		float DesiredFOV; // 0x20 (0x4)
		float OrthoWidth; // 0x24 (0x4)
		float OrthoNearClipPlane; // 0x28 (0x4)
		float OrthoFarClipPlane; // 0x2c (0x4)
		float AspectRatio; // 0x30 (0x4)
		bool bConstrainAspectRatio; // 0x34 (0x1)
		bool bUseFieldOfViewForLOD; // 0x34 (0x1)
		uint8_t UnknownData_6089[0x3]; // 0x35 (0x3)
		uint8_t ProjectionMode; // 0x38 (0x1)
		uint8_t UnknownData_608a[0x3]; // 0x39 (0x3)
		float PostProcessBlendWeight; // 0x3c (0x4)
		struct FPostProcessSettings PostProcessSettings; // 0x40 (0x950)
		struct FVector2D OffCenterProjectionOffset; // 0x990 (0x8)
		uint8_t UnknownData_608b[0x48]; // 0x998 (0x48)
	};

	//Script/Engine.PlayerState
	// Size: 0x498
	class APlayerState final : public AInfo {
	public:
		float Score; // 0x370 (0x4)
		uint8_t UnknownData_9ba[0x4]; // 0x374 (0x4)
		FString PlayerName; // 0x378 (0x10)
		uint8_t UnknownData_9bb[0x10]; // 0x388 (0x10)
		int32_t PlayerId; // 0x398 (0x4)
		uint8_t Ping; // 0x39c (0x1)
		uint8_t UnknownData_9bc[0x1]; // 0x39d (0x1)
		bool bShouldUpdateReplicatedPing; // 0x39e (0x1)
		bool bIsSpectator; // 0x39e (0x1)
		bool bOnlySpectator; // 0x39e (0x1)
		bool bIsABot; // 0x39e (0x1)
		bool bIsInactive; // 0x39e (0x1)
		bool bFromPreviousLevel; // 0x39e (0x1)
		uint8_t UnknownData_9bd[0x1]; // 0x39f (0x1)
		int32_t StartTime; // 0x3a0 (0x4)
		uint8_t UnknownData_9be[0x4]; // 0x3a4 (0x4)
		TSubclassOf<class UClass> EngineMessageClass; // 0x3a8 (0x8)
		uint8_t UnknownData_9bf[0x8]; // 0x3b0 (0x8)
		FString SavedNetworkAddress; // 0x3b8 (0x10)
		struct FUniqueNetIdRepl UniqueId; // 0x3c8 (0x28)
		uint8_t UnknownData_9c0[0x8]; // 0x3f0 (0x8)
		class APawn* PawnPrivate; // 0x3f8 (0x8)
		uint8_t UnknownData_9c1[0x78]; // 0x400 (0x78)
		FString PlayerNamePrivate; // 0x478 (0x10)
		uint8_t UnknownData_9c2[0x10]; // 0x488 (0x10)

		// Functions
		FString APlayerState::GetPlayerName(); // 0xee2b060
		void APlayerState::OnRep_bIsInactive(); // 0xef9d40
		void APlayerState::OnRep_PlayerId(); // 0xef9d20
		void APlayerState::OnRep_PlayerName(); // 0xefa640
		void APlayerState::OnRep_Score(); // 0xf010a0
		void APlayerState::OnRep_UniqueId(); // 0xf03f10
		void APlayerState::ReceiveCopyProperties(class APlayerState* NewPlayerState); // 0xcc51c80
		void APlayerState::ReceiveOverrideWith(class APlayerState* OldPlayerState); // 0xcc51c80
	};

	//Script/GPGameplay.BasePlayerState
	// Size: 0x4a8
	class ABasePlayerState final : public APlayerState {
	public:
		uint64_t Uin; // 0x498 (0x8)
		bool bOffline; // 0x4a0 (0x1)
		uint8_t UnknownData_9c3[0x7]; // 0x4a1 (0x7)

		// Functions
		void ABasePlayerState::OnRep_Uin(); // 0xefada0
	};
	//Script/Engine.TViewTarget
	// Size: 0xa00
	struct FTViewTarget {
	public:
		class AActor* Target; // 0x0 (0x8)
		uint8_t UnknownData_61a3[0x8]; // 0x8 (0x8)
		struct FMinimalViewInfo POV; // 0x10 (0x9e0)
		class APlayerState* PlayerState; // 0x9f0 (0x8)
		uint8_t UnknownData_61a4[0x8]; // 0x9f8 (0x8)
	};

	//Script/Engine.CameraCacheEntry
	// Size: 0x16d70
	struct FCameraCacheEntry {
	public:
		float Timestamp; // 0x0 (0x4)
		uint8_t UnknownData_61a5[0xc]; // 0x4 (0xc)
		struct FMinimalViewInfo POV; // 0x10 (0x9e0)
		uint8_t UnknownData_61a6[0x16380]; // 0x9f0 (0x16380)
	};


	//Script/Engine.Controller
	// Size: 0x3e8
	class AController final : public AActor {
	public:
		uint8_t UnknownData_e5[0x8]; // 0x370 (0x8)
		class APlayerState* PlayerState; // 0x378 (0x8)
		uint8_t UnknownData_e6[0x8]; // 0x380 (0x8)
		FDelegate OnInstigatedAnyDamage; // 0x388 (0x10)
		FName StateName; // 0x398 (0x8)
		class APawn* Pawn; // 0x3a0 (0x8)
		uint8_t UnknownData_e7[0x8]; // 0x3a8 (0x8)
		class ACHARACTER* CHARACTER; // 0x3b0 (0x8)
		class USceneComponent* TransformComponent; // 0x3b8 (0x8)
		uint8_t UnknownData_e8[0x18]; // 0x3c0 (0x18)
		struct FRotator ControlRotation; // 0x3d8 (0xc)
		bool bAttachToPawn; // 0x3e4 (0x1)
		uint8_t UnknownData_e9[0x3]; // 0x3e5 (0x3)

		// Functions
		class APlayerController* AController::CastToPlayerController(); // 0xed40480
		void AController::ClientSetLocation(struct FVector& NewLocation, struct FRotator& NewRotation); // 0xed404b0
		void AController::ClientSetRotation(struct FRotator& NewRotation, bool& bResetCamera); // 0xed40590
		struct FRotator AController::GetControlRotation(); // 0xed40670
		struct FRotator AController::GetDesiredRotation(); // 0xed406b0
		class AActor* AController::GetViewTarget(); // 0xed40940
		bool AController::IsLocalController(); // 0xed40970
		bool AController::IsLocalPlayerController(); // 0xed409a0
		bool AController::IsLookInputIgnored(); // 0xed409f0
		bool AController::IsMoveInputIgnored(); // 0xed40a20
		bool AController::IsPlayerController(); // 0xed40a50
		class APawn* AController::K2_GetPawn(); // 0xed40a80
		bool AController::LineOfSightTo(const class AActor* Other, struct FVector& ViewPoint, bool& bAlternateChecks); // 0xed40ab0
		void AController::OnRep_Pawn(); // 0x18e70b0
		void AController::OnRep_PlayerState(); // 0xa707f70
		void AController::Possess(class APawn* InPawn); // 0xed40bd0
		void AController::ReceiveInstigatedAnyDamage(float& Damage, const class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser); // 0xcc51c80
		void AController::ReceivePossess(class APawn* PossessedPawn); // 0xcc51c80
		void AController::ReceiveUnPossess(class APawn* UnpossessedPawn); // 0xcc51c80
		void AController::ResetIgnoreInputFlags(); // 0x4ee6b50
		void AController::ResetIgnoreLookInput(); // 0x4ee6fe0
		void AController::ResetIgnoreMoveInput(); // 0x4ee7020
		void AController::SetControlRotation(const struct FRotator& NewRotation); // 0xed40c50
		void AController::SetIgnoreLookInput(bool& bNewLookInput); // 0xed40ce0
		void AController::SetIgnoreMoveInput(bool& bNewMoveInput); // 0xed40d70
		void AController::SetInitialLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation); // 0xed40e00
		void AController::StopMovement(); // 0x4ee6b30
		void AController::UnPossess(); // 0xed40ef0
	};

	//Script/slua_unreal.LuaController
	// Size: 0x498
	class ALuaController final : public AController {
	public:
		uint8_t UnknownData_ea[0x90]; // 0x3e8 (0x90)
		FString LuaFilePath; // 0x478 (0x10)
		FString LuaStateName; // 0x488 (0x10)

		// Functions
		struct FLuaBPVar ALuaController::CallLuaMember(FString& FunctionName, const TArray<struct FLuaBPVar>& Args); // 0xda17a0
	};

	//Script/Engine.PlayerController
	// Size: 0x6c0
	class APlayerController final : public AController {
	public:
		EncryptedObjectProperty Player; // 0x3e8 (0x8)
		EncryptedObjectProperty AcknowledgedPawn; // 0x3f0 (0x8)
		class UInterpTrackInstDirector* ControllingDirTrackInst; // 0x3f8 (0x8)
		class AHUD* MyHUD; // 0x400 (0x8)
		EncryptedObjectProperty PlayerCameraManager; // 0x408 (0x8)
		TSubclassOf<class UClass> PlayerCameraManagerClass; // 0x410 (0x8)
		bool bAutoManageActiveCameraTarget; // 0x418 (0x1)
		uint8_t UnknownData_eb[0x3]; // 0x419 (0x3)
		struct FRotator TargetViewRotation; // 0x41c (0xc)
		uint8_t UnknownData_ec[0xc]; // 0x428 (0xc)
		float SmoothTargetViewRotationSpeed; // 0x434 (0x4)
		uint8_t UnknownData_ed[0x8]; // 0x438 (0x8)
		TArray<class AActor*> HiddenActors; // 0x440 (0x10)
		TArray<TWeakObjectPtr<class UPrimitiveComponent>> HiddenPrimitiveComponents; // 0x450 (0x10)
		uint8_t UnknownData_ee[0x4]; // 0x460 (0x4)
		float LastSpectatorStateSynchTime; // 0x464 (0x4)
		struct FVector LastSpectatorSyncLocation; // 0x468 (0xc)
		struct FRotator LastSpectatorSyncRotation; // 0x474 (0xc)
		int32_t ClientCap; // 0x480 (0x4)
		uint8_t UnknownData_ef[0x4]; // 0x484 (0x4)
		class UCheatManager* CheatManager; // 0x488 (0x8)
		TSubclassOf<class UClass> CheatClass; // 0x490 (0x8)
		class UPlayerInput* PlayerInput; // 0x498 (0x8)
		TArray<struct FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x4a0 (0x10)
		uint8_t UnknownData_f0[0x70]; // 0x4b0 (0x70)
		bool bPlayerIsWaiting; // 0x520 (0x1)
		uint8_t UnknownData_f1[0x3]; // 0x521 (0x3)
		uint8_t NetPlayerIndex; // 0x524 (0x1)
		uint8_t UnknownData_f2[0x3b]; // 0x525 (0x3b)
		class UNetConnection* PendingSwapConnection; // 0x560 (0x8)
		class UNetConnection* NetConnection; // 0x568 (0x8)
		uint8_t UnknownData_f3[0xc]; // 0x570 (0xc)
		float InputYawScale; // 0x57c (0x4)
		float InputPitchScale; // 0x580 (0x4)
		float InputRollScale; // 0x584 (0x4)
		bool bShowMouseCursor; // 0x588 (0x1)
		bool bEnableClickEvents; // 0x588 (0x1)
		bool bEnableTouchEvents; // 0x588 (0x1)
		bool bEnableMouseOverEvents; // 0x588 (0x1)
		bool bEnableTouchOverEvents; // 0x588 (0x1)
		bool bForceFeedbackEnabled; // 0x588 (0x1)
		uint8_t UnknownData_f4[0x3]; // 0x589 (0x3)
		float ForceFeedbackScale; // 0x58c (0x4)
		TArray<struct FKey> ClickEventKeys; // 0x590 (0x10)
		uint8_t DefaultMouseCursor; // 0x5a0 (0x1)
		uint8_t CurrentMouseCursor; // 0x5a1 (0x1)
		uint8_t DefaultClickTraceChannel; // 0x5a2 (0x1)
		uint8_t CurrentClickTraceChannel; // 0x5a3 (0x1)
		float HitResultTraceDistance; // 0x5a4 (0x4)
		uint16_t SeamlessTravelCount; // 0x5a8 (0x2)
		uint16_t LastCompletedSeamlessTravelCount; // 0x5aa (0x2)
		uint8_t UnknownData_f5[0x74]; // 0x5ac (0x74)
		class UInputComponent* InactiveStateInputComponent; // 0x620 (0x8)
		bool bShouldPerformFullTickWhenPaused; // 0x628 (0x1)
		uint8_t UnknownData_f6[0x17]; // 0x629 (0x17)
		class UTouchInterface* CurrentTouchInterface; // 0x640 (0x8)
		uint8_t UnknownData_f7[0x50]; // 0x648 (0x50)
		class ASpectatorPawn* SpectatorPawn; // 0x698 (0x8)
		uint8_t UnknownData_f8[0x4]; // 0x6a0 (0x4)
		bool bIsLocalPlayerController; // 0x6a4 (0x1)
		uint8_t UnknownData_f9[0x3]; // 0x6a5 (0x3)
		struct FVector SpawnLocation; // 0x6a8 (0xc)
		uint8_t UnknownData_fa[0xc]; // 0x6b4 (0xc)

		// Functions
		void APlayerController::ActivateTouchInterface(class UTouchInterface* NewTouchInterface); // 0xee1f7a0
		void APlayerController::AddPitchInput(float& Val); // 0xee1f970
		void APlayerController::AddRollInput(float& Val); // 0xc50e730
		void APlayerController::AddYawInput(float& Val); // 0xee1f9f0
		void APlayerController::Camera(FName& NewMode); // 0xee1fa70
		bool APlayerController::CanRestartPlayer(); // 0xee1fb00
		void APlayerController::ClearAudioListenerAttenuationOverride(); // 0xee1fb30
		void APlayerController::ClearAudioListenerOverride(); // 0xee1fb50
		void APlayerController::ClientAddTextureStreamingLoc(struct FVector& InLoc, float& Duration, bool& bOverrideLocation); // 0xee1fb70
		void APlayerController::ClientCancelPendingMapChange(); // 0xee1fc90
		void APlayerController::ClientCapBandwidth(int32_t& Cap); // 0xee1fcb0
		void APlayerController::ClientClearCameraLensEffects(); // 0xee1fd40
		void APlayerController::ClientCommitMapChange(); // 0xee1fd60
		void APlayerController::ClientEnableNetworkVoice(bool& bEnable); // 0xee1fd80
		void APlayerController::ClientEndOnlineSession(); // 0xa5c30f0
		void APlayerController::ClientFlushLevelStreaming(); // 0xee1fe10
		void APlayerController::ClientForceGarbageCollection(); // 0xdec19b0
		void APlayerController::ClientGameEnded(class AActor* EndGameFocus, bool& bIsWinner); // 0xc411480
		void APlayerController::ClientGotoState(FName& NewState); // 0xc4fc420
		void APlayerController::ClientIgnoreLookInput(bool& bIgnore); // 0xee1fe30
		void APlayerController::ClientIgnoreMoveInput(bool& bIgnore); // 0xaf23610
		void APlayerController::ClientMessage(FString& S, FName& Type, float& MsgLifeTime); // 0xee1fec0
		void APlayerController::ClientMutePlayer(struct FUniqueNetIdRepl& PlayerId); // 0xee20010
		void APlayerController::ClientPlayCameraAnim(class UCameraAnim* AnimToPlay, float& Scale, float& Rate, float& BlendInTime, float& BlendOutTime, bool& bLoop, bool& bRandomStartTime, uint8_t& Space, struct FRotator& CustomPlaySpace); // 0xee20160
		void APlayerController::ClientPlayCameraShake(TSubclassOf<class UClass>& Shake, float& Scale, uint8_t& PlaySpace, struct FRotator& UserPlaySpaceRot); // 0xee20400
		void APlayerController::ClientPlayForceFeedback_Internal(class UForceFeedbackEffect* ForceFeedbackEffect, struct FForceFeedbackParameters& Params); // 0xee20550
		void APlayerController::ClientPlaySound(class USoundBase* Sound, float& VolumeMultiplier, float& PitchMultiplier); // 0xee20640
		void APlayerController::ClientPlaySoundAtLocation(class USoundBase* Sound, struct FVector& Location, float& VolumeMultiplier, float& PitchMultiplier); // 0xee20740
		void APlayerController::ClientPrepareMapChange(FName& LevelName, bool& bFirst, bool& bLast); // 0xee20890
		void APlayerController::ClientPrestreamTextures(class AActor* ForcedActor, float& ForceDuration, bool& bEnableStreaming, int32_t& CinematicTextureGroups); // 0xee209a0
		void APlayerController::ClientReceiveLocalizedMessage(TSubclassOf<class UClass>& Message, int32_t& Switch, class APlayerState* RelatedPlayerState, class APlayerState* RelatedPlayerState, class UObject* OptionalObject); // 0xee20af0
		void APlayerController::ClientRepObjRef(class UObject* Object); // 0xc502c80
		void APlayerController::ClientReset(); // 0x4dd23c0
		void APlayerController::ClientRestart(class APawn* NewPawn); // 0xc513f80
		void APlayerController::ClientRetryClientRestart(class APawn* NewPawn); // 0xa6ba040
		void APlayerController::ClientReturnToMainMenu(FString& ReturnReason); // 0xee20c70
		void APlayerController::ClientReturnToMainMenuWithTextReason(const FText& ReturnReason); // 0xee20d40
		void APlayerController::ClientSetBlockOnAsyncLoading(); // 0x1fd8c00
		void APlayerController::ClientSetCameraFade(bool& bEnableFading, struct FColor& FadeColor, struct FVector2D& FadeAlpha, float& FadeTime, bool& bFadeAudio); // 0xee20e00
		void APlayerController::ClientSetCameraMode(FName& NewCamMode); // 0xa6a1a50
		void APlayerController::ClientSetCinematicMode(bool& bInCinematicMode, bool& bAffectsMovement, bool& bAffectsTurning, bool& bAffectsHUD); // 0xee20f90
		void APlayerController::ClientSetForceMipLevelsToBeResident(class UMaterialInterface* Material, float& ForceDuration, int32_t& CinematicTextureGroups); // 0xee21100
		void APlayerController::ClientSetHUD(TSubclassOf<class UClass>& NewHUDClass); // 0xee21200
		void APlayerController::ClientSetSpectatorWaiting(bool& bWaiting); // 0xee21290
		void APlayerController::ClientSetViewTarget(class AActor* A, struct FViewTargetTransitionParams& TransitionParams); // 0xee21320
		void APlayerController::ClientSpawnCameraLensEffect(TSubclassOf<class UClass>& LensEffectEmitterClass); // 0xee21400
		void APlayerController::ClientStartOnlineSession(); // 0x4e8dbf0
		void APlayerController::ClientStopCameraAnim(class UCameraAnim* AnimToStop); // 0xee21490
		void APlayerController::ClientStopCameraShake(TSubclassOf<class UClass>& Shake, bool& bImmediately); // 0xee21520
		void APlayerController::ClientStopForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, FName& Tag); // 0xa74c5c0
		void APlayerController::ClientTeamMessage(class APlayerState* SenderPlayerState, FString& S, FName& Type, float& MsgLifeTime); // 0xee215f0
		void APlayerController::ClientTravel(FString& URL, uint8_t& TravelType, bool& bSeamless, struct FGuid& MapPackageGuid); // 0xee21770
		void APlayerController::ClientTravelInternal(FString& URL, uint8_t& TravelType, bool& bSeamless, struct FGuid& MapPackageGuid); // 0xee21900
		void APlayerController::ClientUnmutePlayer(struct FUniqueNetIdRepl& PlayerId); // 0xee21a90
		void APlayerController::ClientUpdateLevelStreamingStatus(FName& PackageName, bool& bNewShouldBeLoaded, bool& bNewShouldBeVisible, bool& bNewShouldBlockOnLoad, int32_t& LodIndex); // 0xee21be0
		void APlayerController::ClientUpdateMultipleLevelsStreamingStatus(const TArray<struct FUpdateLevelStreamingLevelStatus>& LevelStatuses); // 0xee21d90
		void APlayerController::ClientVoiceHandshakeComplete(); // 0x4f8dd10
		void APlayerController::ClientWasKicked(const FText& KickReason); // 0xee21e60
		void APlayerController::ConsoleKey(struct FKey& Key); // 0xee21f20
		bool APlayerController::DeprojectMousePositionToWorld(struct FVector& WorldLocation, struct FVector& WorldDirection, bool& bPlayerViewportRelative); // 0xee22000
		bool APlayerController::DeprojectScreenPositionToWorld(float& ScreenX, float& ScreenY, struct FVector& WorldLocation, struct FVector& WorldDirection, bool& bPlayerViewportRelative); // 0xee22140
		void APlayerController::EnableCheats(); // 0x1fd9650
		void APlayerController::FOV(float& NewFOV); // 0xee22310
		struct FVector APlayerController::GetFocalLocation(); // 0xee224b0
		bool APlayerController::GetHitResultUnderCursor(uint8_t& TraceChannel, bool& bTraceComplex, struct FHitResult& HitResult); // 0xee22830
		bool APlayerController::GetHitResultUnderCursorByChannel(uint8_t& TraceChannel, bool& bTraceComplex, struct FHitResult& HitResult); // 0xee229b0
		bool APlayerController::GetHitResultUnderCursorForObjects(const TArray<uint8_t>& ObjectTypes, bool& bTraceComplex, struct FHitResult& HitResult); // 0xee22b30
		bool APlayerController::GetHitResultUnderFinger(uint8_t& FingerIndex, uint8_t& TraceChannel, bool& bTraceComplex, struct FHitResult& HitResult); // 0xee22cd0
		bool APlayerController::GetHitResultUnderFingerByChannel(uint8_t& FingerIndex, uint8_t& TraceChannel, bool& bTraceComplex, struct FHitResult& HitResult); // 0xee22e60
		bool APlayerController::GetHitResultUnderFingerForObjects(uint8_t& FingerIndex, const TArray<uint8_t>& ObjectTypes, bool& bTraceComplex, struct FHitResult& HitResult); // 0xee22ff0
		class AHUD* APlayerController::GetHUD(); // 0xee224f0
		float APlayerController::GetInputAnalogKeyState(struct FKey& Key); // 0xee231e0
		void APlayerController::GetInputAnalogStickState(uint8_t& WhichStick, float& StickX, float& Sticky); // 0xee232d0
		float APlayerController::GetInputKeyTimeDown(struct FKey& Key); // 0xee233f0
		void APlayerController::GetInputMotionState(struct FVector& Tilt, struct FVector& RotationRate, struct FVector& Gravity, struct FVector& Acceleration); // 0xee234e0
		void APlayerController::GetInputMouseDelta(float& DeltaX, float& DeltaY); // 0xee23670
		void APlayerController::GetInputTouchState(uint8_t& FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed); // 0xee23750
		struct FVector APlayerController::GetInputVectorKeyState(struct FKey& Key); // 0xee238d0
		bool APlayerController::GetMousePosition(float& LocationX, float& LocationY); // 0xee239d0
		class ASpectatorPawn* APlayerController::GetSpectatorPawn(); // 0xee23b20
		void APlayerController::GetViewportSize(int32_t& SizeX, int32_t& SizeY); // 0xee23b40
		bool APlayerController::IsInputKeyDown(struct FKey& Key); // 0xee23c20
		void APlayerController::K2_ClientPlayForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, FName& Tag, bool& bLooping, bool& bIgnoreTimeDilation, bool& bPlayWhilePaused); // 0xee23d10
		void APlayerController::LocalTravel(FString& URL); // 0xee23ec0
		void APlayerController::OnServerStartedVisualLogger(bool& bIsLogging); // 0xee23f90
		void APlayerController::Pause(); // 0xee24020
		void APlayerController::PlayDynamicForceFeedback(float& Intensity, float& Duration, bool& bAffectsLeftLarge, bool& bAffectsLeftSmall, bool& bAffectsRightLarge, bool& bAffectsRightSmall, uint8_t& Action, struct FLatentActionInfo& LatentInfo); // 0xee24610
		void APlayerController::PlayHapticEffect(class UHapticFeedbackEffect_Base* HapticEffect, EEControllerHand& Hand, float& Scale, bool& bLoop); // 0xee24890
		bool APlayerController::ProjectWorldLocationToScreen(struct FVector& WorldLocation, struct FVector2D& ScreenLocation, bool& bPlayerViewportRelative); // 0xee249e0
		void APlayerController::ResetControllerLightColor(); // 0xee24bb0
		void APlayerController::RestartLevel(); // 0x4e476e0
		void APlayerController::SendToConsole(FString& Command); // 0xee24bd0
		void APlayerController::ServerAcknowledgePossession(class APawn* P); // 0xee24ca0
		void APlayerController::ServerCamera(FName& NewMode); // 0xee24d60
		void APlayerController::ServerChangeName(FString& S); // 0xee24e20
		void APlayerController::ServerCheckClientPossession(); // 0xee24f10
		void APlayerController::ServerCheckClientPossessionReliable(); // 0xee24f60
		void APlayerController::ServerExec(FString& Msg); // 0xa98cfb0
		void APlayerController::ServerExecRPC(FString& Msg); // 0xee24fb0
		void APlayerController::ServerMutePlayer(struct FUniqueNetIdRepl& PlayerId); // 0xee250a0
		void APlayerController::ServerNotifyLoadedWorld(FName& WorldPackageName); // 0xee25220
		void APlayerController::ServerPause(); // 0xee252d0
		void APlayerController::ServerRestartPlayer(); // 0xee25320
		void APlayerController::ServerSetSpectatorLocation(struct FVector& NewLoc, struct FRotator& NewRot); // 0xee25370
		void APlayerController::ServerSetSpectatorWaiting(bool& bWaiting); // 0xee254a0
		void APlayerController::ServerShortTimeout(); // 0xee25560
		void APlayerController::ServerToggleAILogging(); // 0xee255b0
		void APlayerController::ServerUnmutePlayer(struct FUniqueNetIdRepl& PlayerId); // 0xee25600
		void APlayerController::ServerUpdateCamera(struct FVector_NetQuantize& CamLoc, int32_t& CamPitchAndYaw); // 0xee25780
		void APlayerController::ServerUpdateLevelVisibility(const struct FUpdateLevelVisibilityLevelInfo& LevelVisibility); // 0xee258a0
		void APlayerController::ServerUpdateMultipleLevelsVisibility(const TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities); // 0xee25960
		void APlayerController::ServerVerifyViewTarget(); // 0xee25a40
		void APlayerController::ServerViewNextPlayer(); // 0xee25a90
		void APlayerController::ServerViewPrevPlayer(); // 0xee25ae0
		void APlayerController::ServerViewSelf(struct FViewTargetTransitionParams& TransitionParams); // 0xee25b30
		void APlayerController::SetAudioListenerAttenuationOverride(class USceneComponent* AttachToComponent, struct FVector& AttenuationLocationOVerride); // 0xee25c10
		void APlayerController::SetAudioListenerOverride(class USceneComponent* AttachToComponent, struct FVector& Location, struct FRotator& Rotation); // 0xee25ce0
		void APlayerController::SetCinematicMode(bool& bInCinematicMode, bool& bHidePlayer, bool& bAffectsHUD, bool& bAffectsMovement, bool& bAffectsTurning); // 0xee25e00
		void APlayerController::SetControllerLightColor(struct FColor& Color); // 0xee25fc0
		void APlayerController::SetDisableHaptics(bool& bNewDisabled); // 0xee26030
		void APlayerController::SetHapticsByValue(const float& frequency, const float& Amplitude, EEControllerHand& Hand); // 0xee260e0
		void APlayerController::SetMouseCursorWidget(uint8_t& Cursor, class UUserWidget* CursorWidget); // 0xee26300
		void APlayerController::SetMouseLocation(const int32_t& X, const int32_t& Y); // 0xee263c0
		void APlayerController::SetName(FString& S); // 0xee26480
		void APlayerController::SetViewTargetWithBlend(class AActor* NewViewTarget, float& BlendTime, uint8_t& BlendFunc, float& BlendExp, bool& bLockOutgoing); // 0xee26550
		void APlayerController::SetVirtualJoystickVisibility(bool& bVisible); // 0xee266d0
		void APlayerController::StartFire(uint8_t& FireModeNum); // 0xee26930
		void APlayerController::StopHapticEffect(EEControllerHand& Hand); // 0xee26cf0
		void APlayerController::SwitchLevel(FString& URL); // 0xee26d70
		void APlayerController::TestServerLevelVisibilityChange(const FName& PackageName, const FName& Filename); // 0x28a4f50
		void APlayerController::ToggleSpeaking(bool& bInSpeaking); // 0xee26e40
		bool APlayerController::WasInputKeyJustPressed(struct FKey& Key); // 0xee26ed0
		bool APlayerController::WasInputKeyJustReleased(struct FKey& Key); // 0xee26fc0
	};
	//Script/Engine.PlayerCameraManager
	// Size: 0x5cee0
	class APlayerCameraManager final : public AActor {
	public:
		class APlayerController* PCOwner; // 0x370 (0x8)
		class USceneComponent* TransformComponent; // 0x378 (0x8)
		uint8_t UnknownData_828[0x8]; // 0x380 (0x8)
		float DefaultFOV; // 0x388 (0x4)
		uint8_t UnknownData_829[0x4]; // 0x38c (0x4)
		float DefaultOrthoWidth; // 0x390 (0x4)
		uint8_t UnknownData_82a[0x4]; // 0x394 (0x4)
		float DefaultAspectRatio; // 0x398 (0x4)
		uint8_t UnknownData_82b[0x44]; // 0x39c (0x44)
		struct FCameraCacheEntry CameraCache; // 0x3e0 (0x16d70)
		struct FCameraCacheEntry LastFrameCameraCache; // 0x17150 (0x16d70)
		struct FTViewTarget ViewTarget; // 0x2dec0 (0xa00)
		struct FTViewTarget PendingViewTarget; // 0x2e8c0 (0xa00)
		uint8_t UnknownData_82c[0x20]; // 0x2f2c0 (0x20)
		struct FCameraCacheEntry CameraCachePrivate; // 0x2f2e0 (0x16d70)
		struct FCameraCacheEntry LastFrameCameraCachePrivate; // 0x46050 (0x16d70)
		TArray<class UCameraModifier*> ModifierList; // 0x5cdc0 (0x10)
		TArray<TSubclassOf<class UClass>> DefaultModifiers; // 0x5cdd0 (0x10)
		float FreeCamDistance; // 0x5cde0 (0x4)
		struct FVector FreeCamOffset; // 0x5cde4 (0xc)
		struct FVector ViewTargetOffset; // 0x5cdf0 (0xc)
		uint8_t UnknownData_82d[0x14]; // 0x5cdfc (0x14)
		TArray<class AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x5ce10 (0x10)
		class UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x5ce20 (0x8)
		class UCameraAnimInst* AnimInstPool; // 0x5ce28 (0x8)
		uint8_t UnknownData_82e[0x38]; // 0x5ce30 (0x38)
		TArray<struct FPostProcessSettings> PostProcessBlendCache; // 0x5ce68 (0x10)
		uint8_t UnknownData_82f[0x10]; // 0x5ce78 (0x10)
		TArray<class UCameraAnimInst*> ActiveAnims; // 0x5ce88 (0x10)
		TArray<class UCameraAnimInst*> FreeAnims; // 0x5ce98 (0x10)
		class ACameraActor* AnimCameraActor; // 0x5cea8 (0x8)
		bool bIsOrthographic; // 0x5ceb0 (0x1)
		bool bDefaultConstrainAspectRatio; // 0x5ceb0 (0x1)
		bool bClientSimulatingViewTarget; // 0x5ceb0 (0x1)
		bool bUseClientSideCameraUpdates; // 0x5ceb0 (0x1)
		bool bGameCameraCutThisFrame; // 0x5ceb1 (0x1)
		uint8_t UnknownData_830[0x2]; // 0x5ceb2 (0x2)
		float ViewPitchMin; // 0x5ceb4 (0x4)
		float ViewPitchMax; // 0x5ceb8 (0x4)
		float ViewYawMin; // 0x5cebc (0x4)
		float ViewYawMax; // 0x5cec0 (0x4)
		float ViewRollMin; // 0x5cec4 (0x4)
		float ViewRollMax; // 0x5cec8 (0x4)
		uint8_t UnknownData_831[0x4]; // 0x5cecc (0x4)
		float ServerUpdateCameraTimeout; // 0x5ced0 (0x4)
		uint8_t UnknownData_832[0xc]; // 0x5ced4 (0xc)

		// Functions
		class AEmitterCameraLensEffectBase* APlayerCameraManager::AddCameraLensEffect(TSubclassOf<class UClass>& LensEffectEmitterClass); // 0xee1f830
		class UCameraModifier* APlayerCameraManager::AddNewCameraModifier(TSubclassOf<class UClass>& ModifierClass); // 0xee1f8d0
		bool APlayerCameraManager::BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector& NewCameraLocation, struct FRotator& NewCameraRotation, float& NewCameraFOV); // 0xcc51c80
		void APlayerCameraManager::ClearCameraLensEffects(); // 0x18cae40
		class UCameraModifier* APlayerCameraManager::FindCameraModifierByClass(TSubclassOf<class UClass>& ModifierClass); // 0xee22390
		struct FVector APlayerCameraManager::GetCameraLocation(); // 0xee22430
		struct FRotator APlayerCameraManager::GetCameraRotation(); // 0xee22470
		float APlayerCameraManager::GetFOVAngle(); // 0xa6c0650
		class APlayerController* APlayerCameraManager::GetOwningPlayerController(); // 0xee23af0
		void APlayerCameraManager::OnPhotographyMultiPartCaptureEnd(); // 0xf010a0
		void APlayerCameraManager::OnPhotographyMultiPartCaptureStart(); // 0xefa640
		void APlayerCameraManager::OnPhotographySessionEnd(); // 0xef9d40
		void APlayerCameraManager::OnPhotographySessionStart(); // 0xef9d20
		void APlayerCameraManager::PhotographyCameraModify(const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector& ResultCameraLocation); // 0xee24040
		class UCameraAnimInst* APlayerCameraManager::PlayCameraAnim(class UCameraAnim* Anim, float& Rate, float& Scale, float& BlendInTime, float& BlendOutTime, bool& bLoop, bool& bRandomStartTime, float& Duration, uint8_t& PlaySpace, struct FRotator& UserPlaySpaceRot); // 0xee241c0
		class UCameraShake* APlayerCameraManager::PlayCameraShake(TSubclassOf<class UClass>& ShakeClass, float& Scale, uint8_t& PlaySpace, struct FRotator& UserPlaySpaceRot); // 0xee244a0
		void APlayerCameraManager::RemoveCameraLensEffect(class AEmitterCameraLensEffectBase* Emitter); // 0xa7ccff0
		bool APlayerCameraManager::RemoveCameraModifier(class UCameraModifier* ModifierToRemove); // 0xee24b10
		void APlayerCameraManager::SetGameCameraCutThisFrame(); // 0xee260c0
		void APlayerCameraManager::SetManualCameraFade(float& InFadeAmount, struct FLinearColor& Color, bool& bInFadeAudio); // 0xee261e0
		void APlayerCameraManager::StartCameraFade(float& FromAlpha, float& ToAlpha, float& Duration, struct FLinearColor& Color, bool& bShouldFadeAudio, bool& bHoldWhenFinished); // 0xee26760
		void APlayerCameraManager::StopAllCameraAnims(bool& bImmediate); // 0xa7c9b30
		void APlayerCameraManager::StopAllCameraShakes(bool& bImmediately); // 0x4ee74b0
		void APlayerCameraManager::StopAllInstancesOfCameraAnim(class UCameraAnim* Anim, bool& bImmediate); // 0xee269b0
		void APlayerCameraManager::StopAllInstancesOfCameraShake(TSubclassOf<class UClass>& Shake, bool& bImmediately); // 0xee26a80
		void APlayerCameraManager::StopCameraAnimInst(class UCameraAnimInst* AnimInst, bool& bImmediate); // 0xee26b50
		void APlayerCameraManager::StopCameraFade(); // 0xa72efe0
		void APlayerCameraManager::StopCameraShake(class UCameraShake* ShakeInstance, bool& bImmediately); // 0xee26c20
	};


	//Script/Engine.StaticMesh
	// Size: 0x190
	class UStaticMesh final : public UStreamableRenderAsset {
	public:
		uint8_t UnknownData_3bf6[0x20]; // 0x40 (0x20)
		EEMaterialErrorType EPreviewStateTpye; // 0x60 (0x1)
		uint8_t UnknownData_3bf7[0x3]; // 0x61 (0x3)
		struct FPerPlatformInt MinLOD; // 0x64 (0x4)
		float CullingDistance; // 0x68 (0x4)
		float CullingScreenSize; // 0x6c (0x4)
		FName MeshGroup; // 0x70 (0x8)
		bool bCastShadow; // 0x78 (0x1)
		uint8_t UnknownData_3bf8[0x7]; // 0x79 (0x7)
		bool bThin; // 0x80 (0x1)
		bool bForceUsePrtForHD; // 0x81 (0x1)
		bool bForceUsePrtForMobile; // 0x82 (0x1)
		uint8_t UnknownData_3bf9[0x1]; // 0x83 (0x1)
		float LpvBiasMultiplier; // 0x84 (0x4)
		TArray<struct FStaticMaterial> StaticMaterials; // 0x88 (0x10)
		float LightmapUVDensity; // 0x98 (0x4)
		int32_t LightMapResolution; // 0x9c (0x4)
		int32_t LightMapCoordinateIndex; // 0xa0 (0x4)
		float DistanceFieldSelfShadowBias; // 0xa4 (0x4)
		class UBodySetup* BodySetup; // 0xa8 (0x8)
		int32_t LODForCollision; // 0xb0 (0x4)
		uint8_t RenderToVTPriority; // 0xb4 (0x1)
		bool bGenerateMeshDistanceField; // 0xb5 (0x1)
		bool bFarShadow; // 0xb5 (0x1)
		bool bLODShadowBias; // 0xb5 (0x1)
		uint8_t UnknownData_3bfa[0x2]; // 0xb6 (0x2)
		float LODShadowBiasScale; // 0xb8 (0x4)
		float LocalLightShadowBias; // 0xbc (0x4)
		bool bStripComplexCollisionForConsole; // 0xc0 (0x1)
		bool bHasNavigationData; // 0xc0 (0x1)
		bool bSupportUniformlyDistributedSampling; // 0xc0 (0x1)
		bool bSupportRayTracing; // 0xc0 (0x1)
		bool bCreateBodySetup; // 0xc0 (0x1)
		bool bIndexBufferAllowCPUAccess; // 0xc0 (0x1)
		bool bIsBuiltAtRuntime; // 0xc0 (0x1)
		bool bAllowCPUAccess; // 0xc1 (0x1)
		bool bSupportGpuUniformlyDistributedSampling; // 0xc1 (0x1)
		uint8_t UnknownData_3bfb[0x26]; // 0xc2 (0x26)
		TArray<class UStaticMeshSocket*> Sockets; // 0xe8 (0x10)
		uint8_t UnknownData_3bfc[0x10]; // 0xf8 (0x10)
		struct FVector PositiveBoundsExtension; // 0x108 (0xc)
		struct FVector NegativeBoundsExtension; // 0x114 (0xc)
		struct FBoxSphereBounds ExtendedBounds; // 0x120 (0x1c)
		int32_t ElementToIgnoreForTexFactor; // 0x13c (0x4)
		TArray<class UAssetUserData*> AssetUserData; // 0x140 (0x10)
		uint8_t UnknownData_3bfd[0x8]; // 0x150 (0x8)
		class UObject* EditableMesh; // 0x158 (0x8)
		TArray<class UPhysicalMaterial*> ComplexCollisionMaterials; // 0x160 (0x10)
		TArray<class UPhysicalMaterial*> ComplexCollisionMaterials_PC; // 0x170 (0x10)
		bool bAffectDistanceFieldShadowing; // 0x180 (0x1)
		uint8_t UnknownData_3bfe[0x7]; // 0x181 (0x7)
		class UNavCollisionBase* NavCollision; // 0x188 (0x8)

		// Functions
		FName UStaticMesh::AddMaterial(class UMaterialInterface* Material); // 0xee63d80
		void UStaticMesh::AddSocket(class UStaticMeshSocket* Socket); // 0xee63e10
		void UStaticMesh::BuildFromStaticMeshDescriptions(const TArray<class UStaticMeshDescription*> StaticMeshDescriptions); // 0xee63e90
		class UStaticMeshDescription* UStaticMesh::CreateStaticMeshDescription(class UObject* Outer); // 0xee63f60
		class UStaticMeshSocket* UStaticMesh::FindSocket(FName& InSocketName); // 0xee63fe0
		struct FBox UStaticMesh::GetBoundingBox(); // 0xee640d0
		struct FBoxSphereBounds UStaticMesh::GetBounds(); // 0xee64120
		class UMaterialInterface* UStaticMesh::GetMaterial(int32_t& MaterialIndex); // 0xee642d0
		int32_t UStaticMesh::GetMaterialIndex(FName& MaterialSlotName); // 0xee64360
		int32_t UStaticMesh::GetMinimumLODForPlatform(const FName& PlatformName); // 0xee643f0
		void UStaticMesh::GetMinimumLODForPlatforms(TMap<void*, void*> PlatformMinimumLODs); // 0xee64470
		int32_t UStaticMesh::GetNumLODs(); // 0xee64560
		int32_t UStaticMesh::GetNumSections(int32_t& inLOD); // 0xee64590
		TArray<struct FStaticMaterial> UStaticMesh::GetStaticMaterials(); // 0xee64790
		void UStaticMesh::RemoveSocket(class UStaticMeshSocket* Socket); // 0xee64870
		void UStaticMesh::SetStaticMaterials(const TArray<struct FStaticMaterial>& InStaticMaterials); // 0xee65820
	};

	//Script/Engine.StaticLabelMesh
	// Size: 0x190
	class UStaticLabelMesh final : public UStaticMesh {
	public:
		// No properties
	};
	//Script/Engine.DestructibleStaticMesh
	// Size: 0x200
	class UDestructibleStaticMesh final : public UStaticLabelMesh {
	public:
		uint8_t UnknownData_3bff[0x10]; // 0x190 (0x10)
		TArray<class UBodySetup*> BodySetups; // 0x1a0 (0x10)
		TArray<struct FComplexCollisionMaterialArray> BodyComplexCollisionMaterials; // 0x1b0 (0x10)
		TArray<struct FComplexCollisionMaterialArray> BodyComplexCollisionMaterials_HD; // 0x1c0 (0x10)
		TArray<class UPhysicalMaterial*> AllComplexCollisionMaterials; // 0x1d0 (0x10)
		uint8_t UnknownData_3c00[0x20]; // 0x1e0 (0x20)
	};

	//Script/Engine.BodySetup
	// Size: 0x250
	class UBodySetup final : public UObject {
	public:
		struct FKAggregateGeom AggGeom; // 0x28 (0x58)
		FName BoneName; // 0x80 (0x8)
		uint8_t PhysicsType; // 0x88 (0x1)
		bool bAlwaysFullAnimWeight; // 0x89 (0x1)
		bool bConsiderForBounds; // 0x89 (0x1)
		bool bMeshCollideAll; // 0x89 (0x1)
		bool bDoubleSidedGeometry; // 0x89 (0x1)
		bool bGenerateNonMirroredCollision; // 0x89 (0x1)
		bool bSharedCookedData; // 0x89 (0x1)
		bool bGenerateMirroredCollision; // 0x89 (0x1)
		uint8_t UnknownData_3bb2[0x1]; // 0x8a (0x1)
		uint8_t BindedTraceMaskFilter; // 0x8b (0x1)
		uint8_t CollisionReponse; // 0x8c (0x1)
		uint8_t CollisionTraceFlag; // 0x8d (0x1)
		uint8_t UnknownData_3bb3[0x2]; // 0x8e (0x2)
		class UPhysicalMaterial* PhysMaterial; // 0x90 (0x8)
		struct FWalkableSlopeOverride WalkableSlopeOverride; // 0x98 (0x10)
		uint8_t UnknownData_3bb4[0x68]; // 0xa8 (0x68)
		struct FBodyInstance DefaultInstance; // 0x110 (0x120)
		uint8_t UnknownData_3bb5[0x8]; // 0x230 (0x8)
		struct FVector BuildScale3D; // 0x238 (0xc)
		uint8_t UnknownData_3bb6[0xc]; // 0x244 (0xc)
	};

	//Script/Engine.SceneComponent
	// Size: 0x250
	class USceneComponent final : public UActorComponent {
	public:
		uint8_t UnknownData_af[0x8]; // 0xf8 (0x8)
		TWeakObjectPtr<class UPhysicsVolume> PhysicsVolume; // 0x100 (0x8)
		class USceneComponent* AttachParent; // 0x108 (0x8)
		FName AttachSocketName; // 0x110 (0x8)
		TArray<class USceneComponent*> AttachChildren; // 0x118 (0x10)
		TArray<class USceneComponent*> ClientAttachedChildren; // 0x128 (0x10)
		uint8_t UnknownData_b0[0x30]; // 0x138 (0x30)
		struct FEncVector RelativeLocation; // 0x168 (0x10)
		struct FRotator RelativeRotation; // 0x178 (0xc)
		struct FVector RelativeScale3D; // 0x184 (0xc)
		struct FVector ComponentVelocity; // 0x190 (0xc)
		bool bComponentToWorldUpdated; // 0x19c (0x1)
		bool bAbsoluteLocation; // 0x19c (0x1)
		bool bAbsoluteRotation; // 0x19c (0x1)
		bool bAbsoluteScale; // 0x19c (0x1)
		bool bVisible; // 0x19c (0x1)
		bool bHiddenInGame; // 0x19c (0x1)
		bool bSkipUpdateTransformsWhenHidden; // 0x19c (0x1)
		bool bShouldBeAttached; // 0x19d (0x1)
		bool bShouldSnapLocationWhenAttached; // 0x19d (0x1)
		bool bShouldSnapRotationWhenAttached; // 0x19d (0x1)
		bool bShouldUpdatePhysicsVolume; // 0x19d (0x1)
		bool bBoundsChangeTriggersStreamingDataRebuild; // 0x19d (0x1)
		bool bUseAttachParentBound; // 0x19d (0x1)
		uint8_t UnknownData_b1[0x1]; // 0x19e (0x1)
		uint8_t Mobility; // 0x19f (0x1)
		uint8_t DetailMode; // 0x1a0 (0x1)
		FDelegate PhysicsVolumeChangedDelegate; // 0x1a1 (0x1)
		uint8_t UnknownData_b2[0xae]; // 0x1a2 (0xae)

		// Functions
		void USceneComponent::DetachFromParent(bool& bMaintainWorldPosition, bool& bCallModify); // 0xee41880
		bool USceneComponent::DoesSocketExist(FName& InSocketName); // 0xee41950
		TArray<FName> USceneComponent::GetAllSocketNames(); // 0xee419f0
		class USceneComponent* USceneComponent::GetAttachParent(); // 0xa6cedc0
		FName USceneComponent::GetAttachSocketName(); // 0xa6cee20
		class USceneComponent* USceneComponent::GetChildComponent(int32_t& ChildIndex); // 0xee41ad0
		void USceneComponent::GetChildrenComponents(bool& bIncludeAllDescendants, TArray<class USceneComponent*> Children); // 0xee41b60
		struct FVector USceneComponent::GetComponentVelocity(); // 0xee41c80
		struct FVector USceneComponent::GetForwardVector(); // 0xee41cc0
		int32_t USceneComponent::GetNumChildrenComponents(); // 0xee41d00
		void USceneComponent::GetParentComponents(TArray<class USceneComponent*> Parents); // 0xee41d30
		class APhysicsVolume* USceneComponent::GetPhysicsVolume(); // 0xee41e00
		struct FTransform USceneComponent::GetRelativeTransform(); // 0xee41e30
		struct FVector USceneComponent::GetRightVector(); // 0xee41e90
		bool USceneComponent::GetShouldUpdatePhysicsVolume(); // 0xee41ed0
		struct FVector USceneComponent::GetSocketLocation(FName& InSocketName); // 0xee41f00
		struct FQuat USceneComponent::GetSocketQuaternion(FName& InSocketName); // 0xee41fb0
		struct FRotator USceneComponent::GetSocketRotation(FName& InSocketName); // 0xee42050
		struct FTransform USceneComponent::GetSocketTransform(FName& InSocketName, uint8_t& TransformSpace); // 0xee42100
		struct FVector USceneComponent::GetUpVector(); // 0xee42200
		bool USceneComponent::IsAnySimulatingPhysics(); // 0xee42340
		bool USceneComponent::IsSimulatingPhysics(FName& BoneName); // 0x1b93850
		bool USceneComponent::IsVisible(); // 0x4eaaa00
		void USceneComponent::K2_AddLocalOffset(struct FVector& DeltaLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee42370
		void USceneComponent::K2_AddLocalRotation(struct FRotator& DeltaRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee42510
		void USceneComponent::K2_AddLocalTransform(const struct FTransform& DeltaTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee426b0
		void USceneComponent::K2_AddRelativeLocation(struct FVector& DeltaLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee428b0
		void USceneComponent::K2_AddRelativeRotation(struct FRotator& DeltaRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee42a50
		void USceneComponent::K2_AddWorldOffset(struct FVector& DeltaLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee42bf0
		void USceneComponent::K2_AddWorldRotation(struct FRotator& DeltaRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee42d90
		void USceneComponent::K2_AddWorldTransform(const struct FTransform& DeltaTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee42f30
		bool USceneComponent::K2_AttachTo(class USceneComponent* InParent, FName& InSocketName, uint8_t& AttachType, bool& bWeldSimulatedBodies); // 0xee43130
		bool USceneComponent::K2_AttachToComponent(class USceneComponent* Parent, FName& SocketName, EEAttachmentRule& LocationRule, EEAttachmentRule& RotationRule, EEAttachmentRule& ScaleRule, bool& bWeldSimulatedBodies); // 0xee43280
		void USceneComponent::K2_DetachFromComponent(EEDetachmentRule& LocationRule, EEDetachmentRule& RotationRule, EEDetachmentRule& ScaleRule, bool& bCallModify); // 0xee43430
		struct FVector USceneComponent::K2_GetComponentLocation(); // 0xee43580
		struct FRotator USceneComponent::K2_GetComponentRotation(); // 0xee435c0
		struct FVector USceneComponent::K2_GetComponentScale(); // 0xee43600
		struct FTransform USceneComponent::K2_GetComponentToWorld(); // 0xee43640
		void USceneComponent::K2_SetRelativeLocation(struct FVector& NewLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee436a0
		void USceneComponent::K2_SetRelativeLocationAndRotation(struct FVector& NewLocation, struct FRotator& NewRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee43840
		void USceneComponent::K2_SetRelativeRotation(struct FRotator& NewRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee43a30
		void USceneComponent::K2_SetRelativeTransform(const struct FTransform& NewTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee43bd0
		void USceneComponent::K2_SetWorldLocation(struct FVector& NewLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee43dd0
		void USceneComponent::K2_SetWorldLocationAndRotation(struct FVector& NewLocation, struct FRotator& NewRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee43f70
		void USceneComponent::K2_SetWorldRotation(struct FRotator& NewRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee44160
		void USceneComponent::K2_SetWorldTransform(const struct FTransform& NewTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // 0xee44300
		void USceneComponent::OnRep_AttachChildren(); // 0xee44500
		void USceneComponent::OnRep_AttachParent(); // 0xee44520
		void USceneComponent::OnRep_AttachSocketName(); // 0xee44520
		void USceneComponent::OnRep_Transform(); // 0xee44540
		void USceneComponent::OnRep_Visibility(bool& OldValue); // 0xee44560
		void USceneComponent::ResetRelativeTransform(); // 0xee446f0
		void USceneComponent::SetAbsolute(bool& bNewAbsoluteLocation, bool& bNewAbsoluteRotation, bool& bNewAbsoluteScale); // 0xee44710
		void USceneComponent::SetHiddenInGame(bool& NewHidden, bool& bPropagateToChildren); // 0xee448b0
		void USceneComponent::SetMobility(uint8_t& NewMobility); // 0xee44980
		void USceneComponent::SetRelativeScale3D(struct FVector& NewScale3D); // 0xee44a00
		void USceneComponent::SetShouldUpdatePhysicsVolume(bool& bInShouldUpdatePhysicsVolume); // 0xee44a90
		void USceneComponent::SetVisibility(bool& bNewVisibility, bool& bPropagateToChildren); // 0xee44bb0
		void USceneComponent::SetWorldScale3D(struct FVector& NewScale); // 0xee44c80
		bool USceneComponent::SnapTo(class USceneComponent* InParent, FName& InSocketName); // 0xee44eb0
		void USceneComponent::ToggleVisibility(bool& bPropagateToChildren); // 0xee44f70
	};

	//Script/Engine.PrimitiveComponent
	// Size: 0x590
	class UPrimitiveComponent final : public USceneComponent {
	public:
		uint8_t UnknownData_b3[0x8]; // 0x250 (0x8)
		float MinDrawDistance; // 0x258 (0x4)
		float LDMaxDrawDistance; // 0x25c (0x4)
		float CachedMaxDrawDistance; // 0x260 (0x4)
		uint8_t DepthPriorityGroup; // 0x264 (0x1)
		uint8_t ViewOwnerDepthPriorityGroup; // 0x265 (0x1)
		uint8_t IndirectLightingCacheQuality; // 0x266 (0x1)
		EELightmapType LightmapType; // 0x267 (0x1)
		bool bEnableAOLightmap; // 0x268 (0x1)
		bool bMobileUseGlobalLocalLights; // 0x268 (0x1)
		bool bForceUsePrtForHD; // 0x268 (0x1)
		bool bForceUsePrtForMobile; // 0x268 (0x1)
		bool bUseMaxLODAsImposter; // 0x268 (0x1)
		bool bBatchImpostersAsInstances; // 0x268 (0x1)
		bool bNeverDistanceCull; // 0x268 (0x1)
		bool bAlwaysCreatePhysicsState; // 0x269 (0x1)
		bool bDFMCreatePhysicsState; // 0x269 (0x1)
		bool bDFMCreateSimulationPhysicsState; // 0x269 (0x1)
		bool bDFMSimulationUpdateTransformFromGameThread; // 0x269 (0x1)
		bool bDFMAsyncPhysicsStateCreated; // 0x269 (0x1)
		uint8_t UnknownData_b4[0xe]; // 0x26a (0xe)
		bool bGenerateOverlapEvents; // 0x278 (0x1)
		bool bMultiBodyOverlap; // 0x278 (0x1)
		bool bTraceComplexOnMove; // 0x278 (0x1)
		bool bReturnMaterialOnMove; // 0x278 (0x1)
		bool bUseViewOwnerDepthPriorityGroup; // 0x278 (0x1)
		bool bAllowCullDistanceVolume; // 0x278 (0x1)
		bool bHasMotionBlurVelocityMeshes; // 0x278 (0x1)
		bool bVisibleInReflectionCaptures; // 0x278 (0x1)
		bool bReflectionCapturesCubemapBlend; // 0x279 (0x1)
		bool bBlendReflectionCapturesPOI; // 0x279 (0x1)
		bool bAutoUpdateCachedReflection; // 0x279 (0x1)
		bool bForceSkylightReflection; // 0x279 (0x1)
		bool bOnlySkylight; // 0x279 (0x1)
		bool bVisibleInRayTracing; // 0x279 (0x1)
		bool bForceHiddenVisibleInRayTracing; // 0x279 (0x1)
		bool bRenderInMainPass; // 0x279 (0x1)
		bool bRenderInDepthPass; // 0x27a (0x1)
		bool bReceivesDecals; // 0x27a (0x1)
		bool bOwnerNoSee; // 0x27a (0x1)
		bool bOnlyOwnerSee; // 0x27a (0x1)
		bool bTreatAsBackgroundForOcclusion; // 0x27a (0x1)
		bool bUseAsOccluder; // 0x27a (0x1)
		bool bNotAsSocOccluder; // 0x27a (0x1)
		bool bDisallowOcclusionCull; // 0x27a (0x1)
		bool bDisallowAuxRHI; // 0x27b (0x1)
		bool bSelectable; // 0x27b (0x1)
		bool bForceMipStreaming; // 0x27b (0x1)
		bool bHasPerInstanceHitProxies; // 0x27b (0x1)
		bool CastShadow; // 0x27b (0x1)
		bool ForceCastShadowInBake; // 0x27b (0x1)
		uint8_t UnknownData_b5[0x4]; // 0x27c (0x4)
		uint64_t CastShadowMask; // 0x280 (0x8)
		bool bAffectDynamicIndirectLighting; // 0x288 (0x1)
		bool bAffectDistanceFieldLighting; // 0x288 (0x1)
		bool bCastDynamicShadow; // 0x288 (0x1)
		bool bCastStationaryPerObjectShadow; // 0x288 (0x1)
		bool bUsePRTAttenuationForMobile; // 0x288 (0x1)
		bool bCastCachedMapTileShadow; // 0x288 (0x1)
		bool bUpdateCachedMapTileShadowEveryFrame; // 0x289 (0x1)
		bool bCastStaticShadow; // 0x28a (0x1)
		bool bCastVolumetricTranslucentShadow; // 0x28a (0x1)
		bool bSelfShadowOnly; // 0x28a (0x1)
		bool bOverrideCastFarShadow; // 0x28a (0x1)
		bool bCastFarShadow; // 0x28a (0x1)
		bool CastRainShadow; // 0x28a (0x1)
		bool bOverrideLODShadowBias; // 0x28a (0x1)
		bool bLODShadowBias; // 0x28a (0x1)
		uint8_t UnknownData_b6[0x1]; // 0x28b (0x1)
		float LODShadowBiasScale; // 0x28c (0x4)
		float LocalLightShadowBias; // 0x290 (0x4)
		bool bCastFirstPersonShadow; // 0x294 (0x1)
		bool bReceiveFirstPersonShadow; // 0x294 (0x1)
		bool bCastThirdPersonShadow; // 0x294 (0x1)
		bool bCastInsetShadow; // 0x294 (0x1)
		bool bCastCinematicShadow; // 0x294 (0x1)
		bool bCastHiddenShadow; // 0x294 (0x1)
		bool bCastShadowAsTwoSided; // 0x294 (0x1)
		bool bLightAsIfStatic; // 0x294 (0x1)
		bool bLightAttachmentsAsGroup; // 0x295 (0x1)
		bool bExcludeFromLightAttachmentGroup; // 0x295 (0x1)
		bool bReceiveMobileCSMShadows; // 0x295 (0x1)
		bool bSingleSampleShadowFromStationaryLights; // 0x295 (0x1)
		bool bIgnoreRadialImpulse; // 0x295 (0x1)
		bool bIgnoreRadialForce; // 0x295 (0x1)
		bool bApplyImpulseOnDamage; // 0x295 (0x1)
		bool bReplicatePhysicsToAutonomousProxy; // 0x295 (0x1)
		bool AlwaysLoadOnClient; // 0x296 (0x1)
		bool AlwaysLoadOnServer; // 0x296 (0x1)
		bool bUseEditorCompositing; // 0x296 (0x1)
		bool bRenderCustomDepth; // 0x296 (0x1)
		bool bEvaluateRayTracingWaterCaustics; // 0x296 (0x1)
		bool bForceHighQualityShading; // 0x296 (0x1)
		bool bNoBakeLightingMap; // 0x296 (0x1)
		bool bEnableProbeAnchorOffset; // 0x296 (0x1)
		bool bEnableWindEffect; // 0x297 (0x1)
		uint8_t bHasCustomNavigableGeometry; // 0x298 (0x1)
		EERenderMatrixMode RenderMatrixMode; // 0x299 (0x1)
		uint8_t UnknownData_b7[0x2]; // 0x29a (0x2)
		float UvdragRatio; // 0x29c (0x4)
		bool bThin; // 0x2a0 (0x1)
		uint8_t CanCharacterStepUpOn; // 0x2a1 (0x1)
		struct FLightingChannels LightingChannels; // 0x2a2 (0x1)
		bool bUseDecalIgnoreChannel; // 0x2a3 (0x1)
		EERendererStencilMask CustomDepthStencilWriteMask; // 0x2a4 (0x1)
		uint8_t UnknownData_b8[0x3]; // 0x2a5 (0x3)
		int32_t CustomDepthStencilValue; // 0x2a8 (0x4)
		EEPreferredWorldScaleType PreferredWorldScaleType; // 0x2ac (0x1)
		uint8_t UnknownData_b9[0x3]; // 0x2ad (0x3)
		struct FCustomPrimitiveData CustomPrimitiveData; // 0x2b0 (0x10)
		int32_t TranslucencySortPriority; // 0x2c0 (0x4)
		int32_t VisibilityId; // 0x2c4 (0x4)
		TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2c8 (0x10)
		int8_t VirtualTextureLodBias; // 0x2d8 (0x1)
		int8_t VirtualTextureCullMips; // 0x2d9 (0x1)
		int8_t VirtualTextureMinCoverage; // 0x2da (0x1)
		EERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2db (0x1)
		EERuntimeVirtualTextureLayerType VirtualTextureRenderLayerType; // 0x2dc (0x1)
		uint8_t VirtualTextureRenderPriority; // 0x2dd (0x1)
		uint8_t UnknownData_ba[0x6]; // 0x2de (0x6)
		float LpvBiasMultiplier; // 0x2e4 (0x4)
		float SoftDepthOffSet; // 0x2e8 (0x4)
		uint8_t UnknownData_bb[0x8]; // 0x2ec (0x8)
		float BoundsScale; // 0x2f4 (0x4)
		uint8_t UnknownData_bc[0x10]; // 0x2f8 (0x10)
		TArray<class AActor*> MoveIgnoreActors; // 0x308 (0x10)
		TArray<class UPrimitiveComponent*> MoveIgnoreComponents; // 0x318 (0x10)
		uint8_t UnknownData_bd[0x10]; // 0x328 (0x10)
		struct FBodyInstance BodyInstance; // 0x338 (0x120)
		FDelegate OnComponentHit; // 0x458 (0x1)
		FDelegate OnComponentBeginOverlap; // 0x459 (0x1)
		FDelegate OnComponentEndOverlap; // 0x45a (0x1)
		FDelegate OnComponentWake; // 0x45b (0x1)
		FDelegate OnComponentSleep; // 0x45c (0x1)
		uint8_t UnknownData_be[0x1]; // 0x45d (0x1)
		FDelegate OnBeginCursorOver; // 0x45e (0x1)
		FDelegate OnEndCursorOver; // 0x45f (0x1)
		FDelegate OnClicked; // 0x460 (0x1)
		FDelegate OnReleased; // 0x461 (0x1)
		FDelegate OnInputTouchBegin; // 0x462 (0x1)
		FDelegate OnInputTouchEnd; // 0x463 (0x1)
		FDelegate OnInputTouchEnter; // 0x464 (0x1)
		FDelegate OnInputTouchLeave; // 0x465 (0x1)
		uint8_t UnknownData_bf[0x1a]; // 0x466 (0x1a)
		class UPrimitiveComponent* LODParentPrimitive; // 0x480 (0x8)
		TLazyObjectPtr<class UPrimitiveComponent> LazyLODParent; // 0x488 (0x1c)
		uint8_t UnknownData_c0[0x4]; // 0x4a4 (0x4)
		TArray<TLazyObjectPtr<class UPrimitiveComponent>> LazyLODChildren; // 0x4a8 (0x10)
		int8_t PrimitiveHLODLevel; // 0x4b8 (0x1)
		bool bForceOutputVelocities; // 0x4b9 (0x1)
		uint8_t UnknownData_c1[0x2]; // 0x4ba (0x2)
		struct FVector ProbeAnchorOffset; // 0x4bc (0xc)
		bool bTetContributeGI; // 0x4c8 (0x1)
		bool bTetReceiveGI; // 0x4c8 (0x1)
		bool bTetReceiveStaticGI; // 0x4c8 (0x1)
		uint8_t UnknownData_c2[0x7]; // 0x4c9 (0x7)
		struct FTetCachedABC StaticTetData; // 0x4d0 (0xb0)
		float CullingDistance; // 0x580 (0x4)
		float CullingScreenSize; // 0x584 (0x4)
		uint8_t UnknownData_c3[0x8]; // 0x588 (0x8)

		// Functions
		void UPrimitiveComponent::AddAngularImpulse(struct FVector& Impulse, FName& BoneName, bool& bVelChange); // 0xee2edc0
		void UPrimitiveComponent::AddAngularImpulseInDegrees(struct FVector& Impulse, FName& BoneName, bool& bVelChange); // 0xee2eee0
		void UPrimitiveComponent::AddAngularImpulseInRadians(struct FVector& Impulse, FName& BoneName, bool& bVelChange); // 0xee2f020
		void UPrimitiveComponent::AddForce(struct FVector& Force, FName& BoneName, bool& bAccelChange); // 0xee2f140
		void UPrimitiveComponent::AddForceAtLocation(struct FVector& Force, struct FVector& Location, FName& BoneName); // 0xee2f260
		void UPrimitiveComponent::AddForceAtLocationLocal(struct FVector& Force, struct FVector& Location, FName& BoneName); // 0xee2f390
		void UPrimitiveComponent::AddImpulse(struct FVector& Impulse, FName& BoneName, bool& bVelChange); // 0xee2f4c0
		void UPrimitiveComponent::AddImpulseAtLocation(struct FVector& Impulse, struct FVector& Location, FName& BoneName); // 0xee2f5e0
		void UPrimitiveComponent::AddRadialForce(struct FVector& Origin, float& radius, float& Strength, uint8_t& Falloff, bool& bAccelChange); // 0xee2f710
		void UPrimitiveComponent::AddRadialImpulse(struct FVector& Origin, float& radius, float& Strength, uint8_t& Falloff, bool& bVelChange); // 0xee2f8d0
		void UPrimitiveComponent::AddTorque(struct FVector& Torque, FName& BoneName, bool& bAccelChange); // 0xee2fa90
		void UPrimitiveComponent::AddTorqueInDegrees(struct FVector& Torque, FName& BoneName, bool& bAccelChange); // 0xee2fbb0
		void UPrimitiveComponent::AddTorqueInRadians(struct FVector& Torque, FName& BoneName, bool& bAccelChange); // 0xee2fa90
		bool UPrimitiveComponent::CanCharacterStepUp(class APawn* Pawn); // 0xee2fcf0
		void UPrimitiveComponent::ChangePrimitiveDynamicShadowState(float& Duration); // 0xee2fd90
		void UPrimitiveComponent::ClearMoveIgnoreActors(); // 0xee2fe10
		void UPrimitiveComponent::ClearMoveIgnoreComponents(); // 0xee2fe30
		TArray<class AActor*> UPrimitiveComponent::CopyArrayOfMoveIgnoreActors(); // 0xee2fe80
		TArray<class UPrimitiveComponent*> UPrimitiveComponent::CopyArrayOfMoveIgnoreComponents(); // 0xee2ff60
		class UMaterialInstanceDynamic* UPrimitiveComponent::CreateAndSetMaterialInstanceDynamic(int32_t& ElementIndex); // 0xee30040
		class UMaterialInstanceDynamic* UPrimitiveComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t& ElementIndex, class UMaterialInterface* Parent); // 0xee300e0
		class UMaterialInstanceDynamic* UPrimitiveComponent::CreateDynamicMaterialInstance(int32_t& ElementIndex, class UMaterialInterface* SourceMaterial, FName& OptionalName); // 0xee301b0
		float UPrimitiveComponent::GetAngularDamping(); // 0xee302c0
		struct FVector UPrimitiveComponent::GetCenterOfMass(FName& BoneName); // 0xee30300
		float UPrimitiveComponent::GetClosestPointOnCollision(const struct FVector& Point, struct FVector& OutPointOnBody, FName& BoneName); // 0xee303a0
		uint8_t UPrimitiveComponent::GetCollisionEnabled(); // 0xee304e0
		uint8_t UPrimitiveComponent::GetCollisionObjectType(); // 0xee30510
		FName UPrimitiveComponent::GetCollisionProfileName(); // 0xee30540
		uint8_t UPrimitiveComponent::GetCollisionResponseToChannel(uint8_t& Channel); // 0xee30580
		float UPrimitiveComponent::GetCullingDistance(); // 0xee30610
		bool UPrimitiveComponent::GetGenerateOverlapEvents(); // 0xee30640
		struct FVector UPrimitiveComponent::GetInertiaTensor(FName& BoneName); // 0xee30670
		class UPrimitiveComponent* UPrimitiveComponent::GetLazyLODParentPrimitive(); // 0xee30750
		float UPrimitiveComponent::GetLinearDamping(); // 0xee30780
		class UPrimitiveComponent* UPrimitiveComponent::GetLODParentPrimitive(); // 0xee30720
		float UPrimitiveComponent::GetMass(); // 0xee307c0
		float UPrimitiveComponent::GetMassScale(FName& BoneName); // 0xee30800
		class UMaterialInterface* UPrimitiveComponent::GetMaterial(int32_t& ElementIndex); // 0xee308a0
		class UMaterialInterface* UPrimitiveComponent::GetMaterialFromCollisionFaceIndex(int32_t& FaceIndex, int32_t& SectionIndex); // 0xee30940
		int32_t UPrimitiveComponent::GetNumMaterials(); // 0xee30a20
		void UPrimitiveComponent::GetOverlappingActors(TArray<class AActor*> OverlappingActors, TSubclassOf<class UClass>& ClassFilter); // 0xee30a50
		void UPrimitiveComponent::GetOverlappingComponents(TArray<class UPrimitiveComponent*> OutOverlappingComponents); // 0xee30b70
		struct FVector UPrimitiveComponent::GetPhysicsAngularVelocity(FName& BoneName); // 0xee30c40
		struct FVector UPrimitiveComponent::GetPhysicsAngularVelocityInDegrees(FName& BoneName); // 0xee30c40
		struct FVector UPrimitiveComponent::GetPhysicsAngularVelocityInRadians(FName& BoneName); // 0xee30d00
		struct FVector UPrimitiveComponent::GetPhysicsLinearVelocity(FName& BoneName); // 0xee30da0
		struct FVector UPrimitiveComponent::GetPhysicsLinearVelocityAtPoint(struct FVector& Point, FName& BoneName); // 0xee30e40
		struct FWalkableSlopeOverride UPrimitiveComponent::GetWalkableSlopeOverride(); // 0xee30f30
		void UPrimitiveComponent::IgnoreActorWhenMoving(class AActor* Actor, bool& bShouldIgnore); // 0xee30f70
		void UPrimitiveComponent::IgnoreComponentWhenMoving(class UPrimitiveComponent* Component, bool& bShouldIgnore); // 0xee31040
		bool UPrimitiveComponent::IsAnyRigidBodyAwake(); // 0x4fcaab0
		bool UPrimitiveComponent::IsGravityEnabled(); // 0xee31110
		bool UPrimitiveComponent::IsOverlappingActor(const class AActor* Other); // 0xee31140
		bool UPrimitiveComponent::IsOverlappingComponent(const class UPrimitiveComponent* OtherComp); // 0xee311d0
		bool UPrimitiveComponent::K2_BoxOverlapComponent(struct FVector& InBoxCentre, const struct FBox& InBox, bool& bTraceComplex, bool& bShowTrace, bool& bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, FName& BoneName, struct FHitResult& OutHit); // 0xee31260
		bool UPrimitiveComponent::K2_IsCollisionEnabled(); // 0xee315b0
		bool UPrimitiveComponent::K2_IsPhysicsCollisionEnabled(); // 0xee315f0
		bool UPrimitiveComponent::K2_IsQueryCollisionEnabled(); // 0xee31630
		bool UPrimitiveComponent::K2_LineTraceComponent(struct FVector& TraceStart, struct FVector& TraceEnd, bool& bTraceComplex, bool& bShowTrace, bool& bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, FName& BoneName, struct FHitResult& OutHit); // 0xee31670
		bool UPrimitiveComponent::K2_SphereOverlapComponent(struct FVector& InSphereCentre, float& InSphereRadius, bool& bTraceComplex, bool& bShowTrace, bool& bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, FName& BoneName, struct FHitResult& OutHit); // 0xee319b0
		bool UPrimitiveComponent::K2_SphereTraceComponent(struct FVector& TraceStart, struct FVector& TraceEnd, float& SphereRadius, bool& bTraceComplex, bool& bShowTrace, bool& bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, FName& BoneName, struct FHitResult& OutHit); // 0xee31cf0
		void UPrimitiveComponent::PutRigidBodyToSleep(FName& BoneName); // 0xee32070
		struct FVector UPrimitiveComponent::ScaleByMomentOfInertia(struct FVector& InputVector, FName& BoneName); // 0xee320f0
		void UPrimitiveComponent::SetAllMassScale(float& InMassScale); // 0xee321f0
		void UPrimitiveComponent::SetAllPhysicsAngularVelocityInDegrees(const struct FVector& NewAngVel, bool& bAddToCurrent); // 0xee32270
		void UPrimitiveComponent::SetAllPhysicsAngularVelocityInRadians(const struct FVector& NewAngVel, bool& bAddToCurrent); // 0xee32390
		void UPrimitiveComponent::SetAllPhysicsLinearVelocity(struct FVector& NewVel, bool& bAddToCurrent); // 0xee32470
		void UPrimitiveComponent::SetAllUseCCD(bool& InUseCCD); // 0xa6ba4c0
		void UPrimitiveComponent::SetAngularDamping(float& InDamping); // 0xa6ba1b0
		void UPrimitiveComponent::SetBoundsScale(float& NewBoundsScale); // 0xee32550
		void UPrimitiveComponent::SetCastInsetShadow(bool& bInCastInsetShadow); // 0xee325d0
		void UPrimitiveComponent::SetCastShadow(bool& NewCastShadow); // 0xee32660
		void UPrimitiveComponent::SetCastStationaryPerObjectShadow(bool& NewCastShadow); // 0xee326f0
		void UPrimitiveComponent::SetCastThirdPersonShadow(bool& bInCastThirdPersonShadow); // 0xee32780
		void UPrimitiveComponent::SetCenterOfMass(struct FVector& CenterOfMassOffset, FName& BoneName); // 0xee32810
		void UPrimitiveComponent::SetCollisionEnabled(uint8_t& NewType); // 0xee328e0
		void UPrimitiveComponent::SetCollisionObjectType(uint8_t& Channel); // 0xee32960
		void UPrimitiveComponent::SetCollisionProfileName(FName& InCollisionProfileName); // 0xee329e0
		void UPrimitiveComponent::SetCollisionResponseToAllChannels(uint8_t& NewResponse); // 0xee32a70
		void UPrimitiveComponent::SetCollisionResponseToChannel(uint8_t& Channel, uint8_t& NewResponse); // 0xee32af0
		void UPrimitiveComponent::SetConstraintMode(uint8_t& ConstraintMode); // 0x766c040
		void UPrimitiveComponent::SetCullDistance(float& NewCullDistance); // 0xee32bb0
		void UPrimitiveComponent::SetCustomDepthStencilValue(int32_t& Value); // 0xee32c30
		void UPrimitiveComponent::SetCustomDepthStencilWriteMask(EERendererStencilMask& WriteMaskBit); // 0xee32cb0
		void UPrimitiveComponent::SetCustomPrimitiveDataFloat(int32_t& DataIndex, float& Value); // 0xee32d30
		void UPrimitiveComponent::SetCustomPrimitiveDataVector2(int32_t& DataIndex, struct FVector2D& Value); // 0xee32df0
		void UPrimitiveComponent::SetCustomPrimitiveDataVector3(int32_t& DataIndex, struct FVector& Value); // 0xee32eb0
		void UPrimitiveComponent::SetCustomPrimitiveDataVector4(int32_t& DataIndex, struct FVector4& Value); // 0xee32f80
		void UPrimitiveComponent::SetEnableGravity(bool& bGravityEnabled); // 0xee33050
		void UPrimitiveComponent::SetEnableUpdateShadowCacheState(bool& bEnable); // 0xee330e0
		void UPrimitiveComponent::SetExcludeFromLightAttachmentGroup(bool& bInExcludeFromLightAttachmentGroup); // 0xee33170
		void UPrimitiveComponent::SetGenerateOverlapEvents(bool& bInGenerateOverlapEvents); // 0xee33200
		void UPrimitiveComponent::SetHiddenVisibleInRayTracing(bool& bNewVisibleInRayTracing); // 0xee33290
		void UPrimitiveComponent::SetLazyLODParentPrimitive(class UPrimitiveComponent* InLODParentPrimitive); // 0xee33320
		void UPrimitiveComponent::SetLightAttachmentsAsGroup(bool& bInLightAttachmentsAsGroup); // 0xee333a0
		void UPrimitiveComponent::SetLinearDamping(float& InDamping); // 0xee33430
		void UPrimitiveComponent::SetLocalLightShadowBias(float& NewLocalLightShadowBias); // 0xee334b0
		void UPrimitiveComponent::SetMassOverrideInKg(FName& BoneName, float& MassInKg, bool& bOverrideMass); // 0xee33530
		void UPrimitiveComponent::SetMassScale(FName& BoneName, float& InMassScale); // 0xee33630
		void UPrimitiveComponent::SetMaterial(int32_t& ElementIndex, class UMaterialInterface* Material); // 0xee33700
		void UPrimitiveComponent::SetMaterialByName(FName& MaterialSlotName, class UMaterialInterface* Material); // 0xee337d0
		void UPrimitiveComponent::SetMaterialSoftPtr(int32_t& ElementIndex, const TSoftObjectPtr<class UMaterialInterface>& Material); // 0xee338a0
		void UPrimitiveComponent::SetNotifyRigidBodyCollision(bool& bNewNotifyRigidBodyCollision); // 0xee339d0
		void UPrimitiveComponent::SetOnlyOwnerSee(bool& bNewOnlyOwnerSee); // 0xee33a60
		void UPrimitiveComponent::SetOwnerNoSee(bool& bNewOwnerNoSee); // 0xee33af0
		void UPrimitiveComponent::SetPhysicsAngularVelocity(struct FVector& NewAngVel, bool& bAddToCurrent, FName& BoneName); // 0xee33b80
		void UPrimitiveComponent::SetPhysicsAngularVelocityInDegrees(struct FVector& NewAngVel, bool& bAddToCurrent, FName& BoneName); // 0xee33b80
		void UPrimitiveComponent::SetPhysicsAngularVelocityInRadians(struct FVector& NewAngVel, bool& bAddToCurrent, FName& BoneName); // 0xee33cc0
		void UPrimitiveComponent::SetPhysicsLinearVelocity(struct FVector& NewVel, bool& bAddToCurrent, FName& BoneName); // 0xee33de0
		void UPrimitiveComponent::SetPhysicsMaxAngularVelocity(float& NewMaxAngVel, bool& bAddToCurrent, FName& BoneName); // 0xee33f00
		void UPrimitiveComponent::SetPhysicsMaxAngularVelocityInDegrees(float& NewMaxAngVel, bool& bAddToCurrent, FName& BoneName); // 0xee33f00
		void UPrimitiveComponent::SetPhysicsMaxAngularVelocityInRadians(float& NewMaxAngVel, bool& bAddToCurrent, FName& BoneName); // 0xee34010
		void UPrimitiveComponent::SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial); // 0xa718e60
		void UPrimitiveComponent::SetReceivesDecals(bool& bNewReceivesDecals); // 0xee34120
		void UPrimitiveComponent::SetRenderCustomDepth(bool& bValue); // 0xee341b0
		void UPrimitiveComponent::SetRenderInMainPass(bool& bValue); // 0xee34240
		void UPrimitiveComponent::SetSimulatePhysics(bool& bSimulate); // 0x4e181c0
		void UPrimitiveComponent::SetSingleSampleShadowFromStationaryLights(bool& bNewSingleSampleShadowFromStationaryLights); // 0xee342d0
		void UPrimitiveComponent::SetSoftDepthOffset(float& bValue); // 0xee34360
		void UPrimitiveComponent::SetSpecifyWorldScaleType(EEPreferredWorldScaleType& WorldScaleType); // 0xee343e0
		void UPrimitiveComponent::SetTranslucentSortPriority(int32_t& NewTranslucentSortPriority); // 0xee34460
		void UPrimitiveComponent::SetUseCCD(bool& InUseCCD, FName& BoneName); // 0xee344e0
		void UPrimitiveComponent::SetUsePRTAttenuationForMobile(bool& NewUsePRTAttenuationForMobile); // 0xee345b0
		void UPrimitiveComponent::SetVisibleInRayTracing(bool& bNewVisibleInRayTracing); // 0xee34640
		void UPrimitiveComponent::SetWalkableSlopeOverride(const struct FWalkableSlopeOverride& NewOverride); // 0xee346d0
		void UPrimitiveComponent::WakeAllRigidBodies(); // 0xa72e2b0
		void UPrimitiveComponent::WakeRigidBody(FName& BoneName); // 0xee34780
	};

	//Script/Engine.SplineComponent
	// Size: 0x680
	class USplineComponent final : public UPrimitiveComponent {
	public:
		struct FSplineCurves SplineCurves; // 0x588 (0x68)
		struct FInterpCurveVector SplineInfo; // 0x5f0 (0x18)
		struct FInterpCurveQuat SplineRotInfo; // 0x608 (0x18)
		struct FInterpCurveVector SplineScaleInfo; // 0x620 (0x18)
		struct FInterpCurveFloat SplineReparamTable; // 0x638 (0x18)
		bool bAllowSplineEditingPerInstance; // 0x650 (0x1)
		uint8_t UnknownData_c4[0x3]; // 0x651 (0x3)
		int32_t ReparamStepsPerSegment; // 0x654 (0x4)
		float Duration; // 0x658 (0x4)
		bool bStationaryEndpoints; // 0x65c (0x1)
		bool bSplineHasBeenEdited; // 0x65d (0x1)
		bool bModifiedByConstructionScript; // 0x65e (0x1)
		bool bInputSplinePointsToConstructionScript; // 0x65f (0x1)
		bool bDrawDebug; // 0x660 (0x1)
		bool bClosedLoop; // 0x661 (0x1)
		bool bLoopPositionOverride; // 0x662 (0x1)
		uint8_t UnknownData_c5[0x1]; // 0x663 (0x1)
		float LoopPosition; // 0x664 (0x4)
		struct FVector DefaultUpVector; // 0x668 (0xc)
		uint8_t UnknownData_c6[0xc]; // 0x674 (0xc)

		// Functions
		void USplineComponent::AddPoint(const struct FSplinePoint& Point, bool& bUpdateSpline); // 0xee5c380
		void USplineComponent::AddPoints(const TArray<struct FSplinePoint>& Points, bool& bUpdateSpline); // 0xee5c490
		void USplineComponent::AddSplineLocalPoint(const struct FVector& Position); // 0xee5c5b0
		void USplineComponent::AddSplinePoint(const struct FVector& Position, uint8_t& CoordinateSpace, bool& bUpdateSpline); // 0xee5c640
		void USplineComponent::AddSplinePointAtIndex(const struct FVector& Position, int32_t& Index, uint8_t& CoordinateSpace, bool& bUpdateSpline); // 0xee5c750
		void USplineComponent::AddSplineWorldPoint(const struct FVector& Position); // 0xee5c8b0
		void USplineComponent::ClearSplinePoints(bool& bUpdateSpline); // 0xee5c950
		struct FVector USplineComponent::FindDirectionClosestToWorldLocation(const struct FVector& WorldLocation, uint8_t& CoordinateSpace); // 0xee5c9e0
		float USplineComponent::FindInputKeyClosestToWorldLocation(const struct FVector& WorldLocation); // 0xee5cad0
		struct FVector USplineComponent::FindLocationClosestToWorldLocation(const struct FVector& WorldLocation, uint8_t& CoordinateSpace); // 0xee5cb70
		struct FVector USplineComponent::FindRightVectorClosestToWorldLocation(const struct FVector& WorldLocation, uint8_t& CoordinateSpace); // 0xee5cc60
		float USplineComponent::FindRollClosestToWorldLocation(const struct FVector& WorldLocation, uint8_t& CoordinateSpace); // 0xee5cd50
		struct FRotator USplineComponent::FindRotationClosestToWorldLocation(const struct FVector& WorldLocation, uint8_t& CoordinateSpace); // 0xee5ce30
		struct FVector USplineComponent::FindScaleClosestToWorldLocation(const struct FVector& WorldLocation); // 0xee5cf20
		struct FVector USplineComponent::FindTangentClosestToWorldLocation(const struct FVector& WorldLocation, uint8_t& CoordinateSpace); // 0xee5cfd0
		struct FTransform USplineComponent::FindTransformClosestToWorldLocation(const struct FVector& WorldLocation, uint8_t& CoordinateSpace, bool& bUseScale); // 0xee5d0c0
		struct FVector USplineComponent::FindUpVectorClosestToWorldLocation(const struct FVector& WorldLocation, uint8_t& CoordinateSpace); // 0xee5d210
		struct FVector USplineComponent::GetArriveTangentAtSplinePoint(int32_t& PointIndex, uint8_t& CoordinateSpace); // 0xee5d300
		struct FVector USplineComponent::GetDefaultUpVector(uint8_t& CoordinateSpace); // 0xee5d3d0
		struct FVector USplineComponent::GetDirectionAtDistanceAlongSpline(float& Distance, uint8_t& CoordinateSpace); // 0xee5d470
		struct FVector USplineComponent::GetDirectionAtSplineInputKey(float& InKey, uint8_t& CoordinateSpace); // 0xee5d550
		struct FVector USplineComponent::GetDirectionAtSplinePoint(int32_t& PointIndex, uint8_t& CoordinateSpace); // 0xee5d630
		struct FVector USplineComponent::GetDirectionAtTime(float& Time, uint8_t& CoordinateSpace, bool& bUseConstantVelocity); // 0xee5d700
		float USplineComponent::GetDistanceAlongSplineAtSplinePoint(int32_t& PointIndex); // 0xee5d820
		float USplineComponent::GetFloatPropertyAtSplineInputKey(float& InKey, FName& PropertyName); // 0xee5d8b0
		float USplineComponent::GetFloatPropertyAtSplinePoint(int32_t& Index, FName& PropertyName); // 0xee5d980
		float USplineComponent::GetInputKeyAtDistanceAlongSpline(float& Distance); // 0xee5da40
		struct FVector USplineComponent::GetLeaveTangentAtSplinePoint(int32_t& PointIndex, uint8_t& CoordinateSpace); // 0xee5dad0
		void USplineComponent::GetLocalLocationAndTangentAtSplinePoint(int32_t& PointIndex, struct FVector& LocalLocation, struct FVector& LocalTangent); // 0xee5dba0
		void USplineComponent::GetLocationAndTangentAtSplinePoint(int32_t& PointIndex, struct FVector& Location, struct FVector& Tangent, uint8_t& CoordinateSpace); // 0xee5dcd0
		struct FVector USplineComponent::GetLocationAtDistanceAlongSpline(float& Distance, uint8_t& CoordinateSpace); // 0xee5de40
		struct FVector USplineComponent::GetLocationAtSplineInputKey(float& InKey, uint8_t& CoordinateSpace); // 0xee5df20
		struct FVector USplineComponent::GetLocationAtSplinePoint(int32_t& PointIndex, uint8_t& CoordinateSpace); // 0xee5e000
		struct FVector USplineComponent::GetLocationAtTime(float& Time, uint8_t& CoordinateSpace, bool& bUseConstantVelocity); // 0xee5e0d0
		int32_t USplineComponent::GetNumberOfSplinePoints(); // 0xee5e1f0
		int32_t USplineComponent::GetNumberOfSplineSegments(); // 0xee5e220
		struct FVector USplineComponent::GetRightVectorAtDistanceAlongSpline(float& Distance, uint8_t& CoordinateSpace); // 0xee5e250
		struct FVector USplineComponent::GetRightVectorAtSplineInputKey(float& InKey, uint8_t& CoordinateSpace); // 0xee5e330
		struct FVector USplineComponent::GetRightVectorAtSplinePoint(int32_t& PointIndex, uint8_t& CoordinateSpace); // 0xee5e410
		struct FVector USplineComponent::GetRightVectorAtTime(float& Time, uint8_t& CoordinateSpace, bool& bUseConstantVelocity); // 0xee5e4e0
		float USplineComponent::GetRollAtDistanceAlongSpline(float& Distance, uint8_t& CoordinateSpace); // 0xee5e600
		float USplineComponent::GetRollAtSplineInputKey(float& InKey, uint8_t& CoordinateSpace); // 0xee5e6d0
		float USplineComponent::GetRollAtSplinePoint(int32_t& PointIndex, uint8_t& CoordinateSpace); // 0xee5e7a0
		float USplineComponent::GetRollAtTime(float& Time, uint8_t& CoordinateSpace, bool& bUseConstantVelocity); // 0xee5e860
		struct FRotator USplineComponent::GetRotationAtDistanceAlongSpline(float& Distance, uint8_t& CoordinateSpace); // 0xee5e970
		struct FRotator USplineComponent::GetRotationAtSplineInputKey(float& InKey, uint8_t& CoordinateSpace); // 0xee5ea50
		struct FRotator USplineComponent::GetRotationAtSplinePoint(int32_t& PointIndex, uint8_t& CoordinateSpace); // 0xee5eb30
		struct FRotator USplineComponent::GetRotationAtTime(float& Time, uint8_t& CoordinateSpace, bool& bUseConstantVelocity); // 0xee5ec00
		struct FVector USplineComponent::GetScaleAtDistanceAlongSpline(float& Distance); // 0xee5ed20
		struct FVector USplineComponent::GetScaleAtSplineInputKey(float& InKey); // 0xee5edc0
		struct FVector USplineComponent::GetScaleAtSplinePoint(int32_t& PointIndex); // 0xee5ee60
		struct FVector USplineComponent::GetScaleAtTime(float& Time, bool& bUseConstantVelocity); // 0xee5ef00
		float USplineComponent::GetSplineLength(); // 0xee5f090
		uint8_t USplineComponent::GetSplinePointType(int32_t& PointIndex); // 0xee5f0c0
		struct FVector USplineComponent::GetTangentAtDistanceAlongSpline(float& Distance, uint8_t& CoordinateSpace); // 0xee5f150
		struct FVector USplineComponent::GetTangentAtSplineInputKey(float& InKey, uint8_t& CoordinateSpace); // 0xee5f230
		struct FVector USplineComponent::GetTangentAtSplinePoint(int32_t& PointIndex, uint8_t& CoordinateSpace); // 0xee5dad0
		struct FVector USplineComponent::GetTangentAtTime(float& Time, uint8_t& CoordinateSpace, bool& bUseConstantVelocity); // 0xee5f310
		struct FTransform USplineComponent::GetTransformAtDistanceAlongSpline(float& Distance, uint8_t& CoordinateSpace, bool& bUseScale); // 0xee5f430
		struct FTransform USplineComponent::GetTransformAtSplineInputKey(float& InKey, uint8_t& CoordinateSpace, bool& bUseScale); // 0xee5f580
		struct FTransform USplineComponent::GetTransformAtSplinePoint(int32_t& PointIndex, uint8_t& CoordinateSpace, bool& bUseScale); // 0xee5f6d0
		struct FTransform USplineComponent::GetTransformAtTime(float& Time, uint8_t& CoordinateSpace, bool& bUseConstantVelocity, bool& bUseScale); // 0xee5f810
		struct FVector USplineComponent::GetUpVectorAtDistanceAlongSpline(float& Distance, uint8_t& CoordinateSpace); // 0xee5f9a0
		struct FVector USplineComponent::GetUpVectorAtSplineInputKey(float& InKey, uint8_t& CoordinateSpace); // 0xee5fa80
		struct FVector USplineComponent::GetUpVectorAtSplinePoint(int32_t& PointIndex, uint8_t& CoordinateSpace); // 0xee5fb60
		struct FVector USplineComponent::GetUpVectorAtTime(float& Time, uint8_t& CoordinateSpace, bool& bUseConstantVelocity); // 0xee5fc30
		struct FVector USplineComponent::GetVectorPropertyAtSplineInputKey(float& InKey, FName& PropertyName); // 0xee5fd50
		struct FVector USplineComponent::GetVectorPropertyAtSplinePoint(int32_t& Index, FName& PropertyName); // 0xee5fe30
		struct FVector USplineComponent::GetWorldDirectionAtDistanceAlongSpline(float& Distance); // 0xee5ff00
		struct FVector USplineComponent::GetWorldDirectionAtTime(float& Time, bool& bUseConstantVelocity); // 0xee5ffb0
		struct FVector USplineComponent::GetWorldLocationAtDistanceAlongSpline(float& Distance); // 0xee600a0
		struct FVector USplineComponent::GetWorldLocationAtSplinePoint(int32_t& PointIndex); // 0xee60150
		struct FVector USplineComponent::GetWorldLocationAtTime(float& Time, bool& bUseConstantVelocity); // 0xee60200
		struct FRotator USplineComponent::GetWorldRotationAtDistanceAlongSpline(float& Distance); // 0xee602f0
		struct FRotator USplineComponent::GetWorldRotationAtTime(float& Time, bool& bUseConstantVelocity); // 0xee603a0
		struct FVector USplineComponent::GetWorldTangentAtDistanceAlongSpline(float& Distance); // 0xee60490
		bool USplineComponent::IsClosedLoop(); // 0xee60540
		void USplineComponent::RemoveSplinePoint(int32_t& Index, bool& bUpdateSpline); // 0xee60570
		void USplineComponent::SetClosedLoop(bool& bInClosedLoop, bool& bUpdateSpline); // 0xee60630
		void USplineComponent::SetClosedLoopAtPosition(bool& bInClosedLoop, float& Key, bool& bUpdateSpline); // 0xee60700
		void USplineComponent::SetDefaultUpVector(const struct FVector& UpVector, uint8_t& CoordinateSpace); // 0xee60810
		void USplineComponent::SetDrawDebug(bool& bShow); // 0xee608f0
		void USplineComponent::SetLocationAtSplinePoint(int32_t& PointIndex, const struct FVector& InLocation, uint8_t& CoordinateSpace, bool& bUpdateSpline); // 0xee60980
		void USplineComponent::SetSelectedSplineSegmentColor(const struct FLinearColor& SegmentColor); // 0xee60ae0
		void USplineComponent::SetSplineLocalPoints(const TArray<struct FVector>& Points); // 0xee60c40
		void USplineComponent::SetSplinePoints(const TArray<struct FVector>& Points, uint8_t& CoordinateSpace, bool& bUpdateSpline); // 0xee60e20
		void USplineComponent::SetSplinePointType(int32_t& PointIndex, uint8_t& Type, bool& bUpdateSpline); // 0xee60d20
		void USplineComponent::SetSplineWorldPoints(const TArray<struct FVector>& Points); // 0xee60f70
		void USplineComponent::SetTangentAtSplinePoint(int32_t& PointIndex, const struct FVector& InTangent, uint8_t& CoordinateSpace, bool& bUpdateSpline); // 0xee61110
		void USplineComponent::SetTangentsAtSplinePoint(int32_t& PointIndex, const struct FVector& InArriveTangent, const struct FVector& InLeaveTangent, uint8_t& CoordinateSpace, bool& bUpdateSpline); // 0xee61270
		void USplineComponent::SetUnselectedSplineSegmentColor(const struct FLinearColor& SegmentColor); // 0xee60ae0
		void USplineComponent::SetUpVectorAtSplinePoint(int32_t& PointIndex, const struct FVector& InUpVector, uint8_t& CoordinateSpace, bool& bUpdateSpline); // 0xee61430
		void USplineComponent::SetWorldLocationAtSplinePoint(int32_t& PointIndex, const struct FVector& InLocation); // 0xee61590
		void USplineComponent::UpdateSpline(); // 0x4dd24c0
	};

	//Script/BetterSpline.ParamSplineComponent
	// Size: 0x8c0
	class UParamSplineComponent final : public USplineComponent {
	public:
		TMap<void*, void*> SplineParameters; // 0x678 (0x50)
		TMap<void*, void*> SplineStringParameters; // 0x6c8 (0x50)
		TMap<void*, void*> SplineBooleanParameters; // 0x718 (0x50)
		struct FParamSplineCurves ParamSplineCurves; // 0x768 (0xc8)
		struct FParamSplinePointParameter DefaultSplinePointParameter; // 0x830 (0x60)
		TArray<FString> ReplaceSections; // 0x890 (0x10)
		bool bHasWidth; // 0x8a0 (0x1)
		bool bHasDepth; // 0x8a1 (0x1)
		bool bHasWidthFalloff; // 0x8a2 (0x1)
		bool bAsymmetricWidth; // 0x8a3 (0x1)
		bool bAsymmetricWidthFalloff; // 0x8a4 (0x1)
		bool bHasReplaceSection; // 0x8a5 (0x1)
		bool bAutoSnap; // 0x8a6 (0x1)
		uint8_t UnknownData_c7[0x1]; // 0x8a7 (0x1)
		float SnapDistance; // 0x8a8 (0x4)
		float DebugMeshGridSize; // 0x8ac (0x4)
		float SplineResolution; // 0x8b0 (0x4)
		EEParamCurveMode ForceSplineType; // 0x8b4 (0x1)
		uint8_t UnknownData_c8[0xb]; // 0x8b5 (0xb)
	};
};
