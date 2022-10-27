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
	 * Enum SeasonProgressionFramework.ETrackedObjectiveType
	 */
	enum class ETrackedObjectiveType : uint8_t
	{
		ProgressUpdate = 0,
		Completion     = 1,
		MAX            = 2
	};

	/**
	 * Enum SeasonProgressionFramework.ESeasonGoalType
	 */
	enum class ESeasonGoalType : uint8_t
	{
		Goal       = 0,
		Challenge  = 1,
		Individual = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SeasonProgressionFramework.PlayerTrackedObjective
	 * Size -> 0x0010
	 */
	struct FPlayerTrackedObjective
	{
	public:
		struct FGuid                                               ObjectiveId;                                             // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct SeasonProgressionFramework.SeasonReward
	 * Size -> 0x0020
	 */
	struct FSeasonReward
	{
	public:
		struct FGuid                                               Id;                                                      // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		int64_t                                                    Tier;                                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int64_t                                                    Level;                                                   // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct SeasonProgressionFramework.SeasonServiceDataUpdatedEvent
	 * Size -> 0x0001
	 */
	struct FSeasonServiceDataUpdatedEvent
	{
	public:
		unsigned char                                              UnknownData_A1WY[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SeasonProgressionFramework.SeasonRewardEarnedEvent
	 * Size -> 0x0028
	 */
	struct FSeasonRewardEarnedEvent
	{
	public:
		struct FGuid                                               SeasonId;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       MultipleRewards;                                         // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JN6L[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSeasonReward>                               Rewards;                                                 // 0x0018(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct SeasonProgressionFramework.LevelCompletionEvent
	 * Size -> 0x0024
	 */
	struct FLevelCompletionEvent
	{
	public:
		struct FGuid                                               SeasonId;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    Level;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TimeSpentInLevel;                                        // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Tier;                                                    // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TimeSpentInTier;                                         // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TierCompleted;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SeasonCompleted;                                         // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V429[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SeasonProgressionFramework.LevelProgressionEvent
	 * Size -> 0x0030
	 */
	struct FLevelProgressionEvent
	{
	public:
		struct FGuid                                               SeasonId;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               SourceGoalId;                                            // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    XpChange;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentXP;                                               // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentTier;                                             // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentLevel;                                            // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct SeasonProgressionFramework.SeasonGoalCompletionEvent
	 * Size -> 0x0034
	 */
	struct FSeasonGoalCompletionEvent
	{
	public:
		struct FGuid                                               SeasonId;                                                // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               GoalId;                                                  // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		ESeasonGoalType                                            GoalType;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0BNV[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               GoalGroupId;                                             // 0x0024(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct SeasonProgressionFramework.SeasonGoalProgressionEvent
	 * Size -> 0x0040
	 */
	struct FSeasonGoalProgressionEvent
	{
	public:
		int32_t                                                    PreviousProgress;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentProgress;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CompletionThreshold;                                     // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGuid                                               SeasonId;                                                // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FGuid                                               GoalId;                                                  // 0x001C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		ESeasonGoalType                                            GoalType;                                                // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BKXR[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               GoalGroupId;                                             // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
	};

	/**
	 * ScriptStruct SeasonProgressionFramework.TrackedObjectiveCompletionMessage
	 * Size -> 0x00E0
	 */
	struct FTrackedObjectiveCompletionMessage
	{
	public:
		struct FGuid                                               ObjectiveId;                                             // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FPirateIdentity                                     PirateIdentity;                                          // 0x0010(0x0078)
		struct FPlayerBaseTelemetryFragment                        PlayerInfo;                                              // 0x0088(0x0048)
		EPlayMode                                                  PlayMode;                                                // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPlayModeVariant                                           PlayModeVariant;                                         // 0x00D1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2S7N[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CreatedAt;                                               // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct SeasonProgressionFramework.TrackedObjectiveProgressUpdateMessage
	 * Size -> 0x00E0
	 */
	struct FTrackedObjectiveProgressUpdateMessage
	{
	public:
		struct FGuid                                               ObjectiveId;                                             // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor
		struct FPirateIdentity                                     PirateIdentity;                                          // 0x0010(0x0078)
		struct FPlayerBaseTelemetryFragment                        PlayerInfo;                                              // 0x0088(0x0048)
		EPlayMode                                                  PlayMode;                                                // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPlayModeVariant                                           PlayModeVariant;                                         // 0x00D1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LLKD[0x2];                                   // 0x00D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x00D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CreatedAt;                                               // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct SeasonProgressionFramework.TrackedObjectiveEvent
	 * Size -> 0x0018
	 */
	struct FTrackedObjectiveEvent
	{
	public:
		unsigned char                                              UnknownData_MOT1[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
