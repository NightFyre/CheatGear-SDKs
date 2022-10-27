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
	 * Enum NaturalDisasters.EAshCloudState
	 */
	enum class EAshCloudState : uint8_t
	{
		Spawning    = 0,
		Active      = 1,
		Dissipating = 2,
		MAX         = 3
	};

	/**
	 * Enum NaturalDisasters.EVolcanoTargetHitType
	 */
	enum class EVolcanoTargetHitType : uint8_t
	{
		OnTarget = 0,
		NearMiss = 1,
		Random   = 2,
		MAX      = 3
	};

	/**
	 * Enum NaturalDisasters.EVolcanoTargetType
	 */
	enum class EVolcanoTargetType : uint8_t
	{
		Player     = 0,
		Ship       = 1,
		Watercraft = 2,
		MAX        = 3
	};

	/**
	 * Enum NaturalDisasters.EAshenLordWorldEndCloudState
	 */
	enum class EAshenLordWorldEndCloudState : uint8_t
	{
		Inactive = 0,
		Active   = 1,
		MAX      = 2
	};

	/**
	 * Enum NaturalDisasters.EGeyserState
	 */
	enum class EGeyserState : uint8_t
	{
		Dormant  = 0,
		Active   = 1,
		Disabled = 2,
		MAX      = 3
	};

	/**
	 * Enum NaturalDisasters.EEarthquakeState
	 */
	enum class EEarthquakeState : uint8_t
	{
		Dormant     = 0,
		WarmingUp   = 1,
		Active      = 2,
		CoolingDown = 3,
		MAX         = 4
	};

	/**
	 * Enum NaturalDisasters.EGeyserManagerState
	 */
	enum class EGeyserManagerState : uint8_t
	{
		Dormant = 0,
		Active  = 1,
		MAX     = 2
	};

	/**
	 * Enum NaturalDisasters.EVolcanoState
	 */
	enum class EVolcanoState : uint8_t
	{
		Dormant   = 0,
		WarmingUp = 1,
		Erupting  = 2,
		MAX       = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NaturalDisasters.VolcanoTargetChances
	 * Size -> 0x0058
	 */
	struct FVolcanoTargetChances
	{
	public:
		float                                                      OnTarget;                                                // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NearMiss;                                                // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Random;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_58V3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRange                           OnTargetNumExtraShots;                                   // 0x0010(0x0020) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRange                           NearMissNumExtraShots;                                   // 0x0030(0x0020) Edit, DisableEditOnInstance
		float                                                      CoolDownDuration;                                        // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JXXC[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NaturalDisasters.WeightedVolcanoProjectile
	 * Size -> 0x00C0
	 */
	struct FWeightedVolcanoProjectile
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z9J7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ProjectileClass;                                         // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      ProjectileSpeedMinAtInnerRadius;                         // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectileSpeedMaxAtInnerRadius;                         // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectileSpeedMinAtOuterRadius;                         // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectileSpeedMaxAtOuterRadius;                         // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProjectileGravityScale;                                  // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OM2O[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeightedProbabilityRangeOfRanges                   RotationRatePitch;                                       // 0x0028(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   RotationRateRoll;                                        // 0x0058(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   RotationRateYaw;                                         // 0x0088(0x0030) Edit, DisableEditOnInstance
		class UWwiseEvent*                                         LaunchAudioPlayEvent;                                    // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct NaturalDisasters.VolcanoSetupDataEmbersEntry
	 * Size -> 0x0010
	 */
	struct FVolcanoSetupDataEmbersEntry
	{
	public:
		float                                                      MaxDistanceInMetres;                                     // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JK51[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Effect;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct NaturalDisasters.WeightedAshenLordVolcanoProjectile
	 * Size -> 0x00D0
	 */
	struct FWeightedAshenLordVolcanoProjectile
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GravityMultiplier;                                       // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedProbabilityRangeOfRanges                   Speed;                                                   // 0x0008(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   RotationRatePitch;                                       // 0x0038(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   RotationRateRoll;                                        // 0x0068(0x0030) Edit, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   RotationRateYaw;                                         // 0x0098(0x0030) Edit, DisableEditOnInstance
		class UClass*                                              ProjectileClass;                                         // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct NaturalDisasters.AshenLordWorldEndCloudAnimation
	 * Size -> 0x0008
	 */
	struct FAshenLordWorldEndCloudAnimation
	{
	public:
		float                                                      ServerStartTime;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ServerLifeTime;                                          // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct NaturalDisasters.EarthquakeForceFeedbackOption
	 * Size -> 0x0010
	 */
	struct FEarthquakeForceFeedbackOption
	{
	public:
		TArray<struct FLandmarkReactionEventPlayForceFeedbackEntry> ForceFeedback;                                           // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
	};

	/**
	 * ScriptStruct NaturalDisasters.EarthquakeForceFeedback
	 * Size -> 0x0040
	 */
	struct FEarthquakeForceFeedback
	{
	public:
		TArray<struct FEarthquakeForceFeedbackOption>              ForceFeedbackOptions;                                    // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance
		struct FWeightedProbabilityRangeOfRanges                   TimeBetweenRumbles;                                      // 0x0010(0x0030) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct NaturalDisasters.PlayerFeedback
	 * Size -> 0x0080
	 */
	struct FPlayerFeedback
	{
	public:
		struct FEarthquakeForceFeedback                            ForceFeedback;                                           // 0x0000(0x0040) Edit, DisableEditOnInstance
		TArray<class UClass*>                                      CameraShakes;                                            // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper
		struct FWeightedProbabilityRangeOfRanges                   StaggerStrength;                                         // 0x0050(0x0030) Edit, DisableEditOnInstance
	};

	/**
	 * ScriptStruct NaturalDisasters.EarthquakeStoryCustomisationData
	 * Size -> 0x0010
	 */
	struct FEarthquakeStoryCustomisationData
	{
	public:
		struct FStoryFlag                                          StoryFlag;                                               // 0x0000(0x0008) Edit
		class UEarthquakeSetupDataAsset*                           EarthquakeSetupData;                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct NaturalDisasters.GeyserSpawnAngleOption
	 * Size -> 0x000C
	 */
	struct FGeyserSpawnAngleOption
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Direction;                                               // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Range;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct NaturalDisasters.GeyserManagerStoryCustomisationData
	 * Size -> 0x0010
	 */
	struct FGeyserManagerStoryCustomisationData
	{
	public:
		struct FStoryFlag                                          StoryFlag;                                               // 0x0000(0x0008) Edit
		class UGeyserManagerSetupDataAsset*                        GeyserManagerSetupData;                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct NaturalDisasters.VolcanoStoryCustomisationData
	 * Size -> 0x0010
	 */
	struct FVolcanoStoryCustomisationData
	{
	public:
		struct FStoryFlag                                          StoryFlag;                                               // 0x0000(0x0008) Edit
		class UVolcanoSetupDataAsset*                              VolcanoSetupData;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct NaturalDisasters.VolcanoStateData
	 * Size -> 0x000C
	 */
	struct FVolcanoStateData
	{
	public:
		EVolcanoState                                              State;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L27X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StateDuration;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PercentageOfMaxTargetingRange;                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct NaturalDisasters.VolcanoProjectileData
	 * Size -> 0x001C
	 */
	struct FVolcanoProjectileData
	{
	public:
		int32_t                                                    WeightedVolcanoProjectileIndex;                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LaunchVelocity;                                          // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             RotationRate;                                            // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct NaturalDisasters.VolcanoTarget
	 * Size -> 0x0018
	 */
	struct FVolcanoTarget
	{
	public:
		EVolcanoTargetType                                         Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EVolcanoTargetHitType                                      HitType;                                                 // 0x0001(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MLK1[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Target;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumExtraShots;                                           // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_113J[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NaturalDisasters.VolcanoTargetCoolDown
	 * Size -> 0x0010
	 */
	struct FVolcanoTargetCoolDown
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SLX7[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NaturalDisasters.EventVolcanoStateChanged
	 * Size -> 0x0001
	 */
	struct FEventVolcanoStateChanged
	{
	public:
		EVolcanoState                                              State;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
