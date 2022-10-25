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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Fire.EFireCellState
	 */
	enum class EFireCellState : uint8_t
	{
		Deactivated = 0,
		Flooded     = 1,
		Wet         = 2,
		Kindled     = 3,
		Smouldering = 4,
		Steaming    = 5,
		Burning     = 6,
		MAX         = 7,
		MAX01       = 8
	};

	/**
	 * Enum Fire.ELastIgnitionState
	 */
	enum class ELastIgnitionState : uint8_t
	{
		None    = 0,
		Success = 1,
		Failure = 2,
		MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Fire.FireGridCellSelection
	 * Size -> 0x0044
	 */
	struct FFireGridCellSelection
	{
	public:
		int32_t                                                    NumberOfAffectedCells;                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AdjacencyRadius;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceToAffectCellsAbove;                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceToAffectCellsBelow;                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TreatDiagonalsAsAdjacent;                                // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideFirePropagationTimesForAffectedCells;            // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4DL1[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         SidewaysPropagationTimeOverride;                         // 0x0014(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRange                                         UpwardPropagationTimeOverride;                           // 0x0024(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRange                                         DownwardPropagationTimeOverride;                         // 0x0034(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Fire.FireGridCellSelectionParams
	 * Size -> 0x0050
	 */
	struct FFireGridCellSelectionParams
	{
	public:
		class UClass*                                              ActorClassFilter;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      ChanceToAffectTheActor;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFireGridCellSelection                              FireGridCellSelectionParams;                             // 0x000C(0x0044) Edit
	};

	/**
	 * ScriptStruct Fire.CookerIgnitionParams
	 * Size -> 0x0078
	 */
	struct FCookerIgnitionParams
	{
	public:
		struct FFloatRange                                         InitialIgnitionTime;                                     // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRange                                         SuccessIgnitionTime;                                     // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRange                                         FailureIgnitionTime;                                     // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      ChanceToIgnite;                                          // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFireGridCellSelection                              IgnitionSelection;                                       // 0x0034(0x0044) Edit
	};

	/**
	 * ScriptStruct Fire.FireCellStateTimingParams
	 * Size -> 0x0094
	 */
	struct FFireCellStateTimingParams
	{
	public:
		struct FFloatRange                                         KindleTime;                                              // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRange                                         BurningTime;                                             // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRange                                         RainExposureTime;                                        // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CharringTime;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         SmoulderingTime;                                         // 0x0034(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRange                                         SteamingTime;                                            // 0x0044(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRange                                         WetTime;                                                 // 0x0054(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRange                                         SidewaysPropagationTime;                                 // 0x0064(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRange                                         UpwardPropagationTime;                                   // 0x0074(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FFloatRange                                         DownwardPropagationTime;                                 // 0x0084(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Fire.FireCellAudioParams
	 * Size -> 0x0040
	 */
	struct FFireCellAudioParams
	{
	public:
		class UWwiseObjectPoolWrapper*                             EmitterPool;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseObjectPoolWrapper*                             DousePool;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         FirePlay;                                                // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         FireStop;                                                // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         FireDouse;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FireSwitchGroup;                                         // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FireSwitchBurning;                                       // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FireSwitchKindled;                                       // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Fire.FireCellStateParticleTemplate
	 * Size -> 0x0038
	 */
	struct FFireCellStateParticleTemplate
	{
	public:
		class UParticleSystem*                                     Template;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TranslucencySortPriority;                                // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LRAM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         Mesh;                                                    // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeshSpawnTime;                                           // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MeshDespawnTime;                                         // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MeshScale;                                               // 0x0020(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EFireCellState                                             State;                                                   // 0x002C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideMaxLODToSpawnFor;                                // 0x002D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5Q7P[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxLODToSpawnFor;                                        // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SpawnWithLowFrequencySettings;                           // 0x0034(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       VisibleInLowDetailMode;                                  // 0x0035(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P2G0[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.FireGridVFXParams
	 * Size -> 0x0040
	 */
	struct FFireGridVFXParams
	{
	public:
		TArray<struct FFireCellStateParticleTemplate>              DefaultParticleTemplates;                                // 0x0000(0x0010) Edit, ZeroConstructor
		class UParticleSystem*                                     ExteriorLowDetailParticleSystem;                         // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ExteriorSmokeParticleSystem;                             // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     InteriorSmokeParticleSystem;                             // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InteriorSmokeTranslucencySortPriority;                   // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumInterleaveSpawnSteps;                                 // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TickIntervalForAllCells;                                 // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      KillSphereRadiusForDousingFire;                          // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExteriorLowDetailTransitionWarmupTime;                   // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxDefaultVFXToSpawnPerFrame;                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Fire.FireParticleSystem
	 * Size -> 0x0048
	 */
	struct FFireParticleSystem
	{
	public:
		class UParticleSystemComponent*                            SpawnedParticleSystem;                                   // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JYYB[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFireCellStateParticleTemplate                      ParticleTemplate;                                        // 0x0010(0x0038)
	};

	/**
	 * ScriptStruct Fire.FireMesh
	 * Size -> 0x0010
	 */
	struct FFireMesh
	{
	public:
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C2F7[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.FireGridRelativeSpawnDesc
	 * Size -> 0x0030
	 */
	struct FFireGridRelativeSpawnDesc
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FIntVector                                          GridLocation;                                            // 0x000C(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		int32_t                                                    NumCellRowsToSpawnFor;                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinNumCellsToActivate;                                   // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            CellIndicesToSpawnFor;                                   // 0x0020(0x0010) Edit, ZeroConstructor, EditConst
	};

	/**
	 * ScriptStruct Fire.FireGridLowDetailRelativeSpawnDesc
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FFireGridLowDetailRelativeSpawnDesc : public FFireGridRelativeSpawnDesc
	{
	public:
		class FName                                                EmitterName;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Fire.FireParticleSpawnData
	 * Size -> 0x0010
	 */
	struct FFireParticleSpawnData
	{
	public:
		float                                                      MaximumLODDistance;                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnInterval;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N38B[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.FireCellDesc
	 * Size -> 0x0100
	 */
	struct FFireCellDesc
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		struct FBox                                                BoundingBox;                                             // 0x000C(0x001C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		struct FIntVector                                          GridPosition;                                            // 0x0028(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		bool                                                       CanBurn;                                                 // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsExposedToWeather;                                      // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		EShipDeck                                                  Deck;                                                    // 0x0036(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_89N3[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CellIndex;                                               // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MasterCellFlatIndex;                                     // 0x003C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldSpawnDefaultParticleEffect;                        // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2PMV[0xF];                                   // 0x0041(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DefaultParticleEffectSpawnTransform;                     // 0x0050(0x0030) Edit, IsPlainOldData, NoDestructor
		struct FPlane                                              DefaultParticleEffectPlane;                              // 0x0080(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor
		TArray<struct FFireCellStateParticleTemplate>              CustomParticleEffectTemplates;                           // 0x0090(0x0010) Edit, ZeroConstructor
		struct FTransform                                          CustomParticleEffectSpawnTransform;                      // 0x00A0(0x0030) Edit, IsPlainOldData, NoDestructor
		TArray<int32_t>                                            NeighbourCellIndices;                                    // 0x00D0(0x0010) Edit, ZeroConstructor, EditConst
		TArray<struct FIntVector>                                  CustomAddedDiagonalNeighbourOffsets;                     // 0x00E0(0x0010) Edit, ZeroConstructor, EditConst
		TArray<struct FIntVector>                                  CustomRemovedDefaultNeighbourOffsets;                    // 0x00F0(0x0010) Edit, ZeroConstructor, EditConst
	};

	/**
	 * ScriptStruct Fire.FireDefaultVFXSpawnData
	 * Size -> 0x0140
	 */
	struct FFireDefaultVFXSpawnData
	{
	public:
		struct FFireCellStateParticleTemplate                      Template;                                                // 0x0000(0x0038)
		unsigned char                                              UnknownData_SIUW[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFireCellDesc                                       CellDesc;                                                // 0x0040(0x0100)
	};

	/**
	 * ScriptStruct Fire.FireParticleSpawnList
	 * Size -> 0x0020
	 */
	struct FFireParticleSpawnList
	{
	public:
		TArray<struct FFireParticleSpawnData>                      ParticleSpawnLODs;                                       // 0x0000(0x0010) ZeroConstructor
		unsigned char                                              UnknownData_TIPL[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.ActorFireDamageParams
	 * Size -> 0x0038
	 */
	struct FActorFireDamageParams
	{
	public:
		TAssetPtr<class UClass>                                    ActorClass;                                              // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_KSL9[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FFloatRange                                         TimeInFireBeforeDamage;                                  // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    LevelsOfDamage;                                          // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J6FO[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.ShipFireDamageParams
	 * Size -> 0x0018
	 */
	struct FShipFireDamageParams
	{
	public:
		class UClass*                                              DamagerType;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FActorFireDamageParams>                      ShipFireDamageParams;                                    // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct Fire.ShipFireLightParams
	 * Size -> 0x0014
	 */
	struct FShipFireLightParams
	{
	public:
		float                                                      FadeOutTime;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FirePostprocessComponentName;                            // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceToFireToActivatePostProcessSq;                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PostProcessSpringAcceleration;                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Fire.FireGridVfxSpawnSettings
	 * Size -> 0x0058
	 */
	struct FFireGridVfxSpawnSettings
	{
	public:
		TArray<struct FFireGridRelativeSpawnDesc>                  InteriorSmokeSpawnDescs;                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FFireGridLowDetailRelativeSpawnDesc>         LowDetailVFXSpawnDescs;                                  // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FFireParticleSpawnData>                      ParticleSpawnLODSettings;                                // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FFireParticleSpawnData                              LowFrequencyParticleSpawnSettings;                       // 0x0030(0x0010) Edit, DisableEditOnInstance
		TArray<struct FFireGridLowDetailRelativeSpawnDesc>         ExteriorSmokeVFXSpawnDescs;                              // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UFireGridVFXParamsDataAsset*                         VFXParams;                                               // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Fire.ShipFireLightRelativeSpawnDesc
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FShipFireLightRelativeSpawnDesc : public FFireGridRelativeSpawnDesc
	{
	public:
		struct FVector                                             LightPositionOffset;                                     // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_92KQ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EShipRegion>                                        DormantShipRegions;                                      // 0x0040(0x0010) Edit, ZeroConstructor
		float                                                      DormantFadeDistance;                                     // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AreaLightScaleWhenNotOnShip;                             // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Fire.ShipFireLight
	 * Size -> 0x0090
	 */
	struct FShipFireLight
	{
	public:
		struct FShipFireLightRelativeSpawnDesc                     Desc;                                                    // 0x0000(0x0058)
		class UPointLightComponent*                                PointLight;                                              // 0x0058(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                AreaLight;                                               // 0x0060(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            AreaLightMaterial;                                       // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N0ZB[0x20];                                  // 0x0070(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.ShipFireLightManager
	 * Size -> 0x0150
	 */
	struct FShipFireLightManager
	{
	public:
		TArray<struct FShipFireLightRelativeSpawnDesc>             LightSpawnDescs;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FGenericLightTemplate                               LightTemplate;                                           // 0x0010(0x00D0) Edit, DisableEditOnInstance
		TArray<struct FShipFireLight>                              Lights;                                                  // 0x00E0(0x0010) ZeroConstructor, Transient, ContainsInstancedReference
		class UFirePropagator*                                     Propagator;                                              // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         AreaLightMesh;                                           // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AreaLightZScale;                                         // 0x0100(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinLightRadius;                                          // 0x0104(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxLightRadius;                                          // 0x0108(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinFlickerScale;                                         // 0x010C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightMovementSpeedCmPerSecond;                           // 0x0110(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7149[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UShipFireLightParamsDataAsset*                       LightParams;                                             // 0x0118(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               ShipPostProcessComponent;                                // 0x0120(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UZ65[0x28];                                  // 0x0128(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.FireGridCharringManager
	 * Size -> 0x00C8
	 */
	struct FFireGridCharringManager
	{
	public:
		TArray<class UMaterialInterface*>                          OwnerMaterials;                                          // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             AdditionalGridOffsetForCharring;                         // 0x0010(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J0CN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2DDynamic*                                   FireGridTexture;                                         // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GDXE[0xA0];                                  // 0x0028(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.ReplicatedFireCellData
	 * Size -> 0x0001
	 */
	struct FReplicatedFireCellData
	{
	public:
		EFireCellState                                             State;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Fire.ReplicatedFireCellCharringData
	 * Size -> 0x0018
	 */
	struct FReplicatedFireCellCharringData
	{
	public:
		float                                                      MaxCharringTime;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5G8R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              TimeSpentCharring;                                       // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct Fire.PlayerNearBurningFireGridUpdatedEvent
	 * Size -> 0x0008
	 */
	struct FPlayerNearBurningFireGridUpdatedEvent
	{
	public:
		unsigned char                                              UnknownData_6UT6[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.ShipOnFireEndEvent
	 * Size -> 0x0001
	 */
	struct FShipOnFireEndEvent
	{
	public:
		unsigned char                                              UnknownData_5YAF[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.ShipOnFireBeginEvent
	 * Size -> 0x0001
	 */
	struct FShipOnFireBeginEvent
	{
	public:
		unsigned char                                              UnknownData_BDRG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.OnShipIgnitedEvent
	 * Size -> 0x0001
	 */
	struct FOnShipIgnitedEvent
	{
	public:
		unsigned char                                              UnknownData_I9UE[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.FireExtinguishedEvent
	 * Size -> 0x000C
	 */
	struct FFireExtinguishedEvent
	{
	public:
		struct FVector                                             ExtinguishLocation;                                      // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Fire.OnFireChangedEvent
	 * Size -> 0x0001
	 */
	struct FOnFireChangedEvent
	{
	public:
		bool                                                       OnFire;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Fire.FireCellStateData
	 * Size -> 0x0030
	 */
	struct FFireCellStateData
	{
	public:
		unsigned char                                              UnknownData_W335[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.HullCharringPersistenceModel
	 * Size -> 0x0018
	 */
	struct FHullCharringPersistenceModel : public FPersistenceModel
	{
	public:
		TArray<float>                                              TimeSpentCharring;                                       // 0x0000(0x0010) ZeroConstructor
		int32_t                                                    TotalCellsOnFire;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VNRT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Fire.PlayerFireGridTickParams
	 * Size -> 0x0048
	 */
	struct FPlayerFireGridTickParams
	{
	public:
		unsigned char                                              UnknownData_OC7O[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              FireGridActorPlayerIsInsideOf;                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              PlayerShipSize;                                          // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_YINE[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
