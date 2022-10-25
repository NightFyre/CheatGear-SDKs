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
	 * Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.GetTogglePromptVisibility
	 */
	struct UUI_GameEventScoreboardWidget_C_GetTogglePromptVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ArrangeTeams
	 */
	struct UUI_GameEventScoreboardWidget_C_ArrangeTeams_Params
	{	};

	/**
	 * Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateWinCounters
	 */
	struct UUI_GameEventScoreboardWidget_C_UpdateWinCounters_Params
	{
	public:
		class UUI_GameEventTeamInfoWidget_C*                       TeamInfoWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TeamIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateTeamScore
	 */
	struct UUI_GameEventScoreboardWidget_C_UpdateTeamScore_Params
	{
	public:
		class UUI_GameEventTeamInfoWidget_C*                       TeamInfoWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TeamIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitTeamInfoWidgets
	 */
	struct UUI_GameEventScoreboardWidget_C_InitTeamInfoWidgets_Params
	{	};

	/**
	 * Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.UpdateInfoCard
	 */
	struct UUI_GameEventScoreboardWidget_C_UpdateInfoCard_Params
	{	};

	/**
	 * Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnMouseMove
	 */
	struct UUI_GameEventScoreboardWidget_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.Construct
	 */
	struct UUI_GameEventScoreboardWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.OnUpdate
	 */
	struct UUI_GameEventScoreboardWidget_C_OnUpdate_Params
	{	};

	/**
	 * Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.InitializeScoreboard
	 */
	struct UUI_GameEventScoreboardWidget_C_InitializeScoreboard_Params
	{	};

	/**
	 * Function UI_GameEventScoreboardWidget.UI_GameEventScoreboardWidget_C.ExecuteUbergraph_UI_GameEventScoreboardWidget
	 */
	struct UUI_GameEventScoreboardWidget_C_ExecuteUbergraph_UI_GameEventScoreboardWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
