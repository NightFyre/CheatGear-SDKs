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
	 * Enum AthenaAI.EAIKnockbackStrengthType
	 */
	enum class EAIKnockbackStrengthType : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		MAX    = 3
	};

	/**
	 * Enum AthenaAI.EAIDialogueState
	 */
	enum class EAIDialogueState : uint8_t
	{
		Inactive = 0,
		Passive  = 1,
		Alerted  = 2,
		Dead     = 3,
		MAX      = 4
	};

	/**
	 * Enum AthenaAI.EBountySpawnerAudioState
	 */
	enum class EBountySpawnerAudioState : uint8_t
	{
		None         = 0,
		Action       = 1,
		Anticipation = 2,
		MAX          = 3
	};

	/**
	 * Enum AthenaAI.EBountySpawnerType
	 */
	enum class EBountySpawnerType : uint8_t
	{
		Default     = 0,
		BountyQuest = 1,
		BountyFort  = 2,
		SeaFort     = 3,
		MAX         = 4
	};

	/**
	 * Enum AthenaAI.EBountyTargetRank
	 */
	enum class EBountyTargetRank : uint8_t
	{
		Captain = 0,
		Crew    = 1,
		MAX     = 2
	};

	/**
	 * Enum AthenaAI.EBountyTargetGender
	 */
	enum class EBountyTargetGender : uint8_t
	{
		Male   = 0,
		Female = 1,
		MAX    = 2
	};

	/**
	 * Enum AthenaAI.EFaunaInWaterState
	 */
	enum class EFaunaInWaterState : uint8_t
	{
		NotInWater        = 0,
		FloatingOnSurface = 1,
		Underwater        = 2,
		MAX               = 3
	};

	/**
	 * Enum AthenaAI.EFaunaCratedState
	 */
	enum class EFaunaCratedState : uint8_t
	{
		NotInCrate     = 0,
		InProxyCrate   = 1,
		InWieldedCrate = 2,
		MAX            = 3
	};

	/**
	 * Enum AthenaAI.EDebugPetStateDescriptor
	 */
	enum class EDebugPetStateDescriptor : uint8_t
	{
		NoState                = 0,
		Hangout_Attached       = 1,
		Hangout_MoveToLocation = 2,
		Reacting               = 3,
		Pursuit                = 4,
		Idle                   = 5,
		Follow                 = 6,
		Eating                 = 7,
		Scared                 = 8,
		ForcedIdle             = 9,
		MAX                    = 10
	};

	/**
	 * Enum AthenaAI.EPetSize
	 */
	enum class EPetSize : uint8_t
	{
		Small  = 0,
		Medium = 1,
		Large  = 2,
		MAX    = 3
	};

	/**
	 * Enum AthenaAI.ESwimRotationMode
	 */
	enum class ESwimRotationMode : uint8_t
	{
		FaceMovement   = 0,
		UprightStrafe  = 1,
		LongwaysStrafe = 2,
		MAX            = 3
	};

	/**
	 * Enum AthenaAI.EArcToTargetDirection
	 */
	enum class EArcToTargetDirection : uint8_t
	{
		VelocityOrRotation           = 0,
		VelocityOrRotation2D         = 1,
		InversedVelocityOrRotation   = 2,
		InversedVelocityOrRotation2D = 3,
		Up                           = 4,
		Down                         = 5,
		GoalDirection2D              = 6,
		MAX                          = 7
	};

	/**
	 * Enum AthenaAI.EArcFollowingMode
	 */
	enum class EArcFollowingMode : uint8_t
	{
		SharkArc    = 0,
		Simple3DArc = 1,
		MAX         = 2
	};

	/**
	 * Enum AthenaAI.ESwimmingLineOfSightTest
	 */
	enum class ESwimmingLineOfSightTest : uint8_t
	{
		None      = 0,
		Lazy      = 1,
		Immediate = 2,
		MAX       = 3
	};

	/**
	 * Enum AthenaAI.ESwimmingSyncMode
	 */
	enum class ESwimmingSyncMode : uint8_t
	{
		Synchronous  = 0,
		Asynchronous = 1,
		MAX          = 2
	};

	/**
	 * Enum AthenaAI.ESwimmingArcMode
	 */
	enum class ESwimmingArcMode : uint8_t
	{
		ArcToTarget          = 0,
		SwimDirectlyToTarget = 1,
		SwimDirectlyDown     = 2,
		MAX                  = 3
	};

	/**
	 * Enum AthenaAI.ESwimmingGoalCheckMode
	 */
	enum class ESwimmingGoalCheckMode : uint8_t
	{
		Goal2D = 0,
		Goal3D = 1,
		MAX    = 2
	};

	/**
	 * Enum AthenaAI.ETaskReaction
	 */
	enum class ETaskReaction : uint8_t
	{
		Ignore      = 0,
		SucceedTask = 1,
		FailTask    = 2,
		MAX         = 3
	};

	/**
	 * Enum AthenaAI.ETinySharkDespawnReason
	 */
	enum class ETinySharkDespawnReason : uint8_t
	{
		Invalid  = 0,
		Defeated = 1,
		TimedOut = 2,
		MAX      = 3
	};

	/**
	 * Enum AthenaAI.ETinySharkActiveState
	 */
	enum class ETinySharkActiveState : uint8_t
	{
		TrackingTarget     = 0,
		WaitingForTarget   = 1,
		RepositionToTarget = 2,
		WaitingForRespawn  = 3,
		MAX                = 4
	};

	/**
	 * Enum AthenaAI.ETinySharkState
	 */
	enum class ETinySharkState : uint8_t
	{
		Inactive   = 0,
		Spawning   = 1,
		Active     = 2,
		Defeated   = 3,
		Despawning = 4,
		MAX        = 5
	};

	/**
	 * Enum AthenaAI.ETinySharkTypes
	 */
	enum class ETinySharkTypes : uint8_t
	{
		None             = 0,
		TheHuneringOne   = 1,
		TheCrestedQueen  = 2,
		TheShadowmaw     = 3,
		TheAncientTerror = 4,
		TheShroudedGhost = 5,
		MAX              = 6
	};

	/**
	 * Enum AthenaAI.EAthenaAISpawnType
	 */
	enum class EAthenaAISpawnType : uint8_t
	{
		SpawnOnLand   = 0,
		SpawnOnShip   = 1,
		SpawnSummoned = 2,
		SpawnBoarding = 3,
		Num           = 4,
		MAX           = 5
	};

	/**
	 * Enum AthenaAI.EAIAbilityDamageIntervalCounterMode
	 */
	enum class EAIAbilityDamageIntervalCounterMode : uint8_t
	{
		DontBlock                     = 0,
		BlockWhenExecutingThisAbility = 1,
		BlockWhenExecutingAnyAbility  = 2,
		MAX                           = 3
	};

	/**
	 * Enum AthenaAI.EAIDebugColour
	 */
	enum class EAIDebugColour : uint8_t
	{
		Red    = 0,
		Green  = 1,
		Blue   = 2,
		White  = 3,
		Yellow = 4,
		Black  = 5,
		MAX    = 6
	};

	/**
	 * Enum AthenaAI.AISpawnRequestResult
	 */
	enum class EAISpawnRequestResult : uint8_t
	{
		AISpawnRequestResult_Incomplete                          = 0,
		AISpawnRequestResult_Success                             = 1,
		AISpawnRequestResult_FailedSpawnDenied                   = 2,
		AISpawnRequestResult_FailedNoQuery                       = 3,
		AISpawnRequestResult_FailedNoValidPos                    = 4,
		AISpawnRequestResult_FailedLoadingPawnClass              = 5,
		AISpawnRequestResult_FailedLoadingItemDropComponentClass = 6,
		AISpawnRequestResult_Cancelled                           = 7,
		AISpawnRequestResult_AISpawnRequestResult_MAX            = 8
	};

	/**
	 * Enum AthenaAI.ClassLoadState
	 */
	enum class EClassLoadState : uint8_t
	{
		ClassLoadState_Incomplete         = 0,
		ClassLoadState_Success            = 1,
		ClassLoadState_NoLoad             = 2,
		ClassLoadState_Failed             = 3,
		ClassLoadState_ClassLoadState_MAX = 4
	};

	/**
	 * Enum AthenaAI.AISpawnLocationSearchResult
	 */
	enum class EAISpawnLocationSearchResult : uint8_t
	{
		AISpawnLocationSearchResult_Incomplete                      = 0,
		AISpawnLocationSearchResult_Success                         = 1,
		AISpawnLocationSearchResult_FailedNoQuery                   = 2,
		AISpawnLocationSearchResult_FailedNoValidPos                = 3,
		AISpawnLocationSearchResult_Cancelled                       = 4,
		AISpawnLocationSearchResult_AISpawnLocationSearchResult_MAX = 5
	};

	/**
	 * Enum AthenaAI.AISpawnRequestState
	 */
	enum class EAISpawnRequestState : uint8_t
	{
		AISpawnRequestState_PreloadClasses                     = 0,
		AISpawnRequestState_AwaitingBegin                      = 1,
		AISpawnRequestState_DelayUntilNextCanSpawnCheck        = 2,
		AISpawnRequestState_WaitForClassLoadsAndLocationResult = 3,
		AISpawnRequestState_DelayUntilNextLocationCheck        = 4,
		AISpawnRequestState_Complete                           = 5,
		AISpawnRequestState_AISpawnRequestState_MAX            = 6
	};

	/**
	 * Enum AthenaAI.EAITargetWeaponFiringArcResult
	 */
	enum class EAITargetWeaponFiringArcResult : uint8_t
	{
		LeftOfArc  = 0,
		RightOfArc = 1,
		WithinArc  = 2,
		MAX        = 3
	};

	/**
	 * Enum AthenaAI.ESirenEncounterState
	 */
	enum class ESirenEncounterState : uint8_t
	{
		Active   = 0,
		Inactive = 1,
		MAX      = 2
	};

	/**
	 * Enum AthenaAI.EBlackboardIntValueComparisonType
	 */
	enum class EBlackboardIntValueComparisonType : uint8_t
	{
		Equal             = 0,
		NotEqual          = 1,
		GreaterThan       = 2,
		LessThan          = 3,
		GreaterThanEquals = 4,
		LessThanEquals    = 5,
		MAX               = 6
	};

	/**
	 * Enum AthenaAI.EBlackboardValueCompositeType
	 */
	enum class EBlackboardValueCompositeType : uint8_t
	{
		And = 0,
		Or  = 1,
		MAX = 2
	};

	/**
	 * Enum AthenaAI.EBlackboardValueComparisonType
	 */
	enum class EBlackboardValueComparisonType : uint8_t
	{
		NearlyEqual       = 0,
		NotNearlyEqual    = 1,
		GreaterThan       = 2,
		LessThan          = 3,
		GreaterThanEquals = 4,
		LessThanEquals    = 5,
		MAX               = 6
	};

	/**
	 * Enum AthenaAI.EFloatValueComparisonType
	 */
	enum class EFloatValueComparisonType : uint8_t
	{
		NearlyEqual       = 0,
		NotNearlyEqual    = 1,
		GreaterThan       = 2,
		LessThan          = 3,
		GreaterThanEquals = 4,
		LessThanEquals    = 5,
		MAX               = 6
	};

	/**
	 * Enum AthenaAI.ECoralShieldVFXRole
	 */
	enum class ECoralShieldVFXRole : uint8_t
	{
		None     = 0,
		Caster   = 1,
		Receiver = 2,
		MAX      = 3
	};

	/**
	 * Enum AthenaAI.ECoralShieldVFXState
	 */
	enum class ECoralShieldVFXState : uint8_t
	{
		Off      = 0,
		Starting = 1,
		On       = 2,
		Ending   = 3,
		MAX      = 4
	};

	/**
	 * Enum AthenaAI.ETraceDirection
	 */
	enum class ETraceDirection : uint8_t
	{
		ItemToContext = 0,
		ContextToItem = 1,
		MAX           = 2
	};

	/**
	 * Enum AthenaAI.EAIThreatLevel
	 */
	enum class EAIThreatLevel : uint8_t
	{
		NoDanger   = 0,
		Nervous    = 1,
		Threatened = 2,
		Calm       = 3,
		MAX        = 4
	};

	/**
	 * Enum AthenaAI.EOceanCrawlerAbilityAudioKey
	 */
	enum class EOceanCrawlerAbilityAudioKey : uint8_t
	{
		NONE                                               = 0,
		Hermit_Start_BurrowingLoop                         = 1,
		Hermit_Stop_BurrowingLoop                          = 2,
		Hermit_Play_BurrowDown_OneShot                     = 3,
		Hermit_Play_BurrowEmerge_OneShot                   = 4,
		Hermit_Play_BurrowHealTarget_OneShot               = 5,
		Hermit_Play_SporeBreath_OneShot                    = 6,
		Hermit_Play_BullRushChargeUp_OneShot               = 7,
		Hermit_Play_BullRushChargeGo_OneShot               = 8,
		Hermit_Play_BullRushStaticImpact_OneShot           = 9,
		Hermit_Play_BullRushCharacterImpact_OneShot        = 10,
		Crab_Play_PummelWindBack_OneShot                   = 11,
		Crab_Play_PummelImpact_OneShot                     = 12,
		Crab_Play_CoralShieldStart_OneShot                 = 13,
		Crab_Play_CoralShieldEnd_OneShot                   = 14,
		Crab_Play_CoralShieldInterrupted_OneShot           = 15,
		Crab_Play_CoralShieldApplied_OneShot               = 16,
		Crab_Play_CoralShieldStopApplying_OneShot          = 17,
		Eel_Play_EelelectricShieldStartCharge_OneShot      = 18,
		Eel_Play_EelelectricShieldCast_OneShot             = 19,
		Eel_Play_EelelectricShieldInterrupted_OneShot      = 20,
		Eel_Play_EelelectricShieldAppliedToTarget_OneShot  = 21,
		Eel_Play_EelelectricShieldHitToChain_OneShot       = 22,
		Eel_Play_EelelectricShieldFinishedOnTarget_OneShot = 23,
		Eel_Play_EelElectricEelThrowCharge_OneShot         = 24,
		MAX                                                = 25
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AthenaAI.AthenaAIFormComponentVfxCustomisation
	 * Size -> 0x0018
	 */
	struct FAthenaAIFormComponentVfxCustomisation
	{
	public:
		class UClass*                                              VfxCustomisationType;                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       VfxEnabled;                                              // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9K26[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             VfxTemplate;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AISpawnTypeParams
	 * Size -> 0x00E8
	 */
	struct FAISpawnTypeParams
	{
	public:
		TAssetPtr<class UClass>                                    AIClass;                                                 // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_PD75[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FStringAssetReference                               SkillsetOverride;                                        // 0x0020(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               LoadoutOverride;                                         // 0x0030(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               FormOverride;                                            // 0x0040(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               AmmoOverride;                                            // 0x0050(0x0010) Edit, ZeroConstructor
		TAssetPtr<class UClass>                                    ItemDropComponentClassOverride;                          // 0x0060(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_9VQ3[0x4];                                   // 0x007C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UClass*                                              AIClassIdOverride;                                       // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FStringAssetReference                               TeamColorOverride;                                       // 0x0088(0x0010) Edit, ZeroConstructor
		struct FEncounterParams                                    EncounterTrackingParams;                                 // 0x0098(0x000C) Edit
		class FName                                                DioramaRole;                                             // 0x00A4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_85E2[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LocalisableName;                                         // 0x00B0(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_MNNQ[0x20];                                  // 0x00C8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct AthenaAI.WeightedAISpawnTypeParams
	 * Size -> 0x00F0
	 */
	struct FWeightedAISpawnTypeParams
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxTimesCanBeSelected;                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAISpawnTypeParams                                  Params;                                                  // 0x0008(0x00E8) Edit
	};

	/**
	 * ScriptStruct AthenaAI.AISpawnTypeParamsCollection
	 * Size -> 0x0048
	 */
	struct FAISpawnTypeParamsCollection
	{
	public:
		unsigned char                                              UnknownData_O149[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeightedAISpawnTypeParams>                  SpawnParams;                                             // 0x0008(0x0010) Edit, ZeroConstructor
		unsigned char                                              UnknownData_I900[0x30];                                  // 0x0018(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIEncounterAndWaveSettingsOverride
	 * Size -> 0x0028
	 */
	struct FAIEncounterAndWaveSettingsOverride
	{
	public:
		class UAIEncounterSettings*                                EncounterSettings;                                       // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAISpawnWaveSequenceRankProgression*                 SpawnWaveProgression;                                    // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Chance;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FeatureToggle;                                           // 0x0014(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStoryFlag                                          RequiredStory;                                           // 0x001C(0x0008) Edit, DisableEditOnInstance
		bool                                                       UseStoryAndNotFeatureToggle;                             // 0x0024(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5S5A[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AISpawnContextIdEncounterSettingsPair
	 * Size -> 0x0038
	 */
	struct FAISpawnContextIdEncounterSettingsPair
	{
	public:
		TArray<class UClass*>                                      SpawnContexts;                                           // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper
		bool                                                       DisableSpawning;                                         // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6WBN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIEncounterSettings*                                EncounterSettings;                                       // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAISpawnWaveSequenceRankProgression*                 SpawnWaveProgression;                                    // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAIEncounterAndWaveSettingsOverride>         EncounterAndWaveSettingsOverride;                        // 0x0028(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AISpawnOverride
	 * Size -> 0x0010
	 */
	struct FAISpawnOverride
	{
	public:
		struct FStringAssetReference                               FormOverride;                                            // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AthenaAI.ConditionalAISpawnOverride
	 * Size -> 0x0018
	 */
	struct FConditionalAISpawnOverride
	{
	public:
		class UAISpawnOverrideCondition*                           Condition;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FAISpawnOverride                                    Override;                                                // 0x0008(0x0010) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AthenaAI.AdditionalSpawnerBehaviour
	 * Size -> 0x0010
	 */
	struct FAdditionalSpawnerBehaviour
	{
	public:
		class USpawnerBehaviourStrategy*                           BehaviourStrategy;                                       // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              UnknownData_RKNO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIFormDamageResponse
	 * Size -> 0x0010
	 */
	struct FAIFormDamageResponse
	{
	public:
		class UClass*                                              DamagerType;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      DamageMultiplier;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterHitReactionAnimType                              HitReaction;                                             // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsKnockbackDisabled;                                     // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsStunDisabled;                                          // 0x000E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_735G[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AISpawnerWave
	 * Size -> 0x0100
	 */
	struct FAISpawnerWave
	{
	public:
		float                                                      SpawnChance;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IHH4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRange                           NumOfSpawnsInWave;                                       // 0x0008(0x0020) Edit
		struct FAISpawnTypeParamsCollection                        SpawnTypeParamsOverride;                                 // 0x0028(0x0048) Edit
		struct FWeightedProbabilityRangeOfRanges                   DelayBeforeWave;                                         // 0x0070(0x0030) Edit
		struct FWeightedProbabilityRangeOfRanges                   DelayBetweenSpawns;                                      // 0x00A0(0x0030) Edit
		struct FWeightedProbabilityRangeOfRanges                   DelayBeforeNextWaveIfSuccessful;                         // 0x00D0(0x0030) Edit
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAIControllerParamValue
	 * Size -> 0x000C
	 */
	struct FAthenaAIControllerParamValue
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAIAbilityPlayerBasedRange
	 * Size -> 0x0038
	 */
	struct FAthenaAIAbilityPlayerBasedRange
	{
	public:
		int32_t                                                    MaxPlayers;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6IFN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   WeightedArray;                                           // 0x0008(0x0030) Edit
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAIAbilityPlayerBasedRanges
	 * Size -> 0x0010
	 */
	struct FAthenaAIAbilityPlayerBasedRanges
	{
	public:
		TArray<struct FAthenaAIAbilityPlayerBasedRange>            AbilityRanges;                                           // 0x0000(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.MinMaxAbilityRange
	 * Size -> 0x0008
	 */
	struct FMinMaxAbilityRange
	{
	public:
		float                                                      MinDistanceToTarget;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDistanceToTarget;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AIAbilityFollowUp
	 * Size -> 0x0010
	 */
	struct FAIAbilityFollowUp
	{
	public:
		class UClass*                                              AbilityType;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Chance;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N15T[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIAbilityContinuousCooldownParameterData
	 * Size -> 0x0020
	 */
	struct FAIAbilityContinuousCooldownParameterData
	{
	public:
		struct FAthenaAIAbilityPlayerBasedRanges                   InitialCooldown;                                         // 0x0000(0x0010) Edit, DisableEditOnInstance
		struct FAthenaAIAbilityPlayerBasedRanges                   CooldownBetweenActivations;                              // 0x0010(0x0010) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AthenaAI.AttackableTypeToAnimMapping
	 * Size -> 0x0028
	 */
	struct FAttackableTypeToAnimMapping
	{
	public:
		ESwimAttackableType                                        AttackType;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6KF1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             AnimMontage;                                             // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayAsDynamicMontage;                                    // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EP19[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimLength;                                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeIntoAnimOfAttack;                                    // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetKnockBackStrength;                                 // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RumbleTag;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.SwimAttackTargetShipImpulseData
	 * Size -> 0x0038
	 */
	struct FSwimAttackTargetShipImpulseData
	{
	public:
		class UClass*                                              ShipSize;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      PushImpulseForce;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PushImpulseLocation;                                     // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      PushForceScalingFactorForeAndAftOfShipLowerBound;        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PushForceScalingFactorForeAndAftOfShipUpperBound;        // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RollImpulseForce;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RollImpulseLocation;                                     // 0x0024(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RollForceScalingFactorForeAndAftOfShipLowerBound;        // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RollForceScalingFactorForeAndAftOfShipUpperBound;        // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AIStrategyMovementProperties
	 * Size -> 0x0018
	 */
	struct FAIStrategyMovementProperties
	{
	public:
		class UClass*                                              AIStrategy;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      MaxSpeedAmp;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxAccelAmp;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OverrideRVOAvoidanceRadius;                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OverrideBlendSpeed;                                      // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AIPersistentSpawnerWave
	 * Size -> 0x0028 (FullSize[0x0128] - InheritedSize[0x0100])
	 */
	struct FAIPersistentSpawnerWave : public FAISpawnerWave
	{
	public:
		bool                                                       CacheHealthOnDespawn;                                    // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZRHQ[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AITypeToCache;                                           // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_4GNE[0x18];                                  // 0x0110(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIBountySpawnerWave
	 * Size -> 0x0060 (FullSize[0x0188] - InheritedSize[0x0128])
	 */
	struct FAIBountySpawnerWave : public FAIPersistentSpawnerWave
	{
	public:
		bool                                                       IsTarget;                                                // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsUsingDialogue;                                         // 0x0129(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VTJC[0x2];                                   // 0x012A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinPlayersToEnable;                                      // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBountyTargetGender                                        Gender;                                                  // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBountyTargetRank                                          Rank;                                                    // 0x0131(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L997[0x6];                                   // 0x0132(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPostBountyAIPawnSpawnedAction*                      PostSpawnAction;                                         // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RT7F[0x38];                                  // 0x0140(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BountyReward;                                            // 0x0178(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TWeakObjectPtr<class UItemSpawnData>                       BountyRewardSpawnData;                                   // 0x0180(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper
	};

	/**
	 * ScriptStruct AthenaAI.AIBountySpawnerWaveGroup
	 * Size -> 0x0030
	 */
	struct FAIBountySpawnerWaveGroup
	{
	public:
		TArray<struct FAIBountySpawnerWave>                        Waves;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, ContainsInstancedReference
		int32_t                                                    NumNonTargetAIToKillToMoveToNextWaveGroup;               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UB6U[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CombatDialogueForWaveGroup;                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZRS8[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIFaunaSpawnerWave
	 * Size -> 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
	 */
	struct FAIFaunaSpawnerWave : public FAISpawnerWave
	{
	public:
		unsigned char                                              UnknownData_QZQ9[0x10];                                  // 0x0100(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAIControllerSenseSettings
	 * Size -> 0x0014
	 */
	struct FAthenaAIControllerSenseSettings
	{
	public:
		bool                                                       EnableSight;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       EnableHearing;                                           // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       EnableDamage;                                            // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4LA4[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SightRadius;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LoseSightRadius;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PeripheralVisionAngleDegrees;                            // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxHearingRange;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAIControllerSenseSettingOverride
	 * Size -> 0x0020
	 */
	struct FAthenaAIControllerSenseSettingOverride
	{
	public:
		class UClass*                                              AIStrategy;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FAthenaAIControllerSenseSettings                    SenseSettings;                                           // 0x0008(0x0014) Edit
		bool                                                       ClearPerceivedData;                                      // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZD52[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIStategyControllerMovementMod
	 * Size -> 0x0010
	 */
	struct FAIStategyControllerMovementMod
	{
	public:
		class UClass*                                              AIStrategy;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      OverrideControlRotationInterpSpeed;                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4U49[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAIDebugCostDisplay
	 * Size -> 0x0001
	 */
	struct FAthenaAIDebugCostDisplay
	{
	public:
		unsigned char                                              UnknownData_7YAQ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIDebugSpawnAmount
	 * Size -> 0x0010
	 */
	struct FAIDebugSpawnAmount
	{
	public:
		class UAIEncounterSettings*                                EncounterSettings;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumToSpawn;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4IF1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIDebugSpawnConfiguration
	 * Size -> 0x0028
	 */
	struct FAIDebugSpawnConfiguration
	{
	public:
		int32_t                                                    NumIslandsToSpawnOn;                                     // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1U05[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        SpecificRegionsToSpawnOn;                                // 0x0008(0x0010) Edit, ZeroConstructor
		TArray<struct FAIDebugSpawnAmount>                         WhatToSpawn;                                             // 0x0018(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AIEncounterSpecification
	 * Size -> 0x00D0
	 */
	struct FAIEncounterSpecification
	{
	public:
		TAssetPtr<class UClass>                                    PawnClass;                                               // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_PVEY[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UAthenaAIControllerParamsDataAsset*                  Skillset;                                                // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULoadoutAsset*                                       Loadout;                                                 // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAthenaAIFormDataAsset*                              Form;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAthenaAIAmmoDataAsset*                              Ammo;                                                    // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              AIClass;                                                 // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAIPartsCategory*                                    PartsCategory;                                           // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TAssetPtr<class UClass>                                    ItemDropComponentClass;                                  // 0x0050(0x001C) ELEMENT_SIZE_MISMATCH UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_CD6Z[0x4];                                   // 0x006C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    TeamColorIndex;                                          // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                DioramaRole;                                             // 0x0074(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XRIA[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LocalisableName;                                         // 0x0080(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_2HY5[0x20];                                  // 0x0098(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FEncounterParams                                    EncounterTrackingParams;                                 // 0x00B8(0x000C)
		int32_t                                                    MinPlayersToEnable;                                      // 0x00C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowNameplate;                                           // 0x00C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsUsingDialogue;                                         // 0x00C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YZIY[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIDioramaPawn
	 * Size -> 0x0048
	 */
	struct FAIDioramaPawn
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2127[0x40];                                  // 0x0008(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIDioramaRoleDesc
	 * Size -> 0x0028
	 */
	struct FAIDioramaRoleDesc
	{
	public:
		class FName                                                RoleName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               CustomAnimationAsset;                                    // 0x0008(0x0010) Edit, ZeroConstructor
		class FName                                                CustomAnimationToRunOnSpawn;                             // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              StartingItemCategory;                                    // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AIDioramaLocationSourceComponentData
	 * Size -> 0x0040
	 */
	struct FAIDioramaLocationSourceComponentData
	{
	public:
		struct FTransform                                          RelativeTransform;                                       // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor
		class AActor*                                              Interactable;                                            // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UZSO[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.IslandDioramas
	 * Size -> 0x0010
	 */
	struct FIslandDioramas
	{
	public:
		unsigned char                                              Entries[0x10];                                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty AthenaAI.IslandDioramas.Entries
	};

	/**
	 * ScriptStruct AthenaAI.DioramaCategoryEntries
	 * Size -> 0x00A0
	 */
	struct FDioramaCategoryEntries
	{
	public:
		TMap<class FName, struct FIslandDioramas>                  EntriesByIslandName;                                     // 0x0000(0x0050) ZeroConstructor
		unsigned char                                              UnknownData_3GFC[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.PetFlyingStrategyProperties
	 * Size -> 0x0018
	 */
	struct FPetFlyingStrategyProperties
	{
	public:
		class UClass*                                              Strategy;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      ChanceOfFlying;                                          // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinFlyingMeshZOffset;                                    // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxFlyingMeshZOffset;                                    // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NWGM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.PetMovementRequest
	 * Size -> 0x000C
	 */
	struct FPetMovementRequest
	{
	public:
		EAthenaAnimationPetRoamingState                            State;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZU83[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetMeshZOffset;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AdjustingFlight;                                         // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QQMS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.PetTurnRateModifier
	 * Size -> 0x0010
	 */
	struct FPetTurnRateModifier
	{
	public:
		class UClass*                                              Strategy;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TurnRateModifier;                                        // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X9PY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.PetLoadedMaterial
	 * Size -> 0x0010
	 */
	struct FPetLoadedMaterial
	{
	public:
		class UMaterialInstance*                                   MaterialInstance;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CastShadows;                                             // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LV55[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.PetPartSizeMapping
	 * Size -> 0x0008
	 */
	struct FPetPartSizeMapping
	{
	public:
		EPetSize                                                   PetSize;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9J09[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PetScale;                                                // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AIPartId
	 * Size -> 0x0008
	 */
	struct FAIPartId
	{
	public:
		class FName                                                PartId;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.PetMaterialEntry
	 * Size -> 0x0018
	 */
	struct FPetMaterialEntry
	{
	public:
		struct FStringAssetReference                               MaterialReference;                                       // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		bool                                                       CastShadows;                                             // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LPSB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.PetWieldableReactMapping
	 * Size -> 0x0010
	 */
	struct FPetWieldableReactMapping
	{
	public:
		class UClass*                                              WieldableType;                                           // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                ReactId;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAIControllerDamageTargetScoreFromPerceivedTarget
	 * Size -> 0x0014
	 */
	struct FAthenaAIControllerDamageTargetScoreFromPerceivedTarget
	{
	public:
		float                                                      MinDamageTargetScore;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDamageTargetScore;                                    // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageForMinDamageTargetScore;                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageForMaxDamageTargetScore;                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RateToDecayDamagedFromTarget;                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAIControllerHealthCustomisation
	 * Size -> 0x000C
	 */
	struct FAthenaAIControllerHealthCustomisation
	{
	public:
		bool                                                       OverrideMaxHealth;                                       // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OverrideMaxHealthWithMinMax;                             // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B4UX[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinHealth;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxHealth;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAIControllerWeightedRangesParamValue
	 * Size -> 0x0038
	 */
	struct FAthenaAIControllerWeightedRangesParamValue
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   Value;                                                   // 0x0008(0x0030) Edit
	};

	/**
	 * ScriptStruct AthenaAI.QuestVariableSharkPawn
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableSharkPawn : public FQuestVariable
	{	};

	/**
	 * ScriptStruct AthenaAI.ExperienceTracker
	 * Size -> 0x0010
	 */
	struct FExperienceTracker
	{
	public:
		class UTaleQuestTinySharkExperienceTracker*                Tracker;                                                 // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_736X[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.TinySharkParams
	 * Size -> 0x00B8
	 */
	struct FTinySharkParams
	{
	public:
		class UClass*                                              TinySharkType;                                           // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      TargetRadius;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpawnOffset;                                             // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		TAssetPtr<class UClass>                                    TinySharkAIType;                                         // 0x0018(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_3GU0[0x4];                                   // 0x0034(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class UAthenaAIControllerParamsDataAsset>        TinySharkSkillset;                                       // 0x0038(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_29OU[0x4];                                   // 0x0054(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TAssetPtr<class ULoadoutAsset>                             TinySharkLoadout;                                        // 0x0058(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_I879[0x4];                                   // 0x0074(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UClass*                                              TinySharkClassID;                                        // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   LifetimeTimeout;                                         // 0x0080(0x0030) Edit
		float                                                      TrackedShipDistanceThreshold;                            // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RepositionTime;                                          // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.QuestVariableTinySharkExperience
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableTinySharkExperience : public FQuestVariable
	{	};

	/**
	 * ScriptStruct AthenaAI.TinySharkShipSpawnData
	 * Size -> 0x0068
	 */
	struct FTinySharkShipSpawnData
	{
	public:
		class UClass*                                              ShipSize;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   Timer;                                                   // 0x0008(0x0030) Edit, DisableEditOnInstance
		TArray<TAssetPtr<class UAthenaAIControllerParamsDataAsset>> ControllerParams;                                        // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		struct FWeightedProbabilityRange                           ControllerParamsToUse;                                   // 0x0048(0x0020) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AthenaAI.TinySharkServiceParams
	 * Size -> 0x0028
	 */
	struct FTinySharkServiceParams
	{
	public:
		class UTinySharkParamsDataAsset*                           TinySharkParams;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FTinySharkShipSpawnData>                     SpawnForShipData;                                        // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UEnvQuery*                                           SpawnForShipQuery;                                       // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnFailureTimer;                                       // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZDUK[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAICharacterCannonTarget
	 * Size -> 0x000C
	 */
	struct FAthenaAICharacterCannonTarget
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TargetLocation;                                          // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAICharacterCannonTargetingParams
	 * Size -> 0x0010
	 */
	struct FAthenaAICharacterCannonTargetingParams
	{
	public:
		TArray<struct FAthenaAICharacterCannonTarget>              Params;                                                  // 0x0000(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
	 * Size -> 0x0010
	 */
	struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
	{
	public:
		class UClass*                                              ItemCategory;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UCurveFloat*                                         DistanceInMToProjectileHitChanceCurve;                   // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryNamedParams
	 * Size -> 0x0018
	 */
	struct FAthenaAICharacterControllerItemCategoryNamedParams
	{
	public:
		class UClass*                                              ItemCategory;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FAthenaAIControllerParamValue>               NamedControllerParams;                                   // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAIItemParamValue
	 * Size -> 0x0030
	 */
	struct FAthenaAIItemParamValue
	{
	public:
		TAssetPtr<class UClass>                                    ItemClass;                                               // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_79CA[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                ParamName;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Value;                                                   // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H0OS[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAICharacterControllerSpawnItemDescForItemCategory
	 * Size -> 0x0010
	 */
	struct FAthenaAICharacterControllerSpawnItemDescForItemCategory
	{
	public:
		class UClass*                                              ItemCategory;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              ItemDesc;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAIAbilityDamageStage
	 * Size -> 0x0010
	 */
	struct FAthenaAIAbilityDamageStage
	{
	public:
		TArray<class UAthenaAIAbilityStageParams*>                 AbilitiesInStage;                                        // 0x0000(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAICharacterControllerWeightedAmmoType
	 * Size -> 0x0010
	 */
	struct FAthenaAICharacterControllerWeightedAmmoType
	{
	public:
		class UClass*                                              AmmoType;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Weighting;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BPDF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIAmmoRankMapping
	 * Size -> 0x0018
	 */
	struct FAIAmmoRankMapping
	{
	public:
		class UAthenaAIAmmoDataAsset*                              Ammo;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              Weights;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AIDebugVisualisationLine
	 * Size -> 0x0020
	 */
	struct FAIDebugVisualisationLine
	{
	public:
		struct FVector                                             From;                                                    // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             To;                                                      // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      LifeTime;                                                // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAIDebugColour                                             Colour;                                                  // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W21N[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIDebugVisualisationBox
	 * Size -> 0x0040
	 */
	struct FAIDebugVisualisationBox
	{
	public:
		struct FVector                                             Centre;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Extents;                                                 // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DHCL[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0020(0x0010) IsPlainOldData, NoDestructor
		float                                                      LifeTime;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAIDebugColour                                             Colour;                                                  // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZYOQ[0xB];                                   // 0x0035(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIDebugVisualisationCylinder
	 * Size -> 0x0024
	 */
	struct FAIDebugVisualisationCylinder
	{
	public:
		struct FVector                                             To;                                                      // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             From;                                                    // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LifeTime;                                                // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAIDebugColour                                             Colour;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NRIJ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIDebugVisualisationSphere
	 * Size -> 0x0018
	 */
	struct FAIDebugVisualisationSphere
	{
	public:
		struct FVector                                             Centre;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LifeTime;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAIDebugColour                                             Colour;                                                  // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MQG9[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIDebugVisualisationCone
	 * Size -> 0x002C
	 */
	struct FAIDebugVisualisationCone
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Direction;                                               // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      Length;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AngleWidthRadians;                                       // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AngleHeightRadians;                                      // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LifeTime;                                                // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAIDebugColour                                             Colour;                                                  // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QVEM[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIIndividualVarietyEntry
	 * Size -> 0x0020
	 */
	struct FAIIndividualVarietyEntry
	{
	public:
		TArray<struct FStringAssetReference>                       Loadouts;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    RankOffset;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weight;                                                  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxPerEncounter;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XW0E[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIFormVarietyEntry
	 * Size -> 0x0028
	 */
	struct FAIFormVarietyEntry
	{
	public:
		struct FStringAssetReference                               Form;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      Weight;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxPerEncounter;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAIIndividualVarietyEntry>                   Individuals;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.TargetSkillsetProgressionPair
	 * Size -> 0x0020
	 */
	struct FTargetSkillsetProgressionPair
	{
	public:
		struct FStringAssetReference                               CrewSkillset;                                            // 0x0000(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               CaptainSkillset;                                         // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.TargetItemDropProgressionPair
	 * Size -> 0x0020
	 */
	struct FTargetItemDropProgressionPair
	{
	public:
		struct FStringAssetReference                               CrewItemSpawn;                                           // 0x0000(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               CaptainItemSpawn;                                        // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AIEncounterGenerationRecipeFeatureBasedRankOrderList
	 * Size -> 0x0018
	 */
	struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList
	{
	public:
		class FName                                                FeatureName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UAIEncounterGenerationRecipe*>                Recipes;                                                 // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AIFormRankMapping
	 * Size -> 0x0018
	 */
	struct FAIFormRankMapping
	{
	public:
		class UAthenaAIFormDataAsset*                              Form;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              Weights;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AIPartsCategoryMapping
	 * Size -> 0x0010
	 */
	struct FAIPartsCategoryMapping
	{
	public:
		class UClass*                                              ClassId;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAIPartsCategory*                                    PartsCategory;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AIPartsCategoryFormMapping
	 * Size -> 0x0018
	 */
	struct FAIPartsCategoryFormMapping
	{
	public:
		class UAthenaAIFormDataAsset*                              Form;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAIPartsCategoryMapping>                     CategoryMappings;                                        // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AISkillsetRankMapping
	 * Size -> 0x0018
	 */
	struct FAISkillsetRankMapping
	{
	public:
		class UAthenaAIControllerParamsDataAsset*                  Skillset;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              Weights;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AIDropSpawnerRankMapping
	 * Size -> 0x0030
	 */
	struct FAIDropSpawnerRankMapping
	{
	public:
		TAssetPtr<class UClass>                                    SpawnerClass;                                            // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_5RKM[0x4];                                   // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<float>                                              Weights;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AILoadoutRankMapping
	 * Size -> 0x0018
	 */
	struct FAILoadoutRankMapping
	{
	public:
		class ULoadoutAsset*                                       Loadout;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              Weights;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AITypeData
	 * Size -> 0x0058
	 */
	struct FAITypeData
	{
	public:
		class FName                                                AITypeName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringClassReference                               AIPawnClass;                                             // 0x0008(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               DefaultDebugSkillset;                                    // 0x0018(0x0010) Edit, ZeroConstructor
		struct FStringAssetReference                               DefaultDebugLoadout;                                     // 0x0028(0x0010) Edit, ZeroConstructor
		class UClass*                                              DefaultDebugAIClassId;                                   // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       RequireNavMesh;                                          // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5VK2[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AIRegionCostUnits;                                       // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AIWorldCostUnits;                                        // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FeatureToggle;                                           // 0x004C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5XDM[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AISpawnWaveSequenceRankMapping
	 * Size -> 0x0018
	 */
	struct FAISpawnWaveSequenceRankMapping
	{
	public:
		class UAISpawnWaveSequence*                                SpawnWaveSequence;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              Weights;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AIWeightedProbabilityRangeOfRangesRankMapping
	 * Size -> 0x0018
	 */
	struct FAIWeightedProbabilityRangeOfRangesRankMapping
	{
	public:
		class UAIWeightedProbabilityRangeOfRangesAsset*            RangeOfRanges;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              Weights;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.CustomPlayersAITrackerData
	 * Size -> 0x0020
	 */
	struct FCustomPlayersAITrackerData
	{
	public:
		class UAIPlayerTracker*                                    Tracker;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CE2D[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIPartIdNumVariantInfo
	 * Size -> 0x000C
	 */
	struct FAIPartIdNumVariantInfo
	{
	public:
		class FName                                                AIPartId;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumVariants;                                             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.ReplicatedAIPartsData
	 * Size -> 0x0018
	 */
	struct FReplicatedAIPartsData
	{
	public:
		class UAIPartsCategory*                                    PartsCategory;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAIPartId                                           AIPartId;                                                // 0x0008(0x0008)
		int32_t                                                    MeshIndex;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TeamColorIndex;                                          // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AIPerCrewSpawnerRespawnSettings
	 * Size -> 0x000C
	 */
	struct FAIPerCrewSpawnerRespawnSettings
	{
	public:
		float                                                      MinRespawnTimeInterval;                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxRespawnTimeInterval;                                  // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RespawnChance;                                           // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AIPerCrewSpawnerStoryBasedRespawnSettings
	 * Size -> 0x0014
	 */
	struct FAIPerCrewSpawnerStoryBasedRespawnSettings
	{
	public:
		struct FAIPerCrewSpawnerRespawnSettings                    RespawnSettings;                                         // 0x0000(0x000C) Edit, DisableEditOnInstance
		struct FStoryFlag                                          StoryFlag;                                               // 0x000C(0x0008) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AthenaAI.SpawnLocationGroup
	 * Size -> 0x0020
	 */
	struct FSpawnLocationGroup
	{
	public:
		TArray<class FName>                                        AllowedSpawnTypes;                                       // 0x0000(0x0010) Edit, ZeroConstructor
		TArray<struct FVector>                                     SpawnLocations;                                          // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AISpawnContextData
	 * Size -> 0x0010
	 */
	struct FAISpawnContextData
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              Id;                                                      // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AIPerPlayerSpawnerPlayerDetailsUnit
	 * Size -> 0x0030
	 */
	struct FAIPerPlayerSpawnerPlayerDetailsUnit
	{
	public:
		unsigned char                                              UnknownData_83MH[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.TemporaryPlayerDetailsUnitEntry
	 * Size -> 0x0038
	 */
	struct FTemporaryPlayerDetailsUnitEntry
	{
	public:
		unsigned char                                              UnknownData_3MXP[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AICustomNameTitleMapping
	 * Size -> 0x0040
	 */
	struct FAICustomNameTitleMapping
	{
	public:
		class UClass*                                              AIClassId;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_9EP1[0x20];                                  // 0x0020(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct AthenaAI.AICustomClassIdNameOverrides
	 * Size -> 0x0020
	 */
	struct FAICustomClassIdNameOverrides
	{
	public:
		TArray<class UClass*>                                      ClassIds;                                                // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper
		TArray<class FText>                                        Names;                                                   // 0x0010(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.EscalatingWave
	 * Size -> 0x0108
	 */
	struct FEscalatingWave
	{
	public:
		int32_t                                                    WaveNumber;                                              // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5A8L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAISpawnerWave                                      SpawnedWave;                                             // 0x0008(0x0100) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AthenaAI.ChanceForSharksToBlockSirenEncounterData
	 * Size -> 0x000C
	 */
	struct FChanceForSharksToBlockSirenEncounterData
	{
	public:
		int32_t                                                    NumberOfSharks;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceToSpawn;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadiusToCheck;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.PerDepthSpawnChance
	 * Size -> 0x000C
	 */
	struct FPerDepthSpawnChance
	{
	public:
		float                                                      DepthUpperBound;                                         // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DepthLowerBound;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChanceToSpawn;                                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.PlayerInWaterData
	 * Size -> 0x0020
	 */
	struct FPlayerInWaterData
	{
	public:
		unsigned char                                              UnknownData_GPGH[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.SirenEncounterData
	 * Size -> 0x0028
	 */
	struct FSirenEncounterData
	{
	public:
		class UWorld*                                              GameWorld;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIPerPlayerSpawner*                                 SirenSpawner;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USimpleAIRegion*                                     AIRegion;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAIProximityPlayerTracker*                           ProximityPlayerTracker;                                  // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShutdownTime;                                            // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESirenEncounterState                                       SirenEncounterState;                                     // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N49E[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.MinMaxBurrowAbility
	 * Size -> 0x0008
	 */
	struct FMinMaxBurrowAbility
	{
	public:
		float                                                      MinValue;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxValue;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.WeightedAmmoType
	 * Size -> 0x0010
	 */
	struct FWeightedAmmoType
	{
	public:
		float                                                      ProbabilityAtRange;                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z8UF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AmmoType;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.WeightedAmmoTypeRange
	 * Size -> 0x0018
	 */
	struct FWeightedAmmoTypeRange
	{
	public:
		float                                                      MinRange;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N9OB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeightedAmmoType>                           AmmoTypeProbabilities;                                   // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.CarriedItemThreatOverride
	 * Size -> 0x0010
	 */
	struct FCarriedItemThreatOverride
	{
	public:
		class UClass*                                              ItemDesc;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Threat;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8VKA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.HearingThreat
	 * Size -> 0x0010
	 */
	struct FHearingThreat
	{
	public:
		class FName                                                SoundTag;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Threat;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CarrierSpeedThreshold;                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.BlackboardValueCondition
	 * Size -> 0x0038
	 */
	struct FBlackboardValueCondition
	{
	public:
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0000(0x0028) Edit
		EBlackboardValueComparisonType                             Comparison;                                              // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V8JN[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OnEntry;                                                 // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       OnExit;                                                  // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AIRR[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.ChanceAndBlackboardKeyPair
	 * Size -> 0x0058
	 */
	struct FChanceAndBlackboardKeyPair
	{
	public:
		struct FAIDataProviderFloatValue                           Chance;                                                  // 0x0000(0x0030) Edit, ContainsInstancedReference
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0030(0x0028) Edit
	};

	/**
	 * ScriptStruct AthenaAI.ConditionalBasedOnBlackboardKey
	 * Size -> 0x0038
	 */
	struct FConditionalBasedOnBlackboardKey
	{
	public:
		bool                                                       UseCondition;                                            // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JEZE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x0008(0x0028) Edit
		bool                                                       NegateCondition;                                         // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WX1D[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.WeightedAIStrategyChance
	 * Size -> 0x0038
	 */
	struct FWeightedAIStrategyChance
	{
	public:
		class UClass*                                              Strategy;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FAIDataProviderFloatValue                           WeightedChance;                                          // 0x0008(0x0030) Edit, ContainsInstancedReference
	};

	/**
	 * ScriptStruct AthenaAI.AIStrategyVulnerabilityData
	 * Size -> 0x0018
	 */
	struct FAIStrategyVulnerabilityData
	{
	public:
		class UClass*                                              Strategy;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<EHealthChangedReason>                               PreventedHealthChanges;                                  // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AthenaAI.AIAbilityDebugReplicatedIntervals
	 * Size -> 0x000C
	 */
	struct FAIAbilityDebugReplicatedIntervals
	{
	public:
		float                                                      ActivationTimerCooldown;                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBeforeNextExecution;                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageBeforeNextExecution;                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AIEncounterWave
	 * Size -> 0x0020
	 */
	struct FAIEncounterWave
	{
	public:
		TArray<struct FAIEncounterSpecification>                   Specifications;                                          // 0x0000(0x0010) ZeroConstructor
		TArray<int32_t>                                            SpecificationSpawnOrder;                                 // 0x0010(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AIBountySpawnerParams
	 * Size -> 0x00C8
	 */
	struct FAIBountySpawnerParams
	{
	public:
		TArray<struct FAIEncounterWave>                            AISpawnerCreationDesc;                                   // 0x0000(0x0010) ZeroConstructor
		struct FStringAssetReference                               TeamColor;                                               // 0x0010(0x0010) ZeroConstructor
		TArray<int32_t>                                            NumTargetsInWave;                                        // 0x0020(0x0010) ZeroConstructor
		TArray<int32_t>                                            NumCaptainsInWave;                                       // 0x0030(0x0010) ZeroConstructor
		float                                                      MinTimeBetweenSpawns;                                    // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTimeBetweenSpawns;                                    // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinTimeBetweenWaves;                                     // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTimeBetweenWaves;                                     // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedProbabilityRange                           WavesPerRelocate;                                        // 0x0050(0x0020)
		struct FWeightedProbabilityRange                           WaveSplitChance;                                         // 0x0070(0x0020)
		TArray<float>                                              WaveSuicideTime;                                         // 0x0090(0x0010) ZeroConstructor
		float                                                      WaveSuicideMinDist;                                      // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumWavesPerGroup;                                        // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumWaveGroups;                                           // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumTotalWaves;                                           // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumTargetsPerWaveGroup;                                  // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumCaptainsPerWaveGroup;                                 // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      AICombatDialogue;                                        // 0x00B8(0x0010) ZeroConstructor, UObjectWrapper
	};

	/**
	 * ScriptStruct AthenaAI.EventAIStartedDeadActionState
	 * Size -> 0x0010
	 */
	struct FEventAIStartedDeadActionState
	{
	public:
		ECharacterDeathType                                        DeathReason;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2AF1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Killer;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventPawnFinishedDying
	 * Size -> 0x0010
	 */
	struct FEventPawnFinishedDying
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterDeathType                                        DeathType;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XVYZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventPawnStartedDying
	 * Size -> 0x0018
	 */
	struct FEventPawnStartedDying
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterDeathType                                        DeathType;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_764D[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Instigator;                                              // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventOwnedPawnFinishedDying
	 * Size -> 0x0001
	 */
	struct FEventOwnedPawnFinishedDying
	{
	public:
		ECharacterDeathType                                        DeathType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventOwnedPawnStartedDying
	 * Size -> 0x0010
	 */
	struct FEventOwnedPawnStartedDying
	{
	public:
		ECharacterDeathType                                        DeathType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C160[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Instigator;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.BountySpawnerTargetDesc
	 * Size -> 0x0018
	 */
	struct FBountySpawnerTargetDesc
	{
	public:
		EBountyTargetGender                                        Gender;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBountyTargetRank                                          Rank;                                                    // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TJXY[0x16];                                  // 0x0002(0x0016) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIBountySpawnerWaveLocation
	 * Size -> 0x0014
	 */
	struct FAIBountySpawnerWaveLocation
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      SelectionWeight;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowForTarget;                                          // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XHM9[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AISpawnerArchive
	 * Size -> 0x0008
	 */
	struct FAISpawnerArchive
	{
	public:
		unsigned char                                              UnknownData_XNH3[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIBountySpawnerArchiveWaveEntry
	 * Size -> 0x0004
	 */
	struct FAIBountySpawnerArchiveWaveEntry
	{
	public:
		int32_t                                                    NumPawnsToSpawn;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AIBountySpawnerArchiveWaveGroupEntry
	 * Size -> 0x0018
	 */
	struct FAIBountySpawnerArchiveWaveGroupEntry
	{
	public:
		int32_t                                                    NumNonTargetAIKills;                                     // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumTargetAIKills;                                        // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAIBountySpawnerArchiveWaveEntry>            WaveEntries;                                             // 0x0008(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AIBountySpawnerArchive
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAIBountySpawnerArchive : public FAISpawnerArchive
	{
	public:
		int32_t                                                    CurrentWaveIndex;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZPR7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAIBountySpawnerArchiveWaveGroupEntry>       WaveGroupEntries;                                        // 0x0010(0x0010) ZeroConstructor
		float                                                      BountyAudioIntensity;                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JVDL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.BountySpawnerNewWaveGroupSpawnedEvent
	 * Size -> 0x0001
	 */
	struct FBountySpawnerNewWaveGroupSpawnedEvent
	{
	public:
		bool                                                       IsFinalWave;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaAI.BountySpawnerAudioChangedNetworkEvent
	 * Size -> 0x0018 (FullSize[0x0028] - InheritedSize[0x0010])
	 */
	struct FBountySpawnerAudioChangedNetworkEvent : public FNetworkEventStruct
	{
	public:
		EBountySpawnerAudioState                                   AudioState;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MSNB[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Intensity;                                               // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBountySpawnerType                                         BountyType;                                              // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9AVD[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BountyPosition;                                          // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaAI.EventAIBountySpawnerTargetKilled
	 * Size -> 0x0068
	 */
	struct FEventAIBountySpawnerTargetKilled
	{
	public:
		class FText                                                TargetName;                                              // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_2UX1[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class AActor*                                              TargetActor;                                             // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                RewardId;                                                // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AItemInfo*                                           ItemDropped;                                             // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBountyTargetRank                                          Rank;                                                    // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GOCK[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             DeathLocation;                                           // 0x0054(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		class AActor*                                              Instigator;                                              // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventAIBountySpawnerWaveCompleted
	 * Size -> 0x0028
	 */
	struct FEventAIBountySpawnerWaveCompleted
	{
	public:
		class FName                                                IslandName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               CrewId;                                                  // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    WaveIndex;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalWaves;                                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              InstigatorOfFinalAIPawnDeath;                            // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.MerchantCrateMetaWrapper
	 * Size -> 0x0030 (FullSize[0x0048] - InheritedSize[0x0018])
	 */
	struct FMerchantCrateMetaWrapper : public FItemMetaBase
	{
	public:
		float                                                      Health;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7527[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStringAssetReference                               FaunaType;                                               // 0x0020(0x0010) ZeroConstructor
		float                                                      TimeSpentStarving;                                       // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToStarveInSeconds;                                   // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TempSpawnLocationForActor;                               // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FPKS[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventFaunaThreatLevelChanged
	 * Size -> 0x0001
	 */
	struct FEventFaunaThreatLevelChanged
	{
	public:
		EAIThreatLevel                                             ThreatLevel;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventFaunaAgitationEnded
	 * Size -> 0x0001
	 */
	struct FEventFaunaAgitationEnded
	{
	public:
		unsigned char                                              UnknownData_1SH1[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventFaunaAgitationBegun
	 * Size -> 0x0008
	 */
	struct FEventFaunaAgitationBegun
	{
	public:
		class AActor*                                              SourceActor;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAIDebugCostData
	 * Size -> 0x0001
	 */
	struct FAthenaAIDebugCostData
	{
	public:
		unsigned char                                              UnknownData_3X6W[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventSwimRotationModeChanged
	 * Size -> 0x0008
	 */
	struct FEventSwimRotationModeChanged
	{
	public:
		ESwimRotationMode                                          NewSwimRotationMode;                                     // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MWXF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NewRotationRate;                                         // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.TinySharkWorldSettingsParams
	 * Size -> 0x0001
	 */
	struct FTinySharkWorldSettingsParams
	{
	public:
		bool                                                       TinySharkEnabled;                                        // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaAI.TinySharkEQSRequest
	 * Size -> 0x0048
	 */
	struct FTinySharkEQSRequest
	{
	public:
		unsigned char                                              UnknownData_LCSI[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.TinySharkSpawnedNetworkEvent
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FTinySharkSpawnedNetworkEvent : public FNetworkEventStruct
	{	};

	/**
	 * ScriptStruct AthenaAI.TinySharkKilledNetworkEvent
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FTinySharkKilledNetworkEvent : public FNetworkEventStruct
	{	};

	/**
	 * ScriptStruct AthenaAI.EventTinySharkKilled
	 * Size -> 0x0001
	 */
	struct FEventTinySharkKilled
	{
	public:
		unsigned char                                              UnknownData_TYYZ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventTinySharkDamaged
	 * Size -> 0x0058
	 */
	struct FEventTinySharkDamaged
	{
	public:
		struct FImpactDamageEvent                                  ImpactDamageEvent;                                       // 0x0000(0x0058)
	};

	/**
	 * ScriptStruct AthenaAI.EventTinySharkDespawned
	 * Size -> 0x0001
	 */
	struct FEventTinySharkDespawned
	{
	public:
		ETinySharkDespawnReason                                    DespawnReason;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventTinySharkSpawned
	 * Size -> 0x0020
	 */
	struct FEventTinySharkSpawned
	{
	public:
		class FString                                              TinySharkPartTag;                                        // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FGuid                                               SpawnConfigId;                                           // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaAI.TinySharkCollidedTelemetryEvent
	 * Size -> 0x0068
	 */
	struct FTinySharkCollidedTelemetryEvent
	{
	public:
		class FString                                              TinySharkId;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              TinySharkName;                                           // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              ObstacleName;                                            // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		struct FVector                                             CollisionLocation;                                       // 0x0030(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             HomeLocation;                                            // 0x003C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              BehaviourTreeInfo;                                       // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              BlackboardInfo;                                          // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.TinySharkDespawnTelemetryEvent
	 * Size -> 0x0018
	 */
	struct FTinySharkDespawnTelemetryEvent
	{
	public:
		class FString                                              TinySharkId;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		ETinySharkDespawnReason                                    TinySharkDespawnReason;                                  // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BM69[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.TinySharkSpawnTelemetryEvent
	 * Size -> 0x0030
	 */
	struct FTinySharkSpawnTelemetryEvent
	{
	public:
		class FString                                              TinySharkId;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              TinySharkType;                                           // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		struct FGuid                                               ConfigSpawnId;                                           // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaAI.AIExclusionZone
	 * Size -> 0x0018
	 */
	struct FAIExclusionZone
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      RadiusSquared;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Radius;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Height;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AICountTelemetryEvent
	 * Size -> 0x0010
	 */
	struct FAICountTelemetryEvent
	{
	public:
		int32_t                                                    NumTotalSpawns;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentTotalWorldAICostUnits;                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumActiveRegions;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumPlayers;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventAIPartsRetrievalComponentBeforeBeginLoad
	 * Size -> 0x0001
	 */
	struct FEventAIPartsRetrievalComponentBeforeBeginLoad
	{
	public:
		unsigned char                                              UnknownData_0MEG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIFixedWavesSpawnerArchive
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAIFixedWavesSpawnerArchive : public FAISpawnerArchive
	{
	public:
		TArray<int32_t>                                            NumSpawnedPawnsInWaves;                                  // 0x0008(0x0010) ZeroConstructor
		bool                                                       WavesSpawnedOnSpottedNewTarget;                          // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LVVA[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIIncrementalWaveSpawnerArchive
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAIIncrementalWaveSpawnerArchive : public FAISpawnerArchive
	{
	public:
		struct FVector                                             LastTargetPosition;                                      // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentNumSpawnedPawns;                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AIPerCrewSpawnerRespawnUnit
	 * Size -> 0x0018
	 */
	struct FAIPerCrewSpawnerRespawnUnit
	{
	public:
		unsigned char                                              UnknownData_KX4V[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AIPerCrewSpawnerCrewUnit
	 * Size -> 0x0030
	 */
	struct FAIPerCrewSpawnerCrewUnit
	{
	public:
		unsigned char                                              UnknownData_ICVV[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAISpawnerWave>                              SelectedWaves;                                           // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct AthenaAI.AIProgressiveWavesSpawnerArchive
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAIProgressiveWavesSpawnerArchive : public FAISpawnerArchive
	{
	public:
		int32_t                                                    CurrentWaveIndex;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FX5U[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AITargetBounds
	 * Size -> 0x0018
	 */
	struct FAITargetBounds
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Extents;                                                 // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaAI.AITargetInfo
	 * Size -> 0x0034
	 */
	struct FAITargetInfo
	{
	public:
		struct FAITargetBounds                                     Bounds;                                                  // 0x0000(0x0018)
		struct FVector                                             TargetPos;                                               // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             TargetVelocity;                                          // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TargetYaw;                                               // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AthenaAIControllerTargetPickingData
	 * Size -> 0x0038
	 */
	struct FAthenaAIControllerTargetPickingData
	{
	public:
		class FString                                              TargetName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		bool                                                       BestTargetByScore;                                       // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsCurrentTargetActor;                                    // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_36FG[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetScore;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistScore;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FacingScore;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetWeightScore;                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageScore;                                             // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetDistance;                                          // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetAngle;                                             // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumTargeting;                                            // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RecentDamage;                                            // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventSporeBreathAIAbilityFinished
	 * Size -> 0x0001
	 */
	struct FEventSporeBreathAIAbilityFinished
	{
	public:
		unsigned char                                              UnknownData_VCUJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventSporeBreathAIAbilityStarted
	 * Size -> 0x0001
	 */
	struct FEventSporeBreathAIAbilityStarted
	{
	public:
		unsigned char                                              UnknownData_EWCB[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventAIAbilityStarted
	 * Size -> 0x0008
	 */
	struct FEventAIAbilityStarted
	{
	public:
		class UClass*                                              AbilityTypeCategory;                                     // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventAIVulnerabilityAbilityEnded
	 * Size -> 0x0001
	 */
	struct FEventAIVulnerabilityAbilityEnded
	{
	public:
		unsigned char                                              UnknownData_J1JR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventAIVulnerabilityAbilityStarted
	 * Size -> 0x0001
	 */
	struct FEventAIVulnerabilityAbilityStarted
	{
	public:
		unsigned char                                              UnknownData_SFRH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventAIPawnCarrierChange
	 * Size -> 0x0008
	 */
	struct FEventAIPawnCarrierChange
	{
	public:
		class AActor*                                              Carrier;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventAIDebugTextUpdated
	 * Size -> 0x0001
	 */
	struct FEventAIDebugTextUpdated
	{
	public:
		unsigned char                                              UnknownData_SEJ5[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventAIControllerUnPossess
	 * Size -> 0x0001
	 */
	struct FEventAIControllerUnPossess
	{
	public:
		unsigned char                                              UnknownData_DX2Q[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventAIKnockbackEnded
	 * Size -> 0x0001
	 */
	struct FEventAIKnockbackEnded
	{
	public:
		unsigned char                                              UnknownData_4LZH[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventAIKnockbackStarted
	 * Size -> 0x0018
	 */
	struct FEventAIKnockbackStarted
	{
	public:
		unsigned char                                              UnknownData_QIIP[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventNewAIStrategyBPReadable
	 * Size -> 0x0008
	 */
	struct FEventNewAIStrategyBPReadable
	{
	public:
		class UClass*                                              NewAIStrategy;                                           // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventNewAIStrategy
	 * Size -> 0x0008
	 */
	struct FEventNewAIStrategy
	{
	public:
		class UClass*                                              NewAIStrategy;                                           // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventPawnRequestDespawn
	 * Size -> 0x0001
	 */
	struct FEventPawnRequestDespawn
	{
	public:
		unsigned char                                              UnknownData_949L[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventPawnRemoveOwnership
	 * Size -> 0x0008
	 */
	struct FEventPawnRemoveOwnership
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventOwnedPawnRemoveOwnership
	 * Size -> 0x0001
	 */
	struct FEventOwnedPawnRemoveOwnership
	{
	public:
		unsigned char                                              UnknownData_JFAC[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventAIPartRetrievalRequestFailed
	 * Size -> 0x0001
	 */
	struct FEventAIPartRetrievalRequestFailed
	{
	public:
		unsigned char                                              UnknownData_V7G5[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventVisualAppearanceSelected
	 * Size -> 0x0018
	 */
	struct FEventVisualAppearanceSelected
	{
	public:
		class UAIPartsCategory*                                    PartsCategory;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAIPartId                                           AIPartId;                                                // 0x0008(0x0008)
		int32_t                                                    PartsIndexToUse;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ColorTextureIndex;                                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventAILoadoutSelected
	 * Size -> 0x0030
	 */
	struct FEventAILoadoutSelected
	{
	public:
		struct FItemLoadout                                        Loadout;                                                 // 0x0000(0x0020)
		class UClass*                                              NonStorableItem;                                         // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_IHDU[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventAIAmmoSelected
	 * Size -> 0x0008
	 */
	struct FEventAIAmmoSelected
	{
	public:
		class UAthenaAIAmmoDataAsset*                              Ammo;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventAIFormSelected
	 * Size -> 0x0008
	 */
	struct FEventAIFormSelected
	{
	public:
		class UAthenaAIFormDataAsset*                              Form;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventAIPawnReadyToConstructDebugText
	 * Size -> 0x0001
	 */
	struct FEventAIPawnReadyToConstructDebugText
	{
	public:
		unsigned char                                              UnknownData_GJLS[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventOwnedPawnFinishedSpawning
	 * Size -> 0x0050
	 */
	struct FEventOwnedPawnFinishedSpawning
	{
	public:
		class UObject*                                             AICoordinator;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Region;                                                  // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpawnPos;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BXB9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ActorToPerceiveOnSpawn;                                  // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaximumDistanceToPerceiveOnSpawn;                        // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MJHH[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAthenaAIControllerParamsDataAsset*                  Skillset;                                                // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                HomeRegionZone;                                          // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             TargetInteractableOnSpawn;                               // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAISpawner*                                          OwnerAISpawner;                                          // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventPlayerLeftAISpawnableWater
	 * Size -> 0x0008
	 */
	struct FEventPlayerLeftAISpawnableWater
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventPlayerEnterAISpawnableWater
	 * Size -> 0x0018
	 */
	struct FEventPlayerEnterAISpawnableWater
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RHYX[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventPlayerSetFootUponAISpawnRegion
	 * Size -> 0x0020
	 */
	struct FEventPlayerSetFootUponAISpawnRegion
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1BBX[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventPlayerLeftAISpawnRegion
	 * Size -> 0x0018
	 */
	struct FEventPlayerLeftAISpawnRegion
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9O9K[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventPlayerEnteredAISpawnRegion
	 * Size -> 0x0020
	 */
	struct FEventPlayerEnteredAISpawnRegion
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P36W[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventAllAIProgressiveWavesCompleted
	 * Size -> 0x0001
	 */
	struct FEventAllAIProgressiveWavesCompleted
	{
	public:
		unsigned char                                              UnknownData_K6OJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventAIPawnRemovedFromAIRegion
	 * Size -> 0x0010
	 */
	struct FEventAIPawnRemovedFromAIRegion
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7HMP[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventAIPawnAddedToAIRegion
	 * Size -> 0x0010
	 */
	struct FEventAIPawnAddedToAIRegion
	{
	public:
		class APawn*                                               AIPawn;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KDWM[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.EventOceanCrawlerAIBuffAudioRequest
	 * Size -> 0x0001
	 */
	struct FEventOceanCrawlerAIBuffAudioRequest
	{
	public:
		bool                                                       IsBuffGiver;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaAI.EventOceanCrawlerAIAbilityAudioRequest
	 * Size -> 0x0008
	 */
	struct FEventOceanCrawlerAIAbilityAudioRequest
	{
	public:
		EOceanCrawlerAbilityAudioKey                               RequestAudioKey;                                         // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2684[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AudioDelay;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventAthenaAISpawnBeginAnim
	 * Size -> 0x0001
	 */
	struct FEventAthenaAISpawnBeginAnim
	{
	public:
		EAthenaAISpawnType                                         SpawnType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.EventAthenaAISpawnActive
	 * Size -> 0x0002
	 */
	struct FEventAthenaAISpawnActive
	{
	public:
		EAthenaAISpawnType                                         SpawnType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SpawnActive;                                             // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaAI.AISpawnerTelemetryEvent
	 * Size -> 0x0040
	 */
	struct FAISpawnerTelemetryEvent
	{
	public:
		class FString                                              AISpawnerType;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              AISpawnerRegion;                                         // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<class FString>                                      AISpawnerContexts;                                       // 0x0020(0x0010) ZeroConstructor
		int32_t                                                    AISpawnerWaveSpawnNumber;                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AISpawnerWaveDelayBefore;                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AISpawnerWaveDelayAfter;                                 // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JABW[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AthenaAI.AITelemetryFragmentInput
	 * Size -> 0x00D8
	 */
	struct FAITelemetryFragmentInput : public FTelemetryFragmentInput
	{
	public:
		TWeakObjectPtr<class APawn>                                AIPawn;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
		struct FAIEncounterSpecification                           AIEncounterSpecification;                                // 0x0008(0x00D0)
	};

	/**
	 * ScriptStruct AthenaAI.AITelemetryFragment
	 * Size -> 0x0070
	 */
	struct FAITelemetryFragment
	{
	public:
		class FString                                              AIType;                                                  // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              AIId;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		TArray<class FString>                                      AILoadOut;                                               // 0x0020(0x0010) ZeroConstructor
		class FString                                              AIPawnType;                                              // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              AISkillset;                                              // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              AIForm;                                                  // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash
		class FString                                              AIClass;                                                 // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.PlayerKillAITelemetryEvent
	 * Size -> 0x0010
	 */
	struct FPlayerKillAITelemetryEvent
	{
	public:
		struct FGuid                                               AttackId;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AthenaAI.AISpawnTelemetryEvent
	 * Size -> 0x0010
	 */
	struct FAISpawnTelemetryEvent
	{
	public:
		class FString                                              LocationName;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AthenaAI.AIActorTimeout
	 * Size -> 0x0010
	 */
	struct FAIActorTimeout
	{
	public:
		class AActor*                                              AIActor;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timer;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_24GK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
