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
	 * Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateWinCounters
	 */
	struct UUI_GameEventMiniScoreboardWidget_C_UpdateWinCounters_Params
	{	};

	/**
	 * Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.UpdateTeamScores
	 */
	struct UUI_GameEventMiniScoreboardWidget_C_UpdateTeamScores_Params
	{	};

	/**
	 * Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitInfo
	 */
	struct UUI_GameEventMiniScoreboardWidget_C_InitInfo_Params
	{	};

	/**
	 * Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.EmptyMessage
	 */
	struct UUI_GameEventMiniScoreboardWidget_C_EmptyMessage_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P84Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.OnUpdate
	 */
	struct UUI_GameEventMiniScoreboardWidget_C_OnUpdate_Params
	{	};

	/**
	 * Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.InitializeScoreboard
	 */
	struct UUI_GameEventMiniScoreboardWidget_C_InitializeScoreboard_Params
	{	};

	/**
	 * Function UI_GameEventMiniScoreboardWidget.UI_GameEventMiniScoreboardWidget_C.ExecuteUbergraph_UI_GameEventMiniScoreboardWidget
	 */
	struct UUI_GameEventMiniScoreboardWidget_C_ExecuteUbergraph_UI_GameEventMiniScoreboardWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
