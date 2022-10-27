#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Kraken.KrakenTentacle
	 * Size -> 0x0138 (FullSize[0x0500] - InheritedSize[0x03C8])
	 */
	class AKrakenTentacle : public AActor
	{
	public:
		unsigned char                                              UnknownData_JRWR[0x20];                                  // 0x03C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHealthComponent*                                    HealthComponent;                                         // 0x03E8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActorDamageableComponent*                           DamageableComponent;                                     // 0x03F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UVenomComponent*                                     VenomComponent;                                          // 0x03F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      VenomChance;                                             // 0x0400(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DA8I[0xFC];                                  // 0x0404(0x00FC) MISSED OFFSET (PADDING)

	public:
		void OnDamageToTentacle(const struct FImpactDamageEvent& ImpactDamageEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.Murk
	 * Size -> 0x00A0 (FullSize[0x0468] - InheritedSize[0x03C8])
	 */
	class AMurk : public AActor
	{
	public:
		class UMurkWaterModifierZoneComponent*                     WaterModifierZone;                                       // 0x03C8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SceneRootComponent;                                      // 0x03D0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                InnerSheet;                                              // 0x03D8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                OuterSheet;                                              // 0x03E0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UnderwaterSheetHeightScale;                              // 0x03E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0H1Q[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            InnerSheetMaterialInstance;                              // 0x03F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            OuterSheetMaterialInstance;                              // 0x03F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BEBU[0x68];                                  // 0x0400(0x0068) MISSED OFFSET (PADDING)

	public:
		void DeactivateMurkBP();
		void ActivateMurkBP();
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.CoordinatedKrakenInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCoordinatedKrakenInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.CoordinatedKrakenPhaseActionsDataAsset
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UCoordinatedKrakenPhaseActionsDataAsset : public UDataAsset
	{
	public:
		TArray<int32_t>                                            TentaclesUsed;                                           // 0x0028(0x0010) Edit, ZeroConstructor
		bool                                                       KrakenHeadUsed;                                          // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0CAY[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCoordinatedKrakenAction>                    Actions;                                                 // 0x0040(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.EnvQueryContext_AllKrakenOccupiedLocations
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_AllKrakenOccupiedLocations : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.EnvQueryContext_AllocatedShip
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_AllocatedShip : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.EnvQueryContext_AllShipsInWorld
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_AllShipsInWorld : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.EnvQueryContext_AllWatercraftsInWorld
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_AllWatercraftsInWorld : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.EnvQueryContext_PreviousLocation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_PreviousLocation : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.EnvQueryGenerator_KrakenSpawnLocations
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_KrakenSpawnLocations : public UEnvQueryGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.EnvQueryGenerator_KrakenTentacleSpawnLocations
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_KrakenTentacleSpawnLocations : public UEnvQueryGenerator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenShipWrappingTentacle
	 * Size -> 0x01F0 (FullSize[0x06F0] - InheritedSize[0x0500])
	 */
	class AKrakenShipWrappingTentacle : public AKrakenTentacle
	{
	public:
		class USceneComponent*                                     SceneRoot;                                               // 0x0500(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TentacleCollisions;                                      // 0x0508(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TentacleMesh;                                            // 0x0510(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       DamageZone;                                              // 0x0518(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     InteractableBlockingRegions;                             // 0x0520(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     KnockbackRegions;                                        // 0x0528(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       TentacleHeadCollisions;                                  // 0x0530(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     TentacleHeadKnockbackRegions;                            // 0x0538(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKrakenShipWrappingTentacleAIAudioComponent*         AudioComponent;                                          // 0x0540(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         LowDetailTentacleMesh;                                   // 0x0548(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               HighDetailTentacleMeshAsset;                             // 0x0550(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FKrakenShipWrappingTentacleParams                   Params;                                                  // 0x0560(0x00F0) Edit, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            TentacleDynamicMaterialInstance;                         // 0x0650(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         HighDetailTentacleMesh;                                  // 0x0658(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKrakenShipWrappingTentacleAnimationState           CurrentServerAnimationState;                             // 0x0660(0x0010) Net, Transient, RepNotify
		struct FKrakenShipWrappingTentacleAnimationState           PendingServerAnimationState;                             // 0x0670(0x0010) Net, Transient
		unsigned char                                              UnknownData_Y12T[0x70];                                  // 0x0680(0x0070) MISSED OFFSET (PADDING)

	public:
		void OnRep_CurrentServerAnimationState();
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenTelemetryComponent
	 * Size -> 0x0108 (FullSize[0x01D0] - InheritedSize[0x00C8])
	 */
	class UKrakenTelemetryComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_KA74[0x108];                                 // 0x00C8(0x0108) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.Kraken
	 * Size -> 0x0568 (FullSize[0x0930] - InheritedSize[0x03C8])
	 */
	class AKraken : public AActor
	{
	public:
		unsigned char                                              UnknownData_543N[0x18];                                  // 0x03C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RelevancyDistance;                                       // 0x03E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N2Q2[0x14];                                  // 0x03E4(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InnerRadius;                                             // 0x03F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OuterRadius;                                             // 0x03FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EKrakenState                                               CurrentState;                                            // 0x0400(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_QJCC[0x1B7];                                 // 0x0401(0x01B7) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMurk*                                               MurkActor;                                               // 0x05B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		unsigned char                                              UnknownData_F5O0[0xA8];                                  // 0x05C0(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKrakenAICharacterAudioComponent*                    KrakenAudioComponent;                                    // 0x0668(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		class UKrakenTelemetryComponent*                           KrakenTelemetryComponent;                                // 0x0670(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash
		struct FEncounterParams                                    SightingEncounterParams;                                 // 0x0678(0x000C) Edit, DisableEditOnInstance, Protected
		struct FEncounterParams                                    CloseEncounterParams;                                    // 0x0684(0x000C) Edit, DisableEditOnInstance, Protected
		unsigned char                                              UnknownData_8LLG[0x10];                                  // 0x0690(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKrakenParams                                       Params;                                                  // 0x06A0(0x0160) Transient
		int32_t                                                    NumTentaclesRemaining;                                   // 0x0800(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V7Y9[0x12C];                                 // 0x0804(0x012C) MISSED OFFSET (PADDING)

	public:
		void Multicast_OnTentacleTakenDamage();
		void AddActorToKnownTargets(class AActor* Target);
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenAnimatedTentacleAnimationDataAsset
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UKrakenAnimatedTentacleAnimationDataAsset : public UDataAsset
	{
	public:
		class UKrakenAnimatedTentacleAnimationSpecDataAsset*       AnimationSpec;                                           // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FrameTimeDelta;                                          // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimationLength;                                         // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumFrames;                                               // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowLookAround;                                         // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RequiresWaterHeightQuery;                                // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IG02[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationPlayRateScale;                                  // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GEIB[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKrakenAnimatedTentacleAnimationBoneTrack>   Bones;                                                   // 0x0048(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenAnimatedTentacleAnimationMappingDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UKrakenAnimatedTentacleAnimationMappingDataAsset : public UDataAsset
	{
	public:
		TArray<struct FKrakenAnimatedTentacleMappedAnimation>      Animations;                                              // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenAnimatedTentacleAnimationSpecDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UKrakenAnimatedTentacleAnimationSpecDataAsset : public UDataAsset
	{
	public:
		TArray<struct FKrakenAnimatedTentacleAnimationSpecBone>    Bones;                                                   // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenAnimatedTentacleStateAnimationsDataAsset
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UKrakenAnimatedTentacleStateAnimationsDataAsset : public UDataAsset
	{
	public:
		TAssetPtr<class UKrakenAnimatedTentacleAnimationMappingDataAsset> MappingAssetReference;                                   // 0x0028(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_RXDJ[0x4];                                   // 0x0044(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<struct FKrakenAnimatedTentacleStateAnimationMapping> States;                                                  // 0x0048(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenHeadStateAnimationsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UKrakenHeadStateAnimationsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FKrakenHeadStateAnimationMapping>            States;                                                  // 0x0028(0x0010) Edit, ZeroConstructor

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenHead
	 * Size -> 0x0208 (FullSize[0x05D0] - InheritedSize[0x03C8])
	 */
	class AKrakenHead : public AActor
	{
	public:
		unsigned char                                              UnknownData_8ZTA[0x10];                                  // 0x03C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x03D8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHealthComponent*                                    HealthComponent;                                         // 0x03E0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActorDamageableComponent*                           ActorDamageableComponent;                                // 0x03E8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    SphereComponent;                                         // 0x03F0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UVenomComponent*                                     VenomComponent;                                          // 0x03F8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UExplosionComponent*                                 ExplosionComponent;                                      // 0x0400(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     BiteAttackVFX;                                           // 0x0408(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FStatus>                                     BreathingInContinuousStatusesToApply;                    // 0x0410(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      BreatheInStatusDuration;                                 // 0x0420(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SXV5[0x4];                                   // 0x0424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStatus>                                     RoarContinuousStatusesToApply;                           // 0x0428(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		float                                                      RoarStatusDuration;                                      // 0x0438(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2MJX[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnvQuery*                                           RoarEQSQuery;                                            // 0x0440(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              KnockbackDamagerType;                                    // 0x0448(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FKnockBackInfo                                      RoarKnockbackInfo;                                       // 0x0450(0x0050) Edit
		class UKrakenHeadAnimationInstance*                        HeadAnimInstance;                                        // 0x04A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             EQSQuerierLocation;                                      // 0x04A8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RAC8[0x4];                                   // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKrakenHeadHealthParamsDataAsset*                    KrakenHeadHealthParams;                                  // 0x04B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FHeadStateChangeRequest                             HeadStateRequest;                                        // 0x04C0(0x0018) Net, RepNotify, Protected
		bool                                                       IsDamageEnabled;                                         // 0x04D8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected
		unsigned char                                              UnknownData_VJ42[0x7];                                   // 0x04D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     Root;                                                    // 0x04E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5KHR[0xC0];                                  // 0x04E8(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BiteAttackImpactNamedPointsGroupName;                    // 0x05A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NS9X[0x20];                                  // 0x05B0(0x0020) MISSED OFFSET (PADDING)

	public:
		void TestSetDamageEnabled(bool InEnabled);
		void RequestState(class UClass* NewState);
		void OnRep_IsDamageEnabled();
		void OnRep_HeadStateRequest();
		void OnCoordinatedKrakenSpecialEvent(ECoordinatedKrakenSpecialEventTypes InEventType);
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenHeadAnimationInstance
	 * Size -> 0x0060 (FullSize[0x04A0] - InheritedSize[0x0440])
	 */
	class UKrakenHeadAnimationInstance : public UAnimInstance
	{
	public:
		class UClass*                                              CurrentState;                                            // 0x0440(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              PreviousState;                                           // 0x0448(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UKrakenHeadStateAnimationsDataAsset*                 MappingAsset;                                            // 0x0450(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnBlendTime;                                          // 0x0458(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultBlendTime;                                        // 0x045C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInIntro;                                               // 0x0460(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z9LB[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        PlayingMontage;                                          // 0x0468(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1PMO[0x10];                                  // 0x0470(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UKrakenHeadHitReactAnimationsDataAsset*              KrakenHeadHitReactionAsset;                              // 0x0480(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E0AA[0x18];                                  // 0x0488(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenHeadBreathingInStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UKrakenHeadBreathingInStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenHeadHealthParamsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UKrakenHeadHealthParamsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FKrakenHeadHealthPair>                       KrakenHeadHealthPairs;                                   // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenHeadHitReactAnimationsDataAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UKrakenHeadHitReactAnimationsDataAsset : public UDataAsset
	{
	public:
		TArray<struct FKrakenHeadHitReactAnimations>               HitReactionAnimations;                                   // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenHeadRoaringStatus
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UKrakenHeadRoaringStatus : public UStatusBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenIdleBehaviourParamsDataAsset
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class UKrakenIdleBehaviourParamsDataAsset : public UDataAsset
	{
	public:
		struct FKrakenIdleBehaviourParams                          Params;                                                  // 0x0028(0x00C0) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenParamsDataAsset
	 * Size -> 0x0160 (FullSize[0x0188] - InheritedSize[0x0028])
	 */
	class UKrakenParamsDataAsset : public UDataAsset
	{
	public:
		struct FKrakenParams                                       Params;                                                  // 0x0028(0x0160) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenPlayerGrabbingBehaviourParamsDataAsset
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UKrakenPlayerGrabbingBehaviourParamsDataAsset : public UDataAsset
	{
	public:
		struct FKrakenPlayerGrabbingBehaviourParams                Params;                                                  // 0x0028(0x00E8) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenServiceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UKrakenServiceInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenService
	 * Size -> 0x0238 (FullSize[0x0600] - InheritedSize[0x03C8])
	 */
	class AKrakenService : public AActor
	{
	public:
		unsigned char                                              UnknownData_DROE[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKrakenServiceParams                                KrakenServiceParams;                                     // 0x03D0(0x00A0) Transient, Protected
		unsigned char                                              UnknownData_3SRN[0xA0];                                  // 0x0470(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AKraken*                                             Kraken;                                                  // 0x0510(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FTOO[0xE8];                                  // 0x0518(0x00E8) MISSED OFFSET (PADDING)

	public:
		void RequestKrakenWithLocation(const struct FVector& SpawnLocation, class AActor* SpawnedForActor);
		bool IsServiceInitialized();
		bool IsKrakenActive();
		void DismissKraken();
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenServiceParamsDataAsset
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UKrakenServiceParamsDataAsset : public UDataAsset
	{
	public:
		struct FKrakenServiceParams                                Params;                                                  // 0x0028(0x00A0) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenShipHittingBehaviourParamsDataAsset
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UKrakenShipHittingBehaviourParamsDataAsset : public UDataAsset
	{
	public:
		struct FKrakenShipHittingBehaviourParams                   Params;                                                  // 0x0028(0x0060) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenShipWrappingBehaviourParamsDataAsset
	 * Size -> 0x0428 (FullSize[0x0450] - InheritedSize[0x0028])
	 */
	class UKrakenShipWrappingBehaviourParamsDataAsset : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_S3J2[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKrakenShipWrappingBehaviourParams                  Params;                                                  // 0x0030(0x0420) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Kraken.KrakenShipWrappingKnockbackRegionComponent
	 * Size -> 0x00A0 (FullSize[0x0380] - InheritedSize[0x02E0])
	 */
	class UKrakenShipWrappingKnockbackRegionComponent : public USceneComponent
	{
	public:
		class UBoxComponent*                                       KnockbackRegion;                                         // 0x02E0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             KnockbackDirection;                                      // 0x02E8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      KnockbackTime;                                           // 0x02F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKnockBackInfo                                      KnockbackParams;                                         // 0x02F8(0x0050) Edit
		unsigned char                                              UnknownData_D5NM[0x38];                                  // 0x0348(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
