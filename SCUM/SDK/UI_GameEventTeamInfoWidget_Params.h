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
	 * Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidgetCount
	 */
	struct UUI_GameEventTeamInfoWidget_C_GetStatWidgetCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.GetStatWidget
	 */
	struct UUI_GameEventTeamInfoWidget_C_GetStatWidget_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KAYI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGameEventParticipantStatsWidget*                    Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.SetTeamScore
	 */
	struct UUI_GameEventTeamInfoWidget_C_SetTeamScore_Params
	{
	public:
		float                                                      Score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ClearWinCounters
	 */
	struct UUI_GameEventTeamInfoWidget_C_ClearWinCounters_Params
	{	};

	/**
	 * Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddWinCounter
	 */
	struct UUI_GameEventTeamInfoWidget_C_AddWinCounter_Params
	{	};

	/**
	 * Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.RemoveStatWidget
	 */
	struct UUI_GameEventTeamInfoWidget_C_RemoveStatWidget_Params
	{
	public:
		class UGameEventParticipantStatsWidget*                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddStatWidget
	 */
	struct UUI_GameEventTeamInfoWidget_C_AddStatWidget_Params
	{
	public:
		class UGameEventParticipantStatsWidget*                    Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.AddHeader
	 */
	struct UUI_GameEventTeamInfoWidget_C_AddHeader_Params
	{
	public:
		class UUI_GameEventTeamHeaderWidget_C*                     Header;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.Construct
	 */
	struct UUI_GameEventTeamInfoWidget_C_Construct_Params
	{	};

	/**
	 * Function UI_GameEventTeamInfoWidget.UI_GameEventTeamInfoWidget_C.ExecuteUbergraph_UI_GameEventTeamInfoWidget
	 */
	struct UUI_GameEventTeamInfoWidget_C_ExecuteUbergraph_UI_GameEventTeamInfoWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MYYI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
