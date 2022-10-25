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
	 * Enum Watercrafts.EOarState
	 */
	enum class EOarState : uint8_t
	{
		Idle                 = 0,
		InStroke             = 1,
		ApexOfStroke         = 2,
		RecoveringFromStroke = 3,
		Braking              = 4,
		MAX                  = 5
	};

	/**
	 * Enum Watercrafts.EOarIdentifier
	 */
	enum class EOarIdentifier : uint8_t
	{
		Left  = 0,
		Right = 1,
		MAX   = 2
	};

	/**
	 * Enum Watercrafts.ERowboatActionTelemetry
	 */
	enum class ERowboatActionTelemetry : uint8_t
	{
		None    = 0,
		Mount   = 1,
		Unmount = 2,
		MAX     = 3
	};

	/**
	 * Enum Watercrafts.EWatercraftDespawnReason
	 */
	enum class EWatercraftDespawnReason : uint8_t
	{
		Unknown         = 0,
		Destroyed       = 1,
		ExternalRequest = 2,
		Migration       = 3,
		WorldEnding     = 4,
		MAX             = 5
	};

	/**
	 * Enum Watercrafts.EOarInputState
	 */
	enum class EOarInputState : uint8_t
	{
		Inactive = 0,
		Active   = 1,
		Braking  = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Watercrafts.ScrapeableDamageSpeedEntry
	 * Size -> 0x0018
	 */
	struct FScrapeableDamageSpeedEntry
	{
	public:
		class UClass*                                              SpeedBand;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UForceFeedbackEffect*                                ForceFeedbackEffect;                                     // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DamageAmount;                                            // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_04TY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Watercrafts.WatercraftRolloverCorrector
	 * Size -> 0x000C
	 */
	struct FWatercraftRolloverCorrector
	{
	public:
		float                                                      RollThresholdToConsiderRolledOver;                       // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TorqueScalar;                                            // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D85E[0x4];                                   // 0x0008(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Watercrafts.RowboatDamageEffectData
	 * Size -> 0x0018
	 */
	struct FRowboatDamageEffectData
	{
	public:
		class UMaterialInstanceDynamic*                            DynamicMaterialInstance;                                 // 0x0000(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeInDuration;                                          // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2BZF[0xC];                                   // 0x000C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Watercrafts.RowboatStrainDamageData
	 * Size -> 0x0020
	 */
	struct FRowboatStrainDamageData
	{
	public:
		float                                                      StormDamageScalar;                                       // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaterStrengthToCountAsStorm;                             // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StormStrengthThresholdForDamage;                         // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinStormDamageFrequencyInSeconds;                        // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxStormDamageFrequencyInSeconds;                        // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WorldEdgeDamageScalar;                                   // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinWorldEdgeDamageFrequencyInSeconds;                    // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxWorldEdgeDamageFrequencyInSeconds;                    // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Watercrafts.QuestVariableWatercraft
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FQuestVariableWatercraft : public FQuestVariable
	{	};

	/**
	 * ScriptStruct Watercrafts.OarParams
	 * Size -> 0x0038
	 */
	struct FOarParams
	{
	public:
		float                                                      RowingPower;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OarLength;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OarOffsetDirection;                                      // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             OarForwardForceDirection;                                // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      TimeForCompleteStroke;                                   // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeForResetCompletion;                                  // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         RowingPowerCurve;                                        // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BrakeForcePerMetresPerSecond;                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EndOfStrokeBrakeForcePerMetresPerSecond;                 // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Watercrafts.Oar
	 * Size -> 0x0060
	 */
	struct FOar
	{
	public:
		struct FOarParams                                          OarParams;                                               // 0x0000(0x0038) Protected
		unsigned char                                              UnknownData_R3X8[0x28];                                  // 0x0038(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Watercrafts.EventOarStrokeEnded
	 * Size -> 0x0001
	 */
	struct FEventOarStrokeEnded
	{
	public:
		unsigned char                                              UnknownData_5B14[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Watercrafts.EventRowboatExitedWater
	 * Size -> 0x0001
	 */
	struct FEventRowboatExitedWater
	{
	public:
		unsigned char                                              UnknownData_7O6G[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Watercrafts.EventRowboatEnteredWater
	 * Size -> 0x0001
	 */
	struct FEventRowboatEnteredWater
	{
	public:
		unsigned char                                              UnknownData_P9SV[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Watercrafts.RowboatMountStateTelemetryEvent
	 * Size -> 0x0014
	 */
	struct FRowboatMountStateTelemetryEvent
	{
	public:
		struct FGuid                                               WatercraftId;                                            // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		ERowboatActionTelemetry                                    ActionName;                                              // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VYTL[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Watercrafts.WatercraftDespawnTelemetryEvent
	 * Size -> 0x0020
	 */
	struct FWatercraftDespawnTelemetryEvent
	{
	public:
		struct FGuid                                               WatercraftId;                                            // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Location;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		EWatercraftDespawnReason                                   DespawnReason;                                           // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X3HE[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Watercrafts.WatercraftSpawnTelemetryEvent
	 * Size -> 0x0038
	 */
	struct FWatercraftSpawnTelemetryEvent
	{
	public:
		struct FGuid                                               WatercraftId;                                            // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FString                                              WatercraftType;                                          // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash
		struct FVector                                             Location;                                                // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             Forward;                                                 // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Watercrafts.EventExitedWatercraft
	 * Size -> 0x0010
	 */
	struct FEventExitedWatercraft
	{
	public:
		class AActor*                                              Watercraft;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Actor;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Watercrafts.EventEnteredWatercraft
	 * Size -> 0x0010
	 */
	struct FEventEnteredWatercraft
	{
	public:
		class AActor*                                              Watercraft;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Actor;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
