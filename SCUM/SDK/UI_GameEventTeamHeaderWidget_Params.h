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
	 * Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamIndex
	 */
	struct UUI_GameEventTeamHeaderWidget_C_SetTeamIndex_Params
	{
	public:
		int32_t                                                    TeamIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamScore
	 */
	struct UUI_GameEventTeamHeaderWidget_C_SetTeamScore_Params
	{
	public:
		float                                                      Score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetRightSide
	 */
	struct UUI_GameEventTeamHeaderWidget_C_SetRightSide_Params
	{	};

	/**
	 * Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetLeftSide
	 */
	struct UUI_GameEventTeamHeaderWidget_C_SetLeftSide_Params
	{	};

	/**
	 * Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamColours
	 */
	struct UUI_GameEventTeamHeaderWidget_C_SetTeamColours_Params
	{
	public:
		struct FGameEventTeamColours                               colours;                                                 // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_GameEventTeamHeaderWidget.UI_GameEventTeamHeaderWidget_C.SetTeamName
	 */
	struct UUI_GameEventTeamHeaderWidget_C_SetTeamName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
