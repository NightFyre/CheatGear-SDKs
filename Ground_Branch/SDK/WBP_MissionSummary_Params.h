#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.SetButtonTint
	 */
	struct UWBP_MissionSummary_C_SetButtonTint_Params
	{
	public:
		class UButton*                                             NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateColor                                         NewTint;                                                 // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.GetNextTabIndex
	 */
	struct UWBP_MissionSummary_C_GetNextTabIndex_Params
	{
	public:
		int32_t                                                    NextTabIndex;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.GetVisibility_3
	 */
	struct UWBP_MissionSummary_C_GetVisibility_3_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.GetVisibility_2
	 */
	struct UWBP_MissionSummary_C_GetVisibility_2_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.GetVisibility_1
	 */
	struct UWBP_MissionSummary_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.Get_SettingsChangeTab_Visibility_1
	 */
	struct UWBP_MissionSummary_C_Get_SettingsChangeTab_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.GetUseTabs
	 */
	struct UWBP_MissionSummary_C_GetUseTabs_Params
	{
	public:
		bool                                                       bUseTabs;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MOHG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.HighlightCurrentTabButton
	 */
	struct UWBP_MissionSummary_C_HighlightCurrentTabButton_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.OnMouseButtonUp
	 */
	struct UWBP_MissionSummary_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.OnMouseButtonDown
	 */
	struct UWBP_MissionSummary_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.OnKeyUp
	 */
	struct UWBP_MissionSummary_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.OnKeyDown
	 */
	struct UWBP_MissionSummary_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.SetMissionTime
	 */
	struct UWBP_MissionSummary_C_SetMissionTime_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KY8T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MissionSummary_C_BndEvt__Button_Respawn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.Construct
	 */
	struct UWBP_MissionSummary_C_Construct_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.BindGameStats
	 */
	struct UWBP_MissionSummary_C_BindGameStats_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.OnGameStatsUpdated_Event_1
	 */
	struct UWBP_MissionSummary_C_OnGameStatsUpdated_Event_1_Params
	{
	public:
		class AGBGameState*                                        GameState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.ProcessResult
	 */
	struct UWBP_MissionSummary_C_ProcessResult_Params
	{
	public:
		class FString                                              ResultValue;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.OnPlayerReadyRoomStatusChanged_Event_1
	 */
	struct UWBP_MissionSummary_C_OnPlayerReadyRoomStatusChanged_Event_1_Params
	{
	public:
		class AGBPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.BeginFadingIn
	 */
	struct UWBP_MissionSummary_C_BeginFadingIn_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.BeginFadeOut
	 */
	struct UWBP_MissionSummary_C_BeginFadeOut_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.BindToPlayerState
	 */
	struct UWBP_MissionSummary_C_BindToPlayerState_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToWeaponStats_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToWeaponStats_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToMatchSummary_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToMatchSummary_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToTeamScores_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToTeamScores_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToPlayerScores_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToPlayerScores_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.ResetTabAdvanceTimer
	 */
	struct UWBP_MissionSummary_C_ResetTabAdvanceTimer_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToWeaponStats_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToWeaponStats_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToMatchSummary_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToMatchSummary_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToTeamScores_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToTeamScores_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.BndEvt__WBP_MissionSummary_Button_SwitchToPlayerScores_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_MissionSummary_C_BndEvt__WBP_MissionSummary_Button_SwitchToPlayerScores_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.UserWantsToCloseAAR
	 */
	struct UWBP_MissionSummary_C_UserWantsToCloseAAR_Params
	{	};

	/**
	 * Function WBP_MissionSummary.WBP_MissionSummary_C.ExecuteUbergraph_WBP_MissionSummary
	 */
	struct UWBP_MissionSummary_C_ExecuteUbergraph_WBP_MissionSummary_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
