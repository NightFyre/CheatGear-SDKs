#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameStatsServer.GameStatsRoundRewards
	 * Size -> 0x0050
	 */
	struct FGameStatsRoundRewards
	{
	public:
		unsigned char                                              UnknownData_M40Q[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameStatsServer.GameStatsLevelUpReward
	 * Size -> 0x0018
	 */
	struct FGameStatsLevelUpReward
	{
	public:
		int32_t                                                    Currency;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2SU7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ItemIds;                                                 // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameStatsServer.GameStatsXPComponent
	 * Size -> 0x0018
	 */
	struct FGameStatsXPComponent
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Experience;                                              // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HB0P[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameStatsServer.GameStatsRoundReward
	 * Size -> 0x0020
	 */
	struct FGameStatsRoundReward
	{
	public:
		int32_t                                                    ExperienceGained;                                        // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QL6U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    ExperienceTotal;                                         // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameStatsXPComponent>                       ExperienceComponents;                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameStatsServer.GameStatsRound
	 * Size -> 0x0140
	 */
	struct FGameStatsRound
	{
	public:
		unsigned char                                              UnknownData_BUFL[0x140];                                 // 0x0000(0x0140) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
