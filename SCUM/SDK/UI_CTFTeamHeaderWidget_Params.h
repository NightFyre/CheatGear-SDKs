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
	 * Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.GetPlayerText
	 */
	struct UUI_CTFTeamHeaderWidget_C_GetPlayerText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamName
	 */
	struct UUI_CTFTeamHeaderWidget_C_SetTeamName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetLeftSide
	 */
	struct UUI_CTFTeamHeaderWidget_C_SetLeftSide_Params
	{	};

	/**
	 * Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetRightSide
	 */
	struct UUI_CTFTeamHeaderWidget_C_SetRightSide_Params
	{	};

	/**
	 * Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetGameEvent
	 */
	struct UUI_CTFTeamHeaderWidget_C_SetGameEvent_Params
	{
	public:
		class AGameEventBase*                                      gameEvent;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ClearWinCounters
	 */
	struct UUI_CTFTeamHeaderWidget_C_ClearWinCounters_Params
	{	};

	/**
	 * Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.AddWinCounter
	 */
	struct UUI_CTFTeamHeaderWidget_C_AddWinCounter_Params
	{	};

	/**
	 * Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamScore
	 */
	struct UUI_CTFTeamHeaderWidget_C_SetTeamScore_Params
	{
	public:
		float                                                      Score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.SetTeamColours
	 */
	struct UUI_CTFTeamHeaderWidget_C_SetTeamColours_Params
	{
	public:
		struct FGameEventTeamColours                               colours;                                                 // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_CTFTeamHeaderWidget.UI_CTFTeamHeaderWidget_C.ExecuteUbergraph_UI_CTFTeamHeaderWidget
	 */
	struct UUI_CTFTeamHeaderWidget_C_ExecuteUbergraph_UI_CTFTeamHeaderWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
