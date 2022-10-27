#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.Get_Background_BrushColor
	 */
	struct UUI_GameEventLeaderboardRow_C_Get_Background_BrushColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetRank
	 */
	struct UUI_GameEventLeaderboardRow_C_SetRank_Params
	{
	public:
		int32_t                                                    Rank;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_73P0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GameEventLeaderboardRow.UI_GameEventLeaderboardRow_C.SetStats
	 */
	struct UUI_GameEventLeaderboardRow_C_SetStats_Params
	{
	public:
		class FString                                              characterName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FEventsRankingStats                                 CharacterStats;                                          // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
