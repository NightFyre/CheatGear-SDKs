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
	 * Enum FactionsFramework.EEnemyFactionShipRangeState
	 */
	enum class EEnemyFactionShipRangeState : uint8_t
	{
		OutOfRange         = 0,
		InRangeForEmergent = 1,
		InRangeForInvasion = 2,
		MAX                = 3
	};

	/**
	 * Enum FactionsFramework.EFactionLeftReason
	 */
	enum class EFactionLeftReason : uint8_t
	{
		Defeated      = 0,
		Voted         = 1,
		CrewDestroyed = 2,
		MAX           = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct FactionsFramework.CompanyFactionAlignment
	 * Size -> 0x0010
	 */
	struct FCompanyFactionAlignment
	{
	public:
		class UClass*                                              Company;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UClass*                                              Faction;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct FactionsFramework.FactionServicePopUpData
	 * Size -> 0x0010
	 */
	struct FFactionServicePopUpData
	{
	public:
		class UClass*                                              Faction;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UDataAsset*                                          PopUpMessageDesc;                                        // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct FactionsFramework.FactionStreakLevelData
	 * Size -> 0x0008
	 */
	struct FFactionStreakLevelData
	{
	public:
		int32_t                                                    StreakLevel;                                             // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StreakCountThreshold;                                    // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct FactionsFramework.SandsOfFateData
	 * Size -> 0x000C
	 */
	struct FSandsOfFateData
	{
	public:
		int32_t                                                    SinkingCrewStreak;                                       // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SunkCrewStreak;                                          // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SandsOfFateReward;                                       // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct FactionsFramework.CrewFactionEntry
	 * Size -> 0x0020
	 */
	struct FCrewFactionEntry
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              Faction;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EEnemyFactionShipRangeState                                EnemyFactionShipRangeState;                              // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CN48[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactionsFramework.CrewFactionEntryData
	 * Size -> 0x0048
	 */
	struct FCrewFactionEntryData
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               SessionId;                                               // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              Faction;                                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    Streak;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SandsOfFate;                                             // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CooldownTimeStamp;                                       // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInInvasion;                                            // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AY6I[0x13];                                  // 0x0035(0x0013) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactionsFramework.CrewFactionTelemetryData
	 * Size -> 0x0030
	 */
	struct FCrewFactionTelemetryData
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                Faction;                                                 // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Streak;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SandsOfFate;                                             // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FGuid>                                       CrewsAlreadySunk;                                        // 0x0020(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct FactionsFramework.FactionShipDefeatedEvent
	 * Size -> 0x0020
	 */
	struct FFactionShipDefeatedEvent
	{
	public:
		TArray<struct FGuid>                                       VictoriousCrewIds;                                       // 0x0000(0x0010) ZeroConstructor
		struct FGuid                                               DefeatedCrewId;                                          // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct FactionsFramework.CrewStreakLevelIncreased
	 * Size -> 0x0014
	 */
	struct FCrewStreakLevelIncreased
	{
	public:
		struct FGuid                                               CrewId;                                                  // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    StreakLevel;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct FactionsFramework.CrewsSunkShipEvent
	 * Size -> 0x0020
	 */
	struct FCrewsSunkShipEvent
	{
	public:
		TArray<struct FGuid>                                       AttackingCrewIds;                                        // 0x0000(0x0010) ZeroConstructor
		struct FGuid                                               SunkShipCrewId;                                          // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct FactionsFramework.CrewLeftFaction
	 * Size -> 0x0020
	 */
	struct FCrewLeftFaction
	{
	public:
		struct FGuid                                               LeavingCrewId;                                           // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              FactionLeft;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EFactionLeftReason                                         FactionLeftReason;                                       // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LJ3U[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactionsFramework.CrewLeavingFaction
	 * Size -> 0x0020
	 */
	struct FCrewLeavingFaction
	{
	public:
		struct FGuid                                               LeavingCrewId;                                           // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              FactionToLeave;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EFactionLeftReason                                         FactionLeftReason;                                       // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_85FW[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactionsFramework.CrewJoinedFactionSuccess
	 * Size -> 0x0010
	 */
	struct FCrewJoinedFactionSuccess
	{
	public:
		struct FGuid                                               JoiningCrewId;                                           // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct FactionsFramework.CrewJoinedFaction
	 * Size -> 0x0018
	 */
	struct FCrewJoinedFaction
	{
	public:
		struct FGuid                                               JoiningCrewId;                                           // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		class UClass*                                              FactionJoined;                                           // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct FactionsFramework.FactionLeftTelemetryEvent
	 * Size -> 0x001C
	 */
	struct FFactionLeftTelemetryEvent
	{
	public:
		struct FGuid                                               FactionSessionId;                                        // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                AlignedFactionName;                                      // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFactionLeftReason                                         LeftReason;                                              // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7XMA[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct FactionsFramework.FactionJoinedTelemetryEvent
	 * Size -> 0x0018
	 */
	struct FFactionJoinedTelemetryEvent
	{
	public:
		struct FGuid                                               FactionSessionId;                                        // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		class FName                                                AlignedFactionName;                                      // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
