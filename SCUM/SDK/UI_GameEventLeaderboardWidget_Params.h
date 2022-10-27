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
	 * Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.SetTopShownCount
	 */
	struct UUI_GameEventLeaderboardWidget_C_SetTopShownCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.AssignRowColor
	 */
	struct UUI_GameEventLeaderboardWidget_C_AssignRowColor_Params
	{
	public:
		class UUI_GameEventLeaderboardRow_C*                       row;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Rank;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopList
	 */
	struct UUI_GameEventLeaderboardWidget_C_UpdateTopList_Params
	{	};

	/**
	 * Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.RefreshData
	 */
	struct UUI_GameEventLeaderboardWidget_C_RefreshData_Params
	{
	public:
		EEventsRankingStatsOrderByField                            orderByField;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESortOrder                                                 sortOrder;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateRankingList
	 */
	struct UUI_GameEventLeaderboardWidget_C_UpdateRankingList_Params
	{
	public:
		int32_t                                                    Rank;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateList
	 */
	struct UUI_GameEventLeaderboardWidget_C_UpdateList_Params
	{
	public:
		TArray<struct FEventsRankingStatsItem>                     EventsRankingStatsItems;                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UVerticalBox*                                        TargetWidget;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Construct
	 */
	struct UUI_GameEventLeaderboardWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.Destruct
	 */
	struct UUI_GameEventLeaderboardWidget_C_Destruct_Params
	{	};

	/**
	 * Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdateTopPlayers
	 */
	struct UUI_GameEventLeaderboardWidget_C_UpdateTopPlayers_Params
	{	};

	/**
	 * Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.UpdatePlayerRanking
	 */
	struct UUI_GameEventLeaderboardWidget_C_UpdatePlayerRanking_Params
	{	};

	/**
	 * Function UI_GameEventLeaderboardWidget.UI_GameEventLeaderboardWidget_C.ExecuteUbergraph_UI_GameEventLeaderboardWidget
	 */
	struct UUI_GameEventLeaderboardWidget_C_ExecuteUbergraph_UI_GameEventLeaderboardWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S8M7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
