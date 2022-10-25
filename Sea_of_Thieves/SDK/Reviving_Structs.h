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
	 * Enum Reviving.EReviveState
	 */
	enum class EReviveState : uint8_t
	{
		Revivable    = 0,
		NotRevivable = 1,
		BeingRevived = 2,
		Revived      = 3,
		MAX          = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Reviving.ModeSpecificReviveSettings
	 * Size -> 0x0038
	 */
	struct FModeSpecificReviveSettings
	{
	public:
		EPlayMode                                                  AssociatedPlaymode;                                      // 0x0000(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LOI1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeathCameraBlackFadeDelay;                               // 0x0004(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeathCameraBlackFadeDuration;                            // 0x0008(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeathCameraBlackFadeEventClientTimeout;                  // 0x000C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeathCameraBlackFadeEventServerTimeout;                  // 0x0010(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DelayBeforeEvaporate;                                    // 0x0014(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EvaporateDuration;                                       // 0x0018(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DeathCameraStartDelay;                                   // 0x001C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReviveWindowDuration;                                    // 0x0020(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GhostFadeDuration;                                       // 0x0024(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AutoGiveUpDuration;                                      // 0x0028(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C30L[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UReviveSettings*                                     CachedReviveSettings;                                    // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Reviving.ReviveEffectsValues
	 * Size -> 0x0020
	 */
	struct FReviveEffectsValues
	{
	public:
		class UMaterialInstanceDynamic*                            AstralCordPostProcessMID;                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WFMT[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.PlayerInReviveableStateTelemetryEvent
	 * Size -> 0x0001
	 */
	struct FPlayerInReviveableStateTelemetryEvent
	{
	public:
		unsigned char                                              UnknownData_GLPD[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.PlayerRevivalTelemetryEvent
	 * Size -> 0x0001
	 */
	struct FPlayerRevivalTelemetryEvent
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Reviving.PostReviveLocomotionActionStateConstructionInfo
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FPostReviveLocomotionActionStateConstructionInfo : public FActorActionStateConstructionInfo
	{	};

	/**
	 * ScriptStruct Reviving.EventRevivableRepresentationSpawnCompleted
	 * Size -> 0x0001
	 */
	struct FEventRevivableRepresentationSpawnCompleted
	{
	public:
		bool                                                       FromSwimming;                                            // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct Reviving.EventRevivableRepresentationSpawnStarted
	 * Size -> 0x0001
	 */
	struct FEventRevivableRepresentationSpawnStarted
	{
	public:
		unsigned char                                              UnknownData_LGVY[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.ReviveableActionStateConstructionInfo
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	struct FReviveableActionStateConstructionInfo : public FActorActionStateConstructionInfo
	{
	public:
		class UClass*                                              ActionStateId;                                           // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FDamageInstance                                     DamageInstance;                                          // 0x0038(0x0030)
		ECharacterDeathType                                        CharacterDeathType;                                      // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterType                                             CharacterType;                                           // 0x0069(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DHX2[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.RevivedActionStateConstructionInfo
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRevivedActionStateConstructionInfo : public FActorActionStateConstructionInfo
	{	};

	/**
	 * ScriptStruct Reviving.RevivedActionStateParams
	 * Size -> 0x0010
	 */
	struct FRevivedActionStateParams
	{
	public:
		float                                                      HealthRegained;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReviveDuration;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         ReviveGaspAudio;                                         // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Reviving.ReviveableActionStateStarted
	 * Size -> 0x0001
	 */
	struct FReviveableActionStateStarted
	{
	public:
		unsigned char                                              UnknownData_2GDR[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.EventCharacterDiedDuringReviving
	 * Size -> 0x0008
	 */
	struct FEventCharacterDiedDuringReviving
	{
	public:
		class ACharacter*                                          OwningCharacter;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Reviving.EventRevivePlayerActionStateLeft
	 * Size -> 0x0001
	 */
	struct FEventRevivePlayerActionStateLeft
	{
	public:
		unsigned char                                              UnknownData_9URQ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.EventRevivePlayerActionStateEntered
	 * Size -> 0x0001
	 */
	struct FEventRevivePlayerActionStateEntered
	{
	public:
		unsigned char                                              UnknownData_9OPO[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.EventCharacterFullyRevived
	 * Size -> 0x0001
	 */
	struct FEventCharacterFullyRevived
	{
	public:
		unsigned char                                              UnknownData_VX97[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.ReviveEndedEarlyEvent
	 * Size -> 0x0001
	 */
	struct FReviveEndedEarlyEvent
	{
	public:
		unsigned char                                              UnknownData_DP9W[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.EventRevivableRepresentationReturnedToBody
	 * Size -> 0x0001
	 */
	struct FEventRevivableRepresentationReturnedToBody
	{
	public:
		unsigned char                                              UnknownData_WT6Z[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.SuccessfulReviveEvent
	 * Size -> 0x0001
	 */
	struct FSuccessfulReviveEvent
	{
	public:
		unsigned char                                              UnknownData_U69O[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.BeingRevivedStoppedEvent
	 * Size -> 0x0001
	 */
	struct FBeingRevivedStoppedEvent
	{
	public:
		unsigned char                                              UnknownData_4O13[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.BeingRevivedStartedEvent
	 * Size -> 0x0001
	 */
	struct FBeingRevivedStartedEvent
	{
	public:
		unsigned char                                              UnknownData_CX5O[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.RevivableCharacterGhostlyBodyEvaporateStarted
	 * Size -> 0x0001
	 */
	struct FRevivableCharacterGhostlyBodyEvaporateStarted
	{
	public:
		unsigned char                                              UnknownData_DJBG[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.RevivingWindowEnd
	 * Size -> 0x0001
	 */
	struct FRevivingWindowEnd
	{
	public:
		unsigned char                                              UnknownData_GTAU[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Reviving.RevivingWindowStart
	 * Size -> 0x0040
	 */
	struct FRevivingWindowStart
	{
	public:
		struct FDamageInstance                                     DamageInstance;                                          // 0x0000(0x0030)
		ECharacterDeathType                                        CharacterDeathType;                                      // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KKM5[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACharacter*                                          RevivableCharacter;                                      // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct Reviving.RevivePlayerActionStateConstructionInfo
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	struct FRevivePlayerActionStateConstructionInfo : public FActorActionStateConstructionInfo
	{
	public:
		struct FNetActorPtr                                        CharacterReviving;                                       // 0x0030(0x0014)
		struct FNetSubObjectPtr                                    CharacterBeingRevived;                                   // 0x0044(0x0014)
		class UClass*                                              InputID;                                                 // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
