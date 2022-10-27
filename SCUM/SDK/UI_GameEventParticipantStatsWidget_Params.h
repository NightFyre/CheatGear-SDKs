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
	 * Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateTeamColor
	 */
	struct UUI_GameEventParticipantStatsWidget_C_UpdateTeamColor_Params
	{
	public:
		int32_t                                                    TeamIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QQFK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateNumber
	 */
	struct UUI_GameEventParticipantStatsWidget_C_UpdateNumber_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.IsOwning
	 */
	struct UUI_GameEventParticipantStatsWidget_C_IsOwning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetSelectedOverlayVisiblity
	 */
	struct UUI_GameEventParticipantStatsWidget_C_GetSelectedOverlayVisiblity_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.GetInactiveOverlayVisibility
	 */
	struct UUI_GameEventParticipantStatsWidget_C_GetInactiveOverlayVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseEnter
	 */
	struct UUI_GameEventParticipantStatsWidget_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.OnMouseLeave
	 */
	struct UUI_GameEventParticipantStatsWidget_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateColours
	 */
	struct UUI_GameEventParticipantStatsWidget_C_UpdateColours_Params
	{	};

	/**
	 * Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.SetColours
	 */
	struct UUI_GameEventParticipantStatsWidget_C_SetColours_Params
	{
	public:
		struct FGameEventTeamColours                               colours;                                                 // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.UpdateStats
	 */
	struct UUI_GameEventParticipantStatsWidget_C_UpdateStats_Params
	{	};

	/**
	 * Function UI_GameEventParticipantStatsWidget.UI_GameEventParticipantStatsWidget_C.ExecuteUbergraph_UI_GameEventParticipantStatsWidget
	 */
	struct UUI_GameEventParticipantStatsWidget_C_ExecuteUbergraph_UI_GameEventParticipantStatsWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
