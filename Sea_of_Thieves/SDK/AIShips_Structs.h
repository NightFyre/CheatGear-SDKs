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
	 * Enum AIShips.EAIShipEncounterType
	 */
	enum class EAIShipEncounterType : uint8_t
	{
		Battle     = 0,
		Passive    = 1,
		Aggressive = 2,
		MAX        = 3,
		MAX01      = 4
	};

	/**
	 * Enum AIShips.EObstacleType
	 */
	enum class EObstacleType : uint8_t
	{
		None                   = 0,
		SeaRock                = 1,
		UnderseaRock           = 2,
		Island                 = 3,
		AIShip                 = 4,
		PlayerShip             = 5,
		Shipwreck              = 6,
		GameEventExclusionZone = 7,
		HauntedSeaFort         = 8,
		MAX                    = 9
	};

	/**
	 * Enum AIShips.ECannonballIconType
	 */
	enum class ECannonballIconType : uint8_t
	{
		Normal  = 0,
		Anchor  = 1,
		Ballast = 2,
		Barrel  = 3,
		Boogie  = 4,
		Grog    = 5,
		Limp    = 6,
		Passive = 7,
		Rigging = 8,
		Rudder  = 9,
		Silence = 10,
		Snake   = 11,
		Snooze  = 12,
		None    = 13,
		Max     = 14,
		MAX     = 15
	};

	/**
	 * Enum AIShips.ESkellyFormIconType
	 */
	enum class ESkellyFormIconType : uint8_t
	{
		Normal = 0,
		Metal  = 1,
		Plant  = 2,
		Shadow = 3,
		None   = 4,
		Max    = 5,
		MAX    = 6
	};

	/**
	 * Enum AIShips.EAIShipType
	 */
	enum class EAIShipType : uint8_t
	{
		Normal = 0,
		Hard   = 1,
		MAX    = 2
	};

	/**
	 * Enum AIShips.EAIShipPlayerTrackerType
	 */
	enum class EAIShipPlayerTrackerType : uint8_t
	{
		DefaultRadiusTracker   = 0,
		CannonRadiusTracker    = 1,
		OnShipTracker          = 2,
		BelowDeckOfShipTracker = 3,
		MAX                    = 4
	};

	/**
	 * Enum AIShips.EAIShipDestructionReason
	 */
	enum class EAIShipDestructionReason : uint8_t
	{
		Defeated = 0,
		Despawn  = 1,
		MAX      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AIShips.AIShipBattleParams
	 * Size -> 0x0048
	 */
	struct FAIShipBattleParams
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_TXEJ[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector2D                                           Location;                                                // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Radius;                                                  // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RG2W[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.TrackingNoiseGenerator
	 * Size -> 0x0018
	 */
	struct FTrackingNoiseGenerator
	{
	public:
		class UCurveFloat*                                         ParallelOffsetCurve;                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OscillationTime;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CKSK[0xC];                                   // 0x000C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.ShipMovementParams
	 * Size -> 0x0034
	 */
	struct FShipMovementParams
	{
	public:
		float                                                      MinTargetDistanceForMovement;                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTurnAngle;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTurnAngleForObstacleAvoidance;                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxTurnAngleForPlayerShipObstacleAvoidance;              // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinTurnSpeedScaler;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSpeed;                                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinSpeed;                                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToAccelerateFromZeroToMaxSpeed;                      // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToAccelerateFromZeroToMaxTurnSpeed;                  // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoveBackwardsAngleThreshold;                             // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoveBackwardsDistanceThreshold;                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoveBackwardsShipSpeedThreshold;                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxObstacleAvoidanceOverrideDistance;                    // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIShips.AIShipEncounterParamsSpawnerData
	 * Size -> 0x0020
	 */
	struct FAIShipEncounterParamsSpawnerData
	{
	public:
		class UAISpawner*                                          Spawner;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SpawnLocationType;                                       // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAIShipPlayerTrackerType                                   ShipPlayerTrackerType;                                   // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J1H6[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CaptainName;                                             // 0x0014(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanRepairDamage;                                         // 0x001C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanUseCannons;                                           // 0x001D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCaptain;                                               // 0x001E(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BelowDeck;                                               // 0x001F(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct AIShips.AIShipContextDescDamageParams
	 * Size -> 0x0014
	 */
	struct FAIShipContextDescDamageParams
	{
	public:
		float                                                      OverrideRainFillRate;                                    // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideRepairTime;                                      // 0x0004(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3CFW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RepairTimeMultiplier;                                    // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideLeakAmounts;                                     // 0x000C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0LT5[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeakAmountMultiplier;                                    // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIShips.AIShipSailData
	 * Size -> 0x0010
	 */
	struct FAIShipSailData
	{
	public:
		struct FColor                                              SailRGB;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FColor                                              IconRGB;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CrewIndex;                                               // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CursedCannonballIndex;                                   // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIShips.AIShipCrewFormType
	 * Size -> 0x0020
	 */
	struct FAIShipCrewFormType
	{
	public:
		ESkellyFormIconType                                        IconType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NFKJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              IconColour;                                              // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int8_t                                                     IconIndex;                                               // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int8_t                                                     CaptainIconIndex;                                        // 0x0009(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SDVH[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStringAssetReference                               Form;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.AIShipCrewAmmoType
	 * Size -> 0x0018
	 */
	struct FAIShipCrewAmmoType
	{
	public:
		ECannonballIconType                                        IconType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int8_t                                                     IconIndex;                                               // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TE64[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStringAssetReference                               AmmoType;                                                // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.WeightedSpawnOffset
	 * Size -> 0x0040
	 */
	struct FWeightedSpawnOffset
	{
	public:
		float                                                      MinSpawnDistance;                                        // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxSpawnDistance;                                        // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weight;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R4A0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   SpawnRotations;                                          // 0x0010(0x0030) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.WeightedSpawnDirection
	 * Size -> 0x00B0
	 */
	struct FWeightedSpawnDirection
	{
	public:
		float                                                      DirectionAngle;                                          // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DirectionWidth;                                          // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weight;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1VPL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FWeightedSpawnOffset>                        SpawnOffsets;                                            // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		unsigned char                                              UnknownData_3Z2B[0x90];                                  // 0x0020(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.RelativeSpawnLocationGeneratorParams
	 * Size -> 0x00A0
	 */
	struct FRelativeSpawnLocationGeneratorParams
	{
	public:
		TArray<struct FWeightedSpawnDirection>                     SpawnDirections;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		unsigned char                                              UnknownData_73UY[0x90];                                  // 0x0010(0x0090) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.ShipTypeAIShipEncounterParams
	 * Size -> 0x0010
	 */
	struct FShipTypeAIShipEncounterParams
	{
	public:
		class UClass*                                              ShipSize;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAIShipEncounterParamsDataAsset*                     Params;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIShips.AIShipEncounterParams
	 * Size -> 0x0018
	 */
	struct FAIShipEncounterParams
	{
	public:
		float                                                      MinEngagedDistanceFromPlayers;                           // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KV13[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FShipTypeAIShipEncounterParams>              ShipTypeParams;                                          // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.WeightedAIShipCrewFormType
	 * Size -> 0x0028
	 */
	struct FWeightedAIShipCrewFormType
	{
	public:
		int32_t                                                    Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MZF9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIShipCrewFormType                                 Params;                                                  // 0x0008(0x0020) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.WeightedAIShipCrewAmmoType
	 * Size -> 0x0020
	 */
	struct FWeightedAIShipCrewAmmoType
	{
	public:
		int32_t                                                    Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HCE1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIShipCrewAmmoType                                 Params;                                                  // 0x0008(0x0018) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.AIShipCaptainParams
	 * Size -> 0x0010
	 */
	struct FAIShipCaptainParams
	{
	public:
		class UClass*                                              AIClassId;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIShips.AIShipContextDescGenerationSharedParams
	 * Size -> 0x0060
	 */
	struct FAIShipContextDescGenerationSharedParams
	{
	public:
		TArray<EAIShipEncounterType>                               EncounterTypes;                                          // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FWeightedAIShipCrewFormType>                 SkeletonForms;                                           // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FWeightedAIShipCrewAmmoType>                 SkeletonAmmoTypes;                                       // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FColor>                                      SailColours;                                             // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FAIShipCaptainParams>                        Captains;                                                // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      CaptainGenders;                                          // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
	};

	/**
	 * ScriptStruct AIShips.AIShipSkeletonSkillsetOverride
	 * Size -> 0x0018
	 */
	struct FAIShipSkeletonSkillsetOverride
	{
	public:
		class FName                                                SpawnLocationType;                                       // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStringAssetReference                               Skillset;                                                // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.AIShipGenerationParams
	 * Size -> 0x0048
	 */
	struct FAIShipGenerationParams
	{
	public:
		EAIShipEncounterType                                       EncounterType;                                           // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAIShipType                                                ShipType;                                                // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0VRY[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAthenaAIShipControllerParamsDataAsset*              ShipControllerParams;                                    // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAIShipSkeletonSkillsetOverride>             SkillsetOverrides;                                       // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FWeightedAIShipCrewAmmoType>                 SkeletonAmmoTypeOverrides;                               // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FAIShipContextDescDamageParams                      DamageParams;                                            // 0x0030(0x0014) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_AUS4[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.AIShipContextDescGenerationShipSpecificParams
	 * Size -> 0x0030
	 */
	struct FAIShipContextDescGenerationShipSpecificParams
	{
	public:
		class UClass*                                              ShipSize;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UShipDescAsset*                                      ShipDesc;                                                // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAIShipGenerationParams>                     ShipGenerationParams;                                    // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FAIShipEncounterParamsSpawnerData>           SpawnerTemplates;                                        // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.AIShipContextDescGenerationParams
	 * Size -> 0x0080
	 */
	struct FAIShipContextDescGenerationParams
	{
	public:
		struct FAIShipContextDescGenerationSharedParams            SharedParams;                                            // 0x0000(0x0060) Edit, DisableEditOnInstance
		TArray<struct FAIShipContextDescGenerationSharedParams>    EncounterSpecificParams;                                 // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FAIShipContextDescGenerationShipSpecificParams> ShipSpecificParams;                                      // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.AIShipSizeLimit
	 * Size -> 0x0010
	 */
	struct FAIShipSizeLimit
	{
	public:
		class UClass*                                              ShipSize;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    MaxInstances;                                            // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XPMI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.AIShipEncounterWaveDesc
	 * Size -> 0x0010
	 */
	struct FAIShipEncounterWaveDesc
	{
	public:
		TArray<class UClass*>                                      ShipSizes;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
	};

	/**
	 * ScriptStruct AIShips.AIShipEncounterBattleGenerationParams
	 * Size -> 0x0060
	 */
	struct FAIShipEncounterBattleGenerationParams
	{
	public:
		class UClass*                                              HardShipType;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FWeightedProbabilityRange                           NumberOfWaves;                                           // 0x0008(0x0020) Edit, DisableEditOnInstance
		struct FInt32Range                                         MinMaxNumberOfShips;                                     // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MinNumberOfShipsInFinalWave;                             // 0x0038(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_00QN[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAIShipSizeLimit>                            ShipSizeLimits;                                          // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FAIShipEncounterWaveDesc>                    WaveConfigurations;                                      // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.FeatureLockedAIShipEncounterBattleGenerationParams
	 * Size -> 0x0078
	 */
	struct FFeatureLockedAIShipEncounterBattleGenerationParams
	{
	public:
		class FName                                                Feature;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAIShipEncounterBattleGenerationParams              Params;                                                  // 0x0008(0x0060) Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_78U7[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.AIShipEncounterBattleDesc
	 * Size -> 0x0010
	 */
	struct FAIShipEncounterBattleDesc
	{
	public:
		TArray<struct FAIShipEncounterWaveDesc>                    WaveDescs;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.AIShipBattleEncounterDescGenerationParams
	 * Size -> 0x0028
	 */
	struct FAIShipBattleEncounterDescGenerationParams
	{
	public:
		bool                                                       EnableHardShip;                                          // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XEP0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFeatureLockedAIShipEncounterBattleGenerationParams> BattleGenerationParams;                                  // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		TArray<struct FAIShipEncounterBattleDesc>                  BattleDescs;                                             // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.AIShipWeightedSize
	 * Size -> 0x0018
	 */
	struct FAIShipWeightedSize
	{
	public:
		class FName                                                Feature;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Weight;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_APX7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ShipSize;                                                // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIShips.AIShipClassWeightedSizes
	 * Size -> 0x0018
	 */
	struct FAIShipClassWeightedSizes
	{
	public:
		class UClass*                                              TargetShipSize;                                          // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FAIShipWeightedSize>                         ShipSizes;                                               // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.AIShipSingleWaveEncounterDescGenerationParams
	 * Size -> 0x0010
	 */
	struct FAIShipSingleWaveEncounterDescGenerationParams
	{
	public:
		TArray<struct FAIShipClassWeightedSizes>                   ShipClassWeightedSizes;                                  // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.AIShipEncounterWave
	 * Size -> 0x0010
	 */
	struct FAIShipEncounterWave
	{
	public:
		TArray<class UAIShipContextDescDataAsset*>                 AIShipsInWave;                                           // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct AIShips.CursedSailsBattleParams
	 * Size -> 0x0080
	 */
	struct FCursedSailsBattleParams
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_AQVN[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FText                                                SkellyCrewName;                                          // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH Edit, DisableEditOnInstance
		unsigned char                                              UnknownData_W6LO[0x20];                                  // 0x0050(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ECannonballIconType                                        CannonBallType;                                          // 0x0070(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESkellyFormIconType                                        SkellyType;                                              // 0x0071(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_25W6[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIShipEncounterDesc*                                EncounterDescription;                                    // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIShips.AIShipDespawnedEvent
	 * Size -> 0x0010
	 */
	struct FAIShipDespawnedEvent
	{
	public:
		class AActor*                                              Ship;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EAIShipDestructionReason                                   ShipDestructionReason;                                   // 0x0008(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0LQL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.AIShipSpawnedEvent
	 * Size -> 0x0040
	 */
	struct FAIShipSpawnedEvent
	{
	public:
		class AShip*                                               Ship;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               SpawningCrew;                                            // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               SpawningEventId;                                         // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               SpawnConfigId;                                           // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Wave;                                                    // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UNQV[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.AIShipSinkNetworkEvent
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FAIShipSinkNetworkEvent : public FNetworkEventStruct
	{	};

	/**
	 * ScriptStruct AIShips.AIShipSpawnedNetworkEvent
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FAIShipSpawnedNetworkEvent : public FNetworkEventStruct
	{	};

	/**
	 * ScriptStruct AIShips.AIShipEncounterCompleteNetEvent
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FAIShipEncounterCompleteNetEvent : public FBoxedRpc
	{
	public:
		int32_t                                                    BattleIdx;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECannonballIconType                                        CannonballIconType;                                      // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESkellyFormIconType                                        SkellyFormIconType;                                      // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VKTM[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.AIShipEncounterRevealNetEvent
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FAIShipEncounterRevealNetEvent : public FBoxedRpc
	{
	public:
		int32_t                                                    BattleIdx;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SkellyCrewIdx;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECannonballIconType                                        CannonballIconType;                                      // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESkellyFormIconType                                        SkellyFormIconType;                                      // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9COW[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.AIShipEncounterNotification
	 * Size -> 0x0080
	 */
	struct FAIShipEncounterNotification
	{
	public:
		class FText                                                BattleName;                                              // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_6UIY[0x20];                                  // 0x0018(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FName                                                SeaName;                                                 // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                SkellyCrewName;                                          // 0x0040(0x0018) ELEMENT_SIZE_MISMATCH
		unsigned char                                              UnknownData_7Z1T[0x20];                                  // 0x0058(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ECannonballIconType                                        CannonBallType;                                          // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESkellyFormIconType                                        SkellyType;                                              // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ODU4[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.AIShipEncounterZoneExitedNetworkEvent
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FAIShipEncounterZoneExitedNetworkEvent : public FNetworkEventStruct
	{	};

	/**
	 * ScriptStruct AIShips.AIShipEncounterZoneEnteredNetworkEvent
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FAIShipEncounterZoneEnteredNetworkEvent : public FNetworkEventStruct
	{
	public:
		int32_t                                                    RemainingAIShips;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalAIShips;                                            // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalAIShipsInFinalWave;                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PZ7A[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.FeatureLockedAIShipBattles
	 * Size -> 0x0010
	 */
	struct FFeatureLockedAIShipBattles
	{
	public:
		struct FFeatureFlag                                        Feature;                                                 // 0x0000(0x0008) Edit, DisableEditOnInstance
		class UAIShipBattlesDataAsset*                             BattlesData;                                             // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIShips.AIShipWorldSettings
	 * Size -> 0x0018
	 */
	struct FAIShipWorldSettings
	{
	public:
		TArray<struct FFeatureLockedAIShipBattles>                 FeatureToggledBattlesData;                               // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		class UAIShipBattlesDataAsset*                             DefaultBattlesData;                                      // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct AIShips.AIShipDamagedTelemetryEvent
	 * Size -> 0x0048
	 */
	struct FAIShipDamagedTelemetryEvent
	{
	public:
		class FString                                              DamageType;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		struct FVector                                             DamageLocation;                                          // 0x0010(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3B6G[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DamagedShipPart;                                         // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    DamageLevel;                                             // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               AttackId;                                                // 0x0034(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_79M1[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.AIShipDespawnTelemetryEvent
	 * Size -> 0x0018
	 */
	struct FAIShipDespawnTelemetryEvent
	{
	public:
		class FString                                              AIShipId;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		EAIShipDestructionReason                                   AIShipDestructionReason;                                 // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9VMU[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIShips.AIShipSpawnTelemetryEvent
	 * Size -> 0x0068
	 */
	struct FAIShipSpawnTelemetryEvent
	{
	public:
		class FString                                              AIShipId;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              SpawningCrewId;                                          // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              AIShipBattleId;                                          // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		class FString                                              AIShipType;                                              // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		struct FGuid                                               SpawnConfigId;                                           // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              AIShipSize;                                              // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    AIShipWaveIndex;                                         // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2XAN[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
